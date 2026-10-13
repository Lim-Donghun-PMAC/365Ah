#include "jog.h"

extern int g_Page_Num;
extern int g_Move_Check;

void Servo_On_Off(JOG_LIST* ptr, int nBtn_name)
{
	//printf("servo = %d\n", ptr->servo_page_arr[g_Page_Num].btn[nBtn_name].status);
	switch(ptr->servo_page_arr[g_Page_Num].btn[nBtn_name].status)
	{
		case RISING_EDGE:
			if(g_Page_Num <= 4 && pshm->Motor[g_Page_Num].PhaseFound != 1)			// PLC 버튼에서 1차로 막아줄거임 하지만 안전하게 두겠음
			{
				return;
			}
			else
			{
				Set_Motor_Num(g_Page_Num);
				Command("jog/");
				pshm->P[P_Servo_ON_MNTR23]++;
			}
		break;

		case HOLD:			break;

		case FALLING_EDGE:
			Set_Motor_Num(g_Page_Num);
			Command("kill");
		break;
		
		case NONE :			break;
		default:			break;
	}
}

void Motor_Home(JOG_LIST* ptr, int nBtn_name)
{
	//printf("home = %d\n", ptr->servo_page_arr[g_Page_Num].btn[nBtn_name].status);
	switch(ptr->servo_page_arr[g_Page_Num].btn[nBtn_name].status)
	{
		case RISING_EDGE:
			if(!((int)pshm->P[P_IL_Robot_Bit] & Hex_IL_Plus || (int)pshm->P[P_IL_Robot_Bit] & Hex_IL_Minus ))
			{
				// 26.03.08 개별 홈 버튼 시 홈체크 초기화하여 -리밋 찍고 홈 동작되게 수정
				pshm->P[P_PMAC_Homing_CHK + g_Page_Num] = 0;
				pshm->P[P_Home_Command + g_Page_Num] = 1;
			}
		break;

		case HOLD :			break;
		case FALLING_EDGE :	break;
		case NONE :			break;
		default :			break;
	}
}

void Jog_Stop(JOG_LIST* ptr, int nBtn_name)
{
	//printf("stop = %d\n", ptr->servo_page_arr[g_Page_Num].btn[nBtn_name].status);
	switch(ptr->servo_page_arr[g_Page_Num].btn[nBtn_name].status)
	{
		case RISING_EDGE:
			if(g_Page_Num <= 4 && pshm->Motor[g_Page_Num].PhaseFound != 1)			// PLC 버튼에서 1차로 막아줄거임 하지만 안전하게 두겠음
			{
				return;
			}
			else
			{
				Set_Motor_Num(g_Page_Num);
				Command("jog/");
				pshm->P[P_Servo_ON_MNTR24]++;
			}
		break;

		case HOLD :			break;
		case FALLING_EDGE : break;
		case NONE :			break;
		default :			break;
	}
}

void Recipe_Pos_Run(JOG_LIST* ptr, int nBtn_name)
{
	//printf("Recipe = %d\n", ptr->servo_page_arr[g_Page_Num].btn[nBtn_name].status);
	double dMove_Distance = 0;
	switch(ptr->servo_page_arr[g_Page_Num].btn[nBtn_name].status)
	{
		case RISING_EDGE :
		{
			// 클램프 동작이고 동시 동작 신호 체크시 함수 하나 작성하여 진행
//			if(pshm->P[P_Cathode_Clamp_Gantry] == 1 || pshm->P[P_Anode_Clamp_Gantry] == 1)
//			{
//				Clamp_Gantry(ptr);
//				return;
//			}

			dMove_Distance = Get_Recipe_Move_Distance(ptr, g_Page_Num);
			printf("Recipe_distance :%f\n",dMove_Distance);
			if(dMove_Distance == - 999)
			{
				Set_Move_Error_Alarm(g_Page_Num);
				return;
			}


			pshm->Motor[g_Page_Num].ProgJogPos = dMove_Distance;
			pshm->Motor[g_Page_Num].JogSpeed = Get_Jog_Speed();

			if(dMove_Distance > Get_Current_Motor_Pos(g_Page_Num))
			{
				if(Get_Motor_Status(g_Page_Num, def_PlusLimit) == 1)
				{
					Set_Plus_Alarm(g_Page_Num);
					pshm->P[P_PMAC_Homing_CHK + g_Page_Num] = 0;
				}
				else
				{
					Set_Motor_Num(g_Page_Num);
					Command("jog=*");
					//g_Move_Check = 1;
				}
			}
			else if(dMove_Distance < Get_Current_Motor_Pos(g_Page_Num))
			{
				int nRtn = 1; //Clamp_Y_Home_Check(g_Page_Num);	// Clamp Y축은 마이너스 리밋을 홈센서로 대체
				if(Get_Motor_Status(g_Page_Num, def_MinusLimit) == 1 || nRtn == 0)
				{
					Set_Minus_Alarm(g_Page_Num);
					pshm->P[P_PMAC_Homing_CHK + g_Page_Num] = 0;
				}
				else
				{
					Set_Motor_Num(g_Page_Num);
					Command("jog=*");
					//g_Move_Check = 1;
				}
			}
		}
		break;

		case HOLD :			break;
		case FALLING_EDGE : break;
		case NONE :			break;
		default :			break;
	}
}

