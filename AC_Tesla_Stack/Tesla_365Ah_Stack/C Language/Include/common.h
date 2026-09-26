#pragma once
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <gplib.h>  
#include <unistd.h>
#include <pthread.h>
#include "pp_proj.h"
#include <time.h>
#define _PP_PROJ_HDR_
//#define _EnumMode_
//#define _PPScriptMode_
//================================================================================================//
// 프로그램 개정 이력 ( common.h )
//------------------------------------------------------------------------------------------------//
// 23.12.27 
// BTN_STATUS : 버튼상태명칭 수정.
//================================================================================================//
/*
#define Get_Direct_IO(_num)				((*((unsigned int*)piom + (_num / 4)))>>16 & 0xffff)			// 주소를 얻어오고, 그 주소에 대한 io값을 얻어온다.
#define Get_Direct_Shared_Mem(_num)		(*((unsigned int*)pushm + _num))
*/

#define LO_16bit		0
#define HI_16bit		1

#define MotorCount 48

// Motor[x].Status 비트 요소 정의
#define def_SpindleMotor1 	 0x10
#define def_SpindleMotor2 	 0x20
#define def_GantryHomed 	 0x40
#define def_TriggerSpeedSel  0x80
#define def_PhaseFound 		 0x100
#define def_BlockRequest 	 0x200
#define def_InPos 			 0x800
#define def_AmpEna 			 0x1000
#define def_ClosedLoop 		 0x2000
#define def_DesVelZero 		 0x4000
#define def_HomeComplete 	 0x8000
#define def_EncLoss 		 0x40000
#define def_AmpWarn 		 0x80000
#define def_TriggerNotFound  0x100000
#define def_I2tFault 		 0x200000
#define def_SoftPlusLimit 	 0x400000
#define def_SoftMinusLimit 	 0x800000
#define def_AmpFault 		 0x1000000
#define def_LimitStop 		 0x2000000
#define def_FeFatal 		 0x4000000
#define def_FeWarn 			 0x8000000
#define def_PlusLimit 		 0x10000000
#define def_MinusLimit 		 0x20000000
#define def_HomeInProgress 	 0x40000000
#define def_TriggerMove 	 0x80000000


#define def_HomeFlag		0x100

typedef enum _btn_status
{
	//	NONE, RISING_EDGE, HOLD, FALLING_EDGE, Init_VALUE_Edge, Init_VALUE_HOLD, BTN_STATUS_LAST
	NONE, FALLING_EDGE, HOLD, RISING_EDGE, BTN_STATUS_LAST
}eBTN_STATUS;
		
typedef struct _bitfield
{
	bool bit0 : 1;
	bool bit1 : 1;
	bool bit2 : 1;
	bool bit3 : 1;
	bool bit4 : 1;
	bool bit5 : 1;
	bool bit6 : 1;
	bool bit7 : 1;
	bool bit8 : 1;
	bool bit9 : 1;
	bool bit10 : 1;
	bool bit11 : 1;
	bool bit12 : 1;
	bool bit13 : 1;
	bool bit14 : 1;
	bool bit15 : 1;
	bool bit16 : 1;
	bool bit17 : 1;
	bool bit18 : 1;
	bool bit19 : 1;
	bool bit20 : 1;
	bool bit21 : 1;
	bool bit22 : 1;
	bool bit23 : 1;
	bool bit24 : 1;
	bool bit25 : 1;
	bool bit26 : 1;
	bool bit27 : 1;
	bool bit28 : 1;
	bool bit29 : 1;
	bool bit30 : 1;
	bool bit31 : 1;

}BITFILED;

typedef union _byte4_union
{
	volatile unsigned int byte_4;
	BITFILED bit31;
	short byte_2[2];
}BYTE4_UNION;


// 인터락 On 비트
#define N_Hex_POS1_Interlock_On					0x00000000001
#define N_Hex_POS2_Interlock_On					0x00000000002
#define N_Hex_POS3_Interlock_On					0x00000000004
#define N_Hex_POS4_Interlock_On					0x00000000008
#define N_Hex_POS5_Interlock_On					0x00000000010
#define N_Hex_POS6_Interlock_On					0x00000000020
#define N_Hex_POS7_Interlock_On					0x00000000040
#define N_Hex_POS8_Interlock_On					0x00000000080
#define N_Hex_POS9_Interlock_On					0x00000000100
#define N_Hex_POS10_Interlock_On				0x00000000200


// C함수 Status 추가
#define	F_Status_Length			18		// 상태 목록 개수
#define	F_Status_Nonseatus		0		// 프로그램이 실행중이 아님
#define	F_Status_IDLE			1      // 유휴 상태
#define	F_Status_STARTING		2      // 자동 생산 준비
#define	F_Status_EXECUTE		3      // 자동 생산 중
#define	F_Status_COMPLETING		4      // 자동 생산 종료중
#define	F_Status_COMPLETE		5      // 자동 생산 완료
#define	F_Status_RESETTING		6      // 상태 이상 리셋
#define	F_Status_HOLDING		7      // 내부적인 일시 정지 준비
#define	F_Status_HOLD			8      // 내부적인 일시정지 완료
#define	F_Status_UNHOLDING		9      // 내부적인 일시 정지 해제 준비
#define	F_Status_SUSPENDING		10      // 외부적인 일시 정지 준비
#define	F_Status_SUSPENDED		11      // 외부적인 일시 정지 완료
#define	F_Status_UNSUSPENDING	12      // 외부적인 일시 정지 해제 준비
#define	F_Status_STOPPING		13      // 정지 준비
#define	F_Status_STOPPED		14      // 정지 완료
#define	F_Status_ABORTING		15      // 긴급 정지 준비
#define	F_Status_ABORTED		16      // 긴급 정지 완료
#define	F_Status_CLEARING		17      // 긴급 정지 복구


#define Hex_IL_Plus		0x01
#define Hex_IL_Minus	0x02