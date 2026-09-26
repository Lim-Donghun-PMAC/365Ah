#include "jog.h"

extern int g_Page_Num;		
extern unsigned int Bit_Masking_Arr[MotorCount];
static unsigned int Alarm_Amp_Fault_Old[MotorCount] = {0};

void Set_Motor_Num(const int motor)
{
	char ctest[20];
	char cCommand[100] = "Ldata.Motor = ";

	sprintf(ctest, "%d", motor);

	strcat(cCommand, ctest);
	//printf("%s\n", cCommand);
	Command(cCommand);
}

void Get_Drive_Status()
{
	int i;
	volatile BYTE4_UNION bitfield = { 0 };

	//bitfield.byte_2[LO_16bit] = pshm->ECAT[0].IO[].Data;
//	bitfield.byte_2[HI_16bit] = pshm->ECAT[0].IO[].Data;

	for(i = 1; i < MotorCount; i++)
	{
		if(pshm->Motor[i].ServoCtrl == 1)
		{
			if((bitfield.byte_4 & Bit_Masking_Arr[i-1]) && Alarm_Amp_Fault_Old[i] == 0)
			{
				pshm->P[P_Home_InterLock_M + i] = 1;	// 홈 가능
				Alarm_Amp_Fault_Old[i] = (bitfield.byte_4 & Bit_Masking_Arr[i-1]);
			}
			else if(!(bitfield.byte_4 & Bit_Masking_Arr[i-1]))
			{
				pshm->P[P_Home_InterLock_M + i] = 0;
				Set_Drive_Alarm(i);
				Alarm_Amp_Fault_Old[i] = (bitfield.byte_4 & Bit_Masking_Arr[i-1]);
			}
		}
	}
}

