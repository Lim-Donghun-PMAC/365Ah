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

void Set_Driver_Alarm_Reset(const int motor, int nValue)
{
	switch(motor)
	{
//		case 1 :  SetPtrVar(M_Y_Servo_Driver_Reset_Motor_1, nValue);	break;
//		case 2 :  SetPtrVar(M_Y_Servo_Driver_Reset_Motor_2, nValue);	break;
//		case 3 :  SetPtrVar(M_Y_Servo_Driver_Reset_Motor_3, nValue);	break;
//		case 4 :  SetPtrVar(M_Y_Servo_Driver_Reset_Motor_4, nValue);	break;
//		case 5 :  SetPtrVar(M_Y_Servo_Driver_Reset_Motor_5, nValue);	break;
//		case 6 :  SetPtrVar(M_Y_Servo_Driver_Reset_Motor_6, nValue);	break;
//		case 7 :  SetPtrVar(M_Y_Servo_Driver_Reset_Motor_7, nValue);	break;
//		case 8 :  SetPtrVar(M_Y_Servo_Driver_Reset_Motor_8, nValue);	break;
//		case 11 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_9, nValue);	break;
//		case 12 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_10, nValue);	break;
//		case 13 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_11, nValue);	break;
//		case 14 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_12, nValue);	break;
//		case 15 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_13, nValue);	break;
//		case 16 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_14, nValue);	break;
//		case 17 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_15, nValue);	break;
//		case 18 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_16, nValue);	break;
//		case 19 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_17, nValue);	break;
//		case 20 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_18, nValue);	break;
//		case 21 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_19, nValue);	break;
//		case 22 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_20, nValue);	break;
//		case 23 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_21, nValue);	break;
//		case 24 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_22, nValue);	break;
//		case 25 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_23, nValue);	break;
//		case 26 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_24, nValue);	break;
//		case 27 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_25, nValue);	break;
//		case 28 : SetPtrVar(M_Y_Servo_Driver_Reset_Motor_26, nValue);	break;
//		case 27 : SetPtrVar();	break;
//		case 28 : SetPtrVar();	break;
//		case 29 : SetPtrVar();	break;
//		case 30 : SetPtrVar();	break;
//		case 31 : SetPtrVar();	break;
//		case 32 : SetPtrVar();	break;
//		case 33 : SetPtrVar();	break;
//		case 34 : SetPtrVar();	break;
//		case 35 : SetPtrVar();	break;
//		case 36 : SetPtrVar();	break;
//		case 37 : SetPtrVar();	break;
//		case 38 : SetPtrVar();	break;
//		case 39 : SetPtrVar();	break;
//		case 40 : SetPtrVar();	break;
//		case 41 : SetPtrVar();	break;
//		case 42 : SetPtrVar();	break;
//		case 43 : SetPtrVar();	break;
//		case 44 : SetPtrVar();	break;
//		case 45 : SetPtrVar();	break;
//		case 46 : SetPtrVar();	break;
//		case 47 : SetPtrVar();	break;
//		case 48 : SetPtrVar();	break;
	}
}

