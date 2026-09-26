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
	for(i = 0; i < 32 ; i++)
	{
		Bit_Masking_Arr[i] = 0x1 << i;
	}

	Selected_Motor_Num = (unsigned int*)pushm + 11199;
}

// 서보 페이지 선택 연산 함수
unsigned int Servo_Scene_Select()
{
	unsigned int iPage = *Selected_Motor_Num;

	if(iPage < 49)
	{
		return iPage;
	}
	else
	{
		return 0;
	}
	
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
			if(pshm->P[P_PMAC_Current_Mode] == 2)
			{
				Jog_Execute(ptr);
				
				//Jog_Cur_Status_Check(ptr);
				nanosleep(&nsleep, NULL);
			}
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
			if(ptr->servo_page_arr[g_Page_Num].btn[i].action != NULL)
			{
				// [ 참조: 26.01.15 페이징 버튼 추가 ] 
				if( g_Page_Num <= 4 )												// PNP DD Motor 라면
				{
					if( pshm-> Motor[g_Page_Num].PhaseFound == 1 )					// PhaseFound On 일때만 DD Motor BTN 활성화
					{
						
							ptr->servo_page_arr[g_Page_Num].btn[i].action(ptr, i);		// PhaseFound == 1 --> Action 가능
					}
					else															// phaseFound OFF 라면
					{
						if( i == JOG_BTN_Phasing_PnP )								// Phasing BTN만 활성화
						{
								ptr->servo_page_arr[g_Page_Num].btn[i].action(ptr, i);	// Phasing BTN --> Action Start
						}
					}
				}
				else																// PNP DD Motor 가 아니라면
				{
						ptr->servo_page_arr[g_Page_Num].btn[i].action(ptr, i);			// BTN Action Start
				}
			}
		}
	}
}

// 조그 현재 상태 체크 함수
void Jog_Cur_Status_Check(JOG_LIST* ptr)
{
	unsigned int Cur_Page_Num = Servo_Scene_Select();

	if(pshm->P[P_PMAC_Current_Mode] == 2)
	{
		if(Cur_Page_Num != g_Page_Num)
		{
			if( Cur_Page_Num != 0 )									// 현재 페이지가 0이 아닌 값이라면
			{
				All_Motor_Stop(g_Page_Num);	
				g_Page_Num = Cur_Page_Num;							// 현재 페이지 g_Page_Num 대입
				pshm->P[P_Motor_Page] = (double)g_Page_Num;			// g_Page_Num P변수 대입
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

	if(Get_Motor_Status(g_Page_Num, def_DesVelZero) == 1)
	{
		g_Move_Check = 0;
	}
	else
	{
	// INC, ABS InterLock Stop 추가 [ 참 조 : 인터락 버튼 통합 처리 ]
		if(pshm->Motor[g_Page_Num].DesVel > 0)
		{
			if( (int)pshm->P[P_IL_Robot_Bit] & Hex_IL_Plus)
			{
				All_Motor_Stop(g_Page_Num);								// 모터 정지 커맨드
				pshm->P[P_Home_Command + g_Page_Num] = 9;				// 커멘드 초기화.
				pshm->P[P_Interlock_Popup_On_Flag] = 1;					// 팝업 플래그 ON
			}
		}
		else if(pshm->Motor[g_Page_Num].DesVel < 0)
		{
			if( (int)pshm->P[P_IL_Robot_Bit] & Hex_IL_Minus)
			{
				All_Motor_Stop(g_Page_Num);								// 모터 정지 커맨드 
				pshm->P[P_Home_Command + g_Page_Num] = 9;				// 커멘드 초기화.
				pshm->P[P_Interlock_Popup_On_Flag] = 1;					// 팝업 플래그 ON
			}
		}

	}
}

void All_Motor_Stop( int old_page )			// 이전 page만 보도록 변경함 → 전체 j/ 날려서 자꾸 서보 온 되는 현상 막았음
{
	g_Move_Check = 0;
	
	if((Get_Motor_Status(old_page, def_DesVelZero) == 0 && Get_Motor_Status(old_page, def_InPos) == 0) )	// 이전 페이지 모터의 움직임이 있다면
	{
		if( old_page <= 4 )									// DD Motor는 페이징 확인
		{
			if( pshm->Motor[old_page].PhaseFound == 1)		// 페이징 되었는지 확인 후 
			{
				Set_Motor_Num(old_page);	// 문자열 등록				
				Command("jog/");
				pshm->P[P_Servo_ON_MNTR21]++;
				if( pshm->P[P_Home_Status + old_page] == F_Status_EXECUTE )	
						pshm->P[P_Home_Command + old_page] = 9;	// 홈 정지
			}
		}
		else												// DD Motor가 아니라면 
		{
			Set_Motor_Num(old_page);	// 문자열 등록
			Command("jog/");
			pshm->P[P_Servo_ON_MNTR22]++;
			if( pshm->P[P_Home_Status + old_page] == F_Status_EXECUTE )	
						pshm->P[P_Home_Command + old_page] = 9;	// 홈 정지
		}
	}
}

//void Move_Interlock_Check()
//{
//	// 상대이동이나, 절대이동 인터락 
//	if(pshm->Motor[g_Page_Num].DesVelZero == 0)
//	{
//		// 절대위치 이동 인터락 확인
//		if((int)pshm->P[P_Interlock_Status_Motor_Arr + g_Page_Num] & 0xf))
//		{
//			Set_Motor_Num(g_Page_Num);
//			Command("jog/");
//		}
//	}
//}