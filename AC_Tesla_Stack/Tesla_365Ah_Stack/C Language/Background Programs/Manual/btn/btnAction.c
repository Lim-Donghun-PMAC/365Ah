
#include "btn.h"

const double SPEC = 1000000000.0;
//extern int gChange_Init = 0;

// 라디오 버튼 실행 부
void RadiolAct(tRadioBTN* _pBTN)
{

	int i = 0;
	switch (_pBTN->IFBtn.status)
	{
		case RISING_EDGE:
			// interlock lamp -> 0 불가능
			// interlock lamp -> 1 가능
			if(GetPtrVar(_pBTN->IFBtn.iInterlock_Lamp))
			{	
				for(i = 0; i <_pBTN->Off_Number; i++)
				{			
					SetPtrVar(_pBTN->Off_Output[i], 0);
				}

				for(i = 0; i <_pBTN->On_Number; i++)
				{
					SetPtrVar(_pBTN->On_Output[i], 1);
					//printf("Out Cmd : %d\n",_pBTN->On_Output[i]); 
				}
				//printf( "ARC UI Not InterLock \n " );
			}
			else
				//printf( "ARC UI InterLock \n " );
		
		
			break;
		case HOLD:							break;
		case FALLING_EDGE:					break;
		case NONE:							break;
		default:							break;
	}

}



// 라디오 버튼 상태부 TestTEst
void RadioStatus(tRadioBTN* _pBTN)
{
	struct timespec nsleep = {0};
	nsleep.tv_sec = 0;   // 1ms 	
	nsleep.tv_nsec = NANO_1MSEC * 1;   // 1ms 
	bool   bLamp_Enable = false;
	int i = 0;
	bool Out_Activated = false;

	if(_pBTN->On_Number != 0)
	{
		for(i = 0; i < _pBTN->On_Number; i++)
		{
			if(GetPtrVar(_pBTN->On_Output[i]) != 1)		// 0이라면,
			{

				Out_Activated = false;
				break;
			}
			else
				Out_Activated = true;
		}
	}
	else
	{// 0이라면, 
		for(i = 0; i < _pBTN->Off_Number; i++)
		{
			if(GetPtrVar(_pBTN->Off_Output[i]) != 0)		// 1이라면,
			{
				Out_Activated = false;
				break;
			}
			else
				Out_Activated = true;
		}
	}
	// 아웃이 다 조건에 맞게 켜져있다면,
	if(Out_Activated == true)
	{
		if(_pBTN->Sen_Number == 0)		// 센서가 지정안되어있다면, 아웃풋만으로 램프는 켜져야한다.
		{
			bLamp_Enable = true;

		}
		else
		{ // 센서가 지정되어있다면,
			for(i = 0; i < _pBTN->Sen_Number; i++)
			{
				if(GetPtrVar(_pBTN->Sensor[i]) != 1)		// 0이라면,
				{
					//printf("All Sensor Not On, Cur : %d\n", _pBTN->Sensor[i]);
					bLamp_Enable = false;
					break;
				}
				else
					bLamp_Enable = true;

			}
		}
	}

	if(_pBTN->Lamp)
	{
		
		if(bLamp_Enable == true)
		{
			SetPtrVar(_pBTN->Lamp, 1);
		}
		else if(bLamp_Enable == false)
		{
			SetPtrVar(_pBTN->Lamp, 0);
		}
	}
	nanosleep(&nsleep,NULL);      //1msec
}