void Jog_Move_INC(JOG_LIST* ptr, int nBtn_name)
{
	//printf("inc = %d\n", ptr->servo_page_arr[g_Page_Num].btn[nBtn_name].status);

	double dMove_Distance = 0;
	switch(ptr->servo_page_arr[g_Page_Num].btn[nBtn_name].status)
	{
		case RISING_EDGE :
			dMove_Distance = Get_Move_Distance();
			// Plus 방향으로 이동 할 경우 상대이동 플러스 방향 인터락 확인
			if(dMove_Distance > 0 && (int)pshm->P[P_IL_Robot_Bit] & Hex_IL_Plus )
			{
				pshm->P[P_Interlock_Popup_On_Flag] = 1;					// 팝업 플래그 ON
				return;
			}
			// Minus 방향으로 이동 할 경우 상대이동 마이너스 방향 인터락 확인
			else if(dMove_Distance < 0 && (int)pshm->P[P_IL_Robot_Bit] & Hex_IL_Minus )
			{
				pshm->P[P_Interlock_Popup_On_Flag] = 1;					// 팝업 플래그 ON
				return;
			}
			else
			{
				//printf(" %d 모터 %lf 데이터 받음 INC 시작 \n",g_Page_Num,dMove_Distance);
				if( g_Page_Num == 17 || g_Page_Num == 18 || g_Page_Num == 21 || g_Page_Num == 22 )		// PnP Z축이라면
				{
					dMove_Distance = inc_Crank_Z_Func(g_Page_Num,dMove_Distance);
					printf(" inc Z축 계산된 값 %lf \n",dMove_Distance);
				}	

				if(dMove_Distance > 0)
				{
					if(Get_Motor_Status(g_Page_Num, def_PlusLimit) == 1)
					{
						Set_Plus_Alarm(g_Page_Num);
						pshm->P[P_PMAC_Homing_CHK + g_Page_Num] = 0;
					}
					
					else	// 여기서 가면서 +리밋을 감지해버리면 어떡하지? → Jog_Cur_Status_Check 함수를 계속 호출하여 드라이브 상태 확인할 테니 상관 없다.
					{
						pshm->Motor[g_Page_Num].JogSpeed = Get_Jog_Speed();
						pshm->Motor[g_Page_Num].ProgJogPos = dMove_Distance;
						Set_Motor_Num(g_Page_Num);
						Command("jog:*");
						g_Move_Check = 1;
					}
				}
				else if(dMove_Distance < 0)
				{
					int nRtn = 1;//Clamp_Y_Home_Check(g_Page_Num);	// Clamp Y축은 마이너스 리밋을 홈센서로 대체
					if(Get_Motor_Status(g_Page_Num, def_MinusLimit) == 1 || nRtn == 0)
					{
						Set_Minus_Alarm(g_Page_Num);
						pshm->P[P_PMAC_Homing_CHK + g_Page_Num] = 0;
					}
					
					else // 여기서 가면서 -리밋을 감지해버리면 어떡하지? → Jog_Cur_Status_Check 함수를 계속 호출하여 드라이브 상태 확인할 테니 상관 없다.
					{
						pshm->Motor[g_Page_Num].JogSpeed = Get_Jog_Speed();
						pshm->Motor[g_Page_Num].ProgJogPos = dMove_Distance;
						Set_Motor_Num(g_Page_Num);
						Command("jog:*");
						g_Move_Check = 1;
					}
				}
			}
		break;
		case HOLD :			break;
		case FALLING_EDGE :	break;
		case NONE :			break;
		default :			break;
	}
}