void Set_Drive_Alarm(const int motor)
{
	switch (motor)
	{
		//case 1:	SetPtrVar(M_X_Alarm_2S01_Servo_Driver_Alarm,1.0);	break;
		//case 2:	SetPtrVar(M_X_Alarm_2S02_Servo_Driver_Alarm,1.0);	break;
		//case 3:	SetPtrVar(M_X_Alarm_2S03_Servo_Driver_Alarm,1.0);	break;
		//case 4:	SetPtrVar(M_X_Alarm_2S04_Servo_Driver_Alarm,1.0);	break;
		//case 5:	SetPtrVar(M_X_Alarm_2S05_Servo_Driver_Alarm,1.0);	break;
		//case 6:	SetPtrVar(M_X_Alarm_2S06_Servo_Driver_Alarm,1.0);	break;
		//case 7:	SetPtrVar(M_X_Alarm_2S07_Servo_Driver_Alarm,1.0);	break;
		//case 8:	SetPtrVar(M_X_Alarm_2S08_Servo_Driver_Alarm,1.0);	break;
		//case 9:	SetPtrVar(M_X_Alarm_2S09_Servo_Driver_Alarm,1.0);	break;
		//case 10:	SetPtrVar(M_X_Alarm_2S10_Servo_Driver_Alarm,1.0);	break;
		//case 11:	SetPtrVar(M_X_Alarm_2S11_Servo_Driver_Alarm,1.0);	break;
		//case 12:	SetPtrVar(M_X_Alarm_2S12_Servo_Driver_Alarm,1.0);	break;
		//case 13:	SetPtrVar(M_X_Alarm_2S13_Servo_Driver_Alarm,1.0);	break;
		//case 14:	SetPtrVar(M_X_Alarm_2S14_Servo_Driver_Alarm,1.0);	break;
		//case 15:	SetPtrVar(M_X_Alarm_2S15_Servo_Driver_Alarm,1.0);	break;
		//case 16:	SetPtrVar(M_X_Alarm_2S16_Servo_Driver_Alarm,1.0);	break;
		//case 17:	SetPtrVar(M_X_Alarm_2S17_Servo_Driver_Alarm,1.0);	break;
		//case 18:	SetPtrVar(M_X_Alarm_2S18_Servo_Driver_Alarm,1.0);	break;
		//case 19:	SetPtrVar(M_X_Alarm_2S19_Servo_Driver_Alarm,1.0);	break;
		//case 20:	SetPtrVar(M_X_Alarm_2S20_Servo_Driver_Alarm,1.0);	break;
		//case 21:	SetPtrVar(M_X_Alarm_2S21_Servo_Driver_Alarm,1.0);	break;
		//case 22:	SetPtrVar(M_X_Alarm_2S22_Servo_Driver_Alarm,1.0);	break;
		//case 23:	SetPtrVar(M_X_Alarm_2S23_Servo_Driver_Alarm,1.0);	break;
		//case 24:	SetPtrVar(M_X_Alarm_2S24_Servo_Driver_Alarm,1.0);	break;
		//case 25:	SetPtrVar(M_X_Alarm_2S25_Servo_Driver_Alarm,1.0);	break;
		//case 26:	SetPtrVar(M_X_Alarm_2S26_Servo_Driver_Alarm,1.0);	break;
		//case 27:	SetPtrVar(M_X_Alarm_2S27_Servo_Driver_Alarm,1.0);	break; 
		//case 28:	SetPtrVar(M_X_Alarm_2S28_Servo_Driver_Alarm,1.0);	break; 
		//case 29:	SetPtrVar(M_X_Alarm_2S29_Servo_Driver_Alarm,1.0);	break; 
		//case 30:	SetPtrVar(M_X_Alarm_2S30_Servo_Driver_Alarm,1.0);	break; 
		//case 31:	SetPtrVar(M_X_Alarm_2S31_Servo_Driver_Alarm,1.0);	break; 
		//case 32:	SetPtrVar(M_X_Alarm_2S32_Servo_Driver_Alarm,1.0);	break; 
		//case 33:	SetPtrVar(M_X_Alarm_2S33_Servo_Driver_Alarm,1.0);	break; 
		//case 34:	SetPtrVar(M_X_Alarm_2S34_Servo_Driver_Alarm,1.0);	break; 
		//case 35:	SetPtrVar(M_X_Alarm_2S35_Servo_Driver_Alarm,1.0);	break; 
		//case 36:	SetPtrVar(M_X_Alarm_2S36_Servo_Driver_Alarm,1.0);	break; 
		//case 37:	SetPtrVar(M_X_Alarm_2S37_Servo_Driver_Alarm,1.0);	break; 
		//case 38:	SetPtrVar(M_X_Alarm_2S38_Servo_Driver_Alarm,1.0);	break; 
		//case 39:	SetPtrVar(M_X_Alarm_2S39_Servo_Driver_Alarm,1.0);	break; 
		//case 40:	SetPtrVar(M_X_Alarm_2S40_Servo_Driver_Alarm,1.0);	break; 
		//case 41:	SetPtrVar(M_X_Alarm_2S41_Servo_Driver_Alarm,1.0);	break; 
		//case 42:	SetPtrVar(M_X_Alarm_2S42_Servo_Driver_Alarm,1.0);	break; 
		//case 43:	SetPtrVar(M_X_Alarm_2S43_Servo_Driver_Alarm,1.0);	break; 
		//case 44:	SetPtrVar(M_X_Alarm_2S44_Servo_Driver_Alarm,1.0);	break; 
		//case 45:	SetPtrVar(M_X_Alarm_2S45_Servo_Driver_Alarm,1.0);	break; 
		//case 46:	SetPtrVar(M_X_Alarm_2S46_Servo_Driver_Alarm,1.0);	break; 
		//case 47:	SetPtrVar(M_X_Alarm_2S47_Servo_Driver_Alarm,1.0);	break; 
		//case 48:	SetPtrVar(M_X_Alarm_2S48_Servo_Driver_Alarm,1.0);	break; 
		default:		break;
	}
}

