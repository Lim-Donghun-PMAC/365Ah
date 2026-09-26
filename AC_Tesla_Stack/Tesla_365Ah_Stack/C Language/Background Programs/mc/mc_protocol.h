
#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <netinet/in.h>
#include <sys/time.h>
#include <pthread.h>

// putty 에서 디버깅 할 경우 쓰는 디버그 모드
//#define	_CONSOLE_DEBUG_MODE_


#define  NANO_1MSEC  1000000  

#define TRUE               1
#define FALSE              0

// 패킷 크기 결정 500워드로 고정. => Omron사에서 말하길 800워드 이후부터는 문제가 되고 그 이하까지는 가능하다고 함
// 이미 섹터 모드기준으로 프로그램 만들어져있고, 섹터 크기가 500워드로 나눠져있기 때문에 최대크기 500워드로 안전하게 함. 
#define	MAX_READ_PACKET_SIZE		800
#define	MAX_WRITE_PACKET_SIZE		800


// Chunk모드 WORD에 대한 WIDTH 디파인 부
#define	CHUNK_MODE_WORD_WIDTH		4000
// Thread 루프 1바퀴 돌고 Sleep 시간 
#define	THREAD_SLEEP_MSEC		5	
// Thread 루프 내 Sector 1개 간 Sleep 및 Read Write 사이에 sleep 				
#define	READ_WRITE_SLEEP_MSEC	2					
// PMAC User Memory Start Index 설정 부
#define	CHUNK_MODE_PMAC_UDATA_INDEX_READ_AREA		40000
#define	CHUNK_MODE_PMAC_UDATA_INDEX_WRITE_AREA		45000
// Send, Recv 패킷 전송 시 타임아웃 시간.
#define	SOCKET_TIMEOUT_MSEC				200

// 읽어들일때 방법 Auto 자동 Trigger 트리거 시
// => Auto 제어 시 1이면 항시 읽음. Trigger 제어 시 1번읽으면 무조건 Trigger 초기화.

#define	READ_COMPLETE_START_ADDR			9000
#define	WRITE_COMPLETE_START_ADDR			9010

// Chunk Auto 제어 시 

#define	READ_CMD_START_ADDR				9020
#define	WRITE_CMD_START_ADDR			9030

#define	READ_SCAN_START_ADDR			9040
#define	WRITE_SCAN_START_ADDR			9050


// Chunk Trigger 제어 시
//#define	CHUNK_MODE_TRIGGER_READ			9012
//#define	CHUNK_MODE_TRIGGER_WRITE		9013

// Read, Write 1번 할때마다 COUNT
#define	CHUNK_MODE_READ_COUNT			9014
#define	CHUNK_MODE_WRITE_COUNT			9015

// 8개 Read영역 전부 스캔 한 후 시간 (ms)
#define	CHUNK_MODE_READ_TIME			9020
// 8개 Write영역 전부 스캔 한 후 시간 (ms)
#define	CHUNK_MODE_WRITE_TIME			9021
// 모든 루프 다 스캔 한 후 시간 (ms)
#define	CHUNK_MODE_DATA_SCAN_TIME		9022

#define	PROG_RUN_HEARTBIT				9998
#define KILL_CHUNK_LOOP					9999

// Main Thread 종료를 알리는 Flag
#define	THREAD_RUNNING			0
#define	THREAD_EXIT_RETURN		-1

// Program Running 시 하트 비트

// Melsec 변수 접근 HEX 설정값

#define	MC_PROTOCOL_DATA_D_AREA		0xA8	//데이터 레지스터    : (워드) D＊   
#define	MC_PROTOCOL_DATA_W_AREA		0xB4	//링크 레지스터		: (비트) W＊   
#define	MC_PROTOCOL_DATA_X_AREA		0x9C	//입력 릴레이		: (비트) X＊   
#define	MC_PROTOCOL_DATA_Y_AREA		0x9D	//출력 릴레이		: (비트) Y＊   
#define	MC_PROTOCOL_DATA_M_AREA		0x90	//내부 릴레이		: (비트) M＊   
#define	MC_PROTOCOL_DATA_L_AREA		0x92	//래치 릴레이		: (비트) L＊   
#define	MC_PROTOCOL_DATA_F_AREA		0x93	//어넌시에이터		: (비트) F＊   
#define	MC_PROTOCOL_DATA_V_AREA		0x94	//에지 릴레이		: (비트) V＊   
#define	MC_PROTOCOL_DATA_B_AREA		0xA0	//링크 릴레이		: (비트) B＊   

