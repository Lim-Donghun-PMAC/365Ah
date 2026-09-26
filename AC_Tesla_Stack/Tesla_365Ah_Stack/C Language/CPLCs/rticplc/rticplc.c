/*For more information see notes.txt in the Documentation folder */
#include <gplib.h>
#include <stdio.h>
#include <dlfcn.h>
#include <string.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>
#include <time.h>
#include <errno.h>

#include "rtiheader1.h"

#define _PPScriptMode_		// for enum mode, replace this with #define _EnumMode_	

#include "../../Include/pp_proj.h"

#define FileLoad	"/var/ftp/usrflash/Project/Documentation/LogFile.txt"		// Flash Memory 메모장 주소
#define FileLoad_USB  "/media/disk-0/cur_Log.txt"								// USB 주소설정


void Log_Save( char ** ptr_data , char * ptr_time , int count );				// Log Save 함수
void Log_init(char **ptr_data, char **ptr_ID, int count);						// Log Init 함수
void Log_Doc_Remove(void);														// Log Remove 함수
void Log_USB_Register(void);													// USB 등록 함수 

int func_USBChk();																// USB 장착 상태 확인 함수

// [ 참조 : 2025.09.12 Log 추가 ]
void realtimeinterrupt_plcc()
{
	pshm->P[51]++;										// Rti CPLC Run 확인 변수
	static int Frist_Flag = 0;							// CPLC 구조 상 계속 읽히기 때문에 초기설정용 변수
	static char* Log_ptr_data_arr[Log_Index_EA];		// 문자열 Data 포인터 배열 선언 
	// Linux 시간정의 신규 추가
	struct timeval specific_time;						// timeval 구조체 선언			
    struct tm *now;										// tm 구조체 선언	
	char ms_str[10];									// localtime 함수에서 ms 단위는 없으므로, ms 단위를 저장하기 위한 캐릭터형 배열 선언 -> CPLC 동적할당 x
	char time_str[50];									// localtime 함수에서 얻어오는 시간 저장 캐릭터형 배열 -> CPLC 동적할당 x
	char Log_str[MemSize];								// 최종 로그 저장 캐릭터형 배열 선언 -> CPLC 동적할당 x	
	// 교체 마다 txt file 분리 기능 추가
	char* old_name = "cur_Log.txt";						// 현재 사용중인 Log prog txt file name
	char  new_name[50];									// 새로운 name 배열 선언
	static char* new_name_ID;							// plc에서 받아오는 Sepa ID 포인터 선언
	char* new_txt = ".txt";								// txt file 맞춰주기 위함 							
	
	if( Frist_Flag == 0 )
	{
		Frist_Flag = 1;
		Log_init(Log_ptr_data_arr, &new_name_ID, Log_Index_EA);
	}

	// time updata
	if( pshm->P[Log_Start_Flag] == 1  )
	{  
		gettimeofday(&specific_time, NULL);					// gettimeofday 함수 ( Linux 함수 시간 Get )
		now = localtime(&specific_time.tv_sec);				// localtime 함수 ( time data를 날짜와 시간으로 변환)
		// tm 구조체 → 문자열 변환 ( 상수값 형변환 따로 할 필요없이 변환 해주는 함수 )
		strftime(time_str, sizeof(time_str), "%Y-%m-%d %H:%M:%S", now);	// 연도-월-일 시간-분-초
		sprintf(ms_str, ":%03ld", specific_time.tv_usec / 1000);		// ms 단위 가공		→ tv_usec type = long
		// 시간 문자열 Get 가공 시작
		strcpy(Log_str, time_str);								// 연도-월-일 시간-분-초 → 최종 로그저장 캐릭터형 배열에 저장
		strcat(Log_str, ms_str);								// ms단위 이어 붙이기

		Log_Save(Log_ptr_data_arr,Log_str,Log_Index_EA);		// 저장 함수 
		pshm->P[Log_Start_Flag] = 0;							// 플래그 초기화
	}
	if( pshm->P[Log_Document_Remove_Flag] == 1 )				// File Remove
	{
		Log_Doc_Remove();
		pshm->P[Log_Document_Remove_Flag] = 0;					// 플래그 초기화
	}

	if( pshm->P[USB_Register] == 1 )									// usb 등록
	{
		pshm->P[USB_Register] = 0;
		Log_USB_Register();
	}
	//=========================================================================

	// Reel Chang 시 txt 파일 변경  // [ 참조 : 2025.09.12 Log 추가 ]
	if( pshm->P[Sepa_ID_Change_Flag] == 1 )
	{
		pshm->P[Sepa_ID_Change_Flag] = 0;
		if (chdir("/media/disk-0/") != 0)				// Linux usb 경로 접속실패
		{
			perror("디렉토리 이동 실패");
		}
		else											// Linux usb 경로 접속성공
		{
			strcpy(new_name,new_name_ID);				// plc에서 sepa ID Get
			strcat(new_name,new_txt);					// Sepa ID.txt 구문 완성
			if(rename(old_name,new_name) == 0)			// txt파일 이름 변경 함수 실행
			{
				Log_USB_Register();						// usb 등록
				printf("변경완료\n");
			}
			else
				perror("변경불가\n" /*%s 코드: %d \n",error_msg, errno*/);
		}
	}
}