void Set_Driver_Alarm_Reset(const int motor, int nValue)
{
	switch(motor)
	{
		//case 1 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_1, nValue);	break;
		//case 2 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_2, nValue);	break;
		//case 3 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_3, nValue);	break;
		//case 4 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_4, nValue);	break;
		//case 5 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_5, nValue);	break;
		//case 6 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_6, nValue);	break;
		//case 7 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_7, nValue);	break;
		//case 8 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_8, nValue);	break;
		//case 9 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_9, nValue);	break;
		//case 10 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_10, nValue);	break;
		//case 11 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_11, nValue);	break;
		//case 12 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_12, nValue);	break;
		//case 13 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_13, nValue);	break;
		//case 14 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_14, nValue);	break;
		//case 15 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_15, nValue);	break;
		//case 16 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_16, nValue);	break;
		//case 17 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_17, nValue);	break;
		//case 18 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_18, nValue);	break;
		//case 19 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_19, nValue);	break;
		//case 20 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_20, nValue);	break;
		//case 21 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_21, nValue);	break;
		//case 22 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_22, nValue);	break;
		//case 23 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_23, nValue);	break;
		//case 24 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_24, nValue);	break;
		//case 25 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_25, nValue);	break;
		//case 26 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_26, nValue);	break;
		//case 27 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_27, nValue);	break;
		//case 28 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_28, nValue);	break;
		//case 29 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_29, nValue);	break;
		//case 30 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_30, nValue);	break;
		//case 31 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_31, nValue);	break;
		//case 32 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_32, nValue);	break;
		//case 33 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_33, nValue);	break;
		//case 34 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_34, nValue);	break;
		//case 35 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_35, nValue);	break;
		//case 36 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_36, nValue);	break;
		//case 37 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_37, nValue);	break;
		//case 38 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_38, nValue);	break;
		//case 39 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_39, nValue);	break;
		//case 40 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_40, nValue);	break;
		//case 41 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_41, nValue);	break;
		//case 42 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_42, nValue);	break;
		//case 43 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_43, nValue);	break;
		//case 44 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_44, nValue);	break;
		//case 45 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_45, nValue);	break;
		//case 46 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_46, nValue);	break;
		//case 47 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_47, nValue);	break;
		//case 48 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_48, nValue);	break;
	}
}

void Set_Minus_Alarm(const int motor)
{
	switch (motor)
	{	
		//case 1:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_1,1);		break;
		//case 2:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_2,1);		break;
		//case 3:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_3,1);		break;
		//case 4:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_4,1);		break;
		//case 5:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_5,1);		break;
		//case 6:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_6,1);		break;
		//case 7:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_7,1);		break;
		//case 8:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_8,1);		break;
		//case 9:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_9,1);		break;
		//case 10:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_10,1);	break;
		//case 11:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_11,1);	break;
		//case 12:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_12,1);	break;
		//case 13:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_13,1);	break;
		//case 14:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_14,1);	break;
		//case 15:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_15,1);	break;
		//case 16:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_16,1);	break;
		//case 17:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_17,1);	break;
		//case 18:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_18,1);	break;
		//case 19:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_19,1);	break;
		//case 20:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_20,1);	break;
		//case 21:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_21,1);	break;
		//case 22:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_22,1);	break;
		//case 23:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_23,1);	break;
		//case 24:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_24,1);	break;
		//case 25:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_25,1);	break;
		//case 26:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_26,1);	break;
		//case 27:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_27,1);	break;
		//case 28:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_28,1);	break;
		//case 29:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_29,1);	break;
		//case 30:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_30,1);	break;
		//case 31:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_31,1);	break;
		//case 32:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_32,1);	break;
		//case 33:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_33,1);	break;
		//case 34:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_34,1);	break;
		//case 35:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_35,1);	break;
		//case 36:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_36,1);	break;
		//case 37:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_37,1);	break;
		//case 38:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_38,1);	break;
		//case 39:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_39,1);	break;
		//case 40:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_40,1);	break;
		//case 41:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_41,1);	break;
		//case 42:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_42,1);	break;
		//case 43:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_43,1);	break;
		//case 44:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_44,1);	break;
		//case 45:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_45,1);	break;
		//case 46:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_46,1);	break;
		//case 47:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_47,1);	break;
		//case 48:	SetPtrVar(M_Y_Minus_Limit_Alarm_Motor_48,1);	break;
		default:		break;
	}
}

