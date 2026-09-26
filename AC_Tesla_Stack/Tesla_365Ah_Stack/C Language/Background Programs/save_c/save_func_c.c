#include <gplib.h>   // Global Gp Shared memory pointer

//#define _PPScriptMode_		// for enum mode, replace this with #define _EnumMode_
#define _EnumMode_
#define _PP_PROJ_HDR_
#include "../../Include/pp_proj.h"
#include "save_h.h"


// check func
int machine_check(double machine_num, int* line_cnt)
{
	//char cur_machine[10] = {"_Machine"};			// 취득하기 위한 문자열
	char len_buf[N_Str_Byte];						// 호기저장하는 버퍼
	char len_txt_buf[N_Str_Byte];					// txt file 에서 읽어오는 문자열 버퍼
	int result = 0;
	int cnt = 0;
	int strcmp_rtn = 0;
					 
	sprintf(len_buf,"%d_Machine_%c======================================================\n",(int)machine_num,*cur_machine);	// buf에 조합
	

	// 현재 호기가 있는지 check 시작
	FILE* fp = NULL;									// file open
	//fp = fopen( SaveFileLoad, "r+" );					// file read 선언 ( pmac 내부 txt file 접근 )

	if( *cur_machine == 'A')							// A열이라면
		fp = fopen( SaveFileLoad_A, "r+" );				// file read 선언 ( pmac 내부 txt file 접근 )
	else if( *cur_machine == 'B')						// B열이라면
		fp = fopen( SaveFileLoad_B, "r+" );				// file read 선언 ( pmac 내부 txt file 접근 )

	if (fp == NULL) 
	{
	    printf(" Don't Have File 2. Make File \n");		// debug 
		
		// Txt File 없을 수 도 있으므로 Txt File 생성
		if( *cur_machine == 'A')						// file open
			fp = fopen( SaveFileLoad_A, "w" );			// Doc Txt File Make
		else if( *cur_machine == 'B')
			fp = fopen( SaveFileLoad_B, "w" );			//  Doc Txt File Make

		if (fp == NULL) 
		{
			printf(" Don't Have File 3.\n");			// debug 
		    result = 444;
		}
	}

	if( result != 444 )
	{
		while(fgets(len_txt_buf,sizeof(len_txt_buf),fp))
		{
			strcmp_rtn =  strcmp(len_txt_buf,len_buf);
			printf(" strcmp rnt : %d \n",strcmp_rtn);
			if( strcmp_rtn == 0 )										// 호기 번호 검출 조건
			{
				printf(" Same Machine Num & line cnt:%d \n",cnt);		// 같은 호기 번호 검출 완료
				result = n_true;
				break;
			}
			else if( feof(fp)!=0 ) 
			{
				printf(" Not Same Machine Num \n");						// 같은 호기 번호 없음 
				result = n_flase;
				break;		
			}
			cnt++;	
		}
	}

	fclose(fp);

	*line_cnt = cnt;

	#ifdef save_debug
		printf("i_machine_num:%d\n",(int)machine_num);		//debug 
		printf(" line Cnt : %d \n",*line_cnt);
		printf(" Current len_buf : %s\n",len_buf);		// debug용
	#endif
	
	return result;
}

// Line 갯수 Get → 포인터 배열 동적할당을 위한 Get
int Total_Line_Get_func()
{
	int count = 0;
	char len_buf[N_Str_Byte];
	int result = 0;
	int i = 0;

	FILE* fp = NULL;									// file open
	//fp = fopen( SaveFileLoad, "r+" );					// file read 선언 ( pmac 내부 txt file 접근 )
	
	if( *cur_machine == 'A')							// A열인지
		fp = fopen( SaveFileLoad_A, "r+" );				// file read 선언 ( pmac 내부 txt file 접근 )
	else if( *cur_machine == 'B')						// B열인지
		fp = fopen( SaveFileLoad_B, "r+" );				// file read 선언 ( pmac 내부 txt file 접근 )
	
	if (fp == NULL) 
	{
	    printf("파일을 열 수 없습니다3.\n");
	    result = 444;
	}

	if( result != 444 )
	{
		while(fgets(len_buf,sizeof(len_buf),fp))
		{
			if( feof(fp)!=0 )
				break;
			count++;
		}
		#ifdef save_debug
			printf("Line total : %d\n",count);
		#endif
	}

	fclose(fp);
	
	return count;
}

