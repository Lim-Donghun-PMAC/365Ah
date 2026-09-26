/*For more information see notes.txt in the Documentation folder */
#include "usrcode.h"
#define _PPScriptMode_		// for enum mode, replace this with #define _EnumMode_	

#include "../Include/pp_proj.h"

extern struct SHM        *pshm;  // Pointer to shared memory
extern volatile unsigned *piom;  // Pointer to I/O memory
extern void              *pushm; // Pointer to user memory

void user_phase(struct MotorData *Mptr)
{
}
EXPORT_SYMBOL(user_phase);

double user_pid_ctrl(struct MotorData *Mptr)
{
	double *p;
	p = pushm;
	return 0;
}
EXPORT_SYMBOL(user_pid_ctrl);

void CaptCompISR(void)
{
	unsigned *pUnsigned = pushm;
	*pUnsigned = *pUnsigned + 1;
}
EXPORT_SYMBOL(CaptCompISR);

double GetLocal(struct LocalData *Ldata, int m)
{
	return *(Ldata->L + Ldata->Lindex + m);
}

void SetLocal(struct LocalData *Ldata, int m, double value)
{
	*(Ldata->L + Ldata->Lindex + m) = value;
}

double *GetLocalPtr(struct LocalData *Ldata, int m)
{
	return (Ldata->L + Ldata->Lindex + m);
}

//void Spool_Jog_Move();
double Deg_mm_Conv ( double Motor, double Recipe_Pos );

#define Crank_Z_Conversion_Type	1

#define C_Home_Angle	0
#define C_Radius		1
#define C_Length		2
#define C_Zero_Pos		3

double CfromScript(double cfrom_type, double Unit, double arg3, double arg4, double arg5, double arg6, double arg7, struct LocalData *Ldata)
{
	int type = (int)cfrom_type;				// Script에서 넘어온 Double형 → int형 변환
	double rtn = 0;
	// 계산 프로그램은 CfromScript에서 진행 예정
	switch( type )	
	{
		//case Spool_Jog:
		//	Spool_Jog_Move();
		//break;

		case Crank_Z_Conversion_Type:
			rtn = Deg_mm_Conv(Unit,arg3);
		break;
	}

	return rtn;
}
EXPORT_SYMBOL(CfromScript);

//void Spool_Jog_Move(double Motor, double Cir, double Sepa_Le )
//{
//	int M_Num = (int)Motor;
//	int Cir_Num = (int)Cir;
//	double Need_Deg = 0;
//	double Jog_Cnt = 0;
//
//	Need_Deg = pshm->P[Cir_Num] / 360;
//	Jog_Cnt = pshm->P[Cir_Num] / 360;
//}

double Deg_mm_Conv ( double Motor, double Recipe_Pos )
{
	double Result = 0;						// 결과값 선언
	int M_num = (int)Motor;					// 더블형으로 받아온 모터 번호 형변환
	int Recipe_Addr = (int)Recipe_Pos;
	double Cal_Angle = 0;
	double Cal_Radian = 0;
	// 변수를 생성하여 사용할지 그냥 p변수 사용할지 고민좀 해봐야함
	double Pos_Fix_Arr[4];					// 고정값 선언	
	Pos_Fix_Arr[C_Home_Angle] = 25;			// Motor Pos 0 : 각도 25도
	Pos_Fix_Arr[C_Radius] = 30;				// 크랭크 반지름 30mm
	Pos_Fix_Arr[C_Length] = 70;				// 크랭크 길이	70mm
	Pos_Fix_Arr[C_Zero_Pos] = 96.03;		// 각도 25도일때 길이값 96.03mm
	
	Cal_Angle = pshm->P[Recipe_Addr] + 	Pos_Fix_Arr[C_Home_Angle];			// 현재 위치 + 홈 각도
	Cal_Radian = Cal_Angle * pi / 180; 
	Result = Pos_Fix_Arr[C_Zero_Pos] - (Pos_Fix_Arr[C_Radius] * cos(Cal_Radian) + sqrt( Pos_Fix_Arr[C_Length] * Pos_Fix_Arr[C_Length] - (Pos_Fix_Arr[C_Radius]*Pos_Fix_Arr[C_Radius]*sin(Cal_Radian)*sin(Cal_Radian))));
	return Result;
}
