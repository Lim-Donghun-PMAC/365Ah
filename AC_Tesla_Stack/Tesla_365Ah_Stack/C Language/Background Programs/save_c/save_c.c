//#include <gplib.h>
//#define _PPScriptMode_        // for enum mode, replace this with #define _EnumMode_
#include "save_h.h"
#define _EnumMode_
#include "../../Include/pp_proj.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <unistd.h>
//#include <time.h>

// =============================================================================
// [1] 메모리 동적 관리를 위한 전역 변수 선언부
//     - 배열의 크기를 미리 정하지 않고 포인터만 선언하여 런타임에 동적으로 크기를 늘립니다.
// =============================================================================
int var_count = 0;              // 현재 시스템에 등록된 저장 대상 변수의 총 개수 [cite: 409]
double** target_vars = NULL;    // 흩어져 있는 변수들의 '메모리 주소'들을 모아둘 포인터 배열 [cite: 409]
double* current_buffer = NULL;  // 현재 시스템 변수들의 값을 수집하여 한 줄로 세워둘 배열 [cite: 410]
double* shadow_buffer = NULL;   // 변경점 비교를 위해 '가장 마지막에 저장된 상태'를 기억하는 배열 [cite: 410]

static int current_storage_mode = 0; // 0: 내부 메모리(eMMC) 사용, 1: 외부 USB 플래시 사용 [cite: 411]

// 현재 설정된 모드에 따라 올바른 파일 저장 경로를 반환하는 내부 함수 [cite: 411, 412]
static const char* Get_Save_Path() 
{
    return current_storage_mode ? "/media/disk/saved_vars.bin" : "/opt/user/saved_vars.bin";
}
void Register_Var(double* ptr);
void Delay_ms(unsigned int ms);
void Load_Variables(void);
static void Save_Variables(void);


char* cur_machine;		// 장비 A or B 열 가져오는 캐릭터형 전역 포인터 선언 