// Str buf 동적할당 
char** str_malloc(int count) 
{
	int i,j = 0;	// 반복문에 사용되는 변수 선언
    char **strings = (char **)malloc(sizeof(char *) * count + 1 );		// 포인터 배열 동적 할당 선언	
	    
	if (strings == NULL)			// 동적할당이 안되었을 시
		return NULL; 

    for (i = 0; i <= count; i++)	// 각 문자열 공간 할당
	{
        strings[i] = (char *)malloc(sizeof(char) * N_Str_Byte);			// 20byte 동적할당 선언 // fget해서 읽어온 길이를 할당해야하나? 너무 길어지니까 걍 20byte선언하자
        // 메모리 할당 실패 시 예외 처리
        if (strings[i] == NULL) 
		{
            for ( j = 0; j < i; j++)									// 개별 포인터배열 동적할당 해제
				free(strings[j]);

            
			free(strings);												// 포인터 배열 동적할당 해제
            return NULL;
        }
    }
    return strings;		// 포인터배열 리턴
}

// doc 문자 buf에 저장
void Txt_copy_buf(char** buf,int cnt)
{
	int i = 0;										// 반복문에 사용될 변수
	char doc_str[N_Str_Byte];						// fget 버퍼
	int result = 0;

	FILE* fp = NULL;								// file open
	//fp = fopen( SaveFileLoad, "r+" );					// file read 선언 ( pmac 내부 txt file 접근 )

	if( *cur_machine == 'A')							// A열인지
		fp = fopen( SaveFileLoad_A, "r+" );				// file read 선언 ( pmac 내부 txt file 접근 )
	else if( *cur_machine == 'B')						// B열인지
		fp = fopen( SaveFileLoad_B, "r+" );				// file read 선언 ( pmac 내부 txt file 접근 )

	if (fp == NULL) 
	{
	    printf("파일을 열 수 없습니다4.\n");
		result = 444;
	} 

	if( result != 444 )
	{
		for(i = 0; i < cnt ; i++ )
		{
			fgets(doc_str, sizeof(doc_str), fp);
			strcpy(buf[i],doc_str);
			#ifdef save_debug
				printf("buf_data: %s\n",buf[i]);
			#endif
		}
	}	
	fclose(fp);
}

// Data 삽입 
void Insert_Data(int line_num, char** str, int rtn )
{
	int i = 1;
	char new_str[N_Str_Byte];
	int kd[N_new_add_line];
	int kp[N_new_add_line];
	float ki[N_new_add_line];
	int kaff[N_new_add_line];
	int phase[5]; 
	int abs_home[5];
	int machine_num = (int)pshm->P[P_Cur_Equip_No];
	
	if( rtn == 0 )		// 신규 등록 일때
	{
		sprintf(str[0],"%d_Machine_%c======================================================\n",machine_num,*cur_machine);	// 호기 지정
		
		printf(" insert machine : %s \n",str[0]);

		for( i = 1; i < N_new_add_line; i++ )		// Motor num -> 1~28
		{
			//if( i == 9 || i == 10 || i == 14 )
			//	continue;

			kp[i] = (int)pshm->P[P_Servo_Gain_Kp + i];				// Data 삽입
			kd[i] = (int)pshm->P[P_Servo_Gain_Kvfb +i];				// Data 삽입
			ki[i] = (float)pshm->P[P_Servo_Gain_Ki + i];			// Data 삽입
			kaff[i] = (int)pshm->P[P_Servo_Gain_Kaff + i];			// Data 삽입

			memset(new_str,0,N_Str_Byte);							// 메모리 SET
			
			if( i <= 4 )
			{
				phase[i] = (int)pshm->P[P_ABS_Phasing_Data + i];
				abs_home[i] = (int)pshm->P[P_ABS_Home_Offset_Data + i];
				sprintf(new_str,"Motor[%d].Kp = %d, Kd = %d, Ki = %.5f, Kaff = %d, phase = %d, Homeoffset = %d\n", i,kp[i],kd[i],ki[i],kaff[i],phase[i],abs_home[i]);
			}
			else
				sprintf(new_str,"Motor[%d].Kp = %d, Kd = %d, Ki = %.5f, Kaff = %d\n",i,kp[i],kd[i],ki[i],kaff[i]);
			
			strcpy(str[i],new_str);
			#ifdef save_debug
				printf( " Line Num : %d, str Line New : %s\n",i,str[i]);
			#endif
		}
	}
	else	// 수정영역일때
	{
		for( i = 1; i < N_new_add_line; i++ )		// Motor num -> 1~28
		{
			//if( i == 9 || i == 10 || i == 14 )
			//	continue;

			kp[i] = (int)pshm->P[P_Servo_Gain_Kp + i];				// Data 삽입
			kd[i] = (int)pshm->P[P_Servo_Gain_Kvfb +i];				// Data 삽입
			ki[i] = (float)pshm->P[P_Servo_Gain_Ki + i];			// Data 삽입
			kaff[i] = (int)pshm->P[P_Servo_Gain_Kaff + i];			// Data 삽입

			memset(new_str,0,N_Str_Byte);							// 메모리 SET
			
			if( i <= 4 )
			{
				phase[i] = (int)pshm->P[P_ABS_Phasing_Data + i];
				abs_home[i] = (int)pshm->P[P_ABS_Home_Offset_Data + i];
				sprintf(new_str,"Motor[%d].Kp = %d, Kd = %d, Ki = %.5f, Kaff = %d, phase = %d, Homeoffset = %d\n", i,kp[i],kd[i],ki[i],kaff[i],phase[i],abs_home[i]);
			}
			else
				sprintf(new_str,"Motor[%d].Kp = %d, Kd = %d, Ki = %.5f, Kaff = %d\n",i,kp[i],kd[i],ki[i],kaff[i]);
			
			strcpy(str[line_num + i],new_str);
			
			#ifdef save_debug
				printf( " Line Num : %d, str Line New : %s\n",i,str[line_num + i]);
			#endif
		}
	}
} 

