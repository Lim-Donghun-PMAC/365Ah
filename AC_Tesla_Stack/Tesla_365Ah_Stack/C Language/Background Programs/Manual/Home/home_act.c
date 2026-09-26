#include <gplib.h>   // Global Gp Shared memory pointer
#include "../../../Include/pp_proj.h"
#define _EnumMode_
#include "_home.h"

// 홈기능 함수 List.
// 0.
int Home_Func_None(int motor_num)
{
	int Func_Complete = 0;
	Func_Complete = 1;
	return Func_Complete;
}
// 1. 조그 스피드 및 홈 스피드 설정.
int Home_Func_No1(int motor_num)
{
	int Func_Complete = 0;
	// Clamp Y Home Vel - 추가, Minus Limit없기 때문에 Home 탐색방향을 반대로 줌
	if( motor_num == M_CATHODE_Clamp_Y1 || motor_num == M_ANODE_Clamp_Y1 || motor_num == M_CATHODE_Clamp_Y2 || motor_num == M_ANODE_Clamp_Y2 )		 											// 함수 동작완료 비트 선언 및 초기화.
	{
		// 26.03.08 클램프 y축 Homevel 수정
		pshm->Motor[motor_num].HomeVel = pshm->P[P_Recipe_Homing_Speed + motor_num] * -1;		// 홈잉 속도
		pshm->Motor[motor_num].JogSpeed  = pshm->Motor[motor_num].HomeVel * 2;				// -리밋으로 갈때의 속도
	}
	else
	{
		if( motor_num == 12 )
		{
			pshm->Motor[motor_num].HomeVel = pshm->P[P_Recipe_Homing_Speed + motor_num]; 		// 홈잉 속도
			pshm->Motor[motor_num].JogSpeed  = pshm->Motor[motor_num].HomeVel;				// -리밋으로 갈때의 속도
		}
		else
		{
			pshm->Motor[motor_num].HomeVel = pshm->P[P_Recipe_Homing_Speed + motor_num]; 		// 홈잉 속도
			pshm->Motor[motor_num].JogSpeed  = pshm->Motor[motor_num].HomeVel * 2;				// -리밋으로 갈때의 속도
		}
	}
	Func_Complete = 1;																		// 동작완료표시.
	return Func_Complete;																	// 리턴값 반환.
}
// 2. 모터 활성화.
int Home_Func_No2(int motor_num)
{
	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_uSEC*500;							// 0.5ms 
	int Func_Complete = 0;									// 함수 동작완료 비트 선언 및 초기화.
	Set_Motor_Num(motor_num);								//모터 주소지정.
	nanosleep(&nsleep,NULL);								// 0.5msec delay
	Command("jog/");
	Func_Complete = 1;										// 동작완료표시.
	pshm->P[P_Servo_ON_MNTR20]++;
	return Func_Complete;									// 리턴값 반환.
}
// 3. 홈체크변수 비활성화
int Home_Func_No3(int motor_num)
{
	#ifdef F_Virtual_Axis_Test
		if( motor_num != 1 && motor_num != 2 && motor_num != 3 && motor_num != 4 )				// 1번 2번이 아닐 때 ( 1차 pnp는 +리밋으로 홈잡게 설정 )
			pshm->Motor[motor_num].MinPos = -3000;			// 소프트리밋 테스트 변수 추가
	#endif
		int Func_Complete = 0;								// 함수 동작완료 비트 선언 및 초기화.
		pshm->P[P_PMAC_Homing_CHK + motor_num] = 0;			// PMAC Script P변수. ( User 모니터링 및 Script 코드활용을 위함 )
		
		Func_Complete = 1;									// 동작완료표시.
	return Func_Complete;									// 리턴값 반환.
}
// 4. 홈complete비트 비활성화
int Home_Func_No4(int motor_num)
{
	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_uSEC*2000;					// 2ms 
	int Func_Complete = 0;								// 함수 동작완료 비트 선언 및 초기화.

	if(pshm->Motor[motor_num].HomeComplete == 1 )
	{
		Set_Motor_Num(motor_num);						//모터 주소지정.
		nanosleep(&nsleep,NULL);						// 2msec delay
		Command("hm j/");								// home complete 취소
	}
	Func_Complete = 1;									// 동작완료표시.

	return Func_Complete;								// 리턴값 반환.
}
// 5. 모터 정지상태 확인
int Home_Func_No5(int motor_num)
{	
	int Func_Complete = 0;								// 함수 동작완료 비트 선언 및 초기화.

	if( pshm->Motor[motor_num].DesVelZero == 1 )		// 정지상태 확인 완료 시 함수종료.
	{ 
		Func_Complete = 1;								// 동작완료표시.
	}
	else
	{ // 미완료 시
		Func_Complete = 0;								// 동작 미완료표시.
	}
	return Func_Complete;								// 리턴값 반환.
}
// 6. 마이너스 리밋 방향 이동
int Home_Func_No6(int motor_num)
{
	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_uSEC*2000;					// 2ms 
	int Func_Complete = 0;								// 함수 동작완료 비트 선언 및 초기화.
	Set_Motor_Num(motor_num);							//모터 주소지정.
	nanosleep(&nsleep,NULL);							// 2msec delay
	Command("jog-");									// -이동.
	Func_Complete = 1;									// 동작완료표시.
	return Func_Complete;								// 리턴값 반환.
}
// 7. 마이너스리밋 감지 확인
int Home_Func_No7(int motor_num)
{
	int Func_Complete = 0;								// 함수 동작완료 비트 선언 및 초기화.
	#ifdef F_Real_Axis_Test		// → 실제 축일 때
		if( pshm->Motor[motor_num].MinusLimit == 1 )
		{ // 마이너스리밋 감지 확인 시 함수종료.
			Func_Complete = 1;							// 동작완료표시.
		}
		else
		{ // 미완료 시 재호출.
			Func_Complete = 0;							// 동작 미완료표시.
		}
	#else	// ifdef F_Virtual_Axis_Test
		if(pshm->Motor[motor_num].SoftLimit == 1 || pshm->Motor[motor_num].SoftMinusLimit == 1 || pshm->P[P_Motor_Current_Pos + motor_num] <= pshm->Motor[motor_num].MinPos )	// 소프트 -리밋 감지시
		{
			pshm->Motor[motor_num].MinPos = 0;
			Func_Complete = 1;							// 동작완료표시.
		}
		else
		{ // 미완료 시 재호출.
			Func_Complete = 0;							// 동작 미완료표시.
		}
	#endif
	return Func_Complete;								// 리턴값 반환.
}
// 8. 홈센서 탐색
int Home_Func_No8(int motor_num)
{
	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_uSEC*1000;				// 2ms 
	int Func_Complete = 0;							// 함수 동작완료 비트 선언 및 초기화.
	Set_Motor_Num(motor_num);						//모터 주소지정.
	nanosleep(&nsleep,NULL);						// 1msec delay
	Command("home");								// 홈명령
	Func_Complete = 1;
	nanosleep(&nsleep,NULL);						// 1msec delay
	return Func_Complete;							// 리턴값 반환.
}
// 9. 홈 Complete비트 확인.
int Home_Func_No9(int motor_num)
{
	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_uSEC*1000;				// 1ms 
	nanosleep(&nsleep,NULL);						// 1msec delay
	int Func_Complete = 0;							// 함수 동작완료 비트 선언 및 초기화.
	#ifdef F_Real_Axis_Test			// → 실축
		if( pshm->Motor[motor_num].HomeComplete == 1 )	// 홈 Complete비트 확인 시 함수종료.
		{ 
			Func_Complete = 1;							// 동작완료표시.
		}
	#else							// #ifdef F_Virtual_Axis_Test
		if( motor_num == M_CATHODE_1ST_T || motor_num == M_ANODE_1ST_T )	// 1차 PnP
		{
			if( pshm->P[P_Motor_Current_Pos + motor_num] <= 0 )		// 0 이하 일 시 
			{
				pshm->P[P_Test_HomeComplete + motor_num] = 1;		// 트루로 반환
				Func_Complete = 1;									// 트루로 반환
			}
		}
		else														// 1차 PnP 그외 모터들
		{
			if( pshm->P[P_Motor_Current_Pos + motor_num] >= 0 )		// 0 이상 일 시 
			{
				pshm->P[P_Test_HomeComplete + motor_num] = 1;		// 트루로 반환
				Func_Complete = 1;									// 트루로 반환
			}
		}
	#endif
		
	return Func_Complete;							// 리턴값 반환.
}
// 10. 현재 위치를 0으로 셋업(HMZ)
int Home_Func_No10(int motor_num)
{
	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_uSEC*1000;				// 1ms 
	int Func_Complete = 0;							// 함수 동작완료 비트 선언 및 초기화.
	char ctest[20];
	//Set_Motor_Num(motor_num);						//모터 주소지정.
	nanosleep(&nsleep,NULL);						// 2msec delay

	sprintf(ctest, "#%d hmz", motor_num);
	Command(ctest);
	//Command("#%d homez",motor_num);					// 현재위치 0으로 셋업.
	Func_Complete = 1;								// 동작완료표시.
	return Func_Complete;							// 리턴값 반환.
}
// 11. 대기위치 좌표설정.
int Home_Func_No11(int motor_num)
{
	int Func_Complete = 0;					// 함수 동작완료 비트 선언 및 초기화.
	#ifdef F_Real_Axis_Test
		if( pshm-> Motor[motor_num].HomeComplete == 1 )
			pshm->Motor[motor_num].ProgJogPos = pshm->P[P_Axis_Ready_Pos+motor_num] * pshm->P[P_Axis_Scale_Value+motor_num];
		else if( pshm->P[P_PMAC_Homing_CHK + motor_num] == 1 )
			pshm->Motor[motor_num].ProgJogPos = pshm->P[P_Axis_Ready_Pos+motor_num] * pshm->P[P_Axis_Scale_Value+motor_num];
		
		Func_Complete = 1;
	#else
		if( pshm->P[P_Test_HomeComplete + motor_num] == 1)
			pshm->Motor[motor_num].ProgJogPos = pshm->P[P_Test_Motor_Ready_Pos + motor_num]*1000;
		else if( pshm->P[P_PMAC_Homing_CHK + motor_num] == 1 )
			pshm->Motor[motor_num].ProgJogPos = pshm->P[P_Test_Motor_Ready_Pos + motor_num]*1000;

		pshm->Motor[motor_num].MinPos = 0;
		Func_Complete = 1;	
	#endif

	return Func_Complete;					// 리턴값 반환.
}
// 12. 대기위치 이동.
int Home_Func_No12(int motor_num)
{
	int Func_Complete = 0;

	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_uSEC*2000;					 // 2ms 
	
	Set_Motor_Num(motor_num);							//모터 주소지정.
	nanosleep(&nsleep,NULL);							// 2msec delay
	Command("jog=*");									// 지정위치 이동.
	
	Func_Complete = 1;									// 동작완료표시.

	return Func_Complete;								// 리턴값 반환.
}
// 13. 홈체크변수 활성화
int Home_Func_No13(int motor_num)
{
	int Func_Complete = 0;

	if( motor_num == M_Upper_Unwinder || motor_num == M_Lower_Unwinder )
	{
		pshm->P[P_PMAC_Homing_CHK + motor_num] = 1;			// PMAC Script P변수. ( User 모니터링 및 Script 코드활용을 위함 )
		Func_Complete = 1;									// 동작완료표시.
	}
	// ↓ 대기위치 완료 시 
	if( pshm->P[P_Motor_Current_Pos + motor_num] >= pshm->Motor[motor_num].ProgJogPos/1000 - 0.1 &&  pshm->P[P_Motor_Current_Pos + motor_num] <= pshm->Motor[motor_num].ProgJogPos/1000 + 0.1)		// [ 참조 : 2025.07.23 홈 프로그램 수정 ] --> 조그 위치 이동 종료가 안되어도 Homecheck 변수를 켜주어서 조건 추가
	{
		// [ 참조 : 26.04.28 Picker T축 탭방향에 따른 홈방식 변경 ]
		if ( motor_num == M_CATHODE_1ST_Picker_T )
		{
			if ( *Cathode_1st_Sheet_Data == 0 )
			{ 
				pshm->P[P_Ca_Picker_T_Turn_Cnt] = 0;
				// 참조 260604 1차 피커 홈 버그로 인한 극판 뒤집힘 수정
				pshm->P[P_Ca_Picker_T_Home_Type] = 0;
			}
		}
		// [ 참조 : 26.04.28 Picker T축 탭방향에 따른 홈방식 변경 ]
		if ( motor_num == M_ANODE_1ST_Picker_T )
		{
			if ( *Anode_1st_Sheet_Data == 0 )
			{
				pshm->P[P_An_Picker_T_Turn_Cnt] = 0;
				// 참조 260604 1차 피커 홈 버그로 인한 극판 뒤집힘 수정
				pshm->P[P_An_Picker_T_Home_Type] = 0;
			}
		}
		pshm->P[P_Test_HomeComplete + motor_num ] = 0;		// 함수 동작완료 비트 선언 및 초기화.
		pshm->P[P_PMAC_Homing_CHK + motor_num] = 1;			// PMAC Script P변수. ( User 모니터링 및 Script 코드활용을 위함 )
		pshm-> P[P_Home_Check_Arry + motor_num ] = 1;		// Home Seq 완료 변수
		pshm->P[P_Current_Homming_Status + motor_num] = F_Status_COMPLETE;
		Func_Complete = 1;									// 동작완료표시.
		//pshm->Motor[motor_num].MinPos = pshm->P[P_MinPos_1];
	}
	else
	{ // 미완료 시
		Func_Complete = 0;					// 동작 미완료표시.
	}
	return Func_Complete;	
}
// 14. 스텟머신 명령 대기위치로 이동.
int Home_Func_No14(int motor_num)
{
	int Func_Complete = 0;						// 함수 동작완료 비트 선언 및 초기화.
	// 없어질함수임.

	Func_Complete = 1;							// 동작완료표시.
	return Func_Complete;						// 리턴값 반환.
}
// 15. 홈위치좌표설정(홈offset) - 리미트 중 1개가 없는경우 pmac자체 home기능이 아닌 수동으로 홈을 구현하기에 추가됨.
int Home_Func_No15(int motor_num)
{
	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_uSEC*2000;   	// 2ms 
	int Func_Complete = 0;				// 함수 동작완료 비트 선언 및 초기화.
	pshm->Motor[motor_num].ProgJogPos = pshm->P[P_Axis_Home_Pos + motor_num] * pshm->P[P_Axis_Scale_Value + motor_num];	// 조그구동할 위치에 홈Offset값을 입력.
	Func_Complete = 1;							// 동작완료표시.
	return Func_Complete;						// 리턴값 반환.
}
// 16. 모터 Kill
int Home_Func_No16(int motor_num)
{
	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_uSEC*500;   // 0.5ms 
	int Func_Complete = 0;					// 함수 동작완료 비트 선언 및 초기화.
	Set_Motor_Num(motor_num);					//모터 주소지정.
	nanosleep(&nsleep,NULL);					// 2msec delay
	Command("kill");							// Kill.
	Func_Complete = 1;							// 동작완료표시.
	return Func_Complete;						// 리턴값 반환.
}
// 17. 원점이동(j=0)
int Home_Func_No17(int motor_num)
{
	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_uSEC*2000;   // 2ms 
	int Func_Complete = 0;						// 함수 동작완료 비트 선언 및 초기화.
	Set_Motor_Num(motor_num);					//모터 주소지정.
	nanosleep(&nsleep,NULL);					// 2msec delay
	Command("jog=0");							// 지정위치 이동.
	Func_Complete = 1;							// 동작완료표시.
	return Func_Complete;						// 리턴값 반환.
}
// 18. 플러스리밋 탐색
int Home_Func_No18(int motor_num)
{
	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_uSEC*2000;   // 2ms 
	int Func_Complete = 0;						// 함수 동작완료 비트 선언 및 초기화.
	Set_Motor_Num(motor_num);					//모터 주소지정.
	nanosleep(&nsleep,NULL);					// 2msec delay
	Command("jog+");							// 지정위치 이동.
	Func_Complete = 1;							// 동작완료표시.
	return Func_Complete;						// 리턴값 반환.
}
// 19. 플러스리밋 감지 확인.
int Home_Func_No19(int motor_num)
{
	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_uSEC*2000;					// 2ms 
	int Func_Complete = 0;								// 함수 동작완료 비트 선언 및 초기화.
	#ifdef F_Real_Axis_Test
		if( pshm->Motor[motor_num].PlusLimit == 1 )		// 플러스리밋 감지 확인 시 함수종료.
		{ 
			Func_Complete = 1;							// 동작완료표시.
		}
		else
		{ // 미완료 시 재호출.
			Func_Complete = 0;							// 동작 미완료표시.
		}
	#else	// ifdef F_Virtual_Axis_Test
		if( pshm->P[P_Motor_Current_Pos + motor_num] >= 90 ) // 플러스 리밋이란 가정
		{
			Func_Complete = 1;							// 동작완료표시.
		}
		else
		{ // 미완료 시 재호출.
			Func_Complete = 0;							// 동작 미완료표시.
		}
	#endif 

	return Func_Complete;								// 리턴값 반환.
}
// 20. 마이너스리밋 감지(축카드) 확인
int Home_Func_No20(int motor_num)
{
	int Func_Complete = 0;						// 함수 동작완료 비트 선언 및 초기화.
	#define N_Minus_OK	1						// Minus 리미트 감지 신호 디파인.

	if( GetPtrVar(M_Gate3_MinusLimit + motor_num) == N_Minus_OK )		// Minus Limit 확인
	{ // 마이너스리밋 감지 확인 시 함수종료.
		Func_Complete = 1;
	}
	else
	{ // 미완료 시 재호출.
		Func_Complete = 0;
	}
	return Func_Complete;						// 리턴값 반환.
}
// 21. 홈 리밋 감지(축카드) 확인
int Home_Func_No21(int motor_num)
{
	int Func_Complete = 0;						// 함수 동작완료 비트 선언 및 초기화.
	#define N_Home_OK	0						// Home 리미트 감지 신호 디파인.
	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_uSEC*2000;   // 2ms

	if( GetPtrVar(M_Gate3_HomeLimit + motor_num) == N_Home_OK )
	{ // 홈리밋 감지 확인 시 함수종료.
		Set_Motor_Num(motor_num);						//모터 주소지정.
		nanosleep(&nsleep,NULL);							// 2msec delay
		Command("jog:20000");
		nanosleep(&nsleep,NULL);							// 2msec delay
	}

	Func_Complete = 1;
	return Func_Complete;						// 리턴값 반환.
}
// 22. 엣지 홈체크
int Home_Func_No22(int motor_num)
{
	int Func_Complete = 0;
	
	if( pshm->Motor[motor_num].HomeComplete == 0 )
	{
		Func_Complete = 1;
	}
	else
	{
		Func_Complete = 0;
	}

	return Func_Complete;
}
// 23. SPARE (-45도 이동)
int Home_Func_No23(int motor_num)
{
	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_uSEC*2000;			// 2ms 
	int Func_Complete = 0;						// 함수 동작완료 비트 선언 및 초기화.

	Set_Motor_Num(motor_num);					//모터 주소지정.
	nanosleep(&nsleep,NULL);					// 2msec delay
	Command("jog:-45000");
	Func_Complete = 1;							// 동작완료표시.
	return Func_Complete;						// 리턴값 반환.
}
//=== ECAT 서보 전용 ==========================================================================//
//22. ECAT 홈 탐색비트 초기화.
int Home_Func_No24(int motor_num)
{
	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_uSEC*500;   // 0.5ms 	
	int Func_Complete = 0;
	SetPtrArrayVar(M_Touchprobefunction,motor_num,0);	// 해당모터 Touchprobefunction 값을 0으로 초기화.
	nanosleep(&nsleep,NULL);
	Func_Complete = 1;							// 동작완료표시.
	
	return Func_Complete;
}
// 23. ECAT 홈 상태 초기화 확인.
int Home_Func_No25(int motor_num)
{
	int Func_Complete = 0;
	if( GetPtrArrayVar(M_Touchprobestatus,motor_num) == 0 )
	{	// 해당모터 Touchprobestatus가 초기화되면
		Func_Complete = 1;							// 동작완료표시.
	}

	return Func_Complete;
}
// 24. ECAT 홈 탐색비트 설정. 센서 감지 방식
int Home_Func_No26(int motor_num)
{
	struct timespec nsleep = {0};
	nsleep.tv_nsec = NANO_uSEC*500;   // 0.5ms 	
	int Func_Complete = 0;

	SetPtrArrayVar(M_Touchprobefunction,motor_num,0x11);	// 해당모터 Touchprobefunction 값을 홈탐색대기모드로 설정.
	
	nanosleep(&nsleep,NULL);
	Func_Complete = 1;
	return Func_Complete;
}
// 25. ECAT 홈 상태 대기상태 확인
int Home_Func_No27(int motor_num)
{
	int Func_Complete = 0;
	if( GetPtrArrayVar(M_Touchprobestatus,motor_num) == 1 )
	{	// 해당모터 Touchprobestatus가 대기상태가 되면
		Func_Complete = 1;							// 동작완료표시.
	}

	return Func_Complete;
}
// 26. ECAT 홈 Complete 확인. (YASKAWA X)
int Home_Func_No28(int motor_num)
{
	int Func_Complete = 0;

	if( GetPtrArrayVar(M_Touchprobestatus,motor_num) == 0x3 )
	{	// 해당모터 HomeComplete가 완료되면
		Func_Complete = 1;							// 동작완료표시.
	}

	return Func_Complete;
}
// 27. ECAT 홈 Complete 확인( YASKAWA )
int Home_Func_No29(int motor_num)
{
	int Func_Complete = 0;
	if( motor_num == M_ANODE_Align_T || motor_num == M_CATHODE_Align_T )
	{
		if( GetPtrArrayVar(M_Touchprobestatus,motor_num) == 0x03 )		// 이노밴스 3
		{
			Func_Complete = 1;
		}
	}
	else
	{
		if( GetPtrArrayVar(M_Touchprobestatus,motor_num) == 0x83 )		// 야스카와 0x83
		{	// 해당모터 HomeComplete가 완료되면
			Func_Complete = 1;							// 동작완료표시.
		}
	}
	return Func_Complete;
}

