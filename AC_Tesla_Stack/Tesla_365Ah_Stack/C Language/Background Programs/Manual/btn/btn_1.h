#include <gplib.h>   
//#define _EnumMode_		// for enum mode, replace this with #define _EnumMode_
//#define _PPScriptMode_
//#include "../../../Include/pp_proj.h"
#include "../../../Include/common.h"

#define		KEY_BIT0		0x01
#define		KEY_BIT1		0x02
#define		KEY_BIT2		0x04
#define		KEY_BIT3		0x08
#define		KEY_BIT4		0x10
#define		KEY_BIT5		0x20
#define		KEY_BIT6		0x40
#define		KEY_BIT7		0x80



#define		NANO_uSEC			1000
#define		NANO_1MSEC			1000000 

//#define	_CONSOLE_DEBUG_MODE_

// TTS 전용
typedef enum _btn_unit_name
{ // 버튼정보 입력. ( 유닛단위, ex.스풀 척 on/off버튼 -> 1개의 유닛 )

	eCa_1stPNP_EjectorVac = 1,				//	1
	eCa_1stPNP_EjectorClear,				//	2
	eCa_1stPNP_EjectorBlow,					//	3
	eCa_2ndPNP_EjectorVac,					//	4
	eCa_2ndPNP_EjectorClear,				//	5
	eCa_2ndPNP_EjectorBlow,					//	6
	eCa_AT_EjectorVac,						//	7
	eCa_AT_EjectorBlow,						//	8
	eCa_AT_EjectorClear,					//	9
	//eCa_2ndPNP_ZeroClamp,					//	10
	//eCa_2ndPNP_ZeroUnClamp,				//	11
	eCa_AT_ZeroClamp ,						//	12
	eCa_AT_ZeroUnClamp,						//	13
	eCa_NgPNP_EjectorVac,					//	14
	eCa_NgPNP_EjectorClear,					//	15
	eCa_NgPNP_EjectorBlow,					//	16

	eAn_1stPNP_EjectorVac,					//	17
	eAn_1stPNP_EjectorBlow,					//	18
	eAn_1stPNP_EjectorClear,				//	19
	eAn_2ndPNP_EjectorVac,					//	20
	eAn_2ndPNP_EjectorBlow,					//	21
	eAn_2ndPNP_EjectorClear,				//	22
	eAn_AT_EjectorVac,						//	23
	eAn_AT_EjectorBlow,						//	24
	eAn_AT_EjectorClear,					//	25

	//eAn_2ndPNP_ZeroClamp,					//	26
	//eAn_2ndPNP_ZeroUnClamp,				//	27
	eAn_AT_ZeroClamp,						//	28
	eAn_AT_ZeroUnClamp,						//	29
	eAn_NgPNP_EjectorVac,					//	30
	eAn_NgPNP_EjectorClear,					//	31
	eAn_NgPNP_EjectorBlow,					//	32
	eFR_Clamp,								//	33
	eFR_UnClamp,							//	34
	eFR_Driving_Clamp,						//	35
	eFR_Driving_UnClamp,					//	36
	eCa_Damper_Clamp,						//	37
	eCa_Damper_UnClamp,						//	38
	eAn_Damper_Clamp,						//	39
	eAn_Damper_UnClamp,						//	40
	eST_JobChange_Lock,						//	41
	eST_JobChange_UnLock,					//	42
	eST_Block_Up,							//	43
	eST_Block_Dn,							//	44
	eST_EjectorVac,							//	45
	eST_EjectorClear,						//	46
	eST_EjectorBlow,						//	47
	eSheet_Paper_EjectorVac,				//	48
	eSheet_Paper_EjectorClear,				//	49
	eSheet_Paper_EjectorBlow,				//	50
	eSepa_Cutter_Up,						//	51
	eSepa_Cutter_Dn,						//	52
	eCutter_Heater_On,						//	53
	eCutter_Heater_Off,						//	54
	eSheet_Paper_FWD,						//	55
	eSheet_Paper_BWD,						//	56
	eUpper_Unwinder_Lock,					//	57
	eUpper_Unwinder_UnLock,					//	58
	eLower_Unwinder_Lock,					//	59
	eLower_Unwinder_UnLock,					//	60


	eARC_Niproll_Clamp,						//	61
	eARC_Niproll_UnClamp,					//	62
	eUpper_ARC_Plate_Up,					//	63
	eUpper_ARC_Plate_Dn,					//	64
	eLower_ARC_Plate_Up,					//	65
	eLower_ARC_Plate_Dn,					//	66
	eUpper_ARC_Tilting,						//	67
	eUpper_ARC_UnTilting,					//	68
	eLower_ARC_Tilting,						//	69
	eLower_ARC_UnTilting,					//	70
	eUpper_ARC_Cutter_FWD,					//	71
	eUpper_ARC_Cutter_BWD,					//	72
	eLower_ARC_Cutter_FWD,					//	73
	eLower_ARC_Cutter_BWD,					//	74
	eUpper_ARC_Stopper,						//	75
	eUpper_ARC_UnStopper,					//	76
	eLower_ARC_Stopper,						//	77
	eLower_ARC_UnStopper,					//	78

	eUpeer_ARC_EjectorVac,					//	79
	eUpeer_ARC_EjectorClear,				//	80
	eUpeer_ARC_EjectorBlow,					//	81
	eLower_ARC_EjectorVac,					//	82
	eLower_ARC_EjectorClear,				//	83
	eLower_ARC_EjectorBlow,					//	84
	// 네임플레이트 버튼 추가
	eNP_ARC_Tilting,						//	85
	eNP_ARC_Unwinder_Lock_Unlock,			//	86
	eNP_ARC_Plate_Vaccum,					//	87
	eNP_ARC_Sepa_Cutter,					//	88
	eNP_ARC_Cut_Stopper,					//	89
	eNP_ARC_Plate_Up,						//	90
	eNP_ARC_Plate_Down,						//	91
	eNP_ARC_Unwinder_Rotation,				//	92
	eNP_ARC_Unwinder_ReRotation,			//	93

////	Ionizer_No1_2_On,					//	94
////	Ionizer_No1_2_Off,					//	95
////	Ionizer_No3_4_5_On,					//	96
////	Ionizer_No3_4_5_Off,				//	97
	eUnloader_Grip,							//	98
	eUnloader_UnGrip,						//	99
	eUpper_Unwinder_JogPlus,				//	100
	eUpper_Unwinder_JogMinus,				//	101
	eLower_Unwinder_JogPlus,				//	102
	eLower_Unwinder_JogMinus,				//	103
	eUnloader_Grip_Blow_On,					//	104
	eUnloader_Grip_Blow_Off,				//	105
	eSerovo_Dancer_On,						//	106
	eSerovo_Dancer_Off,						//	107

	BTN_NAME_LAST
	// 버튼 마지막 지점 -> 버튼 추가 해야 될 경우 윗줄에 추가 하면 됩니다./ 
}eBTN_UNIT_NAME;


