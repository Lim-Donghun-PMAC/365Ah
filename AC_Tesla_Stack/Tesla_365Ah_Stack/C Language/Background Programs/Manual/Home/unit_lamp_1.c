#include "_home.h"


void Unit_Lamp_Initialize()
{
	// 홈 진행 램프 
	Write_Homing_Status[0] = (unsigned int*)pushm + 20992;
	Write_Homing_Status[1] = (unsigned int*)pushm + 20993;

	// 통합 유닛 램프

	UI_Unit_Status[0] = (unsigned int*)pushm + 20946;
	UI_Unit_Status[1] = (unsigned int*)pushm + 20947;
	UI_Unit_Status[2] = (unsigned int*)pushm + 20948;

}

void* Unit_Lamp_Udpate(void* arg)
{
	pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, NULL);
	pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL);
	Stack_Information* ptr = (Stack_Information*)arg;
	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_uSEC*1000;   // 1ms		NANO_uSEC 는 1000이고, nano초에서 u초로 변환

	int i = 0;
	int nReturn = 0;
	while(1)
	{

		// 각 모터 램프 확인
		for(i = 0; i < MotorCount; i++)
		{
			if( i >= M_Spare_3 && i <= M_Spare_6 || i >= M_Spare_1 && i <= M_Spare_2 ) continue;

			if(pshm->P[P_PMAC_Current_Mode] == 2)
			{
				Motor_Manual_Lamp(i);
			}
			else
			{
				Motor_Auto_Lamp(i);
			}
			pshm->P[200 + i] = Motor_Lamp[i].nMotorUnitStatus;	// P201 ~ P248
			nanosleep(&nsleep,NULL);      //5msec
		}
		nanosleep(&nsleep,NULL);      //5msec
		
		int nSize = 0;
		int arr_bit_Temp[5] = {0};
		// 통합 램프 확인
		for(i = 0; i < _total_part; i++)
		{
			nSize = Set_Part_Status(i);
			nReturn = All_Elements_equal(arr_Part_Temp, nSize);
			if(nReturn != -1)
			{
				arr_bit_Temp[i] = Write_Lamp_Data(i, nReturn);
				continue;
			}

			nReturn = Any_Elements_equal(arr_Part_Temp, nSize);
			if(nReturn != -1)
			{
				arr_bit_Temp[i] = Write_Lamp_Data(i, nReturn);
			}
			nanosleep(&nsleep,NULL);      //5msec
		}
		nanosleep(&nsleep,NULL);      //5msec
		*UI_Unit_Status[0] = (*UI_Unit_Status[0] & 0x0000ffff) | arr_bit_Temp[0]; //세파
		*UI_Unit_Status[1] = arr_bit_Temp[1] | arr_bit_Temp[2]; // 음극, 양극
		*UI_Unit_Status[2] = arr_bit_Temp[3] | arr_bit_Temp[4]; // 스택, unload
	}
}