void Jog_Move_ABS(JOG_LIST* ptr, int nBtn_name)
{
	//printf("abs = %d\n", ptr->servo_page_arr[g_Page_Num].btn[nBtn_name].status);
	double dMove_Distance = 0;
	switch(ptr->servo_page_arr[g_Page_Num].btn[nBtn_name].status)
	{
		case RISING_EDGE : 
				
			dMove_Distance = Get_Move_Distance();
			// Plus 방향으로 이동 할 경우 절대이동 플러스 방향 인터락 확인
			if(dMove_Distance > 0 && (int)pshm->P[P_IL_Robot_Bit] & Hex_IL_Plus )
			{
				pshm->P[P_Interlock_Popup_On_Flag] = 1;					// 팝업 플래그 ON
				return;
			}
			// Minus 방향으로 이동 할 경우 절대이동 마이너스 방향 인터락 확인
			else if(dMove_Distance < 0 && (int)pshm->P[P_IL_Robot_Bit] & Hex_IL_Minus )
			{
				pshm->P[P_Interlock_Popup_On_Flag] = 1;					// 팝업 플래그 ON
				return;
			}
			else
			{
				printf(" %d 모터 %lf 받음 ABS 시작 \n",g_Page_Num,dMove_Distance);
				// 2026.01.16 Crank-Z축 레시피계산 함수 추가.
				if( g_Page_Num == 17 || g_Page_Num == 18 || g_Page_Num == 21 || g_Page_Num == 22 )		// PnP Z축이라면
				{
					dMove_Distance = abs_Crank_Z_Func(g_Page_Num,dMove_Distance);
					printf(" abs Z축 계산된 값 %lf \n",dMove_Distance);
				}	
				if(dMove_Distance > Get_Current_Motor_Pos(g_Page_Num))
				{
					if(Get_Motor_Status(g_Page_Num, def_PlusLimit) == 1)
					{
						Set_Plus_Alarm(g_Page_Num);
						pshm->P[P_PMAC_Homing_CHK + g_Page_Num] = 0;
					}
					else	// 여기서 가면서 +리밋을 감지해버리면 어떡하지? → Jog_Cur_Status_Check 함수를 계속 호출하여 드라이브 상태 확인할 테니 상관 없다.
					{
						pshm->Motor[g_Page_Num].ProgJogPos = dMove_Distance;
						pshm->Motor[g_Page_Num].JogSpeed = Get_Jog_Speed();
						Set_Motor_Num(g_Page_Num);
						Command("jog=*");
						g_Move_Check = 1;
					}
				}
				else if(dMove_Distance < Get_Current_Motor_Pos(g_Page_Num))
				{
					int nRtn = 1;//Clamp_Y_Home_Check(g_Page_Num);	// Clamp Y축은 마이너스 리밋을 홈센서로 대체
					if(Get_Motor_Status(g_Page_Num, def_MinusLimit) == 1 || nRtn == 0)
					{
						Set_Minus_Alarm(g_Page_Num);
						pshm->P[P_PMAC_Homing_CHK + g_Page_Num] = 0;
					}
					else	// 여기서 가면서 -리밋을 감지해버리면 어떡하지? → Jog_Cur_Status_Check 함수를 계속 호출하여 드라이브 상태 확인할 테니 상관 없다.
					{
						pshm->Motor[g_Page_Num].JogSpeed = Get_Jog_Speed();
						pshm->Motor[g_Page_Num].ProgJogPos = dMove_Distance;
						Set_Motor_Num(g_Page_Num);
						Command("jog=*");
						g_Move_Check = 1;
					}
				}
			}
		break;

		case HOLD:			break;
		case FALLING_EDGE : break;
		case NONE :			break;
		default :			break;
	}
}

void Jog_Move_Plus(JOG_LIST* ptr, int nBtn_name)
{
	int ijog_speed = 0;					// UI Jog Speed 담는 변수선언

	switch(ptr->servo_page_arr[g_Page_Num].btn[nBtn_name].status)
	{
		case RISING_EDGE :
			if(!((int)pshm->P[P_IL_Robot_Bit] & Hex_IL_Plus) )
			{
				ijog_speed = GetPtrArrayVar(M_Motor_Vel,g_Page_Num);	// UI Speed 대입
				pshm->Motor[g_Page_Num].JogSpeed = ijog_speed / 100;	// 단위 변환
				//pshm->Motor[g_Page_Num].JogSpeed = Get_Jog_Speed();
				if(Get_Motor_Status(g_Page_Num, def_PlusLimit) == 1)
				{
					Set_Plus_Alarm(g_Page_Num);
					pshm->P[P_PMAC_Homing_CHK + g_Page_Num] = 0;
				}
				else
				{
					Set_Motor_Num(g_Page_Num);
					Command("jog+");
					g_Move_Check = 1;
				}
			}
			else
			{
				Set_Move_Error_Alarm(g_Page_Num);
				pshm->P[P_Interlock_Popup_On_Flag] = 1;					// 팝업 플래그 ON
			}
		break;

		case HOLD : 
			if(Get_Motor_Status(g_Page_Num, def_PlusLimit) == 1)
			{
				Set_Plus_Alarm(g_Page_Num);
			}
			//else if((int)pshm->P[P_IL_Robot_Bit] & Hex_IL_Plus)
			//{
			//	Set_Move_Error_Alarm(g_Page_Num);
			//	Set_Motor_Num(g_Page_Num);
			//	Command("jog/");
			//}
		break;

		case FALLING_EDGE :
			Set_Motor_Num(g_Page_Num);
			Command("jog/");
			pshm->P[P_Servo_ON_MNTR25]++;
		break;
		case NONE :			break;
		default :			break;
	}
}

