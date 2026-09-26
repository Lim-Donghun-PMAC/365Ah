/*For more information see notes.txt in the Documentation folder */
#include <gplib.h>
#include <stdio.h>
#include <dlfcn.h>

//#define _PPScriptMode_		// for enum mode, replace this with #define _EnumMode_	

#include "../../Include/pp_proj.h"
//[ 참조 : 25.10.14 Script While Update X ]
// current pos 간소화
// script while 문제점 : 묶여서 실행되는 while구조가 아닌, background script 한바퀴 다 돌고 실행되므로 늦은 동기화 발생
// for문으로 묶어서 한번에 업데이트
#define Max_Motor_Num	48 

void user_plcc()
{
	int i = Max_Motor_Num;				// motor 번호는 1번부터 시작		1~26 local  33 ~ 48 Ecat
	for( i; i != 0 ; i-- )				
	{
		if( i == 32 )					// 32번부터 29번은 빈 칸 // [ 참조 : 클램프 Z1 모터 번호 변경 2025.10.16 ]
			i = 28;
		if( i == 10 )					// 10 , 9번 spare motor // [ 참조 : 클램프 Z1 모터 번호 변경 2025.10.16 ]
			i = 8;
		pshm->P[P_Motor_Current_Pos + i] = ((pshm->Motor[i].ActPos - pshm->Motor[i].HomePos) / ( pshm->Motor[i].PosSf )) / 1000;
	}


}
