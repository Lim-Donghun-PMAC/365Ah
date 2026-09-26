#include <gplib.h>   // Global Gp Shared memory pointer

//#define _PPScriptMode_		// for enum mode, replace this with #define _EnumMode_
//#define _PP_PROJ_HDR_
//#include "../../Include/pp_proj.h"
#include "jog.h"

extern int g_Page_Num;
extern unsigned int Bit_Masking_Arr[MotorCount];
extern int g_Move_Check;
// 초기화
void Jog_Init(JOG_LIST* ptr)
{
	int i, j = 0;
	for(i = 0; i < SERVO_PAGE_LAST; i++)
	{
		for(j = 1; j < JOG_BTN_NAME_LAST; j++)
		{
			ptr->servo_page_arr[i].btn[j].b_prev = false;
			ptr->servo_page_arr[i].btn[j].status = NONE;
			ptr->servo_page_arr[i].btn[j].action = pfunc[j];
		}
		ptr->servo_page_arr[i].shared_ptr = NULL;
	}
	for(i = 1; i < SERVO_PAGE_LAST; i++)
	{
		ptr->servo_page_arr[i].shared_ptr = (unsigned int*)pushm + (JogBtnStartAddr + ((i - 1) * 7));
	}
	for(i = 0; i < MotorCount; i++)
	{
		Bit_Masking_Arr[i] = 0x1 << i;
	}

	Selected_Motor_Num = (unsigned int*)pushm + 11199;
}

// 서보 페이지 선택 연산 함수
unsigned int Servo_Scene_Select()
{
	return *Selected_Motor_Num;
}

// 상태 업데이트 쓰레드
void* Jog_Status_Update(void* arg)
{
	// pthread_setcancelstate 함수 -> PTHREAD_CANCEL_DISABLE, PTHREAD_CANCEL_ENABLE 옵션
	// PTHREAD_CANCEL_ENABLE : 쓰레드 cancel 명령 시 그 읽고 있던 위치까지 읽고 종료 하는 모드 설정
	// PTHREAD_CANCEL_DISABLE : cancel 명령 받아도 종료 하지 않음.
	// pthread_setcanceltype 함수 -> PTHREAD_CANCEL_ASYNCRONOUS, PTHREAD_CANCEL_DEFERRED 옵션
	// PTHREAD_CANCEL_ASYNCHRONOUS : cancel 명령시 그 위치에서 종료하는 타입
	// PTHREAD_CANCEL_DEFERRED : 쓰레드 join, mutex 같은 동기화 작업 후 종료하는 타입
	pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, NULL);
	pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL);
	JOG_LIST* ptr = (JOG_LIST*)arg;
	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_uSEC * 30000;

	while(1)
	{
		if(g_Page_Num != 0)
		{
			Jog_Execute(ptr);
			nanosleep(&nsleep, NULL);
		}
		nanosleep(&nsleep, NULL);
	}
}

// 조그 버튼 관련 실행 함수
void Jog_Execute(JOG_LIST* ptr)
{
	int i;
	int nBitLoopIndex = 0;
	for(i = 1; i < JOG_BTN_NAME_LAST; i++)
	{	
		nBitLoopIndex = i - 1;
		// 포인터 변수의 참조를 통해 각 비트마다 1개의 bit가 있는지 확인
		if(*(ptr->servo_page_arr[g_Page_Num].shared_ptr) & Bit_Masking_Arr[nBitLoopIndex])
		{
			//printf("rising = %d\n", *(ptr->servo_page_arr[g_Page_Num].shared_ptr) & Bit_Masking_Arr[i]);
			// 눌려져 있는 상태 -> prev = 1
			if(ptr->servo_page_arr[g_Page_Num].btn[i].b_prev)
			{
				ptr->servo_page_arr[g_Page_Num].btn[i].status = HOLD;	// 유지
			}
			else
			{
				// 처음 눌려진 상태 -> prev = 0
				ptr->servo_page_arr[g_Page_Num].btn[i].status = RISING_EDGE; // 상승 엣지
			}
			ptr->servo_page_arr[g_Page_Num].btn[i].b_prev = true;
		}
		else
		{
			if(!(*(ptr->servo_page_arr[g_Page_Num].shared_ptr) & Bit_Masking_Arr[nBitLoopIndex]))
			{
				if(ptr->servo_page_arr[g_Page_Num].btn[i].b_prev)
				{
					ptr->servo_page_arr[g_Page_Num].btn[i].status = FALLING_EDGE; // 하강 엣지
				}
				else
				{
					ptr->servo_page_arr[g_Page_Num].btn[i].status = NONE;	// clear
				}
				ptr->servo_page_arr[g_Page_Num].btn[i].b_prev = false;
			}
		}
		if(ptr->servo_page_arr[g_Page_Num].btn[i].status != NONE)
		{
//			printf("btn = %d\n", *(ptr->servo_page_arr[g_Page_Num].shared_ptr));
//			printf("mask = %d\n", Bit_Masking_Arr[nBitLoopIndex]);
//			printf("i = %d\n", i);
			ptr->servo_page_arr[g_Page_Num].btn[i].action(ptr, i);
		}
	}
}

// 조그 현재 상태 체크 함수
void Jog_Cur_Status_Check(JOG_LIST* ptr)
{
	unsigned int Cur_Page_Num = Servo_Scene_Select();
	Get_Drive_Status();		// Drive Alarm 상태 확인

	if(pshm->P[P_PMAC_Current_Mode] == 2)
	{
		if(Cur_Page_Num > 0)
		{
			//디버깅
			//printf("cur = %d\n", Cur_Page_Num);
			//printf("g_num = %d\n", g_Page_Num);
			if(Cur_Page_Num != g_Page_Num)
			{
				//디버깅_
				pshm->P[272]++;	
				g_Page_Num = Cur_Page_Num;
				All_Motor_Stop();
			}
		}
	}

	if(g_Move_Check == 1)
	{
		Servo_Move_Complete_Check();
	}
}

void Servo_Move_Complete_Check()
{
	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_uSEC * 40000;

	nanosleep(&nsleep, NULL);

	if(Get_Motor_Status(g_Page_Num, def_DesVelZero) == 1) g_Move_Check = 0;

	if(Get_Motor_Status(g_Page_Num, def_PlusLimit) == 1)
	{
		//pshm->P[213]++;
		Set_Plus_Alarm(g_Page_Num);			// 리밋 알람
		pshm->P[P_PMAC_Homing_CHK + g_Page_Num] = 0;
		g_Move_Check = 0;
	}
	else if(Get_Motor_Status(g_Page_Num, def_MinusLimit) == 1)
	{
		Set_Minus_Alarm(g_Page_Num);		// 리밋 알람
		pshm->P[P_PMAC_Homing_CHK + g_Page_Num] = 0;
		g_Move_Check = 0;
	}
}

void All_Motor_Stop()
{
	int i = 0;
	g_Move_Check = 0;
	for(i = 1; i < MotorCount; i++)
	{
		if((Get_Motor_Status(g_Page_Num, def_DesVelZero) == 0 && Get_Motor_Status(g_Page_Num, def_InPos) == 0) || pshm->P[P_Home_Status + i] != 0)
		{
			pshm->P[P_Home_Command + i] = 9;		// 홈 정지
			Set_Motor_Num(i);
			Command("jog/");
		}
	}
}