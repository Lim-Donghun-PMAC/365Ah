
#include "btn.h"
//#include "../../../Include/pp_proj.h"

void BTN_init(IBtn** _BTN)
{

// **********	양극 1st PNP 이젝터 진공		**********			//  o
	tRadioBTN* Ca_1stPNP_EjectorVac = Radio_init();		// [Double Sol]
	Ca_1stPNP_EjectorVac->IFBtn.Key = KEY_BIT3;
	Ca_1stPNP_EjectorVac->IFBtn.pPMACAddr = (char*)pushm + 44608;
	Ca_1stPNP_EjectorVac->IFBtn.iInterlock_Lamp = M_Cathode_BTN_Interlock + 0;

	Ca_1stPNP_EjectorVac->Sensor[0] = M_X_Cathode_1st_PNP_Vac_Sensor;
	Ca_1stPNP_EjectorVac->On_Output[0] = M_Y_Cathode_1st_Vac_Sol_On;		// M_Y_VAC_1ST_TR_Cathode_VAC_On;
	Ca_1stPNP_EjectorVac->Off_Output[0] = M_Y_Cathode_1st_Vac_Sol_Off;		// M_Y_VAC_1ST_TR_Cathode_VAC_Off;

	Ca_1stPNP_EjectorVac->Lamp	= M_Cathode_BTN_Lamp + 0;

	Ca_1stPNP_EjectorVac->On_Number = Sel_Check(Ca_1stPNP_EjectorVac->On_Output);
	Ca_1stPNP_EjectorVac->Off_Number = Sel_Check(Ca_1stPNP_EjectorVac->Off_Output);
	Ca_1stPNP_EjectorVac->Sen_Number = Sel_Check(Ca_1stPNP_EjectorVac->Sensor);

// **********	양극 1st PNP 이젝터 클리어		**********			//
	tRadioBTN* Ca_1stPNP_EjectorClear = Radio_init();		// [Double Sol]
	Ca_1stPNP_EjectorClear->IFBtn.Key = KEY_BIT5;
	Ca_1stPNP_EjectorClear->IFBtn.pPMACAddr = (char*)pushm + 44608;
	Ca_1stPNP_EjectorClear->IFBtn.iInterlock_Lamp = M_Cathode_BTN_Interlock + 1;

	Ca_1stPNP_EjectorClear->Off_Output[0] =	M_Y_Cathode_1st_Vac_Sol_On;		//M_Y_VAC_1ST_TR_Cathode_VAC_On;
	Ca_1stPNP_EjectorClear->Off_Output[1] = M_Y_Cathode_1st_Vac_Sol_Off;	//M_Y_VAC_1ST_TR_Cathode_VAC_Off;

	Ca_1stPNP_EjectorClear->Lamp	= M_Cathode_BTN_Lamp + 1;
	Ca_1stPNP_EjectorClear->On_Number = Sel_Check(Ca_1stPNP_EjectorClear->On_Output);
	Ca_1stPNP_EjectorClear->Off_Number = Sel_Check(Ca_1stPNP_EjectorClear->Off_Output);
	Ca_1stPNP_EjectorClear->Sen_Number = Sel_Check(Ca_1stPNP_EjectorClear->Sensor);

// **********	양극 1st PNP 이젝터 블로우		**********			//
	tRadioBTN* Ca_1stPNP_EjectorBlow = Radio_init();		// [Double Sol]
	Ca_1stPNP_EjectorBlow->IFBtn.Key = KEY_BIT4;
	Ca_1stPNP_EjectorBlow->IFBtn.pPMACAddr = (char*)pushm + 44608;
	Ca_1stPNP_EjectorBlow->IFBtn.iInterlock_Lamp = M_Cathode_BTN_Interlock + 2;

	Ca_1stPNP_EjectorBlow->On_Output[0] =  M_Y_Cathode_1st_Vac_Sol_Off;		//M_Y_VAC_1ST_TR_Cathode_VAC_Off;
	Ca_1stPNP_EjectorBlow->Off_Output[0] = M_Y_Cathode_1st_Vac_Sol_On;			//M_Y_VAC_1ST_TR_Cathode_VAC_On;
	
	Ca_1stPNP_EjectorBlow->Lamp	= M_Cathode_BTN_Lamp + 2;
	Ca_1stPNP_EjectorBlow->On_Number = Sel_Check(Ca_1stPNP_EjectorBlow->On_Output);
	Ca_1stPNP_EjectorBlow->Off_Number = Sel_Check(Ca_1stPNP_EjectorBlow->Off_Output);
	Ca_1stPNP_EjectorBlow->Sen_Number = Sel_Check(Ca_1stPNP_EjectorBlow->Sensor);


// **********	양극 2nd PNP 이젝터 진공		**********			//  o
	tRadioBTN* Ca_2ndPNP_EjectorVac = Radio_init();		// [Double Sol]
	Ca_2ndPNP_EjectorVac->IFBtn.Key = KEY_BIT6;
	Ca_2ndPNP_EjectorVac->IFBtn.pPMACAddr = (char*)pushm + 44608;
	Ca_2ndPNP_EjectorVac->IFBtn.iInterlock_Lamp = M_Cathode_BTN_Interlock + 3;

	Ca_2ndPNP_EjectorVac->On_Output[0] = M_Y_Cathode_2nd_Vac_Sol_On;		// M_Y_VAC_2nd_TR_Cathode_VAC_On
	Ca_2ndPNP_EjectorVac->Off_Output[0] = M_Y_Cathode_2nd_Vac_Sol_Off;		//M_Y_VAC_2nd_TR_Cathode_VAC_Off
	Ca_2ndPNP_EjectorVac->Sensor[0]	= M_X_Cathode_2nd_PNP_Vac_Sensor;

	Ca_2ndPNP_EjectorVac->Lamp	= M_Cathode_BTN_Lamp + 3;
	Ca_2ndPNP_EjectorVac->On_Number = Sel_Check(Ca_2ndPNP_EjectorVac->On_Output);
	Ca_2ndPNP_EjectorVac->Off_Number = Sel_Check(Ca_2ndPNP_EjectorVac->Off_Output);
	Ca_2ndPNP_EjectorVac->Sen_Number = Sel_Check(Ca_2ndPNP_EjectorVac->Sensor);

// **********	양극 2nd PNP 이젝터 클리어		**********			//
	tRadioBTN* Ca_2ndPNP_EjectorClear = Radio_init();		// [Double Sol]
	Ca_2ndPNP_EjectorClear->IFBtn.Key = KEY_BIT0;
	Ca_2ndPNP_EjectorClear->IFBtn.pPMACAddr = (char*)pushm + 44609;
	Ca_2ndPNP_EjectorClear->IFBtn.iInterlock_Lamp = M_Cathode_BTN_Interlock + 4;

	Ca_2ndPNP_EjectorClear->Off_Output[0] = M_Y_Cathode_2nd_Vac_Sol_On;		// M_Y_VAC_2nd_TR_Cathode_VAC_On
	Ca_2ndPNP_EjectorClear->Off_Output[1] = M_Y_Cathode_2nd_Vac_Sol_Off;	//M_Y_VAC_2nd_TR_Cathode_VAC_Off

	Ca_2ndPNP_EjectorClear->Lamp	= M_Cathode_BTN_Lamp + 4;
	Ca_2ndPNP_EjectorClear->On_Number = Sel_Check(Ca_2ndPNP_EjectorClear->On_Output);
	Ca_2ndPNP_EjectorClear->Off_Number = Sel_Check(Ca_2ndPNP_EjectorClear->Off_Output);
	Ca_2ndPNP_EjectorClear->Sen_Number = Sel_Check(Ca_2ndPNP_EjectorClear->Sensor);

// **********	양극 2nd PNP 이젝터 블로우		**********			//
	tRadioBTN* Ca_2ndPNP_EjectorBlow = Radio_init();		// [Double Sol]
	Ca_2ndPNP_EjectorBlow->IFBtn.Key = KEY_BIT7;
	Ca_2ndPNP_EjectorBlow->IFBtn.pPMACAddr = (char*)pushm + 44608;
	Ca_2ndPNP_EjectorBlow->IFBtn.iInterlock_Lamp = M_Cathode_BTN_Interlock + 5;

	Ca_2ndPNP_EjectorBlow->On_Output[0] = M_Y_Cathode_2nd_Vac_Sol_Off;		//M_Y_VAC_2nd_TR_Cathode_VAC_Off
	Ca_2ndPNP_EjectorBlow->Off_Output[0] = M_Y_Cathode_2nd_Vac_Sol_On;		//M_Y_VAC_2nd_TR_Cathode_VAC_On

	Ca_2ndPNP_EjectorBlow->Lamp	= M_Cathode_BTN_Lamp + 5;
	Ca_2ndPNP_EjectorBlow->On_Number = Sel_Check(Ca_2ndPNP_EjectorBlow->On_Output);
	Ca_2ndPNP_EjectorBlow->Off_Number = Sel_Check(Ca_2ndPNP_EjectorBlow->Off_Output);
	Ca_2ndPNP_EjectorBlow->Sen_Number = Sel_Check(Ca_2ndPNP_EjectorBlow->Sensor);

// **********	양극 AT 이젝터 진공	**********			//  o
	tRadioBTN* Ca_AT_EjectorVac = Radio_init();		// [Double Sol]
	Ca_AT_EjectorVac->IFBtn.Key = KEY_BIT0;
	Ca_AT_EjectorVac->IFBtn.pPMACAddr = (char*)pushm + 44608;
	Ca_AT_EjectorVac->IFBtn.iInterlock_Lamp = M_Cathode_BTN_Interlock + 6;

	Ca_AT_EjectorVac->On_Output[0] = M_Y_Cathode_AT_Vac_Ejector_Vac_On;
	Ca_AT_EjectorVac->Off_Output[0] = M_Y_Cathode_AT_Vac_Ejector_Vac_Off;
	Ca_AT_EjectorVac->Sensor[0]	= M_X_Cathode_AT_Vac_Sensor;

	Ca_AT_EjectorVac->Lamp	= M_Cathode_BTN_Lamp + 6;
	Ca_AT_EjectorVac->On_Number = Sel_Check(Ca_AT_EjectorVac->On_Output);
	Ca_AT_EjectorVac->Off_Number = Sel_Check(Ca_AT_EjectorVac->Off_Output);
	Ca_AT_EjectorVac->Sen_Number = Sel_Check(Ca_AT_EjectorVac->Sensor);

// **********	양극 AT 이젝터 클리어		**********			//
	tRadioBTN* Ca_AT_EjectorClear = Radio_init();		// [Double Sol]
	Ca_AT_EjectorClear->IFBtn.Key = KEY_BIT2;
	Ca_AT_EjectorClear->IFBtn.pPMACAddr = (char*)pushm + 44608;
	Ca_AT_EjectorClear->IFBtn.iInterlock_Lamp = M_Cathode_BTN_Interlock + 7;

	Ca_AT_EjectorClear->Off_Output[0] = M_Y_Cathode_AT_Vac_Ejector_Vac_On;
	Ca_AT_EjectorClear->Off_Output[1] = M_Y_Cathode_AT_Vac_Ejector_Vac_Off;
	Ca_AT_EjectorClear->Lamp	= M_Cathode_BTN_Lamp + 7;
	Ca_AT_EjectorClear->On_Number = Sel_Check(Ca_AT_EjectorClear->On_Output);
	Ca_AT_EjectorClear->Off_Number = Sel_Check(Ca_AT_EjectorClear->Off_Output);
	Ca_AT_EjectorClear->Sen_Number = Sel_Check(Ca_AT_EjectorClear->Sensor);

// **********	양극 AT 이젝터 블로우		**********			//
	tRadioBTN* Ca_AT_EjectorBlow = Radio_init();		// [Double Sol]
	Ca_AT_EjectorBlow->IFBtn.Key = KEY_BIT1;
	Ca_AT_EjectorBlow->IFBtn.pPMACAddr = (char*)pushm + 44608;
	Ca_AT_EjectorBlow->IFBtn.iInterlock_Lamp = M_Cathode_BTN_Interlock + 8;

	Ca_AT_EjectorBlow->On_Output[0] = M_Y_Cathode_AT_Vac_Ejector_Vac_Off;
	Ca_AT_EjectorBlow->Off_Output[0] = M_Y_Cathode_AT_Vac_Ejector_Vac_On;
	
	Ca_AT_EjectorBlow->Lamp	= M_Cathode_BTN_Lamp + 8;
	Ca_AT_EjectorBlow->On_Number = Sel_Check(Ca_AT_EjectorBlow->On_Output);
	Ca_AT_EjectorBlow->Off_Number = Sel_Check(Ca_AT_EjectorBlow->Off_Output);
	Ca_AT_EjectorBlow->Sen_Number = Sel_Check(Ca_AT_EjectorBlow->Sensor);

// **********	양극 2nd PNP 제로 클램프 온		**********			//
//	tRadioBTN* Ca_2ndPNP_ZeroClamp			= Radio_init();		// [Single Sol]
//	Ca_2ndPNP_ZeroClamp->IFBtn.Key			= KEY_BIT0;
//	Ca_2ndPNP_ZeroClamp->IFBtn.pPMACAddr	= (char*)pushm + 44600;
//  Ca_2ndPNP_ZeroClamp->IFBtn.iInterlock_Lamp = M_Cathode_BTN_Interlock + 16;

//	Ca_2ndPNP_ZeroClamp->Sensor[0] = ;
//	Ca_2ndPNP_ZeroClamp->On_Output[0] = ;
//	Ca_2ndPNP_ZeroClamp->Off_Output[0] = ;


//	Ca_2ndPNP_ZeroClamp->Cmd				= SOL_OFF;
//	Ca_2ndPNP_ZeroClamp->Lamp				= M_Cathode_BTN_Lamp + 16;

// **********	양극 2nd PNP 제로 클램프 오프		**********			//
//	tRadioBTN* Ca_2ndPNP_ZeroUnClamp		= Radio_init();		// [Single Sol]
//	Ca_2ndPNP_ZeroUnClamp->IFBtn.Key		= KEY_BIT1;
//	Ca_2ndPNP_ZeroUnClamp->IFBtn.pPMACAddr	= (char*)pushm + 44600;
//	Ca_2ndPNP_ZeroUnClamp->IFBtn.iInterlock_Lamp = M_Cathode_BTN_Interlock + 17;

//	Ca_2ndPNP_ZeroUnClamp->group = 2;
//	Ca_2ndPNP_ZeroUnClamp->output			= ;
//	Ca_2ndPNP_ZeroUnClamp->Cmd				= SOL_FORWARD;
//	Ca_2ndPNP_ZeroUnClamp->Lamp				= M_Cathode_BTN_Lamp + 17;


// **********	양극 얼라인 제로 클램프		**********			// o
	tRadioBTN* Ca_AT_ZeroClamp				= Radio_init();		// [Single Sol]
	Ca_AT_ZeroClamp->IFBtn.Key				= KEY_BIT2;
	Ca_AT_ZeroClamp->IFBtn.pPMACAddr		= (char*)pushm + 44600;
	Ca_AT_ZeroClamp->IFBtn.iInterlock_Lamp = M_Cathode_BTN_Interlock + 18;

	Ca_AT_ZeroClamp->Off_Output[0]			= M_Y_Cathode_AT_Zero_Clamp_Sol;
	Ca_AT_ZeroClamp->Lamp					= M_Cathode_BTN_Lamp + 18;
	Ca_AT_ZeroClamp->On_Number				= Sel_Check(Ca_AT_ZeroClamp->On_Output);
	Ca_AT_ZeroClamp->Off_Number				= Sel_Check(Ca_AT_ZeroClamp->Off_Output);
	Ca_AT_ZeroClamp->Sen_Number				= Sel_Check(Ca_AT_ZeroClamp->Sensor);

// **********	양극 얼라인 제로 언클램프		**********			//
	tRadioBTN* Ca_AT_ZeroUnClamp			= Radio_init();		// [Single Sol]
	Ca_AT_ZeroUnClamp->IFBtn.Key			= KEY_BIT3;
	Ca_AT_ZeroUnClamp->IFBtn.pPMACAddr		= (char*)pushm + 44600;
	Ca_AT_ZeroUnClamp->IFBtn.iInterlock_Lamp = M_Cathode_BTN_Interlock + 19;

	Ca_AT_ZeroUnClamp->Lamp					= M_Cathode_BTN_Lamp + 19;
	Ca_AT_ZeroUnClamp->On_Output[0] = M_Y_Cathode_AT_Zero_Clamp_Sol;
	Ca_AT_ZeroUnClamp->On_Number = Sel_Check(Ca_AT_ZeroUnClamp->On_Output);
	Ca_AT_ZeroUnClamp->Off_Number = Sel_Check(Ca_AT_ZeroUnClamp->Off_Output);
	Ca_AT_ZeroUnClamp->Sen_Number = Sel_Check(Ca_AT_ZeroUnClamp->Sensor);


// **********	양극 NG PNP 이젝터 진공		**********			// o
	tRadioBTN* Ca_NgPNP_EjectorVac = Radio_init();		// [Double Sol]
	Ca_NgPNP_EjectorVac->IFBtn.Key = KEY_BIT2;
	Ca_NgPNP_EjectorVac->IFBtn.pPMACAddr = (char*)pushm + 44612;
	Ca_NgPNP_EjectorVac->IFBtn.iInterlock_Lamp = M_Cathode_BTN_Interlock + 20;

	Ca_NgPNP_EjectorVac->Sensor[0] = M_X_Cathode_NG_PNP_Vac_Sensor;
	Ca_NgPNP_EjectorVac->On_Output[0] = M_Y_Cathode_NG_PNP_Ejector_Vac_On;
	Ca_NgPNP_EjectorVac->Off_Output[0] = M_Y_Cathode_NG_PNP_Ejector_Vac_Off;
	Ca_NgPNP_EjectorVac->Lamp	= M_Cathode_BTN_Lamp + 20;

	Ca_NgPNP_EjectorVac->On_Number = Sel_Check(Ca_NgPNP_EjectorVac->On_Output);
	Ca_NgPNP_EjectorVac->Off_Number = Sel_Check(Ca_NgPNP_EjectorVac->Off_Output);
	Ca_NgPNP_EjectorVac->Sen_Number = Sel_Check(Ca_NgPNP_EjectorVac->Sensor);


// **********	양극 NG PNP 이젝터 클리어		**********			//
	tRadioBTN* Ca_NgPNP_EjectorClear = Radio_init();		// [Double Sol]
	Ca_NgPNP_EjectorClear->IFBtn.Key = KEY_BIT4;
	Ca_NgPNP_EjectorClear->IFBtn.pPMACAddr = (char*)pushm + 44612;
	Ca_NgPNP_EjectorClear->IFBtn.iInterlock_Lamp = M_Cathode_BTN_Interlock + 21;

	//Ca_NgPNP_EjectorClear->Sensor[0] = ;
	//Ca_NgPNP_EjectorClear->On_Output[0] = ;
	Ca_NgPNP_EjectorClear->Off_Output[0] = M_Y_Cathode_NG_PNP_Ejector_Vac_On;
	Ca_NgPNP_EjectorClear->Off_Output[1] = M_Y_Cathode_NG_PNP_Ejector_Vac_Off;

	Ca_NgPNP_EjectorClear->Lamp	= M_Cathode_BTN_Lamp + 21;

	Ca_NgPNP_EjectorClear->On_Number = Sel_Check(Ca_NgPNP_EjectorClear->On_Output);
	Ca_NgPNP_EjectorClear->Off_Number = Sel_Check(Ca_NgPNP_EjectorClear->Off_Output);
	Ca_NgPNP_EjectorClear->Sen_Number = Sel_Check(Ca_NgPNP_EjectorClear->Sensor);


// **********	양극 NG PNP 이젝터 블로우		**********			//
	tRadioBTN* Ca_NgPNP_EjectorBlow = Radio_init();		// [Double Sol]
	Ca_NgPNP_EjectorBlow->IFBtn.Key = KEY_BIT3;
	Ca_NgPNP_EjectorBlow->IFBtn.pPMACAddr = (char*)pushm + 44612;
	Ca_NgPNP_EjectorBlow->IFBtn.iInterlock_Lamp = M_Cathode_BTN_Interlock + 22;

	Ca_NgPNP_EjectorBlow->Sensor[0] = M_X_Cathode_NG_PNP_Vac_Sensor;
	Ca_NgPNP_EjectorBlow->On_Output[0] = M_Y_Cathode_NG_PNP_Ejector_Vac_Off;
	Ca_NgPNP_EjectorBlow->Off_Output[0] = M_Y_Cathode_NG_PNP_Ejector_Vac_On;
	Ca_NgPNP_EjectorBlow->Lamp	= M_Cathode_BTN_Lamp + 22;

	Ca_NgPNP_EjectorBlow->On_Number = Sel_Check(Ca_NgPNP_EjectorBlow->On_Output);
	Ca_NgPNP_EjectorBlow->Off_Number = Sel_Check(Ca_NgPNP_EjectorBlow->Off_Output);
	Ca_NgPNP_EjectorBlow->Sen_Number = Sel_Check(Ca_NgPNP_EjectorBlow->Sensor);



// **********	음극 1st PNP 이젝터 진공		**********			//  o
	tRadioBTN* An_1stPNP_EjectorVac = Radio_init();		// [Double Sol]
	An_1stPNP_EjectorVac->IFBtn.Key = KEY_BIT3;
	An_1stPNP_EjectorVac->IFBtn.pPMACAddr = (char*)pushm + 44610;
	An_1stPNP_EjectorVac->IFBtn.iInterlock_Lamp = M_Anode_BTN_Interlock + 0;

	An_1stPNP_EjectorVac->Sensor[0] = M_X_Anode_1st_PNP_Vac_Sensor;
	An_1stPNP_EjectorVac->On_Output[0] = M_Y_Anode_1st_Vac_Sol_On;		// M_Y_VAC_1ST_TR_Anode_VAC_On
	An_1stPNP_EjectorVac->Off_Output[0] = M_Y_Anode_1st_Vac_Sol_Off;	// M_Y_VAC_1ST_TR_Anode_VAC_Off

	An_1stPNP_EjectorVac->Lamp	= M_Anode_BTN_Lamp + 0;
	An_1stPNP_EjectorVac->On_Number = Sel_Check(An_1stPNP_EjectorVac->On_Output);
	An_1stPNP_EjectorVac->Off_Number = Sel_Check(An_1stPNP_EjectorVac->Off_Output);
	An_1stPNP_EjectorVac->Sen_Number = Sel_Check(An_1stPNP_EjectorVac->Sensor);

// **********	음극 1st PNP 이젝터 클리어		**********			//
	tRadioBTN* An_1stPNP_EjectorClear = Radio_init();		// [Double Sol]
	An_1stPNP_EjectorClear->IFBtn.Key = KEY_BIT5;
	An_1stPNP_EjectorClear->IFBtn.pPMACAddr = (char*)pushm + 44610;
	An_1stPNP_EjectorClear->IFBtn.iInterlock_Lamp = M_Anode_BTN_Interlock + 1;

	An_1stPNP_EjectorClear->Off_Output[0] = M_Y_Anode_1st_Vac_Sol_On;	// M_Y_VAC_1ST_TR_Anode_VAC_On
	An_1stPNP_EjectorClear->Off_Output[1] = M_Y_Anode_1st_Vac_Sol_Off;	// M_Y_VAC_1ST_TR_Anode_VAC_Off

	An_1stPNP_EjectorClear->Lamp	= M_Anode_BTN_Lamp + 1;
	An_1stPNP_EjectorClear->On_Number = Sel_Check(An_1stPNP_EjectorClear->On_Output);
	An_1stPNP_EjectorClear->Off_Number = Sel_Check(An_1stPNP_EjectorClear->Off_Output);
	An_1stPNP_EjectorClear->Sen_Number = Sel_Check(An_1stPNP_EjectorClear->Sensor);

// **********	음극 1st PNP 이젝터 블로우		**********			//
	tRadioBTN* An_1stPNP_EjectorBlow = Radio_init();		// [Double Sol]
	An_1stPNP_EjectorBlow->IFBtn.Key = KEY_BIT4;
	An_1stPNP_EjectorBlow->IFBtn.pPMACAddr = (char*)pushm + 44610;
	An_1stPNP_EjectorBlow->IFBtn.iInterlock_Lamp = M_Anode_BTN_Interlock + 2;

	An_1stPNP_EjectorBlow->On_Output[0] = M_Y_Anode_1st_Vac_Sol_Off;	// M_Y_VAC_1ST_TR_Anode_VAC_Off
	An_1stPNP_EjectorBlow->Off_Output[0] = M_Y_Anode_1st_Vac_Sol_On;	// M_Y_VAC_1ST_TR_Anode_VAC_On

	An_1stPNP_EjectorBlow->Lamp	= M_Anode_BTN_Lamp + 2;
	An_1stPNP_EjectorBlow->On_Number = Sel_Check(An_1stPNP_EjectorBlow->On_Output);
	An_1stPNP_EjectorBlow->Off_Number = Sel_Check(An_1stPNP_EjectorBlow->Off_Output);
	An_1stPNP_EjectorBlow->Sen_Number = Sel_Check(An_1stPNP_EjectorBlow->Sensor);

// **********	음극 2nd PNP 이젝터 진공		**********			//  o
	tRadioBTN* An_2ndPNP_EjectorVac = Radio_init();		// [Double Sol]
	An_2ndPNP_EjectorVac->IFBtn.Key = KEY_BIT6;
	An_2ndPNP_EjectorVac->IFBtn.pPMACAddr = (char*)pushm + 44610;
	An_2ndPNP_EjectorVac->IFBtn.iInterlock_Lamp = M_Anode_BTN_Interlock + 3;

	An_2ndPNP_EjectorVac->Sensor[0] = M_X_Anode_2nd_PNP_Vac_Sensor;
	An_2ndPNP_EjectorVac->On_Output[0] = M_Y_Anode_2nd_Vac_Sol_On;		// M_Y_VAC_2nd_TR_Anode_VAC_On
	An_2ndPNP_EjectorVac->Off_Output[0] = M_Y_Anode_2nd_Vac_Sol_Off;	// M_Y_VAC_2nd_TR_Anode_VAC_Off

	An_2ndPNP_EjectorVac->Lamp	= M_Anode_BTN_Lamp + 3;
	An_2ndPNP_EjectorVac->On_Number = Sel_Check(An_2ndPNP_EjectorVac->On_Output);
	An_2ndPNP_EjectorVac->Off_Number = Sel_Check(An_2ndPNP_EjectorVac->Off_Output);
	An_2ndPNP_EjectorVac->Sen_Number = Sel_Check(An_2ndPNP_EjectorVac->Sensor);

// **********	음극 2nd PNP 이젝터 클리어		**********			//
	tRadioBTN* An_2ndPNP_EjectorClear = Radio_init();		// [Double Sol]
	An_2ndPNP_EjectorClear->IFBtn.Key = KEY_BIT0;
	An_2ndPNP_EjectorClear->IFBtn.pPMACAddr = (char*)pushm + 44611;
	An_2ndPNP_EjectorClear->IFBtn.iInterlock_Lamp = M_Anode_BTN_Interlock + 4;

	An_2ndPNP_EjectorClear->Off_Output[0] = M_Y_Anode_2nd_Vac_Sol_On;	// M_Y_VAC_2nd_TR_Anode_VAC_On
	An_2ndPNP_EjectorClear->Off_Output[1] = M_Y_Anode_2nd_Vac_Sol_Off;	// M_Y_VAC_2nd_TR_Anode_VAC_Off

	An_2ndPNP_EjectorClear->Lamp	= M_Anode_BTN_Lamp + 4;
	An_2ndPNP_EjectorClear->On_Number = Sel_Check(An_2ndPNP_EjectorClear->On_Output);
	An_2ndPNP_EjectorClear->Off_Number = Sel_Check(An_2ndPNP_EjectorClear->Off_Output);
	An_2ndPNP_EjectorClear->Sen_Number = Sel_Check(An_2ndPNP_EjectorClear->Sensor);

// **********	음극 2nd PNP 이젝터 블로우		**********			// 
	tRadioBTN* An_2ndPNP_EjectorBlow = Radio_init();		// [Double Sol]
	An_2ndPNP_EjectorBlow->IFBtn.Key = KEY_BIT7;
	An_2ndPNP_EjectorBlow->IFBtn.pPMACAddr = (char*)pushm + 44610;
	An_2ndPNP_EjectorBlow->IFBtn.iInterlock_Lamp = M_Anode_BTN_Interlock + 5;

	An_2ndPNP_EjectorBlow->On_Output[0] = M_Y_Anode_2nd_Vac_Sol_Off;	// M_Y_VAC_2nd_TR_Anode_VAC_Off
	An_2ndPNP_EjectorBlow->Off_Output[0] = M_Y_Anode_2nd_Vac_Sol_On;	// M_Y_VAC_2nd_TR_Anode_VAC_On
	
	An_2ndPNP_EjectorBlow->Lamp	= M_Anode_BTN_Lamp + 5;
	An_2ndPNP_EjectorBlow->On_Number = Sel_Check(An_2ndPNP_EjectorBlow->On_Output);
	An_2ndPNP_EjectorBlow->Off_Number = Sel_Check(An_2ndPNP_EjectorBlow->Off_Output);
	An_2ndPNP_EjectorBlow->Sen_Number = Sel_Check(An_2ndPNP_EjectorBlow->Sensor);

// **********	음극 AT 이젝터 진공	**********			//  o
	tRadioBTN* An_AT_EjectorVac = Radio_init();		// [Double Sol]
	An_AT_EjectorVac->IFBtn.Key = KEY_BIT0;
	An_AT_EjectorVac->IFBtn.pPMACAddr = (char*)pushm + 44610;
	An_AT_EjectorVac->IFBtn.iInterlock_Lamp = M_Anode_BTN_Interlock + 6;

	An_AT_EjectorVac->Sensor[0] = M_X_Anode_AT_Vac_Sensor;
	An_AT_EjectorVac->On_Output[0] = M_Y_Anode_AT_Vac_Ejector_Vac_On;
	An_AT_EjectorVac->Off_Output[0] = M_Y_Anode_AT_Vac_Ejector_Vac_Off;

	An_AT_EjectorVac->Lamp	= M_Anode_BTN_Lamp + 6;
	An_AT_EjectorVac->On_Number = Sel_Check(An_AT_EjectorVac->On_Output);
	An_AT_EjectorVac->Off_Number = Sel_Check(An_AT_EjectorVac->Off_Output);
	An_AT_EjectorVac->Sen_Number = Sel_Check(An_AT_EjectorVac->Sensor);

// **********	음극 AT 이젝터 클리어		**********			//
	tRadioBTN* An_AT_EjectorClear = Radio_init();		// [Double Sol]
	An_AT_EjectorClear->IFBtn.Key = KEY_BIT2;
	An_AT_EjectorClear->IFBtn.pPMACAddr = (char*)pushm + 44610;
	An_AT_EjectorClear->IFBtn.iInterlock_Lamp = M_Anode_BTN_Interlock + 7;

	An_AT_EjectorClear->Off_Output[0] = M_Y_Anode_AT_Vac_Ejector_Vac_On;
	An_AT_EjectorClear->Off_Output[1] = M_Y_Anode_AT_Vac_Ejector_Vac_Off;

	An_AT_EjectorClear->Lamp	= M_Anode_BTN_Lamp + 7;
	An_AT_EjectorClear->On_Number = Sel_Check(An_AT_EjectorClear->On_Output);
	An_AT_EjectorClear->Off_Number = Sel_Check(An_AT_EjectorClear->Off_Output);
	An_AT_EjectorClear->Sen_Number = Sel_Check(An_AT_EjectorClear->Sensor);

// **********	음극 AT 이젝터 블로우		**********			//
	tRadioBTN* An_AT_EjectorBlow = Radio_init();		// [Double Sol]
	An_AT_EjectorBlow->IFBtn.Key = KEY_BIT1;
	An_AT_EjectorBlow->IFBtn.pPMACAddr = (char*)pushm + 44610;
	An_AT_EjectorBlow->IFBtn.iInterlock_Lamp = M_Anode_BTN_Interlock + 8;

	An_AT_EjectorBlow->On_Output[0] = M_Y_Anode_AT_Vac_Ejector_Vac_Off;
	An_AT_EjectorBlow->Off_Output[0] = M_Y_Anode_AT_Vac_Ejector_Vac_On;
	
	An_AT_EjectorBlow->Lamp	= M_Anode_BTN_Lamp + 8;
	An_AT_EjectorBlow->On_Number = Sel_Check(An_AT_EjectorBlow->On_Output);
	An_AT_EjectorBlow->Off_Number = Sel_Check(An_AT_EjectorBlow->Off_Output);
	An_AT_EjectorBlow->Sen_Number = Sel_Check(An_AT_EjectorBlow->Sensor);

// **********	음극 2nd PNP 제로 클램프 온		**********			//
//	tRadioBTN* An_2ndPNP_ZeroClamp			= Radio_init();		// [Single Sol]
//	An_2ndPNP_ZeroClamp->IFBtn.Key			= KEY_BIT4;
//	An_2ndPNP_ZeroClamp->IFBtn.pPMACAddr	= (char*)pushm + 44600;
//	An_2ndPNP_ZeroClamp->IFBtn.iInterlock_Lamp = M_Anode_BTN_Interlock + 16;

//	An_2ndPNP_ZeroClamp->group = 2;
//	An_2ndPNP_ZeroClamp->output				= ;
//	An_2ndPNP_ZeroClamp->Cmd				= SOL_OFF;
//	An_2ndPNP_ZeroClamp->Lamp				= M_Anode_BTN_Lamp + 16;

// **********	음극 2nd PNP 제로 클램프 오프		**********			//
//	tRadioBTN* An_2ndPNP_ZeroUnClamp			= Radio_init();		// [Single Sol]
//	An_2ndPNP_ZeroUnClamp->IFBtn.Key		= KEY_BIT5;
//	An_2ndPNP_ZeroUnClamp->IFBtn.pPMACAddr	= (char*)pushm + 44600;
//	An_2ndPNP_ZeroUnClamp->IFBtn.iInterlock_Lamp = M_Anode_BTN_Interlock + 17;

//	An_2ndPNP_ZeroUnClamp->group = 2;
//	An_2ndPNP_ZeroUnClamp->output			= ;
//	An_2ndPNP_ZeroUnClamp->Cmd				= SOL_FORWARD;
//	An_2ndPNP_ZeroUnClamp->Lamp				= M_Anode_BTN_Lamp + 17;


// **********	음극 얼라인 제로 클램프		**********			// o
	tRadioBTN* An_AT_ZeroClamp				= Radio_init();		// [Single Sol]
	An_AT_ZeroClamp->IFBtn.Key				= KEY_BIT6;
	An_AT_ZeroClamp->IFBtn.pPMACAddr		= (char*)pushm + 44600;
	An_AT_ZeroClamp->IFBtn.iInterlock_Lamp = M_Anode_BTN_Interlock + 18;

//	An_AT_ZeroClamp->Sensor[0] = ;
//	An_AT_ZeroClamp->On_Output[0] = ;
	An_AT_ZeroClamp->Off_Output[0] = M_Y_Anode_AT_Zero_Clamp_Sol;
	An_AT_ZeroClamp->Lamp					= M_Anode_BTN_Lamp + 18;
	An_AT_ZeroClamp->On_Number = Sel_Check(An_AT_ZeroClamp->On_Output);
	An_AT_ZeroClamp->Off_Number = Sel_Check(An_AT_ZeroClamp->Off_Output);
	An_AT_ZeroClamp->Sen_Number = Sel_Check(An_AT_ZeroClamp->Sensor);


// **********	음극 얼라인 제로 언클램프		**********			//
	tRadioBTN* An_AT_ZeroUnClamp				= Radio_init();		// [Single Sol]
	An_AT_ZeroUnClamp->IFBtn.Key			= KEY_BIT7;
	An_AT_ZeroUnClamp->IFBtn.pPMACAddr		= (char*)pushm + 44600;
	An_AT_ZeroUnClamp->IFBtn.iInterlock_Lamp = M_Anode_BTN_Interlock + 19;

	An_AT_ZeroUnClamp->Lamp					= M_Anode_BTN_Lamp + 19;
//	An_AT_ZeroUnClamp->Sensor[0] = ;
	An_AT_ZeroUnClamp->On_Output[0] = M_Y_Anode_AT_Zero_Clamp_Sol;
//	An_AT_ZeroUnClamp->Off_Output[0] = ;
	An_AT_ZeroUnClamp->On_Number = Sel_Check(An_AT_ZeroUnClamp->On_Output);
	An_AT_ZeroUnClamp->Off_Number = Sel_Check(An_AT_ZeroUnClamp->Off_Output);
	An_AT_ZeroUnClamp->Sen_Number = Sel_Check(An_AT_ZeroUnClamp->Sensor);


// **********	음극 NG PNP 이젝터 진공		**********			// o
	tRadioBTN* An_NgPNP_EjectorVac = Radio_init();		// [Double Sol]
	An_NgPNP_EjectorVac->IFBtn.Key = KEY_BIT5;
	An_NgPNP_EjectorVac->IFBtn.pPMACAddr = (char*)pushm + 44612;
	An_NgPNP_EjectorVac->IFBtn.iInterlock_Lamp = M_Anode_BTN_Interlock + 20;

	An_NgPNP_EjectorVac->Sensor[0] = M_X_Anode_NG_PNP_Vac_Sensor;
	An_NgPNP_EjectorVac->On_Output[0] = M_Y_Anode_NG_PNP_Ejector_Vac_On;
	An_NgPNP_EjectorVac->Off_Output[0] = M_Y_Anode_NG_PNP_Ejector_Vac_Off;
	An_NgPNP_EjectorVac->Lamp	= M_Anode_BTN_Lamp + 20;

	An_NgPNP_EjectorVac->On_Number = Sel_Check(An_NgPNP_EjectorVac->On_Output);
	An_NgPNP_EjectorVac->Off_Number = Sel_Check(An_NgPNP_EjectorVac->Off_Output);
	An_NgPNP_EjectorVac->Sen_Number = Sel_Check(An_NgPNP_EjectorVac->Sensor);


// **********	음극 NG PNP 이젝터 클리어		**********			//
	tRadioBTN* An_NgPNP_EjectorClear = Radio_init();		// [Double Sol]
	An_NgPNP_EjectorClear->IFBtn.Key = KEY_BIT7;
	An_NgPNP_EjectorClear->IFBtn.pPMACAddr = (char*)pushm + 44612;
	An_NgPNP_EjectorClear->IFBtn.iInterlock_Lamp = M_Anode_BTN_Interlock + 21;

	//An_NgPNP_EjectorClear->Sensor[0] = ;
	//An_NgPNP_EjectorClear->On_Output[0] = ;
	An_NgPNP_EjectorClear->Off_Output[0] = M_Y_Anode_NG_PNP_Ejector_Vac_On;
	An_NgPNP_EjectorClear->Off_Output[1] = M_Y_Anode_NG_PNP_Ejector_Vac_Off;

	An_NgPNP_EjectorClear->Lamp	= M_Anode_BTN_Lamp + 21;

	An_NgPNP_EjectorClear->On_Number = Sel_Check(An_NgPNP_EjectorClear->On_Output);
	An_NgPNP_EjectorClear->Off_Number = Sel_Check(An_NgPNP_EjectorClear->Off_Output);
	An_NgPNP_EjectorClear->Sen_Number = Sel_Check(An_NgPNP_EjectorClear->Sensor);


// **********	음극 NG PNP 이젝터 블로우		**********			//
	tRadioBTN* An_NgPNP_EjectorBlow = Radio_init();		// [Double Sol]
	An_NgPNP_EjectorBlow->IFBtn.Key = KEY_BIT6;
	An_NgPNP_EjectorBlow->IFBtn.pPMACAddr = (char*)pushm + 44612;
	An_NgPNP_EjectorBlow->IFBtn.iInterlock_Lamp = M_Anode_BTN_Interlock + 22;

	An_NgPNP_EjectorBlow->Sensor[0] = M_X_Anode_NG_PNP_Vac_Sensor;
	An_NgPNP_EjectorBlow->On_Output[0] = M_Y_Anode_NG_PNP_Ejector_Vac_Off;
	An_NgPNP_EjectorBlow->Off_Output[0] = M_Y_Anode_NG_PNP_Ejector_Vac_On;
	An_NgPNP_EjectorBlow->Lamp	= M_Anode_BTN_Lamp + 22;

	An_NgPNP_EjectorBlow->On_Number = Sel_Check(An_NgPNP_EjectorBlow->On_Output);
	An_NgPNP_EjectorBlow->Off_Number = Sel_Check(An_NgPNP_EjectorBlow->Off_Output);
	An_NgPNP_EjectorBlow->Sen_Number = Sel_Check(An_NgPNP_EjectorBlow->Sensor);

// **********	Final Roller 클램프		**********			//	o
	tRadioBTN* FR_Clamp = Radio_init();		// [Double Sol]
	FR_Clamp->IFBtn.Key = KEY_BIT4;
	FR_Clamp->IFBtn.pPMACAddr = (char*)pushm + 44601;
	FR_Clamp->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 0;
	FR_Clamp->Sensor[0] = M_X_FR_Sepa_Clamp_Front_Sensor;
	FR_Clamp->Sensor[1] = M_X_FR_Sepa_Clamp_Rear_Sensor;
	FR_Clamp->On_Output[0] = M_Y_FR_Sepa_Clamp;
	FR_Clamp->Off_Output[0] = M_Y_FR_Sepa_UnClamp;
	FR_Clamp->Lamp	= M_Stack_BTN_Lamp + 0;

	FR_Clamp->On_Number = Sel_Check(FR_Clamp->On_Output);
	FR_Clamp->Off_Number = Sel_Check(FR_Clamp->Off_Output);
	FR_Clamp->Sen_Number = Sel_Check(FR_Clamp->Sensor);

// **********	Final Roller 언클램프		**********			//
	tRadioBTN* FR_UnClamp = Radio_init();		// [Double Sol]
	FR_UnClamp->IFBtn.Key = KEY_BIT5;
	FR_UnClamp->IFBtn.pPMACAddr = (char*)pushm + 44601;
	FR_UnClamp->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 1;
	FR_UnClamp->Sensor[0] = M_X_FR_Sepa_UnClamp_Front_Sensor;
	FR_UnClamp->Sensor[1] = M_X_FR_Sepa_UnClamp_Rear_Sensor;

	FR_UnClamp->On_Output[0] = M_Y_FR_Sepa_UnClamp;
	FR_UnClamp->Off_Output[0] = M_Y_FR_Sepa_Clamp;

	FR_UnClamp->Lamp	= M_Stack_BTN_Lamp + 1;
	FR_UnClamp->On_Number = Sel_Check(FR_UnClamp->On_Output);
	FR_UnClamp->Off_Number = Sel_Check(FR_UnClamp->Off_Output);
	FR_UnClamp->Sen_Number = Sel_Check(FR_UnClamp->Sensor);

// **********	Final Roller 드라이빙 클램프		**********			//	o
	tRadioBTN* FR_Driving_Clamp = Radio_init();		// [Double Sol]
	FR_Driving_Clamp->IFBtn.Key = KEY_BIT6;
	FR_Driving_Clamp->IFBtn.pPMACAddr = (char*)pushm + 44601;
	FR_Driving_Clamp->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 2;
	//[참고 : 260829 파이널롤 백업롤 버튼 램프 안들어오는 현상 수정 ]
	FR_Driving_Clamp->Sensor[0] = M_X_FR_Clamping_Sub_Roller_Clamp_1; 	//M_X_Sepa_Driving_Roll_Clamp_Sensor;
	FR_Driving_Clamp->Sensor[1] = M_X_FR_Clamping_Sub_Roller_Clamp_2; 	//M_X_Sepa_Driving_Roll_Clamp_Sensor;

	FR_Driving_Clamp->On_Output[0] =  M_Y_FR_Clamping_Sub_Roller_Clamp;	//M_Y_FR_Clamping_Sub_Roller_Clamp;
	FR_Driving_Clamp->Off_Output[0] = M_Y_FR_Clamping_Sub_Roller_Unclamp;	//M_Y_FR_Sepa_Clamping_Roll_BWD_Sol;
	
	FR_Driving_Clamp->Lamp	= M_Stack_BTN_Lamp + 2;
	FR_Driving_Clamp->On_Number = Sel_Check(FR_Driving_Clamp->On_Output);
	FR_Driving_Clamp->Off_Number = Sel_Check(FR_Driving_Clamp->Off_Output);
	FR_Driving_Clamp->Sen_Number = Sel_Check(FR_Driving_Clamp->Sensor);

// **********	Final Roller 드라이빙 언클램프		**********			//	
	tRadioBTN* FR_Driving_UnClamp = Radio_init();		// [Double Sol]
	FR_Driving_UnClamp->IFBtn.Key = KEY_BIT7;
	FR_Driving_UnClamp->IFBtn.pPMACAddr = (char*)pushm + 44601;
	FR_Driving_UnClamp->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 3;
	//[참고 : 260829 파이널롤 백업롤 버튼 램프 안들어오는 현상 수정 ]
	FR_Driving_UnClamp->Sensor[0] = M_X_FR_Clamping_Sub_Roller_UnClamp_1;	//M_X_Sepa_Driving_Roll_UnClamp_Sensor;
	FR_Driving_UnClamp->Sensor[1] = M_X_FR_Clamping_Sub_Roller_UnClamp_2;	//M_X_Sepa_Driving_Roll_UnClamp_Sensor;

	FR_Driving_UnClamp->On_Output[0] =  M_Y_FR_Clamping_Sub_Roller_Unclamp;	//M_Y_FR_Clamping_Sub_Roller_Unclamp;
	FR_Driving_UnClamp->Off_Output[0] = M_Y_FR_Clamping_Sub_Roller_Clamp;	//M_Y_FR_Sepa_Clamping_Roll_FWD_Sol;

	FR_Driving_UnClamp->Lamp	= M_Stack_BTN_Lamp + 3;
	FR_Driving_UnClamp->On_Number = Sel_Check(FR_Driving_UnClamp->On_Output);
	FR_Driving_UnClamp->Off_Number = Sel_Check(FR_Driving_UnClamp->Off_Output);
	FR_Driving_UnClamp->Sen_Number = Sel_Check(FR_Driving_UnClamp->Sensor);


// **********	양극 클램프 댐퍼 온		**********			//	o
	tRadioBTN* Ca_Damper_Clamp = Radio_init();		// [Double Sol]
	Ca_Damper_Clamp->IFBtn.Key = KEY_BIT0;
	Ca_Damper_Clamp->IFBtn.pPMACAddr = (char*)pushm + 44602;
	Ca_Damper_Clamp->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 4;

	Ca_Damper_Clamp->Off_Output[0] = M_Y_ST_Cathode_Clamp_Damper_Sol;

	Ca_Damper_Clamp->Lamp	= M_Stack_BTN_Lamp + 4;
	Ca_Damper_Clamp->On_Number = Sel_Check(Ca_Damper_Clamp->On_Output);
	Ca_Damper_Clamp->Off_Number = Sel_Check(Ca_Damper_Clamp->Off_Output);
	Ca_Damper_Clamp->Sen_Number = Sel_Check(Ca_Damper_Clamp->Sensor);


// **********	양극 클램프 댐퍼 오프		**********			//
	tRadioBTN* Ca_Damper_UnClamp = Radio_init();		// [Double Sol]
	Ca_Damper_UnClamp->IFBtn.Key = KEY_BIT1;
	Ca_Damper_UnClamp->IFBtn.pPMACAddr = (char*)pushm + 44602;
	Ca_Damper_UnClamp->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 5;
	
	Ca_Damper_UnClamp->On_Output[0] = M_Y_ST_Cathode_Clamp_Damper_Sol;

	Ca_Damper_UnClamp->Lamp	= M_Stack_BTN_Lamp + 5;
	Ca_Damper_UnClamp->On_Number = Sel_Check(Ca_Damper_UnClamp->On_Output);
	Ca_Damper_UnClamp->Off_Number = Sel_Check(Ca_Damper_UnClamp->Off_Output);
	Ca_Damper_UnClamp->Sen_Number = Sel_Check(Ca_Damper_UnClamp->Sensor);



// **********	음극 클램프 댐퍼 온		**********			//	o
	tRadioBTN* An_Damper_Clamp = Radio_init();		// [Double Sol]
	An_Damper_Clamp->IFBtn.Key = KEY_BIT2;
	An_Damper_Clamp->IFBtn.pPMACAddr = (char*)pushm + 44602;
	An_Damper_Clamp->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 6;
	An_Damper_Clamp->Off_Output[0] = M_Y_ST_Anode_Clamp_Damper_Sol;

	An_Damper_Clamp->Lamp	= M_Stack_BTN_Lamp + 6;
	An_Damper_Clamp->On_Number = Sel_Check(An_Damper_Clamp->On_Output);
	An_Damper_Clamp->Off_Number = Sel_Check(An_Damper_Clamp->Off_Output);
	An_Damper_Clamp->Sen_Number = Sel_Check(An_Damper_Clamp->Sensor);


// **********	음극 클램프 댐퍼 오프		**********			//
	tRadioBTN* An_Damper_UnClamp = Radio_init();		// [Double Sol]
	An_Damper_UnClamp->IFBtn.Key = KEY_BIT3;
	An_Damper_UnClamp->IFBtn.pPMACAddr = (char*)pushm + 44602;
	An_Damper_UnClamp->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 7;

	An_Damper_UnClamp->On_Output[0] = M_Y_ST_Anode_Clamp_Damper_Sol;
	An_Damper_UnClamp->Lamp	= M_Stack_BTN_Lamp + 7;
	An_Damper_UnClamp->On_Number = Sel_Check(An_Damper_UnClamp->On_Output);
	An_Damper_UnClamp->Off_Number = Sel_Check(An_Damper_UnClamp->Off_Output);
	An_Damper_UnClamp->Sen_Number = Sel_Check(An_Damper_UnClamp->Sensor);

// **********	스텍 잡체인지 테이블 락		**********			//	o
	tRadioBTN* ST_JobChange_Lock = Radio_init();		// [Double Sol]
	ST_JobChange_Lock->IFBtn.Key = KEY_BIT4;
	ST_JobChange_Lock->IFBtn.pPMACAddr = (char*)pushm + 44602;
	ST_JobChange_Lock->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 8;

	ST_JobChange_Lock->Off_Output[0] = M_Y_ST_Zero_Clamp_Sol;

	ST_JobChange_Lock->Lamp	= M_Stack_BTN_Lamp + 8;
	ST_JobChange_Lock->On_Number = Sel_Check(ST_JobChange_Lock->On_Output);
	ST_JobChange_Lock->Off_Number = Sel_Check(ST_JobChange_Lock->Off_Output);
	ST_JobChange_Lock->Sen_Number = Sel_Check(ST_JobChange_Lock->Sensor);

// **********	스텍 잡체인지 테이블 언락		**********			//
	tRadioBTN* ST_JobChange_UnLock = Radio_init();		// [Double Sol]
	ST_JobChange_UnLock->IFBtn.Key = KEY_BIT5;
	ST_JobChange_UnLock->IFBtn.pPMACAddr = (char*)pushm + 44602;
	ST_JobChange_UnLock->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 9;

	ST_JobChange_UnLock->On_Output[0] = M_Y_ST_Zero_Clamp_Sol;
	ST_JobChange_UnLock->Lamp	= M_Stack_BTN_Lamp + 9;
	ST_JobChange_UnLock->On_Number = Sel_Check(ST_JobChange_UnLock->On_Output);
	ST_JobChange_UnLock->Off_Number = Sel_Check(ST_JobChange_UnLock->Off_Output);
	ST_JobChange_UnLock->Sen_Number = Sel_Check(ST_JobChange_UnLock->Sensor);


// **********	스텍 테이블 상승		**********			//	o
	tRadioBTN* ST_Block_Up = Radio_init();		// [Double Sol]
	ST_Block_Up->IFBtn.Key = KEY_BIT6;
	ST_Block_Up->IFBtn.pPMACAddr = (char*)pushm + 44602;
	ST_Block_Up->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 10;

	ST_Block_Up->Sensor[0] = M_X_ST_Center_CYL_Up_Sensor_1; // M_X_ST_Center_CYL_Up_Sensor;
	//ST_Block_Up->Sensor[1] = M_X_ST_Center_CYL_Dn_Sensor_1;	 
	ST_Block_Up->Sensor[1] = M_X_ST_Center_CYL_Up_Sensor_2;
	//ST_Block_Up->Sensor[3] = M_X_ST_Center_CYL_Dn_Sensor_2;

	ST_Block_Up->On_Output[0] = M_Y_ST_Center_Cyl_Up_Sol;
	ST_Block_Up->Off_Output[0] = M_Y_ST_Center_Cyl_Dn_Sol;

	ST_Block_Up->Lamp	= M_Stack_BTN_Lamp + 10;
	ST_Block_Up->On_Number = Sel_Check(ST_Block_Up->On_Output);
	ST_Block_Up->Off_Number = Sel_Check(ST_Block_Up->Off_Output);
	ST_Block_Up->Sen_Number = Sel_Check(ST_Block_Up->Sensor);

// **********	스텍 테이블 하강		**********			//
	tRadioBTN* ST_Block_Dn = Radio_init();		// [Double Sol]
	ST_Block_Dn->IFBtn.Key = KEY_BIT7;
	ST_Block_Dn->IFBtn.pPMACAddr = (char*)pushm + 44602;
	ST_Block_Dn->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 11;

	//ST_Block_Dn->Sensor[0] = M_X_ST_Center_CYL_Up_Sensor_1; //M_X_ST_Center_CYL_Up_Sensor;
	ST_Block_Dn->Sensor[0] = M_X_ST_Center_CYL_Dn_Sensor_1;
	//ST_Block_Dn->Sensor[2] = M_X_ST_Center_CYL_Up_Sensor_2;
	ST_Block_Dn->Sensor[1] = M_X_ST_Center_CYL_Dn_Sensor_2;

	ST_Block_Dn->On_Output[0] = M_Y_ST_Center_Cyl_Dn_Sol;
	ST_Block_Dn->Off_Output[0] = M_Y_ST_Center_Cyl_Up_Sol;

	ST_Block_Dn->Lamp	= M_Stack_BTN_Lamp + 11;
	ST_Block_Dn->On_Number = Sel_Check(ST_Block_Dn->On_Output);
	ST_Block_Dn->Off_Number = Sel_Check(ST_Block_Dn->Off_Output);
	ST_Block_Dn->Sen_Number = Sel_Check(ST_Block_Dn->Sensor);


// **********	스텍 테이블 이젝터 진공		**********			//	o
	tRadioBTN* ST_EjectorVac = Radio_init();		// [Double Sol]
	ST_EjectorVac->IFBtn.Key = KEY_BIT0;
	ST_EjectorVac->IFBtn.pPMACAddr = (char*)pushm + 44613;
	ST_EjectorVac->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 12;
	
	ST_EjectorVac->Sensor[0] = M_X_ST_Vac_Detect_Sensor;	// M_X_ST_Center_Vac_Sensor;
		
	ST_EjectorVac->On_Output[0] = M_Y_ST_Center_Sol;
	ST_EjectorVac->On_Output[1] = M_Y_ST_Center_Ejector_VAC_On;
	ST_EjectorVac->Off_Output[0] = M_Y_ST_Center_Ejector_VAC_Off;
	
	ST_EjectorVac->Lamp	= M_Stack_BTN_Lamp + 12;
	ST_EjectorVac->On_Number = Sel_Check(ST_EjectorVac->On_Output);
	ST_EjectorVac->Off_Number = Sel_Check(ST_EjectorVac->Off_Output);
	ST_EjectorVac->Sen_Number = Sel_Check(ST_EjectorVac->Sensor);


// **********	스텍 테이블 이젝터 클리어		**********			//	
	tRadioBTN* ST_EjectorClear = Radio_init();		// [Double Sol]
	ST_EjectorClear->IFBtn.Key = KEY_BIT2;
	ST_EjectorClear->IFBtn.pPMACAddr = (char*)pushm + 44613;
	ST_EjectorClear->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 13;

	ST_EjectorClear->Off_Output[0] = M_Y_ST_Center_Sol;
	ST_EjectorClear->Off_Output[1] = M_Y_ST_Center_Ejector_VAC_On;
	ST_EjectorClear->Off_Output[2] = M_Y_ST_Center_Ejector_VAC_Off;

	ST_EjectorClear->Lamp	= M_Stack_BTN_Lamp + 13;
	ST_EjectorClear->On_Number = Sel_Check(ST_EjectorClear->On_Output);
	ST_EjectorClear->Off_Number = Sel_Check(ST_EjectorClear->Off_Output);
	ST_EjectorClear->Sen_Number = Sel_Check(ST_EjectorClear->Sensor);

// **********	스텍 테이블 이젝터 블로우		**********			//
	tRadioBTN* ST_EjectorBlow = Radio_init();		// [Double Sol]
	ST_EjectorBlow->IFBtn.Key = KEY_BIT1;
	ST_EjectorBlow->IFBtn.pPMACAddr = (char*)pushm + 44613;
	ST_EjectorBlow->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 14;
	
	ST_EjectorBlow->Sensor[0] = M_X_ST_Vac_Detect_Sensor;	//M_X_ST_Center_Vac_Sensor;
	ST_EjectorBlow->On_Output[0] = M_Y_ST_Center_Sol;
	ST_EjectorBlow->On_Output[1] = M_Y_ST_Center_Ejector_VAC_Off;
	ST_EjectorBlow->Off_Output[0] = M_Y_ST_Center_Ejector_VAC_On;
	ST_EjectorBlow->Lamp	= M_Stack_BTN_Lamp + 14;
	ST_EjectorBlow->On_Number = Sel_Check(ST_EjectorBlow->On_Output);
	ST_EjectorBlow->Off_Number = Sel_Check(ST_EjectorBlow->Off_Output);
	ST_EjectorBlow->Sen_Number = Sel_Check(ST_EjectorBlow->Sensor);


// **********	1st Sheet Paper 이젝터 진공		**********			//	o

	tRadioBTN* Sheet_Paper_EjectorVac = Radio_init();		// [Double Sol]
	Sheet_Paper_EjectorVac->IFBtn.Key = KEY_BIT1;
	Sheet_Paper_EjectorVac->IFBtn.pPMACAddr = (char*)pushm + 44611;
	Sheet_Paper_EjectorVac->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 20;

	Sheet_Paper_EjectorVac->Sensor[0] = M_X_First_Sheet_Paper_Plate_Vac_Sensor;
	Sheet_Paper_EjectorVac->On_Output[0] = M_Y_First_Sheet_Paper_Plate_Ejector_Vac_On;
	Sheet_Paper_EjectorVac->Off_Output[0] = M_Y_First_Sheet_Paper_Plate_Ejector_Vac_Off;

	Sheet_Paper_EjectorVac->Lamp	= M_Stack_BTN_Lamp + 20;
	Sheet_Paper_EjectorVac->On_Number = Sel_Check(Sheet_Paper_EjectorVac->On_Output);
	Sheet_Paper_EjectorVac->Off_Number = Sel_Check(Sheet_Paper_EjectorVac->Off_Output);
	Sheet_Paper_EjectorVac->Sen_Number = Sel_Check(Sheet_Paper_EjectorVac->Sensor);


// **********	1st Sheet Paper 이젝터 클리어		**********			//		
	tRadioBTN* Sheet_Paper_EjectorClear = Radio_init();		// [Double Sol]
	Sheet_Paper_EjectorClear->IFBtn.Key = KEY_BIT3;
	Sheet_Paper_EjectorClear->IFBtn.pPMACAddr = (char*)pushm + 44611;
	Sheet_Paper_EjectorClear->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 21;

	Sheet_Paper_EjectorClear->Off_Output[0] = M_Y_First_Sheet_Paper_Plate_Ejector_Vac_On;
	Sheet_Paper_EjectorClear->Off_Output[1] = M_Y_First_Sheet_Paper_Plate_Ejector_Vac_Off;

	Sheet_Paper_EjectorClear->Lamp	=  M_Stack_BTN_Lamp + 21;
	Sheet_Paper_EjectorClear->On_Number = Sel_Check(Sheet_Paper_EjectorClear->On_Output);
	Sheet_Paper_EjectorClear->Off_Number = Sel_Check(Sheet_Paper_EjectorClear->Off_Output);
	Sheet_Paper_EjectorClear->Sen_Number = Sel_Check(Sheet_Paper_EjectorClear->Sensor);

// **********	1st Sheet Paper 이젝터 블로우		**********			//
	tRadioBTN* Sheet_Paper_EjectorBlow = Radio_init();		// [Double Sol]
	Sheet_Paper_EjectorBlow->IFBtn.Key = KEY_BIT2;
	Sheet_Paper_EjectorBlow->IFBtn.pPMACAddr = (char*)pushm + 44611;
	Sheet_Paper_EjectorBlow->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 22;

	Sheet_Paper_EjectorBlow->On_Output[0] = M_Y_First_Sheet_Paper_Plate_Ejector_Vac_Off;
	Sheet_Paper_EjectorBlow->Off_Output[0] = M_Y_First_Sheet_Paper_Plate_Ejector_Vac_On;
	Sheet_Paper_EjectorBlow->Lamp	= M_Stack_BTN_Lamp + 22;
	Sheet_Paper_EjectorBlow->On_Number = Sel_Check(Sheet_Paper_EjectorBlow->On_Output);
	Sheet_Paper_EjectorBlow->Off_Number = Sel_Check(Sheet_Paper_EjectorBlow->Off_Output);
	Sheet_Paper_EjectorBlow->Sen_Number = Sel_Check(Sheet_Paper_EjectorBlow->Sensor);


// **********	세파 커터 상승		**********			//			o
	tRadioBTN* Sepa_Cutter_Up = Radio_init();		// [Double Sol]
	Sepa_Cutter_Up->IFBtn.Key = KEY_BIT0;
	Sepa_Cutter_Up->IFBtn.pPMACAddr = (char*)pushm + 44603;
	Sepa_Cutter_Up->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 16;

	Sepa_Cutter_Up->Sensor[0] = M_X_FR_Sepa_Cutter_Up_Sensor;
	Sepa_Cutter_Up->On_Output[0] = M_Y_FR_Sepa_Cutter_Up_Sol;
	Sepa_Cutter_Up->Off_Output[0] = M_Y_FR_Sepa_Cutter_Dn_Sol;

	Sepa_Cutter_Up->Lamp	= M_Stack_BTN_Lamp + 16;
	Sepa_Cutter_Up->On_Number = Sel_Check(Sepa_Cutter_Up->On_Output);
	Sepa_Cutter_Up->Off_Number = Sel_Check(Sepa_Cutter_Up->Off_Output);
	Sepa_Cutter_Up->Sen_Number = Sel_Check(Sepa_Cutter_Up->Sensor);

// **********	세파 커터 하강		**********			//
	tRadioBTN* Sepa_Cutter_Dn = Radio_init();		// [Double Sol]
	Sepa_Cutter_Dn->IFBtn.Key = KEY_BIT1;
	Sepa_Cutter_Dn->IFBtn.pPMACAddr = (char*)pushm + 44603;
	Sepa_Cutter_Dn->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 17;

	Sepa_Cutter_Dn->Sensor[0] = M_X_FR_Sepa_Cutter_Dn_Sensor;
	Sepa_Cutter_Dn->On_Output[0] = M_Y_FR_Sepa_Cutter_Dn_Sol;
	Sepa_Cutter_Dn->Off_Output[0] = M_Y_FR_Sepa_Cutter_Up_Sol;

	Sepa_Cutter_Dn->Lamp	= M_Stack_BTN_Lamp + 17;
	Sepa_Cutter_Dn->On_Number = Sel_Check(Sepa_Cutter_Dn->On_Output);
	Sepa_Cutter_Dn->Off_Number = Sel_Check(Sepa_Cutter_Dn->Off_Output);
	Sepa_Cutter_Dn->Sen_Number = Sel_Check(Sepa_Cutter_Dn->Sensor);

// **********	세파 커터 히터 온		**********			//	o
	tRadioBTN* Cutter_Heater_On = Radio_init();		// [Double Sol]
	Cutter_Heater_On->IFBtn.Key = KEY_BIT2;
	Cutter_Heater_On->IFBtn.pPMACAddr = (char*)pushm + 44603;
	Cutter_Heater_On->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 18;

	Cutter_Heater_On->On_Output[0] = M_Y_Sepa_Cutter_SSR_On;

	Cutter_Heater_On->Lamp	= M_Stack_BTN_Lamp + 18;
	Cutter_Heater_On->On_Number = Sel_Check(Cutter_Heater_On->On_Output);
	Cutter_Heater_On->Off_Number = Sel_Check(Cutter_Heater_On->Off_Output);
	Cutter_Heater_On->Sen_Number = Sel_Check(Cutter_Heater_On->Sensor);

// **********	세파 커터 히터 오프		**********			//
	tRadioBTN* Cutter_Heater_Off = Radio_init();		// [Double Sol]
	Cutter_Heater_Off->IFBtn.Key = KEY_BIT3;
	Cutter_Heater_Off->IFBtn.pPMACAddr = (char*)pushm + 44603;
	Cutter_Heater_Off->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 19;

	Cutter_Heater_Off->Off_Output[0] = M_Y_Sepa_Cutter_SSR_On;

	Cutter_Heater_Off->Lamp	= M_Stack_BTN_Lamp + 19;
	Cutter_Heater_Off->On_Number = Sel_Check(Cutter_Heater_Off->On_Output);
	Cutter_Heater_Off->Off_Number = Sel_Check(Cutter_Heater_Off->Off_Output);
	Cutter_Heater_Off->Sen_Number = Sel_Check(Cutter_Heater_Off->Sensor);


// **********	1st Sheet Paper 전진		**********			//	o
	tRadioBTN* Sheet_Paper_FWD = Radio_init();		// [Double Sol]
	Sheet_Paper_FWD->IFBtn.Key = KEY_BIT4;
	Sheet_Paper_FWD->IFBtn.pPMACAddr = (char*)pushm + 44603;
	Sheet_Paper_FWD->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 23;

	Sheet_Paper_FWD->Sensor[0] = M_X_First_Sheet_Paper_Plate_FWD_CYL_Sensor;
	Sheet_Paper_FWD->On_Output[0] = M_Y_First_Sheet_Paper_Plate_FWD_Sol;
	Sheet_Paper_FWD->Off_Output[0] = M_Y_First_Sheet_Paper_Plate_BWD_Sol;

	Sheet_Paper_FWD->Lamp	= M_Stack_BTN_Lamp + 23;
	Sheet_Paper_FWD->On_Number = Sel_Check(Sheet_Paper_FWD->On_Output);
	Sheet_Paper_FWD->Off_Number = Sel_Check(Sheet_Paper_FWD->Off_Output);
	Sheet_Paper_FWD->Sen_Number = Sel_Check(Sheet_Paper_FWD->Sensor);

// **********	1st Sheet Paper 후진		**********			//

	tRadioBTN* Sheet_Paper_BWD = Radio_init();		// [Double Sol]
	Sheet_Paper_BWD->IFBtn.Key = KEY_BIT5;
	Sheet_Paper_BWD->IFBtn.pPMACAddr = (char*)pushm + 44603;
	Sheet_Paper_BWD->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 24;

	Sheet_Paper_BWD->Sensor[0] = M_X_First_Sheet_Paper_Plate_BWD_CYL_Sensor;
	Sheet_Paper_BWD->On_Output[0] = M_Y_First_Sheet_Paper_Plate_BWD_Sol;
	Sheet_Paper_BWD->Off_Output[0] = M_Y_First_Sheet_Paper_Plate_FWD_Sol;

	Sheet_Paper_BWD->Lamp	= M_Stack_BTN_Lamp + 24;
	Sheet_Paper_BWD->On_Number = Sel_Check(Sheet_Paper_BWD->On_Output);
	Sheet_Paper_BWD->Off_Number = Sel_Check(Sheet_Paper_BWD->Off_Output);
	Sheet_Paper_BWD->Sen_Number = Sel_Check(Sheet_Paper_BWD->Sensor);


// **********	상부 언와인더 락		**********			// o
	tRadioBTN* Upper_Unwinder_Lock = Radio_init();		// [Double Sol]
	Upper_Unwinder_Lock->IFBtn.Key = KEY_BIT0;
	Upper_Unwinder_Lock->IFBtn.pPMACAddr = (char*)pushm + 44601;
	Upper_Unwinder_Lock->IFBtn.iInterlock_Lamp = M_UnWinder_BTN_Interlock + 0;

	//Upper_Unwinder_Lock->Sensor[0] = M_X_Sepa_Upper_ARC_Up_Sensor;
	Upper_Unwinder_Lock->On_Output[0] = M_Y_Upper_Unwinder_Lock_Sol;
	Upper_Unwinder_Lock->Off_Output[0] = M_Y_Upper_Unwinder_UnLock_Sol;

	Upper_Unwinder_Lock->Lamp	= M_UnWinder_BTN_Lamp + 0;
	Upper_Unwinder_Lock->On_Number = Sel_Check(Upper_Unwinder_Lock->On_Output);
	Upper_Unwinder_Lock->Off_Number = Sel_Check(Upper_Unwinder_Lock->Off_Output);
	Upper_Unwinder_Lock->Sen_Number = Sel_Check(Upper_Unwinder_Lock->Sensor);

// **********	상부 언와인더 언락		**********			//
	tRadioBTN* Upper_Unwinder_UnLock = Radio_init();		// [Double Sol]
	Upper_Unwinder_UnLock->IFBtn.Key = KEY_BIT1;
	Upper_Unwinder_UnLock->IFBtn.pPMACAddr = (char*)pushm + 44601;
	Upper_Unwinder_UnLock->IFBtn.iInterlock_Lamp = M_UnWinder_BTN_Interlock + 1;

	//Upper_Unwinder_UnLock->Sensor[0] = M_X_Sepa_Upper_ARC_Dn_Sensor;
	Upper_Unwinder_UnLock->On_Output[0] = M_Y_Upper_Unwinder_UnLock_Sol;
	Upper_Unwinder_UnLock->Off_Output[0] = M_Y_Upper_Unwinder_Lock_Sol;

	Upper_Unwinder_UnLock->Lamp	=  M_UnWinder_BTN_Lamp + 1;
	Upper_Unwinder_UnLock->On_Number = Sel_Check(Upper_Unwinder_UnLock->On_Output);
	Upper_Unwinder_UnLock->Off_Number = Sel_Check(Upper_Unwinder_UnLock->Off_Output);
	Upper_Unwinder_UnLock->Sen_Number = Sel_Check(Upper_Unwinder_UnLock->Sensor);


// **********	하부 언와인더 락		**********			// o
	tRadioBTN* Lower_Unwinder_Lock = Radio_init();		// [Double Sol]
	Lower_Unwinder_Lock->IFBtn.Key = KEY_BIT2;
	Lower_Unwinder_Lock->IFBtn.pPMACAddr = (char*)pushm + 44601;
	Lower_Unwinder_Lock->IFBtn.iInterlock_Lamp = M_UnWinder_BTN_Interlock + 2;

	//Lower_Unwinder_Lock->Sensor[0] = M_X_Sepa_Upper_ARC_Up_Sensor;
	Lower_Unwinder_Lock->On_Output[0] = M_Y_Lower_Unwinder_Lock_Sol;
	Lower_Unwinder_Lock->Off_Output[0] = M_Y_Lower_Unwinder_UnLock_Sol;

	Lower_Unwinder_Lock->Lamp	=  M_UnWinder_BTN_Lamp + 2;
	Lower_Unwinder_Lock->On_Number = Sel_Check(Lower_Unwinder_Lock->On_Output);
	Lower_Unwinder_Lock->Off_Number = Sel_Check(Lower_Unwinder_Lock->Off_Output);
	Lower_Unwinder_Lock->Sen_Number = Sel_Check(Lower_Unwinder_Lock->Sensor);

// **********	하부 언와인더 언락		**********			// 
	tRadioBTN* Lower_Unwinder_UnLock = Radio_init();		// [Double Sol]
	Lower_Unwinder_UnLock->IFBtn.Key = KEY_BIT3;
	Lower_Unwinder_UnLock->IFBtn.pPMACAddr = (char*)pushm + 44601;
	Lower_Unwinder_UnLock->IFBtn.iInterlock_Lamp = M_UnWinder_BTN_Interlock + 3;

	//Lower_Unwinder_UnLock->Sensor[0] = M_X_Sepa_Upper_ARC_Dn_Sensor;
	Lower_Unwinder_UnLock->On_Output[0] = M_Y_Lower_Unwinder_UnLock_Sol;
	Lower_Unwinder_UnLock->Off_Output[0] = M_Y_Lower_Unwinder_Lock_Sol;

	Lower_Unwinder_UnLock->Lamp	=  M_UnWinder_BTN_Lamp + 3;
	Lower_Unwinder_UnLock->On_Number = Sel_Check(Lower_Unwinder_UnLock->On_Output);
	Lower_Unwinder_UnLock->Off_Number = Sel_Check(Lower_Unwinder_UnLock->Off_Output);
	Lower_Unwinder_UnLock->Sen_Number = Sel_Check(Lower_Unwinder_UnLock->Sensor);



	// **********	ARC 닙롤 클램프			**********			//
	//tRadioBTN* ARC_Niproll_Clamp = Radio_init();		// [Double Sol]
	//ARC_Niproll_Clamp->IFBtn.Key = KEY_BIT0;
	//ARC_Niproll_Clamp->IFBtn.pPMACAddr = (char*)pushm + 44616;
	//ARC_Niproll_Clamp->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 0;
	//
	//
	//ARC_Niproll_Clamp->Sensor[0] =	 M_X_Sepa_Driving_Roll_Clamp_Sensor;	// M_X_Sepa_Driving_Roll_Clamp_Sensor;
	//ARC_Niproll_Clamp->On_Output[0]= M_Y_Sepa_Driving_Roll_Clamp_Sol;			// M_Y_Sepa_Driving_Roll_Clamp_Sol;
	//ARC_Niproll_Clamp->Lamp	= M_ARC_BTN_Lamp;
	//ARC_Niproll_Clamp->On_Number = Sel_Check(ARC_Niproll_Clamp->On_Output);
	//ARC_Niproll_Clamp->Off_Number = Sel_Check(ARC_Niproll_Clamp->Off_Output);
	//ARC_Niproll_Clamp->Sen_Number = Sel_Check(ARC_Niproll_Clamp->Sensor);


	// **********		ARC 닙롤 언클램프			**********		//
	//tRadioBTN* ARC_Niproll_UnClamp = Radio_init();		// [Double Sol]
	//ARC_Niproll_UnClamp->IFBtn.Key = KEY_BIT1;
	//ARC_Niproll_UnClamp->IFBtn.pPMACAddr = (char*)pushm + 44616;
	//ARC_Niproll_UnClamp->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 1;
	//
	//ARC_Niproll_UnClamp->Sensor[0] =	M_X_Sepa_Driving_Roll_UnClamp_Sensor;	//M_X_Sepa_Driving_Roll_UnClamp_Sensor;
	//ARC_Niproll_UnClamp->Off_Output[0] = M_Y_Sepa_Driving_Roll_Clamp_Sol;	//M_Y_Sepa_Driving_Roll_Clamp_Sol;
	//ARC_Niproll_UnClamp->Lamp	= M_ARC_BTN_Lamp + 1;
	//ARC_Niproll_UnClamp->On_Number = Sel_Check(ARC_Niproll_UnClamp->On_Output);
	//ARC_Niproll_UnClamp->Off_Number = Sel_Check(ARC_Niproll_UnClamp->Off_Output);
	//ARC_Niproll_UnClamp->Sen_Number = Sel_Check(ARC_Niproll_UnClamp->Sensor);
	

	// **********		상부 ARC Plate 상승				**********		//
	tRadioBTN* Upper_ARC_Plate_Up = Radio_init();		// [Double Sol]
	Upper_ARC_Plate_Up->IFBtn.Key = KEY_BIT2;
	Upper_ARC_Plate_Up->IFBtn.pPMACAddr = (char*)pushm + 44616;
	Upper_ARC_Plate_Up->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 2;

	Upper_ARC_Plate_Up->Sensor[0] =		M_X_Sepa_Upper_ARC_Up_Sensor;	// M_X_Sepa_Upper_ARC_Up_Sensor;
	Upper_ARC_Plate_Up->On_Output[0] =	M_Y_Sepa_ARC_Upper_Up_Sol;			// M_Y_Sepa_ARC_Upper_Up_Sol;
	Upper_ARC_Plate_Up->Off_Output[0] = M_Y_Sepa_ARC_Upper_Dn_Sol;		//M_Y_Sepa_ARC_Upper_Dn_Sol;

	Upper_ARC_Plate_Up->Lamp	= M_ARC_BTN_Lamp + 2;
	Upper_ARC_Plate_Up->On_Number = Sel_Check(Upper_ARC_Plate_Up->On_Output);
	Upper_ARC_Plate_Up->Off_Number = Sel_Check(Upper_ARC_Plate_Up->Off_Output);
	Upper_ARC_Plate_Up->Sen_Number = Sel_Check(Upper_ARC_Plate_Up->Sensor);

// **********		상부  ARC Plate 하강				**********		//
	tRadioBTN* Upper_ARC_Plate_Dn = Radio_init();		// [Double Sol]
	Upper_ARC_Plate_Dn->IFBtn.Key = KEY_BIT3;
	Upper_ARC_Plate_Dn->IFBtn.pPMACAddr = (char*)pushm + 44616;
	Upper_ARC_Plate_Dn->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 3;

	Upper_ARC_Plate_Dn->Sensor[0] =		M_X_Sepa_Upper_ARC_Dn_Sensor;//M_X_Sepa_Upper_ARC_Dn_Sensor;
	Upper_ARC_Plate_Dn->On_Output[0] =	M_Y_Sepa_ARC_Upper_Dn_Sol;//M_Y_Sepa_ARC_Upper_Dn_Sol;
	Upper_ARC_Plate_Dn->Off_Output[0] = M_Y_Sepa_ARC_Upper_Up_Sol;//M_Y_Sepa_ARC_Upper_Up_Sol;

	Upper_ARC_Plate_Dn->Lamp	= M_ARC_BTN_Lamp + 3;
	Upper_ARC_Plate_Dn->On_Number = Sel_Check(Upper_ARC_Plate_Dn->On_Output);
	Upper_ARC_Plate_Dn->Off_Number = Sel_Check(Upper_ARC_Plate_Dn->Off_Output);
	Upper_ARC_Plate_Dn->Sen_Number = Sel_Check(Upper_ARC_Plate_Dn->Sensor);


// **********		하부  ARC Plate 상승				**********		//

	tRadioBTN* Lower_ARC_Plate_Up = Radio_init();		// [Double Sol]
	Lower_ARC_Plate_Up->IFBtn.Key = KEY_BIT4;
	Lower_ARC_Plate_Up->IFBtn.pPMACAddr = (char*)pushm + 44616;
	Lower_ARC_Plate_Up->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 4;
	
	Lower_ARC_Plate_Up->Sensor[0] = M_X_Sepa_Lower_ARC_Up_Sensor;//M_X_Sepa_Lower_ARC_Up_Sensor;
	Lower_ARC_Plate_Up->On_Output[0] =	M_Y_Sepa_ARC_Lower_Up_Sol;//M_Y_Sepa_ARC_Lower_Up_Sol;
	Lower_ARC_Plate_Up->Off_Output[0] = M_Y_Sepa_ARC_Lower_Dn_Sol;//M_Y_Sepa_ARC_Lower_Dn_Sol;

	Lower_ARC_Plate_Up->Lamp	= M_ARC_BTN_Lamp + 4;
	Lower_ARC_Plate_Up->On_Number = Sel_Check(Lower_ARC_Plate_Up->On_Output);
	Lower_ARC_Plate_Up->Off_Number = Sel_Check(Lower_ARC_Plate_Up->Off_Output);
	Lower_ARC_Plate_Up->Sen_Number = Sel_Check(Lower_ARC_Plate_Up->Sensor);

// **********		하부  ARC Plate 하강				**********		//

	tRadioBTN* Lower_ARC_Plate_Dn = Radio_init();		// [Double Sol]
	Lower_ARC_Plate_Dn->IFBtn.Key = KEY_BIT5;
	Lower_ARC_Plate_Dn->IFBtn.pPMACAddr = (char*)pushm + 44616;
	Lower_ARC_Plate_Dn->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 5;

	Lower_ARC_Plate_Dn->Sensor[0] = M_X_Sepa_Lower_ARC_Dn_Sensor;//M_X_Sepa_Lower_ARC_Dn_Sensor;
	Lower_ARC_Plate_Dn->On_Output[0] = M_Y_Sepa_ARC_Lower_Dn_Sol;//M_Y_Sepa_ARC_Lower_Dn_Sol;
	Lower_ARC_Plate_Dn->Off_Output[0] = M_Y_Sepa_ARC_Lower_Up_Sol;//M_Y_Sepa_ARC_Lower_Up_Sol;

	Lower_ARC_Plate_Dn->Lamp	= M_ARC_BTN_Lamp + 5;
	Lower_ARC_Plate_Dn->On_Number = Sel_Check(Lower_ARC_Plate_Dn->On_Output);
	Lower_ARC_Plate_Dn->Off_Number = Sel_Check(Lower_ARC_Plate_Dn->Off_Output);
	Lower_ARC_Plate_Dn->Sen_Number = Sel_Check(Lower_ARC_Plate_Dn->Sensor);




// **********		상부  ARC Tilting 0				**********		//
	tRadioBTN* Upper_ARC_Tilting = Radio_init();		// [Double Sol]
	Upper_ARC_Tilting->IFBtn.Key = KEY_BIT6;
	Upper_ARC_Tilting->IFBtn.pPMACAddr = (char*)pushm + 44616;
	Upper_ARC_Tilting->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 6;

	Upper_ARC_Tilting->Sensor[0] = M_X_Sepa_Upper_ARC_UnTilting_Sensor_Front;//M_X_Sepa_Upper_ARC_Tilting_Front_Sensor;
	Upper_ARC_Tilting->Sensor[1] = M_X_Sepa_Upper_ARC_UnTilting_Sensor_Rear;//M_X_Sepa_Upper_ARC_Tilting_Rear_Sensor;

	Upper_ARC_Tilting->On_Output[0] = M_Y_Sepa_ARC_Upper_UnTilting_Sol;//M_Y_Sepa_ARC_Upper_Tilting_Sol;

	Upper_ARC_Tilting->Off_Output[0] = M_Y_Sepa_ARC_Upper_Tilting_Sol;//M_Y_Sepa_ARC_Upper_UnTilting_Sol;

	Upper_ARC_Tilting->Lamp	= M_ARC_BTN_Lamp + 6;
	Upper_ARC_Tilting->On_Number = Sel_Check(Upper_ARC_Tilting->On_Output);
	Upper_ARC_Tilting->Off_Number = Sel_Check(Upper_ARC_Tilting->Off_Output);
	Upper_ARC_Tilting->Sen_Number = Sel_Check(Upper_ARC_Tilting->Sensor);

// **********		상부  ARC UnTilting 90				**********		//
	tRadioBTN* Upper_ARC_UnTilting = Radio_init();		// [Double Sol]
	Upper_ARC_UnTilting->IFBtn.Key = KEY_BIT7;
	Upper_ARC_UnTilting->IFBtn.pPMACAddr = (char*)pushm + 44616;
	Upper_ARC_UnTilting->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 7;


	Upper_ARC_UnTilting->Sensor[0] = M_X_Sepa_Upper_ARC_Tilting_Sensor_Front; //M_X_Sepa_Upper_ARC_UnTilting_Front_Sensor;
	Upper_ARC_UnTilting->Sensor[1] = M_X_Sepa_Upper_ARC_Tilting_Sensor_Rear; //M_X_Sepa_Upper_ARC_UnTilting_Rear_Sensor;

	Upper_ARC_UnTilting->On_Output[0] = M_Y_Sepa_ARC_Upper_Tilting_Sol;//M_Y_Sepa_ARC_Upper_UnTilting_Sol;

	Upper_ARC_UnTilting->Off_Output[0] = M_Y_Sepa_ARC_Upper_UnTilting_Sol;//M_Y_Sepa_ARC_Upper_Tilting_Sol;

	Upper_ARC_UnTilting->Lamp	= M_ARC_BTN_Lamp + 7;
	Upper_ARC_UnTilting->On_Number = Sel_Check(Upper_ARC_UnTilting->On_Output);
	Upper_ARC_UnTilting->Off_Number = Sel_Check(Upper_ARC_UnTilting->Off_Output);
	Upper_ARC_UnTilting->Sen_Number = Sel_Check(Upper_ARC_UnTilting->Sensor);


// **********		하부  ARC Tilting 0				**********		//
	tRadioBTN* Lower_ARC_Tilting = Radio_init();		// [Double Sol]
	Lower_ARC_Tilting->IFBtn.Key = KEY_BIT0;
	Lower_ARC_Tilting->IFBtn.pPMACAddr = (char*)pushm + 44617;
	Lower_ARC_Tilting->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 8;


	Lower_ARC_Tilting->Sensor[0] = M_X_Sepa_Lower_ARC_UnTilting_Sensor_Front;//M_X_Sepa_Lower_ARC_Tilting_Front_Sensor;
	Lower_ARC_Tilting->Sensor[1] = M_X_Sepa_Lower_ARC_UnTilting_Sensor_Rear;//M_X_Sepa_Lower_ARC_Tilting_Rear_Sensor;

	Lower_ARC_Tilting->On_Output[0] = M_Y_Sepa_ARC_Lower_UnTilting_Sol;//M_Y_Sepa_ARC_Lower_Tilting_Sol;
	Lower_ARC_Tilting->Off_Output[0] = M_Y_Sepa_ARC_Lower_Tilting_Sol;//M_Y_Sepa_ARC_Lower_UnTilting_Sol;

	Lower_ARC_Tilting->Lamp	= M_ARC_BTN_Lamp + 8;
	Lower_ARC_Tilting->On_Number = Sel_Check(Lower_ARC_Tilting->On_Output);
	Lower_ARC_Tilting->Off_Number = Sel_Check(Lower_ARC_Tilting->Off_Output);
	Lower_ARC_Tilting->Sen_Number = Sel_Check(Lower_ARC_Tilting->Sensor);

// **********		하부  ARC UnTilting 90				**********		//

	tRadioBTN* Lower_ARC_UnTilting = Radio_init();		// [Double Sol]
	Lower_ARC_UnTilting->IFBtn.Key = KEY_BIT1;
	Lower_ARC_UnTilting->IFBtn.pPMACAddr = (char*)pushm + 44617;
	Lower_ARC_UnTilting->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 9;


	Lower_ARC_UnTilting->Sensor[0] = M_X_Sepa_Lower_ARC_Tilting_Sensor_Front;//M_X_Sepa_Lower_ARC_UnTilting_Front_Sensor;
	Lower_ARC_UnTilting->Sensor[1] = M_X_Sepa_Lower_ARC_Tilting_Sensor_Rear;//M_X_Sepa_Lower_ARC_UnTilting_Rear_Sensor;

	Lower_ARC_UnTilting->On_Output[0] = M_Y_Sepa_ARC_Lower_Tilting_Sol;//M_Y_Sepa_ARC_Lower_UnTilting_Sol;

	Lower_ARC_UnTilting->Off_Output[0] = M_Y_Sepa_ARC_Lower_UnTilting_Sol;//M_Y_Sepa_ARC_Lower_Tilting_Sol;

	Lower_ARC_UnTilting->Lamp	= M_ARC_BTN_Lamp + 9;
	Lower_ARC_UnTilting->On_Number = Sel_Check(Lower_ARC_UnTilting->On_Output);
	Lower_ARC_UnTilting->Off_Number = Sel_Check(Lower_ARC_UnTilting->Off_Output);
	Lower_ARC_UnTilting->Sen_Number = Sel_Check(Lower_ARC_UnTilting->Sensor);


// **********		상부 ARC 커터 전진				**********		//
	tRadioBTN* Upper_ARC_Cutter_FWD = Radio_init();		// [Double Sol]
	Upper_ARC_Cutter_FWD->IFBtn.Key = KEY_BIT2;
	Upper_ARC_Cutter_FWD->IFBtn.pPMACAddr = (char*)pushm + 44617;
	Upper_ARC_Cutter_FWD->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 10;


	Upper_ARC_Cutter_FWD->Sensor[0] = M_X_Sepa_Upper_ARC_Cutting_FWD_Sensor;//M_X_Sepa_Upper_ARC_Cutting_FWD_Sensor;

	Upper_ARC_Cutter_FWD->On_Output[0] = M_Y_Sepa_ARC_Upper_Cutting_FWD_Sol;
	Upper_ARC_Cutter_FWD->Off_Output[0] = M_Y_Sepa_ARC_Upper_Cutting_BWD_Sol;

	Upper_ARC_Cutter_FWD->Lamp	= M_ARC_BTN_Lamp + 10;
	Upper_ARC_Cutter_FWD->On_Number = Sel_Check(Upper_ARC_Cutter_FWD->On_Output);
	Upper_ARC_Cutter_FWD->Off_Number = Sel_Check(Upper_ARC_Cutter_FWD->Off_Output);
	Upper_ARC_Cutter_FWD->Sen_Number = Sel_Check(Upper_ARC_Cutter_FWD->Sensor);

// **********		상부 ARC 커터 후진				**********		//
	tRadioBTN* Upper_ARC_Cutter_BWD = Radio_init();		// [Double Sol]
	Upper_ARC_Cutter_BWD->IFBtn.Key = KEY_BIT3;
	Upper_ARC_Cutter_BWD->IFBtn.pPMACAddr = (char*)pushm + 44617;
	Upper_ARC_Cutter_BWD->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 11;

	Upper_ARC_Cutter_BWD->Sensor[0] = M_X_Sepa_Upper_ARC_Cutting_BWD_Sensor;//M_X_Sepa_Upper_ARC_Cutting_BWD_Sensor;

	Upper_ARC_Cutter_BWD->On_Output[0] = M_Y_Sepa_ARC_Upper_Cutting_BWD_Sol;
	Upper_ARC_Cutter_BWD->Off_Output[0] = M_Y_Sepa_ARC_Upper_Cutting_FWD_Sol;

	Upper_ARC_Cutter_BWD->Lamp	= M_ARC_BTN_Lamp + 11;
	Upper_ARC_Cutter_BWD->On_Number = Sel_Check(Upper_ARC_Cutter_BWD->On_Output);
	Upper_ARC_Cutter_BWD->Off_Number = Sel_Check(Upper_ARC_Cutter_BWD->Off_Output);
	Upper_ARC_Cutter_BWD->Sen_Number = Sel_Check(Upper_ARC_Cutter_BWD->Sensor);

// **********		하부 ARC 커터 전진				**********		//
	tRadioBTN* Lower_ARC_Cutter_FWD = Radio_init();		// [Double Sol]
	Lower_ARC_Cutter_FWD->IFBtn.Key = KEY_BIT4;
	Lower_ARC_Cutter_FWD->IFBtn.pPMACAddr = (char*)pushm + 44617;
	Lower_ARC_Cutter_FWD->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 12;

	Lower_ARC_Cutter_FWD->Sensor[0] = M_X_Sepa_Lower_ARC_Cutting_FWD_Sensor;//M_X_Sepa_Lower_ARC_Cutting_FWD_Sensor;

	Lower_ARC_Cutter_FWD->On_Output[0] = M_Y_Sepa_ARC_Lower_Cutting_FWD_Sol;// M_Y_Sepa_ARC_Lower_Cutting_FWD_Sol;
	Lower_ARC_Cutter_FWD->Off_Output[0] = M_Y_Sepa_ARC_Lower_Cutting_BWD_Sol;

	Lower_ARC_Cutter_FWD->Lamp	= M_ARC_BTN_Lamp + 12;
	Lower_ARC_Cutter_FWD->On_Number = Sel_Check(Lower_ARC_Cutter_FWD->On_Output);
	Lower_ARC_Cutter_FWD->Off_Number = Sel_Check(Lower_ARC_Cutter_FWD->Off_Output);
	Lower_ARC_Cutter_FWD->Sen_Number = Sel_Check(Lower_ARC_Cutter_FWD->Sensor);

// **********		하부 ARC 커터 후진				**********		//
	tRadioBTN* Lower_ARC_Cutter_BWD = Radio_init();		// [Double Sol]
	Lower_ARC_Cutter_BWD->IFBtn.Key = KEY_BIT5;
	Lower_ARC_Cutter_BWD->IFBtn.pPMACAddr = (char*)pushm + 44617;
	Lower_ARC_Cutter_BWD->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 13;

	Lower_ARC_Cutter_BWD->Sensor[0] = M_X_Sepa_Lower_ARC_Cutting_BWD_Sensor;//M_X_Sepa_Lower_ARC_Cutting_BWD_Sensor;

	Lower_ARC_Cutter_BWD->On_Output[0] = M_Y_Sepa_ARC_Lower_Cutting_BWD_Sol;
	Lower_ARC_Cutter_BWD->Off_Output[0] = M_Y_Sepa_ARC_Lower_Cutting_FWD_Sol;//M_Y_Sepa_ARC_Lower_Cutting_FWD_Sol;

	Lower_ARC_Cutter_BWD->Lamp	= M_ARC_BTN_Lamp + 13;
	Lower_ARC_Cutter_BWD->On_Number = Sel_Check(Lower_ARC_Cutter_BWD->On_Output);
	Lower_ARC_Cutter_BWD->Off_Number = Sel_Check(Lower_ARC_Cutter_BWD->Off_Output);
	Lower_ARC_Cutter_BWD->Sen_Number = Sel_Check(Lower_ARC_Cutter_BWD->Sensor);


// **********		상부 ARC 스토퍼 전진	(언클램프)			**********		//
	tRadioBTN* Upper_ARC_Stopper = Radio_init();		// [Double Sol]
	Upper_ARC_Stopper->IFBtn.Key = KEY_BIT7;
	Upper_ARC_Stopper->IFBtn.pPMACAddr = (char*)pushm + 44617;
	Upper_ARC_Stopper->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 14;

	Upper_ARC_Stopper->Sensor[0] = M_X_Sepa_Upper_ARC_Stopper_Front_Sensor;//M_X_Sepa_Upper_ARC_Stopper_Front_Sensor;
	Upper_ARC_Stopper->Sensor[1] = M_X_Sepa_Upper_ARC_Stopper_Rear_Sensor;//M_X_Sepa_Upper_ARC_Stopper_Rear_Sensor;

	Upper_ARC_Stopper->On_Output[0] = M_Y_Sepa_ARC_Upper_Stopper_BWD_Sol;//M_Y_Sepa_ARC_Upper_Stopper_BWD_Sol;
	Upper_ARC_Stopper->Off_Output[0] = M_Y_Sepa_ARC_Upper_Stopper_FWD_Sol;//M_Y_Sepa_ARC_Upper_Stopper_Sol;

	Upper_ARC_Stopper->Lamp	= M_ARC_BTN_Lamp + 15;
	Upper_ARC_Stopper->On_Number = Sel_Check(Upper_ARC_Stopper->On_Output);
	Upper_ARC_Stopper->Off_Number = Sel_Check(Upper_ARC_Stopper->Off_Output);
	Upper_ARC_Stopper->Sen_Number = Sel_Check(Upper_ARC_Stopper->Sensor);

// **********		상부 ARC 스토퍼 후진 (클램프)				**********		//
	tRadioBTN* Upper_ARC_UnStopper = Radio_init();		// [Double Sol]
	Upper_ARC_UnStopper->IFBtn.Key = KEY_BIT6;
	Upper_ARC_UnStopper->IFBtn.pPMACAddr = (char*)pushm + 44617;
	Upper_ARC_UnStopper->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 15;

	Upper_ARC_UnStopper->Sensor[0] = M_X_Sepa_Upper_ARC_UnStopper_Front_Sensor;//M_X_Sepa_Upper_ARC_UnStopper_Front_Sensor;
	Upper_ARC_UnStopper->Sensor[1] = M_X_Sepa_Upper_ARC_UnStopper_Rear_Sensor;//M_X_Sepa_Upper_ARC_UnStopper_Rear_Sensor;


	Upper_ARC_UnStopper->On_Output[0] = M_Y_Sepa_ARC_Upper_Stopper_FWD_Sol;//M_Y_Sepa_ARC_Upper_Stopper_FWD_Sol;
	Upper_ARC_UnStopper->Off_Output[0] = M_Y_Sepa_ARC_Upper_Stopper_BWD_Sol;//M_Y_Sepa_ARC_Upper_Stopper_Sol;

	Upper_ARC_UnStopper->Lamp	= M_ARC_BTN_Lamp + 14;
	Upper_ARC_UnStopper->On_Number = Sel_Check(Upper_ARC_UnStopper->On_Output);
	Upper_ARC_UnStopper->Off_Number = Sel_Check(Upper_ARC_UnStopper->Off_Output);
	Upper_ARC_UnStopper->Sen_Number = Sel_Check(Upper_ARC_UnStopper->Sensor);



// **********		하부 ARC 스토퍼 전진				**********		//
	tRadioBTN* Lower_ARC_Stopper = Radio_init();		// [Double Sol]
	Lower_ARC_Stopper->IFBtn.Key = KEY_BIT1;
	Lower_ARC_Stopper->IFBtn.pPMACAddr = (char*)pushm + 44618;
	Lower_ARC_Stopper->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 16;

	Lower_ARC_Stopper->Sensor[0] = M_X_Sepa_Lower_ARC_Stopper_Front_Sensor;//M_X_Sepa_Lower_ARC_Stopper_Front_Sensor;
	Lower_ARC_Stopper->Sensor[1] = M_X_Sepa_Lower_ARC_Stopper_Rear_Sensor;//M_X_Sepa_Lower_ARC_Stopper_Rear_Sensor;

	Lower_ARC_Stopper->On_Output[0] = M_Y_Sepa_ARC_Lower_Stopper_BWD_Sol;//M_Y_Sepa_ARC_Lower_Stopper_BWD_Sol;
	Lower_ARC_Stopper->Off_Output[0] = M_Y_Sepa_ARC_Lower_Stopper_FWD_Sol;//M_Y_Sepa_ARC_Lower_Stopper_Sol;

	Lower_ARC_Stopper->Lamp	= M_ARC_BTN_Lamp + 17;
	Lower_ARC_Stopper->On_Number = Sel_Check(Lower_ARC_Stopper->On_Output);
	Lower_ARC_Stopper->Off_Number = Sel_Check(Lower_ARC_Stopper->Off_Output);
	Lower_ARC_Stopper->Sen_Number = Sel_Check(Lower_ARC_Stopper->Sensor);

// **********		하부 ARC 스토퍼 후진				**********		//
	tRadioBTN* Lower_ARC_UnStopper = Radio_init();		// [Double Sol]
	Lower_ARC_UnStopper->IFBtn.Key = KEY_BIT0;
	Lower_ARC_UnStopper->IFBtn.pPMACAddr = (char*)pushm + 44618;
	Lower_ARC_UnStopper->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 17;

	Lower_ARC_UnStopper->Sensor[0] = M_X_Sepa_Lower_ARC_UnStopper_Front_Sensor;//M_X_Sepa_Lower_ARC_UnStopper_Front_Sensor;
	Lower_ARC_UnStopper->Sensor[1] = M_X_Sepa_Lower_ARC_UnStopper_Rear_Sensor;//M_X_Sepa_Lower_ARC_UnStopper_Rear_Sensor;

	Lower_ARC_UnStopper->On_Output[0] = M_Y_Sepa_ARC_Lower_Stopper_FWD_Sol;//M_Y_Sepa_ARC_Lower_Stopper_FWD_Sol;
	Lower_ARC_UnStopper->Off_Output[0] = M_Y_Sepa_ARC_Lower_Stopper_BWD_Sol;//M_Y_Sepa_ARC_Lower_Stopper_Sol;

	Lower_ARC_UnStopper->Lamp	= M_ARC_BTN_Lamp + 16;
	Lower_ARC_UnStopper->On_Number = Sel_Check(Lower_ARC_UnStopper->On_Output);
	Lower_ARC_UnStopper->Off_Number = Sel_Check(Lower_ARC_UnStopper->Off_Output);
	Lower_ARC_UnStopper->Sen_Number = Sel_Check(Lower_ARC_UnStopper->Sensor);




// **********		상부 ARC 이젝터 진공				**********		//

	tRadioBTN* Upeer_ARC_EjectorVac = Radio_init();		// [Double Sol]
	Upeer_ARC_EjectorVac->IFBtn.Key = KEY_BIT2;
	Upeer_ARC_EjectorVac->IFBtn.pPMACAddr = (char*)pushm + 44618;
	Upeer_ARC_EjectorVac->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 18;

	Upeer_ARC_EjectorVac->Sensor[0] = M_X_ARC_NP_Upper_Plate_Vac_On; //M_X_Sepa_ARC_Upper_Ejector_Vac_Sensor; //[ 참조 : 2026.05.30 ARC 상하부 진공 감지 센서 입력 IO 영역 수정 ]

	Upeer_ARC_EjectorVac->On_Output[0] = M_Y_Sepa_Upper_ARC_Ejector_Vac_On;//M_Y_Sepa_Upper_ARC_Ejector_Vac_On;
	Upeer_ARC_EjectorVac->Off_Output[0] = M_Y_Sepa_Upper_ARC_Ejector_Vac_Off;//M_Y_Sepa_Upper_ARC_Ejector_Vac_Off;
	Upeer_ARC_EjectorVac->Lamp	= M_ARC_BTN_Lamp + 18;

	Upeer_ARC_EjectorVac->On_Number = Sel_Check(Upeer_ARC_EjectorVac->On_Output);
	Upeer_ARC_EjectorVac->Off_Number = Sel_Check(Upeer_ARC_EjectorVac->Off_Output);
	Upeer_ARC_EjectorVac->Sen_Number = Sel_Check(Upeer_ARC_EjectorVac->Sensor);


// **********		상부 ARC 이젝터 클리어				**********		//

	tRadioBTN* Upeer_ARC_EjectorClear = Radio_init();		// [Double Sol]
	Upeer_ARC_EjectorClear->IFBtn.Key = KEY_BIT4;
	Upeer_ARC_EjectorClear->IFBtn.pPMACAddr = (char*)pushm + 44618;
	Upeer_ARC_EjectorClear->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 19;

	Upeer_ARC_EjectorClear->Sensor[0] = M_X_ARC_NP_Upper_Plate_Vac_On; //M_X_Sepa_ARC_Upper_Ejector_Vac_Sensor;  //[ 참조 : 2026.05.30 ARC 상하부 진공 감지 센서 입력 IO 영역 수정 ]

	Upeer_ARC_EjectorClear->Off_Output[0] = M_Y_Sepa_Upper_ARC_Ejector_Vac_On;//M_Y_Sepa_Upper_ARC_Ejector_Vac_On;
	Upeer_ARC_EjectorClear->Off_Output[1] = M_Y_Sepa_Upper_ARC_Ejector_Vac_Off;//M_Y_Sepa_Upper_ARC_Ejector_Vac_Off;

	Upeer_ARC_EjectorClear->Lamp	= M_ARC_BTN_Lamp + 19;
	Upeer_ARC_EjectorClear->On_Number = Sel_Check(Upeer_ARC_EjectorClear->On_Output);
	Upeer_ARC_EjectorClear->Off_Number = Sel_Check(Upeer_ARC_EjectorClear->Off_Output);
	Upeer_ARC_EjectorClear->Sen_Number = Sel_Check(Upeer_ARC_EjectorClear->Sensor);

// **********		상부 ARC 이젝터 블로우				**********		//
	tRadioBTN* Upeer_ARC_EjectorBlow = Radio_init();		// [Double Sol]
	Upeer_ARC_EjectorBlow->IFBtn.Key = KEY_BIT3;
	Upeer_ARC_EjectorBlow->IFBtn.pPMACAddr = (char*)pushm + 44618;
	Upeer_ARC_EjectorBlow->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 20;

	Upeer_ARC_EjectorBlow->Sensor[0] = M_X_ARC_NP_Upper_Plate_Vac_On; //M_X_Sepa_ARC_Upper_Ejector_Vac_Sensor;  //[ 참조 : 2026.05.30 ARC 상하부 진공 감지 센서 입력 IO 영역 수정 ]

	Upeer_ARC_EjectorBlow->On_Output[0] = M_Y_Sepa_Upper_ARC_Ejector_Vac_Off;//M_Y_Sepa_Upper_ARC_Ejector_Vac_Off;
	Upeer_ARC_EjectorBlow->Off_Output[0] = M_Y_Sepa_Upper_ARC_Ejector_Vac_On;//M_Y_Sepa_Upper_ARC_Ejector_Vac_On;

	Upeer_ARC_EjectorBlow->Lamp	= M_ARC_BTN_Lamp + 20;
	Upeer_ARC_EjectorBlow->On_Number = Sel_Check(Upeer_ARC_EjectorBlow->On_Output);
	Upeer_ARC_EjectorBlow->Off_Number = Sel_Check(Upeer_ARC_EjectorBlow->Off_Output);
	Upeer_ARC_EjectorBlow->Sen_Number = Sel_Check(Upeer_ARC_EjectorBlow->Sensor);


// **********		하부 ARC 이젝터 진공				**********		//
	tRadioBTN* Lower_ARC_EjectorVac = Radio_init();		// [Double Sol]
	Lower_ARC_EjectorVac->IFBtn.Key = KEY_BIT5;
	Lower_ARC_EjectorVac->IFBtn.pPMACAddr = (char*)pushm + 44618;
	Lower_ARC_EjectorVac->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 21;

	Lower_ARC_EjectorVac->Sensor[0] = M_X_ARC_NP_Lower_Plate_Vac_On; //M_X_Sepa_ARC_Lower_Ejector_Vac_Sensor; //[ 참조 : 2026.05.30 ARC 상하부 진공 감지 센서 입력 IO 영역 수정 ]
	Lower_ARC_EjectorVac->On_Output[0] =	M_Y_Sepa_Lower_ARC_Ejector_Vac_On;//M_Y_Sepa_Lower_ARC_Ejector_Vac_On;
	Lower_ARC_EjectorVac->Off_Output[0] =	M_Y_Sepa_Lower_ARC_Ejector_Vac_Off;//M_Y_Sepa_Lower_ARC_Ejector_Vac_Off;

	Lower_ARC_EjectorVac->Lamp	= M_ARC_BTN_Lamp + 21;
	Lower_ARC_EjectorVac->On_Number = Sel_Check(Lower_ARC_EjectorVac->On_Output);
	Lower_ARC_EjectorVac->Off_Number = Sel_Check(Lower_ARC_EjectorVac->Off_Output);
	Lower_ARC_EjectorVac->Sen_Number = Sel_Check(Lower_ARC_EjectorVac->Sensor);


// **********		하부 ARC 이젝터 클리어				**********		//
	tRadioBTN* Lower_ARC_EjectorClear = Radio_init();		// [Double Sol]
	Lower_ARC_EjectorClear->IFBtn.Key = KEY_BIT7;
	Lower_ARC_EjectorClear->IFBtn.pPMACAddr = (char*)pushm + 44618;
	Lower_ARC_EjectorClear->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 22;

	Lower_ARC_EjectorClear->Sensor[0] = M_X_ARC_NP_Lower_Plate_Vac_On; //M_X_Sepa_ARC_Lower_Ejector_Vac_Sensor;  //[ 참조 : 2026.05.30 ARC 상하부 진공 감지 센서 입력 IO 영역 수정 ]
	//Lower_ARC_EjectorClear->On_Output[0] = M_Y_ST_Center_Sol;
	Lower_ARC_EjectorClear->Off_Output[0] = M_Y_Sepa_Lower_ARC_Ejector_Vac_On;//M_Y_Sepa_Lower_ARC_Ejector_Vac_On;
	Lower_ARC_EjectorClear->Off_Output[1] = M_Y_Sepa_Lower_ARC_Ejector_Vac_Off;//M_Y_Sepa_Lower_ARC_Ejector_Vac_Off;

	Lower_ARC_EjectorClear->Lamp	= M_ARC_BTN_Lamp + 22;
	Lower_ARC_EjectorClear->On_Number = Sel_Check(Lower_ARC_EjectorClear->On_Output);
	Lower_ARC_EjectorClear->Off_Number = Sel_Check(Lower_ARC_EjectorClear->Off_Output);
	Lower_ARC_EjectorClear->Sen_Number = Sel_Check(Lower_ARC_EjectorClear->Sensor);

// **********		하부 ARC 이젝터 블로우				**********		//
	tRadioBTN* Lower_ARC_EjectorBlow = Radio_init();		// [Double Sol]
	Lower_ARC_EjectorBlow->IFBtn.Key = KEY_BIT6;
	Lower_ARC_EjectorBlow->IFBtn.pPMACAddr = (char*)pushm + 44618;
	Lower_ARC_EjectorBlow->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 23;

	//Lower_ARC_EjectorBlow->Sensor[0] = M_X_ST_Center_Vac_Sensor;
	Lower_ARC_EjectorBlow->Sensor[0] = M_X_ARC_NP_Lower_Plate_Vac_On; //M_X_Sepa_ARC_Lower_Ejector_Vac_Sensor;  //[ 참조 : 2026.05.30 ARC 상하부 진공 감지 센서 입력 IO 영역 수정 ]
	Lower_ARC_EjectorBlow->On_Output[0] = M_Y_Sepa_Lower_ARC_Ejector_Vac_Off;//M_Y_Sepa_Lower_ARC_Ejector_Vac_Off;
	Lower_ARC_EjectorBlow->Off_Output[0] = M_Y_Sepa_Lower_ARC_Ejector_Vac_On;//M_Y_Sepa_Lower_ARC_Ejector_Vac_On;
	Lower_ARC_EjectorBlow->Lamp	= M_ARC_BTN_Lamp + 23;
	Lower_ARC_EjectorBlow->On_Number = Sel_Check(Lower_ARC_EjectorBlow->On_Output);
	Lower_ARC_EjectorBlow->Off_Number = Sel_Check(Lower_ARC_EjectorBlow->Off_Output);
	Lower_ARC_EjectorBlow->Sen_Number = Sel_Check(Lower_ARC_EjectorBlow->Sensor);

// 네임플레이트 부
// **********		NP ARC Tilting 0 / 90  				**********		//
// 토글 버튼인데 조건이 필요 ( 상부, 하부 선택 스위치 )
// 
//	tNP_ToggleBTN* NP_Tilting_Toggle = NP_Toggle_Init();
//
//	//NP_Tilting_Toggle->IFBtn.pPMACAddr = M_X_ARC_NP_BTN_Plate_Tilting;
//	NP_Tilting_Toggle->IFBtn.Key = KEY_BIT0;
//	NP_Tilting_Toggle->IFBtn.pPMACAddr = (char*)pushm + 8200;
//
//	NP_Tilting_Toggle->IFBtn.iInterlock_Lamp = M_NP_BTN_Interlock + 4;
//
//	NP_Tilting_Toggle->On_Output[0] = M_Y_Sepa_ARC_Upper_UnTilting_Sol;//M_Y_Sepa_ARC_Upper_Tilting_Sol;
//	NP_Tilting_Toggle->On_Output[1] = M_Y_Sepa_ARC_Lower_UnTilting_Sol;//M_Y_Sepa_ARC_Lower_Tilting_Sol;
//
//	NP_Tilting_Toggle->Off_Output[0] = M_Y_Sepa_ARC_Upper_Tilting_Sol;// M_Y_Sepa_ARC_Upper_UnTilting_Sol;
//	NP_Tilting_Toggle->Off_Output[1] = M_Y_Sepa_ARC_Lower_Tilting_Sol;// M_Y_Sepa_ARC_Lower_UnTilting_Sol;
//
//	NP_Tilting_Toggle->On_Number = Sel_Check(NP_Tilting_Toggle->On_Output);
//	NP_Tilting_Toggle->Off_Number = Sel_Check(NP_Tilting_Toggle->Off_Output);

// **********		NP ARC Un-Winder Lock/Unlick				**********		//
// 토글 버튼인데 조건이 필요 ( 상부, 하부 선택 스위치 )
// 
//	tNP_ToggleBTN* NP_UnWinder_LockUnlock_Toggle = NP_Toggle_Init();
//	//NP_UnWinder_LockUnlock_Toggle->IFBtn.pPMACAddr = M_X_ARC_NP_BTN_Unwinder_Lock_Unlock;
//	NP_UnWinder_LockUnlock_Toggle->IFBtn.Key = KEY_BIT1;
//	NP_UnWinder_LockUnlock_Toggle->IFBtn.pPMACAddr = (char*)pushm + 8200;
//	NP_UnWinder_LockUnlock_Toggle->IFBtn.iInterlock_Lamp = M_NP_BTN_Interlock + 2;

//	NP_UnWinder_LockUnlock_Toggle->On_Output[0] = M_Y_Upper_Unwinder_Lock_Sol;
//	NP_UnWinder_LockUnlock_Toggle->On_Output[1] = M_Y_Lower_Unwinder_Lock_Sol;

//	NP_UnWinder_LockUnlock_Toggle->Off_Output[0] = M_Y_Upper_Unwinder_UnLock_Sol;
//	NP_UnWinder_LockUnlock_Toggle->Off_Output[1] = M_Y_Lower_Unwinder_UnLock_Sol;

//	NP_UnWinder_LockUnlock_Toggle->On_Number = Sel_Check(NP_UnWinder_LockUnlock_Toggle->On_Output);
//	NP_UnWinder_LockUnlock_Toggle->Off_Number = Sel_Check(NP_UnWinder_LockUnlock_Toggle->Off_Output);

//// **********		NP ARC Vaccum On/Off				**********		//
//// 토글 버튼인데 조건이 필요 ( 상부, 하부 선택 스위치 )
//// 흡착 / 블로우+해제
//	tNP_ToggleBTN* NP_Vaccum_OnOff_Toggle = NP_Toggle_Init();
//	//NP_Vaccum_OnOff_Toggle->IFBtn.pPMACAddr = M_X_ARC_NP_BTN_Plate_Vac_On_Off;
//	NP_Vaccum_OnOff_Toggle->IFBtn.Key = KEY_BIT2;
//	NP_Vaccum_OnOff_Toggle->IFBtn.pPMACAddr = (char*)pushm + 8200;
//	NP_Vaccum_OnOff_Toggle->IFBtn.iInterlock_Lamp = M_NP_BTN_Interlock + 5;

//	NP_Vaccum_OnOff_Toggle->On_Output[0] =	M_Y_Sepa_Upper_ARC_Ejector_Vac_On;	//M_Y_Sepa_ARC_Upper_Up_Sol;
//	NP_Vaccum_OnOff_Toggle->On_Output[1] =	M_Y_Sepa_Lower_ARC_Ejector_Vac_On;	//M_Y_Sepa_ARC_Lower_Up_Sol;

//	NP_Vaccum_OnOff_Toggle->Off_Output[0] =	M_Y_Sepa_Upper_ARC_Ejector_Vac_Off;	//M_Y_Sepa_ARC_Upper_Dn_Sol;
//	NP_Vaccum_OnOff_Toggle->Off_Output[1] =	M_Y_Sepa_Lower_ARC_Ejector_Vac_Off;	//M_Y_Sepa_ARC_Lower_Dn_Sol;

//	NP_Vaccum_OnOff_Toggle->Bool_Vac = 1;

//// **********		NP ARC Sepa Cutter				**********		//
//	tTimerBTN* NP_ARC_Sepa_Cutter = TimerBTN_init();
//	//NP_ARC_Sepa_Cutter->IFBtn.pPMACAddr = M_X_ARC_NP_BTN_Plate_Sepa_Cutting;
//	NP_ARC_Sepa_Cutter->IFBtn.Key = KEY_BIT3;
//	NP_ARC_Sepa_Cutter->IFBtn.pPMACAddr = (char*)pushm + 8200;
//	NP_ARC_Sepa_Cutter->IFBtn.iInterlock_Lamp = M_NP_BTN_Interlock + 10;

//	NP_ARC_Sepa_Cutter->output[0] = M_Y_Sepa_ARC_Upper_Cutting_FWD_Sol; //M_Y_Sepa_ARC_Upper_Cutting_FWD_Sol;
//	NP_ARC_Sepa_Cutter->output[1] = M_Y_Sepa_ARC_Lower_Cutting_FWD_Sol; //M_Y_Sepa_ARC_Lower_Cutting_FWD_Sol;

//	NP_ARC_Sepa_Cutter->Delay = 3000;

//// **********		NP ARC Cut Stopper				**********		//
//// 토글 버튼인데 조건이 필요 ( 상부, 하부 선택 스위치 )
//// 흡착 / 블로우+해제
//	tNP_ToggleBTN* NP_ARC_Cut_Stopper = NP_Toggle_Init();
//	//NP_ARC_Cut_Stopper->IFBtn.pPMACAddr = M_X_ARC_NP_BTN_Plate_Stopper_Clamp;
//	NP_ARC_Cut_Stopper->IFBtn.Key = KEY_BIT4;
//	NP_ARC_Cut_Stopper->IFBtn.pPMACAddr = (char*)pushm + 8200;
//	NP_ARC_Cut_Stopper->IFBtn.iInterlock_Lamp = M_NP_BTN_Interlock + 11;

//	NP_ARC_Cut_Stopper->On_Output[0] =M_Y_Sepa_ARC_Upper_Cutting_FWD_Sol; //M_Y_Sepa_ARC_Upper_Cutting_FWD_Sol;
//	NP_ARC_Cut_Stopper->On_Output[1] =M_Y_Sepa_ARC_Lower_Cutting_FWD_Sol; //M_Y_Sepa_ARC_Lower_Cutting_FWD_Sol;

//// **********		NP ARC Plate Up				**********		//
//// 토글 버튼인데 조건이 필요 ( 상부, 하부 선택 스위치 )
//// 흡착 / 블로우+해제
//	tNP_Plate_BTN* NP_Plate_Up = NP_Plate_Each_Btn_Init();
//	//NP_Plate_Up->IFBtn.pPMACAddr = M_X_ARC_NP_BTN_Plate_Up_Dn;
//	NP_Plate_Up->IFBtn.Key = KEY_BIT5;
//	NP_Plate_Up->IFBtn.pPMACAddr = (char*)pushm + 8200;
//	NP_Plate_Up->IFBtn.iInterlock_Lamp = M_NP_BTN_Interlock + 8;

//	NP_Plate_Up->On_Output[0] =	M_Y_Sepa_ARC_Upper_Up_Sol;
//	NP_Plate_Up->On_Output[1] =	M_Y_Sepa_ARC_Lower_Up_Sol;

//	NP_Plate_Up->Off_Output[0] = M_Y_Sepa_ARC_Upper_Dn_Sol;
//	NP_Plate_Up->Off_Output[1] = M_Y_Sepa_ARC_Lower_Dn_Sol;

//	NP_Plate_Up->On_Number = Sel_Check(NP_Plate_Up->On_Output);
//	NP_Plate_Up->Off_Number = Sel_Check(NP_Plate_Up->Off_Output);

//// **********		NP ARC Plate Down				**********		//
//// 토글 버튼인데 조건이 필요 ( 상부, 하부 선택 스위치 )
//// 흡착 / 블로우+해제
//	tNP_Plate_BTN* NP_Plate_Down = NP_Plate_Each_Btn_Init();
//	//NP_Plate_Down->IFBtn.pPMACAddr = M_X_ARC_NP_Plate_Down;
//	NP_Plate_Down->IFBtn.Key = KEY_BIT6;
//	NP_Plate_Down->IFBtn.pPMACAddr = (char*)pushm + 8200;
//	NP_Plate_Down->IFBtn.iInterlock_Lamp = M_NP_BTN_Interlock + 9;

//	NP_Plate_Down->On_Output[0] = M_Y_Sepa_ARC_Upper_Dn_Sol;
//	NP_Plate_Down->On_Output[1] = M_Y_Sepa_ARC_Lower_Dn_Sol;

//	NP_Plate_Down->Off_Output[0] = M_Y_Sepa_ARC_Upper_Up_Sol;
//	NP_Plate_Down->Off_Output[1] = M_Y_Sepa_ARC_Lower_Up_Sol;

//	NP_Plate_Down->On_Number = Sel_Check(NP_Plate_Down->On_Output);
//	NP_Plate_Down->Off_Number = Sel_Check(NP_Plate_Down->Off_Output);

//// **********		NP Unwinder Rotation				**********		//
//	tJogBTN* NP_Unwinder_Jog_Plus = JogBTN_init();	
//	//NP_Unwinder_Jog_Plus->IFBtn.pPMACAddr = M_X_ARC_NP_BTN_Unwinder_Rotation;
//	NP_Unwinder_Jog_Plus->IFBtn.Key = KEY_BIT7;
//	NP_Unwinder_Jog_Plus->IFBtn.pPMACAddr = (char*)pushm + 8200;
//	NP_Unwinder_Jog_Plus->IFBtn.iInterlock_Lamp = M_NP_BTN_Interlock + 6;
//	NP_Unwinder_Jog_Plus->IFBtn.pfnAct = NP_JogAct;

//	NP_Unwinder_Jog_Plus->Direction = Dir_Plus;

//// **********		NP Unwinder Re.Rotation				**********		//
//	tJogBTN* NP_Unwinder_Jog_Minus = JogBTN_init();	
//	//NP_Unwinder_Jog_Minus->IFBtn.pPMACAddr = M_X_ARC_NP_BTN_Unwinder_Re_Rotation;
//	NP_Unwinder_Jog_Minus->IFBtn.Key = KEY_BIT0;
//	NP_Unwinder_Jog_Minus->IFBtn.pPMACAddr = (char*)pushm + 8201;
//	NP_Unwinder_Jog_Minus->IFBtn.iInterlock_Lamp = M_NP_BTN_Interlock + 7;
//	NP_Unwinder_Jog_Minus->IFBtn.pfnAct = NP_JogAct;

//	NP_Unwinder_Jog_Minus->Direction = Dir_Minus;

//// **********		이오나이저 #1,2,3 블로우 오프				**********		//
	tRadioBTN* Ionizer_No1_2_3_Blow_Off = Radio_init();		// [Double Sol]
	Ionizer_No1_2_3_Blow_Off->IFBtn.Key = KEY_BIT0;
	Ionizer_No1_2_3_Blow_Off->IFBtn.pPMACAddr = (char*)pushm + 44619;
	Ionizer_No1_2_3_Blow_Off->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 25;

	Ionizer_No1_2_3_Blow_Off->On_Output[0] = M_Y_Sepa_Ionizer_1_2_3_Blow_Off;

	Ionizer_No1_2_3_Blow_Off->Lamp	= M_ARC_BTN_Lamp + 25;
	Ionizer_No1_2_3_Blow_Off->On_Number = Sel_Check(Ionizer_No1_2_3_Blow_Off->On_Output);
	Ionizer_No1_2_3_Blow_Off->Off_Number = Sel_Check(Ionizer_No1_2_3_Blow_Off->Off_Output);
	Ionizer_No1_2_3_Blow_Off->Sen_Number = Sel_Check(Ionizer_No1_2_3_Blow_Off->Sensor);

//// **********		이오나이저 #1,2,3 블로우 온			**********		//
	tRadioBTN* Ionizer_No1_2_3_Blow_On = Radio_init();		// [Double Sol]
	Ionizer_No1_2_3_Blow_On->IFBtn.Key = KEY_BIT1;
	Ionizer_No1_2_3_Blow_On->IFBtn.pPMACAddr = (char*)pushm + 44619;
	Ionizer_No1_2_3_Blow_On->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 24;

	Ionizer_No1_2_3_Blow_On->Off_Output[0] = M_Y_Sepa_Ionizer_1_2_3_Blow_Off;

	Ionizer_No1_2_3_Blow_On->Lamp	= M_ARC_BTN_Lamp + 24;
	Ionizer_No1_2_3_Blow_On->On_Number = Sel_Check(Ionizer_No1_2_3_Blow_On->On_Output);
	Ionizer_No1_2_3_Blow_On->Off_Number = Sel_Check(Ionizer_No1_2_3_Blow_On->Off_Output);
	Ionizer_No1_2_3_Blow_On->Sen_Number = Sel_Check(Ionizer_No1_2_3_Blow_On->Sensor);


//// **********		이오나이저 #1 오프				**********		//
	tRadioBTN* Ionizer_No1_Remote_Off = Radio_init();		// [Double Sol]
	Ionizer_No1_Remote_Off->IFBtn.Key = KEY_BIT2;
	Ionizer_No1_Remote_Off->IFBtn.pPMACAddr = (char*)pushm + 44619;
	Ionizer_No1_Remote_Off->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 27;

	Ionizer_No1_Remote_Off->On_Output[0] = M_Y_Sepa_Ionizer_1_Remote_Off;

	Ionizer_No1_Remote_Off->Lamp	= M_ARC_BTN_Lamp + 27;
	Ionizer_No1_Remote_Off->On_Number = Sel_Check(Ionizer_No1_Remote_Off->On_Output);
	Ionizer_No1_Remote_Off->Off_Number = Sel_Check(Ionizer_No1_Remote_Off->Off_Output);
	Ionizer_No1_Remote_Off->Sen_Number = Sel_Check(Ionizer_No1_Remote_Off->Sensor);


//// **********		이오나이저 #1 온				**********		//
	tRadioBTN* Ionizer_No1_Remote_On = Radio_init();		// [Double Sol]
	Ionizer_No1_Remote_On->IFBtn.Key = KEY_BIT3;
	Ionizer_No1_Remote_On->IFBtn.pPMACAddr = (char*)pushm + 44619;
	Ionizer_No1_Remote_On->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 26;
	Ionizer_No1_Remote_On->Sensor[0] = M_X_Sepa_Ionizer_1_Run;

	Ionizer_No1_Remote_On->Off_Output[0] = M_Y_Sepa_Ionizer_1_Remote_Off;

	Ionizer_No1_Remote_On->Lamp	= M_ARC_BTN_Lamp + 26;
	Ionizer_No1_Remote_On->On_Number = Sel_Check(Ionizer_No1_Remote_On->On_Output);
	Ionizer_No1_Remote_On->Off_Number = Sel_Check(Ionizer_No1_Remote_On->Off_Output);
	Ionizer_No1_Remote_On->Sen_Number = Sel_Check(Ionizer_No1_Remote_On->Sensor);

//// **********		이오나이저 #2 오프				**********		//
	tRadioBTN* Ionizer_No2_Remote_Off = Radio_init();		// [Double Sol]
	Ionizer_No2_Remote_Off->IFBtn.Key = KEY_BIT4;
	Ionizer_No2_Remote_Off->IFBtn.pPMACAddr = (char*)pushm + 44619;
	Ionizer_No2_Remote_Off->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 29;

	Ionizer_No2_Remote_Off->On_Output[0] = M_Y_Sepa_Ionizer_2_Remote_Off;

	Ionizer_No2_Remote_Off->Lamp	= M_ARC_BTN_Lamp + 29;
	Ionizer_No2_Remote_Off->On_Number = Sel_Check(Ionizer_No2_Remote_Off->On_Output);
	Ionizer_No2_Remote_Off->Off_Number = Sel_Check(Ionizer_No2_Remote_Off->Off_Output);
	Ionizer_No2_Remote_Off->Sen_Number = Sel_Check(Ionizer_No2_Remote_Off->Sensor);


//// **********		이오나이저 #2 온				**********		//
	tRadioBTN* Ionizer_No2_Remote_On = Radio_init();		// [Double Sol]
	Ionizer_No2_Remote_On->IFBtn.Key = KEY_BIT5;
	Ionizer_No2_Remote_On->IFBtn.pPMACAddr = (char*)pushm + 44619;
	Ionizer_No2_Remote_On->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 28;
	Ionizer_No2_Remote_On->Sensor[0] = M_X_Sepa_Ionizer_2_Run;

	Ionizer_No2_Remote_On->Off_Output[0] = M_Y_Sepa_Ionizer_2_Remote_Off;

	Ionizer_No2_Remote_On->Lamp	= M_ARC_BTN_Lamp + 28;
	Ionizer_No2_Remote_On->On_Number = Sel_Check(Ionizer_No2_Remote_On->On_Output);
	Ionizer_No2_Remote_On->Off_Number = Sel_Check(Ionizer_No2_Remote_On->Off_Output);
	Ionizer_No2_Remote_On->Sen_Number = Sel_Check(Ionizer_No2_Remote_On->Sensor);

//// **********		이오나이저 #3 오프				**********		//
	tRadioBTN* Ionizer_No3_Remote_Off = Radio_init();		// [Double Sol]
	Ionizer_No3_Remote_Off->IFBtn.Key = KEY_BIT6;
	Ionizer_No3_Remote_Off->IFBtn.pPMACAddr = (char*)pushm + 44619;
	Ionizer_No3_Remote_Off->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 31;

	Ionizer_No3_Remote_Off->On_Output[0] = M_Y_Sepa_Ionizer_3_Remote_Off;

	Ionizer_No3_Remote_Off->Lamp = M_ARC_BTN_Lamp + 31;
	Ionizer_No3_Remote_Off->On_Number = Sel_Check(Ionizer_No3_Remote_Off->On_Output);
	Ionizer_No3_Remote_Off->Off_Number = Sel_Check(Ionizer_No3_Remote_Off->Off_Output);
	Ionizer_No3_Remote_Off->Sen_Number = Sel_Check(Ionizer_No3_Remote_Off->Sensor);


//// **********		이오나이저 #3 온				**********		//
	tRadioBTN* Ionizer_No3_Remote_On = Radio_init();		// [Double Sol]
	Ionizer_No3_Remote_On->IFBtn.Key = KEY_BIT7;
	Ionizer_No3_Remote_On->IFBtn.pPMACAddr = (char*)pushm + 44619;
	Ionizer_No3_Remote_On->IFBtn.iInterlock_Lamp = M_ARC_BTN_Interlock + 30;
	Ionizer_No3_Remote_On->Sensor[0] = M_X_Sepa_Ionizer_3_Run;

	Ionizer_No3_Remote_On->Off_Output[0] = M_Y_Sepa_Ionizer_3_Remote_Off;

	Ionizer_No3_Remote_On->Lamp	= M_ARC_BTN_Lamp + 30;
	Ionizer_No3_Remote_On->On_Number = Sel_Check(Ionizer_No3_Remote_On->On_Output);
	Ionizer_No3_Remote_On->Off_Number = Sel_Check(Ionizer_No3_Remote_On->Off_Output);
	Ionizer_No3_Remote_On->Sen_Number = Sel_Check(Ionizer_No3_Remote_On->Sensor);



// **********		1st Unloader 그립				**********		//

	tRadioBTN* Unloader_Grip = Radio_init();		// [Double Sol]
	Unloader_Grip->IFBtn.Key = KEY_BIT0;
	Unloader_Grip->IFBtn.pPMACAddr = (char*)pushm + 44604;
	Unloader_Grip->IFBtn.iInterlock_Lamp = M_UnWinder_BTN_Interlock + 6;
	
	Unloader_Grip->Sensor[0] = M_X_1st_Unloader_Grip_Detect_Sensor;

	Unloader_Grip->On_Output[0] = M_Y_1st_Unloader_Grip_Sol;
	
	Unloader_Grip->Off_Output[0] = M_Y_1st_Unloader_UnGrip_Sol;

	Unloader_Grip->Lamp	= M_UnWinder_BTN_Lamp + 9;
	Unloader_Grip->On_Number = Sel_Check(Unloader_Grip->On_Output);
	Unloader_Grip->Off_Number = Sel_Check(Unloader_Grip->Off_Output);
	Unloader_Grip->Sen_Number = Sel_Check(Unloader_Grip->Sensor);

// **********		1st Unloader 언그립				**********		//
	tRadioBTN* Unloader_UnGrip = Radio_init();		// [Double Sol]
	Unloader_UnGrip->IFBtn.Key = KEY_BIT1;
	Unloader_UnGrip->IFBtn.pPMACAddr = (char*)pushm + 44604;
	Unloader_UnGrip->IFBtn.iInterlock_Lamp = M_UnWinder_BTN_Interlock + 7;

	Unloader_UnGrip->Sensor[0] = M_X_1st_Unloader_UnGrip_Detect_Sensor;

	Unloader_UnGrip->On_Output[0] = M_Y_1st_Unloader_UnGrip_Sol;
	Unloader_UnGrip->Off_Output[0] = M_Y_1st_Unloader_Grip_Sol;

	Unloader_UnGrip->Lamp	= M_UnWinder_BTN_Lamp + 10;
	Unloader_UnGrip->On_Number = Sel_Check(Unloader_UnGrip->On_Output);
	Unloader_UnGrip->Off_Number = Sel_Check(Unloader_UnGrip->Off_Output);
	Unloader_UnGrip->Sen_Number = Sel_Check(Unloader_UnGrip->Sensor);

	// **********		Upper UnWinder Jog Plus Cmd		**********		//
	tJogBTN* Upper_Unwinder_JogPlus = JogBTN_init();	
	Upper_Unwinder_JogPlus->IFBtn.Key = KEY_BIT2;
	Upper_Unwinder_JogPlus->IFBtn.pPMACAddr = (char*)pushm + 44604;

	Upper_Unwinder_JogPlus->MoveCmd = "#23j+";
	Upper_Unwinder_JogPlus->StopCmd = "#23j/";
	Upper_Unwinder_JogPlus->MotorNum = 23;

	// **********		Upper UnWinder Jog Minus Cmd		**********		//
	tJogBTN* Upper_Unwinder_JogMinus = JogBTN_init();		
	Upper_Unwinder_JogMinus->IFBtn.Key = KEY_BIT3;
	Upper_Unwinder_JogMinus->IFBtn.pPMACAddr = (char*)pushm + 44604;
	Upper_Unwinder_JogMinus->MoveCmd = "#23j-";
	Upper_Unwinder_JogMinus->StopCmd = "#23j/";
	Upper_Unwinder_JogMinus->MotorNum = 23;


	// **********		Lower UnWinder Jog Plus Cmd		**********		//
	tJogBTN* Lower_Unwinder_JogPlus = JogBTN_init();		
	Lower_Unwinder_JogPlus->IFBtn.Key = KEY_BIT4;
	Lower_Unwinder_JogPlus->IFBtn.pPMACAddr = (char*)pushm + 44604;
	Lower_Unwinder_JogPlus->MoveCmd = "#24j+";
	Lower_Unwinder_JogPlus->StopCmd = "#24j/";
	Lower_Unwinder_JogPlus->MotorNum = 24;


	// **********		Lower UnWinder Jog Minus Cmd		**********		//
	tJogBTN* Lower_Unwinder_JogMinus = JogBTN_init();		
	Lower_Unwinder_JogMinus->IFBtn.Key = KEY_BIT5;
	Lower_Unwinder_JogMinus->IFBtn.pPMACAddr = (char*)pushm + 44604;
	Lower_Unwinder_JogMinus->MoveCmd = "#24j-";
	Lower_Unwinder_JogMinus->StopCmd = "#24j/";
	Lower_Unwinder_JogMinus->MotorNum = 24;


	// 서보댄서 ON						44604		KEY_BIT6			 M_UnWinder_BTN_Lamp + 4

	// 서보댄서 OFF						44604		KEY_BIT7			 M_UnWinder_BTN_Lamp + 5


// **********		1st Unloader 그립퍼 블로우				**********		//

	tRadioBTN* Unloader_Grip_Blow_On = Radio_init();		// [Double Sol]
	Unloader_Grip_Blow_On->IFBtn.Key = KEY_BIT0;
	Unloader_Grip_Blow_On->IFBtn.pPMACAddr = (char*)pushm + 44612;
	Unloader_Grip_Blow_On->IFBtn.iInterlock_Lamp = M_UnWinder_BTN_Interlock + 8;


	Unloader_Grip_Blow_On->On_Output[0] = M_Y_1st_Unloader_JR_Grip_Blow_Sol;

	Unloader_Grip_Blow_On->Lamp	= M_UnWinder_BTN_Lamp + 11;
	Unloader_Grip_Blow_On->On_Number = Sel_Check(Unloader_Grip_Blow_On->On_Output);
	Unloader_Grip_Blow_On->Off_Number = Sel_Check(Unloader_Grip_Blow_On->Off_Output);
	Unloader_Grip_Blow_On->Sen_Number = Sel_Check(Unloader_Grip_Blow_On->Sensor);


// **********		1st Unloader 그립퍼 블로우 해제				**********		//
	tRadioBTN* Unloader_Grip_Blow_Off = Radio_init();		// [Double Sol]
	Unloader_Grip_Blow_Off->IFBtn.Key = KEY_BIT1;
	Unloader_Grip_Blow_Off->IFBtn.pPMACAddr = (char*)pushm + 44612;
	Unloader_Grip_Blow_Off->IFBtn.iInterlock_Lamp = M_UnWinder_BTN_Interlock + 9;

	Unloader_Grip_Blow_Off->Off_Output[0] = M_Y_1st_Unloader_JR_Grip_Blow_Sol;

	Unloader_Grip_Blow_Off->Lamp	= M_UnWinder_BTN_Lamp + 12;
	Unloader_Grip_Blow_Off->On_Number = Sel_Check(Unloader_Grip_Blow_Off->On_Output);
	Unloader_Grip_Blow_Off->Off_Number = Sel_Check(Unloader_Grip_Blow_Off->Off_Output);
	Unloader_Grip_Blow_Off->Sen_Number = Sel_Check(Unloader_Grip_Blow_Off->Sensor);

// **********		Serovo Dancer On	**********		//
	tJogBTN* Serovo_Dancer_On = JogBTN_init();	
	Serovo_Dancer_On->IFBtn.Key = KEY_BIT6;
	Serovo_Dancer_On->IFBtn.pPMACAddr = (char*)pushm + 44604;
	Serovo_Dancer_On->IFBtn.iInterlock_Lamp = M_UnWinder_BTN_Interlock + 4;
	Serovo_Dancer_On->Lamp	= M_UnWinder_BTN_Lamp + 4;
	Serovo_Dancer_On->Lamp_1 = M_UnWinder_BTN_Lamp + 5;
	Serovo_Dancer_On->MoveCmd = "#16j/";
	Serovo_Dancer_On->MotorNum = 16;

// **********		Serovo Dancer Off	**********		//
	tJogBTN* Serovo_Dancer_Off = JogBTN_init();	
	Serovo_Dancer_Off->IFBtn.Key = KEY_BIT7;
	Serovo_Dancer_Off->IFBtn.pPMACAddr = (char*)pushm + 44604;
	Serovo_Dancer_Off->IFBtn.iInterlock_Lamp = M_UnWinder_BTN_Interlock + 5;
	Serovo_Dancer_Off->Lamp	= M_UnWinder_BTN_Lamp + 4;
	Serovo_Dancer_Off->Lamp_1	= M_UnWinder_BTN_Lamp + 5;
	Serovo_Dancer_Off->MoveCmd = "#16out0";
	Serovo_Dancer_Off->MotorNum = 16;

// **********	파티션 하강 		**********	[ 참조 : 26.05.06 격벽 파티션 추가 ]		//	o
	tRadioBTN* Partition_Down = Radio_init();		// [Double Sol]
	Partition_Down->IFBtn.Key = KEY_BIT0;
	Partition_Down->IFBtn.pPMACAddr = (char*)pushm + 44606;
	Partition_Down->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 25;
	Partition_Down->Sensor[0] = M_X_Cathode_Belt_Partition_Down_Sensor;
	Partition_Down->Sensor[1] = M_X_Anode_Belt_Partition_Down_Sensor;
	Partition_Down->On_Output[0] = M_Y_An_Ca_Partition_Down_Sol;
	Partition_Down->Off_Output[0] = M_Y_An_Ca_Partition_Up_Sol;
	Partition_Down->Lamp	= M_Stack_BTN_Lamp + 27;

	Partition_Down->On_Number = Sel_Check(Partition_Down->On_Output);
	Partition_Down->Off_Number = Sel_Check(Partition_Down->Off_Output);
	Partition_Down->Sen_Number = Sel_Check(Partition_Down->Sensor);

// **********	파티션 상승		**********	[ 참조 : 26.05.06 격벽 파티션 추가 ]		//
	tRadioBTN* Partition_Up = Radio_init();		// [Double Sol]
	Partition_Up->IFBtn.Key = KEY_BIT1;
	Partition_Up->IFBtn.pPMACAddr = (char*)pushm + 44606;
	Partition_Up->IFBtn.iInterlock_Lamp = M_Stack_BTN_Interlock + 26;
	Partition_Up->Sensor[0] = M_X_Cathode_Belt_Partition_Up_Sensor;
	Partition_Up->Sensor[1] = M_X_Anode_Belt_Partition_Up_Sensor;

	Partition_Up->On_Output[0] = M_Y_An_Ca_Partition_Up_Sol;
	Partition_Up->Off_Output[0] = M_Y_An_Ca_Partition_Down_Sol;

	Partition_Up->Lamp	= M_Stack_BTN_Lamp + 28;
	Partition_Up->On_Number = Sel_Check(Partition_Up->On_Output);
	Partition_Up->Off_Number = Sel_Check(Partition_Up->Off_Output);
	Partition_Up->Sen_Number = Sel_Check(Partition_Up->Sensor);
	//// **********		토글 버튼				**********		//3 
	//tToggleBTN* Plate_ARC_Reset = Toggle_init();		// [Double Sol]
	//Plate_ARC_Reset->IFBtn.Key = KEY_BIT0;
	//Plate_ARC_Reset->IFBtn.pPMACAddr = (char*)pushm + 44612;
	//Plate_ARC_Reset->output = M_Y_1st_Unloader_JR_Grip_Blow_Sol;
	//Plate_ARC_Reset->Sensor[0]	= M_UnWinder_BTN_Lamp + 12;



//	tTimerBTN* TimerBTN = TimerBTN_init();
//	TimerBTN->IFBtn.Key = 0x1;
//	TimerBTN->IFBtn.pPMACAddr = (char*)pushm + 10001;
//	TimerBTN->output = 5000;
//	TimerBTN->Lamp	= 5555;
//	TimerBTN->Delay = 2000;


	//추가사항
	_BTN[eCa_1stPNP_EjectorVac] = (IBtn*)Ca_1stPNP_EjectorVac;
	_BTN[eCa_1stPNP_EjectorClear] = (IBtn*)Ca_1stPNP_EjectorClear;
	_BTN[eCa_1stPNP_EjectorBlow] = (IBtn*)Ca_1stPNP_EjectorBlow;
	_BTN[eCa_2ndPNP_EjectorVac] = (IBtn*)Ca_2ndPNP_EjectorVac;
	_BTN[eCa_2ndPNP_EjectorClear] = (IBtn*)Ca_2ndPNP_EjectorClear;
	_BTN[eCa_2ndPNP_EjectorBlow] = (IBtn*)Ca_2ndPNP_EjectorBlow;
	_BTN[eCa_AT_EjectorVac] = (IBtn*)Ca_AT_EjectorVac;
	_BTN[eCa_AT_EjectorBlow] = (IBtn*)Ca_AT_EjectorBlow;
	_BTN[eCa_AT_EjectorClear] = (IBtn*)Ca_AT_EjectorClear;

//	// 1번 버튼 관련 데이터들
	_BTN[eCa_AT_ZeroClamp] = (IBtn*)Ca_AT_ZeroClamp;
	_BTN[eCa_AT_ZeroUnClamp] = (IBtn*)Ca_AT_ZeroUnClamp;
	_BTN[eCa_NgPNP_EjectorVac] = (IBtn*)Ca_NgPNP_EjectorVac;
	_BTN[eCa_NgPNP_EjectorClear] = (IBtn*)Ca_NgPNP_EjectorClear;
	_BTN[eCa_NgPNP_EjectorBlow] = (IBtn*)Ca_NgPNP_EjectorBlow;

	//추가사항
	_BTN[eAn_1stPNP_EjectorVac] = (IBtn*)An_1stPNP_EjectorVac;
	_BTN[eAn_1stPNP_EjectorBlow] = (IBtn*)An_1stPNP_EjectorBlow;
	_BTN[eAn_1stPNP_EjectorClear] = (IBtn*)An_1stPNP_EjectorClear;
	_BTN[eAn_2ndPNP_EjectorVac] = (IBtn*)An_2ndPNP_EjectorVac;
	_BTN[eAn_2ndPNP_EjectorBlow] = (IBtn*)An_2ndPNP_EjectorBlow;
	_BTN[eAn_2ndPNP_EjectorClear] = (IBtn*)An_2ndPNP_EjectorClear;
	_BTN[eAn_AT_EjectorVac] = (IBtn*)An_AT_EjectorVac;
	_BTN[eAn_AT_EjectorBlow] = (IBtn*)An_AT_EjectorBlow;
	_BTN[eAn_AT_EjectorClear] = (IBtn*)An_AT_EjectorClear;


	_BTN[eAn_AT_ZeroClamp] = (IBtn*)An_AT_ZeroClamp;
	_BTN[eAn_AT_ZeroUnClamp] = (IBtn*)An_AT_ZeroUnClamp;
	_BTN[eAn_NgPNP_EjectorVac] = (IBtn*)An_NgPNP_EjectorVac;
	_BTN[eAn_NgPNP_EjectorClear] = (IBtn*)An_NgPNP_EjectorClear;
	_BTN[eAn_NgPNP_EjectorBlow] = (IBtn*)An_NgPNP_EjectorBlow;

	_BTN[eFR_Clamp] = (IBtn*)FR_Clamp;
	_BTN[eFR_UnClamp] = (IBtn*)FR_UnClamp;
	_BTN[eFR_Driving_Clamp] = (IBtn*)FR_Driving_Clamp;
	_BTN[eFR_Driving_UnClamp] = (IBtn*)FR_Driving_UnClamp;
	_BTN[eCa_Damper_Clamp] = (IBtn*)Ca_Damper_Clamp;
	_BTN[eCa_Damper_UnClamp] = (IBtn*)Ca_Damper_UnClamp;
	_BTN[eAn_Damper_Clamp] = (IBtn*)An_Damper_Clamp;
	_BTN[eAn_Damper_UnClamp] = (IBtn*)An_Damper_UnClamp;
	_BTN[eST_JobChange_Lock] = (IBtn*)ST_JobChange_Lock;
	_BTN[eST_JobChange_UnLock] = (IBtn*)ST_JobChange_UnLock;
	_BTN[eST_Block_Up] = (IBtn*)ST_Block_Up;
	_BTN[eST_Block_Dn] = (IBtn*)ST_Block_Dn;
	_BTN[eST_EjectorVac] = (IBtn*)ST_EjectorVac;
	_BTN[eST_EjectorClear] = (IBtn*)ST_EjectorClear;
	_BTN[eST_EjectorBlow] = (IBtn*)ST_EjectorBlow;
	_BTN[eSheet_Paper_EjectorVac] = (IBtn*)Sheet_Paper_EjectorVac;
	_BTN[eSheet_Paper_EjectorClear] = (IBtn*)Sheet_Paper_EjectorClear;
	_BTN[eSheet_Paper_EjectorBlow] = (IBtn*)Sheet_Paper_EjectorBlow;
	_BTN[eSepa_Cutter_Up] = (IBtn*)Sepa_Cutter_Up;
	_BTN[eSepa_Cutter_Dn] = (IBtn*)Sepa_Cutter_Dn;

	_BTN[eCutter_Heater_On] = (IBtn*)Cutter_Heater_On;
	_BTN[eCutter_Heater_Off] = (IBtn*)Cutter_Heater_Off;
	_BTN[eSheet_Paper_FWD] = (IBtn*)Sheet_Paper_FWD;
	_BTN[eSheet_Paper_BWD] = (IBtn*)Sheet_Paper_BWD;
	_BTN[eUpper_Unwinder_Lock] = (IBtn*)Upper_Unwinder_Lock;
	_BTN[eUpper_Unwinder_UnLock] = (IBtn*)Upper_Unwinder_UnLock;
	_BTN[eLower_Unwinder_Lock] = (IBtn*)Lower_Unwinder_Lock;
	_BTN[eLower_Unwinder_UnLock] = (IBtn*)Lower_Unwinder_UnLock;

	//_BTN[eARC_Niproll_Clamp] = (IBtn*)ARC_Niproll_Clamp;
	//_BTN[eARC_Niproll_UnClamp] = (IBtn*)ARC_Niproll_UnClamp;
	_BTN[eUpper_ARC_Plate_Up] = (IBtn*)Upper_ARC_Plate_Up;
	_BTN[eUpper_ARC_Plate_Dn] = (IBtn*)Upper_ARC_Plate_Dn;
	_BTN[eLower_ARC_Plate_Up] = (IBtn*)Lower_ARC_Plate_Up;
	_BTN[eLower_ARC_Plate_Dn] = (IBtn*)Lower_ARC_Plate_Dn;
	_BTN[eUpper_ARC_Tilting] = (IBtn*)Upper_ARC_Tilting;
	_BTN[eUpper_ARC_UnTilting] = (IBtn*)Upper_ARC_UnTilting;
	_BTN[eLower_ARC_Tilting] = (IBtn*)Lower_ARC_Tilting;
	_BTN[eLower_ARC_UnTilting] = (IBtn*)Lower_ARC_UnTilting;
	_BTN[eUpper_ARC_Cutter_FWD] = (IBtn*)Upper_ARC_Cutter_FWD;
	_BTN[eUpper_ARC_Cutter_BWD] = (IBtn*)Upper_ARC_Cutter_BWD;
	_BTN[eLower_ARC_Cutter_FWD] = (IBtn*)Lower_ARC_Cutter_FWD;
	_BTN[eLower_ARC_Cutter_BWD] = (IBtn*)Lower_ARC_Cutter_BWD;

	_BTN[eUpper_ARC_Stopper] = (IBtn*)Upper_ARC_Stopper;
	_BTN[eUpper_ARC_UnStopper] = (IBtn*)Upper_ARC_UnStopper;
	_BTN[eLower_ARC_Stopper] = (IBtn*)Lower_ARC_Stopper;
	_BTN[eLower_ARC_UnStopper] = (IBtn*)Lower_ARC_UnStopper;
	_BTN[eUpeer_ARC_EjectorVac] = (IBtn*)Upeer_ARC_EjectorVac;
	_BTN[eUpeer_ARC_EjectorClear] = (IBtn*)Upeer_ARC_EjectorClear;
	_BTN[eUpeer_ARC_EjectorBlow] = (IBtn*)Upeer_ARC_EjectorBlow;
	_BTN[eLower_ARC_EjectorVac] = (IBtn*)Lower_ARC_EjectorVac;
	_BTN[eLower_ARC_EjectorClear] = (IBtn*)Lower_ARC_EjectorClear;
	_BTN[eLower_ARC_EjectorBlow] = (IBtn*)Lower_ARC_EjectorBlow;
	_BTN[eIonizer_No1_2_3_Blow_Off] = (IBtn*)Ionizer_No1_2_3_Blow_Off;
	_BTN[eIonizer_No1_2_3_Blow_On] = (IBtn*)Ionizer_No1_2_3_Blow_On;
	_BTN[eIonizer_No1_Remote_Off]	= (IBtn*)Ionizer_No1_Remote_Off;
	_BTN[eIonizer_No1_Remote_On]	= (IBtn*)Ionizer_No1_Remote_On;
	_BTN[eIonizer_No2_Remote_Off]	= (IBtn*)Ionizer_No2_Remote_Off;
	_BTN[eIonizer_No2_Remote_On]	= (IBtn*)Ionizer_No2_Remote_On;
	_BTN[eIonizer_No3_Remote_Off]	= (IBtn*)Ionizer_No3_Remote_Off;
	_BTN[eIonizer_No3_Remote_On]	= (IBtn*)Ionizer_No3_Remote_On;
	// 네임플레이트 버튼 추가
//	_BTN[eNP_ARC_Tilting] = (IBtn*)NP_Tilting_Toggle;
//	_BTN[eNP_ARC_Unwinder_Lock_Unlock] = (IBtn*)NP_UnWinder_LockUnlock_Toggle;
//	_BTN[eNP_ARC_Plate_Vaccum] = (IBtn*)NP_Vaccum_OnOff_Toggle;
//	_BTN[eNP_ARC_Sepa_Cutter] = (IBtn*)NP_ARC_Sepa_Cutter;
//	_BTN[eNP_ARC_Cut_Stopper] = (IBtn*)NP_ARC_Cut_Stopper;
//	_BTN[eNP_ARC_Plate_Up] = (IBtn*)NP_Plate_Up;
//	_BTN[eNP_ARC_Plate_Down] = (IBtn*)NP_Plate_Down;
//	_BTN[eNP_ARC_Unwinder_Rotation] = (IBtn*)NP_Unwinder_Jog_Plus;
//	_BTN[eNP_ARC_Unwinder_ReRotation] = (IBtn*)NP_Unwinder_Jog_Minus;

	_BTN[eUnloader_Grip] = (IBtn*)Unloader_Grip;
	_BTN[eUnloader_UnGrip] = (IBtn*)Unloader_UnGrip;
	_BTN[eUpper_Unwinder_JogPlus] = (IBtn*)Upper_Unwinder_JogPlus;
	_BTN[eUpper_Unwinder_JogMinus] = (IBtn*)Upper_Unwinder_JogMinus;
	_BTN[eLower_Unwinder_JogPlus] = (IBtn*)Lower_Unwinder_JogPlus;
	_BTN[eLower_Unwinder_JogMinus] = (IBtn*)Lower_Unwinder_JogMinus;
	_BTN[eUnloader_Grip_Blow_On] = (IBtn*)Unloader_Grip_Blow_On;
	_BTN[eUnloader_Grip_Blow_Off] = (IBtn*)Unloader_Grip_Blow_Off;
	_BTN[eSerovo_Dancer_On] = (IBtn*)Serovo_Dancer_On;
	_BTN[eSerovo_Dancer_Off] = (IBtn*)Serovo_Dancer_Off;
	_BTN[ePartition_Down] = (IBtn*)Partition_Down;
	_BTN[ePartition_Up] = (IBtn*)Partition_Up;


	printf("Init Compleute\n");
}