void Set_Plus_Alarm(const int motor)
{
	switch (motor)
	{
		//case 1:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_1,1);		break;
		//case 2:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_2,1);		break;
		//case 3:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_3,1);		break;
		//case 4:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_4,1);		break;
		//case 5:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_5,1);		break;
		//case 6:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_6,1);		break;
		//case 7:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_7,1);		break;
		//case 8:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_8,1);		break;
		//case 9:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_9,1);		break;
		//case 10:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_10,1);		break;
		//case 11:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_11,1);		break;
		//case 12:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_12,1);		break;
		//case 13:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_13,1);		break;
		//case 14:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_14,1);		break;
		//case 15:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_15,1);		break;
		//case 16:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_16,1);		break;
		//case 17:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_17,1);		break;
		//case 18:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_18,1);		break;
		//case 19:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_19,1);		break;
		//case 20:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_20,1);		break;
		//case 21:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_21,1);		break;
		//case 22:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_22,1);		break;
		//case 23:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_23,1);		break;
		//case 24:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_24,1);		break;
		//case 25:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_25,1);		break;
		//case 26:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_26,1);		break;
		//case 27:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_27,1);		break;
		//case 28:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_28,1);		break;
		//case 29:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_29,1);		break;
		//case 30:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_30,1);		break;
		//case 31:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_31,1);		break;
		//case 32:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_32,1);		break;
		//case 33:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_33,1);		break;
		//case 34:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_34,1);		break;
		//case 35:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_35,1);		break;
		//case 36:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_36,1);		break;
		//case 37:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_37,1);		break;
		//case 38:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_38,1);		break;
		//case 39:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_39,1);		break;
		//case 40:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_40,1);		break;
		//case 41:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_41,1);		break;
		//case 42:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_42,1);		break;
		//case 43:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_43,1);		break;
		//case 44:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_44,1);		break;
		//case 45:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_45,1);		break;
		//case 46:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_46,1);		break;
		//case 47:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_47,1);		break;
		//case 48:	SetGlobalVar(M_Y_Minus_Plus_Alarm_Motor_48,1);		break;
		default:		break;
	}
}

void Set_Move_Error_Alarm(const int motor)
{
	switch (motor)
	{
		//case 1:	SetPtrVar(Cathode_1st_Transfer_T_Move_Alarm,1);		break;
		//case 2:	SetPtrVar(Anode_1st_Transfer_T_Move_Alarm,1);		break;
		//case 3:	SetPtrVar(Cathode_2nd_Transfer_T_Move_Alarm,1);		break;
		//case 4:	SetPtrVar(Anode_2nd_Transfer_T_Move_Alarm,1);		break;
		//case 5:	SetPtrVar(Cathode_Clamp_Y1_Move_Alarm,1);			break;
		//case 6:	SetPtrVar(Anode_Clamp_Y1_Move_Alarm,1);				break;
		//case 7:	SetPtrVar(Cathode_Clamp_Y2_Move_Alarm,1);			break;
		//case 8:	SetPtrVar(Anode_Clamp_Y2_Move_Alarm,1);				break;
		//case 9:	SetPtrVar(Cathode_Clamp_Z_Move_Alarm,1);			break;
		//case 10:	SetPtrVar(Anode_Clamp_Z_Move_Alarm,1);				break;
		//case 11:	SetPtrVar(Stack_Table_Main_Z_Move_Alarm,1);			break;
		//case 12:	SetPtrVar(Final_Roll_X_Move_Alarm,1);				break;
		//case 13:	SetPtrVar(Final_Roll_Z_Move_Alarm,1);				break;
		//case 14:	SetPtrVar(Sepa_Sub_Feeding_Roll_Move_Alarm,1);		break;
		//case 15:	SetPtrVar(Driving_Roll_Move_Alarm,1);				break;
		//case 16:	SetPtrVar(Servo_Dancer_Move_Alarm,1);				break;
		//case 17:	SetPtrVar(Cathode_1st_Trnasfer_Z_Move_Alarm,1);		break;
		//case 18:	SetPtrVar(Anode_1st_Transfer_Z_Move_Alarm,1);		break;
		//case 19:	SetPtrVar(Cathode_1st_Picker_T_Move_Alarm,1);		break;
		//case 20:	SetPtrVar(Anode_1st_Picker_T_Move_Alarm,1);			break;
		//case 21:	SetPtrVar(Cathode_2nd_Transfer_Z_Move_Alarm,1);		break;
		//case 22:	SetPtrVar(Anode_2nd_Transfer_Z_Move_Alarm,1);		break;
		//case 23:	SetPtrVar(Sepa_Unwinder_Upper_Move_Alarm,1);		break;
		//case 24:	SetPtrVar(Sepa_Unwinder_Lower_Move_Alarm,1);		break;
		//case 33:	SetPtrVar(EPC_Sensor_Move_Alarm,1);					break;
		//case 34:	SetPtrVar(Stack_Vision_Move_Alarm,1);				break;
		//case 35:	SetPtrVar(1st_Sheet_Paper_Move_Alarm,1);			break;
		//case 36:	SetPtrVar(Cathode_Align_Table_X_Move_Alarm,1);		break;
		//case 37:	SetPtrVar(Cathode_Align_Table_Y_Move_Alarm,1);		break;
		//case 38:	SetPtrVar(Cathode_Align_Table_T_Move_Alarm,1);		break;
		//case 39:	SetPtrVar(Anode_Align_Table_X_Move_Alarm,1);		break;
		//case 40:	SetPtrVar(Anode_Align_Table_Y_Move_Alarm,1);		break;
		//case 41:	SetPtrVar(Anode_Align_Table_T_Move_Alarm,1);		break;
		//case 42:	SetPtrVar(Cathode_NG_Transfer_T_Move_Alarm,1);		break;
		//case 43:	SetPtrVar(Anode_NG_Transfer_T_Move_Alarm,1);		break;
		//case 44:	SetPtrVar(Cathode_NG_Transfer_Z_Move_Alarm,1);		break;
		//case 45:	SetPtrVar(Anode_NG_Transfer_Z_Move_Alarm,1);		break;
		//case 46:	SetPtrVar(1st_Unloder_X_Move_Alarm,1);				break;
		//case 47:	SetPtrVar(1st_Unloder_Z_Move_Alarm,1);				break;
		//case 48:	SetPtrVar(1st_Unloder_T_Move_Alarm,1);				break;

		default:		break;
	}

}