// 30. PWM 절대위치 이동 명령 [ 참조 : 2026.04.24 Sonic DD Home Seq 으로 변경 ]
//int Home_Func_No30(int motor_num)
//{
//	struct timespec nsleep = {0};
//	nsleep.tv_nsec = NANO_uSEC*10000;   // 2ms 
//	int Func_Complete = 0;						// 함수 동작완료 비트 선언 및 초기화.
//	Set_Motor_Num(motor_num);					//모터 주소지정.
//
//	pshm->Motor[motor_num].HomePos = 0;			// 홈 위치 0으로 초기화.
//	pshm->Motor[motor_num].FatalFeLimit = 10;	// 모터 움직이기 위한 fatal 변경
//	nanosleep(&nsleep,NULL);					// 2msec delay
//	char CmdArr[20]={0,};
//	int iABSPos = 0;
//
//	switch( motor_num )
//	{
//		case 1:	iABSPos = pshm->P[P_DD_M_Home_ABS_Pos + motor_num];		break;
//		case 2:	iABSPos = pshm->P[P_DD_M_Home_ABS_Pos + motor_num];		break;
//		case 3:	iABSPos = pshm->P[P_DD_M_Home_ABS_Pos + motor_num];		break;
//		case 4:	iABSPos = pshm->P[P_DD_M_Home_ABS_Pos + motor_num];		break;
//	}
//		
//	sprintf(CmdArr,"jog=%d",iABSPos);
//	Command(CmdArr);							// 지정위치 이동.
//
//	Func_Complete = 1;							// 동작완료표시.
//
//
//	return Func_Complete;
//}

