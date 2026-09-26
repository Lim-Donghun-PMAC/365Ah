
#include "../../../Include/common.h"
//#include "../../../Include/pp_proj.h"
#define _PPScriptMode_
#pragma once

#define NANO_uSEC		1000
//- header	-//
	// 1. 열거형 변수 선언 ( 모터 정보 )

//#define F_Real_Axis_Test			// 실축 환경
#define F_Virtual_Axis_Test			// 가상축 환경

typedef enum _Motor_Name
{
	M_None,  							// 0	
	M_CATHODE_1ST_T,					//양극 1차 T축			#1
	M_ANODE_1ST_T,						//음극 1차 T축			#2
	M_CATHODE_2ND_T,					//양극 2차 T축			#3
	M_ANODE_2ND_T,						//음극 2차 T축			#4
	M_CATHODE_Clamp_Y1,					//양극 클램프 Y1			#5
	M_ANODE_Clamp_Y1,					//음극 클램프 Y1			#6
	M_CATHODE_Clamp_Y2,					//양극 클램프 Y2			#7
	M_ANODE_Clamp_Y2,					//음극 클램프 Y2			#8
	M_Spare_1,							//spare					#9	[ 참조 : 클램프 Z1 모터 번호 변경 2025.10.16 ]
	M_Spare_2,							//spare					#10	[ 참조 : 클램프 Z1 모터 번호 변경 2025.10.16 ]
	M_Main_Z,							//Main z축				#11
	M_Final_Roll_X,						//파이널 롤러 X축			#12
	M_Final_Roll_Z,						//파이널 롤러 Z축			#13
	M_Sub_Feeding_Roll,					//서브 피딩 롤러			#14
	M_Driving_Roll,						//드라이빙 롤러			#15
	M_Serovo_Dancer,					//서보 댄서				#16
	M_CATHODE_1ST_Z,					//양극 1차 Z축			#17
	M_ANODE_1ST_Z,						//음극 1차 Z축			#18
	M_CATHODE_1ST_Picker_T,				//양극 1차 피커 T축		#19
	M_ANODE_1ST_Picker_T,				//음극 1차 피커 T축		#20
	M_CATHODE_2ND_Z,					//양극 2차 Z축			#21
	M_ANODE_2ND_Z,						//음극 2차 Z축			#22
	M_Upper_Unwinder,					//상부 언와인더			#23
	M_Lower_Unwinder,					//하부 언와인더			#24
	M_CATHODE_Clamp_Z2,					//클램프 양극 Z2			#25	[ 참조 : 2025.07.23 홈 프로그램 수정 ]
	M_Anode_Clamp_Z2,					//클램프 음극 Z2			#26	[ 참조 : 2025.07.23 홈 프로그램 수정 ]
	M_CATHODE_Clamp_Z,					//클램프 양극 Z1			#27 [ 참조 : 클램프 Z1 모터 번호 변경 2025.10.16 ]
	M_ANODE_Clamp_Z,					//클램프 음극 Z1			#28 [ 참조 : 클램프 Z1 모터 번호 변경 2025.10.16 ]
	M_Spare_3,							//Spare 모터				#29
	M_Spare_4,							//Spare 모터				#30
	M_Spare_5,							//Spare 모터				#31
	M_Spare_6,							//Spare 모터				#32
	M_EPC_Sensor,						//EPC 센서 구동모터		#33
	M_Stack_Vision_Camera,				//스텍비전 촬상 카메라 	#34
	M_Sheet_1ST_Paper_X,				//시트 페이퍼 X축			#35
	M_CATHODE_Align_X,					//양극 얼라인 X축			#36
	M_CATHODE_Align_Y,					//양극 얼라인 Y축			#37
	M_CATHODE_Align_T,					//양극 얼라인 T축			#38
	M_ANODE_Align_X,					//음극 얼라인 X축			#39
	M_ANODE_Align_Y,					//음극 얼라인 Y축			#40
	M_ANODE_Align_T,					//음극 얼라인 T축			#41
	M_CATHODE_Sample_NG_T,				//양극 NG PNP T축		#42
	M_ANODE_Sample_NG_T,				//음극 NG PNP T축		#43
	M_CATHODE_Sample_NG_Z,				//양극 NG PNP Z축		#44
	M_ANODE_Sample_NG_Z,				//음극 NG PNP Z축		#45
	M_Unloader_1ST_X,					//1차 언로더 X축			#46
	M_Unloader_1ST_Y,					//1차 언로더 Y축			#47
	M_Unloader_1ST_T,					//1차 언로더 T축			#48
		
	M_Stack_Motor_Last                  
}Motor_Name;

// 2. Home_Information 홈정보 구조체 선언
typedef struct _Home_Information
{
	int Home_Type_No;	// 홈타입.
	int Step_No;		// 실행할 스텝번호.
}Home_Information;

typedef struct _STACK_Information
{
	Home_Information Stack_PJT_HM[M_Stack_Motor_Last];
}
Stack_Information;