typedef struct _BTNInterface;
typedef void ActFunc(struct _BTNInterface*);
typedef void StatusFunc(struct _BTNInterface*);


// 가장 기본적이고 버튼에 필요한 사항들

// Action 일 경우,

typedef struct _BTNInterface
{
	ActFunc*			pfnAct;
	StatusFunc*			pfnStatus;
	unsigned int 		iInterlock_Lamp;		// 인터락 사용 유무
	bool				bInterlock;
	bool				bPrev;
	char*				pPMACAddr;		// 1bit쓰기엔 너무 귀찮으니, 어쩔수없이 8bit 포인터로 가자.
	eBTN_STATUS			status;			// 버튼입력상태.
	char				Key;			// 본인 키.
}IBtn;

#define	Arr_Numb	 3
typedef struct _Radio
{
	IBtn IFBtn;
	unsigned int	On_Output[Arr_Numb];
	char			On_Number;
	unsigned int	Off_Output[Arr_Numb];
	char			Off_Number;
	unsigned int	Sensor[Arr_Numb];
	char			Sen_Number;
	unsigned int	Lamp;			// in_data 바인딩 되어있는 
}tRadioBTN;


typedef struct _Push
{
	IBtn IFBtn;
	unsigned int output;
	unsigned int Sensor[2];
	unsigned int Lamp;				// Write 할 Lamp

}tPushBTN;


typedef struct _Toggle
{
	IBtn IFBtn;
	unsigned int output;
	unsigned int Sensor[2];
	unsigned int Lamp;				// Write 할 Lamp
}tToggleBTN;

typedef struct _SelSwitch
{
	IBtn IFBtn;
	unsigned int SelectedMode;			// 스위치 모드
	unsigned int Sensor[3];

}tSelSwitchBTN;


typedef struct _Jog
{
	IBtn IFBtn;
	char* MoveCmd;
	char* StopCmd;
	unsigned int	Lamp;
	unsigned int	Lamp_1;
	//char JogSpeed;
	char MotorNum;
	char Direction;
}tJogBTN;


typedef struct _Timer
{
	IBtn			IFBtn;
	unsigned int	output[2];
	unsigned int	Lamp;				// Write 할 Lamp
	unsigned int	Sensor[2];
	unsigned int	Delay;
	struct timespec begin;

}tTimerBTN;

#define Upper 0
#define Lower 1
// ARC 네임플레이트 토글
typedef struct _NP_Toggle
{
	IBtn IFBtn;
	unsigned int	On_Output[Arr_Numb];
	char			On_Number;
	unsigned int	Off_Output[Arr_Numb];
	char			Off_Number;
	char			Bool_Vac;
}tNP_ToggleBTN;

typedef struct _NP_Plate_BTN
{
	IBtn IFBtn;
	unsigned int	On_Output[Arr_Numb];
	char			On_Number;
	unsigned int	Off_Output[Arr_Numb];
	char			Off_Number;
	char			Bool_Vac;
}tNP_Plate_BTN;


void BTN_init(IBtn** _BTN);
void Destructor(IBtn** _BTN);

void* BTN_Execute(void* arg);
tPushBTN* Push_init(void);
tToggleBTN* Toggle_init(void);
tTimerBTN* TimerBTN_init(void);
tRadioBTN* Radio_init(void);
tSelSwitchBTN* SelBTN_init(void);
tJogBTN* JogBTN_init(void);
tNP_ToggleBTN* NP_Toggle_Init(void);
tNP_Plate_BTN* NP_Plate_Each_Btn_Init(void);


#define Dir_Plus 1
#define Dir_Minus 2

void PushAct(tPushBTN* BTN);
void ToggleAct(tToggleBTN* BTN);
void TimerAct(tTimerBTN* BTN);
void SelSwitchAct(tSelSwitchBTN* _pBTN);
void RadiolAct(tRadioBTN* _pBTN);
void JogAct(tJogBTN* _pBTN);
void NP_ToggleAct(tNP_ToggleBTN* _pBTN);
void NP_Plate_Each_Btn( tNP_Plate_BTN* _pBTN);
void NP_JogAct(tJogBTN* _pBTN);



void PushStatus(tPushBTN* _pBTN);
void ToggleStatus(tToggleBTN* _pBTN);
void TimerStatus(tTimerBTN* _pBTN);
void SelSwitchStatus(tSelSwitchBTN* _pBTN);
void RadioStatus(tRadioBTN* _pBTN);
void JogStatus(tJogBTN* _pBTN);