int Sel_Check(unsigned int Arr[])
{
	int i = 0;
	int Numb = 0;
	for(i = 0; i < Arr_Numb; i++)
	{
		if(Arr[i] != 0)
		{
			Numb++;
		}
	}
	//printf("Return Numb : %d\n", Numb);
	return Numb;
}


tPushBTN* Push_init(void)
{
	tPushBTN* BTN = malloc(sizeof(tPushBTN));
	BTN->IFBtn.pPMACAddr = NULL;
	BTN->IFBtn.pfnAct = PushAct;
	BTN->IFBtn.pfnStatus = PushStatus;
	BTN->IFBtn.bPrev = false;
	BTN->IFBtn.iInterlock_Lamp = 0;
	BTN->IFBtn.status = NONE;
	BTN->IFBtn.Key = 0;
	BTN->Lamp = 0;
	BTN->output = 0;
	BTN->Sensor[0] = 0;
	BTN->Sensor[1] = 0;

	return BTN;
}

tRadioBTN* Radio_init(void)
{
	int i = 0;
	tRadioBTN* BTN = malloc(sizeof(tRadioBTN));
	BTN->IFBtn.pPMACAddr = NULL;
	BTN->IFBtn.pfnAct = RadiolAct;
	BTN->IFBtn.pfnStatus = RadioStatus;
	BTN->IFBtn.bPrev = false;
	BTN->IFBtn.iInterlock_Lamp = 0;
	BTN->IFBtn.status = NONE;
	BTN->IFBtn.Key = 0;
	for(i= 0; i < Arr_Numb; i++)
	{
		BTN->On_Output[i] = 0;
		BTN->Off_Output[i] = 0;
		BTN->Sensor[i] = 0;
	}

	BTN->On_Number = 0;
	BTN->Off_Number = 0;
	BTN->Sen_Number = 0;

	return BTN;
}


