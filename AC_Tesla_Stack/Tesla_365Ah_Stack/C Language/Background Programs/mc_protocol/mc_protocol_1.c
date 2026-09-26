/*For more information see notes.txt in the Documentation folder */
#include <gplib.h>   

#define _PPScriptMode_		// for enum mode, replace this with #define _EnumMode_
#include "../../Include/pp_proj.h"

#include "mc_protocol.h"

/////////////////////////////////////	글로벌 영역	/////////////////////////////////////////////
char m_send_buf[BUFFER_SIZE];				// send 할 Byte 버퍼
char m_recv_buf[BUFFER_SIZE];				// recv 할 Byte 버퍼

char gDataBuf[8192];

pthread_mutex_t      mutex_lock;			// Mutex를 위한 posix 제공 구조체

config_t Config_Data;						// config 파일에 있는 정보를 담아놓은 구조체.

unsigned int Reconnection_Ctn = 0;
int m_clientsock = 0;
int m_trans_thread_exit_flag = 0;

// A, B열 Config 파일 Path 
const char* config_setting_file_path_a = "/var/ftp/usrflash/Project/Configuration/mc_protocol_set_a.cfg";
const char* config_setting_file_path_b = "/var/ftp/usrflash/Project/Configuration/mc_protocol_set_b.cfg";
const char* PROG_SEM_NAME = "sem_mc_protocol_with_pmac"; 
sem_t* m_program_sem_handle;
const double SPEC = 1000000000.0;

//static int SectorIndex = 0;


int main(int argc, char** args) 
{

	struct timespec sleeptime = {0};
	struct timespec begin, end;
	int retval;
	pthread_attr_t attr;
	pthread_t pthread_Id = 0;
	int pthread_Status=0;
	int _cofig_file_no=0;
	int _arg_flag_a = 0, _arg_flag_b = 0, _arg_flag_u = 0;
	int _opt_char; // option
	m_program_sem_handle = NULL;
	// -a : mc_protocol_set_a.cfg 사용
	// -b : mc_protocol_set_b.cfg 사용
	// -u : -u 옵션을 주고 실행하면 세마포어를 해제한다.
	// 추후 추가옵션 있을시 추가하고 주석처리

	while ((_opt_char = getopt(argc, args, "abu")) != -1)
	{
		// -1 means getopt() parse all options
		switch (_opt_char)
		{
			case 'a': _arg_flag_a = 1; break;
			case 'b': _arg_flag_b = 1; break;
			case 'u': _arg_flag_u = 1; break;

			case '?': printf("[mc_protocol_with_pmac] Unknown flag : %c \n", _opt_char); break;
			default:  printf("[mc_protocol_with_pmac] default getopt() \n"); break;
		}
	}

	if (_arg_flag_a) 
	{ 
		printf("config file select = %s \n", config_setting_file_path_a);
		_cofig_file_no = 1;
	}
	else if (_arg_flag_b) 
	{ 
		printf("config file select = %s \n", config_setting_file_path_b);
		_cofig_file_no = 2;
	}
	else
	{
		_cofig_file_no = 0;
	}


	if (_arg_flag_u) 
	{ 	    
		sem_unlink(PROG_SEM_NAME);
		printf("[mc_protocol_with_pmac] %s semaphore unlinked!\n", PROG_SEM_NAME);
		exit(1);
		printf("exit complete\n");
		//return 1;
	}

//	현재 프로그램이 돌고있는지 검사(중복실행방지)
	if(is_this_program_running() == TRUE)
	{
		//이미 실행중이면 종료
		printf("[mc_protocol_with_pmac] Already running.(%s)\n", PROG_SEM_NAME);
		printf("exit complete\n");
		exit(1);
	}
	else
	{
#ifdef	_CONSOLE_DEBUG_MODE_
		error_log("MC Protocol App First Open\n");
#endif
	}

	InitLibrary();  // Required for accessing Power PMAC library
	
	pthread_mutex_init(&mutex_lock, NULL);
	//pthread_detach 설정
	pthread_attr_init(&attr);
	pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);

	init_value_setting(&Config_Data, _cofig_file_no);


	// 소켓 생성 구간
	if(connect_PLC() < 0)
	{
		Die();
	}


	m_trans_thread_exit_flag = THREAD_RUNNING;
#ifdef	_CONSOLE_DEBUG_MODE_
	printf("socket create file descriptor number : %d\n",m_clientsock);
	printf("Chunk Mode thread excuting \n");
#endif
	pthread_Status = pthread_create(&pthread_Id, &attr, &thread_dataExchange_chunk_mode, (void*)&m_clientsock);
	if (pthread_Status < 0)
	{
		error_log("thread_dataExchange_chunk_mode create error...\n");
		Die();
	}
	unsigned int bit = 0;
	double timer = 0;
	//main 쓰레드 running
	sleeptime.tv_sec = 1;
	sleeptime.tv_nsec = 0;
	while (1)
	{
		//clock_gettime(CLOCK_MONOTONIC, &begin);
		bit = *((unsigned int*)pushm + PROG_RUN_HEARTBIT);
		bit = bit ^ 1;
		*((unsigned int*)pushm + PROG_RUN_HEARTBIT) = bit;

		if (m_trans_thread_exit_flag == THREAD_EXIT_RETURN)
		{
			// pthread_cancel() 스레드에 종료 요청을 보낸다.
			pthread_cancel(pthread_Id);
			//printf("[mc_protocol_with_pmac] pthread_cancel(pthread_Id); \n");
			break;
		}
		nanosleep(&sleeptime, NULL);      //0.2 sec
		//clock_gettime(CLOCK_MONOTONIC, &end);
		//timer = (SPEC * (end.tv_sec-begin.tv_sec) + (end.tv_nsec-begin.tv_nsec));

		//printf("time : %lf\n", timer / 1000000);

	}

	// 정상 종료 구간.
	if (m_program_sem_handle != NULL)
	{
	   sem_close(m_program_sem_handle);
	   printf("[Normal close] semaphore closed\n");
	   sem_unlink(PROG_SEM_NAME);
	   printf("[Normal close] semaphore unlinked\n");
	}

	if (m_clientsock != 0)
	{
	   close(m_clientsock);
	   printf("[Normal close] tcp socket closed\n");
	   m_clientsock = 0;
	}

	CloseLibrary();
	return 0;
}

