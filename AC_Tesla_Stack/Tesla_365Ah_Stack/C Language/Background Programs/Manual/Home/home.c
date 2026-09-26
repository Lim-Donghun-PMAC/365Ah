#include "_home.h"

//- 함수 List -//
// 1. 홈정보 초기화함수. - 모터별 홈타입 설정 및 스텝 초기화.

extern int g_Move_Check; //[ 참조 : 26.05.14 Home InterLock & HomeCheck Func Change ]

int Home_Initialize_Type(Stack_Information* ptr)
{
	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_uSEC*5000;   // 5ms			NANO_uSEC 는 1000이고, nano초에서 u초로 변환
	int i;	// 모터번호.
	for (i = 1; i < M_Stack_Motor_Last; i++)
	{
		nanosleep(&nsleep,NULL);      // 5msec
		switch (i)
		{
		case M_CATHODE_1ST_T:				// #1
			ptr->Stack_PJT_HM[i].Home_Type_No = Home_PWM_Type;		//[ 참조 : 플러스 방향 홈 시퀀스 추가 ]	 
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_PWM_Type;		//[ 참조 : 26.05.14 Home InterLock & HomeCheck Func Change ]		 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;
			break;
		case M_ANODE_1ST_T:				// #2
			ptr->Stack_PJT_HM[i].Home_Type_No = Home_PWM_Type;		
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_PWM_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;
			break;
		case M_CATHODE_2ND_T:			// #3
			ptr->Stack_PJT_HM[i].Home_Type_No = Home_PWM_Type;
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_PWM_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;
			break;
		case M_ANODE_2ND_T:		
			ptr->Stack_PJT_HM[i].Home_Type_No = Home_PWM_Type;
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_PWM_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;
			break;
		case M_CATHODE_Clamp_Y1:			// #5
			#ifdef F_Real_Axis_Test			// 실축이라면, -리밋이 없으므로..
				ptr->Stack_PJT_HM[i].Home_Type_No = Home_ClampY;          
				ptr->Stack_PJT_HM[i].Step_No = Step_0;
				ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;				//[ 참조 : 26.05.14 Home InterLock & HomeCheck Func Change ]
				ptr->Stack_HCK_HM[i].Step_No = Step_0;
			#else							// 가상축이라면, 홈센서가 없으므로..
				ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_1;          
				ptr->Stack_PJT_HM[i].Step_No = Step_0;
				ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
				ptr->Stack_HCK_HM[i].Step_No = Step_0;
			#endif
		break;		
		case M_ANODE_Clamp_Y1:			// #6
			#ifdef F_Real_Axis_Test			// 실축이라면, -리밋이 없으므로..
				ptr->Stack_PJT_HM[i].Home_Type_No = Home_ClampY;          
				ptr->Stack_PJT_HM[i].Step_No = Step_0;
				ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
				ptr->Stack_HCK_HM[i].Step_No = Step_0;
			#else							// 가상축이라면, 홈센서가 없으므로..
				ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_1;          
				ptr->Stack_PJT_HM[i].Step_No = Step_0;
				ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
				ptr->Stack_HCK_HM[i].Step_No = Step_0;
			#endif
		break;
		case M_CATHODE_Clamp_Y2:			// #7
			#ifdef F_Real_Axis_Test			// 실축이라면, -리밋이 없으므로..
				ptr->Stack_PJT_HM[i].Home_Type_No = Home_ClampY;          
				ptr->Stack_PJT_HM[i].Step_No = Step_0;
				ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
				ptr->Stack_HCK_HM[i].Step_No = Step_0;
			#else							// 가상축이라면, 홈센서가 없으므로..
				ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_1;          
				ptr->Stack_PJT_HM[i].Step_No = Step_0;
				ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
				ptr->Stack_HCK_HM[i].Step_No = Step_0;
			#endif
		break;
		case M_ANODE_Clamp_Y2:				// #8
			#ifdef F_Real_Axis_Test			// 실축이라면, -리밋이 없으므로..
				ptr->Stack_PJT_HM[i].Home_Type_No = Home_ClampY;          
				ptr->Stack_PJT_HM[i].Step_No = Step_0;
				ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
				ptr->Stack_HCK_HM[i].Step_No = Step_0;
			#else							// 가상축이라면, 홈센서가 없으므로..
				ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_1;          
				ptr->Stack_PJT_HM[i].Step_No = Step_0;
				ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
				ptr->Stack_HCK_HM[i].Step_No = Step_0;
			#endif
		break;
		case M_CATHODE_Clamp_Z:			// #9 → 27	[ 참조 : 클램프 Z1 모터 번호 변경 2025.10.16 ]
			ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_1;
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;
			break;
		case M_ANODE_Clamp_Z:			// #10 → 28	[ 참조 : 클램프 Z1 모터 번호 변경 2025.10.16 ]
			ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_1; 
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;
			break;
		case M_Main_Z:			// #11
			ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_1;   
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;
			break;
		case M_Final_Roll_X:			// #12
			ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_1;                     
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;
			break;
		case M_Final_Roll_Z:		// #13
			ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_1;          
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;
			break;
		case M_Sub_Feeding_Roll:			// #14
			ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_None;      
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;
			break;
		case M_Driving_Roll:		 // #15
			ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_None;    
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;
			break;
		case M_Serovo_Dancer:			 // #16
			ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_1;     
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;
			break;
		case M_CATHODE_1ST_Z:		 // #17 
			ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_1;   
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;
			break;
		case M_ANODE_1ST_Z:				// #18
			ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_1;                
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;
			break;
		case M_CATHODE_2ND_Z:			// #19	
			ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_1;                 
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;
			break;
		case M_ANODE_2ND_Z:				// #20 
			ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_1;             
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;
			break;
		case M_CATHODE_1ST_Picker_T:		// #21 
			#ifdef F_Real_Axis_Test			// 실축이라면, -리밋이 없으므로.. 피커타입 홈으로 진행
				ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_Picker_T;          
				ptr->Stack_PJT_HM[i].Step_No = Step_0;
				ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
				ptr->Stack_HCK_HM[i].Step_No = Step_0;
			#else							// 가상축이라면, 홈센서가 없으므로..
				ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_1;          
				ptr->Stack_PJT_HM[i].Step_No = Step_0;
				ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
				ptr->Stack_HCK_HM[i].Step_No = Step_0;
			#endif
			break;	
		case M_ANODE_1ST_Picker_T:		// #22 
			#ifdef F_Real_Axis_Test		// 실축이라면, -리밋이 없으므로.. 피커타입 홈으로 진행
				ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_Picker_T;          
				ptr->Stack_PJT_HM[i].Step_No = Step_0;
				ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
				ptr->Stack_HCK_HM[i].Step_No = Step_0;
			#else							// 가상축이라면, 홈센서가 없으므로..
				ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_1;          
				ptr->Stack_PJT_HM[i].Step_No = Step_0;
				ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
				ptr->Stack_HCK_HM[i].Step_No = Step_0;
			#endif
			break;
		case M_Upper_Unwinder:		// #23 
			ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_None;           
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
				ptr->Stack_HCK_HM[i].Step_No = Step_0;
			break;
		case M_Lower_Unwinder:			// #24 
			ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_None;            
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
				ptr->Stack_HCK_HM[i].Step_No = Step_0;
			break;
		case M_CATHODE_Clamp_Z2:			// #25 [ 참조 : 2025.07.23 홈 프로그램 수정 ]
			ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_1;            
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;
			break;	
		case M_Anode_Clamp_Z2:				// #26 [ 참조 : 2025.07.23 홈 프로그램 수정 ]
			ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_1;          
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;
			break;

		case M_EPC_Sensor:				// #33
			ptr->Stack_PJT_HM[i].Home_Type_No = Ether_Cat_Home_Type;           
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;
		break;

		case M_Stack_Vision_Camera:		// #34 
			ptr->Stack_PJT_HM[i].Home_Type_No = Ether_Cat_Home_Type;           
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;
			break;
		case M_Sheet_1ST_Paper_X:		// #35
			ptr->Stack_PJT_HM[i].Home_Type_No = Ether_Cat_Home_Type;           
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;	
			break;
		case M_CATHODE_Align_X:			// #36
			ptr->Stack_PJT_HM[i].Home_Type_No = Ether_Cat_Home_Type;           
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;	
		break;
		case M_CATHODE_Align_Y:			// #37
			ptr->Stack_PJT_HM[i].Home_Type_No = Ether_Cat_Home_Type;           
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;	
		break;
		case M_CATHODE_Align_T:			// #38
			ptr->Stack_PJT_HM[i].Home_Type_No = Ether_Cat_Home_Type;           
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;	
		break;
		case M_ANODE_Align_X:			// #39
			ptr->Stack_PJT_HM[i].Home_Type_No = Ether_Cat_Home_Type;           
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;	
		break;
		case M_ANODE_Align_Y:			// #40
			ptr->Stack_PJT_HM[i].Home_Type_No = Ether_Cat_Home_Type;           
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;	
		break;
		case M_ANODE_Align_T:			// #41
			ptr->Stack_PJT_HM[i].Home_Type_No = Ether_Cat_Home_Type;           
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;	
		break;
		case M_CATHODE_Sample_NG_T:		// #42	
			ptr->Stack_PJT_HM[i].Home_Type_No = Ether_Cat_Home_Type;           
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;	
		break;
		case M_ANODE_Sample_NG_T:		// #43	
			ptr->Stack_PJT_HM[i].Home_Type_No = Ether_Cat_Home_Type;           
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;	
		break;
		case M_CATHODE_Sample_NG_Z:		// #44	
			ptr->Stack_PJT_HM[i].Home_Type_No = Ether_Cat_Home_Type;           
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;	
		break;
		case M_ANODE_Sample_NG_Z:		// #45	
			ptr->Stack_PJT_HM[i].Home_Type_No = Ether_Cat_Home_Type;           
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;	
		break;
		case M_Unloader_1ST_X:			// #46
			ptr->Stack_PJT_HM[i].Home_Type_No = Ether_Cat_Home_Type;           
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;	
		break;
		case M_Unloader_1ST_Y:			// #47
			ptr->Stack_PJT_HM[i].Home_Type_No = Ether_Cat_Home_Type;           
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;	
		break;
		case M_Unloader_1ST_T:			// #48
			ptr->Stack_PJT_HM[i].Home_Type_No = Ether_Cat_Home_Type;           
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;	
		break;
		default:	// 이외.
			ptr->Stack_PJT_HM[i].Home_Type_No = Home_Type_None;
			ptr->Stack_PJT_HM[i].Step_No = Step_0;
			ptr->Stack_HCK_HM[i].Home_Type_No = HCK_Normal_Type;			 
			ptr->Stack_HCK_HM[i].Step_No = Step_0;
			break;
		}
	}
	// [ 참조 : 26.04.28 Picker T축 탭방향에 따른 홈방식 변경 ]
	Cathode_1st_Sheet_Data = (double*)pushm + 1001;	//Sys.Ddata[1001]
	Anode_1st_Sheet_Data = (double*)pushm + 1011;	//Sys.Ddata[1011]

	return 1;
}

	// 1. 홈커멘드 체크 - 항시감시. ( 홈커멘드체크 및 상태업데이트 )
