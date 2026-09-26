#include <gplib.h>
#include <stdio.h>
#include <dlfcn.h>
#include <string.h>
#include <stdlib.h>
#include "cappheader1.h"
//----------------------------------------------------------------------------------
// pp_proj.h is the C header for accessing PMAC Global, CSGlobal, Ptr vars
// _PPScriptMode_ for Pmac Script like access global & csglobal
// _EnumMode_ for Pmac enum data type checking on Set & Get global functions
//------------------------------------------------------------------------------------
// #define _PPScriptMode_	// uncomment for Pmac Script type access
// #define _EnumMode_			// uncomment for Pmac enum data type checking on Set & Get global functions		

#include "../../Include/pp_proj.h"

/*
	int GetResponse
	(
    const char *command,   // 실행할 PMAC 명령어 문자열
    char *response,        // 결과를 받을 버퍼
    int size,              // 버퍼 크기
    int timeout            // 타임아웃(ms 단위)
	);
*/											
#define FileLoad_Apc	"/var/ftp/usrflash/Project/Documentation/List_Apc.txt"		// 메모장 주소										
void Inspection(int* data1,char** data2, char* rtn);								// 문자열 검색 및 대입 함수
void Separate(char* data, int* rtn );												// 문자열 상수 분리 함수
void Filtering(char* data, char* Filter, char* rtn );								// 필터링 함수
void Saving(char* data);															// Send 함수 ( 저장 )

void user_plcc()
{
	pshm->P[50]++;															// BgCplc 동작 확인용
	// 초기 변수선언 
	//char* str = (char*)malloc(Memory_Size);								// 캐릭터형 동적메모리 할당 → getresponse 에서 받아오는 포인터
	//char* Add_Str = (char*)malloc(Memory_Size);							// 캐릭터형 동적메모리 할당 → Strcat 용 포인터
	static char str[Memory_Size];											// 캐릭터형 배열 선언	CPLC 에선 동적메모리 x
	static char* Add_Str[10];												// 캐릭터형 포인터 배열 선언 CPLC 에선 동적메모리 x
	static char Assy_str[Memory_Size];										// 캐릭터형 배열 선언 CPLC 에선 동적메모리 x
	static int i = 0;														// for문에 사용될 변수 선언
	static int SubProg_Address_arr[10];										// subprog address 상수 배열
	static int Separate_Start_Flag = 0;										// 분리 플래그 변수
	static int Inspection_Start_Flag = 0;									// 문자열 검사 플래그 변수 
	static int Filter_Start_Flag = 0;										// 필터링 플래그 변수
	static int Save_Start_Flag = 0;											// 저장 시작 플래그 변수
	static int Init_Flag = 0;												// 초기화 플래그 변수
	static char* str2 = ":";												// ":" 필터 선언												

	if( pshm->P[Cur_Line_Check] == N_TRUE )									// 신호가 온다면
	{
		pshm->P[Cur_Line_Check] = N_Init;									// 신호 초기화
		GetResponse("list plc 1,apc,1",str,Memory_Size,ms);					// Getresponse 사용하여 list plc Get
		Separate_Start_Flag = N_TRUE;										// 저장 시작 변수 On
		Inspection_Start_Flag = N_TRUE;										// 문자 → 상수 → 문자 시작
		Filter_Start_Flag = N_TRUE;											// 필터 시작
		Save_Start_Flag = N_TRUE;											// 저장 시작 
		Init_Flag = N_TRUE;													// 초기화 시작
	}
	// 1. 문자열 상수로 분리 
	if( Separate_Start_Flag == N_TRUE )										// 문자열 상수로 분리 == True
	{
		Separate(str,SubProg_Address_arr );									// 분리 함수 실행
		Separate_Start_Flag = N_Init;										// 플래그 초기화
	}
	// 2. 분리된 상수 → 문자열로 변환
	if( Inspection_Start_Flag == N_TRUE )									// 문자열 플래그가 On이라면
	{
		Inspection(SubProg_Address_arr,Add_Str,Assy_str);					// 문자 검사 함수 실행
		Inspection_Start_Flag = N_Init;										// 플래그 초기화
	}
	// 3. list~ apc 필요 구문만 필터링 
	if( Filter_Start_Flag == N_TRUE )										// 필터링 플래그가 on이라면
	{
		Filtering(str,str2,Assy_str);										// 필터링 함수 실행
		Filter_Start_Flag = N_Init;											// 플래그 초기화
	}
	// 4. 문자열 + 필터링 데이터 저장 
	if( Save_Start_Flag == N_TRUE )											// 저장 플래그 on 이라면
	{
		Saving(Assy_str);													// 저장 함수 실행
		Save_Start_Flag = N_Init;											// 플래그 초기화
	}
	// 5. 사용한 문자열 및 상수 배열 초기화 
	if( Init_Flag == N_TRUE || pshm->P[Cur_Line_Check_Init] == N_TRUE )		// 초기화 플래그 on 이라면
	{
		pshm->P[Cur_Line_Check_Init] = N_Init;								// 초기화
		Init_Flag  = N_Init;												// 초기화
		 
		memset(Assy_str,N_Init,Memory_Size);								// string 배열 초기화
		memset(str,N_Init,Memory_Size);										// string 배열 초기화
		for( i = 0; i < Max_Subprog_EA ; i++ )								// 반복문 시작
		{
			SubProg_Address_arr[i] = 0;										// 문자열 → 상수 배열 값 초기화
			Add_Str[i] = NULL;												// 상수 → 문자열 포인터 배열 초기화 
		}
	}
	// 6. Data Reset 
	if( pshm->P[1100] == 1 )												// 메모장 초기화 
	{
		pshm->P[1100] = 0;
		//Start_CPLC4 = 1;
		FILE* fp = NULL;													// 파일 포인터 초기값 대입
		fp = fopen( FileLoad_Apc, "w" );									// 파일 새로 오픈 
		fclose(fp);	
	}
}