//파일을 읽어서 값을 채우기 전에 변수값 설정
void init_value_setting(config_t* _config_str, int _Pmac_Side)
{
	//Config 문서에 있는 값들을 담을 구조체 변수값들 초기화.
	int i = 0;

	_config_str->port_no = 0;
	_config_str->ip_address = 0;


	if(_Pmac_Side == 1)
	{
		printf("A Side Open Init\n");
		_config_str->read_start_addr_area[0] = 40000;			// 1번 Sector
		_config_str->read_start_addr_area[1] = 40800;			// 2번 Sector
		_config_str->read_start_addr_area[2] = 41600;			// 3번 Sector
		_config_str->read_start_addr_area[3] = 42400;			// 4번 Sector
		_config_str->read_start_addr_area[4] = 43200;			// 5번 Sector

		_config_str->write_start_addr_area[0] = 45000;			// 1번 Sector
		_config_str->write_start_addr_area[1] = 45800;			// 2번 Sector
		_config_str->write_start_addr_area[2] = 46600;			// 3번 Sector
		_config_str->write_start_addr_area[3] = 47400;			// 4번 Sector
		_config_str->write_start_addr_area[4] = 48200;			// 5번 Sector
		_config_str->ip_address = "192.168.2.1";
		
	}
	else if(_Pmac_Side == 2)
	{
		printf("B Side Open Init\n");
		_config_str->read_start_addr_area[0] = 50000;			// 1번 Sector
		_config_str->read_start_addr_area[1] = 50800;			// 2번 Sector
		_config_str->read_start_addr_area[2] = 51600;			// 3번 Sector
		_config_str->read_start_addr_area[3] = 52400;			// 4번 Sector
		_config_str->read_start_addr_area[4] = 53200;			// 5번 Sector

		_config_str->write_start_addr_area[0] = 55000;			// 1번 Sector
		_config_str->write_start_addr_area[1] = 55800;			// 2번 Sector
		_config_str->write_start_addr_area[2] = 56600;			// 3번 Sector
		_config_str->write_start_addr_area[3] = 57400;			// 4번 Sector
		_config_str->write_start_addr_area[4] = 58200;			// 5번 Sector
		_config_str->ip_address = "192.168.2.2";
	}
	
	_config_str->read_Udata_addr_area[0] = 10000; 
	_config_str->read_Udata_addr_area[1] = 10400; 
	_config_str->read_Udata_addr_area[2] = 10800; 
	_config_str->read_Udata_addr_area[3] = 11200; 
	_config_str->read_Udata_addr_area[4] = 11600; 

	_config_str->write_Udata_addr_area[0] = 20000;
	_config_str->write_Udata_addr_area[1] = 20400;
	_config_str->write_Udata_addr_area[2] = 20800;
	_config_str->write_Udata_addr_area[3] = 21200;
	_config_str->write_Udata_addr_area[4] = 21600;
	_config_str->port_no = 5010;

	#ifdef	_CONSOLE_DEBUG_MODE_
		printf("Setting IP : %s\n", _config_str->ip_address);
		printf("Setting port_no : %d\n", _config_str->port_no);
		printf("Setting PLC Read SectorNo1 Addr : %d\n", _config_str->read_start_addr_area[0]);
		printf("Setting PLC Read SectorNo2 Addr : %d\n", _config_str->read_start_addr_area[1]);
		printf("Setting PLC Read SectorNo3 Addr : %d\n", _config_str->read_start_addr_area[2]);
		printf("Setting PLC Read SectorNo4 Addr : %d\n", _config_str->read_start_addr_area[3]);
		printf("Setting PLC Read SectorNo5 Addr : %d\n", _config_str->read_start_addr_area[4]);

		printf("Setting PLC Write SectorNo1 Addr : %d\n", _config_str->write_start_addr_area[0]);
		printf("Setting PLC Write SectorNo2 Addr : %d\n", _config_str->write_start_addr_area[1]);
		printf("Setting PLC Write SectorNo3 Addr : %d\n", _config_str->write_start_addr_area[2]);
		printf("Setting PLC Write SectorNo4 Addr : %d\n", _config_str->write_start_addr_area[3]);
		printf("Setting PLC Write SectorNo5 Addr : %d\n", _config_str->write_start_addr_area[4]);

		printf("Setting PMAC Read SectorNo1 PMAC Addr : %d\n", _config_str->read_Udata_addr_area[0]);
		printf("Setting PMAC Read SectorNo2 PMAC Addr : %d\n", _config_str->read_Udata_addr_area[1]);
		printf("Setting PMAC Read SectorNo3 PMAC Addr : %d\n", _config_str->read_Udata_addr_area[2]);
		printf("Setting PMAC Read SectorNo4 PMAC Addr : %d\n", _config_str->read_Udata_addr_area[3]);
		printf("Setting PMAC Read SectorNo5 PMAC Addr : %d\n", _config_str->read_Udata_addr_area[4]);
		
		printf("Setting PMAC Write SectorNo1 PMAC Addr : %d\n", _config_str->write_Udata_addr_area[0]);
		printf("Setting PMAC Write SectorNo2 PMAC Addr : %d\n", _config_str->write_Udata_addr_area[1]);
		printf("Setting PMAC Write SectorNo3 PMAC Addr : %d\n", _config_str->write_Udata_addr_area[2]);
		printf("Setting PMAC Write SectorNo4 PMAC Addr : %d\n", _config_str->write_Udata_addr_area[3]);
		printf("Setting PMAC Write SectorNo5 PMAC Addr : %d\n", _config_str->write_Udata_addr_area[4]);
	#endif
	//
	return;
}