void* Home_Cmd_Check(void* arg)
{
	int motor_num;
	int Result[M_Stack_Motor_Last] = {0};
	// pthread_setcancelstate함수 -> PTHREAD_CANCEL_DISABLE, PTHREAD_CANCEL_ENABLE 옵션 
	// PTHREAD_CANCEL_ENABLE : 쓰레드 cancel 명령시 그 읽고있던 위치까지 읽고 종료 하는 모드 설정  PTHREAD_CANCEL_DISABLE : cancel명령 받아도 종료 하지 않음.
	// pthread_setcanceltype함수 -> PTHREAD_CANCEL_ASYNCHRONOUS, PTHREAD_CANCEL_DEFERRED  옵션
	// PTHREAD_CANCEL_ASYNCHRONOUS : cancel 명령시 그 위치에서 종료하는 타입. PTHREAD_CANCEL_DEFERRED : 쓰레드 join, mutex같은 동기화 작업 후 종료하는 타입.
	// 외부에서 thread 강제종료하기 위해 속성을 설정함.
	pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, NULL);
	pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL);
	Stack_Information* ptr = (Stack_Information*)arg;
	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_uSEC*5000;   // 5ms		NANO_uSEC 는 1000이고, nano초에서 u초로 변환
	while (1)
	{
		for (motor_num = 1; motor_num < M_Stack_Motor_Last; motor_num++)
		{
			switch ( (int)pshm->P[P_Home_Command + motor_num] )
			{
			case 1 :// Start Command
				pshm->P[P_Current_Homming_Status + motor_num] = F_Status_STARTING;
				if( motor_num == M_Serovo_Dancer || motor_num == M_CATHODE_1ST_Picker_T || motor_num == M_ANODE_1ST_Picker_T || motor_num == M_Upper_Unwinder || motor_num == M_Lower_Unwinder ) // Serovo Dancer && 양,음극 PICKER T축
				{
					ptr->Stack_PJT_HM[motor_num].Step_No = 1;		// 해당모터 스텝번호 Start.
					nanosleep(&nsleep,NULL);      // 5msec
					pshm->P[P_Home_Command + motor_num] = 0;		// 커멘드 초기화.
				}
				else	// 양,음극 피커 및 언와인더, 댄서 를 제외한 모터들
				{	
					if( pshm->P[P_PMAC_Homing_CHK + motor_num ] != 1 )	// 홈 체크 변수가 꺼져있을 때
					{	// 홈 완료 모터가 아니라면 홈 진행.
						ptr->Stack_PJT_HM[motor_num].Step_No = 1;		// 해당모터 스텝번호 Start.
						nanosleep(&nsleep,NULL);    // 5msec
						pshm->P[P_Home_Command + motor_num] = 0;		// 커멘드 초기화.
					}
					else	//[ 참조 : 26.05.14 Home InterLock & HomeCheck Func Change ]
					{
						ptr->Stack_HCK_HM[motor_num].Step_No = 1;		// 해당모터 스텝번호 Start.
						nanosleep(&nsleep,NULL);    // 5msec
						pshm->P[P_Home_Command + motor_num] = 0;		// 커멘드 초기화.
					}
				}
				break;
			case 9: // Stop Command
				ptr->Stack_PJT_HM[motor_num].Step_No = 0;		// 해당모터 스텝번호 초기화.
				ptr->Stack_HCK_HM[motor_num].Step_No = 0;		// 해당모터 스텝번호 초기화.
				Home_Func_No2(motor_num);						// 해당모터 jog/		2023.10.19 기능변경.
				pshm->P[P_Home_Command + motor_num] = 0;		// 커멘드 초기화.
				pshm->P[P_Current_Homming_Status + motor_num] = F_Status_STOPPED;
				break;
			default:
				break;
			}
			nanosleep(&nsleep,NULL);      //5msec
		}
		// [ 참조 : 26.04.28 Picker T축 탭방향에 따른 홈방식 변경 ]
		pshm->P[1005] = *Cathode_1st_Sheet_Data;
		pshm->P[1006] = *Anode_1st_Sheet_Data;
		if( pshm->P[P_All_Home_Stop_Cmd] == 1 )				// All Home Stop Cmd 감지 
		{
			for( motor_num = 1; motor_num < M_Stack_Motor_Last; motor_num++ )
			{
				ptr->Stack_PJT_HM[motor_num].Step_No = 0;
				ptr->Stack_HCK_HM[motor_num].Step_No = 0;		// 해당모터 스텝번호 초기화.
				Home_Func_No2(motor_num);						// 해당모터 jog/
				pshm->P[P_Current_Homming_Status + motor_num] = F_Status_STOPPED;
			}
			pshm->P[P_All_Home_Stop_Cmd] = 0;
		}
		nanosleep(&nsleep,NULL);      //5msec
	}
}

