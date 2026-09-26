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

		//Motor_Status[i].nStatus = (unsigned int*)&pshm->Motor[i + 1].Status[0];
		//Motor_Status[i].dMotorCurrentPos = (double*)&pshm->P[P_Motor_Current_Pos + i + 1];
		//	실제 장비 즉 크랭크 축이 생긴다면 적용해야 하는 부분 [ 참조 : 2025.09.01 크랭크 Z축 위치값 변환 ]
		switch( i )
		{
			default:
				Motor_Status[i].nStatus = (unsigned int*)&pshm->Motor[i + 1].Status[0];
				Motor_Status[i].dMotorCurrentPos = (double*)&pshm->P[P_Motor_Current_Pos + i + 1];
			break;

			case Cathode_1st_Z:
				Motor_Status[i].nStatus = (unsigned int*)&pshm->Motor[i + 1].Status[0];
				Motor_Status[i].dMotorCurrentPos = (double*)&pshm->P[P_Cathode_1st_PNP_Z_Real_Move_Pos];
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
		
	}
}

void* Motor_Status_Update(void* arg)
{
	pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, NULL);	
    pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS,NULL);

	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_uSEC * 30000;   // 30밀리 
	unsigned int nCurPageNum;
	int i = 0;
	while(1)
	{
		nanosleep(&nsleep, NULL);

		nCurPageNum = Servo_Scene_Select();
		if(nCurPageNum != 0 )
		{
			Update_Jog_Motor_Status(nCurPageNum);
		}

		for(i = 1; i <= MotorCount; i++)
		{
			Motor_Load_Ratio(i); // 상시로 부하율 업데이트
		}
	}
}

void Update_Jog_Motor_Status(int nMotorNum)
{
	//volatile GateArray3 *Gate3;

	int i = 0;
	unsigned int nGateIndex, nChanIndex = 0;
	int nStatusBitsData = 0;
	
	int nUdataIndex = nMotorNum - 1;
	
	int nMotorCurrentPos = 0;
	//printf("%x\n", *Motor_Status[nUdataIndex].nStatus);
	// 20400 모터 위치 데이터				0
	// 20401								1
	// 20402.하위 모터 상태 데이터			2
	// 20402.상위 interlock

	// 20405.하위 레시피 위치 체크			4

	*Write_Udata[nUdataIndex][0].byte_4 = (int)(*Motor_Status[nUdataIndex].dMotorCurrentPos * Pos_Scale);

	// 모터 상태 데이터
	// bit0 -> 플러스 리밋
	Write_Udata[nUdataIndex][2].bit31->bit0 = Get_Motor_Status(nMotorNum, def_PlusLimit) ^ 0x01; 
	// bit1 -> 마이너스 리밋
	Write_Udata[nUdataIndex][2].bit31->bit1 = Get_Motor_Status(nMotorNum, def_MinusLimit) ^ 0x01;
	// bit2 -> ERR
	Write_Udata[nUdataIndex][2].bit31->bit2 = Get_Motor_Status(nMotorNum, def_AmpFault);
	// bit3 -> ready
	if(Get_Motor_Status(nMotorNum, def_AmpFault) == 0 && Get_Motor_Status(nMotorNum, def_ClosedLoop) == 1)
	{
		Write_Udata[nUdataIndex][2].bit31->bit3 = 1;
	}
	else
	{
		Write_Udata[nUdataIndex][2].bit31->bit3 = 0;
	}
//	// bit4 -> dog (home)
//	nGateIndex = nMotorNum / 4;
//	nChanIndex = nMotorNum % 4;
//	if(nChanIndex == 0)
//	{
//		nChanIndex = 3;
//		nGateIndex -= 1;
//	}
//	else nChanIndex -= 1;

	//Gate3 = GetGate3MemPtr(nGateIndex);
	//Write_Udata[nUdataIndex][2].bit31->bit4 = (Gate3->Chan[nChanIndex].Status & def_HomeFlag) ^ 0x01;
	// bit5 -> Origin HomeRequest
	if(Get_Motor_Status(nMotorNum, def_EncLoss) == 1)
	{
		Write_Udata[nUdataIndex][2].bit31->bit5 = 1;
	}
	else 
	{
		Write_Udata[nUdataIndex][2].bit31->bit5 = 0;
	}
	// bit6 -> Servo on/off
	Write_Udata[nUdataIndex][2].bit31->bit6 = Get_Motor_Status(nMotorNum, def_AmpEna);
	// bit7 -> Home Complete
	Write_Udata[nUdataIndex][2].bit31->bit7 = (int)pshm->P[P_PMAC_Homing_CHK + nMotorNum];
	// bit8 -> Origin Request
	Write_Udata[nUdataIndex][2].bit31->bit8 = Get_Motor_Status(nMotorNum, def_EncLoss);
	// bit9 -> origin interlock
	// bit10-> 모터 Busy
	Write_Udata[nUdataIndex][2].bit31->bit10 = Get_Motor_Status(nMotorNum, def_DesVelZero) ^ 1;

	// [ 참조: 26.01.14 페이징 버튼 추가 ]
	// PNP Motor PhaseFound 비트 추가  bit 11 
	if( nMotorNum <= 4 )		// PNP Motor Num 		
	{
		Write_Udata[nUdataIndex][2].bit31->bit11 = pshm->Motor[nMotorNum].PhaseFound;		// PhaseFound 값을 대입
	} 

} 