ConfigDictionary_t* CopyConfig(FILE* pFile)
{
	ConfigDictionary_t* Info = (ConfigDictionary_t*)malloc(sizeof(ConfigDictionary_t));
    Info->length = 0;
    int i = 0;
	char cbuffer[256];
	char* string;
	int index = 0;
    // config 파일 한 줄씩 메모리에 저장.
    while (fgets(cbuffer, 256, pFile) != NULL)
    {
        Info->string_Arr[i] = (char*)malloc(sizeof(char) * 256);            //256 byte 할당해라 ASCII 가 1Byte고, 256개의 글자 담을거임.
        if (Info->string_Arr[i] == NULL)
            break;
		if (cbuffer[0] == '\n' || cbuffer[0] == '\0' || cbuffer[0] == '\r')
		{
			//printf("this is space or null\n");
			free(Info->string_Arr[i]);
			continue;
		}
		//printf("before remove space : %s",cbuffer);

		string = remove_space(cbuffer);
        // Config파일을 포인터 배열에 저장 \n 만날때까지 계속 읽음.
		strncpy(Info->string_Arr[i], string, strlen(string));

		//printf("copy : %s",Info->string_Arr[i]);
		free(string);
        //printf("length : %d, %s",(int)strlen(Info->string_Arr[i]) , Info->string_Arr[i]);
        i++;
    }
    Info->length = i;
	//printf("saved index : %d\n",Info->length); 

	return Info;
}


int Equal_Sign_Parsing(ConfigDictionary_t* Info)
{
    const char delimiters[] = "=";
    char* temp = NULL;
    int i = 0;

    for(i = 0; i < Info->length; i ++)
    {
        temp = strtok_r(Info->string_Arr[i], delimiters, &Info->Value_Arr[i]);        // sentence 에 들어온 값을 = 으로 구분하여 앞쪽 값은 포인터배열에 저장, 뒤쪽 잘린 부분은 context에 저장.
		if (temp == NULL)
        {
            printf("Equal()Func Error!");
            return -1;
        }
    }
	return 1;

}


char* remove_space(char* line_str)
{
    int i;
    int _idx = 0;
    int _length;
	_length = strlen(line_str);
	char* _ret_string = (char*)malloc(sizeof(char)*_length);
    for (i = 0; i < _length; ++i)
    {
		if (line_str[i] == '/' && line_str[i + 1] == '/')
			break;

        if (line_str[i] == ' ' || line_str[i] == '\t' ||  line_str[i] == '\r' || line_str[i] == '\n')
			continue;
		//printf("charc : %c   intnumber : %d\n",line_str[i], line_str[i]);
		_ret_string[_idx++] = line_str[i];

    }
	_ret_string[_idx] = '\0';
	//printf("saved string : %s", _ret_string);
	//printf("intnumber : %d\n", _ret_string[_idx]);

    return _ret_string;
}

void Die()
{
	printf("die process\n");
   if (m_program_sem_handle != NULL)
   {
      sem_close(m_program_sem_handle);
      printf("[mc_protocol_with_pmac][Die()] semaphore closed\n");
      sem_unlink(PROG_SEM_NAME);
      printf("[mc_protocol_with_pmac][Die()] semaphore unlinked\n");
   }

   if (m_clientsock != 0)
   {
	   close(m_clientsock);
	   printf("[mc_protocol_with_pmac][Die()] tcp socket closed\n");
	   m_clientsock = 0;
   }

   CloseLibrary();
   printf("[mc_protocol_with_pmac][Die()] exit(1) \n");
   exit(1);   //프로그램 종료
}

int is_this_program_running()
{
	int ret = FALSE;

	m_program_sem_handle = sem_open(PROG_SEM_NAME, O_CREAT | O_EXCL, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH, 1);
	//O_CREAT  : 지정된 키값을 이용하여 생성 
	//O_EXCL : 동일한 Key를 사용한 sem 이 존재하면 error 를 리턴 
	
	//
	if (m_program_sem_handle == SEM_FAILED)
	{
		if (errno == EEXIST)
		{
			printf("[mc_protocol_with_pmac] SEM_FAILED / EEXIST\n");
		}
		else if (errno == EACCES)
		{
			printf("[mc_protocol_with_pmac] SEM_FAILED / EACCES\n");
		}
		else
		{
			printf("[mc_protocol_with_pmac] SEM_FAILED / Another Reason\n");
		}

		ret = TRUE;
	}

	return ret;
}


void* thread_dataExchange_chunk_mode(void* pSocket)
{
	int socket = *((int*)pSocket);

	struct timespec _gap_sleep_time = { 0 };  //한바퀴 다보내고 쉬는시간
	struct timespec _inter_sleep_time = { 0 }; //중간중간 쉬는시간
	//struct timespec Loop_begin, Loop_end;
	
	struct timespec Readbegin={0,0}, Readend={0,0};
	struct timespec Writebegin={0,0}, Writeend={0,0};

	double dReadDiffTime;
	double dWriteDiffTime;
	
	int _gap_msec = 100;
	int _inter_msec = 5;
	int _gap_sec = 0;
	int _inter_sec = 0;
	//
	int idx;
	//M-PLC ---> PMAC
	unsigned int _read_start_addr;
	//unsigned int _read_word_size;
	int _read_remain_size;
	unsigned int _read_max_size; //word 단위
	unsigned int _read_data_copy_area; //pushm 영역인덱스
	//
	//PMAC ---> M-PLC  
	unsigned int _write_start_addr;
	//unsigned int _write_word_size;
	int _write_remain_size;
	unsigned int _write_max_size; //word 단위
	unsigned int _write_data_copy_area; //pushm 영역인덱스
	//
	int _ret_num;
	pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, NULL);
	//pthread_cleanup_push(clean_up, NULL); //쓰레드 종료시 호출되는 콜백 함수 

	pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL);//pthread_cancel시 바로 종료

	//sleep 시간 설정
	_gap_msec = THREAD_SLEEP_MSEC;					// Config 불필요
