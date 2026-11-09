

#define N_Data			0
#define N_Time			1

#define n_true			1
#define n_false			0

#define N_Type_Mask		0x0F					// Udata 하위 4bit = 알람 Type ( 1 : 즉시 정지, 2 : 사이클 정지, 3 : 경알람 ) → 비트가 아닌 값으로 비교

#define N_High_Alarm_Emergency_Stop		1
#define N_High_Alarm_Cycle_Stop			2
#define N_Low_Alarm						3
#define N_Priority_None					4

#define N_Double_Start_Addr				1250	// Sys.Ddata[1250] 
												// Sys.Udata[2500],Sys.Udata[2501]
												//	 Data 영역,		시간 영역

// 26. Define_PLC26_Alarm.pmh 와 값 동일하게 유지할 것
#define N_Alarm_Num_Max					670		// 알람 번호 최대 개수	( P_Alarm_duplicate_Check_Arr 크기 )
#define N_Alarm_Max_Cnt					50		// 알람 큐 최대 개수		( Sys.Udata[2500 ~ 2599] )
#define N_Alarm_Req_Time_Udata			3000	// 알람 번호별 발생 시간 Sys.Udata[3000 ~ 3669]

// uint32 us 시간 비교 ( 약 71.6분 주기 wrap 대응 ) : a 가 b 보다 먼저 발생했으면 참
// Macro 선언
#define TIME_BEFORE(a, b)	((int32_t)((uint32_t)(a) - (uint32_t)(b)) < 0)


typedef union {
	//uint64_t	ui_64bit;		// 64비트 Unsigend int 	
    double d_data;				// 64비트 double (Ddata[idx] 매핑용)
	uint32_t i_Alarm_Data[2];	// 32비트 Unsigned int (Udata[2*idx],Udata[2*idx +1] 매핑용)
} SharedDataUnion;