// 푸시 버튼 실행 부
void PushAct(tPushBTN* _pBTN)
{

	switch (_pBTN->IFBtn.status)
	{
	case RISING_EDGE:
		SetPtrVar(_pBTN->output, 1);

		break;
	case HOLD:							break;
	case FALLING_EDGE:	
		SetPtrVar(_pBTN->output, 0);
		break;
	case NONE:							break;
	default:							break;
	}

}
// 푸시 버튼 상태 부
void PushStatus(tPushBTN* _pBTN)
{
	struct timespec nsleep = {0};
	nsleep.tv_sec = 0;   // 1ms 	
	nsleep.tv_nsec = NANO_1MSEC * 1;   // 1ms 
	double dSensor[2] = {0,};
	double dOutput = 0;
	bool   bLamp_Enable = false;

	if(_pBTN->output != 0 )
	{
		dSensor[0] = GetPtrVar(_pBTN->Sensor[0]);
		dSensor[1] = GetPtrVar(_pBTN->Sensor[1]);
		dOutput = GetPtrVar(_pBTN->output);
		if(_pBTN->Sensor[0] != 0 && _pBTN->Sensor[1] != 0)			// 2개 센서가 지정되어있다면,
		{
			if(dSensor[0] != 0 && dSensor[1] != 0 && dOutput != 0)
			{
				bLamp_Enable = true;
			}
		}
		else if(_pBTN->Sensor[0] != 0 )		// 1개 센서가 지정되어있다면,
		{
			if(dSensor[0] != 0 && dOutput != 0)
			{
				bLamp_Enable = true;
			}
		}
		else
		{
			if(dOutput != 0)
				bLamp_Enable = true;
		}
	}

	if(_pBTN->Lamp)
	{
		if(bLamp_Enable == true)
		{
			SetPtrVar(_pBTN->Lamp,1);
		}
		else if(bLamp_Enable == false)
		{
			SetPtrVar(_pBTN->Lamp, 0);
		}
	}
	nanosleep(&nsleep,NULL);      //1msec
}
// 토글 버튼 실행 부
void ToggleAct(tToggleBTN* _pBTN)
{
	switch (_pBTN->IFBtn.status)
	{
	case RISING_EDGE:
		// 현재 값을 받아와서, Test
		if (GetPtrVar(_pBTN->output) == 1)
		{
			SetPtrVar(_pBTN->output, 0);
		}
		else if (GetPtrVar(_pBTN->output) == 0)
		{
			SetPtrVar(_pBTN->output, 1);
		}
		else
		{
		}

		break;
	case HOLD:							break;
	case FALLING_EDGE:					break;
	case NONE:							break;
	default:							break;
	}

}
// 토글 버튼 상태 부
void ToggleStatus(tToggleBTN* _pBTN)
{
	struct timespec nsleep = {0};
	nsleep.tv_sec = 0;   // 1ms 	
	nsleep.tv_nsec = NANO_1MSEC * 1;   // 1ms 
	double dSensor[2] = {0,};
	double dOutput;
	bool	bLamp_Enable = false;
	// 현재 장비가 오토상태라면,

	if(_pBTN->output != 0 )
	{
		dSensor[0] = GetPtrVar(_pBTN->Sensor[0]);
		dSensor[1] = GetPtrVar(_pBTN->Sensor[1]);
		dOutput = GetPtrVar(_pBTN->output);
		if(_pBTN->Sensor[0] != 0 && _pBTN->Sensor[1] != 0 && dOutput != 0 )			// 2개 센서가 지정되어있다면,
		{
			if(dSensor[0] != 0 && dSensor[1] != 0)
			{
				bLamp_Enable = true;
			}
		}
		else if(_pBTN->Sensor[0] != 0 && _pBTN->Sensor[1] == 0 )		// 1개 센서가 지정되어있다면,
		{
			if(dSensor[0] != 0 && dOutput != 0 )
			{
				bLamp_Enable = true;
			}		
		}
		else             // 센서없이 Lamp를 띄워야 하는 경우.
		{
			if(dOutput != 0)
				bLamp_Enable = true;
		}
	}
	if(_pBTN->Lamp)
	{
		if(bLamp_Enable == true)
		{
			SetPtrVar(_pBTN->Lamp,1);
		}
		else if(bLamp_Enable == false)
		{
			SetPtrVar(_pBTN->Lamp, 0);
		}
	}
	nanosleep(&nsleep,NULL);      //1msec
}
// 타이머 버튼 실행 부
void TimerAct(tTimerBTN* _pBTN)
{
	
	struct timespec end;
	double	dDiff = 0.0;
	switch (_pBTN->IFBtn.status)
	{
	case RISING_EDGE:
		if(GetPtrVar(_pBTN->IFBtn.iInterlock_Lamp))
		{
			_pBTN->begin.tv_sec = 0;
			_pBTN->begin.tv_nsec = 0;
			clock_gettime(CLOCK_MONOTONIC, &_pBTN->begin);
			//printf( " ARC timer Cutter Not InterLock \n" );
		}
		else
			//printf( " ARC timer Cutter InterLock \n" );
		break;

	case HOLD:			
		clock_gettime(CLOCK_MONOTONIC, &end);
		dDiff = (double)(SPEC * (end.tv_sec-_pBTN->begin.tv_sec) + (end.tv_nsec-_pBTN->begin.tv_nsec))/1000000;
		if(dDiff > _pBTN->Delay)
			SetPtrVar(_pBTN->output, 1);
			
		
		#ifdef	_CONSOLE_DEBUG_MODE_
		//printf("dDiff Time : %lf, Delay Time : %d\n", dDiff, _pBTN->Delay);
		#endif

		break;
	case FALLING_EDGE:					break;
	case NONE:							break;
	default:							break;
	}
	
}