int main(void)
{
    // Power PMAC 내부 변수 및 공유 메모리에 접근하기 위한 필수 초기화
    InitLibrary(); 
	Delay_ms(1000);			// 프로그램 시작 전 DelayTime 추가 _260708

	int motor = 1;
	int i = 0;

	for( motor = 1; motor <= 28; motor++ )
	{
		if( motor <= 4 )
		{
			Register_Var(&pshm->P[P_ABS_Phasing_Data + motor]);			
			Register_Var(&pshm->P[P_ABS_Home_Offset_Data + motor]);				
		}
		Register_Var(&pshm->P[P_Servo_Gain_Kp + motor]);				
		Register_Var(&pshm->P[P_Servo_Gain_Kvfb + motor]);				
		Register_Var(&pshm->P[P_Servo_Gain_Kvff + motor]);				
		Register_Var(&pshm->P[P_Servo_Gain_Ki + motor]);				
		Register_Var(&pshm->P[P_Servo_Gain_SwZvInt + motor]);			
		Register_Var(&pshm->P[P_Servo_Gain_Kaff + motor]);				

		Delay_ms(50);												// 50ms Delay
	}

	Register_Var(&pshm->P[P_Cur_Equip_No]);							// 호기 등록

    // 내부 메모리(/opt/user)를 사용할 경우, PMAC 매뉴얼에 따라 읽기/쓰기(rw) 권한 획득 [cite: 431]
    if (!current_storage_mode) 
	{
		#ifdef save_debug
			printf(" mount -o remount \n");
		#endif  
	    system("mount -o remount,rw /opt/user");
    }
    
	// current_buffer -> target_vars 대입
	if( pshm->P[P_Servo_Gain_Load_Flag] == 1 )
		Load_Variables();									// 내부Memory → P변수
    // -------------------------------------------------------------------------
    // 메인 감시 루프
    // -------------------------------------------------------------------------
 
	// Flag동작으로 수정. ( User Flag활성화 )	_260708
	if( pshm->P[P_Servo_Gain_Save_Flag] == 1 )		// User.
	{
		for (i = 0; i < var_count; i++) 
		{
		    if (target_vars[i] != NULL) 
		        current_buffer[i] = *(target_vars[i]);	
				#ifdef save_debug
					printf("current_buffer[%d]: %lf\n",i,current_buffer[i]);	  
				#endif  
		}            
		// Save시, 이전 값과 비교하기 위함 
		// 변경이 되었다면, NAND Memory 저장 
		size_t block_size = sizeof(double) * var_count;
		
		//if(memcmp(current_buffer, shadow_buffer, block_size) != 0)	// 이전과 동일하다면, memcpy 동작 무효 및 Save 함수 무효
		//{
			memcpy(shadow_buffer, current_buffer, block_size);
			Save_Variables();											// 갱신된 데이터를 디스크에 물리적으로 기록 [cite: 437]
		//}
		pshm->P[P_Servo_Gain_Save_Flag] = 3;							// 5를 반환하여 Save 완료를 알림
	
     }
	
	// (참고) 프로그램이 강제 종료 명령을 받을 경우 실행되는 정리 로직
	Delay_ms(500);			// 0.5s Delay

    free(target_vars);											// 동적으로 할당한 주소록 배열 메모리 반환 [cite: 438]
    free(current_buffer);										// 동적으로 할당한 현재 버퍼 메모리 반환 [cite: 438]
    free(shadow_buffer);										// 동적으로 할당한 섀도우 버퍼 메모리 반환 [cite: 438]

	Delay_ms(500);			// 0.5s Delay

	 if( pshm->P[P_Servo_Gain_Save_Flag] == 3 )					// Nand Mem 저장 완료 후 Doc 저장 
	 {
		int i_reuslt = 0;										// Serch result
		int i_total_line = 0;									// txt String total Line count
		int i_String_Line_Num = 0;								// txt String Line Number
		char** Str_buf;											// 포인터 배열 선언
		int Machine_arr[Max_Machine_Num]={0};					// Machine Num Arry 
		int save_mode = 0;										// 새로쓰기 모드 선언
		
		cur_machine = (char*)pushm+ 400;						// A열인지 B열인지 넣어주는 포인터	→ Sys.Cdata[400] 
		double d_machine_num = pshm->P[P_Cur_Equip_No];			// P변수에 호기 저장

		if( d_machine_num == 0 )								// 호기지정 안했다면
			return 1;											// 종료

		i_reuslt = machine_check(d_machine_num,&i_String_Line_Num);		// 호기 비교
		
		#ifdef save_debug
			printf( " i_reuslt : %d \n ", i_reuslt);			// debug용 
		#endif

		// i_reuslt == 1 신규등록이 아닌 변경, i_reuslt == 0 신규등록
		if( i_reuslt == n_true )								// 신규등록이 아닌, 변경
		{
			// 1. txt file 전체 버퍼에 복사 작업 ==============================================================================
			i_total_line = Total_Line_Get_func();				// txt file line EA counting 
			Str_buf = str_malloc(i_total_line);					// txt file 내에 있는 문자열 저장
			if( Str_buf == NULL )								// 동적할당에 문제가 생긴다면, ( 메모리가 부족하거나 등등 )
			{
				printf("memory fault\n");						// debug	
				return 1;										// prog 종료
			}
			Txt_copy_buf(Str_buf,i_total_line);					// txt file 데이터를 Str_buf에 저장!!
			// ===============================================================================================================
			
			// 2-1. 해당 호기 데이터만 신규 삽입 
			Insert_Data(i_String_Line_Num,Str_buf,i_reuslt);	// 데이터 신규 삽입
			// ===============================================================================================================		
			
			// 3. File 쓰기
			Write_Txt(i_total_line,Str_buf,save_mode);			// txt file 생성
			// ===============================================================================================================
		}
		else if( i_reuslt == n_flase )							// 신규등록일때
		{
			if( i_String_Line_Num == 0 )						// txt file 에 Data가 없다면 
			{
				#ifdef save_debug
					printf("Frist_Register\n");
				#endif
				Str_buf = str_malloc(N_new_add_line);			// txt file 내에 있는 문자열 저장
				Insert_Data(i_String_Line_Num,Str_buf,i_reuslt);// 데이터 신규 삽입
				Write_Txt(N_new_add_line,Str_buf,save_mode);	// Txt File 생성
			}
			else
			{
				//1. txt file 쓰기================================================================================================
				#ifdef save_debug
					printf("New Add Register\n");
				#endif
				Str_buf = str_malloc(N_new_add_line);				// txt file 내에 있는 문자열 저장
				Insert_Data(i_String_Line_Num,Str_buf,i_reuslt);	// 데이터 신규 삽입
				
				save_mode = 1;										// 이어쓰기 모드 선언
				Write_Txt(N_new_add_line,Str_buf,save_mode);		// Txt File 생성

				if( memory_free(Str_buf,i_total_line) != n_true )	// 동적 메모리 해제
				{
					printf( " Return 1!!!\n");
					return 1;										// 프로그램 종료
				}

				// 2. txt file 전체 버퍼에 복사 작업 ==============================================================================
				i_total_line = Total_Line_Get_func();				// txt file line EA counting 
				Str_buf = str_malloc(i_total_line);					// txt file 내에 있는 문자열 저장
				if( Str_buf == NULL )								// 동적할당에 문제가 생긴다면, ( 메모리가 부족하거나 등등 )
				{
					printf("memory fault\n");						// debug	
					return 1;										// prog 종료
				}
				Txt_copy_buf(Str_buf,i_total_line);					// txt file 데이터를 Str_buf에 저장!!
				//// 2-2. 저장 호기 정렬===========================================================================================
				//// 2-2-1. 문자열 호기 -> 정수형으로 변환			
				pick_machine_num(Str_buf,Machine_arr,i_total_line);// 문자열로 저장된 호기 데이터를 정수로 변환하여 배열에 저장 

				// 2-2-2. 호기 낮은순차대로 정렬
				sort_machine(Machine_arr,d_machine_num,Str_buf,i_total_line); // 정수로 된 데이터를 낮은차순으로 정렬
				
				// 3. File 쓰기===================================================================================================
				save_mode = 0;
				Write_Txt(i_total_line,Str_buf,save_mode);
				// ===============================================================================================================
			}
		}
		else	// 444
			return 1;

			memory_free(Str_buf,i_total_line);						// 동적할당 해제
			pshm->P[P_Servo_Gain_Save_Flag] = 5;					// 완료를 넘김
	 }							
   
	pshm->P[P_Servo_Gain_Load_Flag] = 3;							// save_c.cpp 종료를 알림
	//printf(" Save_C Close \n");

    CloseLibrary();
    
	return 0;
}