void Motor_Load_Ratio(int nMotorNum)
{
	// 20403.하위 피크 부하율				3
	// 20403.상위 정격 부하율
	int nEffectiveLoadRealValue[MotorCount] = {0};
	//int nUdataIndex = g_Page_Num - 1;
	// 부하율이 서보 페이지 선택시에만 변경되는 부분을 수정함.
	// g_Page_Num = unsigned int Cur_Page_Num = Servo_Scene_Select();
	// 조그 모터가 선택되어야 부하율이 업데이트 되는부분이므로 상시로 돌리는 구문으로 변경
	int nLo_16Bit = 0;
	int nHi_16Bit = 0;
	int nUdataIndex = nMotorNum - 1;
	int i_Ecat_ratio_data = 0;

	// 피크 부하율
	if(pshm->P[P_Jelly_Roll_Total_Count] != pshm->P[P_Jelly_Roll_Total_Count_Old])			// 완 젤리롤 갯수에 따른 
	{

		// 1개의 젤리롤을 완성 시키면, 하위비트 초기화 
		for(nUdataIndex = 0; nUdataIndex < MotorCount ; nUdataIndex++ )
		{
			*Write_Udata[nUdataIndex][3].byte_4 = 0xffff0000;
		}
	}
	else
	{
		if(nMotorNum >= 1 && nMotorNum <= 4)
		{
			nEffectiveLoadRealValue[nUdataIndex] = abs(pshm->Motor[nMotorNum].IqCmd / pshm->Motor[nMotorNum].I2tSet * 100); // 현재 부하율 업데이트
		}
		else if( nMotorNum >= 33 )	// ecat Motor 부하 측정		[ 참조: 2026.06.17 Ecat Ratio Check Prog ]
		{
			i_Ecat_ratio_data = GetPtrArrayVar(M_Ecat_Load_Ratio,nMotorNum);		// Ecat ActTorque pointer value 

			if( i_Ecat_ratio_data >= 0 && i_Ecat_ratio_data <= 32767 )
			{
				nEffectiveLoadRealValue[nUdataIndex] = i_Ecat_ratio_data / 10;				// PLC에 올려주는 부하 ( GUI ) 절댓값
				//pshm->P[P_Ecat_Load_Ratio + nMotorNum] = i_Ecat_ratio_data / 10;			// Plot Data로 찍을때 사용하는 P변수 음수도 있음
			}
			else
			{
				nEffectiveLoadRealValue[nUdataIndex] = (65536 - i_Ecat_ratio_data) / 10;	// PLC에 올려주는 부하 ( GUI )	절댓값
				//pshm->P[P_Ecat_Load_Ratio + nMotorNum] = (i_Ecat_ratio_data-65536) / 10;	// Plot Data로 찍을때 사용하는 P변수	음수도 있음		
			}
		}
		else
		{
			nEffectiveLoadRealValue[nUdataIndex] = abs(pshm->Motor[nMotorNum].IqCmd / ((pshm->Motor[nMotorNum].MaxDac/10)*3) * 100 ); // 현재 부하율 업데이트
		}

//		if( nEffectiveLoadSumCount[nUdataIndex] >= 10 )		// 10번의 순환평균 cnt가 있을 시 
//		{
			nLo_16Bit = *Write_Udata[nUdataIndex][3].byte_4 & 0x0000ffff;									// 하위 비트 분리
			nHi_16Bit = *Write_Udata[nUdataIndex][3].byte_4 & 0xffff0000;									// 상위 비트 분리
			
			//nHi_16Bit = (int)dEffectiveLoadSumValue[nUdataIndex];										// 현재까지의 실효 저장
			nHi_16Bit = nEffectiveLoadRealValue[nUdataIndex];
			if(nHi_16Bit > nLo_16Bit)																// 현재 부하율이 이전 피크 부하율 보다 높으면
			{
				nLo_16Bit = nHi_16Bit;																// 피크 부하율 갱신
			}
			else
			{
				nLo_16Bit = *Write_Udata[nUdataIndex][3].byte_4 & 0x0000ffff;	
			}

			*Write_Udata[nUdataIndex][3].byte_4 = (nHi_16Bit << 16) | nLo_16Bit;
//			nEffectiveLoadSumCount[nUdataIndex] = 0;
//			dEffectiveLoadSumValue[nUdataIndex] = 0;
//		}
//		else
//		{
//			dEffectiveLoadSumValue[nUdataIndex] = ((dEffectiveLoadSumValue[nUdataIndex] * nEffectiveLoadSumCount[nUdataIndex]) + nEffectiveLoadRealValue[nUdataIndex]) / (nEffectiveLoadSumCount[nUdataIndex]+1);
//			nEffectiveLoadSumCount[nUdataIndex]++;	
//		}
	}
	pshm->P[P_Jelly_Roll_Total_Count_Old] = pshm->P[P_Jelly_Roll_Total_Count];
}

