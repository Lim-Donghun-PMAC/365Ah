#include <gplib.h>
#include <stdio.h>
#include <dlfcn.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <unistd.h>
#include <time.h>


#include "../../Include/pp_proj.h"
//[ 참조 : 25.10.14 Script While Update X ]
// current pos 간소화
// script while 문제점 : 묶여서 실행되는 while구조가 아닌, background script 한바퀴 다 돌고 실행되므로 늦은 동기화 발생
// for문으로 묶어서 한번에 업데이트
#define Max_Motor_Num	48 

#define C_True			1
#define C_Flase			0

//typedef union _Motor_temperature
//{
//	unsigned int i_temperature;
//	float f_temperature;
//}Motor_temp;
//
//Motor_temp DD_Motor_temp[4];

void user_plcc()
{
	//float* ptr = (float*)pushm + 500;
	pshm->P[52]++;						// bgcplc 살았는지 보는 변수
	int i = Max_Motor_Num;				// motor 번호는 1번부터 시작		1~26 local  33 ~ 48 Ecat
	for( i; i != 0 ; i-- )				
	{
		if( i == 32 )					// 32번부터 29번은 빈 칸 // [ 참조 : 클램프 Z1 모터 번호 변경 2025.10.16 ]
			i = 28;
		if( i == 10 )					// 10 , 9번 spare motor // [ 참조 : 클램프 Z1 모터 번호 변경 2025.10.16 ]
			i = 8;
		pshm->P[P_Motor_Current_Pos + i] = (pshm->Motor[i].ActPos - pshm->Motor[i].HomePos)/ 1000;	// [ 참조 : 26.02.27 현재 위치 계산 구문 Motor[x].Possf 제거 ]
	}

	//DD_Motor_temp[0].i_temperature = (int)pshm->ECAT[0].IO[4262].Data;			// 테스트용 여기가 들어가야함
	////DD_Motor_temp[1].i_temperature = pshm->ECAT[0].IO[4193].Data;
	////DD_Motor_temp[2].i_temperature = pshm->ECAT[0].IO[4194].Data;
	////DD_Motor_temp[3].i_temperature = pshm->ECAT[0].IO[4195].Data;
	//
	//*ptr = DD_Motor_temp[0].f_temperature * 1000;	// sys.fdata[500]

	//pshm->P[ P_Motor_temp + 2 ] = DD_Motor_temp[1].f_temperature;
	//pshm->P[ P_Motor_temp + 3 ] = DD_Motor_temp[2].f_temperature;
	//pshm->P[ P_Motor_temp + 4 ] = DD_Motor_temp[3].f_temperature;
}