void Jog_Move_Minus(JOG_LIST* ptr, int nBtn_name)
{
	int ijog_speed = 0;					// UI Jog Speed 담는 변수선언
	int nRtn = 0;
	switch(ptr->servo_page_arr[g_Page_Num].btn[nBtn_name].status)
	{
		case RISING_EDGE :
			if(!((int)pshm->P[P_IL_Robot_Bit] & Hex_IL_Minus) )
			{
				ijog_speed = GetPtrArrayVar(M_Motor_Vel,g_Page_Num);	//Get_Jog_Speed();
				pshm->Motor[g_Page_Num].JogSpeed = ijog_speed / 100;
				//pshm->Motor[g_Page_Num].JogSpeed = Get_Jog_Speed();
				nRtn = 1;//Clamp_Y_Home_Check(g_Page_Num);	// Clamp Y축은 마이너스 리밋을 홈센서로 대체
				if(Get_Motor_Status(g_Page_Num, def_MinusLimit) == 1 || nRtn == 0)
				{
					Set_Minus_Alarm(g_Page_Num);
					pshm->P[P_PMAC_Homing_CHK + g_Page_Num] = 0;
				}
				else
				{
					Set_Motor_Num(g_Page_Num);
					Command("jog-");
					g_Move_Check = 1;
				}
			}
			else
			{
				Set_Move_Error_Alarm(g_Page_Num);
				pshm->P[P_Interlock_Popup_On_Flag] = 1;					// 팝업 플래그 ON
			}
		break;

		case HOLD :		
			nRtn = Clamp_Y_Home_Check(g_Page_Num);	// Clamp Y축은 마이너스 리밋을 홈센서로 대체

			if(Get_Motor_Status(g_Page_Num, def_MinusLimit) == 1 || nRtn == 0)
			{
				Set_Minus_Alarm(g_Page_Num);
			}
			//else if((int)pshm->P[P_IL_Robot_Bit] & Hex_IL_Minus)
			//{
			//	Set_Move_Error_Alarm(g_Page_Num);
			//	Set_Motor_Num(g_Page_Num);
			//	Command("jog/");
			//}		
		break;

		case FALLING_EDGE :
			Set_Motor_Num(g_Page_Num);
			Command("jog/");
			pshm->P[P_Servo_ON_MNTR26]++;
		break;

		case NONE :			break;
		default :			break;
	}
}

void Alarm_Reset(JOG_LIST* ptr, int nBtn_name)
{	
	//printf("reset = %d\n", ptr->servo_page_arr[g_Page_Num].btn[nBtn_name].status);
	switch(ptr->servo_page_arr[g_Page_Num].btn[nBtn_name].status)
	{
		case RISING_EDGE :
			Set_Driver_Alarm_Reset(g_Page_Num, 1);
		break;

		case HOLD :
		break;

		case FALLING_EDGE :
			Set_Driver_Alarm_Reset(g_Page_Num, 0);
		break;

		case NONE :			break;
		default :			break;
	}
}

