//#define HAVE_STRUCT_TIMESPEC
//#include <pthread.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include "common.h"
//#include "_home.h"
//#define _EnumMode_
//#include "../../Include/pp_proj.h"
//#define _PPScriptMode_



int g_Page_Num = 0;
int g_Move_Check = 0;
unsigned int Bit_Masking_Arr[32] = {0};

// 모터 위치 
int main(void)
{
	InitLibrary();  // Required for accessing Power PMAC library
//	// 타이머설정.
//	struct timespec nsleep = {0};
//	nsleep.tv_nsec = NANO_uSEC*150000;   // 100ms		NANO_uSEC 는 1000이고, nano초에서 u초로 변환
//	// 쓰레드 설정.
//	pthread_attr_t attr;		// 쓰레드 속성에 대한 변수 선언 
//	//pthread_detach 설정
//	pthread_attr_init(&attr);	// 쓰레드 속성에 초기화 작업 
//	pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);	// 쓰레드 속성을 Detach모드로 설정 
//	typedef enum _thread_Name
//	{
//		th_hm_cmd, th_hm_exe , th_btn, th_jog, th_status, th_last
//	}thread_Name;
//	// 실행될 쓰레드 배열 변수 선언.
//	pthread_t th[th_last] = { 0 };

//	 // 1) 조그 구조체 변수 선언.
//	JOG_LIST* jog_arr = (JOG_LIST*)malloc(sizeof(JOG_LIST));	// 메모리 동적할당.
//	// 2) 모터 Status 공용체 변수 선언
//	Motor_Status = (MOTOR_STATUS*)malloc(sizeof(MOTOR_STATUS));	// 메모리 동적 할당

//	// 초기화.
//	// 1) 조그 초기화.
//	Jog_init(jog_arr);
//	//while (Jog_init(jog_arr) != 1) {}	// 완료 대기.
//	// 2) 모터 상태 프로그램 초기화
//	Motor_Send_Data_Init(MotorStatus);


//	nanosleep(&nsleep,NULL);      //100msec

//	// ! pthread_create !
//	//  1번째 파라미터 : 쓰레드 식별자
//	//  2번째 파라미터 : 쓰레드 특성 (기본은 NULL)
//	//  3번째 파라미터 : 분기시켜서 실행하게 될 쓰레드 함수
//	//  4번째 파라미터 : 쓰레드 함수가 넘겨받을 매개변수

//	// 1. 쓰레드 생성 Home_Cmd_Check() 함수 run
//	if (pthread_create(&th[th_hm_cmd], &attr, Home_Cmd_Check, (void*)home_arr) != 0 ) {
//		printf("home_Thread Create Fail\n");
//		exit(1);
//	}
//	//pshm->P[P_231213_Test_Status + 45]= 60;
//	// 2. 쓰레드 생성 Home_Execute() 함수 run 
//	if (pthread_create(&th[th_hm_exe], &attr, Home_Execute, (void*)home_arr) != 0) {
//		printf("home_Execute_Thread Create Fail\n");
//		exit(1);
//	}
//	//pshm->P[P_231213_Test_Status + 45]= 70;
//	// 3. 쓰레드 생성 Btn_Cmd_Check() 함수 run
//	if( pthread_create(&th[th_btn], &attr, Btn_Cmd_Check, (void*)btn_arr) != 0 )	{
//		printf("BTN_Thread Create Fail\n");
//		exit(1);
//	}
//	nanosleep(&nsleep,NULL);
//	//pshm->P[P_231213_Test_Status + 45]= 80;
//	// 4. 쓰레드 생성 JOG_Status_Update() 함수 run
//	if( pthread_create(&th[th_jog], &attr, JOG_Status_Update, (void*)jog_arr) != 0 )	{
//		printf("BTN_Thread Create Fail\n");
//		exit(1);
//	}

//	nanosleep(&nsleep,NULL);
//	while (1)
//	{
//		Jog_Cur_Status_Check(jog_arr);
//		nanosleep(&nsleep,NULL);      //100msec
//		//if (Get_Direct_Shared_Mem(10223) != 1)		// M_Y_Trigger_Ethernet_Connected_Status
//		//if( GetPtrVar(M_Y_Trigger_Ethernet_Connected_Status) != 1 )	or if( Mdef[M_Y_Trigger_Ethernet_Connected_Status] != 1 )
//		if( pshm->P[7777] == 1 )
//		{
//			pthread_cancel(th[th_hm_cmd]);
//			pthread_cancel(th[th_hm_exe]);
//			pthread_cancel(th[th_btn]);
//			pthread_cancel(th[th_jog]);
//			printf("\n 쓰레드종료! \n");
//			nanosleep(&nsleep,NULL);      //100msec
//		}
//	}
//	//할당한 메모리를 해제.
//	free(home_arr);
//	free(btn_arr);
//	free(jog_arr);

	CloseLibrary();
	return 0;
}