// 타이머 버튼 상태 부
void TimerStatus(tTimerBTN* _pBTN)
{
	struct timespec nsleep = {0};
	nsleep.tv_sec = 0;   // 1ms 	
	nsleep.tv_nsec = NANO_1MSEC * 1;   // 1ms 
	double dSensor[2] = {0,};
	double dOutput;
	bool	bLamp_Enable = false;
	// 현재 장비가 오토상태라면,
//	if()
//		_pBTN->IFBtn.iInterlock = true;
//	else if()
//		_pBTN->IFBtn.iInterlock = false;

	if(_pBTN->output != 0 )
	{
		dSensor[0] = GetPtrVar(_pBTN->Sensor[0]);
		dSensor[1] = GetPtrVar(_pBTN->Sensor[1]);
		dOutput = GetPtrVar(_pBTN->output);
		if(_pBTN->Sensor[0] != 0 && _pBTN->Sensor[1] != 0 && dOutput != 0 )			// 2개 센서가 지정되어있다면,
		{
			if(dSensor[0] != 0 && dSensor[1] != 0)
			{
				bLamp_Enable = true;
			}
		}
		else if(_pBTN->Sensor[0] != 0 && _pBTN->Sensor[1] == 0 )		// 1개 센서가 지정되어있다면,
		{
			if(dSensor[0] != 0 && dOutput != 0 )
			{
				bLamp_Enable = true;
			}		
		}
		else             // 센서없이 Lamp를 띄워야 하는 경우.
		{
			if(dOutput != 0)
				bLamp_Enable = true;
		}
	}
	if(_pBTN->Lamp)
	{
		if(bLamp_Enable == true)
		{
			SetPtrVar(_pBTN->Lamp,1);
		}
		else if(bLamp_Enable == false)
		{
			SetPtrVar(_pBTN->Lamp, 0);
		}
	}
	nanosleep(&nsleep,NULL);      //1msec
}


void JogAct(tJogBTN* _pBTN)
{
	//printf("jog Test\n");
	switch (_pBTN->IFBtn.status)
	{
		case RISING_EDGE:
			pshm->Motor[_pBTN->MotorNum].JogSpeed = 40;			// UI 조그 속도를 불러오기.
			Command(_pBTN->MoveCmd);
			break;
		case HOLD:												break;
		case FALLING_EDGE:
				Command(_pBTN->StopCmd);
				break;
		case NONE:												break;
		default:												break;
	}
}

void JogStatus(tJogBTN* _pBTN)
{
	struct timespec nsleep = {0};
	nsleep.tv_sec = 0;   // 1ms 	
	nsleep.tv_nsec = NANO_1MSEC * 1;   // 1ms 

	// 추가 모터 생길 시 조건 변경 (_pBTN->MotorNum == 16 )
	if(_pBTN->Lamp || _pBTN->Lamp_1)
	{
		//Servo Dancer 전용..
		if(pshm->Motor[_pBTN->MotorNum].ClosedLoop == 0)
		{
			SetPtrVar(_pBTN->Lamp, 0);
			SetPtrVar(_pBTN->Lamp_1, 1);
		}
		else 
		{
			if(pshm->Motor[_pBTN->MotorNum].AmpEna != 0)
			{
				SetPtrVar(_pBTN->Lamp, 1);
			}
			SetPtrVar(_pBTN->Lamp_1, 0);
		}
	}

	

}