void Motor_Manual_Lamp(int nMotorNum)
{
	// P_PMAC_Homing_CHK 변수는 써야함
	// P_Current_Homming_Status는 램프용 
	// P_Current_Homing_Status_To_PLC -> Udata 매핑

	// 모든 모터 정위치 완료시
//	if(M_Y_Trigger_Display_Selected_Motor_Status_To_PLC == 0)
//	{
//		Motor_Lamp[nMotorNum].nCurrentHomingStatus = 0;
//	}
	// 홈 진행중
	//printf("%d\n", Motor_Lamp[nMotorNum].nCurrentHomingStatus);
	if(Motor_Lamp[nMotorNum].nCurrentHomingStatus == 1)
	{
		Motor_Lamp[nMotorNum].nMotorUnitStatus = 0x08;
	}
	// 홈 완료
	else if(Motor_Lamp[nMotorNum].nCurrentHomingStatus == 3)
	{
		Motor_Lamp[nMotorNum].nMotorUnitStatus = 0x02;
	}
	// 홈 미완료
	else
	{
		Motor_Lamp[nMotorNum].nMotorUnitStatus = 0x01;
	}

	// Motor[x].AmpFault == 1 = $40
	if( Get_Motor_Status(nMotorNum + 1, def_AmpFault) == 1)
	{
		Motor_Lamp[nMotorNum].nMotorUnitStatus = 0x40;
	}

	int nBit = 0;
	// 홈진행 상태
	
	if(((GetCPUClock() - dLampTimer[nMotorNum])/1000000.0) > 0.5)
	{
		if(Motor_Lamp[nMotorNum].nCurrentHomingStatus == 1)
		{
			if(nMotorNum < 32)
			{
				nBit = 0x01 << nMotorNum;
				*Write_Homing_Status[0] ^= nBit;
			}
			else
			{
				nBit = 0x01 << nMotorNum - 32;			// 다음 유저 영역으로 넘어가기에 -32
				*Write_Homing_Status[1] ^= nBit;
			}
		}
		else if(Motor_Lamp[nMotorNum].nCurrentHomingStatus == 3)
		{
			if(nMotorNum < 32)
			{
				nBit = 0x01 << nMotorNum;
				*Write_Homing_Status[0] |= nBit;
			}
			else
			{
				nBit = 0x01 << nMotorNum - 32;			// 다음 유저 영역으로 넘어가기에 -32
				*Write_Homing_Status[1] |= nBit;
			}
		}
		else
		{
			if(nMotorNum < 32)
			{
				nBit = 0x01 << nMotorNum;
				*Write_Homing_Status[0] &= ~nBit;
			}
			else
			{
				nBit = 0x01 << nMotorNum - 32;			// 다음 유저 영역으로 넘어가기에 -32
				*Write_Homing_Status[1] &= ~nBit;
			}
		}
		dLampTimer[nMotorNum] = GetCPUClock();
	}
}

void Motor_Auto_Lamp(int nMotorNum)
{
	if(pshm->P[P_Alarm_Occur_Flag] == 0)
	{
		Motor_Lamp[nMotorNum].nMotorUnitStatus = 0x20;
	}
	else
	{
		if( Get_Motor_Status(nMotorNum + 1, def_AmpEna | def_MinusLimit | def_PlusLimit) == 0)
		{
			Motor_Lamp[nMotorNum].nMotorUnitStatus = 0x40;
		}
	}
}

int All_Elements_equal(int nArr[], int nSize)
{
	int i = 0;

	for(i = 0; i < nSize; i++)
	{
		if(nArr[0] != nArr[i])
		{
			return -1;
		}
	}

	return nArr[0];
}

int Any_Elements_equal(int nArr[], int nSize)
{
	int i = 0;
	for(i = 0; i < nSize; i++)
	{
		if(nArr[i] == 0x40)
		{
			return 0x40;
		}
		else if(nArr[i] == 0x08)
		{
			return 0x08;
		}
		else if(nArr[i] == 0x01)
		{
			return 0x01;
		}
	}

	return -1;
}