// Write Doc txt file 
void Write_Txt( int* Line_cnt, char** str, int mode )
{
	int i = 0;										// 반복문을 위한 변수 선언
	int result = 0;

	if( mode == 0 )
	{
		printf("doc open : w\n");
		FILE* fp = NULL;									// file open
		//fp = fopen( SaveFileLoad, "w" );					// file write 선언 ( pmac 내부 txt file 접근 )
		
		if( *cur_machine == 'A')							// A열인지
			fp = fopen( SaveFileLoad_A, "w" );				// file write 선언 ( pmac 내부 txt file 접근 )
		else if( *cur_machine == 'B')						// B열인지
			fp = fopen( SaveFileLoad_B, "w" );				// file write 선언 ( pmac 내부 txt file 접근 )
		
		if (fp == NULL) 
		{
		    printf("파일을 열 수 없습니다4.\n");
			result = 444;
		} 
		if( result != 444 )
		{
			for(i=0; i< Line_cnt; i++)
			{
				fprintf(fp,str[i]);
			}
		}
		fclose(fp);
	}
	else if( mode == 1 )
	{
		printf("doc open : a+\n");
		FILE* fp = NULL;									// file open
		//fp = fopen( SaveFileLoad, "a+" );					// file 이어쓰기 write 선언 ( pmac 내부 txt file 접근 )
		
		if( *cur_machine == 'A')							// A열인지
			fp = fopen( SaveFileLoad_A, "a+" );				// file 이어쓰기 write 선언 ( pmac 내부 txt file 접근 )
		else if( *cur_machine == 'B')						// B열인지
			fp = fopen( SaveFileLoad_B, "a+" );				// file 이어쓰기 write 선언 ( pmac 내부 txt file 접근 )

		if (fp == NULL) 
		{
		    printf("파일을 열 수 없습니다4.\n");
			result = 444;
		} 
		
		if( result != 444 )
		{
			for(i=0; i< Line_cnt; i++)
			{
				fprintf(fp,str[i]);
			}
		}
		fclose(fp);
	}
}

// 문자열로 지정된 호기들을 정수려 변환 → 내림차순 정렬을 위한 비교 사전작업
void pick_machine_num(char** str, int* arr, int count )
{
	int i,j,k = 0;
	int result = 0;
	char str_buf[N_Str_Byte];

	for( i = 0; i < count ; i++ )
	{
		strcpy(str_buf,str[i]);
		#ifdef save_debug
			printf( " pick_machine : %s \n",str_buf);
		#endif

		for( j = 0; j < 2 ; j++ )
		{
			#ifdef save_debug
				printf("letter : %c, arr[%d] : %d \n",str_buf[j],k,arr[k]);
			#endif

			if( str_buf[j] >=  N_Ascii_0 && str_buf[j] <= N_Ascii_9 )
			{
				if( arr[k] == 0 )
					arr[k] = (int)str_buf[j] - N_Ascii_0;
				else 
					arr[k] = arr[k] * 10 + (int)str_buf[j] - N_Ascii_0;
			}
		} 
			if( arr[k] != 0 )
				k++;	
	}
}