tToggleBTN* Toggle_init(void)
{
	tToggleBTN* BTN = malloc(sizeof(tToggleBTN));
	BTN->IFBtn.pPMACAddr = NULL;
	BTN->IFBtn.pfnAct = ToggleAct;
	BTN->IFBtn.pfnStatus = ToggleStatus;
	BTN->IFBtn.bPrev = false;
	BTN->IFBtn.iInterlock_Lamp = 0;
	BTN->IFBtn.status = NONE;
	BTN->IFBtn.Key = 0;
	BTN->output = 0;
	BTN->Sensor[0] = 0;
	BTN->Sensor[1] = 0;
	return BTN;
}

tTimerBTN* TimerBTN_init(void)
{
	tTimerBTN* BTN = malloc(sizeof(tTimerBTN));
	BTN->IFBtn.pPMACAddr = NULL;
	BTN->IFBtn.pfnAct = TimerAct;
	BTN->IFBtn.pfnStatus = TimerStatus;
	BTN->IFBtn.bPrev = false;
	BTN->IFBtn.iInterlock_Lamp = 0;
	BTN->IFBtn.status = NONE;
	BTN->IFBtn.Key = 0;
	BTN->output[0] = 0;
	BTN->output[1] = 0;
	BTN->Delay = 0;
	BTN->begin.tv_sec = 0;
	BTN->begin.tv_nsec = 0;
	return BTN;
}