// 모터 상태 및 위치는 함수로 받게 하는게 나을 거 같은데
double Get_Current_Motor_Pos(const int Motor)
{
	return *Motor_Status[g_Page_Num - 1].dMotorCurrentPos;
}

double Get_Jog_Speed()
{
	double ret_jog_speed = 0;
	// 조그 속도, 거리 관련 integer값 대입.
	if (pshm->P[P_UI_Jog_Vel_M + g_Page_Num] >= 0 && pshm->P[P_UI_Jog_Vel_M + g_Page_Num] <=  100)
	{
		if (GetPtrVar(M_X_Door_Open))		
			#ifndef test_Setup	
			ret_jog_speed = 20; 
			#else
			ret_jog_speed = 40;
			#endif
		else
			ret_jog_speed = pshm->P[P_UI_Jog_Vel_M + g_Page_Num];
	}
	else
		ret_jog_speed = 0;
	return ret_jog_speed;
}

double Get_Move_Distance()
{
	int* nJogMoveDistance = 0;

	nJogMoveDistance = (int*)pushm + 10804 + ((g_Page_Num - 1) * 7);

	printf("%d\n", nJogMoveDistance);

	double dRtn = (double)*nJogMoveDistance / 10;
	return dRtn;
}

double Get_Recipe_Move_Distance(JOG_LIST* ptr, int nPageNum)
{
	printf("gnum = %d\n", nPageNum);
	if(nPageNum == 0)
	{
		return;
	}

	bool bInterlock = false;
	unsigned int i, nRecipe_Bit_Masking = 0;
	double dAbs_distance_arr[11] = {0};
	double dRet_Distance = 0;
	unsigned int nRecipe_Btn_Flag = 0;
	BYTE4_UNION Byte4_Filed;
	Byte4_Filed.byte_4 = *(ptr->servo_page_arr[nPageNum].shared_ptr);
 
	nRecipe_Bit_Masking = (unsigned int)Byte4_Filed.byte_2[HI_16bit];
	nRecipe_Btn_Flag = (unsigned int)pshm->P[P_Interlock_Status_Motor_Arr + g_Page_Num];

//	if((nRecipe_Bit_Masking & nRecipe_Btn_Flag) == 0)
//	{
//		return -999;
//	}

	Get_Recipe_Distance(dAbs_distance_arr, nPageNum);
	switch(nRecipe_Bit_Masking)
	{
		case 0x0001 :
			if(!(nRecipe_Btn_Flag & N_Hex_POS1_Interlock_On))	
			{
				dRet_Distance = dAbs_distance_arr[1];
				printf("switch = %d\n", dRet_Distance);
			}
		break;
		case 0x0002 :	
			if(!(nRecipe_Btn_Flag & N_Hex_POS2_Interlock_On))
				dRet_Distance = dAbs_distance_arr[2];
		break;
		case 0x0004 :	
			if(!(nRecipe_Btn_Flag & N_Hex_POS3_Interlock_On))
				dRet_Distance = dAbs_distance_arr[3];
		break;
		case 0x0008 :
			if(!(nRecipe_Btn_Flag & N_Hex_POS4_Interlock_On))
				dRet_Distance = dAbs_distance_arr[4];
		break;
		case 0x0010 :
			if(!(nRecipe_Btn_Flag & N_Hex_POS5_Interlock_On))
				dRet_Distance = dAbs_distance_arr[5];
		break;
		case 0x0020 :
			if(!(nRecipe_Btn_Flag & N_Hex_POS6_Interlock_On))
				dRet_Distance = dAbs_distance_arr[6];
		break;
		case 0x0040 :
			if(!(nRecipe_Btn_Flag & N_Hex_POS7_Interlock_On))
				dRet_Distance = dAbs_distance_arr[7];
		break;
		case 0x0080 :
			if(!(nRecipe_Btn_Flag & N_Hex_POS8_Interlock_On))
				dRet_Distance = dAbs_distance_arr[8];
		break;
		case 0x0100 :
			if(!(nRecipe_Btn_Flag & N_Hex_POS9_Interlock_On))
				dRet_Distance = dAbs_distance_arr[9];
		break;
		case 0x0200 :
			if(!(nRecipe_Btn_Flag & N_Hex_POS10_Interlock_On))
				dRet_Distance = dAbs_distance_arr[10];
		break;
		default:			break;
	}

	if(dRet_Distance == 0)
	{
		return -999;
	}

	return dRet_Distance;
}