//	if (_gap_msec < 10)
//	{
//		_gap_sec = 0;
//		_gap_msec = 10;
//	}

	_inter_msec = READ_WRITE_SLEEP_MSEC;				// Config 불필요
//	if (_inter_msec < 2)
//	{
//		_inter_sec = 0;
//		_inter_msec = 2;
//	}
	_gap_sleep_time.tv_sec = _gap_sec;
	_gap_sleep_time.tv_nsec = NANO_1MSEC * _gap_msec;
	//
	_inter_sleep_time.tv_sec = _inter_sec;
	_inter_sleep_time.tv_nsec = NANO_1MSEC * _inter_msec;
#ifdef	_CONSOLE_DEBUG_MODE_
	printf("_gap_sleep_time   = %d.%03d\n", _gap_sec, _gap_msec);
	//printf("_inter_sleep_time = %d.%03d\n", _inter_sec, _inter_msec);
#endif
	//word 단위
	//읽고, 쓸때 한번에 처리하는 워드 크기
	_read_max_size = MAX_READ_PACKET_SIZE;			// MAX 800 넘기지 않도록 해야함.. 어쩌피 Sector로 나눠져 있는 상황이라 500Word로 읽게 했음
	_write_max_size = MAX_WRITE_PACKET_SIZE;		// MAX 800 넘기지 않도록 해야함.. 어쩌피 Sector로 나눠져 있는 상황이라 500Word로 읽게 했음

	//while (*mp_app_exit == 0)
	while (m_trans_thread_exit_flag == THREAD_RUNNING)
	{
		// auto_write, auto_read가 1(true)거나 
		// 수동으로 trigger을 1로 바꾸면 전송하도록 함.
		for(idx = 0; idx < 5; idx++)
		{
			if(*((unsigned int*)pushm + READ_CMD_START_ADDR + idx) == 1)
			{
				clock_gettime(CLOCK_MONOTONIC, &Readbegin);
				*((unsigned int*)pushm + READ_CMD_START_ADDR + idx) = 0;
				#ifdef	_CONSOLE_DEBUG_MODE_
					printf("No.%d Sector_Scan Comomand!  \n", idx+1);
				#endif
				//쓰기관련 파라미터 복사
				_read_start_addr = Config_Data.read_start_addr_area[idx];
				_read_data_copy_area = Config_Data.read_Udata_addr_area[idx]; 	//Udata 영역인덱스
				if(_read_max_size != MAX_READ_PACKET_SIZE)
					_read_max_size = MAX_READ_PACKET_SIZE;

				_ret_num = mc_protocol_read_block(socket, _read_start_addr, _read_data_copy_area, _read_max_size);
				if (_ret_num == -1)		// send, recv, recv데이터 에러코드가 있을경우 -1 리턴
				{
					// -1 을 리턴하며 끊긴것으로 간주
					#ifdef	_CONSOLE_DEBUG_MODE_
						printf("[debug][thread_dataExchange_chunk_mode][mc_protocol_read_block] return %d \n", _ret_num);
					#endif
					m_trans_thread_exit_flag = THREAD_EXIT_RETURN;
					return NULL;
				}

				*((unsigned int*)pushm + READ_COMPLETE_START_ADDR + idx) = 1;

				nanosleep(&_inter_sleep_time, NULL);      //write와 read 사이에 1msec 쉰다.
				clock_gettime(CLOCK_MONOTONIC, &Readend);
				dReadDiffTime = (double)(SPEC * (Readend.tv_sec-Readbegin.tv_sec) + (Readend.tv_nsec-Readbegin.tv_nsec));
				*((float*)pushm + READ_SCAN_START_ADDR + idx) = dReadDiffTime / 1000000;
				//*((double*)pushm + READ_SCAN_START_ADDR + idx) = dReadDiffTime / 1000000;
			
			}

			if(*((unsigned int*)pushm + WRITE_CMD_START_ADDR + idx) == 1)
			{
				clock_gettime(CLOCK_MONOTONIC, &Writebegin);
				*((unsigned int*)pushm + WRITE_CMD_START_ADDR + idx) = 0;
				//쓰기관련 파라미터 복사
				_write_start_addr = Config_Data.write_start_addr_area[idx];
				_write_data_copy_area = Config_Data.write_Udata_addr_area[idx]; 	//Udata 영역인덱스
				if(_write_max_size != MAX_WRITE_PACKET_SIZE)
					_write_max_size = MAX_WRITE_PACKET_SIZE;
				//_write_word_size = _write_max_size;			// 4000 / 500 해서 총 8개 영역

				_ret_num = mc_protocol_write_block(socket, _write_start_addr, _write_data_copy_area, _write_max_size);
				if (_ret_num == -1)		// send, recv, recv데이터 에러코드가 있을경우 -1 리턴
				{
					// -1 을 리턴하며 끊긴것으로 간주
					#ifdef	_CONSOLE_DEBUG_MODE_
						printf("[debug][thread_dataExchange_chunk_mode][mc_protocol_write_block] return %d \n", _ret_num);
					#endif
					m_trans_thread_exit_flag = THREAD_EXIT_RETURN;
					return NULL;
				}

				*((unsigned int*)pushm + WRITE_COMPLETE_START_ADDR + idx) = 1;

				nanosleep(&_inter_sleep_time, NULL);      //write와 read 사이에 1msec 쉰다.
				clock_gettime(CLOCK_MONOTONIC, &Writeend);
				dWriteDiffTime = (float)(SPEC * (Writeend.tv_sec-Writebegin.tv_sec) + (Writeend.tv_nsec-Writebegin.tv_nsec));
				*((float*)pushm + WRITE_SCAN_START_ADDR + idx) = dWriteDiffTime / 1000000;
				//*((double*)pushm + WRITE_SCAN_START_ADDR + idx) = dWriteDiffTime / 1000000;
			
			}

			//nanosleep(&_gap_sleep_time, NULL);      //한바퀴 다 보내고, 잠깐 쉬는 인터벌 시간

			
		}
		if( *((int*)pushm + KILL_CHUNK_LOOP) == 1 )
		{
			*((int*)pushm + KILL_CHUNK_LOOP) = 0;
			break;
		}
		nanosleep(&_gap_sleep_time, NULL);      //한바퀴 다 보내고, 잠깐 쉬는 인터벌 시간
	}

	m_trans_thread_exit_flag = THREAD_EXIT_RETURN;
	return NULL;

}