tJogBTN* JogBTN_init(void)
{
	tJogBTN* BTN = malloc(sizeof(tJogBTN));
	BTN->IFBtn.pPMACAddr = NULL;
	BTN->IFBtn.pfnAct = JogAct;
	BTN->IFBtn.pfnStatus = JogStatus;
	BTN->IFBtn.bPrev = false;
	BTN->IFBtn.iInterlock_Lamp = 0;
	BTN->IFBtn.status = NONE;
	BTN->IFBtn.Key = 0;
	BTN->MoveCmd = 0;
	BTN->StopCmd = 0;
	BTN->Direction = 0;
	return BTN;
}


tNP_ToggleBTN* NP_Toggle_Init(void)
{
	int i = 0;
	tNP_ToggleBTN* BTN = malloc(sizeof(tNP_ToggleBTN));
	BTN->IFBtn.pPMACAddr = NULL;
	BTN->IFBtn.pfnAct = NP_ToggleAct;
	BTN->IFBtn.pfnStatus = 0;
	BTN->IFBtn.bPrev = false;
	BTN->IFBtn.iInterlock_Lamp = 0;
	BTN->IFBtn.status = NONE;
	BTN->IFBtn.Key = 0;
	for(i= 0; i < Arr_Numb; i++)
	{
		BTN->On_Output[i] = 0;
		BTN->Off_Output[i] = 0;
	}
	BTN->Bool_Vac = 0;
	return BTN;
}
tNP_Plate_BTN* NP_Plate_Each_Btn_Init(void)
{
	int i = 0;
	tNP_Plate_BTN* BTN = malloc(sizeof(tNP_Plate_BTN));
	BTN->IFBtn.pPMACAddr = NULL;
	BTN->IFBtn.pfnAct = NP_Plate_Each_Btn;
	BTN->IFBtn.pfnStatus = 0;
	BTN->IFBtn.bPrev = false;
	BTN->IFBtn.iInterlock_Lamp = 0;
	BTN->IFBtn.status = NONE;
	BTN->IFBtn.Key = 0;
	for(i= 0; i < Arr_Numb; i++)
	{
		BTN->On_Output[i] = 0;
	}
	BTN->Bool_Vac = 0;
	return BTN;
}

//tSelSwitchBTN* SelSwitchAct(void) 
//{
//	tSelSwitchBTN* BTN = malloc(sizeof(tSelSwitchBTN));
//	BTN->IFBtn.pPMACAddr = NULL;
//	BTN->IFBtn.pfnAct = NULL;
//	BTN->IFBtn.pfnStatus = SelSwitchStatus;
//	BTN->IFBtn.bPrev = false;
//	BTN->IFBtn.iInterlock_Lamp = 0;
//	BTN->IFBtn.status = NONE;
//	BTN->IFBtn.Key = 0;
//	BTN->SelMode = 0;

//	return BTN;
//}