
#ifndef _PP_PROJ_H_
#define _PP_PROJ_H_
//***********************************************************************************
// C header for accessing PMAC Global, CSGlobal, Ptr vars
// _PPScriptMode_ for Pmac Script like access global & csglobal
// global Mypvar - access with "Mypvar"
// global Myparray(32) - access with "Myparray(i)"
// csglobal Myqvar - access with "Myqvar(i)" where "i" is Coord #
// csglobal Myqarray(16) - access with "Myqvar(i,j)" where "j" is index
// _EnumMode_ for Pmac enum data type checking on Set & Get global functions
// Example
// global Mypvar
// csglobal Myqvar
// "SetGlobalVar(Myqvar, data)" will give a compile error because its a csglobal var.
// "SetCSGlobalVar(Mypvar, data)" will give a compile error because its a global var.
//************************************************************************************

#ifdef _PPScriptMode_
enum globalP {_globalP_=-1};
enum globalParray {_globalParray_=-1};
enum csglobalQ {_csglobalQ_=-1};
enum csglobalQarray {_csglobalQarray_=-1};

enum ptrM {_ptrM_=-1
,M_Y_Final_Roll_Heating=1009
,M_X_Final_Roll_Heating=1010
,M_X_ARC_NP_Plate_Down=1022
,M_X_Pause_Anode_Signal=4000
,M_X_Pause_Cathode_Signal=4001
,M_X_Pause_to_Sequence_Signal=4002
,M_X_Pause_Ack_Signal=4003
,M_X_Pause_Status_Complete_Signal=4004
,M_X_Resume_Stop_Signal=4005
,M_X_Pause_Opposite_Status=4006
,M_X_Opposite_Lane_Status1=4007
,M_X_Opposite_Lane_Status2=4008
,M_X_Opposite_Lane_Status3=4009
,M_X_Opposite_Lane_Status4=4010
,M_X_Opposite_Lane_Status5=4011
,M_X_Abort_Command=4012
,M_X_Opposite_Resume_Not_Free=4013
,M_X_EMO_Signal=4014
,M_X_Vision_Anode_Align_Ready=4016
,M_X_Vision_Anode_Align_Busy=4017
,M_X_Vision_Anode_Align_HeartBit=4018
,M_X_Vision_Anode_Align_OK=4019
,M_X_Vision_Anode_Align_NG=4020
,M_X_Vision_Anode_Surface_OK=4021
,M_X_Vision_Anode_Surface_NG=4022
,M_X_Vision_Anode_Exist_OK=4023
,M_X_Vision_Anode_Exist_NG=4024
,M_X_Vision_Anode_Empty_OK=4025
,M_X_Vision_Anode_Empty_NG=4026
,M_X_Vision_Anode_Align_Start_ACK=4027
,M_X_Vision_Cathode_Align_Ready=4032
,M_X_Vision_Cathode_Align_Busy=4033
,M_X_Vision_Cathode_Align_HeartBit=4034
,M_X_Vision_Cathode_Align_OK=4035
,M_X_Vision_Cathode_Align_NG=4036
,M_X_Vision_Cathode_Surface_OK=4037
,M_X_Vision_Cathode_Surface_NG=4038
,M_X_Vision_Cathode_Exist_OK=4039
,M_X_Vision_Cathode_Exist_NG=4040
,M_X_Vision_Cathode_Empty_OK=4041
,M_X_Vision_Cathode_Empty_NG=4042
,M_X_Vision_Cathode_Align_Start_ACK=4043
,M_X_Vision_Stack_Ready=4048
,M_X_Vision_Stack_Busy=4049
,M_X_Vision_Stack_HeartBit=4050
,M_X_Vision_Stack_OK=4051
,M_X_Vision_Stack_NG=4052
,M_X_Vision_Stack_Start_Sheet_Ack=4053
,M_X_Vision_Stack_End_Sheet_Ack=4054
,M_X_Vision_Stack_First_Sepa_OK=4055
,M_X_Vision_Stack_First_Sepa_NG=4056
,M_X_Vision_Stack_EPC_Correction_Complete=4058
,M_X_PLC_Anode_Sheet_Ready=4064
,M_X_PLC_Anode_Sheet_Completed=4065
,M_X_PLC_Cathode_Sheet_Ready=4067
,M_X_PLC_Cathode_Sheet_Completed=4068
,M_X_PLC_2nd_Unloader_Ready_Pos=4070
,M_X_PLC_2nd_Unloader_Grip=4071
,M_X_PLC_to_1st_Avoid_Request=4072
,M_X_Discharge_Avoid_Complete_Ack=4073
,M_X_PLC_2nd_Unloader_Grip_Request_Ack=4074
,M_X_1st_Unloader_UnGrip_Ack=4075
,M_X_Memory_Data_Parsing_Complete=4077
,M_X_Emergency_Stop_From_PLC=4078
,M_X_PLC_Sync_Heart_Bit=4079
,M_X_First_Sheet_Paper_Plate_Vac_Sensor=4080
,M_X_First_Sheet_Paper_Plate_FWD_CYL_Sensor=4081
,M_X_First_Sheet_Paper_Plate_BWD_CYL_Sensor=4082
,M_X_ST_Center_CYL_Up_Sensor_1=4086
,M_X_ST_Center_CYL_Dn_Sensor_1=4087
,M_X_ST_Vac_Detect_Sensor=4088
,M_X_First_Sheet_Paper_Main_Position=4089
,M_X_ST_Center_CYL_Up_Sensor_2=4091
,M_X_ST_Center_CYL_Dn_Sensor_2=4092
,M_X_Cathode_AT_Vac_Sensor=4096
,M_X_Anode_AT_Vac_Sensor=4097
,M_X_Cathode_1st_PNP_Vac_Sensor=4098
,M_X_Cathode_1st_PNP_Collision_Detect_Sensor=4099
,M_X_Cathode_2nd_PNP_Vac_Sensor=4100
,M_X_Anode_1st_PNP_Vac_Sensor=4102
,M_X_Anode_1st_PNP_Collision_Detect_Sensor=4103
,M_X_Anode_2nd_PNP_Vac_Sensor=4104
,M_X_Opposite_Cathode_1st_PNP_Collision_Detect_Sensor=4108
,M_X_Opposite_Anode_1st_PNP_Collision_Detect_Sensor=4109
,M_X_SERVO_DRIVE_ALARM_1=4112
,M_X_SERVO_DRIVE_ALARM_2=4113
,M_X_SERVO_DRIVE_ALARM_3=4114
,M_X_SERVO_DRIVE_ALARM_4=4115
,M_X_SERVO_DRIVE_ALARM_5=4116
,M_X_SERVO_DRIVE_ALARM_6=4117
,M_X_SERVO_DRIVE_ALARM_7=4118
,M_X_SERVO_DRIVE_ALARM_8=4119
,M_X_SERVO_DRIVE_ALARM_11=4122
,M_X_SERVO_DRIVE_ALARM_12=4123
,M_X_SERVO_DRIVE_ALARM_13=4124
,M_X_SERVO_DRIVE_ALARM_15=4126
,M_X_SERVO_DRIVE_ALARM_16=4127
,M_X_SERVO_DRIVE_ALARM_17=4128
,M_X_SERVO_DRIVE_ALARM_18=4129
,M_X_SERVO_DRIVE_ALARM_19=4130
,M_X_SERVO_DRIVE_ALARM_20=4131
,M_X_SERVO_DRIVE_ALARM_21=4132
,M_X_SERVO_DRIVE_ALARM_22=4133
,M_X_SERVO_DRIVE_ALARM_23=4134
,M_X_SERVO_DRIVE_ALARM_24=4135
,M_X_SERVO_DRIVE_ALARM_25=4136
,M_X_SERVO_DRIVE_ALARM_26=4137
,M_X_SERVO_DRIVE_ALARM_27=4138
,M_X_SERVO_DRIVE_ALARM_28=4139
,M_X_BTN_CMD_Select_Switch=4160
,M_X_BTN_CMD_Auto_Start=4161
,M_X_BTN_CMD_Auto_Stop=4162
,M_X_BTN_CMD_Ready=4163
,M_X_BTN_CMD_Reset=4164
,M_X_BTN_Status_Safety_Enable=4165
,M_X_BTN_Press_Jog_Plus=4166
,M_X_BTN_Press_Jog_Minus=4167
,M_X_Trigger_1s_Cycle_HeartBit=4168
,M_X_Host_JR_ID_Create_Complete=4169
,M_X_Other_Door_Open_Signal=4170
,M_X_Trg_SV_Enable_From_PLC=4171
,M_X_Sepa_Upper_Unwinder_Status=4172
,M_X_Sepa_Lower_Unwinder_Status=4173
,M_X_MC_Reconnect_BTN_Signal=4175
,M_X_PLC_Trans_IN_Ack=4176
,M_X_PLC_JR_Data_Produce_Signal=4177
,M_X_PLC_Trans_OK=4178
,M_X_PLC_Trans_NG=4179
,M_X_ARC_Door_Signal=4180
,M_X_PLC_ULD_Home_Interlock_Signal=4181
,M_X_PLC_Work_Confirm_Operation_Flag=4183
,M_X_PLC_ULD_Home_UnGrip_Signal=4184
,M_X_PLC_Cathode_ReelCut_Door_Interlock=4185
,M_X_PLC_Anode_ReelCut_Door_Interlock=4186
,M_X_PLC_Cathode_Small_Door_Close_Signal=4187
,M_X_PLC_Anode_Small_Door_Close_Signal=4188
,M_X_Cathode_NG_PNP_Location_Sensor=4216
,M_X_Anode_NG_PNP_Location_Sensor=4217
,M_X_Cathode_NG_PNP_Vac_Sensor=4218
,M_X_Cathode_NG_Box_Sheet_Full_Detect_Sensor=4219
,M_X_Anode_NG_PNP_Vac_Sensor=4220
,M_X_Anode_NG_Box_Sheet_Full_Detect_Sensor=4221
,M_X_Cathode_NG_Box_Detect_Sensor=4222
,M_X_Anode_NG_Box_Detect_Sensor=4223
,M_X_Cathode_AT_FWD_Detect_Sensor=4224
,M_X_Anode_AT_FWD_Detect_Sensor=4226
,M_X_1st_Unloader_JR_Grip_Pressure_Sensor=4229
,M_X_1st_Unloader_Grip_Detect_Sensor=4230
,M_X_1st_Unloader_UnGrip_Detect_Sensor=4231
,M_X_ARC_NP_Two_Btn_Signal=4232
,M_X_ARC_NP_Upper_Plate_Vac_On=4233
,M_X_ARC_NP_Lower_Plate_Vac_On=4234
,M_X_ARC_NP_BTN_Reset=4235
,M_X_ARC_NP_BTN_Unwinder_Spool_Home=4236
,M_X_ARC_NP_BTN_Ready=4237
,M_X_ARC_NP_BTN_Unwinder_Auto_Alignment=4238
,M_X_ARC_NP_BTN_Plate_Tilting=4239
,M_X_ARC_NP_BTN_Unwinder_Lock_Unlock=4240
,M_X_ARC_NP_BTN_Unwinder_Rotation=4241
,M_X_ARC_NP_BTN_Unwinder_Re_Rotation=4242
,M_X_ARC_NP_BTN_Plate_Vac_On_Off=4243
,M_X_ARC_NP_BTN_Plate_Sepa_Cutting=4244
,M_X_ARC_NP_BTN_Plate_Stopper_Clamp=4245
,M_X_ARC_NP_BTN_Plate_Up_Dn=4246
,M_X_ARC_NP_Auto_Reel_Change_Upper=4248
,M_X_ARC_NP_Auto_Reel_Change_Lower=4249
,M_X_Heat_Cable_Meter_GO=4251
,M_X_Heat_Cable_Meter_HI=4252
,M_X_Heat_Cable_Meter_LO=4253
,M_X_FR_Sepa_Cutter_Up_Sensor=4288
,M_X_FR_Sepa_Cutter_Dn_Sensor=4289
,M_X_FR_Sepa_Clamp_Front_Sensor=4292
,M_X_FR_Sepa_UnClamp_Front_Sensor=4293
,M_X_FR_Sepa_Clamp_Rear_Sensor=4294
,M_X_FR_Sepa_UnClamp_Rear_Sensor=4295
,M_X_Cathode_Belt_Partition_Up_Sensor=4300
,M_X_Cathode_Belt_Partition_Down_Sensor=4301
,M_X_Anode_Belt_Partition_Up_Sensor=4302
,M_X_Anode_Belt_Partition_Down_Sensor=4303
,M_X_FR_Clamping_Sub_Roller_UnClamp_1=4304
,M_X_FR_Clamping_Sub_Roller_Clamp_1=4305
,M_X_FR_Clamping_Sub_Roller_UnClamp_2=4306
,M_X_FR_Clamping_Sub_Roller_Clamp_2=4307
,M_X_Sepa_ARC_Upper_Ejector_Vac_Sensor=4308
,M_X_Sepa_ARC_Lower_Ejector_Vac_Sensor=4309
,M_X_Sepa_Upper_ARC_Up_Sensor=4312
,M_X_Sepa_Upper_ARC_Dn_Sensor=4313
,M_X_Sepa_Upper_ARC_UnTilting_Sensor_Front=4314
,M_X_Sepa_Upper_ARC_Tilting_Sensor_Front=4315
,M_X_Sepa_Upper_ARC_UnTilting_Sensor_Rear=4316
,M_X_Sepa_Upper_ARC_Tilting_Sensor_Rear=4317
,M_X_Sepa_Upper_ARC_Cutting_FWD_Sensor=4318
,M_X_Sepa_Upper_ARC_Cutting_BWD_Sensor=4319
,M_X_Sepa_Upper_ARC_UnStopper_Front_Sensor=4320
,M_X_Sepa_Upper_ARC_Stopper_Front_Sensor=4321
,M_X_Sepa_Upper_ARC_UnStopper_Rear_Sensor=4322
,M_X_Sepa_Upper_ARC_Stopper_Rear_Sensor=4323
,M_X_Sepa_Lower_ARC_Up_Sensor=4324
,M_X_Sepa_Lower_ARC_Dn_Sensor=4325
,M_X_Sepa_Lower_ARC_UnTilting_Sensor_Front=4326
,M_X_Sepa_Lower_ARC_Tilting_Sensor_Front=4327
,M_X_Sepa_Lower_ARC_UnTilting_Sensor_Rear=4328
,M_X_Sepa_Lower_ARC_Tilting_Sensor_Rear=4329
,M_X_Sepa_Lower_ARC_Cutting_FWD_Sensor=4330
,M_X_Sepa_Lower_ARC_Cutting_BWD_Sensor=4331
,M_X_Sepa_Lower_ARC_UnStopper_Front_Sensor=4332
,M_X_Sepa_Lower_ARC_Stopper_Front_Sensor=4333
,M_X_Sepa_Lower_ARC_UnStopper_Rear_Sensor=4334
,M_X_Sepa_Lower_ARC_Stopper_Rear_Sensor=4335
,M_X_Sepa_Ionizer_1_Run=4336
,M_X_Sepa_Ionizer_1_Error=4337
,M_X_Sepa_Ionizer_2_Run=4338
,M_X_Sepa_Ionizer_2_Error=4339
,M_X_Sepa_Ionizer_3_Run=4340
,M_X_Sepa_Ionizer_3_Error=4341
,M_Y_Pause_Anode_Signal=5000
,M_Y_Pause_Cathode_Signal=5001
,M_Y_Pause_to_Sequence_Signal=5002
,M_Y_Pause_Ack_Signal=5003
,M_Y_Pause_Status_Complete_Signal=5004
,M_Y_Resume_Stop_Signal=5005
,M_Y_Pause_Opposite_Status=5006
,M_Y_P_PMAC_Status1=5007
,M_Y_P_PMAC_Status2=5008
,M_Y_P_PMAC_Status3=5009
,M_Y_P_PMAC_Status4=5010
,M_Y_P_PMAC_Status5=5011
,M_Y_Abort_Command=5012
,M_Y_Opposite_Resume_Not_Free=5013
,M_Y_Vision_Anode_Align_Ready=5016
,M_Y_Vision_Anode_Align_Heartbit=5017
,M_Y_VisioN_Align_AN_Trigger=5018
,M_Y_Vision_Anode_Align_Result_Ack=5019
,M_Y_Vision_Anode_Surface_Trigger=5020
,M_Y_Vision_Anode_Surface_Result_Ack=5021
,M_Y_Vision_Anode_Empty_Trigger=5022
,M_Y_Vision_Anode_Empty_Result_Ack=5023
,M_Y_Vision_Anode_Exist_Trigger=5024
,M_Y_Vision_Anode_Exist_Result_Ack=5025
,M_Y_Vision_Anode_Align_Start=5026
,M_Y_Vision_Anode_Data_Transfer_Trigger=5027
,M_Y_VisioN_Align_AN_TimeOut_Flag=5028
,M_Y_Vision_Anode_Surface_TimeOut_Flag=5029
,M_Y_Vision_Anode_Save_Sheet_Data=5030
,M_Y_Vision_Anode_Aling_Move_Complete=5031
,M_Y_Vision_Cathode_Align_Ready=5032
,M_Y_Vision_Cathode_Align_Heartbit=5033
,M_Y_VisioN_Align_CA_Trigger=5034
,M_Y_Vision_Cathode_Align_Result_Ack=5035
,M_Y_Vision_Cathode_Surface_Trigger=5036
,M_Y_Vision_Cathode_Surface_Result_Ack=5037
,M_Y_Vision_Cathode_Empty_Trigger=5038
,M_Y_Vision_Cathode_Empty_Result_Ack=5039
,M_Y_Vision_Cathode_Exist_Trigger=5040
,M_Y_Vision_Cathode_Exist_Result_Ack=5041
,M_Y_Vision_Cathode_Align_Start=5042
,M_Y_Vision_Cathode_Data_Transfer_Trigger=5043
,M_Y_VisioN_Align_CA_TimeOut_Flag=5044
,M_Y_Vision_Cathode_Surface_TimeOut_Flag=5045
,M_Y_Vision_Cathode_Save_Sheet_Data=5046
,M_Y_Vision_Cathode_Aling_Move_Complete=5047
,M_Y_Vision_Stack_Ready=5048
,M_Y_Vision_Stack_HeartBit=5049
,M_Y_Vision_Stack_Anode_Trigger=5050
,M_Y_Vision_Stack_Cathode_Trigger=5051
,M_Y_Vision_Stack_Result_Ack=5052
,M_Y_Vision_Stack_Start_Sheet=5053
,M_Y_Vision_Stack_End_Sheet=5054
,M_Y_Vision_Stack_Sepa_Mode_Anode_Trigger=5055
,M_Y_Vision_Stack_Sepa_Mode_Cathode_Trigger=5056
,M_Y_Vision_Stack_First_Sepa_Trigger=5057
,M_Y_Vision_Stack_First_Sepa_Result_Ack=5058
,M_Y_Vision_Stack_TimeOut_Flag=5059
,M_Y_Vision_Stack_EPC_Correction_Trigger=5060
,M_Y_Vision_Jelly_Roll_Not_Stacking_Flag=5063
,M_Y_PLC_A_Anode_Sheet_Start=5064
,M_Y_PLC_A_Anode_Sheet_Completed=5065
,M_Y_PLC_A_Anode_Interlock=5066
,M_Y_PLC_A_Cathode_Sheet_Start=5067
,M_Y_PLC_A_Cathode_Sheet_Completed=5068
,M_Y_PLC_A_Cathode_Interlock=5069
,M_Y_Discharge_Avoid_Complete=5070
,M_Y_PLC_Unloader_Grip_Request=5071
,M_Y_1st_Unloader_UnGrip_Complete=5072
,M_Y_1st_Avoid_Pos_Discharge_Complete=5073
,M_Y_PLC_Unloader_Ready_Pos_Ack=5074
,M_Y_PLC_Unloader_Grip_Ack=5075
,M_Y_PLC_to_1st_Avoid_Request_Ack=5076
,M_Y_PLC_to_Memory_Data_Parsing_Request=5077
,M_Y_EtherCAT_Connected=5078
,M_Y_PLC_Sync_Heart_Bit=5079
,M_Y_ST_Center_Sol=5080
,M_Y_First_Sheet_Paper_Plate_FWD_Sol=5083
,M_Y_First_Sheet_Paper_Plate_BWD_Sol=5084
,M_Y_First_Sheet_Paper_Plate_Ejector_Vac_On=5085
,M_Y_First_Sheet_Paper_Plate_Ejector_Vac_Off=5086
,M_Y_ST_Center_Ejector_VAC_On=5087
,M_Y_ST_Center_Ejector_VAC_Off=5088
,M_Y_Cathode_AT_Vac_Ejector_Vac_On=5092
,M_Y_Cathode_AT_Vac_Ejector_Vac_Off=5093
,M_Y_Anode_AT_Vac_Ejector_Vac_On=5094
,M_Y_Anode_AT_Vac_Ejector_Vac_Off=5095
,M_Y_Cathode_1st_Vac_Sol_On=5098
,M_Y_Cathode_1st_Vac_Sol_Off=5099
,M_Y_Cathode_2nd_Vac_Sol_On=5102
,M_Y_Cathode_2nd_Vac_Sol_Off=5103
,M_Y_Anode_1st_Vac_Sol_On=5106
,M_Y_Anode_1st_Vac_Sol_Off=5107
,M_Y_Anode_2nd_Vac_Sol_On=5110
,M_Y_Anode_2nd_Vac_Sol_Off=5111
,M_Y_Unwinder_Upper_Laser_Point=5112
,M_Y_Unwinder_Lower_Laser_Point=5113
,M_Y_Inner_Led_Lamp_On=5114
,M_Y_Sepa_Cutter_SSR_On=5115
,M_Y_Inovance_EMG_Signal=5116
,M_Y_Servo_Driver_Reset_Motor_1=5118
,M_Y_Servo_Driver_Reset_Motor_2=5119
,M_Y_Servo_Driver_Reset_Motor_3=5120
,M_Y_Servo_Driver_Reset_Motor_4=5121
,M_Y_Servo_Driver_Reset_Motor_5=5122
,M_Y_Servo_Driver_Reset_Motor_6=5123
,M_Y_Servo_Driver_Reset_Motor_7=5124
,M_Y_Servo_Driver_Reset_Motor_8=5125
,M_Y_Servo_Driver_Reset_Motor_27=5126
,M_Y_Servo_Driver_Reset_Motor_28=5127
,M_Y_Servo_Driver_Reset_Motor_11=5128
,M_Y_Servo_Driver_Reset_Motor_12=5129
,M_Y_Servo_Driver_Reset_Motor_13=5130
,M_Y_Servo_Driver_Reset_Motor_14=5131
,M_Y_Servo_Driver_Reset_Motor_15=5132
,M_Y_Servo_Driver_Reset_Motor_16=5133
,M_Y_Servo_Driver_Reset_Motor_17=5134
,M_Y_Servo_Driver_Reset_Motor_18=5135
,M_Y_Servo_Driver_Reset_Motor_19=5136
,M_Y_Servo_Driver_Reset_Motor_20=5137
,M_Y_Servo_Driver_Reset_Motor_21=5138
,M_Y_Servo_Driver_Reset_Motor_22=5139
,M_Y_Servo_Driver_Reset_Motor_23=5140
,M_Y_Servo_Driver_Reset_Motor_24=5141
,M_Y_Servo_Driver_Reset_Motor_25=5142
,M_Y_Servo_Driver_Reset_Motor_26=5143
,M_Y_Trigger_Display_Current_Mode_To_PLC=5144
,M_Y_Trigger_Display_Current_Execute_To_PLC=5145
,M_Y_Trigger_Display_Current_Stop_To_PLC=5146
,M_Y_Trigger_Display_Enable_Alarm_To_PLC=5147
,M_Y_Trigger_Display_Selected_Motor_Status_To_PLC=5148
,M_Y_Host_JR_ID_Create_Request=5149
,M_Y_1s_Cycle_HeartBit=5152
,M_Y_PLC_Cathode_Sheet_NG=5160
,M_Y_PLC_Anode_Sheet_NG=5161
,M_Y_EPC_Vertical_Panel_Manual_Signal=5165
,M_Y_PLC_Stacking_OK_JR=5166
,M_Y_PLC_Stacking_NG_JR=5167
,M_Y_PLC_Full_Stacking_NG_JR_Unload=5168
,M_Y_PLC_NonFull_Stacking_NG_JR_Unload=5169
,M_Y_PLC_Sepa_Stacking_Unload=5170
,M_Y_Trg_SV_Receive_Complete_To_PLC=5171
,M_Y_Sepa_Upper_Unwinder_Status=5172
,M_Y_Sepa_Lower_Unwinder_Status=5173
,M_Y_PLC_Trans_IN_Signal=5176
,M_Y_PLC_JR_Data_Produce_Signal=5177
,M_Y_PLC_ULD_Home_Interlock_Signal=5178
,M_Y_Sheet_enable_Flag=5179
,M_Y_PLC_Work_Confirm_Operation_Ack=5180
,M_Y_PLC_1st_ULD_Wait_Pos=5181
,M_Y_PLC_ARC_EPC_Value_Apply_Signal=5182
,M_Y_1st_Grip_State=5183
,M_Y_1st_UnGrip_State=5184
,M_Y_PLC_ARC_1st_Sepa_Mode_Signal=5185
,M_Y_Cathode_1st_PNP_Sheet_Wait=5186
,M_Y_Anode_1st_PNP_Sheet_Wait=5187
,M_Y_ST_Cathode_Clamp_Damper_Sol=5208
,M_Y_ST_Anode_Clamp_Damper_Sol=5209
,M_Y_ST_Center_Cyl_Up_Sol=5210
,M_Y_ST_Center_Cyl_Dn_Sol=5211
,M_Y_ST_Zero_Clamp_Sol=5212
,M_Y_1st_Unloader_UnGrip_Sol=5214
,M_Y_1st_Unloader_Grip_Sol=5215
,M_Y_1st_Unloader_JR_Grip_Blow_Sol=5216
,M_Y_Cathode_AT_Zero_Clamp_Sol=5218
,M_Y_Anode_AT_Zero_Clamp_Sol=5219
,M_Y_Cathode_NG_PNP_Ejector_Vac_On=5224
,M_Y_Cathode_NG_PNP_Ejector_Vac_Off=5225
,M_Y_Anode_NG_PNP_Ejector_Vac_On=5226
,M_Y_Anode_NG_PNP_Ejector_Vac_Off=5227
,M_Y_NP_BTN_Reset=5240
,M_Y_NP_BTN_Spool_Home=5241
,M_Y_NP_BTN_Ready=5242
,M_Y_NP_BTN_Alignment=5243
,M_Y_NP_BTN_Tilting=5244
,M_Y_NP_BTN_Chuck_Unchuck=5245
,M_Y_NP_BTN_Rotation=5246
,M_Y_NP_BTN_Re_Rotation=5247
,M_Y_NP_BTN_Vacuum_On_OFF=5248
,M_Y_NP_BTN_Sepa_Cutting=5249
,M_Y_NP_BTN_Clamp_On_OFF=5250
,M_Y_NP_BTN_Plate_Up_Down=5251
,M_Y_ARC_NP_Two_Btn_Signal=5253
,M_Y_Sepa_ARC_Upper_Dn_Sol=5288
,M_Y_Sepa_ARC_Upper_Up_Sol=5289
,M_Y_Sepa_ARC_Upper_UnTilting_Sol=5290
,M_Y_Sepa_ARC_Upper_Tilting_Sol=5291
,M_Y_Sepa_ARC_Upper_Cutting_FWD_Sol=5292
,M_Y_Sepa_ARC_Upper_Cutting_BWD_Sol=5293
,M_Y_Sepa_ARC_Upper_Stopper_FWD_Sol=5294
,M_Y_Sepa_ARC_Upper_Stopper_BWD_Sol=5295
,M_Y_Sepa_ARC_Lower_Up_Sol=5296
,M_Y_Sepa_ARC_Lower_Dn_Sol=5297
,M_Y_Sepa_ARC_Lower_UnTilting_Sol=5298
,M_Y_Sepa_ARC_Lower_Tilting_Sol=5299
,M_Y_Sepa_ARC_Lower_Cutting_FWD_Sol=5300
,M_Y_Sepa_ARC_Lower_Cutting_BWD_Sol=5301
,M_Y_Sepa_ARC_Lower_Stopper_FWD_Sol=5302
,M_Y_Sepa_ARC_Lower_Stopper_BWD_Sol=5303
,M_Y_An_Ca_Partition_Down_Sol=5304
,M_Y_An_Ca_Partition_Up_Sol=5305
,M_Y_Upper_Unwinder_Lock_Sol=5308
,M_Y_Upper_Unwinder_UnLock_Sol=5309
,M_Y_Lower_Unwinder_Lock_Sol=5310
,M_Y_Lower_Unwinder_UnLock_Sol=5311
,M_Y_Sepa_Ionizer_1_2_3_Blow_Off=5312
,M_Y_Stack_Vision_Camera_Clamp_Sol=5313
,M_Y_Sepa_Ionizer_1_Remote_Off=5314
,M_Y_Sepa_Ionizer_2_Remote_Off=5315
,M_Y_Sepa_Ionizer_3_Remote_Off=5316
,M_Y_FR_Clamping_Sub_Roller_Clamp=5320
,M_Y_FR_Clamping_Sub_Roller_Unclamp=5321
,M_Y_FR_Sepa_Cutter_Dn_Sol=5324
,M_Y_FR_Sepa_Cutter_Up_Sol=5325
,M_Y_FR_Sepa_Clamp=5326
,M_Y_FR_Sepa_UnClamp=5327
,M_Y_Sepa_Upper_ARC_Ejector_Vac_On=5336
,M_Y_Sepa_Upper_ARC_Ejector_Vac_Off=5337
,M_Y_Sepa_Lower_ARC_Ejector_Vac_On=5338
,M_Y_Sepa_Lower_ARC_Ejector_Vac_Off=5339
,M_X_Detect_1ST_TR_Anode_VAC_On=1000
,M_X_Detect_2ND_TR_Anode_VAC_On=1001
,M_X_Detect_1ST_TR_Cathode_VAC_On=1002
,M_X_Detect_2ND_TR_Cathode_VAC_On=1003
,M_X_Detect_Align_Anode_VAC_On=1004
,M_X_Detect_Align_Cathode_VAC_On=1005
,M_AI_Sepa_Upper_Sensing=5400
,M_AI_Sepa_Lower_Sensing=5401
,M_AI_FR_Detect_Sensing=5402
,M_AI_Dancer_Regulator=5404
,M_AI_Friction_Dancer=5405
,M_AI_Cathode_Clamp_Regulator=5406
,M_AI_Anode_Clamp_Regulator=5407
,M_AI_1st_Unloader_Grip_Sensing=5408
,M_AI_Cutter_Heat_Meter=5410
,M_AO_Cathode_Clamp_Regulator=5412
,M_AO_Anode_Clamp_Regulator=5413
,M_AO_Dancer_Regulator=5414
,M_Sys_Time=8296
,M_Cathode_Belt_MNTR=8351
,M_Cathode_1st_MNTR=8352
,M_Cathode_Align_MNTR=8353
,M_Cathode_2nd_MNTR=8354
,M_Anode_Belt_MNTR=8355
,M_Anode_1st_MNTR=8356
,M_Anode_Align_MNTR=8357
,M_Anode_2nd_MNTR=8358
,M_X_Vision_Stack_Align_Ok=4228
,M_X_Vision_Stack_Align_Ng=4227
,M_Y_PLC_EPCAlignMode_Complete_Return=5195
,M_Y_Vision_Stack_EPC_Align_Vision_Trigger=5234
,M_Y_A_Site_Heart_Bit=5014
,M_X_PLC_Anode_Sheet_Ready2=4010
,M_X_PLC_Cathode_Sheet_Ready2=4011
,M_X_B_Site_Heart_Bit=4014
,M_PLC_HeartBit_Flag=4223
,M_X_BTN_Press_Jog_Left_From_PLC=4160
,M_X_BTN_Press_Jog_Right_From_PLC=4107
,M_Sample_JR_Prod_Count=8359
,M_Sample_Btn_Flag=8360
,M_Stack_Host_ID_Buffer_Mode=8569
,M_Stack_Host_ID_Sample_Type=8570
,M_Stack_Host_ID_JR_Result=8571
,M_Stack_Host_ID_NG_Type=8572
,M_Manual_ARC_BTN=9134
,M_EPC_SENSOR_Load_Ratio=6033
,M_STACK_VISION_Load_Ratio=6034
,M_SHEET_PAPER_X_Load_Ratio=6035
,M_Align_CA_X_Load_Ratio=6036
,M_Align_CA_Y_Load_Ratio=6037
,M_Align_CA_T_Load_Ratio=6038
,M_Align_AN_X_Load_Ratio=6039
,M_Align_AN_Y_Load_Ratio=6040
,M_Align_AN_T_Load_Ratio=6041
,M_NG_PnP_CA_T_Load_Ratio=6042
,M_NG_PnP_AN_T_Load_Ratio=6043
,M_NG_PnP_CA_Z_Load_Ratio=6044
,M_NG_PnP_AN_Z_Load_Ratio=6045
,M_UNLOADER_X_Load_Ratio=6046
,M_UNLOADER_Z_Load_Ratio=6047
,M_UNLOADER_T_Load_Ratio=6048};
enum ptrMarray {_ptrMarray_=-1
,M_Ecat_Load_Ratio=8192
,M_Read_Sector_Scan_Complete=8242
,M_Write_Sector_Scan_Complete=8251
,M_Read_Sector_Scan_Cmd=8260
,M_Write_Sector_Scan_Cmd=8269
,M_Read_Sector_Scan_Time=8278
,M_Write_Sector_Scan_Time=8287
,M_Gate3_MinusLimit=8297
,M_Gate3_HomeLimit=8324
,M_Touchprobefunction=8361
,M_Touchprobestatus=8410
,M_Ecat_Motor_State=8459
,M_Motor_BTN_Info=8509
,M_ASCII_Stack_Work_Host_Sepa_ID_Buffer=8559
,M_ASCII_Read_Stack_Work_Host_Sepa_ID_Buffer=8573
,M_ASCII_Uloader_1st_Host_ID_Buffer=8580
,M_ASCII_Anode_Sheet_Belt_Buffer=8590
,M_ASCII_Anode_Sheet_Buffer=8597
,M_ASCII_Cathode_Sheet_Belt_Buffer=8653
,M_ASCII_Cathode_Sheet_Buffer=8660
,M_ASCII_First_Sheet_Buffer=8716
,M_ASCII_Last_Sheet_Buffer=8723
,P_BTN_Jog_BWD_M=8730
,P_BTN_Jog_FWD_M=8780
,M_UnWinder_BTN_Lamp=8830
,M_Cathode_BTN_Lamp=8846
,M_Anode_BTN_Lamp=8878
,M_Stack_BTN_Lamp=8910
,M_ARC_BTN_Lamp=8942
,M_UnWinder_BTN_Interlock=8974
,M_Cathode_BTN_Interlock=8990
,M_Anode_BTN_Interlock=9022
,M_Stack_BTN_Interlock=9054
,M_ARC_BTN_Interlock=9086
,M_NP_BTN_Interlock=9118
,M_Motor_Vel=9135
,M_Motor_TA=9185
,M_Motor_TD=9235
,M_Motor_BTN=9285
,M_Motor_RecipePos=9335
,M_Motor_Move_Distance=9385
,M_Motor_Home_Offset=9435
,M_Motor_Pos_Data=9485
,M_Motor_Status_Data=9535
,M_Motor_Recipe_Pos_Interlock=9585
,M_Motor_Peak_Load_Ratio=9635
,M_Motor_Effective_Load_Ratio=9685
,M_Motor_Check_Current_Recipe_Pos=9735};
#define	P_Ca_1st_PNP_HomeOffset	pshm->P[8192]
#define	P_An_1st_PNP_HomeOffset	pshm->P[8193]
#define	P_Ca_2nd_PNP_HomeOffset	pshm->P[8194]
#define	P_An_2nd_PNP_HomeOffset	pshm->P[8195]
#define	P_Ca_1st_PNP_ABSPhasing_Pos(i)	pshm->P[(8196+i)%MAX_P]
#define	P_An_1st_PNP_ABSPhasing_Pos(i)	pshm->P[(8236+i)%MAX_P]
#define	P_Ca_2nd_PNP_ABSPhasing_Pos(i)	pshm->P[(8276+i)%MAX_P]
#define	P_An_2nd_PNP_ABSPhasing_Pos(i)	pshm->P[(8316+i)%MAX_P]
#define	P_Project_Ver_A	pshm->P[8356]
#define	P_Project_Ver_B	pshm->P[8357]
#define	P_Project_Ver_C	pshm->P[8358]
#define	P_Project_Ver_D	pshm->P[8359]
#define	P_Sepa_Test	pshm->P[8360]
#define	P_Cur_Equip_No	pshm->P[8361]
#define	M_X_ARC_NP_Plate_Select	pshm->P[2050]
#define	P_Home_Status(i)	pshm->P[(8362+i)%MAX_P]
#define	P_Status_PMAC_Alarm_Reset	pshm->P[5387]
#define	P_Driving_Circumference	pshm->P[8412]
#define	P_PLC06_Spool_Circumference	pshm->P[8413]
#define	P_Upper_Spool_Circumference	pshm->P[8414]
#define	P_Lower_Spool_Circumference	pshm->P[8415]
#define	P_CamTable_MAX_EA	pshm->P[8416]
#define	P_Cam_Move_Distanse	pshm->P[8417]
#define	P_Sepa_Driving_Diameter	pshm->P[8418]
#define	P_PI	pshm->P[8419]
#define	Sys_Kill_Manual_BG_C	pshm->P[7777]
#define	P_Max_Try_Reconnect_MC	pshm->P[8420]
#define	P_Cur_Try_Reconnect_MC	pshm->P[8421]
#define	P_Modbus_Connected_Flag	pshm->P[8422]
#define	P_Write_Modbus_HeartBeat	pshm->P[1500]
#define	P_Homing_Step_Monitor(i)	pshm->P[(8423+i)%MAX_P]
#define	P_231213_Test_Status(i)	pshm->P[(8473+i)%MAX_P]
#define	P_BTN_Sepa_Stack_Mode	pshm->P[8523]
#define	P_BTN_Dryrun_Mode	pshm->P[8524]
#define	P_X_Btn_Align_Table_Take_Off	pshm->P[8525]
#define	P_Align_Table_Take_Off_Flag	pshm->P[8526]
#define	P_Flag_AT_Take_Off_Home_Chk_Flag	pshm->P[8527]
#define	P_Align_Table_Take_Off_State_Machine	pshm->P[8528]
#define	P_Align_Table_Take_Off_Status	pshm->P[8529]
#define	P_AT_Take_Off_Jog_Speed	pshm->P[8530]
#define	P_2nd_Transfer_AT_Take_Off_Pos	pshm->P[8531]
#define	P_VISION_Initial_Pos_Cmd	pshm->P[8532]
#define	P_VISION_Cal_Pos_Cmd	pshm->P[8533]
#define	P_FR_Anode_Dritection_Pos_Cmd	pshm->P[8534]
#define	P_FR_Cahode_Dritection_Pos_Cmd	pshm->P[8535]
#define	P_Anode_AT_Resolution_Cal_Pos_Cmd	pshm->P[8536]
#define	P_Cathode_AT_Resolution_Cal_Pos_Cmd	pshm->P[8537]
#define	P_Vision_Initial_Pos_Status_Machine	pshm->P[8538]
#define	P_Vision_Cal_Pos_Status_Machine	pshm->P[8539]
#define	P_FR_Anode_Dritection_Pos_Status_Machine	pshm->P[8540]
#define	P_FR_Cahode_Dritection_Pos_Status_Machine	pshm->P[8541]
#define	P_Anode_AT_Resolution_Cal_Pos_Status_Machine	pshm->P[8542]
#define	P_Cathode_AT_Resolution_Cal_Pos_Status_Machine	pshm->P[8543]
#define	P_Status_Vision_Initial_Pos	pshm->P[8544]
#define	P_Status_Vision_Cal_Pos	pshm->P[8545]
#define	P_Status_FR_Anode_Dritection_Pos	pshm->P[8546]
#define	P_Status_FR_Cahode_Dritection_Pos	pshm->P[8547]
#define	P_Status_An_AT_Resolution_Cal_Pos	pshm->P[8548]
#define	P_Status_Ca_AT_Resolution_Cal_Pos	pshm->P[8549]
#define	P_CMD_Cleaning_Pos	pshm->P[8550]
#define	P_Cleaning_Pos_Status_Machine	pshm->P[8551]
#define	P_Status_Cleaning_Pos	pshm->P[8552]
#define	P_Push_Manual_ARC_Button	pshm->P[8553]
#define	P_Push_Cycle_Stop_Button	pshm->P[8554]
#define	P_BTN_Push_Cathode_MSA_Mode	pshm->P[8555]
#define	P_BTN_Push_Anode_MSA_Mode	pshm->P[8556]
#define	P_BTN_Push_Cathode_Align_MSA	pshm->P[8557]
#define	P_BTN_Push_Anode_Align_MSA	pshm->P[8558]
#define	P_Btn_Vision_Initial_Pos	pshm->P[8559]
#define	P_Btn_Vision_Cal_Pos	pshm->P[8560]
#define	P_Btn_Vision_Cal_Anode_Move	pshm->P[8561]
#define	P_Btn_Vision_Cal_Cathode_Move	pshm->P[8562]
#define	P_Btn_An_AT_Resolution_Cal_Pos	pshm->P[8563]
#define	P_Btn_Ca_AT_Resolution_Cal_Pos	pshm->P[8564]
#define	P_Btn_Cleaning_Mode_Pos	pshm->P[8565]
#define	P_BTN_Push_Align_Auto_Cal_Ready_Pos_Move(i)	pshm->P[(8566+i)%MAX_P]
#define	P_CMD_MSA_Run(i)	pshm->P[(8569+i)%MAX_P]
#define	P_AutoVisionCal_StMachine	pshm->P[8574]
#define	P_CMD_Cathode_Align_Complete	pshm->P[8575]
#define	P_CMD_Anode_Align_Complete	pshm->P[8576]
#define	P_CMD_Align_Auto_Cal_Ready_Pos_Move_Run(i)	pshm->P[(8577+i)%MAX_P]
#define	P_Align_Auto_Cal_Ready_Pos_Move_Run_State_Machine(i)	pshm->P[(8580+i)%MAX_P]
#define	P_Align_Auto_Cal_Ready_Pos_Move_Run_Status(i)	pshm->P[(8583+i)%MAX_P]
#define	P_Align_Auto_Cal_Ready_Pos_Move_Run_Complete(i)	pshm->P[(8586+i)%MAX_P]
#define	P_Cal_Ready_Pos_Move_TR_Z_Jog_Speed	pshm->P[8589]
#define	P_Cal_Ready_Pos_Move_TR_X_Jog_Speed	pshm->P[8590]
#define	P_CMD_Cell_Align(i)	pshm->P[(8591+i)%MAX_P]
#define	P_CMD_Cell_Stop(i)	pshm->P[(8601+i)%MAX_P]
#define	P_CMD_Cell_Reset(i)	pshm->P[(8611+i)%MAX_P]
#define	P_Anode_Clamp_Z1_Initial_Pos_mm	pshm->P[8621]
#define	P_Anode_Clamp_Z2_Initial_Pos_mm	pshm->P[8622]
#define	P_Cathode_Clamp_Z1_Initial_Pos_mm	pshm->P[8623]
#define	P_Cathode_Clamp_Z2_Initial_Pos_mm	pshm->P[8624]
#define	P_Stack_Table_Z_Initial_Pos_mm	pshm->P[8625]
#define	P_FR_Initial_Pos_mm	pshm->P[8626]
#define	P_Anode_Clamp_Z1_Cal_Pos_mm	pshm->P[8627]
#define	P_Anode_Clamp_Z2_Cal_Pos_mm	pshm->P[8628]
#define	P_Cathode_Clamp_Z1_Cal_Pos_mm	pshm->P[8629]
#define	P_Cathode_Clamp_Z2_Cal_Pos_mm	pshm->P[8630]
#define	P_Stack_Table_Z_Cal_Pos_mm	pshm->P[8631]
#define	P_FR_Cal_Pos_mm	pshm->P[8632]
#define	P_Anode_Clamp_Z1_Move_Speed	pshm->P[8633]
#define	P_Anode_Clamp_Z2_Move_Speed	pshm->P[8634]
#define	P_Cathode_Clamp_Z1_Move_Speed	pshm->P[8635]
#define	P_Cathode_Clamp_Z2_Move_Speed	pshm->P[8636]
#define	P_Stack_Table_Z_Move_Speed	pshm->P[8637]
#define	P_FR_Cal_Move_Speed	pshm->P[8638]
#define	P_Old_Anode_Clamp_Z1_Move_Speed	pshm->P[8639]
#define	P_Old_Anode_Clamp_Z2_Move_Speed	pshm->P[8640]
#define	P_Old_Cathode_Clamp_Z1_Move_Speed	pshm->P[8641]
#define	P_Old_Cathode_Clamp_Z2_Move_Speed	pshm->P[8642]
#define	P_Old_Stack_Table_Z_Move_Speed	pshm->P[8643]
#define	P_Old_FR_Cal_Move_Speed	pshm->P[8644]
#define	P_An_AT_Resolution_Anode_2th_Z_Pos_mm	pshm->P[8645]
#define	P_An_AT_Resolution_Anode_2th_T_Pos_mm	pshm->P[8646]
#define	P_An_AT_Resolution_Cathode_2th_Z_Pos_mm	pshm->P[8647]
#define	P_An_AT_Resolution_Cathode_2th_T_Pos_mm	pshm->P[8648]
#define	P_FR_AT_Resolution_Pos_mm	pshm->P[8649]
#define	P_Old_AT_Resolution_Anode_2th_Z_Pos_Move_Speed	pshm->P[8650]
#define	P_Old_AT_Resolution_Anode_2th_T_Pos_Move_Speed	pshm->P[8651]
#define	P_Old_AT_Resolution_Cathode_2th_Z_Pos_Move_Speed	pshm->P[8652]
#define	P_Old_AT_Resolution_Cathode_2th_T_Pos_Move_Speed	pshm->P[8653]
#define	P_Old_FR_AT_Resolution_Move_Speed	pshm->P[8654]
#define	P_Ca_AT_Resolution_Anode_2th_Z_Pos_mm	pshm->P[8655]
#define	P_Ca_AT_Resolution_Anode_2th_T_Pos_mm	pshm->P[8656]
#define	P_Ca_AT_Resolution_Cathode_2th_Z_Pos_mm	pshm->P[8657]
#define	P_Ca_AT_Resolution_Cathode_2th_T_Pos_mm	pshm->P[8658]
#define	P_AT_Resolution_Anode_2th_Z_Pos_Move_Speed	pshm->P[8659]
#define	P_AT_Resolution_Anode_2th_T_Pos_Move_Speed	pshm->P[8660]
#define	P_AT_Resolution_Cathode_2th_Z_Pos_Move_Speed	pshm->P[8661]
#define	P_AT_Resolution_Cathode_2th_T_Pos_Move_Speed	pshm->P[8662]
#define	P_FR_AT_Resolution_Move_Speed	pshm->P[8663]
#define	P_Anode_1th_MES_APC_Move_mm_PLC	pshm->P[8664]
#define	P_Cathode_1th_MES_APC_Move_mm_PLC	pshm->P[8665]
#define	P_Anode_1th_MES_APC_Move_mm_PMAC	pshm->P[8666]
#define	P_Cathode_1th_MES_APC_Move_mm_PMAC	pshm->P[8667]
#define	P_Anode_X_before_Comp_mm	pshm->P[8668]
#define	P_Cathode_X_before_Comp_mm	pshm->P[8669]
#define	P_Flag_Anode_1PNP_APC_Apply_Point	pshm->P[8670]
#define	P_Flag_Cathode_1PNP_APC_Apply_Point	pshm->P[8671]
#define	P_MES_APC_Active	pshm->P[8672]
#define	P_OLD_Slave1_Target_X_Belt_To_Align	pshm->P[8673]
#define	P_OLD_Slave10_Target_X_Belt_To_Align	pshm->P[8674]
#define	P_Anode_MES_X_Average_mm	pshm->P[8675]
#define	P_Cathode_MES_X_Average_mm	pshm->P[8676]
#define	P_Anode_X_Sum_Move_mm	pshm->P[8677]
#define	P_Anode_Align_Stage_TM	pshm->P[8678]
#define	P_Anode_Align_Stage_TS	pshm->P[8679]
#define	P_Anode_Align_Stage_TA	pshm->P[8680]
#define	P_Status_Anode_Prog	pshm->P[8681]
#define	P_Cathode_X_Sum_Move_mm	pshm->P[8682]
#define	P_X_Move_Recipe_Percent	pshm->P[8683]
#define	P_Cathode_Align_Stage_TM	pshm->P[8684]
#define	P_Cathode_Align_Stage_TS	pshm->P[8685]
#define	P_Cathode_Align_Stage_TA	pshm->P[8686]
#define	P_Status_Cathode_Prog	pshm->P[8687]
#define	P_Anode_Align_Move_Machine	pshm->P[8688]
#define	P_Cathode_Align_Move_Machine	pshm->P[8689]
#define	P_Stack_Table_Move_Machine	pshm->P[8690]
#define	P_Status_Anode_Align_Move	pshm->P[8691]
#define	P_Status_Cathode_Align_Move	pshm->P[8692]
#define	P_Status_Stack_Table_Move	pshm->P[8693]
#define	P_Anode_Align_Start_Bit	pshm->P[8694]
#define	P_Cathode_Align_Start_Bit	pshm->P[8695]
#define	P_Anode_Retry_Start_Bit	pshm->P[8696]
#define	P_Cathode_Retry_Start_Bit	pshm->P[8697]
#define	P_Vision_Spea_Run_Complete_Machine	pshm->P[8698]
#define	P_Vision_Sepa_Run_Complete_CMD	pshm->P[8699]
#define	P_Vision_Clamp_Complete_Machine	pshm->P[8700]
#define	P_Vision_Clamp_Complete_CMD	pshm->P[8701]
#define	P_PC_Jog_Motor_No	pshm->P[4301]
#define	P_PC_Jog_Speed	pshm->P[4254]
#define	P_Custom_Speed	pshm->P[4500]
#define	P_Jog_Position	pshm->P[4300]
#define	P_Jog_Work_Speed(i)	pshm->P[(8702+i)%MAX_P]
#define	P_Anode_Recipe_Count	pshm->P[8733]
#define	P_Cathode_Recipe_Count	pshm->P[8734]
#define	P_Recipe_Homing_Speed(i)	pshm->P[(8735+i)%MAX_P]
#define	P_Slave5_Target_Z_Wait_Pos	pshm->P[8784]
#define	P_Slave5_Target_Z_Start_Pos	pshm->P[8785]
#define	P_Sepa_First_Clamp_On_Up	pshm->P[8786]
#define	P_Slave6_Target_X_Wait_Pos	pshm->P[8787]
#define	P_Anode_1st_T_Belt_To_Align	pshm->P[8788]
#define	P_Anode_1st_T_Align_To_Belt	pshm->P[8789]
#define	P_Anode_1st_T_Ready	pshm->P[8790]
#define	P_Recipe_A_1st_Z_Belt_Down	pshm->P[8791]
#define	P_Recipe_A_1st_Z_Belt_Up	pshm->P[8792]
#define	P_Recipe_A_1st_Z_Align_Down	pshm->P[8793]
#define	P_Recipe_A_1st_Z_Align_Up	pshm->P[8794]
#define	P_Recipe_A_1st_Z_Ready_Up	pshm->P[8795]
#define	P_Recipe_A_1st_Z_Ready_Down	pshm->P[8796]
#define	P_Anode_1st_Z_Belt_Down	pshm->P[8797]
#define	P_Anode_1st_Z_Belt_Up	pshm->P[8798]
#define	P_Anode_1st_Z_Align_Down	pshm->P[8799]
#define	P_Anode_1st_Z_Align_Up	pshm->P[8800]
#define	P_Anode_1st_Z_Ready_Up	pshm->P[8801]
#define	P_Anode_1st_Z_Ready_Down	pshm->P[8802]
#define	P_Anode_2st_T_Align_To_Stack	pshm->P[8803]
#define	P_Anode_2st_T_Stack_To_Align	pshm->P[8804]
#define	P_Recipe_A_2st_Z_Align_Up	pshm->P[8805]
#define	P_Recipe_A_2st_Z_Align_Down	pshm->P[8806]
#define	P_Recipe_A_2st_Z_Stack_Up	pshm->P[8807]
#define	P_Recipe_A_2st_Z_Stack_Down	pshm->P[8808]
#define	P_Recipe_A_2st_Z_Ready_Up	pshm->P[8809]
#define	P_Recipe_A_2st_Z_Ready_Down	pshm->P[8810]
#define	P_Anode_2nd_Z_Align_Up	pshm->P[8811]
#define	P_Anode_2nd_Z_Align_Down	pshm->P[8812]
#define	P_Anode_2nd_Z_Stack_Up	pshm->P[8813]
#define	P_Anode_2nd_Z_Stack_Down	pshm->P[8814]
#define	P_Anode_2nd_Z_Ready_Up	pshm->P[8815]
#define	P_Anode_2st_Z_Ready_Down	pshm->P[8816]
#define	P_Anode_Clamp_Y1_On_1st	pshm->P[8817]
#define	P_Anode_Clamp_Y1_On_2nd	pshm->P[8818]
#define	P_Anode_Clamp_Y1_On_3rd	pshm->P[8819]
#define	P_Anode_Clamp_Y1_On_4th	pshm->P[8820]
#define	P_Anode_Clamp_Y1_Off_1st	pshm->P[8821]
#define	P_Anode_Clamp_Y1_Off_2nd	pshm->P[8822]
#define	P_Anode_Clamp_Y1_Off_3rd	pshm->P[8823]
#define	P_Anode_Clamp_Y2_On_1st	pshm->P[8824]
#define	P_Anode_Clamp_Y2_On_2nd	pshm->P[8825]
#define	P_Anode_Clamp_Y2_On_3rd	pshm->P[8826]
#define	P_Anode_Clamp_Y2_On_4th	pshm->P[8827]
#define	P_Anode_Clamp_Y2_Off_1st	pshm->P[8828]
#define	P_Anode_Clamp_Y2_Off_2nd	pshm->P[8829]
#define	P_Anode_Clamp_Y2_Off_3rd	pshm->P[8830]
#define	P_Anode_Clamp_Z1_On_1st	pshm->P[8831]
#define	P_Anode_Clamp_Z1_On_2nd	pshm->P[8832]
#define	P_Anode_Clamp_Z1_On_3rd	pshm->P[8833]
#define	P_Anode_Clamp_Z1_On_4th	pshm->P[8834]
#define	P_Anode_Clamp_Z1_Off_1st	pshm->P[8835]
#define	P_Anode_Clamp_Z1_Off_2nd	pshm->P[8836]
#define	P_Anode_Clamp_Z1_Off_3rd	pshm->P[8837]
#define	P_Anode_Clamp_Z1_Down	pshm->P[8838]
#define	P_Final_Roll_X_Sepa_1st	pshm->P[8839]
#define	P_Final_Roll_X_Sepa_2nd	pshm->P[8840]
#define	P_Final_Roll_X_Sepa_3rd	pshm->P[8841]
#define	P_Final_Roll_X_Sepa_4th	pshm->P[8842]
#define	P_Final_Roll_X_Sepa_5th	pshm->P[8843]
#define	P_Final_Roll_X_Anode_Move	pshm->P[8844]
#define	P_Final_Roll_X_Discharge	pshm->P[8845]
#define	P_Final_Roll_X_Cathode_Move	pshm->P[8846]
#define	P_Final_Roll_X_Run_Wait_Pos	pshm->P[8847]
#define	P_Final_Roll_Z_Ready_And_Cutting	pshm->P[8848]
#define	P_Final_Roll_Z_Run_Pos	pshm->P[8849]
#define	P_Final_Roll_Z_Sepa_3rd	pshm->P[8850]
#define	P_Final_Roll_Z_Sepa_4th	pshm->P[8851]
#define	P_Final_Roll_Z_Sepa_5th	pshm->P[8852]
#define	P_Stack_Table_Z_For_Sepa	pshm->P[8853]
#define	P_Stack_Table_Z_For_Run	pshm->P[8854]
#define	P_Stack_Table_Z_For_Init	pshm->P[8855]
#define	P_Cathode_Clamp_Y1_On_1st	pshm->P[8856]
#define	P_Cathode_Clamp_Y1_On_2nd	pshm->P[8857]
#define	P_Cathode_Clamp_Y1_On_3rd	pshm->P[8858]
#define	P_Cathode_Clamp_Y1_On_4th	pshm->P[8859]
#define	P_Cathode_Clamp_Y1_Off_1st	pshm->P[8860]
#define	P_Cathode_Clamp_Y1_Off_2nd	pshm->P[8861]
#define	P_Cathode_Clamp_Y1_Off_3rd	pshm->P[8862]
#define	P_Cathode_Clamp_Y2_On_1st	pshm->P[8863]
#define	P_Cathode_Clamp_Y2_On_2nd	pshm->P[8864]
#define	P_Cathode_Clamp_Y2_On_3rd	pshm->P[8865]
#define	P_Cathode_Clamp_Y2_On_4th	pshm->P[8866]
#define	P_Cathode_Clamp_Y2_Off_1st	pshm->P[8867]
#define	P_Cathode_Clamp_Y2_Off_2nd	pshm->P[8868]
#define	P_Cathode_Clamp_Y2_Off_3rd	pshm->P[8869]
#define	P_Cathode_Clamp_Z1_On_1st	pshm->P[8870]
#define	P_Cathode_Clamp_Z1_On_2nd	pshm->P[8871]
#define	P_Cathode_Clamp_Z1_On_3rd	pshm->P[8872]
#define	P_Cathode_Clamp_Z1_On_4th	pshm->P[8873]
#define	P_Cathode_Clamp_Z1_Off_1st	pshm->P[8874]
#define	P_Cathode_Clamp_Z1_Off_2nd	pshm->P[8875]
#define	P_Cathode_Clamp_Z1_Off_3rd	pshm->P[8876]
#define	P_Cathode_Clamp_Z1_Down	pshm->P[8877]
#define	P_Cathode_2st_T_Align_To_Stack	pshm->P[8878]
#define	P_Cathode_2st_T_Stack_To_Align	pshm->P[8879]
#define	P_Slave8_Target_X_Align_To_Stack_1st	pshm->P[8880]
#define	P_Slave8_Target_X_Align_To_Stack_2nd	pshm->P[8881]
#define	P_Slave8_Target_X_Stack_To_Align_1st	pshm->P[8882]
#define	P_Slave8_Target_X_Stack_To_Align_2nd	pshm->P[8883]
#define	P_Slave8_Target_X_Stack_To_Align_3rd	pshm->P[8884]
#define	P_Cathode_2nd_Z_Align_Up	pshm->P[8885]
#define	P_Cathode_2nd_Z_Align_Down	pshm->P[8886]
#define	P_Cathode_2nd_Z_Stack_Up	pshm->P[8887]
#define	P_Cathode_2nd_Z_Stack_Down	pshm->P[8888]
#define	P_Cathode_2nd_Z_Ready_Up	pshm->P[8889]
#define	P_Cathode_2st_Z_Ready_Down	pshm->P[8890]
#define	P_Recipe_C_2st_Z_Align_Up	pshm->P[8891]
#define	P_Recipe_C_2st_Z_Align_Down	pshm->P[8892]
#define	P_Recipe_C_2st_Z_Stack_Up	pshm->P[8893]
#define	P_Recipe_C_2st_Z_Stack_Down	pshm->P[8894]
#define	P_Recipe_C_2st_Z_Ready_Up	pshm->P[8895]
#define	P_Recipe_C_2st_Z_Ready_Down	pshm->P[8896]
#define	P_Cathode_1st_T_Belt_To_Align	pshm->P[8897]
#define	P_Cathode_1st_T_Align_To_Belt	pshm->P[8898]
#define	P_Cathode_1st_T_Ready	pshm->P[8899]
#define	P_Cathode_1st_Z_Belt_Down	pshm->P[8900]
#define	P_Cathode_1st_Z_Belt_Up	pshm->P[8901]
#define	P_Cathode_1st_Z_Align_Down	pshm->P[8902]
#define	P_Cathode_1st_Z_Align_Up	pshm->P[8903]
#define	P_Cathode_1st_Z_Ready_Up	pshm->P[8904]
#define	P_Cathode_1st_Z_Ready_Down	pshm->P[8905]
#define	P_Recipe_C_1st_Z_Belt_Down	pshm->P[8906]
#define	P_Recipe_C_1st_Z_Belt_Up	pshm->P[8907]
#define	P_Recipe_C_1st_Z_Align_Down	pshm->P[8908]
#define	P_Recipe_C_1st_Z_Align_Up	pshm->P[8909]
#define	P_Recipe_C_1st_Z_Ready_Up	pshm->P[8910]
#define	P_Recipe_C_1st_Z_Ready_Down	pshm->P[8911]
#define	P_1st_Sheet_Paper_X_FWD	pshm->P[8912]
#define	P_1st_Sheet_Paper_X_BWD	pshm->P[8913]
#define	P_Cathode_NG_T_NG_To_Align	pshm->P[8914]
#define	P_Cathode_NG_T_Align_To_NG	pshm->P[8915]
#define	P_Cathode_NG_Z_NG_Down	pshm->P[8916]
#define	P_Cathode_NG_Z_NG_Up	pshm->P[8917]
#define	P_Cathode_NG_Z_Align_Down	pshm->P[8918]
#define	P_Cathode_NG_Z_Align_Up	pshm->P[8919]
#define	P_Anode_NG_T_NG_To_Align	pshm->P[8920]
#define	P_Anode_NG_T_Align_To_NG	pshm->P[8921]
#define	P_Anode_NG_Z_NG_Down	pshm->P[8922]
#define	P_Anode_NG_Z_NG_Up	pshm->P[8923]
#define	P_Anode_NG_Z_Align_Down	pshm->P[8924]
#define	P_Anode_NG_Z_Align_Up	pshm->P[8925]
#define	P_1st_ULD_X_Stack	pshm->P[8926]
#define	P_1st_ULD_X_FWD	pshm->P[8927]
#define	P_1st_ULD_X_Init_Pos	pshm->P[8928]
#define	P_1st_ULD_X_Target_BWD	pshm->P[8929]
#define	P_1st_ULD_Z_Stack	pshm->P[8930]
#define	P_1st_ULD_Z_Cutting_For_Cell	pshm->P[8931]
#define	P_1st_ULD_Z_Discharge_For_Cell	pshm->P[8932]
#define	P_1st_ULD_Z_Target_Down	pshm->P[8933]
#define	P_1st_ULD_T_Wait	pshm->P[8934]
#define	P_1st_ULD_T_Avoid_Angle	pshm->P[8935]
#define	P_1st_ULD_T_90_Angle	pshm->P[8936]
#define	P_Slave1_Start_X_Belt	pshm->P[8937]
#define	P_Slave1_Start_X_Align	pshm->P[8938]
#define	P_Slave1_Start_X_NG	pshm->P[8939]
#define	P_Slave1_Start_Z_Up	pshm->P[8940]
#define	P_Slave1_Start_Z_Down_Belt	pshm->P[8941]
#define	P_Slave1_Start_Z_Down_Align	pshm->P[8942]
#define	P_Slave1_Start_Z_Down_NG	pshm->P[8943]
#define	P_Slave3_Start_X_Align	pshm->P[8944]
#define	P_Slave3_Start_X_Align_To_Stack	pshm->P[8945]
#define	P_Slave3_Start_X_Stack	pshm->P[8946]
#define	P_Slave3_Start_X_Stack_To_Align_2	pshm->P[8947]
#define	P_Slave3_Start_X_Stack_To_Align_3	pshm->P[8948]
#define	P_Slave3_Start_Z_Align_To_Stack_1	pshm->P[8949]
#define	P_Slave3_Start_Z_Align_To_Stack_2	pshm->P[8950]
#define	P_Slave3_Start_Z_Stack_To_Align_1	pshm->P[8951]
#define	P_Slave3_Start_Z_Stack_To_Align_2	pshm->P[8952]
#define	P_Slave3_Start_Z_Stack_To_Align_3	pshm->P[8953]
#define	P_Slave3_Start_Z_Align_Down	pshm->P[8954]
#define	P_Slave3_Start_Z_Align_Up	pshm->P[8955]
#define	P_Slave3_Start_Z_Stack_Down	pshm->P[8956]
#define	P_Slave3_Start_Z_Stack_Up	pshm->P[8957]
#define	P_Slave4_Start_X_Clamp_On_1st	pshm->P[8958]
#define	P_Slave4_Start_X_Clamp_On_2nd	pshm->P[8959]
#define	P_Slave4_Start_X_Clamp_On_3rd	pshm->P[8960]
#define	P_Slave4_Start_X_Clamp_On_4th	pshm->P[8961]
#define	P_Slave4_Start_X_Clamp_Off_1st	pshm->P[8962]
#define	P_Slave4_Start_X_Clamp_Off_2nd	pshm->P[8963]
#define	P_Slave4_Start_X_Clamp_Off_3rd	pshm->P[8964]
#define	P_Slave4_Start_Z_Clamp_On_1st	pshm->P[8965]
#define	P_Slave4_Start_Z_Clamp_On_2nd	pshm->P[8966]
#define	P_Slave4_Start_Z_Clamp_On_3rd	pshm->P[8967]
#define	P_Slave4_Start_Z_Clamp_On_4th	pshm->P[8968]
#define	P_Slave4_Start_Z_Clamp_Off_1st	pshm->P[8969]
#define	P_Slave4_Start_Z_Clamp_Off_2nd	pshm->P[8970]
#define	P_Slave4_Start_Z_Clamp_Off_3rd	pshm->P[8971]
#define	P_Slave4_Start_Z_Down	pshm->P[8972]
#define	P_Slave5_Start_X_Anode_Move_1st	pshm->P[8973]
#define	P_Slave5_Start_X_Anode_Move_2nd	pshm->P[8974]
#define	P_Slave5_Start_X_Cathode_Move_1st	pshm->P[8975]
#define	P_Slave5_Start_X_Cathode_Move_2nd	pshm->P[8976]
#define	P_Slave5_Start_X_Sepa_1st	pshm->P[8977]
#define	P_Slave5_Start_X_Sepa_2nd	pshm->P[8978]
#define	P_Slave5_Start_X_Sepa_3rd	pshm->P[8979]
#define	P_Slave5_Start_X_Sepa_4th	pshm->P[8980]
#define	P_Slave5_Start_X_Sepa_5th	pshm->P[8981]
#define	P_Slave5_Start_Z_Sepa_1st	pshm->P[8982]
#define	P_Slave5_Start_Z_Sepa_2nd	pshm->P[8983]
#define	P_Slave5_Start_Z_Sepa_3rd	pshm->P[8984]
#define	P_Slave5_Start_Z_Sepa_4th	pshm->P[8985]
#define	P_Slave5_Start_Z_Sepa_5th	pshm->P[8986]
#define	P_Slave6_Start_Z_Wait_Pos	pshm->P[8987]
#define	P_Slave6_Start_Z_For_Sepa_Mode	pshm->P[8988]
#define	P_Slave7_Start_X_Clamp_On_1st	pshm->P[8989]
#define	P_Slave7_Start_X_Clamp_On_2nd	pshm->P[8990]
#define	P_Slave7_Start_X_Clamp_On_3rd	pshm->P[8991]
#define	P_Slave7_Start_X_Clamp_On_4th	pshm->P[8992]
#define	P_Slave7_Start_X_Clamp_Off_1st	pshm->P[8993]
#define	P_Slave7_Start_X_Clamp_Off_2nd	pshm->P[8994]
#define	P_Slave7_Start_X_Clamp_Off_3rd	pshm->P[8995]
#define	P_Slave7_Start_Z_Clamp_On_1st	pshm->P[8996]
#define	P_Slave7_Start_Z_Clamp_On_2nd	pshm->P[8997]
#define	P_Slave7_Start_Z_Clamp_On_3rd	pshm->P[8998]
#define	P_Slave7_Start_Z_Clamp_On_4th	pshm->P[8999]
#define	P_Slave7_Start_Z_Clamp_Off_1st	pshm->P[9000]
#define	P_Slave7_Start_Z_Clamp_Off_2nd	pshm->P[9001]
#define	P_Slave7_Start_Z_Clamp_Off_3rd	pshm->P[9002]
#define	P_Slave7_Start_Z_Down	pshm->P[9003]
#define	P_Slave8_Start_X_Align	pshm->P[9004]
#define	P_Slave8_Start_X_Align_To_Stack	pshm->P[9005]
#define	P_Slave8_Start_X_Stack	pshm->P[9006]
#define	P_Slave8_Start_X_Stack_To_Align_2	pshm->P[9007]
#define	P_Slave8_Start_X_Stack_To_Align_3	pshm->P[9008]
#define	P_Slave8_Start_Z_Align_To_Stack_1	pshm->P[9009]
#define	P_Slave8_Start_Z_Align_To_Stack_2	pshm->P[9010]
#define	P_Slave8_Start_Z_Stack_To_Align_1	pshm->P[9011]
#define	P_Slave8_Start_Z_Stack_To_Align_2	pshm->P[9012]
#define	P_Slave8_Start_Z_Stack_To_Align_3	pshm->P[9013]
#define	P_Slave8_Start_Z_Align_Down	pshm->P[9014]
#define	P_Slave8_Start_Z_Align_Up	pshm->P[9015]
#define	P_Slave8_Start_Z_Stack_Down	pshm->P[9016]
#define	P_Slave8_Start_Z_Stack_Up	pshm->P[9017]
#define	P_Slave10_Start_X_Belt	pshm->P[9018]
#define	P_Slave10_Start_X_Align	pshm->P[9019]
#define	P_Slave10_Start_X_NG	pshm->P[9020]
#define	P_Slave10_Start_Z_Up	pshm->P[9021]
#define	P_Slave10_Start_Z_Down_Belt	pshm->P[9022]
#define	P_Slave10_Start_Z_Down_Align	pshm->P[9023]
#define	P_Slave10_Start_Z_Down_NG	pshm->P[9024]
#define	P_Slave1_Move_X_Belt_Align	pshm->P[9025]
#define	P_Slave1_Move_X_Align_Belt	pshm->P[9026]
#define	P_Slave1_Move_X_Belt_NG	pshm->P[9027]
#define	P_Slave1_Move_X_NG_Belt	pshm->P[9028]
#define	P_Slave1_Move_X_Align_NG	pshm->P[9029]
#define	P_Slave1_Move_Z_Belt_Down	pshm->P[9030]
#define	P_Slave1_Move_Z_Belt_Up	pshm->P[9031]
#define	P_Slave1_Move_X_NG_Align	pshm->P[9032]
#define	P_Slave1_Move_Z_Align_Down	pshm->P[9033]
#define	P_Slave1_Move_Z_Align_Up	pshm->P[9034]
#define	P_Slave1_Move_Z_NG_Down	pshm->P[9035]
#define	P_Slave1_Move_Z_NG_Up	pshm->P[9036]
#define	P_Slave3_Move_X_Align_To_Stack_1st	pshm->P[9037]
#define	P_Slave3_Move_X_Align_To_Stack_2nd	pshm->P[9038]
#define	P_Slave3_Move_X_Stack_To_Align_1st	pshm->P[9039]
#define	P_Slave3_Move_X_Stack_To_Align_2nd	pshm->P[9040]
#define	P_Slave3_Move_X_Stack_To_Align_3rd	pshm->P[9041]
#define	P_Slave3_Move_Z_Align_To_Stack_1st	pshm->P[9042]
#define	P_Slave3_Move_Z_Align_To_Stack_2nd	pshm->P[9043]
#define	P_Slave3_Move_Z_Stack_To_Align_1st	pshm->P[9044]
#define	P_Slave3_Move_Z_Stack_To_Align_2nd	pshm->P[9045]
#define	P_Slave3_Move_Z_Stack_To_Align_3rd	pshm->P[9046]
#define	P_Slave3_Move_Z_Align_Up	pshm->P[9047]
#define	P_Slave3_Move_Z_Align_Down	pshm->P[9048]
#define	P_Slave3_Move_Z_Stack_Up	pshm->P[9049]
#define	P_Slave3_Move_Z_Stack_Down	pshm->P[9050]
#define	P_Slave4_Move_X_Clamp_On_1st	pshm->P[9051]
#define	P_Slave4_Move_X_Clamp_On_2nd	pshm->P[9052]
#define	P_Slave4_Move_X_Clamp_On_3rd	pshm->P[9053]
#define	P_Slave4_Move_X_Clamp_On_4th	pshm->P[9054]
#define	P_Slave4_Move_X_Clamp_Off_1st	pshm->P[9055]
#define	P_Slave4_Move_X_Clamp_Off_2nd	pshm->P[9056]
#define	P_Slave4_Move_X_Clamp_Off_3rd	pshm->P[9057]
#define	P_Slave4_Move_Z_Clamp_On_1st	pshm->P[9058]
#define	P_Slave4_Move_Z_Clamp_On_2nd	pshm->P[9059]
#define	P_Slave4_Move_Z_Clamp_On_3rd	pshm->P[9060]
#define	P_Slave4_Move_Z_Clamp_On_4th	pshm->P[9061]
#define	P_Slave4_Move_Z_Clamp_Off_1st	pshm->P[9062]
#define	P_Slave4_Move_Z_Clamp_Off_2nd	pshm->P[9063]
#define	P_Slave4_Move_Z_Clamp_Off_3rd	pshm->P[9064]
#define	P_Slave4_Move_Z_Down	pshm->P[9065]
#define	P_Slave5_Move_X_Anode_Move_1st	pshm->P[9066]
#define	P_Slave5_Move_X_Anode_Move_2nd	pshm->P[9067]
#define	P_Slave5_Move_X_Cathode_Move_1st	pshm->P[9068]
#define	P_Slave5_Move_X_Cathode_Move_2nd	pshm->P[9069]
#define	P_Slave5_Move_X_Sepa_1st	pshm->P[9070]
#define	P_Slave5_Move_X_Sepa_2nd	pshm->P[9071]
#define	P_Slave5_Move_X_Sepa_3rd	pshm->P[9072]
#define	P_Slave5_Move_X_Sepa_4th	pshm->P[9073]
#define	P_Slave5_Move_X_Sepa_5th	pshm->P[9074]
#define	P_Slave5_Move_Z_Sepa_1st	pshm->P[9075]
#define	P_Slave5_Move_Z_Sepa_2nd	pshm->P[9076]
#define	P_Slave5_Move_Z_Sepa_3rd	pshm->P[9077]
#define	P_Slave5_Move_Z_Sepa_4th	pshm->P[9078]
#define	P_Slave5_Move_Z_Sepa_5th	pshm->P[9079]
#define	P_Slave6_Move_Z_For_Sepa_Mode	pshm->P[9080]
#define	P_Slave6_Move_Z_For_Run_Mode	pshm->P[9081]
#define	P_Slave7_Move_X_Clamp_On_1st	pshm->P[9082]
#define	P_Slave7_Move_X_Clamp_On_2nd	pshm->P[9083]
#define	P_Slave7_Move_X_Clamp_On_3rd	pshm->P[9084]
#define	P_Slave7_Move_X_Clamp_On_4th	pshm->P[9085]
#define	P_Slave7_Move_X_Clamp_Off_1st	pshm->P[9086]
#define	P_Slave7_Move_X_Clamp_Off_2nd	pshm->P[9087]
#define	P_Slave7_Move_X_Clamp_Off_3rd	pshm->P[9088]
#define	P_Slave7_Move_Z_Clamp_On_1st	pshm->P[9089]
#define	P_Slave7_Move_Z_Clamp_On_2nd	pshm->P[9090]
#define	P_Slave7_Move_Z_Clamp_On_3rd	pshm->P[9091]
#define	P_Slave7_Move_Z_Clamp_On_4th	pshm->P[9092]
#define	P_Slave7_Move_Z_Clamp_Off_1st	pshm->P[9093]
#define	P_Slave7_Move_Z_Clamp_Off_2nd	pshm->P[9094]
#define	P_Slave7_Move_Z_Clamp_Off_3rd	pshm->P[9095]
#define	P_Slave7_Move_Z_Down	pshm->P[9096]
#define	P_Slave8_Move_X_Align_To_Stack_1st	pshm->P[9097]
#define	P_Slave8_Move_X_Align_To_Stack_2nd	pshm->P[9098]
#define	P_Slave8_Move_X_Stack_To_Align_1st	pshm->P[9099]
#define	P_Slave8_Move_X_Stack_To_Align_2nd	pshm->P[9100]
#define	P_Slave8_Move_X_Stack_To_Align_3rd	pshm->P[9101]
#define	P_Slave8_Move_Z_Align_To_Stack_1st	pshm->P[9102]
#define	P_Slave8_Move_Z_Align_To_Stack_2nd	pshm->P[9103]
#define	P_Slave8_Move_Z_Stack_To_Align_1st	pshm->P[9104]
#define	P_Slave8_Move_Z_Stack_To_Align_2nd	pshm->P[9105]
#define	P_Slave8_Move_Z_Stack_To_Align_3rd	pshm->P[9106]
#define	P_Slave8_Move_Z_Align_Up	pshm->P[9107]
#define	P_Slave8_Move_Z_Align_Down	pshm->P[9108]
#define	P_Slave8_Move_Z_Stack_Up	pshm->P[9109]
#define	P_Slave8_Move_Z_Stack_Down	pshm->P[9110]
#define	P_Slave10_Move_X_Belt_Align	pshm->P[9111]
#define	P_Slave10_Move_X_Align_Belt	pshm->P[9112]
#define	P_Slave10_Move_X_Belt_NG	pshm->P[9113]
#define	P_Slave10_Move_X_NG_Belt	pshm->P[9114]
#define	P_Slave10_Move_X_Align_NG	pshm->P[9115]
#define	P_Slave10_Move_Z_Belt_Down	pshm->P[9116]
#define	P_Slave10_Move_Z_Belt_Up	pshm->P[9117]
#define	P_Slave10_Move_X_NG_Align	pshm->P[9118]
#define	P_Slave10_Move_Z_Align_Down	pshm->P[9119]
#define	P_Slave10_Move_Z_Align_Up	pshm->P[9120]
#define	P_Slave10_Move_Z_NG_Down	pshm->P[9121]
#define	P_Slave10_Move_Z_NG_Up	pshm->P[9122]
#define	P_Slave1_Offset_X_Align	pshm->P[9123]
#define	P_Slave1_Offset_X_Belt	pshm->P[9124]
#define	P_Slave1_Offset_X_NG	pshm->P[9125]
#define	P_Slave1_Offset_Z_Belt	pshm->P[9126]
#define	P_Slave1_Offset_Z_Align	pshm->P[9127]
#define	P_Slave1_Offset_Z_NG	pshm->P[9128]
#define	P_Slave1_Offset_Z_Up	pshm->P[9129]
#define	P_Slave3_Offset_X_Stack	pshm->P[9130]
#define	P_Slave3_Offset_X_Align	pshm->P[9131]
#define	P_Slave3_Offset_Z_Stack	pshm->P[9132]
#define	P_Slave3_Offset_Z_Align	pshm->P[9133]
#define	P_Slave3_Offset_Z_Align_Up	pshm->P[9134]
#define	P_Slave3_Offset_Z_Align_Down	pshm->P[9135]
#define	P_Slave3_Offset_Z_Stack_Up	pshm->P[9136]
#define	P_Slave3_Offset_Z_Stack_Down	pshm->P[9137]
#define	P_Slave3_Offset_Z_Wait_Pos	pshm->P[9138]
#define	P_Slave4_Offset_X_Clamp_On	pshm->P[9139]
#define	P_Slave4_Offset_X_Clamp_Off	pshm->P[9140]
#define	P_Slave4_Offset_Z_Clamp_On	pshm->P[9141]
#define	P_Slave4_Offset_Z_Clamp_Off	pshm->P[9142]
#define	P_Slave5_Offset_X_Anode_Move_1st	pshm->P[9143]
#define	P_Slave5_Offset_X_Anode_Move_2nd	pshm->P[9144]
#define	P_Slave5_Offset_X_Cathode_Move_1st	pshm->P[9145]
#define	P_Slave5_Offset_X_Cathode_Move_2nd	pshm->P[9146]
#define	P_Slave5_Offset_X_Sepa_1st	pshm->P[9147]
#define	P_Slave5_Offset_X_Sepa_2nd	pshm->P[9148]
#define	P_Slave5_Offset_X_Sepa_3rd	pshm->P[9149]
#define	P_Slave5_Offset_X_Sepa_4th	pshm->P[9150]
#define	P_Slave5_Offset_X_Sepa_5th	pshm->P[9151]
#define	P_Slave5_Offset_Z_Sepa_1st	pshm->P[9152]
#define	P_Slave5_Offset_Z_Sepa_2nd	pshm->P[9153]
#define	P_Slave5_Offset_Z_Sepa_3rd	pshm->P[9154]
#define	P_Slave5_Offset_Z_Sepa_4th	pshm->P[9155]
#define	P_Slave5_Offset_Z_Sepa_5th	pshm->P[9156]
#define	P_Slave6_Offset_X_For_Sepa_Mode	pshm->P[9157]
#define	P_Slave6_Offset_Z_Wait_Pos	pshm->P[9158]
#define	P_Slave7_Offset_X_Clamp_On	pshm->P[9159]
#define	P_Slave7_Offset_X_Clamp_Off	pshm->P[9160]
#define	P_Slave7_Offset_Z_Clamp_On	pshm->P[9161]
#define	P_Slave7_Offset_Z_Clamp_Off	pshm->P[9162]
#define	P_Slave8_Offset_X_Stack	pshm->P[9163]
#define	P_Slave8_Offset_X_Align	pshm->P[9164]
#define	P_Slave8_Offset_Z_Stack	pshm->P[9165]
#define	P_Slave8_Offset_Z_Align	pshm->P[9166]
#define	P_Slave8_Offset_Z_Align_Up	pshm->P[9167]
#define	P_Slave8_Offset_Z_Align_Down	pshm->P[9168]
#define	P_Slave8_Offset_Z_Stack_Up	pshm->P[9169]
#define	P_Slave8_Offset_Z_Stack_Down	pshm->P[9170]
#define	P_Slave8_Offset_Z_Wait_Pos	pshm->P[9171]
#define	P_Slave10_Offset_X_Align	pshm->P[9172]
#define	P_Slave10_Offset_X_Belt	pshm->P[9173]
#define	P_Slave10_Offset_X_NG	pshm->P[9174]
#define	P_Slave10_Offset_Z_Belt	pshm->P[9175]
#define	P_Slave10_Offset_Z_Align	pshm->P[9176]
#define	P_Slave10_Offset_Z_NG	pshm->P[9177]
#define	P_Slave10_Offset_Z_Up	pshm->P[9178]
#define	P_Slave1_Target_Z_CV_Blower_On_Pos	pshm->P[9179]
#define	P_Slave1_Target_Z_CV_Blower_Off_Pos	pshm->P[9180]
#define	P_Slave10_Target_Z_CV_Blower_On_Pos	pshm->P[9181]
#define	P_Slave10_Target_Z_CV_Blower_Off_Pos	pshm->P[9182]
#define	P_Anode_CV_Blower_On_Flag	pshm->P[9183]
#define	P_Anode_CV_Blower_Off_Flag	pshm->P[9184]
#define	P_Cathode_CV_Blower_On_Flag	pshm->P[9185]
#define	P_Cathode_CV_Blower_Off_Flag	pshm->P[9186]
#define	P_Select_RingBlow_Off_Use	pshm->P[9187]
#define	P_2nd_PNP_Stack_Down_Pos	pshm->P[9188]
#define	P_2nd_PNP_Stack_Up_Pos	pshm->P[9189]
#define	P_Anode_Clamp_Down_MNTR	pshm->P[9190]
#define	P_Cathode_Clamp_Down_MNTR	pshm->P[9191]
#define	P_Clamp_1st_Vector_Y	pshm->P[9192]
#define	P_Clamp_1st_Vector_Z	pshm->P[9193]
#define	P_Clamp_1st_Vector_Vel	pshm->P[9194]
#define	P_Clamp_2nd_Vector_Y	pshm->P[9195]
#define	P_Clamp_2nd_Vector_Z	pshm->P[9196]
#define	P_Clamp_2nd_Vector_Vel	pshm->P[9197]
#define	P_Clamp_2nd_TM_Time	pshm->P[9198]
#define	P_FR_Ta	pshm->P[9199]
#define	P_FR_Ts	pshm->P[9200]
#define	P_FR_Tm	pshm->P[9201]
#define	P_Master_Motion_Heartbit_Flag	pshm->P[9202]
#define	P_Master_Heartbit_Trigger	pshm->P[9203]
#define	P_Parity_Heartbit_Bit	pshm->P[9204]
#define	P_Master_Heartbit_Move	pshm->P[9205]
#define	P_Force_Stop_Flag	pshm->P[9206]
#define	P_Execute_DryRun_Stop_Timer	pshm->P[9207]
#define	P_DryRun_Timer	pshm->P[9208]
#define	P_Dryrun_Operating_Time	pshm->P[9209]
#define	P_Anode_Align_Vac_Err_On	pshm->P[9210]
#define	P_Cathode_Align_Vac_Err_On	pshm->P[9211]
#define	P_Anode_1ST_TR_Vac_Err_On	pshm->P[9212]
#define	P_Anode_2ND_TR_Vac_Err_On	pshm->P[9213]
#define	P_Cathode_1ST_TR_Vac_Err_On	pshm->P[9214]
#define	P_Cathode_2ND_TR_Vac_Err_On	pshm->P[9215]
#define	P_MNTR_PLC0_Task_Time(i)	pshm->P[(9216+i)%MAX_P]
#define	P_MNTR_PLC0_Task_Max_Time	pshm->P[9218]
#define	P_MNTR_PLC1_Task_Time(i)	pshm->P[(9219+i)%MAX_P]
#define	P_MNTR_PLC1_Task_Max_Time	pshm->P[9221]
#define	P_MNTR_PLC2_Task_Time(i)	pshm->P[(9222+i)%MAX_P]
#define	P_MNTR_PLC2_Task_Max_Time	pshm->P[9224]
#define	P_MNTR_PLC3_Task_Time(i)	pshm->P[(9225+i)%MAX_P]
#define	P_MNTR_PLC3_Task_Max_Time	pshm->P[9227]
#define	P_MNTR_PLC4_Task_Time(i)	pshm->P[(9228+i)%MAX_P]
#define	P_MNTR_PLC4_Task_Max_Time	pshm->P[9230]
#define	P_MNTR_PLC5_Task_Time(i)	pshm->P[(9231+i)%MAX_P]
#define	P_MNTR_PLC5_Task_Max_Time	pshm->P[9233]
#define	P_MNTR_PLC6_Task_Time(i)	pshm->P[(9234+i)%MAX_P]
#define	P_MNTR_PLC6_Task_Max_Time	pshm->P[9236]
#define	P_MNTR_PLC7_Task_Time(i)	pshm->P[(9237+i)%MAX_P]
#define	P_MNTR_PLC7_Task_Max_Time	pshm->P[9239]
#define	P_MNTR_PLC8_Task_Time(i)	pshm->P[(9240+i)%MAX_P]
#define	P_MNTR_PLC8_Task_Max_Time	pshm->P[9242]
#define	P_MNTR_PLC9_Task_Time(i)	pshm->P[(9243+i)%MAX_P]
#define	P_MNTR_PLC9_Task_Max_Time	pshm->P[9245]
#define	P_MNTR_PLC10_Task_Time(i)	pshm->P[(9246+i)%MAX_P]
#define	P_MNTR_PLC10_Task_Max_Time	pshm->P[9248]
#define	P_MNTR_PLC11_Task_Time(i)	pshm->P[(9249+i)%MAX_P]
#define	P_MNTR_PLC11_Task_Max_Time	pshm->P[9251]
#define	P_MNTR_PLC12_Task_Time(i)	pshm->P[(9252+i)%MAX_P]
#define	P_MNTR_PLC12_Task_Max_Time	pshm->P[9254]
#define	P_MNTR_PLC13_Task_Time(i)	pshm->P[(9255+i)%MAX_P]
#define	P_MNTR_PLC13_Task_Max_Time	pshm->P[9257]
#define	P_MNTR_PLC14_Task_Time(i)	pshm->P[(9258+i)%MAX_P]
#define	P_MNTR_PLC14_Task_Max_Time	pshm->P[9260]
#define	P_MNTR_PLC15_Task_Time(i)	pshm->P[(9261+i)%MAX_P]
#define	P_MNTR_PLC15_Task_Max_Time	pshm->P[9263]
#define	P_MNTR_PLC16_Task_Time(i)	pshm->P[(9264+i)%MAX_P]
#define	P_MNTR_PLC16_Task_Max_Time	pshm->P[9266]
#define	P_MNTR_PLC17_Task_Time(i)	pshm->P[(9267+i)%MAX_P]
#define	P_MNTR_PLC17_Task_Max_Time	pshm->P[9269]
#define	P_MNTR_PLC18_Task_Time(i)	pshm->P[(9270+i)%MAX_P]
#define	P_MNTR_PLC18_Task_Max_Time	pshm->P[9272]
#define	P_MNTR_PLC19_Task_Time(i)	pshm->P[(9273+i)%MAX_P]
#define	P_MNTR_PLC19_Task_Max_Time	pshm->P[9275]
#define	P_MNTR_PLC20_Task_Time(i)	pshm->P[(9276+i)%MAX_P]
#define	P_MNTR_PLC20_Task_Max_Time	pshm->P[9278]
#define	P_MNTR_PLC21_Task_Time(i)	pshm->P[(9279+i)%MAX_P]
#define	P_MNTR_PLC21_Task_Max_Time	pshm->P[9281]
#define	P_MNTR_PLC22_Task_Time(i)	pshm->P[(9282+i)%MAX_P]
#define	P_MNTR_PLC22_Task_Max_Time	pshm->P[9284]
#define	P_MNTR_PLC23_Task_Time(i)	pshm->P[(9285+i)%MAX_P]
#define	P_MNTR_PLC23_Task_Max_Time	pshm->P[9287]
#define	P_MNTR_PLC24_Task_Time(i)	pshm->P[(9288+i)%MAX_P]
#define	P_MNTR_PLC24_Task_Max_Time	pshm->P[9290]
#define	P_MNTR_PLC25_Task_Time(i)	pshm->P[(9291+i)%MAX_P]
#define	P_MNTR_PLC25_Task_Max_Time	pshm->P[9293]
#define	P_MNTR_PLC26_Task_Time(i)	pshm->P[(9294+i)%MAX_P]
#define	P_MNTR_PLC26_Task_Max_Time	pshm->P[9296]
#define	P_MNTR_PLC27_Task_Time(i)	pshm->P[(9297+i)%MAX_P]
#define	P_MNTR_PLC27_Task_Max_Time	pshm->P[9299]
#define	P_MNTR_PLC28_Task_Time(i)	pshm->P[(9300+i)%MAX_P]
#define	P_MNTR_PLC28_Task_Max_Time	pshm->P[9302]
#define	P_MNTR_PLC29_Task_Time(i)	pshm->P[(9303+i)%MAX_P]
#define	P_MNTR_PLC29_Task_Max_Time	pshm->P[9305]
#define	P_MNTR_PLC30_Task_Time(i)	pshm->P[(9306+i)%MAX_P]
#define	P_MNTR_PLC30_Task_Max_Time	pshm->P[9308]
#define	P_Coord_Shutdown_Status_log	pshm->P[9309]
#define	P_In_Pos_Trg	pshm->P[9310]
#define	P_Position_Calc_Status	pshm->P[9311]
#define	P_Vision_Result(i)	pshm->P[(9312+i)%MAX_P]
#define	P_Vision_Result_Get_First_Cycle(i)	pshm->P[(9316+i)%MAX_P]
#define	P_Init_Result(i)	pshm->P[(9320+i)%MAX_P]
#define	P_PNP_Pos	pshm->P[9326]
#define	P_Execute_Manage_Mode	pshm->P[9327]
#define	P_Align_NG_Tack_Flag	pshm->P[9328]
#define	P_2th_Ng_Front_Vision_Pos	pshm->P[9329]
#define	P_Anode_Align_OK_Flag	pshm->P[9330]
#define	P_Anode_Align_NG_Flag	pshm->P[9331]
#define	P_Cathode_Align_OK_Flag	pshm->P[9332]
#define	P_Cathode_Align_NG_Flag	pshm->P[9333]
#define	P_Stack_Table_OK_Flag	pshm->P[9334]
#define	P_Anode_Retry_OK_Flag	pshm->P[9335]
#define	P_Anode_Retry_NG_Flag	pshm->P[9336]
#define	P_Cathode_Retry_OK_Flag	pshm->P[9337]
#define	P_Cathode_Retry_NG_Flag	pshm->P[9338]
#define	P_Func_Anode_2TR_Avoid_X_Value	pshm->P[9339]
#define	P_Func_Cathode_2TR_Avoid_X_Value	pshm->P[9340]
#define	P_Anode_Surf_Insp_Trigger	pshm->P[9341]
#define	P_Cathode_Surf_Insp_Trigger	pshm->P[9342]
#define	P_CMD_Cathode_Vision_Tigger	pshm->P[9343]
#define	P_CMD_Anode_Vision_Tigger	pshm->P[9344]
#define	P_CMD_Stack_Table_Vision_Trigger	pshm->P[9345]
#define	P_CMD_Cathode_Empty_Table_Vision	pshm->P[9346]
#define	P_CMD_Anode_Empty_Table_Vision	pshm->P[9347]
#define	P_CMD_Cathode_Existence_Vision	pshm->P[9348]
#define	P_CMD_Anode_Existence_Vision	pshm->P[9349]
#define	P_Align_Manager_Error_Cnt	pshm->P[9350]
#define	P_Surf_Manager_Error_Cnt	pshm->P[9351]
#define	P_Retry_Manager_Error_Cnt	pshm->P[9352]
#define	P_Stack_Manager_Error_Cnt	pshm->P[9353]
#define	P_Existence_Manager_Error_Cnt	pshm->P[9354]
#define	P_Where_To_Occur_Error_Retry_Status	pshm->P[9355]
#define	P_Which_Retry_Insp_Type	pshm->P[9356]
#define	P_Where_To_Occur_Error_Align_Status	pshm->P[9357]
#define	P_Which_Align_Insp_Type	pshm->P[9358]
#define	P_Where_To_Occur_Error_Surf_Status	pshm->P[9359]
#define	P_Which_Surf_Insp_Type	pshm->P[9360]
#define	P_Where_To_Occur_Error_Existence_Status	pshm->P[9361]
#define	P_Which_Existence_Insp_Type	pshm->P[9362]
#define	P_Where_To_Occur_Error_Stack_Status	pshm->P[9363]
#define	P_Vision_Clamping_Flag	pshm->P[9364]
#define	P_Exist_Insp_Total_Time	pshm->P[9365]
#define	P_Exist_Insp_Trg_Time	pshm->P[9366]
#define	P_Stack_Insp_Total_Time	pshm->P[9367]
#define	P_Stack_Trg_Time	pshm->P[9368]
#define	P_Surf_Insp_Total_Time	pshm->P[9369]
#define	P_Retry_Insp_Total_Time	pshm->P[9370]
#define	P_Surf_TimeOut_Cnt	pshm->P[9371]
#define	P_Align_TimeOut_Cnt	pshm->P[9372]
#define	P_Retry_TimeOut_Cnt	pshm->P[9373]
#define	P_Stack_TimeOut_Cnt	pshm->P[9374]
#define	P_Align_Insp_Total_Time	pshm->P[9375]
#define	P_Align_Trg_Time	pshm->P[9376]
#define	P_Aligning_Time	pshm->P[9377]
#define	P_Cathode_Empty_Table_Vision_Flag	pshm->P[9378]
#define	P_Anode_Empty_Table_Vision_Flag	pshm->P[9379]
#define	P_Selected_Surf_Insp_Type	pshm->P[9380]
#define	P_Selected_Align_Insp_Type	pshm->P[9381]
#define	P_Selected_Retry_Insp_Type	pshm->P[9382]
#define	P_Selected_Exist_Insp_Type	pshm->P[9383]
#define	P_VISION_RECIPE_PLC4_Surface_TrgOff	pshm->P[9384]
#define	P_VISION_RECIPE_PLC4_Surface_Ins_Time	pshm->P[9385]
#define	P_CMD_Cathode_Vision_Retry	pshm->P[9386]
#define	P_CMD_Anode_Vision_Retry	pshm->P[9387]
#define	P_Prev_Align_Manager_Status	pshm->P[9388]
#define	P_Prev_Surf_Manager_Status	pshm->P[9389]
#define	P_Prev_Exist_Manager_Status	pshm->P[9390]
#define	P_Prev_Selected_Align_Type	pshm->P[9391]
#define	P_Prev_Selected_Surf_Type	pshm->P[9392]
#define	P_Prev_Selected_Exist_Type	pshm->P[9393]
#define	P_Status_Align_Vision_Manager	pshm->P[9394]
#define	P_Status_Surface_Vision_Manager	pshm->P[9395]
#define	P_Status_Sheet_Existence_Vision_Manager	pshm->P[9396]
#define	P_Status_Stack_Vision_Manager	pshm->P[9397]
#define	P_Status_Retry_Vision_Manager	pshm->P[9398]
#define	P_Vision_All_Status_Manager_Init_Flag	pshm->P[9399]
#define	P_Cycle_Stop_Command	pshm->P[9400]
#define	P_Surface_Inspection_Complete_Error	pshm->P[9401]
#define	P_Switching_From_Cathode_To_Anode_Flag	pshm->P[9402]
#define	P_Switching_From_Anode_To_Cathode_Flag	pshm->P[9403]
#define	P_Switching_Mode_Complete_Flag	pshm->P[9404]
#define	P_Surf_Cathode_Error_Count	pshm->P[9405]
#define	P_Surf_Anode_Error_Count	pshm->P[9406]
#define	P_First_Anode_Sheet_Supply_Flag	pshm->P[9407]
#define	P_First_Cathode_Sheet_Supply_Flag	pshm->P[9408]
#define	P_Set_Cathode_Align_Pos_Zero	pshm->P[9409]
#define	P_Set_Anode_Align_Pos_Zero	pshm->P[9410]
#define	P_Cathode_Cur_Mode	pshm->P[9411]
#define	P_Anode_Cur_Mode	pshm->P[9412]
#define	P_AN_to_CA_DR_Trig	pshm->P[9413]
#define	P_CA_to_AN_DR_Trig	pshm->P[9414]
#define	P_Tension_FF(i)	pshm->P[(9415+i)%MAX_P]
#define	P_Sepa_CompDac_Value	pshm->P[9417]
#define	P_FR_Move_Command	pshm->P[9418]
#define	P_FF_Enable	pshm->P[9419]
#define	P_Anode_Run_FR_Move_Check_AI	pshm->P[9420]
#define	P_Cathode_Run_FR_Move_Check_AI	pshm->P[9421]
#define	P_FR_Move_Check_AI_OffSet	pshm->P[9422]
#define	P_FR_AI_Value(i)	pshm->P[(9423+i)%MAX_P]
#define	P_Aver_FR_AI_Value	pshm->P[9428]
#define	P_Process_Function_Command	pshm->P[9429]
#define	P_HOLD_Existence_Insp_State_Machine	pshm->P[9430]
#define	P_Execute_IsEnable_State_Machine	pshm->P[9431]
#define	P_EXECUTE_FUNC_Ready_STEP	pshm->P[9432]
#define	P_Execute_First_Sepa_Ontable_State_Machine	pshm->P[9433]
#define	P_Execute_Prod_Manage_State_Machine	pshm->P[9434]
#define	P_Execute_Enqueue_State_Machine	pshm->P[9435]
#define	P_STOP_Initial_Process_STEP	pshm->P[9436]
#define	P_STOP_Cylce_Stop_STEP	pshm->P[9437]
#define	P_Stop_CycleStop_Position	pshm->P[9438]
#define	P_Upcount_NextStep	pshm->P[9439]
#define	P_SUSPEND_FUNC_JR_Discharge_STEP	pshm->P[9440]
#define	P_SUSPEND_FUNC_ARC_STEP	pshm->P[9441]
#define	P_Suspend_ARC_Complete_Flag	pshm->P[9442]
#define	P_EXECUTE_FUNC_Debug_On_Sepa_STEP	pshm->P[9443]
#define	P_QueueCommand_Occurs	pshm->P[9444]
#define	P_EXECUTE_STEP	pshm->P[9445]
#define	P_SUSPEND_STEP	pshm->P[9446]
#define	P_HOLD_STEP	pshm->P[9447]
#define	P_STOP_STEP	pshm->P[9448]
#define	P_EXECUTE_Error_STEP	pshm->P[9449]
#define	P_SUSPEND_Error_STEP	pshm->P[9450]
#define	P_HOLD_Error_STEP	pshm->P[9451]
#define	P_STOP_Error_STEP	pshm->P[9452]
#define	P_Queue_Enqueue_Command	pshm->P[9453]
#define	P_Queue_Enqueue_return	pshm->P[9454]
#define	P_Queue_Dequeue_Command	pshm->P[9455]
#define	P_Queue_Dequeue_return	pshm->P[9456]
#define	P_Queue_Peek_Command	pshm->P[9457]
#define	P_Dequeue_Log(i)	pshm->P[(9458+i)%MAX_P]
#define	P_Dummy_Dequeue	pshm->P[9478]
#define	P_Queue_Command_Status	pshm->P[9479]
#define	P_Queue_Process_Command	pshm->P[9480]
#define	P_Queue_Process_Status	pshm->P[9481]
#define	P_Coord_Test	pshm->P[9482]
#define	P_Coord_Test3	pshm->P[9483]
#define	P_Coord_Test2	pshm->P[9484]
#define	P_Coord_Motion_Prog_Down_Entering_Bit	pshm->P[9485]
#define	P_PMAC_Coord_Status_Bit	pshm->P[9486]
#define	P_Coord_Down_Check_Bit	pshm->P[9487]
#define	P_PMAC_Coord_Down_Inspection_Flag	pshm->P[9488]
#define	P_PMAC_Coord_Down_Num	pshm->P[9489]
#define	P_PMAC_Coord_Error_Status	pshm->P[9490]
#define	P_Motor_Current_Pos(i)	pshm->P[(9491+i)%MAX_P]
#define	P_Axis_Scale_Value(i)	pshm->P[(9541+i)%MAX_P]
#define	P_Except_Return_Array(i)	pshm->P[(9591+i)%MAX_P]
#define	P_Hold_Memory(i)	pshm->P[(9691+i)%MAX_P]
#define	P_Suspend_Memory(i)	pshm->P[(9696+i)%MAX_P]
#define	P_Execute_Memory(i)	pshm->P[(9701+i)%MAX_P]
#define	P_Stop_Memory(i)	pshm->P[(9706+i)%MAX_P]
#define	P_PLC01_Process_Function_Enter_Flag	pshm->P[9711]
#define	P_PLC01_SubMotion_Active	pshm->P[9712]
#define	P_PLC01_SlaveMotion_Active	pshm->P[9713]
#define	P_EXECUTE_Isenable_MNTR	pshm->P[9714]
#define	P_EXECUTE_IsEnable_Firt_Stacking_Flag	pshm->P[9715]
#define	P_PLC01_Execute_Retry_Sepa_Mode_Count	pshm->P[9716]
#define	P_SUSPEND_MNTR	pshm->P[9717]
#define	P_SUSPEND_MNTR_2	pshm->P[9718]
#define	P_Execute_Last_Run_Flag	pshm->P[9719]
#define	P_Suspend_ARC_Request_Flag	pshm->P[9720]
#define	P_Hold_Queue_Exist_Insp_MNTR	pshm->P[9721]
#define	P_CirQueue_Status_Value	pshm->P[9722]
#define	P_Debug_CirQueue_Status	pshm->P[9723]
#define	P_Front_Index	pshm->P[9724]
#define	P_Rear_Index	pshm->P[9725]
#define	P_Index_Max	pshm->P[9726]
#define	P_CircularQueue_Command_array(i)	pshm->P[(9727+i)%MAX_P]
#define	P_CirQueue_Length	pshm->P[9738]
#define	P_Queue_Full	pshm->P[9739]
#define	P_Queue_Empty	pshm->P[9740]
#define	P_Queue_PeekEmpty	pshm->P[9741]
#define	P_Self_items	pshm->P[9742]
#define	P_Hold_Pause_Need_Flag	pshm->P[9743]
#define	P_Pause_Ready_Flag	pshm->P[9744]
#define	P_Pause_Running_Flag	pshm->P[9745]
#define	P_Resume_Ready_Flag	pshm->P[9746]
#define	P_Resume_Start_Flag	pshm->P[9747]
#define	P_Hold_Resume_Need_Flag	pshm->P[9748]
#define	P_Stack_Heart_Bit_Timer	pshm->P[9749]
#define	P_Stack_Heart_Bit_Calc	pshm->P[9750]
#define	P_Stack_Heart_Bit_Sync_State_Machine	pshm->P[9751]
#define	P_Pause_Anode_MNTR_Min_Trigger	pshm->P[9752]
#define	P_Pause_Anode_MNTR_Max_Trigger	pshm->P[9753]
#define	P_Pause_Cathode_MNTR_Min_Trigger	pshm->P[9754]
#define	P_Pause_Cathode_MNTR_Max_Trigger	pshm->P[9755]
#define	P_Pause_Protect_Variable	pshm->P[9756]
#define	P_Resume_Protect_Variable	pshm->P[9757]
#define	P_Sepa_Mode_Opposite_Resume_Free	pshm->P[9758]
#define	P_Sepa_To_Normal_Mode_Sync_Flag	pshm->P[9759]
#define	P_Sepa_To_Normal_Mode_Sync_Err_Avoid	pshm->P[9760]
#define	P_Recipe_1st_MotorNo(i)	pshm->P[(9761+i)%MAX_P]
#define	P_Recipe_2nd_MotorNo(i)	pshm->P[(9811+i)%MAX_P]
#define	P_Recipe_3rd_MotorNo(i)	pshm->P[(9861+i)%MAX_P]
#define	P_Recipe_4th_MotorNo(i)	pshm->P[(9911+i)%MAX_P]
#define	P_Recipe_5th_MotorNo(i)	pshm->P[(9961+i)%MAX_P]
#define	P_Recipe_6th_MotorNo(i)	pshm->P[(10011+i)%MAX_P]
#define	P_X_Axis_Num	pshm->P[10061]
#define	P_Y_Axis_Num	pshm->P[10062]
#define	P_Z_Axis_Num	pshm->P[10063]
#define	P_ZZ_Axis_Num	pshm->P[10064]
#define	P_X_Unit	pshm->P[10065]
#define	P_Y_Unit	pshm->P[10066]
#define	P_Z_Unit	pshm->P[10067]
#define	P_ZZ_Unit	pshm->P[10068]
#define	P_Pos_Memory_Bit_Save	pshm->P[10069]
#define	P_Total_Unit_Bit	pshm->P[10070]
#define	P_Total_Unit_Pos	pshm->P[10071]
#define	P_Anode_1st_Unit_Status	pshm->P[10072]
#define	P_Anode_2nd_Unit_Status	pshm->P[10073]
#define	P_Anode_CLP_Unit_Status	pshm->P[10074]
#define	P_FinalRoll_Unit_Status	pshm->P[10075]
#define	P_StackTable_Unit_Status	pshm->P[10076]
#define	P_Cathode_CLP_Unit_Status	pshm->P[10077]
#define	P_Cathode_2nd_Unit_Status	pshm->P[10078]
#define	P_Cathode_1st_Unit_Status	pshm->P[10079]
#define	P_1st_Unloader_Unit_Status	pshm->P[10080]
#define	P_Cathode_NG_PNP_Status	pshm->P[10081]
#define	P_Anode_NG_PNP_Status	pshm->P[10082]
#define	P_Unit_integrated_Status	pshm->P[10083]
#define	P_Unit_Status_Update_Flag	pshm->P[10084]
#define	P_Memory_Tower_Search_Flag	pshm->P[10085]
#define	P_MemTow_integrated_return	pshm->P[10086]
#define	P_Error_STMS_Memory_Tower_Status	pshm->P[10087]
#define	P_STMS_Memory_Tower_Status	pshm->P[10088]
#define	P_Recipe_M01_POS(i)	pshm->P[(10089+i)%MAX_P]
#define	P_Recipe_M02_POS(i)	pshm->P[(10100+i)%MAX_P]
#define	P_Recipe_M03_POS(i)	pshm->P[(10111+i)%MAX_P]
#define	P_Recipe_M04_POS(i)	pshm->P[(10122+i)%MAX_P]
#define	P_Recipe_M05_POS(i)	pshm->P[(10133+i)%MAX_P]
#define	P_Recipe_M06_POS(i)	pshm->P[(10144+i)%MAX_P]
#define	P_Recipe_M07_POS(i)	pshm->P[(10155+i)%MAX_P]
#define	P_Recipe_M08_POS(i)	pshm->P[(10166+i)%MAX_P]
#define	P_Recipe_M09_POS(i)	pshm->P[(10177+i)%MAX_P]
#define	P_Recipe_M10_POS(i)	pshm->P[(10188+i)%MAX_P]
#define	P_Recipe_M11_POS(i)	pshm->P[(10199+i)%MAX_P]
#define	P_Recipe_M12_POS(i)	pshm->P[(10210+i)%MAX_P]
#define	P_Recipe_M13_POS(i)	pshm->P[(10221+i)%MAX_P]
#define	P_Recipe_M14_POS(i)	pshm->P[(10232+i)%MAX_P]
#define	P_Recipe_M15_POS(i)	pshm->P[(10243+i)%MAX_P]
#define	P_Recipe_M16_POS(i)	pshm->P[(10254+i)%MAX_P]
#define	P_Recipe_M17_POS(i)	pshm->P[(10265+i)%MAX_P]
#define	P_Recipe_M18_POS(i)	pshm->P[(10276+i)%MAX_P]
#define	P_Recipe_M19_POS(i)	pshm->P[(10287+i)%MAX_P]
#define	P_Recipe_M20_POS(i)	pshm->P[(10298+i)%MAX_P]
#define	P_Recipe_M21_POS(i)	pshm->P[(10309+i)%MAX_P]
#define	P_Recipe_M22_POS(i)	pshm->P[(10320+i)%MAX_P]
#define	P_Recipe_M23_POS(i)	pshm->P[(10331+i)%MAX_P]
#define	P_Recipe_M24_POS(i)	pshm->P[(10342+i)%MAX_P]
#define	P_Recipe_M25_POS(i)	pshm->P[(10353+i)%MAX_P]
#define	P_Recipe_M26_POS(i)	pshm->P[(10364+i)%MAX_P]
#define	P_Recipe_M27_POS(i)	pshm->P[(10375+i)%MAX_P]
#define	P_Recipe_M28_POS(i)	pshm->P[(10386+i)%MAX_P]
#define	P_Recipe_M29_POS(i)	pshm->P[(10397+i)%MAX_P]
#define	P_Recipe_M30_POS(i)	pshm->P[(10408+i)%MAX_P]
#define	P_Recipe_M31_POS(i)	pshm->P[(10419+i)%MAX_P]
#define	P_Recipe_M32_POS(i)	pshm->P[(10430+i)%MAX_P]
#define	P_Recipe_M33_POS(i)	pshm->P[(10441+i)%MAX_P]
#define	P_Recipe_M34_POS(i)	pshm->P[(10452+i)%MAX_P]
#define	P_Recipe_M35_POS(i)	pshm->P[(10463+i)%MAX_P]
#define	P_Recipe_M36_POS(i)	pshm->P[(10474+i)%MAX_P]
#define	P_Recipe_M37_POS(i)	pshm->P[(10485+i)%MAX_P]
#define	P_Recipe_M38_POS(i)	pshm->P[(10496+i)%MAX_P]
#define	P_Recipe_M39_POS(i)	pshm->P[(10507+i)%MAX_P]
#define	P_Recipe_M40_POS(i)	pshm->P[(10518+i)%MAX_P]
#define	P_Recipe_M41_POS(i)	pshm->P[(10529+i)%MAX_P]
#define	P_Recipe_M42_POS(i)	pshm->P[(10540+i)%MAX_P]
#define	P_Recipe_M43_POS(i)	pshm->P[(10551+i)%MAX_P]
#define	P_Recipe_M44_POS(i)	pshm->P[(10562+i)%MAX_P]
#define	P_Recipe_M45_POS(i)	pshm->P[(10573+i)%MAX_P]
#define	P_Recipe_M46_POS(i)	pshm->P[(10584+i)%MAX_P]
#define	P_Recipe_M47_POS(i)	pshm->P[(10595+i)%MAX_P]
#define	P_Recipe_M48_POS(i)	pshm->P[(10606+i)%MAX_P]
#define	P_Recipe_M49_POS(i)	pshm->P[(10617+i)%MAX_P]
#define	P_Recipe_M50_POS(i)	pshm->P[(10628+i)%MAX_P]
#define	P_Memory_Tower_X_Err_Flag	pshm->P[10639]
#define	P_Memory_Tower_Y_Err_Flag	pshm->P[10640]
#define	P_Memory_Tower_Z_Err_Flag	pshm->P[10641]
#define	P_Memory_Tower_ZZ_Err_Flag	pshm->P[10642]
#define	P_CA_Clamp_Cell_Down_Pos	pshm->P[10643]
#define	P_AN_Clamp_Cell_Down_Pos	pshm->P[10644]
#define	P_Error_X_Axis_Packml(i)	pshm->P[(10645+i)%MAX_P]
#define	P_Error_X_Axis_Dequeue(i)	pshm->P[(10651+i)%MAX_P]
#define	P_Error_X_Axis_Num(i)	pshm->P[(10657+i)%MAX_P]
#define	P_Memory_Tower_Err_Pos_X_Save(i)	pshm->P[(10663+i)%MAX_P]
#define	P_Error_Y_Axis_Packml(i)	pshm->P[(10669+i)%MAX_P]
#define	P_Error_Y_Axis_Dequeue(i)	pshm->P[(10675+i)%MAX_P]
#define	P_Error_Y_Axis_Num(i)	pshm->P[(10681+i)%MAX_P]
#define	P_Memory_Tower_Err_Pos_Y_Save(i)	pshm->P[(10687+i)%MAX_P]
#define	P_Error_Z_Axis_Packml(i)	pshm->P[(10693+i)%MAX_P]
#define	P_Error_Z_Axis_Dequeue(i)	pshm->P[(10699+i)%MAX_P]
#define	P_Error_Z_Axis_Num(i)	pshm->P[(10705+i)%MAX_P]
#define	P_Memory_Tower_Err_Pos_Z_Save(i)	pshm->P[(10711+i)%MAX_P]
#define	P_Error_ZZ_Axis_Packml(i)	pshm->P[(10717+i)%MAX_P]
#define	P_Error_ZZ_Axis_Dequeue(i)	pshm->P[(10723+i)%MAX_P]
#define	P_Error_ZZ_Axis_Num(i)	pshm->P[(10729+i)%MAX_P]
#define	P_Memory_Tower_Err_Pos_ZZ_Save(i)	pshm->P[(10735+i)%MAX_P]
#define	P_PNP_Abort_Use_Bit	pshm->P[10741]
#define	P_PNP_Abort_Use_Total_Bit	pshm->P[10742]
#define	P_C_1st_PNP_FWD_Abort_Use_Bit	pshm->P[10743]
#define	P_C_1st_PNP_BWD_Abort_Use_Bit	pshm->P[10744]
#define	P_C_2nd_PNP_FWD_Abort_Use_Bit	pshm->P[10745]
#define	P_C_2nd_PNP_BWD_Abort_Use_Bit	pshm->P[10746]
#define	P_A_1st_PNP_FWD_Abort_Use_Bit	pshm->P[10747]
#define	P_A_1st_PNP_BWD_Abort_Use_Bit	pshm->P[10748]
#define	P_A_2nd_PNP_FWD_Abort_Use_Bit	pshm->P[10749]
#define	P_A_2nd_PNP_BWD_Abort_Use_Bit	pshm->P[10750]
#define	P_Single_Motor_Control_Bit	pshm->P[10751]
#define	P_C_1st_PNP_FWD_Abort_Calc_Bit	pshm->P[10752]
#define	P_C_1st_PNP_BWD_Abort_Calc_Bit	pshm->P[10753]
#define	P_C_2nd_PNP_FWD_Abort_Calc_Bit	pshm->P[10754]
#define	P_C_2nd_PNP_BWD_Abort_Calc_Bit	pshm->P[10755]
#define	P_A_1st_PNP_FWD_Abort_Calc_Bit	pshm->P[10756]
#define	P_A_1st_PNP_BWD_Abort_Calc_Bit	pshm->P[10757]
#define	P_A_2nd_PNP_FWD_Abort_Calc_Bit	pshm->P[10758]
#define	P_A_2nd_PNP_BWD_Abort_Calc_Bit	pshm->P[10759]
#define	P_C_1st_PNP_FWD_Cur_Pos	pshm->P[10760]
#define	P_C_1st_PNP_FWD_Cur_Vel	pshm->P[10761]
#define	P_C_1st_PNP_BWD_Cur_Pos	pshm->P[10762]
#define	P_C_1st_PNP_BWD_Cur_Vel	pshm->P[10763]
#define	P_C_2nd_PNP_FWD_Cur_Pos	pshm->P[10764]
#define	P_C_2nd_PNP_FWD_Cur_Vel	pshm->P[10765]
#define	P_C_2nd_PNP_BWD_Cur_Pos	pshm->P[10766]
#define	P_C_2nd_PNP_BWD_Cur_Vel	pshm->P[10767]
#define	P_A_1st_PNP_FWD_Cur_Pos	pshm->P[10768]
#define	P_A_1st_PNP_FWD_Cur_Vel	pshm->P[10769]
#define	P_A_1st_PNP_BWD_Cur_Pos	pshm->P[10770]
#define	P_A_1st_PNP_BWD_Cur_Vel	pshm->P[10771]
#define	P_A_2nd_PNP_FWD_Cur_Pos	pshm->P[10772]
#define	P_A_2nd_PNP_FWD_Cur_Vel	pshm->P[10773]
#define	P_A_2nd_PNP_BWD_Cur_Pos	pshm->P[10774]
#define	P_A_2nd_PNP_BWD_Cur_Vel	pshm->P[10775]
#define	P_C_1st_PNP_FWD_Limit_Pos	pshm->P[10776]
#define	P_C_1st_PNP_BWD_Limit_Pos	pshm->P[10777]
#define	P_C_2nd_PNP_FWD_Limit_Pos	pshm->P[10778]
#define	P_C_2nd_PNP_BWD_Limit_Pos	pshm->P[10779]
#define	P_A_1st_PNP_FWD_Limit_Pos	pshm->P[10780]
#define	P_A_1st_PNP_BWD_Limit_Pos	pshm->P[10781]
#define	P_A_2nd_PNP_FWD_Limit_Pos	pshm->P[10782]
#define	P_A_2nd_PNP_BWD_Limit_Pos	pshm->P[10783]
#define	P_C_1st_PNP_FWD_Max_Limit_Pos	pshm->P[10784]
#define	P_C_1st_PNP_BWD_Max_Limit_Pos	pshm->P[10785]
#define	P_C_2nd_PNP_FWD_Max_Limit_Pos	pshm->P[10786]
#define	P_C_2nd_PNP_BWD_Max_Limit_Pos	pshm->P[10787]
#define	P_A_1st_PNP_FWD_Max_Limit_Pos	pshm->P[10788]
#define	P_A_1st_PNP_BWD_Max_Limit_Pos	pshm->P[10789]
#define	P_A_2nd_PNP_FWD_Max_Limit_Pos	pshm->P[10790]
#define	P_A_2nd_PNP_BWD_Max_Limit_Pos	pshm->P[10791]
#define	P_C_1st_PNP_FWD_Remain_Stroke	pshm->P[10792]
#define	P_C_1st_PNP_BWD_Remain_Stroke	pshm->P[10793]
#define	P_C_2nd_PNP_FWD_Remain_Stroke	pshm->P[10794]
#define	P_C_2nd_PNP_BWD_Remain_Stroke	pshm->P[10795]
#define	P_A_1st_PNP_FWD_Remain_Stroke	pshm->P[10796]
#define	P_A_1st_PNP_BWD_Remain_Stroke	pshm->P[10797]
#define	P_A_2nd_PNP_FWD_Remain_Stroke	pshm->P[10798]
#define	P_A_2nd_PNP_BWD_Remain_Stroke	pshm->P[10799]
#define	P_C_1st_PNP_FWD_Stroke_Time	pshm->P[10800]
#define	P_C_1st_PNP_BWD_Stroke_Time	pshm->P[10801]
#define	P_C_2nd_PNP_FWD_Stroke_Time	pshm->P[10802]
#define	P_C_2nd_PNP_BWD_Stroke_Time	pshm->P[10803]
#define	P_A_1st_PNP_FWD_Stroke_Time	pshm->P[10804]
#define	P_A_1st_PNP_BWD_Stroke_Time	pshm->P[10805]
#define	P_A_2nd_PNP_FWD_Stroke_Time	pshm->P[10806]
#define	P_A_2nd_PNP_BWD_Stroke_Time	pshm->P[10807]
#define	P_C_1st_PNP_FWD_Max_Speed	pshm->P[10808]
#define	P_C_1st_PNP_BWD_Max_Speed	pshm->P[10809]
#define	P_C_2nd_PNP_FWD_Max_Speed	pshm->P[10810]
#define	P_C_2nd_PNP_BWD_Max_Speed	pshm->P[10811]
#define	P_A_1st_PNP_FWD_Max_Speed	pshm->P[10812]
#define	P_A_1st_PNP_BWD_Max_Speed	pshm->P[10813]
#define	P_A_2nd_PNP_FWD_Max_Speed	pshm->P[10814]
#define	P_A_2nd_PNP_BWD_Max_Speed	pshm->P[10815]
#define	P_C_1st_PNP_FWD_ACC_Dis	pshm->P[10816]
#define	P_C_1st_PNP_BWD_ACC_Dis	pshm->P[10817]
#define	P_C_2nd_PNP_FWD_ACC_Dis	pshm->P[10818]
#define	P_C_2nd_PNP_BWD_ACC_Dis	pshm->P[10819]
#define	P_A_1st_PNP_FWD_ACC_Dis	pshm->P[10820]
#define	P_A_1st_PNP_BWD_ACC_Dis	pshm->P[10821]
#define	P_A_2nd_PNP_FWD_ACC_Dis	pshm->P[10822]
#define	P_A_2nd_PNP_BWD_ACC_Dis	pshm->P[10823]
#define	P_C_1st_PNP_FWD_AbortTa	pshm->P[10824]
#define	P_C_1st_PNP_FWD_AbortTs	pshm->P[10825]
#define	P_C_1st_PNP_BWD_AbortTa	pshm->P[10826]
#define	P_C_1st_PNP_BWD_AbortTs	pshm->P[10827]
#define	P_C_2nd_PNP_FWD_AbortTa	pshm->P[10828]
#define	P_C_2nd_PNP_FWD_AbortTs	pshm->P[10829]
#define	P_C_2nd_PNP_BWD_AbortTa	pshm->P[10830]
#define	P_C_2nd_PNP_BWD_AbortTs	pshm->P[10831]
#define	P_A_1st_PNP_FWD_AbortTa	pshm->P[10832]
#define	P_A_1st_PNP_FWD_AbortTs	pshm->P[10833]
#define	P_A_1st_PNP_BWD_AbortTa	pshm->P[10834]
#define	P_A_1st_PNP_BWD_AbortTs	pshm->P[10835]
#define	P_A_2nd_PNP_FWD_AbortTa	pshm->P[10836]
#define	P_A_2nd_PNP_FWD_AbortTs	pshm->P[10837]
#define	P_A_2nd_PNP_BWD_AbortTa	pshm->P[10838]
#define	P_A_2nd_PNP_BWD_AbortTs	pshm->P[10839]
#define	P_C_1st_PNP_FWD_Abort_Dec_Offset	pshm->P[10840]
#define	P_C_1st_PNP_BWD_Abort_Dec_Offset	pshm->P[10841]
#define	P_C_2nd_PNP_FWD_Abort_Dec_Offset	pshm->P[10842]
#define	P_C_2nd_PNP_BWD_Abort_Dec_Offset	pshm->P[10843]
#define	P_A_1st_PNP_FWD_Abort_Dec_Offset	pshm->P[10844]
#define	P_A_1st_PNP_BWD_Abort_Dec_Offset	pshm->P[10845]
#define	P_A_2nd_PNP_FWD_Abort_Dec_Offset	pshm->P[10846]
#define	P_A_2nd_PNP_BWD_Abort_Dec_Offset	pshm->P[10847]
#define	P_1st_PNP_FWD_Abort_Offset(i)	pshm->P[(10848+i)%MAX_P]
#define	P_1st_PNP_BWD_Abort_Offset(i)	pshm->P[(10938+i)%MAX_P]
#define	P_2nd_PNP_FWD_Abort_Offset(i)	pshm->P[(11028+i)%MAX_P]
#define	P_2nd_PNP_BWD_Abort_Offset(i)	pshm->P[(11118+i)%MAX_P]
#define	P_Abort_Init_Value	pshm->P[11208]
#define	P_C_1st_PNP_FWD_AbortTa_Buffer	pshm->P[11209]
#define	P_C_1st_PNP_FWD_AbortTs_Buffer	pshm->P[11210]
#define	P_C_1st_PNP_BWD_AbortTa_Buffer	pshm->P[11211]
#define	P_C_1st_PNP_BWD_AbortTs_Buffer	pshm->P[11212]
#define	P_C_2nd_PNP_FWD_AbortTa_Buffer	pshm->P[11213]
#define	P_C_2nd_PNP_FWD_AbortTs_Buffer	pshm->P[11214]
#define	P_C_2nd_PNP_BWD_AbortTa_Buffer	pshm->P[11215]
#define	P_C_2nd_PNP_BWD_AbortTs_Buffer	pshm->P[11216]
#define	P_A_1st_PNP_FWD_AbortTa_Buffer	pshm->P[11217]
#define	P_A_1st_PNP_FWD_AbortTs_Buffer	pshm->P[11218]
#define	P_A_1st_PNP_BWD_AbortTa_Buffer	pshm->P[11219]
#define	P_A_1st_PNP_BWD_AbortTs_Buffer	pshm->P[11220]
#define	P_A_2nd_PNP_FWD_AbortTa_Buffer	pshm->P[11221]
#define	P_A_2nd_PNP_FWD_AbortTs_Buffer	pshm->P[11222]
#define	P_A_2nd_PNP_BWD_AbortTa_Buffer	pshm->P[11223]
#define	P_A_2nd_PNP_BWD_AbortTs_Buffer	pshm->P[11224]
#define	P_C_1st_PNP_FWD_Restore_Bit	pshm->P[11225]
#define	P_C_1st_PNP_BWD_Restore_Bit	pshm->P[11226]
#define	P_C_2nd_PNP_FWD_Restore_Bit	pshm->P[11227]
#define	P_C_2nd_PNP_BWD_Restore_Bit	pshm->P[11228]
#define	P_A_1st_PNP_FWD_Restore_Bit	pshm->P[11229]
#define	P_A_1st_PNP_BWD_Restore_Bit	pshm->P[11230]
#define	P_A_2nd_PNP_FWD_Restore_Bit	pshm->P[11231]
#define	P_A_2nd_PNP_BWD_Restore_Bit	pshm->P[11232]
#define	P_Align_Inspection_Time	pshm->P[11233]
#define	P_Front_Inspection_Time	pshm->P[11234]
#define	P_Stack_Inspection_Time	pshm->P[11235]
#define	P_Existence_Inspection_Time	pshm->P[11236]
#define	P_EmptyTable_Inspection_Time	pshm->P[11237]
#define	P_FirstSepa_Inspection_Time	pshm->P[11238]
#define	P_Vision_Anode_Sepa_Mode_Stack_Command	pshm->P[11239]
#define	P_Vision_Cathode_Sepa_Mode_Stack_Command	pshm->P[11240]
#define	P_Cathode_Sepa_Mode_Timer	pshm->P[11241]
#define	P_Anode_Sepa_Mode_Timer	pshm->P[11242]
#define	P_Vision_Pass	pshm->P[11243]
#define	P_FirstSepa_Ret	pshm->P[11244]
#define	P_Vision_Align_Command	pshm->P[11245]
#define	P_Vision_Surface_Command	pshm->P[11246]
#define	P_Vision_Stack_Command	pshm->P[11247]
#define	P_Vision_Existence_Command	pshm->P[11248]
#define	P_Vision_EmptyTable_Command	pshm->P[11249]
#define	P_Vision_FirstSepa_Command	pshm->P[11250]
#define	P_Selected_Align_Inspection_Unit	pshm->P[11251]
#define	P_Selected_Surface_Inspection_Unit	pshm->P[11252]
#define	P_Selected_Stack_Inspection_Unit	pshm->P[11253]
#define	P_Selected_Existence_Inspection_Unit	pshm->P[11254]
#define	P_Selected_EmptyTable_Inspection_Unit	pshm->P[11255]
#define	P_Set_Cathode_Align_Zero_Pos	pshm->P[11256]
#define	P_Set_Anode_Align_Zero_Pos	pshm->P[11257]
#define	P_Vision_Align_State_Machine	pshm->P[11258]
#define	P_Vision_Surface_State_Machine	pshm->P[11259]
#define	P_Vision_Stack_State_Machine	pshm->P[11260]
#define	P_Vision_Existence_State_Machine	pshm->P[11261]
#define	P_Vision_EmptyTable_State_Machine	pshm->P[11262]
#define	P_Vision_FirstSepa_State_Machine	pshm->P[11263]
#define	P_Vision_Align_Status	pshm->P[11264]
#define	P_Vision_Surface_Status	pshm->P[11265]
#define	P_Vision_Stack_Status	pshm->P[11266]
#define	P_Vision_Existence_Status	pshm->P[11267]
#define	P_Vision_EmptyTable_Status	pshm->P[11268]
#define	P_Vision_FirstSepa_Status	pshm->P[11269]
#define	P_Align_Zero_Move_Start_Flag(i)	pshm->P[(11270+i)%MAX_P]
#define	P_Cathode_Align_Table_Move	pshm->P[11272]
#define	P_Anode_Align_Table_Move	pshm->P[11273]
#define	P_Vision_Anode_Cell_Existence	pshm->P[11274]
#define	P_Vision_Cathode_Cell_Existence	pshm->P[11275]
#define	P_Align_Sheet_CHK	pshm->P[11276]
#define	P_Anode_NG_Code	pshm->P[11277]
#define	P_Cathode_NG_Code	pshm->P[11278]
#define	P_Stack_NG_Code	pshm->P[11279]
#define	P_Anode_Align_Stage_X_mm	pshm->P[5000]
#define	P_Anode_Align_Stage_Y_mm	pshm->P[5001]
#define	P_Anode_Align_Stage_T_mm	pshm->P[5002]
#define	P_Cathode_Align_Stage_X_mm	pshm->P[5003]
#define	P_Cathode_Align_Stage_Y_mm	pshm->P[5004]
#define	P_Cathode_Align_Stage_T_mm	pshm->P[5005]
#define	P_Vision_AutoCal_Mode	pshm->P[5010]
#define	P_Vision_AutoCal_Command	pshm->P[5011]
#define	P_Vision_AutoCal_Status	pshm->P[5012]
#define	P_PMAC_AutoCal_Alarm	pshm->P[5013]
#define	P_PMAC_AutoCal_Mode	pshm->P[5014]
#define	P_PMAC_AutoCal_Status	pshm->P[5015]
#define	P_Align_AutoCal_X_POS	pshm->P[5016]
#define	P_Align_AutoCal_Y_POS	pshm->P[5017]
#define	P_Align_AutoCal_T_POS	pshm->P[5018]
#define	P_CMD_Align_Complete	pshm->P[5019]
#define	P_Anode_Align_Data_Delete_Set_Flag	pshm->P[5020]
#define	P_Anode_2nd_PNP_Data_Delete_Set_Flag	pshm->P[5021]
#define	P_Cathode_Align_Data_Delete_Set_Flag	pshm->P[5022]
#define	P_Cathode_2nd_PNP_Data_Delete_Set_Flag	pshm->P[5023]
#define	P_Anode_Data_Delete_Vision_To_PMAC_Get_Flag	pshm->P[5024]
#define	P_Cathode_Data_Delete_Vision_To_PMAC_Get_Flag	pshm->P[5025]
#define	P_VISION_Anode_Cathode_Total_Recipe_Count	pshm->P[5029]
#define	P_EPC_VISION_INPUT_Correction	pshm->P[5030]
#define	P_Vison_Read_EPC_Camera_Move_Request	pshm->P[5031]
#define	P_Anode_Vision_To_NG_Code	pshm->P[5035]
#define	P_Cathode_Vision_To_NG_Code	pshm->P[5036]
#define	P_Stack_Vision_To_NG_Code	pshm->P[5037]
#define	P_Vision_Anode_Trigger_Count_Reset_Flag	pshm->P[5040]
#define	P_Vision_Anode_Trigger_Count_Reset_Complete_Flag	pshm->P[5041]
#define	P_Vision_Cathode_Trigger_Count_Reset_Flag	pshm->P[5042]
#define	P_Vision_Cathode_Trigger_Count_Reset_Complete_Flag	pshm->P[5043]
#define	P_Vision_Stack_Trigger_Count_Reset_Flag	pshm->P[5044]
#define	P_Vision_Stack_Trigger_Count_Reset_Complete_Flag	pshm->P[5045]
#define	P_Y_Vision_Work_Confirm_Operation_Flag	pshm->P[5047]
#define	P_X_Vision_Work_Confirm_Operation_Ack	pshm->P[5048]
#define	P_Vision_Send_Auto_Maual_Signal	pshm->P[5049]
#define	P_Vision_Ca_AT_Retry_Cal_Flag	pshm->P[5050]
#define	P_Vision_An_AT_Retry_Cal_Flag	pshm->P[5051]
#define	P_PMAC_To_Vision_Ca_AT_Retry_Cal_Ack	pshm->P[5052]
#define	P_PMAC_To_Vision_An_AT_Retry_Cal_Ack	pshm->P[5053]
#define	P_Vision_Send_Middle_Skip_Off_Flag	pshm->P[5054]
#define	P_Vision_Sepa_ARC_Judge	pshm->P[5056]
#define	P_Ca_Align_DIO_Log	pshm->P[5060]
#define	P_Ca_Surface_DIO_Log	pshm->P[5061]
#define	P_An_Align_DIO_Log	pshm->P[5063]
#define	P_An_Surface_DIO_Log	pshm->P[5064]
#define	P_Stack_DIO_Log	pshm->P[5065]
#define	P_Y_Vision_MSA_Use_Flag	pshm->P[5081]
#define	P_Anode_Align_Vision_Sheet_1	pshm->P[5100]
#define	P_Anode_Align_Vision_Sheet_2	pshm->P[5101]
#define	P_Anode_Align_Vision_Sheet_3	pshm->P[5102]
#define	P_Anode_Align_Vision_Sheet_4	pshm->P[5103]
#define	P_Anode_Align_Vision_Sheet_5	pshm->P[5104]
#define	P_Anode_Align_Vision_Sheet_6	pshm->P[5105]
#define	P_Anode_Align_Vision_Sheet_7	pshm->P[5106]
#define	P_Cathode_Align_Vision_Sheet_1	pshm->P[5110]
#define	P_Cathode_Align_Vision_Sheet_2	pshm->P[5111]
#define	P_Cathode_Align_Vision_Sheet_3	pshm->P[5112]
#define	P_Cathode_Align_Vision_Sheet_4	pshm->P[5113]
#define	P_Cathode_Align_Vision_Sheet_5	pshm->P[5114]
#define	P_Cathode_Align_Vision_Sheet_6	pshm->P[5115]
#define	P_Cathode_Align_Vision_Sheet_7	pshm->P[5116]
#define	P_Stop_Debug_Flag	pshm->P[11280]
#define	P_Stop_Sub_Master_Motion_Program_Flag(i)	pshm->P[(11281+i)%MAX_P]
#define	P_Stop_Slave_Motion_Program_Flag(i)	pshm->P[(11301+i)%MAX_P]
#define	P_Stop_Motor_Status(i)	pshm->P[(11321+i)%MAX_P]
#define	P_Stop_Coord_Status(i)	pshm->P[(11369+i)%MAX_P]
#define	P_Stop_Status_Check_Address	pshm->P[11403]
#define	P_Stop_Status_Save_Address	pshm->P[11404]
#define	P_Stop_Check_RTN	pshm->P[11405]
#define	P_Stop_Save_RTN(i)	pshm->P[(11406+i)%MAX_P]
#define	P_Old_Total_Unit_Bit	pshm->P[11410]
#define	P_Memory_Tower_Dec_Result	pshm->P[11411]
#define	P_Stop_Motor_Pos(i)	pshm->P[(11412+i)%MAX_P]
#define	P_PNP_Move_Timer	pshm->P[11421]
#define	P_PNP_Move_Delay_Time	pshm->P[11422]
#define	P_Stop_Memory_Pos_RTN	pshm->P[11423]
#define	P_Slave1_Motion_Command	pshm->P[11424]
#define	P_Slave2_Motion_Command	pshm->P[11425]
#define	P_Slave3_Motion_Command	pshm->P[11426]
#define	P_Slave4_Motion_Command	pshm->P[11427]
#define	P_Slave5_Motion_Command	pshm->P[11428]
#define	P_Slave6_Motion_Command	pshm->P[11429]
#define	P_Slave7_Motion_Command	pshm->P[11430]
#define	P_Slave8_Motion_Command	pshm->P[11431]
#define	P_Slave9_Motion_Command	pshm->P[11432]
#define	P_Slave10_Motion_Command	pshm->P[11433]
#define	P_Slave11_Motion_Command	pshm->P[11434]
#define	P_Slave12_Motion_Command	pshm->P[11435]
#define	P_Slave13_Motion_Command	pshm->P[11436]
#define	P_Slave14_Motion_Command	pshm->P[11437]
#define	P_Slave15_Motion_Command	pshm->P[11438]
#define	P_Slave16_Motion_Command	pshm->P[11439]
#define	P_Slave17_Motion_Command	pshm->P[11440]
#define	P_Slave18_Motion_Command	pshm->P[11441]
#define	P_Slave19_Motion_Command	pshm->P[11442]
#define	P_Slave20_Motion_Command	pshm->P[11443]
#define	P_PNP_90_Deg_TM	pshm->P[11444]
#define	P_PNP_90_Deg_TA	pshm->P[11445]
#define	P_PNP_90_Deg_TS	pshm->P[11446]
#define	P_PNP_Ready_TM	pshm->P[11447]
#define	P_PNP_Ready_TA	pshm->P[11448]
#define	P_PNP_Ready_TS	pshm->P[11449]
#define	P_PNP_45_Deg_TM	pshm->P[11450]
#define	P_PNP_45_Deg_TA	pshm->P[11451]
#define	P_PNP_45_Deg_TS	pshm->P[11452]
#define	P_PROG_21_Program_Ver	pshm->P[2781]
#define	P_PROG_23_Program_Ver	pshm->P[2783]
#define	P_PROG_24_Program_Ver	pshm->P[2784]
#define	P_PROG_25_Program_Ver	pshm->P[2785]
#define	P_PROG_26_Program_Ver	pshm->P[2786]
#define	P_PROG_27_Program_Ver	pshm->P[2787]
#define	P_PROG_28_Program_Ver	pshm->P[2788]
#define	P_PROG_30_Program_Ver	pshm->P[2790]
#define	P_Master_Motion_Trigger	pshm->P[11453]
#define	P_Parity_Bit	pshm->P[11454]
#define	P_Master_Move	pshm->P[11455]
#define	P_Master_TA	pshm->P[11456]
#define	P_Master_TS	pshm->P[11457]
#define	P_Master_TM	pshm->P[11458]
#define	P_Anode_Count	pshm->P[11459]
#define	P_Cathode_Count	pshm->P[11460]
#define	P_Anode_Thickness	pshm->P[11461]
#define	P_Cathode_Thickness	pshm->P[11462]
#define	P_Sepa_Thickness	pshm->P[11463]
#define	P_Anode_Thickness_PLC	pshm->P[11464]
#define	P_Cathode_Thickness_PLC	pshm->P[11465]
#define	P_Sepa_Thickness_PLC	pshm->P[11466]
#define	P_Old_P_Anode_TR1_Master_Motion_Trigger(i)	pshm->P[(11467+i)%MAX_P]
#define	P_Old_P_Cathode_TR1_Master_Motion_Trigger(i)	pshm->P[(11483+i)%MAX_P]
#define	P_Anode_TR1_Old_Mode(i)	pshm->P[(11499+i)%MAX_P]
#define	P_Cathode_TR1_Old_Mode(i)	pshm->P[(11515+i)%MAX_P]
#define	P_Older_Than_P_Anode_TR1_Old_Mode(i)	pshm->P[(11531+i)%MAX_P]
#define	P_Older_Than_P_Cathode_TR1_Old_Mode(i)	pshm->P[(11547+i)%MAX_P]
#define	P_Older_Than_P_Sequence_Old_P_Anode_TR1_Current_Mode_Trigger(i)	pshm->P[(11563+i)%MAX_P]
#define	P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Current_Mode_Trigger(i)	pshm->P[(11579+i)%MAX_P]
#define	P_Old_P_Anode_TR1_Mode_Command(i)	pshm->P[(11595+i)%MAX_P]
#define	P_Old_P_Cathode_TR1_Mode_Command(i)	pshm->P[(11611+i)%MAX_P]
#define	P_Older_Than_P_Old_P_Anode_TR1_Mode_Command(i)	pshm->P[(11627+i)%MAX_P]
#define	P_Older_Than_P_Old_P_Cathode_TR1_Mode_Command(i)	pshm->P[(11643+i)%MAX_P]
#define	P_Older_Than_P_Sequence_Old_P_Anode_TR1_Mode_Command_Trigger(i)	pshm->P[(11659+i)%MAX_P]
#define	P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Mode_Command_Trigger(i)	pshm->P[(11675+i)%MAX_P]
#define	P_Old_P_Anode_TR1_PMAC_Status(i)	pshm->P[(11691+i)%MAX_P]
#define	P_Old_P_Cathode_TR1_PMAC_Status(i)	pshm->P[(11707+i)%MAX_P]
#define	P_Older_Than_P_Old_P_Anode_TR1_PMAC_Status(i)	pshm->P[(11723+i)%MAX_P]
#define	P_Older_Than_P_Old_P_Cathode_TR1_PMAC_Status(i)	pshm->P[(11739+i)%MAX_P]
#define	P_Old_P_Slave1_Motion_Command(i)	pshm->P[(11755+i)%MAX_P]
#define	P_Old_P_Slave10_Motion_Command(i)	pshm->P[(11771+i)%MAX_P]
#define	P_Old_Slave1_P_SubMaster_Sub_Mode_Command(i)	pshm->P[(11787+i)%MAX_P]
#define	P_Old_Slave10_P_SubMaster_Sub_Mode_Command(i)	pshm->P[(11803+i)%MAX_P]
#define	P_Sequence_Old_P_Current_Mode_Trigger(i)	pshm->P[(11819+i)%MAX_P]
#define	P_Sequence_Old_Mode(i)	pshm->P[(11835+i)%MAX_P]
#define	P_Sequence_Old_P_Mode_Command(i)	pshm->P[(11851+i)%MAX_P]
#define	P_Sequence_Old_P_Mode_Command_Trigger(i)	pshm->P[(11867+i)%MAX_P]
#define	P_SubMaster_Sub_Old_Mode(i)	pshm->P[(11883+i)%MAX_P]
#define	P_SubMaster_Sub_Old_Command(i)	pshm->P[(11899+i)%MAX_P]
#define	P_SubMaster_Sub_Mode_Command(i)	pshm->P[(11915+i)%MAX_P]
#define	P_SubMaster_Sub_Old_Trigger(i)	pshm->P[(11931+i)%MAX_P]
#define	P_InterLock_No3_Array(i)	pshm->P[(11947+i)%MAX_P]
#define	P_Old_InterLock_No3_Array(i)	pshm->P[(11963+i)%MAX_P]
#define	P_Mode_Err(i)	pshm->P[(11979+i)%MAX_P]
#define	P_Spool_Enable	pshm->P[11984]
#define	P_Cathode_1St_Flow_Chart_Bit_Flag	pshm->P[11985]
#define	P_Cathode_AT_Flow_Chart_Bit_Flag	pshm->P[11986]
#define	P_Cathode_2nd_Flow_Chart_Bit_Flag	pshm->P[11987]
#define	P_Anode_Clamp_Flow_Chart_Bit_Flag	pshm->P[11988]
#define	P_Final_Roll_Flow_Chart_Bit_Flag	pshm->P[11989]
#define	P_Stack_Table_Flow_Chart_Bit_Flag	pshm->P[11990]
#define	P_Cathode_Clamp_Flow_Chart_Bit_Flag	pshm->P[11991]
#define	P_Anode_2nd_Flow_Chart_Bit_Flag	pshm->P[11992]
#define	P_Anode_AT_Flow_Chart_Bit_Flag	pshm->P[11993]
#define	P_Anode_1St_Flow_Chart_Bit_Flag	pshm->P[11994]
#define	P_Sepa_Unwinder_Flow_Chart_Bit_Flag	pshm->P[11995]
#define	P_Slave5_Target_Z_For_Cutting	pshm->P[11996]
#define	P_Slave31_Motion_Command	pshm->P[11997]
#define	P_Pause_Err_Process	pshm->P[11998]
#define	P_Pause_Err_Timer	pshm->P[11999]
#define	P_Pause_Err_Count	pshm->P[12000]
#define	P_Pause_Err_Use	pshm->P[12001]
#define	P_Pause_Err_Use2	pshm->P[12002]
#define	P_Anode_Pause_Signal_Err	pshm->P[12003]
#define	P_Cathode_Pause_Signal_Err	pshm->P[12004]
#define	P_Anode_Pause_Err	pshm->P[12005]
#define	P_Anode_Pause_Err_Count	pshm->P[12006]
#define	P_Phasing_Err(i)	pshm->P[(12007+i)%MAX_P]
#define	P_Phasing_Err2(i)	pshm->P[(12012+i)%MAX_P]
#define	P_Execute_Wait_Mode_Memory_Tower	pshm->P[12017]
#define	P_Execute_Vac_MNTR	pshm->P[12018]
#define	P_Old_Cathode_Cur_Mode	pshm->P[12019]
#define	P_Cathode_Run_Mode_Type(i)	pshm->P[(12020+i)%MAX_P]
#define	P_Cathode_Run_Mode_Trigger(i)	pshm->P[(12040+i)%MAX_P]
#define	P_Old_Anode_Cur_Mode	pshm->P[12060]
#define	P_Anode_Run_Mode_Type(i)	pshm->P[(12061+i)%MAX_P]
#define	P_Anode_Run_Mode_Trigger(i)	pshm->P[(12081+i)%MAX_P]
#define	P_Anode_1TR_T_Belt_To_Align	pshm->P[12101]
#define	P_Anode_1TR_T_Align_To_Belt	pshm->P[12102]
#define	P_Anode_1TR_T_Ready_Pos	pshm->P[12103]
#define	P_Anode_1TR_T_Ready_To_Align	pshm->P[12104]
#define	P_Anode_1TR_T_Ready_To_Belt	pshm->P[12105]
#define	P_Anode_Picker_Turn	pshm->P[12106]
#define	P_Anode_2TR_T_Align_To_Stack	pshm->P[12107]
#define	P_Anode_2TR_T_Stack_To_Align	pshm->P[12108]
#define	P_Anode_Clamp_Off	pshm->P[12109]
#define	P_Anode_Clamp_On	pshm->P[12110]
#define	P_Anode_Clamp_Down	pshm->P[12111]
#define	P_FR_Anode_Motion	pshm->P[12112]
#define	P_FR_Cathode_Motion	pshm->P[12113]
#define	P_Stack_Table_Down	pshm->P[12114]
#define	P_Cathode_Clamp_On	pshm->P[12115]
#define	P_Cathode_Clamp_Off	pshm->P[12116]
#define	P_Cathode_Clamp_Down	pshm->P[12117]
#define	P_Cathode_2TR_T_Align_To_Stack	pshm->P[12118]
#define	P_Cathode_2TR_T_Stack_To_Align	pshm->P[12119]
#define	P_Cathode_Picker_Turn	pshm->P[12120]
#define	P_Cathode_1TR_T_Belt_To_Align	pshm->P[12121]
#define	P_Cathode_1TR_T_Align_To_Belt	pshm->P[12122]
#define	P_Cathode_1TR_T_Ready_Pos	pshm->P[12123]
#define	P_Cathode_1TR_T_Ready_To_Align	pshm->P[12124]
#define	P_Cathode_1TR_T_Ready_To_Belt	pshm->P[12125]
#define	P_Anode_1TR_Z_Belt_To_Align	pshm->P[12126]
#define	P_Anode_1TR_Z_Align_To_Belt	pshm->P[12127]
#define	P_Anode_1TR_Z_Align_Down	pshm->P[12128]
#define	P_Anode_1TR_Z_Align_UP	pshm->P[12129]
#define	P_Anode_1TR_Z_Belt_Down	pshm->P[12130]
#define	P_Anode_1TR_Z_Belt_UP	pshm->P[12131]
#define	P_Anode_1TR_Z_Ready	pshm->P[12132]
#define	P_Anode_1TR_Z_Align_Blow	pshm->P[12133]
#define	P_Anode_1TR_Z_Belt_Vac	pshm->P[12134]
#define	P_Cathode_1TR_Z_Belt_To_Align	pshm->P[12135]
#define	P_Cathode_1TR_Z_Align_To_Belt	pshm->P[12136]
#define	P_Cathode_1TR_Z_Align_Down	pshm->P[12137]
#define	P_Cathode_1TR_Z_Align_UP	pshm->P[12138]
#define	P_Cathode_1TR_Z_Belt_Down	pshm->P[12139]
#define	P_Cathode_1TR_Z_Belt_UP	pshm->P[12140]
#define	P_Cathode_1TR_Z_Ready	pshm->P[12141]
#define	P_Cathode_1TR_Z_Align_Blow	pshm->P[12142]
#define	P_Cathode_1TR_Z_Belt_Vac	pshm->P[12143]
#define	P_Anode_2TR_Align_To_Stack	pshm->P[12144]
#define	P_Anode_2TR_Stack_To_Align	pshm->P[12145]
#define	P_Anode_2TR_Stack_Down	pshm->P[12146]
#define	P_Anode_2TR_Stack_UP	pshm->P[12147]
#define	P_Anode_2TR_Align_Down	pshm->P[12148]
#define	P_Anode_2TR_Align_UP	pshm->P[12149]
#define	P_Anode_2TR_Align_Vac	pshm->P[12150]
#define	P_Anode_2TR_Stack_Blow	pshm->P[12151]
#define	P_Anode_2TR_Stack_Sepa_Blow	pshm->P[12152]
#define	P_FR_Last_Run_Motion	pshm->P[12153]
#define	P_Servo_Dancer_Ready_Pos	pshm->P[12154]
#define	P_Servo_Dancer_Ready_Offset	pshm->P[12155]
#define	P_Servo_Dancer_Test	pshm->P[12156]
#define	P_Align_Start_IO_Judgment	pshm->P[12157]
#define	P_Driving_Clamp2	pshm->P[12158]
#define	P_Driving_Clamp	pshm->P[12159]
#define	P_MSA_Timer	pshm->P[12160]
#define	P_SM_Cathode_Stack_MSA	pshm->P[12161]
#define	P_SM_Anode_Stack_MSA	pshm->P[12162]
#define	P_SM_Cathode_Align_MSA	pshm->P[12163]
#define	P_SM_Anode_Align_MSA	pshm->P[12164]
#define	P_MSA_Interlock	pshm->P[12165]
#define	P_Anode_MSA_Final_Roll_Pos_Check	pshm->P[12166]
#define	P_Anode_MSA_2nd_PNP_Pos_Check	pshm->P[12167]
#define	P_Anode_MSA_1nd_PNP_Pos_Check	pshm->P[12168]
#define	P_MSA_Err_Save_CA_Stack_MSA	pshm->P[12169]
#define	P_MSA_Err_Save_AN_Stack_MSA	pshm->P[12170]
#define	P_MSA_Err_Save_CA_Align_MSA	pshm->P[12171]
#define	P_MSA_Err_Save_AN_Align_MSA	pshm->P[12172]
#define	P_MSA_BTN_Err	pshm->P[12173]
#define	P_Anode_Algin_MSA_RTN	pshm->P[12174]
#define	P_Anode_Algin_MSA_RTN2	pshm->P[12175]
#define	P_Cathode_Algin_MSA_RTN	pshm->P[12176]
#define	P_Cathode_Stack_MSA_RTN	pshm->P[12177]
#define	P_Anode_Stack_MSA_RTN	pshm->P[12178]
#define	P_Anode_Align_MSA_Count	pshm->P[12179]
#define	P_Cathode_Align_MSA_Count	pshm->P[12180]
#define	P_Anode_Stack_MSA_Count	pshm->P[12181]
#define	P_Cathode_Stack_MSA_Count	pshm->P[12182]
#define	P_Cathode_Align_Stop_Blocked	pshm->P[12183]
#define	P_Anode_Align_Stop_Blocked	pshm->P[12184]
#define	P_Cathode_Stack_Stop_Blocked	pshm->P[12185]
#define	P_Anode_Stack_Stop_Blocked	pshm->P[12186]
#define	P_Anode_Align_MSA_Execute_Timer	pshm->P[12187]
#define	P_Cathode_Align_MSA_Execute_Timer	pshm->P[12188]
#define	P_Anode_Stack_MSA_Execute_Timer	pshm->P[12189]
#define	P_Cathode_Stack_MSA_Execute_Timer	pshm->P[12190]
#define	P_Anode_Align_Interlock_Blocked	pshm->P[12191]
#define	P_Cathode_Align_Interlock_Blocked	pshm->P[12192]
#define	P_Anode_Stack_Interlock_Blocked	pshm->P[12193]
#define	P_Cathode_Stack_Interlock_Blocked	pshm->P[12194]
#define	P_Anode_1TR_T_Align_POS	pshm->P[12195]
#define	P_Anode_1TR_T_Belt_POS	pshm->P[12196]
#define	P_Anode_1TR_T_Ready_POS	pshm->P[12197]
#define	P_Anode_2TR_T_Align_POS	pshm->P[12198]
#define	P_Anode_2TR_T_Stack_POS	pshm->P[12199]
#define	P_Cathode_2TR_T_Align_POS	pshm->P[12200]
#define	P_Cathode_2TR_T_Stack_POS	pshm->P[12201]
#define	P_Cathode_1TR_T_Align_POS	pshm->P[12202]
#define	P_Cathode_1TR_T_Belt_POS	pshm->P[12203]
#define	P_Cathode_1TR_T_Ready_POS	pshm->P[12204]
#define	P_Seq_Abort	pshm->P[12205]
#define	P_Blocked_Abort	pshm->P[12206]
#define	P_Abort_Flag	pshm->P[12207]
#define	P_Opposite_Lane_1ST_TR_Safe_Pos	pshm->P[12208]
#define	P_Opposite_Lane_P_PMAC_Status	pshm->P[12209]
#define	P_Opposite_Lane_OFF_Not_Start	pshm->P[12210]
#define	P_Pause_Alarm_Blocked	pshm->P[12211]
#define	P_Old_Alarm_Arr	pshm->P[12212]
#define	P_Cycle_Stop_Delay_Time	pshm->P[12213]
#define	P_Cycle_Stop_Offset	pshm->P[12214]
#define	P_Opposite_Lane_Abort_Alram_Flag	pshm->P[12215]
#define	P_Cathode_Clmap_Y1_Ready_Pos	pshm->P[12216]
#define	P_Cathode_Clmap_Y1_Clamp_Pos	pshm->P[12217]
#define	P_Anode_Clmap_Y1_Ready_Pos	pshm->P[12218]
#define	P_Anode_Clmap_Y1_Clamp_Pos	pshm->P[12219]
#define	P_Cathode_Clmap_Y2_Ready_Pos	pshm->P[12220]
#define	P_Cathode_Clmap_Y2_Clamp_Pos	pshm->P[12221]
#define	P_Anode_Clmap_Y2_Ready_Pos	pshm->P[12222]
#define	P_Anode_Clmap_Y2_Clamp_Pos	pshm->P[12223]
#define	P_Cathode_Clamp_Z2_Ready_Pos	pshm->P[12224]
#define	P_Cathode_Clamp_Z2_Clamp_Pos	pshm->P[12225]
#define	P_Anode_Clamp_Z2_Ready_Pos	pshm->P[12226]
#define	P_Anode_Clamp_Z2_Clamp_Pos	pshm->P[12227]
#define	P_Cathode_Clamp_Z1_Ready_Pos	pshm->P[12228]
#define	P_Cathode_Clamp_Z1_Clamp_Pos	pshm->P[12229]
#define	P_Anode_Clamp_Z1_Ready_Pos	pshm->P[12230]
#define	P_Anode_Clamp_Z1_Clamp_Pos	pshm->P[12231]
#define	P_Cathode_Clamp_Z2_Cell_Down	pshm->P[12232]
#define	P_Anode_Clamp_Z2_Cell_Down	pshm->P[12233]
#define	P_Cathode_Clamp_Z1_Cell_Down	pshm->P[12234]
#define	P_Anode_Clamp_Z1_Cell_Down	pshm->P[12235]
#define	P_Single_Run_Pass	pshm->P[12236]
#define	P_Cathode_2nd_PNP_Sepa_Blow	pshm->P[12237]
#define	P_Cathode_2nd_PNP_Align_Blow	pshm->P[12238]
#define	P_Cathode_2nd_PNP_Stack_Blow	pshm->P[12239]
#define	P_Cathode_2nd_PNP_Align_Vac	pshm->P[12240]
#define	P_Cathode_2nd_PNP_Align_Up_Motion	pshm->P[12241]
#define	P_Cathode_2nd_PNP_Align_Down_Motion	pshm->P[12242]
#define	P_Cathode_2nd_PNP_Stack_Up_Motion	pshm->P[12243]
#define	P_Cathode_2nd_PNP_Stack_Down_Motion	pshm->P[12244]
#define	P_Cathode_2nd_PNP_Stack_To_Align_Motion	pshm->P[12245]
#define	P_Cathode_2nd_PNP_Align_To_Stack_Motion	pshm->P[12246]
#define	P_Door_Open_Stop_Count	pshm->P[12247]
#define	P_Buf_Stack_NG_Flag	pshm->P[12248]
#define	P_Stop_1st_PNP_Move	pshm->P[12249]
#define	P_Seq_Abort_Timer	pshm->P[12250]
#define	P_Sync_Test	pshm->P[12251]
#define	P_Dry_Pause_Flag	pshm->P[12252]
#define	P_Dry_Run_Pasue_Timer	pshm->P[12253]
#define	P_Resume_Stop_Blocked	pshm->P[12254]
#define	P_Discharge_Wait	pshm->P[12255]
#define	P_Command_Run_Flag	pshm->P[12256]
#define	P_Stop_Cmd_Origin	pshm->P[12257]
#define	P_Stop_Origin_Save(i)	pshm->P[(12258+i)%MAX_P]
#define	P_Old_M_Y_Sepa_Cutter_SSR_On	pshm->P[12273]
#define	P_Sepa_Cutter_SSR_Off_Time	pshm->P[12274]
#define	P_Sepa_Cutter_SSR_Off	pshm->P[12275]
#define	P_Sepa_Cutter_SSR_Off_Timer	pshm->P[12276]
#define	P_Starting_Pause_IO_Flag	pshm->P[12277]
#define	P_PLC03_Seq_Pause_Start_Flag	pshm->P[12278]
#define	P_PLC03_Seq_Pause_Start_State_Machine	pshm->P[12279]
#define	P_PLC03_Seq_Pause_Start_Status	pshm->P[12280]
#define	P_ARC_NP_Push_BTN	pshm->P[12281]
#define	P_ARC_UI_Push_BTN	pshm->P[12282]
#define	P_M_Manual_ARC_BTN	pshm->P[12283]
#define	P_Two_Btn_Active_Flag	pshm->P[12284]
#define	P_Two_Btn_Interlock_Time	pshm->P[12285]
#define	P_NP_Unwinder_Active_Hold	pshm->P[12286]
#define	P_MAX_KGF	pshm->P[12287]
#define	P_KGF_TO_DAC_RATIO	pshm->P[12288]
#define	P_Dac_Out_Value	pshm->P[12289]
#define	P_Recipe_Dancer_input_kgf	pshm->P[12290]
#define	P_Cathode_NG_PNP_Vel_Zero_Set	pshm->P[12291]
#define	P_Anode_NG_PNP_Vel_Zero_Set	pshm->P[12292]
#define	P_Anode_Run_DR	pshm->P[12293]
#define	P_Cathode_Run_DR	pshm->P[12294]
#define	P_1st_UND_Grip_Time	pshm->P[12295]
#define	P_1st_UND_Grip_Time_offset	pshm->P[12296]
#define	P_1st_UND_Grip_Time_offset2	pshm->P[12297]
#define	P_First_Sepa_Driving_Use	pshm->P[12298]
#define	P_First_Sepa_Driving_Timing	pshm->P[12299]
#define	P_Unloader_Safe_rtn	pshm->P[12300]
#define	P_Final_Start	pshm->P[12301]
#define	P_Driving_Start	pshm->P[12302]
#define	P_Starting_Pause_IO_OFF_Flag	pshm->P[12303]
#define	P_individual_Hold_return	pshm->P[12304]
#define	P_individual_Hold_return2	pshm->P[12305]
#define	P_Tension_Ready_Pass	pshm->P[12306]
#define	P_Discharge_cal_rtn	pshm->P[12307]
#define	P_Old_Tact_Current_Mode	pshm->P[12308]
#define	P_Sheet_Clear	pshm->P[12309]
#define	P_Anode_Clamp_On_Time2	pshm->P[12310]
#define	P_Anode_Clamp_On_Time	pshm->P[12311]
#define	P_Cathode_Clamp_On_Time	pshm->P[12312]
#define	P_Cathode_Clamp_On_Time2	pshm->P[12313]
#define	P_Offset	pshm->P[12314]
#define	P_Man_C	pshm->P[12315]
#define	P_NG_Box_Stop_Use	pshm->P[12316]
#define	P_SlewTime	pshm->P[12317]
#define	P_Old_SlewTime	pshm->P[12318]
#define	P_Resume_MNTR1	pshm->P[12319]
#define	P_Resume_MNTR2	pshm->P[12320]
#define	P_Resume_MNTR3	pshm->P[12321]
#define	P_Resume_MNTR4	pshm->P[12322]
#define	P_Resume_MNTR5	pshm->P[12323]
#define	P_Resume_MNTR6	pshm->P[12324]
#define	P_Resume_MNTR7	pshm->P[12325]
#define	P_Resume_MNTR8	pshm->P[12326]
#define	P_Resume_MNTR9	pshm->P[12327]
#define	P_Resume_MNTR10	pshm->P[12328]
#define	P_Resume_MNTR11	pshm->P[12329]
#define	P_Resume_MNTR12	pshm->P[12330]
#define	P_old_P_Anode_Count	pshm->P[12331]
#define	P_Sheet_Paper_BWD_Count	pshm->P[12332]
#define	P_Stop_CHK	pshm->P[12333]
#define	P_Seq_Pause	pshm->P[12334]
#define	P_Seq_Pause2	pshm->P[12335]
#define	P_MSA_TimeBase_Rtn	pshm->P[12336]
#define	P_Old_Vison_Read_EPC_Camera_Move_Request	pshm->P[12337]
#define	P_First_Sepa_Time_Out_Count	pshm->P[12338]
#define	P_Align_Retry_Cal_RTN	pshm->P[12339]
#define	P_Sheet_Err(i)	pshm->P[(12340+i)%MAX_P]
#define	P_Driving_Cal	pshm->P[12356]
#define	P_Driving_End_Pos	pshm->P[12357]
#define	P_Driving_Start_Pos	pshm->P[12358]
#define	P_Drivig_Cal_Save(i)	pshm->P[(12359+i)%MAX_P]
#define	P_Anode_Align_Blow	pshm->P[12364]
#define	P_Cathode_Align_Blow	pshm->P[12365]
#define	P_PMAC_Status_Arr_Save1(i)	pshm->P[(12366+i)%MAX_P]
#define	P_HomePos_Save1(i)	pshm->P[(12371+i)%MAX_P]
#define	P_PMAC_Status_Arr_Save2(i)	pshm->P[(12376+i)%MAX_P]
#define	P_HomePos_Save2(i)	pshm->P[(12381+i)%MAX_P]
#define	P_PMAC_Status_Arr_Save3(i)	pshm->P[(12386+i)%MAX_P]
#define	P_HomePos_Save3(i)	pshm->P[(12391+i)%MAX_P]
#define	P_PMAC_Status_Arr_Save4(i)	pshm->P[(12396+i)%MAX_P]
#define	P_HomePos_Save4(i)	pshm->P[(12401+i)%MAX_P]
#define	P_Home_Pos_Err_Cnt1	pshm->P[12406]
#define	P_Home_Pos_Err_Cnt2	pshm->P[12407]
#define	P_Home_Pos_Err_Cnt3	pshm->P[12408]
#define	P_Home_Pos_Err_Cnt4	pshm->P[12409]
#define	P_Align_Inspection_Delay	pshm->P[12410]
#define	P_HomePos_Err(i)	pshm->P[(12411+i)%MAX_P]
#define	P_Anode_Sheet_Test	pshm->P[12416]
#define	P_Cathode_Sheet_Test	pshm->P[12417]
#define	P_Anode_Sheet_Interlock_Timing	pshm->P[12418]
#define	P_Cathode_Sheet_Interlock_Timing	pshm->P[12419]
#define	P_Discharge_Err_MNTR	pshm->P[12420]
#define	P_Arc_Err_MNTR	pshm->P[12421]
#define	P_Abort_Cnt	pshm->P[12422]
#define	P_EMO_Cnt	pshm->P[12423]
#define	P_Dry_Run_Inspection	pshm->P[12424]
#define	P_Servo_ON_MNTR1	pshm->P[12425]
#define	P_Servo_ON_MNTR2	pshm->P[12426]
#define	P_Servo_ON_MNTR3	pshm->P[12427]
#define	P_Servo_ON_MNTR4	pshm->P[12428]
#define	P_Servo_ON_MNTR5	pshm->P[12429]
#define	P_Servo_ON_MNTR6	pshm->P[12430]
#define	P_Servo_ON_MNTR7	pshm->P[12431]
#define	P_Servo_ON_MNTR8	pshm->P[12432]
#define	P_Servo_ON_MNTR9	pshm->P[12433]
#define	P_Servo_ON_MNTR10	pshm->P[12434]
#define	P_Servo_ON_MNTR11	pshm->P[12435]
#define	P_Servo_ON_MNTR12	pshm->P[12436]
#define	P_Servo_ON_MNTR13	pshm->P[12437]
#define	P_Servo_ON_MNTR14	pshm->P[12438]
#define	P_Servo_ON_MNTR15	pshm->P[12439]
#define	P_Servo_ON_MNTR16	pshm->P[12440]
#define	P_Servo_ON_MNTR17	pshm->P[12441]
#define	P_Servo_ON_MNTR18	pshm->P[12442]
#define	P_Servo_ON_MNTR19	pshm->P[12443]
#define	P_Servo_ON_MNTR20	pshm->P[12444]
#define	P_Servo_ON_MNTR21	pshm->P[12445]
#define	P_Servo_ON_MNTR22	pshm->P[12446]
#define	P_Servo_ON_MNTR23	pshm->P[12447]
#define	P_Servo_ON_MNTR24	pshm->P[12448]
#define	P_Servo_ON_MNTR25	pshm->P[12449]
#define	P_Servo_ON_MNTR26	pshm->P[12450]
#define	P_Servo_ON_MNTR27	pshm->P[12451]
#define	P_Servo_ON_MNTR28	pshm->P[12452]
#define	P_Servo_ON_MNTR29	pshm->P[12453]
#define	P_Servo_ON_MNTR30	pshm->P[12454]
#define	P_X_IO_WinMess_Connect_BTN	pshm->P[12455]
#define	P_Ecat_ReConnetion_State_Machine	pshm->P[12456]
#define	P_Ecat_Reconnection_Timer	pshm->P[12457]
#define	P_Y_Ecat_Reconnecting	pshm->P[12458]
#define	P_Y_Ecat_ReConnection_Fail	pshm->P[12459]
#define	P_Y_Ecat_ReConnection_Complete	pshm->P[12460]
#define	P_X_Ecat_Reconnection_BTN	pshm->P[12461]
#define	P_X_PLC_Setup_Mode_Check	pshm->P[12462]
#define	P_Interlock_On_Off_Flag	pshm->P[12463]
#define	P_X_Old_MC_Reconnect_BTN_Signal	pshm->P[12464]
#define	P_BTN_1st_ULD_Data_Clear	pshm->P[12465]
#define	P_Old_BTN_1st_ULD_Data_Clear	pshm->P[12466]
#define	P_Old_M_Y_1st_Unloader_UnGrip_Sol	pshm->P[12467]
#define	P_Sepa_Cutter_Heat_Meter	pshm->P[12468]
#define	P_Sepa_Cutter_Heating_Timer	pshm->P[12469]
#define	P_Middle_Skip_Off_Flag	pshm->P[12470]
#define	P_Stop_MNTR1	pshm->P[12471]
#define	P_Stop_MNTR2	pshm->P[12472]
#define	P_Sheet_Pos_Offset	pshm->P[12473]
#define	P_Stopping_Wait_Time	pshm->P[12474]
#define	P_Stopping_Test_Timer	pshm->P[12475]
#define	P_Cutter_FWB_Heater_Current(i)	pshm->P[(12476+i)%MAX_P]
#define	P_1st_ULD_OK_Lamp	pshm->P[12486]
#define	P_1st_ULD_NG_Lamp	pshm->P[12487]
#define	P_1st_ULD_Sample_QC_Lamp	pshm->P[12488]
#define	P_Proceed_Execute_Flag	pshm->P[12489]
#define	P_Continuous_Call_Stack_NG_Flag	pshm->P[12490]
#define	P_Continuous_Call_Stack_OK_Flag	pshm->P[12491]
#define	P_Cathode_Picker_Home_Pos	pshm->P[12492]
#define	P_Anode_Picker_Home_Pos	pshm->P[12493]
#define	P_FR_Sheet_Paper_Home_Chk	pshm->P[12494]
#define	P_Align_TimeOut1	pshm->P[12495]
#define	P_Align_TimeOut2	pshm->P[12496]
#define	P_Align_TimeOut3	pshm->P[12497]
#define	P_Align_TimeOut4	pshm->P[12498]
#define	P_Align_TimeOut5	pshm->P[12499]
#define	P_Align_TimeOut6	pshm->P[12500]
#define	P_Anode_Align_OK	pshm->P[12501]
#define	P_Cathode_Align_OK	pshm->P[12502]
#define	P_Anode_Align_NG	pshm->P[12503]
#define	P_Cathode_Align_NG	pshm->P[12504]
#define	P_Anode_Align_TimeOut	pshm->P[12505]
#define	P_Cathode_Align_TimeOut	pshm->P[12506]
#define	P_Anode_Surf_OK	pshm->P[12507]
#define	P_Cathode_Surf_OK	pshm->P[12508]
#define	P_Anode_Surf_NG	pshm->P[12509]
#define	P_Cathode_Surf_NG	pshm->P[12510]
#define	P_Anode_Surf_TimeOut	pshm->P[12511]
#define	P_Cathode_Surf_TimeOut	pshm->P[12512]
#define	P_Surf_TimeOut1	pshm->P[12513]
#define	P_Surf_TimeOut2	pshm->P[12514]
#define	P_Surf_TimeOut3	pshm->P[12515]
#define	P_Surf_TimeOut4	pshm->P[12516]
#define	P_Surf_TimeOut5	pshm->P[12517]
#define	P_Surf_TimeOut6	pshm->P[12518]
#define	P_Anode_Stack_TimeOut	pshm->P[12519]
#define	P_Cathode_Stack_TimeOut	pshm->P[12520]
#define	P_Anode_Stack_OK	pshm->P[12521]
#define	P_Cathode_Stack_OK	pshm->P[12522]
#define	P_Anode_Stack_NG	pshm->P[12523]
#define	P_Cathode_Stack_NG	pshm->P[12524]
#define	P_Stack_TimeOut1	pshm->P[12525]
#define	P_Stack_TimeOut2	pshm->P[12526]
#define	P_Stack_TimeOut3	pshm->P[12527]
#define	P_Align_Move_Err	pshm->P[12528]
#define	P_Ecat_Test	pshm->P[12529]
#define	P_Scan_Time(i)	pshm->P[(12530+i)%MAX_P]
#define	P_Scan_Aver	pshm->P[12532]
#define	P_Scan_MAX	pshm->P[12533]
#define	P_Cathode_1TR_Picker_T_Belt_POS	pshm->P[12534]
#define	P_Cathode_1TR_Picker_T_Align_POS	pshm->P[12535]
#define	P_Anode_1TR_Picker_T_Belt_POS	pshm->P[12536]
#define	P_Anode_1TR_Picker_T_Align_POS	pshm->P[12537]
#define	P_1TR_Picker_T_Align_POS	pshm->P[12538]
#define	P_AVRG_Lower_Sepa_Thickness_mm	pshm->P[12539]
#define	P_AVRG_Upper_Sepa_Thickness_mm	pshm->P[12540]
#define	P_PLC06_Upper_Curr_Unwinder_Thickness_mm	pshm->P[12541]
#define	P_PLC06_Lower_Curr_Unwinder_Thickness_mm	pshm->P[12542]
#define	P_Upper_Curr_Spool_Radius	pshm->P[12543]
#define	P_Lower_Curr_Spool_Radius	pshm->P[12544]
#define	P_PLC06_Curr_Upper_Distance_mm	pshm->P[12545]
#define	P_PLC06_Curr_Lower_Distance_mm	pshm->P[12546]
#define	P_Upper_Sepa_Min_Distance_mm	pshm->P[12547]
#define	P_Lower_Sepa_Min_Distance_mm	pshm->P[12548]
#define	P_PLC06_Sepa_Change_Set	pshm->P[12549]
#define	P_Upper_Sepa_To_Sensor_Min_Dis	pshm->P[12550]
#define	P_Upper_Sepa_To_Sensor_Max_Dis	pshm->P[12551]
#define	P_Upper_Sensor_To_Unwinder_Core_Dis	pshm->P[12552]
#define	P_Upper_Sensor_Min_AD	pshm->P[12553]
#define	P_Upper_Sensor_Max_AD	pshm->P[12554]
#define	P_Lower_Sepa_To_Sensor_Min_Dis	pshm->P[12555]
#define	P_Lower_Sepa_To_Sensor_Max_Dis	pshm->P[12556]
#define	P_Lower_Sensor_To_Unwinder_Core_Dis	pshm->P[12557]
#define	P_Lower_Sensor_Min_AD	pshm->P[12558]
#define	P_Lower_Sensor_Max_AD	pshm->P[12559]
#define	M_AI_Upper_Sepa_Sensing	pshm->P[372]
#define	M_AI_Lower_Sepa_Sensing	pshm->P[373]
#define	P_Status_NP_BTN_Lower_Unwinder	pshm->P[12560]
#define	P_Status_NP_BTN_Upper_Unwinder	pshm->P[12561]
#define	P_Driving_CamTable_Scale_Change_Flag	pshm->P[12562]
#define	P_FR_Driving_Diameter	pshm->P[12563]
#define	P_FR_Driving_Floating_Point	pshm->P[12564]
#define	P_FR_Driving_Reward	pshm->P[12565]
#define	P_Unwinder_Master_Following_Use_Flag	pshm->P[12566]
#define	P_Unwinder_Master_Following_On	pshm->P[12567]
#define	P_Old_Master_Following_Start	pshm->P[12568]
#define	P_Unwinder_Master_Following_Scale	pshm->P[12569]
#define	P_Unwinder_Jog_Use_Flag	pshm->P[12570]
#define	P_Old_Jog_Start	pshm->P[12571]
#define	P_Unwinder_Jog_Total_Time	pshm->P[12572]
#define	P_Unwinder_Ta	pshm->P[12573]
#define	P_Unwinder_Ts	pshm->P[12574]
#define	P_Unwinder_Tm	pshm->P[12575]
#define	P_Unwinder_1mm_Deg	pshm->P[12576]
#define	P_Unwinder_Jog_Pos	pshm->P[12577]
#define	P_Unwinder_Jog_Cnt	pshm->P[12578]
#define	P_PLC06_Frist_Flag	pshm->P[12579]
#define	P_Sepa_AI	pshm->P[12580]
#define	P_PLC06_Reel_Upper_Change_Flag	pshm->P[12581]
#define	P_PLC06_Reel_Lower_Change_Flag	pshm->P[12582]
#define	P_Spool_Ready_Enable_Flag	pshm->P[12583]
#define	P_Spool_Lack_Flag	pshm->P[12584]
#define	P_Sepa_DR_Start_Flag	pshm->P[12585]
#define	P_cdTime_Tact_Sec	pshm->P[12586]
#define	P_Master_Tact_Sec	pshm->P[12587]
#define	P_Prev_Err_Pos	pshm->P[12588]
#define	P_Cur_Arc_Rad	pshm->P[12589]
#define	P_Cur_Arc_Deg	pshm->P[12590]
#define	P_Spool_Velocity	pshm->P[12591]
#define	P_Lin_Prop_Vel	pshm->P[12592]
#define	P_Err_Pos	pshm->P[12593]
#define	P_Lin_Deriv_Vel	pshm->P[12594]
#define	P_Lin_Dacer_Kd	pshm->P[12595]
#define	P_Lin_Dacer_Kp	pshm->P[12596]
#define	P_Running_CDTimer	pshm->P[12597]
#define	P_Unwinder_Jog_Ta	pshm->P[12598]
#define	P_Unwinder_Jog_Ts	pshm->P[12599]
#define	P_Unwinder_Vel_Test_Time	pshm->P[12600]
#define	P_Set_Interval_Time	pshm->P[12601]
#define	P_PLC06_Upper_Sepa_AI_Timer	pshm->P[12602]
#define	P_PLC06_Upper_Sepa_AI_Data	pshm->P[12603]
#define	P_PLC06_Upper_Sepa_AI_Cnt	pshm->P[12604]
#define	P_PLC06_Upper_AVRG_Sensor_Data	pshm->P[12605]
#define	P_PLC06_Lower_Sepa_AI_Timer	pshm->P[12606]
#define	P_PLC06_Lower_Sepa_AI_Data	pshm->P[12607]
#define	P_PLC06_Lower_Sepa_AI_Cnt	pshm->P[12608]
#define	P_PLC06_Lower_AVRG_Sensor_Data	pshm->P[12609]
#define	P_PLC06_Sepa_Upper_Thickness_Timer	pshm->P[12610]
#define	P_PLC06_Sepa_Upper_Thickness_Data	pshm->P[12611]
#define	P_PLC06_Sepa_Upper_Thickness_Cnt	pshm->P[12612]
#define	P_PLC06_Sepa_Lower_Thickness_Timer	pshm->P[12613]
#define	P_PLC06_Sepa_Lower_Thickness_Data	pshm->P[12614]
#define	P_PLC06_Sepa_Lower_Thickness_Cnt	pshm->P[12615]
#define	P_Sepa_Thickness_Chk_Timer	pshm->P[12616]
#define	P_Spool_Length	pshm->P[12617]
#define	P_Cascade_Sf_Driving_Value	pshm->P[12618]
#define	P_Cascade_Sf_None_Driving_Value	pshm->P[12619]
#define	P_Sepa_Min_Value_Cal_Cmd	pshm->P[12620]
#define	P_Total_Sepa_Need_Length	pshm->P[12621]
#define	P_Alpa	pshm->P[12622]
#define	P_Sepa_Num_of_Turns	pshm->P[12623]
#define	P_Sepa_Turn_Num	pshm->P[12624]
#define	P_Accumulate_Value	pshm->P[12625]
#define	P_Sharft_to_Sepa_Core_mm	pshm->P[12626]
#define	P_Sepa_Cal_Circum	pshm->P[12627]
#define	P_Sepa_Min_Need_Thickness	pshm->P[12628]
#define	P_Sepa_Min_Thickness_Cmd	pshm->P[12629]
#define	P_Sepa_Accumulate_Cmd	pshm->P[12630]
#define	P_Sepa_Required_Amount	pshm->P[12631]
#define	P_Sepa_Current_Thickness	pshm->P[12632]
#define	P_Sepa_Initial_Tickness	pshm->P[12633]
#define	P_Sepa_Required_Update_Timer	pshm->P[12634]
#define	P_TEST_EPC_Interlock_Auto	pshm->P[12635]
#define	P_TEST_EPC_Interlock_Manual	pshm->P[12636]
#define	P_Discharge_Total_Tact	pshm->P[12637]
#define	P_Read_Sector_TactTime(i)	pshm->P[(12638+i)%MAX_P]
#define	P_Write_Sector_TactTime(i)	pshm->P[(12644+i)%MAX_P]
#define	P_PLC15_Sub_Function_Dryrun_Active_Flag	pshm->P[12650]
#define	P_Sepa_Rotation_Sequence_Run_Trigger_Cnt	pshm->P[12651]
#define	P_Sepa_Mode_Sepa_Recipe_Count	pshm->P[12652]
#define	P_Discharged_After_End_Trigger	pshm->P[12653]
#define	P_Unloader_1st_Grip_Delay	pshm->P[12654]
#define	P_Separate_Cutter_Heating_Limit_Value	pshm->P[12655]
#define	P_Separate_Cutting_Current	pshm->P[12656]
#define	P_Separate_Cutter_Change_Cycle	pshm->P[12657]
#define	P_X_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12658]
#define	P_X_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12659]
#define	P_X_Cathode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12660]
#define	P_X_Anode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12661]
#define	P_X_Stack_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12662]
#define	P_Interlock_Messege_Confirmed	pshm->P[12663]
#define	P_X_MC_Communication_HeartBit	pshm->P[12664]
#define	P_SV_Cathode_Count	pshm->P[12665]
#define	P_SV_Anode_Count	pshm->P[12666]
#define	P_SV_AO_Reference_Value_Chanel(i)	pshm->P[(12667+i)%MAX_P]
#define	P_SV_Cathode_Reference_Thickness	pshm->P[12670]
#define	P_SV_Anode_Reference_Thickness	pshm->P[12671]
#define	P_SV_Stack_Table_Damper_Cathode	pshm->P[12672]
#define	P_SV_Stack_Table_Damper_Anode	pshm->P[12673]
#define	P_SV_Sepa_Reference_Thickness	pshm->P[12674]
#define	P_SV_Jelly_Roll_Width	pshm->P[12675]
#define	P_Cathode_Align_Continuous_NG_Recipe	pshm->P[12676]
#define	P_Anode_Align_Continuous_NG_Recipe	pshm->P[12677]
#define	P_Stack_Vision_Continuous_NG_Recipe	pshm->P[12678]
#define	P_PLC_Recipe_EPC_Sepa_Count	pshm->P[12679]
#define	P_PLC_Recipe_Revise_Sepa	pshm->P[12680]
#define	P_X_PLC_to_PMAC_Correction_Value	pshm->P[12681]
#define	P_Anode_Align_Continuous_NG_Check_range	pshm->P[12682]
#define	P_Cathode_Align_Continuous_NG_Check_range	pshm->P[12683]
#define	P_Stack_Align_Continuous_NG_Check_range	pshm->P[12684]
#define	P_Cathode_Surface_Continuous_NG_Recipe	pshm->P[12685]
#define	P_Anode_Surface_Continuous_NG_Recipe	pshm->P[12686]
#define	P_Cathode_Surface_Continuous_NG_Check_range	pshm->P[12687]
#define	P_Anode_Surface_Continuous_NG_Check_range	pshm->P[12688]
#define	P_Servo_Dancer_Alarm_Maximum_Angle_Value	pshm->P[12689]
#define	P_Servo_Dancer_Alarm_Minimum_Angle_Value	pshm->P[12690]
#define	P_Current_Selected_Spool_Rev_Counts_Init_Read	pshm->P[12691]
#define	P_Spool_ARC_Distance_mm	pshm->P[12692]
#define	P_ARC_Upper_Request_Sepa_Thickness_mm	pshm->P[12693]
#define	P_ARC_Lower_Request_Sepa_Thickness_mm	pshm->P[12694]
#define	P_Selected_Spool_Arc_Set_Rev_Counts_Value	pshm->P[12695]
#define	P_Set_Cnt_FR_Moving_Sepa_ARC	pshm->P[12696]
#define	P_Current_Selected_Spool_Rev_Counts	pshm->P[12697]
#define	P_AI_Cathode_Clamp_Damper	pshm->P[12698]
#define	P_AI_Anode_Clamp_Damper	pshm->P[12699]
#define	P_MSA_Run_Repeat_Num(i)	pshm->P[(12700+i)%MAX_P]
#define	P_Current_MSA_Run_Num(i)	pshm->P[(12705+i)%MAX_P]
#define	P_Select_Sheet_Value	pshm->P[12710]
#define	P_BTN_Config_Setup_Mode_Select	pshm->P[12711]
#define	P_Sepa_Thickness_Max_Value	pshm->P[12712]
#define	P_AI_Cathode_Clamp_Damper_Zero_Mpa_Analog_Value	pshm->P[12713]
#define	P_AI_Anode_Clamp_Damper_Zero_Mpa_Analog_Value	pshm->P[12714]
#define	P_Accumulated_Movement_MM_Unit_Cathode_1ST_pnp	pshm->P[12715]
#define	P_Accumulated_Movement_MM_Unit_Anode_1ST_pnp	pshm->P[12716]
#define	P_Accumulated_Movement_MM_Unit_Cathode_2nd_pnp	pshm->P[12717]
#define	P_Accumulated_Movement_MM_Unit_Anode_2nd_pnp	pshm->P[12718]
#define	P_AI_Anode_Clamp_Damper_Mpa	pshm->P[12719]
#define	P_AI_Cathode_Clamp_Damper_Mpa	pshm->P[12720]
#define	P_Current_Whole_Stack_Jelly_Roll_Thinckness_mm	pshm->P[12721]
#define	P_Upper_Sepa_Current_Thickness_um	pshm->P[12722]
#define	P_Lower_Sepa_Current_Thickness_um	pshm->P[12723]
#define	P_Spool_Rotate_Distance	pshm->P[12724]
#define	Spool_Diameter	pshm->P[12725]
#define	P_Current_FR_Moving_Cnt_To_PlC	pshm->P[12726]
#define	P_MES_APC_Select_Btn	pshm->P[12727]
#define	P_AO_Anode_Clamp_Damper	pshm->P[12728]
#define	P_AO_Cathode_Clamp_Damper	pshm->P[12729]
#define	P_Sepa_Length	pshm->P[12730]
#define	P_Minus_Limit_Detect_Popup_Flag	pshm->P[12731]
#define	P_Plus_Limit_Detect_Popup_Flag	pshm->P[12732]
#define	P_Fatal_Fe_Limit_Detect_Popup_Flag	pshm->P[12733]
#define	P_Emergency_Alarm_Popup_Flag	pshm->P[12734]
#define	P_SepaArcing_Popup_Flag	pshm->P[12735]
#define	P_Y_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger	pshm->P[12736]
#define	P_Y_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger	pshm->P[12737]
#define	P_Y_Cathode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger	pshm->P[12738]
#define	P_Y_Anode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger	pshm->P[12739]
#define	P_Y_Stack_Align_Calibration_twisted_Cycle_Stop_Request_Trigger	pshm->P[12740]
#define	P_Current_Selected_Sheet_Value	pshm->P[12741]
#define	P_Status_Config_Mode_Select	pshm->P[12742]
#define	P_Sepa_Thickness_Jig_Value	pshm->P[12743]
#define	P_PV_Stack_Table_Damper_Cathode	pshm->P[12744]
#define	P_PV_Stack_Table_Damper_Anode	pshm->P[12745]
#define	P_Discharge_Standby_Pos_Tack_Time	pshm->P[12746]
#define	P_Discharge_FR_MainZ_Pos_Tack_Time	pshm->P[12747]
#define	P_Discharge_Unloader_Go_Pos_Tack_Time	pshm->P[12748]
#define	P_Discharge_SubZ_Down_Pos_Tack_Time	pshm->P[12749]
#define	P_Discharge_Unloader_Cutting_Pos_Tack_Time	pshm->P[12750]
#define	P_Discharge_FR_Clamp_ON_Complete_Tack_Time	pshm->P[12751]
#define	P_Discharge_Cutting_Complete_Tack_Time	pshm->P[12752]
#define	P_Discharge_Motion_PG_Active_Starting_Tack_Time	pshm->P[12753]
#define	P_Discharge_Motion_PG_Active_Complete_Tack_Time	pshm->P[12754]
#define	P_Discharge_Sepa_First_Complete_Tack_Time	pshm->P[12755]
#define	P_Discharge_Complete_Tack_Time	pshm->P[12756]
#define	P_Discharge_Total_Tack_Time	pshm->P[12757]
#define	P_Anode_Clamp_TackTime_Array0	pshm->P[12758]
#define	P_Anode_Clamp_TackTime_Array1	pshm->P[12759]
#define	P_Anode_Clamp_TackTime_Array2	pshm->P[12760]
#define	P_Anode_Clamp_TackTime_Array3	pshm->P[12761]
#define	P_Anode_Clamp_TackTime_Array4	pshm->P[12762]
#define	P_Anode_Clamp_TackTime_Array5	pshm->P[12763]
#define	P_Anode_Clamp_TackTime_Array6	pshm->P[12764]
#define	P_Anode_Clamp_TackTime_Array7	pshm->P[12765]
#define	P_Anode_Clamp_TackTime_Array8	pshm->P[12766]
#define	P_Anode_Clamp_TackTime_Array9	pshm->P[12767]
#define	P_Anode_Clamp_TackTime_Array10	pshm->P[12768]
#define	P_Stacking_TackTime_Array0	pshm->P[12769]
#define	P_Stacking_TackTime_Array1	pshm->P[12770]
#define	P_Stacking_TackTime_Array2	pshm->P[12771]
#define	P_Stacking_TackTime_Array3	pshm->P[12772]
#define	P_Stacking_TackTime_Array4	pshm->P[12773]
#define	P_Stacking_TackTime_Array5	pshm->P[12774]
#define	P_Stacking_TackTime_Array6	pshm->P[12775]
#define	P_Stacking_TackTime_Array7	pshm->P[12776]
#define	P_Stacking_TackTime_Array8	pshm->P[12777]
#define	P_Stacking_TackTime_Array9	pshm->P[12778]
#define	P_Stacking_TackTime_Array10	pshm->P[12779]
#define	P_Cathode_Clamp_TackTime_Array0	pshm->P[12780]
#define	P_Cathode_Clamp_TackTime_Array1	pshm->P[12781]
#define	P_Cathode_Clamp_TackTime_Array2	pshm->P[12782]
#define	P_Cathode_Clamp_TackTime_Array3	pshm->P[12783]
#define	P_Cathode_Clamp_TackTime_Array4	pshm->P[12784]
#define	P_Cathode_Clamp_TackTime_Array5	pshm->P[12785]
#define	P_Cathode_Clamp_TackTime_Array6	pshm->P[12786]
#define	P_Cathode_Clamp_TackTime_Array7	pshm->P[12787]
#define	P_Cathode_Clamp_TackTime_Array8	pshm->P[12788]
#define	P_Cathode_Clamp_TackTime_Array9	pshm->P[12789]
#define	P_Cathode_Clamp_TackTime_Array10	pshm->P[12790]
#define	P_JellyRoll_Out_TackTime_Array0	pshm->P[12791]
#define	P_JellyRoll_Out_TackTime_Array1	pshm->P[12792]
#define	P_JellyRoll_Out_TackTime_Array2	pshm->P[12793]
#define	P_JellyRoll_Out_TackTime_Array3	pshm->P[12794]
#define	P_JellyRoll_Out_TackTime_Array4	pshm->P[12795]
#define	P_JellyRoll_Out_TackTime_Array5	pshm->P[12796]
#define	P_JellyRoll_Out_TackTime_Array6	pshm->P[12797]
#define	P_JellyRoll_Out_TackTime_Array7	pshm->P[12798]
#define	P_JellyRoll_Out_TackTime_Array8	pshm->P[12799]
#define	P_JellyRoll_Out_TackTime_Array9	pshm->P[12800]
#define	P_JellyRoll_Out_TackTime_Array10	pshm->P[12801]
#define	P_Anode_1th_TackTime_Array0	pshm->P[12802]
#define	P_Anode_1th_TackTime_Array1	pshm->P[12803]
#define	P_Anode_1th_TackTime_Array2	pshm->P[12804]
#define	P_Anode_1th_TackTime_Array3	pshm->P[12805]
#define	P_Anode_1th_TackTime_Array4	pshm->P[12806]
#define	P_Anode_1th_TackTime_Array5	pshm->P[12807]
#define	P_Anode_1th_TackTime_Array6	pshm->P[12808]
#define	P_Anode_1th_TackTime_Array7	pshm->P[12809]
#define	P_Anode_1th_TackTime_Array8	pshm->P[12810]
#define	P_Anode_1th_TackTime_Array9	pshm->P[12811]
#define	P_Anode_1th_TackTime_Array10	pshm->P[12812]
#define	P_Cathode_1th_TackTime_Array0	pshm->P[12813]
#define	P_Cathode_1th_TackTime_Array1	pshm->P[12814]
#define	P_Cathode_1th_TackTime_Array2	pshm->P[12815]
#define	P_Cathode_1th_TackTime_Array3	pshm->P[12816]
#define	P_Cathode_1th_TackTime_Array4	pshm->P[12817]
#define	P_Cathode_1th_TackTime_Array5	pshm->P[12818]
#define	P_Cathode_1th_TackTime_Array6	pshm->P[12819]
#define	P_Cathode_1th_TackTime_Array7	pshm->P[12820]
#define	P_Cathode_1th_TackTime_Array8	pshm->P[12821]
#define	P_Cathode_1th_TackTime_Array9	pshm->P[12822]
#define	P_Cathode_1th_TackTime_Array10	pshm->P[12823]
#define	P_Anode_2th_TackTime_Array0	pshm->P[12824]
#define	P_Anode_2th_TackTime_Array1	pshm->P[12825]
#define	P_Anode_2th_TackTime_Array2	pshm->P[12826]
#define	P_Anode_2th_TackTime_Array3	pshm->P[12827]
#define	P_Anode_2th_TackTime_Array4	pshm->P[12828]
#define	P_Anode_2th_TackTime_Array5	pshm->P[12829]
#define	P_Anode_2th_TackTime_Array6	pshm->P[12830]
#define	P_Anode_2th_TackTime_Array7	pshm->P[12831]
#define	P_Anode_2th_TackTime_Array8	pshm->P[12832]
#define	P_Anode_2th_TackTime_Array9	pshm->P[12833]
#define	P_Anode_2th_TackTime_Array10	pshm->P[12834]
#define	P_Cathode_2th_TackTime_Array0	pshm->P[12835]
#define	P_Cathode_2th_TackTime_Array1	pshm->P[12836]
#define	P_Cathode_2th_TackTime_Array2	pshm->P[12837]
#define	P_Cathode_2th_TackTime_Array3	pshm->P[12838]
#define	P_Cathode_2th_TackTime_Array4	pshm->P[12839]
#define	P_Cathode_2th_TackTime_Array5	pshm->P[12840]
#define	P_Cathode_2th_TackTime_Array6	pshm->P[12841]
#define	P_Cathode_2th_TackTime_Array7	pshm->P[12842]
#define	P_Cathode_2th_TackTime_Array8	pshm->P[12843]
#define	P_Cathode_2th_TackTime_Array9	pshm->P[12844]
#define	P_Cathode_2th_TackTime_Array10	pshm->P[12845]
#define	P_Anode_Align_Table_TackTime_Array0	pshm->P[12846]
#define	P_Anode_Align_Table_TackTime_Array1	pshm->P[12847]
#define	P_Anode_Align_Table_TackTime_Array2	pshm->P[12848]
#define	P_Anode_Align_Table_TackTime_Array3	pshm->P[12849]
#define	P_Anode_Align_Table_TackTime_Array4	pshm->P[12850]
#define	P_Anode_Align_Table_TackTime_Array5	pshm->P[12851]
#define	P_Anode_Align_Table_TackTime_Array6	pshm->P[12852]
#define	P_Anode_Align_Table_TackTime_Array7	pshm->P[12853]
#define	P_Anode_Align_Table_TackTime_Array8	pshm->P[12854]
#define	P_Anode_Align_Table_TackTime_Array9	pshm->P[12855]
#define	P_Anode_Align_Table_TackTime_Array10	pshm->P[12856]
#define	P_Cathode_Align_Table_TackTime_Array0	pshm->P[12857]
#define	P_Cathode_Align_Table_TackTime_Array1	pshm->P[12858]
#define	P_Cathode_Align_Table_TackTime_Array2	pshm->P[12859]
#define	P_Cathode_Align_Table_TackTime_Array3	pshm->P[12860]
#define	P_Cathode_Align_Table_TackTime_Array4	pshm->P[12861]
#define	P_Cathode_Align_Table_TackTime_Array5	pshm->P[12862]
#define	P_Cathode_Align_Table_TackTime_Array6	pshm->P[12863]
#define	P_Cathode_Align_Table_TackTime_Array7	pshm->P[12864]
#define	P_Cathode_Align_Table_TackTime_Array8	pshm->P[12865]
#define	P_Cathode_Align_Table_TackTime_Array9	pshm->P[12866]
#define	P_Cathode_Align_Table_TackTime_Array10	pshm->P[12867]
#define	P_Anode_NG_PNP_TackTime_Array0	pshm->P[12868]
#define	P_Anode_NG_PNP_TackTime_Array1	pshm->P[12869]
#define	P_Anode_NG_PNP_TackTime_Array2	pshm->P[12870]
#define	P_Anode_NG_PNP_TackTime_Array3	pshm->P[12871]
#define	P_Anode_NG_PNP_TackTime_Array4	pshm->P[12872]
#define	P_Anode_NG_PNP_TackTime_Array5	pshm->P[12873]
#define	P_Anode_NG_PNP_TackTime_Array6	pshm->P[12874]
#define	P_Anode_NG_PNP_TackTime_Array7	pshm->P[12875]
#define	P_Anode_NG_PNP_TackTime_Array8	pshm->P[12876]
#define	P_Anode_NG_PNP_TackTime_Array9	pshm->P[12877]
#define	P_Anode_NG_PNP_TackTime_Array10	pshm->P[12878]
#define	P_Cathode_NG_PNP_TackTime_Array0	pshm->P[12879]
#define	P_Cathode_NG_PNP_TackTime_Array1	pshm->P[12880]
#define	P_Cathode_NG_PNP_TackTime_Array2	pshm->P[12881]
#define	P_Cathode_NG_PNP_TackTime_Array3	pshm->P[12882]
#define	P_Cathode_NG_PNP_TackTime_Array4	pshm->P[12883]
#define	P_Cathode_NG_PNP_TackTime_Array5	pshm->P[12884]
#define	P_Cathode_NG_PNP_TackTime_Array6	pshm->P[12885]
#define	P_Cathode_NG_PNP_TackTime_Array7	pshm->P[12886]
#define	P_Cathode_NG_PNP_TackTime_Array8	pshm->P[12887]
#define	P_Cathode_NG_PNP_TackTime_Array9	pshm->P[12888]
#define	P_Cathode_NG_PNP_TackTime_Array10	pshm->P[12889]
#define	P_Sepa_Unwinder_TackTime_Array0	pshm->P[12890]
#define	P_Sepa_Unwinder_TackTime_Array1	pshm->P[12891]
#define	P_Sepa_Unwinder_TackTime_Array2	pshm->P[12892]
#define	P_Sepa_Unwinder_TackTime_Array3	pshm->P[12893]
#define	P_Sepa_Unwinder_TackTime_Array4	pshm->P[12894]
#define	P_Sepa_Unwinder_TackTime_Array5	pshm->P[12895]
#define	P_Sepa_Unwinder_TackTime_Array6	pshm->P[12896]
#define	P_Sepa_Unwinder_TackTime_Array7	pshm->P[12897]
#define	P_Sepa_Unwinder_TackTime_Array8	pshm->P[12898]
#define	P_Sepa_Unwinder_TackTime_Array9	pshm->P[12899]
#define	P_Sepa_Unwinder_TackTime_Array10	pshm->P[12900]
#define	P_Sepa_Unwinder_TackTime_Array11	pshm->P[12901]
#define	P_1st_Unloader_TackTime_Array0	pshm->P[12902]
#define	P_1st_Unloader_TackTime_Array1	pshm->P[12903]
#define	P_1st_Unloader_TackTime_Array2	pshm->P[12904]
#define	P_1st_Unloader_TackTime_Array3	pshm->P[12905]
#define	P_1st_Unloader_TackTime_Array4	pshm->P[12906]
#define	P_1st_Unloader_TackTime_Array5	pshm->P[12907]
#define	P_1st_Unloader_TackTime_Array6	pshm->P[12908]
#define	P_1st_Unloader_TackTime_Array7	pshm->P[12909]
#define	P_1st_Unloader_TackTime_Array8	pshm->P[12910]
#define	P_1st_Unloader_TackTime_Array9	pshm->P[12911]
#define	P_1st_Unloader_TackTime_Array10	pshm->P[12912]
#define	P_Cathode_1st_Vacuum_TackTime_Array1	pshm->P[12913]
#define	P_Cathode_1st_Vacuum_TackTime_Array2	pshm->P[12914]
#define	P_Cathode_1st_Vacuum_TackTime_Array3	pshm->P[12915]
#define	P_Cathode_1st_Vacuum_TackTime_Array4	pshm->P[12916]
#define	P_Cathode_1st_Vacuum_TackTime_Array5	pshm->P[12917]
#define	P_Cathode_1st_Vacuum_TackTime_Array6	pshm->P[12918]
#define	P_Cathode_1st_Vacuum_TackTime_Array7	pshm->P[12919]
#define	P_Cathode_1st_Vacuum_TackTime_Array8	pshm->P[12920]
#define	P_Cathode_1st_Vacuum_TackTime_Array9	pshm->P[12921]
#define	P_Cathode_1st_Vacuum_TackTime_Array10	pshm->P[12922]
#define	P_Cathode_Align_Vacuum_TackTime_Array1	pshm->P[12923]
#define	P_Cathode_Align_Vacuum_TackTime_Array2	pshm->P[12924]
#define	P_Cathode_Align_Vacuum_TackTime_Array3	pshm->P[12925]
#define	P_Cathode_Align_Vacuum_TackTime_Array4	pshm->P[12926]
#define	P_Cathode_Align_Vacuum_TackTime_Array5	pshm->P[12927]
#define	P_Cathode_Align_Vacuum_TackTime_Array6	pshm->P[12928]
#define	P_Cathode_Align_Vacuum_TackTime_Array7	pshm->P[12929]
#define	P_Cathode_Align_Vacuum_TackTime_Array8	pshm->P[12930]
#define	P_Cathode_Align_Vacuum_TackTime_Array9	pshm->P[12931]
#define	P_Cathode_Align_Vacuum_TackTime_Array10	pshm->P[12932]
#define	P_Cathode_2nd_Vacuum_TackTime_Array1	pshm->P[12933]
#define	P_Cathode_2nd_Vacuum_TackTime_Array2	pshm->P[12934]
#define	P_Cathode_2nd_Vacuum_TackTime_Array3	pshm->P[12935]
#define	P_Cathode_2nd_Vacuum_TackTime_Array4	pshm->P[12936]
#define	P_Cathode_2nd_Vacuum_TackTime_Array5	pshm->P[12937]
#define	P_Cathode_2nd_Vacuum_TackTime_Array6	pshm->P[12938]
#define	P_Cathode_2nd_Vacuum_TackTime_Array7	pshm->P[12939]
#define	P_Cathode_2nd_Vacuum_TackTime_Array8	pshm->P[12940]
#define	P_Cathode_2nd_Vacuum_TackTime_Array9	pshm->P[12941]
#define	P_Cathode_2nd_Vacuum_TackTime_Array10	pshm->P[12942]
#define	P_Anode_1st_Vacuum_TackTime_Array1	pshm->P[12943]
#define	P_Anode_1st_Vacuum_TackTime_Array2	pshm->P[12944]
#define	P_Anode_1st_Vacuum_TackTime_Array3	pshm->P[12945]
#define	P_Anode_1st_Vacuum_TackTime_Array4	pshm->P[12946]
#define	P_Anode_1st_Vacuum_TackTime_Array5	pshm->P[12947]
#define	P_Anode_1st_Vacuum_TackTime_Array6	pshm->P[12948]
#define	P_Anode_1st_Vacuum_TackTime_Array7	pshm->P[12949]
#define	P_Anode_1st_Vacuum_TackTime_Array8	pshm->P[12950]
#define	P_Anode_1st_Vacuum_TackTime_Array9	pshm->P[12951]
#define	P_Anode_1st_Vacuum_TackTime_Array10	pshm->P[12952]
#define	P_Anode_Align_Vacuum_TackTime_Array1	pshm->P[12953]
#define	P_Anode_Align_Vacuum_TackTime_Array2	pshm->P[12954]
#define	P_Anode_Align_Vacuum_TackTime_Array3	pshm->P[12955]
#define	P_Anode_Align_Vacuum_TackTime_Array4	pshm->P[12956]
#define	P_Anode_Align_Vacuum_TackTime_Array5	pshm->P[12957]
#define	P_Anode_Align_Vacuum_TackTime_Array6	pshm->P[12958]
#define	P_Anode_Align_Vacuum_TackTime_Array7	pshm->P[12959]
#define	P_Anode_Align_Vacuum_TackTime_Array8	pshm->P[12960]
#define	P_Anode_Align_Vacuum_TackTime_Array9	pshm->P[12961]
#define	P_Anode_Align_Vacuum_TackTime_Array10	pshm->P[12962]
#define	P_Anode_2nd_Vacuum_TackTime_Array1	pshm->P[12963]
#define	P_Anode_2nd_Vacuum_TackTime_Array2	pshm->P[12964]
#define	P_Anode_2nd_Vacuum_TackTime_Array3	pshm->P[12965]
#define	P_Anode_2nd_Vacuum_TackTime_Array4	pshm->P[12966]
#define	P_Anode_2nd_Vacuum_TackTime_Array5	pshm->P[12967]
#define	P_Anode_2nd_Vacuum_TackTime_Array6	pshm->P[12968]
#define	P_Anode_2nd_Vacuum_TackTime_Array7	pshm->P[12969]
#define	P_Anode_2nd_Vacuum_TackTime_Array8	pshm->P[12970]
#define	P_Anode_2nd_Vacuum_TackTime_Array9	pshm->P[12971]
#define	P_Anode_2nd_Vacuum_TackTime_Array10	pshm->P[12972]
#define	P_Final_Roll_TackTime_Array1	pshm->P[12973]
#define	P_Final_Roll_TackTime_Array2	pshm->P[12974]
#define	P_Final_Roll_TackTime_Array3	pshm->P[12975]
#define	P_Final_Roll_TackTime_Array4	pshm->P[12976]
#define	P_Final_Roll_TackTime_Array5	pshm->P[12977]
#define	P_Final_Roll_TackTime_Array6	pshm->P[12978]
#define	P_Final_Roll_TackTime_Array7	pshm->P[12979]
#define	P_Final_Roll_TackTime_Array8	pshm->P[12980]
#define	P_Final_Roll_TackTime_Array9	pshm->P[12981]
#define	P_Final_Roll_TackTime_Array10	pshm->P[12982]
#define	P_Sepa_ARC_TackTime_Array1	pshm->P[12983]
#define	P_Sepa_ARC_TackTime_Array2	pshm->P[12984]
#define	P_Sepa_ARC_TackTime_Array3	pshm->P[12985]
#define	P_Sepa_ARC_TackTime_Array4	pshm->P[12986]
#define	P_Sepa_ARC_TackTime_Array5	pshm->P[12987]
#define	P_Sepa_ARC_TackTime_Array6	pshm->P[12988]
#define	P_Sepa_ARC_TackTime_Array7	pshm->P[12989]
#define	P_Sepa_ARC_TackTime_Array8	pshm->P[12990]
#define	P_Sepa_ARC_TackTime_Array9	pshm->P[12991]
#define	P_Sepa_ARC_TackTime_Array10	pshm->P[12992]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array1	pshm->P[12993]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array2	pshm->P[12994]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array3	pshm->P[12995]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array4	pshm->P[12996]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array5	pshm->P[12997]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array6	pshm->P[12998]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array7	pshm->P[12999]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array8	pshm->P[13000]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array9	pshm->P[13001]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array10	pshm->P[13002]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array1	pshm->P[13003]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array2	pshm->P[13004]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array3	pshm->P[13005]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array4	pshm->P[13006]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array5	pshm->P[13007]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array6	pshm->P[13008]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array7	pshm->P[13009]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array8	pshm->P[13010]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array9	pshm->P[13011]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array10	pshm->P[13012]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array1	pshm->P[13013]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array2	pshm->P[13014]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array3	pshm->P[13015]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array4	pshm->P[13016]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array5	pshm->P[13017]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array6	pshm->P[13018]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array7	pshm->P[13019]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array8	pshm->P[13020]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array9	pshm->P[13021]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array10	pshm->P[13022]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array1	pshm->P[13023]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array2	pshm->P[13024]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array3	pshm->P[13025]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array4	pshm->P[13026]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array5	pshm->P[13027]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array6	pshm->P[13028]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array7	pshm->P[13029]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array8	pshm->P[13030]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array9	pshm->P[13031]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array10	pshm->P[13032]
#define	P_PACK_ML_Status_bit	pshm->P[13033]
#define	P_Whole_Stacking_TackTime_MES_Report_Flag	pshm->P[13034]
#define	P_JellyRoll_Out_TackTime_MES_Report_Flag	pshm->P[13035]
#define	P_PV_Cathode_Count	pshm->P[13036]
#define	P_PV_Anode_Count	pshm->P[13037]
#define	P_PV_AO_Value_Chanel(i)	pshm->P[(13038+i)%MAX_P]
#define	P_PV_Cathode_NG_TR_NG_Count	pshm->P[13042]
#define	P_PV_Anode_NG_TR_NG_Count	pshm->P[13043]
#define	P_PV_Anode_Retry_NG_Count	pshm->P[13044]
#define	P_PV_Cathode_Retry_NG_Count	pshm->P[13045]
#define	P_PV_Align_INPUT_Count	pshm->P[13046]
#define	P_Unloader_Grip_Pressure	pshm->P[13047]
#define	P_Unloader_Heatmeter	pshm->P[13048]
#define	P_Interlock_Messege(i)	pshm->P[(13049+i)%MAX_P]
#define	P_EPC_Y_StandBy	pshm->P[13099]
#define	P_SV_Read_Enable_Flag	pshm->P[13100]
#define	P_Spool_Rotate_Distance_mm	pshm->P[13101]
#define	P_Current_Homming_Status(i)	pshm->P[(13102+i)%MAX_P]
#define	P_Home_Execute_Type(i)	pshm->P[(13152+i)%MAX_P]
#define	P_Cathode_Clamp_Gantry	pshm->P[13202]
#define	P_Anode_Clamp_Gantry	pshm->P[13203]
#define	P_SV_Separator_Heting_Cutter_Change_Period	pshm->P[13204]
#define	P_Interval_Read_Time(i)	pshm->P[(13205+i)%MAX_P]
#define	P_Interval_Write_Time(i)	pshm->P[(13211+i)%MAX_P]
#define	P_Cathode_Picker_Cylinder_Count	pshm->P[13217]
#define	P_Anode_Picker_Cylinder_Count	pshm->P[13218]
#define	P_SV_Stack_Table_Cathode_Reference_Value	pshm->P[13219]
#define	P_SV_Stack_Table_Anode_Reference_Value	pshm->P[13220]
#define	P_CA_DR_Offset	pshm->P[13221]
#define	P_AN_DR_Offset	pshm->P[13222]
#define	P_First_DR_Offset	pshm->P[13223]
#define	P_Last_DR_Offset	pshm->P[13224]
#define	P_BTN_QC_Sample_Flag	pshm->P[13225]
#define	P_BTN_Loss_Sample_Flag	pshm->P[13226]
#define	P_MSA_Sample_Flag	pshm->P[13227]
#define	P_Sample_JR_Recipe_Count	pshm->P[13228]
#define	P_Ca_Clamp_Y_Move	pshm->P[13229]
#define	P_An_Clamp_Y_Move	pshm->P[13230]
#define	P_Stack_Table_JR_Exist_Flag	pshm->P[13231]
#define	P_Program_Monitoring_Lamp_Cell_Ready	pshm->P[13232]
#define	P_Program_Monitoring_Lamp_Ready_Pos	pshm->P[13233]
#define	P_Program_Monitoring_Lamp_Pause_Pos	pshm->P[13234]
#define	P_Program_Monitoring_Lamp_Motion_Run	pshm->P[13235]
#define	P_Program_Monitoring_Lamp_Cell_Remove	pshm->P[13236]
#define	P_Program_Monitoring_Lamp_Cell_Supply	pshm->P[13237]
#define	P_Program_Monitoring_Lamp_Sepa_Mode	pshm->P[13238]
#define	P_Program_Monitoring_Lamp_Semi_Run	pshm->P[13239]
#define	P_Program_Monitoring_Lamp_Stack_Mode	pshm->P[13240]
#define	P_Program_Monitoring_Lamp_Anode_Aling_NG	pshm->P[13241]
#define	P_Program_Monitoring_Lamp_Anode_Retry_NG	pshm->P[13242]
#define	P_Program_Monitoring_Lamp_Cathode_Align_NG	pshm->P[13243]
#define	P_Program_Monitoring_Lamp_Cathode_Retry_NG	pshm->P[13244]
#define	P_Program_Monitoring_Lamp_Last_Stack_Mode	pshm->P[13245]
#define	P_Program_Monitoring_Lamp_Jelly_Roll_OK	pshm->P[13246]
#define	P_Program_Monitoring_Lamp_Jelly_Roll_NG	pshm->P[13247]
#define	P_Program_Monitoring_Lamp_Jelly_Roll_Sepa	pshm->P[13248]
#define	P_Program_Monitoring_Lamp_Cell_Out_Pos	pshm->P[13249]
#define	P_Program_Monitoring_Lamp_Cell_Out_Mode	pshm->P[13250]
#define	P_Master_Motion_Program_Flag	pshm->P[13251]
#define	P_Sub_Master_Motion_Program_Flag(i)	pshm->P[(13252+i)%MAX_P]
#define	P_Slave_Motion_Program_Flag(i)	pshm->P[(13272+i)%MAX_P]
#define	P_Master_Motion_CycleStop_Flag	pshm->P[13292]
#define	P_OLD_Jog_Speed_Motor(i)	pshm->P[(13293+i)%MAX_P]
#define	P_PLC_08_Program_Ver	pshm->P[13343]
#define	P_Old_PMAC_Commands	pshm->P[13344]
#define	P_Old_PMAC_Status	pshm->P[13345]
#define	P_Old_PMAC_Current_Mode	pshm->P[13346]
#define	P_Mode_Function_State_Machine	pshm->P[13347]
#define	P_PMAC_Commands	pshm->P[13348]
#define	P_Command_Start(i)	pshm->P[(13349+i)%MAX_P]
#define	P_Command_Complete(i)	pshm->P[(13367+i)%MAX_P]
#define	P_Command_Reset(i)	pshm->P[(13385+i)%MAX_P]
#define	P_Command_Hold(i)	pshm->P[(13403+i)%MAX_P]
#define	P_Command_Unhold(i)	pshm->P[(13421+i)%MAX_P]
#define	P_Command_Suspend(i)	pshm->P[(13439+i)%MAX_P]
#define	P_Command_Unsuspend(i)	pshm->P[(13457+i)%MAX_P]
#define	P_Command_Clear(i)	pshm->P[(13475+i)%MAX_P]
#define	P_Command_Stop(i)	pshm->P[(13493+i)%MAX_P]
#define	P_Command_Abort(i)	pshm->P[(13511+i)%MAX_P]
#define	P_Command_Status_Complete(i)	pshm->P[(13529+i)%MAX_P]
#define	P_Command_Mask_Layer(i)	pshm->P[(13547+i)%MAX_P]
#define	P_Command_Process_Type(i)	pshm->P[(13565+i)%MAX_P]
#define	P_array_CF_Mode_Name	pshm->P[100]
#define	P_array_CF_Function_Name	pshm->P[200]
#define	P_array_CF_Function_State_Number	pshm->P[300]
#define	P_array_CF_Local_Alarm_Code	pshm->P[400]
#define	P_array_CF_Function_Run_Time	pshm->P[500]
#define	P_array_CF_Function_Start_Flag	pshm->P[600]
#define	P_array_CF_Function_Run_Flag	pshm->P[700]
#define	P_array_CF_Function_Return_Flag	pshm->P[800]
#define	P_array_CF_Function_Mask	pshm->P[900]
#define	P_array_CF_Function_Debug_Flag	pshm->P[1000]
#define	P_PMAC_Current_Mode	pshm->P[13583]
#define	P_PMAC_Status	pshm->P[13584]
#define	P_PMAC_Old_Mode	pshm->P[13585]
#define	P_Ready_Tack_Chk_Timer	pshm->P[13586]
#define	P_PLC09_Common_Command_Flag	pshm->P[13587]
#define	P_PLC09_Common_Command_Complete_Bit	pshm->P[13588]
#define	P_PLC09_Common_Execute_Flag	pshm->P[13589]
#define	P_PLC09_Common_Execute_Complete_Bit	pshm->P[13590]
#define	P_PLC09_Status	pshm->P[13591]
#define	P_PLC09_Libraries_Var	pshm->P[13592]
#define	P_Master_Motion_Program_ON_Flag	pshm->P[13593]
#define	P_Master_Motion_Program_ON_Complete_Bit	pshm->P[13594]
#define	P_Master_Motion_Program_OFF_Flag	pshm->P[13595]
#define	P_Master_Motion_Program_OFF_Complete_Bit	pshm->P[13596]
#define	P_Common_Function_Timbase_ON_Flag	pshm->P[13597]
#define	P_Common_Function_Timbase_ON_Complete_Bit	pshm->P[13598]
#define	P_Common_Function_Timbase_OFF_Flag	pshm->P[13599]
#define	P_Common_Function_Timbase_OFF_Complete_Bit	pshm->P[13600]
#define	P_Common_Function_Monitoring_Lamp_OFF_Flag	pshm->P[13601]
#define	P_Common_Function_Monitoring_Lamp_OFF_Complete_Bit	pshm->P[13602]
#define	P_Common_Function_Slave_Motion_Common_Init_Flag	pshm->P[13603]
#define	P_Common_Function_Slave_Motion_Common_Init_Complete_Bit	pshm->P[13604]
#define	P_Common_Function_OlD_Jog_Speed_Save_ON_Flag	pshm->P[13605]
#define	P_Common_Function_OlD_Jog_Speed_Save_ON_Complete_Bit	pshm->P[13606]
#define	P_Auto_Resetting_Sum_Ready_Pos_Check_Flag	pshm->P[13607]
#define	P_Auto_Resetting_Sum_Ready_Pos_Check_Complete_bit	pshm->P[13608]
#define	P_Manual_Resetting_Sum_Ready_Pos_Check_Flag	pshm->P[13609]
#define	P_Manual_Resetting_Sum_Ready_Pos_Check_Complete_bit	pshm->P[13610]
#define	P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Flag	pshm->P[13611]
#define	P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Complete_Bit	pshm->P[13612]
#define	P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Flag	pshm->P[13613]
#define	P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Complete_Bit	pshm->P[13614]
#define	P_Motion_Target_Position_Complete	pshm->P[13615]
#define	P_SM_Auto_Run_Layer_Management	pshm->P[13616]
#define	P_Buffer_Mode_Status_Sequence	pshm->P[13617]
#define	P_SM_Sub_Function_Pause	pshm->P[13618]
#define	P_PLC09_Resetting_Position_Check_State_Machine	pshm->P[13619]
#define	P_PLC09_Resetting_Position_Moving_State_Machine	pshm->P[13620]
#define	P_Sum_Ready_pos_Motor(i)	pshm->P[(13621+i)%MAX_P]
#define	P_SM_Resetting_Pause_Position	pshm->P[13663]
#define	P_20per_Vac_Error_Cycle_Stop_Flag	pshm->P[13664]
#define	P_MNTR_PLC23_ARC_Complete	pshm->P[13665]
#define	P_FUNCTION_PLC13_Sepa_Trigger_Enable	pshm->P[13666]
#define	P_PLC_Recipe_PLC2_Revise_Sepa	pshm->P[13667]
#define	P_Auto_Semi_Init_Status	pshm->P[13668]
#define	P_Auto_Semi_Init_Chk_Bit	pshm->P[13669]
#define	P_Old_PLC_HeartBit_Flag	pshm->P[13670]
#define	P_PLC09_Init_Flag	pshm->P[13671]
#define	P_Check_IDLE_CF_Flag	pshm->P[13672]
#define	P_Check_EXECUTE_CF_Flag	pshm->P[13673]
#define	P_Check_COMPLETING_CF_Flag	pshm->P[13674]
#define	P_Check_COMPLETE_CF_Flag	pshm->P[13675]
#define	P_Check_HOLDING_CF_Flag	pshm->P[13676]
#define	P_Check_HOLD_CF_Flag	pshm->P[13677]
#define	P_Check_UNHOLDING_CF_Flag	pshm->P[13678]
#define	P_Check_SUSPENDING_CF_Flag	pshm->P[13679]
#define	P_Check_SUSPENDED_CF_Flag	pshm->P[13680]
#define	P_Check_UNSUSPENDING_CF_Flag	pshm->P[13681]
#define	P_Check_STOPPED_CF_Flag	pshm->P[13682]
#define	P_Check_ABORTED_CF_Flag	pshm->P[13683]
#define	P_Check_CLEARING_CF_Flag	pshm->P[13684]
#define	P_Check_IDLE_CF	pshm->P[13685]
#define	P_Check_EXECUTE_CF	pshm->P[13686]
#define	P_Check_COMPLETING_CF	pshm->P[13687]
#define	P_Check_COMPLETE_CF	pshm->P[13688]
#define	P_Check_HOLDING_CF	pshm->P[13689]
#define	P_Check_HOLD_CF	pshm->P[13690]
#define	P_Check_UNHOLDING_CF	pshm->P[13691]
#define	P_Check_SUSPENDING_CF	pshm->P[13692]
#define	P_Check_SUSPENDED_CF	pshm->P[13693]
#define	P_Check_UNSUSPENDING_CF	pshm->P[13694]
#define	P_Check_STOPPED_CF	pshm->P[13695]
#define	P_Check_ABORTED_CF	pshm->P[13696]
#define	P_Check_CLEARING_CF	pshm->P[13697]
#define	P_Check_STOPPING_CF	pshm->P[13698]
#define	P_Check_STARTING_CF	pshm->P[13699]
#define	P_Check_RESETTING_CF	pshm->P[13700]
#define	P_Check_STARTTING_CF	pshm->P[13701]
#define	P_Queue_Clear	pshm->P[13702]
#define	P_PLC09_Alarm_Test_Flag	pshm->P[13703]
#define	P_PLC09_Test_Temp	pshm->P[13704]
#define	P_PLC01_STOP_Queue_Complete_Flag	pshm->P[13705]
#define	P_PMAC_All_Home_Cmd	pshm->P[13706]
#define	P_PMAC_All_Home_Status	pshm->P[13707]
#define	P_PMAC_Master_Following_Use_Flag	pshm->P[13708]
#define	PnP_Belt_Waring_Pos	pshm->P[13709]
#define	P_Old_X_PLC_Sync_Heart_Bit	pshm->P[13710]
#define	P_Stack_Heart_Bit_Sync_Flag	pshm->P[13711]
#define	P_Stack_Heart_Bit_Sunc_Complete_Bit	pshm->P[13712]
#define	P_Resetting_Init_Module_RTN	pshm->P[13713]
#define	P_PLC09_MNTR	pshm->P[13714]
#define	P_Unloder_PNP_Home_IL_Pos	pshm->P[13715]
#define	P_ECAT_Slave_Err_Bit	pshm->P[13716]
#define	P_MC_Power_Down_Flag	pshm->P[13717]
#define	P_Old_MC_Power_Down_Flag	pshm->P[13718]
#define	P_Modbus_A_PMAC_Cur_Mode	pshm->P[10]
#define	P_Modbus_A_PMAC_Cur_Status	pshm->P[11]
#define	P_Modbus_A_VISION_MSA_Status	pshm->P[12]
#define	P_Modbus_A_Anode_1st_Pos	pshm->P[13]
#define	P_Modbus_A_Cathode_1st_Pos	pshm->P[14]
#define	P_Modbus_A_Connect_State	pshm->P[15]
#define	P_Modbus_A_All_Home_Status	pshm->P[16]
#define	P_Modbus_HeartBit	pshm->P[17]
#define	P_Modbus_A_Anode_1st_HCK	pshm->P[18]
#define	P_Modbus_A_Cathode_1st_HCK	pshm->P[19]
#define	P_Modbus_B_PMAC_Cur_Mode	pshm->P[30]
#define	P_Modbus_B_PMAC_Cur_Status	pshm->P[31]
#define	P_Modbus_B_VISION_MSA_Status	pshm->P[32]
#define	P_Modbus_B_Anode_1st_Pos	pshm->P[33]
#define	P_Modbus_B_Cathode_1st_Pos	pshm->P[34]
#define	P_Modbus_B_Connect_State	pshm->P[35]
#define	P_Modbus_B_All_Home_Status	pshm->P[36]
#define	P_Modbus_B_Anode_1st_HCK	pshm->P[37]
#define	P_Modbus_B_Cathode_1st_HCK	pshm->P[38]
#define	P_Modbus_Delay_Timer	pshm->P[13719]
#define	P_Modbus_Connect_Status	pshm->P[13720]
#define	P_Modbus_Reconnect_MNTR	pshm->P[13721]
#define	P_Ecat_Reconn_Chk_Lamp	pshm->P[13722]
#define	P_MC_Reconn_Chk_Lamp	pshm->P[13723]
#define	P_Cathode_1st_Vac_Set_Time	pshm->P[13724]
#define	P_Cathode_2nd_Vac_Set_Time	pshm->P[13725]
#define	P_Cathode_Align_Vac_Set_Time	pshm->P[13726]
#define	P_Cathode_Align_Blow_Set_Time	pshm->P[13727]
#define	P_Anode_1st_Vac_Set_Time	pshm->P[13728]
#define	P_Anode_2nd_Vac_Set_Time	pshm->P[13729]
#define	P_Sepa_Consume_Mode_Thickness_rate	pshm->P[13730]
#define	P_Sepa_Anode_Recipe_Count	pshm->P[13731]
#define	P_Sepa_Cathode_Recipe_Count	pshm->P[13732]
#define	P_Discharge_Cathode_Recipe_Count	pshm->P[13733]
#define	P_Discharge_Anode_Recipe_Count	pshm->P[13734]
#define	P_Suspend_Discharge_Cathode_Counter	pshm->P[13735]
#define	P_Suspend_Discharge_Anode_Counter	pshm->P[13736]
#define	P_Suspend_Discharge_Waiting_Flag	pshm->P[13737]
#define	P_Com_ARC_Sepa_Consume_Mode_Flag	pshm->P[13738]
#define	P_Com_EPC_Sepa_Consume_Mode_Flag	pshm->P[13739]
#define	P_Com_User_Sepa_Consume_Mode_Flag	pshm->P[13740]
#define	P_Com_Dry_Mode_Flag	pshm->P[13741]
#define	P_SM_Recipe_Value_Management	pshm->P[13742]
#define	P_Sepa_Mode_Recipe_Count	pshm->P[13743]
#define	P_Sepa_Mode_EPC_Recipe_Count	pshm->P[13744]
#define	P_ARC_End_Sepa_Recipe_Count	pshm->P[13745]
#define	P_Anode_Align_NG_Array(i)	pshm->P[(13746+i)%MAX_P]
#define	P_Cathode_Align_NG_Array(i)	pshm->P[(13766+i)%MAX_P]
#define	P_Anode_Surface_NG_Array(i)	pshm->P[(13786+i)%MAX_P]
#define	P_Cathode_Surface_NG_Array(i)	pshm->P[(13806+i)%MAX_P]
#define	P_Stack_NG_Array(i)	pshm->P[(13826+i)%MAX_P]
#define	P_Cathode_Align_Continuous_NG_Stop_Select	pshm->P[13846]
#define	P_Anode_Align_Continuous_NG_Stop_Select	pshm->P[13847]
#define	P_Stack_Vision_NG_Enable	pshm->P[13848]
#define	P_Cathode_Surface_Continuous_NG_Stop_Select	pshm->P[13849]
#define	P_Anode_Surface_Continuous_NG_Stop_Select	pshm->P[13850]
#define	P_Anode_Trigger_IO_Test_Vision_PLC_Loop	pshm->P[13851]
#define	P_Anode_Trigger_IO_Test_Motion_Loop	pshm->P[13852]
#define	P_Cathode_Trigger_IO_Test_Vision_PLC_Loop	pshm->P[13853]
#define	P_Cathode_Trigger_IO_Test_Motion_Loop	pshm->P[13854]
#define	P_Stack_Trigger_IO_Test_Vision_PLC_Loop	pshm->P[13855]
#define	P_Stack_Trigger_IO_Test_Motion_Loop	pshm->P[13856]
#define	P_PLC12_Continuous_Buffer_Reset_Flag	pshm->P[13857]
#define	P_Continuous_Call_Align_OK_Flag(i)	pshm->P[(13858+i)%MAX_P]
#define	P_Continuous_Call_Align_NG_Flag(i)	pshm->P[(13860+i)%MAX_P]
#define	P_Continuous_Call_Align_TimeOut_Flag(i)	pshm->P[(13862+i)%MAX_P]
#define	P_Continuous_Call_Surface_OK_Flag(i)	pshm->P[(13864+i)%MAX_P]
#define	P_Continuous_Call_Surface_NG_Flag(i)	pshm->P[(13866+i)%MAX_P]
#define	P_Continuous_Call_Surface_TimeOut_Flag(i)	pshm->P[(13868+i)%MAX_P]
#define	P_Continuous_Call_Stack_Flag(i)	pshm->P[(13870+i)%MAX_P]
#define	P_PLC12_Anode_Sheet_Pick_Up_Flag	pshm->P[13873]
#define	P_PLC12_Cathode_Sheet_Pick_Up_Flag	pshm->P[13874]
#define	P_Hold_Anode_Sheet_Pick_Up_Flag	pshm->P[13875]
#define	P_Hold_Cathode_Sheet_Pick_Up_Flag	pshm->P[13876]
#define	P_Sheet_Interface_Complete_Pos	pshm->P[13877]
#define	P_Anode_Sheet_Interface_Complete_Pos	pshm->P[13878]
#define	P_Cathode_Sheet_Interface_Complete_Pos	pshm->P[13879]
#define	P_Anode_2nd_TR_Maint_Check	pshm->P[13880]
#define	P_Cathode_2nd_TR_Maint_Check	pshm->P[13881]
#define	P_PLC12_Observser_MNTR(i)	pshm->P[(13882+i)%MAX_P]
#define	P_PLC12_Vacuum_MNTR(i)	pshm->P[(13887+i)%MAX_P]
#define	P_Vacuum_Check(i)	pshm->P[(13895+i)%MAX_P]
#define	P_PLC12_Blow_MNTR(i)	pshm->P[(13903+i)%MAX_P]
#define	P_Blow_Check(i)	pshm->P[(13911+i)%MAX_P]
#define	P_PLC12_Vacuum_1st_Cathode_MNTR_Timer	pshm->P[13919]
#define	P_PLC12_Vacuum_2nd_Cathode_MNTR_Timer	pshm->P[13920]
#define	P_PLC12_Vacuum_NG_Cathode_MNTR_Timer	pshm->P[13921]
#define	P_PLC12_Vacuum_Align_Cathode_MNTR_Timer	pshm->P[13922]
#define	P_PLC12_Vacuum_1st_Anode_MNTR_Timer	pshm->P[13923]
#define	P_PLC12_Vacuum_2nd_Anode_MNTR_Timer	pshm->P[13924]
#define	P_PLC12_Vacuum_NG_Anode_MNTR_Timer	pshm->P[13925]
#define	P_PLC12_Vacuum_Align_Anode_MNTR_Timer	pshm->P[13926]
#define	P_PLC12_Vacuum_1st_Cathode_Set_Time	pshm->P[13927]
#define	P_PLC12_Vacuum_2nd_Cathode_Set_Time	pshm->P[13928]
#define	P_PLC12_Vacuum_NG_Cathode_Set_Time	pshm->P[13929]
#define	P_PLC12_Vacuum_Align_Cathode_Set_Time	pshm->P[13930]
#define	P_PLC12_Vacuum_1st_Anode_Set_Time	pshm->P[13931]
#define	P_PLC12_Vacuum_2nd_Anode_Set_Time	pshm->P[13932]
#define	P_PLC12_Vacuum_NG_Anode_Set_Time	pshm->P[13933]
#define	P_PLC12_Vacuum_Align_Anode_Set_Time	pshm->P[13934]
#define	P_PLC12_Vacuum_1st_Cathode_Take_Time(i)	pshm->P[(13935+i)%MAX_P]
#define	P_PLC12_Vacuum_2nd_Cathode_Take_Time(i)	pshm->P[(13940+i)%MAX_P]
#define	P_PLC12_Vacuum_NG_Cathode_Take_Time(i)	pshm->P[(13945+i)%MAX_P]
#define	P_PLC12_Vacuum_Align_Cathode_Take_Time(i)	pshm->P[(13950+i)%MAX_P]
#define	P_PLC12_Vacuum_1st_Anode_Take_Time(i)	pshm->P[(13955+i)%MAX_P]
#define	P_PLC12_Vacuum_2nd_Anode_Take_Time(i)	pshm->P[(13960+i)%MAX_P]
#define	P_PLC12_Vacuum_NG_Anode_Take_Time(i)	pshm->P[(13965+i)%MAX_P]
#define	P_PLC12_Vacuum_Align_Anode_Take_Time(i)	pshm->P[(13970+i)%MAX_P]
#define	P_PLC12_Blow_1st_Cathode_MNTR_Timer	pshm->P[13975]
#define	P_PLC12_Blow_2nd_Cathode_MNTR_Timer	pshm->P[13976]
#define	P_PLC12_Blow_NG_Cathode_MNTR_Timer	pshm->P[13977]
#define	P_PLC12_Blow_Align_Cathode_MNTR_Timer	pshm->P[13978]
#define	P_PLC12_Blow_1st_Anode_MNTR_Timer	pshm->P[13979]
#define	P_PLC12_Blow_2nd_Anode_MNTR_Timer	pshm->P[13980]
#define	P_PLC12_Blow_NG_Anode_MNTR_Timer	pshm->P[13981]
#define	P_PLC12_Blow_Align_Anode_MNTR_Timer	pshm->P[13982]
#define	P_PLC12_Blow_1st_Cathode_Set_Time	pshm->P[13983]
#define	P_PLC12_Blow_2nd_Cathode_Set_Time	pshm->P[13984]
#define	P_PLC12_Blow_NG_Cathode_Set_Time	pshm->P[13985]
#define	P_PLC12_Blow_Align_Cathode_Set_Time	pshm->P[13986]
#define	P_PLC12_Blow_1st_Anode_Set_Time	pshm->P[13987]
#define	P_PLC12_Blow_2nd_Anode_Set_Time	pshm->P[13988]
#define	P_PLC12_Blow_NG_Anode_Set_Time	pshm->P[13989]
#define	P_PLC12_Blow_Align_Anode_Set_Time	pshm->P[13990]
#define	P_PLC12_Blow_1st_Cathode_Take_Time(i)	pshm->P[(13991+i)%MAX_P]
#define	P_PLC12_Blow_2nd_Cathode_Take_Time(i)	pshm->P[(13996+i)%MAX_P]
#define	P_PLC12_Blow_NG_Cathode_Take_Time(i)	pshm->P[(14001+i)%MAX_P]
#define	P_PLC12_Blow_Align_Cathode_Take_Time(i)	pshm->P[(14006+i)%MAX_P]
#define	P_PLC12_Blow_1st_Anode_Take_Time(i)	pshm->P[(14011+i)%MAX_P]
#define	P_PLC12_Blow_2nd_Anode_Take_Time(i)	pshm->P[(14016+i)%MAX_P]
#define	P_PLC12_Blow_NG_Anode_Take_Time(i)	pshm->P[(14021+i)%MAX_P]
#define	P_PLC12_Blow_Align_Anode_Take_Time(i)	pshm->P[(14026+i)%MAX_P]
#define	P_Vacuum_Reentry_Bit	pshm->P[14031]
#define	P_Blow_Reentry_Bit	pshm->P[14032]
#define	P_Status_arry(i)	pshm->P[(14033+i)%MAX_P]
#define	P_Queue_arry(i)	pshm->P[(14053+i)%MAX_P]
#define	P_Step_arry(i)	pshm->P[(14073+i)%MAX_P]
#define	P_Index_arry(i)	pshm->P[(14093+i)%MAX_P]
#define	P_top	pshm->P[14113]
#define	P_Queue_stack_top	pshm->P[14114]
#define	P_Step_stack_top	pshm->P[14115]
#define	P_Index_stack_top	pshm->P[14116]
#define	P_Status_stack_top	pshm->P[14117]
#define	NN_Step	pshm->P[14118]
#define	NN_Index	pshm->P[14119]
#define	P_PLC_Observser_MNTR(i)	pshm->P[(14120+i)%MAX_P]
#define	P_PLC12_Frist	pshm->P[14125]
#define	P_SM_Auto_Run_Status_Management	pshm->P[14126]
#define	P_SM_Status_Main_Memory_Management	pshm->P[14127]
#define	P_SM_Cell_Memory_Management	pshm->P[14128]
#define	P_Test_Vacuum_Timer(i)	pshm->P[(14129+i)%MAX_P]
#define	P_Test_Blow_Timer(i)	pshm->P[(14137+i)%MAX_P]
#define	P_Vac_Test_Set_Time(i)	pshm->P[(14145+i)%MAX_P]
#define	P_Blow_Test_Set_Time(i)	pshm->P[(14153+i)%MAX_P]
#define	P_PLC12_Vacuum_Unit_Data	pshm->P[14161]
#define	P_PLC12_Blow_Unit_Data	pshm->P[14162]
#define	P_Stack_Algorithme_Cmd_Event_Status	pshm->P[14163]
#define	P_PLC12_vacuum_Event_Status	pshm->P[14164]
#define	P_PLC12_Blow_Event_status	pshm->P[14165]
#define	P_PLC12_vacuum_DIO_Observer_Status	pshm->P[14166]
#define	P_PLC12_Blow_DIO_Observer_Status	pshm->P[14167]
#define	P_Resetting_Vacuum_MNTR_State_Machine	pshm->P[14168]
#define	P_Heart_Bit_Time	pshm->P[14169]
#define	P_Dancer_Angle_Alarm_Timer_Flag	pshm->P[14170]
#define	P_Dancer_Angle_Alarm_Check_Timer	pshm->P[14171]
#define	P_BTN_LED_LAMP	pshm->P[14172]
#define	P_Old_BTN_LED_LAMP	pshm->P[14173]
#define	P_PLC_TO_PMAC_Work_Confirm_Operation_Cnt	pshm->P[14174]
#define	P_VISION_TO_PMAC_Work_Confirm_Operation_Ack_Cnt	pshm->P[14175]
#define	P_Ca_AT_Retry_Cal_Move_Complete	pshm->P[14176]
#define	P_An_AT_Retry_Cal_Move_Complete	pshm->P[14177]
#define	P_Ca_AT_Retry_Cal_Cnt	pshm->P[14178]
#define	P_An_AT_Retry_Cal_Cnt	pshm->P[14179]
#define	P_Ca_AT_Retry_Cal_Complete	pshm->P[14180]
#define	P_An_AT_Retry_Cal_Complete	pshm->P[14181]
#define	P_An_AT_Retry_Cal_Pass	pshm->P[14182]
#define	P_Ca_AT_Retry_Cal_Pass	pshm->P[14183]
#define	P_Ca_Picker_T_Turn_Cnt_Flag	pshm->P[14184]
#define	P_Ca_Picker_T_Turn_Cnt	pshm->P[14185]
#define	P_Ca_Picker_T_Home_Type	pshm->P[14186]
#define	P_An_Picker_T_Turn_Cnt_Flag	pshm->P[14187]
#define	P_An_Picker_T_Turn_Cnt	pshm->P[14188]
#define	P_An_Picker_T_Home_Type	pshm->P[14189]
#define	P_Flag_Vac_Status_Initialize	pshm->P[14190]
#define	P_SM_Vac_Initialize	pshm->P[14191]
#define	P_Flag_Anode_1st_Vac_OFF	pshm->P[14192]
#define	P_Flag_Anode_AT_Vac_OFF	pshm->P[14193]
#define	P_Flag_Anode_2nd_Vac_OFF	pshm->P[14194]
#define	P_Flag_Anode_NG_Vac_OFF	pshm->P[14195]
#define	P_Flag_Cathode_1st_Vac_OFF	pshm->P[14196]
#define	P_Flag_Cathode_AT_Vac_OFF	pshm->P[14197]
#define	P_Flag_Cathode_2nd_Vac_OFF	pshm->P[14198]
#define	P_Flag_Cathode_NG_Vac_OFF	pshm->P[14199]
#define	P_Flag_Anode_1st_Vac_Initial_Alarm	pshm->P[14200]
#define	P_Flag_Anode_AT_Vac_Initial_Alarm	pshm->P[14201]
#define	P_Flag_Anode_2nd_Vac_Initial_Alarm	pshm->P[14202]
#define	P_Flag_Anode_NG_Vac_Initial_Alarm	pshm->P[14203]
#define	P_Flag_Cathode_1st_Vac_Initial_Alarm	pshm->P[14204]
#define	P_Flag_Cathode_AT_Vac_Initial_Alarm	pshm->P[14205]
#define	P_Flag_Cathode_2nd_Vac_Initial_Alarm	pshm->P[14206]
#define	P_Flag_Cathode_NG_Vac_Initial_Alarm	pshm->P[14207]
#define	P_Middle_Discharge_Ignore_Total_Count	pshm->P[14208]
#define	P_Middle_Discharge_Ignore_Stack_Count	pshm->P[14209]
#define	P_Middle_Discharge_Ignore_ON_Signal	pshm->P[14210]
#define	P_Middle_Discharge_Ignore_OFF_Signal	pshm->P[14211]
#define	P_Middle_Discharge_Ignore_Cell_Count	pshm->P[14212]
#define	P_ARC_Middle_Discharge_Ignore_Vision_Check	pshm->P[14213]
#define	P_ARC_Middle_Discharge_Ignore_ON_Flag	pshm->P[14214]
#define	P_Middle_Discharge_Ignore_User_Sepa_Mode_Check	pshm->P[14215]
#define	P_Zero_Angle(i)	pshm->P[(14216+i)%MAX_P]
#define	P_Zero_Length(i)	pshm->P[(14241+i)%MAX_P]
#define	P_Homeoffset_Change_Flag(i)	pshm->P[(14266+i)%MAX_P]
#define	P_Cal_Distance(i)	pshm->P[(14291+i)%MAX_P]
#define	P_Cal_Denominator(i)	pshm->P[(14296+i)%MAX_P]
#define	P_Cal_Numerator(i)	pshm->P[(14301+i)%MAX_P]
#define	P_Cal_Dif_Deg(i)	pshm->P[(14306+i)%MAX_P]
#define	P_Vac_Door_Open_Clear(i)	pshm->P[(14311+i)%MAX_P]
#define	P_Flag_Sepa_Stack_Mode_CHK	pshm->P[14324]
#define	P_Read_Timer_S(i)	pshm->P[(14325+i)%MAX_P]
#define	P_Write_Timer_S(i)	pshm->P[(14334+i)%MAX_P]
#define	P_Interval_Read_S(i)	pshm->P[(14343+i)%MAX_P]
#define	P_Interval_Write_S(i)	pshm->P[(14352+i)%MAX_P]
#define	P_UI_Jog_Vel_M(i)	pshm->P[(14361+i)%MAX_P]
#define	P_Initialize_Read_Excom_Variables_Flag	pshm->P[14411]
#define	P_Old_X_Read_Count_S(i)	pshm->P[(14412+i)%MAX_P]
#define	P_Cathode_Clamp_MC_Cylinder_Count	pshm->P[14421]
#define	P_Cathode_Clamp_OP_Cylinder_Count	pshm->P[14422]
#define	P_Anode_Clamp_MC_Cylinder_Count	pshm->P[14423]
#define	P_Anode_Clamp_OP_Cylinder_Count	pshm->P[14424]
#define	P_Cathode_1ST_TR_Cylinder_Count	pshm->P[8003]
#define	P_Anode_1ST_TR_Cylinder_Count	pshm->P[8004]
#define	P_BTN_Cathode_Clamp_inside_Machine_Cylinder_Count_Clear	pshm->P[14425]
#define	P_BTN_Cathode_Clamp_Middle_Cylinder_Count_Clear	pshm->P[14426]
#define	P_BTN_Cathode_Clamp_outside_Machine_Cylinder_Count_Clear	pshm->P[14427]
#define	P_BTN_Anode_Clamp_inside_Machine_Cylinder_Count_Clear	pshm->P[14428]
#define	P_BTN_Anode_Clamp_Middle_Cylinder_Count_Clear	pshm->P[14429]
#define	P_BTN_Anode_Clamp_outside_Machine_Cylinder_Count_Clear	pshm->P[14430]
#define	P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear	pshm->P[14431]
#define	P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear_Old	pshm->P[14432]
#define	P_BTN_Anode_1ST_TR_Cylinder_Count_Clear	pshm->P[14433]
#define	P_BTN_Anode_1ST_TR_Cylinder_Count_Clear_Old	pshm->P[14434]
#define	P_X_BTN_Manual_1(i)	pshm->P[(14435+i)%MAX_P]
#define	P_X_BTN_Manual_2(i)	pshm->P[(14555+i)%MAX_P]
#define	P_X_BTN_Manual_3(i)	pshm->P[(14675+i)%MAX_P]
#define	P_Home_InterLock_M(i)	pshm->P[(14795+i)%MAX_P]
#define	P_Status_BTN_Manual_1(i)	pshm->P[(14845+i)%MAX_P]
#define	P_Status_BTN_Manual_2(i)	pshm->P[(14965+i)%MAX_P]
#define	P_Status_BTN_Manual_Interlock_1(i)	pshm->P[(15085+i)%MAX_P]
#define	P_Status_BTN_Manual_Interlock_2(i)	pshm->P[(15205+i)%MAX_P]
#define	P_Status_BTN_Manual_Interlock_3(i)	pshm->P[(15325+i)%MAX_P]
#define	P_Mode_Run_Enable_Flag(i)	pshm->P[(15445+i)%MAX_P]
#define	P_RECIPE_PLC27_Manual_Interval	pshm->P[15450]
#define	P_RECIPE_PLC27_Auto_Interval	pshm->P[15451]
#define	P_MNTR_PLC4_Vision_Result(i)	pshm->P[(15452+i)%MAX_P]
#define	P_PNP_Vac_Mode_Run_Enable_Flag(i)	pshm->P[(15653+i)%MAX_P]
#define	P_Recipe_Speed_Value	pshm->P[15658]
#define	P_Slave6_Target_X_For_Cell_Out	pshm->P[15659]
#define	P_HCK_Step_MNTR(i)	pshm->P[(15660+i)%MAX_P]
#define	P_Axis_Home_Pos(i)	pshm->P[(15710+i)%MAX_P]
#define	P_Axis_Ready_Pos(i)	pshm->P[(15760+i)%MAX_P]
#define	P_PMAC_Homing_CHK(i)	pshm->P[(15810+i)%MAX_P]
#define	P_Poistion_error	pshm->P[15860]
#define	P_Home_Command(i)	pshm->P[(15861+i)%MAX_P]
#define	P_Recipe_Count_Num	pshm->P[15911]
#define	L_Motor_Status_Update_Interval	pshm->P[15912]
#define	L_Motor_Recipe_Update_Interval	pshm->P[15913]
#define	P_UI_Servo_On_Off	pshm->P[15914]
#define	P_Old_BTN_Servo_On_Off_M(i)	pshm->P[(15915+i)%MAX_P]
#define	P_Peak_Load_Ratio_M(i)	pshm->P[(15948+i)%MAX_P]
#define	P_Chk_Current_Jog_Sel(i)	pshm->P[(15981+i)%MAX_P]
#define	P_Jog_Sel_Count	pshm->P[16014]
#define	P_Recipe_POS_Interock_Num_Bit(i)	pshm->P[(16015+i)%MAX_P]
#define	P_Recipe_VEL(i)	pshm->P[(16048+i)%MAX_P]
#define	P_Recipe_POS(i)	pshm->P[(16059+i)%MAX_P]
#define	P_BTN_Servo_On_Off_M(i)	pshm->P[(16070+i)%MAX_P]
#define	P_BTN_Home_M(i)	pshm->P[(16103+i)%MAX_P]
#define	P_BTN_Jog_Stop_M(i)	pshm->P[(16136+i)%MAX_P]
#define	P_BTN_Recipe_POS_RUN_M(i)	pshm->P[(16169+i)%MAX_P]
#define	P_Recipe_POS_Flag_M(i)	pshm->P[(16202+i)%MAX_P]
#define	P_BTN_Jog_INC_M(i)	pshm->P[(16235+i)%MAX_P]
#define	P_BTN_JOG_ABS_M(i)	pshm->P[(16268+i)%MAX_P]
#define	P_User_Jog_Distance	pshm->P[16301]
#define	P_Unit_Command(i)	pshm->P[(16302+i)%MAX_P]
#define	P_Unit_State_Machine(i)	pshm->P[(16402+i)%MAX_P]
#define	P_Status_BTN_Manual_3(i)	pshm->P[(16502+i)%MAX_P]
#define	P_Chk_Current_BTN_Sel(i)	pshm->P[(16602+i)%MAX_P]
#define	P_BTN_Sel_Count	pshm->P[16652]
#define	P_PC_BTN_No	pshm->P[16653]
#define	P_BTN_Interlock_Update_Interval	pshm->P[16654]
#define	P_Align_Table_Status_Update_Interval	pshm->P[16655]
#define	P_Jelly_Roll_Total_Count_Old	pshm->P[16656]
#define	P_Old_m4120	pshm->P[16657]
#define	P_Old_m4121	pshm->P[16658]
#define	P_Old_m4122	pshm->P[16659]
#define	P_Old_m4123	pshm->P[16660]
#define	P_Linear_Encoder_Pos_Check_Flag(i)	pshm->P[(16661+i)%MAX_P]
#define	P_Linear_Encoder_Pos(i)	pshm->P[(16666+i)%MAX_P]
#define	P_Status_Linear_Encoder_HomeZero(i)	pshm->P[(16671+i)%MAX_P]
#define	P_Command_Linear_Encoder_HomeZero(i)	pshm->P[(16676+i)%MAX_P]
#define	P_Flag_Linear_Enc_Homezero_Complete_M17	pshm->P[16681]
#define	P_Flag_Linear_Enc_Homezero_Complete_M18	pshm->P[16682]
#define	P_Flag_Linear_Enc_Homezero_Complete_M19	pshm->P[16683]
#define	P_Flag_Linear_Enc_Homezero_Complete_M20	pshm->P[16684]
#define	P_CMD_Linear_ENC_Homezero_M17	pshm->P[16685]
#define	P_CMD_Linear_ENC_Homezero_M18	pshm->P[16686]
#define	P_CMD_Linear_ENC_Homezero_M19	pshm->P[16687]
#define	P_CMD_Linear_ENC_Homezero_M20	pshm->P[16688]
#define	P_OLD_Home_Offset(i)	pshm->P[(16689+i)%MAX_P]
#define	P_RECIPE_PLC27_Alltime_Interval	pshm->P[16719]
#define	P_Manual_Memory_Tower_Timer	pshm->P[16720]
#define	P_Memory_Tower_Interval	pshm->P[16721]
#define	P_PLC_14_Status_Cycle_Stop_Flag	pshm->P[16722]
#define	P_Cathode_AlignTable_Cleaning_Pos_Status_Machine	pshm->P[16723]
#define	P_Anode_AlignTable_Cleaning_Pos_Status_Machine	pshm->P[16724]
#define	P_Status_Cathode_AlignTable_Cleaning_Pos	pshm->P[16725]
#define	P_Status_Anode_AlignTable_Cleaning_Pos	pshm->P[16726]
#define	P_CMD_Cathode_AlignTable_Cleaning_Pos	pshm->P[16727]
#define	P_CMD_Anode_AlignTable_Cleaning_Pos	pshm->P[16728]
#define	P_Cathode_2nd_pnp_Cleaning_Mode_Pos	pshm->P[16729]
#define	P_Anode_2nd_pnp_Cleaning_Mode_Pos	pshm->P[16730]
#define	P_Interlock_Test	pshm->P[16731]
#define	P_PNP_Picker_T_Pos	pshm->P[16732]
#define	P_NG_PNP_Pos	pshm->P[16733]
#define	M_Old_X_BTN_Machine_READY	pshm->P[16734]
#define	M_Old_X_BTN_Machine_START	pshm->P[16735]
#define	M_Old_X_BTN_Machine_STOP	pshm->P[16736]
#define	M_Old_X_BTN_Machine_RESET	pshm->P[16737]
#define	M_Old_X_BTN_Machine_MODE	pshm->P[16738]
#define	P_BTN_Motor_Pos_Check_RTN	pshm->P[16739]
#define	P_BTN_Memory_Tower_Check_Bit	pshm->P[16740]
#define	P_PMAC_Status_IDLE_Motor_Not_Pos	pshm->P[16741]
#define	P_PMAC_Status_IDLE_Motor_Pos	pshm->P[16742]
#define	P_BTN_Motor_Pos_Check_Monitor	pshm->P[16743]
#define	P_PackML_Auto_Stop_Bit	pshm->P[16744]
#define	P_BTN_IDLE_Motor_Not_Pos	pshm->P[16745]
#define	M_X_BTN_Machine_Mode	pshm->P[16746]
#define	M_Old_X_BTN_Machine_Mode	pshm->P[16747]
#define	P_Lamp_Blinking_Timer	pshm->P[16748]
#define	P_BTN_Ready_Lamp	pshm->P[16749]
#define	P_BTN_Start_Lamp	pshm->P[16750]
#define	P_BTN_Stop_Lamp	pshm->P[16751]
#define	P_ARC_Name_Plate_Passive_Status	pshm->P[16752]
#define	P_ARC_Passive_Status	pshm->P[16753]
#define	P_NP_Spool_Number	pshm->P[16754]
#define	P_ARC_Page_On	pshm->P[16755]
#define	P_ARC_NP_Upper_Timer	pshm->P[16756]
#define	P_ARC_Upper_Ready	pshm->P[16757]
#define	P_ARC_NP_Upper_3rd_Step_Toggle_Variable	pshm->P[16758]
#define	P_ARC_NP_Upper_7th_Step_Variable	pshm->P[16759]
#define	P_ARC_NP_Upper_7th_Step_Edge_Variable	pshm->P[16760]
#define	P_ARC_NP_Upper_Rot_ReRot_Blinking_Bit	pshm->P[16761]
#define	P_ARC_NP_Lower_Timer	pshm->P[16762]
#define	P_ARC_Lower_Ready	pshm->P[16763]
#define	P_ARC_NP_Lower_3rd_Step_Toggle_Variable	pshm->P[16764]
#define	P_ARC_NP_Lower_7th_Step_Variable	pshm->P[16765]
#define	P_ARC_NP_Lower_7th_Step_Edge_Variable	pshm->P[16766]
#define	P_ARC_NP_Lower_Rot_ReRot_Blinking_Bit	pshm->P[16767]
#define	M_Old_X_ARC_NP_Ready	pshm->P[16768]
#define	M_Old_X_ARC_NP_Unwinder_Rotation	pshm->P[16769]
#define	M_Old_X_ARC_NP_Unwinder_Re_Rotation	pshm->P[16770]
#define	P_Status_Clear_Flag	pshm->P[16771]
#define	P_Status_Clear_RTN	pshm->P[16772]
#define	P_MSA_BTN_On	pshm->P[16773]
#define	P_Align_Take_Off_BTN_ON	pshm->P[16774]
#define	P_ARC_NP_Upper_Ready_Check_Bit	pshm->P[16775]
#define	P_ARC_NP_Lower_Ready_Check_Bit	pshm->P[16776]
#define	P_PLC13_Cycle_Stop_Return_Array(i)	pshm->P[(16777+i)%MAX_P]
#define	P_Stopping_CycleStop_Status	pshm->P[16877]
#define	P_Stopping_CycleStop_Seq_Index	pshm->P[16878]
#define	P_Stopping_CycleStop_Precondition_Seq_Index	pshm->P[16879]
#define	P_Stopping_CycleStop_Module_Status	pshm->P[16880]
#define	P_Stopping_CycleStop_Cmd	pshm->P[16881]
#define	P_Stopping_CycleStop_State_Machine	pshm->P[16882]
#define	P_Stopping_CycleStop_Act_State_Machine(i)	pshm->P[(16883+i)%MAX_P]
#define	P_Module_Cycle_Stop_Act_State_Machine_Array(i)	pshm->P[(16903+i)%MAX_P]
#define	P_Module_Cycle_Stop_Act_Complete_Bit(i)	pshm->P[(16923+i)%MAX_P]
#define	P_Module_Cycle_Stop_Act_Command_Array(i)	pshm->P[(16943+i)%MAX_P]
#define	P_OLD_Module_Cycle_Stop_Act_Command_Array(i)	pshm->P[(16963+i)%MAX_P]
#define	P_Buffer_Seqdata_CycleStop_Array(i)	pshm->P[(16983+i)%MAX_P]
#define	P_Final_Roll_Cathode_Pos_Status	pshm->P[17003]
#define	P_Sheet_Paper_FWD_Pos_Status	pshm->P[17004]
#define	P_Final_Roll_Vision_Pos_Status	pshm->P[17005]
#define	P_Cathode_Clamp_ON_Status	pshm->P[17006]
#define	P_Anode_Clamp_ON_Status	pshm->P[17007]
#define	P_Anode_Clamp_OFF_Status	pshm->P[17008]
#define	P_Partition_Up_Flag	pshm->P[17009]
#define	P_Partition_Down_Flag	pshm->P[17010]
#define	P_Partition_Avoid_Flag	pshm->P[17011]
#define	P_Partition_Avoid_Z_Speed	pshm->P[17012]
#define	P_Partition_Avoid_X_Speed	pshm->P[17013]
#define	P_Partition_Avoid_T_Speed	pshm->P[17014]
#define	P_Partition_Avoid_2nd_T_Pos	pshm->P[17015]
#define	P_Partition_Step_Flag	pshm->P[17016]
#define	P_Tact_Time_Timer(i)	pshm->P[(17017+i)%MAX_P]
#define	P_Tack_Time_Save_Time(i)	pshm->P[(17057+i)%MAX_P]
#define	P_Anode_NG_PNP_Tact_Time_Start	pshm->P[17097]
#define	P_Cathode_NG_PNP_Tact_Time_Start	pshm->P[17098]
#define	P_Anode_NG_PNP_Tact_Time_End	pshm->P[17099]
#define	P_Cathode_NG_PNP_Tact_Time_End	pshm->P[17100]
#define	P_Tact_Time_Stack_Array(i)	pshm->P[(17101+i)%MAX_P]
#define	P_Tact_Time_Discharge_Array(i)	pshm->P[(17111+i)%MAX_P]
#define	P_Tact_Time_1st_Unloader_Array(i)	pshm->P[(17121+i)%MAX_P]
#define	P_Tact_Time_Sepa_ARC_Array(i)	pshm->P[(17131+i)%MAX_P]
#define	P_Tact_Time_Final_Roll_Array(i)	pshm->P[(17141+i)%MAX_P]
#define	P_Tact_Time_Cathode_1st_PNP_Array(i)	pshm->P[(17151+i)%MAX_P]
#define	P_Tact_Time_Cathode_Align_Array(i)	pshm->P[(17161+i)%MAX_P]
#define	P_Tact_Time_Cathode_2nd_PNP_Array(i)	pshm->P[(17171+i)%MAX_P]
#define	P_Tact_Time_Cathode_Clamp_Array(i)	pshm->P[(17181+i)%MAX_P]
#define	P_Tact_Time_Anode_1st_PNP_Array(i)	pshm->P[(17191+i)%MAX_P]
#define	P_Tact_Time_Anode_Align_Array(i)	pshm->P[(17201+i)%MAX_P]
#define	P_Tact_Time_Anode_2nd_PNP_Array(i)	pshm->P[(17211+i)%MAX_P]
#define	P_Tact_Time_Anode_Clamp_Array(i)	pshm->P[(17221+i)%MAX_P]
#define	P_Tact_Time_Cathode_1st_PNP_Vac_Array(i)	pshm->P[(17231+i)%MAX_P]
#define	P_Tact_Time_Cathode_Align_PNP_Vac_Array(i)	pshm->P[(17241+i)%MAX_P]
#define	P_Tact_Time_Cathode_2nd_PNP_Vac_Array(i)	pshm->P[(17251+i)%MAX_P]
#define	P_Tact_Time_Anode_1st_PNP_Vac_Array(i)	pshm->P[(17261+i)%MAX_P]
#define	P_Tact_Time_Anode_Align_PNP_Vac_Array(i)	pshm->P[(17271+i)%MAX_P]
#define	P_Tact_Time_Anode_2nd_PNP_Vac_Array(i)	pshm->P[(17281+i)%MAX_P]
#define	P_Tact_Time_Final_Roller_Clamp	pshm->P[17291]
#define	P_Tact_Time_Final_Roller_Unclamp	pshm->P[17292]
#define	P_Tact_Time_Stack_Table_Down	pshm->P[17293]
#define	P_Tact_Time_Stack_Table_Up	pshm->P[17294]
#define	P_Tact_Time_Sepa_Cutting_Down	pshm->P[17295]
#define	P_Tact_Time_Sepa_Cutting_Up	pshm->P[17296]
#define	P_Tact_Time_ARC_Upper_Plate_Up	pshm->P[17297]
#define	P_Tact_Time_ARC_Upper_Plate_Down	pshm->P[17298]
#define	P_Tact_Time_ARC_Upper_Tilting_On	pshm->P[17299]
#define	P_Tact_Time_ARC_Upper_Tilting_Off	pshm->P[17300]
#define	P_Tact_Time_ARC_Upper_Cutter_Fwd	pshm->P[17301]
#define	P_Tact_Time_ARC_Upper_Cutter_Bwd	pshm->P[17302]
#define	P_Tact_Time_ARC_Upper_Clamp_On	pshm->P[17303]
#define	P_Tact_Time_ARC_Upper_Clamp_Off	pshm->P[17304]
#define	P_Tact_Time_ARC_Lower_Plate_Up	pshm->P[17305]
#define	P_Tact_Time_ARC_Lower_Plate_Down	pshm->P[17306]
#define	P_Tact_Time_ARC_Lower_Tilting_On	pshm->P[17307]
#define	P_Tact_Time_ARC_Lower_Tilting_Off	pshm->P[17308]
#define	P_Tact_Time_ARC_Lower_Cutter_Fwd	pshm->P[17309]
#define	P_Tact_Time_ARC_Lower_Cutter_Bwd	pshm->P[17310]
#define	P_Tact_Time_ARC_Lower_Clamp_On	pshm->P[17311]
#define	P_Tact_Time_ARC_Lower_Clamp_Off	pshm->P[17312]
#define	P_Tact_Time_Save_Final_Roller_Clamp_Time	pshm->P[17313]
#define	P_Tact_Time_Save_Final_Roller_Unclamp_Time	pshm->P[17314]
#define	P_Tact_Time_Save_Stack_Table_Down_Time	pshm->P[17315]
#define	P_Tact_Time_Save_Stack_Table_Up_Time	pshm->P[17316]
#define	P_Tact_Time_Save_Sepa_Cutting_Down_Time	pshm->P[17317]
#define	P_Tact_Time_Save_Sepa_Cutting_Up_Time	pshm->P[17318]
#define	P_Tact_Time_Save_ARC_Upper_Plate_Up_Time	pshm->P[17319]
#define	P_Tact_Time_Save_ARC_Upper_Plate_Down_Time	pshm->P[17320]
#define	P_Tact_Time_Save_ARC_Upper_Tilting_On_Time	pshm->P[17321]
#define	P_Tact_Time_Save_ARC_Upper_Tilting_Off_Time	pshm->P[17322]
#define	P_Tact_Time_Save_ARC_Upper_Cutter_Fwd_Time	pshm->P[17323]
#define	P_Tact_Time_Save_ARC_Upper_Cutter_Bwd_Time	pshm->P[17324]
#define	P_Tact_Time_Save_ARC_Upper_Clamp_On_Time	pshm->P[17325]
#define	P_Tact_Time_Save_ARC_Upper_Clamp_Off_Time	pshm->P[17326]
#define	P_Tact_Time_Save_ARC_Lower_Plate_Up_Time	pshm->P[17327]
#define	P_Tact_Time_Save_ARC_Lower_Plate_Down_Time	pshm->P[17328]
#define	P_Tact_Time_Save_ARC_Lower_Tilting_On_Time	pshm->P[17329]
#define	P_Tact_Time_Save_ARC_Lower_Tilting_Off_Time	pshm->P[17330]
#define	P_Tact_Time_Save_ARC_Lower_Cutter_Fwd_Time	pshm->P[17331]
#define	P_Tact_Time_Save_ARC_Lower_Cutter_Bwd_Time	pshm->P[17332]
#define	P_Tact_Time_Save_ARC_Lower_Clamp_On_Time	pshm->P[17333]
#define	P_Tact_Time_Save_ARC_Lower_Clamp_Off_Time	pshm->P[17334]
#define	P_Tact_Time_Check(i)	pshm->P[(17335+i)%MAX_P]
#define	P_Old_Tact_Time_Check(i)	pshm->P[(17375+i)%MAX_P]
#define	P_Tact_Time_Head_Address(i)	pshm->P[(17415+i)%MAX_P]
#define	P_Tact_Time_Array_Init	pshm->P[17455]
#define	P_Last_Run_To_Discharge_Tact_Timer	pshm->P[17456]
#define	P_Last_Run_To_Discharge_Tact_Time	pshm->P[17457]
#define	P_Master_Trigger_Sync_Tact_Timer	pshm->P[17458]
#define	P_Master_Trigger_Sync_Tact_Time	pshm->P[17459]
#define	P_Vision_First_Sepa_Stack_Align_OK_PMAC_Flag	pshm->P[17460]
#define	P_PLC18_EPC_Retry_Mode_Time_Use_Flag	pshm->P[17461]
#define	P_PLC18_Vision_EPC_Correction_Request_Old	pshm->P[17462]
#define	P_PLC18_EPC_Moving_Flag	pshm->P[17463]
#define	P_PLC18_EPC_Moving_Status	pshm->P[17464]
#define	P_PLC18_EPC_Move_State_Machine	pshm->P[17465]
#define	P_PLC18_EPC_Move_Status	pshm->P[17466]
#define	P_PLC18_EPC_inspection_Time	pshm->P[17467]
#define	P_EPC_Insp_Time	pshm->P[17468]
#define	P_EPC_Correction_Time	pshm->P[17469]
#define	P_TEST_Max_EPC_Sensor_Value_um	pshm->P[17470]
#define	P_PLC18_EPC_Moving_Timer	pshm->P[17471]
#define	P_EPC_MNTR_VAR(i)	pshm->P[(17472+i)%MAX_P]
#define	P_EPC_Axis_Target_Y	pshm->P[17482]
#define	P_Com_After_Sepa_Mode_Status	pshm->P[17483]
#define	P_PLC18_PLC_to_PMAC_Correction_Value	pshm->P[17484]
#define	P_PLC_EPC_Status	pshm->P[17485]
#define	P_EPC_Retry_Over_Alarm_Flag	pshm->P[17486]
#define	P_ARC_EPC_Vision_Value_Apply_Bit	pshm->P[17487]
#define	P_ARC_EPC_Vision_Value_Apply_Flag	pshm->P[17488]
#define	P_ARC_EPC_Vision_Value_Apply_State_Machine	pshm->P[17489]
#define	P_ARC_EPC_Vision_Value_Apply_Timer	pshm->P[17490]
#define	P_ARC_EPC_Vision_Value_Apply_Time	pshm->P[17491]
#define	P_AH_Home_Status	pshm->P[17492]
#define	P_Resetting_All_Home_Command	pshm->P[17493]
#define	P_Homing_Alarm_Time	pshm->P[17494]
#define	P_Home_Check_Arry(i)	pshm->P[(17495+i)%MAX_P]
#define	P_All_Home_Stop_Cmd	pshm->P[17545]
#define	P_Home_First_Move	pshm->P[17546]
#define	P_PWM_Phasing_Start(i)	pshm->P[(17547+i)%MAX_P]
#define	P_PWM_Status(i)	pshm->P[(17552+i)%MAX_P]
#define	P_PWM_State_Machine(i)	pshm->P[(17557+i)%MAX_P]
#define	P_AH_Seq_arr(i)	pshm->P[(17562+i)%MAX_P]
#define	P_DD_M_Home_ABS_Pos(i)	pshm->P[(17577+i)%MAX_P]
#define	P_AH_Indvi_rtn(i)	pshm->P[(17582+i)%MAX_P]
#define	P_DD_M_Home_Pos_Flag	pshm->P[17633]
#define	P_WAIT_INDEX	pshm->P[17634]
#define	P_Home_Check_Arry1(i)	pshm->P[(17635+i)%MAX_P]
#define	P_FR_Cmd_Check_Flag	pshm->P[17685]
#define	P_PV_Separator_Dancer_Pressure	pshm->P[17686]
#define	P_PV_Cathode_Clamp_Pressure	pshm->P[17687]
#define	P_PV_Anoode_Clamp_Pressure	pshm->P[17688]
#define	P_PV_Cathode_Final_Roller_X_Axis	pshm->P[17689]
#define	P_PV_Anode_Final_Roller_X_Axis	pshm->P[17690]
#define	P_PV_Cathode_Clamp_ON_Y1_Axis_Pos	pshm->P[17691]
#define	P_PV_Cathode_Clamp_ON_Y2_Axis_Pos	pshm->P[17692]
#define	P_PV_Cathode_Clamp_ON_Z1_Axis_Pos	pshm->P[17693]
#define	P_PV_Cathode_Clamp_ON_Z2_Axis_Pos	pshm->P[17694]
#define	P_PV_Anode_Clamp_ON_Y1_Axis_Pos	pshm->P[17695]
#define	P_PV_Anode_Clamp_ON_Y2_Axis_Pos	pshm->P[17696]
#define	P_PV_Anode_Clamp_ON_Z1_Axis_Pos	pshm->P[17697]
#define	P_PV_Anode_Clamp_ON_Z2_Axis_Pos	pshm->P[17698]
#define	P_PV_Cathode_2th_AT_T_Axis_Pos	pshm->P[17699]
#define	P_PV_Cathode_2th_ST_T_Axis_Pos	pshm->P[17700]
#define	P_PV_Cathode_2th_AT_Z_Axis_Pos	pshm->P[17701]
#define	P_PV_Cathode_2th_ST_Z_Axis_Pos	pshm->P[17702]
#define	P_PV_Anode_2th_AT_T_Axis_Pos	pshm->P[17703]
#define	P_PV_Anode_2th_ST_T_Axis_Pos	pshm->P[17704]
#define	P_PV_Anode_2th_AT_Z_Axis_Pos	pshm->P[17705]
#define	P_PV_Anode_2th_ST_Z_Axis_Pos	pshm->P[17706]
#define	P_PV_Cathode_1th_Ready_T_Axis_Pos	pshm->P[17707]
#define	P_PV_Cathode_1th_CV_T_Axis_Pos	pshm->P[17708]
#define	P_PV_Cathode_1th_AT_T_Axis_Pos	pshm->P[17709]
#define	P_PV_Cathode_1th_Ready_Z_Axis_Pos	pshm->P[17710]
#define	P_PV_Cathode_1th_CV_Z_Axis_Pos	pshm->P[17711]
#define	P_PV_Cathode_1th_AT_Z_Axis_Pos	pshm->P[17712]
#define	P_PV_Anode_1th_Ready_T_Axis_Pos	pshm->P[17713]
#define	P_PV_Anode_1th_CV_T_Axis_Pos	pshm->P[17714]
#define	P_PV_Anode_1th_AT_T_Axis_Pos	pshm->P[17715]
#define	P_PV_Anode_1th_Ready_Z_Axis_Pos	pshm->P[17716]
#define	P_PV_Anode_1th_CV_Z_Axis_Pos	pshm->P[17717]
#define	P_PV_Anode_1th_AT_Z_Axis_Pos	pshm->P[17718]
#define	P_PV_Cathode_NG_AT_T_Axis_Pos	pshm->P[17719]
#define	P_PV_Cathode_NG_Box_T_Axis_Pos	pshm->P[17720]
#define	P_PV_Anode_NG_AT_T_Axis_Pos	pshm->P[17721]
#define	P_PV_Anode_NG_Box_T_Axis_Pos	pshm->P[17722]
#define	P_SemiRun_Separator_Dancer_Pressure_Flag	pshm->P[17723]
#define	P_SemiRun_Cathode_Clamp_Pressure_Flag	pshm->P[17724]
#define	P_SemiRun_Anoode_Clamp_Pressure_Flag	pshm->P[17725]
#define	P_SemiRun_Cathode_Final_Roller_X_Axis_Flag	pshm->P[17726]
#define	P_SemiRun_Anode_Final_Roller_X_Axis_Flag	pshm->P[17727]
#define	P_SemiRun_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag	pshm->P[17728]
#define	P_SemiRun_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag	pshm->P[17729]
#define	P_SemiRun_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag	pshm->P[17730]
#define	P_SemiRun_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag	pshm->P[17731]
#define	P_SemiRun_Cathode_2th_AT_T_Axis_Pos_Flag	pshm->P[17732]
#define	P_SemiRun_Cathode_2th_ST_T_Axis_Pos_Flag	pshm->P[17733]
#define	P_SemiRun_Cathode_2th_AT_Z_Axis_Pos_Flag	pshm->P[17734]
#define	P_SemiRun_Cathode_2th_ST_Z_Axis_Pos_Flag	pshm->P[17735]
#define	P_SemiRun_Anode_2th_AT_T_Axis_Pos_Flag	pshm->P[17736]
#define	P_SemiRun_Anode_2th_ST_T_Axis_Pos_Flag	pshm->P[17737]
#define	P_SemiRun_Anode_2th_AT_Z_Axis_Pos_Flag	pshm->P[17738]
#define	P_SemiRun_Anode_2th_ST_Z_Axis_Pos_Flag	pshm->P[17739]
#define	P_SemiRun_Cathode_1th_Ready_T_Axis_Pos_Flag	pshm->P[17740]
#define	P_SemiRun_Cathode_1th_CV_T_Axis_Pos_Flag	pshm->P[17741]
#define	P_SemiRun_Cathode_1th_AT_T_Axis_Pos_Flag	pshm->P[17742]
#define	P_SemiRun_Cathode_1th_Ready_Z_Axis_Pos_Flag	pshm->P[17743]
#define	P_SemiRun_Cathode_1th_CV_Z_Axis_Pos_Flag	pshm->P[17744]
#define	P_SemiRun_Cathode_1th_AT_Z_Axis_Pos_Flag	pshm->P[17745]
#define	P_SemiRun_Anode_1th_Ready_T_Axis_Pos_Flag	pshm->P[17746]
#define	P_SemiRun_Anode_1th_CV_T_Axis_Pos_Flag	pshm->P[17747]
#define	P_SemiRun_Anode_1th_AT_T_Axis_Pos_Flag	pshm->P[17748]
#define	P_SemiRun_Anode_1th_Ready_Z_Axis_Pos_Flag	pshm->P[17749]
#define	P_SemiRun_Anode_1th_CV_Z_Axis_Pos_Flag	pshm->P[17750]
#define	P_SemiRun_Anode_1th_AT_Z_Axis_Pos_Flag	pshm->P[17751]
#define	P_SemiRun_Cathode_NG_AT_T_Axis_Pos_Flag	pshm->P[17752]
#define	P_SemiRun_Cathode_NG_Box_T_Axis_Pos_Flag	pshm->P[17753]
#define	P_SemiRun_Anode_NG_AT_T_Axis_Pos_Flag	pshm->P[17754]
#define	P_SemiRun_Anode_NG_Box_T_Axis_Pos_Flag	pshm->P[17755]
#define	P_Motion_Separator_Dancer_Pressure_Flag	pshm->P[17756]
#define	P_Motion_Cathode_Clamp_Pressure_Flag	pshm->P[17757]
#define	P_Motion_Anoode_Clamp_Pressure_Flag	pshm->P[17758]
#define	P_Motion_Cathode_Final_Roller_X_Axis_Flag	pshm->P[17759]
#define	P_Motion_Anode_Final_Roller_X_Axis_Flag	pshm->P[17760]
#define	P_Motion_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag	pshm->P[17761]
#define	P_Motion_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag	pshm->P[17762]
#define	P_Motion_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag	pshm->P[17763]
#define	P_Motion_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag	pshm->P[17764]
#define	P_Motion_Cathode_2th_AT_T_Axis_Pos_Flag	pshm->P[17765]
#define	P_Motion_Cathode_2th_ST_T_Axis_Pos_Flag	pshm->P[17766]
#define	P_Motion_Cathode_2th_AT_Z_Axis_Pos_Flag	pshm->P[17767]
#define	P_Motion_Cathode_2th_ST_Z_Axis_Pos_Flag	pshm->P[17768]
#define	P_Motion_Anode_2th_AT_T_Axis_Pos_Flag	pshm->P[17769]
#define	P_Motion_Anode_2th_ST_T_Axis_Pos_Flag	pshm->P[17770]
#define	P_Motion_Anode_2th_AT_Z_Axis_Pos_Flag	pshm->P[17771]
#define	P_Motion_Anode_2th_ST_Z_Axis_Pos_Flag	pshm->P[17772]
#define	P_Motion_Cathode_1th_Ready_T_Axis_Pos_Flag	pshm->P[17773]
#define	P_Motion_Cathode_1th_CV_T_Axis_Pos_Flag	pshm->P[17774]
#define	P_Motion_Cathode_1th_AT_T_Axis_Pos_Flag	pshm->P[17775]
#define	P_Motion_Cathode_1th_Ready_Z_Axis_Pos_Flag	pshm->P[17776]
#define	P_Motion_Cathode_1th_CV_Z_Axis_Pos_Flag	pshm->P[17777]
#define	P_Motion_Cathode_1th_AT_Z_Axis_Pos_Flag	pshm->P[17778]
#define	P_Motion_Anode_1th_Ready_T_Axis_Pos_Flag	pshm->P[17779]
#define	P_Motion_Anode_1th_CV_T_Axis_Pos_Flag	pshm->P[17780]
#define	P_Motion_Anode_1th_AT_T_Axis_Pos_Flag	pshm->P[17781]
#define	P_Motion_Anode_1th_Ready_Z_Axis_Pos_Flag	pshm->P[17782]
#define	P_Motion_Anode_1th_CV_Z_Axis_Pos_Flag	pshm->P[17783]
#define	P_Motion_Anode_1th_AT_Z_Axis_Pos_Flag	pshm->P[17784]
#define	P_Motion_Cathode_NG_AT_T_Axis_Pos_Flag	pshm->P[17785]
#define	P_Motion_Cathode_NG_Box_T_Axis_Pos_Flag	pshm->P[17786]
#define	P_Motion_Anode_NG_AT_T_Axis_Pos_Flag	pshm->P[17787]
#define	P_Motion_Anode_NG_Box_T_Axis_Pos_Flag	pshm->P[17788]
#define	P_Cathode_1PNP_Sacle_Value	pshm->P[17789]
#define	P_Cathode_2PNP_Sacle_Value	pshm->P[17790]
#define	P_Anode_1PNP_Sacle_Value	pshm->P[17791]
#define	P_Anode_2PNP_Sacle_Value	pshm->P[17792]
#define	P_PLC01_SemiRun_PV_Flag	pshm->P[17793]
#define	P_PV_EPC_Index	pshm->P[17794]
#define	P_PV_EPC_Camera_Pos(i)	pshm->P[(17795+i)%MAX_P]
#define	P_BTN_MSA_Total_Value	pshm->P[17810]
#define	P_Vision_Align_Trigger_Timer	pshm->P[17811]
#define	P_Vision_Stack_Trigger_Timer	pshm->P[17812]
#define	P_MSA_Chk_Pos_Timer	pshm->P[17813]
#define	P_MSA_Chk_Pos_Time	pshm->P[17814]
#define	P_VISION_MSA_Status_Prod_Sequence(i)	pshm->P[(17815+i)%MAX_P]
#define	P_VISION_MSA_Seq_Index	pshm->P[17835]
#define	P_VISION_MSA_Anode_Align_Bit_Pos	pshm->P[17836]
#define	P_VISION_MSA_Seq_PreCondition_Index	pshm->P[17837]
#define	P_MSA_CycleStop_Point_Check_Complete_RTN	pshm->P[17838]
#define	P_MSA_Cmd(i)	pshm->P[(17839+i)%MAX_P]
#define	P_Current_Anode_Align_MSA_Run_Count	pshm->P[17844]
#define	P_Current_Cathode_Align_MSA_Run_Count	pshm->P[17845]
#define	P_Current_Anode_Stack_MSA_Run_Count	pshm->P[17846]
#define	P_Current_Cathode_Stack_MSA_Run_Count	pshm->P[17847]
#define	P_VISION_MSA_Align_Count_Chk_Flag	pshm->P[17848]
#define	P_VISION_MSA_Stack_Count_Chk_Flag	pshm->P[17849]
#define	P_VISION_MSA_pre_InterLock_Cmd	pshm->P[17850]
#define	P_VISION_MSA_pre_InterLock_Status	pshm->P[17851]
#define	P_VISION_MSA_pre_InterLock_Check_Assy_Bit	pshm->P[17852]
#define	P_VISION_MSA_pre_InterLock_Assy_Bit_Pos	pshm->P[17853]
#define	P_Vision_MSA_Interlock_Status	pshm->P[17854]
#define	P_VISION_MSA_MODE	pshm->P[17855]
#define	P_VISION_MSA_Status_Flag	pshm->P[17856]
#define	P_VISION_MSA_State_Machine	pshm->P[17857]
#define	P_VISION_MSA_Status	pshm->P[17858]
#define	P_VISION_MSA_Seq_Command_Occurs	pshm->P[17859]
#define	P_Vision_Align_Trigger_Time	pshm->P[17860]
#define	P_Anode_Align_MSA_Motion_Check	pshm->P[17861]
#define	P_Cathode_Align_MSA_Motion_Check	pshm->P[17862]
#define	P_Anode_Stack_MSA_Motion_Check	pshm->P[17863]
#define	P_Cathode_Stack_MSA_Motion_Check	pshm->P[17864]
#define	P_Anode_Align_MSA_Motion_ProgActive_Complete	pshm->P[17865]
#define	P_Cathode_Align_MSA_Motion_ProgActive_Complete	pshm->P[17866]
#define	P_Anode_Stack_MSA_Motion_ProgActive_Complete	pshm->P[17867]
#define	P_Cathode_Stack_MSA_Motion_ProgActive_Complete	pshm->P[17868]
#define	P_BTN_Align_Off_Total_Value	pshm->P[17869]
#define	P_Align_Take_Off_Cmd(i)	pshm->P[(17870+i)%MAX_P]
#define	P_Align_Take_Off_Status	pshm->P[17873]
#define	P_Align_Take_Off_Mode	pshm->P[17874]
#define	P_Align_Take_Off_Status_Flag	pshm->P[17875]
#define	P_Align_Take_Off_State_Machine	pshm->P[17876]
#define	P_Align_Take_Off_Chk_Pos_Timer	pshm->P[17877]
#define	P_Align_Take_Off_Motor_Check_Complete	pshm->P[17878]
#define	P_Align_Take_Off_Speed_Return_Complete	pshm->P[17879]
#define	P_Align_Take_Off_Interlock_Status	pshm->P[17880]
#define	P_Align_Take_Off_pre_InterLock_Cmd	pshm->P[17881]
#define	P_Align_Take_Off_pre_InterLock_Status	pshm->P[17882]
#define	P_Align_Take_Off_pre_InterLock_Check_Assy_Bit	pshm->P[17883]
#define	P_Align_Take_Off_pre_InterLock_Assy_Bit_Pos	pshm->P[17884]
#define	P_Align_Take_Off_Seq_Index	pshm->P[17885]
#define	P_Align_Take_Off_Seq_PreCondition_Index	pshm->P[17886]
#define	P_Align_Take_Off_Status_Prod_Sequence(i)	pshm->P[(17887+i)%MAX_P]
#define	P_Align_Take_Off_Stop_Signal	pshm->P[17907]
#define	P_Vision_Cal_Reset_Count	pshm->P[17908]
#define	P_2nd_PNP_Cleaning_Mode_Cmd	pshm->P[17909]
#define	P_2nd_PNP_Cleaning_Mode_Status	pshm->P[17910]
#define	P_2nd_PNP_Cleaning_Mode_Z_Jog_Speed	pshm->P[17911]
#define	P_2nd_PNP_Cleaning_Mode_X_Jog_Speed	pshm->P[17912]
#define	P_2nd_PNP_Cleaning_Mode_T_Jog_Speed	pshm->P[17913]
#define	P_2nd_PNP_Cleaning_Avoid_2nd_T_Pos	pshm->P[17914]
#define	P_PNP_Vac_Chk_Mode_Interlock	pshm->P[17915]
#define	P_Vac_Chk_Test	pshm->P[17916]
#define	P_Anode_1st_PNP_Vac_Chk_Mode_Blocked	pshm->P[17917]
#define	P_Cathode_1st_PNP_Vac_Chk_Mode_Blocked	pshm->P[17918]
#define	P_Anode_2nd_PNP_Vac_Chk_Mode_Blocked	pshm->P[17919]
#define	P_Cathode_2nd_PNP_Vac_Chk_Mode_Blocked	pshm->P[17920]
#define	P_SM_Anode_1st_PNP_Vac_Chk_Mode	pshm->P[17921]
#define	P_SM_Cathode_1st_PNP_Vac_Chk_Mode	pshm->P[17922]
#define	P_SM_Anode_2nd_PNP_Vac_Chk_Mode	pshm->P[17923]
#define	P_SM_Cathode_2nd_PNP_Vac_Chk_Mode	pshm->P[17924]
#define	P_Anode_1st_PNP_Vac_Chk_Execute_Timer	pshm->P[17925]
#define	P_Cathode_1st_PNP_Vac_Chk_Execute_Timer	pshm->P[17926]
#define	P_Anode_2nd_PNP_Vac_Chk_Execute_Timer	pshm->P[17927]
#define	P_Cathode_2nd_PNP_Vac_Chk_Execute_Timer	pshm->P[17928]
#define	P_Anode_1st_PNP_Vac_Check_Timer	pshm->P[17929]
#define	P_Cathode_1st_PNP_Vac_Check_Timer	pshm->P[17930]
#define	P_Anode_2nd_PNP_Vac_Check_Timer	pshm->P[17931]
#define	P_Cathode_2nd_PNP_Vac_Check_Timer	pshm->P[17932]
#define	P_Anode_1st_PNP_Vac_Chk_Status	pshm->P[17933]
#define	P_Cathode_1st_PNP_Vac_Chk_Status	pshm->P[17934]
#define	P_Anode_2nd_PNP_Vac_Chk_Status	pshm->P[17935]
#define	P_Cathode_2nd_PNP_Vac_Chk_Status	pshm->P[17936]
#define	P_Anode_1st_PNP_Vac_Chk_Mode_Stop_Blocked	pshm->P[17937]
#define	P_Cathode_1st_PNP_Vac_Chk_Mode_Stop_Blocked	pshm->P[17938]
#define	P_Anode_2nd_PNP_Vac_Chk_Mode_Stop_Blocked	pshm->P[17939]
#define	P_Cathode_2nd_PNP_Vac_Chk_Mode_Stop_Blocked	pshm->P[17940]
#define	P_Anode_1st_PnP_Vac_Chk_Mode_RTN	pshm->P[17941]
#define	P_Cathode_1st_PnP_Vac_Chk_Mode_RTN	pshm->P[17942]
#define	P_Anode_2nd_PnP_Vac_Chk_Mode_RTN	pshm->P[17943]
#define	P_Cathode_2nd_PnP_Vac_Chk_Mode_RTN	pshm->P[17944]
#define	P_PNP_Vac_Chk_Mode_TimeBase_Rtn	pshm->P[17945]
#define	P_PNP_Vac_Chk_Mode_Timer	pshm->P[17946]
#define	P_Anode_1st_PNP_Vac_Chk_Mode_Err	pshm->P[17947]
#define	P_Cathode_1st_PNP_Vac_Chk_Mode_Err	pshm->P[17948]
#define	P_Anode_2nd_PNP_Vac_Chk_Mode_Err	pshm->P[17949]
#define	P_Cathode_2nd_PNP_Vac_Chk_Mode_Err	pshm->P[17950]
#define	P_PNP_Vac_Chk_Mode_BTN_Err	pshm->P[17951]
#define	P_BTN_CA_1st_PNP_Vac_Chk_Mode	pshm->P[17952]
#define	P_BTN_AN_1st_PNP_Vac_Chk_Mode	pshm->P[17953]
#define	P_BTN_CA_2nd_PNP_Vac_Chk_Mode	pshm->P[17954]
#define	P_BTN_AN_2nd_PNP_Vac_Chk_Mode	pshm->P[17955]
#define	P_Old_Upper_Sensor(i)	pshm->P[(17956+i)%MAX_P]
#define	P_Edge_Upper_Sensor(i)	pshm->P[(17964+i)%MAX_P]
#define	P_Old_Lower_Sensor(i)	pshm->P[(17972+i)%MAX_P]
#define	P_Edge_Lower_Sensor(i)	pshm->P[(17980+i)%MAX_P]
#define	P_Edge_NP_BTN(i)	pshm->P[(17988+i)%MAX_P]
#define	P_UI_Unit_Status(i)	pshm->P[(17990+i)%MAX_P]
#define	P_Motor_Unit_Status(i)	pshm->P[(18000+i)%MAX_P]
#define	P_Current_Homming_Status_To_PLC(i)	pshm->P[(18050+i)%MAX_P]
#define	P_System_Cascading_ON_Cmd	pshm->P[18100]
#define	P_System_Cascading_OFF_Cmd	pshm->P[18101]
#define	P_System_Master_Following_ON_Cmd	pshm->P[18102]
#define	P_System_Master_Following_OFF_Cmd	pshm->P[18103]
#define	P_System_CamTable_ON_Cmd	pshm->P[18104]
#define	P_System_CamTable_OFF_Cmd	pshm->P[18105]
#define	P_System_Spool_Home_Ready_Pos_Cmd	pshm->P[18106]
#define	P_System_Cascading_ON_Status	pshm->P[18107]
#define	P_System_Cascading_OFF_Status	pshm->P[18108]
#define	P_System_Master_Following_ON_Status	pshm->P[18109]
#define	P_System_Master_Following_OFF_Status	pshm->P[18110]
#define	P_System_CamTable_ON_Status	pshm->P[18111]
#define	P_System_CamTable_OFF_Status	pshm->P[18112]
#define	P_System_Spool_Home_Ready_Pos_Status	pshm->P[18113]
#define	P_System_Cascading_ON_State_Machine	pshm->P[18114]
#define	P_System_Cascading_OFF_State_Machine	pshm->P[18115]
#define	P_System_Master_Follwing_ON_State_Machine	pshm->P[18116]
#define	P_System_Master_Follwing_OFF_State_Machine	pshm->P[18117]
#define	P_System_CamTable_ON_State_Machine	pshm->P[18118]
#define	P_System_CamTable_OFF_State_Machine	pshm->P[18119]
#define	P_System_Spool_Home_Ready_Pos_State_Machine	pshm->P[18120]
#define	P_System_Cascading_ON_Complete_Flag	pshm->P[18121]
#define	P_System_Cascading_OFF_Complete_Flag	pshm->P[18122]
#define	P_System_Master_Following_ON_Complete_Flag	pshm->P[18123]
#define	P_System_Master_Following_OFF_Complete_Flag	pshm->P[18124]
#define	P_System_CamTable_ON_Complete_Flag	pshm->P[18125]
#define	P_System_CamTable_OFF_Complete_Flag	pshm->P[18126]
#define	P_System_Spool_Home_Ready_Pos_Complete_Flag	pshm->P[18127]
#define	P_Servo_Dancer_Cascading_Off_Timer	pshm->P[18128]
#define	P_Servo_Dancer_Cascading_Set_Timer	pshm->P[18129]
#define	P_Dancer_Frist_Home_Ready_Pos_Timer	pshm->P[18130]
#define	P_Driving_Motor_Use_Flag	pshm->P[18131]
#define	P_Home_Spool_Unwinding	pshm->P[18132]
#define	P_OutValue	pshm->P[18133]
#define	P_Dancer_Out_Slew_Seq	pshm->P[18134]
#define	P_OutChangeValue	pshm->P[18135]
#define	P_Rot_OutValue	pshm->P[18136]
#define	P_OutChangeTime	pshm->P[18137]
#define	P_AO_Module_Arr(i)	pshm->P[(18138+i)%MAX_P]
#define	P_AO_Range_Set_Value(i)	pshm->P[(18143+i)%MAX_P]
#define	P_Regul_Max_kPa_Value	pshm->P[18148]
#define	P_Regul_Min_kPa_Value	pshm->P[18149]
#define	P_Regul_Max_AD	pshm->P[18150]
#define	P_Regul_Min_AD	pshm->P[18151]
#define	P_Current_Max_Value	pshm->P[18152]
#define	P_Current_Min_Value	pshm->P[18153]
#define	P_Current_Max_AD	pshm->P[18154]
#define	P_Current_Min_AD	pshm->P[18155]
#define	P_Sepa_Cal_Inclination	pshm->P[18156]
#define	P_Regul_Cal_Inclination	pshm->P[18157]
#define	P_Cutter_Heat_Amp_Data_Bit	pshm->P[18158]
#define	P_Cut_Heat_Amp_Value	pshm->P[18159]
#define	P_AI_Cathode_Clamp_Damper_AVG	pshm->P[18160]
#define	P_AI_Anode_Clamp_Damper_AVG	pshm->P[18161]
#define	P_Tension_Ready_Pos_Cmd	pshm->P[18162]
#define	P_Tension_Ready_State_Machine	pshm->P[18163]
#define	P_Tension_Ready_Pos_Status	pshm->P[18164]
#define	P_Dancer_Center_Pos	pshm->P[18165]
#define	P_Upper_Sepa_Cal_Inclination	pshm->P[18166]
#define	P_Lower_Sepa_Cal_Inclination	pshm->P[18167]
#define	P_Unwinder_Jogspeed	pshm->P[18168]
#define	P_Cascading_First_Out	pshm->P[18169]
#define	P_Dancer_Cur_Vdc	pshm->P[18170]
#define	P_Dancer_Cur_Torque	pshm->P[18171]
#define	P_Dancer_Cur_Newton	pshm->P[18172]
#define	P_Dancer_Cur_Kgf	pshm->P[18173]
#define	P_Board_IO_Count	pshm->P[18174]
#define	P_Force_BTN_Address_Clear_Count	pshm->P[18175]
#define	P_Force_BTN_M_Variable_Save(i)	pshm->P[(18176+i)%MAX_P]
#define	P_Force_BTN_Condition_Count	pshm->P[18560]
#define	P_Old_Force_BTN_Mode	pshm->P[18561]
#define	P_Force_BTN_Address_Count	pshm->P[18562]
#define	P_Force_BTN_GPIO_Address_Count	pshm->P[18563]
#define	P_Force_BTN_Ecat_Address_Count	pshm->P[18564]
#define	P_Force_BTN_M_Variable_Save_Count	pshm->P[18565]
#define	P_Force_BTN_M_Variable_Start_Num	pshm->P[18566]
#define	P_Force_BTN_Normal_Mode_Status	pshm->P[18567]
#define	P_Force_BTN_Normal_Mode_State_Machine	pshm->P[18568]
#define	P_Force_BTN_Normal_Mode_Complete_Flag	pshm->P[18569]
#define	P_Force_BTN_Force_Mode_Timer	pshm->P[18570]
#define	P_Force_BTN_Force_Mode_Delay_Time	pshm->P[18571]
#define	P_Force_BTN_Force_Mode_Status	pshm->P[18572]
#define	P_Force_BTN_Force_Mode_State_Machine	pshm->P[18573]
#define	P_Force_BTN_Force_Mode_Complete_Flag	pshm->P[18574]
#define	P_Mem_Save_Error_Bit	pshm->P[18575]
#define	P_ABS_Phasing_Data(i)	pshm->P[(18576+i)%MAX_P]
#define	P_ABS_Home_Offset_Data(i)	pshm->P[(18581+i)%MAX_P]
#define	P_Servo_Gain_Save_Command	pshm->P[18586]
#define	P_Servo_Gain_Load_Command	pshm->P[18587]
#define	P_Servo_Gain_Save_Flag	pshm->P[18588]
#define	P_Servo_Gain_Load_Flag	pshm->P[18589]
#define	P_Servo_Gain_Kp(i)	pshm->P[(18590+i)%MAX_P]
#define	P_Servo_Gain_Kvfb(i)	pshm->P[(18620+i)%MAX_P]
#define	P_Servo_Gain_Kvff(i)	pshm->P[(18650+i)%MAX_P]
#define	P_Servo_Gain_Ki(i)	pshm->P[(18680+i)%MAX_P]
#define	P_Servo_Gain_SwZvInt(i)	pshm->P[(18710+i)%MAX_P]
#define	P_Servo_Gain_Kaff(i)	pshm->P[(18740+i)%MAX_P]
#define	P_Insert_Phase_Flag	pshm->P[18770]
#define	P_Alarm_Arr(i)	pshm->P[(18771+i)%MAX_P]
#define	P_Alarm_Occur_Flag	pshm->P[18871]
#define	P_Alarm_Occur_Index_Flag(i)	pshm->P[(18872+i)%MAX_P]
#define	P_Alarm_Wait_Time	pshm->P[18876]
#define	P_Alarm_Delay_Timer	pshm->P[18877]
#define	P_Compare_Priority	pshm->P[18878]
#define	P_Alarm_Report	pshm->P[18879]
#define	P_Alarm_Num	pshm->P[18880]
#define	P_Alarm_Index	pshm->P[18881]
#define	P_First_Alarm_Flag	pshm->P[18882]
#define	P_Alarm_Log(i)	pshm->P[(18883+i)%MAX_P]
#define	P_First_Alarm_Log(i)	pshm->P[(18983+i)%MAX_P]
#define	P_Servo_Alarm_Check	pshm->P[19013]
#define	P_Ecat_Servo_Alarm_Check	pshm->P[19014]
#define	P_Alarm_duplicate_Check_Arr(i)	pshm->P[(19015+i)%MAX_P]
#define	P_Old_Drive_Alarm(i)	pshm->P[(19685+i)%MAX_P]
#define	P_IL_ON_OFF_Flag	pshm->P[19735]
#define	P_IL_Coord_Robot	pshm->P[19736]
#define	P_IL_Robot_Bit	pshm->P[19737]
#define	P_IL_Outer_Status	pshm->P[19738]
#define	P_Robot_Unit_Serch_Flag	pshm->P[19739]
#define	P_Limit_PosData(i)	pshm->P[(19740+i)%MAX_P]
#define	P_IL_Sprint	pshm->P[19743]
#define	P_IL_length	pshm->P[19744]
#define	P_IL_Strcat	pshm->P[19745]
#define	P_IL_Popup_Motor	pshm->P[19746]
#define	P_IL_Motor_Page	pshm->P[19747]
#define	P_IL_Recipe_Bit	pshm->P[19748]
#define	P_Interlock_Popup_On_Flag	pshm->P[19749]
#define	P_Motor_Page	pshm->P[19750]
#define	P_OP_Side_Ca_PNP_Pos	pshm->P[19751]
#define	P_OP_Side_An_PNP_Pos	pshm->P[19752]
#define	P_OP_Side_PMAC_Cur_Mode	pshm->P[19753]
#define	P_Abs_Trans_Cur_Pos	pshm->P[19754]
#define	P_Minus_IL_Offset	pshm->P[19755]
#define	P_Plus_IL_Offset	pshm->P[19756]
#define	P_2nd_PNP_Arm_Radius	pshm->P[19757]
#define	P_IL_Enable_Flag	pshm->P[19758]
#define	P_Plus_Interlock_Bit	pshm->P[19759]
#define	P_Minus_Interlock_Bit	pshm->P[19760]
#define	UPPos	pshm->P[19761]
#define	Unloader_In_StackPos	pshm->P[19762]
#define	FR_AnodePos	pshm->P[19763]
#define	FR_CathodePos	pshm->P[19764]
#define	Before_In_Stack	pshm->P[19765]
#define	In_Stack	pshm->P[19766]
#define	P_Collision_Risk_Motor(i)	pshm->P[(19767+i)%MAX_P]
#define	P_Minus_Collision_Risk_Motor	pshm->P[19769]
#define	P_IL_Clamp_Y	pshm->P[19770]
#define	P_IL_Clamp_Z	pshm->P[19771]
#define	P_IL_Clamp_Pos	pshm->P[19772]
#define	P_IL_Use_FR_Clamp_Pos	pshm->P[19773]
#define	P_P_IL_Normal_Pos_Offset(i)	pshm->P[(19774+i)%MAX_P]
#define	P_M_IL_Normal_Pos_Offset(i)	pshm->P[(19824+i)%MAX_P]
#define	P_P_IL_Upper_Pos_Offset(i)	pshm->P[(19874+i)%MAX_P]
#define	P_M_IL_Upper_Pos_Offset(i)	pshm->P[(19924+i)%MAX_P]
#define	P_P_IL_Align_Pos_Offset(i)	pshm->P[(19974+i)%MAX_P]
#define	P_M_IL_Align_Pos_Offset(i)	pshm->P[(20024+i)%MAX_P]
#define	P_P_IL_Stack_Pos_Offset(i)	pshm->P[(20074+i)%MAX_P]
#define	P_M_IL_Stack_Pos_Offset(i)	pshm->P[(20124+i)%MAX_P]
#define	P_Ca_1st_Plus_IL_Offset	pshm->P[20174]
#define	P_Ca_1st_Minus_IL_Offset	pshm->P[20175]
#define	P_An_1st_Plus_IL_Offset	pshm->P[20176]
#define	P_An_1st_Minus_IL_Offset	pshm->P[20177]
#define	P_Ca_2nd_T_Plus_IL_Offset(i)	pshm->P[(20178+i)%MAX_P]
#define	P_Ca_2nd_T_Minus_IL_Offset(i)	pshm->P[(20181+i)%MAX_P]
#define	P_Ca_2nd_Z_Plus_IL_Offset(i)	pshm->P[(20184+i)%MAX_P]
#define	P_Ca_2nd_Z_Minus_IL_Offset(i)	pshm->P[(20186+i)%MAX_P]
#define	P_An_2nd_T_Plus_IL_Offset(i)	pshm->P[(20188+i)%MAX_P]
#define	P_An_2nd_T_Minus_IL_Offset(i)	pshm->P[(20191+i)%MAX_P]
#define	P_An_2nd_Z_Minus_IL_Offset(i)	pshm->P[(20194+i)%MAX_P]
#define	P_Z_Pos_Data	pshm->P[20196]
#define	P_Clamp_Z_Plus_IL_Offset	pshm->P[20197]
#define	P_FR_X_Plus_IL_Offset(i)	pshm->P[(20198+i)%MAX_P]
#define	P_FR_X_Minus_IL_Offset(i)	pshm->P[(20200+i)%MAX_P]
#define	P_FR_Z_Minus_IL_Offset	pshm->P[20202]
#define	P_Ca_NG_PNP_Plus_IL_Offset(i)	pshm->P[(20203+i)%MAX_P]
#define	P_Ca_NG_PNP_Minus_IL_Offset(i)	pshm->P[(20207+i)%MAX_P]
#define	P_An_NG_PNP_Plus_IL_Offset(i)	pshm->P[(20211+i)%MAX_P]
#define	P_An_NG_PNP_Minus_IL_Offset(i)	pshm->P[(20215+i)%MAX_P]
#define	P_Unloader_X_Plus_IL_Offset(i)	pshm->P[(20219+i)%MAX_P]
#define	P_Unloader_X_Minus_IL_Offset(i)	pshm->P[(20223+i)%MAX_P]
#define	P_Unloader_Z_Plus_IL_Offset(i)	pshm->P[(20227+i)%MAX_P]
#define	P_Unloader_Z_Minus_IL_Offset(i)	pshm->P[(20230+i)%MAX_P]
#define	P_IL_In_Offset(i)	pshm->P[(20233+i)%MAX_P]
#define	P_X_PLC_InterLock	pshm->P[20258]
#define	P_IL_Home_Chk	pshm->P[20259]
#define	P_IL_Home_Chk_Motor_Num(i)	pshm->P[(20260+i)%MAX_P]
#define	P_IL_Home_Chk_Motor_Update	pshm->P[20280]
#define	P_IL_Inside_Home_Chk_Complete	pshm->P[20281]
#define	P_IL_Outside_Home_Chk_Complete	pshm->P[20282]
#define	P_IL_Motor_Home_Chk_RTN	pshm->P[20283]
#define	P_IL_Function_Cnt	pshm->P[20284]
#define	P_IL_Function_Motor_Num	pshm->P[20285]
#define	P_Anode_1st_TR_Belt_Down_Flag	pshm->P[20286]
#define	P_Anode_1st_TR_Belt_Pick_Up_Flag	pshm->P[20287]
#define	P_Anode_1st_TR_Align_Down_Flag	pshm->P[20288]
#define	P_Anode_2nd_TR_Align_Pick_Up_Flag	pshm->P[20289]
#define	P_Anode_2nd_TR_Stack_Down_Flag	pshm->P[20290]
#define	P_Anode_NG_TR_Align_Pick_Up_Flag	pshm->P[20291]
#define	P_Anode_NG_TR_NG_Place_Down_Flag	pshm->P[20292]
#define	P_Anode_2nd_TR_Align_Down_Flag	pshm->P[20293]
#define	P_Anode_1st_TR_Align_Pick_Up_Flag	pshm->P[20294]
#define	P_Anode_1st_TR_Belt_Down_State_Machine	pshm->P[20295]
#define	P_Anode_1st_TR_Belt_Down_Status	pshm->P[20296]
#define	P_Anode_1st_TR_Belt_Pick_Up_State_Machine	pshm->P[20297]
#define	P_Anode_1st_TR_Belt_Pick_Up_Status	pshm->P[20298]
#define	P_Anode_1st_TR_Align_Down_State_Machine	pshm->P[20299]
#define	P_Anode_1st_TR_Align_Down_Status	pshm->P[20300]
#define	P_Anode_2nd_TR_Align_Pick_Up_State_Machine	pshm->P[20301]
#define	P_Anode_2nd_TR_Align_Pick_Up_Status	pshm->P[20302]
#define	P_Anode_2nd_TR_Stack_Down_State_Machine	pshm->P[20303]
#define	P_Anode_2nd_TR_Stack_Down_Status	pshm->P[20304]
#define	P_Anode_NG_TR_Align_Pick_Up_State_Machine	pshm->P[20305]
#define	P_Anode_NG_TR_Align_Pick_Up_Status	pshm->P[20306]
#define	P_Anode_NG_TR_NG_Place_Down_State_Machine	pshm->P[20307]
#define	P_Anode_NG_TR_NG_Place_Down_Status	pshm->P[20308]
#define	P_Anode_2nd_TR_Align_Down_State_Machine	pshm->P[20309]
#define	P_Anode_2nd_TR_Align_Down_Status	pshm->P[20310]
#define	P_Anode_1st_TR_Align_Pick_Up_State_Machine	pshm->P[20311]
#define	P_Anode_1st_TR_Align_Pick_Up_Status	pshm->P[20312]
#define	P_Cathode_1st_TR_Belt_Down_Flag	pshm->P[20313]
#define	P_Cathode_1st_TR_Belt_Pick_Up_Flag	pshm->P[20314]
#define	P_Cathode_1st_TR_Align_Down_Flag	pshm->P[20315]
#define	P_Cathode_2nd_TR_Align_Pick_Up_Flag	pshm->P[20316]
#define	P_Cathode_2nd_TR_Stack_Down_Flag	pshm->P[20317]
#define	P_Cathode_NG_TR_Align_Pick_Up_Flag	pshm->P[20318]
#define	P_Cathode_NG_TR_NG_Place_Down_Flag	pshm->P[20319]
#define	P_Cathode_2nd_TR_Align_Down_Flag	pshm->P[20320]
#define	P_Cathode_1st_TR_Align_Pick_Up_Flag	pshm->P[20321]
#define	P_Cathode_1st_TR_Belt_Down_State_Machine	pshm->P[20322]
#define	P_Cathode_1st_TR_Belt_Down_Status	pshm->P[20323]
#define	P_Cathode_1st_TR_Belt_Pick_Up_State_Machine	pshm->P[20324]
#define	P_Cathode_1st_TR_Belt_Pick_Up_Status	pshm->P[20325]
#define	P_Cathode_1st_TR_Align_Down_State_Machine	pshm->P[20326]
#define	P_Cathode_1st_TR_Align_Down_Status	pshm->P[20327]
#define	P_Cathode_2nd_TR_Align_Pick_Up_State_Machine	pshm->P[20328]
#define	P_Cathode_2nd_TR_Align_Pick_Up_Status	pshm->P[20329]
#define	P_Cathode_2nd_TR_Stack_Down_State_Machine	pshm->P[20330]
#define	P_Cathode_2nd_TR_Stack_Down_Status	pshm->P[20331]
#define	P_Cathode_NG_TR_Align_Pick_Up_State_Machine	pshm->P[20332]
#define	P_Cathode_NG_TR_Align_Pick_Up_Status	pshm->P[20333]
#define	P_Cathode_NG_TR_NG_Place_Down_State_Machine	pshm->P[20334]
#define	P_Cathode_NG_TR_NG_Place_Down_Status	pshm->P[20335]
#define	P_Cathode_2nd_TR_Align_Down_State_Machine	pshm->P[20336]
#define	P_Cathode_2nd_TR_Align_Down_Status	pshm->P[20337]
#define	P_Cathode_1st_TR_Align_Pick_Up_State_Machine	pshm->P[20338]
#define	P_Cathode_1st_TR_Align_Pick_Up_Status	pshm->P[20339]
#define	P_Old_Anode_Belt_ASCII	pshm->P[20340]
#define	P_Old_Cathode_Belt_ASCII	pshm->P[20341]
#define	P_Anode_Belt_ASCII	pshm->P[20342]
#define	P_Cathode_Belt_ASCII	pshm->P[20343]
#define	P_Check_Vac_Time	pshm->P[20344]
#define	P_Send_Anode_NG_Code_To_PLC	pshm->P[20345]
#define	P_Receive_Anode_NG_Code_From_PLC	pshm->P[20346]
#define	P_Send_Cathode_NG_Code_To_PLC	pshm->P[20347]
#define	P_Receive_Cathode_NG_Code_From_PLC	pshm->P[20348]
#define	P_Current_Cell_Memory_Anode_1P	pshm->P[20349]
#define	P_Current_Cell_Memory_Anode_AT	pshm->P[20350]
#define	P_Current_Cell_Memory_Anode_2P	pshm->P[20351]
#define	P_Current_Cell_Memory_Cathode_1P	pshm->P[20352]
#define	P_Current_Cell_Memory_Cathode_AT	pshm->P[20353]
#define	P_Current_Cell_Memory_Cathode_2P	pshm->P[20354]
#define	P_Current_Cell_Memory_Stack_Table	pshm->P[20355]
#define	P_Current_Cell_Memory_Cathode_NG_TR	pshm->P[20356]
#define	P_Current_Cell_Memory_Anode_NG_TR	pshm->P[20357]
#define	P_BTN_Anode_1st_TR_Buffer_Clear	pshm->P[20358]
#define	P_BTN_Anode_2nd_TR_Buffer_Clear	pshm->P[20359]
#define	P_BTN_Anode_Align_Buffer_Clear	pshm->P[20360]
#define	P_BTN_Anode_NG_TR_Buffer_Clear	pshm->P[20361]
#define	P_BTN_Cathode_1st_TR_Buffer_Clear	pshm->P[20362]
#define	P_BTN_Cathode_2nd_TR_Buffer_Clear	pshm->P[20363]
#define	P_BTN_Cathode_Align_Buffer_Clear	pshm->P[20364]
#define	P_BTN_Cathode_NG_TR_Buffer_Clear	pshm->P[20365]
#define	P_Old_BTN_Anode_1st_TR_Buffer_Clear	pshm->P[20366]
#define	P_Old_BTN_Anode_2nd_TR_Buffer_Clear	pshm->P[20367]
#define	P_Old_BTN_Anode_Align_Buffer_Clear	pshm->P[20368]
#define	P_Old_BTN_Anode_NG_TR_Buffer_Clear	pshm->P[20369]
#define	P_Old_BTN_Cathode_1st_TR_Buffer_Clear	pshm->P[20370]
#define	P_Old_BTN_Cathode_2nd_TR_Buffer_Clear	pshm->P[20371]
#define	P_Old_BTN_Cathode_Align_Buffer_Clear	pshm->P[20372]
#define	P_Old_BTN_Cathode_NG_TR_Buffer_Clear	pshm->P[20373]
#define	P_Send_Anode_NG_Code_Flag	pshm->P[20374]
#define	P_Send_Cathode_NG_Code_Flag	pshm->P[20375]
#define	P_Anode_Vision_NG_To_PLC_Flag	pshm->P[20376]
#define	P_Cathode_Vision_NG_To_PLC_Flag	pshm->P[20377]
#define	P_Status_Clear_Sheet_Maint_Check	pshm->P[20378]
#define	P_Single_Run_Start_Flag	pshm->P[20379]
#define	P_Single_Run_Control_State_Machine	pshm->P[20380]
#define	P_Single_Run_Control_Status	pshm->P[20381]
#define	P_Single_Run_Execute_Bit	pshm->P[20382]
#define	P_User_Dry_Run_Mode	pshm->P[20383]
#define	P_Single_Run_State_Machine	pshm->P[20384]
#define	P_Single_Run_Status	pshm->P[20385]
#define	P_Single_Run_Unit	pshm->P[20386]
#define	P_Single_Run_Evade_Pos_RTN	pshm->P[20387]
#define	P_Single_Run_Evade_Pos_Check_RTN	pshm->P[20388]
#define	P_Single_Run_Pos_Rtn1	pshm->P[20389]
#define	P_Single_Run_Pos_Rtn2	pshm->P[20390]
#define	P_Single_Run_Motion_Ready_RTN	pshm->P[20391]
#define	P_Single_Run_Execution_Interlock_RTN	pshm->P[20392]
#define	P_Single_Run_Coord_Activate_RTN	pshm->P[20393]
#define	P_Single_Run_Coord_Activate_Check_RTN	pshm->P[20394]
#define	P_Single_Run_Select_Run_Mode_RTN	pshm->P[20395]
#define	P_Single_Run_Execution_Run_RTN	pshm->P[20396]
#define	P_Single_Run_Motion_Ready_State_Machine	pshm->P[20397]
#define	P_Coord_1	pshm->P[20398]
#define	P_Coord_2	pshm->P[20399]
#define	P_Coord_3	pshm->P[20400]
#define	P_Coord_4	pshm->P[20401]
#define	P_Final_Roll_Z_Motion_Flag	pshm->P[20402]
#define	P_Final_Roll_Z_Motion_State_Machine	pshm->P[20403]
#define	P_Main_Z_Motion_Flag	pshm->P[20404]
#define	P_Main_Z_Motion_State_Machine	pshm->P[20405]
#define	P_Single_Run_Mode_Flag	pshm->P[20406]
#define	P_Cathode_AT_Motion_Flag	pshm->P[20407]
#define	P_Cathode_Align_Motion_State_Machine	pshm->P[20408]
#define	P_Anode_AT_Motion_Flag	pshm->P[20409]
#define	P_Anode_Align_Motion_State_Machine	pshm->P[20410]
#define	P_Sheet_Paper_Motion_Flag	pshm->P[20411]
#define	P_Sheet_Paper_Motion_State_Machine	pshm->P[20412]
#define	P_Cathode_NG_PNP_T_Motion_Flag	pshm->P[20413]
#define	P_Cathode_NG_PNP_T_Motion_State_Machine	pshm->P[20414]
#define	P_Cathode_NG_PNP_Z_Motion_Flag	pshm->P[20415]
#define	P_Cathode_NG_PNP_Z_Motion_State_Machine	pshm->P[20416]
#define	P_Anode_NG_PNP_T_Motion_Flag	pshm->P[20417]
#define	P_Anode_NG_PNP_T_Motion_State_Machine	pshm->P[20418]
#define	P_Anode_NG_PNP_Z_Motion_Flag	pshm->P[20419]
#define	P_Anode_NG_PNP_Z_Motion_State_Machine	pshm->P[20420]
#define	P_1st_UND_X_Motion_Flag	pshm->P[20421]
#define	P_1st_UND_X_Motion_State_Machine	pshm->P[20422]
#define	P_1st_UND_Z_Motion_Flag	pshm->P[20423]
#define	P_1st_UND_Z_Motion_State_Machine	pshm->P[20424]
#define	P_1st_UND_T_Motion_Flag	pshm->P[20425]
#define	P_1st_UND_T_Motion_State_Machine	pshm->P[20426]
#define	P_Cathode_Run_Command_Flag	pshm->P[20427]
#define	P_Anode_Run_Command_Flag	pshm->P[20428]
#define	P_NG_PNP_Uint_Motion_Flag	pshm->P[20429]
#define	P_NG_PNP_Uint_State_Machine	pshm->P[20430]
#define	P_NG_PNP_Motion_Cnt	pshm->P[20431]
#define	P_NG_PNP_Motion_arr(i)	pshm->P[(20432+i)%MAX_P]
#define	P_Single_Run_Timer	pshm->P[20442]
#define	P_Single_Run_Align_Timer	pshm->P[20443]
#define	P_Single_Run_Align_Timer2	pshm->P[20444]
#define	P_Single_Run_Finall_Roll_Z_Timer	pshm->P[20445]
#define	P_Single_RuN_MAIN_Z_Timer	pshm->P[20446]
#define	P_Single_Run_Sheet_Paper_Timer	pshm->P[20447]
#define	P_Single_Run_Debug_SM	pshm->P[20448]
#define	P_Error_Monitoring_Count_1	pshm->P[20449]
#define	P_Error_Monitoring_Count_2	pshm->P[20450]
#define	P_Error_Monitoring_Count_3	pshm->P[20451]
#define	P_Error_Monitoring_Count_4	pshm->P[20452]
#define	P_Error_Monitoring_Count_5	pshm->P[20453]
#define	P_Old_Single_Run_Mode_Flag	pshm->P[20454]
#define	P_Old_Current_Mode	pshm->P[20455]
#define	P_Single_Run_Timebase_Off_RTN	pshm->P[20456]
#define	P_Single_Run_Stop_State_Machine	pshm->P[20457]
#define	P_Single_Run_Stop_Status	pshm->P[20458]
#define	P_Single_Run_Stop_Timer	pshm->P[20459]
#define	P_Single_Run_Stop_Init_RTN	pshm->P[20460]
#define	P_Single_Run_Stop_Btn_Chk	pshm->P[20461]
#define	P_Single_Run_Stop_Command	pshm->P[20462]
#define	P_Motor_Ready_Poa_Inpos_200um	pshm->P[20463]
#define	P_Ecat_Parameter_Write_Flag	pshm->P[20464]
#define	P_Ecat_Parameter_Read_Flag	pshm->P[20465]
#define	P_Ecat_Each_Parameter_Write_Flag	pshm->P[20466]
#define	P_Ecat_Slave_Idx	pshm->P[20467]
#define	P_Ec_Num	pshm->P[20468]
#define	P_Ecat_Read_Motor_Num	pshm->P[20469]
#define	P_Ecat_Write_Motor_Num	pshm->P[20470]
#define	P_Ecat_Parameter_Write_State_Machine	pshm->P[20471]
#define	P_Ecat_Parameter_Read_State_Machine	pshm->P[20472]
#define	P_Ecat_Each_Parameter_Write_State_Machine	pshm->P[20473]
#define	P_Ecat_Read_MNTR(i)	pshm->P[(20474+i)%MAX_P]
#define	P_Ecat_Write_MNTR(i)	pshm->P[(20502+i)%MAX_P]
#define	P_Ecat_Save_MNTR(i)	pshm->P[(20530+i)%MAX_P]
#define	P_Ecat_Error_MNTR(i)	pshm->P[(20546+i)%MAX_P]
#define	P_Ecat_Read_Error_MNTR(i)	pshm->P[(20562+i)%MAX_P]
#define	P_Ecat_Each_Write_Error_MNTR(i)	pshm->P[(20578+i)%MAX_P]
#define	P_Ecat_Write_Status	pshm->P[20594]
#define	P_Ecat_Read_Status	pshm->P[20595]
#define	P_Ecat_Each_Write_Status	pshm->P[20596]
#define	P_Pn000(i)	pshm->P[(20597+i)%MAX_P]
#define	P_Pn001(i)	pshm->P[(20617+i)%MAX_P]
#define	P_Pn00B(i)	pshm->P[(20637+i)%MAX_P]
#define	P_Pn100(i)	pshm->P[(20657+i)%MAX_P]
#define	P_Pn101(i)	pshm->P[(20677+i)%MAX_P]
#define	P_Pn102(i)	pshm->P[(20697+i)%MAX_P]
#define	P_Pn103(i)	pshm->P[(20717+i)%MAX_P]
#define	P_Pn123(i)	pshm->P[(20737+i)%MAX_P]
#define	P_Pn140(i)	pshm->P[(20757+i)%MAX_P]
#define	P_Pn141(i)	pshm->P[(20777+i)%MAX_P]
#define	P_Pn145(i)	pshm->P[(20797+i)%MAX_P]
#define	P_Pn146(i)	pshm->P[(20817+i)%MAX_P]
#define	P_Pn160(i)	pshm->P[(20837+i)%MAX_P]
#define	P_Pn161(i)	pshm->P[(20857+i)%MAX_P]
#define	P_Pn163(i)	pshm->P[(20877+i)%MAX_P]
#define	P_Pn170(i)	pshm->P[(20897+i)%MAX_P]
#define	P_Pn401(i)	pshm->P[(20917+i)%MAX_P]
#define	P_Pn408(i)	pshm->P[(20937+i)%MAX_P]
#define	P_Pn409(i)	pshm->P[(20957+i)%MAX_P]
#define	P_Pn40A(i)	pshm->P[(20977+i)%MAX_P]
#define	P_Pn40C(i)	pshm->P[(20997+i)%MAX_P]
#define	P_Pn40D(i)	pshm->P[(21017+i)%MAX_P]
#define	P_Pn416(i)	pshm->P[(21037+i)%MAX_P]
#define	P_Pn417(i)	pshm->P[(21057+i)%MAX_P]
#define	P_Pn511(i)	pshm->P[(21077+i)%MAX_P]
#define	P_Pn520(i)	pshm->P[(21097+i)%MAX_P]
#define	P_PnB02_Numerator(i)	pshm->P[(21117+i)%MAX_P]
#define	P_PnB02_Denominator(i)	pshm->P[(21137+i)%MAX_P]
#define	P_Align_Plus_Blow_Test	pshm->P[21157]
#define	P_System_Setting_Flag	pshm->P[21158]
#define	P_Ecat_Setting_Flag	pshm->P[21159]
#define	P_Ecat_Activation_State_Machine	pshm->P[21160]
#define	P_PLC31_Ecat_Retry_Cnt	pshm->P[21161]
#define	P_Ecat_Connect_Result	pshm->P[21162]
#define	P_Ecat_Slave_Error	pshm->P[21163]
#define	P_PWM_AbsPhasePosOffset_Change_State_Machine	pshm->P[21164]
#define	P_AbsPhasePosOffset_Change_Complete	pshm->P[21165]
#define	P_PWM_AbsPhasing_Fail	pshm->P[21166]
#define	P_PWM_AbsPhasing_Complete	pshm->P[21167]
#define	P_Whole_Stacking_Tack_Time	pshm->P[21168]
#define	P_Whole_Stacking_Tack_Time_Check	pshm->P[21169]
#define	P_Whole_Stacking_Tack_Timer_Check_Flag	pshm->P[21170]
#define	P_Whole_Stacking_Timer_Shift_Status_Machine	pshm->P[21171]
#define	P_Whole_Stacking_TackTime_Array0	pshm->P[21172]
#define	P_Whole_Stacking_TackTime_Array1	pshm->P[21173]
#define	P_Whole_Stacking_TackTime_Array2	pshm->P[21174]
#define	P_Whole_Stacking_TackTime_Array3	pshm->P[21175]
#define	P_Whole_Stacking_TackTime_Array4	pshm->P[21176]
#define	P_Whole_Stacking_TackTime_Array5	pshm->P[21177]
#define	P_Whole_Stacking_TackTime_Array6	pshm->P[21178]
#define	P_Whole_Stacking_TackTime_Array7	pshm->P[21179]
#define	P_Whole_Stacking_TackTime_Array8	pshm->P[21180]
#define	P_Whole_Stacking_TackTime_Array9	pshm->P[21181]
#define	P_Whole_Stacking_TackTime_Array10	pshm->P[21182]
#define	P_First_Stacking_Start	pshm->P[21183]
#define	P_Last_Stacking_Complete	pshm->P[21184]
#define	P_Stacking_Tack_Time	pshm->P[21185]
#define	P_Stacking_Tack_Time_Check	pshm->P[21186]
#define	P_Stacking_Tack_Timer_Check_Flag	pshm->P[21187]
#define	P_Stacking_Timer_Shift_Status_Machine	pshm->P[21188]
#define	P_Cathode_to_Anode_FR_Tack_Time_Check	pshm->P[21189]
#define	P_Anode_to_Cathode_FR_Tack_Time_Check	pshm->P[21190]
#define	P_Cathode_to_Anode_FR_Tack_Time_Start	pshm->P[21191]
#define	P_Anode_to_Cathode_FR_Tack_Time_Start	pshm->P[21192]
#define	P_Cathode_to_Anode_FR_Tack_Time_Complete	pshm->P[21193]
#define	P_Anode_to_Cathode_FR_Tack_Time_Complete	pshm->P[21194]
#define	P_Cathode_to_Anode_FR_Time	pshm->P[21195]
#define	P_Anode_to_Cathode_FR_Time	pshm->P[21196]
#define	P_Cathode_to_Anode_FR_Tack_Timer_Check_Flag	pshm->P[21197]
#define	P_Anode_to_Cathode_FR_Tack_Timer_Check_Flag	pshm->P[21198]
#define	P_Anode_Align_Table_Time	pshm->P[21199]
#define	P_Anode_Align_Table_Tack_Time_Check	pshm->P[21200]
#define	P_Anode_Align_Table_Tack_Timer_Check_Flag	pshm->P[21201]
#define	P_Anode_Align_Table_Timer_Shift_Status_Machine	pshm->P[21202]
#define	P_Anode_Align_Tack_Time_Start	pshm->P[21203]
#define	P_Anode_Align_Tack_Time_Complete	pshm->P[21204]
#define	P_Cathode_Align_Table_Time	pshm->P[21205]
#define	P_Cathode_Align_Table_Tack_Time_Check	pshm->P[21206]
#define	P_Cathode_Align_Table_Tack_Timer_Check_Flag	pshm->P[21207]
#define	P_Cathode_Align_Table_Timer_Shift_Status_Machine	pshm->P[21208]
#define	P_Cathode_Align_Tack_Time_Start	pshm->P[21209]
#define	P_Cathode_Align_Tack_Time_Complete	pshm->P[21210]
#define	P_Anode_1th_Tack_Time_Start	pshm->P[21211]
#define	P_Anode_1th_Tack_Time_Complete	pshm->P[21212]
#define	P_Anode_1th_Time	pshm->P[21213]
#define	P_Anode_1th_Tack_Time_Check	pshm->P[21214]
#define	P_Anode_1th_Tack_Timer_Check_Flag	pshm->P[21215]
#define	P_Anode_1th_Timer_Shift_Status_Machine	pshm->P[21216]
#define	P_Cathode_1th_Tack_Time_Start	pshm->P[21217]
#define	P_Cathode_1th_Tack_Time_Complete	pshm->P[21218]
#define	P_Cathode_1th_Time	pshm->P[21219]
#define	P_Cathode_1th_Tack_Time_Check	pshm->P[21220]
#define	P_Cathode_1th_Tack_Timer_Check_Flag	pshm->P[21221]
#define	P_Cathode_1th_Timer_Shift_Status_Machine	pshm->P[21222]
#define	P_Anode_2th_Tack_Time_Start	pshm->P[21223]
#define	P_Anode_2th_Tack_Time_Complete	pshm->P[21224]
#define	P_Anode_2th_Time	pshm->P[21225]
#define	P_Anode_2th_Tack_Time_Check	pshm->P[21226]
#define	P_Anode_2th_Tack_Timer_Check_Flag	pshm->P[21227]
#define	P_Anode_2th_Timer_Shift_Status_Machine	pshm->P[21228]
#define	P_Cathode_2th_Tack_Time_Start	pshm->P[21229]
#define	P_Cathode_2th_Tack_Time_Complete	pshm->P[21230]
#define	P_Cathode_2th_Time	pshm->P[21231]
#define	P_Cathode_2th_Tack_Time_Check	pshm->P[21232]
#define	P_Cathode_2th_Tack_Timer_Check_Flag	pshm->P[21233]
#define	P_Cathode_2th_Timer_Shift_Status_Machine	pshm->P[21234]
#define	P_Anode_1th_NG_Tack_Time_Start	pshm->P[21235]
#define	P_Anode_1th_NG_Tack_Time_Complete	pshm->P[21236]
#define	P_Anode_1th_NG_Time	pshm->P[21237]
#define	P_Anode_1th_NG_Tack_Time_Check	pshm->P[21238]
#define	P_Anode_1th_NG_Tack_Timer_Check_Flag	pshm->P[21239]
#define	P_Anode_1th_NG_Timer_Shift_Status_Machine	pshm->P[21240]
#define	P_Cathode_1th_NG_Tack_Time_Start	pshm->P[21241]
#define	P_Cathode_1th_NG_Tack_Time_Complete	pshm->P[21242]
#define	P_Cathode_1th_NG_Time	pshm->P[21243]
#define	P_Cathode_1th_NG_Tack_Time_Check	pshm->P[21244]
#define	P_Cathode_1th_NG_Tack_Timer_Check_Flag	pshm->P[21245]
#define	P_Cathode_1th_NG_Timer_Shift_Status_Machine	pshm->P[21246]
#define	P_Anode_Clamp_Tack_Time_Start	pshm->P[21247]
#define	P_Anode_Clamp_Tack_Time_Complete	pshm->P[21248]
#define	P_Anode_Clamp_Time	pshm->P[21249]
#define	P_Anode_Clamp_Tack_Time_Check	pshm->P[21250]
#define	P_Anode_Clamp_Tack_Timer_Check_Flag	pshm->P[21251]
#define	P_Anode_Clamp_Timer_Shift_Status_Machine	pshm->P[21252]
#define	P_Cathode_Clamp_Tack_Time_Start	pshm->P[21253]
#define	P_Cathode_Clamp_Tack_Time_Complete	pshm->P[21254]
#define	P_Cathode_Clamp_Time	pshm->P[21255]
#define	P_Cathode_Clamp_Tack_Time_Check	pshm->P[21256]
#define	P_Cathode_Clamp_Tack_Timer_Check_Flag	pshm->P[21257]
#define	P_Cathode_Clamp_Timer_Shift_Status_Machine	pshm->P[21258]
#define	P_Final_Roll_X_Timer_Shift_Status_Machine	pshm->P[21259]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array0	pshm->P[21260]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array1	pshm->P[21261]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array2	pshm->P[21262]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array3	pshm->P[21263]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array4	pshm->P[21264]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array5	pshm->P[21265]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array6	pshm->P[21266]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array7	pshm->P[21267]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array8	pshm->P[21268]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array9	pshm->P[21269]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array10	pshm->P[21270]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array0	pshm->P[21271]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array1	pshm->P[21272]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array2	pshm->P[21273]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array3	pshm->P[21274]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array4	pshm->P[21275]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array5	pshm->P[21276]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array6	pshm->P[21277]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array7	pshm->P[21278]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array8	pshm->P[21279]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array9	pshm->P[21280]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array10	pshm->P[21281]
#define	P_Pneumatic_Pressure_Unit_Tack_Time_Chk_Timer(i)	pshm->P[(21282+i)%MAX_P]
#define	P_Pneumatic_Pressure_Unit_Tack_Time(i)	pshm->P[(21309+i)%MAX_P]
#define	P_MCC_Anode_Align_NG_Count	pshm->P[21336]
#define	P_MCC_Cathode_Align_NG_Count	pshm->P[21337]
#define	P_MCC_Anode_Retry_NG_Count	pshm->P[21338]
#define	P_MCC_Cathode_Retry_NG_Count	pshm->P[21339]
#define	P_Discharge_Tact_Time_Arr(i)	pshm->P[(21340+i)%MAX_P]
#define	P_Discharge_Hold_Timer	pshm->P[21352]
#define	P_Discharge_Hold_Time	pshm->P[21353]
#define	P_AN_1st_Z_Zero_Angle	pshm->P[21354]
#define	P_AN_1st_Z_Zero_Length	pshm->P[21355]
#define	P_Anode_1st_PNP_Z_Crank_Zero_Pos	pshm->P[21356]
#define	P_Anode_1st_PNP_Z_Crank_real_Move_Pos	pshm->P[21357]
#define	P_Anode_1st_PNP_Z_Crank_radian	pshm->P[21358]
#define	P_Anode_1st_PNP_Z_Acos_denominator	pshm->P[21359]
#define	P_Anode_1st_PNP_Z_Acos_numerator	pshm->P[21360]
#define	P_Anode_1st_PNP_Z_Crank_Angle	pshm->P[21361]
#define	P_Anode_1st_PNP_Z_Real_Move_Pos	pshm->P[21362]
#define	P_Anode_1st_Fwd_Bwd_Rise	pshm->P[21363]
#define	P_CA_1st_Z_Zero_Angle	pshm->P[21364]
#define	P_CA_1st_Z_Zero_Length	pshm->P[21365]
#define	P_Cathode_1st_PNP_Z_Crank_Zero_Pos	pshm->P[21366]
#define	P_Cathode_1st_PNP_Z_Crank_real_Move_Pos	pshm->P[21367]
#define	P_Cathode_1st_PNP_Z_Crank_radian	pshm->P[21368]
#define	P_Cathode_1st_PNP_Z_Acos_denominator	pshm->P[21369]
#define	P_Cathode_1st_PNP_Z_Acos_numerator	pshm->P[21370]
#define	P_Cathode_1st_PNP_Z_Crank_Angle	pshm->P[21371]
#define	P_Cathode_1st_PNP_Z_Real_Move_Pos	pshm->P[21372]
#define	P_Cathode_1st_Fwd_Bwd_Rise	pshm->P[21373]
#define	P_AN_2nd_Z_Zero_Angle	pshm->P[21374]
#define	P_AN_2nd_Z_Zero_Length	pshm->P[21375]
#define	P_Anode_2nd_PNP_Z_Crank_Zero_Pos	pshm->P[21376]
#define	P_Anode_2nd_PNP_Z_Crank_real_Move_Pos	pshm->P[21377]
#define	P_Anode_2nd_PNP_Z_Crank_radian	pshm->P[21378]
#define	P_Anode_2nd_PNP_Z_Acos_denominator	pshm->P[21379]
#define	P_Anode_2nd_PNP_Z_Acos_numerator	pshm->P[21380]
#define	P_Anode_2nd_PNP_Z_Crank_Angle	pshm->P[21381]
#define	P_Anode_2nd_PNP_Z_Real_Move_Pos	pshm->P[21382]
#define	P_Anode_2nd_Fwd_Bwd_Rise	pshm->P[21383]
#define	P_CA_2nd_Z_Zero_Angle	pshm->P[21384]
#define	P_CA_2nd_Z_Zero_Length	pshm->P[21385]
#define	P_Cathode_2nd_PNP_Z_Crank_Zero_Pos	pshm->P[21386]
#define	P_Cathode_2nd_PNP_Z_Crank_real_Move_Pos	pshm->P[21387]
#define	P_Cathode_2nd_PNP_Z_Crank_radian	pshm->P[21388]
#define	P_Cathode_2nd_PNP_Z_Acos_denominator	pshm->P[21389]
#define	P_Cathode_2nd_PNP_Z_Acos_numerator	pshm->P[21390]
#define	P_Cathode_2nd_PNP_Z_Crank_Angle	pshm->P[21391]
#define	P_Cathode_2nd_PNP_Z_Real_Move_Pos	pshm->P[21392]
#define	P_Cathode_2nd_Fwd_Bwd_Rise	pshm->P[21393]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Ready_Up	pshm->P[21394]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Belt_Up	pshm->P[21395]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Belt_Down	pshm->P[21396]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Align_Up	pshm->P[21397]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Align_Down	pshm->P[21398]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Ready_Up	pshm->P[21399]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Up	pshm->P[21400]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Down	pshm->P[21401]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Align_Up	pshm->P[21402]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Align_Down	pshm->P[21403]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Align_Up	pshm->P[21404]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Align_Down	pshm->P[21405]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Up	pshm->P[21406]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Down	pshm->P[21407]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Ready_Up	pshm->P[21408]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Up	pshm->P[21409]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Down	pshm->P[21410]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Up	pshm->P[21411]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Down	pshm->P[21412]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Ready_Up	pshm->P[21413]
#define	P_PLC19_All_Home_Status	pshm->P[21414]
#define	P_PLC19_All_Home_Module_Status	pshm->P[21415]
#define	P_PLC19_All_Home_State_Machine	pshm->P[21416]
#define	P_PLC19_All_Home_Seq_Index	pshm->P[21417]
#define	P_PLC19_All_Home_Self_Index	pshm->P[21418]
#define	P_PLC19_All_Home_Set_Mode_Return	pshm->P[21419]
#define	P_PLC19_All_Home_Timer	pshm->P[21420]
#define	P_PLC19_All_Home_Tact_Time_Array(i)	pshm->P[(21421+i)%MAX_P]
#define	P_PLC19_All_Home_Tact_Time	pshm->P[21441]
#define	P_All_Home_Module_Error	pshm->P[21442]
#define	P_Act_ALL_Home_Time_Out_Time	pshm->P[21443]
#define	P_Act_ALL_Home_Time_Out(i)	pshm->P[(21444+i)%MAX_P]
#define	P_Act_Hold_Complete_Bit(i)	pshm->P[(21484+i)%MAX_P]
#define	P_Module_Act_Hold_Command_Array(i)	pshm->P[(21519+i)%MAX_P]
#define	P_OLD_Module_Act_Hold_Command_Array(i)	pshm->P[(21554+i)%MAX_P]
#define	P_Module_Act_Hold_State_Machine_Array(i)	pshm->P[(21589+i)%MAX_P]
#define	P_Act_Hold_Old_Time(i)	pshm->P[(21624+i)%MAX_P]
#define	P_Act_Hold_Time_Out_Time	pshm->P[21659]
#define	P_Act_Hold_Time_Out(i)	pshm->P[(21660+i)%MAX_P]
#define	P_First_PNP_T_Wait_Status	pshm->P[21695]
#define	P_First_PNP_Z_Wait_Status	pshm->P[21696]
#define	P_First_PNP_Picker_T_Turn_Status	pshm->P[21697]
#define	P_First_PNP_T_Wait_To_Belt_Status	pshm->P[21698]
#define	P_First_PNP_Z_Wait_To_Belt_Status	pshm->P[21699]
#define	P_First_PNP_T_Align_To_Belt_Status	pshm->P[21700]
#define	P_First_PNP_Z_Align_To_Belt_Status	pshm->P[21701]
#define	P_First_PNP_Z_Belt_Down_Status	pshm->P[21702]
#define	P_First_PNP_Z_Belt_Up_Status	pshm->P[21703]
#define	P_First_PNP_T_Wait_To_Align_Status	pshm->P[21704]
#define	P_First_PNP_Z_Wait_To_Align_Status	pshm->P[21705]
#define	P_First_PNP_T_Belt_To_Align_Status	pshm->P[21706]
#define	P_First_PNP_Z_Belt_To_Align_Status	pshm->P[21707]
#define	P_First_PNP_Z_Align_Down_Status	pshm->P[21708]
#define	P_First_PNP_Z_Align_Up_Status	pshm->P[21709]
#define	P_First_PNP_Vac_On_Status	pshm->P[21710]
#define	P_First_PNP_Blow_On_Status	pshm->P[21711]
#define	P_Second_PNP_T_Align_To_Stack_Status	pshm->P[21712]
#define	P_Second_PNP_Z_Align_To_Stack_Status	pshm->P[21713]
#define	P_Second_PNP_T_Stack_To_Align_Status	pshm->P[21714]
#define	P_Second_PNP_Z_Stack_To_Align_Status	pshm->P[21715]
#define	P_Second_PNP_Z_Align_Down_Status	pshm->P[21716]
#define	P_Second_PNP_Z_Align_Up_Status	pshm->P[21717]
#define	P_Second_PNP_Vac_On_Status	pshm->P[21718]
#define	P_Second_PNP_Blow_On_Status	pshm->P[21719]
#define	P_NG_PNP_NG_Bos_Status	pshm->P[21720]
#define	P_NG_PNP_Align_Status	pshm->P[21721]
#define	P_NG_PNP_Align_Down_Status	pshm->P[21722]
#define	P_NG_PNP_Align_Up_Status	pshm->P[21723]
#define	P_NG_PNP_Vac_On_Status	pshm->P[21724]
#define	P_NG_PNP_Blow_On_Status	pshm->P[21725]
#define	P_Hold_1st_PNP_Position	pshm->P[21726]
#define	P_Hold_Module_Error	pshm->P[21727]
#define	P_Act_Execute_Complete_Bit(i)	pshm->P[(21728+i)%MAX_P]
#define	P_Module_Act_Execute_Command_Array(i)	pshm->P[(21740+i)%MAX_P]
#define	P_OLD_Module_Act_Execute_Command_Array(i)	pshm->P[(21752+i)%MAX_P]
#define	P_Module_Act_Execute_State_Machine_Array(i)	pshm->P[(21764+i)%MAX_P]
#define	P_Act_Execute_Old_Time(i)	pshm->P[(21776+i)%MAX_P]
#define	P_Act_Execute_Time_Out_Time	pshm->P[21788]
#define	P_Act_Execute_Time_Out(i)	pshm->P[(21789+i)%MAX_P]
#define	P_Execute_Module_Error	pshm->P[21801]
#define	P_Execute_First_Sepa_Total_Tact_Time	pshm->P[21802]
#define	P_Current_JR_Thickness_mm	pshm->P[21803]
#define	P_Current_Jelly_Roll_Thinckness_mm_Send_Enable_Flag	pshm->P[21804]
#define	P_Stack_Table_NG_Flag	pshm->P[21805]
#define	P_Suspend_Discharge_Cell_Out_Restart	pshm->P[21806]
#define	P_Jelly_Roll_OK_Count	pshm->P[21807]
#define	P_Jelly_Roll_NG_Count	pshm->P[21808]
#define	P_Jelly_Roll_Total_Count	pshm->P[21809]
#define	P_Jelly_Roll_ID	pshm->P[21810]
#define	P_Jelly_Roll_Prod_Count	pshm->P[21811]
#define	P_Jelly_Roll_Recipe_Count	pshm->P[21812]
#define	P_Current_Cell_Memory_Jelly_Roll	pshm->P[21813]
#define	P_Real_Stacking_Host_ID_Count	pshm->P[21814]
#define	P_VISION_PLC10_Anode_Align_Start	pshm->P[21815]
#define	P_VISION_PLC10_Cathode_Align_Start	pshm->P[21816]
#define	P_Stack_Table_NG_Count	pshm->P[21817]
#define	P_Stack_PMAC_NG_Code	pshm->P[21818]
#define	P_Stack_Vision_NG_Code_IN_Timer	pshm->P[21819]
#define	P_Discharge_Waiting_Flag	pshm->P[21820]
#define	P_ARC_Flag	pshm->P[21821]
#define	P_Discharge_Queue_Complete_Flag	pshm->P[21822]
#define	P_Shared_Discharge_Cmd	pshm->P[21823]
#define	P_Shared_Discharge_State_Machine	pshm->P[21824]
#define	P_Discharge_Dont_Stop_Point_Flag	pshm->P[21825]
#define	P_1st_Discharge_State	pshm->P[21826]
#define	P_Discharge_DIO_Trg	pshm->P[21827]
#define	P_Data_Parsing_Flag	pshm->P[21828]
#define	P_Memory_Discharge_Data	pshm->P[21829]
#define	P_Prev_Sepa_Stack_Completed_Flag	pshm->P[21830]
#define	P_First_Sepa_Mode_Status	pshm->P[21831]
#define	P_First_Sepa_Mode_Flag	pshm->P[21832]
#define	P_Discharge_Unloader_Handover_Timer	pshm->P[21833]
#define	P_Discharge_Unloader_Handover_Time	pshm->P[21834]
#define	P_B_1st_to_3rd_Discharge_cmd	pshm->P[21835]
#define	P_B_1st_to_3rd_Discharge_State_Machine	pshm->P[21836]
#define	P_3rd_Discharge_Status	pshm->P[21837]
#define	P_Buffer_Mode_Module_Status_Sequence(i)	pshm->P[(21838+i)%MAX_P]
#define	P_EXECUTE_Status_Prod_Sequence(i)	pshm->P[(21868+i)%MAX_P]
#define	P_Execute_First_Sepa_Mode_Cmd	pshm->P[21898]
#define	P_Execute_First_Sepa_Mode_Status	pshm->P[21899]
#define	P_Execute_First_Sepa_Mode_Module_Status	pshm->P[21900]
#define	P_Execute_First_Sepa_Mode_State_Machine	pshm->P[21901]
#define	P_Execute_First_Sepa_Mode_Seq_Index	pshm->P[21902]
#define	P_Execute_First_Sepa_Mode_Self_Index	pshm->P[21903]
#define	P_Execute_First_Sepa_Mode_Debug_Edge	pshm->P[21904]
#define	P_Buffer_Seqdata_Execute_First_Sepa_Mode_Array(i)	pshm->P[(21905+i)%MAX_P]
#define	P_Execute_First_Sepa_Mode_Timer	pshm->P[21935]
#define	P_Execute_First_Sepa_Mode_Tact_Time_Array(i)	pshm->P[(21936+i)%MAX_P]
#define	P_Execute_First_Sepa_Mode_Tact_Time	pshm->P[21956]
#define	P_Execute_1st_Sepa_Status	pshm->P[21957]
#define	P_Suspend_Discharge_Cmd	pshm->P[21958]
#define	P_Suspend_Discharge_Status	pshm->P[21959]
#define	P_Suspend_Discharge_State_Machine	pshm->P[21960]
#define	P_Suspend_Discharge_Seq_Index	pshm->P[21961]
#define	P_Suspend_Discharge_Self_Index	pshm->P[21962]
#define	P_Discharge_Seq_InterLock_Delay_Time(i)	pshm->P[(21963+i)%MAX_P]
#define	P_Discharge_Seq_InterLock_Flag(i)	pshm->P[(21993+i)%MAX_P]
#define	P_Buffer_Seqdata_Discharge_Array(i)	pshm->P[(22023+i)%MAX_P]
#define	P_Suspend_Discharge_Timer	pshm->P[22053]
#define	P_Suspend_Discharge_Tact_Time_Array(i)	pshm->P[(22054+i)%MAX_P]
#define	P_Suspend_Discharge_Tact_Time	pshm->P[22074]
#define	P_Suspend_Discharge_1st_Unloader_JR_Grip	pshm->P[22075]
#define	P_Suspend_ARC_Cmd	pshm->P[22076]
#define	P_Suspend_ARC_Status	pshm->P[22077]
#define	P_Suspend_ARC_State_Machine	pshm->P[22078]
#define	P_Suspend_ARC_Seq_Index	pshm->P[22079]
#define	P_Suspend_ARC_Self_Index	pshm->P[22080]
#define	P_Suspend_ARC_Manual_Occur_Flag	pshm->P[22081]
#define	P_ARC_Seq_InterLock_Delay_Time(i)	pshm->P[(22082+i)%MAX_P]
#define	P_ARC_Seq_InterLock_Flag(i)	pshm->P[(22112+i)%MAX_P]
#define	P_Buffer_Seqdata_ARC_Array(i)	pshm->P[(22142+i)%MAX_P]
#define	P_Suspend_ARC_Timer	pshm->P[22172]
#define	P_Suspend_ARC_Tact_Time_Array(i)	pshm->P[(22173+i)%MAX_P]
#define	P_Suspend_ARC_Tact_Time	pshm->P[22193]
#define	P_Suspend_Anode_1TR_Cell_Supply_Cmd	pshm->P[22194]
#define	P_Suspend_Anode_1TR_Cell_Supply_Status	pshm->P[22195]
#define	P_Suspend_Anode_1TR_Cell_Supply_State_Machine	pshm->P[22196]
#define	P_Suspend_Anode_1TR_Cell_Supply_Seq_Index	pshm->P[22197]
#define	P_Suspend_Anode_1TR_Cell_Supply_Self_Index	pshm->P[22198]
#define	P_Suspend_Anode_1TR_Cell_Supply_Module_Status	pshm->P[22199]
#define	P_Anode_1TR_Cell_Supply_Seq_InterLock_Delay_Time(i)	pshm->P[(22200+i)%MAX_P]
#define	P_Anode_1TR_Cell_Supply_Seq_InterLock_Flag(i)	pshm->P[(22230+i)%MAX_P]
#define	P_Buffer_Seqdata_Anode_1TR_Cell_Supply_Array(i)	pshm->P[(22260+i)%MAX_P]
#define	P_Suspend_Anode_1TR_Cell_Supply_Timer	pshm->P[22290]
#define	P_Suspend_Anode_1TR_Cell_Supply_Tact_Time_Array(i)	pshm->P[(22291+i)%MAX_P]
#define	P_Suspend_Anode_1TR_Cell_Supply_Tact_Time	pshm->P[22311]
#define	P_Hold_Exist_Insp_Cmd	pshm->P[22312]
#define	P_Hold_Exist_Insp_Status	pshm->P[22313]
#define	P_Hold_Exist_Insp_Module_Status	pshm->P[22314]
#define	P_Hold_Exist_Insp_State_Machine	pshm->P[22315]
#define	P_Hold_Exist_Insp_Seq_Index	pshm->P[22316]
#define	P_Hold_Exist_Insp_Self_Index	pshm->P[22317]
#define	P_Hold_Exist_Insp_Debug_Edge	pshm->P[22318]
#define	P_Buffer_Seqdata_Hold_Exist_Insp_Array(i)	pshm->P[(22319+i)%MAX_P]
#define	P_Hold_Exist_Insp_Timer	pshm->P[22349]
#define	P_Hold_Exist_Insp_Tact_Time_Array(i)	pshm->P[(22350+i)%MAX_P]
#define	P_Hold_Exist_Insp_Tact_Time	pshm->P[22370]
#define	P_Hold_Remove_NG_PNP_Cmd	pshm->P[22371]
#define	P_Hold_Remove_NG_PNP_Status	pshm->P[22372]
#define	P_Hold_Remove_NG_PNP_Module_Status	pshm->P[22373]
#define	P_Hold_Remove_NG_PNP_State_Machine	pshm->P[22374]
#define	P_Hold_Remove_NG_PNP_Seq_Index	pshm->P[22375]
#define	P_Hold_Remove_NG_PNP_Self_Index	pshm->P[22376]
#define	P_Hold_Remove_NG_PNP_Debug_Edge	pshm->P[22377]
#define	P_Buffer_Seqdata_Hold_Remove_NG_PNP_Array(i)	pshm->P[(22378+i)%MAX_P]
#define	P_Hold_Remove_NG_PNP_Timer	pshm->P[22408]
#define	P_Hold_Remove_NG_PNP_Tact_Time_Array(i)	pshm->P[(22409+i)%MAX_P]
#define	P_Hold_Remove_NG_PNP_Tact_Time	pshm->P[22429]
#define	P_PLC01_Hold_Remove_NG_PNP_Sub_Flag	pshm->P[22430]
#define	P_PLC01_Hold_Remove_NG_PNP_Sub_State_Machine	pshm->P[22431]
#define	P_PLC01_Hold_Remove_NG_PNP_Sub_Status	pshm->P[22432]
#define	P_Hold_Remove_Align_Cmd	pshm->P[22433]
#define	P_Hold_Remove_Align_Status	pshm->P[22434]
#define	P_Hold_Remove_Align_Module_Status	pshm->P[22435]
#define	P_Hold_Remove_Align_State_Machine	pshm->P[22436]
#define	P_Hold_Remove_Align_Seq_Index	pshm->P[22437]
#define	P_Hold_Remove_Align_Self_Index	pshm->P[22438]
#define	P_Hold_Remove_Align_Debug_Edge	pshm->P[22439]
#define	P_Buffer_Seqdata_Hold_Remove_Align_Array(i)	pshm->P[(22440+i)%MAX_P]
#define	P_Hold_Remove_Align_Timer	pshm->P[22470]
#define	P_Hold_Remove_Align_Tact_Time_Array(i)	pshm->P[(22471+i)%MAX_P]
#define	P_Hold_Remove_Align_Tact_Time	pshm->P[22491]
#define	P_PLC01_Hold_Remove_Align_Sub_Flag	pshm->P[22492]
#define	P_PLC01_Hold_Remove_Align_Sub_State_Machine	pshm->P[22493]
#define	P_PLC01_Hold_Remove_Align_Sub_Status	pshm->P[22494]
#define	P_Hold_Remove_2TR_Cmd	pshm->P[22495]
#define	P_Hold_Remove_2TR_Status	pshm->P[22496]
#define	P_Hold_Remove_2TR_Module_Status	pshm->P[22497]
#define	P_Hold_Remove_2TR_State_Machine	pshm->P[22498]
#define	P_Hold_Remove_2TR_Seq_Index	pshm->P[22499]
#define	P_Hold_Remove_2TR_Self_Index	pshm->P[22500]
#define	P_Hold_Remove_2TR_Debug_Edge	pshm->P[22501]
#define	P_Buffer_Seqdata_Hold_Remove_2TR_Array(i)	pshm->P[(22502+i)%MAX_P]
#define	P_Hold_Remove_2TR_Timer	pshm->P[22532]
#define	P_Hold_Remove_2TR_Tact_Time_Array(i)	pshm->P[(22533+i)%MAX_P]
#define	P_Hold_Remove_2TR_Tact_Time	pshm->P[22553]
#define	P_Hold_Supply_1TR_Cmd	pshm->P[22554]
#define	P_Hold_Supply_1TR_Status	pshm->P[22555]
#define	P_Hold_Supply_1TR_Module_Status	pshm->P[22556]
#define	P_Hold_Supply_1TR_State_Machine	pshm->P[22557]
#define	P_Hold_Supply_1TR_Seq_Index	pshm->P[22558]
#define	P_Hold_Supply_1TR_Self_Index	pshm->P[22559]
#define	P_Hold_Supply_1TR_Debug_Edge	pshm->P[22560]
#define	P_Buffer_Seqdata_Hold_Supply_1TR_Array(i)	pshm->P[(22561+i)%MAX_P]
#define	P_Hold_Supply_1TR_Timer	pshm->P[22591]
#define	P_Hold_Supply_1TR_Tact_Time_Array(i)	pshm->P[(22592+i)%MAX_P]
#define	P_Hold_Supply_1TR_Tact_Time	pshm->P[22612]
#define	P_PLC01_Hold_Supply_1TR_Memory_RTN	pshm->P[22613]
#define	P_PLC01_Hold_Supply_1TR_Judge_Flag	pshm->P[22614]
#define	P_PLC01_Hold_Supply_1TR_Judge_State_Machine	pshm->P[22615]
#define	P_PLC01_Hold_Supply_1TR_Judge_Status	pshm->P[22616]
#define	P_Plate_1TR_Supply_Module_Judge_Bit	pshm->P[22617]
#define	P_Hold_Supply_Align_Cmd	pshm->P[22618]
#define	P_Hold_Supply_Align_Status	pshm->P[22619]
#define	P_Hold_Supply_Align_Module_Status	pshm->P[22620]
#define	P_Hold_Supply_Align_State_Machine	pshm->P[22621]
#define	P_Hold_Supply_Align_Seq_Index	pshm->P[22622]
#define	P_Hold_Supply_Align_Self_Index	pshm->P[22623]
#define	P_Hold_Supply_Align_Debug_Edge	pshm->P[22624]
#define	P_Buffer_Seqdata_Hold_Supply_Align_Array(i)	pshm->P[(22625+i)%MAX_P]
#define	P_Hold_Supply_Align_Timer	pshm->P[22655]
#define	P_Hold_Supply_Align_Tact_Time_Array(i)	pshm->P[(22656+i)%MAX_P]
#define	P_Hold_Supply_Align_Tact_Time	pshm->P[22676]
#define	P_Hold_Supply_2TR_Cmd	pshm->P[22677]
#define	P_Hold_Supply_2TR_Status	pshm->P[22678]
#define	P_Hold_Supply_2TR_Module_Status	pshm->P[22679]
#define	P_Hold_Supply_2TR_State_Machine	pshm->P[22680]
#define	P_Hold_Supply_2TR_Seq_Index	pshm->P[22681]
#define	P_Hold_Supply_2TR_Self_Index	pshm->P[22682]
#define	P_Hold_Supply_2TR_Debug_Edge	pshm->P[22683]
#define	P_Buffer_Seqdata_Hold_Supply_2TR_Array(i)	pshm->P[(22684+i)%MAX_P]
#define	P_Hold_Supply_2TR_Timer	pshm->P[22714]
#define	P_Hold_Supply_2TR_Tact_Time_Array(i)	pshm->P[(22715+i)%MAX_P]
#define	P_Hold_Supply_2TR_Tact_Time	pshm->P[22735]
#define	P_Hold_Semi_Run_Pos_Move_Cmd	pshm->P[22736]
#define	P_Hold_Semi_Run_Pos_Move_Status	pshm->P[22737]
#define	P_Hold_Semi_Run_Pos_Move_Module_Status	pshm->P[22738]
#define	P_Hold_Semi_Run_Pos_Move_State_Machine	pshm->P[22739]
#define	P_Hold_Semi_Run_Pos_Move_Seq_Index	pshm->P[22740]
#define	P_Hold_Semi_Run_Pos_Move_Self_Index	pshm->P[22741]
#define	P_Hold_Semi_Run_Pos_Move_Debug_Edge	pshm->P[22742]
#define	P_Buffer_Seqdata_Hold_Semi_Run_Pos_Move_Array(i)	pshm->P[(22743+i)%MAX_P]
#define	P_Hold_Semi_Run_Pos_Move_Timer	pshm->P[22773]
#define	P_Hold_Semi_Run_Pos_Move_Tact_Time_Array(i)	pshm->P[(22774+i)%MAX_P]
#define	P_Hold_Semi_Run_Pos_Move_Tact_Time	pshm->P[22794]
#define	P_Act_Complete_Bit(i)	pshm->P[(22795+i)%MAX_P]
#define	P_Act_Old_Time(i)	pshm->P[(22861+i)%MAX_P]
#define	P_Act_Delay_Time(i)	pshm->P[(22927+i)%MAX_P]
#define	P_Act_Suspend_Time_Out_Time	pshm->P[22993]
#define	P_Act_Time_Out(i)	pshm->P[(22994+i)%MAX_P]
#define	P_Test_Sungmin_Flag	pshm->P[23060]
#define	P_Discharge_Possibility_Bit(i)	pshm->P[(23061+i)%MAX_P]
#define	P_HOLD_Exist_Possibility_Bit(i)	pshm->P[(23127+i)%MAX_P]
#define	P_HOLD_NG_Remove_Possibility_Bit(i)	pshm->P[(23193+i)%MAX_P]
#define	P_HOLD_Align_Remove_Possibility_Bit(i)	pshm->P[(23259+i)%MAX_P]
#define	P_HOLD_2TR_Remove_Possibility_Bit(i)	pshm->P[(23325+i)%MAX_P]
#define	P_HOLD_1TR_Supply_Possibility_Bit(i)	pshm->P[(23391+i)%MAX_P]
#define	P_HOLD_Align_Supply_Possibility_Bit(i)	pshm->P[(23457+i)%MAX_P]
#define	P_HOLD_2TR_Supply_Possibility_Bit(i)	pshm->P[(23523+i)%MAX_P]
#define	P_HOLD_Semi_Run_Pos_Possibility_Bit(i)	pshm->P[(23589+i)%MAX_P]
#define	P_Module_Act_Command_Array(i)	pshm->P[(23655+i)%MAX_P]
#define	P_OLD_Module_Act_Command_Array(i)	pshm->P[(23721+i)%MAX_P]
#define	P_Module_Act_State_Machine_Array(i)	pshm->P[(23787+i)%MAX_P]
#define	P_Module_Act_State_Machine_Error_Array(i)	pshm->P[(23853+i)%MAX_P]
#define	P_Suspend_Discharge_Module_Status	pshm->P[23919]
#define	P_Suspend_Discharge_To_Execute_Flag	pshm->P[23920]
#define	P_Suspend_Discharge_Complete_Flag	pshm->P[23921]
#define	P_First_Unloader_Stack_Up_Status	pshm->P[23922]
#define	P_First_Unloader_Stack_FWD_Status	pshm->P[23923]
#define	P_First_Unloader_Grip_Cell_Status	pshm->P[23924]
#define	P_First_Unloader_Stack_BWD_Wait_Status	pshm->P[23925]
#define	P_First_Unloader_Stack_BWD_Status	pshm->P[23926]
#define	P_First_Unloader_Stack_Down_Status	pshm->P[23927]
#define	P_First_Unloader_Avoid_Status	pshm->P[23928]
#define	P_First_Unloader_Turn_Status	pshm->P[23929]
#define	P_First_Unloader_Handover_Status	pshm->P[23930]
#define	P_Cathode_Clamp_OFF_Status	pshm->P[23931]
#define	P_Final_Roll_Discharge_Status	pshm->P[23932]
#define	P_Final_Roll_Stack_Pos_Status	pshm->P[23933]
#define	P_Final_Roll_Stack_Up_Pos_Status	pshm->P[23934]
#define	P_Main_Z_Init_Pos_Status	pshm->P[23935]
#define	P_Sheet_Paper_BWD_Status	pshm->P[23936]
#define	P_Discharge_Vision_DIO_RTN	pshm->P[23937]
#define	P_Discharge_Sub_RTN	pshm->P[23938]
#define	P_Discharge_NG_Code_Report_RTN	pshm->P[23939]
#define	P_Individual_RTN	pshm->P[23940]
#define	P_Suspend_Discharge_Last_Run_Bit	pshm->P[23941]
#define	P_Suspend_Discharge_JR_Result_RTN	pshm->P[23942]
#define	P_ARC_Buffer_Jog_Speed	pshm->P[23943]
#define	P_Selected_Spool_Number	pshm->P[23944]
#define	P_ARC_Home_Check_RTN	pshm->P[23945]
#define	P_Suspend_ARC_Module_Status	pshm->P[23946]
#define	P_Not_Selected_Spool_Radius	pshm->P[23947]
#define	P_Not_Selected_Spool_Circumference	pshm->P[23948]
#define	P_Sensor_To_Sepa_Curr_Distance_mm(i)	pshm->P[(23949+i)%MAX_P]
#define	P_Passive_D_One_Degree_AD_Value	pshm->P[23974]
#define	P_After_ARC_Rotate_Distance	pshm->P[23975]
#define	P_Stack_Vision_NG_Code_Time_Over	pshm->P[23976]
#define	P_Suspend_Discharge_Resume_Flag	pshm->P[23977]
#define	P_Suspend_Discharge_Resume_Complete	pshm->P[23978]
#define	P_Suspend_Discharge_Pause_Flag	pshm->P[23979]
#define	P_Suspend_Monitor_(i)	pshm->P[(23980+i)%MAX_P]
#define	P_Flag_Stack_Work_Host_ID	pshm->P[23990]
#define	P_First_Sepa_Stack_Align_OK_PMAC_Flag	pshm->P[23991]
#define	P_Sepa_Run_Completed_Status_Machine	pshm->P[23992]
#define	P_Discharge_Debug_Edge	pshm->P[23993]
#define	P_Suspend_Discharge_Debug_Address(i)	pshm->P[(23994+i)%MAX_P]
#define	P_Suspend_Discharge_Debug_Value(i)	pshm->P[(23999+i)%MAX_P]
#define	P_Discharge_Sepa_Cutter_Time_Out_State_Machine	pshm->P[24004]
#define	P_Old_Suspend_Discharge_Seq_Index	pshm->P[24005]
#define	P_Discharge_Debug_Index_1	pshm->P[24006]
#define	P_Discharge_Debug_Index_2	pshm->P[24007]
#define	P_Discharge_Debug_Index_3	pshm->P[24008]
#define	P_Discharge_Debug_Index_4	pshm->P[24009]
#define	P_ARC_Debug_Edge	pshm->P[24010]
#define	P_Suspend_ARC_Debug_Address(i)	pshm->P[(24011+i)%MAX_P]
#define	P_Suspend_ARC_Debug_Value(i)	pshm->P[(24016+i)%MAX_P]
#define	P_Old_Suspend_ARC_Seq_Index	pshm->P[24021]
#define	P_ARC_Debug_Index_1	pshm->P[24022]
#define	P_ARC_Debug_Index_2	pshm->P[24023]
#define	P_ARC_Debug_Index_3	pshm->P[24024]
#define	P_ARC_Debug_Index_4	pshm->P[24025]
#define	P_ARC_Ready_Flag(i)	pshm->P[(24026+i)%MAX_P]
#define	P_Suspend_Cutter_Heating_Time	pshm->P[24028]
#define	P_Suspend_Cutter_Heating_Timer	pshm->P[24029]
#define	P_An_1TR_Supply_Debug_Edge	pshm->P[24030]
#define	P_Suspend_An_1TR_Supply_Debug_Address(i)	pshm->P[(24031+i)%MAX_P]
#define	P_Suspend_An_1TR_Supply_Debug_Value(i)	pshm->P[(24036+i)%MAX_P]
#define	P_Old_Suspend_An_1TR_Supply_Seq_Index	pshm->P[24041]
#define	P_An_1TR_Supply_Debug_Index_1	pshm->P[24042]
#define	P_An_1TR_Supply_Debug_Index_2	pshm->P[24043]
#define	P_An_1TR_Supply_Debug_Index_3	pshm->P[24044]
#define	P_An_1TR_Supply_Debug_Index_4	pshm->P[24045]
#define	P_Suspend_Supply_Index	pshm->P[24046]
#define	P_Suspend_Supply_Index_2nd	pshm->P[24047]
#define	P_Anode_Suspend_Supply_Complete(i)	pshm->P[(24048+i)%MAX_P]
#define	P_Suspend_Supply_Pause_Flag	pshm->P[24056]
#define	P_Suspend_Supply_Resume_Flag	pshm->P[24057]
#define	P_Supply_Module_Status	pshm->P[24058]
#define	P_Suspend_Anode_1TR_Supply_Complete_Flag	pshm->P[24059]
#define	P_Suspend_Discharge_Module_Error	pshm->P[24060]
#define	P_Suspend_ARC_Module_Error	pshm->P[24061]
#define	P_Suspend_1st_Supply_Error	pshm->P[24062]
#define	P_Discharge_Seq_Data	pshm->P[24063]
#define	P_Suspend_Discharging_Popup_Flag	pshm->P[24064]
#define	P_Suspend_Discharge_FR_Unclamp_Error_Popup_Flag	pshm->P[24065]
#define	P_Suspend_Discharge_Cathode_Align_Retry_Cal_Error_Popup_Flag	pshm->P[24066]
#define	P_Suspend_Discharge_Anode_Align_Retry_Cal_Error_Popup_Flag	pshm->P[24067]
#define	P_Suspend_Discharge_FR_Discharge_Pos_Error_Popup_Flag	pshm->P[24068]
#define	P_Suspend_Discharge_1st_Unloader_Grip_OFF_Error_Popup_Flag	pshm->P[24069]
#define	P_Suspend_Discharge_1st_Unloader_Up_Error_Popup_Flag	pshm->P[24070]
#define	P_Suspend_Discharge_1st_Unloader_FWD_Error_Popup_Flag	pshm->P[24071]
#define	P_Suspend_Discharge_FR_Clamp_Error_Popup_Flag	pshm->P[24072]
#define	P_Suspend_Discharge_Sepa_Cutter_Heating_Error_Popup_Flag	pshm->P[24073]
#define	P_Suspend_Discharge_1st_Unloader_Grip_Cell_Pos_Error_Popup_Flag	pshm->P[24074]
#define	P_Suspend_Discharge_1st_Unloader_Grip_ON_Error_Popup_Flag	pshm->P[24075]
#define	P_Suspend_Discharge_Sheet_Paper_BWD_Error_Popup_Flag	pshm->P[24076]
#define	P_Suspend_Discharge_Cathode_Clamp_OFF_Error_Popup_Flag	pshm->P[24077]
#define	P_Suspend_Discharge_Sepa_Cutter_FWD_Error_Popup_Flag	pshm->P[24078]
#define	P_Suspend_Discharge_Sheet_Paper_Vacuum_ON_Error_Popup_Flag	pshm->P[24079]
#define	P_Suspend_Discharge_Sepa_Cutter_BWD_Error_Popup_Flag	pshm->P[24080]
#define	P_Suspend_Discharge_1st_Unloader_BWD_Wait_Pos_Error_Popup_Flag	pshm->P[24081]
#define	P_Suspend_Discharge_1st_Unloader_BWD_Error_Popup_Flag	pshm->P[24082]
#define	P_Suspend_Discharge_1st_Unloader_Stack_Down_Error_Popup_Flag	pshm->P[24083]
#define	P_Suspend_Discharge_FR_Stack_Pos_Error_Popup_Flag	pshm->P[24084]
#define	P_Suspend_Discharge_After_Action_Init_Error_Popup_Flag	pshm->P[24085]
#define	P_Suspend_Discharge_1st_Unloader_Avoid_Pos_Error_Popup_Flag	pshm->P[24086]
#define	P_Suspend_Discharge_1st_2nd_Unloader_Handover_Chk_Error_Popup_Flag	pshm->P[24087]
#define	P_Suspend_Discharge_1st_Unloader_Handover_Pos_Error_Popup_Flag	pshm->P[24088]
#define	P_Suspend_Discharge_2nd_3rd_Unloader_Grip_Request_Error_Popup_Flag	pshm->P[24089]
#define	P_Suspend_Discharge_1st_Unloader_Wait_Pos_Error_Popup_Flag	pshm->P[24090]
#define	P_Suspend_ARC_Manual_ARC_Active_Popup_Flag	pshm->P[24091]
#define	P_Suspend_ARC_Auto_ARC_Active_Popup_Flag	pshm->P[24092]
#define	P_Suspend_ARC_Pre_Act_Popup_Flag	pshm->P[24093]
#define	P_Suspend_ARC_Dancer_Close_Popup_Flag	pshm->P[24094]
#define	P_Suspend_ARC_Use_Plate_FWD_Popup_Flag	pshm->P[24095]
#define	P_Suspend_ARC_Replace_Plate_Blow_ON_Popup_Flag	pshm->P[24096]
#define	P_Suspend_ARC_Use_Plate_Clamp_Popup_Flag	pshm->P[24097]
#define	P_Suspend_ARC_Use_Plate_Cutter_FWD_Popup_Flag	pshm->P[24098]
#define	P_Suspend_ARC_Use_Plate_Cutter_BWD_Popup_Flag	pshm->P[24099]
#define	P_Suspend_ARC_Use_Plate_Unclamp_Popup_Flag	pshm->P[24100]
#define	P_Suspend_ARC_Use_Plate_BWD_Popup_Flag	pshm->P[24101]
#define	P_Suspend_ARC_Replace_Plate_Blow_OFF_Popup_Flag	pshm->P[24102]
#define	P_Suspend_ARC_Dancer_Open_Popup_Flag	pshm->P[24103]
#define	P_Suspend_ARC_Spool_Change_Popup_Flag	pshm->P[24104]
#define	P_Suspend_ARC_Post_Act_Popup_Flag	pshm->P[24105]
#define	P_Suspend_ARC_Previous_Spool_Remain_Winding_Popup_Flag	pshm->P[24106]
#define	P_Suspend_Discharge_First_Address	pshm->P[24107]
#define	P_Suspend_ARC_First_Address	pshm->P[24108]
#define	P_Status_Stop_Ready_Pos_Move	pshm->P[24109]
#define	P_Cycle_Stop_Stauts	pshm->P[24110]
#define	P_Cycle_Stop_Status_Machine	pshm->P[24111]
#define	P_Cycle_Stop_Flag	pshm->P[24112]
#define	P_Speed_Origin_rtn	pshm->P[24113]
#define	P_Speed_rtn	pshm->P[24114]
#define	P_NG_PNP_Z_Move_rtn	pshm->P[24115]
#define	P_NG_PNP_Z_Move_Check_rtn	pshm->P[24116]
#define	P_NG_PNP_T_Move_rtn	pshm->P[24117]
#define	P_NG_PNP_T_Move_Check_rtn	pshm->P[24118]
#define	P_2nd_Z_Move_rtn	pshm->P[24119]
#define	P_2nd_Z_Move_Check_rtn	pshm->P[24120]
#define	P_2nd_T_Move_rtn	pshm->P[24121]
#define	P_2nd_T_Move_Check_rtn	pshm->P[24122]
#define	P_Stack_Judgement_Memory	pshm->P[24123]
#define	P_Stop_Cycle_Stop_Move_Status	pshm->P[24124]
#define	P_STOP_Initial_Process_Status	pshm->P[24125]
#define	P_Stopping_CycleStop_Init_Flag	pshm->P[24126]
#define	P_Sepa_Timing	pshm->P[24127]
#define	P_Old_Trigger_PLC0	pshm->P[24128]
#define	P_Mode_Command	pshm->P[24129]
#define	P_Current_Mode	pshm->P[24130]
#define	P_MOde_Num(i)	pshm->P[(24131+i)%MAX_P]
#define	P_Command_Depth(i)	pshm->P[(24136+i)%MAX_P]
#define	P_In_Position(i)	pshm->P[(24141+i)%MAX_P]
#define	P_Last_Cycle_Command(i)	pshm->P[(24146+i)%MAX_P]
#define	P_Mode_Command_Buffer	pshm->P[24151]
#define	P_Mode_Command_Wait_Count	pshm->P[24152]
#define	P_Old_Mode_Command	pshm->P[24153]
#define	P_Slave1_Anode_Run_Motion_Array(i)	pshm->P[(24154+i)%MAX_P]
#define	P_Slave2_Anode_Run_Motion_Array(i)	pshm->P[(24254+i)%MAX_P]
#define	P_Slave3_Anode_Run_Motion_Array(i)	pshm->P[(24354+i)%MAX_P]
#define	P_Slave4_Anode_Run_Motion_Array(i)	pshm->P[(24454+i)%MAX_P]
#define	P_Slave5_Anode_Run_Motion_Array(i)	pshm->P[(24554+i)%MAX_P]
#define	P_Slave6_Anode_Run_Motion_Array(i)	pshm->P[(24654+i)%MAX_P]
#define	P_Slave7_Anode_Run_Motion_Array(i)	pshm->P[(24754+i)%MAX_P]
#define	P_Slave8_Anode_Run_Motion_Array(i)	pshm->P[(24854+i)%MAX_P]
#define	P_Slave9_Anode_Run_Motion_Array(i)	pshm->P[(24954+i)%MAX_P]
#define	P_Slave10_Anode_Run_Motion_Array(i)	pshm->P[(25054+i)%MAX_P]
#define	P_Slave15_Anode_Run_Motion_Array(i)	pshm->P[(25154+i)%MAX_P]
#define	P_Slave16_Anode_Run_Motion_Array(i)	pshm->P[(25254+i)%MAX_P]
#define	P_Slave17_Anode_Run_Motion_Array(i)	pshm->P[(25354+i)%MAX_P]
#define	P_Slave18_Anode_Run_Motion_Array(i)	pshm->P[(25454+i)%MAX_P]
#define	P_Slave19_Anode_Run_Motion_Array(i)	pshm->P[(25554+i)%MAX_P]
#define	P_Slave1_Cathode_Run_Motion_Array(i)	pshm->P[(25654+i)%MAX_P]
#define	P_Slave2_Cathode_Run_Motion_Array(i)	pshm->P[(25754+i)%MAX_P]
#define	P_Slave3_Cathode_Run_Motion_Array(i)	pshm->P[(25854+i)%MAX_P]
#define	P_Slave4_Cathode_Run_Motion_Array(i)	pshm->P[(25954+i)%MAX_P]
#define	P_Slave5_Cathode_Run_Motion_Array(i)	pshm->P[(26054+i)%MAX_P]
#define	P_Slave15_Cathode_Run_Motion_Array(i)	pshm->P[(26154+i)%MAX_P]
#define	P_Slave6_Cathode_Run_Motion_Array(i)	pshm->P[(26254+i)%MAX_P]
#define	P_Slave7_Cathode_Run_Motion_Array(i)	pshm->P[(26354+i)%MAX_P]
#define	P_Slave8_Cathode_Run_Motion_Array(i)	pshm->P[(26454+i)%MAX_P]
#define	P_Slave9_Cathode_Run_Motion_Array(i)	pshm->P[(26554+i)%MAX_P]
#define	P_Slave10_Cathode_Run_Motion_Array(i)	pshm->P[(26654+i)%MAX_P]
#define	P_Slave16_Cathode_Run_Motion_Array(i)	pshm->P[(26754+i)%MAX_P]
#define	P_Slave17_Cathode_Run_Motion_Array(i)	pshm->P[(26854+i)%MAX_P]
#define	P_Slave18_Cathode_Run_Motion_Array(i)	pshm->P[(26954+i)%MAX_P]
#define	P_Slave19_Cathode_Run_Motion_Array(i)	pshm->P[(27054+i)%MAX_P]
#define	P_Anode_NG_Unit_Status	pshm->P[27154]
#define	P_Cathode_NG_Unit_Status	pshm->P[27155]
#define	P_ParsingRtn	pshm->P[27156]
#define	P_CurPosData	pshm->P[27157]
#define	P_Hold_MNTR_Supply_1st	pshm->P[27158]
#define	P_TimeOutNumb	pshm->P[27159]
#define	P_PosRtn	pshm->P[27160]
#define	P_MotionRtn	pshm->P[27161]
#define	P_CmdData	pshm->P[27162]
#define	P_Interval	pshm->P[27163]
#define	P_Cont_Ret	pshm->P[27164]
#define	P_Cur_Idx	pshm->P[27165]
#define	P_NextID	pshm->P[27166]
#define	P_Cur_Size	pshm->P[27167]
#define	P_Hold_Exist_Insp	pshm->P[27168]
#define	P_Hold_Remove_NG_PNP	pshm->P[27169]
#define	P_Hold_Remove_Align	pshm->P[27170]
#define	P_Hold_Remove_2TR	pshm->P[27171]
#define	P_Hold_Supply_1TR	pshm->P[27172]
#define	P_Hold_Supply_Align	pshm->P[27173]
#define	P_Hold_Supply_2TR	pshm->P[27174]
#define	P_Hold_Semi_Run	pshm->P[27175]
#define	P_Hold_NG_PNP_Remove	pshm->P[180]
#define	P_Hold_Remove_2nd	pshm->P[182]
#define	P_Hold_Supply_1st	pshm->P[183]
#define	P_Hold_Supply_2nd	pshm->P[185]
#define	P_Hold_Data_process	pshm->P[186]
#define	P_Hold_Semi_Run_Enable_Pos	pshm->P[187]
#define	P_Hold_Existence_Insp	pshm->P[188]
#define	P_Hold_1st_Belt_Move	pshm->P[189]
#define	P_Hold_Motion	pshm->P[190]
#define	P_Hold_Data_process_State_Machine	pshm->P[27176]
#define	P_Hold_Align_Remove_State_Machine	pshm->P[27177]
#define	P_Hold_2nd_Remove_State_Machine	pshm->P[27178]
#define	P_Hold_Supply_1st_State_Machine	pshm->P[27179]
#define	P_Hold_Supply_2nd_State_Machine	pshm->P[27180]
#define	P_Hold_Existence_Insp_State_Machine	pshm->P[27181]
#define	P_Hold_NG_PNP_Remove_State_Machine	pshm->P[27182]
#define	P_Hold_Data_Process_Complete	pshm->P[27183]
#define	P_Hold_Semi_Run_Enable_Pos_State_Machine	pshm->P[27184]
#define	P_HOLD_Existence_Insp_Queue_State_Machine	pshm->P[27185]
#define	P_Hold_Stop_Existence_Insp_STEP	pshm->P[27186]
#define	P_SubMaster_Status_Err	pshm->P[27187]
#define	P_Data_Process_Rtn	pshm->P[27188]
#define	P_Hold_Set_Trigger	pshm->P[27189]
#define	P_Hold_Get_Trigger	pshm->P[27190]
#define	P_Anode_2nd_Data	pshm->P[27191]
#define	P_Anode_Align_Data	pshm->P[27192]
#define	P_Hold_Remove_Step	pshm->P[27193]
#define	P_HList_Head_Idx	pshm->P[27194]
#define	P_Hold_Next_ID	pshm->P[27195]
#define	P_HCmd_List(i)	pshm->P[(27196+i)%MAX_P]
#define	P_Hold_Data_Value	pshm->P[27216]
#define	P_Comb_Bitwise	pshm->P[27217]
#define	P_Target_Cmd	pshm->P[27218]
#define	P_Temp_Bit	pshm->P[27219]
#define	P_Get_ErrorCode	pshm->P[27220]
#define	P_Rtn_Code	pshm->P[27221]
#define	P_Complete_Hold_Bit	pshm->P[27222]
#define	P_HoldMtion_Flag	pshm->P[27223]
#define	P_Ret_BitWise	pshm->P[27224]
#define	P_NotEnough_GetSpace	pshm->P[27225]
#define	P_NotEnough_SetSpace	pshm->P[27226]
#define	P_Check_SetSpace	pshm->P[27227]
#define	P_Hold_Get_Data	pshm->P[27228]
#define	P_Err_NextID_Flag	pshm->P[27229]
#define	P_Elec_Bit	pshm->P[27230]
#define	P_MotionData	pshm->P[27231]
#define	P_DataList(i)	pshm->P[(27232+i)%MAX_P]
#define	P_Hold_Data_Err(i)	pshm->P[(27237+i)%MAX_P]
#define	P_Cur_PosX1	pshm->P[27247]
#define	P_Cur_PosZ1	pshm->P[27248]
#define	P_Cur_PosX2	pshm->P[27249]
#define	P_Cur_PosZ2	pshm->P[27250]
#define	P_Dest_PosX	pshm->P[27251]
#define	P_Dest_PosZ	pshm->P[27252]
#define	P_FailToParse	pshm->P[27253]
#define	P_CurTrigger	pshm->P[27254]
#define	P_TimeOutTrigger	pshm->P[27255]
#define	P_CalcTime	pshm->P[27256]
#define	P_Cycle_Count	pshm->P[27257]
#define	P_MotionTimeOutFlag	pshm->P[27258]
#define	P_Set_Data	pshm->P[27259]
#define	P_Rtn	pshm->P[27260]
#define	P_CurPosTestBit	pshm->P[27261]
#define	P_Hold_Anode_Pause_CHK	pshm->P[27262]
#define	P_Hold_Cathode_Pause_CHK	pshm->P[27263]
#define	P_Surface_Complete_To_Hold	pshm->P[27264]
#define	P_Hold_Motion_Arr(i)	pshm->P[(27265+i)%MAX_P]
#define	P_Hold_Pause_Trg	pshm->P[27285]
#define	P_From_Staring_Flag	pshm->P[27286]
#define	P_Hold_Existence_Insp_Enqueue_Flag	pshm->P[27287]
#define	P_Hold_Rtn	pshm->P[27288]
#define	P_Debug_Existence_Insp_STEP	pshm->P[27289]
#define	P_Hold_Align_Sheet_CHK	pshm->P[27290]
#define	P_Hold_Cathode_Exception_Empty_Flag	pshm->P[27291]
#define	P_Hold_Anode_Exception_Empty_Flag	pshm->P[27292]
#define	P_HOLD_Hold_Process_State_Machine	pshm->P[27293]
#define	P_Hold_Stop_Sheet_Process_STEP	pshm->P[27294]
#define	P_Hold_Debug_Sheet_Process_STEP	pshm->P[27295]
#define	P_Hold_Stop_Point	pshm->P[27296]
#define	P_Hold_CHK	pshm->P[27297]
#define	P_Hold_Test	pshm->P[27298]
#define	P_Anode_1st_Motion_Complete	pshm->P[27299]
#define	P_Anode_2nd_Motion_Complete	pshm->P[27300]
#define	P_Anode_NG_PNP_Motion_Complete	pshm->P[27301]
#define	P_Cathode_1st_Motion_Complete	pshm->P[27302]
#define	P_Cathode_2nd_Motion_Complete	pshm->P[27303]
#define	P_Cathode_NG_PNP_Motion_Complete	pshm->P[27304]
#define	P_Anode_1st_Picker_Motion_Complete	pshm->P[27305]
#define	P_Cathode_1st_Picker_Motion_Complete	pshm->P[27306]
#define	P_individual_return	pshm->P[27307]
#define	P_individual_return2	pshm->P[27308]
#define	P_HoldCurPosBit1	pshm->P[27309]
#define	P_HoldCurPosBit2	pshm->P[27310]
#define	P_Parsing_Status	pshm->P[27311]
#define	P_Sel_Obj	pshm->P[27312]
#define	P_Sel_Elec	pshm->P[27313]
#define	P_Error	pshm->P[27314]
#define	P_Vision_FirstSepa_Complete	pshm->P[27315]
#define	P_NG_PNP_Turn_TM	pshm->P[27316]
#define	P_NG_PNP_Turn_TS	pshm->P[27317]
#define	P_NG_PNP_Turn_TA	pshm->P[27318]
#define	P_NG_PNP_Up_TM	pshm->P[27319]
#define	P_NG_PNP_Up_TS	pshm->P[27320]
#define	P_NG_PNP_Up_TA	pshm->P[27321]
#define	P_NG_PNP_Down_TM	pshm->P[27322]
#define	P_NG_PNP_Down_TS	pshm->P[27323]
#define	P_NG_PNP_Down_TA	pshm->P[27324]
#define	P_NG_PNP_Vac_Time	pshm->P[27325]
#define	P_NG_PNP_Blow_Time	pshm->P[27326]
#define	P_Slow_NG_Mode_Btn	pshm->P[27327]
#define	P_HOLD_Memory_Tower_Offset	pshm->P[27328]
#define	P_Hold_Pause_Use	pshm->P[27329]
#define	P_Hold_Err_MNTR(i)	pshm->P[(27330+i)%MAX_P]
#define	P_Hold_Err_Data_Save(i)	pshm->P[(27334+i)%MAX_P]
#define	P_Hold_Err_Action_Data_Save(i)	pshm->P[(27342+i)%MAX_P]
#define	P_Hold_Motion_Err_Chk	pshm->P[27350]
#define	P_Hold_Memory_Tower_Err_Pos(i)	pshm->P[(27351+i)%MAX_P]
#define	P_Hold_Motion_TimeOut	pshm->P[27366]
#define	P_Hold_Data_OK	pshm->P[27367]
#define	P_VISION_TRG_PLC4_AnodeSurface_Ins_Shoot	pshm->P[27368]
#define	P_VISION_TRG_PLC4_CathodeSurface_Ins_Shoot	pshm->P[27369]
#define	P_Memory_Tower_Test	pshm->P[27370]
#define	P_Temp_Run_Mode	pshm->P[27371]
#define	P_Data_Idx	pshm->P[27372]
#define	P_Get_Data_Idx	pshm->P[27373]
#define	P_HOLD_Data_Err_Queue	pshm->P[27374]
#define	P_HOLD_Data_Err_State_Machine	pshm->P[27375]
#define	P_HOLD_Err_Set_Data	pshm->P[27376]
#define	P_HOLD_Err_Save	pshm->P[27377]
#define	P_Sepa_Run_Completed_Flag	pshm->P[27378]
#define	P_Buffer_Seqdata_MSA_Array(i)	pshm->P[(27379+i)%MAX_P]
#define	P_Buffer_Seqdata_Align_Take_Off_Array(i)	pshm->P[(27429+i)%MAX_P]
#define	P_VISION_MSA_Align_Module_Complete_Bit(i)	pshm->P[(27479+i)%MAX_P]
#define	P_Module_Manual_MSA_Act_Command_Array(i)	pshm->P[(27579+i)%MAX_P]
#define	P_OLD_Module_Manual_MSA_Act_Command_Array(i)	pshm->P[(27679+i)%MAX_P]
#define	P_Module_MSA_Act_State_Machine_Array(i)	pshm->P[(27779+i)%MAX_P]
#define	P_VISION_MSA_Seq_Stopping_Point(i)	pshm->P[(27879+i)%MAX_P]
#define	P_Align_Take_Off_Module_Complete_Bit(i)	pshm->P[(27912+i)%MAX_P]
#define	P_Module_Manual_Align_Take_Off_Act_Command_Array(i)	pshm->P[(28012+i)%MAX_P]
#define	P_OLD_Module_Manual_Align_Take_Off_Act_Command_Array(i)	pshm->P[(28112+i)%MAX_P]
#define	P_Module_Align_Take_Off_Act_State_Machine_Array(i)	pshm->P[(28212+i)%MAX_P]
#define	P_Log_Data_Y	pshm->P[28312]
#define	P_Log_Data_M	pshm->P[28313]
#define	P_Log_Data_D	pshm->P[28314]
#define	P_Log_Data_H	pshm->P[28315]
#define	P_Log_Data_m	pshm->P[28316]
#define	P_Log_Data_s	pshm->P[28317]
#define	P_MNTR_End_Index	pshm->P[28318]
#define	P_BG_CPLC_Running_MNTR	pshm->P[50]
#define	P_RTI_CPLC_Running_MNTR	pshm->P[51]
#define	P_Log_Start_Flag	pshm->P[170]
#define	P_Log_Document_Remove_Flag	pshm->P[171]
#define	P_Sepa_ID_Change_Flag	pshm->P[172]
#define	P_USB_Register	pshm->P[173]
#define	P_Cur_Line_Check	pshm->P[175]
#define	P_Cur_Line_Check_Init	pshm->P[176]
#define	P_Buffer_Judge_Trg(i)	pshm->P[(28319+i)%MAX_P]
#define	P_Hold_Pass	pshm->P[28329]
#define	P_PLC01_Queue_MNTR(i)	pshm->P[(28330+i)%MAX_P]
#define	P_PLC01_Total_Step_Flag	pshm->P[28345]
#define	P_PLC02_Total_Step_Flag	pshm->P[28346]
#define	P_PLC014_Total_Step_Flag	pshm->P[28347]
#define	P_PLC02_Total_Step_Flag2	pshm->P[28348]
#define	P_Vac_Pass	pshm->P[28349]
#define	P_Vision_Pass_Exisitence	pshm->P[28350]
#define	P_Vision_Pass_Empty	pshm->P[28351]
#define	P_Vision_Pass_FirstSepa	pshm->P[28352]
#define	P_Vision_Pass_Stack_Inspection	pshm->P[28353]
#define	P_ULD_Home_Pass	pshm->P[28354]
#define	P_Clamp_Cell_Down_Use	pshm->P[28355]
#define	P_FR_Clamp_Use_Test	pshm->P[28356]
#define	P_Door_Interlock_Use_Flag	pshm->P[28357]
#define	P_Vacuum_Door_Clear_Use	pshm->P[28358]
#define	P_Align_Test_Pos	pshm->P[28359]
#define	P_PLC01_Exe_Is_Ena_Step_Flag(i)	pshm->P[(28360+i)%MAX_P]
#define	P_PLC01_Exe_Fist_Sepa_Step_Flag(i)	pshm->P[(28370+i)%MAX_P]
#define	P_PLC01_Exe_Prod_Step_Flag(i)	pshm->P[(28380+i)%MAX_P]
#define	P_PLC01_HOLD_Insp_Step_Flag(i)	pshm->P[(28385+i)%MAX_P]
#define	P_PLC01_HOLD_Main_Step_Flag(i)	pshm->P[(28395+i)%MAX_P]
#define	P_PLC01_Sus_Discharge_Step_Flag(i)	pshm->P[(28410+i)%MAX_P]
#define	P_PLC01_Sus_ARC_Step_Flag(i)	pshm->P[(28420+i)%MAX_P]
#define	P_PLC01_STOP_Init_Step_Flag(i)	pshm->P[(28430+i)%MAX_P]
#define	P_PLC01_STOP_Cycle_ST_Step_Flag(i)	pshm->P[(28440+i)%MAX_P]
#define	P_PLC02_Exe_Module_First_Sepa_Step_Flag	pshm->P[28455]
#define	P_PLC02_Sus_Module_Discharge_Step_Flag	pshm->P[28456]
#define	P_PLC02_Sus_Module_ARC_Step_Flag	pshm->P[28457]
#define	P_PLC02_Sus_Module_1TR_Supply_Step_Flag	pshm->P[28458]
#define	P_PLC02_HOLD_Module_Insp_Step_Flag	pshm->P[28459]
#define	P_PLC02_HOLD_Module_Remove_NGPNP_Step_Flag	pshm->P[28460]
#define	P_PLC02_HOLD_Module_Remove_Align_Step_Flag	pshm->P[28461]
#define	P_PLC02_HOLD_Module_Remove_2TR_Step_Flag	pshm->P[28462]
#define	P_PLC02_HOLD_Module_Supply_1TR_Step_Flag	pshm->P[28463]
#define	P_PLC02_HOLD_Module_Supply_Align_Step_Flag	pshm->P[28464]
#define	P_PLC02_HOLD_Module_Supply_2TR_Step_Flag	pshm->P[28465]
#define	P_PLC02_HOLD_Module_SemiRun_Pos_Step_Flag	pshm->P[28466]
#define	P_PLC14_STOP_Module_Cycle_Stop_Step_Flag	pshm->P[28467]
#define	P_PLC02_Discharge_MNTR	pshm->P[28468]
#define	P_EPC_SENSOR_Load_Ratio	pshm->P[133]
#define	P_STACK_VISION_Load_Ratio	pshm->P[134]
#define	P_SHEET_PAPER_X_Load_Ratio	pshm->P[135]
#define	P_Align_CA_X_Load_Ratio	pshm->P[136]
#define	P_Align_CA_Y_Load_Ratio	pshm->P[137]
#define	P_Align_CA_T_Load_Ratio	pshm->P[138]
#define	P_Align_AN_X_Load_Ratio	pshm->P[139]
#define	P_Align_AN_Y_Load_Ratio	pshm->P[140]
#define	P_Align_AN_T_Load_Ratio	pshm->P[141]
#define	P_NG_PnP_CA_T_Load_Ratio	pshm->P[142]
#define	P_NG_PnP_AN_T_Load_Ratio	pshm->P[143]
#define	P_NG_PnP_CA_Z_Load_Ratio	pshm->P[144]
#define	P_NG_PnP_AN_Z_Load_Ratio	pshm->P[145]
#define	P_UNLOADER_X_Load_Ratio	pshm->P[146]
#define	P_UNLOADER_Z_Load_Ratio	pshm->P[147]
#define	P_UNLOADER_T_Load_Ratio	pshm->P[148]
#define	P_Anode_Vision_MNTR	pshm->P[28469]
#define	P_Cathode_Vision_MNTR	pshm->P[28470]
#define	P_Vision_MNTR(i)	pshm->P[(28471+i)%MAX_P]
#define	P_Error_Index_Number	pshm->P[28476]
#define	P_ECAT_MNTR_Bit	pshm->P[28477]
#define	P_Local_MNTR_Bit	pshm->P[28478]
#define	P_Clamp_Motion_VER1	pshm->P[28479]
#define	P_CA_DR_Ta	pshm->P[28480]
#define	P_CA_DR_Ts	pshm->P[28481]
#define	P_CA_DR_Tm	pshm->P[28482]
#define	P_CA_DR_Td	pshm->P[28483]
#define	P_CA_DR_Tsd	pshm->P[28484]
#define	P_AN_DR_Ta	pshm->P[28485]
#define	P_AN_DR_Ts	pshm->P[28486]
#define	P_AN_DR_Tm	pshm->P[28487]
#define	P_AN_DR_Td	pshm->P[28488]
#define	P_AN_DR_Tsd	pshm->P[28489]
#define	P_First_Sepa_1st_Driving_Move	pshm->P[28490]
#define	P_AN_Cam_Total_Time	pshm->P[28491]
#define	P_CA_Cam_Total_Time	pshm->P[28492]
#define	P_Dry_Run_BTN	pshm->P[28493]
#define	P_Home_Angle_Offset_change_Bit	pshm->P[28494]
#define	P_Z_Var	pshm->P[28495]
#define	P_No1_Recipe_Pos_IL(i)	pshm->P[(28496+i)%MAX_P]
#define	P_No2_Recipe_Pos_IL(i)	pshm->P[(28549+i)%MAX_P]
#define	P_No3_Recipe_Pos_IL(i)	pshm->P[(28602+i)%MAX_P]
#define	P_No4_Recipe_Pos_IL(i)	pshm->P[(28655+i)%MAX_P]
#define	P_No5_Recipe_Pos_IL(i)	pshm->P[(28708+i)%MAX_P]
#define	P_No6_Recipe_Pos_IL(i)	pshm->P[(28761+i)%MAX_P]
#define	P_No7_Recipe_Pos_IL(i)	pshm->P[(28814+i)%MAX_P]
#define	P_No8_Recipe_Pos_IL(i)	pshm->P[(28867+i)%MAX_P]
#define	P_No9_Recipe_Pos_IL(i)	pshm->P[(28920+i)%MAX_P]
#define	P_No10_Recipe_Pos_IL(i)	pshm->P[(28973+i)%MAX_P]
#define	P_Recipe_POS_Interock_M(i)	pshm->P[(29026+i)%MAX_P]
#ifndef _PP_PROJ_HDR_
  void SetEnumGlobalVar(enum globalP var, double data)
  {
    pshm->P[var] = data;
  }

  double GetEnumGlobalVar(enum globalP var)
  {
    return pshm->P[var];
  }

  void SetEnumGlobalArrayVar(enum globalParray var, unsigned index, double data)
  {
    pshm->P[(var + index)%MAX_P] = data;
  }

  double GetEnumGlobalArrayVar(enum globalParray var, unsigned index)
  {
    return pshm->P[(var + index)%MAX_P];
  }

  void SetEnumCSGlobalVar(enum csglobalQ var, unsigned cs, double data)
  {
    pshm->Coord[cs % MAX_COORDS].Q[var] = data;
  }

  double GetEnumCSGlobalVar(enum csglobalQ var, unsigned cs)
  {
    return pshm->Coord[cs % MAX_COORDS].Q[var];
  }

  void SetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs, double data)
  {
    pshm->Coord[cs % MAX_COORDS].Q[(var + index)%MAX_Q] = data;
  }

  double GetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs)
  {
    return pshm->Coord[cs % MAX_COORDS].Q[(var + index)%MAX_Q];
  }

  void SetEnumPtrVar(enum ptrM var, double data)
  {
    im_write(pshm->Mdef + var, data, &pshm->Ldata);
  }

  double GetEnumPtrVar(enum ptrM var)
  {
    return im_read(pshm->Mdef + var, &pshm->Ldata);
  }

  void SetEnumPtrArrayVar(enum ptrMarray var, unsigned index, double data)
  {
    im_write(pshm->Mdef + ((var + index)%MAX_M), data, &pshm->Ldata);
  }

  double GetEnumPtrArrayVar(enum ptrMarray var, unsigned index)
  {
    return im_read(pshm->Mdef + ((var + index)%MAX_M), &pshm->Ldata);
  }

  #define SetGlobalVar(i, x)              SetEnumGlobalVar(i, x)
  #define SetGlobalArrayVar(i, j, x)      SetEnumGlobalArrayVar(i, j, x)
  #define GetGlobalVar(i)                 GetEnumGlobalVar(i)
  #define GetGlobalArrayVar(i, j)         GetEnumGlobalArrayVar(i, j)

  #define SetCSGlobalVar(i, j, x)         SetEnumCSGlobalVar(i, j, x)
  #define SetCSGlobalArrayVar(i, j, k, x) SetEnumCSGlobalArrayVar(i, j, k, x)
  #define GetCSGlobalVar(i, j)            GetEnumCSGlobalVar(i, j)
  #define GetCSGlobalArrayVar(i, j, k)    GetEnumCSGlobalArrayVar(i, j, k)

  #define SetPtrVar(i, x)                 SetEnumPtrVar(i, x)
  #define SetPtrArrayVar(i, j, x)         SetEnumPtrArrayVar(i, j, x)
  #define GetPtrVar(i)                    GetEnumPtrVar(i)
  #define GetPtrArrayVar(i, j)            GetEnumPtrArrayVar(i, j)

#else

  void SetEnumGlobalVar(enum globalP var, double data);
  double GetEnumGlobalVar(enum globalP var);
  void SetEnumGlobalArrayVar(enum globalParray var, unsigned index, double data);
  double GetEnumGlobalArrayVar(enum globalParray var, unsigned index);
  void SetEnumCSGlobalVar(enum csglobalQ var, unsigned cs, double data);
  double GetEnumCSGlobalVar(enum csglobalQ var, unsigned cs);
  void SetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs, double data);
  double GetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs);
  void SetEnumPtrVar(enum ptrM var, double data);
  double GetEnumPtrVar(enum ptrM var);
  void SetEnumPtrArrayVar(enum ptrMarray var, unsigned index, double data);
  double GetEnumPtrArrayVar(enum ptrMarray var, unsigned index);

  #define SetGlobalVar(i, x)              SetEnumGlobalVar(i, x)
  #define SetGlobalArrayVar(i, j, x)      SetEnumGlobalArrayVar(i, j, x)
  #define GetGlobalVar(i)                 GetEnumGlobalVar(i)
  #define GetGlobalArrayVar(i, j)         GetEnumGlobalArrayVar(i, j)

  #define SetCSGlobalVar(i, j, x)         SetEnumCSGlobalVar(i, j, x)
  #define SetCSGlobalArrayVar(i, j, k, x) SetEnumCSGlobalArrayVar(i, j, k, x)
  #define GetCSGlobalVar(i, j)            GetEnumCSGlobalVar(i, j)
  #define GetCSGlobalArrayVar(i, j, k)    GetEnumCSGlobalArrayVar(i, j, k)

  #define SetPtrVar(i, x)                 SetEnumPtrVar(i, x)
  #define SetPtrArrayVar(i, j, x)         SetEnumPtrArrayVar(i, j, x)
  #define GetPtrVar(i)                    GetEnumPtrVar(i)
  #define GetPtrArrayVar(i, j)            GetEnumPtrArrayVar(i, j)

#endif
// end of #ifdef _PPScriptMode_
#else
#ifdef _EnumMode_
enum globalP {_globalP_=-1
,P_Ca_1st_PNP_HomeOffset=8192
,P_An_1st_PNP_HomeOffset=8193
,P_Ca_2nd_PNP_HomeOffset=8194
,P_An_2nd_PNP_HomeOffset=8195
,P_Project_Ver_A=8356
,P_Project_Ver_B=8357
,P_Project_Ver_C=8358
,P_Project_Ver_D=8359
,P_Sepa_Test=8360
,P_Cur_Equip_No=8361
,M_X_ARC_NP_Plate_Select=2050
,P_Status_PMAC_Alarm_Reset=5387
,P_Driving_Circumference=8412
,P_PLC06_Spool_Circumference=8413
,P_Upper_Spool_Circumference=8414
,P_Lower_Spool_Circumference=8415
,P_CamTable_MAX_EA=8416
,P_Cam_Move_Distanse=8417
,P_Sepa_Driving_Diameter=8418
,P_PI=8419
,Sys_Kill_Manual_BG_C=7777
,P_Max_Try_Reconnect_MC=8420
,P_Cur_Try_Reconnect_MC=8421
,P_Modbus_Connected_Flag=8422
,P_Write_Modbus_HeartBeat=1500
,P_BTN_Sepa_Stack_Mode=8523
,P_BTN_Dryrun_Mode=8524
,P_X_Btn_Align_Table_Take_Off=8525
,P_Align_Table_Take_Off_Flag=8526
,P_Flag_AT_Take_Off_Home_Chk_Flag=8527
,P_Align_Table_Take_Off_State_Machine=8528
,P_Align_Table_Take_Off_Status=8529
,P_AT_Take_Off_Jog_Speed=8530
,P_2nd_Transfer_AT_Take_Off_Pos=8531
,P_VISION_Initial_Pos_Cmd=8532
,P_VISION_Cal_Pos_Cmd=8533
,P_FR_Anode_Dritection_Pos_Cmd=8534
,P_FR_Cahode_Dritection_Pos_Cmd=8535
,P_Anode_AT_Resolution_Cal_Pos_Cmd=8536
,P_Cathode_AT_Resolution_Cal_Pos_Cmd=8537
,P_Vision_Initial_Pos_Status_Machine=8538
,P_Vision_Cal_Pos_Status_Machine=8539
,P_FR_Anode_Dritection_Pos_Status_Machine=8540
,P_FR_Cahode_Dritection_Pos_Status_Machine=8541
,P_Anode_AT_Resolution_Cal_Pos_Status_Machine=8542
,P_Cathode_AT_Resolution_Cal_Pos_Status_Machine=8543
,P_Status_Vision_Initial_Pos=8544
,P_Status_Vision_Cal_Pos=8545
,P_Status_FR_Anode_Dritection_Pos=8546
,P_Status_FR_Cahode_Dritection_Pos=8547
,P_Status_An_AT_Resolution_Cal_Pos=8548
,P_Status_Ca_AT_Resolution_Cal_Pos=8549
,P_CMD_Cleaning_Pos=8550
,P_Cleaning_Pos_Status_Machine=8551
,P_Status_Cleaning_Pos=8552
,P_Push_Manual_ARC_Button=8553
,P_Push_Cycle_Stop_Button=8554
,P_BTN_Push_Cathode_MSA_Mode=8555
,P_BTN_Push_Anode_MSA_Mode=8556
,P_BTN_Push_Cathode_Align_MSA=8557
,P_BTN_Push_Anode_Align_MSA=8558
,P_Btn_Vision_Initial_Pos=8559
,P_Btn_Vision_Cal_Pos=8560
,P_Btn_Vision_Cal_Anode_Move=8561
,P_Btn_Vision_Cal_Cathode_Move=8562
,P_Btn_An_AT_Resolution_Cal_Pos=8563
,P_Btn_Ca_AT_Resolution_Cal_Pos=8564
,P_Btn_Cleaning_Mode_Pos=8565
,P_AutoVisionCal_StMachine=8574
,P_CMD_Cathode_Align_Complete=8575
,P_CMD_Anode_Align_Complete=8576
,P_Cal_Ready_Pos_Move_TR_Z_Jog_Speed=8589
,P_Cal_Ready_Pos_Move_TR_X_Jog_Speed=8590
,P_Anode_Clamp_Z1_Initial_Pos_mm=8621
,P_Anode_Clamp_Z2_Initial_Pos_mm=8622
,P_Cathode_Clamp_Z1_Initial_Pos_mm=8623
,P_Cathode_Clamp_Z2_Initial_Pos_mm=8624
,P_Stack_Table_Z_Initial_Pos_mm=8625
,P_FR_Initial_Pos_mm=8626
,P_Anode_Clamp_Z1_Cal_Pos_mm=8627
,P_Anode_Clamp_Z2_Cal_Pos_mm=8628
,P_Cathode_Clamp_Z1_Cal_Pos_mm=8629
,P_Cathode_Clamp_Z2_Cal_Pos_mm=8630
,P_Stack_Table_Z_Cal_Pos_mm=8631
,P_FR_Cal_Pos_mm=8632
,P_Anode_Clamp_Z1_Move_Speed=8633
,P_Anode_Clamp_Z2_Move_Speed=8634
,P_Cathode_Clamp_Z1_Move_Speed=8635
,P_Cathode_Clamp_Z2_Move_Speed=8636
,P_Stack_Table_Z_Move_Speed=8637
,P_FR_Cal_Move_Speed=8638
,P_Old_Anode_Clamp_Z1_Move_Speed=8639
,P_Old_Anode_Clamp_Z2_Move_Speed=8640
,P_Old_Cathode_Clamp_Z1_Move_Speed=8641
,P_Old_Cathode_Clamp_Z2_Move_Speed=8642
,P_Old_Stack_Table_Z_Move_Speed=8643
,P_Old_FR_Cal_Move_Speed=8644
,P_An_AT_Resolution_Anode_2th_Z_Pos_mm=8645
,P_An_AT_Resolution_Anode_2th_T_Pos_mm=8646
,P_An_AT_Resolution_Cathode_2th_Z_Pos_mm=8647
,P_An_AT_Resolution_Cathode_2th_T_Pos_mm=8648
,P_FR_AT_Resolution_Pos_mm=8649
,P_Old_AT_Resolution_Anode_2th_Z_Pos_Move_Speed=8650
,P_Old_AT_Resolution_Anode_2th_T_Pos_Move_Speed=8651
,P_Old_AT_Resolution_Cathode_2th_Z_Pos_Move_Speed=8652
,P_Old_AT_Resolution_Cathode_2th_T_Pos_Move_Speed=8653
,P_Old_FR_AT_Resolution_Move_Speed=8654
,P_Ca_AT_Resolution_Anode_2th_Z_Pos_mm=8655
,P_Ca_AT_Resolution_Anode_2th_T_Pos_mm=8656
,P_Ca_AT_Resolution_Cathode_2th_Z_Pos_mm=8657
,P_Ca_AT_Resolution_Cathode_2th_T_Pos_mm=8658
,P_AT_Resolution_Anode_2th_Z_Pos_Move_Speed=8659
,P_AT_Resolution_Anode_2th_T_Pos_Move_Speed=8660
,P_AT_Resolution_Cathode_2th_Z_Pos_Move_Speed=8661
,P_AT_Resolution_Cathode_2th_T_Pos_Move_Speed=8662
,P_FR_AT_Resolution_Move_Speed=8663
,P_Anode_1th_MES_APC_Move_mm_PLC=8664
,P_Cathode_1th_MES_APC_Move_mm_PLC=8665
,P_Anode_1th_MES_APC_Move_mm_PMAC=8666
,P_Cathode_1th_MES_APC_Move_mm_PMAC=8667
,P_Anode_X_before_Comp_mm=8668
,P_Cathode_X_before_Comp_mm=8669
,P_Flag_Anode_1PNP_APC_Apply_Point=8670
,P_Flag_Cathode_1PNP_APC_Apply_Point=8671
,P_MES_APC_Active=8672
,P_OLD_Slave1_Target_X_Belt_To_Align=8673
,P_OLD_Slave10_Target_X_Belt_To_Align=8674
,P_Anode_MES_X_Average_mm=8675
,P_Cathode_MES_X_Average_mm=8676
,P_Anode_X_Sum_Move_mm=8677
,P_Anode_Align_Stage_TM=8678
,P_Anode_Align_Stage_TS=8679
,P_Anode_Align_Stage_TA=8680
,P_Status_Anode_Prog=8681
,P_Cathode_X_Sum_Move_mm=8682
,P_X_Move_Recipe_Percent=8683
,P_Cathode_Align_Stage_TM=8684
,P_Cathode_Align_Stage_TS=8685
,P_Cathode_Align_Stage_TA=8686
,P_Status_Cathode_Prog=8687
,P_Anode_Align_Move_Machine=8688
,P_Cathode_Align_Move_Machine=8689
,P_Stack_Table_Move_Machine=8690
,P_Status_Anode_Align_Move=8691
,P_Status_Cathode_Align_Move=8692
,P_Status_Stack_Table_Move=8693
,P_Anode_Align_Start_Bit=8694
,P_Cathode_Align_Start_Bit=8695
,P_Anode_Retry_Start_Bit=8696
,P_Cathode_Retry_Start_Bit=8697
,P_Vision_Spea_Run_Complete_Machine=8698
,P_Vision_Sepa_Run_Complete_CMD=8699
,P_Vision_Clamp_Complete_Machine=8700
,P_Vision_Clamp_Complete_CMD=8701
,P_PC_Jog_Motor_No=4301
,P_PC_Jog_Speed=4254
,P_Custom_Speed=4500
,P_Jog_Position=4300
,P_Anode_Recipe_Count=8733
,P_Cathode_Recipe_Count=8734
,P_Slave5_Target_Z_Wait_Pos=8784
,P_Slave5_Target_Z_Start_Pos=8785
,P_Sepa_First_Clamp_On_Up=8786
,P_Slave6_Target_X_Wait_Pos=8787
,P_Anode_1st_T_Belt_To_Align=8788
,P_Anode_1st_T_Align_To_Belt=8789
,P_Anode_1st_T_Ready=8790
,P_Recipe_A_1st_Z_Belt_Down=8791
,P_Recipe_A_1st_Z_Belt_Up=8792
,P_Recipe_A_1st_Z_Align_Down=8793
,P_Recipe_A_1st_Z_Align_Up=8794
,P_Recipe_A_1st_Z_Ready_Up=8795
,P_Recipe_A_1st_Z_Ready_Down=8796
,P_Anode_1st_Z_Belt_Down=8797
,P_Anode_1st_Z_Belt_Up=8798
,P_Anode_1st_Z_Align_Down=8799
,P_Anode_1st_Z_Align_Up=8800
,P_Anode_1st_Z_Ready_Up=8801
,P_Anode_1st_Z_Ready_Down=8802
,P_Anode_2st_T_Align_To_Stack=8803
,P_Anode_2st_T_Stack_To_Align=8804
,P_Recipe_A_2st_Z_Align_Up=8805
,P_Recipe_A_2st_Z_Align_Down=8806
,P_Recipe_A_2st_Z_Stack_Up=8807
,P_Recipe_A_2st_Z_Stack_Down=8808
,P_Recipe_A_2st_Z_Ready_Up=8809
,P_Recipe_A_2st_Z_Ready_Down=8810
,P_Anode_2nd_Z_Align_Up=8811
,P_Anode_2nd_Z_Align_Down=8812
,P_Anode_2nd_Z_Stack_Up=8813
,P_Anode_2nd_Z_Stack_Down=8814
,P_Anode_2nd_Z_Ready_Up=8815
,P_Anode_2st_Z_Ready_Down=8816
,P_Anode_Clamp_Y1_On_1st=8817
,P_Anode_Clamp_Y1_On_2nd=8818
,P_Anode_Clamp_Y1_On_3rd=8819
,P_Anode_Clamp_Y1_On_4th=8820
,P_Anode_Clamp_Y1_Off_1st=8821
,P_Anode_Clamp_Y1_Off_2nd=8822
,P_Anode_Clamp_Y1_Off_3rd=8823
,P_Anode_Clamp_Y2_On_1st=8824
,P_Anode_Clamp_Y2_On_2nd=8825
,P_Anode_Clamp_Y2_On_3rd=8826
,P_Anode_Clamp_Y2_On_4th=8827
,P_Anode_Clamp_Y2_Off_1st=8828
,P_Anode_Clamp_Y2_Off_2nd=8829
,P_Anode_Clamp_Y2_Off_3rd=8830
,P_Anode_Clamp_Z1_On_1st=8831
,P_Anode_Clamp_Z1_On_2nd=8832
,P_Anode_Clamp_Z1_On_3rd=8833
,P_Anode_Clamp_Z1_On_4th=8834
,P_Anode_Clamp_Z1_Off_1st=8835
,P_Anode_Clamp_Z1_Off_2nd=8836
,P_Anode_Clamp_Z1_Off_3rd=8837
,P_Anode_Clamp_Z1_Down=8838
,P_Final_Roll_X_Sepa_1st=8839
,P_Final_Roll_X_Sepa_2nd=8840
,P_Final_Roll_X_Sepa_3rd=8841
,P_Final_Roll_X_Sepa_4th=8842
,P_Final_Roll_X_Sepa_5th=8843
,P_Final_Roll_X_Anode_Move=8844
,P_Final_Roll_X_Discharge=8845
,P_Final_Roll_X_Cathode_Move=8846
,P_Final_Roll_X_Run_Wait_Pos=8847
,P_Final_Roll_Z_Ready_And_Cutting=8848
,P_Final_Roll_Z_Run_Pos=8849
,P_Final_Roll_Z_Sepa_3rd=8850
,P_Final_Roll_Z_Sepa_4th=8851
,P_Final_Roll_Z_Sepa_5th=8852
,P_Stack_Table_Z_For_Sepa=8853
,P_Stack_Table_Z_For_Run=8854
,P_Stack_Table_Z_For_Init=8855
,P_Cathode_Clamp_Y1_On_1st=8856
,P_Cathode_Clamp_Y1_On_2nd=8857
,P_Cathode_Clamp_Y1_On_3rd=8858
,P_Cathode_Clamp_Y1_On_4th=8859
,P_Cathode_Clamp_Y1_Off_1st=8860
,P_Cathode_Clamp_Y1_Off_2nd=8861
,P_Cathode_Clamp_Y1_Off_3rd=8862
,P_Cathode_Clamp_Y2_On_1st=8863
,P_Cathode_Clamp_Y2_On_2nd=8864
,P_Cathode_Clamp_Y2_On_3rd=8865
,P_Cathode_Clamp_Y2_On_4th=8866
,P_Cathode_Clamp_Y2_Off_1st=8867
,P_Cathode_Clamp_Y2_Off_2nd=8868
,P_Cathode_Clamp_Y2_Off_3rd=8869
,P_Cathode_Clamp_Z1_On_1st=8870
,P_Cathode_Clamp_Z1_On_2nd=8871
,P_Cathode_Clamp_Z1_On_3rd=8872
,P_Cathode_Clamp_Z1_On_4th=8873
,P_Cathode_Clamp_Z1_Off_1st=8874
,P_Cathode_Clamp_Z1_Off_2nd=8875
,P_Cathode_Clamp_Z1_Off_3rd=8876
,P_Cathode_Clamp_Z1_Down=8877
,P_Cathode_2st_T_Align_To_Stack=8878
,P_Cathode_2st_T_Stack_To_Align=8879
,P_Slave8_Target_X_Align_To_Stack_1st=8880
,P_Slave8_Target_X_Align_To_Stack_2nd=8881
,P_Slave8_Target_X_Stack_To_Align_1st=8882
,P_Slave8_Target_X_Stack_To_Align_2nd=8883
,P_Slave8_Target_X_Stack_To_Align_3rd=8884
,P_Cathode_2nd_Z_Align_Up=8885
,P_Cathode_2nd_Z_Align_Down=8886
,P_Cathode_2nd_Z_Stack_Up=8887
,P_Cathode_2nd_Z_Stack_Down=8888
,P_Cathode_2nd_Z_Ready_Up=8889
,P_Cathode_2st_Z_Ready_Down=8890
,P_Recipe_C_2st_Z_Align_Up=8891
,P_Recipe_C_2st_Z_Align_Down=8892
,P_Recipe_C_2st_Z_Stack_Up=8893
,P_Recipe_C_2st_Z_Stack_Down=8894
,P_Recipe_C_2st_Z_Ready_Up=8895
,P_Recipe_C_2st_Z_Ready_Down=8896
,P_Cathode_1st_T_Belt_To_Align=8897
,P_Cathode_1st_T_Align_To_Belt=8898
,P_Cathode_1st_T_Ready=8899
,P_Cathode_1st_Z_Belt_Down=8900
,P_Cathode_1st_Z_Belt_Up=8901
,P_Cathode_1st_Z_Align_Down=8902
,P_Cathode_1st_Z_Align_Up=8903
,P_Cathode_1st_Z_Ready_Up=8904
,P_Cathode_1st_Z_Ready_Down=8905
,P_Recipe_C_1st_Z_Belt_Down=8906
,P_Recipe_C_1st_Z_Belt_Up=8907
,P_Recipe_C_1st_Z_Align_Down=8908
,P_Recipe_C_1st_Z_Align_Up=8909
,P_Recipe_C_1st_Z_Ready_Up=8910
,P_Recipe_C_1st_Z_Ready_Down=8911
,P_1st_Sheet_Paper_X_FWD=8912
,P_1st_Sheet_Paper_X_BWD=8913
,P_Cathode_NG_T_NG_To_Align=8914
,P_Cathode_NG_T_Align_To_NG=8915
,P_Cathode_NG_Z_NG_Down=8916
,P_Cathode_NG_Z_NG_Up=8917
,P_Cathode_NG_Z_Align_Down=8918
,P_Cathode_NG_Z_Align_Up=8919
,P_Anode_NG_T_NG_To_Align=8920
,P_Anode_NG_T_Align_To_NG=8921
,P_Anode_NG_Z_NG_Down=8922
,P_Anode_NG_Z_NG_Up=8923
,P_Anode_NG_Z_Align_Down=8924
,P_Anode_NG_Z_Align_Up=8925
,P_1st_ULD_X_Stack=8926
,P_1st_ULD_X_FWD=8927
,P_1st_ULD_X_Init_Pos=8928
,P_1st_ULD_X_Target_BWD=8929
,P_1st_ULD_Z_Stack=8930
,P_1st_ULD_Z_Cutting_For_Cell=8931
,P_1st_ULD_Z_Discharge_For_Cell=8932
,P_1st_ULD_Z_Target_Down=8933
,P_1st_ULD_T_Wait=8934
,P_1st_ULD_T_Avoid_Angle=8935
,P_1st_ULD_T_90_Angle=8936
,P_Slave1_Start_X_Belt=8937
,P_Slave1_Start_X_Align=8938
,P_Slave1_Start_X_NG=8939
,P_Slave1_Start_Z_Up=8940
,P_Slave1_Start_Z_Down_Belt=8941
,P_Slave1_Start_Z_Down_Align=8942
,P_Slave1_Start_Z_Down_NG=8943
,P_Slave3_Start_X_Align=8944
,P_Slave3_Start_X_Align_To_Stack=8945
,P_Slave3_Start_X_Stack=8946
,P_Slave3_Start_X_Stack_To_Align_2=8947
,P_Slave3_Start_X_Stack_To_Align_3=8948
,P_Slave3_Start_Z_Align_To_Stack_1=8949
,P_Slave3_Start_Z_Align_To_Stack_2=8950
,P_Slave3_Start_Z_Stack_To_Align_1=8951
,P_Slave3_Start_Z_Stack_To_Align_2=8952
,P_Slave3_Start_Z_Stack_To_Align_3=8953
,P_Slave3_Start_Z_Align_Down=8954
,P_Slave3_Start_Z_Align_Up=8955
,P_Slave3_Start_Z_Stack_Down=8956
,P_Slave3_Start_Z_Stack_Up=8957
,P_Slave4_Start_X_Clamp_On_1st=8958
,P_Slave4_Start_X_Clamp_On_2nd=8959
,P_Slave4_Start_X_Clamp_On_3rd=8960
,P_Slave4_Start_X_Clamp_On_4th=8961
,P_Slave4_Start_X_Clamp_Off_1st=8962
,P_Slave4_Start_X_Clamp_Off_2nd=8963
,P_Slave4_Start_X_Clamp_Off_3rd=8964
,P_Slave4_Start_Z_Clamp_On_1st=8965
,P_Slave4_Start_Z_Clamp_On_2nd=8966
,P_Slave4_Start_Z_Clamp_On_3rd=8967
,P_Slave4_Start_Z_Clamp_On_4th=8968
,P_Slave4_Start_Z_Clamp_Off_1st=8969
,P_Slave4_Start_Z_Clamp_Off_2nd=8970
,P_Slave4_Start_Z_Clamp_Off_3rd=8971
,P_Slave4_Start_Z_Down=8972
,P_Slave5_Start_X_Anode_Move_1st=8973
,P_Slave5_Start_X_Anode_Move_2nd=8974
,P_Slave5_Start_X_Cathode_Move_1st=8975
,P_Slave5_Start_X_Cathode_Move_2nd=8976
,P_Slave5_Start_X_Sepa_1st=8977
,P_Slave5_Start_X_Sepa_2nd=8978
,P_Slave5_Start_X_Sepa_3rd=8979
,P_Slave5_Start_X_Sepa_4th=8980
,P_Slave5_Start_X_Sepa_5th=8981
,P_Slave5_Start_Z_Sepa_1st=8982
,P_Slave5_Start_Z_Sepa_2nd=8983
,P_Slave5_Start_Z_Sepa_3rd=8984
,P_Slave5_Start_Z_Sepa_4th=8985
,P_Slave5_Start_Z_Sepa_5th=8986
,P_Slave6_Start_Z_Wait_Pos=8987
,P_Slave6_Start_Z_For_Sepa_Mode=8988
,P_Slave7_Start_X_Clamp_On_1st=8989
,P_Slave7_Start_X_Clamp_On_2nd=8990
,P_Slave7_Start_X_Clamp_On_3rd=8991
,P_Slave7_Start_X_Clamp_On_4th=8992
,P_Slave7_Start_X_Clamp_Off_1st=8993
,P_Slave7_Start_X_Clamp_Off_2nd=8994
,P_Slave7_Start_X_Clamp_Off_3rd=8995
,P_Slave7_Start_Z_Clamp_On_1st=8996
,P_Slave7_Start_Z_Clamp_On_2nd=8997
,P_Slave7_Start_Z_Clamp_On_3rd=8998
,P_Slave7_Start_Z_Clamp_On_4th=8999
,P_Slave7_Start_Z_Clamp_Off_1st=9000
,P_Slave7_Start_Z_Clamp_Off_2nd=9001
,P_Slave7_Start_Z_Clamp_Off_3rd=9002
,P_Slave7_Start_Z_Down=9003
,P_Slave8_Start_X_Align=9004
,P_Slave8_Start_X_Align_To_Stack=9005
,P_Slave8_Start_X_Stack=9006
,P_Slave8_Start_X_Stack_To_Align_2=9007
,P_Slave8_Start_X_Stack_To_Align_3=9008
,P_Slave8_Start_Z_Align_To_Stack_1=9009
,P_Slave8_Start_Z_Align_To_Stack_2=9010
,P_Slave8_Start_Z_Stack_To_Align_1=9011
,P_Slave8_Start_Z_Stack_To_Align_2=9012
,P_Slave8_Start_Z_Stack_To_Align_3=9013
,P_Slave8_Start_Z_Align_Down=9014
,P_Slave8_Start_Z_Align_Up=9015
,P_Slave8_Start_Z_Stack_Down=9016
,P_Slave8_Start_Z_Stack_Up=9017
,P_Slave10_Start_X_Belt=9018
,P_Slave10_Start_X_Align=9019
,P_Slave10_Start_X_NG=9020
,P_Slave10_Start_Z_Up=9021
,P_Slave10_Start_Z_Down_Belt=9022
,P_Slave10_Start_Z_Down_Align=9023
,P_Slave10_Start_Z_Down_NG=9024
,P_Slave1_Move_X_Belt_Align=9025
,P_Slave1_Move_X_Align_Belt=9026
,P_Slave1_Move_X_Belt_NG=9027
,P_Slave1_Move_X_NG_Belt=9028
,P_Slave1_Move_X_Align_NG=9029
,P_Slave1_Move_Z_Belt_Down=9030
,P_Slave1_Move_Z_Belt_Up=9031
,P_Slave1_Move_X_NG_Align=9032
,P_Slave1_Move_Z_Align_Down=9033
,P_Slave1_Move_Z_Align_Up=9034
,P_Slave1_Move_Z_NG_Down=9035
,P_Slave1_Move_Z_NG_Up=9036
,P_Slave3_Move_X_Align_To_Stack_1st=9037
,P_Slave3_Move_X_Align_To_Stack_2nd=9038
,P_Slave3_Move_X_Stack_To_Align_1st=9039
,P_Slave3_Move_X_Stack_To_Align_2nd=9040
,P_Slave3_Move_X_Stack_To_Align_3rd=9041
,P_Slave3_Move_Z_Align_To_Stack_1st=9042
,P_Slave3_Move_Z_Align_To_Stack_2nd=9043
,P_Slave3_Move_Z_Stack_To_Align_1st=9044
,P_Slave3_Move_Z_Stack_To_Align_2nd=9045
,P_Slave3_Move_Z_Stack_To_Align_3rd=9046
,P_Slave3_Move_Z_Align_Up=9047
,P_Slave3_Move_Z_Align_Down=9048
,P_Slave3_Move_Z_Stack_Up=9049
,P_Slave3_Move_Z_Stack_Down=9050
,P_Slave4_Move_X_Clamp_On_1st=9051
,P_Slave4_Move_X_Clamp_On_2nd=9052
,P_Slave4_Move_X_Clamp_On_3rd=9053
,P_Slave4_Move_X_Clamp_On_4th=9054
,P_Slave4_Move_X_Clamp_Off_1st=9055
,P_Slave4_Move_X_Clamp_Off_2nd=9056
,P_Slave4_Move_X_Clamp_Off_3rd=9057
,P_Slave4_Move_Z_Clamp_On_1st=9058
,P_Slave4_Move_Z_Clamp_On_2nd=9059
,P_Slave4_Move_Z_Clamp_On_3rd=9060
,P_Slave4_Move_Z_Clamp_On_4th=9061
,P_Slave4_Move_Z_Clamp_Off_1st=9062
,P_Slave4_Move_Z_Clamp_Off_2nd=9063
,P_Slave4_Move_Z_Clamp_Off_3rd=9064
,P_Slave4_Move_Z_Down=9065
,P_Slave5_Move_X_Anode_Move_1st=9066
,P_Slave5_Move_X_Anode_Move_2nd=9067
,P_Slave5_Move_X_Cathode_Move_1st=9068
,P_Slave5_Move_X_Cathode_Move_2nd=9069
,P_Slave5_Move_X_Sepa_1st=9070
,P_Slave5_Move_X_Sepa_2nd=9071
,P_Slave5_Move_X_Sepa_3rd=9072
,P_Slave5_Move_X_Sepa_4th=9073
,P_Slave5_Move_X_Sepa_5th=9074
,P_Slave5_Move_Z_Sepa_1st=9075
,P_Slave5_Move_Z_Sepa_2nd=9076
,P_Slave5_Move_Z_Sepa_3rd=9077
,P_Slave5_Move_Z_Sepa_4th=9078
,P_Slave5_Move_Z_Sepa_5th=9079
,P_Slave6_Move_Z_For_Sepa_Mode=9080
,P_Slave6_Move_Z_For_Run_Mode=9081
,P_Slave7_Move_X_Clamp_On_1st=9082
,P_Slave7_Move_X_Clamp_On_2nd=9083
,P_Slave7_Move_X_Clamp_On_3rd=9084
,P_Slave7_Move_X_Clamp_On_4th=9085
,P_Slave7_Move_X_Clamp_Off_1st=9086
,P_Slave7_Move_X_Clamp_Off_2nd=9087
,P_Slave7_Move_X_Clamp_Off_3rd=9088
,P_Slave7_Move_Z_Clamp_On_1st=9089
,P_Slave7_Move_Z_Clamp_On_2nd=9090
,P_Slave7_Move_Z_Clamp_On_3rd=9091
,P_Slave7_Move_Z_Clamp_On_4th=9092
,P_Slave7_Move_Z_Clamp_Off_1st=9093
,P_Slave7_Move_Z_Clamp_Off_2nd=9094
,P_Slave7_Move_Z_Clamp_Off_3rd=9095
,P_Slave7_Move_Z_Down=9096
,P_Slave8_Move_X_Align_To_Stack_1st=9097
,P_Slave8_Move_X_Align_To_Stack_2nd=9098
,P_Slave8_Move_X_Stack_To_Align_1st=9099
,P_Slave8_Move_X_Stack_To_Align_2nd=9100
,P_Slave8_Move_X_Stack_To_Align_3rd=9101
,P_Slave8_Move_Z_Align_To_Stack_1st=9102
,P_Slave8_Move_Z_Align_To_Stack_2nd=9103
,P_Slave8_Move_Z_Stack_To_Align_1st=9104
,P_Slave8_Move_Z_Stack_To_Align_2nd=9105
,P_Slave8_Move_Z_Stack_To_Align_3rd=9106
,P_Slave8_Move_Z_Align_Up=9107
,P_Slave8_Move_Z_Align_Down=9108
,P_Slave8_Move_Z_Stack_Up=9109
,P_Slave8_Move_Z_Stack_Down=9110
,P_Slave10_Move_X_Belt_Align=9111
,P_Slave10_Move_X_Align_Belt=9112
,P_Slave10_Move_X_Belt_NG=9113
,P_Slave10_Move_X_NG_Belt=9114
,P_Slave10_Move_X_Align_NG=9115
,P_Slave10_Move_Z_Belt_Down=9116
,P_Slave10_Move_Z_Belt_Up=9117
,P_Slave10_Move_X_NG_Align=9118
,P_Slave10_Move_Z_Align_Down=9119
,P_Slave10_Move_Z_Align_Up=9120
,P_Slave10_Move_Z_NG_Down=9121
,P_Slave10_Move_Z_NG_Up=9122
,P_Slave1_Offset_X_Align=9123
,P_Slave1_Offset_X_Belt=9124
,P_Slave1_Offset_X_NG=9125
,P_Slave1_Offset_Z_Belt=9126
,P_Slave1_Offset_Z_Align=9127
,P_Slave1_Offset_Z_NG=9128
,P_Slave1_Offset_Z_Up=9129
,P_Slave3_Offset_X_Stack=9130
,P_Slave3_Offset_X_Align=9131
,P_Slave3_Offset_Z_Stack=9132
,P_Slave3_Offset_Z_Align=9133
,P_Slave3_Offset_Z_Align_Up=9134
,P_Slave3_Offset_Z_Align_Down=9135
,P_Slave3_Offset_Z_Stack_Up=9136
,P_Slave3_Offset_Z_Stack_Down=9137
,P_Slave3_Offset_Z_Wait_Pos=9138
,P_Slave4_Offset_X_Clamp_On=9139
,P_Slave4_Offset_X_Clamp_Off=9140
,P_Slave4_Offset_Z_Clamp_On=9141
,P_Slave4_Offset_Z_Clamp_Off=9142
,P_Slave5_Offset_X_Anode_Move_1st=9143
,P_Slave5_Offset_X_Anode_Move_2nd=9144
,P_Slave5_Offset_X_Cathode_Move_1st=9145
,P_Slave5_Offset_X_Cathode_Move_2nd=9146
,P_Slave5_Offset_X_Sepa_1st=9147
,P_Slave5_Offset_X_Sepa_2nd=9148
,P_Slave5_Offset_X_Sepa_3rd=9149
,P_Slave5_Offset_X_Sepa_4th=9150
,P_Slave5_Offset_X_Sepa_5th=9151
,P_Slave5_Offset_Z_Sepa_1st=9152
,P_Slave5_Offset_Z_Sepa_2nd=9153
,P_Slave5_Offset_Z_Sepa_3rd=9154
,P_Slave5_Offset_Z_Sepa_4th=9155
,P_Slave5_Offset_Z_Sepa_5th=9156
,P_Slave6_Offset_X_For_Sepa_Mode=9157
,P_Slave6_Offset_Z_Wait_Pos=9158
,P_Slave7_Offset_X_Clamp_On=9159
,P_Slave7_Offset_X_Clamp_Off=9160
,P_Slave7_Offset_Z_Clamp_On=9161
,P_Slave7_Offset_Z_Clamp_Off=9162
,P_Slave8_Offset_X_Stack=9163
,P_Slave8_Offset_X_Align=9164
,P_Slave8_Offset_Z_Stack=9165
,P_Slave8_Offset_Z_Align=9166
,P_Slave8_Offset_Z_Align_Up=9167
,P_Slave8_Offset_Z_Align_Down=9168
,P_Slave8_Offset_Z_Stack_Up=9169
,P_Slave8_Offset_Z_Stack_Down=9170
,P_Slave8_Offset_Z_Wait_Pos=9171
,P_Slave10_Offset_X_Align=9172
,P_Slave10_Offset_X_Belt=9173
,P_Slave10_Offset_X_NG=9174
,P_Slave10_Offset_Z_Belt=9175
,P_Slave10_Offset_Z_Align=9176
,P_Slave10_Offset_Z_NG=9177
,P_Slave10_Offset_Z_Up=9178
,P_Slave1_Target_Z_CV_Blower_On_Pos=9179
,P_Slave1_Target_Z_CV_Blower_Off_Pos=9180
,P_Slave10_Target_Z_CV_Blower_On_Pos=9181
,P_Slave10_Target_Z_CV_Blower_Off_Pos=9182
,P_Anode_CV_Blower_On_Flag=9183
,P_Anode_CV_Blower_Off_Flag=9184
,P_Cathode_CV_Blower_On_Flag=9185
,P_Cathode_CV_Blower_Off_Flag=9186
,P_Select_RingBlow_Off_Use=9187
,P_2nd_PNP_Stack_Down_Pos=9188
,P_2nd_PNP_Stack_Up_Pos=9189
,P_Anode_Clamp_Down_MNTR=9190
,P_Cathode_Clamp_Down_MNTR=9191
,P_Clamp_1st_Vector_Y=9192
,P_Clamp_1st_Vector_Z=9193
,P_Clamp_1st_Vector_Vel=9194
,P_Clamp_2nd_Vector_Y=9195
,P_Clamp_2nd_Vector_Z=9196
,P_Clamp_2nd_Vector_Vel=9197
,P_Clamp_2nd_TM_Time=9198
,P_FR_Ta=9199
,P_FR_Ts=9200
,P_FR_Tm=9201
,P_Master_Motion_Heartbit_Flag=9202
,P_Master_Heartbit_Trigger=9203
,P_Parity_Heartbit_Bit=9204
,P_Master_Heartbit_Move=9205
,P_Force_Stop_Flag=9206
,P_Execute_DryRun_Stop_Timer=9207
,P_DryRun_Timer=9208
,P_Dryrun_Operating_Time=9209
,P_Anode_Align_Vac_Err_On=9210
,P_Cathode_Align_Vac_Err_On=9211
,P_Anode_1ST_TR_Vac_Err_On=9212
,P_Anode_2ND_TR_Vac_Err_On=9213
,P_Cathode_1ST_TR_Vac_Err_On=9214
,P_Cathode_2ND_TR_Vac_Err_On=9215
,P_MNTR_PLC0_Task_Max_Time=9218
,P_MNTR_PLC1_Task_Max_Time=9221
,P_MNTR_PLC2_Task_Max_Time=9224
,P_MNTR_PLC3_Task_Max_Time=9227
,P_MNTR_PLC4_Task_Max_Time=9230
,P_MNTR_PLC5_Task_Max_Time=9233
,P_MNTR_PLC6_Task_Max_Time=9236
,P_MNTR_PLC7_Task_Max_Time=9239
,P_MNTR_PLC8_Task_Max_Time=9242
,P_MNTR_PLC9_Task_Max_Time=9245
,P_MNTR_PLC10_Task_Max_Time=9248
,P_MNTR_PLC11_Task_Max_Time=9251
,P_MNTR_PLC12_Task_Max_Time=9254
,P_MNTR_PLC13_Task_Max_Time=9257
,P_MNTR_PLC14_Task_Max_Time=9260
,P_MNTR_PLC15_Task_Max_Time=9263
,P_MNTR_PLC16_Task_Max_Time=9266
,P_MNTR_PLC17_Task_Max_Time=9269
,P_MNTR_PLC18_Task_Max_Time=9272
,P_MNTR_PLC19_Task_Max_Time=9275
,P_MNTR_PLC20_Task_Max_Time=9278
,P_MNTR_PLC21_Task_Max_Time=9281
,P_MNTR_PLC22_Task_Max_Time=9284
,P_MNTR_PLC23_Task_Max_Time=9287
,P_MNTR_PLC24_Task_Max_Time=9290
,P_MNTR_PLC25_Task_Max_Time=9293
,P_MNTR_PLC26_Task_Max_Time=9296
,P_MNTR_PLC27_Task_Max_Time=9299
,P_MNTR_PLC28_Task_Max_Time=9302
,P_MNTR_PLC29_Task_Max_Time=9305
,P_MNTR_PLC30_Task_Max_Time=9308
,P_Coord_Shutdown_Status_log=9309
,P_In_Pos_Trg=9310
,P_Position_Calc_Status=9311
,P_PNP_Pos=9326
,P_Execute_Manage_Mode=9327
,P_Align_NG_Tack_Flag=9328
,P_2th_Ng_Front_Vision_Pos=9329
,P_Anode_Align_OK_Flag=9330
,P_Anode_Align_NG_Flag=9331
,P_Cathode_Align_OK_Flag=9332
,P_Cathode_Align_NG_Flag=9333
,P_Stack_Table_OK_Flag=9334
,P_Anode_Retry_OK_Flag=9335
,P_Anode_Retry_NG_Flag=9336
,P_Cathode_Retry_OK_Flag=9337
,P_Cathode_Retry_NG_Flag=9338
,P_Func_Anode_2TR_Avoid_X_Value=9339
,P_Func_Cathode_2TR_Avoid_X_Value=9340
,P_Anode_Surf_Insp_Trigger=9341
,P_Cathode_Surf_Insp_Trigger=9342
,P_CMD_Cathode_Vision_Tigger=9343
,P_CMD_Anode_Vision_Tigger=9344
,P_CMD_Stack_Table_Vision_Trigger=9345
,P_CMD_Cathode_Empty_Table_Vision=9346
,P_CMD_Anode_Empty_Table_Vision=9347
,P_CMD_Cathode_Existence_Vision=9348
,P_CMD_Anode_Existence_Vision=9349
,P_Align_Manager_Error_Cnt=9350
,P_Surf_Manager_Error_Cnt=9351
,P_Retry_Manager_Error_Cnt=9352
,P_Stack_Manager_Error_Cnt=9353
,P_Existence_Manager_Error_Cnt=9354
,P_Where_To_Occur_Error_Retry_Status=9355
,P_Which_Retry_Insp_Type=9356
,P_Where_To_Occur_Error_Align_Status=9357
,P_Which_Align_Insp_Type=9358
,P_Where_To_Occur_Error_Surf_Status=9359
,P_Which_Surf_Insp_Type=9360
,P_Where_To_Occur_Error_Existence_Status=9361
,P_Which_Existence_Insp_Type=9362
,P_Where_To_Occur_Error_Stack_Status=9363
,P_Vision_Clamping_Flag=9364
,P_Exist_Insp_Total_Time=9365
,P_Exist_Insp_Trg_Time=9366
,P_Stack_Insp_Total_Time=9367
,P_Stack_Trg_Time=9368
,P_Surf_Insp_Total_Time=9369
,P_Retry_Insp_Total_Time=9370
,P_Surf_TimeOut_Cnt=9371
,P_Align_TimeOut_Cnt=9372
,P_Retry_TimeOut_Cnt=9373
,P_Stack_TimeOut_Cnt=9374
,P_Align_Insp_Total_Time=9375
,P_Align_Trg_Time=9376
,P_Aligning_Time=9377
,P_Cathode_Empty_Table_Vision_Flag=9378
,P_Anode_Empty_Table_Vision_Flag=9379
,P_Selected_Surf_Insp_Type=9380
,P_Selected_Align_Insp_Type=9381
,P_Selected_Retry_Insp_Type=9382
,P_Selected_Exist_Insp_Type=9383
,P_VISION_RECIPE_PLC4_Surface_TrgOff=9384
,P_VISION_RECIPE_PLC4_Surface_Ins_Time=9385
,P_CMD_Cathode_Vision_Retry=9386
,P_CMD_Anode_Vision_Retry=9387
,P_Prev_Align_Manager_Status=9388
,P_Prev_Surf_Manager_Status=9389
,P_Prev_Exist_Manager_Status=9390
,P_Prev_Selected_Align_Type=9391
,P_Prev_Selected_Surf_Type=9392
,P_Prev_Selected_Exist_Type=9393
,P_Status_Align_Vision_Manager=9394
,P_Status_Surface_Vision_Manager=9395
,P_Status_Sheet_Existence_Vision_Manager=9396
,P_Status_Stack_Vision_Manager=9397
,P_Status_Retry_Vision_Manager=9398
,P_Vision_All_Status_Manager_Init_Flag=9399
,P_Cycle_Stop_Command=9400
,P_Surface_Inspection_Complete_Error=9401
,P_Switching_From_Cathode_To_Anode_Flag=9402
,P_Switching_From_Anode_To_Cathode_Flag=9403
,P_Switching_Mode_Complete_Flag=9404
,P_Surf_Cathode_Error_Count=9405
,P_Surf_Anode_Error_Count=9406
,P_First_Anode_Sheet_Supply_Flag=9407
,P_First_Cathode_Sheet_Supply_Flag=9408
,P_Set_Cathode_Align_Pos_Zero=9409
,P_Set_Anode_Align_Pos_Zero=9410
,P_Cathode_Cur_Mode=9411
,P_Anode_Cur_Mode=9412
,P_AN_to_CA_DR_Trig=9413
,P_CA_to_AN_DR_Trig=9414
,P_Sepa_CompDac_Value=9417
,P_FR_Move_Command=9418
,P_FF_Enable=9419
,P_Anode_Run_FR_Move_Check_AI=9420
,P_Cathode_Run_FR_Move_Check_AI=9421
,P_FR_Move_Check_AI_OffSet=9422
,P_Aver_FR_AI_Value=9428
,P_Process_Function_Command=9429
,P_HOLD_Existence_Insp_State_Machine=9430
,P_Execute_IsEnable_State_Machine=9431
,P_EXECUTE_FUNC_Ready_STEP=9432
,P_Execute_First_Sepa_Ontable_State_Machine=9433
,P_Execute_Prod_Manage_State_Machine=9434
,P_Execute_Enqueue_State_Machine=9435
,P_STOP_Initial_Process_STEP=9436
,P_STOP_Cylce_Stop_STEP=9437
,P_Stop_CycleStop_Position=9438
,P_Upcount_NextStep=9439
,P_SUSPEND_FUNC_JR_Discharge_STEP=9440
,P_SUSPEND_FUNC_ARC_STEP=9441
,P_Suspend_ARC_Complete_Flag=9442
,P_EXECUTE_FUNC_Debug_On_Sepa_STEP=9443
,P_QueueCommand_Occurs=9444
,P_EXECUTE_STEP=9445
,P_SUSPEND_STEP=9446
,P_HOLD_STEP=9447
,P_STOP_STEP=9448
,P_EXECUTE_Error_STEP=9449
,P_SUSPEND_Error_STEP=9450
,P_HOLD_Error_STEP=9451
,P_STOP_Error_STEP=9452
,P_Queue_Enqueue_Command=9453
,P_Queue_Enqueue_return=9454
,P_Queue_Dequeue_Command=9455
,P_Queue_Dequeue_return=9456
,P_Queue_Peek_Command=9457
,P_Dummy_Dequeue=9478
,P_Queue_Command_Status=9479
,P_Queue_Process_Command=9480
,P_Queue_Process_Status=9481
,P_Coord_Test=9482
,P_Coord_Test3=9483
,P_Coord_Test2=9484
,P_Coord_Motion_Prog_Down_Entering_Bit=9485
,P_PMAC_Coord_Status_Bit=9486
,P_Coord_Down_Check_Bit=9487
,P_PMAC_Coord_Down_Inspection_Flag=9488
,P_PMAC_Coord_Down_Num=9489
,P_PMAC_Coord_Error_Status=9490
,P_PLC01_Process_Function_Enter_Flag=9711
,P_PLC01_SubMotion_Active=9712
,P_PLC01_SlaveMotion_Active=9713
,P_EXECUTE_Isenable_MNTR=9714
,P_EXECUTE_IsEnable_Firt_Stacking_Flag=9715
,P_PLC01_Execute_Retry_Sepa_Mode_Count=9716
,P_SUSPEND_MNTR=9717
,P_SUSPEND_MNTR_2=9718
,P_Execute_Last_Run_Flag=9719
,P_Suspend_ARC_Request_Flag=9720
,P_Hold_Queue_Exist_Insp_MNTR=9721
,P_CirQueue_Status_Value=9722
,P_Debug_CirQueue_Status=9723
,P_Front_Index=9724
,P_Rear_Index=9725
,P_Index_Max=9726
,P_CirQueue_Length=9738
,P_Queue_Full=9739
,P_Queue_Empty=9740
,P_Queue_PeekEmpty=9741
,P_Self_items=9742
,P_Hold_Pause_Need_Flag=9743
,P_Pause_Ready_Flag=9744
,P_Pause_Running_Flag=9745
,P_Resume_Ready_Flag=9746
,P_Resume_Start_Flag=9747
,P_Hold_Resume_Need_Flag=9748
,P_Stack_Heart_Bit_Timer=9749
,P_Stack_Heart_Bit_Calc=9750
,P_Stack_Heart_Bit_Sync_State_Machine=9751
,P_Pause_Anode_MNTR_Min_Trigger=9752
,P_Pause_Anode_MNTR_Max_Trigger=9753
,P_Pause_Cathode_MNTR_Min_Trigger=9754
,P_Pause_Cathode_MNTR_Max_Trigger=9755
,P_Pause_Protect_Variable=9756
,P_Resume_Protect_Variable=9757
,P_Sepa_Mode_Opposite_Resume_Free=9758
,P_Sepa_To_Normal_Mode_Sync_Flag=9759
,P_Sepa_To_Normal_Mode_Sync_Err_Avoid=9760
,P_X_Axis_Num=10061
,P_Y_Axis_Num=10062
,P_Z_Axis_Num=10063
,P_ZZ_Axis_Num=10064
,P_X_Unit=10065
,P_Y_Unit=10066
,P_Z_Unit=10067
,P_ZZ_Unit=10068
,P_Pos_Memory_Bit_Save=10069
,P_Total_Unit_Bit=10070
,P_Total_Unit_Pos=10071
,P_Anode_1st_Unit_Status=10072
,P_Anode_2nd_Unit_Status=10073
,P_Anode_CLP_Unit_Status=10074
,P_FinalRoll_Unit_Status=10075
,P_StackTable_Unit_Status=10076
,P_Cathode_CLP_Unit_Status=10077
,P_Cathode_2nd_Unit_Status=10078
,P_Cathode_1st_Unit_Status=10079
,P_1st_Unloader_Unit_Status=10080
,P_Cathode_NG_PNP_Status=10081
,P_Anode_NG_PNP_Status=10082
,P_Unit_integrated_Status=10083
,P_Unit_Status_Update_Flag=10084
,P_Memory_Tower_Search_Flag=10085
,P_MemTow_integrated_return=10086
,P_Error_STMS_Memory_Tower_Status=10087
,P_STMS_Memory_Tower_Status=10088
,P_Memory_Tower_X_Err_Flag=10639
,P_Memory_Tower_Y_Err_Flag=10640
,P_Memory_Tower_Z_Err_Flag=10641
,P_Memory_Tower_ZZ_Err_Flag=10642
,P_CA_Clamp_Cell_Down_Pos=10643
,P_AN_Clamp_Cell_Down_Pos=10644
,P_PNP_Abort_Use_Bit=10741
,P_PNP_Abort_Use_Total_Bit=10742
,P_C_1st_PNP_FWD_Abort_Use_Bit=10743
,P_C_1st_PNP_BWD_Abort_Use_Bit=10744
,P_C_2nd_PNP_FWD_Abort_Use_Bit=10745
,P_C_2nd_PNP_BWD_Abort_Use_Bit=10746
,P_A_1st_PNP_FWD_Abort_Use_Bit=10747
,P_A_1st_PNP_BWD_Abort_Use_Bit=10748
,P_A_2nd_PNP_FWD_Abort_Use_Bit=10749
,P_A_2nd_PNP_BWD_Abort_Use_Bit=10750
,P_Single_Motor_Control_Bit=10751
,P_C_1st_PNP_FWD_Abort_Calc_Bit=10752
,P_C_1st_PNP_BWD_Abort_Calc_Bit=10753
,P_C_2nd_PNP_FWD_Abort_Calc_Bit=10754
,P_C_2nd_PNP_BWD_Abort_Calc_Bit=10755
,P_A_1st_PNP_FWD_Abort_Calc_Bit=10756
,P_A_1st_PNP_BWD_Abort_Calc_Bit=10757
,P_A_2nd_PNP_FWD_Abort_Calc_Bit=10758
,P_A_2nd_PNP_BWD_Abort_Calc_Bit=10759
,P_C_1st_PNP_FWD_Cur_Pos=10760
,P_C_1st_PNP_FWD_Cur_Vel=10761
,P_C_1st_PNP_BWD_Cur_Pos=10762
,P_C_1st_PNP_BWD_Cur_Vel=10763
,P_C_2nd_PNP_FWD_Cur_Pos=10764
,P_C_2nd_PNP_FWD_Cur_Vel=10765
,P_C_2nd_PNP_BWD_Cur_Pos=10766
,P_C_2nd_PNP_BWD_Cur_Vel=10767
,P_A_1st_PNP_FWD_Cur_Pos=10768
,P_A_1st_PNP_FWD_Cur_Vel=10769
,P_A_1st_PNP_BWD_Cur_Pos=10770
,P_A_1st_PNP_BWD_Cur_Vel=10771
,P_A_2nd_PNP_FWD_Cur_Pos=10772
,P_A_2nd_PNP_FWD_Cur_Vel=10773
,P_A_2nd_PNP_BWD_Cur_Pos=10774
,P_A_2nd_PNP_BWD_Cur_Vel=10775
,P_C_1st_PNP_FWD_Limit_Pos=10776
,P_C_1st_PNP_BWD_Limit_Pos=10777
,P_C_2nd_PNP_FWD_Limit_Pos=10778
,P_C_2nd_PNP_BWD_Limit_Pos=10779
,P_A_1st_PNP_FWD_Limit_Pos=10780
,P_A_1st_PNP_BWD_Limit_Pos=10781
,P_A_2nd_PNP_FWD_Limit_Pos=10782
,P_A_2nd_PNP_BWD_Limit_Pos=10783
,P_C_1st_PNP_FWD_Max_Limit_Pos=10784
,P_C_1st_PNP_BWD_Max_Limit_Pos=10785
,P_C_2nd_PNP_FWD_Max_Limit_Pos=10786
,P_C_2nd_PNP_BWD_Max_Limit_Pos=10787
,P_A_1st_PNP_FWD_Max_Limit_Pos=10788
,P_A_1st_PNP_BWD_Max_Limit_Pos=10789
,P_A_2nd_PNP_FWD_Max_Limit_Pos=10790
,P_A_2nd_PNP_BWD_Max_Limit_Pos=10791
,P_C_1st_PNP_FWD_Remain_Stroke=10792
,P_C_1st_PNP_BWD_Remain_Stroke=10793
,P_C_2nd_PNP_FWD_Remain_Stroke=10794
,P_C_2nd_PNP_BWD_Remain_Stroke=10795
,P_A_1st_PNP_FWD_Remain_Stroke=10796
,P_A_1st_PNP_BWD_Remain_Stroke=10797
,P_A_2nd_PNP_FWD_Remain_Stroke=10798
,P_A_2nd_PNP_BWD_Remain_Stroke=10799
,P_C_1st_PNP_FWD_Stroke_Time=10800
,P_C_1st_PNP_BWD_Stroke_Time=10801
,P_C_2nd_PNP_FWD_Stroke_Time=10802
,P_C_2nd_PNP_BWD_Stroke_Time=10803
,P_A_1st_PNP_FWD_Stroke_Time=10804
,P_A_1st_PNP_BWD_Stroke_Time=10805
,P_A_2nd_PNP_FWD_Stroke_Time=10806
,P_A_2nd_PNP_BWD_Stroke_Time=10807
,P_C_1st_PNP_FWD_Max_Speed=10808
,P_C_1st_PNP_BWD_Max_Speed=10809
,P_C_2nd_PNP_FWD_Max_Speed=10810
,P_C_2nd_PNP_BWD_Max_Speed=10811
,P_A_1st_PNP_FWD_Max_Speed=10812
,P_A_1st_PNP_BWD_Max_Speed=10813
,P_A_2nd_PNP_FWD_Max_Speed=10814
,P_A_2nd_PNP_BWD_Max_Speed=10815
,P_C_1st_PNP_FWD_ACC_Dis=10816
,P_C_1st_PNP_BWD_ACC_Dis=10817
,P_C_2nd_PNP_FWD_ACC_Dis=10818
,P_C_2nd_PNP_BWD_ACC_Dis=10819
,P_A_1st_PNP_FWD_ACC_Dis=10820
,P_A_1st_PNP_BWD_ACC_Dis=10821
,P_A_2nd_PNP_FWD_ACC_Dis=10822
,P_A_2nd_PNP_BWD_ACC_Dis=10823
,P_C_1st_PNP_FWD_AbortTa=10824
,P_C_1st_PNP_FWD_AbortTs=10825
,P_C_1st_PNP_BWD_AbortTa=10826
,P_C_1st_PNP_BWD_AbortTs=10827
,P_C_2nd_PNP_FWD_AbortTa=10828
,P_C_2nd_PNP_FWD_AbortTs=10829
,P_C_2nd_PNP_BWD_AbortTa=10830
,P_C_2nd_PNP_BWD_AbortTs=10831
,P_A_1st_PNP_FWD_AbortTa=10832
,P_A_1st_PNP_FWD_AbortTs=10833
,P_A_1st_PNP_BWD_AbortTa=10834
,P_A_1st_PNP_BWD_AbortTs=10835
,P_A_2nd_PNP_FWD_AbortTa=10836
,P_A_2nd_PNP_FWD_AbortTs=10837
,P_A_2nd_PNP_BWD_AbortTa=10838
,P_A_2nd_PNP_BWD_AbortTs=10839
,P_C_1st_PNP_FWD_Abort_Dec_Offset=10840
,P_C_1st_PNP_BWD_Abort_Dec_Offset=10841
,P_C_2nd_PNP_FWD_Abort_Dec_Offset=10842
,P_C_2nd_PNP_BWD_Abort_Dec_Offset=10843
,P_A_1st_PNP_FWD_Abort_Dec_Offset=10844
,P_A_1st_PNP_BWD_Abort_Dec_Offset=10845
,P_A_2nd_PNP_FWD_Abort_Dec_Offset=10846
,P_A_2nd_PNP_BWD_Abort_Dec_Offset=10847
,P_Abort_Init_Value=11208
,P_C_1st_PNP_FWD_AbortTa_Buffer=11209
,P_C_1st_PNP_FWD_AbortTs_Buffer=11210
,P_C_1st_PNP_BWD_AbortTa_Buffer=11211
,P_C_1st_PNP_BWD_AbortTs_Buffer=11212
,P_C_2nd_PNP_FWD_AbortTa_Buffer=11213
,P_C_2nd_PNP_FWD_AbortTs_Buffer=11214
,P_C_2nd_PNP_BWD_AbortTa_Buffer=11215
,P_C_2nd_PNP_BWD_AbortTs_Buffer=11216
,P_A_1st_PNP_FWD_AbortTa_Buffer=11217
,P_A_1st_PNP_FWD_AbortTs_Buffer=11218
,P_A_1st_PNP_BWD_AbortTa_Buffer=11219
,P_A_1st_PNP_BWD_AbortTs_Buffer=11220
,P_A_2nd_PNP_FWD_AbortTa_Buffer=11221
,P_A_2nd_PNP_FWD_AbortTs_Buffer=11222
,P_A_2nd_PNP_BWD_AbortTa_Buffer=11223
,P_A_2nd_PNP_BWD_AbortTs_Buffer=11224
,P_C_1st_PNP_FWD_Restore_Bit=11225
,P_C_1st_PNP_BWD_Restore_Bit=11226
,P_C_2nd_PNP_FWD_Restore_Bit=11227
,P_C_2nd_PNP_BWD_Restore_Bit=11228
,P_A_1st_PNP_FWD_Restore_Bit=11229
,P_A_1st_PNP_BWD_Restore_Bit=11230
,P_A_2nd_PNP_FWD_Restore_Bit=11231
,P_A_2nd_PNP_BWD_Restore_Bit=11232
,P_Align_Inspection_Time=11233
,P_Front_Inspection_Time=11234
,P_Stack_Inspection_Time=11235
,P_Existence_Inspection_Time=11236
,P_EmptyTable_Inspection_Time=11237
,P_FirstSepa_Inspection_Time=11238
,P_Vision_Anode_Sepa_Mode_Stack_Command=11239
,P_Vision_Cathode_Sepa_Mode_Stack_Command=11240
,P_Cathode_Sepa_Mode_Timer=11241
,P_Anode_Sepa_Mode_Timer=11242
,P_Vision_Pass=11243
,P_FirstSepa_Ret=11244
,P_Vision_Align_Command=11245
,P_Vision_Surface_Command=11246
,P_Vision_Stack_Command=11247
,P_Vision_Existence_Command=11248
,P_Vision_EmptyTable_Command=11249
,P_Vision_FirstSepa_Command=11250
,P_Selected_Align_Inspection_Unit=11251
,P_Selected_Surface_Inspection_Unit=11252
,P_Selected_Stack_Inspection_Unit=11253
,P_Selected_Existence_Inspection_Unit=11254
,P_Selected_EmptyTable_Inspection_Unit=11255
,P_Set_Cathode_Align_Zero_Pos=11256
,P_Set_Anode_Align_Zero_Pos=11257
,P_Vision_Align_State_Machine=11258
,P_Vision_Surface_State_Machine=11259
,P_Vision_Stack_State_Machine=11260
,P_Vision_Existence_State_Machine=11261
,P_Vision_EmptyTable_State_Machine=11262
,P_Vision_FirstSepa_State_Machine=11263
,P_Vision_Align_Status=11264
,P_Vision_Surface_Status=11265
,P_Vision_Stack_Status=11266
,P_Vision_Existence_Status=11267
,P_Vision_EmptyTable_Status=11268
,P_Vision_FirstSepa_Status=11269
,P_Cathode_Align_Table_Move=11272
,P_Anode_Align_Table_Move=11273
,P_Vision_Anode_Cell_Existence=11274
,P_Vision_Cathode_Cell_Existence=11275
,P_Align_Sheet_CHK=11276
,P_Anode_NG_Code=11277
,P_Cathode_NG_Code=11278
,P_Stack_NG_Code=11279
,P_Anode_Align_Stage_X_mm=5000
,P_Anode_Align_Stage_Y_mm=5001
,P_Anode_Align_Stage_T_mm=5002
,P_Cathode_Align_Stage_X_mm=5003
,P_Cathode_Align_Stage_Y_mm=5004
,P_Cathode_Align_Stage_T_mm=5005
,P_Vision_AutoCal_Mode=5010
,P_Vision_AutoCal_Command=5011
,P_Vision_AutoCal_Status=5012
,P_PMAC_AutoCal_Alarm=5013
,P_PMAC_AutoCal_Mode=5014
,P_PMAC_AutoCal_Status=5015
,P_Align_AutoCal_X_POS=5016
,P_Align_AutoCal_Y_POS=5017
,P_Align_AutoCal_T_POS=5018
,P_CMD_Align_Complete=5019
,P_Anode_Align_Data_Delete_Set_Flag=5020
,P_Anode_2nd_PNP_Data_Delete_Set_Flag=5021
,P_Cathode_Align_Data_Delete_Set_Flag=5022
,P_Cathode_2nd_PNP_Data_Delete_Set_Flag=5023
,P_Anode_Data_Delete_Vision_To_PMAC_Get_Flag=5024
,P_Cathode_Data_Delete_Vision_To_PMAC_Get_Flag=5025
,P_VISION_Anode_Cathode_Total_Recipe_Count=5029
,P_EPC_VISION_INPUT_Correction=5030
,P_Vison_Read_EPC_Camera_Move_Request=5031
,P_Anode_Vision_To_NG_Code=5035
,P_Cathode_Vision_To_NG_Code=5036
,P_Stack_Vision_To_NG_Code=5037
,P_Vision_Anode_Trigger_Count_Reset_Flag=5040
,P_Vision_Anode_Trigger_Count_Reset_Complete_Flag=5041
,P_Vision_Cathode_Trigger_Count_Reset_Flag=5042
,P_Vision_Cathode_Trigger_Count_Reset_Complete_Flag=5043
,P_Vision_Stack_Trigger_Count_Reset_Flag=5044
,P_Vision_Stack_Trigger_Count_Reset_Complete_Flag=5045
,P_Y_Vision_Work_Confirm_Operation_Flag=5047
,P_X_Vision_Work_Confirm_Operation_Ack=5048
,P_Vision_Send_Auto_Maual_Signal=5049
,P_Vision_Ca_AT_Retry_Cal_Flag=5050
,P_Vision_An_AT_Retry_Cal_Flag=5051
,P_PMAC_To_Vision_Ca_AT_Retry_Cal_Ack=5052
,P_PMAC_To_Vision_An_AT_Retry_Cal_Ack=5053
,P_Vision_Send_Middle_Skip_Off_Flag=5054
,P_Vision_Sepa_ARC_Judge=5056
,P_Ca_Align_DIO_Log=5060
,P_Ca_Surface_DIO_Log=5061
,P_An_Align_DIO_Log=5063
,P_An_Surface_DIO_Log=5064
,P_Stack_DIO_Log=5065
,P_Y_Vision_MSA_Use_Flag=5081
,P_Anode_Align_Vision_Sheet_1=5100
,P_Anode_Align_Vision_Sheet_2=5101
,P_Anode_Align_Vision_Sheet_3=5102
,P_Anode_Align_Vision_Sheet_4=5103
,P_Anode_Align_Vision_Sheet_5=5104
,P_Anode_Align_Vision_Sheet_6=5105
,P_Anode_Align_Vision_Sheet_7=5106
,P_Cathode_Align_Vision_Sheet_1=5110
,P_Cathode_Align_Vision_Sheet_2=5111
,P_Cathode_Align_Vision_Sheet_3=5112
,P_Cathode_Align_Vision_Sheet_4=5113
,P_Cathode_Align_Vision_Sheet_5=5114
,P_Cathode_Align_Vision_Sheet_6=5115
,P_Cathode_Align_Vision_Sheet_7=5116
,P_Stop_Debug_Flag=11280
,P_Stop_Status_Check_Address=11403
,P_Stop_Status_Save_Address=11404
,P_Stop_Check_RTN=11405
,P_Old_Total_Unit_Bit=11410
,P_Memory_Tower_Dec_Result=11411
,P_PNP_Move_Timer=11421
,P_PNP_Move_Delay_Time=11422
,P_Stop_Memory_Pos_RTN=11423
,P_Slave1_Motion_Command=11424
,P_Slave2_Motion_Command=11425
,P_Slave3_Motion_Command=11426
,P_Slave4_Motion_Command=11427
,P_Slave5_Motion_Command=11428
,P_Slave6_Motion_Command=11429
,P_Slave7_Motion_Command=11430
,P_Slave8_Motion_Command=11431
,P_Slave9_Motion_Command=11432
,P_Slave10_Motion_Command=11433
,P_Slave11_Motion_Command=11434
,P_Slave12_Motion_Command=11435
,P_Slave13_Motion_Command=11436
,P_Slave14_Motion_Command=11437
,P_Slave15_Motion_Command=11438
,P_Slave16_Motion_Command=11439
,P_Slave17_Motion_Command=11440
,P_Slave18_Motion_Command=11441
,P_Slave19_Motion_Command=11442
,P_Slave20_Motion_Command=11443
,P_PNP_90_Deg_TM=11444
,P_PNP_90_Deg_TA=11445
,P_PNP_90_Deg_TS=11446
,P_PNP_Ready_TM=11447
,P_PNP_Ready_TA=11448
,P_PNP_Ready_TS=11449
,P_PNP_45_Deg_TM=11450
,P_PNP_45_Deg_TA=11451
,P_PNP_45_Deg_TS=11452
,P_PROG_21_Program_Ver=2781
,P_PROG_23_Program_Ver=2783
,P_PROG_24_Program_Ver=2784
,P_PROG_25_Program_Ver=2785
,P_PROG_26_Program_Ver=2786
,P_PROG_27_Program_Ver=2787
,P_PROG_28_Program_Ver=2788
,P_PROG_30_Program_Ver=2790
,P_Master_Motion_Trigger=11453
,P_Parity_Bit=11454
,P_Master_Move=11455
,P_Master_TA=11456
,P_Master_TS=11457
,P_Master_TM=11458
,P_Anode_Count=11459
,P_Cathode_Count=11460
,P_Anode_Thickness=11461
,P_Cathode_Thickness=11462
,P_Sepa_Thickness=11463
,P_Anode_Thickness_PLC=11464
,P_Cathode_Thickness_PLC=11465
,P_Sepa_Thickness_PLC=11466
,P_Spool_Enable=11984
,P_Cathode_1St_Flow_Chart_Bit_Flag=11985
,P_Cathode_AT_Flow_Chart_Bit_Flag=11986
,P_Cathode_2nd_Flow_Chart_Bit_Flag=11987
,P_Anode_Clamp_Flow_Chart_Bit_Flag=11988
,P_Final_Roll_Flow_Chart_Bit_Flag=11989
,P_Stack_Table_Flow_Chart_Bit_Flag=11990
,P_Cathode_Clamp_Flow_Chart_Bit_Flag=11991
,P_Anode_2nd_Flow_Chart_Bit_Flag=11992
,P_Anode_AT_Flow_Chart_Bit_Flag=11993
,P_Anode_1St_Flow_Chart_Bit_Flag=11994
,P_Sepa_Unwinder_Flow_Chart_Bit_Flag=11995
,P_Slave5_Target_Z_For_Cutting=11996
,P_Slave31_Motion_Command=11997
,P_Pause_Err_Process=11998
,P_Pause_Err_Timer=11999
,P_Pause_Err_Count=12000
,P_Pause_Err_Use=12001
,P_Pause_Err_Use2=12002
,P_Anode_Pause_Signal_Err=12003
,P_Cathode_Pause_Signal_Err=12004
,P_Anode_Pause_Err=12005
,P_Anode_Pause_Err_Count=12006
,P_Execute_Wait_Mode_Memory_Tower=12017
,P_Execute_Vac_MNTR=12018
,P_Old_Cathode_Cur_Mode=12019
,P_Old_Anode_Cur_Mode=12060
,P_Anode_1TR_T_Belt_To_Align=12101
,P_Anode_1TR_T_Align_To_Belt=12102
,P_Anode_1TR_T_Ready_Pos=12103
,P_Anode_1TR_T_Ready_To_Align=12104
,P_Anode_1TR_T_Ready_To_Belt=12105
,P_Anode_Picker_Turn=12106
,P_Anode_2TR_T_Align_To_Stack=12107
,P_Anode_2TR_T_Stack_To_Align=12108
,P_Anode_Clamp_Off=12109
,P_Anode_Clamp_On=12110
,P_Anode_Clamp_Down=12111
,P_FR_Anode_Motion=12112
,P_FR_Cathode_Motion=12113
,P_Stack_Table_Down=12114
,P_Cathode_Clamp_On=12115
,P_Cathode_Clamp_Off=12116
,P_Cathode_Clamp_Down=12117
,P_Cathode_2TR_T_Align_To_Stack=12118
,P_Cathode_2TR_T_Stack_To_Align=12119
,P_Cathode_Picker_Turn=12120
,P_Cathode_1TR_T_Belt_To_Align=12121
,P_Cathode_1TR_T_Align_To_Belt=12122
,P_Cathode_1TR_T_Ready_Pos=12123
,P_Cathode_1TR_T_Ready_To_Align=12124
,P_Cathode_1TR_T_Ready_To_Belt=12125
,P_Anode_1TR_Z_Belt_To_Align=12126
,P_Anode_1TR_Z_Align_To_Belt=12127
,P_Anode_1TR_Z_Align_Down=12128
,P_Anode_1TR_Z_Align_UP=12129
,P_Anode_1TR_Z_Belt_Down=12130
,P_Anode_1TR_Z_Belt_UP=12131
,P_Anode_1TR_Z_Ready=12132
,P_Anode_1TR_Z_Align_Blow=12133
,P_Anode_1TR_Z_Belt_Vac=12134
,P_Cathode_1TR_Z_Belt_To_Align=12135
,P_Cathode_1TR_Z_Align_To_Belt=12136
,P_Cathode_1TR_Z_Align_Down=12137
,P_Cathode_1TR_Z_Align_UP=12138
,P_Cathode_1TR_Z_Belt_Down=12139
,P_Cathode_1TR_Z_Belt_UP=12140
,P_Cathode_1TR_Z_Ready=12141
,P_Cathode_1TR_Z_Align_Blow=12142
,P_Cathode_1TR_Z_Belt_Vac=12143
,P_Anode_2TR_Align_To_Stack=12144
,P_Anode_2TR_Stack_To_Align=12145
,P_Anode_2TR_Stack_Down=12146
,P_Anode_2TR_Stack_UP=12147
,P_Anode_2TR_Align_Down=12148
,P_Anode_2TR_Align_UP=12149
,P_Anode_2TR_Align_Vac=12150
,P_Anode_2TR_Stack_Blow=12151
,P_Anode_2TR_Stack_Sepa_Blow=12152
,P_FR_Last_Run_Motion=12153
,P_Servo_Dancer_Ready_Pos=12154
,P_Servo_Dancer_Ready_Offset=12155
,P_Servo_Dancer_Test=12156
,P_Align_Start_IO_Judgment=12157
,P_Driving_Clamp2=12158
,P_Driving_Clamp=12159
,P_MSA_Timer=12160
,P_SM_Cathode_Stack_MSA=12161
,P_SM_Anode_Stack_MSA=12162
,P_SM_Cathode_Align_MSA=12163
,P_SM_Anode_Align_MSA=12164
,P_MSA_Interlock=12165
,P_Anode_MSA_Final_Roll_Pos_Check=12166
,P_Anode_MSA_2nd_PNP_Pos_Check=12167
,P_Anode_MSA_1nd_PNP_Pos_Check=12168
,P_MSA_Err_Save_CA_Stack_MSA=12169
,P_MSA_Err_Save_AN_Stack_MSA=12170
,P_MSA_Err_Save_CA_Align_MSA=12171
,P_MSA_Err_Save_AN_Align_MSA=12172
,P_MSA_BTN_Err=12173
,P_Anode_Algin_MSA_RTN=12174
,P_Anode_Algin_MSA_RTN2=12175
,P_Cathode_Algin_MSA_RTN=12176
,P_Cathode_Stack_MSA_RTN=12177
,P_Anode_Stack_MSA_RTN=12178
,P_Anode_Align_MSA_Count=12179
,P_Cathode_Align_MSA_Count=12180
,P_Anode_Stack_MSA_Count=12181
,P_Cathode_Stack_MSA_Count=12182
,P_Cathode_Align_Stop_Blocked=12183
,P_Anode_Align_Stop_Blocked=12184
,P_Cathode_Stack_Stop_Blocked=12185
,P_Anode_Stack_Stop_Blocked=12186
,P_Anode_Align_MSA_Execute_Timer=12187
,P_Cathode_Align_MSA_Execute_Timer=12188
,P_Anode_Stack_MSA_Execute_Timer=12189
,P_Cathode_Stack_MSA_Execute_Timer=12190
,P_Anode_Align_Interlock_Blocked=12191
,P_Cathode_Align_Interlock_Blocked=12192
,P_Anode_Stack_Interlock_Blocked=12193
,P_Cathode_Stack_Interlock_Blocked=12194
,P_Anode_1TR_T_Align_POS=12195
,P_Anode_1TR_T_Belt_POS=12196
,P_Anode_1TR_T_Ready_POS=12197
,P_Anode_2TR_T_Align_POS=12198
,P_Anode_2TR_T_Stack_POS=12199
,P_Cathode_2TR_T_Align_POS=12200
,P_Cathode_2TR_T_Stack_POS=12201
,P_Cathode_1TR_T_Align_POS=12202
,P_Cathode_1TR_T_Belt_POS=12203
,P_Cathode_1TR_T_Ready_POS=12204
,P_Seq_Abort=12205
,P_Blocked_Abort=12206
,P_Abort_Flag=12207
,P_Opposite_Lane_1ST_TR_Safe_Pos=12208
,P_Opposite_Lane_P_PMAC_Status=12209
,P_Opposite_Lane_OFF_Not_Start=12210
,P_Pause_Alarm_Blocked=12211
,P_Old_Alarm_Arr=12212
,P_Cycle_Stop_Delay_Time=12213
,P_Cycle_Stop_Offset=12214
,P_Opposite_Lane_Abort_Alram_Flag=12215
,P_Cathode_Clmap_Y1_Ready_Pos=12216
,P_Cathode_Clmap_Y1_Clamp_Pos=12217
,P_Anode_Clmap_Y1_Ready_Pos=12218
,P_Anode_Clmap_Y1_Clamp_Pos=12219
,P_Cathode_Clmap_Y2_Ready_Pos=12220
,P_Cathode_Clmap_Y2_Clamp_Pos=12221
,P_Anode_Clmap_Y2_Ready_Pos=12222
,P_Anode_Clmap_Y2_Clamp_Pos=12223
,P_Cathode_Clamp_Z2_Ready_Pos=12224
,P_Cathode_Clamp_Z2_Clamp_Pos=12225
,P_Anode_Clamp_Z2_Ready_Pos=12226
,P_Anode_Clamp_Z2_Clamp_Pos=12227
,P_Cathode_Clamp_Z1_Ready_Pos=12228
,P_Cathode_Clamp_Z1_Clamp_Pos=12229
,P_Anode_Clamp_Z1_Ready_Pos=12230
,P_Anode_Clamp_Z1_Clamp_Pos=12231
,P_Cathode_Clamp_Z2_Cell_Down=12232
,P_Anode_Clamp_Z2_Cell_Down=12233
,P_Cathode_Clamp_Z1_Cell_Down=12234
,P_Anode_Clamp_Z1_Cell_Down=12235
,P_Single_Run_Pass=12236
,P_Cathode_2nd_PNP_Sepa_Blow=12237
,P_Cathode_2nd_PNP_Align_Blow=12238
,P_Cathode_2nd_PNP_Stack_Blow=12239
,P_Cathode_2nd_PNP_Align_Vac=12240
,P_Cathode_2nd_PNP_Align_Up_Motion=12241
,P_Cathode_2nd_PNP_Align_Down_Motion=12242
,P_Cathode_2nd_PNP_Stack_Up_Motion=12243
,P_Cathode_2nd_PNP_Stack_Down_Motion=12244
,P_Cathode_2nd_PNP_Stack_To_Align_Motion=12245
,P_Cathode_2nd_PNP_Align_To_Stack_Motion=12246
,P_Door_Open_Stop_Count=12247
,P_Buf_Stack_NG_Flag=12248
,P_Stop_1st_PNP_Move=12249
,P_Seq_Abort_Timer=12250
,P_Sync_Test=12251
,P_Dry_Pause_Flag=12252
,P_Dry_Run_Pasue_Timer=12253
,P_Resume_Stop_Blocked=12254
,P_Discharge_Wait=12255
,P_Command_Run_Flag=12256
,P_Stop_Cmd_Origin=12257
,P_Old_M_Y_Sepa_Cutter_SSR_On=12273
,P_Sepa_Cutter_SSR_Off_Time=12274
,P_Sepa_Cutter_SSR_Off=12275
,P_Sepa_Cutter_SSR_Off_Timer=12276
,P_Starting_Pause_IO_Flag=12277
,P_PLC03_Seq_Pause_Start_Flag=12278
,P_PLC03_Seq_Pause_Start_State_Machine=12279
,P_PLC03_Seq_Pause_Start_Status=12280
,P_ARC_NP_Push_BTN=12281
,P_ARC_UI_Push_BTN=12282
,P_M_Manual_ARC_BTN=12283
,P_Two_Btn_Active_Flag=12284
,P_Two_Btn_Interlock_Time=12285
,P_NP_Unwinder_Active_Hold=12286
,P_MAX_KGF=12287
,P_KGF_TO_DAC_RATIO=12288
,P_Dac_Out_Value=12289
,P_Recipe_Dancer_input_kgf=12290
,P_Cathode_NG_PNP_Vel_Zero_Set=12291
,P_Anode_NG_PNP_Vel_Zero_Set=12292
,P_Anode_Run_DR=12293
,P_Cathode_Run_DR=12294
,P_1st_UND_Grip_Time=12295
,P_1st_UND_Grip_Time_offset=12296
,P_1st_UND_Grip_Time_offset2=12297
,P_First_Sepa_Driving_Use=12298
,P_First_Sepa_Driving_Timing=12299
,P_Unloader_Safe_rtn=12300
,P_Final_Start=12301
,P_Driving_Start=12302
,P_Starting_Pause_IO_OFF_Flag=12303
,P_individual_Hold_return=12304
,P_individual_Hold_return2=12305
,P_Tension_Ready_Pass=12306
,P_Discharge_cal_rtn=12307
,P_Old_Tact_Current_Mode=12308
,P_Sheet_Clear=12309
,P_Anode_Clamp_On_Time2=12310
,P_Anode_Clamp_On_Time=12311
,P_Cathode_Clamp_On_Time=12312
,P_Cathode_Clamp_On_Time2=12313
,P_Offset=12314
,P_Man_C=12315
,P_NG_Box_Stop_Use=12316
,P_SlewTime=12317
,P_Old_SlewTime=12318
,P_Resume_MNTR1=12319
,P_Resume_MNTR2=12320
,P_Resume_MNTR3=12321
,P_Resume_MNTR4=12322
,P_Resume_MNTR5=12323
,P_Resume_MNTR6=12324
,P_Resume_MNTR7=12325
,P_Resume_MNTR8=12326
,P_Resume_MNTR9=12327
,P_Resume_MNTR10=12328
,P_Resume_MNTR11=12329
,P_Resume_MNTR12=12330
,P_old_P_Anode_Count=12331
,P_Sheet_Paper_BWD_Count=12332
,P_Stop_CHK=12333
,P_Seq_Pause=12334
,P_Seq_Pause2=12335
,P_MSA_TimeBase_Rtn=12336
,P_Old_Vison_Read_EPC_Camera_Move_Request=12337
,P_First_Sepa_Time_Out_Count=12338
,P_Align_Retry_Cal_RTN=12339
,P_Driving_Cal=12356
,P_Driving_End_Pos=12357
,P_Driving_Start_Pos=12358
,P_Anode_Align_Blow=12364
,P_Cathode_Align_Blow=12365
,P_Home_Pos_Err_Cnt1=12406
,P_Home_Pos_Err_Cnt2=12407
,P_Home_Pos_Err_Cnt3=12408
,P_Home_Pos_Err_Cnt4=12409
,P_Align_Inspection_Delay=12410
,P_Anode_Sheet_Test=12416
,P_Cathode_Sheet_Test=12417
,P_Anode_Sheet_Interlock_Timing=12418
,P_Cathode_Sheet_Interlock_Timing=12419
,P_Discharge_Err_MNTR=12420
,P_Arc_Err_MNTR=12421
,P_Abort_Cnt=12422
,P_EMO_Cnt=12423
,P_Dry_Run_Inspection=12424
,P_Servo_ON_MNTR1=12425
,P_Servo_ON_MNTR2=12426
,P_Servo_ON_MNTR3=12427
,P_Servo_ON_MNTR4=12428
,P_Servo_ON_MNTR5=12429
,P_Servo_ON_MNTR6=12430
,P_Servo_ON_MNTR7=12431
,P_Servo_ON_MNTR8=12432
,P_Servo_ON_MNTR9=12433
,P_Servo_ON_MNTR10=12434
,P_Servo_ON_MNTR11=12435
,P_Servo_ON_MNTR12=12436
,P_Servo_ON_MNTR13=12437
,P_Servo_ON_MNTR14=12438
,P_Servo_ON_MNTR15=12439
,P_Servo_ON_MNTR16=12440
,P_Servo_ON_MNTR17=12441
,P_Servo_ON_MNTR18=12442
,P_Servo_ON_MNTR19=12443
,P_Servo_ON_MNTR20=12444
,P_Servo_ON_MNTR21=12445
,P_Servo_ON_MNTR22=12446
,P_Servo_ON_MNTR23=12447
,P_Servo_ON_MNTR24=12448
,P_Servo_ON_MNTR25=12449
,P_Servo_ON_MNTR26=12450
,P_Servo_ON_MNTR27=12451
,P_Servo_ON_MNTR28=12452
,P_Servo_ON_MNTR29=12453
,P_Servo_ON_MNTR30=12454
,P_X_IO_WinMess_Connect_BTN=12455
,P_Ecat_ReConnetion_State_Machine=12456
,P_Ecat_Reconnection_Timer=12457
,P_Y_Ecat_Reconnecting=12458
,P_Y_Ecat_ReConnection_Fail=12459
,P_Y_Ecat_ReConnection_Complete=12460
,P_X_Ecat_Reconnection_BTN=12461
,P_X_PLC_Setup_Mode_Check=12462
,P_Interlock_On_Off_Flag=12463
,P_X_Old_MC_Reconnect_BTN_Signal=12464
,P_BTN_1st_ULD_Data_Clear=12465
,P_Old_BTN_1st_ULD_Data_Clear=12466
,P_Old_M_Y_1st_Unloader_UnGrip_Sol=12467
,P_Sepa_Cutter_Heat_Meter=12468
,P_Sepa_Cutter_Heating_Timer=12469
,P_Middle_Skip_Off_Flag=12470
,P_Stop_MNTR1=12471
,P_Stop_MNTR2=12472
,P_Sheet_Pos_Offset=12473
,P_Stopping_Wait_Time=12474
,P_Stopping_Test_Timer=12475
,P_1st_ULD_OK_Lamp=12486
,P_1st_ULD_NG_Lamp=12487
,P_1st_ULD_Sample_QC_Lamp=12488
,P_Proceed_Execute_Flag=12489
,P_Continuous_Call_Stack_NG_Flag=12490
,P_Continuous_Call_Stack_OK_Flag=12491
,P_Cathode_Picker_Home_Pos=12492
,P_Anode_Picker_Home_Pos=12493
,P_FR_Sheet_Paper_Home_Chk=12494
,P_Align_TimeOut1=12495
,P_Align_TimeOut2=12496
,P_Align_TimeOut3=12497
,P_Align_TimeOut4=12498
,P_Align_TimeOut5=12499
,P_Align_TimeOut6=12500
,P_Anode_Align_OK=12501
,P_Cathode_Align_OK=12502
,P_Anode_Align_NG=12503
,P_Cathode_Align_NG=12504
,P_Anode_Align_TimeOut=12505
,P_Cathode_Align_TimeOut=12506
,P_Anode_Surf_OK=12507
,P_Cathode_Surf_OK=12508
,P_Anode_Surf_NG=12509
,P_Cathode_Surf_NG=12510
,P_Anode_Surf_TimeOut=12511
,P_Cathode_Surf_TimeOut=12512
,P_Surf_TimeOut1=12513
,P_Surf_TimeOut2=12514
,P_Surf_TimeOut3=12515
,P_Surf_TimeOut4=12516
,P_Surf_TimeOut5=12517
,P_Surf_TimeOut6=12518
,P_Anode_Stack_TimeOut=12519
,P_Cathode_Stack_TimeOut=12520
,P_Anode_Stack_OK=12521
,P_Cathode_Stack_OK=12522
,P_Anode_Stack_NG=12523
,P_Cathode_Stack_NG=12524
,P_Stack_TimeOut1=12525
,P_Stack_TimeOut2=12526
,P_Stack_TimeOut3=12527
,P_Align_Move_Err=12528
,P_Ecat_Test=12529
,P_Scan_Aver=12532
,P_Scan_MAX=12533
,P_Cathode_1TR_Picker_T_Belt_POS=12534
,P_Cathode_1TR_Picker_T_Align_POS=12535
,P_Anode_1TR_Picker_T_Belt_POS=12536
,P_Anode_1TR_Picker_T_Align_POS=12537
,P_1TR_Picker_T_Align_POS=12538
,P_AVRG_Lower_Sepa_Thickness_mm=12539
,P_AVRG_Upper_Sepa_Thickness_mm=12540
,P_PLC06_Upper_Curr_Unwinder_Thickness_mm=12541
,P_PLC06_Lower_Curr_Unwinder_Thickness_mm=12542
,P_Upper_Curr_Spool_Radius=12543
,P_Lower_Curr_Spool_Radius=12544
,P_PLC06_Curr_Upper_Distance_mm=12545
,P_PLC06_Curr_Lower_Distance_mm=12546
,P_Upper_Sepa_Min_Distance_mm=12547
,P_Lower_Sepa_Min_Distance_mm=12548
,P_PLC06_Sepa_Change_Set=12549
,P_Upper_Sepa_To_Sensor_Min_Dis=12550
,P_Upper_Sepa_To_Sensor_Max_Dis=12551
,P_Upper_Sensor_To_Unwinder_Core_Dis=12552
,P_Upper_Sensor_Min_AD=12553
,P_Upper_Sensor_Max_AD=12554
,P_Lower_Sepa_To_Sensor_Min_Dis=12555
,P_Lower_Sepa_To_Sensor_Max_Dis=12556
,P_Lower_Sensor_To_Unwinder_Core_Dis=12557
,P_Lower_Sensor_Min_AD=12558
,P_Lower_Sensor_Max_AD=12559
,M_AI_Upper_Sepa_Sensing=372
,M_AI_Lower_Sepa_Sensing=373
,P_Status_NP_BTN_Lower_Unwinder=12560
,P_Status_NP_BTN_Upper_Unwinder=12561
,P_Driving_CamTable_Scale_Change_Flag=12562
,P_FR_Driving_Diameter=12563
,P_FR_Driving_Floating_Point=12564
,P_FR_Driving_Reward=12565
,P_Unwinder_Master_Following_Use_Flag=12566
,P_Unwinder_Master_Following_On=12567
,P_Old_Master_Following_Start=12568
,P_Unwinder_Master_Following_Scale=12569
,P_Unwinder_Jog_Use_Flag=12570
,P_Old_Jog_Start=12571
,P_Unwinder_Jog_Total_Time=12572
,P_Unwinder_Ta=12573
,P_Unwinder_Ts=12574
,P_Unwinder_Tm=12575
,P_Unwinder_1mm_Deg=12576
,P_Unwinder_Jog_Pos=12577
,P_Unwinder_Jog_Cnt=12578
,P_PLC06_Frist_Flag=12579
,P_Sepa_AI=12580
,P_PLC06_Reel_Upper_Change_Flag=12581
,P_PLC06_Reel_Lower_Change_Flag=12582
,P_Spool_Ready_Enable_Flag=12583
,P_Spool_Lack_Flag=12584
,P_Sepa_DR_Start_Flag=12585
,P_cdTime_Tact_Sec=12586
,P_Master_Tact_Sec=12587
,P_Prev_Err_Pos=12588
,P_Cur_Arc_Rad=12589
,P_Cur_Arc_Deg=12590
,P_Spool_Velocity=12591
,P_Lin_Prop_Vel=12592
,P_Err_Pos=12593
,P_Lin_Deriv_Vel=12594
,P_Lin_Dacer_Kd=12595
,P_Lin_Dacer_Kp=12596
,P_Running_CDTimer=12597
,P_Unwinder_Jog_Ta=12598
,P_Unwinder_Jog_Ts=12599
,P_Unwinder_Vel_Test_Time=12600
,P_Set_Interval_Time=12601
,P_PLC06_Upper_Sepa_AI_Timer=12602
,P_PLC06_Upper_Sepa_AI_Data=12603
,P_PLC06_Upper_Sepa_AI_Cnt=12604
,P_PLC06_Upper_AVRG_Sensor_Data=12605
,P_PLC06_Lower_Sepa_AI_Timer=12606
,P_PLC06_Lower_Sepa_AI_Data=12607
,P_PLC06_Lower_Sepa_AI_Cnt=12608
,P_PLC06_Lower_AVRG_Sensor_Data=12609
,P_PLC06_Sepa_Upper_Thickness_Timer=12610
,P_PLC06_Sepa_Upper_Thickness_Data=12611
,P_PLC06_Sepa_Upper_Thickness_Cnt=12612
,P_PLC06_Sepa_Lower_Thickness_Timer=12613
,P_PLC06_Sepa_Lower_Thickness_Data=12614
,P_PLC06_Sepa_Lower_Thickness_Cnt=12615
,P_Sepa_Thickness_Chk_Timer=12616
,P_Spool_Length=12617
,P_Cascade_Sf_Driving_Value=12618
,P_Cascade_Sf_None_Driving_Value=12619
,P_Sepa_Min_Value_Cal_Cmd=12620
,P_Total_Sepa_Need_Length=12621
,P_Alpa=12622
,P_Sepa_Num_of_Turns=12623
,P_Sepa_Turn_Num=12624
,P_Accumulate_Value=12625
,P_Sharft_to_Sepa_Core_mm=12626
,P_Sepa_Cal_Circum=12627
,P_Sepa_Min_Need_Thickness=12628
,P_Sepa_Min_Thickness_Cmd=12629
,P_Sepa_Accumulate_Cmd=12630
,P_Sepa_Required_Amount=12631
,P_Sepa_Current_Thickness=12632
,P_Sepa_Initial_Tickness=12633
,P_Sepa_Required_Update_Timer=12634
,P_TEST_EPC_Interlock_Auto=12635
,P_TEST_EPC_Interlock_Manual=12636
,P_Discharge_Total_Tact=12637
,P_PLC15_Sub_Function_Dryrun_Active_Flag=12650
,P_Sepa_Rotation_Sequence_Run_Trigger_Cnt=12651
,P_Sepa_Mode_Sepa_Recipe_Count=12652
,P_Discharged_After_End_Trigger=12653
,P_Unloader_1st_Grip_Delay=12654
,P_Separate_Cutter_Heating_Limit_Value=12655
,P_Separate_Cutting_Current=12656
,P_Separate_Cutter_Change_Cycle=12657
,P_X_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger=12658
,P_X_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger=12659
,P_X_Cathode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger=12660
,P_X_Anode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger=12661
,P_X_Stack_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger=12662
,P_Interlock_Messege_Confirmed=12663
,P_X_MC_Communication_HeartBit=12664
,P_SV_Cathode_Count=12665
,P_SV_Anode_Count=12666
,P_SV_Cathode_Reference_Thickness=12670
,P_SV_Anode_Reference_Thickness=12671
,P_SV_Stack_Table_Damper_Cathode=12672
,P_SV_Stack_Table_Damper_Anode=12673
,P_SV_Sepa_Reference_Thickness=12674
,P_SV_Jelly_Roll_Width=12675
,P_Cathode_Align_Continuous_NG_Recipe=12676
,P_Anode_Align_Continuous_NG_Recipe=12677
,P_Stack_Vision_Continuous_NG_Recipe=12678
,P_PLC_Recipe_EPC_Sepa_Count=12679
,P_PLC_Recipe_Revise_Sepa=12680
,P_X_PLC_to_PMAC_Correction_Value=12681
,P_Anode_Align_Continuous_NG_Check_range=12682
,P_Cathode_Align_Continuous_NG_Check_range=12683
,P_Stack_Align_Continuous_NG_Check_range=12684
,P_Cathode_Surface_Continuous_NG_Recipe=12685
,P_Anode_Surface_Continuous_NG_Recipe=12686
,P_Cathode_Surface_Continuous_NG_Check_range=12687
,P_Anode_Surface_Continuous_NG_Check_range=12688
,P_Servo_Dancer_Alarm_Maximum_Angle_Value=12689
,P_Servo_Dancer_Alarm_Minimum_Angle_Value=12690
,P_Current_Selected_Spool_Rev_Counts_Init_Read=12691
,P_Spool_ARC_Distance_mm=12692
,P_ARC_Upper_Request_Sepa_Thickness_mm=12693
,P_ARC_Lower_Request_Sepa_Thickness_mm=12694
,P_Selected_Spool_Arc_Set_Rev_Counts_Value=12695
,P_Set_Cnt_FR_Moving_Sepa_ARC=12696
,P_Current_Selected_Spool_Rev_Counts=12697
,P_AI_Cathode_Clamp_Damper=12698
,P_AI_Anode_Clamp_Damper=12699
,P_Select_Sheet_Value=12710
,P_BTN_Config_Setup_Mode_Select=12711
,P_Sepa_Thickness_Max_Value=12712
,P_AI_Cathode_Clamp_Damper_Zero_Mpa_Analog_Value=12713
,P_AI_Anode_Clamp_Damper_Zero_Mpa_Analog_Value=12714
,P_Accumulated_Movement_MM_Unit_Cathode_1ST_pnp=12715
,P_Accumulated_Movement_MM_Unit_Anode_1ST_pnp=12716
,P_Accumulated_Movement_MM_Unit_Cathode_2nd_pnp=12717
,P_Accumulated_Movement_MM_Unit_Anode_2nd_pnp=12718
,P_AI_Anode_Clamp_Damper_Mpa=12719
,P_AI_Cathode_Clamp_Damper_Mpa=12720
,P_Current_Whole_Stack_Jelly_Roll_Thinckness_mm=12721
,P_Upper_Sepa_Current_Thickness_um=12722
,P_Lower_Sepa_Current_Thickness_um=12723
,P_Spool_Rotate_Distance=12724
,Spool_Diameter=12725
,P_Current_FR_Moving_Cnt_To_PlC=12726
,P_MES_APC_Select_Btn=12727
,P_AO_Anode_Clamp_Damper=12728
,P_AO_Cathode_Clamp_Damper=12729
,P_Sepa_Length=12730
,P_Minus_Limit_Detect_Popup_Flag=12731
,P_Plus_Limit_Detect_Popup_Flag=12732
,P_Fatal_Fe_Limit_Detect_Popup_Flag=12733
,P_Emergency_Alarm_Popup_Flag=12734
,P_SepaArcing_Popup_Flag=12735
,P_Y_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger=12736
,P_Y_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger=12737
,P_Y_Cathode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger=12738
,P_Y_Anode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger=12739
,P_Y_Stack_Align_Calibration_twisted_Cycle_Stop_Request_Trigger=12740
,P_Current_Selected_Sheet_Value=12741
,P_Status_Config_Mode_Select=12742
,P_Sepa_Thickness_Jig_Value=12743
,P_PV_Stack_Table_Damper_Cathode=12744
,P_PV_Stack_Table_Damper_Anode=12745
,P_Discharge_Standby_Pos_Tack_Time=12746
,P_Discharge_FR_MainZ_Pos_Tack_Time=12747
,P_Discharge_Unloader_Go_Pos_Tack_Time=12748
,P_Discharge_SubZ_Down_Pos_Tack_Time=12749
,P_Discharge_Unloader_Cutting_Pos_Tack_Time=12750
,P_Discharge_FR_Clamp_ON_Complete_Tack_Time=12751
,P_Discharge_Cutting_Complete_Tack_Time=12752
,P_Discharge_Motion_PG_Active_Starting_Tack_Time=12753
,P_Discharge_Motion_PG_Active_Complete_Tack_Time=12754
,P_Discharge_Sepa_First_Complete_Tack_Time=12755
,P_Discharge_Complete_Tack_Time=12756
,P_Discharge_Total_Tack_Time=12757
,P_Anode_Clamp_TackTime_Array0=12758
,P_Anode_Clamp_TackTime_Array1=12759
,P_Anode_Clamp_TackTime_Array2=12760
,P_Anode_Clamp_TackTime_Array3=12761
,P_Anode_Clamp_TackTime_Array4=12762
,P_Anode_Clamp_TackTime_Array5=12763
,P_Anode_Clamp_TackTime_Array6=12764
,P_Anode_Clamp_TackTime_Array7=12765
,P_Anode_Clamp_TackTime_Array8=12766
,P_Anode_Clamp_TackTime_Array9=12767
,P_Anode_Clamp_TackTime_Array10=12768
,P_Stacking_TackTime_Array0=12769
,P_Stacking_TackTime_Array1=12770
,P_Stacking_TackTime_Array2=12771
,P_Stacking_TackTime_Array3=12772
,P_Stacking_TackTime_Array4=12773
,P_Stacking_TackTime_Array5=12774
,P_Stacking_TackTime_Array6=12775
,P_Stacking_TackTime_Array7=12776
,P_Stacking_TackTime_Array8=12777
,P_Stacking_TackTime_Array9=12778
,P_Stacking_TackTime_Array10=12779
,P_Cathode_Clamp_TackTime_Array0=12780
,P_Cathode_Clamp_TackTime_Array1=12781
,P_Cathode_Clamp_TackTime_Array2=12782
,P_Cathode_Clamp_TackTime_Array3=12783
,P_Cathode_Clamp_TackTime_Array4=12784
,P_Cathode_Clamp_TackTime_Array5=12785
,P_Cathode_Clamp_TackTime_Array6=12786
,P_Cathode_Clamp_TackTime_Array7=12787
,P_Cathode_Clamp_TackTime_Array8=12788
,P_Cathode_Clamp_TackTime_Array9=12789
,P_Cathode_Clamp_TackTime_Array10=12790
,P_JellyRoll_Out_TackTime_Array0=12791
,P_JellyRoll_Out_TackTime_Array1=12792
,P_JellyRoll_Out_TackTime_Array2=12793
,P_JellyRoll_Out_TackTime_Array3=12794
,P_JellyRoll_Out_TackTime_Array4=12795
,P_JellyRoll_Out_TackTime_Array5=12796
,P_JellyRoll_Out_TackTime_Array6=12797
,P_JellyRoll_Out_TackTime_Array7=12798
,P_JellyRoll_Out_TackTime_Array8=12799
,P_JellyRoll_Out_TackTime_Array9=12800
,P_JellyRoll_Out_TackTime_Array10=12801
,P_Anode_1th_TackTime_Array0=12802
,P_Anode_1th_TackTime_Array1=12803
,P_Anode_1th_TackTime_Array2=12804
,P_Anode_1th_TackTime_Array3=12805
,P_Anode_1th_TackTime_Array4=12806
,P_Anode_1th_TackTime_Array5=12807
,P_Anode_1th_TackTime_Array6=12808
,P_Anode_1th_TackTime_Array7=12809
,P_Anode_1th_TackTime_Array8=12810
,P_Anode_1th_TackTime_Array9=12811
,P_Anode_1th_TackTime_Array10=12812
,P_Cathode_1th_TackTime_Array0=12813
,P_Cathode_1th_TackTime_Array1=12814
,P_Cathode_1th_TackTime_Array2=12815
,P_Cathode_1th_TackTime_Array3=12816
,P_Cathode_1th_TackTime_Array4=12817
,P_Cathode_1th_TackTime_Array5=12818
,P_Cathode_1th_TackTime_Array6=12819
,P_Cathode_1th_TackTime_Array7=12820
,P_Cathode_1th_TackTime_Array8=12821
,P_Cathode_1th_TackTime_Array9=12822
,P_Cathode_1th_TackTime_Array10=12823
,P_Anode_2th_TackTime_Array0=12824
,P_Anode_2th_TackTime_Array1=12825
,P_Anode_2th_TackTime_Array2=12826
,P_Anode_2th_TackTime_Array3=12827
,P_Anode_2th_TackTime_Array4=12828
,P_Anode_2th_TackTime_Array5=12829
,P_Anode_2th_TackTime_Array6=12830
,P_Anode_2th_TackTime_Array7=12831
,P_Anode_2th_TackTime_Array8=12832
,P_Anode_2th_TackTime_Array9=12833
,P_Anode_2th_TackTime_Array10=12834
,P_Cathode_2th_TackTime_Array0=12835
,P_Cathode_2th_TackTime_Array1=12836
,P_Cathode_2th_TackTime_Array2=12837
,P_Cathode_2th_TackTime_Array3=12838
,P_Cathode_2th_TackTime_Array4=12839
,P_Cathode_2th_TackTime_Array5=12840
,P_Cathode_2th_TackTime_Array6=12841
,P_Cathode_2th_TackTime_Array7=12842
,P_Cathode_2th_TackTime_Array8=12843
,P_Cathode_2th_TackTime_Array9=12844
,P_Cathode_2th_TackTime_Array10=12845
,P_Anode_Align_Table_TackTime_Array0=12846
,P_Anode_Align_Table_TackTime_Array1=12847
,P_Anode_Align_Table_TackTime_Array2=12848
,P_Anode_Align_Table_TackTime_Array3=12849
,P_Anode_Align_Table_TackTime_Array4=12850
,P_Anode_Align_Table_TackTime_Array5=12851
,P_Anode_Align_Table_TackTime_Array6=12852
,P_Anode_Align_Table_TackTime_Array7=12853
,P_Anode_Align_Table_TackTime_Array8=12854
,P_Anode_Align_Table_TackTime_Array9=12855
,P_Anode_Align_Table_TackTime_Array10=12856
,P_Cathode_Align_Table_TackTime_Array0=12857
,P_Cathode_Align_Table_TackTime_Array1=12858
,P_Cathode_Align_Table_TackTime_Array2=12859
,P_Cathode_Align_Table_TackTime_Array3=12860
,P_Cathode_Align_Table_TackTime_Array4=12861
,P_Cathode_Align_Table_TackTime_Array5=12862
,P_Cathode_Align_Table_TackTime_Array6=12863
,P_Cathode_Align_Table_TackTime_Array7=12864
,P_Cathode_Align_Table_TackTime_Array8=12865
,P_Cathode_Align_Table_TackTime_Array9=12866
,P_Cathode_Align_Table_TackTime_Array10=12867
,P_Anode_NG_PNP_TackTime_Array0=12868
,P_Anode_NG_PNP_TackTime_Array1=12869
,P_Anode_NG_PNP_TackTime_Array2=12870
,P_Anode_NG_PNP_TackTime_Array3=12871
,P_Anode_NG_PNP_TackTime_Array4=12872
,P_Anode_NG_PNP_TackTime_Array5=12873
,P_Anode_NG_PNP_TackTime_Array6=12874
,P_Anode_NG_PNP_TackTime_Array7=12875
,P_Anode_NG_PNP_TackTime_Array8=12876
,P_Anode_NG_PNP_TackTime_Array9=12877
,P_Anode_NG_PNP_TackTime_Array10=12878
,P_Cathode_NG_PNP_TackTime_Array0=12879
,P_Cathode_NG_PNP_TackTime_Array1=12880
,P_Cathode_NG_PNP_TackTime_Array2=12881
,P_Cathode_NG_PNP_TackTime_Array3=12882
,P_Cathode_NG_PNP_TackTime_Array4=12883
,P_Cathode_NG_PNP_TackTime_Array5=12884
,P_Cathode_NG_PNP_TackTime_Array6=12885
,P_Cathode_NG_PNP_TackTime_Array7=12886
,P_Cathode_NG_PNP_TackTime_Array8=12887
,P_Cathode_NG_PNP_TackTime_Array9=12888
,P_Cathode_NG_PNP_TackTime_Array10=12889
,P_Sepa_Unwinder_TackTime_Array0=12890
,P_Sepa_Unwinder_TackTime_Array1=12891
,P_Sepa_Unwinder_TackTime_Array2=12892
,P_Sepa_Unwinder_TackTime_Array3=12893
,P_Sepa_Unwinder_TackTime_Array4=12894
,P_Sepa_Unwinder_TackTime_Array5=12895
,P_Sepa_Unwinder_TackTime_Array6=12896
,P_Sepa_Unwinder_TackTime_Array7=12897
,P_Sepa_Unwinder_TackTime_Array8=12898
,P_Sepa_Unwinder_TackTime_Array9=12899
,P_Sepa_Unwinder_TackTime_Array10=12900
,P_Sepa_Unwinder_TackTime_Array11=12901
,P_1st_Unloader_TackTime_Array0=12902
,P_1st_Unloader_TackTime_Array1=12903
,P_1st_Unloader_TackTime_Array2=12904
,P_1st_Unloader_TackTime_Array3=12905
,P_1st_Unloader_TackTime_Array4=12906
,P_1st_Unloader_TackTime_Array5=12907
,P_1st_Unloader_TackTime_Array6=12908
,P_1st_Unloader_TackTime_Array7=12909
,P_1st_Unloader_TackTime_Array8=12910
,P_1st_Unloader_TackTime_Array9=12911
,P_1st_Unloader_TackTime_Array10=12912
,P_Cathode_1st_Vacuum_TackTime_Array1=12913
,P_Cathode_1st_Vacuum_TackTime_Array2=12914
,P_Cathode_1st_Vacuum_TackTime_Array3=12915
,P_Cathode_1st_Vacuum_TackTime_Array4=12916
,P_Cathode_1st_Vacuum_TackTime_Array5=12917
,P_Cathode_1st_Vacuum_TackTime_Array6=12918
,P_Cathode_1st_Vacuum_TackTime_Array7=12919
,P_Cathode_1st_Vacuum_TackTime_Array8=12920
,P_Cathode_1st_Vacuum_TackTime_Array9=12921
,P_Cathode_1st_Vacuum_TackTime_Array10=12922
,P_Cathode_Align_Vacuum_TackTime_Array1=12923
,P_Cathode_Align_Vacuum_TackTime_Array2=12924
,P_Cathode_Align_Vacuum_TackTime_Array3=12925
,P_Cathode_Align_Vacuum_TackTime_Array4=12926
,P_Cathode_Align_Vacuum_TackTime_Array5=12927
,P_Cathode_Align_Vacuum_TackTime_Array6=12928
,P_Cathode_Align_Vacuum_TackTime_Array7=12929
,P_Cathode_Align_Vacuum_TackTime_Array8=12930
,P_Cathode_Align_Vacuum_TackTime_Array9=12931
,P_Cathode_Align_Vacuum_TackTime_Array10=12932
,P_Cathode_2nd_Vacuum_TackTime_Array1=12933
,P_Cathode_2nd_Vacuum_TackTime_Array2=12934
,P_Cathode_2nd_Vacuum_TackTime_Array3=12935
,P_Cathode_2nd_Vacuum_TackTime_Array4=12936
,P_Cathode_2nd_Vacuum_TackTime_Array5=12937
,P_Cathode_2nd_Vacuum_TackTime_Array6=12938
,P_Cathode_2nd_Vacuum_TackTime_Array7=12939
,P_Cathode_2nd_Vacuum_TackTime_Array8=12940
,P_Cathode_2nd_Vacuum_TackTime_Array9=12941
,P_Cathode_2nd_Vacuum_TackTime_Array10=12942
,P_Anode_1st_Vacuum_TackTime_Array1=12943
,P_Anode_1st_Vacuum_TackTime_Array2=12944
,P_Anode_1st_Vacuum_TackTime_Array3=12945
,P_Anode_1st_Vacuum_TackTime_Array4=12946
,P_Anode_1st_Vacuum_TackTime_Array5=12947
,P_Anode_1st_Vacuum_TackTime_Array6=12948
,P_Anode_1st_Vacuum_TackTime_Array7=12949
,P_Anode_1st_Vacuum_TackTime_Array8=12950
,P_Anode_1st_Vacuum_TackTime_Array9=12951
,P_Anode_1st_Vacuum_TackTime_Array10=12952
,P_Anode_Align_Vacuum_TackTime_Array1=12953
,P_Anode_Align_Vacuum_TackTime_Array2=12954
,P_Anode_Align_Vacuum_TackTime_Array3=12955
,P_Anode_Align_Vacuum_TackTime_Array4=12956
,P_Anode_Align_Vacuum_TackTime_Array5=12957
,P_Anode_Align_Vacuum_TackTime_Array6=12958
,P_Anode_Align_Vacuum_TackTime_Array7=12959
,P_Anode_Align_Vacuum_TackTime_Array8=12960
,P_Anode_Align_Vacuum_TackTime_Array9=12961
,P_Anode_Align_Vacuum_TackTime_Array10=12962
,P_Anode_2nd_Vacuum_TackTime_Array1=12963
,P_Anode_2nd_Vacuum_TackTime_Array2=12964
,P_Anode_2nd_Vacuum_TackTime_Array3=12965
,P_Anode_2nd_Vacuum_TackTime_Array4=12966
,P_Anode_2nd_Vacuum_TackTime_Array5=12967
,P_Anode_2nd_Vacuum_TackTime_Array6=12968
,P_Anode_2nd_Vacuum_TackTime_Array7=12969
,P_Anode_2nd_Vacuum_TackTime_Array8=12970
,P_Anode_2nd_Vacuum_TackTime_Array9=12971
,P_Anode_2nd_Vacuum_TackTime_Array10=12972
,P_Final_Roll_TackTime_Array1=12973
,P_Final_Roll_TackTime_Array2=12974
,P_Final_Roll_TackTime_Array3=12975
,P_Final_Roll_TackTime_Array4=12976
,P_Final_Roll_TackTime_Array5=12977
,P_Final_Roll_TackTime_Array6=12978
,P_Final_Roll_TackTime_Array7=12979
,P_Final_Roll_TackTime_Array8=12980
,P_Final_Roll_TackTime_Array9=12981
,P_Final_Roll_TackTime_Array10=12982
,P_Sepa_ARC_TackTime_Array1=12983
,P_Sepa_ARC_TackTime_Array2=12984
,P_Sepa_ARC_TackTime_Array3=12985
,P_Sepa_ARC_TackTime_Array4=12986
,P_Sepa_ARC_TackTime_Array5=12987
,P_Sepa_ARC_TackTime_Array6=12988
,P_Sepa_ARC_TackTime_Array7=12989
,P_Sepa_ARC_TackTime_Array8=12990
,P_Sepa_ARC_TackTime_Array9=12991
,P_Sepa_ARC_TackTime_Array10=12992
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array1=12993
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array2=12994
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array3=12995
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array4=12996
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array5=12997
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array6=12998
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array7=12999
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array8=13000
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array9=13001
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array10=13002
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array1=13003
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array2=13004
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array3=13005
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array4=13006
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array5=13007
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array6=13008
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array7=13009
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array8=13010
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array9=13011
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array10=13012
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array1=13013
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array2=13014
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array3=13015
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array4=13016
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array5=13017
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array6=13018
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array7=13019
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array8=13020
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array9=13021
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array10=13022
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array1=13023
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array2=13024
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array3=13025
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array4=13026
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array5=13027
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array6=13028
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array7=13029
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array8=13030
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array9=13031
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array10=13032
,P_PACK_ML_Status_bit=13033
,P_Whole_Stacking_TackTime_MES_Report_Flag=13034
,P_JellyRoll_Out_TackTime_MES_Report_Flag=13035
,P_PV_Cathode_Count=13036
,P_PV_Anode_Count=13037
,P_PV_Cathode_NG_TR_NG_Count=13042
,P_PV_Anode_NG_TR_NG_Count=13043
,P_PV_Anode_Retry_NG_Count=13044
,P_PV_Cathode_Retry_NG_Count=13045
,P_PV_Align_INPUT_Count=13046
,P_Unloader_Grip_Pressure=13047
,P_Unloader_Heatmeter=13048
,P_EPC_Y_StandBy=13099
,P_SV_Read_Enable_Flag=13100
,P_Spool_Rotate_Distance_mm=13101
,P_Cathode_Clamp_Gantry=13202
,P_Anode_Clamp_Gantry=13203
,P_SV_Separator_Heting_Cutter_Change_Period=13204
,P_Cathode_Picker_Cylinder_Count=13217
,P_Anode_Picker_Cylinder_Count=13218
,P_SV_Stack_Table_Cathode_Reference_Value=13219
,P_SV_Stack_Table_Anode_Reference_Value=13220
,P_CA_DR_Offset=13221
,P_AN_DR_Offset=13222
,P_First_DR_Offset=13223
,P_Last_DR_Offset=13224
,P_BTN_QC_Sample_Flag=13225
,P_BTN_Loss_Sample_Flag=13226
,P_MSA_Sample_Flag=13227
,P_Sample_JR_Recipe_Count=13228
,P_Ca_Clamp_Y_Move=13229
,P_An_Clamp_Y_Move=13230
,P_Stack_Table_JR_Exist_Flag=13231
,P_Program_Monitoring_Lamp_Cell_Ready=13232
,P_Program_Monitoring_Lamp_Ready_Pos=13233
,P_Program_Monitoring_Lamp_Pause_Pos=13234
,P_Program_Monitoring_Lamp_Motion_Run=13235
,P_Program_Monitoring_Lamp_Cell_Remove=13236
,P_Program_Monitoring_Lamp_Cell_Supply=13237
,P_Program_Monitoring_Lamp_Sepa_Mode=13238
,P_Program_Monitoring_Lamp_Semi_Run=13239
,P_Program_Monitoring_Lamp_Stack_Mode=13240
,P_Program_Monitoring_Lamp_Anode_Aling_NG=13241
,P_Program_Monitoring_Lamp_Anode_Retry_NG=13242
,P_Program_Monitoring_Lamp_Cathode_Align_NG=13243
,P_Program_Monitoring_Lamp_Cathode_Retry_NG=13244
,P_Program_Monitoring_Lamp_Last_Stack_Mode=13245
,P_Program_Monitoring_Lamp_Jelly_Roll_OK=13246
,P_Program_Monitoring_Lamp_Jelly_Roll_NG=13247
,P_Program_Monitoring_Lamp_Jelly_Roll_Sepa=13248
,P_Program_Monitoring_Lamp_Cell_Out_Pos=13249
,P_Program_Monitoring_Lamp_Cell_Out_Mode=13250
,P_Master_Motion_Program_Flag=13251
,P_Master_Motion_CycleStop_Flag=13292
,P_PLC_08_Program_Ver=13343
,P_Old_PMAC_Commands=13344
,P_Old_PMAC_Status=13345
,P_Old_PMAC_Current_Mode=13346
,P_Mode_Function_State_Machine=13347
,P_PMAC_Commands=13348
,P_array_CF_Mode_Name=100
,P_array_CF_Function_Name=200
,P_array_CF_Function_State_Number=300
,P_array_CF_Local_Alarm_Code=400
,P_array_CF_Function_Run_Time=500
,P_array_CF_Function_Start_Flag=600
,P_array_CF_Function_Run_Flag=700
,P_array_CF_Function_Return_Flag=800
,P_array_CF_Function_Mask=900
,P_array_CF_Function_Debug_Flag=1000
,P_PMAC_Current_Mode=13583
,P_PMAC_Status=13584
,P_PMAC_Old_Mode=13585
,P_Ready_Tack_Chk_Timer=13586
,P_PLC09_Common_Command_Flag=13587
,P_PLC09_Common_Command_Complete_Bit=13588
,P_PLC09_Common_Execute_Flag=13589
,P_PLC09_Common_Execute_Complete_Bit=13590
,P_PLC09_Status=13591
,P_PLC09_Libraries_Var=13592
,P_Master_Motion_Program_ON_Flag=13593
,P_Master_Motion_Program_ON_Complete_Bit=13594
,P_Master_Motion_Program_OFF_Flag=13595
,P_Master_Motion_Program_OFF_Complete_Bit=13596
,P_Common_Function_Timbase_ON_Flag=13597
,P_Common_Function_Timbase_ON_Complete_Bit=13598
,P_Common_Function_Timbase_OFF_Flag=13599
,P_Common_Function_Timbase_OFF_Complete_Bit=13600
,P_Common_Function_Monitoring_Lamp_OFF_Flag=13601
,P_Common_Function_Monitoring_Lamp_OFF_Complete_Bit=13602
,P_Common_Function_Slave_Motion_Common_Init_Flag=13603
,P_Common_Function_Slave_Motion_Common_Init_Complete_Bit=13604
,P_Common_Function_OlD_Jog_Speed_Save_ON_Flag=13605
,P_Common_Function_OlD_Jog_Speed_Save_ON_Complete_Bit=13606
,P_Auto_Resetting_Sum_Ready_Pos_Check_Flag=13607
,P_Auto_Resetting_Sum_Ready_Pos_Check_Complete_bit=13608
,P_Manual_Resetting_Sum_Ready_Pos_Check_Flag=13609
,P_Manual_Resetting_Sum_Ready_Pos_Check_Complete_bit=13610
,P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Flag=13611
,P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Complete_Bit=13612
,P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Flag=13613
,P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Complete_Bit=13614
,P_Motion_Target_Position_Complete=13615
,P_SM_Auto_Run_Layer_Management=13616
,P_Buffer_Mode_Status_Sequence=13617
,P_SM_Sub_Function_Pause=13618
,P_PLC09_Resetting_Position_Check_State_Machine=13619
,P_PLC09_Resetting_Position_Moving_State_Machine=13620
,P_SM_Resetting_Pause_Position=13663
,P_20per_Vac_Error_Cycle_Stop_Flag=13664
,P_MNTR_PLC23_ARC_Complete=13665
,P_FUNCTION_PLC13_Sepa_Trigger_Enable=13666
,P_PLC_Recipe_PLC2_Revise_Sepa=13667
,P_Auto_Semi_Init_Status=13668
,P_Auto_Semi_Init_Chk_Bit=13669
,P_Old_PLC_HeartBit_Flag=13670
,P_PLC09_Init_Flag=13671
,P_Check_IDLE_CF_Flag=13672
,P_Check_EXECUTE_CF_Flag=13673
,P_Check_COMPLETING_CF_Flag=13674
,P_Check_COMPLETE_CF_Flag=13675
,P_Check_HOLDING_CF_Flag=13676
,P_Check_HOLD_CF_Flag=13677
,P_Check_UNHOLDING_CF_Flag=13678
,P_Check_SUSPENDING_CF_Flag=13679
,P_Check_SUSPENDED_CF_Flag=13680
,P_Check_UNSUSPENDING_CF_Flag=13681
,P_Check_STOPPED_CF_Flag=13682
,P_Check_ABORTED_CF_Flag=13683
,P_Check_CLEARING_CF_Flag=13684
,P_Check_IDLE_CF=13685
,P_Check_EXECUTE_CF=13686
,P_Check_COMPLETING_CF=13687
,P_Check_COMPLETE_CF=13688
,P_Check_HOLDING_CF=13689
,P_Check_HOLD_CF=13690
,P_Check_UNHOLDING_CF=13691
,P_Check_SUSPENDING_CF=13692
,P_Check_SUSPENDED_CF=13693
,P_Check_UNSUSPENDING_CF=13694
,P_Check_STOPPED_CF=13695
,P_Check_ABORTED_CF=13696
,P_Check_CLEARING_CF=13697
,P_Check_STOPPING_CF=13698
,P_Check_STARTING_CF=13699
,P_Check_RESETTING_CF=13700
,P_Check_STARTTING_CF=13701
,P_Queue_Clear=13702
,P_PLC09_Alarm_Test_Flag=13703
,P_PLC09_Test_Temp=13704
,P_PLC01_STOP_Queue_Complete_Flag=13705
,P_PMAC_All_Home_Cmd=13706
,P_PMAC_All_Home_Status=13707
,P_PMAC_Master_Following_Use_Flag=13708
,PnP_Belt_Waring_Pos=13709
,P_Old_X_PLC_Sync_Heart_Bit=13710
,P_Stack_Heart_Bit_Sync_Flag=13711
,P_Stack_Heart_Bit_Sunc_Complete_Bit=13712
,P_Resetting_Init_Module_RTN=13713
,P_PLC09_MNTR=13714
,P_Unloder_PNP_Home_IL_Pos=13715
,P_ECAT_Slave_Err_Bit=13716
,P_MC_Power_Down_Flag=13717
,P_Old_MC_Power_Down_Flag=13718
,P_Modbus_A_PMAC_Cur_Mode=10
,P_Modbus_A_PMAC_Cur_Status=11
,P_Modbus_A_VISION_MSA_Status=12
,P_Modbus_A_Anode_1st_Pos=13
,P_Modbus_A_Cathode_1st_Pos=14
,P_Modbus_A_Connect_State=15
,P_Modbus_A_All_Home_Status=16
,P_Modbus_HeartBit=17
,P_Modbus_A_Anode_1st_HCK=18
,P_Modbus_A_Cathode_1st_HCK=19
,P_Modbus_B_PMAC_Cur_Mode=30
,P_Modbus_B_PMAC_Cur_Status=31
,P_Modbus_B_VISION_MSA_Status=32
,P_Modbus_B_Anode_1st_Pos=33
,P_Modbus_B_Cathode_1st_Pos=34
,P_Modbus_B_Connect_State=35
,P_Modbus_B_All_Home_Status=36
,P_Modbus_B_Anode_1st_HCK=37
,P_Modbus_B_Cathode_1st_HCK=38
,P_Modbus_Delay_Timer=13719
,P_Modbus_Connect_Status=13720
,P_Modbus_Reconnect_MNTR=13721
,P_Ecat_Reconn_Chk_Lamp=13722
,P_MC_Reconn_Chk_Lamp=13723
,P_Cathode_1st_Vac_Set_Time=13724
,P_Cathode_2nd_Vac_Set_Time=13725
,P_Cathode_Align_Vac_Set_Time=13726
,P_Cathode_Align_Blow_Set_Time=13727
,P_Anode_1st_Vac_Set_Time=13728
,P_Anode_2nd_Vac_Set_Time=13729
,P_Sepa_Consume_Mode_Thickness_rate=13730
,P_Sepa_Anode_Recipe_Count=13731
,P_Sepa_Cathode_Recipe_Count=13732
,P_Discharge_Cathode_Recipe_Count=13733
,P_Discharge_Anode_Recipe_Count=13734
,P_Suspend_Discharge_Cathode_Counter=13735
,P_Suspend_Discharge_Anode_Counter=13736
,P_Suspend_Discharge_Waiting_Flag=13737
,P_Com_ARC_Sepa_Consume_Mode_Flag=13738
,P_Com_EPC_Sepa_Consume_Mode_Flag=13739
,P_Com_User_Sepa_Consume_Mode_Flag=13740
,P_Com_Dry_Mode_Flag=13741
,P_SM_Recipe_Value_Management=13742
,P_Sepa_Mode_Recipe_Count=13743
,P_Sepa_Mode_EPC_Recipe_Count=13744
,P_ARC_End_Sepa_Recipe_Count=13745
,P_Cathode_Align_Continuous_NG_Stop_Select=13846
,P_Anode_Align_Continuous_NG_Stop_Select=13847
,P_Stack_Vision_NG_Enable=13848
,P_Cathode_Surface_Continuous_NG_Stop_Select=13849
,P_Anode_Surface_Continuous_NG_Stop_Select=13850
,P_Anode_Trigger_IO_Test_Vision_PLC_Loop=13851
,P_Anode_Trigger_IO_Test_Motion_Loop=13852
,P_Cathode_Trigger_IO_Test_Vision_PLC_Loop=13853
,P_Cathode_Trigger_IO_Test_Motion_Loop=13854
,P_Stack_Trigger_IO_Test_Vision_PLC_Loop=13855
,P_Stack_Trigger_IO_Test_Motion_Loop=13856
,P_PLC12_Continuous_Buffer_Reset_Flag=13857
,P_PLC12_Anode_Sheet_Pick_Up_Flag=13873
,P_PLC12_Cathode_Sheet_Pick_Up_Flag=13874
,P_Hold_Anode_Sheet_Pick_Up_Flag=13875
,P_Hold_Cathode_Sheet_Pick_Up_Flag=13876
,P_Sheet_Interface_Complete_Pos=13877
,P_Anode_Sheet_Interface_Complete_Pos=13878
,P_Cathode_Sheet_Interface_Complete_Pos=13879
,P_Anode_2nd_TR_Maint_Check=13880
,P_Cathode_2nd_TR_Maint_Check=13881
,P_PLC12_Vacuum_1st_Cathode_MNTR_Timer=13919
,P_PLC12_Vacuum_2nd_Cathode_MNTR_Timer=13920
,P_PLC12_Vacuum_NG_Cathode_MNTR_Timer=13921
,P_PLC12_Vacuum_Align_Cathode_MNTR_Timer=13922
,P_PLC12_Vacuum_1st_Anode_MNTR_Timer=13923
,P_PLC12_Vacuum_2nd_Anode_MNTR_Timer=13924
,P_PLC12_Vacuum_NG_Anode_MNTR_Timer=13925
,P_PLC12_Vacuum_Align_Anode_MNTR_Timer=13926
,P_PLC12_Vacuum_1st_Cathode_Set_Time=13927
,P_PLC12_Vacuum_2nd_Cathode_Set_Time=13928
,P_PLC12_Vacuum_NG_Cathode_Set_Time=13929
,P_PLC12_Vacuum_Align_Cathode_Set_Time=13930
,P_PLC12_Vacuum_1st_Anode_Set_Time=13931
,P_PLC12_Vacuum_2nd_Anode_Set_Time=13932
,P_PLC12_Vacuum_NG_Anode_Set_Time=13933
,P_PLC12_Vacuum_Align_Anode_Set_Time=13934
,P_PLC12_Blow_1st_Cathode_MNTR_Timer=13975
,P_PLC12_Blow_2nd_Cathode_MNTR_Timer=13976
,P_PLC12_Blow_NG_Cathode_MNTR_Timer=13977
,P_PLC12_Blow_Align_Cathode_MNTR_Timer=13978
,P_PLC12_Blow_1st_Anode_MNTR_Timer=13979
,P_PLC12_Blow_2nd_Anode_MNTR_Timer=13980
,P_PLC12_Blow_NG_Anode_MNTR_Timer=13981
,P_PLC12_Blow_Align_Anode_MNTR_Timer=13982
,P_PLC12_Blow_1st_Cathode_Set_Time=13983
,P_PLC12_Blow_2nd_Cathode_Set_Time=13984
,P_PLC12_Blow_NG_Cathode_Set_Time=13985
,P_PLC12_Blow_Align_Cathode_Set_Time=13986
,P_PLC12_Blow_1st_Anode_Set_Time=13987
,P_PLC12_Blow_2nd_Anode_Set_Time=13988
,P_PLC12_Blow_NG_Anode_Set_Time=13989
,P_PLC12_Blow_Align_Anode_Set_Time=13990
,P_Vacuum_Reentry_Bit=14031
,P_Blow_Reentry_Bit=14032
,P_top=14113
,P_Queue_stack_top=14114
,P_Step_stack_top=14115
,P_Index_stack_top=14116
,P_Status_stack_top=14117
,NN_Step=14118
,NN_Index=14119
,P_PLC12_Frist=14125
,P_SM_Auto_Run_Status_Management=14126
,P_SM_Status_Main_Memory_Management=14127
,P_SM_Cell_Memory_Management=14128
,P_PLC12_Vacuum_Unit_Data=14161
,P_PLC12_Blow_Unit_Data=14162
,P_Stack_Algorithme_Cmd_Event_Status=14163
,P_PLC12_vacuum_Event_Status=14164
,P_PLC12_Blow_Event_status=14165
,P_PLC12_vacuum_DIO_Observer_Status=14166
,P_PLC12_Blow_DIO_Observer_Status=14167
,P_Resetting_Vacuum_MNTR_State_Machine=14168
,P_Heart_Bit_Time=14169
,P_Dancer_Angle_Alarm_Timer_Flag=14170
,P_Dancer_Angle_Alarm_Check_Timer=14171
,P_BTN_LED_LAMP=14172
,P_Old_BTN_LED_LAMP=14173
,P_PLC_TO_PMAC_Work_Confirm_Operation_Cnt=14174
,P_VISION_TO_PMAC_Work_Confirm_Operation_Ack_Cnt=14175
,P_Ca_AT_Retry_Cal_Move_Complete=14176
,P_An_AT_Retry_Cal_Move_Complete=14177
,P_Ca_AT_Retry_Cal_Cnt=14178
,P_An_AT_Retry_Cal_Cnt=14179
,P_Ca_AT_Retry_Cal_Complete=14180
,P_An_AT_Retry_Cal_Complete=14181
,P_An_AT_Retry_Cal_Pass=14182
,P_Ca_AT_Retry_Cal_Pass=14183
,P_Ca_Picker_T_Turn_Cnt_Flag=14184
,P_Ca_Picker_T_Turn_Cnt=14185
,P_Ca_Picker_T_Home_Type=14186
,P_An_Picker_T_Turn_Cnt_Flag=14187
,P_An_Picker_T_Turn_Cnt=14188
,P_An_Picker_T_Home_Type=14189
,P_Flag_Vac_Status_Initialize=14190
,P_SM_Vac_Initialize=14191
,P_Flag_Anode_1st_Vac_OFF=14192
,P_Flag_Anode_AT_Vac_OFF=14193
,P_Flag_Anode_2nd_Vac_OFF=14194
,P_Flag_Anode_NG_Vac_OFF=14195
,P_Flag_Cathode_1st_Vac_OFF=14196
,P_Flag_Cathode_AT_Vac_OFF=14197
,P_Flag_Cathode_2nd_Vac_OFF=14198
,P_Flag_Cathode_NG_Vac_OFF=14199
,P_Flag_Anode_1st_Vac_Initial_Alarm=14200
,P_Flag_Anode_AT_Vac_Initial_Alarm=14201
,P_Flag_Anode_2nd_Vac_Initial_Alarm=14202
,P_Flag_Anode_NG_Vac_Initial_Alarm=14203
,P_Flag_Cathode_1st_Vac_Initial_Alarm=14204
,P_Flag_Cathode_AT_Vac_Initial_Alarm=14205
,P_Flag_Cathode_2nd_Vac_Initial_Alarm=14206
,P_Flag_Cathode_NG_Vac_Initial_Alarm=14207
,P_Middle_Discharge_Ignore_Total_Count=14208
,P_Middle_Discharge_Ignore_Stack_Count=14209
,P_Middle_Discharge_Ignore_ON_Signal=14210
,P_Middle_Discharge_Ignore_OFF_Signal=14211
,P_Middle_Discharge_Ignore_Cell_Count=14212
,P_ARC_Middle_Discharge_Ignore_Vision_Check=14213
,P_ARC_Middle_Discharge_Ignore_ON_Flag=14214
,P_Middle_Discharge_Ignore_User_Sepa_Mode_Check=14215
,P_Flag_Sepa_Stack_Mode_CHK=14324
,P_Initialize_Read_Excom_Variables_Flag=14411
,P_Cathode_Clamp_MC_Cylinder_Count=14421
,P_Cathode_Clamp_OP_Cylinder_Count=14422
,P_Anode_Clamp_MC_Cylinder_Count=14423
,P_Anode_Clamp_OP_Cylinder_Count=14424
,P_Cathode_1ST_TR_Cylinder_Count=8003
,P_Anode_1ST_TR_Cylinder_Count=8004
,P_BTN_Cathode_Clamp_inside_Machine_Cylinder_Count_Clear=14425
,P_BTN_Cathode_Clamp_Middle_Cylinder_Count_Clear=14426
,P_BTN_Cathode_Clamp_outside_Machine_Cylinder_Count_Clear=14427
,P_BTN_Anode_Clamp_inside_Machine_Cylinder_Count_Clear=14428
,P_BTN_Anode_Clamp_Middle_Cylinder_Count_Clear=14429
,P_BTN_Anode_Clamp_outside_Machine_Cylinder_Count_Clear=14430
,P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear=14431
,P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear_Old=14432
,P_BTN_Anode_1ST_TR_Cylinder_Count_Clear=14433
,P_BTN_Anode_1ST_TR_Cylinder_Count_Clear_Old=14434
,P_RECIPE_PLC27_Manual_Interval=15450
,P_RECIPE_PLC27_Auto_Interval=15451
,P_Recipe_Speed_Value=15658
,P_Slave6_Target_X_For_Cell_Out=15659
,P_Poistion_error=15860
,P_Recipe_Count_Num=15911
,L_Motor_Status_Update_Interval=15912
,L_Motor_Recipe_Update_Interval=15913
,P_UI_Servo_On_Off=15914
,P_Jog_Sel_Count=16014
,P_User_Jog_Distance=16301
,P_BTN_Sel_Count=16652
,P_PC_BTN_No=16653
,P_BTN_Interlock_Update_Interval=16654
,P_Align_Table_Status_Update_Interval=16655
,P_Jelly_Roll_Total_Count_Old=16656
,P_Old_m4120=16657
,P_Old_m4121=16658
,P_Old_m4122=16659
,P_Old_m4123=16660
,P_Flag_Linear_Enc_Homezero_Complete_M17=16681
,P_Flag_Linear_Enc_Homezero_Complete_M18=16682
,P_Flag_Linear_Enc_Homezero_Complete_M19=16683
,P_Flag_Linear_Enc_Homezero_Complete_M20=16684
,P_CMD_Linear_ENC_Homezero_M17=16685
,P_CMD_Linear_ENC_Homezero_M18=16686
,P_CMD_Linear_ENC_Homezero_M19=16687
,P_CMD_Linear_ENC_Homezero_M20=16688
,P_RECIPE_PLC27_Alltime_Interval=16719
,P_Manual_Memory_Tower_Timer=16720
,P_Memory_Tower_Interval=16721
,P_PLC_14_Status_Cycle_Stop_Flag=16722
,P_Cathode_AlignTable_Cleaning_Pos_Status_Machine=16723
,P_Anode_AlignTable_Cleaning_Pos_Status_Machine=16724
,P_Status_Cathode_AlignTable_Cleaning_Pos=16725
,P_Status_Anode_AlignTable_Cleaning_Pos=16726
,P_CMD_Cathode_AlignTable_Cleaning_Pos=16727
,P_CMD_Anode_AlignTable_Cleaning_Pos=16728
,P_Cathode_2nd_pnp_Cleaning_Mode_Pos=16729
,P_Anode_2nd_pnp_Cleaning_Mode_Pos=16730
,P_Interlock_Test=16731
,P_PNP_Picker_T_Pos=16732
,P_NG_PNP_Pos=16733
,M_Old_X_BTN_Machine_READY=16734
,M_Old_X_BTN_Machine_START=16735
,M_Old_X_BTN_Machine_STOP=16736
,M_Old_X_BTN_Machine_RESET=16737
,M_Old_X_BTN_Machine_MODE=16738
,P_BTN_Motor_Pos_Check_RTN=16739
,P_BTN_Memory_Tower_Check_Bit=16740
,P_PMAC_Status_IDLE_Motor_Not_Pos=16741
,P_PMAC_Status_IDLE_Motor_Pos=16742
,P_BTN_Motor_Pos_Check_Monitor=16743
,P_PackML_Auto_Stop_Bit=16744
,P_BTN_IDLE_Motor_Not_Pos=16745
,M_X_BTN_Machine_Mode=16746
,M_Old_X_BTN_Machine_Mode=16747
,P_Lamp_Blinking_Timer=16748
,P_BTN_Ready_Lamp=16749
,P_BTN_Start_Lamp=16750
,P_BTN_Stop_Lamp=16751
,P_ARC_Name_Plate_Passive_Status=16752
,P_ARC_Passive_Status=16753
,P_NP_Spool_Number=16754
,P_ARC_Page_On=16755
,P_ARC_NP_Upper_Timer=16756
,P_ARC_Upper_Ready=16757
,P_ARC_NP_Upper_3rd_Step_Toggle_Variable=16758
,P_ARC_NP_Upper_7th_Step_Variable=16759
,P_ARC_NP_Upper_7th_Step_Edge_Variable=16760
,P_ARC_NP_Upper_Rot_ReRot_Blinking_Bit=16761
,P_ARC_NP_Lower_Timer=16762
,P_ARC_Lower_Ready=16763
,P_ARC_NP_Lower_3rd_Step_Toggle_Variable=16764
,P_ARC_NP_Lower_7th_Step_Variable=16765
,P_ARC_NP_Lower_7th_Step_Edge_Variable=16766
,P_ARC_NP_Lower_Rot_ReRot_Blinking_Bit=16767
,M_Old_X_ARC_NP_Ready=16768
,M_Old_X_ARC_NP_Unwinder_Rotation=16769
,M_Old_X_ARC_NP_Unwinder_Re_Rotation=16770
,P_Status_Clear_Flag=16771
,P_Status_Clear_RTN=16772
,P_MSA_BTN_On=16773
,P_Align_Take_Off_BTN_ON=16774
,P_ARC_NP_Upper_Ready_Check_Bit=16775
,P_ARC_NP_Lower_Ready_Check_Bit=16776
,P_Stopping_CycleStop_Status=16877
,P_Stopping_CycleStop_Seq_Index=16878
,P_Stopping_CycleStop_Precondition_Seq_Index=16879
,P_Stopping_CycleStop_Module_Status=16880
,P_Stopping_CycleStop_Cmd=16881
,P_Stopping_CycleStop_State_Machine=16882
,P_Final_Roll_Cathode_Pos_Status=17003
,P_Sheet_Paper_FWD_Pos_Status=17004
,P_Final_Roll_Vision_Pos_Status=17005
,P_Cathode_Clamp_ON_Status=17006
,P_Anode_Clamp_ON_Status=17007
,P_Anode_Clamp_OFF_Status=17008
,P_Partition_Up_Flag=17009
,P_Partition_Down_Flag=17010
,P_Partition_Avoid_Flag=17011
,P_Partition_Avoid_Z_Speed=17012
,P_Partition_Avoid_X_Speed=17013
,P_Partition_Avoid_T_Speed=17014
,P_Partition_Avoid_2nd_T_Pos=17015
,P_Partition_Step_Flag=17016
,P_Anode_NG_PNP_Tact_Time_Start=17097
,P_Cathode_NG_PNP_Tact_Time_Start=17098
,P_Anode_NG_PNP_Tact_Time_End=17099
,P_Cathode_NG_PNP_Tact_Time_End=17100
,P_Tact_Time_Final_Roller_Clamp=17291
,P_Tact_Time_Final_Roller_Unclamp=17292
,P_Tact_Time_Stack_Table_Down=17293
,P_Tact_Time_Stack_Table_Up=17294
,P_Tact_Time_Sepa_Cutting_Down=17295
,P_Tact_Time_Sepa_Cutting_Up=17296
,P_Tact_Time_ARC_Upper_Plate_Up=17297
,P_Tact_Time_ARC_Upper_Plate_Down=17298
,P_Tact_Time_ARC_Upper_Tilting_On=17299
,P_Tact_Time_ARC_Upper_Tilting_Off=17300
,P_Tact_Time_ARC_Upper_Cutter_Fwd=17301
,P_Tact_Time_ARC_Upper_Cutter_Bwd=17302
,P_Tact_Time_ARC_Upper_Clamp_On=17303
,P_Tact_Time_ARC_Upper_Clamp_Off=17304
,P_Tact_Time_ARC_Lower_Plate_Up=17305
,P_Tact_Time_ARC_Lower_Plate_Down=17306
,P_Tact_Time_ARC_Lower_Tilting_On=17307
,P_Tact_Time_ARC_Lower_Tilting_Off=17308
,P_Tact_Time_ARC_Lower_Cutter_Fwd=17309
,P_Tact_Time_ARC_Lower_Cutter_Bwd=17310
,P_Tact_Time_ARC_Lower_Clamp_On=17311
,P_Tact_Time_ARC_Lower_Clamp_Off=17312
,P_Tact_Time_Save_Final_Roller_Clamp_Time=17313
,P_Tact_Time_Save_Final_Roller_Unclamp_Time=17314
,P_Tact_Time_Save_Stack_Table_Down_Time=17315
,P_Tact_Time_Save_Stack_Table_Up_Time=17316
,P_Tact_Time_Save_Sepa_Cutting_Down_Time=17317
,P_Tact_Time_Save_Sepa_Cutting_Up_Time=17318
,P_Tact_Time_Save_ARC_Upper_Plate_Up_Time=17319
,P_Tact_Time_Save_ARC_Upper_Plate_Down_Time=17320
,P_Tact_Time_Save_ARC_Upper_Tilting_On_Time=17321
,P_Tact_Time_Save_ARC_Upper_Tilting_Off_Time=17322
,P_Tact_Time_Save_ARC_Upper_Cutter_Fwd_Time=17323
,P_Tact_Time_Save_ARC_Upper_Cutter_Bwd_Time=17324
,P_Tact_Time_Save_ARC_Upper_Clamp_On_Time=17325
,P_Tact_Time_Save_ARC_Upper_Clamp_Off_Time=17326
,P_Tact_Time_Save_ARC_Lower_Plate_Up_Time=17327
,P_Tact_Time_Save_ARC_Lower_Plate_Down_Time=17328
,P_Tact_Time_Save_ARC_Lower_Tilting_On_Time=17329
,P_Tact_Time_Save_ARC_Lower_Tilting_Off_Time=17330
,P_Tact_Time_Save_ARC_Lower_Cutter_Fwd_Time=17331
,P_Tact_Time_Save_ARC_Lower_Cutter_Bwd_Time=17332
,P_Tact_Time_Save_ARC_Lower_Clamp_On_Time=17333
,P_Tact_Time_Save_ARC_Lower_Clamp_Off_Time=17334
,P_Tact_Time_Array_Init=17455
,P_Last_Run_To_Discharge_Tact_Timer=17456
,P_Last_Run_To_Discharge_Tact_Time=17457
,P_Master_Trigger_Sync_Tact_Timer=17458
,P_Master_Trigger_Sync_Tact_Time=17459
,P_Vision_First_Sepa_Stack_Align_OK_PMAC_Flag=17460
,P_PLC18_EPC_Retry_Mode_Time_Use_Flag=17461
,P_PLC18_Vision_EPC_Correction_Request_Old=17462
,P_PLC18_EPC_Moving_Flag=17463
,P_PLC18_EPC_Moving_Status=17464
,P_PLC18_EPC_Move_State_Machine=17465
,P_PLC18_EPC_Move_Status=17466
,P_PLC18_EPC_inspection_Time=17467
,P_EPC_Insp_Time=17468
,P_EPC_Correction_Time=17469
,P_TEST_Max_EPC_Sensor_Value_um=17470
,P_PLC18_EPC_Moving_Timer=17471
,P_EPC_Axis_Target_Y=17482
,P_Com_After_Sepa_Mode_Status=17483
,P_PLC18_PLC_to_PMAC_Correction_Value=17484
,P_PLC_EPC_Status=17485
,P_EPC_Retry_Over_Alarm_Flag=17486
,P_ARC_EPC_Vision_Value_Apply_Bit=17487
,P_ARC_EPC_Vision_Value_Apply_Flag=17488
,P_ARC_EPC_Vision_Value_Apply_State_Machine=17489
,P_ARC_EPC_Vision_Value_Apply_Timer=17490
,P_ARC_EPC_Vision_Value_Apply_Time=17491
,P_AH_Home_Status=17492
,P_Resetting_All_Home_Command=17493
,P_Homing_Alarm_Time=17494
,P_All_Home_Stop_Cmd=17545
,P_Home_First_Move=17546
,P_DD_M_Home_Pos_Flag=17633
,P_WAIT_INDEX=17634
,P_FR_Cmd_Check_Flag=17685
,P_PV_Separator_Dancer_Pressure=17686
,P_PV_Cathode_Clamp_Pressure=17687
,P_PV_Anoode_Clamp_Pressure=17688
,P_PV_Cathode_Final_Roller_X_Axis=17689
,P_PV_Anode_Final_Roller_X_Axis=17690
,P_PV_Cathode_Clamp_ON_Y1_Axis_Pos=17691
,P_PV_Cathode_Clamp_ON_Y2_Axis_Pos=17692
,P_PV_Cathode_Clamp_ON_Z1_Axis_Pos=17693
,P_PV_Cathode_Clamp_ON_Z2_Axis_Pos=17694
,P_PV_Anode_Clamp_ON_Y1_Axis_Pos=17695
,P_PV_Anode_Clamp_ON_Y2_Axis_Pos=17696
,P_PV_Anode_Clamp_ON_Z1_Axis_Pos=17697
,P_PV_Anode_Clamp_ON_Z2_Axis_Pos=17698
,P_PV_Cathode_2th_AT_T_Axis_Pos=17699
,P_PV_Cathode_2th_ST_T_Axis_Pos=17700
,P_PV_Cathode_2th_AT_Z_Axis_Pos=17701
,P_PV_Cathode_2th_ST_Z_Axis_Pos=17702
,P_PV_Anode_2th_AT_T_Axis_Pos=17703
,P_PV_Anode_2th_ST_T_Axis_Pos=17704
,P_PV_Anode_2th_AT_Z_Axis_Pos=17705
,P_PV_Anode_2th_ST_Z_Axis_Pos=17706
,P_PV_Cathode_1th_Ready_T_Axis_Pos=17707
,P_PV_Cathode_1th_CV_T_Axis_Pos=17708
,P_PV_Cathode_1th_AT_T_Axis_Pos=17709
,P_PV_Cathode_1th_Ready_Z_Axis_Pos=17710
,P_PV_Cathode_1th_CV_Z_Axis_Pos=17711
,P_PV_Cathode_1th_AT_Z_Axis_Pos=17712
,P_PV_Anode_1th_Ready_T_Axis_Pos=17713
,P_PV_Anode_1th_CV_T_Axis_Pos=17714
,P_PV_Anode_1th_AT_T_Axis_Pos=17715
,P_PV_Anode_1th_Ready_Z_Axis_Pos=17716
,P_PV_Anode_1th_CV_Z_Axis_Pos=17717
,P_PV_Anode_1th_AT_Z_Axis_Pos=17718
,P_PV_Cathode_NG_AT_T_Axis_Pos=17719
,P_PV_Cathode_NG_Box_T_Axis_Pos=17720
,P_PV_Anode_NG_AT_T_Axis_Pos=17721
,P_PV_Anode_NG_Box_T_Axis_Pos=17722
,P_SemiRun_Separator_Dancer_Pressure_Flag=17723
,P_SemiRun_Cathode_Clamp_Pressure_Flag=17724
,P_SemiRun_Anoode_Clamp_Pressure_Flag=17725
,P_SemiRun_Cathode_Final_Roller_X_Axis_Flag=17726
,P_SemiRun_Anode_Final_Roller_X_Axis_Flag=17727
,P_SemiRun_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag=17728
,P_SemiRun_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag=17729
,P_SemiRun_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag=17730
,P_SemiRun_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag=17731
,P_SemiRun_Cathode_2th_AT_T_Axis_Pos_Flag=17732
,P_SemiRun_Cathode_2th_ST_T_Axis_Pos_Flag=17733
,P_SemiRun_Cathode_2th_AT_Z_Axis_Pos_Flag=17734
,P_SemiRun_Cathode_2th_ST_Z_Axis_Pos_Flag=17735
,P_SemiRun_Anode_2th_AT_T_Axis_Pos_Flag=17736
,P_SemiRun_Anode_2th_ST_T_Axis_Pos_Flag=17737
,P_SemiRun_Anode_2th_AT_Z_Axis_Pos_Flag=17738
,P_SemiRun_Anode_2th_ST_Z_Axis_Pos_Flag=17739
,P_SemiRun_Cathode_1th_Ready_T_Axis_Pos_Flag=17740
,P_SemiRun_Cathode_1th_CV_T_Axis_Pos_Flag=17741
,P_SemiRun_Cathode_1th_AT_T_Axis_Pos_Flag=17742
,P_SemiRun_Cathode_1th_Ready_Z_Axis_Pos_Flag=17743
,P_SemiRun_Cathode_1th_CV_Z_Axis_Pos_Flag=17744
,P_SemiRun_Cathode_1th_AT_Z_Axis_Pos_Flag=17745
,P_SemiRun_Anode_1th_Ready_T_Axis_Pos_Flag=17746
,P_SemiRun_Anode_1th_CV_T_Axis_Pos_Flag=17747
,P_SemiRun_Anode_1th_AT_T_Axis_Pos_Flag=17748
,P_SemiRun_Anode_1th_Ready_Z_Axis_Pos_Flag=17749
,P_SemiRun_Anode_1th_CV_Z_Axis_Pos_Flag=17750
,P_SemiRun_Anode_1th_AT_Z_Axis_Pos_Flag=17751
,P_SemiRun_Cathode_NG_AT_T_Axis_Pos_Flag=17752
,P_SemiRun_Cathode_NG_Box_T_Axis_Pos_Flag=17753
,P_SemiRun_Anode_NG_AT_T_Axis_Pos_Flag=17754
,P_SemiRun_Anode_NG_Box_T_Axis_Pos_Flag=17755
,P_Motion_Separator_Dancer_Pressure_Flag=17756
,P_Motion_Cathode_Clamp_Pressure_Flag=17757
,P_Motion_Anoode_Clamp_Pressure_Flag=17758
,P_Motion_Cathode_Final_Roller_X_Axis_Flag=17759
,P_Motion_Anode_Final_Roller_X_Axis_Flag=17760
,P_Motion_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag=17761
,P_Motion_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag=17762
,P_Motion_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag=17763
,P_Motion_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag=17764
,P_Motion_Cathode_2th_AT_T_Axis_Pos_Flag=17765
,P_Motion_Cathode_2th_ST_T_Axis_Pos_Flag=17766
,P_Motion_Cathode_2th_AT_Z_Axis_Pos_Flag=17767
,P_Motion_Cathode_2th_ST_Z_Axis_Pos_Flag=17768
,P_Motion_Anode_2th_AT_T_Axis_Pos_Flag=17769
,P_Motion_Anode_2th_ST_T_Axis_Pos_Flag=17770
,P_Motion_Anode_2th_AT_Z_Axis_Pos_Flag=17771
,P_Motion_Anode_2th_ST_Z_Axis_Pos_Flag=17772
,P_Motion_Cathode_1th_Ready_T_Axis_Pos_Flag=17773
,P_Motion_Cathode_1th_CV_T_Axis_Pos_Flag=17774
,P_Motion_Cathode_1th_AT_T_Axis_Pos_Flag=17775
,P_Motion_Cathode_1th_Ready_Z_Axis_Pos_Flag=17776
,P_Motion_Cathode_1th_CV_Z_Axis_Pos_Flag=17777
,P_Motion_Cathode_1th_AT_Z_Axis_Pos_Flag=17778
,P_Motion_Anode_1th_Ready_T_Axis_Pos_Flag=17779
,P_Motion_Anode_1th_CV_T_Axis_Pos_Flag=17780
,P_Motion_Anode_1th_AT_T_Axis_Pos_Flag=17781
,P_Motion_Anode_1th_Ready_Z_Axis_Pos_Flag=17782
,P_Motion_Anode_1th_CV_Z_Axis_Pos_Flag=17783
,P_Motion_Anode_1th_AT_Z_Axis_Pos_Flag=17784
,P_Motion_Cathode_NG_AT_T_Axis_Pos_Flag=17785
,P_Motion_Cathode_NG_Box_T_Axis_Pos_Flag=17786
,P_Motion_Anode_NG_AT_T_Axis_Pos_Flag=17787
,P_Motion_Anode_NG_Box_T_Axis_Pos_Flag=17788
,P_Cathode_1PNP_Sacle_Value=17789
,P_Cathode_2PNP_Sacle_Value=17790
,P_Anode_1PNP_Sacle_Value=17791
,P_Anode_2PNP_Sacle_Value=17792
,P_PLC01_SemiRun_PV_Flag=17793
,P_PV_EPC_Index=17794
,P_BTN_MSA_Total_Value=17810
,P_Vision_Align_Trigger_Timer=17811
,P_Vision_Stack_Trigger_Timer=17812
,P_MSA_Chk_Pos_Timer=17813
,P_MSA_Chk_Pos_Time=17814
,P_VISION_MSA_Seq_Index=17835
,P_VISION_MSA_Anode_Align_Bit_Pos=17836
,P_VISION_MSA_Seq_PreCondition_Index=17837
,P_MSA_CycleStop_Point_Check_Complete_RTN=17838
,P_Current_Anode_Align_MSA_Run_Count=17844
,P_Current_Cathode_Align_MSA_Run_Count=17845
,P_Current_Anode_Stack_MSA_Run_Count=17846
,P_Current_Cathode_Stack_MSA_Run_Count=17847
,P_VISION_MSA_Align_Count_Chk_Flag=17848
,P_VISION_MSA_Stack_Count_Chk_Flag=17849
,P_VISION_MSA_pre_InterLock_Cmd=17850
,P_VISION_MSA_pre_InterLock_Status=17851
,P_VISION_MSA_pre_InterLock_Check_Assy_Bit=17852
,P_VISION_MSA_pre_InterLock_Assy_Bit_Pos=17853
,P_Vision_MSA_Interlock_Status=17854
,P_VISION_MSA_MODE=17855
,P_VISION_MSA_Status_Flag=17856
,P_VISION_MSA_State_Machine=17857
,P_VISION_MSA_Status=17858
,P_VISION_MSA_Seq_Command_Occurs=17859
,P_Vision_Align_Trigger_Time=17860
,P_Anode_Align_MSA_Motion_Check=17861
,P_Cathode_Align_MSA_Motion_Check=17862
,P_Anode_Stack_MSA_Motion_Check=17863
,P_Cathode_Stack_MSA_Motion_Check=17864
,P_Anode_Align_MSA_Motion_ProgActive_Complete=17865
,P_Cathode_Align_MSA_Motion_ProgActive_Complete=17866
,P_Anode_Stack_MSA_Motion_ProgActive_Complete=17867
,P_Cathode_Stack_MSA_Motion_ProgActive_Complete=17868
,P_BTN_Align_Off_Total_Value=17869
,P_Align_Take_Off_Status=17873
,P_Align_Take_Off_Mode=17874
,P_Align_Take_Off_Status_Flag=17875
,P_Align_Take_Off_State_Machine=17876
,P_Align_Take_Off_Chk_Pos_Timer=17877
,P_Align_Take_Off_Motor_Check_Complete=17878
,P_Align_Take_Off_Speed_Return_Complete=17879
,P_Align_Take_Off_Interlock_Status=17880
,P_Align_Take_Off_pre_InterLock_Cmd=17881
,P_Align_Take_Off_pre_InterLock_Status=17882
,P_Align_Take_Off_pre_InterLock_Check_Assy_Bit=17883
,P_Align_Take_Off_pre_InterLock_Assy_Bit_Pos=17884
,P_Align_Take_Off_Seq_Index=17885
,P_Align_Take_Off_Seq_PreCondition_Index=17886
,P_Align_Take_Off_Stop_Signal=17907
,P_Vision_Cal_Reset_Count=17908
,P_2nd_PNP_Cleaning_Mode_Cmd=17909
,P_2nd_PNP_Cleaning_Mode_Status=17910
,P_2nd_PNP_Cleaning_Mode_Z_Jog_Speed=17911
,P_2nd_PNP_Cleaning_Mode_X_Jog_Speed=17912
,P_2nd_PNP_Cleaning_Mode_T_Jog_Speed=17913
,P_2nd_PNP_Cleaning_Avoid_2nd_T_Pos=17914
,P_PNP_Vac_Chk_Mode_Interlock=17915
,P_Vac_Chk_Test=17916
,P_Anode_1st_PNP_Vac_Chk_Mode_Blocked=17917
,P_Cathode_1st_PNP_Vac_Chk_Mode_Blocked=17918
,P_Anode_2nd_PNP_Vac_Chk_Mode_Blocked=17919
,P_Cathode_2nd_PNP_Vac_Chk_Mode_Blocked=17920
,P_SM_Anode_1st_PNP_Vac_Chk_Mode=17921
,P_SM_Cathode_1st_PNP_Vac_Chk_Mode=17922
,P_SM_Anode_2nd_PNP_Vac_Chk_Mode=17923
,P_SM_Cathode_2nd_PNP_Vac_Chk_Mode=17924
,P_Anode_1st_PNP_Vac_Chk_Execute_Timer=17925
,P_Cathode_1st_PNP_Vac_Chk_Execute_Timer=17926
,P_Anode_2nd_PNP_Vac_Chk_Execute_Timer=17927
,P_Cathode_2nd_PNP_Vac_Chk_Execute_Timer=17928
,P_Anode_1st_PNP_Vac_Check_Timer=17929
,P_Cathode_1st_PNP_Vac_Check_Timer=17930
,P_Anode_2nd_PNP_Vac_Check_Timer=17931
,P_Cathode_2nd_PNP_Vac_Check_Timer=17932
,P_Anode_1st_PNP_Vac_Chk_Status=17933
,P_Cathode_1st_PNP_Vac_Chk_Status=17934
,P_Anode_2nd_PNP_Vac_Chk_Status=17935
,P_Cathode_2nd_PNP_Vac_Chk_Status=17936
,P_Anode_1st_PNP_Vac_Chk_Mode_Stop_Blocked=17937
,P_Cathode_1st_PNP_Vac_Chk_Mode_Stop_Blocked=17938
,P_Anode_2nd_PNP_Vac_Chk_Mode_Stop_Blocked=17939
,P_Cathode_2nd_PNP_Vac_Chk_Mode_Stop_Blocked=17940
,P_Anode_1st_PnP_Vac_Chk_Mode_RTN=17941
,P_Cathode_1st_PnP_Vac_Chk_Mode_RTN=17942
,P_Anode_2nd_PnP_Vac_Chk_Mode_RTN=17943
,P_Cathode_2nd_PnP_Vac_Chk_Mode_RTN=17944
,P_PNP_Vac_Chk_Mode_TimeBase_Rtn=17945
,P_PNP_Vac_Chk_Mode_Timer=17946
,P_Anode_1st_PNP_Vac_Chk_Mode_Err=17947
,P_Cathode_1st_PNP_Vac_Chk_Mode_Err=17948
,P_Anode_2nd_PNP_Vac_Chk_Mode_Err=17949
,P_Cathode_2nd_PNP_Vac_Chk_Mode_Err=17950
,P_PNP_Vac_Chk_Mode_BTN_Err=17951
,P_BTN_CA_1st_PNP_Vac_Chk_Mode=17952
,P_BTN_AN_1st_PNP_Vac_Chk_Mode=17953
,P_BTN_CA_2nd_PNP_Vac_Chk_Mode=17954
,P_BTN_AN_2nd_PNP_Vac_Chk_Mode=17955
,P_System_Cascading_ON_Cmd=18100
,P_System_Cascading_OFF_Cmd=18101
,P_System_Master_Following_ON_Cmd=18102
,P_System_Master_Following_OFF_Cmd=18103
,P_System_CamTable_ON_Cmd=18104
,P_System_CamTable_OFF_Cmd=18105
,P_System_Spool_Home_Ready_Pos_Cmd=18106
,P_System_Cascading_ON_Status=18107
,P_System_Cascading_OFF_Status=18108
,P_System_Master_Following_ON_Status=18109
,P_System_Master_Following_OFF_Status=18110
,P_System_CamTable_ON_Status=18111
,P_System_CamTable_OFF_Status=18112
,P_System_Spool_Home_Ready_Pos_Status=18113
,P_System_Cascading_ON_State_Machine=18114
,P_System_Cascading_OFF_State_Machine=18115
,P_System_Master_Follwing_ON_State_Machine=18116
,P_System_Master_Follwing_OFF_State_Machine=18117
,P_System_CamTable_ON_State_Machine=18118
,P_System_CamTable_OFF_State_Machine=18119
,P_System_Spool_Home_Ready_Pos_State_Machine=18120
,P_System_Cascading_ON_Complete_Flag=18121
,P_System_Cascading_OFF_Complete_Flag=18122
,P_System_Master_Following_ON_Complete_Flag=18123
,P_System_Master_Following_OFF_Complete_Flag=18124
,P_System_CamTable_ON_Complete_Flag=18125
,P_System_CamTable_OFF_Complete_Flag=18126
,P_System_Spool_Home_Ready_Pos_Complete_Flag=18127
,P_Servo_Dancer_Cascading_Off_Timer=18128
,P_Servo_Dancer_Cascading_Set_Timer=18129
,P_Dancer_Frist_Home_Ready_Pos_Timer=18130
,P_Driving_Motor_Use_Flag=18131
,P_Home_Spool_Unwinding=18132
,P_OutValue=18133
,P_Dancer_Out_Slew_Seq=18134
,P_OutChangeValue=18135
,P_Rot_OutValue=18136
,P_OutChangeTime=18137
,P_Regul_Max_kPa_Value=18148
,P_Regul_Min_kPa_Value=18149
,P_Regul_Max_AD=18150
,P_Regul_Min_AD=18151
,P_Current_Max_Value=18152
,P_Current_Min_Value=18153
,P_Current_Max_AD=18154
,P_Current_Min_AD=18155
,P_Sepa_Cal_Inclination=18156
,P_Regul_Cal_Inclination=18157
,P_Cutter_Heat_Amp_Data_Bit=18158
,P_Cut_Heat_Amp_Value=18159
,P_AI_Cathode_Clamp_Damper_AVG=18160
,P_AI_Anode_Clamp_Damper_AVG=18161
,P_Tension_Ready_Pos_Cmd=18162
,P_Tension_Ready_State_Machine=18163
,P_Tension_Ready_Pos_Status=18164
,P_Dancer_Center_Pos=18165
,P_Upper_Sepa_Cal_Inclination=18166
,P_Lower_Sepa_Cal_Inclination=18167
,P_Unwinder_Jogspeed=18168
,P_Cascading_First_Out=18169
,P_Dancer_Cur_Vdc=18170
,P_Dancer_Cur_Torque=18171
,P_Dancer_Cur_Newton=18172
,P_Dancer_Cur_Kgf=18173
,P_Board_IO_Count=18174
,P_Force_BTN_Address_Clear_Count=18175
,P_Force_BTN_Condition_Count=18560
,P_Old_Force_BTN_Mode=18561
,P_Force_BTN_Address_Count=18562
,P_Force_BTN_GPIO_Address_Count=18563
,P_Force_BTN_Ecat_Address_Count=18564
,P_Force_BTN_M_Variable_Save_Count=18565
,P_Force_BTN_M_Variable_Start_Num=18566
,P_Force_BTN_Normal_Mode_Status=18567
,P_Force_BTN_Normal_Mode_State_Machine=18568
,P_Force_BTN_Normal_Mode_Complete_Flag=18569
,P_Force_BTN_Force_Mode_Timer=18570
,P_Force_BTN_Force_Mode_Delay_Time=18571
,P_Force_BTN_Force_Mode_Status=18572
,P_Force_BTN_Force_Mode_State_Machine=18573
,P_Force_BTN_Force_Mode_Complete_Flag=18574
,P_Mem_Save_Error_Bit=18575
,P_Servo_Gain_Save_Command=18586
,P_Servo_Gain_Load_Command=18587
,P_Servo_Gain_Save_Flag=18588
,P_Servo_Gain_Load_Flag=18589
,P_Insert_Phase_Flag=18770
,P_Alarm_Occur_Flag=18871
,P_Alarm_Wait_Time=18876
,P_Alarm_Delay_Timer=18877
,P_Compare_Priority=18878
,P_Alarm_Report=18879
,P_Alarm_Num=18880
,P_Alarm_Index=18881
,P_First_Alarm_Flag=18882
,P_Servo_Alarm_Check=19013
,P_Ecat_Servo_Alarm_Check=19014
,P_IL_ON_OFF_Flag=19735
,P_IL_Coord_Robot=19736
,P_IL_Robot_Bit=19737
,P_IL_Outer_Status=19738
,P_Robot_Unit_Serch_Flag=19739
,P_IL_Sprint=19743
,P_IL_length=19744
,P_IL_Strcat=19745
,P_IL_Popup_Motor=19746
,P_IL_Motor_Page=19747
,P_IL_Recipe_Bit=19748
,P_Interlock_Popup_On_Flag=19749
,P_Motor_Page=19750
,P_OP_Side_Ca_PNP_Pos=19751
,P_OP_Side_An_PNP_Pos=19752
,P_OP_Side_PMAC_Cur_Mode=19753
,P_Abs_Trans_Cur_Pos=19754
,P_Minus_IL_Offset=19755
,P_Plus_IL_Offset=19756
,P_2nd_PNP_Arm_Radius=19757
,P_IL_Enable_Flag=19758
,P_Plus_Interlock_Bit=19759
,P_Minus_Interlock_Bit=19760
,UPPos=19761
,Unloader_In_StackPos=19762
,FR_AnodePos=19763
,FR_CathodePos=19764
,Before_In_Stack=19765
,In_Stack=19766
,P_Minus_Collision_Risk_Motor=19769
,P_IL_Clamp_Y=19770
,P_IL_Clamp_Z=19771
,P_IL_Clamp_Pos=19772
,P_IL_Use_FR_Clamp_Pos=19773
,P_Ca_1st_Plus_IL_Offset=20174
,P_Ca_1st_Minus_IL_Offset=20175
,P_An_1st_Plus_IL_Offset=20176
,P_An_1st_Minus_IL_Offset=20177
,P_Z_Pos_Data=20196
,P_Clamp_Z_Plus_IL_Offset=20197
,P_FR_Z_Minus_IL_Offset=20202
,P_X_PLC_InterLock=20258
,P_IL_Home_Chk=20259
,P_IL_Home_Chk_Motor_Update=20280
,P_IL_Inside_Home_Chk_Complete=20281
,P_IL_Outside_Home_Chk_Complete=20282
,P_IL_Motor_Home_Chk_RTN=20283
,P_IL_Function_Cnt=20284
,P_IL_Function_Motor_Num=20285
,P_Anode_1st_TR_Belt_Down_Flag=20286
,P_Anode_1st_TR_Belt_Pick_Up_Flag=20287
,P_Anode_1st_TR_Align_Down_Flag=20288
,P_Anode_2nd_TR_Align_Pick_Up_Flag=20289
,P_Anode_2nd_TR_Stack_Down_Flag=20290
,P_Anode_NG_TR_Align_Pick_Up_Flag=20291
,P_Anode_NG_TR_NG_Place_Down_Flag=20292
,P_Anode_2nd_TR_Align_Down_Flag=20293
,P_Anode_1st_TR_Align_Pick_Up_Flag=20294
,P_Anode_1st_TR_Belt_Down_State_Machine=20295
,P_Anode_1st_TR_Belt_Down_Status=20296
,P_Anode_1st_TR_Belt_Pick_Up_State_Machine=20297
,P_Anode_1st_TR_Belt_Pick_Up_Status=20298
,P_Anode_1st_TR_Align_Down_State_Machine=20299
,P_Anode_1st_TR_Align_Down_Status=20300
,P_Anode_2nd_TR_Align_Pick_Up_State_Machine=20301
,P_Anode_2nd_TR_Align_Pick_Up_Status=20302
,P_Anode_2nd_TR_Stack_Down_State_Machine=20303
,P_Anode_2nd_TR_Stack_Down_Status=20304
,P_Anode_NG_TR_Align_Pick_Up_State_Machine=20305
,P_Anode_NG_TR_Align_Pick_Up_Status=20306
,P_Anode_NG_TR_NG_Place_Down_State_Machine=20307
,P_Anode_NG_TR_NG_Place_Down_Status=20308
,P_Anode_2nd_TR_Align_Down_State_Machine=20309
,P_Anode_2nd_TR_Align_Down_Status=20310
,P_Anode_1st_TR_Align_Pick_Up_State_Machine=20311
,P_Anode_1st_TR_Align_Pick_Up_Status=20312
,P_Cathode_1st_TR_Belt_Down_Flag=20313
,P_Cathode_1st_TR_Belt_Pick_Up_Flag=20314
,P_Cathode_1st_TR_Align_Down_Flag=20315
,P_Cathode_2nd_TR_Align_Pick_Up_Flag=20316
,P_Cathode_2nd_TR_Stack_Down_Flag=20317
,P_Cathode_NG_TR_Align_Pick_Up_Flag=20318
,P_Cathode_NG_TR_NG_Place_Down_Flag=20319
,P_Cathode_2nd_TR_Align_Down_Flag=20320
,P_Cathode_1st_TR_Align_Pick_Up_Flag=20321
,P_Cathode_1st_TR_Belt_Down_State_Machine=20322
,P_Cathode_1st_TR_Belt_Down_Status=20323
,P_Cathode_1st_TR_Belt_Pick_Up_State_Machine=20324
,P_Cathode_1st_TR_Belt_Pick_Up_Status=20325
,P_Cathode_1st_TR_Align_Down_State_Machine=20326
,P_Cathode_1st_TR_Align_Down_Status=20327
,P_Cathode_2nd_TR_Align_Pick_Up_State_Machine=20328
,P_Cathode_2nd_TR_Align_Pick_Up_Status=20329
,P_Cathode_2nd_TR_Stack_Down_State_Machine=20330
,P_Cathode_2nd_TR_Stack_Down_Status=20331
,P_Cathode_NG_TR_Align_Pick_Up_State_Machine=20332
,P_Cathode_NG_TR_Align_Pick_Up_Status=20333
,P_Cathode_NG_TR_NG_Place_Down_State_Machine=20334
,P_Cathode_NG_TR_NG_Place_Down_Status=20335
,P_Cathode_2nd_TR_Align_Down_State_Machine=20336
,P_Cathode_2nd_TR_Align_Down_Status=20337
,P_Cathode_1st_TR_Align_Pick_Up_State_Machine=20338
,P_Cathode_1st_TR_Align_Pick_Up_Status=20339
,P_Old_Anode_Belt_ASCII=20340
,P_Old_Cathode_Belt_ASCII=20341
,P_Anode_Belt_ASCII=20342
,P_Cathode_Belt_ASCII=20343
,P_Check_Vac_Time=20344
,P_Send_Anode_NG_Code_To_PLC=20345
,P_Receive_Anode_NG_Code_From_PLC=20346
,P_Send_Cathode_NG_Code_To_PLC=20347
,P_Receive_Cathode_NG_Code_From_PLC=20348
,P_Current_Cell_Memory_Anode_1P=20349
,P_Current_Cell_Memory_Anode_AT=20350
,P_Current_Cell_Memory_Anode_2P=20351
,P_Current_Cell_Memory_Cathode_1P=20352
,P_Current_Cell_Memory_Cathode_AT=20353
,P_Current_Cell_Memory_Cathode_2P=20354
,P_Current_Cell_Memory_Stack_Table=20355
,P_Current_Cell_Memory_Cathode_NG_TR=20356
,P_Current_Cell_Memory_Anode_NG_TR=20357
,P_BTN_Anode_1st_TR_Buffer_Clear=20358
,P_BTN_Anode_2nd_TR_Buffer_Clear=20359
,P_BTN_Anode_Align_Buffer_Clear=20360
,P_BTN_Anode_NG_TR_Buffer_Clear=20361
,P_BTN_Cathode_1st_TR_Buffer_Clear=20362
,P_BTN_Cathode_2nd_TR_Buffer_Clear=20363
,P_BTN_Cathode_Align_Buffer_Clear=20364
,P_BTN_Cathode_NG_TR_Buffer_Clear=20365
,P_Old_BTN_Anode_1st_TR_Buffer_Clear=20366
,P_Old_BTN_Anode_2nd_TR_Buffer_Clear=20367
,P_Old_BTN_Anode_Align_Buffer_Clear=20368
,P_Old_BTN_Anode_NG_TR_Buffer_Clear=20369
,P_Old_BTN_Cathode_1st_TR_Buffer_Clear=20370
,P_Old_BTN_Cathode_2nd_TR_Buffer_Clear=20371
,P_Old_BTN_Cathode_Align_Buffer_Clear=20372
,P_Old_BTN_Cathode_NG_TR_Buffer_Clear=20373
,P_Send_Anode_NG_Code_Flag=20374
,P_Send_Cathode_NG_Code_Flag=20375
,P_Anode_Vision_NG_To_PLC_Flag=20376
,P_Cathode_Vision_NG_To_PLC_Flag=20377
,P_Status_Clear_Sheet_Maint_Check=20378
,P_Single_Run_Start_Flag=20379
,P_Single_Run_Control_State_Machine=20380
,P_Single_Run_Control_Status=20381
,P_Single_Run_Execute_Bit=20382
,P_User_Dry_Run_Mode=20383
,P_Single_Run_State_Machine=20384
,P_Single_Run_Status=20385
,P_Single_Run_Unit=20386
,P_Single_Run_Evade_Pos_RTN=20387
,P_Single_Run_Evade_Pos_Check_RTN=20388
,P_Single_Run_Pos_Rtn1=20389
,P_Single_Run_Pos_Rtn2=20390
,P_Single_Run_Motion_Ready_RTN=20391
,P_Single_Run_Execution_Interlock_RTN=20392
,P_Single_Run_Coord_Activate_RTN=20393
,P_Single_Run_Coord_Activate_Check_RTN=20394
,P_Single_Run_Select_Run_Mode_RTN=20395
,P_Single_Run_Execution_Run_RTN=20396
,P_Single_Run_Motion_Ready_State_Machine=20397
,P_Coord_1=20398
,P_Coord_2=20399
,P_Coord_3=20400
,P_Coord_4=20401
,P_Final_Roll_Z_Motion_Flag=20402
,P_Final_Roll_Z_Motion_State_Machine=20403
,P_Main_Z_Motion_Flag=20404
,P_Main_Z_Motion_State_Machine=20405
,P_Single_Run_Mode_Flag=20406
,P_Cathode_AT_Motion_Flag=20407
,P_Cathode_Align_Motion_State_Machine=20408
,P_Anode_AT_Motion_Flag=20409
,P_Anode_Align_Motion_State_Machine=20410
,P_Sheet_Paper_Motion_Flag=20411
,P_Sheet_Paper_Motion_State_Machine=20412
,P_Cathode_NG_PNP_T_Motion_Flag=20413
,P_Cathode_NG_PNP_T_Motion_State_Machine=20414
,P_Cathode_NG_PNP_Z_Motion_Flag=20415
,P_Cathode_NG_PNP_Z_Motion_State_Machine=20416
,P_Anode_NG_PNP_T_Motion_Flag=20417
,P_Anode_NG_PNP_T_Motion_State_Machine=20418
,P_Anode_NG_PNP_Z_Motion_Flag=20419
,P_Anode_NG_PNP_Z_Motion_State_Machine=20420
,P_1st_UND_X_Motion_Flag=20421
,P_1st_UND_X_Motion_State_Machine=20422
,P_1st_UND_Z_Motion_Flag=20423
,P_1st_UND_Z_Motion_State_Machine=20424
,P_1st_UND_T_Motion_Flag=20425
,P_1st_UND_T_Motion_State_Machine=20426
,P_Cathode_Run_Command_Flag=20427
,P_Anode_Run_Command_Flag=20428
,P_NG_PNP_Uint_Motion_Flag=20429
,P_NG_PNP_Uint_State_Machine=20430
,P_NG_PNP_Motion_Cnt=20431
,P_Single_Run_Timer=20442
,P_Single_Run_Align_Timer=20443
,P_Single_Run_Align_Timer2=20444
,P_Single_Run_Finall_Roll_Z_Timer=20445
,P_Single_RuN_MAIN_Z_Timer=20446
,P_Single_Run_Sheet_Paper_Timer=20447
,P_Single_Run_Debug_SM=20448
,P_Error_Monitoring_Count_1=20449
,P_Error_Monitoring_Count_2=20450
,P_Error_Monitoring_Count_3=20451
,P_Error_Monitoring_Count_4=20452
,P_Error_Monitoring_Count_5=20453
,P_Old_Single_Run_Mode_Flag=20454
,P_Old_Current_Mode=20455
,P_Single_Run_Timebase_Off_RTN=20456
,P_Single_Run_Stop_State_Machine=20457
,P_Single_Run_Stop_Status=20458
,P_Single_Run_Stop_Timer=20459
,P_Single_Run_Stop_Init_RTN=20460
,P_Single_Run_Stop_Btn_Chk=20461
,P_Single_Run_Stop_Command=20462
,P_Motor_Ready_Poa_Inpos_200um=20463
,P_Ecat_Parameter_Write_Flag=20464
,P_Ecat_Parameter_Read_Flag=20465
,P_Ecat_Each_Parameter_Write_Flag=20466
,P_Ecat_Slave_Idx=20467
,P_Ec_Num=20468
,P_Ecat_Read_Motor_Num=20469
,P_Ecat_Write_Motor_Num=20470
,P_Ecat_Parameter_Write_State_Machine=20471
,P_Ecat_Parameter_Read_State_Machine=20472
,P_Ecat_Each_Parameter_Write_State_Machine=20473
,P_Ecat_Write_Status=20594
,P_Ecat_Read_Status=20595
,P_Ecat_Each_Write_Status=20596
,P_Align_Plus_Blow_Test=21157
,P_System_Setting_Flag=21158
,P_Ecat_Setting_Flag=21159
,P_Ecat_Activation_State_Machine=21160
,P_PLC31_Ecat_Retry_Cnt=21161
,P_Ecat_Connect_Result=21162
,P_Ecat_Slave_Error=21163
,P_PWM_AbsPhasePosOffset_Change_State_Machine=21164
,P_AbsPhasePosOffset_Change_Complete=21165
,P_PWM_AbsPhasing_Fail=21166
,P_PWM_AbsPhasing_Complete=21167
,P_Whole_Stacking_Tack_Time=21168
,P_Whole_Stacking_Tack_Time_Check=21169
,P_Whole_Stacking_Tack_Timer_Check_Flag=21170
,P_Whole_Stacking_Timer_Shift_Status_Machine=21171
,P_Whole_Stacking_TackTime_Array0=21172
,P_Whole_Stacking_TackTime_Array1=21173
,P_Whole_Stacking_TackTime_Array2=21174
,P_Whole_Stacking_TackTime_Array3=21175
,P_Whole_Stacking_TackTime_Array4=21176
,P_Whole_Stacking_TackTime_Array5=21177
,P_Whole_Stacking_TackTime_Array6=21178
,P_Whole_Stacking_TackTime_Array7=21179
,P_Whole_Stacking_TackTime_Array8=21180
,P_Whole_Stacking_TackTime_Array9=21181
,P_Whole_Stacking_TackTime_Array10=21182
,P_First_Stacking_Start=21183
,P_Last_Stacking_Complete=21184
,P_Stacking_Tack_Time=21185
,P_Stacking_Tack_Time_Check=21186
,P_Stacking_Tack_Timer_Check_Flag=21187
,P_Stacking_Timer_Shift_Status_Machine=21188
,P_Cathode_to_Anode_FR_Tack_Time_Check=21189
,P_Anode_to_Cathode_FR_Tack_Time_Check=21190
,P_Cathode_to_Anode_FR_Tack_Time_Start=21191
,P_Anode_to_Cathode_FR_Tack_Time_Start=21192
,P_Cathode_to_Anode_FR_Tack_Time_Complete=21193
,P_Anode_to_Cathode_FR_Tack_Time_Complete=21194
,P_Cathode_to_Anode_FR_Time=21195
,P_Anode_to_Cathode_FR_Time=21196
,P_Cathode_to_Anode_FR_Tack_Timer_Check_Flag=21197
,P_Anode_to_Cathode_FR_Tack_Timer_Check_Flag=21198
,P_Anode_Align_Table_Time=21199
,P_Anode_Align_Table_Tack_Time_Check=21200
,P_Anode_Align_Table_Tack_Timer_Check_Flag=21201
,P_Anode_Align_Table_Timer_Shift_Status_Machine=21202
,P_Anode_Align_Tack_Time_Start=21203
,P_Anode_Align_Tack_Time_Complete=21204
,P_Cathode_Align_Table_Time=21205
,P_Cathode_Align_Table_Tack_Time_Check=21206
,P_Cathode_Align_Table_Tack_Timer_Check_Flag=21207
,P_Cathode_Align_Table_Timer_Shift_Status_Machine=21208
,P_Cathode_Align_Tack_Time_Start=21209
,P_Cathode_Align_Tack_Time_Complete=21210
,P_Anode_1th_Tack_Time_Start=21211
,P_Anode_1th_Tack_Time_Complete=21212
,P_Anode_1th_Time=21213
,P_Anode_1th_Tack_Time_Check=21214
,P_Anode_1th_Tack_Timer_Check_Flag=21215
,P_Anode_1th_Timer_Shift_Status_Machine=21216
,P_Cathode_1th_Tack_Time_Start=21217
,P_Cathode_1th_Tack_Time_Complete=21218
,P_Cathode_1th_Time=21219
,P_Cathode_1th_Tack_Time_Check=21220
,P_Cathode_1th_Tack_Timer_Check_Flag=21221
,P_Cathode_1th_Timer_Shift_Status_Machine=21222
,P_Anode_2th_Tack_Time_Start=21223
,P_Anode_2th_Tack_Time_Complete=21224
,P_Anode_2th_Time=21225
,P_Anode_2th_Tack_Time_Check=21226
,P_Anode_2th_Tack_Timer_Check_Flag=21227
,P_Anode_2th_Timer_Shift_Status_Machine=21228
,P_Cathode_2th_Tack_Time_Start=21229
,P_Cathode_2th_Tack_Time_Complete=21230
,P_Cathode_2th_Time=21231
,P_Cathode_2th_Tack_Time_Check=21232
,P_Cathode_2th_Tack_Timer_Check_Flag=21233
,P_Cathode_2th_Timer_Shift_Status_Machine=21234
,P_Anode_1th_NG_Tack_Time_Start=21235
,P_Anode_1th_NG_Tack_Time_Complete=21236
,P_Anode_1th_NG_Time=21237
,P_Anode_1th_NG_Tack_Time_Check=21238
,P_Anode_1th_NG_Tack_Timer_Check_Flag=21239
,P_Anode_1th_NG_Timer_Shift_Status_Machine=21240
,P_Cathode_1th_NG_Tack_Time_Start=21241
,P_Cathode_1th_NG_Tack_Time_Complete=21242
,P_Cathode_1th_NG_Time=21243
,P_Cathode_1th_NG_Tack_Time_Check=21244
,P_Cathode_1th_NG_Tack_Timer_Check_Flag=21245
,P_Cathode_1th_NG_Timer_Shift_Status_Machine=21246
,P_Anode_Clamp_Tack_Time_Start=21247
,P_Anode_Clamp_Tack_Time_Complete=21248
,P_Anode_Clamp_Time=21249
,P_Anode_Clamp_Tack_Time_Check=21250
,P_Anode_Clamp_Tack_Timer_Check_Flag=21251
,P_Anode_Clamp_Timer_Shift_Status_Machine=21252
,P_Cathode_Clamp_Tack_Time_Start=21253
,P_Cathode_Clamp_Tack_Time_Complete=21254
,P_Cathode_Clamp_Time=21255
,P_Cathode_Clamp_Tack_Time_Check=21256
,P_Cathode_Clamp_Tack_Timer_Check_Flag=21257
,P_Cathode_Clamp_Timer_Shift_Status_Machine=21258
,P_Final_Roll_X_Timer_Shift_Status_Machine=21259
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array0=21260
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array1=21261
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array2=21262
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array3=21263
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array4=21264
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array5=21265
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array6=21266
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array7=21267
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array8=21268
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array9=21269
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array10=21270
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array0=21271
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array1=21272
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array2=21273
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array3=21274
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array4=21275
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array5=21276
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array6=21277
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array7=21278
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array8=21279
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array9=21280
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array10=21281
,P_MCC_Anode_Align_NG_Count=21336
,P_MCC_Cathode_Align_NG_Count=21337
,P_MCC_Anode_Retry_NG_Count=21338
,P_MCC_Cathode_Retry_NG_Count=21339
,P_Discharge_Hold_Timer=21352
,P_Discharge_Hold_Time=21353
,P_AN_1st_Z_Zero_Angle=21354
,P_AN_1st_Z_Zero_Length=21355
,P_Anode_1st_PNP_Z_Crank_Zero_Pos=21356
,P_Anode_1st_PNP_Z_Crank_real_Move_Pos=21357
,P_Anode_1st_PNP_Z_Crank_radian=21358
,P_Anode_1st_PNP_Z_Acos_denominator=21359
,P_Anode_1st_PNP_Z_Acos_numerator=21360
,P_Anode_1st_PNP_Z_Crank_Angle=21361
,P_Anode_1st_PNP_Z_Real_Move_Pos=21362
,P_Anode_1st_Fwd_Bwd_Rise=21363
,P_CA_1st_Z_Zero_Angle=21364
,P_CA_1st_Z_Zero_Length=21365
,P_Cathode_1st_PNP_Z_Crank_Zero_Pos=21366
,P_Cathode_1st_PNP_Z_Crank_real_Move_Pos=21367
,P_Cathode_1st_PNP_Z_Crank_radian=21368
,P_Cathode_1st_PNP_Z_Acos_denominator=21369
,P_Cathode_1st_PNP_Z_Acos_numerator=21370
,P_Cathode_1st_PNP_Z_Crank_Angle=21371
,P_Cathode_1st_PNP_Z_Real_Move_Pos=21372
,P_Cathode_1st_Fwd_Bwd_Rise=21373
,P_AN_2nd_Z_Zero_Angle=21374
,P_AN_2nd_Z_Zero_Length=21375
,P_Anode_2nd_PNP_Z_Crank_Zero_Pos=21376
,P_Anode_2nd_PNP_Z_Crank_real_Move_Pos=21377
,P_Anode_2nd_PNP_Z_Crank_radian=21378
,P_Anode_2nd_PNP_Z_Acos_denominator=21379
,P_Anode_2nd_PNP_Z_Acos_numerator=21380
,P_Anode_2nd_PNP_Z_Crank_Angle=21381
,P_Anode_2nd_PNP_Z_Real_Move_Pos=21382
,P_Anode_2nd_Fwd_Bwd_Rise=21383
,P_CA_2nd_Z_Zero_Angle=21384
,P_CA_2nd_Z_Zero_Length=21385
,P_Cathode_2nd_PNP_Z_Crank_Zero_Pos=21386
,P_Cathode_2nd_PNP_Z_Crank_real_Move_Pos=21387
,P_Cathode_2nd_PNP_Z_Crank_radian=21388
,P_Cathode_2nd_PNP_Z_Acos_denominator=21389
,P_Cathode_2nd_PNP_Z_Acos_numerator=21390
,P_Cathode_2nd_PNP_Z_Crank_Angle=21391
,P_Cathode_2nd_PNP_Z_Real_Move_Pos=21392
,P_Cathode_2nd_Fwd_Bwd_Rise=21393
,P_Old_Recipe_Anode_1st_PNP_Z_Ready_Up=21394
,P_Old_Recipe_Anode_1st_PNP_Z_Belt_Up=21395
,P_Old_Recipe_Anode_1st_PNP_Z_Belt_Down=21396
,P_Old_Recipe_Anode_1st_PNP_Z_Align_Up=21397
,P_Old_Recipe_Anode_1st_PNP_Z_Align_Down=21398
,P_Old_Recipe_Cathode_1st_PNP_Z_Ready_Up=21399
,P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Up=21400
,P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Down=21401
,P_Old_Recipe_Cathode_1st_PNP_Z_Align_Up=21402
,P_Old_Recipe_Cathode_1st_PNP_Z_Align_Down=21403
,P_Old_Recipe_Anode_2nd_PNP_Z_Align_Up=21404
,P_Old_Recipe_Anode_2nd_PNP_Z_Align_Down=21405
,P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Up=21406
,P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Down=21407
,P_Old_Recipe_Anode_2nd_PNP_Z_Ready_Up=21408
,P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Up=21409
,P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Down=21410
,P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Up=21411
,P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Down=21412
,P_Old_Recipe_Cathode_2nd_PNP_Z_Ready_Up=21413
,P_PLC19_All_Home_Status=21414
,P_PLC19_All_Home_Module_Status=21415
,P_PLC19_All_Home_State_Machine=21416
,P_PLC19_All_Home_Seq_Index=21417
,P_PLC19_All_Home_Self_Index=21418
,P_PLC19_All_Home_Set_Mode_Return=21419
,P_PLC19_All_Home_Timer=21420
,P_PLC19_All_Home_Tact_Time=21441
,P_All_Home_Module_Error=21442
,P_Act_ALL_Home_Time_Out_Time=21443
,P_Act_Hold_Time_Out_Time=21659
,P_First_PNP_T_Wait_Status=21695
,P_First_PNP_Z_Wait_Status=21696
,P_First_PNP_Picker_T_Turn_Status=21697
,P_First_PNP_T_Wait_To_Belt_Status=21698
,P_First_PNP_Z_Wait_To_Belt_Status=21699
,P_First_PNP_T_Align_To_Belt_Status=21700
,P_First_PNP_Z_Align_To_Belt_Status=21701
,P_First_PNP_Z_Belt_Down_Status=21702
,P_First_PNP_Z_Belt_Up_Status=21703
,P_First_PNP_T_Wait_To_Align_Status=21704
,P_First_PNP_Z_Wait_To_Align_Status=21705
,P_First_PNP_T_Belt_To_Align_Status=21706
,P_First_PNP_Z_Belt_To_Align_Status=21707
,P_First_PNP_Z_Align_Down_Status=21708
,P_First_PNP_Z_Align_Up_Status=21709
,P_First_PNP_Vac_On_Status=21710
,P_First_PNP_Blow_On_Status=21711
,P_Second_PNP_T_Align_To_Stack_Status=21712
,P_Second_PNP_Z_Align_To_Stack_Status=21713
,P_Second_PNP_T_Stack_To_Align_Status=21714
,P_Second_PNP_Z_Stack_To_Align_Status=21715
,P_Second_PNP_Z_Align_Down_Status=21716
,P_Second_PNP_Z_Align_Up_Status=21717
,P_Second_PNP_Vac_On_Status=21718
,P_Second_PNP_Blow_On_Status=21719
,P_NG_PNP_NG_Bos_Status=21720
,P_NG_PNP_Align_Status=21721
,P_NG_PNP_Align_Down_Status=21722
,P_NG_PNP_Align_Up_Status=21723
,P_NG_PNP_Vac_On_Status=21724
,P_NG_PNP_Blow_On_Status=21725
,P_Hold_1st_PNP_Position=21726
,P_Hold_Module_Error=21727
,P_Act_Execute_Time_Out_Time=21788
,P_Execute_Module_Error=21801
,P_Execute_First_Sepa_Total_Tact_Time=21802
,P_Current_JR_Thickness_mm=21803
,P_Current_Jelly_Roll_Thinckness_mm_Send_Enable_Flag=21804
,P_Stack_Table_NG_Flag=21805
,P_Suspend_Discharge_Cell_Out_Restart=21806
,P_Jelly_Roll_OK_Count=21807
,P_Jelly_Roll_NG_Count=21808
,P_Jelly_Roll_Total_Count=21809
,P_Jelly_Roll_ID=21810
,P_Jelly_Roll_Prod_Count=21811
,P_Jelly_Roll_Recipe_Count=21812
,P_Current_Cell_Memory_Jelly_Roll=21813
,P_Real_Stacking_Host_ID_Count=21814
,P_VISION_PLC10_Anode_Align_Start=21815
,P_VISION_PLC10_Cathode_Align_Start=21816
,P_Stack_Table_NG_Count=21817
,P_Stack_PMAC_NG_Code=21818
,P_Stack_Vision_NG_Code_IN_Timer=21819
,P_Discharge_Waiting_Flag=21820
,P_ARC_Flag=21821
,P_Discharge_Queue_Complete_Flag=21822
,P_Shared_Discharge_Cmd=21823
,P_Shared_Discharge_State_Machine=21824
,P_Discharge_Dont_Stop_Point_Flag=21825
,P_1st_Discharge_State=21826
,P_Discharge_DIO_Trg=21827
,P_Data_Parsing_Flag=21828
,P_Memory_Discharge_Data=21829
,P_Prev_Sepa_Stack_Completed_Flag=21830
,P_First_Sepa_Mode_Status=21831
,P_First_Sepa_Mode_Flag=21832
,P_Discharge_Unloader_Handover_Timer=21833
,P_Discharge_Unloader_Handover_Time=21834
,P_B_1st_to_3rd_Discharge_cmd=21835
,P_B_1st_to_3rd_Discharge_State_Machine=21836
,P_3rd_Discharge_Status=21837
,P_Execute_First_Sepa_Mode_Cmd=21898
,P_Execute_First_Sepa_Mode_Status=21899
,P_Execute_First_Sepa_Mode_Module_Status=21900
,P_Execute_First_Sepa_Mode_State_Machine=21901
,P_Execute_First_Sepa_Mode_Seq_Index=21902
,P_Execute_First_Sepa_Mode_Self_Index=21903
,P_Execute_First_Sepa_Mode_Debug_Edge=21904
,P_Execute_First_Sepa_Mode_Timer=21935
,P_Execute_First_Sepa_Mode_Tact_Time=21956
,P_Execute_1st_Sepa_Status=21957
,P_Suspend_Discharge_Cmd=21958
,P_Suspend_Discharge_Status=21959
,P_Suspend_Discharge_State_Machine=21960
,P_Suspend_Discharge_Seq_Index=21961
,P_Suspend_Discharge_Self_Index=21962
,P_Suspend_Discharge_Timer=22053
,P_Suspend_Discharge_Tact_Time=22074
,P_Suspend_Discharge_1st_Unloader_JR_Grip=22075
,P_Suspend_ARC_Cmd=22076
,P_Suspend_ARC_Status=22077
,P_Suspend_ARC_State_Machine=22078
,P_Suspend_ARC_Seq_Index=22079
,P_Suspend_ARC_Self_Index=22080
,P_Suspend_ARC_Manual_Occur_Flag=22081
,P_Suspend_ARC_Timer=22172
,P_Suspend_ARC_Tact_Time=22193
,P_Suspend_Anode_1TR_Cell_Supply_Cmd=22194
,P_Suspend_Anode_1TR_Cell_Supply_Status=22195
,P_Suspend_Anode_1TR_Cell_Supply_State_Machine=22196
,P_Suspend_Anode_1TR_Cell_Supply_Seq_Index=22197
,P_Suspend_Anode_1TR_Cell_Supply_Self_Index=22198
,P_Suspend_Anode_1TR_Cell_Supply_Module_Status=22199
,P_Suspend_Anode_1TR_Cell_Supply_Timer=22290
,P_Suspend_Anode_1TR_Cell_Supply_Tact_Time=22311
,P_Hold_Exist_Insp_Cmd=22312
,P_Hold_Exist_Insp_Status=22313
,P_Hold_Exist_Insp_Module_Status=22314
,P_Hold_Exist_Insp_State_Machine=22315
,P_Hold_Exist_Insp_Seq_Index=22316
,P_Hold_Exist_Insp_Self_Index=22317
,P_Hold_Exist_Insp_Debug_Edge=22318
,P_Hold_Exist_Insp_Timer=22349
,P_Hold_Exist_Insp_Tact_Time=22370
,P_Hold_Remove_NG_PNP_Cmd=22371
,P_Hold_Remove_NG_PNP_Status=22372
,P_Hold_Remove_NG_PNP_Module_Status=22373
,P_Hold_Remove_NG_PNP_State_Machine=22374
,P_Hold_Remove_NG_PNP_Seq_Index=22375
,P_Hold_Remove_NG_PNP_Self_Index=22376
,P_Hold_Remove_NG_PNP_Debug_Edge=22377
,P_Hold_Remove_NG_PNP_Timer=22408
,P_Hold_Remove_NG_PNP_Tact_Time=22429
,P_PLC01_Hold_Remove_NG_PNP_Sub_Flag=22430
,P_PLC01_Hold_Remove_NG_PNP_Sub_State_Machine=22431
,P_PLC01_Hold_Remove_NG_PNP_Sub_Status=22432
,P_Hold_Remove_Align_Cmd=22433
,P_Hold_Remove_Align_Status=22434
,P_Hold_Remove_Align_Module_Status=22435
,P_Hold_Remove_Align_State_Machine=22436
,P_Hold_Remove_Align_Seq_Index=22437
,P_Hold_Remove_Align_Self_Index=22438
,P_Hold_Remove_Align_Debug_Edge=22439
,P_Hold_Remove_Align_Timer=22470
,P_Hold_Remove_Align_Tact_Time=22491
,P_PLC01_Hold_Remove_Align_Sub_Flag=22492
,P_PLC01_Hold_Remove_Align_Sub_State_Machine=22493
,P_PLC01_Hold_Remove_Align_Sub_Status=22494
,P_Hold_Remove_2TR_Cmd=22495
,P_Hold_Remove_2TR_Status=22496
,P_Hold_Remove_2TR_Module_Status=22497
,P_Hold_Remove_2TR_State_Machine=22498
,P_Hold_Remove_2TR_Seq_Index=22499
,P_Hold_Remove_2TR_Self_Index=22500
,P_Hold_Remove_2TR_Debug_Edge=22501
,P_Hold_Remove_2TR_Timer=22532
,P_Hold_Remove_2TR_Tact_Time=22553
,P_Hold_Supply_1TR_Cmd=22554
,P_Hold_Supply_1TR_Status=22555
,P_Hold_Supply_1TR_Module_Status=22556
,P_Hold_Supply_1TR_State_Machine=22557
,P_Hold_Supply_1TR_Seq_Index=22558
,P_Hold_Supply_1TR_Self_Index=22559
,P_Hold_Supply_1TR_Debug_Edge=22560
,P_Hold_Supply_1TR_Timer=22591
,P_Hold_Supply_1TR_Tact_Time=22612
,P_PLC01_Hold_Supply_1TR_Memory_RTN=22613
,P_PLC01_Hold_Supply_1TR_Judge_Flag=22614
,P_PLC01_Hold_Supply_1TR_Judge_State_Machine=22615
,P_PLC01_Hold_Supply_1TR_Judge_Status=22616
,P_Plate_1TR_Supply_Module_Judge_Bit=22617
,P_Hold_Supply_Align_Cmd=22618
,P_Hold_Supply_Align_Status=22619
,P_Hold_Supply_Align_Module_Status=22620
,P_Hold_Supply_Align_State_Machine=22621
,P_Hold_Supply_Align_Seq_Index=22622
,P_Hold_Supply_Align_Self_Index=22623
,P_Hold_Supply_Align_Debug_Edge=22624
,P_Hold_Supply_Align_Timer=22655
,P_Hold_Supply_Align_Tact_Time=22676
,P_Hold_Supply_2TR_Cmd=22677
,P_Hold_Supply_2TR_Status=22678
,P_Hold_Supply_2TR_Module_Status=22679
,P_Hold_Supply_2TR_State_Machine=22680
,P_Hold_Supply_2TR_Seq_Index=22681
,P_Hold_Supply_2TR_Self_Index=22682
,P_Hold_Supply_2TR_Debug_Edge=22683
,P_Hold_Supply_2TR_Timer=22714
,P_Hold_Supply_2TR_Tact_Time=22735
,P_Hold_Semi_Run_Pos_Move_Cmd=22736
,P_Hold_Semi_Run_Pos_Move_Status=22737
,P_Hold_Semi_Run_Pos_Move_Module_Status=22738
,P_Hold_Semi_Run_Pos_Move_State_Machine=22739
,P_Hold_Semi_Run_Pos_Move_Seq_Index=22740
,P_Hold_Semi_Run_Pos_Move_Self_Index=22741
,P_Hold_Semi_Run_Pos_Move_Debug_Edge=22742
,P_Hold_Semi_Run_Pos_Move_Timer=22773
,P_Hold_Semi_Run_Pos_Move_Tact_Time=22794
,P_Act_Suspend_Time_Out_Time=22993
,P_Test_Sungmin_Flag=23060
,P_Suspend_Discharge_Module_Status=23919
,P_Suspend_Discharge_To_Execute_Flag=23920
,P_Suspend_Discharge_Complete_Flag=23921
,P_First_Unloader_Stack_Up_Status=23922
,P_First_Unloader_Stack_FWD_Status=23923
,P_First_Unloader_Grip_Cell_Status=23924
,P_First_Unloader_Stack_BWD_Wait_Status=23925
,P_First_Unloader_Stack_BWD_Status=23926
,P_First_Unloader_Stack_Down_Status=23927
,P_First_Unloader_Avoid_Status=23928
,P_First_Unloader_Turn_Status=23929
,P_First_Unloader_Handover_Status=23930
,P_Cathode_Clamp_OFF_Status=23931
,P_Final_Roll_Discharge_Status=23932
,P_Final_Roll_Stack_Pos_Status=23933
,P_Final_Roll_Stack_Up_Pos_Status=23934
,P_Main_Z_Init_Pos_Status=23935
,P_Sheet_Paper_BWD_Status=23936
,P_Discharge_Vision_DIO_RTN=23937
,P_Discharge_Sub_RTN=23938
,P_Discharge_NG_Code_Report_RTN=23939
,P_Individual_RTN=23940
,P_Suspend_Discharge_Last_Run_Bit=23941
,P_Suspend_Discharge_JR_Result_RTN=23942
,P_ARC_Buffer_Jog_Speed=23943
,P_Selected_Spool_Number=23944
,P_ARC_Home_Check_RTN=23945
,P_Suspend_ARC_Module_Status=23946
,P_Not_Selected_Spool_Radius=23947
,P_Not_Selected_Spool_Circumference=23948
,P_Passive_D_One_Degree_AD_Value=23974
,P_After_ARC_Rotate_Distance=23975
,P_Stack_Vision_NG_Code_Time_Over=23976
,P_Suspend_Discharge_Resume_Flag=23977
,P_Suspend_Discharge_Resume_Complete=23978
,P_Suspend_Discharge_Pause_Flag=23979
,P_Flag_Stack_Work_Host_ID=23990
,P_First_Sepa_Stack_Align_OK_PMAC_Flag=23991
,P_Sepa_Run_Completed_Status_Machine=23992
,P_Discharge_Debug_Edge=23993
,P_Discharge_Sepa_Cutter_Time_Out_State_Machine=24004
,P_Old_Suspend_Discharge_Seq_Index=24005
,P_Discharge_Debug_Index_1=24006
,P_Discharge_Debug_Index_2=24007
,P_Discharge_Debug_Index_3=24008
,P_Discharge_Debug_Index_4=24009
,P_ARC_Debug_Edge=24010
,P_Old_Suspend_ARC_Seq_Index=24021
,P_ARC_Debug_Index_1=24022
,P_ARC_Debug_Index_2=24023
,P_ARC_Debug_Index_3=24024
,P_ARC_Debug_Index_4=24025
,P_Suspend_Cutter_Heating_Time=24028
,P_Suspend_Cutter_Heating_Timer=24029
,P_An_1TR_Supply_Debug_Edge=24030
,P_Old_Suspend_An_1TR_Supply_Seq_Index=24041
,P_An_1TR_Supply_Debug_Index_1=24042
,P_An_1TR_Supply_Debug_Index_2=24043
,P_An_1TR_Supply_Debug_Index_3=24044
,P_An_1TR_Supply_Debug_Index_4=24045
,P_Suspend_Supply_Index=24046
,P_Suspend_Supply_Index_2nd=24047
,P_Suspend_Supply_Pause_Flag=24056
,P_Suspend_Supply_Resume_Flag=24057
,P_Supply_Module_Status=24058
,P_Suspend_Anode_1TR_Supply_Complete_Flag=24059
,P_Suspend_Discharge_Module_Error=24060
,P_Suspend_ARC_Module_Error=24061
,P_Suspend_1st_Supply_Error=24062
,P_Discharge_Seq_Data=24063
,P_Suspend_Discharging_Popup_Flag=24064
,P_Suspend_Discharge_FR_Unclamp_Error_Popup_Flag=24065
,P_Suspend_Discharge_Cathode_Align_Retry_Cal_Error_Popup_Flag=24066
,P_Suspend_Discharge_Anode_Align_Retry_Cal_Error_Popup_Flag=24067
,P_Suspend_Discharge_FR_Discharge_Pos_Error_Popup_Flag=24068
,P_Suspend_Discharge_1st_Unloader_Grip_OFF_Error_Popup_Flag=24069
,P_Suspend_Discharge_1st_Unloader_Up_Error_Popup_Flag=24070
,P_Suspend_Discharge_1st_Unloader_FWD_Error_Popup_Flag=24071
,P_Suspend_Discharge_FR_Clamp_Error_Popup_Flag=24072
,P_Suspend_Discharge_Sepa_Cutter_Heating_Error_Popup_Flag=24073
,P_Suspend_Discharge_1st_Unloader_Grip_Cell_Pos_Error_Popup_Flag=24074
,P_Suspend_Discharge_1st_Unloader_Grip_ON_Error_Popup_Flag=24075
,P_Suspend_Discharge_Sheet_Paper_BWD_Error_Popup_Flag=24076
,P_Suspend_Discharge_Cathode_Clamp_OFF_Error_Popup_Flag=24077
,P_Suspend_Discharge_Sepa_Cutter_FWD_Error_Popup_Flag=24078
,P_Suspend_Discharge_Sheet_Paper_Vacuum_ON_Error_Popup_Flag=24079
,P_Suspend_Discharge_Sepa_Cutter_BWD_Error_Popup_Flag=24080
,P_Suspend_Discharge_1st_Unloader_BWD_Wait_Pos_Error_Popup_Flag=24081
,P_Suspend_Discharge_1st_Unloader_BWD_Error_Popup_Flag=24082
,P_Suspend_Discharge_1st_Unloader_Stack_Down_Error_Popup_Flag=24083
,P_Suspend_Discharge_FR_Stack_Pos_Error_Popup_Flag=24084
,P_Suspend_Discharge_After_Action_Init_Error_Popup_Flag=24085
,P_Suspend_Discharge_1st_Unloader_Avoid_Pos_Error_Popup_Flag=24086
,P_Suspend_Discharge_1st_2nd_Unloader_Handover_Chk_Error_Popup_Flag=24087
,P_Suspend_Discharge_1st_Unloader_Handover_Pos_Error_Popup_Flag=24088
,P_Suspend_Discharge_2nd_3rd_Unloader_Grip_Request_Error_Popup_Flag=24089
,P_Suspend_Discharge_1st_Unloader_Wait_Pos_Error_Popup_Flag=24090
,P_Suspend_ARC_Manual_ARC_Active_Popup_Flag=24091
,P_Suspend_ARC_Auto_ARC_Active_Popup_Flag=24092
,P_Suspend_ARC_Pre_Act_Popup_Flag=24093
,P_Suspend_ARC_Dancer_Close_Popup_Flag=24094
,P_Suspend_ARC_Use_Plate_FWD_Popup_Flag=24095
,P_Suspend_ARC_Replace_Plate_Blow_ON_Popup_Flag=24096
,P_Suspend_ARC_Use_Plate_Clamp_Popup_Flag=24097
,P_Suspend_ARC_Use_Plate_Cutter_FWD_Popup_Flag=24098
,P_Suspend_ARC_Use_Plate_Cutter_BWD_Popup_Flag=24099
,P_Suspend_ARC_Use_Plate_Unclamp_Popup_Flag=24100
,P_Suspend_ARC_Use_Plate_BWD_Popup_Flag=24101
,P_Suspend_ARC_Replace_Plate_Blow_OFF_Popup_Flag=24102
,P_Suspend_ARC_Dancer_Open_Popup_Flag=24103
,P_Suspend_ARC_Spool_Change_Popup_Flag=24104
,P_Suspend_ARC_Post_Act_Popup_Flag=24105
,P_Suspend_ARC_Previous_Spool_Remain_Winding_Popup_Flag=24106
,P_Suspend_Discharge_First_Address=24107
,P_Suspend_ARC_First_Address=24108
,P_Status_Stop_Ready_Pos_Move=24109
,P_Cycle_Stop_Stauts=24110
,P_Cycle_Stop_Status_Machine=24111
,P_Cycle_Stop_Flag=24112
,P_Speed_Origin_rtn=24113
,P_Speed_rtn=24114
,P_NG_PNP_Z_Move_rtn=24115
,P_NG_PNP_Z_Move_Check_rtn=24116
,P_NG_PNP_T_Move_rtn=24117
,P_NG_PNP_T_Move_Check_rtn=24118
,P_2nd_Z_Move_rtn=24119
,P_2nd_Z_Move_Check_rtn=24120
,P_2nd_T_Move_rtn=24121
,P_2nd_T_Move_Check_rtn=24122
,P_Stack_Judgement_Memory=24123
,P_Stop_Cycle_Stop_Move_Status=24124
,P_STOP_Initial_Process_Status=24125
,P_Stopping_CycleStop_Init_Flag=24126
,P_Sepa_Timing=24127
,P_Old_Trigger_PLC0=24128
,P_Mode_Command=24129
,P_Current_Mode=24130
,P_Mode_Command_Buffer=24151
,P_Mode_Command_Wait_Count=24152
,P_Old_Mode_Command=24153
,P_Anode_NG_Unit_Status=27154
,P_Cathode_NG_Unit_Status=27155
,P_ParsingRtn=27156
,P_CurPosData=27157
,P_Hold_MNTR_Supply_1st=27158
,P_TimeOutNumb=27159
,P_PosRtn=27160
,P_MotionRtn=27161
,P_CmdData=27162
,P_Interval=27163
,P_Cont_Ret=27164
,P_Cur_Idx=27165
,P_NextID=27166
,P_Cur_Size=27167
,P_Hold_Exist_Insp=27168
,P_Hold_Remove_NG_PNP=27169
,P_Hold_Remove_Align=27170
,P_Hold_Remove_2TR=27171
,P_Hold_Supply_1TR=27172
,P_Hold_Supply_Align=27173
,P_Hold_Supply_2TR=27174
,P_Hold_Semi_Run=27175
,P_Hold_NG_PNP_Remove=180
,P_Hold_Remove_2nd=182
,P_Hold_Supply_1st=183
,P_Hold_Supply_2nd=185
,P_Hold_Data_process=186
,P_Hold_Semi_Run_Enable_Pos=187
,P_Hold_Existence_Insp=188
,P_Hold_1st_Belt_Move=189
,P_Hold_Motion=190
,P_Hold_Data_process_State_Machine=27176
,P_Hold_Align_Remove_State_Machine=27177
,P_Hold_2nd_Remove_State_Machine=27178
,P_Hold_Supply_1st_State_Machine=27179
,P_Hold_Supply_2nd_State_Machine=27180
,P_Hold_Existence_Insp_State_Machine=27181
,P_Hold_NG_PNP_Remove_State_Machine=27182
,P_Hold_Data_Process_Complete=27183
,P_Hold_Semi_Run_Enable_Pos_State_Machine=27184
,P_HOLD_Existence_Insp_Queue_State_Machine=27185
,P_Hold_Stop_Existence_Insp_STEP=27186
,P_SubMaster_Status_Err=27187
,P_Data_Process_Rtn=27188
,P_Hold_Set_Trigger=27189
,P_Hold_Get_Trigger=27190
,P_Anode_2nd_Data=27191
,P_Anode_Align_Data=27192
,P_Hold_Remove_Step=27193
,P_HList_Head_Idx=27194
,P_Hold_Next_ID=27195
,P_Hold_Data_Value=27216
,P_Comb_Bitwise=27217
,P_Target_Cmd=27218
,P_Temp_Bit=27219
,P_Get_ErrorCode=27220
,P_Rtn_Code=27221
,P_Complete_Hold_Bit=27222
,P_HoldMtion_Flag=27223
,P_Ret_BitWise=27224
,P_NotEnough_GetSpace=27225
,P_NotEnough_SetSpace=27226
,P_Check_SetSpace=27227
,P_Hold_Get_Data=27228
,P_Err_NextID_Flag=27229
,P_Elec_Bit=27230
,P_MotionData=27231
,P_Cur_PosX1=27247
,P_Cur_PosZ1=27248
,P_Cur_PosX2=27249
,P_Cur_PosZ2=27250
,P_Dest_PosX=27251
,P_Dest_PosZ=27252
,P_FailToParse=27253
,P_CurTrigger=27254
,P_TimeOutTrigger=27255
,P_CalcTime=27256
,P_Cycle_Count=27257
,P_MotionTimeOutFlag=27258
,P_Set_Data=27259
,P_Rtn=27260
,P_CurPosTestBit=27261
,P_Hold_Anode_Pause_CHK=27262
,P_Hold_Cathode_Pause_CHK=27263
,P_Surface_Complete_To_Hold=27264
,P_Hold_Pause_Trg=27285
,P_From_Staring_Flag=27286
,P_Hold_Existence_Insp_Enqueue_Flag=27287
,P_Hold_Rtn=27288
,P_Debug_Existence_Insp_STEP=27289
,P_Hold_Align_Sheet_CHK=27290
,P_Hold_Cathode_Exception_Empty_Flag=27291
,P_Hold_Anode_Exception_Empty_Flag=27292
,P_HOLD_Hold_Process_State_Machine=27293
,P_Hold_Stop_Sheet_Process_STEP=27294
,P_Hold_Debug_Sheet_Process_STEP=27295
,P_Hold_Stop_Point=27296
,P_Hold_CHK=27297
,P_Hold_Test=27298
,P_Anode_1st_Motion_Complete=27299
,P_Anode_2nd_Motion_Complete=27300
,P_Anode_NG_PNP_Motion_Complete=27301
,P_Cathode_1st_Motion_Complete=27302
,P_Cathode_2nd_Motion_Complete=27303
,P_Cathode_NG_PNP_Motion_Complete=27304
,P_Anode_1st_Picker_Motion_Complete=27305
,P_Cathode_1st_Picker_Motion_Complete=27306
,P_individual_return=27307
,P_individual_return2=27308
,P_HoldCurPosBit1=27309
,P_HoldCurPosBit2=27310
,P_Parsing_Status=27311
,P_Sel_Obj=27312
,P_Sel_Elec=27313
,P_Error=27314
,P_Vision_FirstSepa_Complete=27315
,P_NG_PNP_Turn_TM=27316
,P_NG_PNP_Turn_TS=27317
,P_NG_PNP_Turn_TA=27318
,P_NG_PNP_Up_TM=27319
,P_NG_PNP_Up_TS=27320
,P_NG_PNP_Up_TA=27321
,P_NG_PNP_Down_TM=27322
,P_NG_PNP_Down_TS=27323
,P_NG_PNP_Down_TA=27324
,P_NG_PNP_Vac_Time=27325
,P_NG_PNP_Blow_Time=27326
,P_Slow_NG_Mode_Btn=27327
,P_HOLD_Memory_Tower_Offset=27328
,P_Hold_Pause_Use=27329
,P_Hold_Motion_Err_Chk=27350
,P_Hold_Motion_TimeOut=27366
,P_Hold_Data_OK=27367
,P_VISION_TRG_PLC4_AnodeSurface_Ins_Shoot=27368
,P_VISION_TRG_PLC4_CathodeSurface_Ins_Shoot=27369
,P_Memory_Tower_Test=27370
,P_Temp_Run_Mode=27371
,P_Data_Idx=27372
,P_Get_Data_Idx=27373
,P_HOLD_Data_Err_Queue=27374
,P_HOLD_Data_Err_State_Machine=27375
,P_HOLD_Err_Set_Data=27376
,P_HOLD_Err_Save=27377
,P_Sepa_Run_Completed_Flag=27378
,P_Log_Data_Y=28312
,P_Log_Data_M=28313
,P_Log_Data_D=28314
,P_Log_Data_H=28315
,P_Log_Data_m=28316
,P_Log_Data_s=28317
,P_MNTR_End_Index=28318
,P_BG_CPLC_Running_MNTR=50
,P_RTI_CPLC_Running_MNTR=51
,P_Log_Start_Flag=170
,P_Log_Document_Remove_Flag=171
,P_Sepa_ID_Change_Flag=172
,P_USB_Register=173
,P_Cur_Line_Check=175
,P_Cur_Line_Check_Init=176
,P_Hold_Pass=28329
,P_PLC01_Total_Step_Flag=28345
,P_PLC02_Total_Step_Flag=28346
,P_PLC014_Total_Step_Flag=28347
,P_PLC02_Total_Step_Flag2=28348
,P_Vac_Pass=28349
,P_Vision_Pass_Exisitence=28350
,P_Vision_Pass_Empty=28351
,P_Vision_Pass_FirstSepa=28352
,P_Vision_Pass_Stack_Inspection=28353
,P_ULD_Home_Pass=28354
,P_Clamp_Cell_Down_Use=28355
,P_FR_Clamp_Use_Test=28356
,P_Door_Interlock_Use_Flag=28357
,P_Vacuum_Door_Clear_Use=28358
,P_Align_Test_Pos=28359
,P_PLC02_Exe_Module_First_Sepa_Step_Flag=28455
,P_PLC02_Sus_Module_Discharge_Step_Flag=28456
,P_PLC02_Sus_Module_ARC_Step_Flag=28457
,P_PLC02_Sus_Module_1TR_Supply_Step_Flag=28458
,P_PLC02_HOLD_Module_Insp_Step_Flag=28459
,P_PLC02_HOLD_Module_Remove_NGPNP_Step_Flag=28460
,P_PLC02_HOLD_Module_Remove_Align_Step_Flag=28461
,P_PLC02_HOLD_Module_Remove_2TR_Step_Flag=28462
,P_PLC02_HOLD_Module_Supply_1TR_Step_Flag=28463
,P_PLC02_HOLD_Module_Supply_Align_Step_Flag=28464
,P_PLC02_HOLD_Module_Supply_2TR_Step_Flag=28465
,P_PLC02_HOLD_Module_SemiRun_Pos_Step_Flag=28466
,P_PLC14_STOP_Module_Cycle_Stop_Step_Flag=28467
,P_PLC02_Discharge_MNTR=28468
,P_EPC_SENSOR_Load_Ratio=133
,P_STACK_VISION_Load_Ratio=134
,P_SHEET_PAPER_X_Load_Ratio=135
,P_Align_CA_X_Load_Ratio=136
,P_Align_CA_Y_Load_Ratio=137
,P_Align_CA_T_Load_Ratio=138
,P_Align_AN_X_Load_Ratio=139
,P_Align_AN_Y_Load_Ratio=140
,P_Align_AN_T_Load_Ratio=141
,P_NG_PnP_CA_T_Load_Ratio=142
,P_NG_PnP_AN_T_Load_Ratio=143
,P_NG_PnP_CA_Z_Load_Ratio=144
,P_NG_PnP_AN_Z_Load_Ratio=145
,P_UNLOADER_X_Load_Ratio=146
,P_UNLOADER_Z_Load_Ratio=147
,P_UNLOADER_T_Load_Ratio=148
,P_Anode_Vision_MNTR=28469
,P_Cathode_Vision_MNTR=28470
,P_Error_Index_Number=28476
,P_ECAT_MNTR_Bit=28477
,P_Local_MNTR_Bit=28478
,P_Clamp_Motion_VER1=28479
,P_CA_DR_Ta=28480
,P_CA_DR_Ts=28481
,P_CA_DR_Tm=28482
,P_CA_DR_Td=28483
,P_CA_DR_Tsd=28484
,P_AN_DR_Ta=28485
,P_AN_DR_Ts=28486
,P_AN_DR_Tm=28487
,P_AN_DR_Td=28488
,P_AN_DR_Tsd=28489
,P_First_Sepa_1st_Driving_Move=28490
,P_AN_Cam_Total_Time=28491
,P_CA_Cam_Total_Time=28492
,P_Dry_Run_BTN=28493
,P_Home_Angle_Offset_change_Bit=28494
,P_Z_Var=28495};
enum globalParray {_globalParray_=-1
,P_Ca_1st_PNP_ABSPhasing_Pos=8196
,P_An_1st_PNP_ABSPhasing_Pos=8236
,P_Ca_2nd_PNP_ABSPhasing_Pos=8276
,P_An_2nd_PNP_ABSPhasing_Pos=8316
,P_Home_Status=8362
,P_Homing_Step_Monitor=8423
,P_231213_Test_Status=8473
,P_BTN_Push_Align_Auto_Cal_Ready_Pos_Move=8566
,P_CMD_MSA_Run=8569
,P_CMD_Align_Auto_Cal_Ready_Pos_Move_Run=8577
,P_Align_Auto_Cal_Ready_Pos_Move_Run_State_Machine=8580
,P_Align_Auto_Cal_Ready_Pos_Move_Run_Status=8583
,P_Align_Auto_Cal_Ready_Pos_Move_Run_Complete=8586
,P_CMD_Cell_Align=8591
,P_CMD_Cell_Stop=8601
,P_CMD_Cell_Reset=8611
,P_Jog_Work_Speed=8702
,P_Recipe_Homing_Speed=8735
,P_MNTR_PLC0_Task_Time=9216
,P_MNTR_PLC1_Task_Time=9219
,P_MNTR_PLC2_Task_Time=9222
,P_MNTR_PLC3_Task_Time=9225
,P_MNTR_PLC4_Task_Time=9228
,P_MNTR_PLC5_Task_Time=9231
,P_MNTR_PLC6_Task_Time=9234
,P_MNTR_PLC7_Task_Time=9237
,P_MNTR_PLC8_Task_Time=9240
,P_MNTR_PLC9_Task_Time=9243
,P_MNTR_PLC10_Task_Time=9246
,P_MNTR_PLC11_Task_Time=9249
,P_MNTR_PLC12_Task_Time=9252
,P_MNTR_PLC13_Task_Time=9255
,P_MNTR_PLC14_Task_Time=9258
,P_MNTR_PLC15_Task_Time=9261
,P_MNTR_PLC16_Task_Time=9264
,P_MNTR_PLC17_Task_Time=9267
,P_MNTR_PLC18_Task_Time=9270
,P_MNTR_PLC19_Task_Time=9273
,P_MNTR_PLC20_Task_Time=9276
,P_MNTR_PLC21_Task_Time=9279
,P_MNTR_PLC22_Task_Time=9282
,P_MNTR_PLC23_Task_Time=9285
,P_MNTR_PLC24_Task_Time=9288
,P_MNTR_PLC25_Task_Time=9291
,P_MNTR_PLC26_Task_Time=9294
,P_MNTR_PLC27_Task_Time=9297
,P_MNTR_PLC28_Task_Time=9300
,P_MNTR_PLC29_Task_Time=9303
,P_MNTR_PLC30_Task_Time=9306
,P_Vision_Result=9312
,P_Vision_Result_Get_First_Cycle=9316
,P_Init_Result=9320
,P_Tension_FF=9415
,P_FR_AI_Value=9423
,P_Dequeue_Log=9458
,P_Motor_Current_Pos=9491
,P_Axis_Scale_Value=9541
,P_Except_Return_Array=9591
,P_Hold_Memory=9691
,P_Suspend_Memory=9696
,P_Execute_Memory=9701
,P_Stop_Memory=9706
,P_CircularQueue_Command_array=9727
,P_Recipe_1st_MotorNo=9761
,P_Recipe_2nd_MotorNo=9811
,P_Recipe_3rd_MotorNo=9861
,P_Recipe_4th_MotorNo=9911
,P_Recipe_5th_MotorNo=9961
,P_Recipe_6th_MotorNo=10011
,P_Recipe_M01_POS=10089
,P_Recipe_M02_POS=10100
,P_Recipe_M03_POS=10111
,P_Recipe_M04_POS=10122
,P_Recipe_M05_POS=10133
,P_Recipe_M06_POS=10144
,P_Recipe_M07_POS=10155
,P_Recipe_M08_POS=10166
,P_Recipe_M09_POS=10177
,P_Recipe_M10_POS=10188
,P_Recipe_M11_POS=10199
,P_Recipe_M12_POS=10210
,P_Recipe_M13_POS=10221
,P_Recipe_M14_POS=10232
,P_Recipe_M15_POS=10243
,P_Recipe_M16_POS=10254
,P_Recipe_M17_POS=10265
,P_Recipe_M18_POS=10276
,P_Recipe_M19_POS=10287
,P_Recipe_M20_POS=10298
,P_Recipe_M21_POS=10309
,P_Recipe_M22_POS=10320
,P_Recipe_M23_POS=10331
,P_Recipe_M24_POS=10342
,P_Recipe_M25_POS=10353
,P_Recipe_M26_POS=10364
,P_Recipe_M27_POS=10375
,P_Recipe_M28_POS=10386
,P_Recipe_M29_POS=10397
,P_Recipe_M30_POS=10408
,P_Recipe_M31_POS=10419
,P_Recipe_M32_POS=10430
,P_Recipe_M33_POS=10441
,P_Recipe_M34_POS=10452
,P_Recipe_M35_POS=10463
,P_Recipe_M36_POS=10474
,P_Recipe_M37_POS=10485
,P_Recipe_M38_POS=10496
,P_Recipe_M39_POS=10507
,P_Recipe_M40_POS=10518
,P_Recipe_M41_POS=10529
,P_Recipe_M42_POS=10540
,P_Recipe_M43_POS=10551
,P_Recipe_M44_POS=10562
,P_Recipe_M45_POS=10573
,P_Recipe_M46_POS=10584
,P_Recipe_M47_POS=10595
,P_Recipe_M48_POS=10606
,P_Recipe_M49_POS=10617
,P_Recipe_M50_POS=10628
,P_Error_X_Axis_Packml=10645
,P_Error_X_Axis_Dequeue=10651
,P_Error_X_Axis_Num=10657
,P_Memory_Tower_Err_Pos_X_Save=10663
,P_Error_Y_Axis_Packml=10669
,P_Error_Y_Axis_Dequeue=10675
,P_Error_Y_Axis_Num=10681
,P_Memory_Tower_Err_Pos_Y_Save=10687
,P_Error_Z_Axis_Packml=10693
,P_Error_Z_Axis_Dequeue=10699
,P_Error_Z_Axis_Num=10705
,P_Memory_Tower_Err_Pos_Z_Save=10711
,P_Error_ZZ_Axis_Packml=10717
,P_Error_ZZ_Axis_Dequeue=10723
,P_Error_ZZ_Axis_Num=10729
,P_Memory_Tower_Err_Pos_ZZ_Save=10735
,P_1st_PNP_FWD_Abort_Offset=10848
,P_1st_PNP_BWD_Abort_Offset=10938
,P_2nd_PNP_FWD_Abort_Offset=11028
,P_2nd_PNP_BWD_Abort_Offset=11118
,P_Align_Zero_Move_Start_Flag=11270
,P_Stop_Sub_Master_Motion_Program_Flag=11281
,P_Stop_Slave_Motion_Program_Flag=11301
,P_Stop_Motor_Status=11321
,P_Stop_Coord_Status=11369
,P_Stop_Save_RTN=11406
,P_Stop_Motor_Pos=11412
,P_Old_P_Anode_TR1_Master_Motion_Trigger=11467
,P_Old_P_Cathode_TR1_Master_Motion_Trigger=11483
,P_Anode_TR1_Old_Mode=11499
,P_Cathode_TR1_Old_Mode=11515
,P_Older_Than_P_Anode_TR1_Old_Mode=11531
,P_Older_Than_P_Cathode_TR1_Old_Mode=11547
,P_Older_Than_P_Sequence_Old_P_Anode_TR1_Current_Mode_Trigger=11563
,P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Current_Mode_Trigger=11579
,P_Old_P_Anode_TR1_Mode_Command=11595
,P_Old_P_Cathode_TR1_Mode_Command=11611
,P_Older_Than_P_Old_P_Anode_TR1_Mode_Command=11627
,P_Older_Than_P_Old_P_Cathode_TR1_Mode_Command=11643
,P_Older_Than_P_Sequence_Old_P_Anode_TR1_Mode_Command_Trigger=11659
,P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Mode_Command_Trigger=11675
,P_Old_P_Anode_TR1_PMAC_Status=11691
,P_Old_P_Cathode_TR1_PMAC_Status=11707
,P_Older_Than_P_Old_P_Anode_TR1_PMAC_Status=11723
,P_Older_Than_P_Old_P_Cathode_TR1_PMAC_Status=11739
,P_Old_P_Slave1_Motion_Command=11755
,P_Old_P_Slave10_Motion_Command=11771
,P_Old_Slave1_P_SubMaster_Sub_Mode_Command=11787
,P_Old_Slave10_P_SubMaster_Sub_Mode_Command=11803
,P_Sequence_Old_P_Current_Mode_Trigger=11819
,P_Sequence_Old_Mode=11835
,P_Sequence_Old_P_Mode_Command=11851
,P_Sequence_Old_P_Mode_Command_Trigger=11867
,P_SubMaster_Sub_Old_Mode=11883
,P_SubMaster_Sub_Old_Command=11899
,P_SubMaster_Sub_Mode_Command=11915
,P_SubMaster_Sub_Old_Trigger=11931
,P_InterLock_No3_Array=11947
,P_Old_InterLock_No3_Array=11963
,P_Mode_Err=11979
,P_Phasing_Err=12007
,P_Phasing_Err2=12012
,P_Cathode_Run_Mode_Type=12020
,P_Cathode_Run_Mode_Trigger=12040
,P_Anode_Run_Mode_Type=12061
,P_Anode_Run_Mode_Trigger=12081
,P_Stop_Origin_Save=12258
,P_Sheet_Err=12340
,P_Drivig_Cal_Save=12359
,P_PMAC_Status_Arr_Save1=12366
,P_HomePos_Save1=12371
,P_PMAC_Status_Arr_Save2=12376
,P_HomePos_Save2=12381
,P_PMAC_Status_Arr_Save3=12386
,P_HomePos_Save3=12391
,P_PMAC_Status_Arr_Save4=12396
,P_HomePos_Save4=12401
,P_HomePos_Err=12411
,P_Cutter_FWB_Heater_Current=12476
,P_Scan_Time=12530
,P_Read_Sector_TactTime=12638
,P_Write_Sector_TactTime=12644
,P_SV_AO_Reference_Value_Chanel=12667
,P_MSA_Run_Repeat_Num=12700
,P_Current_MSA_Run_Num=12705
,P_PV_AO_Value_Chanel=13038
,P_Interlock_Messege=13049
,P_Current_Homming_Status=13102
,P_Home_Execute_Type=13152
,P_Interval_Read_Time=13205
,P_Interval_Write_Time=13211
,P_Sub_Master_Motion_Program_Flag=13252
,P_Slave_Motion_Program_Flag=13272
,P_OLD_Jog_Speed_Motor=13293
,P_Command_Start=13349
,P_Command_Complete=13367
,P_Command_Reset=13385
,P_Command_Hold=13403
,P_Command_Unhold=13421
,P_Command_Suspend=13439
,P_Command_Unsuspend=13457
,P_Command_Clear=13475
,P_Command_Stop=13493
,P_Command_Abort=13511
,P_Command_Status_Complete=13529
,P_Command_Mask_Layer=13547
,P_Command_Process_Type=13565
,P_Sum_Ready_pos_Motor=13621
,P_Anode_Align_NG_Array=13746
,P_Cathode_Align_NG_Array=13766
,P_Anode_Surface_NG_Array=13786
,P_Cathode_Surface_NG_Array=13806
,P_Stack_NG_Array=13826
,P_Continuous_Call_Align_OK_Flag=13858
,P_Continuous_Call_Align_NG_Flag=13860
,P_Continuous_Call_Align_TimeOut_Flag=13862
,P_Continuous_Call_Surface_OK_Flag=13864
,P_Continuous_Call_Surface_NG_Flag=13866
,P_Continuous_Call_Surface_TimeOut_Flag=13868
,P_Continuous_Call_Stack_Flag=13870
,P_PLC12_Observser_MNTR=13882
,P_PLC12_Vacuum_MNTR=13887
,P_Vacuum_Check=13895
,P_PLC12_Blow_MNTR=13903
,P_Blow_Check=13911
,P_PLC12_Vacuum_1st_Cathode_Take_Time=13935
,P_PLC12_Vacuum_2nd_Cathode_Take_Time=13940
,P_PLC12_Vacuum_NG_Cathode_Take_Time=13945
,P_PLC12_Vacuum_Align_Cathode_Take_Time=13950
,P_PLC12_Vacuum_1st_Anode_Take_Time=13955
,P_PLC12_Vacuum_2nd_Anode_Take_Time=13960
,P_PLC12_Vacuum_NG_Anode_Take_Time=13965
,P_PLC12_Vacuum_Align_Anode_Take_Time=13970
,P_PLC12_Blow_1st_Cathode_Take_Time=13991
,P_PLC12_Blow_2nd_Cathode_Take_Time=13996
,P_PLC12_Blow_NG_Cathode_Take_Time=14001
,P_PLC12_Blow_Align_Cathode_Take_Time=14006
,P_PLC12_Blow_1st_Anode_Take_Time=14011
,P_PLC12_Blow_2nd_Anode_Take_Time=14016
,P_PLC12_Blow_NG_Anode_Take_Time=14021
,P_PLC12_Blow_Align_Anode_Take_Time=14026
,P_Status_arry=14033
,P_Queue_arry=14053
,P_Step_arry=14073
,P_Index_arry=14093
,P_PLC_Observser_MNTR=14120
,P_Test_Vacuum_Timer=14129
,P_Test_Blow_Timer=14137
,P_Vac_Test_Set_Time=14145
,P_Blow_Test_Set_Time=14153
,P_Zero_Angle=14216
,P_Zero_Length=14241
,P_Homeoffset_Change_Flag=14266
,P_Cal_Distance=14291
,P_Cal_Denominator=14296
,P_Cal_Numerator=14301
,P_Cal_Dif_Deg=14306
,P_Vac_Door_Open_Clear=14311
,P_Read_Timer_S=14325
,P_Write_Timer_S=14334
,P_Interval_Read_S=14343
,P_Interval_Write_S=14352
,P_UI_Jog_Vel_M=14361
,P_Old_X_Read_Count_S=14412
,P_X_BTN_Manual_1=14435
,P_X_BTN_Manual_2=14555
,P_X_BTN_Manual_3=14675
,P_Home_InterLock_M=14795
,P_Status_BTN_Manual_1=14845
,P_Status_BTN_Manual_2=14965
,P_Status_BTN_Manual_Interlock_1=15085
,P_Status_BTN_Manual_Interlock_2=15205
,P_Status_BTN_Manual_Interlock_3=15325
,P_Mode_Run_Enable_Flag=15445
,P_MNTR_PLC4_Vision_Result=15452
,P_PNP_Vac_Mode_Run_Enable_Flag=15653
,P_HCK_Step_MNTR=15660
,P_Axis_Home_Pos=15710
,P_Axis_Ready_Pos=15760
,P_PMAC_Homing_CHK=15810
,P_Home_Command=15861
,P_Old_BTN_Servo_On_Off_M=15915
,P_Peak_Load_Ratio_M=15948
,P_Chk_Current_Jog_Sel=15981
,P_Recipe_POS_Interock_Num_Bit=16015
,P_Recipe_VEL=16048
,P_Recipe_POS=16059
,P_BTN_Servo_On_Off_M=16070
,P_BTN_Home_M=16103
,P_BTN_Jog_Stop_M=16136
,P_BTN_Recipe_POS_RUN_M=16169
,P_Recipe_POS_Flag_M=16202
,P_BTN_Jog_INC_M=16235
,P_BTN_JOG_ABS_M=16268
,P_Unit_Command=16302
,P_Unit_State_Machine=16402
,P_Status_BTN_Manual_3=16502
,P_Chk_Current_BTN_Sel=16602
,P_Linear_Encoder_Pos_Check_Flag=16661
,P_Linear_Encoder_Pos=16666
,P_Status_Linear_Encoder_HomeZero=16671
,P_Command_Linear_Encoder_HomeZero=16676
,P_OLD_Home_Offset=16689
,P_PLC13_Cycle_Stop_Return_Array=16777
,P_Stopping_CycleStop_Act_State_Machine=16883
,P_Module_Cycle_Stop_Act_State_Machine_Array=16903
,P_Module_Cycle_Stop_Act_Complete_Bit=16923
,P_Module_Cycle_Stop_Act_Command_Array=16943
,P_OLD_Module_Cycle_Stop_Act_Command_Array=16963
,P_Buffer_Seqdata_CycleStop_Array=16983
,P_Tact_Time_Timer=17017
,P_Tack_Time_Save_Time=17057
,P_Tact_Time_Stack_Array=17101
,P_Tact_Time_Discharge_Array=17111
,P_Tact_Time_1st_Unloader_Array=17121
,P_Tact_Time_Sepa_ARC_Array=17131
,P_Tact_Time_Final_Roll_Array=17141
,P_Tact_Time_Cathode_1st_PNP_Array=17151
,P_Tact_Time_Cathode_Align_Array=17161
,P_Tact_Time_Cathode_2nd_PNP_Array=17171
,P_Tact_Time_Cathode_Clamp_Array=17181
,P_Tact_Time_Anode_1st_PNP_Array=17191
,P_Tact_Time_Anode_Align_Array=17201
,P_Tact_Time_Anode_2nd_PNP_Array=17211
,P_Tact_Time_Anode_Clamp_Array=17221
,P_Tact_Time_Cathode_1st_PNP_Vac_Array=17231
,P_Tact_Time_Cathode_Align_PNP_Vac_Array=17241
,P_Tact_Time_Cathode_2nd_PNP_Vac_Array=17251
,P_Tact_Time_Anode_1st_PNP_Vac_Array=17261
,P_Tact_Time_Anode_Align_PNP_Vac_Array=17271
,P_Tact_Time_Anode_2nd_PNP_Vac_Array=17281
,P_Tact_Time_Check=17335
,P_Old_Tact_Time_Check=17375
,P_Tact_Time_Head_Address=17415
,P_EPC_MNTR_VAR=17472
,P_Home_Check_Arry=17495
,P_PWM_Phasing_Start=17547
,P_PWM_Status=17552
,P_PWM_State_Machine=17557
,P_AH_Seq_arr=17562
,P_DD_M_Home_ABS_Pos=17577
,P_AH_Indvi_rtn=17582
,P_Home_Check_Arry1=17635
,P_PV_EPC_Camera_Pos=17795
,P_VISION_MSA_Status_Prod_Sequence=17815
,P_MSA_Cmd=17839
,P_Align_Take_Off_Cmd=17870
,P_Align_Take_Off_Status_Prod_Sequence=17887
,P_Old_Upper_Sensor=17956
,P_Edge_Upper_Sensor=17964
,P_Old_Lower_Sensor=17972
,P_Edge_Lower_Sensor=17980
,P_Edge_NP_BTN=17988
,P_UI_Unit_Status=17990
,P_Motor_Unit_Status=18000
,P_Current_Homming_Status_To_PLC=18050
,P_AO_Module_Arr=18138
,P_AO_Range_Set_Value=18143
,P_Force_BTN_M_Variable_Save=18176
,P_ABS_Phasing_Data=18576
,P_ABS_Home_Offset_Data=18581
,P_Servo_Gain_Kp=18590
,P_Servo_Gain_Kvfb=18620
,P_Servo_Gain_Kvff=18650
,P_Servo_Gain_Ki=18680
,P_Servo_Gain_SwZvInt=18710
,P_Servo_Gain_Kaff=18740
,P_Alarm_Arr=18771
,P_Alarm_Occur_Index_Flag=18872
,P_Alarm_Log=18883
,P_First_Alarm_Log=18983
,P_Alarm_duplicate_Check_Arr=19015
,P_Old_Drive_Alarm=19685
,P_Limit_PosData=19740
,P_Collision_Risk_Motor=19767
,P_P_IL_Normal_Pos_Offset=19774
,P_M_IL_Normal_Pos_Offset=19824
,P_P_IL_Upper_Pos_Offset=19874
,P_M_IL_Upper_Pos_Offset=19924
,P_P_IL_Align_Pos_Offset=19974
,P_M_IL_Align_Pos_Offset=20024
,P_P_IL_Stack_Pos_Offset=20074
,P_M_IL_Stack_Pos_Offset=20124
,P_Ca_2nd_T_Plus_IL_Offset=20178
,P_Ca_2nd_T_Minus_IL_Offset=20181
,P_Ca_2nd_Z_Plus_IL_Offset=20184
,P_Ca_2nd_Z_Minus_IL_Offset=20186
,P_An_2nd_T_Plus_IL_Offset=20188
,P_An_2nd_T_Minus_IL_Offset=20191
,P_An_2nd_Z_Minus_IL_Offset=20194
,P_FR_X_Plus_IL_Offset=20198
,P_FR_X_Minus_IL_Offset=20200
,P_Ca_NG_PNP_Plus_IL_Offset=20203
,P_Ca_NG_PNP_Minus_IL_Offset=20207
,P_An_NG_PNP_Plus_IL_Offset=20211
,P_An_NG_PNP_Minus_IL_Offset=20215
,P_Unloader_X_Plus_IL_Offset=20219
,P_Unloader_X_Minus_IL_Offset=20223
,P_Unloader_Z_Plus_IL_Offset=20227
,P_Unloader_Z_Minus_IL_Offset=20230
,P_IL_In_Offset=20233
,P_IL_Home_Chk_Motor_Num=20260
,P_NG_PNP_Motion_arr=20432
,P_Ecat_Read_MNTR=20474
,P_Ecat_Write_MNTR=20502
,P_Ecat_Save_MNTR=20530
,P_Ecat_Error_MNTR=20546
,P_Ecat_Read_Error_MNTR=20562
,P_Ecat_Each_Write_Error_MNTR=20578
,P_Pn000=20597
,P_Pn001=20617
,P_Pn00B=20637
,P_Pn100=20657
,P_Pn101=20677
,P_Pn102=20697
,P_Pn103=20717
,P_Pn123=20737
,P_Pn140=20757
,P_Pn141=20777
,P_Pn145=20797
,P_Pn146=20817
,P_Pn160=20837
,P_Pn161=20857
,P_Pn163=20877
,P_Pn170=20897
,P_Pn401=20917
,P_Pn408=20937
,P_Pn409=20957
,P_Pn40A=20977
,P_Pn40C=20997
,P_Pn40D=21017
,P_Pn416=21037
,P_Pn417=21057
,P_Pn511=21077
,P_Pn520=21097
,P_PnB02_Numerator=21117
,P_PnB02_Denominator=21137
,P_Pneumatic_Pressure_Unit_Tack_Time_Chk_Timer=21282
,P_Pneumatic_Pressure_Unit_Tack_Time=21309
,P_Discharge_Tact_Time_Arr=21340
,P_PLC19_All_Home_Tact_Time_Array=21421
,P_Act_ALL_Home_Time_Out=21444
,P_Act_Hold_Complete_Bit=21484
,P_Module_Act_Hold_Command_Array=21519
,P_OLD_Module_Act_Hold_Command_Array=21554
,P_Module_Act_Hold_State_Machine_Array=21589
,P_Act_Hold_Old_Time=21624
,P_Act_Hold_Time_Out=21660
,P_Act_Execute_Complete_Bit=21728
,P_Module_Act_Execute_Command_Array=21740
,P_OLD_Module_Act_Execute_Command_Array=21752
,P_Module_Act_Execute_State_Machine_Array=21764
,P_Act_Execute_Old_Time=21776
,P_Act_Execute_Time_Out=21789
,P_Buffer_Mode_Module_Status_Sequence=21838
,P_EXECUTE_Status_Prod_Sequence=21868
,P_Buffer_Seqdata_Execute_First_Sepa_Mode_Array=21905
,P_Execute_First_Sepa_Mode_Tact_Time_Array=21936
,P_Discharge_Seq_InterLock_Delay_Time=21963
,P_Discharge_Seq_InterLock_Flag=21993
,P_Buffer_Seqdata_Discharge_Array=22023
,P_Suspend_Discharge_Tact_Time_Array=22054
,P_ARC_Seq_InterLock_Delay_Time=22082
,P_ARC_Seq_InterLock_Flag=22112
,P_Buffer_Seqdata_ARC_Array=22142
,P_Suspend_ARC_Tact_Time_Array=22173
,P_Anode_1TR_Cell_Supply_Seq_InterLock_Delay_Time=22200
,P_Anode_1TR_Cell_Supply_Seq_InterLock_Flag=22230
,P_Buffer_Seqdata_Anode_1TR_Cell_Supply_Array=22260
,P_Suspend_Anode_1TR_Cell_Supply_Tact_Time_Array=22291
,P_Buffer_Seqdata_Hold_Exist_Insp_Array=22319
,P_Hold_Exist_Insp_Tact_Time_Array=22350
,P_Buffer_Seqdata_Hold_Remove_NG_PNP_Array=22378
,P_Hold_Remove_NG_PNP_Tact_Time_Array=22409
,P_Buffer_Seqdata_Hold_Remove_Align_Array=22440
,P_Hold_Remove_Align_Tact_Time_Array=22471
,P_Buffer_Seqdata_Hold_Remove_2TR_Array=22502
,P_Hold_Remove_2TR_Tact_Time_Array=22533
,P_Buffer_Seqdata_Hold_Supply_1TR_Array=22561
,P_Hold_Supply_1TR_Tact_Time_Array=22592
,P_Buffer_Seqdata_Hold_Supply_Align_Array=22625
,P_Hold_Supply_Align_Tact_Time_Array=22656
,P_Buffer_Seqdata_Hold_Supply_2TR_Array=22684
,P_Hold_Supply_2TR_Tact_Time_Array=22715
,P_Buffer_Seqdata_Hold_Semi_Run_Pos_Move_Array=22743
,P_Hold_Semi_Run_Pos_Move_Tact_Time_Array=22774
,P_Act_Complete_Bit=22795
,P_Act_Old_Time=22861
,P_Act_Delay_Time=22927
,P_Act_Time_Out=22994
,P_Discharge_Possibility_Bit=23061
,P_HOLD_Exist_Possibility_Bit=23127
,P_HOLD_NG_Remove_Possibility_Bit=23193
,P_HOLD_Align_Remove_Possibility_Bit=23259
,P_HOLD_2TR_Remove_Possibility_Bit=23325
,P_HOLD_1TR_Supply_Possibility_Bit=23391
,P_HOLD_Align_Supply_Possibility_Bit=23457
,P_HOLD_2TR_Supply_Possibility_Bit=23523
,P_HOLD_Semi_Run_Pos_Possibility_Bit=23589
,P_Module_Act_Command_Array=23655
,P_OLD_Module_Act_Command_Array=23721
,P_Module_Act_State_Machine_Array=23787
,P_Module_Act_State_Machine_Error_Array=23853
,P_Sensor_To_Sepa_Curr_Distance_mm=23949
,P_Suspend_Monitor_=23980
,P_Suspend_Discharge_Debug_Address=23994
,P_Suspend_Discharge_Debug_Value=23999
,P_Suspend_ARC_Debug_Address=24011
,P_Suspend_ARC_Debug_Value=24016
,P_ARC_Ready_Flag=24026
,P_Suspend_An_1TR_Supply_Debug_Address=24031
,P_Suspend_An_1TR_Supply_Debug_Value=24036
,P_Anode_Suspend_Supply_Complete=24048
,P_MOde_Num=24131
,P_Command_Depth=24136
,P_In_Position=24141
,P_Last_Cycle_Command=24146
,P_Slave1_Anode_Run_Motion_Array=24154
,P_Slave2_Anode_Run_Motion_Array=24254
,P_Slave3_Anode_Run_Motion_Array=24354
,P_Slave4_Anode_Run_Motion_Array=24454
,P_Slave5_Anode_Run_Motion_Array=24554
,P_Slave6_Anode_Run_Motion_Array=24654
,P_Slave7_Anode_Run_Motion_Array=24754
,P_Slave8_Anode_Run_Motion_Array=24854
,P_Slave9_Anode_Run_Motion_Array=24954
,P_Slave10_Anode_Run_Motion_Array=25054
,P_Slave15_Anode_Run_Motion_Array=25154
,P_Slave16_Anode_Run_Motion_Array=25254
,P_Slave17_Anode_Run_Motion_Array=25354
,P_Slave18_Anode_Run_Motion_Array=25454
,P_Slave19_Anode_Run_Motion_Array=25554
,P_Slave1_Cathode_Run_Motion_Array=25654
,P_Slave2_Cathode_Run_Motion_Array=25754
,P_Slave3_Cathode_Run_Motion_Array=25854
,P_Slave4_Cathode_Run_Motion_Array=25954
,P_Slave5_Cathode_Run_Motion_Array=26054
,P_Slave15_Cathode_Run_Motion_Array=26154
,P_Slave6_Cathode_Run_Motion_Array=26254
,P_Slave7_Cathode_Run_Motion_Array=26354
,P_Slave8_Cathode_Run_Motion_Array=26454
,P_Slave9_Cathode_Run_Motion_Array=26554
,P_Slave10_Cathode_Run_Motion_Array=26654
,P_Slave16_Cathode_Run_Motion_Array=26754
,P_Slave17_Cathode_Run_Motion_Array=26854
,P_Slave18_Cathode_Run_Motion_Array=26954
,P_Slave19_Cathode_Run_Motion_Array=27054
,P_HCmd_List=27196
,P_DataList=27232
,P_Hold_Data_Err=27237
,P_Hold_Motion_Arr=27265
,P_Hold_Err_MNTR=27330
,P_Hold_Err_Data_Save=27334
,P_Hold_Err_Action_Data_Save=27342
,P_Hold_Memory_Tower_Err_Pos=27351
,P_Buffer_Seqdata_MSA_Array=27379
,P_Buffer_Seqdata_Align_Take_Off_Array=27429
,P_VISION_MSA_Align_Module_Complete_Bit=27479
,P_Module_Manual_MSA_Act_Command_Array=27579
,P_OLD_Module_Manual_MSA_Act_Command_Array=27679
,P_Module_MSA_Act_State_Machine_Array=27779
,P_VISION_MSA_Seq_Stopping_Point=27879
,P_Align_Take_Off_Module_Complete_Bit=27912
,P_Module_Manual_Align_Take_Off_Act_Command_Array=28012
,P_OLD_Module_Manual_Align_Take_Off_Act_Command_Array=28112
,P_Module_Align_Take_Off_Act_State_Machine_Array=28212
,P_Buffer_Judge_Trg=28319
,P_PLC01_Queue_MNTR=28330
,P_PLC01_Exe_Is_Ena_Step_Flag=28360
,P_PLC01_Exe_Fist_Sepa_Step_Flag=28370
,P_PLC01_Exe_Prod_Step_Flag=28380
,P_PLC01_HOLD_Insp_Step_Flag=28385
,P_PLC01_HOLD_Main_Step_Flag=28395
,P_PLC01_Sus_Discharge_Step_Flag=28410
,P_PLC01_Sus_ARC_Step_Flag=28420
,P_PLC01_STOP_Init_Step_Flag=28430
,P_PLC01_STOP_Cycle_ST_Step_Flag=28440
,P_Vision_MNTR=28471
,P_No1_Recipe_Pos_IL=28496
,P_No2_Recipe_Pos_IL=28549
,P_No3_Recipe_Pos_IL=28602
,P_No4_Recipe_Pos_IL=28655
,P_No5_Recipe_Pos_IL=28708
,P_No6_Recipe_Pos_IL=28761
,P_No7_Recipe_Pos_IL=28814
,P_No8_Recipe_Pos_IL=28867
,P_No9_Recipe_Pos_IL=28920
,P_No10_Recipe_Pos_IL=28973
,P_Recipe_POS_Interock_M=29026};
enum csglobalQ {_csglobalQ_=-1};
enum csglobalQarray {_csglobalQarray_=-1};
enum ptrM {_ptrM_=-1
,M_Y_Final_Roll_Heating=1009
,M_X_Final_Roll_Heating=1010
,M_X_ARC_NP_Plate_Down=1022
,M_X_Pause_Anode_Signal=4000
,M_X_Pause_Cathode_Signal=4001
,M_X_Pause_to_Sequence_Signal=4002
,M_X_Pause_Ack_Signal=4003
,M_X_Pause_Status_Complete_Signal=4004
,M_X_Resume_Stop_Signal=4005
,M_X_Pause_Opposite_Status=4006
,M_X_Opposite_Lane_Status1=4007
,M_X_Opposite_Lane_Status2=4008
,M_X_Opposite_Lane_Status3=4009
,M_X_Opposite_Lane_Status4=4010
,M_X_Opposite_Lane_Status5=4011
,M_X_Abort_Command=4012
,M_X_Opposite_Resume_Not_Free=4013
,M_X_EMO_Signal=4014
,M_X_Vision_Anode_Align_Ready=4016
,M_X_Vision_Anode_Align_Busy=4017
,M_X_Vision_Anode_Align_HeartBit=4018
,M_X_Vision_Anode_Align_OK=4019
,M_X_Vision_Anode_Align_NG=4020
,M_X_Vision_Anode_Surface_OK=4021
,M_X_Vision_Anode_Surface_NG=4022
,M_X_Vision_Anode_Exist_OK=4023
,M_X_Vision_Anode_Exist_NG=4024
,M_X_Vision_Anode_Empty_OK=4025
,M_X_Vision_Anode_Empty_NG=4026
,M_X_Vision_Anode_Align_Start_ACK=4027
,M_X_Vision_Cathode_Align_Ready=4032
,M_X_Vision_Cathode_Align_Busy=4033
,M_X_Vision_Cathode_Align_HeartBit=4034
,M_X_Vision_Cathode_Align_OK=4035
,M_X_Vision_Cathode_Align_NG=4036
,M_X_Vision_Cathode_Surface_OK=4037
,M_X_Vision_Cathode_Surface_NG=4038
,M_X_Vision_Cathode_Exist_OK=4039
,M_X_Vision_Cathode_Exist_NG=4040
,M_X_Vision_Cathode_Empty_OK=4041
,M_X_Vision_Cathode_Empty_NG=4042
,M_X_Vision_Cathode_Align_Start_ACK=4043
,M_X_Vision_Stack_Ready=4048
,M_X_Vision_Stack_Busy=4049
,M_X_Vision_Stack_HeartBit=4050
,M_X_Vision_Stack_OK=4051
,M_X_Vision_Stack_NG=4052
,M_X_Vision_Stack_Start_Sheet_Ack=4053
,M_X_Vision_Stack_End_Sheet_Ack=4054
,M_X_Vision_Stack_First_Sepa_OK=4055
,M_X_Vision_Stack_First_Sepa_NG=4056
,M_X_Vision_Stack_EPC_Correction_Complete=4058
,M_X_PLC_Anode_Sheet_Ready=4064
,M_X_PLC_Anode_Sheet_Completed=4065
,M_X_PLC_Cathode_Sheet_Ready=4067
,M_X_PLC_Cathode_Sheet_Completed=4068
,M_X_PLC_2nd_Unloader_Ready_Pos=4070
,M_X_PLC_2nd_Unloader_Grip=4071
,M_X_PLC_to_1st_Avoid_Request=4072
,M_X_Discharge_Avoid_Complete_Ack=4073
,M_X_PLC_2nd_Unloader_Grip_Request_Ack=4074
,M_X_1st_Unloader_UnGrip_Ack=4075
,M_X_Memory_Data_Parsing_Complete=4077
,M_X_Emergency_Stop_From_PLC=4078
,M_X_PLC_Sync_Heart_Bit=4079
,M_X_First_Sheet_Paper_Plate_Vac_Sensor=4080
,M_X_First_Sheet_Paper_Plate_FWD_CYL_Sensor=4081
,M_X_First_Sheet_Paper_Plate_BWD_CYL_Sensor=4082
,M_X_ST_Center_CYL_Up_Sensor_1=4086
,M_X_ST_Center_CYL_Dn_Sensor_1=4087
,M_X_ST_Vac_Detect_Sensor=4088
,M_X_First_Sheet_Paper_Main_Position=4089
,M_X_ST_Center_CYL_Up_Sensor_2=4091
,M_X_ST_Center_CYL_Dn_Sensor_2=4092
,M_X_Cathode_AT_Vac_Sensor=4096
,M_X_Anode_AT_Vac_Sensor=4097
,M_X_Cathode_1st_PNP_Vac_Sensor=4098
,M_X_Cathode_1st_PNP_Collision_Detect_Sensor=4099
,M_X_Cathode_2nd_PNP_Vac_Sensor=4100
,M_X_Anode_1st_PNP_Vac_Sensor=4102
,M_X_Anode_1st_PNP_Collision_Detect_Sensor=4103
,M_X_Anode_2nd_PNP_Vac_Sensor=4104
,M_X_Opposite_Cathode_1st_PNP_Collision_Detect_Sensor=4108
,M_X_Opposite_Anode_1st_PNP_Collision_Detect_Sensor=4109
,M_X_SERVO_DRIVE_ALARM_1=4112
,M_X_SERVO_DRIVE_ALARM_2=4113
,M_X_SERVO_DRIVE_ALARM_3=4114
,M_X_SERVO_DRIVE_ALARM_4=4115
,M_X_SERVO_DRIVE_ALARM_5=4116
,M_X_SERVO_DRIVE_ALARM_6=4117
,M_X_SERVO_DRIVE_ALARM_7=4118
,M_X_SERVO_DRIVE_ALARM_8=4119
,M_X_SERVO_DRIVE_ALARM_11=4122
,M_X_SERVO_DRIVE_ALARM_12=4123
,M_X_SERVO_DRIVE_ALARM_13=4124
,M_X_SERVO_DRIVE_ALARM_15=4126
,M_X_SERVO_DRIVE_ALARM_16=4127
,M_X_SERVO_DRIVE_ALARM_17=4128
,M_X_SERVO_DRIVE_ALARM_18=4129
,M_X_SERVO_DRIVE_ALARM_19=4130
,M_X_SERVO_DRIVE_ALARM_20=4131
,M_X_SERVO_DRIVE_ALARM_21=4132
,M_X_SERVO_DRIVE_ALARM_22=4133
,M_X_SERVO_DRIVE_ALARM_23=4134
,M_X_SERVO_DRIVE_ALARM_24=4135
,M_X_SERVO_DRIVE_ALARM_25=4136
,M_X_SERVO_DRIVE_ALARM_26=4137
,M_X_SERVO_DRIVE_ALARM_27=4138
,M_X_SERVO_DRIVE_ALARM_28=4139
,M_X_BTN_CMD_Select_Switch=4160
,M_X_BTN_CMD_Auto_Start=4161
,M_X_BTN_CMD_Auto_Stop=4162
,M_X_BTN_CMD_Ready=4163
,M_X_BTN_CMD_Reset=4164
,M_X_BTN_Status_Safety_Enable=4165
,M_X_BTN_Press_Jog_Plus=4166
,M_X_BTN_Press_Jog_Minus=4167
,M_X_Trigger_1s_Cycle_HeartBit=4168
,M_X_Host_JR_ID_Create_Complete=4169
,M_X_Other_Door_Open_Signal=4170
,M_X_Trg_SV_Enable_From_PLC=4171
,M_X_Sepa_Upper_Unwinder_Status=4172
,M_X_Sepa_Lower_Unwinder_Status=4173
,M_X_MC_Reconnect_BTN_Signal=4175
,M_X_PLC_Trans_IN_Ack=4176
,M_X_PLC_JR_Data_Produce_Signal=4177
,M_X_PLC_Trans_OK=4178
,M_X_PLC_Trans_NG=4179
,M_X_ARC_Door_Signal=4180
,M_X_PLC_ULD_Home_Interlock_Signal=4181
,M_X_PLC_Work_Confirm_Operation_Flag=4183
,M_X_PLC_ULD_Home_UnGrip_Signal=4184
,M_X_PLC_Cathode_ReelCut_Door_Interlock=4185
,M_X_PLC_Anode_ReelCut_Door_Interlock=4186
,M_X_PLC_Cathode_Small_Door_Close_Signal=4187
,M_X_PLC_Anode_Small_Door_Close_Signal=4188
,M_X_Cathode_NG_PNP_Location_Sensor=4216
,M_X_Anode_NG_PNP_Location_Sensor=4217
,M_X_Cathode_NG_PNP_Vac_Sensor=4218
,M_X_Cathode_NG_Box_Sheet_Full_Detect_Sensor=4219
,M_X_Anode_NG_PNP_Vac_Sensor=4220
,M_X_Anode_NG_Box_Sheet_Full_Detect_Sensor=4221
,M_X_Cathode_NG_Box_Detect_Sensor=4222
,M_X_Anode_NG_Box_Detect_Sensor=4223
,M_X_Cathode_AT_FWD_Detect_Sensor=4224
,M_X_Anode_AT_FWD_Detect_Sensor=4226
,M_X_1st_Unloader_JR_Grip_Pressure_Sensor=4229
,M_X_1st_Unloader_Grip_Detect_Sensor=4230
,M_X_1st_Unloader_UnGrip_Detect_Sensor=4231
,M_X_ARC_NP_Two_Btn_Signal=4232
,M_X_ARC_NP_Upper_Plate_Vac_On=4233
,M_X_ARC_NP_Lower_Plate_Vac_On=4234
,M_X_ARC_NP_BTN_Reset=4235
,M_X_ARC_NP_BTN_Unwinder_Spool_Home=4236
,M_X_ARC_NP_BTN_Ready=4237
,M_X_ARC_NP_BTN_Unwinder_Auto_Alignment=4238
,M_X_ARC_NP_BTN_Plate_Tilting=4239
,M_X_ARC_NP_BTN_Unwinder_Lock_Unlock=4240
,M_X_ARC_NP_BTN_Unwinder_Rotation=4241
,M_X_ARC_NP_BTN_Unwinder_Re_Rotation=4242
,M_X_ARC_NP_BTN_Plate_Vac_On_Off=4243
,M_X_ARC_NP_BTN_Plate_Sepa_Cutting=4244
,M_X_ARC_NP_BTN_Plate_Stopper_Clamp=4245
,M_X_ARC_NP_BTN_Plate_Up_Dn=4246
,M_X_ARC_NP_Auto_Reel_Change_Upper=4248
,M_X_ARC_NP_Auto_Reel_Change_Lower=4249
,M_X_Heat_Cable_Meter_GO=4251
,M_X_Heat_Cable_Meter_HI=4252
,M_X_Heat_Cable_Meter_LO=4253
,M_X_FR_Sepa_Cutter_Up_Sensor=4288
,M_X_FR_Sepa_Cutter_Dn_Sensor=4289
,M_X_FR_Sepa_Clamp_Front_Sensor=4292
,M_X_FR_Sepa_UnClamp_Front_Sensor=4293
,M_X_FR_Sepa_Clamp_Rear_Sensor=4294
,M_X_FR_Sepa_UnClamp_Rear_Sensor=4295
,M_X_Cathode_Belt_Partition_Up_Sensor=4300
,M_X_Cathode_Belt_Partition_Down_Sensor=4301
,M_X_Anode_Belt_Partition_Up_Sensor=4302
,M_X_Anode_Belt_Partition_Down_Sensor=4303
,M_X_FR_Clamping_Sub_Roller_UnClamp_1=4304
,M_X_FR_Clamping_Sub_Roller_Clamp_1=4305
,M_X_FR_Clamping_Sub_Roller_UnClamp_2=4306
,M_X_FR_Clamping_Sub_Roller_Clamp_2=4307
,M_X_Sepa_ARC_Upper_Ejector_Vac_Sensor=4308
,M_X_Sepa_ARC_Lower_Ejector_Vac_Sensor=4309
,M_X_Sepa_Upper_ARC_Up_Sensor=4312
,M_X_Sepa_Upper_ARC_Dn_Sensor=4313
,M_X_Sepa_Upper_ARC_UnTilting_Sensor_Front=4314
,M_X_Sepa_Upper_ARC_Tilting_Sensor_Front=4315
,M_X_Sepa_Upper_ARC_UnTilting_Sensor_Rear=4316
,M_X_Sepa_Upper_ARC_Tilting_Sensor_Rear=4317
,M_X_Sepa_Upper_ARC_Cutting_FWD_Sensor=4318
,M_X_Sepa_Upper_ARC_Cutting_BWD_Sensor=4319
,M_X_Sepa_Upper_ARC_UnStopper_Front_Sensor=4320
,M_X_Sepa_Upper_ARC_Stopper_Front_Sensor=4321
,M_X_Sepa_Upper_ARC_UnStopper_Rear_Sensor=4322
,M_X_Sepa_Upper_ARC_Stopper_Rear_Sensor=4323
,M_X_Sepa_Lower_ARC_Up_Sensor=4324
,M_X_Sepa_Lower_ARC_Dn_Sensor=4325
,M_X_Sepa_Lower_ARC_UnTilting_Sensor_Front=4326
,M_X_Sepa_Lower_ARC_Tilting_Sensor_Front=4327
,M_X_Sepa_Lower_ARC_UnTilting_Sensor_Rear=4328
,M_X_Sepa_Lower_ARC_Tilting_Sensor_Rear=4329
,M_X_Sepa_Lower_ARC_Cutting_FWD_Sensor=4330
,M_X_Sepa_Lower_ARC_Cutting_BWD_Sensor=4331
,M_X_Sepa_Lower_ARC_UnStopper_Front_Sensor=4332
,M_X_Sepa_Lower_ARC_Stopper_Front_Sensor=4333
,M_X_Sepa_Lower_ARC_UnStopper_Rear_Sensor=4334
,M_X_Sepa_Lower_ARC_Stopper_Rear_Sensor=4335
,M_X_Sepa_Ionizer_1_Run=4336
,M_X_Sepa_Ionizer_1_Error=4337
,M_X_Sepa_Ionizer_2_Run=4338
,M_X_Sepa_Ionizer_2_Error=4339
,M_X_Sepa_Ionizer_3_Run=4340
,M_X_Sepa_Ionizer_3_Error=4341
,M_Y_Pause_Anode_Signal=5000
,M_Y_Pause_Cathode_Signal=5001
,M_Y_Pause_to_Sequence_Signal=5002
,M_Y_Pause_Ack_Signal=5003
,M_Y_Pause_Status_Complete_Signal=5004
,M_Y_Resume_Stop_Signal=5005
,M_Y_Pause_Opposite_Status=5006
,M_Y_P_PMAC_Status1=5007
,M_Y_P_PMAC_Status2=5008
,M_Y_P_PMAC_Status3=5009
,M_Y_P_PMAC_Status4=5010
,M_Y_P_PMAC_Status5=5011
,M_Y_Abort_Command=5012
,M_Y_Opposite_Resume_Not_Free=5013
,M_Y_Vision_Anode_Align_Ready=5016
,M_Y_Vision_Anode_Align_Heartbit=5017
,M_Y_VisioN_Align_AN_Trigger=5018
,M_Y_Vision_Anode_Align_Result_Ack=5019
,M_Y_Vision_Anode_Surface_Trigger=5020
,M_Y_Vision_Anode_Surface_Result_Ack=5021
,M_Y_Vision_Anode_Empty_Trigger=5022
,M_Y_Vision_Anode_Empty_Result_Ack=5023
,M_Y_Vision_Anode_Exist_Trigger=5024
,M_Y_Vision_Anode_Exist_Result_Ack=5025
,M_Y_Vision_Anode_Align_Start=5026
,M_Y_Vision_Anode_Data_Transfer_Trigger=5027
,M_Y_VisioN_Align_AN_TimeOut_Flag=5028
,M_Y_Vision_Anode_Surface_TimeOut_Flag=5029
,M_Y_Vision_Anode_Save_Sheet_Data=5030
,M_Y_Vision_Anode_Aling_Move_Complete=5031
,M_Y_Vision_Cathode_Align_Ready=5032
,M_Y_Vision_Cathode_Align_Heartbit=5033
,M_Y_VisioN_Align_CA_Trigger=5034
,M_Y_Vision_Cathode_Align_Result_Ack=5035
,M_Y_Vision_Cathode_Surface_Trigger=5036
,M_Y_Vision_Cathode_Surface_Result_Ack=5037
,M_Y_Vision_Cathode_Empty_Trigger=5038
,M_Y_Vision_Cathode_Empty_Result_Ack=5039
,M_Y_Vision_Cathode_Exist_Trigger=5040
,M_Y_Vision_Cathode_Exist_Result_Ack=5041
,M_Y_Vision_Cathode_Align_Start=5042
,M_Y_Vision_Cathode_Data_Transfer_Trigger=5043
,M_Y_VisioN_Align_CA_TimeOut_Flag=5044
,M_Y_Vision_Cathode_Surface_TimeOut_Flag=5045
,M_Y_Vision_Cathode_Save_Sheet_Data=5046
,M_Y_Vision_Cathode_Aling_Move_Complete=5047
,M_Y_Vision_Stack_Ready=5048
,M_Y_Vision_Stack_HeartBit=5049
,M_Y_Vision_Stack_Anode_Trigger=5050
,M_Y_Vision_Stack_Cathode_Trigger=5051
,M_Y_Vision_Stack_Result_Ack=5052
,M_Y_Vision_Stack_Start_Sheet=5053
,M_Y_Vision_Stack_End_Sheet=5054
,M_Y_Vision_Stack_Sepa_Mode_Anode_Trigger=5055
,M_Y_Vision_Stack_Sepa_Mode_Cathode_Trigger=5056
,M_Y_Vision_Stack_First_Sepa_Trigger=5057
,M_Y_Vision_Stack_First_Sepa_Result_Ack=5058
,M_Y_Vision_Stack_TimeOut_Flag=5059
,M_Y_Vision_Stack_EPC_Correction_Trigger=5060
,M_Y_Vision_Jelly_Roll_Not_Stacking_Flag=5063
,M_Y_PLC_A_Anode_Sheet_Start=5064
,M_Y_PLC_A_Anode_Sheet_Completed=5065
,M_Y_PLC_A_Anode_Interlock=5066
,M_Y_PLC_A_Cathode_Sheet_Start=5067
,M_Y_PLC_A_Cathode_Sheet_Completed=5068
,M_Y_PLC_A_Cathode_Interlock=5069
,M_Y_Discharge_Avoid_Complete=5070
,M_Y_PLC_Unloader_Grip_Request=5071
,M_Y_1st_Unloader_UnGrip_Complete=5072
,M_Y_1st_Avoid_Pos_Discharge_Complete=5073
,M_Y_PLC_Unloader_Ready_Pos_Ack=5074
,M_Y_PLC_Unloader_Grip_Ack=5075
,M_Y_PLC_to_1st_Avoid_Request_Ack=5076
,M_Y_PLC_to_Memory_Data_Parsing_Request=5077
,M_Y_EtherCAT_Connected=5078
,M_Y_PLC_Sync_Heart_Bit=5079
,M_Y_ST_Center_Sol=5080
,M_Y_First_Sheet_Paper_Plate_FWD_Sol=5083
,M_Y_First_Sheet_Paper_Plate_BWD_Sol=5084
,M_Y_First_Sheet_Paper_Plate_Ejector_Vac_On=5085
,M_Y_First_Sheet_Paper_Plate_Ejector_Vac_Off=5086
,M_Y_ST_Center_Ejector_VAC_On=5087
,M_Y_ST_Center_Ejector_VAC_Off=5088
,M_Y_Cathode_AT_Vac_Ejector_Vac_On=5092
,M_Y_Cathode_AT_Vac_Ejector_Vac_Off=5093
,M_Y_Anode_AT_Vac_Ejector_Vac_On=5094
,M_Y_Anode_AT_Vac_Ejector_Vac_Off=5095
,M_Y_Cathode_1st_Vac_Sol_On=5098
,M_Y_Cathode_1st_Vac_Sol_Off=5099
,M_Y_Cathode_2nd_Vac_Sol_On=5102
,M_Y_Cathode_2nd_Vac_Sol_Off=5103
,M_Y_Anode_1st_Vac_Sol_On=5106
,M_Y_Anode_1st_Vac_Sol_Off=5107
,M_Y_Anode_2nd_Vac_Sol_On=5110
,M_Y_Anode_2nd_Vac_Sol_Off=5111
,M_Y_Unwinder_Upper_Laser_Point=5112
,M_Y_Unwinder_Lower_Laser_Point=5113
,M_Y_Inner_Led_Lamp_On=5114
,M_Y_Sepa_Cutter_SSR_On=5115
,M_Y_Inovance_EMG_Signal=5116
,M_Y_Servo_Driver_Reset_Motor_1=5118
,M_Y_Servo_Driver_Reset_Motor_2=5119
,M_Y_Servo_Driver_Reset_Motor_3=5120
,M_Y_Servo_Driver_Reset_Motor_4=5121
,M_Y_Servo_Driver_Reset_Motor_5=5122
,M_Y_Servo_Driver_Reset_Motor_6=5123
,M_Y_Servo_Driver_Reset_Motor_7=5124
,M_Y_Servo_Driver_Reset_Motor_8=5125
,M_Y_Servo_Driver_Reset_Motor_27=5126
,M_Y_Servo_Driver_Reset_Motor_28=5127
,M_Y_Servo_Driver_Reset_Motor_11=5128
,M_Y_Servo_Driver_Reset_Motor_12=5129
,M_Y_Servo_Driver_Reset_Motor_13=5130
,M_Y_Servo_Driver_Reset_Motor_14=5131
,M_Y_Servo_Driver_Reset_Motor_15=5132
,M_Y_Servo_Driver_Reset_Motor_16=5133
,M_Y_Servo_Driver_Reset_Motor_17=5134
,M_Y_Servo_Driver_Reset_Motor_18=5135
,M_Y_Servo_Driver_Reset_Motor_19=5136
,M_Y_Servo_Driver_Reset_Motor_20=5137
,M_Y_Servo_Driver_Reset_Motor_21=5138
,M_Y_Servo_Driver_Reset_Motor_22=5139
,M_Y_Servo_Driver_Reset_Motor_23=5140
,M_Y_Servo_Driver_Reset_Motor_24=5141
,M_Y_Servo_Driver_Reset_Motor_25=5142
,M_Y_Servo_Driver_Reset_Motor_26=5143
,M_Y_Trigger_Display_Current_Mode_To_PLC=5144
,M_Y_Trigger_Display_Current_Execute_To_PLC=5145
,M_Y_Trigger_Display_Current_Stop_To_PLC=5146
,M_Y_Trigger_Display_Enable_Alarm_To_PLC=5147
,M_Y_Trigger_Display_Selected_Motor_Status_To_PLC=5148
,M_Y_Host_JR_ID_Create_Request=5149
,M_Y_1s_Cycle_HeartBit=5152
,M_Y_PLC_Cathode_Sheet_NG=5160
,M_Y_PLC_Anode_Sheet_NG=5161
,M_Y_EPC_Vertical_Panel_Manual_Signal=5165
,M_Y_PLC_Stacking_OK_JR=5166
,M_Y_PLC_Stacking_NG_JR=5167
,M_Y_PLC_Full_Stacking_NG_JR_Unload=5168
,M_Y_PLC_NonFull_Stacking_NG_JR_Unload=5169
,M_Y_PLC_Sepa_Stacking_Unload=5170
,M_Y_Trg_SV_Receive_Complete_To_PLC=5171
,M_Y_Sepa_Upper_Unwinder_Status=5172
,M_Y_Sepa_Lower_Unwinder_Status=5173
,M_Y_PLC_Trans_IN_Signal=5176
,M_Y_PLC_JR_Data_Produce_Signal=5177
,M_Y_PLC_ULD_Home_Interlock_Signal=5178
,M_Y_Sheet_enable_Flag=5179
,M_Y_PLC_Work_Confirm_Operation_Ack=5180
,M_Y_PLC_1st_ULD_Wait_Pos=5181
,M_Y_PLC_ARC_EPC_Value_Apply_Signal=5182
,M_Y_1st_Grip_State=5183
,M_Y_1st_UnGrip_State=5184
,M_Y_PLC_ARC_1st_Sepa_Mode_Signal=5185
,M_Y_Cathode_1st_PNP_Sheet_Wait=5186
,M_Y_Anode_1st_PNP_Sheet_Wait=5187
,M_Y_ST_Cathode_Clamp_Damper_Sol=5208
,M_Y_ST_Anode_Clamp_Damper_Sol=5209
,M_Y_ST_Center_Cyl_Up_Sol=5210
,M_Y_ST_Center_Cyl_Dn_Sol=5211
,M_Y_ST_Zero_Clamp_Sol=5212
,M_Y_1st_Unloader_UnGrip_Sol=5214
,M_Y_1st_Unloader_Grip_Sol=5215
,M_Y_1st_Unloader_JR_Grip_Blow_Sol=5216
,M_Y_Cathode_AT_Zero_Clamp_Sol=5218
,M_Y_Anode_AT_Zero_Clamp_Sol=5219
,M_Y_Cathode_NG_PNP_Ejector_Vac_On=5224
,M_Y_Cathode_NG_PNP_Ejector_Vac_Off=5225
,M_Y_Anode_NG_PNP_Ejector_Vac_On=5226
,M_Y_Anode_NG_PNP_Ejector_Vac_Off=5227
,M_Y_NP_BTN_Reset=5240
,M_Y_NP_BTN_Spool_Home=5241
,M_Y_NP_BTN_Ready=5242
,M_Y_NP_BTN_Alignment=5243
,M_Y_NP_BTN_Tilting=5244
,M_Y_NP_BTN_Chuck_Unchuck=5245
,M_Y_NP_BTN_Rotation=5246
,M_Y_NP_BTN_Re_Rotation=5247
,M_Y_NP_BTN_Vacuum_On_OFF=5248
,M_Y_NP_BTN_Sepa_Cutting=5249
,M_Y_NP_BTN_Clamp_On_OFF=5250
,M_Y_NP_BTN_Plate_Up_Down=5251
,M_Y_ARC_NP_Two_Btn_Signal=5253
,M_Y_Sepa_ARC_Upper_Dn_Sol=5288
,M_Y_Sepa_ARC_Upper_Up_Sol=5289
,M_Y_Sepa_ARC_Upper_UnTilting_Sol=5290
,M_Y_Sepa_ARC_Upper_Tilting_Sol=5291
,M_Y_Sepa_ARC_Upper_Cutting_FWD_Sol=5292
,M_Y_Sepa_ARC_Upper_Cutting_BWD_Sol=5293
,M_Y_Sepa_ARC_Upper_Stopper_FWD_Sol=5294
,M_Y_Sepa_ARC_Upper_Stopper_BWD_Sol=5295
,M_Y_Sepa_ARC_Lower_Up_Sol=5296
,M_Y_Sepa_ARC_Lower_Dn_Sol=5297
,M_Y_Sepa_ARC_Lower_UnTilting_Sol=5298
,M_Y_Sepa_ARC_Lower_Tilting_Sol=5299
,M_Y_Sepa_ARC_Lower_Cutting_FWD_Sol=5300
,M_Y_Sepa_ARC_Lower_Cutting_BWD_Sol=5301
,M_Y_Sepa_ARC_Lower_Stopper_FWD_Sol=5302
,M_Y_Sepa_ARC_Lower_Stopper_BWD_Sol=5303
,M_Y_An_Ca_Partition_Down_Sol=5304
,M_Y_An_Ca_Partition_Up_Sol=5305
,M_Y_Upper_Unwinder_Lock_Sol=5308
,M_Y_Upper_Unwinder_UnLock_Sol=5309
,M_Y_Lower_Unwinder_Lock_Sol=5310
,M_Y_Lower_Unwinder_UnLock_Sol=5311
,M_Y_Sepa_Ionizer_1_2_3_Blow_Off=5312
,M_Y_Stack_Vision_Camera_Clamp_Sol=5313
,M_Y_Sepa_Ionizer_1_Remote_Off=5314
,M_Y_Sepa_Ionizer_2_Remote_Off=5315
,M_Y_Sepa_Ionizer_3_Remote_Off=5316
,M_Y_FR_Clamping_Sub_Roller_Clamp=5320
,M_Y_FR_Clamping_Sub_Roller_Unclamp=5321
,M_Y_FR_Sepa_Cutter_Dn_Sol=5324
,M_Y_FR_Sepa_Cutter_Up_Sol=5325
,M_Y_FR_Sepa_Clamp=5326
,M_Y_FR_Sepa_UnClamp=5327
,M_Y_Sepa_Upper_ARC_Ejector_Vac_On=5336
,M_Y_Sepa_Upper_ARC_Ejector_Vac_Off=5337
,M_Y_Sepa_Lower_ARC_Ejector_Vac_On=5338
,M_Y_Sepa_Lower_ARC_Ejector_Vac_Off=5339
,M_X_Detect_1ST_TR_Anode_VAC_On=1000
,M_X_Detect_2ND_TR_Anode_VAC_On=1001
,M_X_Detect_1ST_TR_Cathode_VAC_On=1002
,M_X_Detect_2ND_TR_Cathode_VAC_On=1003
,M_X_Detect_Align_Anode_VAC_On=1004
,M_X_Detect_Align_Cathode_VAC_On=1005
,M_AI_Sepa_Upper_Sensing=5400
,M_AI_Sepa_Lower_Sensing=5401
,M_AI_FR_Detect_Sensing=5402
,M_AI_Dancer_Regulator=5404
,M_AI_Friction_Dancer=5405
,M_AI_Cathode_Clamp_Regulator=5406
,M_AI_Anode_Clamp_Regulator=5407
,M_AI_1st_Unloader_Grip_Sensing=5408
,M_AI_Cutter_Heat_Meter=5410
,M_AO_Cathode_Clamp_Regulator=5412
,M_AO_Anode_Clamp_Regulator=5413
,M_AO_Dancer_Regulator=5414
,M_Sys_Time=8296
,M_Cathode_Belt_MNTR=8351
,M_Cathode_1st_MNTR=8352
,M_Cathode_Align_MNTR=8353
,M_Cathode_2nd_MNTR=8354
,M_Anode_Belt_MNTR=8355
,M_Anode_1st_MNTR=8356
,M_Anode_Align_MNTR=8357
,M_Anode_2nd_MNTR=8358
,M_X_Vision_Stack_Align_Ok=4228
,M_X_Vision_Stack_Align_Ng=4227
,M_Y_PLC_EPCAlignMode_Complete_Return=5195
,M_Y_Vision_Stack_EPC_Align_Vision_Trigger=5234
,M_Y_A_Site_Heart_Bit=5014
,M_X_PLC_Anode_Sheet_Ready2=4010
,M_X_PLC_Cathode_Sheet_Ready2=4011
,M_X_B_Site_Heart_Bit=4014
,M_PLC_HeartBit_Flag=4223
,M_X_BTN_Press_Jog_Left_From_PLC=4160
,M_X_BTN_Press_Jog_Right_From_PLC=4107
,M_Sample_JR_Prod_Count=8359
,M_Sample_Btn_Flag=8360
,M_Stack_Host_ID_Buffer_Mode=8569
,M_Stack_Host_ID_Sample_Type=8570
,M_Stack_Host_ID_JR_Result=8571
,M_Stack_Host_ID_NG_Type=8572
,M_Manual_ARC_BTN=9134
,M_EPC_SENSOR_Load_Ratio=6033
,M_STACK_VISION_Load_Ratio=6034
,M_SHEET_PAPER_X_Load_Ratio=6035
,M_Align_CA_X_Load_Ratio=6036
,M_Align_CA_Y_Load_Ratio=6037
,M_Align_CA_T_Load_Ratio=6038
,M_Align_AN_X_Load_Ratio=6039
,M_Align_AN_Y_Load_Ratio=6040
,M_Align_AN_T_Load_Ratio=6041
,M_NG_PnP_CA_T_Load_Ratio=6042
,M_NG_PnP_AN_T_Load_Ratio=6043
,M_NG_PnP_CA_Z_Load_Ratio=6044
,M_NG_PnP_AN_Z_Load_Ratio=6045
,M_UNLOADER_X_Load_Ratio=6046
,M_UNLOADER_Z_Load_Ratio=6047
,M_UNLOADER_T_Load_Ratio=6048};
enum ptrMarray {_ptrMarray_=-1
,M_Ecat_Load_Ratio=8192
,M_Read_Sector_Scan_Complete=8242
,M_Write_Sector_Scan_Complete=8251
,M_Read_Sector_Scan_Cmd=8260
,M_Write_Sector_Scan_Cmd=8269
,M_Read_Sector_Scan_Time=8278
,M_Write_Sector_Scan_Time=8287
,M_Gate3_MinusLimit=8297
,M_Gate3_HomeLimit=8324
,M_Touchprobefunction=8361
,M_Touchprobestatus=8410
,M_Ecat_Motor_State=8459
,M_Motor_BTN_Info=8509
,M_ASCII_Stack_Work_Host_Sepa_ID_Buffer=8559
,M_ASCII_Read_Stack_Work_Host_Sepa_ID_Buffer=8573
,M_ASCII_Uloader_1st_Host_ID_Buffer=8580
,M_ASCII_Anode_Sheet_Belt_Buffer=8590
,M_ASCII_Anode_Sheet_Buffer=8597
,M_ASCII_Cathode_Sheet_Belt_Buffer=8653
,M_ASCII_Cathode_Sheet_Buffer=8660
,M_ASCII_First_Sheet_Buffer=8716
,M_ASCII_Last_Sheet_Buffer=8723
,P_BTN_Jog_BWD_M=8730
,P_BTN_Jog_FWD_M=8780
,M_UnWinder_BTN_Lamp=8830
,M_Cathode_BTN_Lamp=8846
,M_Anode_BTN_Lamp=8878
,M_Stack_BTN_Lamp=8910
,M_ARC_BTN_Lamp=8942
,M_UnWinder_BTN_Interlock=8974
,M_Cathode_BTN_Interlock=8990
,M_Anode_BTN_Interlock=9022
,M_Stack_BTN_Interlock=9054
,M_ARC_BTN_Interlock=9086
,M_NP_BTN_Interlock=9118
,M_Motor_Vel=9135
,M_Motor_TA=9185
,M_Motor_TD=9235
,M_Motor_BTN=9285
,M_Motor_RecipePos=9335
,M_Motor_Move_Distance=9385
,M_Motor_Home_Offset=9435
,M_Motor_Pos_Data=9485
,M_Motor_Status_Data=9535
,M_Motor_Recipe_Pos_Interlock=9585
,M_Motor_Peak_Load_Ratio=9635
,M_Motor_Effective_Load_Ratio=9685
,M_Motor_Check_Current_Recipe_Pos=9735};
#ifndef _PP_PROJ_HDR_
  void SetEnumGlobalVar(enum globalP var, double data)
  {
    pshm->P[var] = data;
  }

  double GetEnumGlobalVar(enum globalP var)
  {
    return pshm->P[var];
  }

  void SetEnumGlobalArrayVar(enum globalParray var, unsigned index, double data)
  {
    pshm->P[(var + index)%MAX_P] = data;
  }

  double GetEnumGlobalArrayVar(enum globalParray var, unsigned index)
  {
    return pshm->P[(var + index)%MAX_P];
  }

  void SetEnumCSGlobalVar(enum csglobalQ var, unsigned cs, double data)
  {
    pshm->Coord[cs % MAX_COORDS].Q[var] = data;
  }

  double GetEnumCSGlobalVar(enum csglobalQ var, unsigned cs)
  {
    return pshm->Coord[cs % MAX_COORDS].Q[var];
  }

  void SetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs, double data)
  {
    pshm->Coord[cs % MAX_COORDS].Q[(var + index)%MAX_Q] = data;
  }

  double GetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs)
  {
    return pshm->Coord[cs % MAX_COORDS].Q[(var + index)%MAX_Q];
  }

  void SetEnumPtrVar(enum ptrM var, double data)
  {
    im_write(pshm->Mdef + var, data, &pshm->Ldata);
  }

  double GetEnumPtrVar(enum ptrM var)
  {
    return im_read(pshm->Mdef + var, &pshm->Ldata);
  }

  void SetEnumPtrArrayVar(enum ptrMarray var, unsigned index, double data)
  {
    im_write(pshm->Mdef + ((var + index)%MAX_M), data, &pshm->Ldata);
  }

  double GetEnumPtrArrayVar(enum ptrMarray var, unsigned index)
  {
    return im_read(pshm->Mdef + ((var + index)%MAX_M), &pshm->Ldata);
  }

  #define SetGlobalVar(i, x)              SetEnumGlobalVar(i, x)
  #define SetGlobalArrayVar(i, j, x)      SetEnumGlobalArrayVar(i, j, x)
  #define GetGlobalVar(i)                 GetEnumGlobalVar(i)
  #define GetGlobalArrayVar(i, j)         GetEnumGlobalArrayVar(i, j)

  #define SetCSGlobalVar(i, j, x)         SetEnumCSGlobalVar(i, j, x)
  #define SetCSGlobalArrayVar(i, j, k, x) SetEnumCSGlobalArrayVar(i, j, k, x)
  #define GetCSGlobalVar(i, j)            GetEnumCSGlobalVar(i, j)
  #define GetCSGlobalArrayVar(i, j, k)    GetEnumCSGlobalArrayVar(i, j, k)

  #define SetPtrVar(i, x)                 SetEnumPtrVar(i, x)
  #define SetPtrArrayVar(i, j, x)         SetEnumPtrArrayVar(i, j, x)
  #define GetPtrVar(i)                    GetEnumPtrVar(i)
  #define GetPtrArrayVar(i, j)            GetEnumPtrArrayVar(i, j)

#else

  void SetEnumGlobalVar(enum globalP var, double data);
  double GetEnumGlobalVar(enum globalP var);
  void SetEnumGlobalArrayVar(enum globalParray var, unsigned index, double data);
  double GetEnumGlobalArrayVar(enum globalParray var, unsigned index);
  void SetEnumCSGlobalVar(enum csglobalQ var, unsigned cs, double data);
  double GetEnumCSGlobalVar(enum csglobalQ var, unsigned cs);
  void SetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs, double data);
  double GetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs);
  void SetEnumPtrVar(enum ptrM var, double data);
  double GetEnumPtrVar(enum ptrM var);
  void SetEnumPtrArrayVar(enum ptrMarray var, unsigned index, double data);
  double GetEnumPtrArrayVar(enum ptrMarray var, unsigned index);

  #define SetGlobalVar(i, x)              SetEnumGlobalVar(i, x)
  #define SetGlobalArrayVar(i, j, x)      SetEnumGlobalArrayVar(i, j, x)
  #define GetGlobalVar(i)                 GetEnumGlobalVar(i)
  #define GetGlobalArrayVar(i, j)         GetEnumGlobalArrayVar(i, j)

  #define SetCSGlobalVar(i, j, x)         SetEnumCSGlobalVar(i, j, x)
  #define SetCSGlobalArrayVar(i, j, k, x) SetEnumCSGlobalArrayVar(i, j, k, x)
  #define GetCSGlobalVar(i, j)            GetEnumCSGlobalVar(i, j)
  #define GetCSGlobalArrayVar(i, j, k)    GetEnumCSGlobalArrayVar(i, j, k)

  #define SetPtrVar(i, x)                 SetEnumPtrVar(i, x)
  #define SetPtrArrayVar(i, j, x)         SetEnumPtrArrayVar(i, j, x)
  #define GetPtrVar(i)                    GetEnumPtrVar(i)
  #define GetPtrArrayVar(i, j)            GetEnumPtrArrayVar(i, j)

#endif
// end of #ifdef _EnumMode_
#else
// ***** Standard default mode *****
#define P_Ca_1st_PNP_HomeOffset 8192
#define P_An_1st_PNP_HomeOffset 8193
#define P_Ca_2nd_PNP_HomeOffset 8194
#define P_An_2nd_PNP_HomeOffset 8195
#define P_Ca_1st_PNP_ABSPhasing_Pos 8196
#define P_An_1st_PNP_ABSPhasing_Pos 8236
#define P_Ca_2nd_PNP_ABSPhasing_Pos 8276
#define P_An_2nd_PNP_ABSPhasing_Pos 8316
#define P_Project_Ver_A 8356
#define P_Project_Ver_B 8357
#define P_Project_Ver_C 8358
#define P_Project_Ver_D 8359
#define P_Sepa_Test 8360
#define P_Cur_Equip_No 8361
#define M_Y_Final_Roll_Heating 1009
#define M_X_Final_Roll_Heating 1010
#define M_X_ARC_NP_Plate_Down 1022
#define M_X_ARC_NP_Plate_Select 2050
#define M_X_Pause_Anode_Signal 4000
#define M_X_Pause_Cathode_Signal 4001
#define M_X_Pause_to_Sequence_Signal 4002
#define M_X_Pause_Ack_Signal 4003
#define M_X_Pause_Status_Complete_Signal 4004
#define M_X_Resume_Stop_Signal 4005
#define M_X_Pause_Opposite_Status 4006
#define M_X_Opposite_Lane_Status1 4007
#define M_X_Opposite_Lane_Status2 4008
#define M_X_Opposite_Lane_Status3 4009
#define M_X_Opposite_Lane_Status4 4010
#define M_X_Opposite_Lane_Status5 4011
#define M_X_Abort_Command 4012
#define M_X_Opposite_Resume_Not_Free 4013
#define M_X_EMO_Signal 4014
#define M_X_Vision_Anode_Align_Ready 4016
#define M_X_Vision_Anode_Align_Busy 4017
#define M_X_Vision_Anode_Align_HeartBit 4018
#define M_X_Vision_Anode_Align_OK 4019
#define M_X_Vision_Anode_Align_NG 4020
#define M_X_Vision_Anode_Surface_OK 4021
#define M_X_Vision_Anode_Surface_NG 4022
#define M_X_Vision_Anode_Exist_OK 4023
#define M_X_Vision_Anode_Exist_NG 4024
#define M_X_Vision_Anode_Empty_OK 4025
#define M_X_Vision_Anode_Empty_NG 4026
#define M_X_Vision_Anode_Align_Start_ACK 4027
#define M_X_Vision_Cathode_Align_Ready 4032
#define M_X_Vision_Cathode_Align_Busy 4033
#define M_X_Vision_Cathode_Align_HeartBit 4034
#define M_X_Vision_Cathode_Align_OK 4035
#define M_X_Vision_Cathode_Align_NG 4036
#define M_X_Vision_Cathode_Surface_OK 4037
#define M_X_Vision_Cathode_Surface_NG 4038
#define M_X_Vision_Cathode_Exist_OK 4039
#define M_X_Vision_Cathode_Exist_NG 4040
#define M_X_Vision_Cathode_Empty_OK 4041
#define M_X_Vision_Cathode_Empty_NG 4042
#define M_X_Vision_Cathode_Align_Start_ACK 4043
#define M_X_Vision_Stack_Ready 4048
#define M_X_Vision_Stack_Busy 4049
#define M_X_Vision_Stack_HeartBit 4050
#define M_X_Vision_Stack_OK 4051
#define M_X_Vision_Stack_NG 4052
#define M_X_Vision_Stack_Start_Sheet_Ack 4053
#define M_X_Vision_Stack_End_Sheet_Ack 4054
#define M_X_Vision_Stack_First_Sepa_OK 4055
#define M_X_Vision_Stack_First_Sepa_NG 4056
#define M_X_Vision_Stack_EPC_Correction_Complete 4058
#define M_X_PLC_Anode_Sheet_Ready 4064
#define M_X_PLC_Anode_Sheet_Completed 4065
#define M_X_PLC_Cathode_Sheet_Ready 4067
#define M_X_PLC_Cathode_Sheet_Completed 4068
#define M_X_PLC_2nd_Unloader_Ready_Pos 4070
#define M_X_PLC_2nd_Unloader_Grip 4071
#define M_X_PLC_to_1st_Avoid_Request 4072
#define M_X_Discharge_Avoid_Complete_Ack 4073
#define M_X_PLC_2nd_Unloader_Grip_Request_Ack 4074
#define M_X_1st_Unloader_UnGrip_Ack 4075
#define M_X_Memory_Data_Parsing_Complete 4077
#define M_X_Emergency_Stop_From_PLC 4078
#define M_X_PLC_Sync_Heart_Bit 4079
#define M_X_First_Sheet_Paper_Plate_Vac_Sensor 4080
#define M_X_First_Sheet_Paper_Plate_FWD_CYL_Sensor 4081
#define M_X_First_Sheet_Paper_Plate_BWD_CYL_Sensor 4082
#define M_X_ST_Center_CYL_Up_Sensor_1 4086
#define M_X_ST_Center_CYL_Dn_Sensor_1 4087
#define M_X_ST_Vac_Detect_Sensor 4088
#define M_X_First_Sheet_Paper_Main_Position 4089
#define M_X_ST_Center_CYL_Up_Sensor_2 4091
#define M_X_ST_Center_CYL_Dn_Sensor_2 4092
#define M_X_Cathode_AT_Vac_Sensor 4096
#define M_X_Anode_AT_Vac_Sensor 4097
#define M_X_Cathode_1st_PNP_Vac_Sensor 4098
#define M_X_Cathode_1st_PNP_Collision_Detect_Sensor 4099
#define M_X_Cathode_2nd_PNP_Vac_Sensor 4100
#define M_X_Anode_1st_PNP_Vac_Sensor 4102
#define M_X_Anode_1st_PNP_Collision_Detect_Sensor 4103
#define M_X_Anode_2nd_PNP_Vac_Sensor 4104
#define M_X_Opposite_Cathode_1st_PNP_Collision_Detect_Sensor 4108
#define M_X_Opposite_Anode_1st_PNP_Collision_Detect_Sensor 4109
#define M_X_SERVO_DRIVE_ALARM_1 4112
#define M_X_SERVO_DRIVE_ALARM_2 4113
#define M_X_SERVO_DRIVE_ALARM_3 4114
#define M_X_SERVO_DRIVE_ALARM_4 4115
#define M_X_SERVO_DRIVE_ALARM_5 4116
#define M_X_SERVO_DRIVE_ALARM_6 4117
#define M_X_SERVO_DRIVE_ALARM_7 4118
#define M_X_SERVO_DRIVE_ALARM_8 4119
#define M_X_SERVO_DRIVE_ALARM_11 4122
#define M_X_SERVO_DRIVE_ALARM_12 4123
#define M_X_SERVO_DRIVE_ALARM_13 4124
#define M_X_SERVO_DRIVE_ALARM_15 4126
#define M_X_SERVO_DRIVE_ALARM_16 4127
#define M_X_SERVO_DRIVE_ALARM_17 4128
#define M_X_SERVO_DRIVE_ALARM_18 4129
#define M_X_SERVO_DRIVE_ALARM_19 4130
#define M_X_SERVO_DRIVE_ALARM_20 4131
#define M_X_SERVO_DRIVE_ALARM_21 4132
#define M_X_SERVO_DRIVE_ALARM_22 4133
#define M_X_SERVO_DRIVE_ALARM_23 4134
#define M_X_SERVO_DRIVE_ALARM_24 4135
#define M_X_SERVO_DRIVE_ALARM_25 4136
#define M_X_SERVO_DRIVE_ALARM_26 4137
#define M_X_SERVO_DRIVE_ALARM_27 4138
#define M_X_SERVO_DRIVE_ALARM_28 4139
#define M_X_BTN_CMD_Select_Switch 4160
#define M_X_BTN_CMD_Auto_Start 4161
#define M_X_BTN_CMD_Auto_Stop 4162
#define M_X_BTN_CMD_Ready 4163
#define M_X_BTN_CMD_Reset 4164
#define M_X_BTN_Status_Safety_Enable 4165
#define M_X_BTN_Press_Jog_Plus 4166
#define M_X_BTN_Press_Jog_Minus 4167
#define M_X_Trigger_1s_Cycle_HeartBit 4168
#define M_X_Host_JR_ID_Create_Complete 4169
#define M_X_Other_Door_Open_Signal 4170
#define M_X_Trg_SV_Enable_From_PLC 4171
#define M_X_Sepa_Upper_Unwinder_Status 4172
#define M_X_Sepa_Lower_Unwinder_Status 4173
#define M_X_MC_Reconnect_BTN_Signal 4175
#define M_X_PLC_Trans_IN_Ack 4176
#define M_X_PLC_JR_Data_Produce_Signal 4177
#define M_X_PLC_Trans_OK 4178
#define M_X_PLC_Trans_NG 4179
#define M_X_ARC_Door_Signal 4180
#define M_X_PLC_ULD_Home_Interlock_Signal 4181
#define M_X_PLC_Work_Confirm_Operation_Flag 4183
#define M_X_PLC_ULD_Home_UnGrip_Signal 4184
#define M_X_PLC_Cathode_ReelCut_Door_Interlock 4185
#define M_X_PLC_Anode_ReelCut_Door_Interlock 4186
#define M_X_PLC_Cathode_Small_Door_Close_Signal 4187
#define M_X_PLC_Anode_Small_Door_Close_Signal 4188
#define M_X_Cathode_NG_PNP_Location_Sensor 4216
#define M_X_Anode_NG_PNP_Location_Sensor 4217
#define M_X_Cathode_NG_PNP_Vac_Sensor 4218
#define M_X_Cathode_NG_Box_Sheet_Full_Detect_Sensor 4219
#define M_X_Anode_NG_PNP_Vac_Sensor 4220
#define M_X_Anode_NG_Box_Sheet_Full_Detect_Sensor 4221
#define M_X_Cathode_NG_Box_Detect_Sensor 4222
#define M_X_Anode_NG_Box_Detect_Sensor 4223
#define M_X_Cathode_AT_FWD_Detect_Sensor 4224
#define M_X_Anode_AT_FWD_Detect_Sensor 4226
#define M_X_1st_Unloader_JR_Grip_Pressure_Sensor 4229
#define M_X_1st_Unloader_Grip_Detect_Sensor 4230
#define M_X_1st_Unloader_UnGrip_Detect_Sensor 4231
#define M_X_ARC_NP_Two_Btn_Signal 4232
#define M_X_ARC_NP_Upper_Plate_Vac_On 4233
#define M_X_ARC_NP_Lower_Plate_Vac_On 4234
#define M_X_ARC_NP_BTN_Reset 4235
#define M_X_ARC_NP_BTN_Unwinder_Spool_Home 4236
#define M_X_ARC_NP_BTN_Ready 4237
#define M_X_ARC_NP_BTN_Unwinder_Auto_Alignment 4238
#define M_X_ARC_NP_BTN_Plate_Tilting 4239
#define M_X_ARC_NP_BTN_Unwinder_Lock_Unlock 4240
#define M_X_ARC_NP_BTN_Unwinder_Rotation 4241
#define M_X_ARC_NP_BTN_Unwinder_Re_Rotation 4242
#define M_X_ARC_NP_BTN_Plate_Vac_On_Off 4243
#define M_X_ARC_NP_BTN_Plate_Sepa_Cutting 4244
#define M_X_ARC_NP_BTN_Plate_Stopper_Clamp 4245
#define M_X_ARC_NP_BTN_Plate_Up_Dn 4246
#define M_X_ARC_NP_Auto_Reel_Change_Upper 4248
#define M_X_ARC_NP_Auto_Reel_Change_Lower 4249
#define M_X_Heat_Cable_Meter_GO 4251
#define M_X_Heat_Cable_Meter_HI 4252
#define M_X_Heat_Cable_Meter_LO 4253
#define M_X_FR_Sepa_Cutter_Up_Sensor 4288
#define M_X_FR_Sepa_Cutter_Dn_Sensor 4289
#define M_X_FR_Sepa_Clamp_Front_Sensor 4292
#define M_X_FR_Sepa_UnClamp_Front_Sensor 4293
#define M_X_FR_Sepa_Clamp_Rear_Sensor 4294
#define M_X_FR_Sepa_UnClamp_Rear_Sensor 4295
#define M_X_Cathode_Belt_Partition_Up_Sensor 4300
#define M_X_Cathode_Belt_Partition_Down_Sensor 4301
#define M_X_Anode_Belt_Partition_Up_Sensor 4302
#define M_X_Anode_Belt_Partition_Down_Sensor 4303
#define M_X_FR_Clamping_Sub_Roller_UnClamp_1 4304
#define M_X_FR_Clamping_Sub_Roller_Clamp_1 4305
#define M_X_FR_Clamping_Sub_Roller_UnClamp_2 4306
#define M_X_FR_Clamping_Sub_Roller_Clamp_2 4307
#define M_X_Sepa_ARC_Upper_Ejector_Vac_Sensor 4308
#define M_X_Sepa_ARC_Lower_Ejector_Vac_Sensor 4309
#define M_X_Sepa_Upper_ARC_Up_Sensor 4312
#define M_X_Sepa_Upper_ARC_Dn_Sensor 4313
#define M_X_Sepa_Upper_ARC_UnTilting_Sensor_Front 4314
#define M_X_Sepa_Upper_ARC_Tilting_Sensor_Front 4315
#define M_X_Sepa_Upper_ARC_UnTilting_Sensor_Rear 4316
#define M_X_Sepa_Upper_ARC_Tilting_Sensor_Rear 4317
#define M_X_Sepa_Upper_ARC_Cutting_FWD_Sensor 4318
#define M_X_Sepa_Upper_ARC_Cutting_BWD_Sensor 4319
#define M_X_Sepa_Upper_ARC_UnStopper_Front_Sensor 4320
#define M_X_Sepa_Upper_ARC_Stopper_Front_Sensor 4321
#define M_X_Sepa_Upper_ARC_UnStopper_Rear_Sensor 4322
#define M_X_Sepa_Upper_ARC_Stopper_Rear_Sensor 4323
#define M_X_Sepa_Lower_ARC_Up_Sensor 4324
#define M_X_Sepa_Lower_ARC_Dn_Sensor 4325
#define M_X_Sepa_Lower_ARC_UnTilting_Sensor_Front 4326
#define M_X_Sepa_Lower_ARC_Tilting_Sensor_Front 4327
#define M_X_Sepa_Lower_ARC_UnTilting_Sensor_Rear 4328
#define M_X_Sepa_Lower_ARC_Tilting_Sensor_Rear 4329
#define M_X_Sepa_Lower_ARC_Cutting_FWD_Sensor 4330
#define M_X_Sepa_Lower_ARC_Cutting_BWD_Sensor 4331
#define M_X_Sepa_Lower_ARC_UnStopper_Front_Sensor 4332
#define M_X_Sepa_Lower_ARC_Stopper_Front_Sensor 4333
#define M_X_Sepa_Lower_ARC_UnStopper_Rear_Sensor 4334
#define M_X_Sepa_Lower_ARC_Stopper_Rear_Sensor 4335
#define M_X_Sepa_Ionizer_1_Run 4336
#define M_X_Sepa_Ionizer_1_Error 4337
#define M_X_Sepa_Ionizer_2_Run 4338
#define M_X_Sepa_Ionizer_2_Error 4339
#define M_X_Sepa_Ionizer_3_Run 4340
#define M_X_Sepa_Ionizer_3_Error 4341
#define M_Y_Pause_Anode_Signal 5000
#define M_Y_Pause_Cathode_Signal 5001
#define M_Y_Pause_to_Sequence_Signal 5002
#define M_Y_Pause_Ack_Signal 5003
#define M_Y_Pause_Status_Complete_Signal 5004
#define M_Y_Resume_Stop_Signal 5005
#define M_Y_Pause_Opposite_Status 5006
#define M_Y_P_PMAC_Status1 5007
#define M_Y_P_PMAC_Status2 5008
#define M_Y_P_PMAC_Status3 5009
#define M_Y_P_PMAC_Status4 5010
#define M_Y_P_PMAC_Status5 5011
#define M_Y_Abort_Command 5012
#define M_Y_Opposite_Resume_Not_Free 5013
#define M_Y_Vision_Anode_Align_Ready 5016
#define M_Y_Vision_Anode_Align_Heartbit 5017
#define M_Y_VisioN_Align_AN_Trigger 5018
#define M_Y_Vision_Anode_Align_Result_Ack 5019
#define M_Y_Vision_Anode_Surface_Trigger 5020
#define M_Y_Vision_Anode_Surface_Result_Ack 5021
#define M_Y_Vision_Anode_Empty_Trigger 5022
#define M_Y_Vision_Anode_Empty_Result_Ack 5023
#define M_Y_Vision_Anode_Exist_Trigger 5024
#define M_Y_Vision_Anode_Exist_Result_Ack 5025
#define M_Y_Vision_Anode_Align_Start 5026
#define M_Y_Vision_Anode_Data_Transfer_Trigger 5027
#define M_Y_VisioN_Align_AN_TimeOut_Flag 5028
#define M_Y_Vision_Anode_Surface_TimeOut_Flag 5029
#define M_Y_Vision_Anode_Save_Sheet_Data 5030
#define M_Y_Vision_Anode_Aling_Move_Complete 5031
#define M_Y_Vision_Cathode_Align_Ready 5032
#define M_Y_Vision_Cathode_Align_Heartbit 5033
#define M_Y_VisioN_Align_CA_Trigger 5034
#define M_Y_Vision_Cathode_Align_Result_Ack 5035
#define M_Y_Vision_Cathode_Surface_Trigger 5036
#define M_Y_Vision_Cathode_Surface_Result_Ack 5037
#define M_Y_Vision_Cathode_Empty_Trigger 5038
#define M_Y_Vision_Cathode_Empty_Result_Ack 5039
#define M_Y_Vision_Cathode_Exist_Trigger 5040
#define M_Y_Vision_Cathode_Exist_Result_Ack 5041
#define M_Y_Vision_Cathode_Align_Start 5042
#define M_Y_Vision_Cathode_Data_Transfer_Trigger 5043
#define M_Y_VisioN_Align_CA_TimeOut_Flag 5044
#define M_Y_Vision_Cathode_Surface_TimeOut_Flag 5045
#define M_Y_Vision_Cathode_Save_Sheet_Data 5046
#define M_Y_Vision_Cathode_Aling_Move_Complete 5047
#define M_Y_Vision_Stack_Ready 5048
#define M_Y_Vision_Stack_HeartBit 5049
#define M_Y_Vision_Stack_Anode_Trigger 5050
#define M_Y_Vision_Stack_Cathode_Trigger 5051
#define M_Y_Vision_Stack_Result_Ack 5052
#define M_Y_Vision_Stack_Start_Sheet 5053
#define M_Y_Vision_Stack_End_Sheet 5054
#define M_Y_Vision_Stack_Sepa_Mode_Anode_Trigger 5055
#define M_Y_Vision_Stack_Sepa_Mode_Cathode_Trigger 5056
#define M_Y_Vision_Stack_First_Sepa_Trigger 5057
#define M_Y_Vision_Stack_First_Sepa_Result_Ack 5058
#define M_Y_Vision_Stack_TimeOut_Flag 5059
#define M_Y_Vision_Stack_EPC_Correction_Trigger 5060
#define M_Y_Vision_Jelly_Roll_Not_Stacking_Flag 5063
#define M_Y_PLC_A_Anode_Sheet_Start 5064
#define M_Y_PLC_A_Anode_Sheet_Completed 5065
#define M_Y_PLC_A_Anode_Interlock 5066
#define M_Y_PLC_A_Cathode_Sheet_Start 5067
#define M_Y_PLC_A_Cathode_Sheet_Completed 5068
#define M_Y_PLC_A_Cathode_Interlock 5069
#define M_Y_Discharge_Avoid_Complete 5070
#define M_Y_PLC_Unloader_Grip_Request 5071
#define M_Y_1st_Unloader_UnGrip_Complete 5072
#define M_Y_1st_Avoid_Pos_Discharge_Complete 5073
#define M_Y_PLC_Unloader_Ready_Pos_Ack 5074
#define M_Y_PLC_Unloader_Grip_Ack 5075
#define M_Y_PLC_to_1st_Avoid_Request_Ack 5076
#define M_Y_PLC_to_Memory_Data_Parsing_Request 5077
#define M_Y_EtherCAT_Connected 5078
#define M_Y_PLC_Sync_Heart_Bit 5079
#define M_Y_ST_Center_Sol 5080
#define M_Y_First_Sheet_Paper_Plate_FWD_Sol 5083
#define M_Y_First_Sheet_Paper_Plate_BWD_Sol 5084
#define M_Y_First_Sheet_Paper_Plate_Ejector_Vac_On 5085
#define M_Y_First_Sheet_Paper_Plate_Ejector_Vac_Off 5086
#define M_Y_ST_Center_Ejector_VAC_On 5087
#define M_Y_ST_Center_Ejector_VAC_Off 5088
#define M_Y_Cathode_AT_Vac_Ejector_Vac_On 5092
#define M_Y_Cathode_AT_Vac_Ejector_Vac_Off 5093
#define M_Y_Anode_AT_Vac_Ejector_Vac_On 5094
#define M_Y_Anode_AT_Vac_Ejector_Vac_Off 5095
#define M_Y_Cathode_1st_Vac_Sol_On 5098
#define M_Y_Cathode_1st_Vac_Sol_Off 5099
#define M_Y_Cathode_2nd_Vac_Sol_On 5102
#define M_Y_Cathode_2nd_Vac_Sol_Off 5103
#define M_Y_Anode_1st_Vac_Sol_On 5106
#define M_Y_Anode_1st_Vac_Sol_Off 5107
#define M_Y_Anode_2nd_Vac_Sol_On 5110
#define M_Y_Anode_2nd_Vac_Sol_Off 5111
#define M_Y_Unwinder_Upper_Laser_Point 5112
#define M_Y_Unwinder_Lower_Laser_Point 5113
#define M_Y_Inner_Led_Lamp_On 5114
#define M_Y_Sepa_Cutter_SSR_On 5115
#define M_Y_Inovance_EMG_Signal 5116
#define M_Y_Servo_Driver_Reset_Motor_1 5118
#define M_Y_Servo_Driver_Reset_Motor_2 5119
#define M_Y_Servo_Driver_Reset_Motor_3 5120
#define M_Y_Servo_Driver_Reset_Motor_4 5121
#define M_Y_Servo_Driver_Reset_Motor_5 5122
#define M_Y_Servo_Driver_Reset_Motor_6 5123
#define M_Y_Servo_Driver_Reset_Motor_7 5124
#define M_Y_Servo_Driver_Reset_Motor_8 5125
#define M_Y_Servo_Driver_Reset_Motor_27 5126
#define M_Y_Servo_Driver_Reset_Motor_28 5127
#define M_Y_Servo_Driver_Reset_Motor_11 5128
#define M_Y_Servo_Driver_Reset_Motor_12 5129
#define M_Y_Servo_Driver_Reset_Motor_13 5130
#define M_Y_Servo_Driver_Reset_Motor_14 5131
#define M_Y_Servo_Driver_Reset_Motor_15 5132
#define M_Y_Servo_Driver_Reset_Motor_16 5133
#define M_Y_Servo_Driver_Reset_Motor_17 5134
#define M_Y_Servo_Driver_Reset_Motor_18 5135
#define M_Y_Servo_Driver_Reset_Motor_19 5136
#define M_Y_Servo_Driver_Reset_Motor_20 5137
#define M_Y_Servo_Driver_Reset_Motor_21 5138
#define M_Y_Servo_Driver_Reset_Motor_22 5139
#define M_Y_Servo_Driver_Reset_Motor_23 5140
#define M_Y_Servo_Driver_Reset_Motor_24 5141
#define M_Y_Servo_Driver_Reset_Motor_25 5142
#define M_Y_Servo_Driver_Reset_Motor_26 5143
#define M_Y_Trigger_Display_Current_Mode_To_PLC 5144
#define M_Y_Trigger_Display_Current_Execute_To_PLC 5145
#define M_Y_Trigger_Display_Current_Stop_To_PLC 5146
#define M_Y_Trigger_Display_Enable_Alarm_To_PLC 5147
#define M_Y_Trigger_Display_Selected_Motor_Status_To_PLC 5148
#define M_Y_Host_JR_ID_Create_Request 5149
#define M_Y_1s_Cycle_HeartBit 5152
#define M_Y_PLC_Cathode_Sheet_NG 5160
#define M_Y_PLC_Anode_Sheet_NG 5161
#define M_Y_EPC_Vertical_Panel_Manual_Signal 5165
#define M_Y_PLC_Stacking_OK_JR 5166
#define M_Y_PLC_Stacking_NG_JR 5167
#define M_Y_PLC_Full_Stacking_NG_JR_Unload 5168
#define M_Y_PLC_NonFull_Stacking_NG_JR_Unload 5169
#define M_Y_PLC_Sepa_Stacking_Unload 5170
#define M_Y_Trg_SV_Receive_Complete_To_PLC 5171
#define M_Y_Sepa_Upper_Unwinder_Status 5172
#define M_Y_Sepa_Lower_Unwinder_Status 5173
#define M_Y_PLC_Trans_IN_Signal 5176
#define M_Y_PLC_JR_Data_Produce_Signal 5177
#define M_Y_PLC_ULD_Home_Interlock_Signal 5178
#define M_Y_Sheet_enable_Flag 5179
#define M_Y_PLC_Work_Confirm_Operation_Ack 5180
#define M_Y_PLC_1st_ULD_Wait_Pos 5181
#define M_Y_PLC_ARC_EPC_Value_Apply_Signal 5182
#define M_Y_1st_Grip_State 5183
#define M_Y_1st_UnGrip_State 5184
#define M_Y_PLC_ARC_1st_Sepa_Mode_Signal 5185
#define M_Y_Cathode_1st_PNP_Sheet_Wait 5186
#define M_Y_Anode_1st_PNP_Sheet_Wait 5187
#define M_Y_ST_Cathode_Clamp_Damper_Sol 5208
#define M_Y_ST_Anode_Clamp_Damper_Sol 5209
#define M_Y_ST_Center_Cyl_Up_Sol 5210
#define M_Y_ST_Center_Cyl_Dn_Sol 5211
#define M_Y_ST_Zero_Clamp_Sol 5212
#define M_Y_1st_Unloader_UnGrip_Sol 5214
#define M_Y_1st_Unloader_Grip_Sol 5215
#define M_Y_1st_Unloader_JR_Grip_Blow_Sol 5216
#define M_Y_Cathode_AT_Zero_Clamp_Sol 5218
#define M_Y_Anode_AT_Zero_Clamp_Sol 5219
#define M_Y_Cathode_NG_PNP_Ejector_Vac_On 5224
#define M_Y_Cathode_NG_PNP_Ejector_Vac_Off 5225
#define M_Y_Anode_NG_PNP_Ejector_Vac_On 5226
#define M_Y_Anode_NG_PNP_Ejector_Vac_Off 5227
#define M_Y_NP_BTN_Reset 5240
#define M_Y_NP_BTN_Spool_Home 5241
#define M_Y_NP_BTN_Ready 5242
#define M_Y_NP_BTN_Alignment 5243
#define M_Y_NP_BTN_Tilting 5244
#define M_Y_NP_BTN_Chuck_Unchuck 5245
#define M_Y_NP_BTN_Rotation 5246
#define M_Y_NP_BTN_Re_Rotation 5247
#define M_Y_NP_BTN_Vacuum_On_OFF 5248
#define M_Y_NP_BTN_Sepa_Cutting 5249
#define M_Y_NP_BTN_Clamp_On_OFF 5250
#define M_Y_NP_BTN_Plate_Up_Down 5251
#define M_Y_ARC_NP_Two_Btn_Signal 5253
#define M_Y_Sepa_ARC_Upper_Dn_Sol 5288
#define M_Y_Sepa_ARC_Upper_Up_Sol 5289
#define M_Y_Sepa_ARC_Upper_UnTilting_Sol 5290
#define M_Y_Sepa_ARC_Upper_Tilting_Sol 5291
#define M_Y_Sepa_ARC_Upper_Cutting_FWD_Sol 5292
#define M_Y_Sepa_ARC_Upper_Cutting_BWD_Sol 5293
#define M_Y_Sepa_ARC_Upper_Stopper_FWD_Sol 5294
#define M_Y_Sepa_ARC_Upper_Stopper_BWD_Sol 5295
#define M_Y_Sepa_ARC_Lower_Up_Sol 5296
#define M_Y_Sepa_ARC_Lower_Dn_Sol 5297
#define M_Y_Sepa_ARC_Lower_UnTilting_Sol 5298
#define M_Y_Sepa_ARC_Lower_Tilting_Sol 5299
#define M_Y_Sepa_ARC_Lower_Cutting_FWD_Sol 5300
#define M_Y_Sepa_ARC_Lower_Cutting_BWD_Sol 5301
#define M_Y_Sepa_ARC_Lower_Stopper_FWD_Sol 5302
#define M_Y_Sepa_ARC_Lower_Stopper_BWD_Sol 5303
#define M_Y_An_Ca_Partition_Down_Sol 5304
#define M_Y_An_Ca_Partition_Up_Sol 5305
#define M_Y_Upper_Unwinder_Lock_Sol 5308
#define M_Y_Upper_Unwinder_UnLock_Sol 5309
#define M_Y_Lower_Unwinder_Lock_Sol 5310
#define M_Y_Lower_Unwinder_UnLock_Sol 5311
#define M_Y_Sepa_Ionizer_1_2_3_Blow_Off 5312
#define M_Y_Stack_Vision_Camera_Clamp_Sol 5313
#define M_Y_Sepa_Ionizer_1_Remote_Off 5314
#define M_Y_Sepa_Ionizer_2_Remote_Off 5315
#define M_Y_Sepa_Ionizer_3_Remote_Off 5316
#define M_Y_FR_Clamping_Sub_Roller_Clamp 5320
#define M_Y_FR_Clamping_Sub_Roller_Unclamp 5321
#define M_Y_FR_Sepa_Cutter_Dn_Sol 5324
#define M_Y_FR_Sepa_Cutter_Up_Sol 5325
#define M_Y_FR_Sepa_Clamp 5326
#define M_Y_FR_Sepa_UnClamp 5327
#define M_Y_Sepa_Upper_ARC_Ejector_Vac_On 5336
#define M_Y_Sepa_Upper_ARC_Ejector_Vac_Off 5337
#define M_Y_Sepa_Lower_ARC_Ejector_Vac_On 5338
#define M_Y_Sepa_Lower_ARC_Ejector_Vac_Off 5339
#define M_X_Detect_1ST_TR_Anode_VAC_On 1000
#define M_X_Detect_2ND_TR_Anode_VAC_On 1001
#define M_X_Detect_1ST_TR_Cathode_VAC_On 1002
#define M_X_Detect_2ND_TR_Cathode_VAC_On 1003
#define M_X_Detect_Align_Anode_VAC_On 1004
#define M_X_Detect_Align_Cathode_VAC_On 1005
#define M_AI_Sepa_Upper_Sensing 5400
#define M_AI_Sepa_Lower_Sensing 5401
#define M_AI_FR_Detect_Sensing 5402
#define M_AI_Dancer_Regulator 5404
#define M_AI_Friction_Dancer 5405
#define M_AI_Cathode_Clamp_Regulator 5406
#define M_AI_Anode_Clamp_Regulator 5407
#define M_AI_1st_Unloader_Grip_Sensing 5408
#define M_AI_Cutter_Heat_Meter 5410
#define M_AO_Cathode_Clamp_Regulator 5412
#define M_AO_Anode_Clamp_Regulator 5413
#define M_AO_Dancer_Regulator 5414
#define P_Home_Status 8362
#define P_Status_PMAC_Alarm_Reset 5387
#define M_Ecat_Load_Ratio 8192
#define P_Driving_Circumference 8412
#define P_PLC06_Spool_Circumference 8413
#define P_Upper_Spool_Circumference 8414
#define P_Lower_Spool_Circumference 8415
#define P_CamTable_MAX_EA 8416
#define P_Cam_Move_Distanse 8417
#define P_Sepa_Driving_Diameter 8418
#define P_PI 8419
#define M_Read_Sector_Scan_Complete 8242
#define M_Write_Sector_Scan_Complete 8251
#define M_Read_Sector_Scan_Cmd 8260
#define M_Write_Sector_Scan_Cmd 8269
#define M_Read_Sector_Scan_Time 8278
#define M_Write_Sector_Scan_Time 8287
#define Sys_Kill_Manual_BG_C 7777
#define P_Max_Try_Reconnect_MC 8420
#define P_Cur_Try_Reconnect_MC 8421
#define P_Modbus_Connected_Flag 8422
#define P_Write_Modbus_HeartBeat 1500
#define M_Sys_Time 8296
#define P_Homing_Step_Monitor 8423
#define M_Gate3_MinusLimit 8297
#define M_Gate3_HomeLimit 8324
#define P_231213_Test_Status 8473
#define P_BTN_Sepa_Stack_Mode 8523
#define P_BTN_Dryrun_Mode 8524
#define P_X_Btn_Align_Table_Take_Off 8525
#define P_Align_Table_Take_Off_Flag 8526
#define P_Flag_AT_Take_Off_Home_Chk_Flag 8527
#define P_Align_Table_Take_Off_State_Machine 8528
#define P_Align_Table_Take_Off_Status 8529
#define P_AT_Take_Off_Jog_Speed 8530
#define P_2nd_Transfer_AT_Take_Off_Pos 8531
#define P_VISION_Initial_Pos_Cmd 8532
#define P_VISION_Cal_Pos_Cmd 8533
#define P_FR_Anode_Dritection_Pos_Cmd 8534
#define P_FR_Cahode_Dritection_Pos_Cmd 8535
#define P_Anode_AT_Resolution_Cal_Pos_Cmd 8536
#define P_Cathode_AT_Resolution_Cal_Pos_Cmd 8537
#define P_Vision_Initial_Pos_Status_Machine 8538
#define P_Vision_Cal_Pos_Status_Machine 8539
#define P_FR_Anode_Dritection_Pos_Status_Machine 8540
#define P_FR_Cahode_Dritection_Pos_Status_Machine 8541
#define P_Anode_AT_Resolution_Cal_Pos_Status_Machine 8542
#define P_Cathode_AT_Resolution_Cal_Pos_Status_Machine 8543
#define P_Status_Vision_Initial_Pos 8544
#define P_Status_Vision_Cal_Pos 8545
#define P_Status_FR_Anode_Dritection_Pos 8546
#define P_Status_FR_Cahode_Dritection_Pos 8547
#define P_Status_An_AT_Resolution_Cal_Pos 8548
#define P_Status_Ca_AT_Resolution_Cal_Pos 8549
#define P_CMD_Cleaning_Pos 8550
#define P_Cleaning_Pos_Status_Machine 8551
#define P_Status_Cleaning_Pos 8552
#define P_Push_Manual_ARC_Button 8553
#define P_Push_Cycle_Stop_Button 8554
#define P_BTN_Push_Cathode_MSA_Mode 8555
#define P_BTN_Push_Anode_MSA_Mode 8556
#define P_BTN_Push_Cathode_Align_MSA 8557
#define P_BTN_Push_Anode_Align_MSA 8558
#define P_Btn_Vision_Initial_Pos 8559
#define P_Btn_Vision_Cal_Pos 8560
#define P_Btn_Vision_Cal_Anode_Move 8561
#define P_Btn_Vision_Cal_Cathode_Move 8562
#define P_Btn_An_AT_Resolution_Cal_Pos 8563
#define P_Btn_Ca_AT_Resolution_Cal_Pos 8564
#define P_Btn_Cleaning_Mode_Pos 8565
#define P_BTN_Push_Align_Auto_Cal_Ready_Pos_Move 8566
#define P_CMD_MSA_Run 8569
#define P_AutoVisionCal_StMachine 8574
#define P_CMD_Cathode_Align_Complete 8575
#define P_CMD_Anode_Align_Complete 8576
#define P_CMD_Align_Auto_Cal_Ready_Pos_Move_Run 8577
#define P_Align_Auto_Cal_Ready_Pos_Move_Run_State_Machine 8580
#define P_Align_Auto_Cal_Ready_Pos_Move_Run_Status 8583
#define P_Align_Auto_Cal_Ready_Pos_Move_Run_Complete 8586
#define P_Cal_Ready_Pos_Move_TR_Z_Jog_Speed 8589
#define P_Cal_Ready_Pos_Move_TR_X_Jog_Speed 8590
#define P_CMD_Cell_Align 8591
#define P_CMD_Cell_Stop 8601
#define P_CMD_Cell_Reset 8611
#define P_Anode_Clamp_Z1_Initial_Pos_mm 8621
#define P_Anode_Clamp_Z2_Initial_Pos_mm 8622
#define P_Cathode_Clamp_Z1_Initial_Pos_mm 8623
#define P_Cathode_Clamp_Z2_Initial_Pos_mm 8624
#define P_Stack_Table_Z_Initial_Pos_mm 8625
#define P_FR_Initial_Pos_mm 8626
#define P_Anode_Clamp_Z1_Cal_Pos_mm 8627
#define P_Anode_Clamp_Z2_Cal_Pos_mm 8628
#define P_Cathode_Clamp_Z1_Cal_Pos_mm 8629
#define P_Cathode_Clamp_Z2_Cal_Pos_mm 8630
#define P_Stack_Table_Z_Cal_Pos_mm 8631
#define P_FR_Cal_Pos_mm 8632
#define P_Anode_Clamp_Z1_Move_Speed 8633
#define P_Anode_Clamp_Z2_Move_Speed 8634
#define P_Cathode_Clamp_Z1_Move_Speed 8635
#define P_Cathode_Clamp_Z2_Move_Speed 8636
#define P_Stack_Table_Z_Move_Speed 8637
#define P_FR_Cal_Move_Speed 8638
#define P_Old_Anode_Clamp_Z1_Move_Speed 8639
#define P_Old_Anode_Clamp_Z2_Move_Speed 8640
#define P_Old_Cathode_Clamp_Z1_Move_Speed 8641
#define P_Old_Cathode_Clamp_Z2_Move_Speed 8642
#define P_Old_Stack_Table_Z_Move_Speed 8643
#define P_Old_FR_Cal_Move_Speed 8644
#define P_An_AT_Resolution_Anode_2th_Z_Pos_mm 8645
#define P_An_AT_Resolution_Anode_2th_T_Pos_mm 8646
#define P_An_AT_Resolution_Cathode_2th_Z_Pos_mm 8647
#define P_An_AT_Resolution_Cathode_2th_T_Pos_mm 8648
#define P_FR_AT_Resolution_Pos_mm 8649
#define P_Old_AT_Resolution_Anode_2th_Z_Pos_Move_Speed 8650
#define P_Old_AT_Resolution_Anode_2th_T_Pos_Move_Speed 8651
#define P_Old_AT_Resolution_Cathode_2th_Z_Pos_Move_Speed 8652
#define P_Old_AT_Resolution_Cathode_2th_T_Pos_Move_Speed 8653
#define P_Old_FR_AT_Resolution_Move_Speed 8654
#define P_Ca_AT_Resolution_Anode_2th_Z_Pos_mm 8655
#define P_Ca_AT_Resolution_Anode_2th_T_Pos_mm 8656
#define P_Ca_AT_Resolution_Cathode_2th_Z_Pos_mm 8657
#define P_Ca_AT_Resolution_Cathode_2th_T_Pos_mm 8658
#define P_AT_Resolution_Anode_2th_Z_Pos_Move_Speed 8659
#define P_AT_Resolution_Anode_2th_T_Pos_Move_Speed 8660
#define P_AT_Resolution_Cathode_2th_Z_Pos_Move_Speed 8661
#define P_AT_Resolution_Cathode_2th_T_Pos_Move_Speed 8662
#define P_FR_AT_Resolution_Move_Speed 8663
#define P_Anode_1th_MES_APC_Move_mm_PLC 8664
#define P_Cathode_1th_MES_APC_Move_mm_PLC 8665
#define P_Anode_1th_MES_APC_Move_mm_PMAC 8666
#define P_Cathode_1th_MES_APC_Move_mm_PMAC 8667
#define P_Anode_X_before_Comp_mm 8668
#define P_Cathode_X_before_Comp_mm 8669
#define P_Flag_Anode_1PNP_APC_Apply_Point 8670
#define P_Flag_Cathode_1PNP_APC_Apply_Point 8671
#define P_MES_APC_Active 8672
#define P_OLD_Slave1_Target_X_Belt_To_Align 8673
#define P_OLD_Slave10_Target_X_Belt_To_Align 8674
#define P_Anode_MES_X_Average_mm 8675
#define P_Cathode_MES_X_Average_mm 8676
#define P_Anode_X_Sum_Move_mm 8677
#define P_Anode_Align_Stage_TM 8678
#define P_Anode_Align_Stage_TS 8679
#define P_Anode_Align_Stage_TA 8680
#define P_Status_Anode_Prog 8681
#define P_Cathode_X_Sum_Move_mm 8682
#define P_X_Move_Recipe_Percent 8683
#define P_Cathode_Align_Stage_TM 8684
#define P_Cathode_Align_Stage_TS 8685
#define P_Cathode_Align_Stage_TA 8686
#define P_Status_Cathode_Prog 8687
#define P_Anode_Align_Move_Machine 8688
#define P_Cathode_Align_Move_Machine 8689
#define P_Stack_Table_Move_Machine 8690
#define P_Status_Anode_Align_Move 8691
#define P_Status_Cathode_Align_Move 8692
#define P_Status_Stack_Table_Move 8693
#define P_Anode_Align_Start_Bit 8694
#define P_Cathode_Align_Start_Bit 8695
#define P_Anode_Retry_Start_Bit 8696
#define P_Cathode_Retry_Start_Bit 8697
#define P_Vision_Spea_Run_Complete_Machine 8698
#define P_Vision_Sepa_Run_Complete_CMD 8699
#define P_Vision_Clamp_Complete_Machine 8700
#define P_Vision_Clamp_Complete_CMD 8701
#define P_PC_Jog_Motor_No 4301
#define P_PC_Jog_Speed 4254
#define P_Custom_Speed 4500
#define P_Jog_Position 4300
#define P_Jog_Work_Speed 8702
#define P_Anode_Recipe_Count 8733
#define P_Cathode_Recipe_Count 8734
#define P_Recipe_Homing_Speed 8735
#define P_Slave5_Target_Z_Wait_Pos 8784
#define P_Slave5_Target_Z_Start_Pos 8785
#define P_Sepa_First_Clamp_On_Up 8786
#define P_Slave6_Target_X_Wait_Pos 8787
#define P_Anode_1st_T_Belt_To_Align 8788
#define P_Anode_1st_T_Align_To_Belt 8789
#define P_Anode_1st_T_Ready 8790
#define P_Recipe_A_1st_Z_Belt_Down 8791
#define P_Recipe_A_1st_Z_Belt_Up 8792
#define P_Recipe_A_1st_Z_Align_Down 8793
#define P_Recipe_A_1st_Z_Align_Up 8794
#define P_Recipe_A_1st_Z_Ready_Up 8795
#define P_Recipe_A_1st_Z_Ready_Down 8796
#define P_Anode_1st_Z_Belt_Down 8797
#define P_Anode_1st_Z_Belt_Up 8798
#define P_Anode_1st_Z_Align_Down 8799
#define P_Anode_1st_Z_Align_Up 8800
#define P_Anode_1st_Z_Ready_Up 8801
#define P_Anode_1st_Z_Ready_Down 8802
#define P_Anode_2st_T_Align_To_Stack 8803
#define P_Anode_2st_T_Stack_To_Align 8804
#define P_Recipe_A_2st_Z_Align_Up 8805
#define P_Recipe_A_2st_Z_Align_Down 8806
#define P_Recipe_A_2st_Z_Stack_Up 8807
#define P_Recipe_A_2st_Z_Stack_Down 8808
#define P_Recipe_A_2st_Z_Ready_Up 8809
#define P_Recipe_A_2st_Z_Ready_Down 8810
#define P_Anode_2nd_Z_Align_Up 8811
#define P_Anode_2nd_Z_Align_Down 8812
#define P_Anode_2nd_Z_Stack_Up 8813
#define P_Anode_2nd_Z_Stack_Down 8814
#define P_Anode_2nd_Z_Ready_Up 8815
#define P_Anode_2st_Z_Ready_Down 8816
#define P_Anode_Clamp_Y1_On_1st 8817
#define P_Anode_Clamp_Y1_On_2nd 8818
#define P_Anode_Clamp_Y1_On_3rd 8819
#define P_Anode_Clamp_Y1_On_4th 8820
#define P_Anode_Clamp_Y1_Off_1st 8821
#define P_Anode_Clamp_Y1_Off_2nd 8822
#define P_Anode_Clamp_Y1_Off_3rd 8823
#define P_Anode_Clamp_Y2_On_1st 8824
#define P_Anode_Clamp_Y2_On_2nd 8825
#define P_Anode_Clamp_Y2_On_3rd 8826
#define P_Anode_Clamp_Y2_On_4th 8827
#define P_Anode_Clamp_Y2_Off_1st 8828
#define P_Anode_Clamp_Y2_Off_2nd 8829
#define P_Anode_Clamp_Y2_Off_3rd 8830
#define P_Anode_Clamp_Z1_On_1st 8831
#define P_Anode_Clamp_Z1_On_2nd 8832
#define P_Anode_Clamp_Z1_On_3rd 8833
#define P_Anode_Clamp_Z1_On_4th 8834
#define P_Anode_Clamp_Z1_Off_1st 8835
#define P_Anode_Clamp_Z1_Off_2nd 8836
#define P_Anode_Clamp_Z1_Off_3rd 8837
#define P_Anode_Clamp_Z1_Down 8838
#define P_Final_Roll_X_Sepa_1st 8839
#define P_Final_Roll_X_Sepa_2nd 8840
#define P_Final_Roll_X_Sepa_3rd 8841
#define P_Final_Roll_X_Sepa_4th 8842
#define P_Final_Roll_X_Sepa_5th 8843
#define P_Final_Roll_X_Anode_Move 8844
#define P_Final_Roll_X_Discharge 8845
#define P_Final_Roll_X_Cathode_Move 8846
#define P_Final_Roll_X_Run_Wait_Pos 8847
#define P_Final_Roll_Z_Ready_And_Cutting 8848
#define P_Final_Roll_Z_Run_Pos 8849
#define P_Final_Roll_Z_Sepa_3rd 8850
#define P_Final_Roll_Z_Sepa_4th 8851
#define P_Final_Roll_Z_Sepa_5th 8852
#define P_Stack_Table_Z_For_Sepa 8853
#define P_Stack_Table_Z_For_Run 8854
#define P_Stack_Table_Z_For_Init 8855
#define P_Cathode_Clamp_Y1_On_1st 8856
#define P_Cathode_Clamp_Y1_On_2nd 8857
#define P_Cathode_Clamp_Y1_On_3rd 8858
#define P_Cathode_Clamp_Y1_On_4th 8859
#define P_Cathode_Clamp_Y1_Off_1st 8860
#define P_Cathode_Clamp_Y1_Off_2nd 8861
#define P_Cathode_Clamp_Y1_Off_3rd 8862
#define P_Cathode_Clamp_Y2_On_1st 8863
#define P_Cathode_Clamp_Y2_On_2nd 8864
#define P_Cathode_Clamp_Y2_On_3rd 8865
#define P_Cathode_Clamp_Y2_On_4th 8866
#define P_Cathode_Clamp_Y2_Off_1st 8867
#define P_Cathode_Clamp_Y2_Off_2nd 8868
#define P_Cathode_Clamp_Y2_Off_3rd 8869
#define P_Cathode_Clamp_Z1_On_1st 8870
#define P_Cathode_Clamp_Z1_On_2nd 8871
#define P_Cathode_Clamp_Z1_On_3rd 8872
#define P_Cathode_Clamp_Z1_On_4th 8873
#define P_Cathode_Clamp_Z1_Off_1st 8874
#define P_Cathode_Clamp_Z1_Off_2nd 8875
#define P_Cathode_Clamp_Z1_Off_3rd 8876
#define P_Cathode_Clamp_Z1_Down 8877
#define P_Cathode_2st_T_Align_To_Stack 8878
#define P_Cathode_2st_T_Stack_To_Align 8879
#define P_Slave8_Target_X_Align_To_Stack_1st 8880
#define P_Slave8_Target_X_Align_To_Stack_2nd 8881
#define P_Slave8_Target_X_Stack_To_Align_1st 8882
#define P_Slave8_Target_X_Stack_To_Align_2nd 8883
#define P_Slave8_Target_X_Stack_To_Align_3rd 8884
#define P_Cathode_2nd_Z_Align_Up 8885
#define P_Cathode_2nd_Z_Align_Down 8886
#define P_Cathode_2nd_Z_Stack_Up 8887
#define P_Cathode_2nd_Z_Stack_Down 8888
#define P_Cathode_2nd_Z_Ready_Up 8889
#define P_Cathode_2st_Z_Ready_Down 8890
#define P_Recipe_C_2st_Z_Align_Up 8891
#define P_Recipe_C_2st_Z_Align_Down 8892
#define P_Recipe_C_2st_Z_Stack_Up 8893
#define P_Recipe_C_2st_Z_Stack_Down 8894
#define P_Recipe_C_2st_Z_Ready_Up 8895
#define P_Recipe_C_2st_Z_Ready_Down 8896
#define P_Cathode_1st_T_Belt_To_Align 8897
#define P_Cathode_1st_T_Align_To_Belt 8898
#define P_Cathode_1st_T_Ready 8899
#define P_Cathode_1st_Z_Belt_Down 8900
#define P_Cathode_1st_Z_Belt_Up 8901
#define P_Cathode_1st_Z_Align_Down 8902
#define P_Cathode_1st_Z_Align_Up 8903
#define P_Cathode_1st_Z_Ready_Up 8904
#define P_Cathode_1st_Z_Ready_Down 8905
#define P_Recipe_C_1st_Z_Belt_Down 8906
#define P_Recipe_C_1st_Z_Belt_Up 8907
#define P_Recipe_C_1st_Z_Align_Down 8908
#define P_Recipe_C_1st_Z_Align_Up 8909
#define P_Recipe_C_1st_Z_Ready_Up 8910
#define P_Recipe_C_1st_Z_Ready_Down 8911
#define P_1st_Sheet_Paper_X_FWD 8912
#define P_1st_Sheet_Paper_X_BWD 8913
#define P_Cathode_NG_T_NG_To_Align 8914
#define P_Cathode_NG_T_Align_To_NG 8915
#define P_Cathode_NG_Z_NG_Down 8916
#define P_Cathode_NG_Z_NG_Up 8917
#define P_Cathode_NG_Z_Align_Down 8918
#define P_Cathode_NG_Z_Align_Up 8919
#define P_Anode_NG_T_NG_To_Align 8920
#define P_Anode_NG_T_Align_To_NG 8921
#define P_Anode_NG_Z_NG_Down 8922
#define P_Anode_NG_Z_NG_Up 8923
#define P_Anode_NG_Z_Align_Down 8924
#define P_Anode_NG_Z_Align_Up 8925
#define P_1st_ULD_X_Stack 8926
#define P_1st_ULD_X_FWD 8927
#define P_1st_ULD_X_Init_Pos 8928
#define P_1st_ULD_X_Target_BWD 8929
#define P_1st_ULD_Z_Stack 8930
#define P_1st_ULD_Z_Cutting_For_Cell 8931
#define P_1st_ULD_Z_Discharge_For_Cell 8932
#define P_1st_ULD_Z_Target_Down 8933
#define P_1st_ULD_T_Wait 8934
#define P_1st_ULD_T_Avoid_Angle 8935
#define P_1st_ULD_T_90_Angle 8936
#define P_Slave1_Start_X_Belt 8937
#define P_Slave1_Start_X_Align 8938
#define P_Slave1_Start_X_NG 8939
#define P_Slave1_Start_Z_Up 8940
#define P_Slave1_Start_Z_Down_Belt 8941
#define P_Slave1_Start_Z_Down_Align 8942
#define P_Slave1_Start_Z_Down_NG 8943
#define P_Slave3_Start_X_Align 8944
#define P_Slave3_Start_X_Align_To_Stack 8945
#define P_Slave3_Start_X_Stack 8946
#define P_Slave3_Start_X_Stack_To_Align_2 8947
#define P_Slave3_Start_X_Stack_To_Align_3 8948
#define P_Slave3_Start_Z_Align_To_Stack_1 8949
#define P_Slave3_Start_Z_Align_To_Stack_2 8950
#define P_Slave3_Start_Z_Stack_To_Align_1 8951
#define P_Slave3_Start_Z_Stack_To_Align_2 8952
#define P_Slave3_Start_Z_Stack_To_Align_3 8953
#define P_Slave3_Start_Z_Align_Down 8954
#define P_Slave3_Start_Z_Align_Up 8955
#define P_Slave3_Start_Z_Stack_Down 8956
#define P_Slave3_Start_Z_Stack_Up 8957
#define P_Slave4_Start_X_Clamp_On_1st 8958
#define P_Slave4_Start_X_Clamp_On_2nd 8959
#define P_Slave4_Start_X_Clamp_On_3rd 8960
#define P_Slave4_Start_X_Clamp_On_4th 8961
#define P_Slave4_Start_X_Clamp_Off_1st 8962
#define P_Slave4_Start_X_Clamp_Off_2nd 8963
#define P_Slave4_Start_X_Clamp_Off_3rd 8964
#define P_Slave4_Start_Z_Clamp_On_1st 8965
#define P_Slave4_Start_Z_Clamp_On_2nd 8966
#define P_Slave4_Start_Z_Clamp_On_3rd 8967
#define P_Slave4_Start_Z_Clamp_On_4th 8968
#define P_Slave4_Start_Z_Clamp_Off_1st 8969
#define P_Slave4_Start_Z_Clamp_Off_2nd 8970
#define P_Slave4_Start_Z_Clamp_Off_3rd 8971
#define P_Slave4_Start_Z_Down 8972
#define P_Slave5_Start_X_Anode_Move_1st 8973
#define P_Slave5_Start_X_Anode_Move_2nd 8974
#define P_Slave5_Start_X_Cathode_Move_1st 8975
#define P_Slave5_Start_X_Cathode_Move_2nd 8976
#define P_Slave5_Start_X_Sepa_1st 8977
#define P_Slave5_Start_X_Sepa_2nd 8978
#define P_Slave5_Start_X_Sepa_3rd 8979
#define P_Slave5_Start_X_Sepa_4th 8980
#define P_Slave5_Start_X_Sepa_5th 8981
#define P_Slave5_Start_Z_Sepa_1st 8982
#define P_Slave5_Start_Z_Sepa_2nd 8983
#define P_Slave5_Start_Z_Sepa_3rd 8984
#define P_Slave5_Start_Z_Sepa_4th 8985
#define P_Slave5_Start_Z_Sepa_5th 8986
#define P_Slave6_Start_Z_Wait_Pos 8987
#define P_Slave6_Start_Z_For_Sepa_Mode 8988
#define P_Slave7_Start_X_Clamp_On_1st 8989
#define P_Slave7_Start_X_Clamp_On_2nd 8990
#define P_Slave7_Start_X_Clamp_On_3rd 8991
#define P_Slave7_Start_X_Clamp_On_4th 8992
#define P_Slave7_Start_X_Clamp_Off_1st 8993
#define P_Slave7_Start_X_Clamp_Off_2nd 8994
#define P_Slave7_Start_X_Clamp_Off_3rd 8995
#define P_Slave7_Start_Z_Clamp_On_1st 8996
#define P_Slave7_Start_Z_Clamp_On_2nd 8997
#define P_Slave7_Start_Z_Clamp_On_3rd 8998
#define P_Slave7_Start_Z_Clamp_On_4th 8999
#define P_Slave7_Start_Z_Clamp_Off_1st 9000
#define P_Slave7_Start_Z_Clamp_Off_2nd 9001
#define P_Slave7_Start_Z_Clamp_Off_3rd 9002
#define P_Slave7_Start_Z_Down 9003
#define P_Slave8_Start_X_Align 9004
#define P_Slave8_Start_X_Align_To_Stack 9005
#define P_Slave8_Start_X_Stack 9006
#define P_Slave8_Start_X_Stack_To_Align_2 9007
#define P_Slave8_Start_X_Stack_To_Align_3 9008
#define P_Slave8_Start_Z_Align_To_Stack_1 9009
#define P_Slave8_Start_Z_Align_To_Stack_2 9010
#define P_Slave8_Start_Z_Stack_To_Align_1 9011
#define P_Slave8_Start_Z_Stack_To_Align_2 9012
#define P_Slave8_Start_Z_Stack_To_Align_3 9013
#define P_Slave8_Start_Z_Align_Down 9014
#define P_Slave8_Start_Z_Align_Up 9015
#define P_Slave8_Start_Z_Stack_Down 9016
#define P_Slave8_Start_Z_Stack_Up 9017
#define P_Slave10_Start_X_Belt 9018
#define P_Slave10_Start_X_Align 9019
#define P_Slave10_Start_X_NG 9020
#define P_Slave10_Start_Z_Up 9021
#define P_Slave10_Start_Z_Down_Belt 9022
#define P_Slave10_Start_Z_Down_Align 9023
#define P_Slave10_Start_Z_Down_NG 9024
#define P_Slave1_Move_X_Belt_Align 9025
#define P_Slave1_Move_X_Align_Belt 9026
#define P_Slave1_Move_X_Belt_NG 9027
#define P_Slave1_Move_X_NG_Belt 9028
#define P_Slave1_Move_X_Align_NG 9029
#define P_Slave1_Move_Z_Belt_Down 9030
#define P_Slave1_Move_Z_Belt_Up 9031
#define P_Slave1_Move_X_NG_Align 9032
#define P_Slave1_Move_Z_Align_Down 9033
#define P_Slave1_Move_Z_Align_Up 9034
#define P_Slave1_Move_Z_NG_Down 9035
#define P_Slave1_Move_Z_NG_Up 9036
#define P_Slave3_Move_X_Align_To_Stack_1st 9037
#define P_Slave3_Move_X_Align_To_Stack_2nd 9038
#define P_Slave3_Move_X_Stack_To_Align_1st 9039
#define P_Slave3_Move_X_Stack_To_Align_2nd 9040
#define P_Slave3_Move_X_Stack_To_Align_3rd 9041
#define P_Slave3_Move_Z_Align_To_Stack_1st 9042
#define P_Slave3_Move_Z_Align_To_Stack_2nd 9043
#define P_Slave3_Move_Z_Stack_To_Align_1st 9044
#define P_Slave3_Move_Z_Stack_To_Align_2nd 9045
#define P_Slave3_Move_Z_Stack_To_Align_3rd 9046
#define P_Slave3_Move_Z_Align_Up 9047
#define P_Slave3_Move_Z_Align_Down 9048
#define P_Slave3_Move_Z_Stack_Up 9049
#define P_Slave3_Move_Z_Stack_Down 9050
#define P_Slave4_Move_X_Clamp_On_1st 9051
#define P_Slave4_Move_X_Clamp_On_2nd 9052
#define P_Slave4_Move_X_Clamp_On_3rd 9053
#define P_Slave4_Move_X_Clamp_On_4th 9054
#define P_Slave4_Move_X_Clamp_Off_1st 9055
#define P_Slave4_Move_X_Clamp_Off_2nd 9056
#define P_Slave4_Move_X_Clamp_Off_3rd 9057
#define P_Slave4_Move_Z_Clamp_On_1st 9058
#define P_Slave4_Move_Z_Clamp_On_2nd 9059
#define P_Slave4_Move_Z_Clamp_On_3rd 9060
#define P_Slave4_Move_Z_Clamp_On_4th 9061
#define P_Slave4_Move_Z_Clamp_Off_1st 9062
#define P_Slave4_Move_Z_Clamp_Off_2nd 9063
#define P_Slave4_Move_Z_Clamp_Off_3rd 9064
#define P_Slave4_Move_Z_Down 9065
#define P_Slave5_Move_X_Anode_Move_1st 9066
#define P_Slave5_Move_X_Anode_Move_2nd 9067
#define P_Slave5_Move_X_Cathode_Move_1st 9068
#define P_Slave5_Move_X_Cathode_Move_2nd 9069
#define P_Slave5_Move_X_Sepa_1st 9070
#define P_Slave5_Move_X_Sepa_2nd 9071
#define P_Slave5_Move_X_Sepa_3rd 9072
#define P_Slave5_Move_X_Sepa_4th 9073
#define P_Slave5_Move_X_Sepa_5th 9074
#define P_Slave5_Move_Z_Sepa_1st 9075
#define P_Slave5_Move_Z_Sepa_2nd 9076
#define P_Slave5_Move_Z_Sepa_3rd 9077
#define P_Slave5_Move_Z_Sepa_4th 9078
#define P_Slave5_Move_Z_Sepa_5th 9079
#define P_Slave6_Move_Z_For_Sepa_Mode 9080
#define P_Slave6_Move_Z_For_Run_Mode 9081
#define P_Slave7_Move_X_Clamp_On_1st 9082
#define P_Slave7_Move_X_Clamp_On_2nd 9083
#define P_Slave7_Move_X_Clamp_On_3rd 9084
#define P_Slave7_Move_X_Clamp_On_4th 9085
#define P_Slave7_Move_X_Clamp_Off_1st 9086
#define P_Slave7_Move_X_Clamp_Off_2nd 9087
#define P_Slave7_Move_X_Clamp_Off_3rd 9088
#define P_Slave7_Move_Z_Clamp_On_1st 9089
#define P_Slave7_Move_Z_Clamp_On_2nd 9090
#define P_Slave7_Move_Z_Clamp_On_3rd 9091
#define P_Slave7_Move_Z_Clamp_On_4th 9092
#define P_Slave7_Move_Z_Clamp_Off_1st 9093
#define P_Slave7_Move_Z_Clamp_Off_2nd 9094
#define P_Slave7_Move_Z_Clamp_Off_3rd 9095
#define P_Slave7_Move_Z_Down 9096
#define P_Slave8_Move_X_Align_To_Stack_1st 9097
#define P_Slave8_Move_X_Align_To_Stack_2nd 9098
#define P_Slave8_Move_X_Stack_To_Align_1st 9099
#define P_Slave8_Move_X_Stack_To_Align_2nd 9100
#define P_Slave8_Move_X_Stack_To_Align_3rd 9101
#define P_Slave8_Move_Z_Align_To_Stack_1st 9102
#define P_Slave8_Move_Z_Align_To_Stack_2nd 9103
#define P_Slave8_Move_Z_Stack_To_Align_1st 9104
#define P_Slave8_Move_Z_Stack_To_Align_2nd 9105
#define P_Slave8_Move_Z_Stack_To_Align_3rd 9106
#define P_Slave8_Move_Z_Align_Up 9107
#define P_Slave8_Move_Z_Align_Down 9108
#define P_Slave8_Move_Z_Stack_Up 9109
#define P_Slave8_Move_Z_Stack_Down 9110
#define P_Slave10_Move_X_Belt_Align 9111
#define P_Slave10_Move_X_Align_Belt 9112
#define P_Slave10_Move_X_Belt_NG 9113
#define P_Slave10_Move_X_NG_Belt 9114
#define P_Slave10_Move_X_Align_NG 9115
#define P_Slave10_Move_Z_Belt_Down 9116
#define P_Slave10_Move_Z_Belt_Up 9117
#define P_Slave10_Move_X_NG_Align 9118
#define P_Slave10_Move_Z_Align_Down 9119
#define P_Slave10_Move_Z_Align_Up 9120
#define P_Slave10_Move_Z_NG_Down 9121
#define P_Slave10_Move_Z_NG_Up 9122
#define P_Slave1_Offset_X_Align 9123
#define P_Slave1_Offset_X_Belt 9124
#define P_Slave1_Offset_X_NG 9125
#define P_Slave1_Offset_Z_Belt 9126
#define P_Slave1_Offset_Z_Align 9127
#define P_Slave1_Offset_Z_NG 9128
#define P_Slave1_Offset_Z_Up 9129
#define P_Slave3_Offset_X_Stack 9130
#define P_Slave3_Offset_X_Align 9131
#define P_Slave3_Offset_Z_Stack 9132
#define P_Slave3_Offset_Z_Align 9133
#define P_Slave3_Offset_Z_Align_Up 9134
#define P_Slave3_Offset_Z_Align_Down 9135
#define P_Slave3_Offset_Z_Stack_Up 9136
#define P_Slave3_Offset_Z_Stack_Down 9137
#define P_Slave3_Offset_Z_Wait_Pos 9138
#define P_Slave4_Offset_X_Clamp_On 9139
#define P_Slave4_Offset_X_Clamp_Off 9140
#define P_Slave4_Offset_Z_Clamp_On 9141
#define P_Slave4_Offset_Z_Clamp_Off 9142
#define P_Slave5_Offset_X_Anode_Move_1st 9143
#define P_Slave5_Offset_X_Anode_Move_2nd 9144
#define P_Slave5_Offset_X_Cathode_Move_1st 9145
#define P_Slave5_Offset_X_Cathode_Move_2nd 9146
#define P_Slave5_Offset_X_Sepa_1st 9147
#define P_Slave5_Offset_X_Sepa_2nd 9148
#define P_Slave5_Offset_X_Sepa_3rd 9149
#define P_Slave5_Offset_X_Sepa_4th 9150
#define P_Slave5_Offset_X_Sepa_5th 9151
#define P_Slave5_Offset_Z_Sepa_1st 9152
#define P_Slave5_Offset_Z_Sepa_2nd 9153
#define P_Slave5_Offset_Z_Sepa_3rd 9154
#define P_Slave5_Offset_Z_Sepa_4th 9155
#define P_Slave5_Offset_Z_Sepa_5th 9156
#define P_Slave6_Offset_X_For_Sepa_Mode 9157
#define P_Slave6_Offset_Z_Wait_Pos 9158
#define P_Slave7_Offset_X_Clamp_On 9159
#define P_Slave7_Offset_X_Clamp_Off 9160
#define P_Slave7_Offset_Z_Clamp_On 9161
#define P_Slave7_Offset_Z_Clamp_Off 9162
#define P_Slave8_Offset_X_Stack 9163
#define P_Slave8_Offset_X_Align 9164
#define P_Slave8_Offset_Z_Stack 9165
#define P_Slave8_Offset_Z_Align 9166
#define P_Slave8_Offset_Z_Align_Up 9167
#define P_Slave8_Offset_Z_Align_Down 9168
#define P_Slave8_Offset_Z_Stack_Up 9169
#define P_Slave8_Offset_Z_Stack_Down 9170
#define P_Slave8_Offset_Z_Wait_Pos 9171
#define P_Slave10_Offset_X_Align 9172
#define P_Slave10_Offset_X_Belt 9173
#define P_Slave10_Offset_X_NG 9174
#define P_Slave10_Offset_Z_Belt 9175
#define P_Slave10_Offset_Z_Align 9176
#define P_Slave10_Offset_Z_NG 9177
#define P_Slave10_Offset_Z_Up 9178
#define P_Slave1_Target_Z_CV_Blower_On_Pos 9179
#define P_Slave1_Target_Z_CV_Blower_Off_Pos 9180
#define P_Slave10_Target_Z_CV_Blower_On_Pos 9181
#define P_Slave10_Target_Z_CV_Blower_Off_Pos 9182
#define P_Anode_CV_Blower_On_Flag 9183
#define P_Anode_CV_Blower_Off_Flag 9184
#define P_Cathode_CV_Blower_On_Flag 9185
#define P_Cathode_CV_Blower_Off_Flag 9186
#define P_Select_RingBlow_Off_Use 9187
#define P_2nd_PNP_Stack_Down_Pos 9188
#define P_2nd_PNP_Stack_Up_Pos 9189
#define P_Anode_Clamp_Down_MNTR 9190
#define P_Cathode_Clamp_Down_MNTR 9191
#define P_Clamp_1st_Vector_Y 9192
#define P_Clamp_1st_Vector_Z 9193
#define P_Clamp_1st_Vector_Vel 9194
#define P_Clamp_2nd_Vector_Y 9195
#define P_Clamp_2nd_Vector_Z 9196
#define P_Clamp_2nd_Vector_Vel 9197
#define P_Clamp_2nd_TM_Time 9198
#define P_FR_Ta 9199
#define P_FR_Ts 9200
#define P_FR_Tm 9201
#define P_Master_Motion_Heartbit_Flag 9202
#define P_Master_Heartbit_Trigger 9203
#define P_Parity_Heartbit_Bit 9204
#define P_Master_Heartbit_Move 9205
#define P_Force_Stop_Flag 9206
#define P_Execute_DryRun_Stop_Timer 9207
#define P_DryRun_Timer 9208
#define P_Dryrun_Operating_Time 9209
#define P_Anode_Align_Vac_Err_On 9210
#define P_Cathode_Align_Vac_Err_On 9211
#define P_Anode_1ST_TR_Vac_Err_On 9212
#define P_Anode_2ND_TR_Vac_Err_On 9213
#define P_Cathode_1ST_TR_Vac_Err_On 9214
#define P_Cathode_2ND_TR_Vac_Err_On 9215
#define P_MNTR_PLC0_Task_Time 9216
#define P_MNTR_PLC0_Task_Max_Time 9218
#define P_MNTR_PLC1_Task_Time 9219
#define P_MNTR_PLC1_Task_Max_Time 9221
#define P_MNTR_PLC2_Task_Time 9222
#define P_MNTR_PLC2_Task_Max_Time 9224
#define P_MNTR_PLC3_Task_Time 9225
#define P_MNTR_PLC3_Task_Max_Time 9227
#define P_MNTR_PLC4_Task_Time 9228
#define P_MNTR_PLC4_Task_Max_Time 9230
#define P_MNTR_PLC5_Task_Time 9231
#define P_MNTR_PLC5_Task_Max_Time 9233
#define P_MNTR_PLC6_Task_Time 9234
#define P_MNTR_PLC6_Task_Max_Time 9236
#define P_MNTR_PLC7_Task_Time 9237
#define P_MNTR_PLC7_Task_Max_Time 9239
#define P_MNTR_PLC8_Task_Time 9240
#define P_MNTR_PLC8_Task_Max_Time 9242
#define P_MNTR_PLC9_Task_Time 9243
#define P_MNTR_PLC9_Task_Max_Time 9245
#define P_MNTR_PLC10_Task_Time 9246
#define P_MNTR_PLC10_Task_Max_Time 9248
#define P_MNTR_PLC11_Task_Time 9249
#define P_MNTR_PLC11_Task_Max_Time 9251
#define P_MNTR_PLC12_Task_Time 9252
#define P_MNTR_PLC12_Task_Max_Time 9254
#define P_MNTR_PLC13_Task_Time 9255
#define P_MNTR_PLC13_Task_Max_Time 9257
#define P_MNTR_PLC14_Task_Time 9258
#define P_MNTR_PLC14_Task_Max_Time 9260
#define P_MNTR_PLC15_Task_Time 9261
#define P_MNTR_PLC15_Task_Max_Time 9263
#define P_MNTR_PLC16_Task_Time 9264
#define P_MNTR_PLC16_Task_Max_Time 9266
#define P_MNTR_PLC17_Task_Time 9267
#define P_MNTR_PLC17_Task_Max_Time 9269
#define P_MNTR_PLC18_Task_Time 9270
#define P_MNTR_PLC18_Task_Max_Time 9272
#define P_MNTR_PLC19_Task_Time 9273
#define P_MNTR_PLC19_Task_Max_Time 9275
#define P_MNTR_PLC20_Task_Time 9276
#define P_MNTR_PLC20_Task_Max_Time 9278
#define P_MNTR_PLC21_Task_Time 9279
#define P_MNTR_PLC21_Task_Max_Time 9281
#define P_MNTR_PLC22_Task_Time 9282
#define P_MNTR_PLC22_Task_Max_Time 9284
#define P_MNTR_PLC23_Task_Time 9285
#define P_MNTR_PLC23_Task_Max_Time 9287
#define P_MNTR_PLC24_Task_Time 9288
#define P_MNTR_PLC24_Task_Max_Time 9290
#define P_MNTR_PLC25_Task_Time 9291
#define P_MNTR_PLC25_Task_Max_Time 9293
#define P_MNTR_PLC26_Task_Time 9294
#define P_MNTR_PLC26_Task_Max_Time 9296
#define P_MNTR_PLC27_Task_Time 9297
#define P_MNTR_PLC27_Task_Max_Time 9299
#define P_MNTR_PLC28_Task_Time 9300
#define P_MNTR_PLC28_Task_Max_Time 9302
#define P_MNTR_PLC29_Task_Time 9303
#define P_MNTR_PLC29_Task_Max_Time 9305
#define P_MNTR_PLC30_Task_Time 9306
#define P_MNTR_PLC30_Task_Max_Time 9308
#define P_Coord_Shutdown_Status_log 9309
#define P_In_Pos_Trg 9310
#define P_Position_Calc_Status 9311
#define P_Vision_Result 9312
#define P_Vision_Result_Get_First_Cycle 9316
#define P_Init_Result 9320
#define P_PNP_Pos 9326
#define P_Execute_Manage_Mode 9327
#define P_Align_NG_Tack_Flag 9328
#define P_2th_Ng_Front_Vision_Pos 9329
#define P_Anode_Align_OK_Flag 9330
#define P_Anode_Align_NG_Flag 9331
#define P_Cathode_Align_OK_Flag 9332
#define P_Cathode_Align_NG_Flag 9333
#define P_Stack_Table_OK_Flag 9334
#define P_Anode_Retry_OK_Flag 9335
#define P_Anode_Retry_NG_Flag 9336
#define P_Cathode_Retry_OK_Flag 9337
#define P_Cathode_Retry_NG_Flag 9338
#define P_Func_Anode_2TR_Avoid_X_Value 9339
#define P_Func_Cathode_2TR_Avoid_X_Value 9340
#define P_Anode_Surf_Insp_Trigger 9341
#define P_Cathode_Surf_Insp_Trigger 9342
#define P_CMD_Cathode_Vision_Tigger 9343
#define P_CMD_Anode_Vision_Tigger 9344
#define P_CMD_Stack_Table_Vision_Trigger 9345
#define P_CMD_Cathode_Empty_Table_Vision 9346
#define P_CMD_Anode_Empty_Table_Vision 9347
#define P_CMD_Cathode_Existence_Vision 9348
#define P_CMD_Anode_Existence_Vision 9349
#define P_Align_Manager_Error_Cnt 9350
#define P_Surf_Manager_Error_Cnt 9351
#define P_Retry_Manager_Error_Cnt 9352
#define P_Stack_Manager_Error_Cnt 9353
#define P_Existence_Manager_Error_Cnt 9354
#define P_Where_To_Occur_Error_Retry_Status 9355
#define P_Which_Retry_Insp_Type 9356
#define P_Where_To_Occur_Error_Align_Status 9357
#define P_Which_Align_Insp_Type 9358
#define P_Where_To_Occur_Error_Surf_Status 9359
#define P_Which_Surf_Insp_Type 9360
#define P_Where_To_Occur_Error_Existence_Status 9361
#define P_Which_Existence_Insp_Type 9362
#define P_Where_To_Occur_Error_Stack_Status 9363
#define P_Vision_Clamping_Flag 9364
#define P_Exist_Insp_Total_Time 9365
#define P_Exist_Insp_Trg_Time 9366
#define P_Stack_Insp_Total_Time 9367
#define P_Stack_Trg_Time 9368
#define P_Surf_Insp_Total_Time 9369
#define P_Retry_Insp_Total_Time 9370
#define P_Surf_TimeOut_Cnt 9371
#define P_Align_TimeOut_Cnt 9372
#define P_Retry_TimeOut_Cnt 9373
#define P_Stack_TimeOut_Cnt 9374
#define P_Align_Insp_Total_Time 9375
#define P_Align_Trg_Time 9376
#define P_Aligning_Time 9377
#define P_Cathode_Empty_Table_Vision_Flag 9378
#define P_Anode_Empty_Table_Vision_Flag 9379
#define M_Cathode_Belt_MNTR 8351
#define M_Cathode_1st_MNTR 8352
#define M_Cathode_Align_MNTR 8353
#define M_Cathode_2nd_MNTR 8354
#define M_Anode_Belt_MNTR 8355
#define M_Anode_1st_MNTR 8356
#define M_Anode_Align_MNTR 8357
#define M_Anode_2nd_MNTR 8358
#define P_Selected_Surf_Insp_Type 9380
#define P_Selected_Align_Insp_Type 9381
#define P_Selected_Retry_Insp_Type 9382
#define P_Selected_Exist_Insp_Type 9383
#define P_VISION_RECIPE_PLC4_Surface_TrgOff 9384
#define P_VISION_RECIPE_PLC4_Surface_Ins_Time 9385
#define P_CMD_Cathode_Vision_Retry 9386
#define P_CMD_Anode_Vision_Retry 9387
#define P_Prev_Align_Manager_Status 9388
#define P_Prev_Surf_Manager_Status 9389
#define P_Prev_Exist_Manager_Status 9390
#define P_Prev_Selected_Align_Type 9391
#define P_Prev_Selected_Surf_Type 9392
#define P_Prev_Selected_Exist_Type 9393
#define P_Status_Align_Vision_Manager 9394
#define P_Status_Surface_Vision_Manager 9395
#define P_Status_Sheet_Existence_Vision_Manager 9396
#define P_Status_Stack_Vision_Manager 9397
#define P_Status_Retry_Vision_Manager 9398
#define P_Vision_All_Status_Manager_Init_Flag 9399
#define P_Cycle_Stop_Command 9400
#define P_Surface_Inspection_Complete_Error 9401
#define P_Switching_From_Cathode_To_Anode_Flag 9402
#define P_Switching_From_Anode_To_Cathode_Flag 9403
#define P_Switching_Mode_Complete_Flag 9404
#define P_Surf_Cathode_Error_Count 9405
#define P_Surf_Anode_Error_Count 9406
#define P_First_Anode_Sheet_Supply_Flag 9407
#define P_First_Cathode_Sheet_Supply_Flag 9408
#define P_Set_Cathode_Align_Pos_Zero 9409
#define P_Set_Anode_Align_Pos_Zero 9410
#define P_Cathode_Cur_Mode 9411
#define P_Anode_Cur_Mode 9412
#define M_X_Vision_Stack_Align_Ok 4228
#define M_X_Vision_Stack_Align_Ng 4227
#define M_Y_PLC_EPCAlignMode_Complete_Return 5195
#define M_Y_Vision_Stack_EPC_Align_Vision_Trigger 5234
#define P_AN_to_CA_DR_Trig 9413
#define P_CA_to_AN_DR_Trig 9414
#define P_Tension_FF 9415
#define P_Sepa_CompDac_Value 9417
#define P_FR_Move_Command 9418
#define P_FF_Enable 9419
#define P_Anode_Run_FR_Move_Check_AI 9420
#define P_Cathode_Run_FR_Move_Check_AI 9421
#define P_FR_Move_Check_AI_OffSet 9422
#define P_FR_AI_Value 9423
#define P_Aver_FR_AI_Value 9428
#define P_Process_Function_Command 9429
#define P_HOLD_Existence_Insp_State_Machine 9430
#define P_Execute_IsEnable_State_Machine 9431
#define P_EXECUTE_FUNC_Ready_STEP 9432
#define P_Execute_First_Sepa_Ontable_State_Machine 9433
#define P_Execute_Prod_Manage_State_Machine 9434
#define P_Execute_Enqueue_State_Machine 9435
#define P_STOP_Initial_Process_STEP 9436
#define P_STOP_Cylce_Stop_STEP 9437
#define P_Stop_CycleStop_Position 9438
#define P_Upcount_NextStep 9439
#define P_SUSPEND_FUNC_JR_Discharge_STEP 9440
#define P_SUSPEND_FUNC_ARC_STEP 9441
#define P_Suspend_ARC_Complete_Flag 9442
#define P_EXECUTE_FUNC_Debug_On_Sepa_STEP 9443
#define P_QueueCommand_Occurs 9444
#define P_EXECUTE_STEP 9445
#define P_SUSPEND_STEP 9446
#define P_HOLD_STEP 9447
#define P_STOP_STEP 9448
#define P_EXECUTE_Error_STEP 9449
#define P_SUSPEND_Error_STEP 9450
#define P_HOLD_Error_STEP 9451
#define P_STOP_Error_STEP 9452
#define P_Queue_Enqueue_Command 9453
#define P_Queue_Enqueue_return 9454
#define P_Queue_Dequeue_Command 9455
#define P_Queue_Dequeue_return 9456
#define P_Queue_Peek_Command 9457
#define P_Dequeue_Log 9458
#define P_Dummy_Dequeue 9478
#define P_Queue_Command_Status 9479
#define P_Queue_Process_Command 9480
#define P_Queue_Process_Status 9481
#define P_Coord_Test 9482
#define P_Coord_Test3 9483
#define P_Coord_Test2 9484
#define P_Coord_Motion_Prog_Down_Entering_Bit 9485
#define P_PMAC_Coord_Status_Bit 9486
#define P_Coord_Down_Check_Bit 9487
#define P_PMAC_Coord_Down_Inspection_Flag 9488
#define P_PMAC_Coord_Down_Num 9489
#define P_PMAC_Coord_Error_Status 9490
#define P_Motor_Current_Pos 9491
#define P_Axis_Scale_Value 9541
#define P_Except_Return_Array 9591
#define P_Hold_Memory 9691
#define P_Suspend_Memory 9696
#define P_Execute_Memory 9701
#define P_Stop_Memory 9706
#define P_PLC01_Process_Function_Enter_Flag 9711
#define P_PLC01_SubMotion_Active 9712
#define P_PLC01_SlaveMotion_Active 9713
#define P_EXECUTE_Isenable_MNTR 9714
#define P_EXECUTE_IsEnable_Firt_Stacking_Flag 9715
#define P_PLC01_Execute_Retry_Sepa_Mode_Count 9716
#define P_SUSPEND_MNTR 9717
#define P_SUSPEND_MNTR_2 9718
#define P_Execute_Last_Run_Flag 9719
#define P_Suspend_ARC_Request_Flag 9720
#define P_Hold_Queue_Exist_Insp_MNTR 9721
#define P_CirQueue_Status_Value 9722
#define P_Debug_CirQueue_Status 9723
#define P_Front_Index 9724
#define P_Rear_Index 9725
#define P_Index_Max 9726
#define P_CircularQueue_Command_array 9727
#define P_CirQueue_Length 9738
#define P_Queue_Full 9739
#define P_Queue_Empty 9740
#define P_Queue_PeekEmpty 9741
#define P_Self_items 9742
#define P_Hold_Pause_Need_Flag 9743
#define P_Pause_Ready_Flag 9744
#define P_Pause_Running_Flag 9745
#define P_Resume_Ready_Flag 9746
#define P_Resume_Start_Flag 9747
#define P_Hold_Resume_Need_Flag 9748
#define M_Y_A_Site_Heart_Bit 5014
#define M_X_PLC_Anode_Sheet_Ready2 4010
#define M_X_PLC_Cathode_Sheet_Ready2 4011
#define M_X_B_Site_Heart_Bit 4014
#define P_Stack_Heart_Bit_Timer 9749
#define P_Stack_Heart_Bit_Calc 9750
#define P_Stack_Heart_Bit_Sync_State_Machine 9751
#define P_Pause_Anode_MNTR_Min_Trigger 9752
#define P_Pause_Anode_MNTR_Max_Trigger 9753
#define P_Pause_Cathode_MNTR_Min_Trigger 9754
#define P_Pause_Cathode_MNTR_Max_Trigger 9755
#define P_Pause_Protect_Variable 9756
#define P_Resume_Protect_Variable 9757
#define P_Sepa_Mode_Opposite_Resume_Free 9758
#define P_Sepa_To_Normal_Mode_Sync_Flag 9759
#define P_Sepa_To_Normal_Mode_Sync_Err_Avoid 9760
#define P_Recipe_1st_MotorNo 9761
#define P_Recipe_2nd_MotorNo 9811
#define P_Recipe_3rd_MotorNo 9861
#define P_Recipe_4th_MotorNo 9911
#define P_Recipe_5th_MotorNo 9961
#define P_Recipe_6th_MotorNo 10011
#define P_X_Axis_Num 10061
#define P_Y_Axis_Num 10062
#define P_Z_Axis_Num 10063
#define P_ZZ_Axis_Num 10064
#define P_X_Unit 10065
#define P_Y_Unit 10066
#define P_Z_Unit 10067
#define P_ZZ_Unit 10068
#define P_Pos_Memory_Bit_Save 10069
#define P_Total_Unit_Bit 10070
#define P_Total_Unit_Pos 10071
#define P_Anode_1st_Unit_Status 10072
#define P_Anode_2nd_Unit_Status 10073
#define P_Anode_CLP_Unit_Status 10074
#define P_FinalRoll_Unit_Status 10075
#define P_StackTable_Unit_Status 10076
#define P_Cathode_CLP_Unit_Status 10077
#define P_Cathode_2nd_Unit_Status 10078
#define P_Cathode_1st_Unit_Status 10079
#define P_1st_Unloader_Unit_Status 10080
#define P_Cathode_NG_PNP_Status 10081
#define P_Anode_NG_PNP_Status 10082
#define P_Unit_integrated_Status 10083
#define P_Unit_Status_Update_Flag 10084
#define P_Memory_Tower_Search_Flag 10085
#define P_MemTow_integrated_return 10086
#define P_Error_STMS_Memory_Tower_Status 10087
#define P_STMS_Memory_Tower_Status 10088
#define P_Recipe_M01_POS 10089
#define P_Recipe_M02_POS 10100
#define P_Recipe_M03_POS 10111
#define P_Recipe_M04_POS 10122
#define P_Recipe_M05_POS 10133
#define P_Recipe_M06_POS 10144
#define P_Recipe_M07_POS 10155
#define P_Recipe_M08_POS 10166
#define P_Recipe_M09_POS 10177
#define P_Recipe_M10_POS 10188
#define P_Recipe_M11_POS 10199
#define P_Recipe_M12_POS 10210
#define P_Recipe_M13_POS 10221
#define P_Recipe_M14_POS 10232
#define P_Recipe_M15_POS 10243
#define P_Recipe_M16_POS 10254
#define P_Recipe_M17_POS 10265
#define P_Recipe_M18_POS 10276
#define P_Recipe_M19_POS 10287
#define P_Recipe_M20_POS 10298
#define P_Recipe_M21_POS 10309
#define P_Recipe_M22_POS 10320
#define P_Recipe_M23_POS 10331
#define P_Recipe_M24_POS 10342
#define P_Recipe_M25_POS 10353
#define P_Recipe_M26_POS 10364
#define P_Recipe_M27_POS 10375
#define P_Recipe_M28_POS 10386
#define P_Recipe_M29_POS 10397
#define P_Recipe_M30_POS 10408
#define P_Recipe_M31_POS 10419
#define P_Recipe_M32_POS 10430
#define P_Recipe_M33_POS 10441
#define P_Recipe_M34_POS 10452
#define P_Recipe_M35_POS 10463
#define P_Recipe_M36_POS 10474
#define P_Recipe_M37_POS 10485
#define P_Recipe_M38_POS 10496
#define P_Recipe_M39_POS 10507
#define P_Recipe_M40_POS 10518
#define P_Recipe_M41_POS 10529
#define P_Recipe_M42_POS 10540
#define P_Recipe_M43_POS 10551
#define P_Recipe_M44_POS 10562
#define P_Recipe_M45_POS 10573
#define P_Recipe_M46_POS 10584
#define P_Recipe_M47_POS 10595
#define P_Recipe_M48_POS 10606
#define P_Recipe_M49_POS 10617
#define P_Recipe_M50_POS 10628
#define P_Memory_Tower_X_Err_Flag 10639
#define P_Memory_Tower_Y_Err_Flag 10640
#define P_Memory_Tower_Z_Err_Flag 10641
#define P_Memory_Tower_ZZ_Err_Flag 10642
#define P_CA_Clamp_Cell_Down_Pos 10643
#define P_AN_Clamp_Cell_Down_Pos 10644
#define P_Error_X_Axis_Packml 10645
#define P_Error_X_Axis_Dequeue 10651
#define P_Error_X_Axis_Num 10657
#define P_Memory_Tower_Err_Pos_X_Save 10663
#define P_Error_Y_Axis_Packml 10669
#define P_Error_Y_Axis_Dequeue 10675
#define P_Error_Y_Axis_Num 10681
#define P_Memory_Tower_Err_Pos_Y_Save 10687
#define P_Error_Z_Axis_Packml 10693
#define P_Error_Z_Axis_Dequeue 10699
#define P_Error_Z_Axis_Num 10705
#define P_Memory_Tower_Err_Pos_Z_Save 10711
#define P_Error_ZZ_Axis_Packml 10717
#define P_Error_ZZ_Axis_Dequeue 10723
#define P_Error_ZZ_Axis_Num 10729
#define P_Memory_Tower_Err_Pos_ZZ_Save 10735
#define P_PNP_Abort_Use_Bit 10741
#define P_PNP_Abort_Use_Total_Bit 10742
#define P_C_1st_PNP_FWD_Abort_Use_Bit 10743
#define P_C_1st_PNP_BWD_Abort_Use_Bit 10744
#define P_C_2nd_PNP_FWD_Abort_Use_Bit 10745
#define P_C_2nd_PNP_BWD_Abort_Use_Bit 10746
#define P_A_1st_PNP_FWD_Abort_Use_Bit 10747
#define P_A_1st_PNP_BWD_Abort_Use_Bit 10748
#define P_A_2nd_PNP_FWD_Abort_Use_Bit 10749
#define P_A_2nd_PNP_BWD_Abort_Use_Bit 10750
#define P_Single_Motor_Control_Bit 10751
#define P_C_1st_PNP_FWD_Abort_Calc_Bit 10752
#define P_C_1st_PNP_BWD_Abort_Calc_Bit 10753
#define P_C_2nd_PNP_FWD_Abort_Calc_Bit 10754
#define P_C_2nd_PNP_BWD_Abort_Calc_Bit 10755
#define P_A_1st_PNP_FWD_Abort_Calc_Bit 10756
#define P_A_1st_PNP_BWD_Abort_Calc_Bit 10757
#define P_A_2nd_PNP_FWD_Abort_Calc_Bit 10758
#define P_A_2nd_PNP_BWD_Abort_Calc_Bit 10759
#define P_C_1st_PNP_FWD_Cur_Pos 10760
#define P_C_1st_PNP_FWD_Cur_Vel 10761
#define P_C_1st_PNP_BWD_Cur_Pos 10762
#define P_C_1st_PNP_BWD_Cur_Vel 10763
#define P_C_2nd_PNP_FWD_Cur_Pos 10764
#define P_C_2nd_PNP_FWD_Cur_Vel 10765
#define P_C_2nd_PNP_BWD_Cur_Pos 10766
#define P_C_2nd_PNP_BWD_Cur_Vel 10767
#define P_A_1st_PNP_FWD_Cur_Pos 10768
#define P_A_1st_PNP_FWD_Cur_Vel 10769
#define P_A_1st_PNP_BWD_Cur_Pos 10770
#define P_A_1st_PNP_BWD_Cur_Vel 10771
#define P_A_2nd_PNP_FWD_Cur_Pos 10772
#define P_A_2nd_PNP_FWD_Cur_Vel 10773
#define P_A_2nd_PNP_BWD_Cur_Pos 10774
#define P_A_2nd_PNP_BWD_Cur_Vel 10775
#define P_C_1st_PNP_FWD_Limit_Pos 10776
#define P_C_1st_PNP_BWD_Limit_Pos 10777
#define P_C_2nd_PNP_FWD_Limit_Pos 10778
#define P_C_2nd_PNP_BWD_Limit_Pos 10779
#define P_A_1st_PNP_FWD_Limit_Pos 10780
#define P_A_1st_PNP_BWD_Limit_Pos 10781
#define P_A_2nd_PNP_FWD_Limit_Pos 10782
#define P_A_2nd_PNP_BWD_Limit_Pos 10783
#define P_C_1st_PNP_FWD_Max_Limit_Pos 10784
#define P_C_1st_PNP_BWD_Max_Limit_Pos 10785
#define P_C_2nd_PNP_FWD_Max_Limit_Pos 10786
#define P_C_2nd_PNP_BWD_Max_Limit_Pos 10787
#define P_A_1st_PNP_FWD_Max_Limit_Pos 10788
#define P_A_1st_PNP_BWD_Max_Limit_Pos 10789
#define P_A_2nd_PNP_FWD_Max_Limit_Pos 10790
#define P_A_2nd_PNP_BWD_Max_Limit_Pos 10791
#define P_C_1st_PNP_FWD_Remain_Stroke 10792
#define P_C_1st_PNP_BWD_Remain_Stroke 10793
#define P_C_2nd_PNP_FWD_Remain_Stroke 10794
#define P_C_2nd_PNP_BWD_Remain_Stroke 10795
#define P_A_1st_PNP_FWD_Remain_Stroke 10796
#define P_A_1st_PNP_BWD_Remain_Stroke 10797
#define P_A_2nd_PNP_FWD_Remain_Stroke 10798
#define P_A_2nd_PNP_BWD_Remain_Stroke 10799
#define P_C_1st_PNP_FWD_Stroke_Time 10800
#define P_C_1st_PNP_BWD_Stroke_Time 10801
#define P_C_2nd_PNP_FWD_Stroke_Time 10802
#define P_C_2nd_PNP_BWD_Stroke_Time 10803
#define P_A_1st_PNP_FWD_Stroke_Time 10804
#define P_A_1st_PNP_BWD_Stroke_Time 10805
#define P_A_2nd_PNP_FWD_Stroke_Time 10806
#define P_A_2nd_PNP_BWD_Stroke_Time 10807
#define P_C_1st_PNP_FWD_Max_Speed 10808
#define P_C_1st_PNP_BWD_Max_Speed 10809
#define P_C_2nd_PNP_FWD_Max_Speed 10810
#define P_C_2nd_PNP_BWD_Max_Speed 10811
#define P_A_1st_PNP_FWD_Max_Speed 10812
#define P_A_1st_PNP_BWD_Max_Speed 10813
#define P_A_2nd_PNP_FWD_Max_Speed 10814
#define P_A_2nd_PNP_BWD_Max_Speed 10815
#define P_C_1st_PNP_FWD_ACC_Dis 10816
#define P_C_1st_PNP_BWD_ACC_Dis 10817
#define P_C_2nd_PNP_FWD_ACC_Dis 10818
#define P_C_2nd_PNP_BWD_ACC_Dis 10819
#define P_A_1st_PNP_FWD_ACC_Dis 10820
#define P_A_1st_PNP_BWD_ACC_Dis 10821
#define P_A_2nd_PNP_FWD_ACC_Dis 10822
#define P_A_2nd_PNP_BWD_ACC_Dis 10823
#define P_C_1st_PNP_FWD_AbortTa 10824
#define P_C_1st_PNP_FWD_AbortTs 10825
#define P_C_1st_PNP_BWD_AbortTa 10826
#define P_C_1st_PNP_BWD_AbortTs 10827
#define P_C_2nd_PNP_FWD_AbortTa 10828
#define P_C_2nd_PNP_FWD_AbortTs 10829
#define P_C_2nd_PNP_BWD_AbortTa 10830
#define P_C_2nd_PNP_BWD_AbortTs 10831
#define P_A_1st_PNP_FWD_AbortTa 10832
#define P_A_1st_PNP_FWD_AbortTs 10833
#define P_A_1st_PNP_BWD_AbortTa 10834
#define P_A_1st_PNP_BWD_AbortTs 10835
#define P_A_2nd_PNP_FWD_AbortTa 10836
#define P_A_2nd_PNP_FWD_AbortTs 10837
#define P_A_2nd_PNP_BWD_AbortTa 10838
#define P_A_2nd_PNP_BWD_AbortTs 10839
#define P_C_1st_PNP_FWD_Abort_Dec_Offset 10840
#define P_C_1st_PNP_BWD_Abort_Dec_Offset 10841
#define P_C_2nd_PNP_FWD_Abort_Dec_Offset 10842
#define P_C_2nd_PNP_BWD_Abort_Dec_Offset 10843
#define P_A_1st_PNP_FWD_Abort_Dec_Offset 10844
#define P_A_1st_PNP_BWD_Abort_Dec_Offset 10845
#define P_A_2nd_PNP_FWD_Abort_Dec_Offset 10846
#define P_A_2nd_PNP_BWD_Abort_Dec_Offset 10847
#define P_1st_PNP_FWD_Abort_Offset 10848
#define P_1st_PNP_BWD_Abort_Offset 10938
#define P_2nd_PNP_FWD_Abort_Offset 11028
#define P_2nd_PNP_BWD_Abort_Offset 11118
#define P_Abort_Init_Value 11208
#define P_C_1st_PNP_FWD_AbortTa_Buffer 11209
#define P_C_1st_PNP_FWD_AbortTs_Buffer 11210
#define P_C_1st_PNP_BWD_AbortTa_Buffer 11211
#define P_C_1st_PNP_BWD_AbortTs_Buffer 11212
#define P_C_2nd_PNP_FWD_AbortTa_Buffer 11213
#define P_C_2nd_PNP_FWD_AbortTs_Buffer 11214
#define P_C_2nd_PNP_BWD_AbortTa_Buffer 11215
#define P_C_2nd_PNP_BWD_AbortTs_Buffer 11216
#define P_A_1st_PNP_FWD_AbortTa_Buffer 11217
#define P_A_1st_PNP_FWD_AbortTs_Buffer 11218
#define P_A_1st_PNP_BWD_AbortTa_Buffer 11219
#define P_A_1st_PNP_BWD_AbortTs_Buffer 11220
#define P_A_2nd_PNP_FWD_AbortTa_Buffer 11221
#define P_A_2nd_PNP_FWD_AbortTs_Buffer 11222
#define P_A_2nd_PNP_BWD_AbortTa_Buffer 11223
#define P_A_2nd_PNP_BWD_AbortTs_Buffer 11224
#define P_C_1st_PNP_FWD_Restore_Bit 11225
#define P_C_1st_PNP_BWD_Restore_Bit 11226
#define P_C_2nd_PNP_FWD_Restore_Bit 11227
#define P_C_2nd_PNP_BWD_Restore_Bit 11228
#define P_A_1st_PNP_FWD_Restore_Bit 11229
#define P_A_1st_PNP_BWD_Restore_Bit 11230
#define P_A_2nd_PNP_FWD_Restore_Bit 11231
#define P_A_2nd_PNP_BWD_Restore_Bit 11232
#define P_Align_Inspection_Time 11233
#define P_Front_Inspection_Time 11234
#define P_Stack_Inspection_Time 11235
#define P_Existence_Inspection_Time 11236
#define P_EmptyTable_Inspection_Time 11237
#define P_FirstSepa_Inspection_Time 11238
#define P_Vision_Anode_Sepa_Mode_Stack_Command 11239
#define P_Vision_Cathode_Sepa_Mode_Stack_Command 11240
#define P_Cathode_Sepa_Mode_Timer 11241
#define P_Anode_Sepa_Mode_Timer 11242
#define P_Vision_Pass 11243
#define P_FirstSepa_Ret 11244
#define P_Vision_Align_Command 11245
#define P_Vision_Surface_Command 11246
#define P_Vision_Stack_Command 11247
#define P_Vision_Existence_Command 11248
#define P_Vision_EmptyTable_Command 11249
#define P_Vision_FirstSepa_Command 11250
#define P_Selected_Align_Inspection_Unit 11251
#define P_Selected_Surface_Inspection_Unit 11252
#define P_Selected_Stack_Inspection_Unit 11253
#define P_Selected_Existence_Inspection_Unit 11254
#define P_Selected_EmptyTable_Inspection_Unit 11255
#define P_Set_Cathode_Align_Zero_Pos 11256
#define P_Set_Anode_Align_Zero_Pos 11257
#define P_Vision_Align_State_Machine 11258
#define P_Vision_Surface_State_Machine 11259
#define P_Vision_Stack_State_Machine 11260
#define P_Vision_Existence_State_Machine 11261
#define P_Vision_EmptyTable_State_Machine 11262
#define P_Vision_FirstSepa_State_Machine 11263
#define P_Vision_Align_Status 11264
#define P_Vision_Surface_Status 11265
#define P_Vision_Stack_Status 11266
#define P_Vision_Existence_Status 11267
#define P_Vision_EmptyTable_Status 11268
#define P_Vision_FirstSepa_Status 11269
#define P_Align_Zero_Move_Start_Flag 11270
#define P_Cathode_Align_Table_Move 11272
#define P_Anode_Align_Table_Move 11273
#define P_Vision_Anode_Cell_Existence 11274
#define P_Vision_Cathode_Cell_Existence 11275
#define P_Align_Sheet_CHK 11276
#define P_Anode_NG_Code 11277
#define P_Cathode_NG_Code 11278
#define P_Stack_NG_Code 11279
#define P_Anode_Align_Stage_X_mm 5000
#define P_Anode_Align_Stage_Y_mm 5001
#define P_Anode_Align_Stage_T_mm 5002
#define P_Cathode_Align_Stage_X_mm 5003
#define P_Cathode_Align_Stage_Y_mm 5004
#define P_Cathode_Align_Stage_T_mm 5005
#define P_Vision_AutoCal_Mode 5010
#define P_Vision_AutoCal_Command 5011
#define P_Vision_AutoCal_Status 5012
#define P_PMAC_AutoCal_Alarm 5013
#define P_PMAC_AutoCal_Mode 5014
#define P_PMAC_AutoCal_Status 5015
#define P_Align_AutoCal_X_POS 5016
#define P_Align_AutoCal_Y_POS 5017
#define P_Align_AutoCal_T_POS 5018
#define P_CMD_Align_Complete 5019
#define P_Anode_Align_Data_Delete_Set_Flag 5020
#define P_Anode_2nd_PNP_Data_Delete_Set_Flag 5021
#define P_Cathode_Align_Data_Delete_Set_Flag 5022
#define P_Cathode_2nd_PNP_Data_Delete_Set_Flag 5023
#define P_Anode_Data_Delete_Vision_To_PMAC_Get_Flag 5024
#define P_Cathode_Data_Delete_Vision_To_PMAC_Get_Flag 5025
#define P_VISION_Anode_Cathode_Total_Recipe_Count 5029
#define P_EPC_VISION_INPUT_Correction 5030
#define P_Vison_Read_EPC_Camera_Move_Request 5031
#define P_Anode_Vision_To_NG_Code 5035
#define P_Cathode_Vision_To_NG_Code 5036
#define P_Stack_Vision_To_NG_Code 5037
#define P_Vision_Anode_Trigger_Count_Reset_Flag 5040
#define P_Vision_Anode_Trigger_Count_Reset_Complete_Flag 5041
#define P_Vision_Cathode_Trigger_Count_Reset_Flag 5042
#define P_Vision_Cathode_Trigger_Count_Reset_Complete_Flag 5043
#define P_Vision_Stack_Trigger_Count_Reset_Flag 5044
#define P_Vision_Stack_Trigger_Count_Reset_Complete_Flag 5045
#define P_Y_Vision_Work_Confirm_Operation_Flag 5047
#define P_X_Vision_Work_Confirm_Operation_Ack 5048
#define P_Vision_Send_Auto_Maual_Signal 5049
#define P_Vision_Ca_AT_Retry_Cal_Flag 5050
#define P_Vision_An_AT_Retry_Cal_Flag 5051
#define P_PMAC_To_Vision_Ca_AT_Retry_Cal_Ack 5052
#define P_PMAC_To_Vision_An_AT_Retry_Cal_Ack 5053
#define P_Vision_Send_Middle_Skip_Off_Flag 5054
#define P_Vision_Sepa_ARC_Judge 5056
#define P_Ca_Align_DIO_Log 5060
#define P_Ca_Surface_DIO_Log 5061
#define P_An_Align_DIO_Log 5063
#define P_An_Surface_DIO_Log 5064
#define P_Stack_DIO_Log 5065
#define P_Y_Vision_MSA_Use_Flag 5081
#define P_Anode_Align_Vision_Sheet_1 5100
#define P_Anode_Align_Vision_Sheet_2 5101
#define P_Anode_Align_Vision_Sheet_3 5102
#define P_Anode_Align_Vision_Sheet_4 5103
#define P_Anode_Align_Vision_Sheet_5 5104
#define P_Anode_Align_Vision_Sheet_6 5105
#define P_Anode_Align_Vision_Sheet_7 5106
#define P_Cathode_Align_Vision_Sheet_1 5110
#define P_Cathode_Align_Vision_Sheet_2 5111
#define P_Cathode_Align_Vision_Sheet_3 5112
#define P_Cathode_Align_Vision_Sheet_4 5113
#define P_Cathode_Align_Vision_Sheet_5 5114
#define P_Cathode_Align_Vision_Sheet_6 5115
#define P_Cathode_Align_Vision_Sheet_7 5116
#define P_Stop_Debug_Flag 11280
#define P_Stop_Sub_Master_Motion_Program_Flag 11281
#define P_Stop_Slave_Motion_Program_Flag 11301
#define P_Stop_Motor_Status 11321
#define P_Stop_Coord_Status 11369
#define P_Stop_Status_Check_Address 11403
#define P_Stop_Status_Save_Address 11404
#define P_Stop_Check_RTN 11405
#define P_Stop_Save_RTN 11406
#define P_Old_Total_Unit_Bit 11410
#define P_Memory_Tower_Dec_Result 11411
#define P_Stop_Motor_Pos 11412
#define P_PNP_Move_Timer 11421
#define P_PNP_Move_Delay_Time 11422
#define P_Stop_Memory_Pos_RTN 11423
#define P_Slave1_Motion_Command 11424
#define P_Slave2_Motion_Command 11425
#define P_Slave3_Motion_Command 11426
#define P_Slave4_Motion_Command 11427
#define P_Slave5_Motion_Command 11428
#define P_Slave6_Motion_Command 11429
#define P_Slave7_Motion_Command 11430
#define P_Slave8_Motion_Command 11431
#define P_Slave9_Motion_Command 11432
#define P_Slave10_Motion_Command 11433
#define P_Slave11_Motion_Command 11434
#define P_Slave12_Motion_Command 11435
#define P_Slave13_Motion_Command 11436
#define P_Slave14_Motion_Command 11437
#define P_Slave15_Motion_Command 11438
#define P_Slave16_Motion_Command 11439
#define P_Slave17_Motion_Command 11440
#define P_Slave18_Motion_Command 11441
#define P_Slave19_Motion_Command 11442
#define P_Slave20_Motion_Command 11443
#define P_PNP_90_Deg_TM 11444
#define P_PNP_90_Deg_TA 11445
#define P_PNP_90_Deg_TS 11446
#define P_PNP_Ready_TM 11447
#define P_PNP_Ready_TA 11448
#define P_PNP_Ready_TS 11449
#define P_PNP_45_Deg_TM 11450
#define P_PNP_45_Deg_TA 11451
#define P_PNP_45_Deg_TS 11452
#define P_PROG_21_Program_Ver 2781
#define P_PROG_23_Program_Ver 2783
#define P_PROG_24_Program_Ver 2784
#define P_PROG_25_Program_Ver 2785
#define P_PROG_26_Program_Ver 2786
#define P_PROG_27_Program_Ver 2787
#define P_PROG_28_Program_Ver 2788
#define P_PROG_30_Program_Ver 2790
#define P_Master_Motion_Trigger 11453
#define P_Parity_Bit 11454
#define P_Master_Move 11455
#define P_Master_TA 11456
#define P_Master_TS 11457
#define P_Master_TM 11458
#define P_Anode_Count 11459
#define P_Cathode_Count 11460
#define P_Anode_Thickness 11461
#define P_Cathode_Thickness 11462
#define P_Sepa_Thickness 11463
#define P_Anode_Thickness_PLC 11464
#define P_Cathode_Thickness_PLC 11465
#define P_Sepa_Thickness_PLC 11466
#define P_Old_P_Anode_TR1_Master_Motion_Trigger 11467
#define P_Old_P_Cathode_TR1_Master_Motion_Trigger 11483
#define P_Anode_TR1_Old_Mode 11499
#define P_Cathode_TR1_Old_Mode 11515
#define P_Older_Than_P_Anode_TR1_Old_Mode 11531
#define P_Older_Than_P_Cathode_TR1_Old_Mode 11547
#define P_Older_Than_P_Sequence_Old_P_Anode_TR1_Current_Mode_Trigger 11563
#define P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Current_Mode_Trigger 11579
#define P_Old_P_Anode_TR1_Mode_Command 11595
#define P_Old_P_Cathode_TR1_Mode_Command 11611
#define P_Older_Than_P_Old_P_Anode_TR1_Mode_Command 11627
#define P_Older_Than_P_Old_P_Cathode_TR1_Mode_Command 11643
#define P_Older_Than_P_Sequence_Old_P_Anode_TR1_Mode_Command_Trigger 11659
#define P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Mode_Command_Trigger 11675
#define P_Old_P_Anode_TR1_PMAC_Status 11691
#define P_Old_P_Cathode_TR1_PMAC_Status 11707
#define P_Older_Than_P_Old_P_Anode_TR1_PMAC_Status 11723
#define P_Older_Than_P_Old_P_Cathode_TR1_PMAC_Status 11739
#define P_Old_P_Slave1_Motion_Command 11755
#define P_Old_P_Slave10_Motion_Command 11771
#define P_Old_Slave1_P_SubMaster_Sub_Mode_Command 11787
#define P_Old_Slave10_P_SubMaster_Sub_Mode_Command 11803
#define P_Sequence_Old_P_Current_Mode_Trigger 11819
#define P_Sequence_Old_Mode 11835
#define P_Sequence_Old_P_Mode_Command 11851
#define P_Sequence_Old_P_Mode_Command_Trigger 11867
#define P_SubMaster_Sub_Old_Mode 11883
#define P_SubMaster_Sub_Old_Command 11899
#define P_SubMaster_Sub_Mode_Command 11915
#define P_SubMaster_Sub_Old_Trigger 11931
#define P_InterLock_No3_Array 11947
#define P_Old_InterLock_No3_Array 11963
#define P_Mode_Err 11979
#define P_Spool_Enable 11984
#define P_Cathode_1St_Flow_Chart_Bit_Flag 11985
#define P_Cathode_AT_Flow_Chart_Bit_Flag 11986
#define P_Cathode_2nd_Flow_Chart_Bit_Flag 11987
#define P_Anode_Clamp_Flow_Chart_Bit_Flag 11988
#define P_Final_Roll_Flow_Chart_Bit_Flag 11989
#define P_Stack_Table_Flow_Chart_Bit_Flag 11990
#define P_Cathode_Clamp_Flow_Chart_Bit_Flag 11991
#define P_Anode_2nd_Flow_Chart_Bit_Flag 11992
#define P_Anode_AT_Flow_Chart_Bit_Flag 11993
#define P_Anode_1St_Flow_Chart_Bit_Flag 11994
#define P_Sepa_Unwinder_Flow_Chart_Bit_Flag 11995
#define P_Slave5_Target_Z_For_Cutting 11996
#define P_Slave31_Motion_Command 11997
#define P_Pause_Err_Process 11998
#define P_Pause_Err_Timer 11999
#define P_Pause_Err_Count 12000
#define P_Pause_Err_Use 12001
#define P_Pause_Err_Use2 12002
#define P_Anode_Pause_Signal_Err 12003
#define P_Cathode_Pause_Signal_Err 12004
#define P_Anode_Pause_Err 12005
#define P_Anode_Pause_Err_Count 12006
#define P_Phasing_Err 12007
#define P_Phasing_Err2 12012
#define P_Execute_Wait_Mode_Memory_Tower 12017
#define P_Execute_Vac_MNTR 12018
#define P_Old_Cathode_Cur_Mode 12019
#define P_Cathode_Run_Mode_Type 12020
#define P_Cathode_Run_Mode_Trigger 12040
#define P_Old_Anode_Cur_Mode 12060
#define P_Anode_Run_Mode_Type 12061
#define P_Anode_Run_Mode_Trigger 12081
#define P_Anode_1TR_T_Belt_To_Align 12101
#define P_Anode_1TR_T_Align_To_Belt 12102
#define P_Anode_1TR_T_Ready_Pos 12103
#define P_Anode_1TR_T_Ready_To_Align 12104
#define P_Anode_1TR_T_Ready_To_Belt 12105
#define P_Anode_Picker_Turn 12106
#define P_Anode_2TR_T_Align_To_Stack 12107
#define P_Anode_2TR_T_Stack_To_Align 12108
#define P_Anode_Clamp_Off 12109
#define P_Anode_Clamp_On 12110
#define P_Anode_Clamp_Down 12111
#define P_FR_Anode_Motion 12112
#define P_FR_Cathode_Motion 12113
#define P_Stack_Table_Down 12114
#define P_Cathode_Clamp_On 12115
#define P_Cathode_Clamp_Off 12116
#define P_Cathode_Clamp_Down 12117
#define P_Cathode_2TR_T_Align_To_Stack 12118
#define P_Cathode_2TR_T_Stack_To_Align 12119
#define P_Cathode_Picker_Turn 12120
#define P_Cathode_1TR_T_Belt_To_Align 12121
#define P_Cathode_1TR_T_Align_To_Belt 12122
#define P_Cathode_1TR_T_Ready_Pos 12123
#define P_Cathode_1TR_T_Ready_To_Align 12124
#define P_Cathode_1TR_T_Ready_To_Belt 12125
#define P_Anode_1TR_Z_Belt_To_Align 12126
#define P_Anode_1TR_Z_Align_To_Belt 12127
#define P_Anode_1TR_Z_Align_Down 12128
#define P_Anode_1TR_Z_Align_UP 12129
#define P_Anode_1TR_Z_Belt_Down 12130
#define P_Anode_1TR_Z_Belt_UP 12131
#define P_Anode_1TR_Z_Ready 12132
#define P_Anode_1TR_Z_Align_Blow 12133
#define P_Anode_1TR_Z_Belt_Vac 12134
#define P_Cathode_1TR_Z_Belt_To_Align 12135
#define P_Cathode_1TR_Z_Align_To_Belt 12136
#define P_Cathode_1TR_Z_Align_Down 12137
#define P_Cathode_1TR_Z_Align_UP 12138
#define P_Cathode_1TR_Z_Belt_Down 12139
#define P_Cathode_1TR_Z_Belt_UP 12140
#define P_Cathode_1TR_Z_Ready 12141
#define P_Cathode_1TR_Z_Align_Blow 12142
#define P_Cathode_1TR_Z_Belt_Vac 12143
#define P_Anode_2TR_Align_To_Stack 12144
#define P_Anode_2TR_Stack_To_Align 12145
#define P_Anode_2TR_Stack_Down 12146
#define P_Anode_2TR_Stack_UP 12147
#define P_Anode_2TR_Align_Down 12148
#define P_Anode_2TR_Align_UP 12149
#define P_Anode_2TR_Align_Vac 12150
#define P_Anode_2TR_Stack_Blow 12151
#define P_Anode_2TR_Stack_Sepa_Blow 12152
#define P_FR_Last_Run_Motion 12153
#define P_Servo_Dancer_Ready_Pos 12154
#define P_Servo_Dancer_Ready_Offset 12155
#define P_Servo_Dancer_Test 12156
#define P_Align_Start_IO_Judgment 12157
#define P_Driving_Clamp2 12158
#define P_Driving_Clamp 12159
#define P_MSA_Timer 12160
#define P_SM_Cathode_Stack_MSA 12161
#define P_SM_Anode_Stack_MSA 12162
#define P_SM_Cathode_Align_MSA 12163
#define P_SM_Anode_Align_MSA 12164
#define P_MSA_Interlock 12165
#define P_Anode_MSA_Final_Roll_Pos_Check 12166
#define P_Anode_MSA_2nd_PNP_Pos_Check 12167
#define P_Anode_MSA_1nd_PNP_Pos_Check 12168
#define P_MSA_Err_Save_CA_Stack_MSA 12169
#define P_MSA_Err_Save_AN_Stack_MSA 12170
#define P_MSA_Err_Save_CA_Align_MSA 12171
#define P_MSA_Err_Save_AN_Align_MSA 12172
#define P_MSA_BTN_Err 12173
#define P_Anode_Algin_MSA_RTN 12174
#define P_Anode_Algin_MSA_RTN2 12175
#define P_Cathode_Algin_MSA_RTN 12176
#define P_Cathode_Stack_MSA_RTN 12177
#define P_Anode_Stack_MSA_RTN 12178
#define P_Anode_Align_MSA_Count 12179
#define P_Cathode_Align_MSA_Count 12180
#define P_Anode_Stack_MSA_Count 12181
#define P_Cathode_Stack_MSA_Count 12182
#define P_Cathode_Align_Stop_Blocked 12183
#define P_Anode_Align_Stop_Blocked 12184
#define P_Cathode_Stack_Stop_Blocked 12185
#define P_Anode_Stack_Stop_Blocked 12186
#define P_Anode_Align_MSA_Execute_Timer 12187
#define P_Cathode_Align_MSA_Execute_Timer 12188
#define P_Anode_Stack_MSA_Execute_Timer 12189
#define P_Cathode_Stack_MSA_Execute_Timer 12190
#define P_Anode_Align_Interlock_Blocked 12191
#define P_Cathode_Align_Interlock_Blocked 12192
#define P_Anode_Stack_Interlock_Blocked 12193
#define P_Cathode_Stack_Interlock_Blocked 12194
#define P_Anode_1TR_T_Align_POS 12195
#define P_Anode_1TR_T_Belt_POS 12196
#define P_Anode_1TR_T_Ready_POS 12197
#define P_Anode_2TR_T_Align_POS 12198
#define P_Anode_2TR_T_Stack_POS 12199
#define P_Cathode_2TR_T_Align_POS 12200
#define P_Cathode_2TR_T_Stack_POS 12201
#define P_Cathode_1TR_T_Align_POS 12202
#define P_Cathode_1TR_T_Belt_POS 12203
#define P_Cathode_1TR_T_Ready_POS 12204
#define P_Seq_Abort 12205
#define P_Blocked_Abort 12206
#define P_Abort_Flag 12207
#define P_Opposite_Lane_1ST_TR_Safe_Pos 12208
#define P_Opposite_Lane_P_PMAC_Status 12209
#define P_Opposite_Lane_OFF_Not_Start 12210
#define P_Pause_Alarm_Blocked 12211
#define P_Old_Alarm_Arr 12212
#define P_Cycle_Stop_Delay_Time 12213
#define P_Cycle_Stop_Offset 12214
#define P_Opposite_Lane_Abort_Alram_Flag 12215
#define P_Cathode_Clmap_Y1_Ready_Pos 12216
#define P_Cathode_Clmap_Y1_Clamp_Pos 12217
#define P_Anode_Clmap_Y1_Ready_Pos 12218
#define P_Anode_Clmap_Y1_Clamp_Pos 12219
#define P_Cathode_Clmap_Y2_Ready_Pos 12220
#define P_Cathode_Clmap_Y2_Clamp_Pos 12221
#define P_Anode_Clmap_Y2_Ready_Pos 12222
#define P_Anode_Clmap_Y2_Clamp_Pos 12223
#define P_Cathode_Clamp_Z2_Ready_Pos 12224
#define P_Cathode_Clamp_Z2_Clamp_Pos 12225
#define P_Anode_Clamp_Z2_Ready_Pos 12226
#define P_Anode_Clamp_Z2_Clamp_Pos 12227
#define P_Cathode_Clamp_Z1_Ready_Pos 12228
#define P_Cathode_Clamp_Z1_Clamp_Pos 12229
#define P_Anode_Clamp_Z1_Ready_Pos 12230
#define P_Anode_Clamp_Z1_Clamp_Pos 12231
#define P_Cathode_Clamp_Z2_Cell_Down 12232
#define P_Anode_Clamp_Z2_Cell_Down 12233
#define P_Cathode_Clamp_Z1_Cell_Down 12234
#define P_Anode_Clamp_Z1_Cell_Down 12235
#define P_Single_Run_Pass 12236
#define P_Cathode_2nd_PNP_Sepa_Blow 12237
#define P_Cathode_2nd_PNP_Align_Blow 12238
#define P_Cathode_2nd_PNP_Stack_Blow 12239
#define P_Cathode_2nd_PNP_Align_Vac 12240
#define P_Cathode_2nd_PNP_Align_Up_Motion 12241
#define P_Cathode_2nd_PNP_Align_Down_Motion 12242
#define P_Cathode_2nd_PNP_Stack_Up_Motion 12243
#define P_Cathode_2nd_PNP_Stack_Down_Motion 12244
#define P_Cathode_2nd_PNP_Stack_To_Align_Motion 12245
#define P_Cathode_2nd_PNP_Align_To_Stack_Motion 12246
#define P_Door_Open_Stop_Count 12247
#define P_Buf_Stack_NG_Flag 12248
#define P_Stop_1st_PNP_Move 12249
#define P_Seq_Abort_Timer 12250
#define P_Sync_Test 12251
#define P_Dry_Pause_Flag 12252
#define P_Dry_Run_Pasue_Timer 12253
#define P_Resume_Stop_Blocked 12254
#define P_Discharge_Wait 12255
#define P_Command_Run_Flag 12256
#define P_Stop_Cmd_Origin 12257
#define P_Stop_Origin_Save 12258
#define P_Old_M_Y_Sepa_Cutter_SSR_On 12273
#define P_Sepa_Cutter_SSR_Off_Time 12274
#define P_Sepa_Cutter_SSR_Off 12275
#define P_Sepa_Cutter_SSR_Off_Timer 12276
#define P_Starting_Pause_IO_Flag 12277
#define P_PLC03_Seq_Pause_Start_Flag 12278
#define P_PLC03_Seq_Pause_Start_State_Machine 12279
#define P_PLC03_Seq_Pause_Start_Status 12280
#define P_ARC_NP_Push_BTN 12281
#define P_ARC_UI_Push_BTN 12282
#define P_M_Manual_ARC_BTN 12283
#define P_Two_Btn_Active_Flag 12284
#define P_Two_Btn_Interlock_Time 12285
#define P_NP_Unwinder_Active_Hold 12286
#define P_MAX_KGF 12287
#define P_KGF_TO_DAC_RATIO 12288
#define P_Dac_Out_Value 12289
#define P_Recipe_Dancer_input_kgf 12290
#define P_Cathode_NG_PNP_Vel_Zero_Set 12291
#define P_Anode_NG_PNP_Vel_Zero_Set 12292
#define P_Anode_Run_DR 12293
#define P_Cathode_Run_DR 12294
#define P_1st_UND_Grip_Time 12295
#define P_1st_UND_Grip_Time_offset 12296
#define P_1st_UND_Grip_Time_offset2 12297
#define P_First_Sepa_Driving_Use 12298
#define P_First_Sepa_Driving_Timing 12299
#define P_Unloader_Safe_rtn 12300
#define P_Final_Start 12301
#define P_Driving_Start 12302
#define P_Starting_Pause_IO_OFF_Flag 12303
#define P_individual_Hold_return 12304
#define P_individual_Hold_return2 12305
#define P_Tension_Ready_Pass 12306
#define P_Discharge_cal_rtn 12307
#define P_Old_Tact_Current_Mode 12308
#define P_Sheet_Clear 12309
#define P_Anode_Clamp_On_Time2 12310
#define P_Anode_Clamp_On_Time 12311
#define P_Cathode_Clamp_On_Time 12312
#define P_Cathode_Clamp_On_Time2 12313
#define P_Offset 12314
#define P_Man_C 12315
#define P_NG_Box_Stop_Use 12316
#define P_SlewTime 12317
#define P_Old_SlewTime 12318
#define P_Resume_MNTR1 12319
#define P_Resume_MNTR2 12320
#define P_Resume_MNTR3 12321
#define P_Resume_MNTR4 12322
#define P_Resume_MNTR5 12323
#define P_Resume_MNTR6 12324
#define P_Resume_MNTR7 12325
#define P_Resume_MNTR8 12326
#define P_Resume_MNTR9 12327
#define P_Resume_MNTR10 12328
#define P_Resume_MNTR11 12329
#define P_Resume_MNTR12 12330
#define P_old_P_Anode_Count 12331
#define P_Sheet_Paper_BWD_Count 12332
#define P_Stop_CHK 12333
#define P_Seq_Pause 12334
#define P_Seq_Pause2 12335
#define P_MSA_TimeBase_Rtn 12336
#define P_Old_Vison_Read_EPC_Camera_Move_Request 12337
#define P_First_Sepa_Time_Out_Count 12338
#define P_Align_Retry_Cal_RTN 12339
#define P_Sheet_Err 12340
#define P_Driving_Cal 12356
#define P_Driving_End_Pos 12357
#define P_Driving_Start_Pos 12358
#define P_Drivig_Cal_Save 12359
#define P_Anode_Align_Blow 12364
#define P_Cathode_Align_Blow 12365
#define P_PMAC_Status_Arr_Save1 12366
#define P_HomePos_Save1 12371
#define P_PMAC_Status_Arr_Save2 12376
#define P_HomePos_Save2 12381
#define P_PMAC_Status_Arr_Save3 12386
#define P_HomePos_Save3 12391
#define P_PMAC_Status_Arr_Save4 12396
#define P_HomePos_Save4 12401
#define P_Home_Pos_Err_Cnt1 12406
#define P_Home_Pos_Err_Cnt2 12407
#define P_Home_Pos_Err_Cnt3 12408
#define P_Home_Pos_Err_Cnt4 12409
#define P_Align_Inspection_Delay 12410
#define P_HomePos_Err 12411
#define P_Anode_Sheet_Test 12416
#define P_Cathode_Sheet_Test 12417
#define P_Anode_Sheet_Interlock_Timing 12418
#define P_Cathode_Sheet_Interlock_Timing 12419
#define P_Discharge_Err_MNTR 12420
#define P_Arc_Err_MNTR 12421
#define P_Abort_Cnt 12422
#define P_EMO_Cnt 12423
#define P_Dry_Run_Inspection 12424
#define P_Servo_ON_MNTR1 12425
#define P_Servo_ON_MNTR2 12426
#define P_Servo_ON_MNTR3 12427
#define P_Servo_ON_MNTR4 12428
#define P_Servo_ON_MNTR5 12429
#define P_Servo_ON_MNTR6 12430
#define P_Servo_ON_MNTR7 12431
#define P_Servo_ON_MNTR8 12432
#define P_Servo_ON_MNTR9 12433
#define P_Servo_ON_MNTR10 12434
#define P_Servo_ON_MNTR11 12435
#define P_Servo_ON_MNTR12 12436
#define P_Servo_ON_MNTR13 12437
#define P_Servo_ON_MNTR14 12438
#define P_Servo_ON_MNTR15 12439
#define P_Servo_ON_MNTR16 12440
#define P_Servo_ON_MNTR17 12441
#define P_Servo_ON_MNTR18 12442
#define P_Servo_ON_MNTR19 12443
#define P_Servo_ON_MNTR20 12444
#define P_Servo_ON_MNTR21 12445
#define P_Servo_ON_MNTR22 12446
#define P_Servo_ON_MNTR23 12447
#define P_Servo_ON_MNTR24 12448
#define P_Servo_ON_MNTR25 12449
#define P_Servo_ON_MNTR26 12450
#define P_Servo_ON_MNTR27 12451
#define P_Servo_ON_MNTR28 12452
#define P_Servo_ON_MNTR29 12453
#define P_Servo_ON_MNTR30 12454
#define P_X_IO_WinMess_Connect_BTN 12455
#define P_Ecat_ReConnetion_State_Machine 12456
#define P_Ecat_Reconnection_Timer 12457
#define P_Y_Ecat_Reconnecting 12458
#define P_Y_Ecat_ReConnection_Fail 12459
#define P_Y_Ecat_ReConnection_Complete 12460
#define P_X_Ecat_Reconnection_BTN 12461
#define P_X_PLC_Setup_Mode_Check 12462
#define P_Interlock_On_Off_Flag 12463
#define P_X_Old_MC_Reconnect_BTN_Signal 12464
#define P_BTN_1st_ULD_Data_Clear 12465
#define P_Old_BTN_1st_ULD_Data_Clear 12466
#define P_Old_M_Y_1st_Unloader_UnGrip_Sol 12467
#define P_Sepa_Cutter_Heat_Meter 12468
#define P_Sepa_Cutter_Heating_Timer 12469
#define P_Middle_Skip_Off_Flag 12470
#define P_Stop_MNTR1 12471
#define P_Stop_MNTR2 12472
#define P_Sheet_Pos_Offset 12473
#define P_Stopping_Wait_Time 12474
#define P_Stopping_Test_Timer 12475
#define P_Cutter_FWB_Heater_Current 12476
#define P_1st_ULD_OK_Lamp 12486
#define P_1st_ULD_NG_Lamp 12487
#define P_1st_ULD_Sample_QC_Lamp 12488
#define P_Proceed_Execute_Flag 12489
#define P_Continuous_Call_Stack_NG_Flag 12490
#define P_Continuous_Call_Stack_OK_Flag 12491
#define P_Cathode_Picker_Home_Pos 12492
#define P_Anode_Picker_Home_Pos 12493
#define P_FR_Sheet_Paper_Home_Chk 12494
#define P_Align_TimeOut1 12495
#define P_Align_TimeOut2 12496
#define P_Align_TimeOut3 12497
#define P_Align_TimeOut4 12498
#define P_Align_TimeOut5 12499
#define P_Align_TimeOut6 12500
#define P_Anode_Align_OK 12501
#define P_Cathode_Align_OK 12502
#define P_Anode_Align_NG 12503
#define P_Cathode_Align_NG 12504
#define P_Anode_Align_TimeOut 12505
#define P_Cathode_Align_TimeOut 12506
#define P_Anode_Surf_OK 12507
#define P_Cathode_Surf_OK 12508
#define P_Anode_Surf_NG 12509
#define P_Cathode_Surf_NG 12510
#define P_Anode_Surf_TimeOut 12511
#define P_Cathode_Surf_TimeOut 12512
#define P_Surf_TimeOut1 12513
#define P_Surf_TimeOut2 12514
#define P_Surf_TimeOut3 12515
#define P_Surf_TimeOut4 12516
#define P_Surf_TimeOut5 12517
#define P_Surf_TimeOut6 12518
#define P_Anode_Stack_TimeOut 12519
#define P_Cathode_Stack_TimeOut 12520
#define P_Anode_Stack_OK 12521
#define P_Cathode_Stack_OK 12522
#define P_Anode_Stack_NG 12523
#define P_Cathode_Stack_NG 12524
#define P_Stack_TimeOut1 12525
#define P_Stack_TimeOut2 12526
#define P_Stack_TimeOut3 12527
#define P_Align_Move_Err 12528
#define P_Ecat_Test 12529
#define P_Scan_Time 12530
#define P_Scan_Aver 12532
#define P_Scan_MAX 12533
#define P_Cathode_1TR_Picker_T_Belt_POS 12534
#define P_Cathode_1TR_Picker_T_Align_POS 12535
#define P_Anode_1TR_Picker_T_Belt_POS 12536
#define P_Anode_1TR_Picker_T_Align_POS 12537
#define P_1TR_Picker_T_Align_POS 12538
#define P_AVRG_Lower_Sepa_Thickness_mm 12539
#define P_AVRG_Upper_Sepa_Thickness_mm 12540
#define P_PLC06_Upper_Curr_Unwinder_Thickness_mm 12541
#define P_PLC06_Lower_Curr_Unwinder_Thickness_mm 12542
#define P_Upper_Curr_Spool_Radius 12543
#define P_Lower_Curr_Spool_Radius 12544
#define P_PLC06_Curr_Upper_Distance_mm 12545
#define P_PLC06_Curr_Lower_Distance_mm 12546
#define P_Upper_Sepa_Min_Distance_mm 12547
#define P_Lower_Sepa_Min_Distance_mm 12548
#define P_PLC06_Sepa_Change_Set 12549
#define P_Upper_Sepa_To_Sensor_Min_Dis 12550
#define P_Upper_Sepa_To_Sensor_Max_Dis 12551
#define P_Upper_Sensor_To_Unwinder_Core_Dis 12552
#define P_Upper_Sensor_Min_AD 12553
#define P_Upper_Sensor_Max_AD 12554
#define P_Lower_Sepa_To_Sensor_Min_Dis 12555
#define P_Lower_Sepa_To_Sensor_Max_Dis 12556
#define P_Lower_Sensor_To_Unwinder_Core_Dis 12557
#define P_Lower_Sensor_Min_AD 12558
#define P_Lower_Sensor_Max_AD 12559
#define M_AI_Upper_Sepa_Sensing 372
#define M_AI_Lower_Sepa_Sensing 373
#define P_Status_NP_BTN_Lower_Unwinder 12560
#define P_Status_NP_BTN_Upper_Unwinder 12561
#define P_Driving_CamTable_Scale_Change_Flag 12562
#define P_FR_Driving_Diameter 12563
#define P_FR_Driving_Floating_Point 12564
#define P_FR_Driving_Reward 12565
#define P_Unwinder_Master_Following_Use_Flag 12566
#define P_Unwinder_Master_Following_On 12567
#define P_Old_Master_Following_Start 12568
#define P_Unwinder_Master_Following_Scale 12569
#define P_Unwinder_Jog_Use_Flag 12570
#define P_Old_Jog_Start 12571
#define P_Unwinder_Jog_Total_Time 12572
#define P_Unwinder_Ta 12573
#define P_Unwinder_Ts 12574
#define P_Unwinder_Tm 12575
#define P_Unwinder_1mm_Deg 12576
#define P_Unwinder_Jog_Pos 12577
#define P_Unwinder_Jog_Cnt 12578
#define P_PLC06_Frist_Flag 12579
#define P_Sepa_AI 12580
#define P_PLC06_Reel_Upper_Change_Flag 12581
#define P_PLC06_Reel_Lower_Change_Flag 12582
#define P_Spool_Ready_Enable_Flag 12583
#define P_Spool_Lack_Flag 12584
#define P_Sepa_DR_Start_Flag 12585
#define P_cdTime_Tact_Sec 12586
#define P_Master_Tact_Sec 12587
#define P_Prev_Err_Pos 12588
#define P_Cur_Arc_Rad 12589
#define P_Cur_Arc_Deg 12590
#define P_Spool_Velocity 12591
#define P_Lin_Prop_Vel 12592
#define P_Err_Pos 12593
#define P_Lin_Deriv_Vel 12594
#define P_Lin_Dacer_Kd 12595
#define P_Lin_Dacer_Kp 12596
#define P_Running_CDTimer 12597
#define P_Unwinder_Jog_Ta 12598
#define P_Unwinder_Jog_Ts 12599
#define P_Unwinder_Vel_Test_Time 12600
#define P_Set_Interval_Time 12601
#define P_PLC06_Upper_Sepa_AI_Timer 12602
#define P_PLC06_Upper_Sepa_AI_Data 12603
#define P_PLC06_Upper_Sepa_AI_Cnt 12604
#define P_PLC06_Upper_AVRG_Sensor_Data 12605
#define P_PLC06_Lower_Sepa_AI_Timer 12606
#define P_PLC06_Lower_Sepa_AI_Data 12607
#define P_PLC06_Lower_Sepa_AI_Cnt 12608
#define P_PLC06_Lower_AVRG_Sensor_Data 12609
#define P_PLC06_Sepa_Upper_Thickness_Timer 12610
#define P_PLC06_Sepa_Upper_Thickness_Data 12611
#define P_PLC06_Sepa_Upper_Thickness_Cnt 12612
#define P_PLC06_Sepa_Lower_Thickness_Timer 12613
#define P_PLC06_Sepa_Lower_Thickness_Data 12614
#define P_PLC06_Sepa_Lower_Thickness_Cnt 12615
#define P_Sepa_Thickness_Chk_Timer 12616
#define P_Spool_Length 12617
#define P_Cascade_Sf_Driving_Value 12618
#define P_Cascade_Sf_None_Driving_Value 12619
#define P_Sepa_Min_Value_Cal_Cmd 12620
#define P_Total_Sepa_Need_Length 12621
#define P_Alpa 12622
#define P_Sepa_Num_of_Turns 12623
#define P_Sepa_Turn_Num 12624
#define P_Accumulate_Value 12625
#define P_Sharft_to_Sepa_Core_mm 12626
#define P_Sepa_Cal_Circum 12627
#define P_Sepa_Min_Need_Thickness 12628
#define P_Sepa_Min_Thickness_Cmd 12629
#define P_Sepa_Accumulate_Cmd 12630
#define P_Sepa_Required_Amount 12631
#define P_Sepa_Current_Thickness 12632
#define P_Sepa_Initial_Tickness 12633
#define P_Sepa_Required_Update_Timer 12634
#define M_PLC_HeartBit_Flag 4223
#define M_X_BTN_Press_Jog_Left_From_PLC 4160
#define M_X_BTN_Press_Jog_Right_From_PLC 4107
#define P_TEST_EPC_Interlock_Auto 12635
#define P_TEST_EPC_Interlock_Manual 12636
#define P_Discharge_Total_Tact 12637
#define P_Read_Sector_TactTime 12638
#define P_Write_Sector_TactTime 12644
#define P_PLC15_Sub_Function_Dryrun_Active_Flag 12650
#define P_Sepa_Rotation_Sequence_Run_Trigger_Cnt 12651
#define P_Sepa_Mode_Sepa_Recipe_Count 12652
#define P_Discharged_After_End_Trigger 12653
#define P_Unloader_1st_Grip_Delay 12654
#define P_Separate_Cutter_Heating_Limit_Value 12655
#define P_Separate_Cutting_Current 12656
#define P_Separate_Cutter_Change_Cycle 12657
#define P_X_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger 12658
#define P_X_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger 12659
#define P_X_Cathode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger 12660
#define P_X_Anode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger 12661
#define P_X_Stack_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger 12662
#define P_Interlock_Messege_Confirmed 12663
#define P_X_MC_Communication_HeartBit 12664
#define P_SV_Cathode_Count 12665
#define P_SV_Anode_Count 12666
#define P_SV_AO_Reference_Value_Chanel 12667
#define P_SV_Cathode_Reference_Thickness 12670
#define P_SV_Anode_Reference_Thickness 12671
#define P_SV_Stack_Table_Damper_Cathode 12672
#define P_SV_Stack_Table_Damper_Anode 12673
#define P_SV_Sepa_Reference_Thickness 12674
#define P_SV_Jelly_Roll_Width 12675
#define P_Cathode_Align_Continuous_NG_Recipe 12676
#define P_Anode_Align_Continuous_NG_Recipe 12677
#define P_Stack_Vision_Continuous_NG_Recipe 12678
#define P_PLC_Recipe_EPC_Sepa_Count 12679
#define P_PLC_Recipe_Revise_Sepa 12680
#define P_X_PLC_to_PMAC_Correction_Value 12681
#define P_Anode_Align_Continuous_NG_Check_range 12682
#define P_Cathode_Align_Continuous_NG_Check_range 12683
#define P_Stack_Align_Continuous_NG_Check_range 12684
#define P_Cathode_Surface_Continuous_NG_Recipe 12685
#define P_Anode_Surface_Continuous_NG_Recipe 12686
#define P_Cathode_Surface_Continuous_NG_Check_range 12687
#define P_Anode_Surface_Continuous_NG_Check_range 12688
#define P_Servo_Dancer_Alarm_Maximum_Angle_Value 12689
#define P_Servo_Dancer_Alarm_Minimum_Angle_Value 12690
#define P_Current_Selected_Spool_Rev_Counts_Init_Read 12691
#define P_Spool_ARC_Distance_mm 12692
#define P_ARC_Upper_Request_Sepa_Thickness_mm 12693
#define P_ARC_Lower_Request_Sepa_Thickness_mm 12694
#define P_Selected_Spool_Arc_Set_Rev_Counts_Value 12695
#define P_Set_Cnt_FR_Moving_Sepa_ARC 12696
#define P_Current_Selected_Spool_Rev_Counts 12697
#define P_AI_Cathode_Clamp_Damper 12698
#define P_AI_Anode_Clamp_Damper 12699
#define P_MSA_Run_Repeat_Num 12700
#define P_Current_MSA_Run_Num 12705
#define P_Select_Sheet_Value 12710
#define P_BTN_Config_Setup_Mode_Select 12711
#define P_Sepa_Thickness_Max_Value 12712
#define P_AI_Cathode_Clamp_Damper_Zero_Mpa_Analog_Value 12713
#define P_AI_Anode_Clamp_Damper_Zero_Mpa_Analog_Value 12714
#define P_Accumulated_Movement_MM_Unit_Cathode_1ST_pnp 12715
#define P_Accumulated_Movement_MM_Unit_Anode_1ST_pnp 12716
#define P_Accumulated_Movement_MM_Unit_Cathode_2nd_pnp 12717
#define P_Accumulated_Movement_MM_Unit_Anode_2nd_pnp 12718
#define P_AI_Anode_Clamp_Damper_Mpa 12719
#define P_AI_Cathode_Clamp_Damper_Mpa 12720
#define P_Current_Whole_Stack_Jelly_Roll_Thinckness_mm 12721
#define P_Upper_Sepa_Current_Thickness_um 12722
#define P_Lower_Sepa_Current_Thickness_um 12723
#define P_Spool_Rotate_Distance 12724
#define Spool_Diameter 12725
#define P_Current_FR_Moving_Cnt_To_PlC 12726
#define P_MES_APC_Select_Btn 12727
#define P_AO_Anode_Clamp_Damper 12728
#define P_AO_Cathode_Clamp_Damper 12729
#define P_Sepa_Length 12730
#define P_Minus_Limit_Detect_Popup_Flag 12731
#define P_Plus_Limit_Detect_Popup_Flag 12732
#define P_Fatal_Fe_Limit_Detect_Popup_Flag 12733
#define P_Emergency_Alarm_Popup_Flag 12734
#define P_SepaArcing_Popup_Flag 12735
#define P_Y_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger 12736
#define P_Y_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger 12737
#define P_Y_Cathode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger 12738
#define P_Y_Anode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger 12739
#define P_Y_Stack_Align_Calibration_twisted_Cycle_Stop_Request_Trigger 12740
#define P_Current_Selected_Sheet_Value 12741
#define P_Status_Config_Mode_Select 12742
#define P_Sepa_Thickness_Jig_Value 12743
#define P_PV_Stack_Table_Damper_Cathode 12744
#define P_PV_Stack_Table_Damper_Anode 12745
#define P_Discharge_Standby_Pos_Tack_Time 12746
#define P_Discharge_FR_MainZ_Pos_Tack_Time 12747
#define P_Discharge_Unloader_Go_Pos_Tack_Time 12748
#define P_Discharge_SubZ_Down_Pos_Tack_Time 12749
#define P_Discharge_Unloader_Cutting_Pos_Tack_Time 12750
#define P_Discharge_FR_Clamp_ON_Complete_Tack_Time 12751
#define P_Discharge_Cutting_Complete_Tack_Time 12752
#define P_Discharge_Motion_PG_Active_Starting_Tack_Time 12753
#define P_Discharge_Motion_PG_Active_Complete_Tack_Time 12754
#define P_Discharge_Sepa_First_Complete_Tack_Time 12755
#define P_Discharge_Complete_Tack_Time 12756
#define P_Discharge_Total_Tack_Time 12757
#define P_Anode_Clamp_TackTime_Array0 12758
#define P_Anode_Clamp_TackTime_Array1 12759
#define P_Anode_Clamp_TackTime_Array2 12760
#define P_Anode_Clamp_TackTime_Array3 12761
#define P_Anode_Clamp_TackTime_Array4 12762
#define P_Anode_Clamp_TackTime_Array5 12763
#define P_Anode_Clamp_TackTime_Array6 12764
#define P_Anode_Clamp_TackTime_Array7 12765
#define P_Anode_Clamp_TackTime_Array8 12766
#define P_Anode_Clamp_TackTime_Array9 12767
#define P_Anode_Clamp_TackTime_Array10 12768
#define P_Stacking_TackTime_Array0 12769
#define P_Stacking_TackTime_Array1 12770
#define P_Stacking_TackTime_Array2 12771
#define P_Stacking_TackTime_Array3 12772
#define P_Stacking_TackTime_Array4 12773
#define P_Stacking_TackTime_Array5 12774
#define P_Stacking_TackTime_Array6 12775
#define P_Stacking_TackTime_Array7 12776
#define P_Stacking_TackTime_Array8 12777
#define P_Stacking_TackTime_Array9 12778
#define P_Stacking_TackTime_Array10 12779
#define P_Cathode_Clamp_TackTime_Array0 12780
#define P_Cathode_Clamp_TackTime_Array1 12781
#define P_Cathode_Clamp_TackTime_Array2 12782
#define P_Cathode_Clamp_TackTime_Array3 12783
#define P_Cathode_Clamp_TackTime_Array4 12784
#define P_Cathode_Clamp_TackTime_Array5 12785
#define P_Cathode_Clamp_TackTime_Array6 12786
#define P_Cathode_Clamp_TackTime_Array7 12787
#define P_Cathode_Clamp_TackTime_Array8 12788
#define P_Cathode_Clamp_TackTime_Array9 12789
#define P_Cathode_Clamp_TackTime_Array10 12790
#define P_JellyRoll_Out_TackTime_Array0 12791
#define P_JellyRoll_Out_TackTime_Array1 12792
#define P_JellyRoll_Out_TackTime_Array2 12793
#define P_JellyRoll_Out_TackTime_Array3 12794
#define P_JellyRoll_Out_TackTime_Array4 12795
#define P_JellyRoll_Out_TackTime_Array5 12796
#define P_JellyRoll_Out_TackTime_Array6 12797
#define P_JellyRoll_Out_TackTime_Array7 12798
#define P_JellyRoll_Out_TackTime_Array8 12799
#define P_JellyRoll_Out_TackTime_Array9 12800
#define P_JellyRoll_Out_TackTime_Array10 12801
#define P_Anode_1th_TackTime_Array0 12802
#define P_Anode_1th_TackTime_Array1 12803
#define P_Anode_1th_TackTime_Array2 12804
#define P_Anode_1th_TackTime_Array3 12805
#define P_Anode_1th_TackTime_Array4 12806
#define P_Anode_1th_TackTime_Array5 12807
#define P_Anode_1th_TackTime_Array6 12808
#define P_Anode_1th_TackTime_Array7 12809
#define P_Anode_1th_TackTime_Array8 12810
#define P_Anode_1th_TackTime_Array9 12811
#define P_Anode_1th_TackTime_Array10 12812
#define P_Cathode_1th_TackTime_Array0 12813
#define P_Cathode_1th_TackTime_Array1 12814
#define P_Cathode_1th_TackTime_Array2 12815
#define P_Cathode_1th_TackTime_Array3 12816
#define P_Cathode_1th_TackTime_Array4 12817
#define P_Cathode_1th_TackTime_Array5 12818
#define P_Cathode_1th_TackTime_Array6 12819
#define P_Cathode_1th_TackTime_Array7 12820
#define P_Cathode_1th_TackTime_Array8 12821
#define P_Cathode_1th_TackTime_Array9 12822
#define P_Cathode_1th_TackTime_Array10 12823
#define P_Anode_2th_TackTime_Array0 12824
#define P_Anode_2th_TackTime_Array1 12825
#define P_Anode_2th_TackTime_Array2 12826
#define P_Anode_2th_TackTime_Array3 12827
#define P_Anode_2th_TackTime_Array4 12828
#define P_Anode_2th_TackTime_Array5 12829
#define P_Anode_2th_TackTime_Array6 12830
#define P_Anode_2th_TackTime_Array7 12831
#define P_Anode_2th_TackTime_Array8 12832
#define P_Anode_2th_TackTime_Array9 12833
#define P_Anode_2th_TackTime_Array10 12834
#define P_Cathode_2th_TackTime_Array0 12835
#define P_Cathode_2th_TackTime_Array1 12836
#define P_Cathode_2th_TackTime_Array2 12837
#define P_Cathode_2th_TackTime_Array3 12838
#define P_Cathode_2th_TackTime_Array4 12839
#define P_Cathode_2th_TackTime_Array5 12840
#define P_Cathode_2th_TackTime_Array6 12841
#define P_Cathode_2th_TackTime_Array7 12842
#define P_Cathode_2th_TackTime_Array8 12843
#define P_Cathode_2th_TackTime_Array9 12844
#define P_Cathode_2th_TackTime_Array10 12845
#define P_Anode_Align_Table_TackTime_Array0 12846
#define P_Anode_Align_Table_TackTime_Array1 12847
#define P_Anode_Align_Table_TackTime_Array2 12848
#define P_Anode_Align_Table_TackTime_Array3 12849
#define P_Anode_Align_Table_TackTime_Array4 12850
#define P_Anode_Align_Table_TackTime_Array5 12851
#define P_Anode_Align_Table_TackTime_Array6 12852
#define P_Anode_Align_Table_TackTime_Array7 12853
#define P_Anode_Align_Table_TackTime_Array8 12854
#define P_Anode_Align_Table_TackTime_Array9 12855
#define P_Anode_Align_Table_TackTime_Array10 12856
#define P_Cathode_Align_Table_TackTime_Array0 12857
#define P_Cathode_Align_Table_TackTime_Array1 12858
#define P_Cathode_Align_Table_TackTime_Array2 12859
#define P_Cathode_Align_Table_TackTime_Array3 12860
#define P_Cathode_Align_Table_TackTime_Array4 12861
#define P_Cathode_Align_Table_TackTime_Array5 12862
#define P_Cathode_Align_Table_TackTime_Array6 12863
#define P_Cathode_Align_Table_TackTime_Array7 12864
#define P_Cathode_Align_Table_TackTime_Array8 12865
#define P_Cathode_Align_Table_TackTime_Array9 12866
#define P_Cathode_Align_Table_TackTime_Array10 12867
#define P_Anode_NG_PNP_TackTime_Array0 12868
#define P_Anode_NG_PNP_TackTime_Array1 12869
#define P_Anode_NG_PNP_TackTime_Array2 12870
#define P_Anode_NG_PNP_TackTime_Array3 12871
#define P_Anode_NG_PNP_TackTime_Array4 12872
#define P_Anode_NG_PNP_TackTime_Array5 12873
#define P_Anode_NG_PNP_TackTime_Array6 12874
#define P_Anode_NG_PNP_TackTime_Array7 12875
#define P_Anode_NG_PNP_TackTime_Array8 12876
#define P_Anode_NG_PNP_TackTime_Array9 12877
#define P_Anode_NG_PNP_TackTime_Array10 12878
#define P_Cathode_NG_PNP_TackTime_Array0 12879
#define P_Cathode_NG_PNP_TackTime_Array1 12880
#define P_Cathode_NG_PNP_TackTime_Array2 12881
#define P_Cathode_NG_PNP_TackTime_Array3 12882
#define P_Cathode_NG_PNP_TackTime_Array4 12883
#define P_Cathode_NG_PNP_TackTime_Array5 12884
#define P_Cathode_NG_PNP_TackTime_Array6 12885
#define P_Cathode_NG_PNP_TackTime_Array7 12886
#define P_Cathode_NG_PNP_TackTime_Array8 12887
#define P_Cathode_NG_PNP_TackTime_Array9 12888
#define P_Cathode_NG_PNP_TackTime_Array10 12889
#define P_Sepa_Unwinder_TackTime_Array0 12890
#define P_Sepa_Unwinder_TackTime_Array1 12891
#define P_Sepa_Unwinder_TackTime_Array2 12892
#define P_Sepa_Unwinder_TackTime_Array3 12893
#define P_Sepa_Unwinder_TackTime_Array4 12894
#define P_Sepa_Unwinder_TackTime_Array5 12895
#define P_Sepa_Unwinder_TackTime_Array6 12896
#define P_Sepa_Unwinder_TackTime_Array7 12897
#define P_Sepa_Unwinder_TackTime_Array8 12898
#define P_Sepa_Unwinder_TackTime_Array9 12899
#define P_Sepa_Unwinder_TackTime_Array10 12900
#define P_Sepa_Unwinder_TackTime_Array11 12901
#define P_1st_Unloader_TackTime_Array0 12902
#define P_1st_Unloader_TackTime_Array1 12903
#define P_1st_Unloader_TackTime_Array2 12904
#define P_1st_Unloader_TackTime_Array3 12905
#define P_1st_Unloader_TackTime_Array4 12906
#define P_1st_Unloader_TackTime_Array5 12907
#define P_1st_Unloader_TackTime_Array6 12908
#define P_1st_Unloader_TackTime_Array7 12909
#define P_1st_Unloader_TackTime_Array8 12910
#define P_1st_Unloader_TackTime_Array9 12911
#define P_1st_Unloader_TackTime_Array10 12912
#define P_Cathode_1st_Vacuum_TackTime_Array1 12913
#define P_Cathode_1st_Vacuum_TackTime_Array2 12914
#define P_Cathode_1st_Vacuum_TackTime_Array3 12915
#define P_Cathode_1st_Vacuum_TackTime_Array4 12916
#define P_Cathode_1st_Vacuum_TackTime_Array5 12917
#define P_Cathode_1st_Vacuum_TackTime_Array6 12918
#define P_Cathode_1st_Vacuum_TackTime_Array7 12919
#define P_Cathode_1st_Vacuum_TackTime_Array8 12920
#define P_Cathode_1st_Vacuum_TackTime_Array9 12921
#define P_Cathode_1st_Vacuum_TackTime_Array10 12922
#define P_Cathode_Align_Vacuum_TackTime_Array1 12923
#define P_Cathode_Align_Vacuum_TackTime_Array2 12924
#define P_Cathode_Align_Vacuum_TackTime_Array3 12925
#define P_Cathode_Align_Vacuum_TackTime_Array4 12926
#define P_Cathode_Align_Vacuum_TackTime_Array5 12927
#define P_Cathode_Align_Vacuum_TackTime_Array6 12928
#define P_Cathode_Align_Vacuum_TackTime_Array7 12929
#define P_Cathode_Align_Vacuum_TackTime_Array8 12930
#define P_Cathode_Align_Vacuum_TackTime_Array9 12931
#define P_Cathode_Align_Vacuum_TackTime_Array10 12932
#define P_Cathode_2nd_Vacuum_TackTime_Array1 12933
#define P_Cathode_2nd_Vacuum_TackTime_Array2 12934
#define P_Cathode_2nd_Vacuum_TackTime_Array3 12935
#define P_Cathode_2nd_Vacuum_TackTime_Array4 12936
#define P_Cathode_2nd_Vacuum_TackTime_Array5 12937
#define P_Cathode_2nd_Vacuum_TackTime_Array6 12938
#define P_Cathode_2nd_Vacuum_TackTime_Array7 12939
#define P_Cathode_2nd_Vacuum_TackTime_Array8 12940
#define P_Cathode_2nd_Vacuum_TackTime_Array9 12941
#define P_Cathode_2nd_Vacuum_TackTime_Array10 12942
#define P_Anode_1st_Vacuum_TackTime_Array1 12943
#define P_Anode_1st_Vacuum_TackTime_Array2 12944
#define P_Anode_1st_Vacuum_TackTime_Array3 12945
#define P_Anode_1st_Vacuum_TackTime_Array4 12946
#define P_Anode_1st_Vacuum_TackTime_Array5 12947
#define P_Anode_1st_Vacuum_TackTime_Array6 12948
#define P_Anode_1st_Vacuum_TackTime_Array7 12949
#define P_Anode_1st_Vacuum_TackTime_Array8 12950
#define P_Anode_1st_Vacuum_TackTime_Array9 12951
#define P_Anode_1st_Vacuum_TackTime_Array10 12952
#define P_Anode_Align_Vacuum_TackTime_Array1 12953
#define P_Anode_Align_Vacuum_TackTime_Array2 12954
#define P_Anode_Align_Vacuum_TackTime_Array3 12955
#define P_Anode_Align_Vacuum_TackTime_Array4 12956
#define P_Anode_Align_Vacuum_TackTime_Array5 12957
#define P_Anode_Align_Vacuum_TackTime_Array6 12958
#define P_Anode_Align_Vacuum_TackTime_Array7 12959
#define P_Anode_Align_Vacuum_TackTime_Array8 12960
#define P_Anode_Align_Vacuum_TackTime_Array9 12961
#define P_Anode_Align_Vacuum_TackTime_Array10 12962
#define P_Anode_2nd_Vacuum_TackTime_Array1 12963
#define P_Anode_2nd_Vacuum_TackTime_Array2 12964
#define P_Anode_2nd_Vacuum_TackTime_Array3 12965
#define P_Anode_2nd_Vacuum_TackTime_Array4 12966
#define P_Anode_2nd_Vacuum_TackTime_Array5 12967
#define P_Anode_2nd_Vacuum_TackTime_Array6 12968
#define P_Anode_2nd_Vacuum_TackTime_Array7 12969
#define P_Anode_2nd_Vacuum_TackTime_Array8 12970
#define P_Anode_2nd_Vacuum_TackTime_Array9 12971
#define P_Anode_2nd_Vacuum_TackTime_Array10 12972
#define P_Final_Roll_TackTime_Array1 12973
#define P_Final_Roll_TackTime_Array2 12974
#define P_Final_Roll_TackTime_Array3 12975
#define P_Final_Roll_TackTime_Array4 12976
#define P_Final_Roll_TackTime_Array5 12977
#define P_Final_Roll_TackTime_Array6 12978
#define P_Final_Roll_TackTime_Array7 12979
#define P_Final_Roll_TackTime_Array8 12980
#define P_Final_Roll_TackTime_Array9 12981
#define P_Final_Roll_TackTime_Array10 12982
#define P_Sepa_ARC_TackTime_Array1 12983
#define P_Sepa_ARC_TackTime_Array2 12984
#define P_Sepa_ARC_TackTime_Array3 12985
#define P_Sepa_ARC_TackTime_Array4 12986
#define P_Sepa_ARC_TackTime_Array5 12987
#define P_Sepa_ARC_TackTime_Array6 12988
#define P_Sepa_ARC_TackTime_Array7 12989
#define P_Sepa_ARC_TackTime_Array8 12990
#define P_Sepa_ARC_TackTime_Array9 12991
#define P_Sepa_ARC_TackTime_Array10 12992
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array1 12993
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array2 12994
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array3 12995
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array4 12996
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array5 12997
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array6 12998
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array7 12999
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array8 13000
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array9 13001
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array10 13002
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array1 13003
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array2 13004
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array3 13005
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array4 13006
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array5 13007
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array6 13008
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array7 13009
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array8 13010
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array9 13011
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array10 13012
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array1 13013
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array2 13014
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array3 13015
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array4 13016
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array5 13017
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array6 13018
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array7 13019
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array8 13020
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array9 13021
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array10 13022
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array1 13023
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array2 13024
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array3 13025
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array4 13026
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array5 13027
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array6 13028
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array7 13029
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array8 13030
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array9 13031
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array10 13032
#define P_PACK_ML_Status_bit 13033
#define P_Whole_Stacking_TackTime_MES_Report_Flag 13034
#define P_JellyRoll_Out_TackTime_MES_Report_Flag 13035
#define P_PV_Cathode_Count 13036
#define P_PV_Anode_Count 13037
#define P_PV_AO_Value_Chanel 13038
#define P_PV_Cathode_NG_TR_NG_Count 13042
#define P_PV_Anode_NG_TR_NG_Count 13043
#define P_PV_Anode_Retry_NG_Count 13044
#define P_PV_Cathode_Retry_NG_Count 13045
#define P_PV_Align_INPUT_Count 13046
#define P_Unloader_Grip_Pressure 13047
#define P_Unloader_Heatmeter 13048
#define P_Interlock_Messege 13049
#define P_EPC_Y_StandBy 13099
#define P_SV_Read_Enable_Flag 13100
#define P_Spool_Rotate_Distance_mm 13101
#define P_Current_Homming_Status 13102
#define P_Home_Execute_Type 13152
#define P_Cathode_Clamp_Gantry 13202
#define P_Anode_Clamp_Gantry 13203
#define P_SV_Separator_Heting_Cutter_Change_Period 13204
#define P_Interval_Read_Time 13205
#define P_Interval_Write_Time 13211
#define P_Cathode_Picker_Cylinder_Count 13217
#define P_Anode_Picker_Cylinder_Count 13218
#define P_SV_Stack_Table_Cathode_Reference_Value 13219
#define P_SV_Stack_Table_Anode_Reference_Value 13220
#define P_CA_DR_Offset 13221
#define P_AN_DR_Offset 13222
#define P_First_DR_Offset 13223
#define P_Last_DR_Offset 13224
#define P_BTN_QC_Sample_Flag 13225
#define P_BTN_Loss_Sample_Flag 13226
#define P_MSA_Sample_Flag 13227
#define P_Sample_JR_Recipe_Count 13228
#define M_Sample_JR_Prod_Count 8359
#define M_Sample_Btn_Flag 8360
#define P_Ca_Clamp_Y_Move 13229
#define P_An_Clamp_Y_Move 13230
#define P_Stack_Table_JR_Exist_Flag 13231
#define P_Program_Monitoring_Lamp_Cell_Ready 13232
#define P_Program_Monitoring_Lamp_Ready_Pos 13233
#define P_Program_Monitoring_Lamp_Pause_Pos 13234
#define P_Program_Monitoring_Lamp_Motion_Run 13235
#define P_Program_Monitoring_Lamp_Cell_Remove 13236
#define P_Program_Monitoring_Lamp_Cell_Supply 13237
#define P_Program_Monitoring_Lamp_Sepa_Mode 13238
#define P_Program_Monitoring_Lamp_Semi_Run 13239
#define P_Program_Monitoring_Lamp_Stack_Mode 13240
#define P_Program_Monitoring_Lamp_Anode_Aling_NG 13241
#define P_Program_Monitoring_Lamp_Anode_Retry_NG 13242
#define P_Program_Monitoring_Lamp_Cathode_Align_NG 13243
#define P_Program_Monitoring_Lamp_Cathode_Retry_NG 13244
#define P_Program_Monitoring_Lamp_Last_Stack_Mode 13245
#define P_Program_Monitoring_Lamp_Jelly_Roll_OK 13246
#define P_Program_Monitoring_Lamp_Jelly_Roll_NG 13247
#define P_Program_Monitoring_Lamp_Jelly_Roll_Sepa 13248
#define P_Program_Monitoring_Lamp_Cell_Out_Pos 13249
#define P_Program_Monitoring_Lamp_Cell_Out_Mode 13250
#define P_Master_Motion_Program_Flag 13251
#define P_Sub_Master_Motion_Program_Flag 13252
#define P_Slave_Motion_Program_Flag 13272
#define P_Master_Motion_CycleStop_Flag 13292
#define P_OLD_Jog_Speed_Motor 13293
#define P_PLC_08_Program_Ver 13343
#define P_Old_PMAC_Commands 13344
#define P_Old_PMAC_Status 13345
#define P_Old_PMAC_Current_Mode 13346
#define P_Mode_Function_State_Machine 13347
#define P_PMAC_Commands 13348
#define P_Command_Start 13349
#define P_Command_Complete 13367
#define P_Command_Reset 13385
#define P_Command_Hold 13403
#define P_Command_Unhold 13421
#define P_Command_Suspend 13439
#define P_Command_Unsuspend 13457
#define P_Command_Clear 13475
#define P_Command_Stop 13493
#define P_Command_Abort 13511
#define P_Command_Status_Complete 13529
#define P_Command_Mask_Layer 13547
#define P_Command_Process_Type 13565
#define P_array_CF_Mode_Name 100
#define P_array_CF_Function_Name 200
#define P_array_CF_Function_State_Number 300
#define P_array_CF_Local_Alarm_Code 400
#define P_array_CF_Function_Run_Time 500
#define P_array_CF_Function_Start_Flag 600
#define P_array_CF_Function_Run_Flag 700
#define P_array_CF_Function_Return_Flag 800
#define P_array_CF_Function_Mask 900
#define P_array_CF_Function_Debug_Flag 1000
#define P_PMAC_Current_Mode 13583
#define P_PMAC_Status 13584
#define P_PMAC_Old_Mode 13585
#define P_Ready_Tack_Chk_Timer 13586
#define P_PLC09_Common_Command_Flag 13587
#define P_PLC09_Common_Command_Complete_Bit 13588
#define P_PLC09_Common_Execute_Flag 13589
#define P_PLC09_Common_Execute_Complete_Bit 13590
#define P_PLC09_Status 13591
#define P_PLC09_Libraries_Var 13592
#define P_Master_Motion_Program_ON_Flag 13593
#define P_Master_Motion_Program_ON_Complete_Bit 13594
#define P_Master_Motion_Program_OFF_Flag 13595
#define P_Master_Motion_Program_OFF_Complete_Bit 13596
#define P_Common_Function_Timbase_ON_Flag 13597
#define P_Common_Function_Timbase_ON_Complete_Bit 13598
#define P_Common_Function_Timbase_OFF_Flag 13599
#define P_Common_Function_Timbase_OFF_Complete_Bit 13600
#define P_Common_Function_Monitoring_Lamp_OFF_Flag 13601
#define P_Common_Function_Monitoring_Lamp_OFF_Complete_Bit 13602
#define P_Common_Function_Slave_Motion_Common_Init_Flag 13603
#define P_Common_Function_Slave_Motion_Common_Init_Complete_Bit 13604
#define P_Common_Function_OlD_Jog_Speed_Save_ON_Flag 13605
#define P_Common_Function_OlD_Jog_Speed_Save_ON_Complete_Bit 13606
#define P_Auto_Resetting_Sum_Ready_Pos_Check_Flag 13607
#define P_Auto_Resetting_Sum_Ready_Pos_Check_Complete_bit 13608
#define P_Manual_Resetting_Sum_Ready_Pos_Check_Flag 13609
#define P_Manual_Resetting_Sum_Ready_Pos_Check_Complete_bit 13610
#define P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Flag 13611
#define P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Complete_Bit 13612
#define P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Flag 13613
#define P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Complete_Bit 13614
#define P_Motion_Target_Position_Complete 13615
#define P_SM_Auto_Run_Layer_Management 13616
#define P_Buffer_Mode_Status_Sequence 13617
#define P_SM_Sub_Function_Pause 13618
#define P_PLC09_Resetting_Position_Check_State_Machine 13619
#define P_PLC09_Resetting_Position_Moving_State_Machine 13620
#define P_Sum_Ready_pos_Motor 13621
#define P_SM_Resetting_Pause_Position 13663
#define P_20per_Vac_Error_Cycle_Stop_Flag 13664
#define P_MNTR_PLC23_ARC_Complete 13665
#define P_FUNCTION_PLC13_Sepa_Trigger_Enable 13666
#define P_PLC_Recipe_PLC2_Revise_Sepa 13667
#define P_Auto_Semi_Init_Status 13668
#define P_Auto_Semi_Init_Chk_Bit 13669
#define P_Old_PLC_HeartBit_Flag 13670
#define P_PLC09_Init_Flag 13671
#define P_Check_IDLE_CF_Flag 13672
#define P_Check_EXECUTE_CF_Flag 13673
#define P_Check_COMPLETING_CF_Flag 13674
#define P_Check_COMPLETE_CF_Flag 13675
#define P_Check_HOLDING_CF_Flag 13676
#define P_Check_HOLD_CF_Flag 13677
#define P_Check_UNHOLDING_CF_Flag 13678
#define P_Check_SUSPENDING_CF_Flag 13679
#define P_Check_SUSPENDED_CF_Flag 13680
#define P_Check_UNSUSPENDING_CF_Flag 13681
#define P_Check_STOPPED_CF_Flag 13682
#define P_Check_ABORTED_CF_Flag 13683
#define P_Check_CLEARING_CF_Flag 13684
#define P_Check_IDLE_CF 13685
#define P_Check_EXECUTE_CF 13686
#define P_Check_COMPLETING_CF 13687
#define P_Check_COMPLETE_CF 13688
#define P_Check_HOLDING_CF 13689
#define P_Check_HOLD_CF 13690
#define P_Check_UNHOLDING_CF 13691
#define P_Check_SUSPENDING_CF 13692
#define P_Check_SUSPENDED_CF 13693
#define P_Check_UNSUSPENDING_CF 13694
#define P_Check_STOPPED_CF 13695
#define P_Check_ABORTED_CF 13696
#define P_Check_CLEARING_CF 13697
#define P_Check_STOPPING_CF 13698
#define P_Check_STARTING_CF 13699
#define P_Check_RESETTING_CF 13700
#define P_Check_STARTTING_CF 13701
#define P_Queue_Clear 13702
#define P_PLC09_Alarm_Test_Flag 13703
#define P_PLC09_Test_Temp 13704
#define P_PLC01_STOP_Queue_Complete_Flag 13705
#define P_PMAC_All_Home_Cmd 13706
#define P_PMAC_All_Home_Status 13707
#define P_PMAC_Master_Following_Use_Flag 13708
#define PnP_Belt_Waring_Pos 13709
#define P_Old_X_PLC_Sync_Heart_Bit 13710
#define P_Stack_Heart_Bit_Sync_Flag 13711
#define P_Stack_Heart_Bit_Sunc_Complete_Bit 13712
#define P_Resetting_Init_Module_RTN 13713
#define P_PLC09_MNTR 13714
#define P_Unloder_PNP_Home_IL_Pos 13715
#define P_ECAT_Slave_Err_Bit 13716
#define P_MC_Power_Down_Flag 13717
#define P_Old_MC_Power_Down_Flag 13718
#define P_Modbus_A_PMAC_Cur_Mode 10
#define P_Modbus_A_PMAC_Cur_Status 11
#define P_Modbus_A_VISION_MSA_Status 12
#define P_Modbus_A_Anode_1st_Pos 13
#define P_Modbus_A_Cathode_1st_Pos 14
#define P_Modbus_A_Connect_State 15
#define P_Modbus_A_All_Home_Status 16
#define P_Modbus_HeartBit 17
#define P_Modbus_A_Anode_1st_HCK 18
#define P_Modbus_A_Cathode_1st_HCK 19
#define P_Modbus_B_PMAC_Cur_Mode 30
#define P_Modbus_B_PMAC_Cur_Status 31
#define P_Modbus_B_VISION_MSA_Status 32
#define P_Modbus_B_Anode_1st_Pos 33
#define P_Modbus_B_Cathode_1st_Pos 34
#define P_Modbus_B_Connect_State 35
#define P_Modbus_B_All_Home_Status 36
#define P_Modbus_B_Anode_1st_HCK 37
#define P_Modbus_B_Cathode_1st_HCK 38
#define P_Modbus_Delay_Timer 13719
#define P_Modbus_Connect_Status 13720
#define P_Modbus_Reconnect_MNTR 13721
#define P_Ecat_Reconn_Chk_Lamp 13722
#define P_MC_Reconn_Chk_Lamp 13723
#define P_Cathode_1st_Vac_Set_Time 13724
#define P_Cathode_2nd_Vac_Set_Time 13725
#define P_Cathode_Align_Vac_Set_Time 13726
#define P_Cathode_Align_Blow_Set_Time 13727
#define P_Anode_1st_Vac_Set_Time 13728
#define P_Anode_2nd_Vac_Set_Time 13729
#define P_Sepa_Consume_Mode_Thickness_rate 13730
#define P_Sepa_Anode_Recipe_Count 13731
#define P_Sepa_Cathode_Recipe_Count 13732
#define P_Discharge_Cathode_Recipe_Count 13733
#define P_Discharge_Anode_Recipe_Count 13734
#define P_Suspend_Discharge_Cathode_Counter 13735
#define P_Suspend_Discharge_Anode_Counter 13736
#define P_Suspend_Discharge_Waiting_Flag 13737
#define P_Com_ARC_Sepa_Consume_Mode_Flag 13738
#define P_Com_EPC_Sepa_Consume_Mode_Flag 13739
#define P_Com_User_Sepa_Consume_Mode_Flag 13740
#define P_Com_Dry_Mode_Flag 13741
#define P_SM_Recipe_Value_Management 13742
#define P_Sepa_Mode_Recipe_Count 13743
#define P_Sepa_Mode_EPC_Recipe_Count 13744
#define P_ARC_End_Sepa_Recipe_Count 13745
#define P_Anode_Align_NG_Array 13746
#define P_Cathode_Align_NG_Array 13766
#define P_Anode_Surface_NG_Array 13786
#define P_Cathode_Surface_NG_Array 13806
#define P_Stack_NG_Array 13826
#define P_Cathode_Align_Continuous_NG_Stop_Select 13846
#define P_Anode_Align_Continuous_NG_Stop_Select 13847
#define P_Stack_Vision_NG_Enable 13848
#define P_Cathode_Surface_Continuous_NG_Stop_Select 13849
#define P_Anode_Surface_Continuous_NG_Stop_Select 13850
#define P_Anode_Trigger_IO_Test_Vision_PLC_Loop 13851
#define P_Anode_Trigger_IO_Test_Motion_Loop 13852
#define P_Cathode_Trigger_IO_Test_Vision_PLC_Loop 13853
#define P_Cathode_Trigger_IO_Test_Motion_Loop 13854
#define P_Stack_Trigger_IO_Test_Vision_PLC_Loop 13855
#define P_Stack_Trigger_IO_Test_Motion_Loop 13856
#define P_PLC12_Continuous_Buffer_Reset_Flag 13857
#define P_Continuous_Call_Align_OK_Flag 13858
#define P_Continuous_Call_Align_NG_Flag 13860
#define P_Continuous_Call_Align_TimeOut_Flag 13862
#define P_Continuous_Call_Surface_OK_Flag 13864
#define P_Continuous_Call_Surface_NG_Flag 13866
#define P_Continuous_Call_Surface_TimeOut_Flag 13868
#define P_Continuous_Call_Stack_Flag 13870
#define P_PLC12_Anode_Sheet_Pick_Up_Flag 13873
#define P_PLC12_Cathode_Sheet_Pick_Up_Flag 13874
#define P_Hold_Anode_Sheet_Pick_Up_Flag 13875
#define P_Hold_Cathode_Sheet_Pick_Up_Flag 13876
#define P_Sheet_Interface_Complete_Pos 13877
#define P_Anode_Sheet_Interface_Complete_Pos 13878
#define P_Cathode_Sheet_Interface_Complete_Pos 13879
#define P_Anode_2nd_TR_Maint_Check 13880
#define P_Cathode_2nd_TR_Maint_Check 13881
#define P_PLC12_Observser_MNTR 13882
#define P_PLC12_Vacuum_MNTR 13887
#define P_Vacuum_Check 13895
#define P_PLC12_Blow_MNTR 13903
#define P_Blow_Check 13911
#define P_PLC12_Vacuum_1st_Cathode_MNTR_Timer 13919
#define P_PLC12_Vacuum_2nd_Cathode_MNTR_Timer 13920
#define P_PLC12_Vacuum_NG_Cathode_MNTR_Timer 13921
#define P_PLC12_Vacuum_Align_Cathode_MNTR_Timer 13922
#define P_PLC12_Vacuum_1st_Anode_MNTR_Timer 13923
#define P_PLC12_Vacuum_2nd_Anode_MNTR_Timer 13924
#define P_PLC12_Vacuum_NG_Anode_MNTR_Timer 13925
#define P_PLC12_Vacuum_Align_Anode_MNTR_Timer 13926
#define P_PLC12_Vacuum_1st_Cathode_Set_Time 13927
#define P_PLC12_Vacuum_2nd_Cathode_Set_Time 13928
#define P_PLC12_Vacuum_NG_Cathode_Set_Time 13929
#define P_PLC12_Vacuum_Align_Cathode_Set_Time 13930
#define P_PLC12_Vacuum_1st_Anode_Set_Time 13931
#define P_PLC12_Vacuum_2nd_Anode_Set_Time 13932
#define P_PLC12_Vacuum_NG_Anode_Set_Time 13933
#define P_PLC12_Vacuum_Align_Anode_Set_Time 13934
#define P_PLC12_Vacuum_1st_Cathode_Take_Time 13935
#define P_PLC12_Vacuum_2nd_Cathode_Take_Time 13940
#define P_PLC12_Vacuum_NG_Cathode_Take_Time 13945
#define P_PLC12_Vacuum_Align_Cathode_Take_Time 13950
#define P_PLC12_Vacuum_1st_Anode_Take_Time 13955
#define P_PLC12_Vacuum_2nd_Anode_Take_Time 13960
#define P_PLC12_Vacuum_NG_Anode_Take_Time 13965
#define P_PLC12_Vacuum_Align_Anode_Take_Time 13970
#define P_PLC12_Blow_1st_Cathode_MNTR_Timer 13975
#define P_PLC12_Blow_2nd_Cathode_MNTR_Timer 13976
#define P_PLC12_Blow_NG_Cathode_MNTR_Timer 13977
#define P_PLC12_Blow_Align_Cathode_MNTR_Timer 13978
#define P_PLC12_Blow_1st_Anode_MNTR_Timer 13979
#define P_PLC12_Blow_2nd_Anode_MNTR_Timer 13980
#define P_PLC12_Blow_NG_Anode_MNTR_Timer 13981
#define P_PLC12_Blow_Align_Anode_MNTR_Timer 13982
#define P_PLC12_Blow_1st_Cathode_Set_Time 13983
#define P_PLC12_Blow_2nd_Cathode_Set_Time 13984
#define P_PLC12_Blow_NG_Cathode_Set_Time 13985
#define P_PLC12_Blow_Align_Cathode_Set_Time 13986
#define P_PLC12_Blow_1st_Anode_Set_Time 13987
#define P_PLC12_Blow_2nd_Anode_Set_Time 13988
#define P_PLC12_Blow_NG_Anode_Set_Time 13989
#define P_PLC12_Blow_Align_Anode_Set_Time 13990
#define P_PLC12_Blow_1st_Cathode_Take_Time 13991
#define P_PLC12_Blow_2nd_Cathode_Take_Time 13996
#define P_PLC12_Blow_NG_Cathode_Take_Time 14001
#define P_PLC12_Blow_Align_Cathode_Take_Time 14006
#define P_PLC12_Blow_1st_Anode_Take_Time 14011
#define P_PLC12_Blow_2nd_Anode_Take_Time 14016
#define P_PLC12_Blow_NG_Anode_Take_Time 14021
#define P_PLC12_Blow_Align_Anode_Take_Time 14026
#define P_Vacuum_Reentry_Bit 14031
#define P_Blow_Reentry_Bit 14032
#define P_Status_arry 14033
#define P_Queue_arry 14053
#define P_Step_arry 14073
#define P_Index_arry 14093
#define P_top 14113
#define P_Queue_stack_top 14114
#define P_Step_stack_top 14115
#define P_Index_stack_top 14116
#define P_Status_stack_top 14117
#define NN_Step 14118
#define NN_Index 14119
#define P_PLC_Observser_MNTR 14120
#define P_PLC12_Frist 14125
#define P_SM_Auto_Run_Status_Management 14126
#define P_SM_Status_Main_Memory_Management 14127
#define P_SM_Cell_Memory_Management 14128
#define P_Test_Vacuum_Timer 14129
#define P_Test_Blow_Timer 14137
#define P_Vac_Test_Set_Time 14145
#define P_Blow_Test_Set_Time 14153
#define P_PLC12_Vacuum_Unit_Data 14161
#define P_PLC12_Blow_Unit_Data 14162
#define P_Stack_Algorithme_Cmd_Event_Status 14163
#define P_PLC12_vacuum_Event_Status 14164
#define P_PLC12_Blow_Event_status 14165
#define P_PLC12_vacuum_DIO_Observer_Status 14166
#define P_PLC12_Blow_DIO_Observer_Status 14167
#define P_Resetting_Vacuum_MNTR_State_Machine 14168
#define P_Heart_Bit_Time 14169
#define P_Dancer_Angle_Alarm_Timer_Flag 14170
#define P_Dancer_Angle_Alarm_Check_Timer 14171
#define P_BTN_LED_LAMP 14172
#define P_Old_BTN_LED_LAMP 14173
#define P_PLC_TO_PMAC_Work_Confirm_Operation_Cnt 14174
#define P_VISION_TO_PMAC_Work_Confirm_Operation_Ack_Cnt 14175
#define P_Ca_AT_Retry_Cal_Move_Complete 14176
#define P_An_AT_Retry_Cal_Move_Complete 14177
#define P_Ca_AT_Retry_Cal_Cnt 14178
#define P_An_AT_Retry_Cal_Cnt 14179
#define P_Ca_AT_Retry_Cal_Complete 14180
#define P_An_AT_Retry_Cal_Complete 14181
#define P_An_AT_Retry_Cal_Pass 14182
#define P_Ca_AT_Retry_Cal_Pass 14183
#define P_Ca_Picker_T_Turn_Cnt_Flag 14184
#define P_Ca_Picker_T_Turn_Cnt 14185
#define P_Ca_Picker_T_Home_Type 14186
#define P_An_Picker_T_Turn_Cnt_Flag 14187
#define P_An_Picker_T_Turn_Cnt 14188
#define P_An_Picker_T_Home_Type 14189
#define P_Flag_Vac_Status_Initialize 14190
#define P_SM_Vac_Initialize 14191
#define P_Flag_Anode_1st_Vac_OFF 14192
#define P_Flag_Anode_AT_Vac_OFF 14193
#define P_Flag_Anode_2nd_Vac_OFF 14194
#define P_Flag_Anode_NG_Vac_OFF 14195
#define P_Flag_Cathode_1st_Vac_OFF 14196
#define P_Flag_Cathode_AT_Vac_OFF 14197
#define P_Flag_Cathode_2nd_Vac_OFF 14198
#define P_Flag_Cathode_NG_Vac_OFF 14199
#define P_Flag_Anode_1st_Vac_Initial_Alarm 14200
#define P_Flag_Anode_AT_Vac_Initial_Alarm 14201
#define P_Flag_Anode_2nd_Vac_Initial_Alarm 14202
#define P_Flag_Anode_NG_Vac_Initial_Alarm 14203
#define P_Flag_Cathode_1st_Vac_Initial_Alarm 14204
#define P_Flag_Cathode_AT_Vac_Initial_Alarm 14205
#define P_Flag_Cathode_2nd_Vac_Initial_Alarm 14206
#define P_Flag_Cathode_NG_Vac_Initial_Alarm 14207
#define P_Middle_Discharge_Ignore_Total_Count 14208
#define P_Middle_Discharge_Ignore_Stack_Count 14209
#define P_Middle_Discharge_Ignore_ON_Signal 14210
#define P_Middle_Discharge_Ignore_OFF_Signal 14211
#define P_Middle_Discharge_Ignore_Cell_Count 14212
#define P_ARC_Middle_Discharge_Ignore_Vision_Check 14213
#define P_ARC_Middle_Discharge_Ignore_ON_Flag 14214
#define P_Middle_Discharge_Ignore_User_Sepa_Mode_Check 14215
#define P_Zero_Angle 14216
#define P_Zero_Length 14241
#define P_Homeoffset_Change_Flag 14266
#define P_Cal_Distance 14291
#define P_Cal_Denominator 14296
#define P_Cal_Numerator 14301
#define P_Cal_Dif_Deg 14306
#define P_Vac_Door_Open_Clear 14311
#define M_Touchprobefunction 8361
#define M_Touchprobestatus 8410
#define P_Flag_Sepa_Stack_Mode_CHK 14324
#define P_Read_Timer_S 14325
#define P_Write_Timer_S 14334
#define P_Interval_Read_S 14343
#define P_Interval_Write_S 14352
#define P_UI_Jog_Vel_M 14361
#define P_Initialize_Read_Excom_Variables_Flag 14411
#define P_Old_X_Read_Count_S 14412
#define P_Cathode_Clamp_MC_Cylinder_Count 14421
#define P_Cathode_Clamp_OP_Cylinder_Count 14422
#define P_Anode_Clamp_MC_Cylinder_Count 14423
#define P_Anode_Clamp_OP_Cylinder_Count 14424
#define P_Cathode_1ST_TR_Cylinder_Count 8003
#define P_Anode_1ST_TR_Cylinder_Count 8004
#define P_BTN_Cathode_Clamp_inside_Machine_Cylinder_Count_Clear 14425
#define P_BTN_Cathode_Clamp_Middle_Cylinder_Count_Clear 14426
#define P_BTN_Cathode_Clamp_outside_Machine_Cylinder_Count_Clear 14427
#define P_BTN_Anode_Clamp_inside_Machine_Cylinder_Count_Clear 14428
#define P_BTN_Anode_Clamp_Middle_Cylinder_Count_Clear 14429
#define P_BTN_Anode_Clamp_outside_Machine_Cylinder_Count_Clear 14430
#define P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear 14431
#define P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear_Old 14432
#define P_BTN_Anode_1ST_TR_Cylinder_Count_Clear 14433
#define P_BTN_Anode_1ST_TR_Cylinder_Count_Clear_Old 14434
#define P_X_BTN_Manual_1 14435
#define P_X_BTN_Manual_2 14555
#define P_X_BTN_Manual_3 14675
#define P_Home_InterLock_M 14795
#define P_Status_BTN_Manual_1 14845
#define P_Status_BTN_Manual_2 14965
#define P_Status_BTN_Manual_Interlock_1 15085
#define P_Status_BTN_Manual_Interlock_2 15205
#define P_Status_BTN_Manual_Interlock_3 15325
#define P_Mode_Run_Enable_Flag 15445
#define P_RECIPE_PLC27_Manual_Interval 15450
#define P_RECIPE_PLC27_Auto_Interval 15451
#define P_MNTR_PLC4_Vision_Result 15452
#define P_PNP_Vac_Mode_Run_Enable_Flag 15653
#define P_Recipe_Speed_Value 15658
#define P_Slave6_Target_X_For_Cell_Out 15659
#define P_HCK_Step_MNTR 15660
#define P_Axis_Home_Pos 15710
#define P_Axis_Ready_Pos 15760
#define P_PMAC_Homing_CHK 15810
#define P_Poistion_error 15860
#define P_Home_Command 15861
#define P_Recipe_Count_Num 15911
#define L_Motor_Status_Update_Interval 15912
#define L_Motor_Recipe_Update_Interval 15913
#define P_UI_Servo_On_Off 15914
#define P_Old_BTN_Servo_On_Off_M 15915
#define P_Peak_Load_Ratio_M 15948
#define P_Chk_Current_Jog_Sel 15981
#define P_Jog_Sel_Count 16014
#define P_Recipe_POS_Interock_Num_Bit 16015
#define P_Recipe_VEL 16048
#define P_Recipe_POS 16059
#define P_BTN_Servo_On_Off_M 16070
#define P_BTN_Home_M 16103
#define P_BTN_Jog_Stop_M 16136
#define P_BTN_Recipe_POS_RUN_M 16169
#define P_Recipe_POS_Flag_M 16202
#define P_BTN_Jog_INC_M 16235
#define P_BTN_JOG_ABS_M 16268
#define P_User_Jog_Distance 16301
#define P_Unit_Command 16302
#define P_Unit_State_Machine 16402
#define P_Status_BTN_Manual_3 16502
#define P_Chk_Current_BTN_Sel 16602
#define P_BTN_Sel_Count 16652
#define P_PC_BTN_No 16653
#define P_BTN_Interlock_Update_Interval 16654
#define P_Align_Table_Status_Update_Interval 16655
#define P_Jelly_Roll_Total_Count_Old 16656
#define P_Old_m4120 16657
#define P_Old_m4121 16658
#define P_Old_m4122 16659
#define P_Old_m4123 16660
#define P_Linear_Encoder_Pos_Check_Flag 16661
#define P_Linear_Encoder_Pos 16666
#define P_Status_Linear_Encoder_HomeZero 16671
#define P_Command_Linear_Encoder_HomeZero 16676
#define P_Flag_Linear_Enc_Homezero_Complete_M17 16681
#define P_Flag_Linear_Enc_Homezero_Complete_M18 16682
#define P_Flag_Linear_Enc_Homezero_Complete_M19 16683
#define P_Flag_Linear_Enc_Homezero_Complete_M20 16684
#define P_CMD_Linear_ENC_Homezero_M17 16685
#define P_CMD_Linear_ENC_Homezero_M18 16686
#define P_CMD_Linear_ENC_Homezero_M19 16687
#define P_CMD_Linear_ENC_Homezero_M20 16688
#define P_OLD_Home_Offset 16689
#define P_RECIPE_PLC27_Alltime_Interval 16719
#define P_Manual_Memory_Tower_Timer 16720
#define P_Memory_Tower_Interval 16721
#define P_PLC_14_Status_Cycle_Stop_Flag 16722
#define P_Cathode_AlignTable_Cleaning_Pos_Status_Machine 16723
#define P_Anode_AlignTable_Cleaning_Pos_Status_Machine 16724
#define P_Status_Cathode_AlignTable_Cleaning_Pos 16725
#define P_Status_Anode_AlignTable_Cleaning_Pos 16726
#define P_CMD_Cathode_AlignTable_Cleaning_Pos 16727
#define P_CMD_Anode_AlignTable_Cleaning_Pos 16728
#define P_Cathode_2nd_pnp_Cleaning_Mode_Pos 16729
#define P_Anode_2nd_pnp_Cleaning_Mode_Pos 16730
#define P_Interlock_Test 16731
#define P_PNP_Picker_T_Pos 16732
#define P_NG_PNP_Pos 16733
#define M_Old_X_BTN_Machine_READY 16734
#define M_Old_X_BTN_Machine_START 16735
#define M_Old_X_BTN_Machine_STOP 16736
#define M_Old_X_BTN_Machine_RESET 16737
#define M_Old_X_BTN_Machine_MODE 16738
#define P_BTN_Motor_Pos_Check_RTN 16739
#define P_BTN_Memory_Tower_Check_Bit 16740
#define P_PMAC_Status_IDLE_Motor_Not_Pos 16741
#define P_PMAC_Status_IDLE_Motor_Pos 16742
#define P_BTN_Motor_Pos_Check_Monitor 16743
#define P_PackML_Auto_Stop_Bit 16744
#define P_BTN_IDLE_Motor_Not_Pos 16745
#define M_X_BTN_Machine_Mode 16746
#define M_Old_X_BTN_Machine_Mode 16747
#define P_Lamp_Blinking_Timer 16748
#define P_BTN_Ready_Lamp 16749
#define P_BTN_Start_Lamp 16750
#define P_BTN_Stop_Lamp 16751
#define P_ARC_Name_Plate_Passive_Status 16752
#define P_ARC_Passive_Status 16753
#define P_NP_Spool_Number 16754
#define P_ARC_Page_On 16755
#define P_ARC_NP_Upper_Timer 16756
#define P_ARC_Upper_Ready 16757
#define P_ARC_NP_Upper_3rd_Step_Toggle_Variable 16758
#define P_ARC_NP_Upper_7th_Step_Variable 16759
#define P_ARC_NP_Upper_7th_Step_Edge_Variable 16760
#define P_ARC_NP_Upper_Rot_ReRot_Blinking_Bit 16761
#define P_ARC_NP_Lower_Timer 16762
#define P_ARC_Lower_Ready 16763
#define P_ARC_NP_Lower_3rd_Step_Toggle_Variable 16764
#define P_ARC_NP_Lower_7th_Step_Variable 16765
#define P_ARC_NP_Lower_7th_Step_Edge_Variable 16766
#define P_ARC_NP_Lower_Rot_ReRot_Blinking_Bit 16767
#define M_Old_X_ARC_NP_Ready 16768
#define M_Old_X_ARC_NP_Unwinder_Rotation 16769
#define M_Old_X_ARC_NP_Unwinder_Re_Rotation 16770
#define P_Status_Clear_Flag 16771
#define P_Status_Clear_RTN 16772
#define P_MSA_BTN_On 16773
#define P_Align_Take_Off_BTN_ON 16774
#define P_ARC_NP_Upper_Ready_Check_Bit 16775
#define P_ARC_NP_Lower_Ready_Check_Bit 16776
#define P_PLC13_Cycle_Stop_Return_Array 16777
#define P_Stopping_CycleStop_Status 16877
#define P_Stopping_CycleStop_Seq_Index 16878
#define P_Stopping_CycleStop_Precondition_Seq_Index 16879
#define P_Stopping_CycleStop_Module_Status 16880
#define P_Stopping_CycleStop_Cmd 16881
#define P_Stopping_CycleStop_State_Machine 16882
#define P_Stopping_CycleStop_Act_State_Machine 16883
#define P_Module_Cycle_Stop_Act_State_Machine_Array 16903
#define P_Module_Cycle_Stop_Act_Complete_Bit 16923
#define P_Module_Cycle_Stop_Act_Command_Array 16943
#define P_OLD_Module_Cycle_Stop_Act_Command_Array 16963
#define P_Buffer_Seqdata_CycleStop_Array 16983
#define P_Final_Roll_Cathode_Pos_Status 17003
#define P_Sheet_Paper_FWD_Pos_Status 17004
#define P_Final_Roll_Vision_Pos_Status 17005
#define P_Cathode_Clamp_ON_Status 17006
#define P_Anode_Clamp_ON_Status 17007
#define P_Anode_Clamp_OFF_Status 17008
#define P_Partition_Up_Flag 17009
#define P_Partition_Down_Flag 17010
#define P_Partition_Avoid_Flag 17011
#define P_Partition_Avoid_Z_Speed 17012
#define P_Partition_Avoid_X_Speed 17013
#define P_Partition_Avoid_T_Speed 17014
#define P_Partition_Avoid_2nd_T_Pos 17015
#define P_Partition_Step_Flag 17016
#define P_Tact_Time_Timer 17017
#define P_Tack_Time_Save_Time 17057
#define P_Anode_NG_PNP_Tact_Time_Start 17097
#define P_Cathode_NG_PNP_Tact_Time_Start 17098
#define P_Anode_NG_PNP_Tact_Time_End 17099
#define P_Cathode_NG_PNP_Tact_Time_End 17100
#define P_Tact_Time_Stack_Array 17101
#define P_Tact_Time_Discharge_Array 17111
#define P_Tact_Time_1st_Unloader_Array 17121
#define P_Tact_Time_Sepa_ARC_Array 17131
#define P_Tact_Time_Final_Roll_Array 17141
#define P_Tact_Time_Cathode_1st_PNP_Array 17151
#define P_Tact_Time_Cathode_Align_Array 17161
#define P_Tact_Time_Cathode_2nd_PNP_Array 17171
#define P_Tact_Time_Cathode_Clamp_Array 17181
#define P_Tact_Time_Anode_1st_PNP_Array 17191
#define P_Tact_Time_Anode_Align_Array 17201
#define P_Tact_Time_Anode_2nd_PNP_Array 17211
#define P_Tact_Time_Anode_Clamp_Array 17221
#define P_Tact_Time_Cathode_1st_PNP_Vac_Array 17231
#define P_Tact_Time_Cathode_Align_PNP_Vac_Array 17241
#define P_Tact_Time_Cathode_2nd_PNP_Vac_Array 17251
#define P_Tact_Time_Anode_1st_PNP_Vac_Array 17261
#define P_Tact_Time_Anode_Align_PNP_Vac_Array 17271
#define P_Tact_Time_Anode_2nd_PNP_Vac_Array 17281
#define P_Tact_Time_Final_Roller_Clamp 17291
#define P_Tact_Time_Final_Roller_Unclamp 17292
#define P_Tact_Time_Stack_Table_Down 17293
#define P_Tact_Time_Stack_Table_Up 17294
#define P_Tact_Time_Sepa_Cutting_Down 17295
#define P_Tact_Time_Sepa_Cutting_Up 17296
#define P_Tact_Time_ARC_Upper_Plate_Up 17297
#define P_Tact_Time_ARC_Upper_Plate_Down 17298
#define P_Tact_Time_ARC_Upper_Tilting_On 17299
#define P_Tact_Time_ARC_Upper_Tilting_Off 17300
#define P_Tact_Time_ARC_Upper_Cutter_Fwd 17301
#define P_Tact_Time_ARC_Upper_Cutter_Bwd 17302
#define P_Tact_Time_ARC_Upper_Clamp_On 17303
#define P_Tact_Time_ARC_Upper_Clamp_Off 17304
#define P_Tact_Time_ARC_Lower_Plate_Up 17305
#define P_Tact_Time_ARC_Lower_Plate_Down 17306
#define P_Tact_Time_ARC_Lower_Tilting_On 17307
#define P_Tact_Time_ARC_Lower_Tilting_Off 17308
#define P_Tact_Time_ARC_Lower_Cutter_Fwd 17309
#define P_Tact_Time_ARC_Lower_Cutter_Bwd 17310
#define P_Tact_Time_ARC_Lower_Clamp_On 17311
#define P_Tact_Time_ARC_Lower_Clamp_Off 17312
#define P_Tact_Time_Save_Final_Roller_Clamp_Time 17313
#define P_Tact_Time_Save_Final_Roller_Unclamp_Time 17314
#define P_Tact_Time_Save_Stack_Table_Down_Time 17315
#define P_Tact_Time_Save_Stack_Table_Up_Time 17316
#define P_Tact_Time_Save_Sepa_Cutting_Down_Time 17317
#define P_Tact_Time_Save_Sepa_Cutting_Up_Time 17318
#define P_Tact_Time_Save_ARC_Upper_Plate_Up_Time 17319
#define P_Tact_Time_Save_ARC_Upper_Plate_Down_Time 17320
#define P_Tact_Time_Save_ARC_Upper_Tilting_On_Time 17321
#define P_Tact_Time_Save_ARC_Upper_Tilting_Off_Time 17322
#define P_Tact_Time_Save_ARC_Upper_Cutter_Fwd_Time 17323
#define P_Tact_Time_Save_ARC_Upper_Cutter_Bwd_Time 17324
#define P_Tact_Time_Save_ARC_Upper_Clamp_On_Time 17325
#define P_Tact_Time_Save_ARC_Upper_Clamp_Off_Time 17326
#define P_Tact_Time_Save_ARC_Lower_Plate_Up_Time 17327
#define P_Tact_Time_Save_ARC_Lower_Plate_Down_Time 17328
#define P_Tact_Time_Save_ARC_Lower_Tilting_On_Time 17329
#define P_Tact_Time_Save_ARC_Lower_Tilting_Off_Time 17330
#define P_Tact_Time_Save_ARC_Lower_Cutter_Fwd_Time 17331
#define P_Tact_Time_Save_ARC_Lower_Cutter_Bwd_Time 17332
#define P_Tact_Time_Save_ARC_Lower_Clamp_On_Time 17333
#define P_Tact_Time_Save_ARC_Lower_Clamp_Off_Time 17334
#define P_Tact_Time_Check 17335
#define P_Old_Tact_Time_Check 17375
#define P_Tact_Time_Head_Address 17415
#define P_Tact_Time_Array_Init 17455
#define P_Last_Run_To_Discharge_Tact_Timer 17456
#define P_Last_Run_To_Discharge_Tact_Time 17457
#define P_Master_Trigger_Sync_Tact_Timer 17458
#define P_Master_Trigger_Sync_Tact_Time 17459
#define P_Vision_First_Sepa_Stack_Align_OK_PMAC_Flag 17460
#define P_PLC18_EPC_Retry_Mode_Time_Use_Flag 17461
#define P_PLC18_Vision_EPC_Correction_Request_Old 17462
#define P_PLC18_EPC_Moving_Flag 17463
#define P_PLC18_EPC_Moving_Status 17464
#define P_PLC18_EPC_Move_State_Machine 17465
#define P_PLC18_EPC_Move_Status 17466
#define P_PLC18_EPC_inspection_Time 17467
#define P_EPC_Insp_Time 17468
#define P_EPC_Correction_Time 17469
#define P_TEST_Max_EPC_Sensor_Value_um 17470
#define P_PLC18_EPC_Moving_Timer 17471
#define P_EPC_MNTR_VAR 17472
#define P_EPC_Axis_Target_Y 17482
#define P_Com_After_Sepa_Mode_Status 17483
#define P_PLC18_PLC_to_PMAC_Correction_Value 17484
#define P_PLC_EPC_Status 17485
#define P_EPC_Retry_Over_Alarm_Flag 17486
#define P_ARC_EPC_Vision_Value_Apply_Bit 17487
#define P_ARC_EPC_Vision_Value_Apply_Flag 17488
#define P_ARC_EPC_Vision_Value_Apply_State_Machine 17489
#define P_ARC_EPC_Vision_Value_Apply_Timer 17490
#define P_ARC_EPC_Vision_Value_Apply_Time 17491
#define P_AH_Home_Status 17492
#define P_Resetting_All_Home_Command 17493
#define P_Homing_Alarm_Time 17494
#define P_Home_Check_Arry 17495
#define P_All_Home_Stop_Cmd 17545
#define P_Home_First_Move 17546
#define P_PWM_Phasing_Start 17547
#define P_PWM_Status 17552
#define P_PWM_State_Machine 17557
#define P_AH_Seq_arr 17562
#define P_DD_M_Home_ABS_Pos 17577
#define P_AH_Indvi_rtn 17582
#define P_DD_M_Home_Pos_Flag 17633
#define P_WAIT_INDEX 17634
#define P_Home_Check_Arry1 17635
#define P_FR_Cmd_Check_Flag 17685
#define M_Ecat_Motor_State 8459
#define P_PV_Separator_Dancer_Pressure 17686
#define P_PV_Cathode_Clamp_Pressure 17687
#define P_PV_Anoode_Clamp_Pressure 17688
#define P_PV_Cathode_Final_Roller_X_Axis 17689
#define P_PV_Anode_Final_Roller_X_Axis 17690
#define P_PV_Cathode_Clamp_ON_Y1_Axis_Pos 17691
#define P_PV_Cathode_Clamp_ON_Y2_Axis_Pos 17692
#define P_PV_Cathode_Clamp_ON_Z1_Axis_Pos 17693
#define P_PV_Cathode_Clamp_ON_Z2_Axis_Pos 17694
#define P_PV_Anode_Clamp_ON_Y1_Axis_Pos 17695
#define P_PV_Anode_Clamp_ON_Y2_Axis_Pos 17696
#define P_PV_Anode_Clamp_ON_Z1_Axis_Pos 17697
#define P_PV_Anode_Clamp_ON_Z2_Axis_Pos 17698
#define P_PV_Cathode_2th_AT_T_Axis_Pos 17699
#define P_PV_Cathode_2th_ST_T_Axis_Pos 17700
#define P_PV_Cathode_2th_AT_Z_Axis_Pos 17701
#define P_PV_Cathode_2th_ST_Z_Axis_Pos 17702
#define P_PV_Anode_2th_AT_T_Axis_Pos 17703
#define P_PV_Anode_2th_ST_T_Axis_Pos 17704
#define P_PV_Anode_2th_AT_Z_Axis_Pos 17705
#define P_PV_Anode_2th_ST_Z_Axis_Pos 17706
#define P_PV_Cathode_1th_Ready_T_Axis_Pos 17707
#define P_PV_Cathode_1th_CV_T_Axis_Pos 17708
#define P_PV_Cathode_1th_AT_T_Axis_Pos 17709
#define P_PV_Cathode_1th_Ready_Z_Axis_Pos 17710
#define P_PV_Cathode_1th_CV_Z_Axis_Pos 17711
#define P_PV_Cathode_1th_AT_Z_Axis_Pos 17712
#define P_PV_Anode_1th_Ready_T_Axis_Pos 17713
#define P_PV_Anode_1th_CV_T_Axis_Pos 17714
#define P_PV_Anode_1th_AT_T_Axis_Pos 17715
#define P_PV_Anode_1th_Ready_Z_Axis_Pos 17716
#define P_PV_Anode_1th_CV_Z_Axis_Pos 17717
#define P_PV_Anode_1th_AT_Z_Axis_Pos 17718
#define P_PV_Cathode_NG_AT_T_Axis_Pos 17719
#define P_PV_Cathode_NG_Box_T_Axis_Pos 17720
#define P_PV_Anode_NG_AT_T_Axis_Pos 17721
#define P_PV_Anode_NG_Box_T_Axis_Pos 17722
#define P_SemiRun_Separator_Dancer_Pressure_Flag 17723
#define P_SemiRun_Cathode_Clamp_Pressure_Flag 17724
#define P_SemiRun_Anoode_Clamp_Pressure_Flag 17725
#define P_SemiRun_Cathode_Final_Roller_X_Axis_Flag 17726
#define P_SemiRun_Anode_Final_Roller_X_Axis_Flag 17727
#define P_SemiRun_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag 17728
#define P_SemiRun_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag 17729
#define P_SemiRun_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag 17730
#define P_SemiRun_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag 17731
#define P_SemiRun_Cathode_2th_AT_T_Axis_Pos_Flag 17732
#define P_SemiRun_Cathode_2th_ST_T_Axis_Pos_Flag 17733
#define P_SemiRun_Cathode_2th_AT_Z_Axis_Pos_Flag 17734
#define P_SemiRun_Cathode_2th_ST_Z_Axis_Pos_Flag 17735
#define P_SemiRun_Anode_2th_AT_T_Axis_Pos_Flag 17736
#define P_SemiRun_Anode_2th_ST_T_Axis_Pos_Flag 17737
#define P_SemiRun_Anode_2th_AT_Z_Axis_Pos_Flag 17738
#define P_SemiRun_Anode_2th_ST_Z_Axis_Pos_Flag 17739
#define P_SemiRun_Cathode_1th_Ready_T_Axis_Pos_Flag 17740
#define P_SemiRun_Cathode_1th_CV_T_Axis_Pos_Flag 17741
#define P_SemiRun_Cathode_1th_AT_T_Axis_Pos_Flag 17742
#define P_SemiRun_Cathode_1th_Ready_Z_Axis_Pos_Flag 17743
#define P_SemiRun_Cathode_1th_CV_Z_Axis_Pos_Flag 17744
#define P_SemiRun_Cathode_1th_AT_Z_Axis_Pos_Flag 17745
#define P_SemiRun_Anode_1th_Ready_T_Axis_Pos_Flag 17746
#define P_SemiRun_Anode_1th_CV_T_Axis_Pos_Flag 17747
#define P_SemiRun_Anode_1th_AT_T_Axis_Pos_Flag 17748
#define P_SemiRun_Anode_1th_Ready_Z_Axis_Pos_Flag 17749
#define P_SemiRun_Anode_1th_CV_Z_Axis_Pos_Flag 17750
#define P_SemiRun_Anode_1th_AT_Z_Axis_Pos_Flag 17751
#define P_SemiRun_Cathode_NG_AT_T_Axis_Pos_Flag 17752
#define P_SemiRun_Cathode_NG_Box_T_Axis_Pos_Flag 17753
#define P_SemiRun_Anode_NG_AT_T_Axis_Pos_Flag 17754
#define P_SemiRun_Anode_NG_Box_T_Axis_Pos_Flag 17755
#define P_Motion_Separator_Dancer_Pressure_Flag 17756
#define P_Motion_Cathode_Clamp_Pressure_Flag 17757
#define P_Motion_Anoode_Clamp_Pressure_Flag 17758
#define P_Motion_Cathode_Final_Roller_X_Axis_Flag 17759
#define P_Motion_Anode_Final_Roller_X_Axis_Flag 17760
#define P_Motion_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag 17761
#define P_Motion_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag 17762
#define P_Motion_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag 17763
#define P_Motion_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag 17764
#define P_Motion_Cathode_2th_AT_T_Axis_Pos_Flag 17765
#define P_Motion_Cathode_2th_ST_T_Axis_Pos_Flag 17766
#define P_Motion_Cathode_2th_AT_Z_Axis_Pos_Flag 17767
#define P_Motion_Cathode_2th_ST_Z_Axis_Pos_Flag 17768
#define P_Motion_Anode_2th_AT_T_Axis_Pos_Flag 17769
#define P_Motion_Anode_2th_ST_T_Axis_Pos_Flag 17770
#define P_Motion_Anode_2th_AT_Z_Axis_Pos_Flag 17771
#define P_Motion_Anode_2th_ST_Z_Axis_Pos_Flag 17772
#define P_Motion_Cathode_1th_Ready_T_Axis_Pos_Flag 17773
#define P_Motion_Cathode_1th_CV_T_Axis_Pos_Flag 17774
#define P_Motion_Cathode_1th_AT_T_Axis_Pos_Flag 17775
#define P_Motion_Cathode_1th_Ready_Z_Axis_Pos_Flag 17776
#define P_Motion_Cathode_1th_CV_Z_Axis_Pos_Flag 17777
#define P_Motion_Cathode_1th_AT_Z_Axis_Pos_Flag 17778
#define P_Motion_Anode_1th_Ready_T_Axis_Pos_Flag 17779
#define P_Motion_Anode_1th_CV_T_Axis_Pos_Flag 17780
#define P_Motion_Anode_1th_AT_T_Axis_Pos_Flag 17781
#define P_Motion_Anode_1th_Ready_Z_Axis_Pos_Flag 17782
#define P_Motion_Anode_1th_CV_Z_Axis_Pos_Flag 17783
#define P_Motion_Anode_1th_AT_Z_Axis_Pos_Flag 17784
#define P_Motion_Cathode_NG_AT_T_Axis_Pos_Flag 17785
#define P_Motion_Cathode_NG_Box_T_Axis_Pos_Flag 17786
#define P_Motion_Anode_NG_AT_T_Axis_Pos_Flag 17787
#define P_Motion_Anode_NG_Box_T_Axis_Pos_Flag 17788
#define P_Cathode_1PNP_Sacle_Value 17789
#define P_Cathode_2PNP_Sacle_Value 17790
#define P_Anode_1PNP_Sacle_Value 17791
#define P_Anode_2PNP_Sacle_Value 17792
#define P_PLC01_SemiRun_PV_Flag 17793
#define P_PV_EPC_Index 17794
#define P_PV_EPC_Camera_Pos 17795
#define P_BTN_MSA_Total_Value 17810
#define P_Vision_Align_Trigger_Timer 17811
#define P_Vision_Stack_Trigger_Timer 17812
#define P_MSA_Chk_Pos_Timer 17813
#define P_MSA_Chk_Pos_Time 17814
#define P_VISION_MSA_Status_Prod_Sequence 17815
#define P_VISION_MSA_Seq_Index 17835
#define P_VISION_MSA_Anode_Align_Bit_Pos 17836
#define P_VISION_MSA_Seq_PreCondition_Index 17837
#define P_MSA_CycleStop_Point_Check_Complete_RTN 17838
#define P_MSA_Cmd 17839
#define P_Current_Anode_Align_MSA_Run_Count 17844
#define P_Current_Cathode_Align_MSA_Run_Count 17845
#define P_Current_Anode_Stack_MSA_Run_Count 17846
#define P_Current_Cathode_Stack_MSA_Run_Count 17847
#define P_VISION_MSA_Align_Count_Chk_Flag 17848
#define P_VISION_MSA_Stack_Count_Chk_Flag 17849
#define P_VISION_MSA_pre_InterLock_Cmd 17850
#define P_VISION_MSA_pre_InterLock_Status 17851
#define P_VISION_MSA_pre_InterLock_Check_Assy_Bit 17852
#define P_VISION_MSA_pre_InterLock_Assy_Bit_Pos 17853
#define P_Vision_MSA_Interlock_Status 17854
#define P_VISION_MSA_MODE 17855
#define P_VISION_MSA_Status_Flag 17856
#define P_VISION_MSA_State_Machine 17857
#define P_VISION_MSA_Status 17858
#define P_VISION_MSA_Seq_Command_Occurs 17859
#define P_Vision_Align_Trigger_Time 17860
#define P_Anode_Align_MSA_Motion_Check 17861
#define P_Cathode_Align_MSA_Motion_Check 17862
#define P_Anode_Stack_MSA_Motion_Check 17863
#define P_Cathode_Stack_MSA_Motion_Check 17864
#define P_Anode_Align_MSA_Motion_ProgActive_Complete 17865
#define P_Cathode_Align_MSA_Motion_ProgActive_Complete 17866
#define P_Anode_Stack_MSA_Motion_ProgActive_Complete 17867
#define P_Cathode_Stack_MSA_Motion_ProgActive_Complete 17868
#define P_BTN_Align_Off_Total_Value 17869
#define P_Align_Take_Off_Cmd 17870
#define P_Align_Take_Off_Status 17873
#define P_Align_Take_Off_Mode 17874
#define P_Align_Take_Off_Status_Flag 17875
#define P_Align_Take_Off_State_Machine 17876
#define P_Align_Take_Off_Chk_Pos_Timer 17877
#define P_Align_Take_Off_Motor_Check_Complete 17878
#define P_Align_Take_Off_Speed_Return_Complete 17879
#define P_Align_Take_Off_Interlock_Status 17880
#define P_Align_Take_Off_pre_InterLock_Cmd 17881
#define P_Align_Take_Off_pre_InterLock_Status 17882
#define P_Align_Take_Off_pre_InterLock_Check_Assy_Bit 17883
#define P_Align_Take_Off_pre_InterLock_Assy_Bit_Pos 17884
#define P_Align_Take_Off_Seq_Index 17885
#define P_Align_Take_Off_Seq_PreCondition_Index 17886
#define P_Align_Take_Off_Status_Prod_Sequence 17887
#define P_Align_Take_Off_Stop_Signal 17907
#define P_Vision_Cal_Reset_Count 17908
#define P_2nd_PNP_Cleaning_Mode_Cmd 17909
#define P_2nd_PNP_Cleaning_Mode_Status 17910
#define P_2nd_PNP_Cleaning_Mode_Z_Jog_Speed 17911
#define P_2nd_PNP_Cleaning_Mode_X_Jog_Speed 17912
#define P_2nd_PNP_Cleaning_Mode_T_Jog_Speed 17913
#define P_2nd_PNP_Cleaning_Avoid_2nd_T_Pos 17914
#define P_PNP_Vac_Chk_Mode_Interlock 17915
#define P_Vac_Chk_Test 17916
#define P_Anode_1st_PNP_Vac_Chk_Mode_Blocked 17917
#define P_Cathode_1st_PNP_Vac_Chk_Mode_Blocked 17918
#define P_Anode_2nd_PNP_Vac_Chk_Mode_Blocked 17919
#define P_Cathode_2nd_PNP_Vac_Chk_Mode_Blocked 17920
#define P_SM_Anode_1st_PNP_Vac_Chk_Mode 17921
#define P_SM_Cathode_1st_PNP_Vac_Chk_Mode 17922
#define P_SM_Anode_2nd_PNP_Vac_Chk_Mode 17923
#define P_SM_Cathode_2nd_PNP_Vac_Chk_Mode 17924
#define P_Anode_1st_PNP_Vac_Chk_Execute_Timer 17925
#define P_Cathode_1st_PNP_Vac_Chk_Execute_Timer 17926
#define P_Anode_2nd_PNP_Vac_Chk_Execute_Timer 17927
#define P_Cathode_2nd_PNP_Vac_Chk_Execute_Timer 17928
#define P_Anode_1st_PNP_Vac_Check_Timer 17929
#define P_Cathode_1st_PNP_Vac_Check_Timer 17930
#define P_Anode_2nd_PNP_Vac_Check_Timer 17931
#define P_Cathode_2nd_PNP_Vac_Check_Timer 17932
#define P_Anode_1st_PNP_Vac_Chk_Status 17933
#define P_Cathode_1st_PNP_Vac_Chk_Status 17934
#define P_Anode_2nd_PNP_Vac_Chk_Status 17935
#define P_Cathode_2nd_PNP_Vac_Chk_Status 17936
#define P_Anode_1st_PNP_Vac_Chk_Mode_Stop_Blocked 17937
#define P_Cathode_1st_PNP_Vac_Chk_Mode_Stop_Blocked 17938
#define P_Anode_2nd_PNP_Vac_Chk_Mode_Stop_Blocked 17939
#define P_Cathode_2nd_PNP_Vac_Chk_Mode_Stop_Blocked 17940
#define P_Anode_1st_PnP_Vac_Chk_Mode_RTN 17941
#define P_Cathode_1st_PnP_Vac_Chk_Mode_RTN 17942
#define P_Anode_2nd_PnP_Vac_Chk_Mode_RTN 17943
#define P_Cathode_2nd_PnP_Vac_Chk_Mode_RTN 17944
#define P_PNP_Vac_Chk_Mode_TimeBase_Rtn 17945
#define P_PNP_Vac_Chk_Mode_Timer 17946
#define P_Anode_1st_PNP_Vac_Chk_Mode_Err 17947
#define P_Cathode_1st_PNP_Vac_Chk_Mode_Err 17948
#define P_Anode_2nd_PNP_Vac_Chk_Mode_Err 17949
#define P_Cathode_2nd_PNP_Vac_Chk_Mode_Err 17950
#define P_PNP_Vac_Chk_Mode_BTN_Err 17951
#define P_BTN_CA_1st_PNP_Vac_Chk_Mode 17952
#define P_BTN_AN_1st_PNP_Vac_Chk_Mode 17953
#define P_BTN_CA_2nd_PNP_Vac_Chk_Mode 17954
#define P_BTN_AN_2nd_PNP_Vac_Chk_Mode 17955
#define P_Old_Upper_Sensor 17956
#define P_Edge_Upper_Sensor 17964
#define P_Old_Lower_Sensor 17972
#define P_Edge_Lower_Sensor 17980
#define P_Edge_NP_BTN 17988
#define P_UI_Unit_Status 17990
#define P_Motor_Unit_Status 18000
#define P_Current_Homming_Status_To_PLC 18050
#define P_System_Cascading_ON_Cmd 18100
#define P_System_Cascading_OFF_Cmd 18101
#define P_System_Master_Following_ON_Cmd 18102
#define P_System_Master_Following_OFF_Cmd 18103
#define P_System_CamTable_ON_Cmd 18104
#define P_System_CamTable_OFF_Cmd 18105
#define P_System_Spool_Home_Ready_Pos_Cmd 18106
#define P_System_Cascading_ON_Status 18107
#define P_System_Cascading_OFF_Status 18108
#define P_System_Master_Following_ON_Status 18109
#define P_System_Master_Following_OFF_Status 18110
#define P_System_CamTable_ON_Status 18111
#define P_System_CamTable_OFF_Status 18112
#define P_System_Spool_Home_Ready_Pos_Status 18113
#define P_System_Cascading_ON_State_Machine 18114
#define P_System_Cascading_OFF_State_Machine 18115
#define P_System_Master_Follwing_ON_State_Machine 18116
#define P_System_Master_Follwing_OFF_State_Machine 18117
#define P_System_CamTable_ON_State_Machine 18118
#define P_System_CamTable_OFF_State_Machine 18119
#define P_System_Spool_Home_Ready_Pos_State_Machine 18120
#define P_System_Cascading_ON_Complete_Flag 18121
#define P_System_Cascading_OFF_Complete_Flag 18122
#define P_System_Master_Following_ON_Complete_Flag 18123
#define P_System_Master_Following_OFF_Complete_Flag 18124
#define P_System_CamTable_ON_Complete_Flag 18125
#define P_System_CamTable_OFF_Complete_Flag 18126
#define P_System_Spool_Home_Ready_Pos_Complete_Flag 18127
#define P_Servo_Dancer_Cascading_Off_Timer 18128
#define P_Servo_Dancer_Cascading_Set_Timer 18129
#define P_Dancer_Frist_Home_Ready_Pos_Timer 18130
#define P_Driving_Motor_Use_Flag 18131
#define P_Home_Spool_Unwinding 18132
#define P_OutValue 18133
#define P_Dancer_Out_Slew_Seq 18134
#define P_OutChangeValue 18135
#define P_Rot_OutValue 18136
#define P_OutChangeTime 18137
#define P_AO_Module_Arr 18138
#define P_AO_Range_Set_Value 18143
#define P_Regul_Max_kPa_Value 18148
#define P_Regul_Min_kPa_Value 18149
#define P_Regul_Max_AD 18150
#define P_Regul_Min_AD 18151
#define P_Current_Max_Value 18152
#define P_Current_Min_Value 18153
#define P_Current_Max_AD 18154
#define P_Current_Min_AD 18155
#define P_Sepa_Cal_Inclination 18156
#define P_Regul_Cal_Inclination 18157
#define P_Cutter_Heat_Amp_Data_Bit 18158
#define P_Cut_Heat_Amp_Value 18159
#define P_AI_Cathode_Clamp_Damper_AVG 18160
#define P_AI_Anode_Clamp_Damper_AVG 18161
#define P_Tension_Ready_Pos_Cmd 18162
#define P_Tension_Ready_State_Machine 18163
#define P_Tension_Ready_Pos_Status 18164
#define P_Dancer_Center_Pos 18165
#define P_Upper_Sepa_Cal_Inclination 18166
#define P_Lower_Sepa_Cal_Inclination 18167
#define P_Unwinder_Jogspeed 18168
#define P_Cascading_First_Out 18169
#define P_Dancer_Cur_Vdc 18170
#define P_Dancer_Cur_Torque 18171
#define P_Dancer_Cur_Newton 18172
#define P_Dancer_Cur_Kgf 18173
#define P_Board_IO_Count 18174
#define P_Force_BTN_Address_Clear_Count 18175
#define P_Force_BTN_M_Variable_Save 18176
#define P_Force_BTN_Condition_Count 18560
#define P_Old_Force_BTN_Mode 18561
#define P_Force_BTN_Address_Count 18562
#define P_Force_BTN_GPIO_Address_Count 18563
#define P_Force_BTN_Ecat_Address_Count 18564
#define P_Force_BTN_M_Variable_Save_Count 18565
#define P_Force_BTN_M_Variable_Start_Num 18566
#define P_Force_BTN_Normal_Mode_Status 18567
#define P_Force_BTN_Normal_Mode_State_Machine 18568
#define P_Force_BTN_Normal_Mode_Complete_Flag 18569
#define P_Force_BTN_Force_Mode_Timer 18570
#define P_Force_BTN_Force_Mode_Delay_Time 18571
#define P_Force_BTN_Force_Mode_Status 18572
#define P_Force_BTN_Force_Mode_State_Machine 18573
#define P_Force_BTN_Force_Mode_Complete_Flag 18574
#define P_Mem_Save_Error_Bit 18575
#define P_ABS_Phasing_Data 18576
#define P_ABS_Home_Offset_Data 18581
#define P_Servo_Gain_Save_Command 18586
#define P_Servo_Gain_Load_Command 18587
#define P_Servo_Gain_Save_Flag 18588
#define P_Servo_Gain_Load_Flag 18589
#define P_Servo_Gain_Kp 18590
#define P_Servo_Gain_Kvfb 18620
#define P_Servo_Gain_Kvff 18650
#define P_Servo_Gain_Ki 18680
#define P_Servo_Gain_SwZvInt 18710
#define P_Servo_Gain_Kaff 18740
#define P_Insert_Phase_Flag 18770
#define P_Alarm_Arr 18771
#define P_Alarm_Occur_Flag 18871
#define P_Alarm_Occur_Index_Flag 18872
#define P_Alarm_Wait_Time 18876
#define P_Alarm_Delay_Timer 18877
#define P_Compare_Priority 18878
#define P_Alarm_Report 18879
#define P_Alarm_Num 18880
#define P_Alarm_Index 18881
#define P_First_Alarm_Flag 18882
#define P_Alarm_Log 18883
#define P_First_Alarm_Log 18983
#define P_Servo_Alarm_Check 19013
#define P_Ecat_Servo_Alarm_Check 19014
#define P_Alarm_duplicate_Check_Arr 19015
#define P_Old_Drive_Alarm 19685
#define P_IL_ON_OFF_Flag 19735
#define P_IL_Coord_Robot 19736
#define P_IL_Robot_Bit 19737
#define P_IL_Outer_Status 19738
#define P_Robot_Unit_Serch_Flag 19739
#define P_Limit_PosData 19740
#define P_IL_Sprint 19743
#define P_IL_length 19744
#define P_IL_Strcat 19745
#define P_IL_Popup_Motor 19746
#define P_IL_Motor_Page 19747
#define P_IL_Recipe_Bit 19748
#define P_Interlock_Popup_On_Flag 19749
#define P_Motor_Page 19750
#define M_Motor_BTN_Info 8509
#define P_OP_Side_Ca_PNP_Pos 19751
#define P_OP_Side_An_PNP_Pos 19752
#define P_OP_Side_PMAC_Cur_Mode 19753
#define P_Abs_Trans_Cur_Pos 19754
#define P_Minus_IL_Offset 19755
#define P_Plus_IL_Offset 19756
#define P_2nd_PNP_Arm_Radius 19757
#define P_IL_Enable_Flag 19758
#define P_Plus_Interlock_Bit 19759
#define P_Minus_Interlock_Bit 19760
#define UPPos 19761
#define Unloader_In_StackPos 19762
#define FR_AnodePos 19763
#define FR_CathodePos 19764
#define Before_In_Stack 19765
#define In_Stack 19766
#define P_Collision_Risk_Motor 19767
#define P_Minus_Collision_Risk_Motor 19769
#define P_IL_Clamp_Y 19770
#define P_IL_Clamp_Z 19771
#define P_IL_Clamp_Pos 19772
#define P_IL_Use_FR_Clamp_Pos 19773
#define P_P_IL_Normal_Pos_Offset 19774
#define P_M_IL_Normal_Pos_Offset 19824
#define P_P_IL_Upper_Pos_Offset 19874
#define P_M_IL_Upper_Pos_Offset 19924
#define P_P_IL_Align_Pos_Offset 19974
#define P_M_IL_Align_Pos_Offset 20024
#define P_P_IL_Stack_Pos_Offset 20074
#define P_M_IL_Stack_Pos_Offset 20124
#define P_Ca_1st_Plus_IL_Offset 20174
#define P_Ca_1st_Minus_IL_Offset 20175
#define P_An_1st_Plus_IL_Offset 20176
#define P_An_1st_Minus_IL_Offset 20177
#define P_Ca_2nd_T_Plus_IL_Offset 20178
#define P_Ca_2nd_T_Minus_IL_Offset 20181
#define P_Ca_2nd_Z_Plus_IL_Offset 20184
#define P_Ca_2nd_Z_Minus_IL_Offset 20186
#define P_An_2nd_T_Plus_IL_Offset 20188
#define P_An_2nd_T_Minus_IL_Offset 20191
#define P_An_2nd_Z_Minus_IL_Offset 20194
#define P_Z_Pos_Data 20196
#define P_Clamp_Z_Plus_IL_Offset 20197
#define P_FR_X_Plus_IL_Offset 20198
#define P_FR_X_Minus_IL_Offset 20200
#define P_FR_Z_Minus_IL_Offset 20202
#define P_Ca_NG_PNP_Plus_IL_Offset 20203
#define P_Ca_NG_PNP_Minus_IL_Offset 20207
#define P_An_NG_PNP_Plus_IL_Offset 20211
#define P_An_NG_PNP_Minus_IL_Offset 20215
#define P_Unloader_X_Plus_IL_Offset 20219
#define P_Unloader_X_Minus_IL_Offset 20223
#define P_Unloader_Z_Plus_IL_Offset 20227
#define P_Unloader_Z_Minus_IL_Offset 20230
#define P_IL_In_Offset 20233
#define P_X_PLC_InterLock 20258
#define P_IL_Home_Chk 20259
#define P_IL_Home_Chk_Motor_Num 20260
#define P_IL_Home_Chk_Motor_Update 20280
#define P_IL_Inside_Home_Chk_Complete 20281
#define P_IL_Outside_Home_Chk_Complete 20282
#define P_IL_Motor_Home_Chk_RTN 20283
#define P_IL_Function_Cnt 20284
#define P_IL_Function_Motor_Num 20285
#define P_Anode_1st_TR_Belt_Down_Flag 20286
#define P_Anode_1st_TR_Belt_Pick_Up_Flag 20287
#define P_Anode_1st_TR_Align_Down_Flag 20288
#define P_Anode_2nd_TR_Align_Pick_Up_Flag 20289
#define P_Anode_2nd_TR_Stack_Down_Flag 20290
#define P_Anode_NG_TR_Align_Pick_Up_Flag 20291
#define P_Anode_NG_TR_NG_Place_Down_Flag 20292
#define P_Anode_2nd_TR_Align_Down_Flag 20293
#define P_Anode_1st_TR_Align_Pick_Up_Flag 20294
#define P_Anode_1st_TR_Belt_Down_State_Machine 20295
#define P_Anode_1st_TR_Belt_Down_Status 20296
#define P_Anode_1st_TR_Belt_Pick_Up_State_Machine 20297
#define P_Anode_1st_TR_Belt_Pick_Up_Status 20298
#define P_Anode_1st_TR_Align_Down_State_Machine 20299
#define P_Anode_1st_TR_Align_Down_Status 20300
#define P_Anode_2nd_TR_Align_Pick_Up_State_Machine 20301
#define P_Anode_2nd_TR_Align_Pick_Up_Status 20302
#define P_Anode_2nd_TR_Stack_Down_State_Machine 20303
#define P_Anode_2nd_TR_Stack_Down_Status 20304
#define P_Anode_NG_TR_Align_Pick_Up_State_Machine 20305
#define P_Anode_NG_TR_Align_Pick_Up_Status 20306
#define P_Anode_NG_TR_NG_Place_Down_State_Machine 20307
#define P_Anode_NG_TR_NG_Place_Down_Status 20308
#define P_Anode_2nd_TR_Align_Down_State_Machine 20309
#define P_Anode_2nd_TR_Align_Down_Status 20310
#define P_Anode_1st_TR_Align_Pick_Up_State_Machine 20311
#define P_Anode_1st_TR_Align_Pick_Up_Status 20312
#define P_Cathode_1st_TR_Belt_Down_Flag 20313
#define P_Cathode_1st_TR_Belt_Pick_Up_Flag 20314
#define P_Cathode_1st_TR_Align_Down_Flag 20315
#define P_Cathode_2nd_TR_Align_Pick_Up_Flag 20316
#define P_Cathode_2nd_TR_Stack_Down_Flag 20317
#define P_Cathode_NG_TR_Align_Pick_Up_Flag 20318
#define P_Cathode_NG_TR_NG_Place_Down_Flag 20319
#define P_Cathode_2nd_TR_Align_Down_Flag 20320
#define P_Cathode_1st_TR_Align_Pick_Up_Flag 20321
#define P_Cathode_1st_TR_Belt_Down_State_Machine 20322
#define P_Cathode_1st_TR_Belt_Down_Status 20323
#define P_Cathode_1st_TR_Belt_Pick_Up_State_Machine 20324
#define P_Cathode_1st_TR_Belt_Pick_Up_Status 20325
#define P_Cathode_1st_TR_Align_Down_State_Machine 20326
#define P_Cathode_1st_TR_Align_Down_Status 20327
#define P_Cathode_2nd_TR_Align_Pick_Up_State_Machine 20328
#define P_Cathode_2nd_TR_Align_Pick_Up_Status 20329
#define P_Cathode_2nd_TR_Stack_Down_State_Machine 20330
#define P_Cathode_2nd_TR_Stack_Down_Status 20331
#define P_Cathode_NG_TR_Align_Pick_Up_State_Machine 20332
#define P_Cathode_NG_TR_Align_Pick_Up_Status 20333
#define P_Cathode_NG_TR_NG_Place_Down_State_Machine 20334
#define P_Cathode_NG_TR_NG_Place_Down_Status 20335
#define P_Cathode_2nd_TR_Align_Down_State_Machine 20336
#define P_Cathode_2nd_TR_Align_Down_Status 20337
#define P_Cathode_1st_TR_Align_Pick_Up_State_Machine 20338
#define P_Cathode_1st_TR_Align_Pick_Up_Status 20339
#define P_Old_Anode_Belt_ASCII 20340
#define P_Old_Cathode_Belt_ASCII 20341
#define P_Anode_Belt_ASCII 20342
#define P_Cathode_Belt_ASCII 20343
#define P_Check_Vac_Time 20344
#define P_Send_Anode_NG_Code_To_PLC 20345
#define P_Receive_Anode_NG_Code_From_PLC 20346
#define P_Send_Cathode_NG_Code_To_PLC 20347
#define P_Receive_Cathode_NG_Code_From_PLC 20348
#define P_Current_Cell_Memory_Anode_1P 20349
#define P_Current_Cell_Memory_Anode_AT 20350
#define P_Current_Cell_Memory_Anode_2P 20351
#define P_Current_Cell_Memory_Cathode_1P 20352
#define P_Current_Cell_Memory_Cathode_AT 20353
#define P_Current_Cell_Memory_Cathode_2P 20354
#define P_Current_Cell_Memory_Stack_Table 20355
#define P_Current_Cell_Memory_Cathode_NG_TR 20356
#define P_Current_Cell_Memory_Anode_NG_TR 20357
#define P_BTN_Anode_1st_TR_Buffer_Clear 20358
#define P_BTN_Anode_2nd_TR_Buffer_Clear 20359
#define P_BTN_Anode_Align_Buffer_Clear 20360
#define P_BTN_Anode_NG_TR_Buffer_Clear 20361
#define P_BTN_Cathode_1st_TR_Buffer_Clear 20362
#define P_BTN_Cathode_2nd_TR_Buffer_Clear 20363
#define P_BTN_Cathode_Align_Buffer_Clear 20364
#define P_BTN_Cathode_NG_TR_Buffer_Clear 20365
#define P_Old_BTN_Anode_1st_TR_Buffer_Clear 20366
#define P_Old_BTN_Anode_2nd_TR_Buffer_Clear 20367
#define P_Old_BTN_Anode_Align_Buffer_Clear 20368
#define P_Old_BTN_Anode_NG_TR_Buffer_Clear 20369
#define P_Old_BTN_Cathode_1st_TR_Buffer_Clear 20370
#define P_Old_BTN_Cathode_2nd_TR_Buffer_Clear 20371
#define P_Old_BTN_Cathode_Align_Buffer_Clear 20372
#define P_Old_BTN_Cathode_NG_TR_Buffer_Clear 20373
#define P_Send_Anode_NG_Code_Flag 20374
#define P_Send_Cathode_NG_Code_Flag 20375
#define P_Anode_Vision_NG_To_PLC_Flag 20376
#define P_Cathode_Vision_NG_To_PLC_Flag 20377
#define P_Status_Clear_Sheet_Maint_Check 20378
#define M_ASCII_Stack_Work_Host_Sepa_ID_Buffer 8559
#define M_Stack_Host_ID_Buffer_Mode 8569
#define M_Stack_Host_ID_Sample_Type 8570
#define M_Stack_Host_ID_JR_Result 8571
#define M_Stack_Host_ID_NG_Type 8572
#define M_ASCII_Read_Stack_Work_Host_Sepa_ID_Buffer 8573
#define M_ASCII_Uloader_1st_Host_ID_Buffer 8580
#define M_ASCII_Anode_Sheet_Belt_Buffer 8590
#define M_ASCII_Anode_Sheet_Buffer 8597
#define M_ASCII_Cathode_Sheet_Belt_Buffer 8653
#define M_ASCII_Cathode_Sheet_Buffer 8660
#define M_ASCII_First_Sheet_Buffer 8716
#define M_ASCII_Last_Sheet_Buffer 8723
#define P_Single_Run_Start_Flag 20379
#define P_Single_Run_Control_State_Machine 20380
#define P_Single_Run_Control_Status 20381
#define P_Single_Run_Execute_Bit 20382
#define P_User_Dry_Run_Mode 20383
#define P_Single_Run_State_Machine 20384
#define P_Single_Run_Status 20385
#define P_Single_Run_Unit 20386
#define P_Single_Run_Evade_Pos_RTN 20387
#define P_Single_Run_Evade_Pos_Check_RTN 20388
#define P_Single_Run_Pos_Rtn1 20389
#define P_Single_Run_Pos_Rtn2 20390
#define P_Single_Run_Motion_Ready_RTN 20391
#define P_Single_Run_Execution_Interlock_RTN 20392
#define P_Single_Run_Coord_Activate_RTN 20393
#define P_Single_Run_Coord_Activate_Check_RTN 20394
#define P_Single_Run_Select_Run_Mode_RTN 20395
#define P_Single_Run_Execution_Run_RTN 20396
#define P_Single_Run_Motion_Ready_State_Machine 20397
#define P_Coord_1 20398
#define P_Coord_2 20399
#define P_Coord_3 20400
#define P_Coord_4 20401
#define P_Final_Roll_Z_Motion_Flag 20402
#define P_Final_Roll_Z_Motion_State_Machine 20403
#define P_Main_Z_Motion_Flag 20404
#define P_Main_Z_Motion_State_Machine 20405
#define P_Single_Run_Mode_Flag 20406
#define P_Cathode_AT_Motion_Flag 20407
#define P_Cathode_Align_Motion_State_Machine 20408
#define P_Anode_AT_Motion_Flag 20409
#define P_Anode_Align_Motion_State_Machine 20410
#define P_Sheet_Paper_Motion_Flag 20411
#define P_Sheet_Paper_Motion_State_Machine 20412
#define P_Cathode_NG_PNP_T_Motion_Flag 20413
#define P_Cathode_NG_PNP_T_Motion_State_Machine 20414
#define P_Cathode_NG_PNP_Z_Motion_Flag 20415
#define P_Cathode_NG_PNP_Z_Motion_State_Machine 20416
#define P_Anode_NG_PNP_T_Motion_Flag 20417
#define P_Anode_NG_PNP_T_Motion_State_Machine 20418
#define P_Anode_NG_PNP_Z_Motion_Flag 20419
#define P_Anode_NG_PNP_Z_Motion_State_Machine 20420
#define P_1st_UND_X_Motion_Flag 20421
#define P_1st_UND_X_Motion_State_Machine 20422
#define P_1st_UND_Z_Motion_Flag 20423
#define P_1st_UND_Z_Motion_State_Machine 20424
#define P_1st_UND_T_Motion_Flag 20425
#define P_1st_UND_T_Motion_State_Machine 20426
#define P_Cathode_Run_Command_Flag 20427
#define P_Anode_Run_Command_Flag 20428
#define P_NG_PNP_Uint_Motion_Flag 20429
#define P_NG_PNP_Uint_State_Machine 20430
#define P_NG_PNP_Motion_Cnt 20431
#define P_NG_PNP_Motion_arr 20432
#define P_Single_Run_Timer 20442
#define P_Single_Run_Align_Timer 20443
#define P_Single_Run_Align_Timer2 20444
#define P_Single_Run_Finall_Roll_Z_Timer 20445
#define P_Single_RuN_MAIN_Z_Timer 20446
#define P_Single_Run_Sheet_Paper_Timer 20447
#define P_Single_Run_Debug_SM 20448
#define P_Error_Monitoring_Count_1 20449
#define P_Error_Monitoring_Count_2 20450
#define P_Error_Monitoring_Count_3 20451
#define P_Error_Monitoring_Count_4 20452
#define P_Error_Monitoring_Count_5 20453
#define P_Old_Single_Run_Mode_Flag 20454
#define P_Old_Current_Mode 20455
#define P_Single_Run_Timebase_Off_RTN 20456
#define P_Single_Run_Stop_State_Machine 20457
#define P_Single_Run_Stop_Status 20458
#define P_Single_Run_Stop_Timer 20459
#define P_Single_Run_Stop_Init_RTN 20460
#define P_Single_Run_Stop_Btn_Chk 20461
#define P_Single_Run_Stop_Command 20462
#define P_Motor_Ready_Poa_Inpos_200um 20463
#define P_Ecat_Parameter_Write_Flag 20464
#define P_Ecat_Parameter_Read_Flag 20465
#define P_Ecat_Each_Parameter_Write_Flag 20466
#define P_Ecat_Slave_Idx 20467
#define P_Ec_Num 20468
#define P_Ecat_Read_Motor_Num 20469
#define P_Ecat_Write_Motor_Num 20470
#define P_Ecat_Parameter_Write_State_Machine 20471
#define P_Ecat_Parameter_Read_State_Machine 20472
#define P_Ecat_Each_Parameter_Write_State_Machine 20473
#define P_Ecat_Read_MNTR 20474
#define P_Ecat_Write_MNTR 20502
#define P_Ecat_Save_MNTR 20530
#define P_Ecat_Error_MNTR 20546
#define P_Ecat_Read_Error_MNTR 20562
#define P_Ecat_Each_Write_Error_MNTR 20578
#define P_Ecat_Write_Status 20594
#define P_Ecat_Read_Status 20595
#define P_Ecat_Each_Write_Status 20596
#define P_Pn000 20597
#define P_Pn001 20617
#define P_Pn00B 20637
#define P_Pn100 20657
#define P_Pn101 20677
#define P_Pn102 20697
#define P_Pn103 20717
#define P_Pn123 20737
#define P_Pn140 20757
#define P_Pn141 20777
#define P_Pn145 20797
#define P_Pn146 20817
#define P_Pn160 20837
#define P_Pn161 20857
#define P_Pn163 20877
#define P_Pn170 20897
#define P_Pn401 20917
#define P_Pn408 20937
#define P_Pn409 20957
#define P_Pn40A 20977
#define P_Pn40C 20997
#define P_Pn40D 21017
#define P_Pn416 21037
#define P_Pn417 21057
#define P_Pn511 21077
#define P_Pn520 21097
#define P_PnB02_Numerator 21117
#define P_PnB02_Denominator 21137
#define P_Align_Plus_Blow_Test 21157
#define P_System_Setting_Flag 21158
#define P_Ecat_Setting_Flag 21159
#define P_Ecat_Activation_State_Machine 21160
#define P_PLC31_Ecat_Retry_Cnt 21161
#define P_Ecat_Connect_Result 21162
#define P_Ecat_Slave_Error 21163
#define P_PWM_AbsPhasePosOffset_Change_State_Machine 21164
#define P_AbsPhasePosOffset_Change_Complete 21165
#define P_PWM_AbsPhasing_Fail 21166
#define P_PWM_AbsPhasing_Complete 21167
#define P_Whole_Stacking_Tack_Time 21168
#define P_Whole_Stacking_Tack_Time_Check 21169
#define P_Whole_Stacking_Tack_Timer_Check_Flag 21170
#define P_Whole_Stacking_Timer_Shift_Status_Machine 21171
#define P_Whole_Stacking_TackTime_Array0 21172
#define P_Whole_Stacking_TackTime_Array1 21173
#define P_Whole_Stacking_TackTime_Array2 21174
#define P_Whole_Stacking_TackTime_Array3 21175
#define P_Whole_Stacking_TackTime_Array4 21176
#define P_Whole_Stacking_TackTime_Array5 21177
#define P_Whole_Stacking_TackTime_Array6 21178
#define P_Whole_Stacking_TackTime_Array7 21179
#define P_Whole_Stacking_TackTime_Array8 21180
#define P_Whole_Stacking_TackTime_Array9 21181
#define P_Whole_Stacking_TackTime_Array10 21182
#define P_First_Stacking_Start 21183
#define P_Last_Stacking_Complete 21184
#define P_Stacking_Tack_Time 21185
#define P_Stacking_Tack_Time_Check 21186
#define P_Stacking_Tack_Timer_Check_Flag 21187
#define P_Stacking_Timer_Shift_Status_Machine 21188
#define P_Cathode_to_Anode_FR_Tack_Time_Check 21189
#define P_Anode_to_Cathode_FR_Tack_Time_Check 21190
#define P_Cathode_to_Anode_FR_Tack_Time_Start 21191
#define P_Anode_to_Cathode_FR_Tack_Time_Start 21192
#define P_Cathode_to_Anode_FR_Tack_Time_Complete 21193
#define P_Anode_to_Cathode_FR_Tack_Time_Complete 21194
#define P_Cathode_to_Anode_FR_Time 21195
#define P_Anode_to_Cathode_FR_Time 21196
#define P_Cathode_to_Anode_FR_Tack_Timer_Check_Flag 21197
#define P_Anode_to_Cathode_FR_Tack_Timer_Check_Flag 21198
#define P_Anode_Align_Table_Time 21199
#define P_Anode_Align_Table_Tack_Time_Check 21200
#define P_Anode_Align_Table_Tack_Timer_Check_Flag 21201
#define P_Anode_Align_Table_Timer_Shift_Status_Machine 21202
#define P_Anode_Align_Tack_Time_Start 21203
#define P_Anode_Align_Tack_Time_Complete 21204
#define P_Cathode_Align_Table_Time 21205
#define P_Cathode_Align_Table_Tack_Time_Check 21206
#define P_Cathode_Align_Table_Tack_Timer_Check_Flag 21207
#define P_Cathode_Align_Table_Timer_Shift_Status_Machine 21208
#define P_Cathode_Align_Tack_Time_Start 21209
#define P_Cathode_Align_Tack_Time_Complete 21210
#define P_Anode_1th_Tack_Time_Start 21211
#define P_Anode_1th_Tack_Time_Complete 21212
#define P_Anode_1th_Time 21213
#define P_Anode_1th_Tack_Time_Check 21214
#define P_Anode_1th_Tack_Timer_Check_Flag 21215
#define P_Anode_1th_Timer_Shift_Status_Machine 21216
#define P_Cathode_1th_Tack_Time_Start 21217
#define P_Cathode_1th_Tack_Time_Complete 21218
#define P_Cathode_1th_Time 21219
#define P_Cathode_1th_Tack_Time_Check 21220
#define P_Cathode_1th_Tack_Timer_Check_Flag 21221
#define P_Cathode_1th_Timer_Shift_Status_Machine 21222
#define P_Anode_2th_Tack_Time_Start 21223
#define P_Anode_2th_Tack_Time_Complete 21224
#define P_Anode_2th_Time 21225
#define P_Anode_2th_Tack_Time_Check 21226
#define P_Anode_2th_Tack_Timer_Check_Flag 21227
#define P_Anode_2th_Timer_Shift_Status_Machine 21228
#define P_Cathode_2th_Tack_Time_Start 21229
#define P_Cathode_2th_Tack_Time_Complete 21230
#define P_Cathode_2th_Time 21231
#define P_Cathode_2th_Tack_Time_Check 21232
#define P_Cathode_2th_Tack_Timer_Check_Flag 21233
#define P_Cathode_2th_Timer_Shift_Status_Machine 21234
#define P_Anode_1th_NG_Tack_Time_Start 21235
#define P_Anode_1th_NG_Tack_Time_Complete 21236
#define P_Anode_1th_NG_Time 21237
#define P_Anode_1th_NG_Tack_Time_Check 21238
#define P_Anode_1th_NG_Tack_Timer_Check_Flag 21239
#define P_Anode_1th_NG_Timer_Shift_Status_Machine 21240
#define P_Cathode_1th_NG_Tack_Time_Start 21241
#define P_Cathode_1th_NG_Tack_Time_Complete 21242
#define P_Cathode_1th_NG_Time 21243
#define P_Cathode_1th_NG_Tack_Time_Check 21244
#define P_Cathode_1th_NG_Tack_Timer_Check_Flag 21245
#define P_Cathode_1th_NG_Timer_Shift_Status_Machine 21246
#define P_Anode_Clamp_Tack_Time_Start 21247
#define P_Anode_Clamp_Tack_Time_Complete 21248
#define P_Anode_Clamp_Time 21249
#define P_Anode_Clamp_Tack_Time_Check 21250
#define P_Anode_Clamp_Tack_Timer_Check_Flag 21251
#define P_Anode_Clamp_Timer_Shift_Status_Machine 21252
#define P_Cathode_Clamp_Tack_Time_Start 21253
#define P_Cathode_Clamp_Tack_Time_Complete 21254
#define P_Cathode_Clamp_Time 21255
#define P_Cathode_Clamp_Tack_Time_Check 21256
#define P_Cathode_Clamp_Tack_Timer_Check_Flag 21257
#define P_Cathode_Clamp_Timer_Shift_Status_Machine 21258
#define P_Final_Roll_X_Timer_Shift_Status_Machine 21259
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array0 21260
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array1 21261
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array2 21262
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array3 21263
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array4 21264
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array5 21265
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array6 21266
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array7 21267
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array8 21268
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array9 21269
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array10 21270
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array0 21271
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array1 21272
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array2 21273
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array3 21274
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array4 21275
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array5 21276
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array6 21277
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array7 21278
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array8 21279
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array9 21280
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array10 21281
#define P_Pneumatic_Pressure_Unit_Tack_Time_Chk_Timer 21282
#define P_Pneumatic_Pressure_Unit_Tack_Time 21309
#define P_MCC_Anode_Align_NG_Count 21336
#define P_MCC_Cathode_Align_NG_Count 21337
#define P_MCC_Anode_Retry_NG_Count 21338
#define P_MCC_Cathode_Retry_NG_Count 21339
#define P_Discharge_Tact_Time_Arr 21340
#define P_Discharge_Hold_Timer 21352
#define P_Discharge_Hold_Time 21353
#define P_AN_1st_Z_Zero_Angle 21354
#define P_AN_1st_Z_Zero_Length 21355
#define P_Anode_1st_PNP_Z_Crank_Zero_Pos 21356
#define P_Anode_1st_PNP_Z_Crank_real_Move_Pos 21357
#define P_Anode_1st_PNP_Z_Crank_radian 21358
#define P_Anode_1st_PNP_Z_Acos_denominator 21359
#define P_Anode_1st_PNP_Z_Acos_numerator 21360
#define P_Anode_1st_PNP_Z_Crank_Angle 21361
#define P_Anode_1st_PNP_Z_Real_Move_Pos 21362
#define P_Anode_1st_Fwd_Bwd_Rise 21363
#define P_CA_1st_Z_Zero_Angle 21364
#define P_CA_1st_Z_Zero_Length 21365
#define P_Cathode_1st_PNP_Z_Crank_Zero_Pos 21366
#define P_Cathode_1st_PNP_Z_Crank_real_Move_Pos 21367
#define P_Cathode_1st_PNP_Z_Crank_radian 21368
#define P_Cathode_1st_PNP_Z_Acos_denominator 21369
#define P_Cathode_1st_PNP_Z_Acos_numerator 21370
#define P_Cathode_1st_PNP_Z_Crank_Angle 21371
#define P_Cathode_1st_PNP_Z_Real_Move_Pos 21372
#define P_Cathode_1st_Fwd_Bwd_Rise 21373
#define P_AN_2nd_Z_Zero_Angle 21374
#define P_AN_2nd_Z_Zero_Length 21375
#define P_Anode_2nd_PNP_Z_Crank_Zero_Pos 21376
#define P_Anode_2nd_PNP_Z_Crank_real_Move_Pos 21377
#define P_Anode_2nd_PNP_Z_Crank_radian 21378
#define P_Anode_2nd_PNP_Z_Acos_denominator 21379
#define P_Anode_2nd_PNP_Z_Acos_numerator 21380
#define P_Anode_2nd_PNP_Z_Crank_Angle 21381
#define P_Anode_2nd_PNP_Z_Real_Move_Pos 21382
#define P_Anode_2nd_Fwd_Bwd_Rise 21383
#define P_CA_2nd_Z_Zero_Angle 21384
#define P_CA_2nd_Z_Zero_Length 21385
#define P_Cathode_2nd_PNP_Z_Crank_Zero_Pos 21386
#define P_Cathode_2nd_PNP_Z_Crank_real_Move_Pos 21387
#define P_Cathode_2nd_PNP_Z_Crank_radian 21388
#define P_Cathode_2nd_PNP_Z_Acos_denominator 21389
#define P_Cathode_2nd_PNP_Z_Acos_numerator 21390
#define P_Cathode_2nd_PNP_Z_Crank_Angle 21391
#define P_Cathode_2nd_PNP_Z_Real_Move_Pos 21392
#define P_Cathode_2nd_Fwd_Bwd_Rise 21393
#define P_Old_Recipe_Anode_1st_PNP_Z_Ready_Up 21394
#define P_Old_Recipe_Anode_1st_PNP_Z_Belt_Up 21395
#define P_Old_Recipe_Anode_1st_PNP_Z_Belt_Down 21396
#define P_Old_Recipe_Anode_1st_PNP_Z_Align_Up 21397
#define P_Old_Recipe_Anode_1st_PNP_Z_Align_Down 21398
#define P_Old_Recipe_Cathode_1st_PNP_Z_Ready_Up 21399
#define P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Up 21400
#define P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Down 21401
#define P_Old_Recipe_Cathode_1st_PNP_Z_Align_Up 21402
#define P_Old_Recipe_Cathode_1st_PNP_Z_Align_Down 21403
#define P_Old_Recipe_Anode_2nd_PNP_Z_Align_Up 21404
#define P_Old_Recipe_Anode_2nd_PNP_Z_Align_Down 21405
#define P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Up 21406
#define P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Down 21407
#define P_Old_Recipe_Anode_2nd_PNP_Z_Ready_Up 21408
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Up 21409
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Down 21410
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Up 21411
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Down 21412
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Ready_Up 21413
#define P_PLC19_All_Home_Status 21414
#define P_PLC19_All_Home_Module_Status 21415
#define P_PLC19_All_Home_State_Machine 21416
#define P_PLC19_All_Home_Seq_Index 21417
#define P_PLC19_All_Home_Self_Index 21418
#define P_PLC19_All_Home_Set_Mode_Return 21419
#define P_PLC19_All_Home_Timer 21420
#define P_PLC19_All_Home_Tact_Time_Array 21421
#define P_PLC19_All_Home_Tact_Time 21441
#define P_All_Home_Module_Error 21442
#define P_Act_ALL_Home_Time_Out_Time 21443
#define P_Act_ALL_Home_Time_Out 21444
#define P_Act_Hold_Complete_Bit 21484
#define P_Module_Act_Hold_Command_Array 21519
#define P_OLD_Module_Act_Hold_Command_Array 21554
#define P_Module_Act_Hold_State_Machine_Array 21589
#define P_Act_Hold_Old_Time 21624
#define P_Act_Hold_Time_Out_Time 21659
#define P_Act_Hold_Time_Out 21660
#define P_First_PNP_T_Wait_Status 21695
#define P_First_PNP_Z_Wait_Status 21696
#define P_First_PNP_Picker_T_Turn_Status 21697
#define P_First_PNP_T_Wait_To_Belt_Status 21698
#define P_First_PNP_Z_Wait_To_Belt_Status 21699
#define P_First_PNP_T_Align_To_Belt_Status 21700
#define P_First_PNP_Z_Align_To_Belt_Status 21701
#define P_First_PNP_Z_Belt_Down_Status 21702
#define P_First_PNP_Z_Belt_Up_Status 21703
#define P_First_PNP_T_Wait_To_Align_Status 21704
#define P_First_PNP_Z_Wait_To_Align_Status 21705
#define P_First_PNP_T_Belt_To_Align_Status 21706
#define P_First_PNP_Z_Belt_To_Align_Status 21707
#define P_First_PNP_Z_Align_Down_Status 21708
#define P_First_PNP_Z_Align_Up_Status 21709
#define P_First_PNP_Vac_On_Status 21710
#define P_First_PNP_Blow_On_Status 21711
#define P_Second_PNP_T_Align_To_Stack_Status 21712
#define P_Second_PNP_Z_Align_To_Stack_Status 21713
#define P_Second_PNP_T_Stack_To_Align_Status 21714
#define P_Second_PNP_Z_Stack_To_Align_Status 21715
#define P_Second_PNP_Z_Align_Down_Status 21716
#define P_Second_PNP_Z_Align_Up_Status 21717
#define P_Second_PNP_Vac_On_Status 21718
#define P_Second_PNP_Blow_On_Status 21719
#define P_NG_PNP_NG_Bos_Status 21720
#define P_NG_PNP_Align_Status 21721
#define P_NG_PNP_Align_Down_Status 21722
#define P_NG_PNP_Align_Up_Status 21723
#define P_NG_PNP_Vac_On_Status 21724
#define P_NG_PNP_Blow_On_Status 21725
#define P_Hold_1st_PNP_Position 21726
#define P_Hold_Module_Error 21727
#define P_Act_Execute_Complete_Bit 21728
#define P_Module_Act_Execute_Command_Array 21740
#define P_OLD_Module_Act_Execute_Command_Array 21752
#define P_Module_Act_Execute_State_Machine_Array 21764
#define P_Act_Execute_Old_Time 21776
#define P_Act_Execute_Time_Out_Time 21788
#define P_Act_Execute_Time_Out 21789
#define P_Execute_Module_Error 21801
#define P_Execute_First_Sepa_Total_Tact_Time 21802
#define P_Current_JR_Thickness_mm 21803
#define P_Current_Jelly_Roll_Thinckness_mm_Send_Enable_Flag 21804
#define P_Stack_Table_NG_Flag 21805
#define P_Suspend_Discharge_Cell_Out_Restart 21806
#define P_Jelly_Roll_OK_Count 21807
#define P_Jelly_Roll_NG_Count 21808
#define P_Jelly_Roll_Total_Count 21809
#define P_Jelly_Roll_ID 21810
#define P_Jelly_Roll_Prod_Count 21811
#define P_Jelly_Roll_Recipe_Count 21812
#define P_Current_Cell_Memory_Jelly_Roll 21813
#define P_Real_Stacking_Host_ID_Count 21814
#define P_VISION_PLC10_Anode_Align_Start 21815
#define P_VISION_PLC10_Cathode_Align_Start 21816
#define P_Stack_Table_NG_Count 21817
#define P_Stack_PMAC_NG_Code 21818
#define P_Stack_Vision_NG_Code_IN_Timer 21819
#define P_Discharge_Waiting_Flag 21820
#define P_ARC_Flag 21821
#define P_Discharge_Queue_Complete_Flag 21822
#define P_Shared_Discharge_Cmd 21823
#define P_Shared_Discharge_State_Machine 21824
#define P_Discharge_Dont_Stop_Point_Flag 21825
#define P_1st_Discharge_State 21826
#define P_Discharge_DIO_Trg 21827
#define P_Data_Parsing_Flag 21828
#define P_Memory_Discharge_Data 21829
#define P_Prev_Sepa_Stack_Completed_Flag 21830
#define P_First_Sepa_Mode_Status 21831
#define P_First_Sepa_Mode_Flag 21832
#define P_Discharge_Unloader_Handover_Timer 21833
#define P_Discharge_Unloader_Handover_Time 21834
#define P_B_1st_to_3rd_Discharge_cmd 21835
#define P_B_1st_to_3rd_Discharge_State_Machine 21836
#define P_3rd_Discharge_Status 21837
#define P_Buffer_Mode_Module_Status_Sequence 21838
#define P_EXECUTE_Status_Prod_Sequence 21868
#define P_Execute_First_Sepa_Mode_Cmd 21898
#define P_Execute_First_Sepa_Mode_Status 21899
#define P_Execute_First_Sepa_Mode_Module_Status 21900
#define P_Execute_First_Sepa_Mode_State_Machine 21901
#define P_Execute_First_Sepa_Mode_Seq_Index 21902
#define P_Execute_First_Sepa_Mode_Self_Index 21903
#define P_Execute_First_Sepa_Mode_Debug_Edge 21904
#define P_Buffer_Seqdata_Execute_First_Sepa_Mode_Array 21905
#define P_Execute_First_Sepa_Mode_Timer 21935
#define P_Execute_First_Sepa_Mode_Tact_Time_Array 21936
#define P_Execute_First_Sepa_Mode_Tact_Time 21956
#define P_Execute_1st_Sepa_Status 21957
#define P_Suspend_Discharge_Cmd 21958
#define P_Suspend_Discharge_Status 21959
#define P_Suspend_Discharge_State_Machine 21960
#define P_Suspend_Discharge_Seq_Index 21961
#define P_Suspend_Discharge_Self_Index 21962
#define P_Discharge_Seq_InterLock_Delay_Time 21963
#define P_Discharge_Seq_InterLock_Flag 21993
#define P_Buffer_Seqdata_Discharge_Array 22023
#define P_Suspend_Discharge_Timer 22053
#define P_Suspend_Discharge_Tact_Time_Array 22054
#define P_Suspend_Discharge_Tact_Time 22074
#define P_Suspend_Discharge_1st_Unloader_JR_Grip 22075
#define P_Suspend_ARC_Cmd 22076
#define P_Suspend_ARC_Status 22077
#define P_Suspend_ARC_State_Machine 22078
#define P_Suspend_ARC_Seq_Index 22079
#define P_Suspend_ARC_Self_Index 22080
#define P_Suspend_ARC_Manual_Occur_Flag 22081
#define P_ARC_Seq_InterLock_Delay_Time 22082
#define P_ARC_Seq_InterLock_Flag 22112
#define P_Buffer_Seqdata_ARC_Array 22142
#define P_Suspend_ARC_Timer 22172
#define P_Suspend_ARC_Tact_Time_Array 22173
#define P_Suspend_ARC_Tact_Time 22193
#define P_Suspend_Anode_1TR_Cell_Supply_Cmd 22194
#define P_Suspend_Anode_1TR_Cell_Supply_Status 22195
#define P_Suspend_Anode_1TR_Cell_Supply_State_Machine 22196
#define P_Suspend_Anode_1TR_Cell_Supply_Seq_Index 22197
#define P_Suspend_Anode_1TR_Cell_Supply_Self_Index 22198
#define P_Suspend_Anode_1TR_Cell_Supply_Module_Status 22199
#define P_Anode_1TR_Cell_Supply_Seq_InterLock_Delay_Time 22200
#define P_Anode_1TR_Cell_Supply_Seq_InterLock_Flag 22230
#define P_Buffer_Seqdata_Anode_1TR_Cell_Supply_Array 22260
#define P_Suspend_Anode_1TR_Cell_Supply_Timer 22290
#define P_Suspend_Anode_1TR_Cell_Supply_Tact_Time_Array 22291
#define P_Suspend_Anode_1TR_Cell_Supply_Tact_Time 22311
#define P_Hold_Exist_Insp_Cmd 22312
#define P_Hold_Exist_Insp_Status 22313
#define P_Hold_Exist_Insp_Module_Status 22314
#define P_Hold_Exist_Insp_State_Machine 22315
#define P_Hold_Exist_Insp_Seq_Index 22316
#define P_Hold_Exist_Insp_Self_Index 22317
#define P_Hold_Exist_Insp_Debug_Edge 22318
#define P_Buffer_Seqdata_Hold_Exist_Insp_Array 22319
#define P_Hold_Exist_Insp_Timer 22349
#define P_Hold_Exist_Insp_Tact_Time_Array 22350
#define P_Hold_Exist_Insp_Tact_Time 22370
#define P_Hold_Remove_NG_PNP_Cmd 22371
#define P_Hold_Remove_NG_PNP_Status 22372
#define P_Hold_Remove_NG_PNP_Module_Status 22373
#define P_Hold_Remove_NG_PNP_State_Machine 22374
#define P_Hold_Remove_NG_PNP_Seq_Index 22375
#define P_Hold_Remove_NG_PNP_Self_Index 22376
#define P_Hold_Remove_NG_PNP_Debug_Edge 22377
#define P_Buffer_Seqdata_Hold_Remove_NG_PNP_Array 22378
#define P_Hold_Remove_NG_PNP_Timer 22408
#define P_Hold_Remove_NG_PNP_Tact_Time_Array 22409
#define P_Hold_Remove_NG_PNP_Tact_Time 22429
#define P_PLC01_Hold_Remove_NG_PNP_Sub_Flag 22430
#define P_PLC01_Hold_Remove_NG_PNP_Sub_State_Machine 22431
#define P_PLC01_Hold_Remove_NG_PNP_Sub_Status 22432
#define P_Hold_Remove_Align_Cmd 22433
#define P_Hold_Remove_Align_Status 22434
#define P_Hold_Remove_Align_Module_Status 22435
#define P_Hold_Remove_Align_State_Machine 22436
#define P_Hold_Remove_Align_Seq_Index 22437
#define P_Hold_Remove_Align_Self_Index 22438
#define P_Hold_Remove_Align_Debug_Edge 22439
#define P_Buffer_Seqdata_Hold_Remove_Align_Array 22440
#define P_Hold_Remove_Align_Timer 22470
#define P_Hold_Remove_Align_Tact_Time_Array 22471
#define P_Hold_Remove_Align_Tact_Time 22491
#define P_PLC01_Hold_Remove_Align_Sub_Flag 22492
#define P_PLC01_Hold_Remove_Align_Sub_State_Machine 22493
#define P_PLC01_Hold_Remove_Align_Sub_Status 22494
#define P_Hold_Remove_2TR_Cmd 22495
#define P_Hold_Remove_2TR_Status 22496
#define P_Hold_Remove_2TR_Module_Status 22497
#define P_Hold_Remove_2TR_State_Machine 22498
#define P_Hold_Remove_2TR_Seq_Index 22499
#define P_Hold_Remove_2TR_Self_Index 22500
#define P_Hold_Remove_2TR_Debug_Edge 22501
#define P_Buffer_Seqdata_Hold_Remove_2TR_Array 22502
#define P_Hold_Remove_2TR_Timer 22532
#define P_Hold_Remove_2TR_Tact_Time_Array 22533
#define P_Hold_Remove_2TR_Tact_Time 22553
#define P_Hold_Supply_1TR_Cmd 22554
#define P_Hold_Supply_1TR_Status 22555
#define P_Hold_Supply_1TR_Module_Status 22556
#define P_Hold_Supply_1TR_State_Machine 22557
#define P_Hold_Supply_1TR_Seq_Index 22558
#define P_Hold_Supply_1TR_Self_Index 22559
#define P_Hold_Supply_1TR_Debug_Edge 22560
#define P_Buffer_Seqdata_Hold_Supply_1TR_Array 22561
#define P_Hold_Supply_1TR_Timer 22591
#define P_Hold_Supply_1TR_Tact_Time_Array 22592
#define P_Hold_Supply_1TR_Tact_Time 22612
#define P_PLC01_Hold_Supply_1TR_Memory_RTN 22613
#define P_PLC01_Hold_Supply_1TR_Judge_Flag 22614
#define P_PLC01_Hold_Supply_1TR_Judge_State_Machine 22615
#define P_PLC01_Hold_Supply_1TR_Judge_Status 22616
#define P_Plate_1TR_Supply_Module_Judge_Bit 22617
#define P_Hold_Supply_Align_Cmd 22618
#define P_Hold_Supply_Align_Status 22619
#define P_Hold_Supply_Align_Module_Status 22620
#define P_Hold_Supply_Align_State_Machine 22621
#define P_Hold_Supply_Align_Seq_Index 22622
#define P_Hold_Supply_Align_Self_Index 22623
#define P_Hold_Supply_Align_Debug_Edge 22624
#define P_Buffer_Seqdata_Hold_Supply_Align_Array 22625
#define P_Hold_Supply_Align_Timer 22655
#define P_Hold_Supply_Align_Tact_Time_Array 22656
#define P_Hold_Supply_Align_Tact_Time 22676
#define P_Hold_Supply_2TR_Cmd 22677
#define P_Hold_Supply_2TR_Status 22678
#define P_Hold_Supply_2TR_Module_Status 22679
#define P_Hold_Supply_2TR_State_Machine 22680
#define P_Hold_Supply_2TR_Seq_Index 22681
#define P_Hold_Supply_2TR_Self_Index 22682
#define P_Hold_Supply_2TR_Debug_Edge 22683
#define P_Buffer_Seqdata_Hold_Supply_2TR_Array 22684
#define P_Hold_Supply_2TR_Timer 22714
#define P_Hold_Supply_2TR_Tact_Time_Array 22715
#define P_Hold_Supply_2TR_Tact_Time 22735
#define P_Hold_Semi_Run_Pos_Move_Cmd 22736
#define P_Hold_Semi_Run_Pos_Move_Status 22737
#define P_Hold_Semi_Run_Pos_Move_Module_Status 22738
#define P_Hold_Semi_Run_Pos_Move_State_Machine 22739
#define P_Hold_Semi_Run_Pos_Move_Seq_Index 22740
#define P_Hold_Semi_Run_Pos_Move_Self_Index 22741
#define P_Hold_Semi_Run_Pos_Move_Debug_Edge 22742
#define P_Buffer_Seqdata_Hold_Semi_Run_Pos_Move_Array 22743
#define P_Hold_Semi_Run_Pos_Move_Timer 22773
#define P_Hold_Semi_Run_Pos_Move_Tact_Time_Array 22774
#define P_Hold_Semi_Run_Pos_Move_Tact_Time 22794
#define P_Act_Complete_Bit 22795
#define P_Act_Old_Time 22861
#define P_Act_Delay_Time 22927
#define P_Act_Suspend_Time_Out_Time 22993
#define P_Act_Time_Out 22994
#define P_Test_Sungmin_Flag 23060
#define P_Discharge_Possibility_Bit 23061
#define P_HOLD_Exist_Possibility_Bit 23127
#define P_HOLD_NG_Remove_Possibility_Bit 23193
#define P_HOLD_Align_Remove_Possibility_Bit 23259
#define P_HOLD_2TR_Remove_Possibility_Bit 23325
#define P_HOLD_1TR_Supply_Possibility_Bit 23391
#define P_HOLD_Align_Supply_Possibility_Bit 23457
#define P_HOLD_2TR_Supply_Possibility_Bit 23523
#define P_HOLD_Semi_Run_Pos_Possibility_Bit 23589
#define P_Module_Act_Command_Array 23655
#define P_OLD_Module_Act_Command_Array 23721
#define P_Module_Act_State_Machine_Array 23787
#define P_Module_Act_State_Machine_Error_Array 23853
#define P_Suspend_Discharge_Module_Status 23919
#define P_Suspend_Discharge_To_Execute_Flag 23920
#define P_Suspend_Discharge_Complete_Flag 23921
#define P_First_Unloader_Stack_Up_Status 23922
#define P_First_Unloader_Stack_FWD_Status 23923
#define P_First_Unloader_Grip_Cell_Status 23924
#define P_First_Unloader_Stack_BWD_Wait_Status 23925
#define P_First_Unloader_Stack_BWD_Status 23926
#define P_First_Unloader_Stack_Down_Status 23927
#define P_First_Unloader_Avoid_Status 23928
#define P_First_Unloader_Turn_Status 23929
#define P_First_Unloader_Handover_Status 23930
#define P_Cathode_Clamp_OFF_Status 23931
#define P_Final_Roll_Discharge_Status 23932
#define P_Final_Roll_Stack_Pos_Status 23933
#define P_Final_Roll_Stack_Up_Pos_Status 23934
#define P_Main_Z_Init_Pos_Status 23935
#define P_Sheet_Paper_BWD_Status 23936
#define P_Discharge_Vision_DIO_RTN 23937
#define P_Discharge_Sub_RTN 23938
#define P_Discharge_NG_Code_Report_RTN 23939
#define P_Individual_RTN 23940
#define P_Suspend_Discharge_Last_Run_Bit 23941
#define P_Suspend_Discharge_JR_Result_RTN 23942
#define P_ARC_Buffer_Jog_Speed 23943
#define P_Selected_Spool_Number 23944
#define P_ARC_Home_Check_RTN 23945
#define P_Suspend_ARC_Module_Status 23946
#define P_Not_Selected_Spool_Radius 23947
#define P_Not_Selected_Spool_Circumference 23948
#define P_Sensor_To_Sepa_Curr_Distance_mm 23949
#define P_Passive_D_One_Degree_AD_Value 23974
#define P_After_ARC_Rotate_Distance 23975
#define P_Stack_Vision_NG_Code_Time_Over 23976
#define P_Suspend_Discharge_Resume_Flag 23977
#define P_Suspend_Discharge_Resume_Complete 23978
#define P_Suspend_Discharge_Pause_Flag 23979
#define P_Suspend_Monitor_ 23980
#define P_Flag_Stack_Work_Host_ID 23990
#define P_First_Sepa_Stack_Align_OK_PMAC_Flag 23991
#define P_Sepa_Run_Completed_Status_Machine 23992
#define P_Discharge_Debug_Edge 23993
#define P_Suspend_Discharge_Debug_Address 23994
#define P_Suspend_Discharge_Debug_Value 23999
#define P_Discharge_Sepa_Cutter_Time_Out_State_Machine 24004
#define P_Old_Suspend_Discharge_Seq_Index 24005
#define P_Discharge_Debug_Index_1 24006
#define P_Discharge_Debug_Index_2 24007
#define P_Discharge_Debug_Index_3 24008
#define P_Discharge_Debug_Index_4 24009
#define P_ARC_Debug_Edge 24010
#define P_Suspend_ARC_Debug_Address 24011
#define P_Suspend_ARC_Debug_Value 24016
#define P_Old_Suspend_ARC_Seq_Index 24021
#define P_ARC_Debug_Index_1 24022
#define P_ARC_Debug_Index_2 24023
#define P_ARC_Debug_Index_3 24024
#define P_ARC_Debug_Index_4 24025
#define P_ARC_Ready_Flag 24026
#define P_Suspend_Cutter_Heating_Time 24028
#define P_Suspend_Cutter_Heating_Timer 24029
#define P_An_1TR_Supply_Debug_Edge 24030
#define P_Suspend_An_1TR_Supply_Debug_Address 24031
#define P_Suspend_An_1TR_Supply_Debug_Value 24036
#define P_Old_Suspend_An_1TR_Supply_Seq_Index 24041
#define P_An_1TR_Supply_Debug_Index_1 24042
#define P_An_1TR_Supply_Debug_Index_2 24043
#define P_An_1TR_Supply_Debug_Index_3 24044
#define P_An_1TR_Supply_Debug_Index_4 24045
#define P_Suspend_Supply_Index 24046
#define P_Suspend_Supply_Index_2nd 24047
#define P_Anode_Suspend_Supply_Complete 24048
#define P_Suspend_Supply_Pause_Flag 24056
#define P_Suspend_Supply_Resume_Flag 24057
#define P_Supply_Module_Status 24058
#define P_Suspend_Anode_1TR_Supply_Complete_Flag 24059
#define P_Suspend_Discharge_Module_Error 24060
#define P_Suspend_ARC_Module_Error 24061
#define P_Suspend_1st_Supply_Error 24062
#define P_Discharge_Seq_Data 24063
#define P_Suspend_Discharging_Popup_Flag 24064
#define P_Suspend_Discharge_FR_Unclamp_Error_Popup_Flag 24065
#define P_Suspend_Discharge_Cathode_Align_Retry_Cal_Error_Popup_Flag 24066
#define P_Suspend_Discharge_Anode_Align_Retry_Cal_Error_Popup_Flag 24067
#define P_Suspend_Discharge_FR_Discharge_Pos_Error_Popup_Flag 24068
#define P_Suspend_Discharge_1st_Unloader_Grip_OFF_Error_Popup_Flag 24069
#define P_Suspend_Discharge_1st_Unloader_Up_Error_Popup_Flag 24070
#define P_Suspend_Discharge_1st_Unloader_FWD_Error_Popup_Flag 24071
#define P_Suspend_Discharge_FR_Clamp_Error_Popup_Flag 24072
#define P_Suspend_Discharge_Sepa_Cutter_Heating_Error_Popup_Flag 24073
#define P_Suspend_Discharge_1st_Unloader_Grip_Cell_Pos_Error_Popup_Flag 24074
#define P_Suspend_Discharge_1st_Unloader_Grip_ON_Error_Popup_Flag 24075
#define P_Suspend_Discharge_Sheet_Paper_BWD_Error_Popup_Flag 24076
#define P_Suspend_Discharge_Cathode_Clamp_OFF_Error_Popup_Flag 24077
#define P_Suspend_Discharge_Sepa_Cutter_FWD_Error_Popup_Flag 24078
#define P_Suspend_Discharge_Sheet_Paper_Vacuum_ON_Error_Popup_Flag 24079
#define P_Suspend_Discharge_Sepa_Cutter_BWD_Error_Popup_Flag 24080
#define P_Suspend_Discharge_1st_Unloader_BWD_Wait_Pos_Error_Popup_Flag 24081
#define P_Suspend_Discharge_1st_Unloader_BWD_Error_Popup_Flag 24082
#define P_Suspend_Discharge_1st_Unloader_Stack_Down_Error_Popup_Flag 24083
#define P_Suspend_Discharge_FR_Stack_Pos_Error_Popup_Flag 24084
#define P_Suspend_Discharge_After_Action_Init_Error_Popup_Flag 24085
#define P_Suspend_Discharge_1st_Unloader_Avoid_Pos_Error_Popup_Flag 24086
#define P_Suspend_Discharge_1st_2nd_Unloader_Handover_Chk_Error_Popup_Flag 24087
#define P_Suspend_Discharge_1st_Unloader_Handover_Pos_Error_Popup_Flag 24088
#define P_Suspend_Discharge_2nd_3rd_Unloader_Grip_Request_Error_Popup_Flag 24089
#define P_Suspend_Discharge_1st_Unloader_Wait_Pos_Error_Popup_Flag 24090
#define P_Suspend_ARC_Manual_ARC_Active_Popup_Flag 24091
#define P_Suspend_ARC_Auto_ARC_Active_Popup_Flag 24092
#define P_Suspend_ARC_Pre_Act_Popup_Flag 24093
#define P_Suspend_ARC_Dancer_Close_Popup_Flag 24094
#define P_Suspend_ARC_Use_Plate_FWD_Popup_Flag 24095
#define P_Suspend_ARC_Replace_Plate_Blow_ON_Popup_Flag 24096
#define P_Suspend_ARC_Use_Plate_Clamp_Popup_Flag 24097
#define P_Suspend_ARC_Use_Plate_Cutter_FWD_Popup_Flag 24098
#define P_Suspend_ARC_Use_Plate_Cutter_BWD_Popup_Flag 24099
#define P_Suspend_ARC_Use_Plate_Unclamp_Popup_Flag 24100
#define P_Suspend_ARC_Use_Plate_BWD_Popup_Flag 24101
#define P_Suspend_ARC_Replace_Plate_Blow_OFF_Popup_Flag 24102
#define P_Suspend_ARC_Dancer_Open_Popup_Flag 24103
#define P_Suspend_ARC_Spool_Change_Popup_Flag 24104
#define P_Suspend_ARC_Post_Act_Popup_Flag 24105
#define P_Suspend_ARC_Previous_Spool_Remain_Winding_Popup_Flag 24106
#define P_Suspend_Discharge_First_Address 24107
#define P_Suspend_ARC_First_Address 24108
#define P_Status_Stop_Ready_Pos_Move 24109
#define P_Cycle_Stop_Stauts 24110
#define P_Cycle_Stop_Status_Machine 24111
#define P_Cycle_Stop_Flag 24112
#define P_Speed_Origin_rtn 24113
#define P_Speed_rtn 24114
#define P_NG_PNP_Z_Move_rtn 24115
#define P_NG_PNP_Z_Move_Check_rtn 24116
#define P_NG_PNP_T_Move_rtn 24117
#define P_NG_PNP_T_Move_Check_rtn 24118
#define P_2nd_Z_Move_rtn 24119
#define P_2nd_Z_Move_Check_rtn 24120
#define P_2nd_T_Move_rtn 24121
#define P_2nd_T_Move_Check_rtn 24122
#define P_Stack_Judgement_Memory 24123
#define P_Stop_Cycle_Stop_Move_Status 24124
#define P_STOP_Initial_Process_Status 24125
#define P_Stopping_CycleStop_Init_Flag 24126
#define P_Sepa_Timing 24127
#define P_Old_Trigger_PLC0 24128
#define P_Mode_Command 24129
#define P_Current_Mode 24130
#define P_MOde_Num 24131
#define P_Command_Depth 24136
#define P_In_Position 24141
#define P_Last_Cycle_Command 24146
#define P_Mode_Command_Buffer 24151
#define P_Mode_Command_Wait_Count 24152
#define P_Old_Mode_Command 24153
#define P_Slave1_Anode_Run_Motion_Array 24154
#define P_Slave2_Anode_Run_Motion_Array 24254
#define P_Slave3_Anode_Run_Motion_Array 24354
#define P_Slave4_Anode_Run_Motion_Array 24454
#define P_Slave5_Anode_Run_Motion_Array 24554
#define P_Slave6_Anode_Run_Motion_Array 24654
#define P_Slave7_Anode_Run_Motion_Array 24754
#define P_Slave8_Anode_Run_Motion_Array 24854
#define P_Slave9_Anode_Run_Motion_Array 24954
#define P_Slave10_Anode_Run_Motion_Array 25054
#define P_Slave15_Anode_Run_Motion_Array 25154
#define P_Slave16_Anode_Run_Motion_Array 25254
#define P_Slave17_Anode_Run_Motion_Array 25354
#define P_Slave18_Anode_Run_Motion_Array 25454
#define P_Slave19_Anode_Run_Motion_Array 25554
#define P_Slave1_Cathode_Run_Motion_Array 25654
#define P_Slave2_Cathode_Run_Motion_Array 25754
#define P_Slave3_Cathode_Run_Motion_Array 25854
#define P_Slave4_Cathode_Run_Motion_Array 25954
#define P_Slave5_Cathode_Run_Motion_Array 26054
#define P_Slave15_Cathode_Run_Motion_Array 26154
#define P_Slave6_Cathode_Run_Motion_Array 26254
#define P_Slave7_Cathode_Run_Motion_Array 26354
#define P_Slave8_Cathode_Run_Motion_Array 26454
#define P_Slave9_Cathode_Run_Motion_Array 26554
#define P_Slave10_Cathode_Run_Motion_Array 26654
#define P_Slave16_Cathode_Run_Motion_Array 26754
#define P_Slave17_Cathode_Run_Motion_Array 26854
#define P_Slave18_Cathode_Run_Motion_Array 26954
#define P_Slave19_Cathode_Run_Motion_Array 27054
#define P_BTN_Jog_BWD_M 8730
#define P_BTN_Jog_FWD_M 8780
#define M_UnWinder_BTN_Lamp 8830
#define M_Cathode_BTN_Lamp 8846
#define M_Anode_BTN_Lamp 8878
#define M_Stack_BTN_Lamp 8910
#define M_ARC_BTN_Lamp 8942
#define M_UnWinder_BTN_Interlock 8974
#define M_Cathode_BTN_Interlock 8990
#define M_Anode_BTN_Interlock 9022
#define M_Stack_BTN_Interlock 9054
#define M_ARC_BTN_Interlock 9086
#define M_NP_BTN_Interlock 9118
#define M_Manual_ARC_BTN 9134
#define P_Anode_NG_Unit_Status 27154
#define P_Cathode_NG_Unit_Status 27155
#define P_ParsingRtn 27156
#define P_CurPosData 27157
#define P_Hold_MNTR_Supply_1st 27158
#define P_TimeOutNumb 27159
#define P_PosRtn 27160
#define P_MotionRtn 27161
#define P_CmdData 27162
#define P_Interval 27163
#define P_Cont_Ret 27164
#define P_Cur_Idx 27165
#define P_NextID 27166
#define P_Cur_Size 27167
#define P_Hold_Exist_Insp 27168
#define P_Hold_Remove_NG_PNP 27169
#define P_Hold_Remove_Align 27170
#define P_Hold_Remove_2TR 27171
#define P_Hold_Supply_1TR 27172
#define P_Hold_Supply_Align 27173
#define P_Hold_Supply_2TR 27174
#define P_Hold_Semi_Run 27175
#define P_Hold_NG_PNP_Remove 180
#define P_Hold_Remove_2nd 182
#define P_Hold_Supply_1st 183
#define P_Hold_Supply_2nd 185
#define P_Hold_Data_process 186
#define P_Hold_Semi_Run_Enable_Pos 187
#define P_Hold_Existence_Insp 188
#define P_Hold_1st_Belt_Move 189
#define P_Hold_Motion 190
#define P_Hold_Data_process_State_Machine 27176
#define P_Hold_Align_Remove_State_Machine 27177
#define P_Hold_2nd_Remove_State_Machine 27178
#define P_Hold_Supply_1st_State_Machine 27179
#define P_Hold_Supply_2nd_State_Machine 27180
#define P_Hold_Existence_Insp_State_Machine 27181
#define P_Hold_NG_PNP_Remove_State_Machine 27182
#define P_Hold_Data_Process_Complete 27183
#define P_Hold_Semi_Run_Enable_Pos_State_Machine 27184
#define P_HOLD_Existence_Insp_Queue_State_Machine 27185
#define P_Hold_Stop_Existence_Insp_STEP 27186
#define P_SubMaster_Status_Err 27187
#define P_Data_Process_Rtn 27188
#define P_Hold_Set_Trigger 27189
#define P_Hold_Get_Trigger 27190
#define P_Anode_2nd_Data 27191
#define P_Anode_Align_Data 27192
#define P_Hold_Remove_Step 27193
#define P_HList_Head_Idx 27194
#define P_Hold_Next_ID 27195
#define P_HCmd_List 27196
#define P_Hold_Data_Value 27216
#define P_Comb_Bitwise 27217
#define P_Target_Cmd 27218
#define P_Temp_Bit 27219
#define P_Get_ErrorCode 27220
#define P_Rtn_Code 27221
#define P_Complete_Hold_Bit 27222
#define P_HoldMtion_Flag 27223
#define P_Ret_BitWise 27224
#define P_NotEnough_GetSpace 27225
#define P_NotEnough_SetSpace 27226
#define P_Check_SetSpace 27227
#define P_Hold_Get_Data 27228
#define P_Err_NextID_Flag 27229
#define P_Elec_Bit 27230
#define P_MotionData 27231
#define P_DataList 27232
#define P_Hold_Data_Err 27237
#define P_Cur_PosX1 27247
#define P_Cur_PosZ1 27248
#define P_Cur_PosX2 27249
#define P_Cur_PosZ2 27250
#define P_Dest_PosX 27251
#define P_Dest_PosZ 27252
#define P_FailToParse 27253
#define P_CurTrigger 27254
#define P_TimeOutTrigger 27255
#define P_CalcTime 27256
#define P_Cycle_Count 27257
#define P_MotionTimeOutFlag 27258
#define P_Set_Data 27259
#define P_Rtn 27260
#define P_CurPosTestBit 27261
#define P_Hold_Anode_Pause_CHK 27262
#define P_Hold_Cathode_Pause_CHK 27263
#define P_Surface_Complete_To_Hold 27264
#define P_Hold_Motion_Arr 27265
#define P_Hold_Pause_Trg 27285
#define P_From_Staring_Flag 27286
#define P_Hold_Existence_Insp_Enqueue_Flag 27287
#define P_Hold_Rtn 27288
#define P_Debug_Existence_Insp_STEP 27289
#define P_Hold_Align_Sheet_CHK 27290
#define P_Hold_Cathode_Exception_Empty_Flag 27291
#define P_Hold_Anode_Exception_Empty_Flag 27292
#define P_HOLD_Hold_Process_State_Machine 27293
#define P_Hold_Stop_Sheet_Process_STEP 27294
#define P_Hold_Debug_Sheet_Process_STEP 27295
#define P_Hold_Stop_Point 27296
#define P_Hold_CHK 27297
#define P_Hold_Test 27298
#define P_Anode_1st_Motion_Complete 27299
#define P_Anode_2nd_Motion_Complete 27300
#define P_Anode_NG_PNP_Motion_Complete 27301
#define P_Cathode_1st_Motion_Complete 27302
#define P_Cathode_2nd_Motion_Complete 27303
#define P_Cathode_NG_PNP_Motion_Complete 27304
#define P_Anode_1st_Picker_Motion_Complete 27305
#define P_Cathode_1st_Picker_Motion_Complete 27306
#define P_individual_return 27307
#define P_individual_return2 27308
#define P_HoldCurPosBit1 27309
#define P_HoldCurPosBit2 27310
#define P_Parsing_Status 27311
#define P_Sel_Obj 27312
#define P_Sel_Elec 27313
#define P_Error 27314
#define P_Vision_FirstSepa_Complete 27315
#define P_NG_PNP_Turn_TM 27316
#define P_NG_PNP_Turn_TS 27317
#define P_NG_PNP_Turn_TA 27318
#define P_NG_PNP_Up_TM 27319
#define P_NG_PNP_Up_TS 27320
#define P_NG_PNP_Up_TA 27321
#define P_NG_PNP_Down_TM 27322
#define P_NG_PNP_Down_TS 27323
#define P_NG_PNP_Down_TA 27324
#define P_NG_PNP_Vac_Time 27325
#define P_NG_PNP_Blow_Time 27326
#define P_Slow_NG_Mode_Btn 27327
#define P_HOLD_Memory_Tower_Offset 27328
#define P_Hold_Pause_Use 27329
#define P_Hold_Err_MNTR 27330
#define P_Hold_Err_Data_Save 27334
#define P_Hold_Err_Action_Data_Save 27342
#define P_Hold_Motion_Err_Chk 27350
#define P_Hold_Memory_Tower_Err_Pos 27351
#define P_Hold_Motion_TimeOut 27366
#define P_Hold_Data_OK 27367
#define P_VISION_TRG_PLC4_AnodeSurface_Ins_Shoot 27368
#define P_VISION_TRG_PLC4_CathodeSurface_Ins_Shoot 27369
#define P_Memory_Tower_Test 27370
#define P_Temp_Run_Mode 27371
#define P_Data_Idx 27372
#define P_Get_Data_Idx 27373
#define P_HOLD_Data_Err_Queue 27374
#define P_HOLD_Data_Err_State_Machine 27375
#define P_HOLD_Err_Set_Data 27376
#define P_HOLD_Err_Save 27377
#define P_Sepa_Run_Completed_Flag 27378
#define M_Motor_Vel 9135
#define M_Motor_TA 9185
#define M_Motor_TD 9235
#define M_Motor_BTN 9285
#define M_Motor_RecipePos 9335
#define M_Motor_Move_Distance 9385
#define M_Motor_Home_Offset 9435
#define M_Motor_Pos_Data 9485
#define M_Motor_Status_Data 9535
#define M_Motor_Recipe_Pos_Interlock 9585
#define M_Motor_Peak_Load_Ratio 9635
#define M_Motor_Effective_Load_Ratio 9685
#define M_Motor_Check_Current_Recipe_Pos 9735
#define P_Buffer_Seqdata_MSA_Array 27379
#define P_Buffer_Seqdata_Align_Take_Off_Array 27429
#define P_VISION_MSA_Align_Module_Complete_Bit 27479
#define P_Module_Manual_MSA_Act_Command_Array 27579
#define P_OLD_Module_Manual_MSA_Act_Command_Array 27679
#define P_Module_MSA_Act_State_Machine_Array 27779
#define P_VISION_MSA_Seq_Stopping_Point 27879
#define P_Align_Take_Off_Module_Complete_Bit 27912
#define P_Module_Manual_Align_Take_Off_Act_Command_Array 28012
#define P_OLD_Module_Manual_Align_Take_Off_Act_Command_Array 28112
#define P_Module_Align_Take_Off_Act_State_Machine_Array 28212
#define P_Log_Data_Y 28312
#define P_Log_Data_M 28313
#define P_Log_Data_D 28314
#define P_Log_Data_H 28315
#define P_Log_Data_m 28316
#define P_Log_Data_s 28317
#define P_MNTR_End_Index 28318
#define P_BG_CPLC_Running_MNTR 50
#define P_RTI_CPLC_Running_MNTR 51
#define P_Log_Start_Flag 170
#define P_Log_Document_Remove_Flag 171
#define P_Sepa_ID_Change_Flag 172
#define P_USB_Register 173
#define P_Cur_Line_Check 175
#define P_Cur_Line_Check_Init 176
#define P_Buffer_Judge_Trg 28319
#define P_Hold_Pass 28329
#define P_PLC01_Queue_MNTR 28330
#define P_PLC01_Total_Step_Flag 28345
#define P_PLC02_Total_Step_Flag 28346
#define P_PLC014_Total_Step_Flag 28347
#define P_PLC02_Total_Step_Flag2 28348
#define P_Vac_Pass 28349
#define P_Vision_Pass_Exisitence 28350
#define P_Vision_Pass_Empty 28351
#define P_Vision_Pass_FirstSepa 28352
#define P_Vision_Pass_Stack_Inspection 28353
#define P_ULD_Home_Pass 28354
#define P_Clamp_Cell_Down_Use 28355
#define P_FR_Clamp_Use_Test 28356
#define P_Door_Interlock_Use_Flag 28357
#define P_Vacuum_Door_Clear_Use 28358
#define P_Align_Test_Pos 28359
#define P_PLC01_Exe_Is_Ena_Step_Flag 28360
#define P_PLC01_Exe_Fist_Sepa_Step_Flag 28370
#define P_PLC01_Exe_Prod_Step_Flag 28380
#define P_PLC01_HOLD_Insp_Step_Flag 28385
#define P_PLC01_HOLD_Main_Step_Flag 28395
#define P_PLC01_Sus_Discharge_Step_Flag 28410
#define P_PLC01_Sus_ARC_Step_Flag 28420
#define P_PLC01_STOP_Init_Step_Flag 28430
#define P_PLC01_STOP_Cycle_ST_Step_Flag 28440
#define P_PLC02_Exe_Module_First_Sepa_Step_Flag 28455
#define P_PLC02_Sus_Module_Discharge_Step_Flag 28456
#define P_PLC02_Sus_Module_ARC_Step_Flag 28457
#define P_PLC02_Sus_Module_1TR_Supply_Step_Flag 28458
#define P_PLC02_HOLD_Module_Insp_Step_Flag 28459
#define P_PLC02_HOLD_Module_Remove_NGPNP_Step_Flag 28460
#define P_PLC02_HOLD_Module_Remove_Align_Step_Flag 28461
#define P_PLC02_HOLD_Module_Remove_2TR_Step_Flag 28462
#define P_PLC02_HOLD_Module_Supply_1TR_Step_Flag 28463
#define P_PLC02_HOLD_Module_Supply_Align_Step_Flag 28464
#define P_PLC02_HOLD_Module_Supply_2TR_Step_Flag 28465
#define P_PLC02_HOLD_Module_SemiRun_Pos_Step_Flag 28466
#define P_PLC14_STOP_Module_Cycle_Stop_Step_Flag 28467
#define P_PLC02_Discharge_MNTR 28468
#define M_EPC_SENSOR_Load_Ratio 6033
#define M_STACK_VISION_Load_Ratio 6034
#define M_SHEET_PAPER_X_Load_Ratio 6035
#define M_Align_CA_X_Load_Ratio 6036
#define M_Align_CA_Y_Load_Ratio 6037
#define M_Align_CA_T_Load_Ratio 6038
#define M_Align_AN_X_Load_Ratio 6039
#define M_Align_AN_Y_Load_Ratio 6040
#define M_Align_AN_T_Load_Ratio 6041
#define M_NG_PnP_CA_T_Load_Ratio 6042
#define M_NG_PnP_AN_T_Load_Ratio 6043
#define M_NG_PnP_CA_Z_Load_Ratio 6044
#define M_NG_PnP_AN_Z_Load_Ratio 6045
#define M_UNLOADER_X_Load_Ratio 6046
#define M_UNLOADER_Z_Load_Ratio 6047
#define M_UNLOADER_T_Load_Ratio 6048
#define P_EPC_SENSOR_Load_Ratio 133
#define P_STACK_VISION_Load_Ratio 134
#define P_SHEET_PAPER_X_Load_Ratio 135
#define P_Align_CA_X_Load_Ratio 136
#define P_Align_CA_Y_Load_Ratio 137
#define P_Align_CA_T_Load_Ratio 138
#define P_Align_AN_X_Load_Ratio 139
#define P_Align_AN_Y_Load_Ratio 140
#define P_Align_AN_T_Load_Ratio 141
#define P_NG_PnP_CA_T_Load_Ratio 142
#define P_NG_PnP_AN_T_Load_Ratio 143
#define P_NG_PnP_CA_Z_Load_Ratio 144
#define P_NG_PnP_AN_Z_Load_Ratio 145
#define P_UNLOADER_X_Load_Ratio 146
#define P_UNLOADER_Z_Load_Ratio 147
#define P_UNLOADER_T_Load_Ratio 148
#define P_Anode_Vision_MNTR 28469
#define P_Cathode_Vision_MNTR 28470
#define P_Vision_MNTR 28471
#define P_Error_Index_Number 28476
#define P_ECAT_MNTR_Bit 28477
#define P_Local_MNTR_Bit 28478
#define P_Clamp_Motion_VER1 28479
#define P_CA_DR_Ta 28480
#define P_CA_DR_Ts 28481
#define P_CA_DR_Tm 28482
#define P_CA_DR_Td 28483
#define P_CA_DR_Tsd 28484
#define P_AN_DR_Ta 28485
#define P_AN_DR_Ts 28486
#define P_AN_DR_Tm 28487
#define P_AN_DR_Td 28488
#define P_AN_DR_Tsd 28489
#define P_First_Sepa_1st_Driving_Move 28490
#define P_AN_Cam_Total_Time 28491
#define P_CA_Cam_Total_Time 28492
#define P_Dry_Run_BTN 28493
#define P_Home_Angle_Offset_change_Bit 28494
#define P_Z_Var 28495
#define P_No1_Recipe_Pos_IL 28496
#define P_No2_Recipe_Pos_IL 28549
#define P_No3_Recipe_Pos_IL 28602
#define P_No4_Recipe_Pos_IL 28655
#define P_No5_Recipe_Pos_IL 28708
#define P_No6_Recipe_Pos_IL 28761
#define P_No7_Recipe_Pos_IL 28814
#define P_No8_Recipe_Pos_IL 28867
#define P_No9_Recipe_Pos_IL 28920
#define P_No10_Recipe_Pos_IL 28973
#define P_Recipe_POS_Interock_M 29026
#endif
#endif
#endif //_PP_PROJ_H_
