#include <gplib.h>
#include <stdio.h>
#include <dlfcn.h>
#include <string.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>
#include <time.h>
#include <errno.h>

#define SaveFileLoad_A	"/var/ftp/usrflash/Project/Documentation/save_A.txt"			// 메모장 주소
#define SaveFileLoad_B	"/var/ftp/usrflash/Project/Documentation/save_B.txt"			// 메모장 주소

// USB 사용한다면 선언
//#define FileLoad_USB_A  "/media/disk-0/USB_save_A.txt"								// USB 주소설정
//#define FileLoad_USB_B  "/media/disk-0/USB_save_B.txt"								// USB 주소설정

#define n_true	1
#define n_flase	0

#define Max_Machine_Num 99		// 장비 호기 최대 갯수
#define N_Str_Byte	100			// 100 byte 문자열 길이 
#define N_new_add_line	28 + 1	// Local 축은 1~28번  각자의 호기 저장 줄 수 + 1
#define N_Ascii_0	48			// 문자의 0은 Ascii 48
#define N_Ascii_9	57			// 문자의 9는 Ascii 57

//#define save_debug			// debug 용 define


int machine_check(double machine_num, int* line_cnt);							//중복확인 함수
int Total_Line_Get_func();														// 문자 줄 수 Get 함수
char** str_malloc(int count);													// 동적 할당 함수 
void Txt_copy_buf(char** buf,int cnt);											// Doc에 저장된 문자 복사 함수
void Insert_Data(int line_num, char** str , int rtn );							// 데이터 삽입 함수
void Write_Txt( int* Line_cnt, char** str, int mode );							// 쓰기 함수 
void pick_machine_num(char** str, int* arr, int count );						// // 문자열로 지정된 호기들을 정수려 변환 → 내림차순 정렬을 위한 비교 사전작업
int memory_free(char** str, int count );										// 동적 메모리 할당 해제 함수
void str_line_swap(char** str, int* old_num, int* cur_num, int total_line );	// // 이전 데이터 <-> 현재 데이터 스왑 함수
void sort_machine(int* arr, int cur_machine_num, char** str, int total_line );	// 내림차순 정렬 함수

extern char* cur_machine;														// A열 혹은 B열 데이터를 담는 전역 포인터 선언

	/*
	int GetResponse
	(
    const char *command,   // 실행할 PMAC 명령어 문자열
    char *response,        // 결과를 받을 버퍼
    int size,              // 버퍼 크기
    int timeout            // 타임아웃(ms 단위)
	);
	*/