// 31. PWM Fatal 수정 및 HomePos 변경 [ 참조 : 2026.04.24 Sonic DD Home Seq 으로 변경 ]
//int Home_Func_No31(int motor_num)
//{
//	struct timespec nsleep = {0};
//	nsleep.tv_nsec = NANO_uSEC*2000;   // 2ms 
//	int Func_Complete = 0;						// 함수 동작완료 비트 선언 및 초기화.
//	nanosleep(&nsleep,NULL);					// 2msec delay
//	volatile GateArray3 *pGate3_IC;		// ASIC structure pointer		
//	pGate3_IC = GetGate3MemPtr(0);
//	if( pshm->Motor[motor_num].PhaseFound == 1 )
//	{
//		switch( motor_num )
//		{
//			case 1:	if(!(pGate3_IC->Chan[0].Status & 0x80)){ Func_Complete = 1; }	break;
//			case 2:	if(!(pGate3_IC->Chan[1].Status & 0x80)){ Func_Complete = 1; }	break;
//			case 3:	if(!(pGate3_IC->Chan[2].Status & 0x80)){ Func_Complete = 1; }	break;
//			case 4:	if(!(pGate3_IC->Chan[3].Status & 0x80)){ Func_Complete = 1; }	break;
//		}
//	}
//	return Func_Complete;
//}