#define	BUFFER_SIZE					2048

// HEXA 마스킹하기 위한 디파인
#define	HEX_BYTE_MASKING			0x000000FF


/////////////////////////////////////////////	FRAME 관련 변수	///////////////////////////////////////////////////////////
//////// SubHeader, Access Route 는 READ, WRITE 무관하게 공통입니다 ////////
#define	SUBHEADER_LO					0x50
#define	SUBHEADER_HI					0x00

#define	NETWORK_NO						0x00

#define	PC_NO							0xFF

#define	REQ_DEST_IO_NO_LO				0xFF
#define	REQ_DEST_IO_NO_HI				0x03

#define	REQ_DEST_STATION_IO_NO			0x00

#define	MC_FIXED_SIZE					21

// Read, Write에 대한 프레임 설정은 MELSEC 매뉴얼 참고
// READ부분 
#define	READ_REQ_DATA_LENGTH_LO			0x0C
#define	READ_REQ_DATA_LENGTH_HI			0x00

#define	READ_MONITORING_TIMER_LO		0x10
#define	READ_MONITORING_TIMER_HI		0x00

#define	READ_REQ_COMMAND_LO				0x01
#define	READ_REQ_COMMAND_HI				0x04

#define	READ_REQ_SUBCOMMAND_LO			0x00
#define	READ_REQ_SUBCOMMAND_HI			0x00

// WRITE부분 
//#define	WRITE_REQ_DATA_LENGTH_LO		0x10
//#define	WRITE_REQ_DATA_LENGTH_HI		0x00

#define	WRITE_MONITORING_TIMER_LO		0x10
#define	WRITE_MONITORING_TIMER_HI		0x00

#define	WRITE_REQ_COMMAND_LO			0x01
#define	WRITE_REQ_COMMAND_HI			0x14

#define	WRITE_REQ_SUBCOMMAND_LO			0x00
#define	WRITE_REQ_SUBCOMMAND_HI			0x00


/////////////////// Error 관련 코드 /////////////////////

#define	FROM_MPLC_ERROR_CODE			9999
//#define	FROM_PMAC_ERROR_CODE			9002

#define ERROR_INITIAL      0
#define ERROR_SOCKET       1
#define ERROR_BIND         2
#define ERROR_CONNECT      3
#define ERROR_SEND         4
#define ERROR_RECEIVE      5
#define ERROR_SHUTDOWN     6
#define ERROR_CLOSE        7

#define SOCKET_ERROR       -1

#define	READ_TYPE			1
#define	WRITE_TYPE			2


// 구조체 정의 구간



// Config 내 데이터 받아오는 구조체.
typedef struct config_data_struct
{
	char*			ip_address;						// Key : IP
	unsigned int	port_no;							// Key : PORT
	unsigned int	read_start_addr_area[5];				// Key : D_READ_START_ADDR
	unsigned int	read_Udata_addr_area[5];

	unsigned int	write_start_addr_area[5];				// Key : D_WRITE_START_ADDR
	unsigned int	write_Udata_addr_area[5];


}config_t;

typedef struct _ConfigInfo
{
    int length;
    char* string_Arr[30];		// Key 값이 됨.
    char* Value_Arr[30];		// Value 값이 됨.

}ConfigDictionary_t;


// 함수 정의 구간

void init_value_setting(config_t* _config_str, int Pmac_Side);					// 구조체 이니셜 함수
int load_melsec_comm_info(config_t* pCommInfo, int _file_no);		// config파일 구조체에 저장하는 함수
ConfigDictionary_t* CopyConfig(FILE* pFile);						// Dictionary를 반환하는 함수
int Equal_Sign_Parsing(ConfigDictionary_t* Info);					// Equal 기준으로 변수와 값 자르는 함수
char* remove_space(char* line_str);									// string내 Space bar 공간 제거하는 함수.
int is_this_program_running();										// 프로그램이 돌고있는지 체크하는 함수
void Die();															// 프로그램이 죽는 함수
void* thread_dataExchange_chunk_mode(void* pSocket);				// 쓰레드 함수
void error_log(char *msg);											// 에러 로그 남기는 함수
int mc_protocol_write_block(int Socketno, unsigned int plc_write_word_start, unsigned int write_Udata_addr, int word_size);
int mc_protocol_read_block(int Socketno, unsigned int plc_read_word_start, unsigned int read_Udata_addr, int read_word_size);