void Clamp_Gantry(JOG_LIST* ptr)
{
	/* 
		대기위치, 클램프 위치, 중간위치
		Clamp Y1만 D영역 데이터로 받고
		각 Y1, Y2의 레시피 값을 가져와서 넣어주고
		속도는 Y1 속도를 똑같이 가져가도 되지 않을까
		각자 리밋 확인해서 하나라도 걸리면 Break 걸어서 알람
		양극 Clamp Y = 5, 7
		음극 Clamp Y = 6, 8

		Z축도 분리
		양극 Clamp Z = 9, 25
		음극 Clamp Z = 10, 26
		음극 (Y1, Z1) (Y2, Z2)
		양극 (Y1, Z1) (Y2, Z2)
	*/
	char cCommand[50];
	int nMotorNum[2] = {0};
	double dMove_Distance[2] = {0};
	int i = 0;
	int nAlarmCheck = 0;

	for(i = 0; i < 2; i++)
	{
		//nMotorNum[i] = g_Page_Num + (i * 2);								// g_Page_Num으로 Y1번 모터 번호만 들어오니 각 모터 번호 저장
		nMotorNum[0] = g_Page_Num;
		if(i == 0)
		{
			nMotorNum[0] = g_Page_Num;
		}
		else
		{
			if(nMotorNum[0] == 5) nMotorNum[1] == 7;
			if(nMotorNum[0] == 6) nMotorNum[1] == 8;
			if(nMotorNum[0] == 9) nMotorNum[1] == 25;
			if(nMotorNum[0] == 10) nMotorNum[1] == 26;
			else return;

			ptr->servo_page_arr[nMotorNum[1]] = ptr->servo_page_arr[nMotorNum[0]];
		}
		
		dMove_Distance[i] = Get_Recipe_Move_Distance(ptr, nMotorNum[i]);	// 두 모터의 레시피 값 가져오기 

		if(dMove_Distance[i] == -999)										// 위치 인터락 체크
		{
			Set_Move_Error_Alarm(nMotorNum[i]);								// 모터 위치 인터락 알람 
			return;
		}

		pshm->Motor[nMotorNum[i]].ProgJogPos = dMove_Distance[i];			// 각 레시피 위치값 
		pshm->Motor[nMotorNum[i]].JogSpeed = Get_Jog_Speed();				// 조그 속도

		// 리밋 알람 체크
		if(dMove_Distance[i] > Get_Current_Motor_Pos(nMotorNum[i]))
		{
			if(*Motor_Status[nMotorNum[i]].nStatus & def_PlusLimit)
			{
				Set_Plus_Alarm(nMotorNum[i]);
				nAlarmCheck = 1;
				break;
			}
		}
		else if(dMove_Distance[i] < Get_Current_Motor_Pos(nMotorNum[i]))
		{
			if(*Motor_Status[nMotorNum[i]].nStatus & def_MinusLimit)
			{
				Set_Minus_Alarm(nMotorNum[i]);
				nAlarmCheck = 1;
				break;
			}
		}
	}

	if(nAlarmCheck != 1)
	{
		sprintf(cCommand, "#%d,%dj=*", nMotorNum[0], nMotorNum[1]);
		Command(cCommand);
	}
}

// [ 참조: 26.01.15 페이징 버튼 추가 ]
void Phasing_PnP(JOG_LIST* ptr, int nBtn_name)
{
	switch(ptr->servo_page_arr[g_Page_Num].btn[nBtn_name].status)				// PWM Motor Pashing BTN 감지 가 된다면
	{
		case RISING_EDGE:
			if( pshm-> Motor[g_Page_Num].PhaseFound != 1 )						// Phasing Found 안되어있다면
			{
				if( pshm-> P[P_PWM_Status + g_Page_Num] != F_Status_STARTING )	// 중복 커맨드 방지 조건. 
				{
					pshm->P[P_PWM_Phasing_Start + g_Page_Num] = 1;				// phasing 시작
				}
			}
		break;

		case HOLD:			break;

		case FALLING_EDGE:
		break;
		
		case NONE :			break;
		default:			break;
	}
}

int Clamp_Y_Home_Check(int nMotorNum)
{
	int rtn = 1;
	//volatile GateArray3 *Gate3;
	//
	//Gate3 = GetGate3MemPtr(2);
	//
	//switch(nMotorNum)
	//{
	//	case 5:
	//		if(Gate3->Chan[0].Status & def_HomeFlag)
	//		{
	//			rtn = 1;
	//		}
	//		else
	//			rtn = 0;
	//	break;
	//
	//	case 6:
	//		if(Gate3->Chan[1].Status & def_HomeFlag)
	//		{
	//			rtn = 1;
	//		}
	//		else
	//			rtn = 0;
	//	break;
	//
	//	case 7:
	//		if(Gate3->Chan[2].Status & def_HomeFlag)
	//		{
	//			rtn = 1;
	//		}
	//		else
	//			rtn = 0;
	//	break;
	//
	//	case 8:
	//		if(Gate3->Chan[3].Status & def_HomeFlag)
	//		{
	//			rtn = 1;
	//		}
	//		else
	//			rtn = 0;
	//	break;
	//
	//	default:
	//		rtn = 1;
	//	break; 
	//}

	return rtn;
}