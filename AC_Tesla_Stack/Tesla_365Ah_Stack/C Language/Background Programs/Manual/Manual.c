
/*For more information see notes.txt in the Documentation folder */
#include <gplib.h>   

//#define _PPScriptMode_		// for enum mode, replace this with #define _EnumMode_
//#include "../../Include/pp_proj.h"

#include "btn/btn.h"
#include "JOG/Jog.h"
#include "home/_home.h"

int g_Page_Num = 0;
int g_Move_Check = 0;
unsigned int Bit_Masking_Arr[MotorCount] = {0};

int main(void)
{
	InitLibrary();  // Required for accessing Power PMAC library
	int iIndex = 1; // 버튼 유닛 번호. ( 버튼 커멘드 검출용 ) 

	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_uSEC*150000;   // 100ms		NANO_uSEC 는 1000이고, nano초에서 u초로 변환
	struct timespec thread_sleep = {0};
	thread_sleep.tv_nsec = NANO_1MSEC*5;   // 100ms		NANO_uSEC 는 1000이고, nano초에서 u초로 변환

	printf("Start\n");
	pthread_attr_t attr;			// thread attributes

	pthread_attr_init(&attr);		// thread initalize 
	pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);	// detached
	
	typedef enum _thread_name
	{
		th_btn, th_jog, th_status, th_home, th_home_exe, th_last
	}Thread_Name;


	pthread_t th[th_last] = { 0 };

	JOG_LIST* jog_arr = (JOG_LIST*)malloc(sizeof(JOG_LIST));	// 메모리 동적할당.
	Stack_Information* home_arr = (Stack_Information*)malloc(sizeof(Stack_Information));
	IBtn* pBTN[BTN_NAME_LAST] = { 0, };

	BTN_init(&pBTN);
	Jog_Init(jog_arr);
	Motor_Status_Init();
	Home_Initialize_Type(home_arr);

	nanosleep(&nsleep,NULL);      //100msec

	if(pthread_create(&th[th_btn], &attr, BTN_Execute, (void*)&pBTN) != 0)
	{
		printf("BTN Thread Create Fail\n");
		exit(1);
	}

	if(pthread_create(&th[th_jog], &attr, Jog_Status_Update, (void*)jog_arr) != 0)
	{
		printf("Jog Thread Create Fail\n");
		exit(1);
	}

	if(pthread_create(&th[th_status], &attr, Motor_Status_Update, 0) != 0)
	{
		printf("Motor Status Thread Create Fail\n");
		exit(1);
	}

	if(pthread_create(&th[th_home], &attr, Home_Cmd_Check, (void*)home_arr) != 0)
	{
		printf("Home Init Thread Create Fail\n");
		exit(1);
	}

	if(pthread_create(&th[th_home_exe], &attr, Home_Execute, (void*)home_arr) != 0)
	{
		printf("Home Execute Thread Create Fail\n");
		exit(1);
	}
	nanosleep(&nsleep,NULL);      //100msec

	while(1)
	{
		if(iIndex >= BTN_NAME_LAST)
			iIndex = 1;

		Jog_Cur_Status_Check(jog_arr);
		nanosleep(&thread_sleep,NULL);      //100msec

		if(pshm->P[7777] == 1)
		{
			nanosleep(&nsleep,NULL);      //100msec

			pthread_cancel(th[th_btn]);
			pthread_cancel(th[th_jog]);
			pthread_cancel(th[th_status]);
			pthread_cancel(th[th_home]);
			pthread_cancel(th[th_home_exe]);

			printf("\n 쓰레드종료! \n");
		}

		if(pBTN[iIndex]->pfnStatus != NULL)
		{
			pBTN[iIndex]->pfnStatus(pBTN[iIndex]);
		}
		iIndex++;
	}
	
	//할당한 메모리를 해제.
	free(jog_arr);

	CloseLibrary();
	return 0;
}