void Set_Minus_Alarm(const int motor)
{
	switch (motor)
	{	
//		case 1:		SetPtrVar(61,1);	break;
//		case 2:		SetPtrVar(62,1);	break;
//		case 3:		SetPtrVar(63,1);	break;
//		case 4:		SetPtrVar(64,1);	break;
//		case 5:		SetPtrVar(65,1);	break;
//		case 6:		SetPtrVar(66,1);	break;
//		case 7:		SetPtrVar(67,1);	break;
//		case 8:		SetPtrVar(68,1);	break;
////		case 9:		SetPtrVar();	break;
////		case 10:	SetPtrVar();	break;
//		case 11:	SetPtrVar(71,1);	break;
//		case 12:	SetPtrVar(72,1);	break;
//		case 13:	SetPtrVar(73,1);	break;
//		case 14:	SetPtrVar(74,1);	break;
//		case 15:	SetPtrVar(75,1);	break;
//		case 16:	SetPtrVar(76,1);	break;
//		case 17:	SetPtrVar(77,1);	break;
//		case 18:	SetPtrVar(78,1);	break;
//		case 19:	SetPtrVar(79,1);	break;
//		case 20:	SetPtrVar(80,1);	break;
//		case 21:	SetPtrVar(81,1);	break;
//		case 22:	SetPtrVar(82,1);	break;
//		case 23:	SetPtrVar(83,1);	break;
//		case 24:	SetPtrVar(84,1);	break;
//		case 25:	SetPtrVar(85,1);	break;
//		case 26:	SetPtrVar(86,1);	break;
//		case 27:	SetPtrVar(69,1);	break;
//		case 28:	SetPtrVar(70,1);	break;
////		case 29:	SetPtrVar();	break;
////		case 30:	SetPtrVar();	break;
////		case 31:	SetPtrVar();	break;
////		case 32:	SetPtrVar();	break;
//		case 33:	SetPtrVar(91,1);	break;
//		case 34:	SetPtrVar(92,1);	break;
//		case 35:	SetPtrVar(93,1);	break;
//		case 36:	SetPtrVar(94,1);	break;
//		case 37:	SetPtrVar(95,1);	break;
//		case 38:	SetPtrVar(96,1);	break;
//		case 39:	SetPtrVar(97,1);	break;
//		case 40:	SetPtrVar(98,1);	break;
//		case 41:	SetPtrVar(99,1);	break;
//		case 42:	SetPtrVar(100,1);	break;
//		case 43:	SetPtrVar(101,1);	break;
//		case 44:	SetPtrVar(102,1);	break;
//		case 45:	SetPtrVar(103,1);	break;
//		case 46:	SetPtrVar(104,1);	break;
//		case 47:	SetPtrVar(105,1);	break;
//		case 48:	SetPtrVar(106,1);	break;
		default:		break;
	}
}

void Set_Plus_Alarm(const int motor)
{
	switch (motor)
	{
//		case 1:		SetPtrVar(121,1);		break;
//		case 2:		SetPtrVar(122,1);		break;
//		case 3:		SetPtrVar(123,1);		break;
//		case 4:		SetPtrVar(124,1);		break;
//		case 5:		SetPtrVar(125,1);		break;
//		case 6:		SetPtrVar(126,1);		break;
//		case 7:		SetPtrVar(127,1);		break;
//		case 8:		SetPtrVar(128,1);		break;
////		case 9:		SetPtrVar();		break;
////		case 10:	SetPtrVar();		break;
//		case 11:	SetPtrVar(131,1);		break;
//		case 12:	SetPtrVar(132,1);		break;
//		case 13:	SetPtrVar(133,1);		break;
//		case 14:	SetPtrVar(134,1);		break;
//		case 15:	SetPtrVar(135,1);		break;
//		case 16:	SetPtrVar(136,1);		break;
//		case 17:	SetPtrVar(137,1);		break;
//		case 18:	SetPtrVar(138,1);		break;
//		case 19:	SetPtrVar(139,1);		break;
//		case 20:	SetPtrVar(140,1);		break;
//		case 21:	SetPtrVar(141,1);		break;
//		case 22:	SetPtrVar(142,1);		break;
//		case 23:	SetPtrVar(143,1);		break;
//		case 24:	SetPtrVar(144,1);		break;
//		case 25:	SetPtrVar(145,1);		break;
//		case 26:	SetPtrVar(146,1);		break;
//		case 27:	SetPtrVar(129,1);		break;
//		case 28:	SetPtrVar(130,1);		break;
////		case 29:	SetPtrVar();		break;
////		case 30:	SetPtrVar();		break;
////		case 31:	SetPtrVar();		break;
////		case 32:	SetPtrVar();		break;
//		case 33:	SetPtrVar(151,1);		break;
//		case 34:	SetPtrVar(152,1);		break;
//		case 35:	SetPtrVar(153,1);		break;
//		case 36:	SetPtrVar(154,1);		break;
//		case 37:	SetPtrVar(155,1);		break;
//		case 38:	SetPtrVar(156,1);		break;
//		case 39:	SetPtrVar(157,1);		break;
//		case 40:	SetPtrVar(158,1);		break;
//		case 41:	SetPtrVar(159,1);		break;
//		case 42:	SetPtrVar(160,1);		break;
//		case 43:	SetPtrVar(161,1);		break;
//		case 44:	SetPtrVar(162,1);		break;
//		case 45:	SetPtrVar(163,1);		break;
//		case 46:	SetPtrVar(164,1);		break;
//		case 47:	SetPtrVar(165,1);		break;
//		case 48:	SetPtrVar(166,1);		break;
		default:		break;
	}
}