// 2. 홈 실행함수 - 실행 이후 완료되지 않으면 계속 실행. ( 모터번호와 홈스텝을 업데이트하여 호출 ).
void* Home_Execute(void* arg)
{
	// pthread_setcancelstate함수 -> PTHREAD_CANCEL_DISABLE, PTHREAD_CANCEL_ENABLE 옵션 
	// PTHREAD_CANCEL_ENABLE : 쓰레드 cancel 명령시 그 읽고있던 위치까지 읽고 종료 하는 모드 설정  PTHREAD_CANCEL_DISABLE : cancel명령 받아도 종료 하지 않음.
	// pthread_setcanceltype함수 -> PTHREAD_CANCEL_ASYNCHRONOUS, PTHREAD_CANCEL_DEFERRED  옵션
	// PTHREAD_CANCEL_ASYNCHRONOUS : cancel 명령시 그 위치에서 종료하는 타입. PTHREAD_CANCEL_DEFERRED : 쓰레드 join, mutex같은 동기화 작업 후 종료하는 타입.
	// 외부에서 thread 강제종료하기 위해 속성을 설정함.
	pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, NULL);
	pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL);
	Stack_Information* ptr = (Stack_Information*)arg;
	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_uSEC*1000;   // 1ms		NANO_uSEC 는 1000이고, nano초에서 u초로 변환
	int Motor_Num;
	while(1)
	{
		if(pshm->P[P_PMAC_Current_Mode] == 2)
		{
			for (Motor_Num = 1; Motor_Num < M_Stack_Motor_Last; Motor_Num++)
			{
				// HomeCheck 변수가 없는 Step 
				if (ptr->Stack_PJT_HM[Motor_Num].Step_No != 0 && ptr->Stack_PJT_HM[Motor_Num].Step_No != Step_Last) 
				{ // 해당 모터의 스텝번호가 0 또는 Last가 아니면
					pshm->P[ P_Home_Status + Motor_Num ] = 3; // EXECUTE 표시	
					if( ptrfunchome_matrix[ptr->Stack_PJT_HM[Motor_Num].Step_No][ptr->Stack_PJT_HM[Motor_Num].Home_Type_No](Motor_Num) == 1 )
					{ // 동작완료되면 스텝증가. 완료되지않으면 다음 턴에 현재 스텝 다시 호출.
						ptr->Stack_PJT_HM[Motor_Num].Step_No = ptr->Stack_PJT_HM[Motor_Num].Step_No + 1;
					}
					else
					{
						g_Move_Check = 1; //[ 참조 : 26.05.14 Home InterLock & HomeCheck Func Change ]
						//pshm->P[2] = (double)g_Move_Check;
					}
					nanosleep(&nsleep,NULL);      //1msec
				}
				else
				{
					if(ptr->Stack_PJT_HM[Motor_Num].Step_No == Step_Last )
					{ // 홈동작 완료되었다면
						pshm->P[ P_Home_Status + Motor_Num ] = F_Status_COMPLETE;			// COMPLETE 표시
						pshm->P[P_Current_Homming_Status + Motor_Num] = F_Status_COMPLETE;
						ptr->Stack_PJT_HM[Motor_Num].Step_No = Step_0;	// 스텝 초기화. ( 대기위치로 이동 )
					}
				}
				// HomeCheck 변수가 있는 Step  [ 참조 : 26.05.14 Home InterLock & HomeCheck Func Change ]
				if (ptr->Stack_HCK_HM[Motor_Num].Step_No != 0 && ptr->Stack_HCK_HM[Motor_Num].Step_No != Step_Last) 
				{
					pshm->P[ P_Home_Status + Motor_Num ] = 3; // EXECUTE 표시
					if( pfunc_HCK_matrix[ptr->Stack_HCK_HM[Motor_Num].Step_No][ptr->Stack_HCK_HM[Motor_Num].Home_Type_No](Motor_Num) == 1 )
					{ // 동작완료되면 스텝증가. 완료되지않으면 다음 턴에 현재 스텝 다시 호출.
						pshm->P[P_Home_Check_Arry1 + Motor_Num] =  (double)ptr->Stack_HCK_HM[Motor_Num].Step_No + 1;
						ptr->Stack_HCK_HM[Motor_Num].Step_No = ptr->Stack_HCK_HM[Motor_Num].Step_No + 1;
					}
					else
					{
						g_Move_Check = 1; //[ 참조 : 26.05.14 Home InterLock & HomeCheck Func Change ]
						//pshm->P[1] = (double)g_Move_Check;
					}
					nanosleep(&nsleep,NULL);      //1msec
				}
				else
				{
					if(ptr->Stack_HCK_HM[Motor_Num].Step_No == Step_Last )
					{ // 홈동작 완료되었다면
						pshm->P[ P_Home_Status + Motor_Num ] = F_Status_COMPLETE;			// COMPLETE 표시
						pshm->P[P_Current_Homming_Status + Motor_Num] = F_Status_COMPLETE;
						ptr->Stack_HCK_HM[Motor_Num].Step_No = Step_0;	// 스텝 초기화. ( 대기위치로 이동 )
					}
				}
				pshm->P[P_Homing_Step_Monitor + Motor_Num] = ptr->Stack_PJT_HM[Motor_Num].Step_No;	// Script에서 모니터링할수 있도록 P변수에 현재 스텝값을 갱신.
				pshm->P[P_HCK_Step_MNTR + Motor_Num] = ptr->Stack_HCK_HM[Motor_Num].Step_No;		// Script에서 모니터링할수 있도록 P변수에 현재 스텝값을 갱신.
				nanosleep(&nsleep,NULL);      //1msec

				// 상태감시.
				if( pshm->P[P_PMAC_Homing_CHK + Motor_Num] )
				{ // 홈체크변수가 On상태일때
					if( pshm->Motor[Motor_Num].AmpEna != 1 ) // 서보 Off상태라면
						pshm->P[P_PMAC_Homing_CHK + Motor_Num] = 0;	// 홈체크변수 Off.
				}
			}
		}
		nanosleep(&nsleep,NULL);      //1msec
	}
}