// 3. Home_Matrix 관련 열거형변수 선언. ( 홈타입, 스텝 )
typedef enum _Home_Type	// 홈타입.
{																		//[ 참조 : 플러스 방향 홈 시퀀스 추가 ]
	Home_Type_None, Home_Type_1, Ether_Cat_Home_Type, Home_Type_Picker_T,Home_Type_2,Home_Type_Last
}Home_Type;
// Type 1 : Normal
// Type 2 : +리미트없음. ( Clamp X )
// Type 3 : ECAT타입 서보 Normal

typedef enum _Home_Step // 홈스텝 ( 홈스텟머신 )
{
	Step_0, Step_1, Step_2, Step_3, Step_4, Step_5, Step_6, Step_7, Step_8, Step_9, Step_10,
	Step_11, Step_12, Step_13, Step_14, Step_15, Step_16, Step_17, Step_18, Step_19, Step_20,
	Step_21, Step_22, Step_23, Step_24,
	Step_Last
}Home_Step;


// 함수List.
// 1. 홈정보 초기화함수. - 모터별 홈타입 설정.
//int Home_Initialize_Type(VOLTA_Information* ptr);
int Home_Initialize_Type(Stack_Information* ptr);
// 2. 홈커멘드체크함수.
void* Home_Cmd_Check(void* ptr);

// 3. 홈실행함수. - 해당모터의 모터정보구조체값을 활용하여 State_Matrix에 해당하는 함수를 호출
void* Home_Execute(void* arg);

// 4. 홈 Func(실제동작) 함수 List
int Home_Func_None(int motor_num);		// 0.  동작없음.
int Home_Func_No1(int motor_num);		// 1.  조그 스피드 및 홈 스피드 설정
int Home_Func_No2(int motor_num);		// 2.  모터 활성화
int Home_Func_No3(int motor_num);		// 3.  홈체크변수 비활성화
int Home_Func_No4(int motor_num);		// 4.  홈complete비트 비활성화
int Home_Func_No5(int motor_num);		// 5.  모터 정지상태 확인
int Home_Func_No6(int motor_num);		// 6.  마이너스 리밋 탐색
int Home_Func_No7(int motor_num);		// 7.  마이너스리밋 감지 확인
int Home_Func_No8(int motor_num);		// 8.  홈센서 탐색
int Home_Func_No9(int motor_num);		// 9.  홈 Complete비트 확인
int Home_Func_No10(int motor_num);		// 10. 현재 위치를 0으로 셋업(HMZ)
int Home_Func_No11(int motor_num);		// 11. 대기위치 좌표설정
int Home_Func_No12(int motor_num);		// 12. 대기위치 이동
int Home_Func_No13(int motor_num);		// 13. 홈체크변수 활성화
int Home_Func_No14(int motor_num);		// 14. 동작없음.(삭제)
int Home_Func_No15(int motor_num);		// 15. 홈위치좌표설정(홈offset)
int Home_Func_No16(int motor_num);		// 16. 모터 Kill
int Home_Func_No17(int motor_num);		// 17. 원점이동(j=0)
int Home_Func_No18(int motor_num);		// 18. 플러스리밋 탐색
int Home_Func_No19(int motor_num);		// 19. 플러스리밋 감지 확인.
int Home_Func_No20(int motor_num);		// 20. 마이너스리밋 감지(축카드) 확인
int Home_Func_No21(int motor_num);		// 21. 홈 리밋 감지(축카드) 확인
int Home_Func_No22(int motor_num);		// 22. 엣지 홈체크 (PICKER T축 전용 - 반달 도그, 홈센서 )
int Home_Func_No23(int motor_num);		// 23. SPARE
int Home_Func_No24(int motor_num);		// 24. ECAT 홈 탐색비트 초기화.
int Home_Func_No25(int motor_num);		// 25. ECAT 홈 상태 초기화 확인.
int Home_Func_No26(int motor_num);		// 26. ECAT 홈 탐색비트 설정. 센서 감지 방식
int Home_Func_No27(int motor_num);		// 27. ECAT 홈 상태 대기상태 확인
int Home_Func_No28(int motor_num);		// 28. ECAT 홈 Complete 확인( YASKAWA X)
int Home_Func_No29(int motor_num);		// 29. ECAT 홈 Complete 확인( YASKAWA )




