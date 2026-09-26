//#include "../../Include/pp_proj.h"

#include "btn.h"

// 동적 할당 소멸
void Destructor(IBtn** _BTN)
{
	int i = 0;
	for(i = 0; i < BTN_NAME_LAST; i++)
	{
		printf("Mem Addr : %d\n",&_BTN[i]); 
		printf("Mem Addr : %d\n",&_BTN[i]); 

		free(_BTN[i]);
		printf("Heap Btn : %d Allocation Free\n",i); 
	}

}

int InterlockCheck(IBtn** _BTN, int Interlock)
{
	int i = 1;
	while(i < BTN_NAME_LAST)
	{
		if(Interlock == 1)		// 인터락이 걸렸다면,
		{		
			_BTN[i]->bInterlock = true;
		}
		else if(Interlock == 0)
		{		
			_BTN[i]->bInterlock = false;
		}

		if(_BTN[i]->iInterlock_Lamp)
		{
			if(_BTN[i]->bInterlock == true)
			{
				printf("InterLockLamp: %d\n",_BTN[i]->iInterlock_Lamp);
				SetPtrVar(_BTN[i]->iInterlock_Lamp,0);
			}
			else
			{
				printf("InterLockLamp_2: %d\n",_BTN[i]->iInterlock_Lamp);
				SetPtrVar(_BTN[i]->iInterlock_Lamp,1);
			}
		}
		
		i++;
	}
	return 1;
}

void* BTN_Execute(void* arg) // 유닛별 버튼정보를 체크하여 잚못된 커멘드에 대한 명령을 막는다.
{
	int iUnit_No = 0;						// 버튼 유닛 번호. ( 버튼 커멘드 검출용 ) 

	struct timespec nsleep = {0};
	nsleep.tv_sec = 0;   // 1ms 	
	nsleep.tv_nsec = NANO_1MSEC * 1;   // 1ms 



	struct timespec TESTnsleep = {0};
	TESTnsleep.tv_sec = 0;   // 1s 	
	TESTnsleep.tv_nsec = NANO_1MSEC * 4;   // 1ms 

	pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, NULL);
	pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL);
	IBtn** BtnInfo = (IBtn**)arg;
	int iOld_Edge = 1;

	printf("Create Execute\n");

	while (pshm->P[7777] == 0)
	{
		for (iUnit_No = 1; iUnit_No < BTN_NAME_LAST; iUnit_No++)
		{ // 버튼검색.
					// PLC 터치 입력 io 들어	
			#ifdef	_CONSOLE_DEBUG_MODE_
				//printf("cur input Data : %d, Cur Index : %d\n", *BtnInfo[iUnit_No]->pPMACAddr, iUnit_No);
			#endif 
			if (*BtnInfo[iUnit_No]->pPMACAddr == BtnInfo[iUnit_No]->Key)
			{
				// 이전에 눌려져있었으면 -> prev가 1이면
				if (BtnInfo[iUnit_No]->bPrev)
				{
					BtnInfo[iUnit_No]->status = HOLD;	// 유지상태
					//printf("Hold On\n");
				}
				else
				{
					// 처음 눌려진거라면 -> prev가 0이면
					BtnInfo[iUnit_No]->status = RISING_EDGE;	// 상승엣지 상태
					//printf("Rising Edge On\n");
				}
				BtnInfo[iUnit_No]->bPrev = true;		// 한번 들어오면 true로 변경
			}
			else
			{
				// 입력 io가 사라지면,
				if (*BtnInfo[iUnit_No]->pPMACAddr != BtnInfo[iUnit_No]->Key)
				{
					// 이전에 눌려져있었으면 -> prev가 1이면
					if (BtnInfo[iUnit_No]->bPrev)
					{
						BtnInfo[iUnit_No]->status = FALLING_EDGE;	// 하강엣지 상태
						//printf("Falling Edge On\n");
					}
					else
					{
						// 그전에도 0이였다면 -> prev가 0이면
						BtnInfo[iUnit_No]->status = NONE;			// clear상태
						//printf("NONE On\n");
						// to do -> 상태 확인 구문 추가해야함
					}
					BtnInfo[iUnit_No]->bPrev = false;		// 한번 들어오면 false로 변경
				}
			}

			if (BtnInfo[iUnit_No]->status != NONE && BtnInfo[iUnit_No]->bInterlock == false)
			{
				if(BtnInfo[iUnit_No]->pfnAct != NULL)
					BtnInfo[iUnit_No]->pfnAct(BtnInfo[iUnit_No]);
			}

			if(iUnit_No == ePartition_Down && pshm->P[P_PMAC_Current_Mode] == 2)
			{
				if((pshm->P[P_Motor_Current_Pos + 1] < pshm->P[P_Cathode_1TR_T_Align_POS] + 0.5 && pshm->P[P_Motor_Current_Pos + 1] > pshm->P[P_Cathode_1TR_T_Align_POS] - 0.5) && (pshm->P[P_Motor_Current_Pos + 2] < pshm->P[P_Anode_1TR_T_Align_POS] + 0.5 && pshm->P[P_Motor_Current_Pos + 2] > pshm->P[P_Anode_1TR_T_Align_POS] - 0.5))
				{
					BtnInfo[iUnit_No]->bInterlock = false;
					SetPtrVar(BtnInfo[iUnit_No]->iInterlock_Lamp,1);
				}
				else
				{
					BtnInfo[iUnit_No]->bInterlock = true;
					SetPtrVar(BtnInfo[iUnit_No]->iInterlock_Lamp,0);
				}
			}
			//if(BtnInfo[iUnit_No]->pfnStatus != NULL)
			//	BtnInfo[iUnit_No]->pfnStatus(BtnInfo[iUnit_No]);
			nanosleep(&nsleep,NULL);      //1msec

		}

		if(pshm->P[P_PMAC_Current_Mode] == 1 && iOld_Edge == 0)
		{
			if(InterlockCheck(BtnInfo,1) == 1)
			{
				iOld_Edge = 1;
			}
		}
		else if(pshm->P[P_PMAC_Current_Mode] == 2 && iOld_Edge == 1)
		{
			if(InterlockCheck(BtnInfo, 0) == 1)
			{
				iOld_Edge = 0;
			}
		}	
		
		/*
		if( GetPtrVar(M_X_BTN_CMD_Mode_From_PLC) == 1 && iOld_Edge == 0 )		// 셀렉스위치가 Auto로 넘어가면,
		{
			iOld_Edge = 1;
			InterlockCheck(BtnInfo,1);
		}
		else if(GetPtrVar(M_X_BTN_CMD_Mode_From_PLC) == 0 && iOld_Edge == 1)
		{
			iOld_Edge = 0;
			InterlockCheck(BtnInfo, 0);
		}
		*/
		//nanosleep(&TESTnsleep,NULL);      //1msec
	}

	Destructor(BtnInfo);
	pshm->P[7777] = 0;

}