// =============================================================================
// [2] 변수 등록 함수 (런타임 메모리 할당)
//     - 저장하고 싶은 변수의 주소(&변수명)를 넘겨주면 알아서 목록에 추가합니다.
// =============================================================================
void Register_Var(double* ptr) 
{
    // 기존 배열 크기에서 1칸(var_count + 1)만큼 메모리를 동적으로 확장 [cite: 413, 414]
    target_vars = realloc(target_vars, sizeof(double*) * (var_count + 1));
    current_buffer = realloc(current_buffer, sizeof(double) * (var_count + 1));
    shadow_buffer = realloc(shadow_buffer, sizeof(double) * (var_count + 1));

    // 메모리 할당 실패 시 시스템 다운을 막기 위한 안전장치
    if (target_vars == NULL || current_buffer == NULL || shadow_buffer == NULL) 
	{
        exit(1);  // 강제 종료 (메모리 부족 상태) [cite: 415]
    }

    // 새로 확장된 배열의 맨 끝칸에 변수 주소를 등록하고 초기값을 0으로 설정 [cite: 416]
    target_vars[var_count] = ptr;
    current_buffer[var_count] = 0.0;
    shadow_buffer[var_count] = 0.0;

    // 변수가 1개 추가되었으므로 카운트 증가 [cite: 417]
    var_count++;
}

