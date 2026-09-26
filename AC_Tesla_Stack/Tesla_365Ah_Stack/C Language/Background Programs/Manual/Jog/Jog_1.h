#include "../../../Include/common.h"
#pragma once
#define _EnumMode_

#define NANO_uSEC		1000
#define  NANO_1MSEC		1000000  
#define SERVO_PAGE_LAST 51


#define Pos_Scale		10000
#define StatusStartAddr 20400		// 모터 상태 UserData 시작 주소
#define JogBtnStartAddr 10802		// 조그 버튼 UserData 시작 주소

// 전방선언
typedef struct _jog_btn			JOG_BTN;
typedef struct _jog_servo_page	JOG_SERVO_PAGE;
typedef struct _jog_ptr			JOG_LIST;

typedef void Jog_Func_Ptr(JOG_LIST*, int);

typedef enum _jog_btn_name
{
	JOG_BTN_Plus = 1,
	JOG_BTN_Minus,
	JOG_BTN_Servo_On_Off,
	JOG_BTN_Home,
	JOG_BTN_Jog_Stop,
	JOG_BTN_Alarm_Reset,
	JOG_BTN_Recipe_Pos_Run,
	JOG_BTN_Jog_Move_INC,
	JOG_BTN_Jog_Move_ABS,

	JOG_BTN_NAME_LAST,
}JOG_BTN_NAME;

typedef struct _jog_btn
{
	bool b_prev;
	Jog_Func_Ptr* action;
	eBTN_STATUS status;
}JOG_BTN;

typedef struct _jog_servo_page
{
	JOG_BTN btn[JOG_BTN_NAME_LAST];
	unsigned int* shared_ptr;
}JOG_SERVO_PAGE;

typedef struct _jog_ptr
{
	JOG_SERVO_PAGE servo_page_arr[SERVO_PAGE_LAST];
}JOG_LIST;

// Jog.c Function
void Jog_Init(JOG_LIST* ptr);
void *Jog_Status_Update(void* arg);
void Jog_Execute(JOG_LIST* ptr);
unsigned int Servo_Scene_Select();
void All_Motor_Stop();
void Servo_Move_Complete_Check();

// motor_get.c Function
void Set_Motor_Num(const int motor);
double Get_Jog_Speed();
double Get_Move_Distance();
void Get_Recipe_Distance(double arr[], int nPageNum);
double Get_Recipe_Move_Distance(JOG_LIST* ptr, int nPageNum);
void Set_Drive_Alarm(const int motor);
void Set_Move_Error_Alarm(const int motor);
void Set_Driver_Alarm_Reset(const int motor, int nValue);

// jog_act.c Function
void Servo_On_Off(JOG_LIST* ptr, int nBtn_name);
void Motor_Home(JOG_LIST* ptr, int nBtn_name);
void Jog_Stop(JOG_LIST* ptr, int nBtn_name);
void Recipe_Pos_Run(JOG_LIST* ptr, int nBtn_name);
void Jog_Move_INC(JOG_LIST* ptr, int nBtn_name);
void Jog_Move_ABS(JOG_LIST* ptr, int nBtn_name);
void Jog_Move_Plus(JOG_LIST* ptr, int nBtn_name);
void Jog_Move_Minus(JOG_LIST* ptr, int nBtn_name);
void Alarm_Reset(JOG_LIST* ptr, int nBtn_name);

void Clamp_Gantry(JOG_LIST* ptr);

static Jog_Func_Ptr* pfunc[JOG_BTN_NAME_LAST] = { 
	0,
	Jog_Move_Plus,
	Jog_Move_Minus,
	Servo_On_Off,
	Motor_Home,
	Jog_Stop,
	Alarm_Reset,
	Recipe_Pos_Run,
	Jog_Move_INC,
	Jog_Move_ABS,
};

// Motor_Status
typedef int Status_Func_Ptr(int);

typedef union _u_data_union
{
	volatile int* byte_4;
	BITFILED* bit31;
	short* byte_2[2];
}WRITE_MOTOR_STATUS;

// 모터 상태 구조체

// PLC userdata에 쓸 공용체

typedef struct _motor_status
{
	unsigned int* nStatus;
	double* dMotorCurrentPos;
}MOTOR_STATUS;

MOTOR_STATUS Motor_Status[MotorCount];

WRITE_MOTOR_STATUS Write_Udata[MotorCount][6];

void Motor_Status_Init();
void* Motor_Status_Update(void* arg);
void Update_Jog_Motor_Status();
void Motor_Load_Ratio();

typedef enum _status_func_name
{
	Get_Status = 1,

	Status_Func_Last,
}STATUS_FUNC_NAME;

int Get_Motor_Status(int nMotorNum, int nElement);

unsigned int* Selected_Motor_Num;


#define Cathode_1st_Z		17-1
#define Anode_1st_Z			18-1
#define Cathode_2nd_Z		21-1
#define Anode_2nd_Z			22-1