int Set_Part_Status(int nPart)
{
	switch(nPart)
	{
		case _sepa :
			arr_Part_Temp[0] = Motor_Lamp[23].nMotorUnitStatus;
			arr_Part_Temp[1] = Motor_Lamp[24].nMotorUnitStatus;

			return 2;
		break;

		case _anode :
			arr_Part_Temp[0] = Motor_Lamp[M_CATHODE_1ST_T].nMotorUnitStatus;
			arr_Part_Temp[1] = Motor_Lamp[M_CATHODE_2ND_T].nMotorUnitStatus;
			arr_Part_Temp[2] = Motor_Lamp[M_CATHODE_1ST_Z].nMotorUnitStatus;
			arr_Part_Temp[3] = Motor_Lamp[M_CATHODE_1ST_Picker_T].nMotorUnitStatus;
			arr_Part_Temp[4] = Motor_Lamp[M_CATHODE_2ND_Z].nMotorUnitStatus;
			arr_Part_Temp[5] = Motor_Lamp[M_CATHODE_Align_X].nMotorUnitStatus;
			arr_Part_Temp[6] = Motor_Lamp[M_CATHODE_Align_Y].nMotorUnitStatus;
			arr_Part_Temp[7] = Motor_Lamp[M_CATHODE_Align_T].nMotorUnitStatus;
			arr_Part_Temp[8] = Motor_Lamp[M_CATHODE_Sample_NG_T].nMotorUnitStatus;
			arr_Part_Temp[9] = Motor_Lamp[M_CATHODE_Sample_NG_Z].nMotorUnitStatus;

			return 10;
		break;

		case _cathode :
			arr_Part_Temp[0] = Motor_Lamp[M_ANODE_1ST_T].nMotorUnitStatus;
			arr_Part_Temp[1] = Motor_Lamp[M_ANODE_2ND_T].nMotorUnitStatus;
			arr_Part_Temp[2] = Motor_Lamp[M_ANODE_1ST_Z].nMotorUnitStatus;
			arr_Part_Temp[3] = Motor_Lamp[M_ANODE_1ST_Picker_T].nMotorUnitStatus;
			arr_Part_Temp[4] = Motor_Lamp[M_ANODE_2ND_Z].nMotorUnitStatus;
			arr_Part_Temp[5] = Motor_Lamp[M_ANODE_Align_X].nMotorUnitStatus;
			arr_Part_Temp[6] = Motor_Lamp[M_ANODE_Align_Y].nMotorUnitStatus;
			arr_Part_Temp[7] = Motor_Lamp[M_ANODE_Align_T].nMotorUnitStatus;
			arr_Part_Temp[8] = Motor_Lamp[M_ANODE_Sample_NG_T].nMotorUnitStatus;
			arr_Part_Temp[9] = Motor_Lamp[M_ANODE_Sample_NG_Z].nMotorUnitStatus;

			return 10;
		break;

		case _stack :
			arr_Part_Temp[0]  = Motor_Lamp[M_ANODE_2ND_T].nMotorUnitStatus; 
			arr_Part_Temp[1]  = Motor_Lamp[M_CATHODE_Clamp_Y1].nMotorUnitStatus; 
			arr_Part_Temp[2]  = Motor_Lamp[M_ANODE_Clamp_Y1].nMotorUnitStatus; 
			arr_Part_Temp[3]  = Motor_Lamp[M_CATHODE_Clamp_Y2].nMotorUnitStatus; 
			arr_Part_Temp[4]  = Motor_Lamp[M_ANODE_Clamp_Y2].nMotorUnitStatus; 
			arr_Part_Temp[5]  = Motor_Lamp[M_CATHODE_Clamp_Z].nMotorUnitStatus;
			arr_Part_Temp[6]  = Motor_Lamp[M_ANODE_Clamp_Z].nMotorUnitStatus;
			arr_Part_Temp[7]  = Motor_Lamp[M_Main_Z].nMotorUnitStatus;
			arr_Part_Temp[8]  = Motor_Lamp[M_Final_Roll_X].nMotorUnitStatus;
			arr_Part_Temp[9]  = Motor_Lamp[M_Final_Roll_Z].nMotorUnitStatus;
			arr_Part_Temp[10] = Motor_Lamp[M_Sub_Feeding_Roll].nMotorUnitStatus;
			arr_Part_Temp[11] = Motor_Lamp[M_Driving_Roll].nMotorUnitStatus;
			arr_Part_Temp[12] = Motor_Lamp[M_CATHODE_Clamp_Z2].nMotorUnitStatus;
			arr_Part_Temp[13] = Motor_Lamp[M_Anode_Clamp_Z2].nMotorUnitStatus;
			arr_Part_Temp[14] = Motor_Lamp[M_Stack_Vision_Camera].nMotorUnitStatus;

			return 15;
		break;

		case _unload :
			arr_Part_Temp[0] = Motor_Lamp[M_Unloader_1ST_X].nMotorUnitStatus;
			arr_Part_Temp[1] = Motor_Lamp[M_Unloader_1ST_Y].nMotorUnitStatus;
			arr_Part_Temp[2] = Motor_Lamp[M_Unloader_1ST_T].nMotorUnitStatus;

			return 3;
		break;

		case _arc :
			arr_Part_Temp[2] = Motor_Lamp[M_EPC_Sensor].nMotorUnitStatus;
			arr_Part_Temp[3] = Motor_Lamp[M_Stack_Vision_Camera].nMotorUnitStatus;

			return 2;
		break;
	}
}

int Write_Lamp_Data(int nPart, int nValue)
{
	switch(nPart)
	{
		case _sepa :
			return nValue << 16;
		break;

		case _anode :
			return nValue;
		break;

		case _cathode :
			return nValue << 16;
		break;

		case _stack :
			return nValue;
		break;

		case _unload :
			return nValue << 16;
		break;
	}
}