void error_log(char *msg)
{

    //FILE* fp = fopen("/var/ftp/usrflash/Project/Documentation/mc_protocol_log.txt", "w+");
	printf("Error Message : %s\n",msg);
    //if( fp == NULL )
	//{
	//	fprintf(fp, "FIle Open Fail\n");
	//	return;
	//}
    //fprintf(fp, "[error_log] Message : %s\n", msg);
	//
    //fclose(fp);

   //*((unsigned int*)pushm + FROM_PMAC_ERROR_CODE) = errorcode;

   return;
}


int mc_protocol_write_block(int Socketno, unsigned int plc_write_word_start, unsigned int write_Udata_addr, int word_size)
{

	//----
	int _reqDataLength = 0;
	int _send_length = 0;
	unsigned int* _pushm_buffer_pointer;
	unsigned int _resp_error_code;
	int _temp_int;
	unsigned int _temp_uint;

	memset(m_send_buf, 0x00, sizeof(BUFFER_SIZE));
	memset(m_recv_buf, 0x00, sizeof(BUFFER_SIZE));

	//요구데이타 길이 = CPU감시타이머(2Bytes) + 요구커맨드부 (커맨드(2Bytes), 서브커맨드(2Bytes), 선두Device번호(3Bytes)
	//														,디바이스코드(1Byte), Device점수_Word수(2byte), 데이터길이 )
	_reqDataLength = 12 + (2 * (word_size));
#ifdef	_CONSOLE_DEBUG_MODE_
	printf("write Index Start : %d, Shared Mem Index : %d, data length : %d\n",plc_write_word_start, write_Udata_addr, _reqDataLength);
#endif
	
	//D영역은 1칸에 1워드 단위
	//MC Protocol QnA호환 3E, Ini _ WRITE WORD

	//--서브해더 시작----------
	//메뉴얼 고정값
	//Sub header
	m_send_buf[0] = SUBHEADER_LO;
	m_send_buf[1] = SUBHEADER_HI;
	//--서브해더 끝----------

	//--Access Route 시작----------
	//메뉴얼 고정값
	//Network No.
	m_send_buf[2] = NETWORK_NO; //하위 1바이트 사용

	//메뉴얼 고정값
	//PLC No.
	m_send_buf[3] = PC_NO; //하위 1바이트 사용

	//메뉴얼 고정값
	//요구상대모듈 I/O번호
	m_send_buf[4] = REQ_DEST_IO_NO_LO; //Low
	m_send_buf[5] = REQ_DEST_IO_NO_HI; //High

	//메뉴얼 고정값
	//요구상대모듈 국번호
	m_send_buf[6] = REQ_DEST_STATION_IO_NO; //하위 1바이트 사용
	//--Access Route 끝----------
	
	//Send_Data Size
	//메뉴얼 고정값
	//요구데이타 길이 = CPU모니터링 타이머(2Bytes) + 커맨드(2Bytes) 
	//               + 서브커맨드(2Bytes) + head Device no(3Bytes)
	//               +device code(1Byte) + Device점수(2byte) 
	m_send_buf[7] = (_reqDataLength & HEX_BYTE_MASKING);   //Low
	m_send_buf[8] = ((_reqDataLength >> 8) & HEX_BYTE_MASKING);  //High

	//메뉴얼 고정값
	//CPU감시타이머
	//PLC CPU에 읽기/쓰기를 요구 후 결과가 반환 될 때까지 대기 시간 설정하는 타이머
	//250msec 단위
	m_send_buf[9] = WRITE_MONITORING_TIMER_LO;   //Low
	m_send_buf[10] = WRITE_MONITORING_TIMER_HI;  //High

	//커맨드
	//Follow Command 
	// 워드일괄쓰기 : 0x1401		메뉴얼 고정값
	m_send_buf[11] = WRITE_REQ_COMMAND_LO;  //Low
	m_send_buf[12] = WRITE_REQ_COMMAND_HI;  //High

	// Sub Command(0000)
	m_send_buf[13] = WRITE_REQ_SUBCOMMAND_LO;
	m_send_buf[14] = WRITE_REQ_SUBCOMMAND_HI;

	// "요구데이터부" 시작
	//--선두 디바이스(3byte)-- 워드단위 시작 주소
	// 15~17 : 3바이트 / 시작주소 : 바이트오더를 유의할것
	// 리틀엔디안 인가봄.
	m_send_buf[15] = ((plc_write_word_start >> 0) & HEX_BYTE_MASKING);
	m_send_buf[16] = ((plc_write_word_start >> 8) & HEX_BYTE_MASKING);
	m_send_buf[17] = ((plc_write_word_start >> 16) & HEX_BYTE_MASKING);

	// Device Code
	//디바이스 코드(1byte)
	m_send_buf[18] = MC_PROTOCOL_DATA_D_AREA;

	//다바이스 점수(2byte), 워드 단위 => 몇 워드 들고올건지
	//사이즈 (WORD 단위/ 2바이트 단위)
	m_send_buf[19] = ((word_size >> 0) & 0x00FF);  //LOW
	m_send_buf[20] = ((word_size >> 8) & 0x00FF);  //HIGH
#ifdef	_CONSOLE_DEBUG_MODE_
	printf("[write] s_buf[0] : %02x\n", m_send_buf[0]);
	printf("[write] s_buf[1] : %02x\n", m_send_buf[1]);
	printf("[write] s_buf[2] : %02x\n", m_send_buf[2]);
	printf("[write] s_buf[3] : %02x\n", m_send_buf[3]);
	printf("[write] s_buf[4] : %02x\n", m_send_buf[4]);
	printf("[write] s_buf[5] : %02x\n", m_send_buf[5]);
	printf("[write] s_buf[6] : %02x\n", m_send_buf[6]);
	printf("[write] s_buf[7] : %02x\n", m_send_buf[7]);
	printf("[write] s_buf[8] : %02x\n", m_send_buf[8]);
	printf("[write] s_buf[9] : %02x\n", m_send_buf[9]);
	printf("[write] s_buf[10] : %02x\n", m_send_buf[10]);
	printf("[write] s_buf[11] : %02x\n", m_send_buf[11]);
	printf("[write] s_buf[12] : %02x\n", m_send_buf[12]);
	printf("[write] s_buf[13] : %02x\n", m_send_buf[13]);
	printf("[write] s_buf[14] : %02x\n", m_send_buf[14]);
	printf("[write] s_buf[15] : %02x\n", m_send_buf[15]);
	printf("[write] s_buf[16] : %02x\n", m_send_buf[16]);
	printf("[write] s_buf[17] : %02x\n", m_send_buf[17]);
	printf("[write] s_buf[18] : %02x\n", m_send_buf[18]);
	printf("[write] s_buf[19] : %02x\n", m_send_buf[19]);
	printf("[write] s_buf[20] : %02x\n", m_send_buf[20]);
	
	printf("Write word Length %02d\n", word_size);
#endif
		//WORD단위로 보내는 데이터의 사이즈
	_send_length = MC_FIXED_SIZE + (word_size * 2);			//MC_FIXED_SIZE는 Frame길이입니다.
#ifdef	_CONSOLE_DEBUG_MODE_
	printf("send() byte length %02d\n", _send_length);
#endif
	// void *memcpy(void *dest, const void *src, size_t n);
	//dest 의 포인터를 반환합니다.
	_pushm_buffer_pointer = (unsigned int*)pushm + write_Udata_addr;
	memcpy(&m_send_buf[21], (const void*)_pushm_buffer_pointer, (word_size * 2));
	//int BuffIndex = idx * 1600;									// 내부 버퍼에 복사 할 Index
	//memcpy(&m_send_buf[21], (const void*)&gDataBuf[BuffIndex], (word_size * 2));

//#ifdef	_CONSOLE_DEBUG_MODE_
//	printf("Buff Index : %d \n", BuffIndex);

//#endif

	//waitpid(mutex_lock, 10000);
	pthread_mutex_lock(&mutex_lock);
	
	if (send(Socketno, m_send_buf, _send_length, 0) == SOCKET_ERROR)
	{
		error_log("mc_protocol_write_block() send() error...\n");
		//SockError(ERROR_SEND);
		pthread_mutex_unlock(&mutex_lock);
		return -1;
	}
	
	if (recv(Socketno, m_recv_buf, BUFFER_SIZE, 0) == SOCKET_ERROR)
	{
		error_log("mc_protocol_write_block() recv() error...\n");
		//SockError(ERROR_RECEIVE);
		pthread_mutex_unlock(&mutex_lock);
		return -1;
	}
	pthread_mutex_unlock(&mutex_lock);
	// M-PLC CPU측---> 상태기기(PMAC)측
	// 응답 스테이트먼트 확인

	// 2022.04.26 
	// 일단 바쁘니까 응답코드만 확인하자.!!
	// 종료코드 확인
	if (!(m_recv_buf[9] == 0x00 && m_recv_buf[10] == 0x00))
	{
		//*pSysCData_ResErrorcode = r_buf[9];
		//*pSysCData_ResErrorcode2 = r_buf[10];
		_temp_int = m_recv_buf[10];  //error code high
		_resp_error_code = ((_temp_int << 8) & 0x00FF00) + (m_recv_buf[9] & 0x0000FF);
	
		*((unsigned int*)pushm + FROM_MPLC_ERROR_CODE) = _resp_error_code;
	
	
		printf("[response for write, errorcode] r_buf[9] : %02x\n", m_recv_buf[9]);
		printf("[response for write, errorcode] r_buf[10] : %02x\n", m_recv_buf[10]);
		printf("Find mitsubishi mcprotocol commm errorcode : 0x0000%x\n", _resp_error_code);
		printf("code(Hex): %02x%02x\n", m_recv_buf[10], m_recv_buf[9]);
		error_log("thread_dataExchange(Write) response error...\n");
	
		return -1;
	}

	return 0;
}