// 피크 부하율
//void Motor_Load_Ratio()
//{
//	// 20403.하위 피크 부하율				3
//	// 20403.상위 정격 부하율
//	int nEffectiveLoadRealValue = 0;
//	int nUdataIndex = g_Page_Num - 1;
//	int nLo_16Bit = 0;
//	int nHi_16Bit = 0;
//
//	nEffectiveLoadRealValue = abs(pshm->Motor[g_Page_Num].IqCmd / 32767 * 100 * 3);		// 현재 부하율
//
//	// 피크 부하율
//	if(pshm->P[P_Jelly_Roll_Total_Count] != pshm->P[P_Jelly_Roll_Total_Count_Old])
//	{
//		*Write_Udata[nUdataIndex][3].byte_2[LO_16bit] = 0;
//	}
//	else
//	{
//		// 현재 부하율 과 이전 피크 부하율 비교하여 갱신하거나 넘어가거나
//
//		if(((GetCPUClock() - dLoadTimer)/1000000.0) > nLoadTimeOut)
//		{
//			nLo_16Bit = *Write_Udata[nUdataIndex][3].byte_4 & 0xffff0000;		// 하위 비트 분리
//			nHi_16Bit = *Write_Udata[nUdataIndex][3].byte_4 & 0x0000ffff;		// 상위 비트 분리
//
//			nHi_16Bit = (int)dEffectiveLoadSumValue[nUdataIndex] << 16;			// 현재까지의 실효 저장
//
//			if((nHi_16Bit >> 16) > nLo_16Bit)		// 현재 부하율이 이전 피크 부하율 보다 높으면
//			{
//				nLo_16Bit = nHi_16Bit >> 16;		// 피크 부하율 갱신
//
//				*Write_Udata[nUdataIndex][3].byte_4 = nHi_16Bit | nLo_16Bit;	// 상위 하위 비트 합산
//			}
//
//			// 순환평균 초기화
//			dLoadTimer = GetCPUClock();
//			nEffectiveLoadSumCount[nUdataIndex] = 0;
//			dEffectiveLoadSumValue[nUdataIndex] = 0;
//		}
//		else
//		{
//			dEffectiveLoadSumValue[nUdataIndex] = ((dEffectiveLoadSumValue[nUdataIndex] * nEffectiveLoadSumCount[nUdataIndex]) + nEffectiveLoadRealValue) / (nEffectiveLoadSumCount[nUdataIndex]+1);
//			nEffectiveLoadSumCount[nUdataIndex]++;
//		}
//	}
//	pshm->P[P_Jelly_Roll_Total_Count_Old] = pshm->P[P_Jelly_Roll_Total_Count];
//}

int Get_Motor_Status(int nMotorNum, int nElement)
{
	if(nMotorNum > 0 && nMotorNum <= MotorCount)
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
}



//switch( nMotorNum )
//{				// ecat address
//	case 33:	i_Ecat_Addr = 4107;		break;
//	case 34:	i_Ecat_Addr = 4114;		break;
//	case 35:	i_Ecat_Addr = 4121;		break;
//	case 36:	i_Ecat_Addr = 4128;		break;
//	case 37:	i_Ecat_Addr = 4135;		break;
//	case 38:	i_Ecat_Addr = 4143;		break;
//	case 39:	i_Ecat_Addr = 4151;		break;
//	case 40:	i_Ecat_Addr = 4158;		break;
//	case 41:	i_Ecat_Addr = 4166;		break;
//	case 42:	i_Ecat_Addr = 4174;		break;
//	case 43:	i_Ecat_Addr = 4181;		break;
//	case 44:	i_Ecat_Addr = 4188;		break;
//	case 45:	i_Ecat_Addr = 4195;		break;
//	case 46:	i_Ecat_Addr = 4202;		break;
//	case 47:	i_Ecat_Addr = 4209;		break;
//	case 48:	i_Ecat_Addr = 4216;		break;
//}
//if( pshm->ECAT[0].IO[i_Ecat_Addr].Data >= 0 && pshm->ECAT[0].IO[i_Ecat_Addr].Data <= 32767 )
//	nEffectiveLoadRealValue[nUdataIndex] = pshm->ECAT[0].IO[i_Ecat_Addr].Data / 10;					
//else
//	nEffectiveLoadRealValue[nUdataIndex] = (65536 - pshm->ECAT[0].IO[i_Ecat_Addr].Data) / 10;