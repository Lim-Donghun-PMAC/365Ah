#include "Jog.h"

// 피크 부하율 
double dLoadTimer = 0;
int nLoadTimeOut = 1;
int nEffectiveLoadSumCount[MotorCount];
double dEffectiveLoadSumValue[MotorCount];

extern int g_Page_Num;
int nOld_Page_Num;

void Motor_Status_Init()
{
	int i, j = 0;
	int nIndex = 0;

	for(i = 0; i < MotorCount; i++)
	{
		for(j = 0; j < 7; j++)
		{
			Write_Udata[i][j].byte_4 = (int*)pushm + (StatusStartAddr + nIndex);

			nIndex++;
		}

		Motor_Status[i].nStatus = (unsigned int*)&pshm->Motor[i + 1].Status[0];
		Motor_Status[i].dMotorCurrentPos = (double*)&pshm->P[P_Motor_Current_Pos + i + 1];
		/*	실제 장비 즉 크랭크 축이 생긴다면 적용해야 하는 부분 [ 참조 : 2025.09.01 크랭크 Z축 위치값 변환 ]
		switch( i )
		{
			default:
				Motor_Status[i].nStatus = (unsigned int*)&pshm->Motor[i + 1].Status[0];
				Motor_Status[i].dMotorCurrentPos = (double*)&pshm->P[P_Motor_Current_Pos + i + 1];
			break;

			case Cathode_1st_Z:
				Motor_Status[i].nStatus = (unsigned int*)&pshm->Motor[i + 1].Status[0];
				Motor_Status[i].dMotorCurrentPos = (double*)&pshm->P[P_Cathode_1st_PNP_Z_Real_Move_Pos];
				pshm->P[2] = *Motor_Status[i].dMotorCurrentPos;
			break;

			case Anode_1st_Z:
				Motor_Status[i].nStatus = (unsigned int*)&pshm->Motor[i + 1].Status[0];
				Motor_Status[i].dMotorCurrentPos = (double*)&pshm->P[P_Anode_1st_PNP_Z_Real_Move_Pos];
			break;

			case Cathode_2nd_Z:
				Motor_Status[i].nStatus = (unsigned int*)&pshm->Motor[i + 1].Status[0];
				Motor_Status[i].dMotorCurrentPos = (double*)&pshm->P[P_Cathode_2nd_PNP_Z_Real_Move_Pos];
			break;

			case Anode_2nd_Z:
				Motor_Status[i].nStatus = (unsigned int*)&pshm->Motor[i + 1].Status[0];
				Motor_Status[i].dMotorCurrentPos = (double*)&pshm->P[P_Anode_2nd_PNP_Z_Real_Move_Pos];
			break;
		}
		*/
	}
}

void* Motor_Status_Update(void* arg)
{
	pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, NULL);	
    pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS,NULL);

	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_1MSEC*10;   // 10밀리 


	while(1)
	{
		nanosleep(&nsleep, NULL);

		if(g_Page_Num != 0)
		{
			if(g_Page_Num != nOld_Page_Num)
			{
				nOld_Page_Num = g_Page_Num;
			}
			Update_Jog_Motor_Status();
			Motor_Load_Ratio();
		}
	}
}