// State_Matrix - 홈타입과 스텝별 실행해야할 함수정보를 담고 있다. 
// 2차원 배열 형식 -> 각 원소는 동작함수를 포인팅.
typedef int home_matrix(int);
static home_matrix* ptrfunchome_matrix[Step_Last][Home_Type_Last] =
{ // 홈매트릭스 함수포인터.													[ 참조 : 플러스 방향 홈 시퀀스 추가 ]
    // Home_Type_None, Home_Type_1, Ether_Cat_Home_Type, Home_Type_Picker_T,Home_Type_2(plus limit home)
	{Home_Func_None, Home_Func_None, Home_Func_None, Home_Func_None,Home_Func_None},	// StepNO : 0
	{Home_Func_No2, Home_Func_No3,  Home_Func_No3,	 Home_Func_No3,Home_Func_No3},		// StepNO : 1
	{Home_Func_No5, Home_Func_No2,  Home_Func_No2,	 Home_Func_No2,Home_Func_No2},		// StepNO : 2
	{Home_Func_No10, Home_Func_No1,  Home_Func_No1,  Home_Func_No1,Home_Func_No1},		// StepNO : 3
	{Home_Func_No13, Home_Func_No4,  Home_Func_No4,	 Home_Func_No4,Home_Func_No4},		// StepNO : 4
	{Home_Func_None, Home_Func_No5,  Home_Func_No5,	 Home_Func_No5,Home_Func_No5},		// StepNO : 5
	{Home_Func_None, Home_Func_No6,  Home_Func_No6,	 Home_Func_No6,Home_Func_No18},		// StepNO : 6
	{Home_Func_None, Home_Func_No7,  Home_Func_No7,  Home_Func_No22,Home_Func_No19},	// StepNO : 7
	{Home_Func_None, Home_Func_No5,  Home_Func_No5,  Home_Func_No2,Home_Func_No2},		// StepNO : 8
	{Home_Func_None, Home_Func_No2,  Home_Func_No2,  Home_Func_No8,Home_Func_No5},		// StepNO : 9
	{Home_Func_None, Home_Func_No8,  Home_Func_No24, Home_Func_No9,Home_Func_No8},		// StepNO : 10
	{Home_Func_None, Home_Func_No9,  Home_Func_No25, Home_Func_No5,Home_Func_No9},		// StepNO : 11
	{Home_Func_None, Home_Func_No2,  Home_Func_No26, Home_Func_No10,Home_Func_No2},		// StepNO : 12
	{Home_Func_None, Home_Func_No5,  Home_Func_No27, Home_Func_No11,Home_Func_No5},		// StepNO : 13
	{Home_Func_None, Home_Func_No10, Home_Func_No8,  Home_Func_No12,Home_Func_No10},	// StepNO : 14
	{Home_Func_None, Home_Func_No11, Home_Func_No29, Home_Func_No5,Home_Func_No11},		// StepNO : 15
	{Home_Func_None, Home_Func_No12, Home_Func_No5,  Home_Func_No2,Home_Func_No12},		// StepNO : 16
	{Home_Func_None, Home_Func_No5,  Home_Func_No10, Home_Func_No13,Home_Func_No5},		// StepNO : 17
	{Home_Func_None, Home_Func_No2,  Home_Func_No11, Home_Func_None,Home_Func_No13},	// StepNO : 18
	{Home_Func_None, Home_Func_No13, Home_Func_No12, Home_Func_None,Home_Func_None},	// StepNO : 19
	{Home_Func_None, Home_Func_None, Home_Func_No5,  Home_Func_None,Home_Func_None},	// StepNO : 20
	{Home_Func_None, Home_Func_None, Home_Func_No2,	 Home_Func_None,Home_Func_None},	// StepNO : 21
	{Home_Func_None, Home_Func_None, Home_Func_No13, Home_Func_None,Home_Func_None},	// StepNO : 22
	{Home_Func_None, Home_Func_None, Home_Func_None, Home_Func_None,Home_Func_None},	// StepNO : 23
	{Home_Func_None, Home_Func_None, Home_Func_None, Home_Func_None,Home_Func_None},	// StepNO : 24
};

// 모터 상태 램프

//(1) 홈동작 미완료.
// -. P_Motor_Unit_Status(N_Motor) == $01; 
// #define 0x01
//(2) 홈동작 완료.
// -. P_Motor_Unit_Status(N_Motor) == $02; 
// #define 0x02
//(3) 유닛 미사용.
// -. P_Motor_Unit_Status(N_Motor) == $04; 
// #define 0x04
//(4) 홈동작 진행 중.
// -. P_Motor_Unit_Status(N_Motor) == $08; 
// #define 0x08
//(5) 1 사이클 동작 완료.
// -. P_Motor_Unit_Status(N_Motor) == $10; 
// #define 0x10
//(6) 자동 운전 중
// -. P_Motor_Unit_Status(N_Motor) == $20; 
// #define 0x20
//(7) 알람 발생.
// -. P_Motor_Unit_Status(N_Motor) == $40; 
// #define 0x40

typedef enum _part
{
	_sepa, _anode, _cathode, _stack, _unload, _arc, _total_part
}PART;

int arr_Part_Temp[20];

typedef struct _motor_homing_status
{
	int nCurrentHomingStatus;
	int nMotorUnitStatus;
}MOTOR_HOMING_STATUS;

MOTOR_HOMING_STATUS Motor_Lamp[MotorCount];

double dLampTimer[MotorCount];

unsigned int* Write_Homing_Status[2];						// 홈 진행 상태 램프 
unsigned int* UI_Unit_Status[3];							// 통합 유닛 상태

void Unit_Lamp_Initialize();

void* Unit_Lamp_Udpate(void* arg);

void Motor_Manual_Lamp(int nMotorNum);
void Motor_Auto_Lamp(int nMotorNum);
int All_Elements_equal(int nArr[], int nSize);
int Any_Elements_equal(int nArr[], int nSize);
int Set_Part_Status(int nPart);
int Write_Lamp_Data(int nPart, int nValue);