void NP_ToggleAct(tNP_ToggleBTN* _pBTN)
{
	switch (_pBTN->IFBtn.status)
	{
		case RISING_EDGE:
			if(GetPtrVar(_pBTN->IFBtn.iInterlock_Lamp))
			{
				if(pshm->P[P_Status_NP_BTN_Upper_Unwinder])
				{
					if (GetPtrVar(_pBTN->On_Output[0]) == 1)
					{
						SetPtrVar(_pBTN->On_Output[0], 0);
						SetPtrVar(_pBTN->Off_Output[0], 1);
					}
					else if(GetPtrVar(_pBTN->On_Output[0]) == 0)
					{
						SetPtrVar(_pBTN->Off_Output[0], 0);
						SetPtrVar(_pBTN->On_Output[0], 1);
					}
				}
				else if(pshm->P[P_Status_NP_BTN_Lower_Unwinder])
				{
					// 인터락 위치
					if (GetPtrVar(_pBTN->On_Output[1]) == 1)
					{
						SetPtrVar(_pBTN->On_Output[1], 0);
						SetPtrVar(_pBTN->Off_Output[1], 1);
					}
					else if(GetPtrVar(_pBTN->On_Output[1]) == 0)
					{
						SetPtrVar(_pBTN->Off_Output[1], 0);
						SetPtrVar(_pBTN->On_Output[1], 1);
					}
				}
				//printf( " ARC NP Not InterLock \n " );
			}
			else
				//printf( " ARC NP InterLock \n " );
			break;
		case HOLD:							break;
		case FALLING_EDGE:					break;
			if(GetPtrVar(_pBTN->IFBtn.iInterlock_Lamp))
			{
				if(_pBTN->Bool_Vac == 1)
				{
					if(pshm->P[P_Status_NP_BTN_Upper_Unwinder])
					{
						if(GetPtrVar(_pBTN->Off_Output[0]) != 0)
						{
							SetPtrVar(_pBTN->On_Output[0], 0);
							SetPtrVar(_pBTN->Off_Output[0], 0);						
						}
					}
					else if(pshm->P[P_Status_NP_BTN_Lower_Unwinder])
					{
						if(GetPtrVar(_pBTN->Off_Output[1]) != 0)
						{
							SetPtrVar(_pBTN->On_Output[1], 0);
							SetPtrVar(_pBTN->Off_Output[1], 0);						
						}
					}
				}
			}
		case NONE:							break;
		default:							break;
	}

}

void NP_JogAct(tJogBTN* _pBTN)
{
	switch (_pBTN->IFBtn.status)
	{
		case RISING_EDGE:
			if(GetPtrVar(_pBTN->IFBtn.iInterlock_Lamp))
			{
				if(pshm->P[P_Status_NP_BTN_Upper_Unwinder])
				{
					pshm->Motor[23].JogSpeed = 40;			// UI 조그 속도를 불러오기.
					if(_pBTN->Direction == Dir_Plus)
					{
						_pBTN->MoveCmd = "#23j+";
					}
					else if(_pBTN->Direction == Dir_Minus)
					{
						_pBTN->MoveCmd = "#23j-";
					}
					_pBTN->StopCmd = "#23j/";
				}
				else if(pshm->P[P_Status_NP_BTN_Lower_Unwinder])
				{
					pshm->Motor[24].JogSpeed = 40;			// UI 조그 속도를 불러오기.
					if(_pBTN->Direction == Dir_Plus)
					{
						_pBTN->MoveCmd = "#24j+";
					}
					else if(_pBTN->Direction == Dir_Minus)
					{
						_pBTN->MoveCmd = "#24j-";
					}
					_pBTN->StopCmd = "#24j/";
				}
				Command(_pBTN->MoveCmd);
				//printf( "ARC NP Jog NotInterLock \n " );
			}
			else
				//printf( "ARC NP Jog InterLock \n " );
			break;
		case HOLD:												break;
		case FALLING_EDGE:
			if(_pBTN->IFBtn.iInterlock_Lamp)
			{
				Command(_pBTN->StopCmd);
			}
			break;
		case NONE:												break;
		default:												break;
	}
}


// ARC Name Plate 전용 신규 버튼 동작 함수 추가
// 1. 상승 하강 버튼이 따로있음
// 2. 푸시버튼은 뗀 순간 출력을 0으로 만들기 때문에 푸시 버튼에 엮는것 불가
// 3. 토글버튼은 한번 더 누른 순간 출력을 0으로 만들기때문에 두번 눌러야 행해지는부분이 있어서 불가


void NP_Plate_Each_Btn(tNP_Plate_BTN* _pBTN)
{

	switch (_pBTN->IFBtn.status)
	{
		case RISING_EDGE:
		if(GetPtrVar(_pBTN->IFBtn.iInterlock_Lamp))
		{
			if(pshm->P[P_Status_NP_BTN_Upper_Unwinder])
			{
				SetPtrVar(_pBTN->On_Output[0], 1);
				SetPtrVar(_pBTN->Off_Output[0], 0);
			}
			else if( pshm->P[P_Status_NP_BTN_Lower_Unwinder] )
			{
				SetPtrVar(_pBTN->On_Output[1], 1);
				SetPtrVar(_pBTN->Off_Output[1], 0);
			}
			//printf( "ARC NP Plate Not InterLock \n " );
		}
		else
			//printf( "ARC NP Plate InterLock \n " );

		break;
		
		case HOLD:							break;
		case FALLING_EDGE:					break;
		case NONE:							break;
		default:							break;
	}

}