// 로그 초기화 함수 
void Log_init(char **ptr_data, char **ptr_ID, int count)
{
    int i = 0;						// 반복문을 위한 i 선언
    int sys_C_index = 200000;		// 초기 인덱스 = 200000 -> Cdata는 1byte  즉 Sys.Cdata[200000] = Sys.Idata[50000] 
    int Index_Num = 0;				// 값 갱신 변수 선언

    *ptr_ID = (char*)pushm + 1000;	// 소재 ID 저장 인덱스 = 1000 -> Cdata는 1byte  즉 Sys.Cdata[1000] = Sys.Idata[250] 
  
    for (i = 0; i < count; i++) 	 
    {
        Index_Num = sys_C_index + ( 50 * i );	// C데이터 주소값 매칭을 위한 변수
        ptr_data[i] = (char*)pushm + Index_Num; // ptr_data[i] 포인터 배열에 Sys.Cdata 주소 매핑
    }
}

// 로그 세이브 함수
void Log_Save( char ** ptr_data , char * ptr_time , int count )
{
	int i = 0;										// 반복문을 위한 i 선언
	int USB_Connect = 0;							// USB 연결 여부 변수 선언
	char temp[Log_letters];							// 현재 시간을 가져오고, 그 데이터를 저장 하는 버퍼
	strcpy( temp,ptr_time);							// 현재 시간을 버퍼에 저장
	// ↓ Linux flash memory 사용하여 저장하는 기능 → 필요하다면 주석 해제  
	//FILE* fp = NULL;								// 파일 포인터 초기값 대입
	FILE* fusb = NULL;								// USB Data 추가

	if(access(FileLoad_USB, F_OK) == 0 )			// USB 파일 경로 존재
	{
		// ↓ Linux flash memory 사용하여 저장하는 기능 → 필요하다면 주석 해제
		//fp = fopen( FileLoad, "a+" );				// 파일 오픈 
		fusb = fopen( FileLoad_USB, "a+" );			// 파일 오픈 
		USB_Connect = 1;							// USB 연결
	}
	// ↓ Linux flash memory 사용하여 저장하는 기능 → 필요하다면 주석 해제  
	//else		
	//{
	//	fp = fopen( FileLoad, "a+" );				// 파일 오픈 
	//	USB_Connect = 0;							// USB 비연결
	//}

	for(  i = 0 ; i < count ; i ++ )				// 반복문 시작
	{
		if( *ptr_data[i] != 0 )						// ptr_data는 포인터배열 즉 PLC script에서 Sys.Cdata에 문자 넣은곳을 가리킴
		{											// ↑ 0 아니라면 즉 데이터가 있다면 ( 문자열 )
			memset(ptr_time,0,Log_letters);			// 타임 버퍼 초기화 -> ptr_time -> Sys.Cdata[time] 가리키고 있음
			memcpy( ptr_time,temp,Log_letters);		// 메모리 복사 -> 위에서 버퍼에 저장한 값을 복사함
			strcat( ptr_time,ptr_data[i]);			// 앞 버퍼 뒷단에 새로운 버퍼 문자열 삽입
			// ↓ Linux flash memory 사용하여 저장하는 기능 → 필요하다면 주석 해제  
			//fprintf( fp, "%s\n",ptr_time);			// 파일 출력 ( txt file )
			if( USB_Connect == 1 )					// USB연결 확인
			{
				fprintf( fusb,"%s\n",ptr_time);		// USB에 데이터 저장
			}
			memset(ptr_data[i],0,Log_letters);		// 출력한 문자열 버퍼는 0으로 초기화
		}	
	}
	// ↓ Linux flash memory 사용하여 저장하는 기능 → 필요하다면 주석 해제  
	//fclose(fp);									// 파일 닫기
	if( USB_Connect == 1 )							// USB연결 되었다면
		fclose(fusb);								// USB 파일 닫기
}

void Log_Doc_Remove(void)
{
	// ↓ Linux flash memory 사용하여 저장하는 기능 → 필요하다면 주석 해제 
	//FILE* fp = NULL;								// 파일 포인터 초기값 대입
	FILE* fusb = NULL;								// 파일 포인터 초기값 대입
	
	if(access(FileLoad_USB, F_OK) == 0 )			// USB 파일 경로 존재
	{
		// ↓ Linux flash memory 사용하여 저장하는 기능 → 필요하다면 주석 해제 
		//fp = fopen( FileLoad, "w" );				// 파일 오픈 "w" 열어서 문서 초기화 -> Memory reset 
		fusb = fopen( FileLoad_USB, "w" );			// 파일 오픈 "w" 열어서 문서 초기화 -> Memory reset 
		//fclose(fp);
		fclose(fusb);
	}
	// ↓ Linux flash memory 사용하여 저장하는 기능 → 필요하다면 주석 해제 
	//else
	//{
	//	fp = fopen( FileLoad, "w" );				// 파일 오픈 "w" 열어서 문서 초기화 -> Memory reset 
	//	fclose(fp);
	//}
}

void Log_USB_Register(void)
{
	FILE* fusb = NULL;								// 파일 포인터 초기값 대입
	fusb = fopen( FileLoad_USB, "w" );				// 파일 오픈 "w" 열어서 문서 초기화 -> Memory reset 
	fclose(fusb);
}