// 32. PWM Phasing Found 하기. [ 참조 : 2026.04.24 Sonic DD Home Seq 으로 변경 ]
//int Home_Func_No32(int motor_num)
//{
//	//const double SPEC = 1000000000.0;
//	//int Func_Complete = 0;
//	//char CmdArr[20]={0,};
//	struct timespec nsleep = {0};
//	nsleep.tv_nsec = NANO_uSEC*10000;   // 2ms 
//	static int visited[4] = {0};
//
//	int Func_Complete = 0;
//
//	if( pshm->Motor[motor_num].PhaseFound == 1 )	// 페이징파운드 1일때
//	{
//		visited[motor_num] = 0;
//		Func_Complete = 1;
//	}
//	else if( visited[motor_num] == 0)				// 페이징 파운드 0일때
//	{
//		switch(motor_num)
//		{
//			case 1:	Command("#1$"); break;
//			case 2:	Command("#2$"); break;
//			case 3:	Command("#3$"); break;
//			case 4:	Command("#4$"); break;
//		}
//		visited[motor_num] = 1;
//	}
//	
//	nanosleep(&nsleep,NULL);						// 10msec delay
//	return Func_Complete;
//}

// 30. PWM PhaseFound Check // [참조 : 26.01.09 PWM Home 추가 ]
int Home_Func_No30(int motor_num)
{
	int Func_Complete = 0;
	// 1차 2차 양 음극 PNP 
	static int Func_Visited[5] ={0};					// 재진입 방지 변수 선언
					
	if( pshm->Motor[motor_num].PhaseFound == 1 )		// 페이징이 되어 있다면
	{
		Func_Visited[motor_num] = 0;					// 재진입 방지 변수 초기화
		Func_Complete = 1;								// 트루 return
	}
	else if( Func_Visited[motor_num] == 0 )				// 재진입 방지
	{
		Func_Visited[motor_num] = 1;					// 재진입 방지 변수 on
		pshm->P[P_PWM_Phasing_Start + motor_num] = 1;	// 페이징 시작 플래그 on
	}
													
	return Func_Complete;
}