int mc_protocol_read_block(int Socketno, unsigned int plc_read_word_start, unsigned int read_Udata_addr, int read_word_size)
{
	int _send_length;
	int _temp_int;
	unsigned int _temp_uint;
	//
	unsigned int _resp_error_code;
	int _resp_data_length;
	unsigned int* _pushm_buffer_pointer;
	//

	memset(m_send_buf, 0x00, sizeof(BUFFER_SIZE));
	memset(m_recv_buf, 0x00, sizeof(BUFFER_SIZE));
#ifdef	_CONSOLE_DEBUG_MODE_
	printf("read Index Start : %d, Shared Mem Index : %d\n",plc_read_word_start, read_Udata_addr);
#endif
	//D영역은 1칸에 1워드 단위
	//서브헤더(2byte)
	m_send_buf[0] = SUBHEADER_LO;
	m_send_buf[1] = SUBHEADER_HI;

	//--- Q헤더 시작----------------
	//네트워크 번호(1byte)
	m_send_buf[2] = NETWORK_NO; //하위 1바이트 사용

	//PC번호(1byte)
	m_send_buf[3] = PC_NO; //하위 1바이트 사용

	//요구상대모듈 I/O 번호(2byte) 
	m_send_buf[4] = REQ_DEST_IO_NO_LO; //Low
	m_send_buf[5] = REQ_DEST_IO_NO_HI; //High

	//요구상대모듈 국번호(1byte) 
	m_send_buf[6] = REQ_DEST_STATION_IO_NO; //하위 1바이트 사용

	//요구데이터 길이(2byte)
	// 고정
	m_send_buf[7] = READ_REQ_DATA_LENGTH_LO;   //Low
	m_send_buf[8] = READ_REQ_DATA_LENGTH_HI;   //High

	// CPU 감시 타이머
	m_send_buf[9] = READ_MONITORING_TIMER_LO; //Low
	m_send_buf[10] = READ_MONITORING_TIMER_HI; //High

	//커맨드
	// 0x0401 : 워드단위 일괄읽기
	m_send_buf[11] = READ_REQ_COMMAND_LO; //Low
	m_send_buf[12] = READ_REQ_COMMAND_HI; //High

	//서브커맨드
	m_send_buf[13] = READ_REQ_SUBCOMMAND_LO;
	m_send_buf[14] = READ_REQ_SUBCOMMAND_HI;

	//--선두 디바이스(3byte)-- 워드단위 시작 주소
	// 15~17 : 3바이트 / 시작주소 : 바이트오더를 유의할것
	// 리틀엔디안 인가봄.
	// 앞에서부터 Low
	m_send_buf[15] = ((plc_read_word_start >> 0) & HEX_BYTE_MASKING);
	m_send_buf[16] = ((plc_read_word_start >> 8) & HEX_BYTE_MASKING);
	m_send_buf[17] = ((plc_read_word_start >> 16) & HEX_BYTE_MASKING);

	//Device Code, D -> 0xA8
	m_send_buf[18] = MC_PROTOCOL_DATA_D_AREA;

	//다바이스 점수(2byte), 워드 단위
	//사이즈 (WORD 단위/ 2바이트 단위)	무조건 1점수 당 2byte(16bit), 즉 1워드 씩 준다.
	m_send_buf[19] = ((read_word_size >> 0) & HEX_BYTE_MASKING);  //LOW
	m_send_buf[20] = ((read_word_size >> 8) & HEX_BYTE_MASKING);  //HIGH


	_send_length = MC_FIXED_SIZE;

#ifdef	_CONSOLE_DEBUG_MODE_
	printf("[read] m_send_buf[0] : %02x\n", m_send_buf[0]);
	printf("[read] m_send_buf[1] : %02x\n", m_send_buf[1]);
	printf("[read] m_send_buf[2] : %02x\n", m_send_buf[2]);
	printf("[read] m_send_buf[3] : %02x\n", m_send_buf[3]);
	printf("[read] m_send_buf[4] : %02x\n", m_send_buf[4]);
	printf("[read] m_send_buf[5] : %02x\n", m_send_buf[5]);
	printf("[read] m_send_buf[6] : %02x\n", m_send_buf[6]);
	printf("[read] m_send_buf[7] : %02x\n", m_send_buf[7]);
	printf("[read] m_send_buf[8] : %02x\n", m_send_buf[8]);
	printf("[read] m_send_buf[9] : %02x\n", m_send_buf[9]);
	printf("[read] m_send_buf[10] : %02x\n", m_send_buf[10]);
	printf("[read] m_send_buf[11] : %02x\n", m_send_buf[11]);
	printf("[read] m_send_buf[12] : %02x\n", m_send_buf[12]);
	printf("[read] m_send_buf[13] : %02x\n", m_send_buf[13]);
	printf("[read] m_send_buf[14] : %02x\n", m_send_buf[14]);
	printf("[read] m_send_buf[15] : %02x\n", m_send_buf[15]);
	printf("[read] m_send_buf[16] : %02x\n", m_send_buf[16]);
	printf("[read] m_send_buf[17] : %02x\n", m_send_buf[17]);
	printf("[read] m_send_buf[18] : %02x\n", m_send_buf[18]);
	printf("[read] m_send_buf[19] : %02x\n", m_send_buf[19]);
	printf("[read] m_send_buf[20] : %02x\n", m_send_buf[20]);
#endif

	//waitpid(&mutex_lock, 10000);
	pthread_mutex_lock(&mutex_lock);

	if (send(Socketno, m_send_buf, _send_length, 0) == SOCKET_ERROR) {
		error_log("mc_protocol_read_block(read) send() error...\n");
		//SockError(ERROR_SEND);
		pthread_mutex_unlock(&mutex_lock);
		return -1;
	}

	if (recv(Socketno, m_recv_buf, BUFFER_SIZE, 0) == SOCKET_ERROR)
	{
		error_log("mc_protocol_read_block(read) recv() error...\n");
		//SockError(ERROR_RECEIVE);
		pthread_mutex_unlock(&mutex_lock);
		return -1;
	}

	pthread_mutex_unlock(&mutex_lock);

	//if (MC_Protocol_Read_Proc(*pSysCData_readDevice) < 0)	return -1;
	// 받은 응답에서 데이터를 파싱하여 pushm 영역에 복사.


#ifdef	_CONSOLE_DEBUG_MODE_
	printf("[response for read] r_buf[ 0] : %02x\n", m_recv_buf[0]);  // 서브헤더(0xD0)
	printf("[response for read] r_buf[ 1] : %02x\n", m_recv_buf[1]);  // 서브헤더(0x00)
	printf("[response for read] r_buf[ 2] : %02x\n", m_recv_buf[2]);  // 네트워크 번호 (0x00)
	printf("[response for read] r_buf[ 3] : %02x\n", m_recv_buf[3]);  // PLC번호(0xFF)
	printf("[response for read] r_buf[ 4] : %02x\n", m_recv_buf[4]);  // 요구상대모듈 I/O번호 Low (0xFF)
	printf("[response for read] r_buf[ 5] : %02x\n", m_recv_buf[5]);  // 요구상대모듈 I/O번호 High (0x03)
	printf("[response for read] r_buf[ 6] : %02x\n", m_recv_buf[6]);  // 요구상대모듈 국번호(0x00)
	printf("[response for read] r_buf[ 7] : %02x\n", m_recv_buf[7]);  // 응답데이터 길이(Low)
	printf("[response for read] r_buf[ 8] : %02x\n", m_recv_buf[8]);  // 응답데이터 길이(High)
	
	//정상이면 0x00 00, 비정상이면 Error Code
	printf("[response for read] r_buf[ 9] : %02x\n", m_recv_buf[9]);   // 종료코드(Low) 정상이면 0x00 
	printf("[response for read] r_buf[10] : %02x\n", m_recv_buf[10]); // 종료코드(High) 정상이면 0x00

	//정상이면 뒤에 데이터가 오고, 비정상이면 11byte 에러정보부가 온다.
	// (응답국) 네트워크 번호 (1byte)
	// (응답국) PLC번호 (1byte)
	// 요구 상대 모듈 i/o 번호 (2byte)
	// 요구 상대 모듈 국번호(1byte)
	// 커멘드(2byte)
	// 서브 커맨드(2byte)
#endif
	//end _CONSOLE_DEBUG_MELSEC_HEADER_


	//종료코드 확인
	if (!(m_recv_buf[9] == 0x00 && m_recv_buf[10] == 0x00))
	{
		//*pSysCData_ResErrorcode = r_buf[9];
		//*pSysCData_ResErrorcode2 = r_buf[10];

		_temp_int = m_recv_buf[10];  //error code high
		_resp_error_code = ((_temp_int << 8) & 0x00FF00) + (m_recv_buf[9] & 0x0000FF);

		//
		//*(mp_ushm.mc_protocol_resp_error_code) = _resp_error_code;
		printf("[response for read, errorcode] r_buf[9] : %02x\n", m_recv_buf[9]);
		printf("[response for read, errorcode] r_buf[10] : %02x\n", m_recv_buf[10]);
		printf("Find mitsubishi mcprotocol commm errorcode = 0x%x \n", _resp_error_code);
		printf("code(Hex): %02x%02x\n", m_recv_buf[10], m_recv_buf[9]);

		error_log("thread_dataExchange(read) response error...\n");
		return -1;
	}

	_resp_data_length = ((m_recv_buf[8] << 8) & 0x00FF00) + (m_recv_buf[7] & 0x0000FF);

	//byte 단위의 길이
	_resp_data_length = _resp_data_length - 2; //응답데이터 길이 - 종료코드(2Byte)

	//



#ifdef _CONSOLE_DEBUG_MODE_
	printf("[response for read] resDataLength : %0d\n", _resp_data_length);
#endif

	// tcp recv 버퍼에서 pushm 영역으로 복사
	// void *memcpy(void *dest, const void *src, size_t n);
	//dest 의 포인터를 반환합니다.
	_pushm_buffer_pointer = (unsigned int*)pushm + read_Udata_addr;
	memcpy((void*)_pushm_buffer_pointer, (const void*)&m_recv_buf[11], _resp_data_length);


	//int Index = 1600 * idx;
	//#ifdef	_CONSOLE_DEBUG_MODE_
	//	printf("buff index number : %d\n", Index);
	//#endif
	//memcpy((void*)&gDataBuf[Index], (const void*)&m_recv_buf[11], _resp_data_length);

	//SectorIndex++;
	return 0;
}