// 내림차순 정렬 
void sort_machine(int* arr, int cur_machine_num, char** str, int total_line )
{
	int i_End_idx = 0;
	int i = 0;

	for( i=0; i < Max_Machine_Num ; i++ )					// 비교할 호기의 마지막 인덱스 검출
	{
		if( arr[i] == 0 )									// 비교할 호기 정수값이 0이라면
		{
			i_End_idx = i - 1;								// 현재 인덱스를 end index로 저장
			break;
		}
	}
	#ifdef save_debug
		printf("END IDX : %d\n",i_End_idx);
	#endif

	while(1)
	{
		for( i = 0; i < Max_Machine_Num; i++ )
		{
			if( arr[i] == 0 )
				break;
			else
				printf(" arr : %d \n",arr[i]);
		}

		// sort 시작!
		if( arr[i_End_idx-1] > arr[i_End_idx] && i_End_idx != 0 )					// 이전 호기가 크다면
		{
			str_line_swap(str,&arr[i_End_idx-1],&arr[i_End_idx],total_line);
		}
		else 
			break;

		i_End_idx--;
	}
}
// 이전 데이터 <-> 현재 데이터 스왑 함수
void str_line_swap(char** str, int* old_num, int* cur_num, int total_line )
{
	int i = 0;
	int old_count, cur_count = 0;
	int temp = 0;
	char c_old[10]; //(char)*old_num + N_Ascii_0;
	char c_cur[10]; //(char)*cur_num + N_Ascii_0;
	char cmp_buf[N_Str_Byte];
	char temp_buf[N_new_add_line][N_Str_Byte];
	
	sprintf(c_old,"%d",*old_num);
	sprintf(c_cur,"%d",*cur_num);

	printf(" c_old int -> char : %s\n",c_old);
	printf(" c_cur int -> char : %s\n",c_cur);

	for( i = 0; i < total_line; i++ )
	{
		strcpy(cmp_buf,str[i]);

		if( *old_num < 10 )
		{
			if( cmp_buf[0] == c_old[0] )
			{
				old_count = i;						// old line count -> idx
				printf(" old line idx : %d \n", old_count);
			}
		}
		else
		{
			if( cmp_buf[0] == c_old[0] && cmp_buf[1] == c_old[1] )
			{
				old_count = i;						// old line count -> idx
				printf(" old line idx : %d \n", old_count);
			}
		}

		if( *cur_num < 10 )
		{
			if( cmp_buf[0] == c_cur[0] )
			{
				cur_count = i;						// cur line count -> idx
				printf(" cur line idx : %d \n", cur_count);
			}
		}
		else
		{
			if( cmp_buf[0] == c_cur[0] && cmp_buf[1] == c_cur[1] )
			{
				cur_count = i;						// cur line count -> idx
				printf(" cur line idx : %d \n", cur_count);
			}
		}
	}

	for( i = 0 ; i < N_new_add_line; i++ )
	{
		strcpy(temp_buf[i],str[old_count + i]);				// old 문자열 temp 저장
		printf("copy temp_buf:%s\n",temp_buf[i]);
		memset(str[old_count + i],0,N_Str_Byte);			// old 문자열 초기화
		strcpy(str[old_count + i],str[cur_count + i]);		// 현재 문자열 old문자열 저장
		printf("copy old_str :%s\n",str[old_count + i]);
		memset(str[cur_count + i],0,N_Str_Byte);			// 현재 문자열 초기화
		strcpy(str[cur_count + i],temp_buf[i]);				// temp 현재 문자열 저장
		printf("copy cur_str :%s\n",str[cur_count + i]);
	}

	temp = *old_num;
	*old_num = *cur_num;
	*cur_num = temp;
}

// 동적할당 해제 
int memory_free(char** str, int count )
{
	int i = 0;
	int rtn = 0;

	for( i = 0; i <= count; i++ )
		free(str[i]);

	free(str);

	printf(" memset complete\n");

	rtn = n_true;

	return rtn;
}