// CPLC에서 사용되는 함수 정리 
void Inspection(int* data1, char** data2, char* rtn)
{
	int j = 0;										// 반복문을 위한 변수 선언
	for( j=0; j < Max_Subprog_EA ; j++ )			// 반복문 시작
	{
		if( data1[j] != 0 )
		{
			switch( data1[j] )
			{
				case Abort_Time_Calc:
					data2[j] = "Abort_Time_Calc ";
				break;	
				case AH_Condition:
					data2[j] = "AH_Condition ";
				break;
				case AH_Func:
					data2[j] = "AH_Func ";
				break;
				case Alarm_Heap_Sort:
					data2[j] = "Alarm_Heap_Sort ";
				break;
				case Hold_Data_Validation:
					data2[j] = "Hold_Data_Validation ";
				break;
				case Hold_Process:
					data2[j] = "Hold_Process ";
				break;
				case HoldCmdList:
					data2[j] = "HoldCmdList ";
				break;
				case HoldSequence:
					data2[j] = "HoldSequence ";
				break;	
				default: 
					data2[j] = "Case 저장 필요";
				break;
			}
			if( j == 0 )	
				strcpy(rtn,data2[j]);	
			else
				strcat(rtn,data2[j]);	
		}
		else
			break;
	}
}

void Separate(char* data, int* rtn )
{
	int i = 0;															// 반복문 변수 선언
	int j = 0;															// 상수로 주소 변환 배열 번호 변수 선언
	int Number_data = 0;												// 상수 데이터 변수 선언

	for( i = 0 ; i < Memory_Size ; i++)									// 반복문 시작
	{	// 1. 문자열 숫자를 상수로 변환 → subprog 100001에서 100001만 get 하는 프로그램 시작.
		if( data[i] >= ASCCII_0 && data[i] <= ASCCII_9 )				// 0 , 9 위치하는 아스키 코드 번호 → 문자열에 숫자를 발견한다면
		{
			if( data[i-1] != 'c' )										// plc1>>subprog ~~ 이런식으로 나오는데 plc <1> 이부분은 제외 시키기 위한 조건
				Number_data = Number_data * 10 + ( data[i] - ASCCII_0);	// 아스키 코드값 - 0 아스키 코드값 = 상수 자릿수 증가 시 * 10 
		}
		else if( data[i] == ':' )										// 서브 프로그램 주소 취득 완료
		{
			break;
		}
		else															// 숫자가 아닌 문자라면
		{
			if( Number_data != N_Init )									// 상수 저장변수에 값이 있다면 → subprog 10001 >> subprog 10002 이런식이면, 배열 변수에 10001 10002만 저장하려고.
			{
				rtn[j++] = Number_data;									// subprog address 상수 배열에 데이터 저장
				Number_data = N_Init;									// 데이터 초기화
			}
		}
	}
}

void Filtering(char* data, char* Filter, char* rtn )
{
	char*  str_rtn;
	str_rtn = strstr(data,Filter);										// : 필터 구문
	if( str_rtn != NULL )												// Data != NULL
		strcat(rtn, str_rtn);											// Cdata에 문자 복사	
	else																// Data == NULL
		printf( " don't while  \n");
}

void Saving(char* data)
{
	//FILE* fp = NULL;													// 파일 포인터 초기값 대입
	//fp = fopen( FileLoad_Apc, "a+" );									// 파일 오픈 
	//fprintf( fp,"%s\n",data);											//데이터 저장
	//fclose(fp);
	Send(0,data);														// PMAC 내부 콘솔창 버퍼0에 출력
}