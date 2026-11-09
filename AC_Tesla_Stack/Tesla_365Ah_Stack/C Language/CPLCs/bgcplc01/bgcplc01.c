#include <gplib.h>
#include <stdio.h>
#include <dlfcn.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
//----------------------------------------------------------------------------------
// pp_proj.h is the C header for accessing PMAC Global, CSGlobal, Ptr vars
// _PPScriptMode_ for Pmac Script like access global & csglobal
// _EnumMode_ for Pmac enum data type checking on Set & Get global functions
//------------------------------------------------------------------------------------
// #define _PPScriptMode_	// uncomment for Pmac Script type access
 //#define _EnumMode_			// uncomment for Pmac enum data type checking on Set & Get global functions

#include "../../Include/pp_proj.h"
#include "bgcplc01.h"
//======================================================
// Alarm CPLC Start → BgCplc 처리하는 이유: PLC04 → CPLC 1..31 → PLC05 → CPLC 1..31 → PLC06 → CPLC 1..31 → PLC07 → CPLC 1..31 .... → PLC31 → CPLC 1..31 → PLC04 ...
// Bg Scan Scheduling 자주 읽기 위함
// 1. Sys.Ddata[1250] :	알람 생성 갯수
// 2. Sys.Udata[2500] : Alarm 및 Type 정의
// 3. Sys.Udata[2501] : 발생 시간 정의
// 4. Union(공용체)사용.
//------------------------------------------------------
// 1. Insert_Alarm 은 번호별 칸만 기록 ( P_Alarm_duplicate_Check_Arr(n) = Type, Sys.Udata[3000 + n] = 시간 )
//    → RTI PLC(0~3) / Background PLC 어디서 호출해도 공유 카운터 경합 없음
// 2. 큐( Sys.Udata[2500 ~] ) 삽입 및 P_Alarm_Count 증가는 이 CPLC 에서만 수행
// 3. 우선순위( P_Compare_Priority )는 신규 알람 발생 시마다 갱신 ( 상향만 ) → 사이클 정지 후 즉시 정지 알람도 반영
// 4. 첫번째 알람 정렬은 PLC26이 읽기 시작하기 전( P_Alarm_Get_Flag != 1 )에만 수행
//======================================================
void user_plcc()	// [ 참조 : 26.10.26 알람 리팩토링 추가 ]
{
	if( pshm->P[P_NEW_Alarm_USE_Flag] == 1 )
	{
		pshm->P[57]++;
		float f_start_time = GetPtrVar(M_SysTimer);															// for문 timer check
		float f_end_time = 0;
		static bool bool_Visited[N_Alarm_Num_Max];															// Visited Bool Array 
		SharedDataUnion *pData = (SharedDataUnion *)((double *)pushm + (N_Double_Start_Addr));				// pushm을 double 포인터로 캐스팅 후 1250번지 오프셋 위치 지정
		uint32_t *pReqTime = (uint32_t *)pushm + N_Alarm_Req_Time_Udata;									// Sys.Udata[3000] 알람 번호별 발생 시간
		int i_count = (int)pshm->P[P_Alarm_Count];															// i_count 값 
		int i_prev_count = 0; 
		int i = 0, j = 0, i_type = 0, i_prio = N_Priority_None, i_first = 0;
		double temp = 0;

		if( i_count <= 0 )																					// 알람 없음 or 리셋 ( P_Alarm_Count 는 PLC15 리셋에서만 0 )
		{
			i_count = 0;
			memset(bool_Visited, n_false, sizeof(bool_Visited));											// memset visited arr
		}
		if( i_count > N_Alarm_Max_Cnt )																		// 카운팅이 맥스 알람 넘어간다면
			i_count = N_Alarm_Max_Cnt;																		// 맥스 갯수
		
		i_prev_count = i_count;																				// 초기 카운팅값 저장

		//------------------------------------------------------
		// 1. 알람 요청 → 큐 삽입 + 우선순위 계산
		//------------------------------------------------------
		for( i = 0; i < N_Alarm_Num_Max; i++ )
		{
			i_type = (int)pshm->P[P_Alarm_duplicate_Check_Arr + i];											// Type 등록 ( 1. Abort 2. Stop 3. Low )
			if( i_type < N_High_Alarm_Emergency_Stop || i_type > N_Low_Alarm )								// 미발생 ( 리셋 포함 )
			{
				bool_Visited[i] = n_false;																	// false
				continue;
			}

			if( i_type < i_prio )																			// 우선순위는 큐 용량과 상관없이 모든 발생 알람 기준
				i_prio = i_type;																			// type 갱신

			if( bool_Visited[i] || i_count >= N_Alarm_Max_Cnt )
				continue;

			pData[i_count].i_Alarm_Data[N_Data] = i;														// Alarm 삽입
			pData[i_count].i_Alarm_Data[N_Time] = pReqTime[i];												// 발생 시간

			// 시간 비교했을 시, 뒤에 삽입된 알람이 더 빨리 삽입 되었다면
			// 삽입정렬 시작
			for( j = i_count; j > i_prev_count && TIME_BEFORE(pData[j].i_Alarm_Data[N_Time], pData[j - 1].i_Alarm_Data[N_Time]); j-- )
			{																								// 이번 스캔 신규 알람끼리 발생 시간 순 정렬
				temp = pData[j - 1].d_data;																	
				pData[j - 1].d_data = pData[j].d_data;														
				pData[j].d_data = temp;
			}
			bool_Visited[i] = n_true;																		// Visited -> true
			i_count++;																						// count 증가
		}

		if( i_count != i_prev_count )
			pshm->P[P_Alarm_Count] = i_count;																// 알람 갯수 업

		if( i_prio != N_Priority_None && i_prio < (int)pshm->P[P_Compare_Priority] )
			pshm->P[P_Compare_Priority] = i_prio;															// 우선순위 상향만 ( 1 : 즉시 정지 > 2 : 사이클 정지 > 3 : 경알람 )

		//------------------------------------------------------
		// 2. 첫번째 알람 선정 ( PLC26이 읽기 전에만 ) : Type 우선, 같으면 먼저 발생한 알람
		//------------------------------------------------------
		if( i_count > 0 && pshm->P[P_Alarm_Get_Flag] != 1 )
		{
			i_first = 0;																					// 첫번째 IDX
			for( i = 1; i < i_count; i++ )
			{
				int i_cur_data = pData[i].i_Alarm_Data[N_Data] & N_Type_Mask;								// Data Masking
				int i_frist_data = pData[i_first].i_Alarm_Data[N_Data] & N_Type_Mask;						// Data Masking
				if( i_cur_data < i_frist_data || ( i_cur_data == i_frist_data && TIME_BEFORE(pData[i].i_Alarm_Data[N_Time], pData[i_first].i_Alarm_Data[N_Time]) ) )
					i_first = i;
			}
			if( i_first != 0 )
			{
				temp = pData[0].d_data;																		// Alarm Data & Time Temp 저장
				pData[0].d_data = pData[i_first].d_data;													// Alarm Data & Time 첫번째 배열로 이동
				pData[i_first].d_data = temp;																// Alarm Data & Time Temp값 이동
			}
			pshm->P[P_Alarm_Get_Flag] = 1;
		}

		f_end_time = GetPtrVar(M_SysTimer);
		pshm->P[P_Alarm_Sort_Time] = f_end_time - f_start_time;
	}
}