int connect_PLC()
{
	
	int _ret_num;
	struct timeval tv;
	struct sockaddr_in server_info, client_info;
	//
	unsigned int _time_sec, _time_msec, _time_usec;

	// Construct the server sockaddr_in structure 
	memset(&server_info, 0, sizeof(server_info));
	server_info.sin_family = AF_INET;
	server_info.sin_addr.s_addr = inet_addr(Config_Data.ip_address);
	server_info.sin_port = htons(Config_Data.port_no);             /* server port */

	printf("Func : connect_PLC() call ip : %s, port : %d\n", Config_Data.ip_address, Config_Data.port_no);

	/* Create the TCP socket */
	if ((m_clientsock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP)) < 0)
	{
		error_log("Failed to create socket...\n");
		return -1;
	}

	_time_sec = 0;
	_time_msec = SOCKET_TIMEOUT_MSEC;
	_time_usec = _time_msec * 1000;

	tv.tv_sec = _time_sec;      //send, recv timeout 설정
	tv.tv_usec = _time_usec;

	//recv 함수 timeout설정.. block 함수 escape
	if (setsockopt(m_clientsock, SOL_SOCKET, SO_RCVTIMEO, (char*)&tv, sizeof(tv)) == -1)
	{
		error_log("recv setsocketopt error...\n");
		return -1;
	}
	//send 함수 timeout설정.. block 함수 escape
	if (setsockopt(m_clientsock, SOL_SOCKET, SO_SNDTIMEO, (char*)&tv, sizeof(tv)) == -1)
	{
		error_log("send setsocketopt error...\n");
		return -1;
	}

	_ret_num = connect(m_clientsock, (struct sockaddr *) &server_info, sizeof(server_info));
	if (_ret_num < 0)
	{
		// 처음부터 안되면 프로그램 종료
		error_log("Failed to connect error socket...\n");
		return -1;
	}
	else // connection Success`
	{
		printf("[mc_protocol_with_pmac] Mitsubish PLC Connect Success\n");
		printf("[mc_protocol_with_pmac] setsocketopt time_out = %d sec / %d usec\n", _time_sec, _time_usec);
		fprintf(stdout, "[mc_protocol_with_pmac] Client connected: %s\n", inet_ntoa(server_info.sin_addr));
		//*pSysUData_app_exit = 0;
	}

	return 1;

}