void Set_Move_Error_Alarm(const int motor)
{
	switch (motor)
	{
//		case 1:   SetPtrVar(311, 1);	break;
//		case 2:   SetPtrVar(312, 1);	break;
//		case 3:   SetPtrVar(313, 1);	break;
//		case 4:   SetPtrVar(314, 1);	break;
//		case 5:   SetPtrVar(315, 1);	break;
//		case 6:   SetPtrVar(316, 1);	break;
//		case 7:   SetPtrVar(317, 1);	break;
//		case 8:   SetPtrVar(318, 1);	break;
////		case 9:   SetPtrVar();			break;
////		case 10:  SetPtrVar();           break;
//		case 11:  SetPtrVar(321, 1);    break;
//		case 12:  SetPtrVar(322, 1);    break;
//		case 13:  SetPtrVar(323, 1);    break;
//		case 14:  SetPtrVar(324, 1);	break;
//		case 15:  SetPtrVar(325, 1);    break;
//		case 16:  SetPtrVar(326, 1);    break;
//		case 17:  SetPtrVar(327, 1);	break;
//		case 18:  SetPtrVar(328, 1);	break;
//		case 19:  SetPtrVar(329, 1);	break;
//		case 20:  SetPtrVar(330, 1);	break;
//		case 21:  SetPtrVar(331, 1);    break;
//		case 22:  SetPtrVar(332, 1);    break;
//		case 23:  SetPtrVar(333, 1);    break;
//		case 24:  SetPtrVar(334, 1);    break;
//		case 25:  SetPtrVar(335, 1);    break;
//		case 26:  SetPtrVar(336, 1);    break;
//		case 27:  SetPtrVar(319, 1);    break;
//		case 28:  SetPtrVar(320, 1);    break;
////		case 29:  SetPtrVar();        break;
////		case 30:  SetPtrVar();             break;
////		case 31:  SetPtrVar();             break;
////		case 32:  SetPtrVar();             break;
//		case 33:  SetPtrVar(341, 1);    break;
//		case 34:  SetPtrVar(342, 1);    break;
//		case 35:  SetPtrVar(343, 1);    break;
//		case 36:  SetPtrVar(344, 1);    break;
//		case 37:  SetPtrVar(345, 1);    break;
//		case 38:  SetPtrVar(346, 1);    break;
//		case 39:  SetPtrVar(347, 1);    break;
//		case 40:  SetPtrVar(348, 1);    break;
//		case 41:  SetPtrVar(349, 1);    break;
//		case 42:  SetPtrVar(350, 1);    break;
//		case 43:  SetPtrVar(351, 1);    break;
//		case 44:  SetPtrVar(352, 1);    break;
//		case 45:  SetPtrVar(353, 1);    break;
//		case 46:  SetPtrVar(354, 1);    break;
//		case 47:  SetPtrVar(355, 1);    break;
//		case 48:  SetPtrVar(356, 1);    break;

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
	//if (pshm->P[P_UI_Jog_Vel_M + g_Page_Num] >= 0 && pshm->P[P_UI_Jog_Vel_M + g_Page_Num] <=  100)
	//{
	//	if (GetPtrVar(M_X_Other_Door_Open_Signal))		
	//		ret_jog_speed = 20; 
	//	else
	//		ret_jog_speed = pshm->P[P_UI_Jog_Vel_M + g_Page_Num];
	//}
	//else
	//	ret_jog_speed = 0;

		ret_jog_speed = GetPtrArrayVar(M_Motor_Vel,g_Page_Num);	// UI Speed 대입
		//pshm->Motor[g_Page_Num].JogSpeed = ret_jog_speed / 100;	// 단위 변환

	return ret_jog_speed/100;
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
	//printf("gnum = %d\n", nPageNum);
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
	nRecipe_Btn_Flag = (unsigned int)pshm->P[P_Recipe_POS_Interock_M + nPageNum];

//	if((nRecipe_Bit_Masking & nRecipe_Btn_Flag) == 0)
//	{
//		return -999;
//	}

	Get_Recipe_Distance(dAbs_distance_arr, nPageNum);
	// nRecipe_Btn_Flag 인터락 비트는 0, 인터락 해제는 1 
	switch(nRecipe_Bit_Masking)
	{
		case 0x0001 :
			if((nRecipe_Btn_Flag & N_Hex_POS1_Interlock_On))			
				dRet_Distance = dAbs_distance_arr[1];
			else
				dRet_Distance = -999;

		break;
		case 0x0002 :	
			if((nRecipe_Btn_Flag & N_Hex_POS2_Interlock_On))
				dRet_Distance = dAbs_distance_arr[2];
			else
				dRet_Distance = -999;
		break;
		case 0x0004 :	
			if((nRecipe_Btn_Flag & N_Hex_POS3_Interlock_On))
				dRet_Distance = dAbs_distance_arr[3];
			else
				dRet_Distance = -999;
		break;
		case 0x0008 :
			if((nRecipe_Btn_Flag & N_Hex_POS4_Interlock_On))
				dRet_Distance = dAbs_distance_arr[4];
			else
				dRet_Distance = -999;
		break;
		case 0x0010 :
			if((nRecipe_Btn_Flag & N_Hex_POS5_Interlock_On))
				dRet_Distance = dAbs_distance_arr[5];
			else
				dRet_Distance = -999;
		break;
		case 0x0020 :
			if((nRecipe_Btn_Flag & N_Hex_POS6_Interlock_On))
				dRet_Distance = dAbs_distance_arr[6];
			else
				dRet_Distance = -999;
		break;
		case 0x0040 :
			if((nRecipe_Btn_Flag & N_Hex_POS7_Interlock_On))
				dRet_Distance = dAbs_distance_arr[7];
			else
				dRet_Distance = -999;
		break;
		case 0x0080 :
			if((nRecipe_Btn_Flag & N_Hex_POS8_Interlock_On))
				dRet_Distance = dAbs_distance_arr[8];
			else
				dRet_Distance = -999;
		break;
		case 0x0100 :
			if((nRecipe_Btn_Flag & N_Hex_POS9_Interlock_On))
				dRet_Distance = dAbs_distance_arr[9];
			else
				dRet_Distance = -999;
		break;
		case 0x0200 :
			if((nRecipe_Btn_Flag & N_Hex_POS10_Interlock_On))
				dRet_Distance = dAbs_distance_arr[10];
			else
				dRet_Distance = -999;
		break;
		default: dRet_Distance = -999;	break;
	}

	//if(dRet_Distance == 0)
	//{
	//	return -999;
	//}

	return dRet_Distance;
}

// 레시피 변수명에 따라 Switch로 나열할지 수정 할지 결정
void Get_Recipe_Distance(double arr[], int nPageNum)
{
	int i = 0;
	double nScale = 1000;

	for(i = 1; i < 11; i++)
	{
		switch(nPageNum)
		{
			case 1:	 arr[i] = pshm->P[P_Recipe_M01_POS + i] * nScale; break;
			case 2:	 arr[i] = pshm->P[P_Recipe_M02_POS + i] * nScale; break;
			case 3:	 arr[i] = pshm->P[P_Recipe_M03_POS + i] * nScale; break;
			case 4:	 arr[i] = pshm->P[P_Recipe_M04_POS + i] * nScale; break;
			case 5:	 arr[i] = pshm->P[P_Recipe_M05_POS + i] * nScale; break;
			case 6:	 arr[i] = pshm->P[P_Recipe_M06_POS + i] * nScale; break;
			case 7:	 arr[i] = pshm->P[P_Recipe_M07_POS + i] * nScale; break;
			case 8:	 arr[i] = pshm->P[P_Recipe_M08_POS + i] * nScale; break;
			case 9:	 arr[i] = pshm->P[P_Recipe_M09_POS + i] * nScale; break;
			case 10: arr[i] = pshm->P[P_Recipe_M10_POS + i] * nScale; break;
			case 11: arr[i] = pshm->P[P_Recipe_M11_POS + i] * nScale; break;
			case 12: arr[i] = pshm->P[P_Recipe_M12_POS + i] * nScale; break;
			case 13: arr[i] = pshm->P[P_Recipe_M13_POS + i] * nScale; break;
			case 14: arr[i] = pshm->P[P_Recipe_M14_POS + i] * nScale; break;
			case 15: arr[i] = pshm->P[P_Recipe_M15_POS + i] * nScale; break;
			case 16: arr[i] = pshm->P[P_Recipe_M16_POS + i] * nScale; break;
			//case 17: arr[i] = pshm->P[P_Recipe_M17_POS + i] / nScale; break;
			//case 18: arr[i] = pshm->P[P_Recipe_M18_POS + i] / nScale; break;
			case 19: arr[i] = pshm->P[P_Recipe_M19_POS + i] * nScale; break;
			case 20: arr[i] = pshm->P[P_Recipe_M20_POS + i] * nScale; break;
			//case 21: arr[i] = pshm->P[P_Recipe_M21_POS + i] / nScale; break;
			//case 22: arr[i] = pshm->P[P_Recipe_M22_POS + i] / nScale; break;
			case 23: arr[i] = pshm->P[P_Recipe_M23_POS + i] * nScale; break;
			case 24: arr[i] = pshm->P[P_Recipe_M24_POS + i] * nScale; break;
			case 25: arr[i] = pshm->P[P_Recipe_M25_POS + i] * nScale; break;
			case 26: arr[i] = pshm->P[P_Recipe_M26_POS + i] * nScale; break;
			case 27: arr[i] = pshm->P[P_Recipe_M27_POS + i] * nScale; break;
			case 28: arr[i] = pshm->P[P_Recipe_M28_POS + i] * nScale; break;
			case 29: arr[i] = pshm->P[P_Recipe_M29_POS + i] * nScale; break;
			case 30: arr[i] = pshm->P[P_Recipe_M30_POS + i] * nScale; break;
			case 31: arr[i] = pshm->P[P_Recipe_M31_POS + i] * nScale; break;
			case 32: arr[i] = pshm->P[P_Recipe_M32_POS + i] * nScale; break;
			case 33: arr[i] = pshm->P[P_Recipe_M33_POS + i] * nScale; break;
			case 34: arr[i] = pshm->P[P_Recipe_M34_POS + i] * nScale; break;
			case 35: arr[i] = pshm->P[P_Recipe_M35_POS + i] * nScale; break;
			case 36: arr[i] = pshm->P[P_Recipe_M36_POS + i] * nScale; break;
			case 37: arr[i] = pshm->P[P_Recipe_M37_POS + i] * nScale; break;
			case 38: arr[i] = pshm->P[P_Recipe_M38_POS + i] * nScale; break;
			case 39: arr[i] = pshm->P[P_Recipe_M39_POS + i] * nScale; break;
			case 40: arr[i] = pshm->P[P_Recipe_M40_POS + i] * nScale; break;
			case 41: arr[i] = pshm->P[P_Recipe_M41_POS + i] * nScale; break;
			case 42: arr[i] = pshm->P[P_Recipe_M42_POS + i] * nScale; break;
			case 43: arr[i] = pshm->P[P_Recipe_M43_POS + i] * nScale; break;
			case 44: arr[i] = pshm->P[P_Recipe_M44_POS + i] * nScale; break;
			case 45: arr[i] = pshm->P[P_Recipe_M45_POS + i] * nScale; break;
			case 46: arr[i] = pshm->P[P_Recipe_M46_POS + i] * nScale; break;
			case 47: arr[i] = pshm->P[P_Recipe_M47_POS + i] * nScale; break;
			case 48: arr[i] = pshm->P[P_Recipe_M48_POS + i] * nScale; break;

		//실제 장비 즉 크랭크 축이 생긴다면 적용해야 하는 부분 [ 참조 : 2025.09.01 크랭크 Z축 위치값 변환 ]
			case 17:		// 양극 1차 PNP 레시피값 -> 모터 Count 변환
				switch(i)
				{
					case 1:	arr[i] = pshm->P[P_Cathode_1st_Z_Ready_Up]*1000;	break;

					case 3:	arr[i] = pshm->P[P_Cathode_1st_Z_Belt_Up]*1000;		break;
					
					case 4:	arr[i] = pshm->P[P_Cathode_1st_Z_Belt_Down]*1000; 	break;
					
					case 5:	arr[i] = pshm->P[P_Cathode_1st_Z_Align_Up]*1000; 	break;
					
					case 6:	arr[i] = pshm->P[P_Cathode_1st_Z_Align_Down]*1000; 	break;	

					default: break;
				}
			break;

			case 18:
				switch(i)
				{
					case 1: arr[i] = pshm->P[P_Anode_1st_Z_Ready_Up]*1000;		break;

					case 3:	arr[i] = pshm->P[P_Anode_1st_Z_Belt_Up]*1000;		break;
					
					case 4:	arr[i] = pshm->P[P_Anode_1st_Z_Belt_Down]*1000;		break;
					
					case 5:	arr[i] = pshm->P[P_Anode_1st_Z_Align_Up]*1000;		break;
					
					case 6:	arr[i] = pshm->P[P_Anode_1st_Z_Align_Down]*1000;		break;

					default : break;
				}
			break;

			case 21:
				switch(i)
				{
					// 260311 레시피 조그 이동 수정
					case 1:	arr[i] = pshm->P[P_Cathode_2nd_Z_Ready_Up]*1000;		break;

					case 2:	arr[i] = pshm->P[P_Cathode_2nd_Z_Align_Up]*1000;		break;
					
					case 3:	arr[i] = pshm->P[P_Cathode_2nd_Z_Align_Down]*1000;	break;
					
					case 4:	arr[i] = pshm->P[P_Cathode_2nd_Z_Stack_Up]*1000;		break;
					
					case 5:	arr[i] = pshm->P[P_Cathode_2nd_Z_Stack_Down]*1000;	break;

					case 6: arr[i] = pshm->P[P_Cathode_2nd_Z_Ready_Up]*1000;		break;

					default : break;
				}
			break;
			
			case 22:
				switch(i)
				{
					// 260311 레시피 조그 이동 수정
					case 1:	arr[i] = pshm->P[P_Anode_2nd_Z_Ready_Up]*1000;		break;

					case 2:	arr[i] = pshm->P[P_Anode_2nd_Z_Align_Up]*1000;		break;
					
					case 3:	arr[i] = pshm->P[P_Anode_2nd_Z_Align_Down]*1000;		break;
					
					case 4:	arr[i] = pshm->P[P_Anode_2nd_Z_Stack_Up]*1000;		break;
					
					case 5:	arr[i] = pshm->P[P_Anode_2nd_Z_Stack_Down]*1000;		break;

					case 6:	arr[i] = pshm->P[P_Anode_2nd_Z_Ready_Up]*1000;		break;

					default : break;
				}
			break;
			
			default :
			break;
		}

		printf(" %d 번째 레시피값: %lf \n",i,arr[i]);
	}
}


double inc_Crank_Z_Func( int unit, double PosData )		// [ 참조: 26.01.20 PNP Z축 INC, ABS GUI 처리 ]
{
	double home_pos,home_angle,move_pos,numerator,denominator,radian,Degree,rtn;
	int M_unit = unit - 1;
	double dCalPos = PosData / 1000;

	home_pos = pshm->P[P_Zero_Length + unit] - *Motor_Status[M_unit].dMotorCurrentPos;		// Zero Length - 현재위치(mm)
	home_angle = pshm->P[P_Zero_Angle + unit] + pshm->P[P_Motor_Current_Pos + unit];			// Zero Angle + Cur Angle;
	//switch( unit )
	//{
	//	case 17:
	//		home_pos = pshm->P[P_CA_1st_Z_Zero_Length] - *Motor_Status[M_unit].dMotorCurrentPos;		// Zero Length - 현재위치(mm)
	//		home_angle = pshm->P[P_CA_1st_Z_Zero_Angle] + pshm->P[P_Motor_Current_Pos + unit];			// Zero Angle + Cur Angle;
	//	break;
	//
	//	case 18:
	//		home_pos = pshm->P[P_AN_1st_Z_Zero_Length] - *Motor_Status[M_unit].dMotorCurrentPos;		// Zero Length - 현재위치(mm)
	//		home_angle = pshm->P[P_AN_1st_Z_Zero_Angle] + pshm->P[P_Motor_Current_Pos + unit];			// Zero Angle + Cur Angle
	//	break;
	//
	//	case 21:
	//		home_pos = pshm->P[P_CA_2nd_Z_Zero_Length] - *Motor_Status[M_unit].dMotorCurrentPos;		// Zero Length - 현재위치(mm)
	//		home_angle = pshm->P[P_CA_2nd_Z_Zero_Angle] + pshm->P[P_Motor_Current_Pos + unit];			// Zero Angle + Cur Angle;
	//	break;
	//
	//	case 22:
	//		home_pos = pshm->P[P_AN_2nd_Z_Zero_Length] - *Motor_Status[M_unit].dMotorCurrentPos;		// Zero Length - 현재위치(mm)
	//		home_angle = pshm->P[P_AN_2nd_Z_Zero_Angle] + pshm->P[P_Motor_Current_Pos + unit];			// Zero Angle + Cur Angle;
	//	break;
	//}
	
	//printf(" CurPos : %lf \n",*Motor_Status[M_unit].dMotorCurrentPos);
	move_pos = home_pos - dCalPos;
	//printf(" move_pos: %lf \n ",move_pos);
	numerator = pow(move_pos,2) + pow(Crank_radius,2) - pow(Crank_rod,2);		// 분자 계산
	//printf(" numerator: %lf \n ",numerator);
	denominator = 2 * move_pos * Crank_radius;									// 분모계산
	//printf(" denominator: %lf \n ",denominator);
	radian = acos(numerator/denominator);										// Rad 각도 계산
	//printf(" radian: %lf \n ",radian);
	Degree = radian * 180 / 3.141592;											// Deg 변환
	//printf(" Degree: %lf \n ",Degree);
	rtn = (Degree - home_angle) * 1000;											// 최종 움직여야 할 각도
	//printf(" rtn: %lf \n ",rtn);
	return rtn;
}

double abs_Crank_Z_Func( int unit, double PosData )		// [ 참조: 26.01.20 PNP Z축 INC, ABS GUI 처리 ]
{
	double home_pos,home_angle,move_pos,numerator,denominator,radian,Degree,rtn;
	double dCalPos = PosData / 1000;
	home_pos = pshm->P[P_Zero_Length + unit];
	home_angle = pshm->P[P_Zero_Angle + unit];
	// 90Deg에서 홈센서가 달릴거고, 그 위치가 아닌 Offset을 처리하여 홈을 움직일텐데
	//switch( unit )
	//{
	//	case 17:
	//		home_pos = pshm->P[P_CA_1st_Z_Zero_Length];
	//		home_angle = pshm->P[P_CA_1st_Z_Zero_Angle];
	//	break;
	//
	//	case 18:
	//		home_pos = pshm->P[P_AN_1st_Z_Zero_Length];
	//		home_angle = pshm->P[P_AN_1st_Z_Zero_Angle];
	//	break;
	//
	//	case 21:
	//		home_pos = pshm->P[P_CA_2nd_Z_Zero_Length];
	//		home_angle = pshm->P[P_CA_2nd_Z_Zero_Angle];
	//	break;
	//
	//	case 22:
	//		home_pos = pshm->P[P_AN_2nd_Z_Zero_Length];
	//		home_angle = pshm->P[P_AN_2nd_Z_Zero_Angle];
	//	break;
	//}

	move_pos = home_pos - dCalPos;
	//printf(" move_pos: %lf \n ",move_pos);
	numerator = pow(move_pos,2) + pow(Crank_radius,2) - pow(Crank_rod,2);		// 분자 계산
	//printf(" numerator: %lf \n ",numerator);
	denominator = 2 * move_pos * Crank_radius;									// 분모계산
	//printf(" denominator: %lf \n ",denominator);
	radian = acos(numerator/denominator);										// Rad 각도 계산
	//printf(" radian: %lf \n ",radian);
	Degree = radian * 180 / 3.141592;											// Deg 변환
	//printf(" Degree: %lf \n ",Degree);
	rtn = (Degree - home_angle) * 1000;											// 최종 움직여야 할 각도
	//printf(" rtn: %lf \n ",rtn);

	return rtn;
}