// 31. DD MOTOR 이동 커맨드 // [참조 : 26.01.09 PWM Home 추가 ]
int Home_Func_No31(int motor_num)		
{
	int Func_Complete = 0;

	#ifdef F_Virtual_Axis_Test	// 가상축
			printf("%d 모터 대기위치 선언 시작 \n",motor_num);
			if( motor_num == M_CATHODE_1ST_T || motor_num == M_ANODE_1ST_T )		// 1차 PNP Home 위치
			{
				pshm->Motor[motor_num].ProgJogPos = pshm->P[P_Test_Motor_Ready_Pos + motor_num]*1000;
			}
			else if( motor_num == M_CATHODE_2ND_T || motor_num == M_ANODE_2ND_T )
			{
				pshm->Motor[motor_num].ProgJogPos = pshm->P[P_Test_Motor_Ready_Pos + motor_num]*1000;								// 대기위치 이동 커맨드
			}
			Func_Complete = 1;
	#else						// 실축	
		if( motor_num == M_CATHODE_1ST_T || motor_num == M_ANODE_1ST_T )		// 1차 PNP Home 위치
		{
			pshm->Motor[motor_num].ProgJogPos = pshm->P[P_Axis_Ready_Pos + motor_num]*1000;
		}
		else if( motor_num == M_CATHODE_2ND_T || motor_num == M_ANODE_2ND_T )
		{
			pshm->Motor[motor_num].ProgJogPos = pshm->P[P_Axis_Ready_Pos + motor_num]*1000;											// 대기위치 이동 커맨드
		}
		Func_Complete = 1;
	#endif

	return Func_Complete;
}

// 32. DD MOTOR HomePos 정립 커맨드 // [참조 : 26.01.09 PWM Home 추가 ]
int Home_Func_No32(int motor_num)		
{
	int Func_Complete = 0;
	
	//pshm->Motor[motor_num].HomePos = pshm->P[P_DD_M_Home_ABS_Pos + motor_num];
	//
	//if( M_Motor_Home_Offset + motor_num != 0 )
	//{
	//	pshm->Motor[motor_num].HomePos = pshm->Motor[motor_num].HomePos + M_Motor_Home_Offset + motor_num;
	//}
	Func_Complete = 1;
	
	return Func_Complete;
}