void Update_Jog_Motor_Status()
{
	int i = 0;
	unsigned int nGateIndex, nChanIndex = 0;
	int nStatusBitsData = 0;

	int nUdataIndex = g_Page_Num - 1;
	int nMotorCurrentPos = 0;
	//printf("%x\n", *Motor_Status[nUdataIndex].nStatus);
	// 20400 모터 위치 데이터				0
	// 20401								1
	// 20402.하위 모터 상태 데이터			2
	// 20402.상위 interlock

	// 20405.하위 레시피 위치 체크			4

	// 모터 위치 데이터
	/*	실제 장비 즉 크랭크 축이 생긴다면 적용해야 하는 부분 [ 참조 : 2025.09.01 크랭크 Z축 위치값 변환 ]
	if( nUdataIndex == Cathode_1st_Z || nUdataIndex == Anode_1st_Z || nUdataIndex == Cathode_2nd_Z  || nUdataIndex == Anode_2nd_Z )
	{
		switch( nUdataIndex )
		{
			case Cathode_1st_Z:
				*Write_Udata[nUdataIndex][0].byte_4 = (int)(*Motor_Status[nUdataIndex].dMotorCurrentPos * Pos_Scale );
			break;
			case Anode_1st_Z:
				*Write_Udata[nUdataIndex][0].byte_4 = (int)(*Motor_Status[nUdataIndex].dMotorCurrentPos * Pos_Scale );
			break;
			case Cathode_2nd_Z:
				*Write_Udata[nUdataIndex][0].byte_4 = (int)(*Motor_Status[nUdataIndex].dMotorCurrentPos * Pos_Scale );
			break;
			case Anode_2nd_Z:
				*Write_Udata[nUdataIndex][0].byte_4 = (int)(*Motor_Status[nUdataIndex].dMotorCurrentPos * Pos_Scale );
			break;
		}
	}
	else
		*Write_Udata[nUdataIndex][0].byte_4 = (int)(*Motor_Status[nUdataIndex].dMotorCurrentPos * Pos_Scale);
	*/
	*Write_Udata[nUdataIndex][0].byte_4 = (int)(*Motor_Status[nUdataIndex].dMotorCurrentPos * Pos_Scale);

	// 모터 상태 데이터
	// bit0 -> 플러스 리밋
	Write_Udata[nUdataIndex][2].bit31->bit0 = Get_Motor_Status(g_Page_Num, def_PlusLimit) ^ 0x01; 
	// bit1 -> 마이너스 리밋
	Write_Udata[nUdataIndex][2].bit31->bit1 = Get_Motor_Status(g_Page_Num, def_MinusLimit) ^ 0x01;
	// bit2 -> ERR
	Write_Udata[nUdataIndex][2].bit31->bit2 = Get_Motor_Status(g_Page_Num, def_AmpFault);
	// bit3 -> ready
	if(Get_Motor_Status(g_Page_Num, def_AmpFault) == 0 && Get_Motor_Status(g_Page_Num, def_ClosedLoop) == 1)
	{
		Write_Udata[nUdataIndex][2].bit31->bit3 = 1;
	}
	else
	{
		Write_Udata[nUdataIndex][2].bit31->bit3 = 0;
	}
	// bit4 -> dog (home)
	nGateIndex = g_Page_Num / 4;
	nChanIndex = g_Page_Num % 4;
	if(nChanIndex == 0)
	{
		nChanIndex = 3;
		nGateIndex -= 1;
	}
	else nChanIndex -= 1;

	//Write_Udata[nUdataIndex][2].bit31.bit4 = pshm->Gate3[nGateIndex].Chan[nChanIndex].HomeFlag ^ 0x01;
	// bit5 -> Origin HomeRequest
	if(Get_Motor_Status(g_Page_Num, def_EncLoss) == 1 && pshm->P[100] == 2)
	{
		Write_Udata[nUdataIndex][2].bit31->bit5 = 1;
	}
	else 
	{
		Write_Udata[nUdataIndex][2].bit31->bit5 = 0;
	}
	// bit6 -> Servo on/off
	Write_Udata[nUdataIndex][2].bit31->bit6 = Get_Motor_Status(g_Page_Num, def_AmpEna);
	// bit7 -> Home Complete
//	*Write_Udata[g_Page_Num][2].bit31->bit7 = pshm->P_PMAC_Homing_CHK(g_Page_Num);
	// bit8 -> Origin Request
	Write_Udata[nUdataIndex][2].bit31->bit8 = Get_Motor_Status(g_Page_Num, def_EncLoss);
	// bit9 -> origin interlock
	// bit10-> 모터 Busy
	Write_Udata[nUdataIndex][2].bit31->bit10 = Get_Motor_Status(g_Page_Num, def_DesVelZero) ^ 1;
}

// 피크 부하율
void Motor_Load_Ratio()
{
	// 20403.하위 피크 부하율				3
	// 20403.상위 정격 부하율
	int nEffectiveLoadRealValue = 0;
	int nUdataIndex = g_Page_Num - 1;
	int nLo_16Bit = 0;
	int nHi_16Bit = 0;

	nEffectiveLoadRealValue = abs(pshm->Motor[g_Page_Num].IqCmd / 32767 * 100 * 3);		// 현재 부하율

	// 피크 부하율
	if(pshm->P[P_Jelly_Roll_Total_Count] != pshm->P[P_Jelly_Roll_Total_Count_Old])
	{
		*Write_Udata[nUdataIndex][3].byte_2[LO_16bit] = 0;
	}
	else
	{
		// 현재 부하율 과 이전 피크 부하율 비교하여 갱신하거나 넘어가거나

		if(((GetCPUClock() - dLoadTimer)/1000000.0) > nLoadTimeOut)
		{
			nLo_16Bit = *Write_Udata[nUdataIndex][3].byte_4 & 0xffff0000;		// 하위 비트 분리
			nHi_16Bit = *Write_Udata[nUdataIndex][3].byte_4 & 0x0000ffff;		// 상위 비트 분리

			nHi_16Bit = (int)dEffectiveLoadSumValue[nUdataIndex] << 16;			// 현재까지의 실효 저장

			if((nHi_16Bit >> 16) > nLo_16Bit)		// 현재 부하율이 이전 피크 부하율 보다 높으면
			{
				nLo_16Bit = nHi_16Bit >> 16;		// 피크 부하율 갱신

				*Write_Udata[nUdataIndex][3].byte_4 = nHi_16Bit | nLo_16Bit;	// 상위 하위 비트 합산
			}

			// 순환평균 초기화
			dLoadTimer = GetCPUClock();
			nEffectiveLoadSumCount[nUdataIndex] = 0;
			dEffectiveLoadSumValue[nUdataIndex] = 0;
		}
		else
		{
			dEffectiveLoadSumValue[nUdataIndex] = ((dEffectiveLoadSumValue[nUdataIndex] * nEffectiveLoadSumCount[nUdataIndex]) + nEffectiveLoadRealValue) / (nEffectiveLoadSumCount[nUdataIndex]+1);
			nEffectiveLoadSumCount[nUdataIndex]++;
		}
	}
	pshm->P[P_Jelly_Roll_Total_Count_Old] = pshm->P[P_Jelly_Roll_Total_Count];
}


int Get_Motor_Status(int nMotorNum, int nElement)
{
	if(*Motor_Status[nMotorNum -1].nStatus & nElement)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}