// 레시피 변수명에 따라 Switch로 나열할지 수정 할지 결정
void Get_Recipe_Distance(double arr[], int nPageNum)
{
	int i = 0;
	double nScale = 10.0;

	for(i = 1; i < 11; i++)
	{
		switch(nPageNum)
		{
			case 1:	 arr[i] = pshm->P[P_Recipe_M01_POS + i] / nScale; break;
			case 2:	 arr[i] = pshm->P[P_Recipe_M02_POS + i] / nScale; break;
			case 3:	 arr[i] = pshm->P[P_Recipe_M03_POS + i] / nScale; break;
			case 4:	 arr[i] = pshm->P[P_Recipe_M04_POS + i] / nScale; break;
			case 5:	 arr[i] = pshm->P[P_Recipe_M05_POS + i] / nScale; break;
			case 6:	 arr[i] = pshm->P[P_Recipe_M06_POS + i] / nScale; break;
			case 7:	 arr[i] = pshm->P[P_Recipe_M07_POS + i] / nScale; break;
			case 8:	 arr[i] = pshm->P[P_Recipe_M08_POS + i] / nScale; break;
			case 9:	 arr[i] = pshm->P[P_Recipe_M09_POS + i] / nScale; break;
			case 10: arr[i] = pshm->P[P_Recipe_M10_POS + i] / nScale; break;
			case 11: arr[i] = pshm->P[P_Recipe_M11_POS + i] / nScale; break;
			case 12: arr[i] = pshm->P[P_Recipe_M12_POS + i] / nScale; break;
			case 13: arr[i] = pshm->P[P_Recipe_M13_POS + i] / nScale; break;
			case 14: arr[i] = pshm->P[P_Recipe_M14_POS + i] / nScale; break;
			case 15: arr[i] = pshm->P[P_Recipe_M15_POS + i] / nScale; break;
			case 16: arr[i] = pshm->P[P_Recipe_M16_POS + i] / nScale; break;
			case 17: arr[i] = pshm->P[P_Recipe_M17_POS + i] / nScale; break;
			case 18: arr[i] = pshm->P[P_Recipe_M18_POS + i] / nScale; break;
			case 19: arr[i] = pshm->P[P_Recipe_M19_POS + i] / nScale; break;
			case 20: arr[i] = pshm->P[P_Recipe_M20_POS + i] / nScale; break;
			case 21: arr[i] = pshm->P[P_Recipe_M21_POS + i] / nScale; break;
			case 22: arr[i] = pshm->P[P_Recipe_M22_POS + i] / nScale; break;
			case 23: arr[i] = pshm->P[P_Recipe_M23_POS + i] / nScale; break;
			case 24: arr[i] = pshm->P[P_Recipe_M24_POS + i] / nScale; break;
			case 25: arr[i] = pshm->P[P_Recipe_M25_POS + i] / nScale; break;
			case 26: arr[i] = pshm->P[P_Recipe_M26_POS + i] / nScale; break;
			case 27: arr[i] = pshm->P[P_Recipe_M27_POS + i] / nScale; break;
			case 28: arr[i] = pshm->P[P_Recipe_M28_POS + i] / nScale; break;
			case 29: arr[i] = pshm->P[P_Recipe_M29_POS + i] / nScale; break;
			case 30: arr[i] = pshm->P[P_Recipe_M30_POS + i] / nScale; break;
			case 31: arr[i] = pshm->P[P_Recipe_M31_POS + i] / nScale; break;
			case 32: arr[i] = pshm->P[P_Recipe_M32_POS + i] / nScale; break;
			case 33: arr[i] = pshm->P[P_Recipe_M33_POS + i] / nScale; break;
			case 34: arr[i] = pshm->P[P_Recipe_M34_POS + i] / nScale; break;
			case 35: arr[i] = pshm->P[P_Recipe_M35_POS + i] / nScale; break;
			case 36: arr[i] = pshm->P[P_Recipe_M36_POS + i] / nScale; break;
			case 37: arr[i] = pshm->P[P_Recipe_M37_POS + i] / nScale; break;
			case 38: arr[i] = pshm->P[P_Recipe_M38_POS + i] / nScale; break;
			case 39: arr[i] = pshm->P[P_Recipe_M39_POS + i] / nScale; break;
			case 40: arr[i] = pshm->P[P_Recipe_M40_POS + i] / nScale; break;
			case 41: arr[i] = pshm->P[P_Recipe_M41_POS + i] / nScale; break;
			case 42: arr[i] = pshm->P[P_Recipe_M42_POS + i] / nScale; break;
			case 43: arr[i] = pshm->P[P_Recipe_M43_POS + i] / nScale; break;
			case 44: arr[i] = pshm->P[P_Recipe_M44_POS + i] / nScale; break;
			case 45: arr[i] = pshm->P[P_Recipe_M45_POS + i] / nScale; break;
			case 46: arr[i] = pshm->P[P_Recipe_M46_POS + i] / nScale; break;
			case 47: arr[i] = pshm->P[P_Recipe_M47_POS + i] / nScale; break;
			case 48: arr[i] = pshm->P[P_Recipe_M48_POS + i] / nScale; break;

		/*	실제 장비 즉 크랭크 축이 생긴다면 적용해야 하는 부분 [ 참조 : 2025.09.01 크랭크 Z축 위치값 변환 ]
			case 17:
				switch(i)
				{
					case 3:	arr[i] = pshm->P[P_Cathode_1st_Z_Belt_Up];	
					break;
					
					case 4:	arr[i] = pshm->P[P_Recipe_C_1st_Z_Belt_Down]; 	
					break;
					
					case 5:	arr[i] = pshm->P[P_Recipe_C_1st_Z_Align_Up]; 	
					break;
					
					case 6:	arr[i] = pshm->P[P_Cathode_1st_Z_Align_Down]; 			
					break;
				}
			break;

			case 18:
				switch(i)
				{
					case 3:	arr[i] = pshm->P[P_Recipe_A_1st_Z_Belt_Up]; 
					break;
					
					case 4:	arr[i] = pshm->P[P_Recipe_A_1st_Z_Belt_Down]; 
					break;
					
					case 5:	arr[i] = pshm->P[P_Recipe_A_1st_Z_Align_Up]; 
					break;
					
					case 6:	arr[i] = pshm->P[P_Recipe_A_1st_Z_Align_Down]; 
					break;
				}
			break;

			case 21:
				switch(i)
				{
					case 1:	arr[i] = pshm->P[P_Recipe_C_2st_Z_Align_Up]; 
					break;
					
					case 2:	arr[i] = pshm->P[P_Cathode_2st_Z_Align_Down]; 
					break;
					
					case 3:	arr[i] = pshm->P[P_Cathode_2st_Z_Stack_Up]; 
					break;
					
					case 4:	arr[i] = pshm->P[P_Cathode_2st_Z_Stack_Down]; 
					break;
				}
			break;
			
			case 22:
				switch(i)
				{
					case 1:	arr[i] = pshm->P[P_Recipe_A_2st_Z_Align_Up]; 
					break;
					
					case 2:	arr[i] = pshm->P[P_Recipe_A_2st_Z_Align_Down]; 
					break;
					
					case 3:	arr[i] = pshm->P[P_Recipe_A_2st_Z_Stack_Up]; 
					break;
					
					case 4:	arr[i] = pshm->P[P_Recipe_A_2st_Z_Stack_Down]; 
					break;
				}
			break;
			*/
			default :
			break;
		}
	}
}