// =============================================================================
// [3] 유틸리티 함수: 밀리초(ms) 단위 정밀 대기
//     - ms 단위를 입력받아 내부적으로 초(sec)와 나노초(nsec)로 변환 후 nanosleep 실행
// =============================================================================
void Delay_ms(unsigned int ms) 
{
    struct timespec req;
    req.tv_sec = ms / 1000;                  // 1000ms 몫은 초(Second)로 변환
    req.tv_nsec = (ms % 1000) * 1000000;     // 나머지 ms는 나노초(Nanosecond)로 변환
    
    // 남은 시간을 처리하는 포인터는 NULL로 처리하여 단순 대기만 수행
    nanosleep(&req, NULL);
}

// =============================================================================
// [4] 시스템 저장 및 불러오기 함수
//     - 텍스트 변환 없이 바이너리(0과 1) 상태 그대로 읽고 써서 연산 속도를 극대화합니다.
// =============================================================================
void Load_Variables(void) 
{
    // 등록된 변수가 없으면 불러올 필요가 없으므로 즉시 함수 종료
    if (var_count == 0) 
	{
		#ifdef save_debug
			printf(" Not Register Memory \n");
		#endif
		
		return;
    } 
    FILE *fp = fopen(Get_Save_Path(), "rb"); // 바이너리 읽기 모드("rb")로 파일 열기
    
    if (fp != NULL) 
	{
        // 1. 파일에서 읽어온 실제 데이터의 개수를 확인합니다.
        size_t read_count = fread(current_buffer, sizeof(double), var_count, fp);
			#ifdef save_debug
				printf(" fp != NULL Read_Count : %d \n",read_count);
			#endif
        // 2. 인덱스에 따라 분기하여 흩어진 변수들을 업데이트합니다.
        int i = 0;
        for (i = 0; i < var_count; i++) 
		{
			#ifdef save_debug
				printf(" target_vars[%d] : %d \n",i,*(target_vars[i]));
			#endif
           
		    if (target_vars[i] != NULL) 
			{
                if (i < read_count) 
				{
                    // [기존 변수] 파일에 저장된 데이터가 있는 경우: 읽어온 값을 글로벌 변수에 대입
                    *(target_vars[i]) = current_buffer[i];
                } else 
				{
                    // [추가된 변수] 파일에 데이터가 없는 경우: 글로벌 변수의 현재 실제 값을 버퍼에 유지 (0으로 초기화 방지)
                    current_buffer[i] = *(target_vars[i]);
                }
            }
			#ifdef save_debug
				printf(" current_buffer[i] : %d \n",i,*(target_vars[i]));
			#endif
        }
        
        // 3. 로드가 완료된 최신 상태를 섀도우 버퍼에도 복사하여 동기화
        memcpy(shadow_buffer, current_buffer, sizeof(double) * var_count);
        fclose(fp); // 메모리 누수 방지를 위해 파일 닫기
        
    } 
	else 
	{
        // (안전장치) 파일이 아예 없는 최초 실행 시: 모든 글로벌 변수의 현재 값을 버퍼로 담아줍니다.
        int i = 0;
        for (i = 0; i < var_count; i++) 
		{
            if (target_vars[i] != NULL) 
			{
                current_buffer[i] = *(target_vars[i]);
            }
			#ifdef save_debug
				printf(" fp == Null current_buffer[i] : %d \n",i,*(target_vars[i]));
			#endif
        }
        // 첫 번째 감시 루프 전, 현재 상태를 기준점(섀도우 버퍼)으로 만듦
        memcpy(shadow_buffer, current_buffer, sizeof(double) * var_count);
    }
}

static void Save_Variables(void) 
{
    if (var_count == 0) return;

    FILE *fp = fopen(Get_Save_Path(), "wb"); // 바이너리 쓰기 모드("wb")로 파일 열기 [cite: 423]
    
	if (fp != NULL) 
	{
		#ifdef save_debug
			printf(" fp =! Null Save Variables \n");
		#endif
        // 구조체나 배열의 메모리 블록(shadow_buffer)을 텍스트 변환 없이 통째로 디스크에 기록 [cite: 424]
        fwrite(shadow_buffer, sizeof(double), var_count, fp);
        fclose(fp); //[cite: 424]
    }
	else
		printf(" fp == Null Dont Save Variables \n");
}
