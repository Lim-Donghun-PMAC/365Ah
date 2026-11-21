
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
,M_Y_A_Site_Heart_Bit=5014
,M_X_PLC_Anode_Sheet_Ready2=4010
,M_X_PLC_Cathode_Sheet_Ready2=4011
,M_X_B_Site_Heart_Bit=4014
,M_PLC_HeartBit_Flag=4223
,M_X_BTN_Press_Jog_Left_From_PLC=4160
,M_X_BTN_Press_Jog_Right_From_PLC=4107
,M_Sample_JR_Prod_Count=8351
,M_Sample_Btn_Flag=8352
,M_Y_Vacuum_Popup_On_Request=8353
,M_X_Vacuum_Popup_On_Request_Ack=8354
,M_SysTimer=8503
,M_Stack_Host_ID_Buffer_Mode=8564
,M_Stack_Host_ID_Sample_Type=8565
,M_Stack_Host_ID_JR_Result=8566
,M_Stack_Host_ID_NG_Type=8567
,M_Manual_ARC_BTN=9129
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
,M_Touchprobefunction=8355
,M_Touchprobestatus=8404
,M_Ecat_Motor_State=8453
,M_Motor_BTN_Info=8504
,M_ASCII_Stack_Work_Host_Sepa_ID_Buffer=8554
,M_ASCII_Read_Stack_Work_Host_Sepa_ID_Buffer=8568
,M_ASCII_Uloader_1st_Host_ID_Buffer=8575
,M_ASCII_Anode_Sheet_Belt_Buffer=8585
,M_ASCII_Anode_Sheet_Buffer=8592
,M_ASCII_Cathode_Sheet_Belt_Buffer=8648
,M_ASCII_Cathode_Sheet_Buffer=8655
,M_ASCII_First_Sheet_Buffer=8711
,M_ASCII_Last_Sheet_Buffer=8718
,P_BTN_Jog_BWD_M=8725
,P_BTN_Jog_FWD_M=8775
,M_UnWinder_BTN_Lamp=8825
,M_Cathode_BTN_Lamp=8841
,M_Anode_BTN_Lamp=8873
,M_Stack_BTN_Lamp=8905
,M_ARC_BTN_Lamp=8937
,M_UnWinder_BTN_Interlock=8969
,M_Cathode_BTN_Interlock=8985
,M_Anode_BTN_Interlock=9017
,M_Stack_BTN_Interlock=9049
,M_ARC_BTN_Interlock=9081
,M_NP_BTN_Interlock=9113
,M_Motor_Vel=9130
,M_Motor_TA=9180
,M_Motor_TD=9230
,M_Motor_BTN=9280
,M_Motor_RecipePos=9330
,M_Motor_Move_Distance=9380
,M_Motor_Home_Offset=9430
,M_Motor_Pos_Data=9480
,M_Motor_Status_Data=9530
,M_Motor_Recipe_Pos_Interlock=9580
,M_Motor_Peak_Load_Ratio=9630
,M_Motor_Effective_Load_Ratio=9680
,M_Motor_Check_Current_Recipe_Pos=9730};
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
#define	P_BTN_Sepa_Stack_Mode	pshm->P[8473]
#define	P_CMD_Cell_Align(i)	pshm->P[(8474+i)%MAX_P]
#define	P_CMD_Cell_Stop(i)	pshm->P[(8484+i)%MAX_P]
#define	P_CMD_Cell_Reset(i)	pshm->P[(8494+i)%MAX_P]
#define	P_Anode_X_Sum_Move_mm	pshm->P[8504]
#define	P_Cathode_X_Sum_Move_mm	pshm->P[8505]
#define	P_Anode_Align_Stage_TM	pshm->P[8506]
#define	P_Anode_Align_Stage_TS	pshm->P[8507]
#define	P_Anode_Align_Stage_TA	pshm->P[8508]
#define	P_Cathode_Align_Stage_TM	pshm->P[8509]
#define	P_Cathode_Align_Stage_TS	pshm->P[8510]
#define	P_Cathode_Align_Stage_TA	pshm->P[8511]
#define	P_X_Move_Recipe_Percent	pshm->P[8512]
#define	P_PC_Jog_Motor_No	pshm->P[4301]
#define	P_PC_Jog_Speed	pshm->P[4254]
#define	P_Custom_Speed	pshm->P[4500]
#define	P_Jog_Position	pshm->P[4300]
#define	P_Jog_Work_Speed(i)	pshm->P[(8513+i)%MAX_P]
#define	P_Anode_Recipe_Count	pshm->P[8544]
#define	P_Cathode_Recipe_Count	pshm->P[8545]
#define	P_Recipe_Homing_Speed(i)	pshm->P[(8546+i)%MAX_P]
#define	P_Anode_1st_T_Belt_To_Align	pshm->P[8595]
#define	P_Anode_1st_T_Align_To_Belt	pshm->P[8596]
#define	P_Anode_1st_T_Ready	pshm->P[8597]
#define	P_Recipe_A_1st_Z_Belt_Down	pshm->P[8598]
#define	P_Recipe_A_1st_Z_Belt_Up	pshm->P[8599]
#define	P_Recipe_A_1st_Z_Align_Down	pshm->P[8600]
#define	P_Recipe_A_1st_Z_Align_Up	pshm->P[8601]
#define	P_Recipe_A_1st_Z_Ready_Up	pshm->P[8602]
#define	P_Recipe_A_1st_Z_Ready_Down	pshm->P[8603]
#define	P_Anode_1st_Z_Belt_Down	pshm->P[8604]
#define	P_Anode_1st_Z_Belt_Up	pshm->P[8605]
#define	P_Anode_1st_Z_Align_Down	pshm->P[8606]
#define	P_Anode_1st_Z_Align_Up	pshm->P[8607]
#define	P_Anode_1st_Z_Ready_Up	pshm->P[8608]
#define	P_Anode_1st_Z_Ready_Down	pshm->P[8609]
#define	P_Anode_2st_T_Align_To_Stack	pshm->P[8610]
#define	P_Anode_2st_T_Stack_To_Align	pshm->P[8611]
#define	P_Recipe_A_2st_Z_Align_Up	pshm->P[8612]
#define	P_Recipe_A_2st_Z_Align_Down	pshm->P[8613]
#define	P_Recipe_A_2st_Z_Stack_Up	pshm->P[8614]
#define	P_Recipe_A_2st_Z_Stack_Down	pshm->P[8615]
#define	P_Recipe_A_2st_Z_Ready_Up	pshm->P[8616]
#define	P_Recipe_A_2st_Z_Ready_Down	pshm->P[8617]
#define	P_Anode_2nd_Z_Align_Up	pshm->P[8618]
#define	P_Anode_2nd_Z_Align_Down	pshm->P[8619]
#define	P_Anode_2nd_Z_Stack_Up	pshm->P[8620]
#define	P_Anode_2nd_Z_Stack_Down	pshm->P[8621]
#define	P_Anode_2nd_Z_Ready_Up	pshm->P[8622]
#define	P_Anode_2st_Z_Ready_Down	pshm->P[8623]
#define	P_Anode_Clamp_Y1_On_1st	pshm->P[8624]
#define	P_Anode_Clamp_Y1_On_2nd	pshm->P[8625]
#define	P_Anode_Clamp_Y1_On_3rd	pshm->P[8626]
#define	P_Anode_Clamp_Y1_On_4th	pshm->P[8627]
#define	P_Anode_Clamp_Y1_Off_1st	pshm->P[8628]
#define	P_Anode_Clamp_Y1_Off_2nd	pshm->P[8629]
#define	P_Anode_Clamp_Y1_Off_3rd	pshm->P[8630]
#define	P_Anode_Clamp_Y2_On_1st	pshm->P[8631]
#define	P_Anode_Clamp_Y2_On_2nd	pshm->P[8632]
#define	P_Anode_Clamp_Y2_On_3rd	pshm->P[8633]
#define	P_Anode_Clamp_Y2_On_4th	pshm->P[8634]
#define	P_Anode_Clamp_Y2_Off_1st	pshm->P[8635]
#define	P_Anode_Clamp_Y2_Off_2nd	pshm->P[8636]
#define	P_Anode_Clamp_Y2_Off_3rd	pshm->P[8637]
#define	P_Anode_Clamp_Z1_On_1st	pshm->P[8638]
#define	P_Anode_Clamp_Z1_On_2nd	pshm->P[8639]
#define	P_Anode_Clamp_Z1_On_3rd	pshm->P[8640]
#define	P_Anode_Clamp_Z1_On_4th	pshm->P[8641]
#define	P_Anode_Clamp_Z1_Off_1st	pshm->P[8642]
#define	P_Anode_Clamp_Z1_Off_2nd	pshm->P[8643]
#define	P_Anode_Clamp_Z1_Off_3rd	pshm->P[8644]
#define	P_Anode_Clamp_Z1_Down	pshm->P[8645]
#define	P_Final_Roll_X_Sepa_1st	pshm->P[8646]
#define	P_Final_Roll_X_Sepa_2nd	pshm->P[8647]
#define	P_Final_Roll_X_Sepa_3rd	pshm->P[8648]
#define	P_Final_Roll_X_Sepa_4th	pshm->P[8649]
#define	P_Final_Roll_X_Sepa_5th	pshm->P[8650]
#define	P_Final_Roll_X_Anode_Move	pshm->P[8651]
#define	P_Final_Roll_X_Discharge	pshm->P[8652]
#define	P_Final_Roll_X_Cathode_Move	pshm->P[8653]
#define	P_Final_Roll_X_Run_Wait_Pos	pshm->P[8654]
#define	P_Final_Roll_Z_Ready_And_Cutting	pshm->P[8655]
#define	P_Final_Roll_Z_Run_Pos	pshm->P[8656]
#define	P_Final_Roll_Z_Sepa_3rd	pshm->P[8657]
#define	P_Final_Roll_Z_Sepa_4th	pshm->P[8658]
#define	P_Final_Roll_Z_Sepa_5th	pshm->P[8659]
#define	P_Stack_Table_Z_For_Sepa	pshm->P[8660]
#define	P_Stack_Table_Z_For_Run	pshm->P[8661]
#define	P_Stack_Table_Z_For_Init	pshm->P[8662]
#define	P_Cathode_Clamp_Y1_On_1st	pshm->P[8663]
#define	P_Cathode_Clamp_Y1_On_2nd	pshm->P[8664]
#define	P_Cathode_Clamp_Y1_On_3rd	pshm->P[8665]
#define	P_Cathode_Clamp_Y1_On_4th	pshm->P[8666]
#define	P_Cathode_Clamp_Y1_Off_1st	pshm->P[8667]
#define	P_Cathode_Clamp_Y1_Off_2nd	pshm->P[8668]
#define	P_Cathode_Clamp_Y1_Off_3rd	pshm->P[8669]
#define	P_Cathode_Clamp_Y2_On_1st	pshm->P[8670]
#define	P_Cathode_Clamp_Y2_On_2nd	pshm->P[8671]
#define	P_Cathode_Clamp_Y2_On_3rd	pshm->P[8672]
#define	P_Cathode_Clamp_Y2_On_4th	pshm->P[8673]
#define	P_Cathode_Clamp_Y2_Off_1st	pshm->P[8674]
#define	P_Cathode_Clamp_Y2_Off_2nd	pshm->P[8675]
#define	P_Cathode_Clamp_Y2_Off_3rd	pshm->P[8676]
#define	P_Cathode_Clamp_Z1_On_1st	pshm->P[8677]
#define	P_Cathode_Clamp_Z1_On_2nd	pshm->P[8678]
#define	P_Cathode_Clamp_Z1_On_3rd	pshm->P[8679]
#define	P_Cathode_Clamp_Z1_On_4th	pshm->P[8680]
#define	P_Cathode_Clamp_Z1_Off_1st	pshm->P[8681]
#define	P_Cathode_Clamp_Z1_Off_2nd	pshm->P[8682]
#define	P_Cathode_Clamp_Z1_Off_3rd	pshm->P[8683]
#define	P_Cathode_Clamp_Z1_Down	pshm->P[8684]
#define	P_Cathode_2st_T_Align_To_Stack	pshm->P[8685]
#define	P_Cathode_2st_T_Stack_To_Align	pshm->P[8686]
#define	P_Slave8_Target_X_Align_To_Stack_1st	pshm->P[8687]
#define	P_Slave8_Target_X_Align_To_Stack_2nd	pshm->P[8688]
#define	P_Slave8_Target_X_Stack_To_Align_1st	pshm->P[8689]
#define	P_Slave8_Target_X_Stack_To_Align_2nd	pshm->P[8690]
#define	P_Slave8_Target_X_Stack_To_Align_3rd	pshm->P[8691]
#define	P_Cathode_2nd_Z_Align_Up	pshm->P[8692]
#define	P_Cathode_2nd_Z_Align_Down	pshm->P[8693]
#define	P_Cathode_2nd_Z_Stack_Up	pshm->P[8694]
#define	P_Cathode_2nd_Z_Stack_Down	pshm->P[8695]
#define	P_Cathode_2nd_Z_Ready_Up	pshm->P[8696]
#define	P_Cathode_2st_Z_Ready_Down	pshm->P[8697]
#define	P_Recipe_C_2st_Z_Align_Up	pshm->P[8698]
#define	P_Recipe_C_2st_Z_Align_Down	pshm->P[8699]
#define	P_Recipe_C_2st_Z_Stack_Up	pshm->P[8700]
#define	P_Recipe_C_2st_Z_Stack_Down	pshm->P[8701]
#define	P_Recipe_C_2st_Z_Ready_Up	pshm->P[8702]
#define	P_Recipe_C_2st_Z_Ready_Down	pshm->P[8703]
#define	P_Cathode_1st_T_Belt_To_Align	pshm->P[8704]
#define	P_Cathode_1st_T_Align_To_Belt	pshm->P[8705]
#define	P_Cathode_1st_T_Ready	pshm->P[8706]
#define	P_Cathode_1st_Z_Belt_Down	pshm->P[8707]
#define	P_Cathode_1st_Z_Belt_Up	pshm->P[8708]
#define	P_Cathode_1st_Z_Align_Down	pshm->P[8709]
#define	P_Cathode_1st_Z_Align_Up	pshm->P[8710]
#define	P_Cathode_1st_Z_Ready_Up	pshm->P[8711]
#define	P_Cathode_1st_Z_Ready_Down	pshm->P[8712]
#define	P_Recipe_C_1st_Z_Belt_Down	pshm->P[8713]
#define	P_Recipe_C_1st_Z_Belt_Up	pshm->P[8714]
#define	P_Recipe_C_1st_Z_Align_Down	pshm->P[8715]
#define	P_Recipe_C_1st_Z_Align_Up	pshm->P[8716]
#define	P_Recipe_C_1st_Z_Ready_Up	pshm->P[8717]
#define	P_Recipe_C_1st_Z_Ready_Down	pshm->P[8718]
#define	P_1st_Sheet_Paper_X_FWD	pshm->P[8719]
#define	P_1st_Sheet_Paper_X_BWD	pshm->P[8720]
#define	P_Cathode_NG_T_NG_To_Align	pshm->P[8721]
#define	P_Cathode_NG_T_Align_To_NG	pshm->P[8722]
#define	P_Cathode_NG_Z_NG_Down	pshm->P[8723]
#define	P_Cathode_NG_Z_NG_Up	pshm->P[8724]
#define	P_Cathode_NG_Z_Align_Down	pshm->P[8725]
#define	P_Cathode_NG_Z_Align_Up	pshm->P[8726]
#define	P_Anode_NG_T_NG_To_Align	pshm->P[8727]
#define	P_Anode_NG_T_Align_To_NG	pshm->P[8728]
#define	P_Anode_NG_Z_NG_Down	pshm->P[8729]
#define	P_Anode_NG_Z_NG_Up	pshm->P[8730]
#define	P_Anode_NG_Z_Align_Down	pshm->P[8731]
#define	P_Anode_NG_Z_Align_Up	pshm->P[8732]
#define	P_1st_ULD_X_Stack	pshm->P[8733]
#define	P_1st_ULD_X_FWD	pshm->P[8734]
#define	P_1st_ULD_X_Init_Pos	pshm->P[8735]
#define	P_1st_ULD_X_Target_BWD	pshm->P[8736]
#define	P_1st_ULD_Z_Stack	pshm->P[8737]
#define	P_1st_ULD_Z_Cutting_For_Cell	pshm->P[8738]
#define	P_1st_ULD_Z_Discharge_For_Cell	pshm->P[8739]
#define	P_1st_ULD_Z_Target_Down	pshm->P[8740]
#define	P_1st_ULD_T_Wait	pshm->P[8741]
#define	P_1st_ULD_T_Avoid_Angle	pshm->P[8742]
#define	P_1st_ULD_T_90_Angle	pshm->P[8743]
#define	P_2nd_PNP_Stack_Down_Pos	pshm->P[8744]
#define	P_2nd_PNP_Stack_Up_Pos	pshm->P[8745]
#define	P_Anode_Clamp_Down_MNTR	pshm->P[8746]
#define	P_Cathode_Clamp_Down_MNTR	pshm->P[8747]
#define	P_FR_Ta	pshm->P[8748]
#define	P_FR_Ts	pshm->P[8749]
#define	P_FR_Tm	pshm->P[8750]
#define	P_Anode_2TR_Avoid	pshm->P[8751]
#define	P_Cathode_2TR_Avoid	pshm->P[8752]
#define	P_Force_Stop_Flag	pshm->P[8753]
#define	P_Execute_DryRun_Stop_Timer	pshm->P[8754]
#define	P_DryRun_Timer	pshm->P[8755]
#define	P_Dryrun_Operating_Time	pshm->P[8756]
#define	P_Anode_Align_Vac_Err_On	pshm->P[8757]
#define	P_Cathode_Align_Vac_Err_On	pshm->P[8758]
#define	P_Anode_1ST_TR_Vac_Err_On	pshm->P[8759]
#define	P_Anode_2ND_TR_Vac_Err_On	pshm->P[8760]
#define	P_Cathode_1ST_TR_Vac_Err_On	pshm->P[8761]
#define	P_Cathode_2ND_TR_Vac_Err_On	pshm->P[8762]
#define	P_MNTR_PLC0_Task_Time(i)	pshm->P[(8763+i)%MAX_P]
#define	P_MNTR_PLC0_Task_Max_Time	pshm->P[8765]
#define	P_MNTR_PLC1_Task_Time(i)	pshm->P[(8766+i)%MAX_P]
#define	P_MNTR_PLC1_Task_Max_Time	pshm->P[8768]
#define	P_MNTR_PLC2_Task_Time(i)	pshm->P[(8769+i)%MAX_P]
#define	P_MNTR_PLC2_Task_Max_Time	pshm->P[8771]
#define	P_MNTR_PLC3_Task_Time(i)	pshm->P[(8772+i)%MAX_P]
#define	P_MNTR_PLC3_Task_Max_Time	pshm->P[8774]
#define	P_MNTR_PLC4_Task_Time(i)	pshm->P[(8775+i)%MAX_P]
#define	P_MNTR_PLC4_Task_Max_Time	pshm->P[8777]
#define	P_MNTR_PLC5_Task_Time(i)	pshm->P[(8778+i)%MAX_P]
#define	P_MNTR_PLC5_Task_Max_Time	pshm->P[8780]
#define	P_MNTR_PLC6_Task_Time(i)	pshm->P[(8781+i)%MAX_P]
#define	P_MNTR_PLC6_Task_Max_Time	pshm->P[8783]
#define	P_MNTR_PLC7_Task_Time(i)	pshm->P[(8784+i)%MAX_P]
#define	P_MNTR_PLC7_Task_Max_Time	pshm->P[8786]
#define	P_MNTR_PLC8_Task_Time(i)	pshm->P[(8787+i)%MAX_P]
#define	P_MNTR_PLC8_Task_Max_Time	pshm->P[8789]
#define	P_MNTR_PLC9_Task_Time(i)	pshm->P[(8790+i)%MAX_P]
#define	P_MNTR_PLC9_Task_Max_Time	pshm->P[8792]
#define	P_MNTR_PLC10_Task_Time(i)	pshm->P[(8793+i)%MAX_P]
#define	P_MNTR_PLC10_Task_Max_Time	pshm->P[8795]
#define	P_MNTR_PLC11_Task_Time(i)	pshm->P[(8796+i)%MAX_P]
#define	P_MNTR_PLC11_Task_Max_Time	pshm->P[8798]
#define	P_MNTR_PLC12_Task_Time(i)	pshm->P[(8799+i)%MAX_P]
#define	P_MNTR_PLC12_Task_Max_Time	pshm->P[8801]
#define	P_MNTR_PLC13_Task_Time(i)	pshm->P[(8802+i)%MAX_P]
#define	P_MNTR_PLC13_Task_Max_Time	pshm->P[8804]
#define	P_MNTR_PLC14_Task_Time(i)	pshm->P[(8805+i)%MAX_P]
#define	P_MNTR_PLC14_Task_Max_Time	pshm->P[8807]
#define	P_MNTR_PLC15_Task_Time(i)	pshm->P[(8808+i)%MAX_P]
#define	P_MNTR_PLC15_Task_Max_Time	pshm->P[8810]
#define	P_MNTR_PLC16_Task_Time(i)	pshm->P[(8811+i)%MAX_P]
#define	P_MNTR_PLC16_Task_Max_Time	pshm->P[8813]
#define	P_MNTR_PLC17_Task_Time(i)	pshm->P[(8814+i)%MAX_P]
#define	P_MNTR_PLC17_Task_Max_Time	pshm->P[8816]
#define	P_MNTR_PLC18_Task_Time(i)	pshm->P[(8817+i)%MAX_P]
#define	P_MNTR_PLC18_Task_Max_Time	pshm->P[8819]
#define	P_MNTR_PLC19_Task_Time(i)	pshm->P[(8820+i)%MAX_P]
#define	P_MNTR_PLC19_Task_Max_Time	pshm->P[8822]
#define	P_MNTR_PLC20_Task_Time(i)	pshm->P[(8823+i)%MAX_P]
#define	P_MNTR_PLC20_Task_Max_Time	pshm->P[8825]
#define	P_MNTR_PLC21_Task_Time(i)	pshm->P[(8826+i)%MAX_P]
#define	P_MNTR_PLC21_Task_Max_Time	pshm->P[8828]
#define	P_MNTR_PLC22_Task_Time(i)	pshm->P[(8829+i)%MAX_P]
#define	P_MNTR_PLC22_Task_Max_Time	pshm->P[8831]
#define	P_MNTR_PLC23_Task_Time(i)	pshm->P[(8832+i)%MAX_P]
#define	P_MNTR_PLC23_Task_Max_Time	pshm->P[8834]
#define	P_MNTR_PLC24_Task_Time(i)	pshm->P[(8835+i)%MAX_P]
#define	P_MNTR_PLC24_Task_Max_Time	pshm->P[8837]
#define	P_MNTR_PLC25_Task_Time(i)	pshm->P[(8838+i)%MAX_P]
#define	P_MNTR_PLC25_Task_Max_Time	pshm->P[8840]
#define	P_MNTR_PLC26_Task_Time(i)	pshm->P[(8841+i)%MAX_P]
#define	P_MNTR_PLC26_Task_Max_Time	pshm->P[8843]
#define	P_MNTR_PLC27_Task_Time(i)	pshm->P[(8844+i)%MAX_P]
#define	P_MNTR_PLC27_Task_Max_Time	pshm->P[8846]
#define	P_MNTR_PLC28_Task_Time(i)	pshm->P[(8847+i)%MAX_P]
#define	P_MNTR_PLC28_Task_Max_Time	pshm->P[8849]
#define	P_MNTR_PLC29_Task_Time(i)	pshm->P[(8850+i)%MAX_P]
#define	P_MNTR_PLC29_Task_Max_Time	pshm->P[8852]
#define	P_MNTR_PLC30_Task_Time(i)	pshm->P[(8853+i)%MAX_P]
#define	P_MNTR_PLC30_Task_Max_Time	pshm->P[8855]
#define	P_In_Pos_Trg	pshm->P[8856]
#define	P_Position_Calc_Status	pshm->P[8857]
#define	P_Vision_Result(i)	pshm->P[(8858+i)%MAX_P]
#define	P_Vision_Result_Get_First_Cycle(i)	pshm->P[(8862+i)%MAX_P]
#define	P_Init_Result(i)	pshm->P[(8866+i)%MAX_P]
#define	P_PNP_Pos	pshm->P[8872]
#define	P_Execute_Manage_Mode	pshm->P[8873]
#define	P_Align_NG_Tack_Flag	pshm->P[8874]
#define	P_Anode_Align_OK_Flag	pshm->P[8875]
#define	P_Anode_Align_NG_Flag	pshm->P[8876]
#define	P_Cathode_Align_OK_Flag	pshm->P[8877]
#define	P_Cathode_Align_NG_Flag	pshm->P[8878]
#define	P_Stack_Table_OK_Flag	pshm->P[8879]
#define	P_Anode_Retry_OK_Flag	pshm->P[8880]
#define	P_Anode_Retry_NG_Flag	pshm->P[8881]
#define	P_Cathode_Retry_OK_Flag	pshm->P[8882]
#define	P_Cathode_Retry_NG_Flag	pshm->P[8883]
#define	P_Anode_Surf_Insp_Trigger	pshm->P[8884]
#define	P_Cathode_Surf_Insp_Trigger	pshm->P[8885]
#define	P_First_Anode_Sheet_Supply_Flag	pshm->P[8886]
#define	P_First_Cathode_Sheet_Supply_Flag	pshm->P[8887]
#define	P_Cathode_Cur_Mode	pshm->P[8888]
#define	P_Anode_Cur_Mode	pshm->P[8889]
#define	P_Anode_Run_FR_Move_Check_AI	pshm->P[8890]
#define	P_Cathode_Run_FR_Move_Check_AI	pshm->P[8891]
#define	P_FR_Move_Check_AI_OffSet	pshm->P[8892]
#define	P_FR_AI_Value(i)	pshm->P[(8893+i)%MAX_P]
#define	P_Aver_FR_AI_Value	pshm->P[8898]
#define	P_Process_Function_Command	pshm->P[8899]
#define	P_HOLD_Existence_Insp_State_Machine	pshm->P[8900]
#define	P_Execute_IsEnable_State_Machine	pshm->P[8901]
#define	P_EXECUTE_FUNC_Ready_STEP	pshm->P[8902]
#define	P_Execute_First_Sepa_Ontable_State_Machine	pshm->P[8903]
#define	P_Execute_Prod_Manage_State_Machine	pshm->P[8904]
#define	P_Execute_Enqueue_State_Machine	pshm->P[8905]
#define	P_STOP_Initial_Process_STEP	pshm->P[8906]
#define	P_STOP_Cylce_Stop_STEP	pshm->P[8907]
#define	P_Stop_CycleStop_Position	pshm->P[8908]
#define	P_Upcount_NextStep	pshm->P[8909]
#define	P_SUSPEND_FUNC_JR_Discharge_STEP	pshm->P[8910]
#define	P_SUSPEND_FUNC_ARC_STEP	pshm->P[8911]
#define	P_Suspend_ARC_Complete_Flag	pshm->P[8912]
#define	P_EXECUTE_FUNC_Debug_On_Sepa_STEP	pshm->P[8913]
#define	P_QueueCommand_Occurs	pshm->P[8914]
#define	P_EXECUTE_STEP	pshm->P[8915]
#define	P_SUSPEND_STEP	pshm->P[8916]
#define	P_HOLD_STEP	pshm->P[8917]
#define	P_STOP_STEP	pshm->P[8918]
#define	P_EXECUTE_Error_STEP	pshm->P[8919]
#define	P_SUSPEND_Error_STEP	pshm->P[8920]
#define	P_HOLD_Error_STEP	pshm->P[8921]
#define	P_STOP_Error_STEP	pshm->P[8922]
#define	P_Queue_Enqueue_Command	pshm->P[8923]
#define	P_Queue_Enqueue_return	pshm->P[8924]
#define	P_Queue_Dequeue_Command	pshm->P[8925]
#define	P_Queue_Dequeue_return	pshm->P[8926]
#define	P_Queue_Peek_Command	pshm->P[8927]
#define	P_Dequeue_Log(i)	pshm->P[(8928+i)%MAX_P]
#define	P_Dummy_Dequeue	pshm->P[8948]
#define	P_Queue_Command_Status	pshm->P[8949]
#define	P_Queue_Process_Command	pshm->P[8950]
#define	P_Queue_Process_Status	pshm->P[8951]
#define	P_Coord_Test	pshm->P[8952]
#define	P_Coord_Test3	pshm->P[8953]
#define	P_Coord_Test2	pshm->P[8954]
#define	P_Coord_Motion_Prog_Down_Entering_Bit	pshm->P[8955]
#define	P_PMAC_Coord_Status_Bit	pshm->P[8956]
#define	P_Coord_Down_Check_Bit	pshm->P[8957]
#define	P_PMAC_Coord_Down_Inspection_Flag	pshm->P[8958]
#define	P_PMAC_Coord_Down_Num	pshm->P[8959]
#define	P_PMAC_Coord_Error_Status	pshm->P[8960]
#define	P_Motor_Current_Pos(i)	pshm->P[(8961+i)%MAX_P]
#define	P_Axis_Scale_Value(i)	pshm->P[(9011+i)%MAX_P]
#define	P_Except_Return_Array(i)	pshm->P[(9061+i)%MAX_P]
#define	P_Hold_Memory(i)	pshm->P[(9161+i)%MAX_P]
#define	P_Suspend_Memory(i)	pshm->P[(9166+i)%MAX_P]
#define	P_Execute_Memory(i)	pshm->P[(9171+i)%MAX_P]
#define	P_Stop_Memory(i)	pshm->P[(9176+i)%MAX_P]
#define	P_PLC01_Process_Function_Enter_Flag	pshm->P[9181]
#define	P_PLC01_SubMotion_Active	pshm->P[9182]
#define	P_PLC01_SlaveMotion_Active	pshm->P[9183]
#define	P_EXECUTE_Isenable_MNTR	pshm->P[9184]
#define	P_EXECUTE_IsEnable_Firt_Stacking_Flag	pshm->P[9185]
#define	P_PLC01_Execute_Retry_Sepa_Mode_Count	pshm->P[9186]
#define	P_SUSPEND_MNTR	pshm->P[9187]
#define	P_SUSPEND_MNTR_2	pshm->P[9188]
#define	P_Execute_Last_Run_Flag	pshm->P[9189]
#define	P_Suspend_ARC_Request_Flag	pshm->P[9190]
#define	P_Hold_Queue_Exist_Insp_MNTR	pshm->P[9191]
#define	P_CirQueue_Status_Value	pshm->P[9192]
#define	P_Debug_CirQueue_Status	pshm->P[9193]
#define	P_Front_Index	pshm->P[9194]
#define	P_Rear_Index	pshm->P[9195]
#define	P_Index_Max	pshm->P[9196]
#define	P_CircularQueue_Command_array(i)	pshm->P[(9197+i)%MAX_P]
#define	P_CirQueue_Length	pshm->P[9208]
#define	P_Queue_Full	pshm->P[9209]
#define	P_Queue_Empty	pshm->P[9210]
#define	P_Queue_PeekEmpty	pshm->P[9211]
#define	P_Self_items	pshm->P[9212]
#define	P_Hold_Resume_Need_Flag	pshm->P[9213]
#define	P_Stack_Heart_Bit_Timer	pshm->P[9214]
#define	P_Stack_Heart_Bit_Calc	pshm->P[9215]
#define	P_Stack_Heart_Bit_Sync_State_Machine	pshm->P[9216]
#define	P_Pause_Anode_MNTR_Min_Trigger	pshm->P[9217]
#define	P_Pause_Anode_MNTR_Max_Trigger	pshm->P[9218]
#define	P_Pause_Cathode_MNTR_Min_Trigger	pshm->P[9219]
#define	P_Pause_Cathode_MNTR_Max_Trigger	pshm->P[9220]
#define	P_Pause_Protect_Variable	pshm->P[9221]
#define	P_Resume_Protect_Variable	pshm->P[9222]
#define	P_Sepa_Mode_Opposite_Resume_Free	pshm->P[9223]
#define	P_Sepa_To_Normal_Mode_Sync_Flag	pshm->P[9224]
#define	P_Sepa_To_Normal_Mode_Sync_Err_Avoid	pshm->P[9225]
#define	P_Pause_Time_Flag	pshm->P[9226]
#define	P_Puase_Resume_Time_Check	pshm->P[9227]
#define	P_Pause_To_Resume_Time	pshm->P[9228]
#define	P_Pause_Error_Avoid_Count	pshm->P[9229]
#define	P_Pause_Error_Debug_Flag	pshm->P[9230]
#define	P_Pause_Error_Debug_P_PMAC_status	pshm->P[9231]
#define	P_Pause_Error_Debug_M_Y_Pause_Cathode_Signal	pshm->P[9232]
#define	P_Pause_Error_Debug_M_Y_Pause_Anode_Signal	pshm->P[9233]
#define	P_Pause_Error_Debug_M_Y_Pause_Status_Complete_Signal	pshm->P[9234]
#define	P_Pause_Error_Debug_P_Sepa_To_Normal_Mode_Sync_Err_Avoid	pshm->P[9235]
#define	P_Pause_Error_Debug_P_Master_Motion_Trigger	pshm->P[9236]
#define	P_Pause_Error_Debug_M_X_Opposite_Resume_Not_Free	pshm->P[9237]
#define	P_Pause_Error_Debug_P_Opposite_Lane_P_PMAC_Status	pshm->P[9238]
#define	P_Pause_Error_Debug_M_X_Pause_Status_Complete_Signal	pshm->P[9239]
#define	P_Pause_Error_Debug_M_X_PLC_Sync_Heart_Bit	pshm->P[9240]
#define	P_Pause_Error_Debug_P_Old_X_PLC_Sync_Heart_Bit	pshm->P[9241]
#define	P_Pause_Error_Debug_Buffer_P_PMAC_status	pshm->P[9242]
#define	P_Pause_Error_Debug_Buffer_M_Y_Pause_Cathode_Signal	pshm->P[9243]
#define	P_Pause_Error_Debug_Buffer_M_Y_Pause_Anode_Signal	pshm->P[9244]
#define	P_Pause_Error_Debug_Buffer_M_Y_Pause_Status_Complete_Signal	pshm->P[9245]
#define	P_Pause_Error_Debug_Buffer_P_Sepa_To_Normal_Mode_Sync_Err_Avoid	pshm->P[9246]
#define	P_Pause_Error_Debug_Buffer_P_Master_Motion_Trigger	pshm->P[9247]
#define	P_Pause_Error_Debug_Buffer_M_X_Opposite_Resume_Not_Free	pshm->P[9248]
#define	P_Pause_Error_Debug_Buffer_P_Opposite_Lane_P_PMAC_Status	pshm->P[9249]
#define	P_Pause_Error_Debug_Buffer_M_X_Pause_Status_Complete_Signal	pshm->P[9250]
#define	P_Pause_Error_Debug_Buffer_M_X_PLC_Sync_Heart_Bit	pshm->P[9251]
#define	P_Pause_Error_Debug_Buffer_P_Old_X_PLC_Sync_Heart_Bit	pshm->P[9252]
#define	P_Recipe_1st_MotorNo(i)	pshm->P[(9253+i)%MAX_P]
#define	P_Recipe_2nd_MotorNo(i)	pshm->P[(9303+i)%MAX_P]
#define	P_Recipe_3rd_MotorNo(i)	pshm->P[(9353+i)%MAX_P]
#define	P_Recipe_4th_MotorNo(i)	pshm->P[(9403+i)%MAX_P]
#define	P_Recipe_5th_MotorNo(i)	pshm->P[(9453+i)%MAX_P]
#define	P_Recipe_6th_MotorNo(i)	pshm->P[(9503+i)%MAX_P]
#define	P_X_Axis_Num	pshm->P[9553]
#define	P_Y_Axis_Num	pshm->P[9554]
#define	P_Z_Axis_Num	pshm->P[9555]
#define	P_ZZ_Axis_Num	pshm->P[9556]
#define	P_X_Unit	pshm->P[9557]
#define	P_Y_Unit	pshm->P[9558]
#define	P_Z_Unit	pshm->P[9559]
#define	P_ZZ_Unit	pshm->P[9560]
#define	P_Pos_Memory_Bit_Save	pshm->P[9561]
#define	P_Total_Unit_Bit	pshm->P[9562]
#define	P_Total_Unit_Pos	pshm->P[9563]
#define	P_Anode_1st_Unit_Status	pshm->P[9564]
#define	P_Anode_2nd_Unit_Status	pshm->P[9565]
#define	P_Anode_CLP_Unit_Status	pshm->P[9566]
#define	P_FinalRoll_Unit_Status	pshm->P[9567]
#define	P_StackTable_Unit_Status	pshm->P[9568]
#define	P_Cathode_CLP_Unit_Status	pshm->P[9569]
#define	P_Cathode_2nd_Unit_Status	pshm->P[9570]
#define	P_Cathode_1st_Unit_Status	pshm->P[9571]
#define	P_1st_Unloader_Unit_Status	pshm->P[9572]
#define	P_Cathode_NG_PNP_Status	pshm->P[9573]
#define	P_Anode_NG_PNP_Status	pshm->P[9574]
#define	P_Unit_integrated_Status	pshm->P[9575]
#define	P_Unit_Status_Update_Flag	pshm->P[9576]
#define	P_Memory_Tower_Search_Flag	pshm->P[9577]
#define	P_MemTow_integrated_return	pshm->P[9578]
#define	P_Error_STMS_Memory_Tower_Status	pshm->P[9579]
#define	P_STMS_Memory_Tower_Status	pshm->P[9580]
#define	P_Recipe_M01_POS(i)	pshm->P[(9581+i)%MAX_P]
#define	P_Recipe_M02_POS(i)	pshm->P[(9592+i)%MAX_P]
#define	P_Recipe_M03_POS(i)	pshm->P[(9603+i)%MAX_P]
#define	P_Recipe_M04_POS(i)	pshm->P[(9614+i)%MAX_P]
#define	P_Recipe_M05_POS(i)	pshm->P[(9625+i)%MAX_P]
#define	P_Recipe_M06_POS(i)	pshm->P[(9636+i)%MAX_P]
#define	P_Recipe_M07_POS(i)	pshm->P[(9647+i)%MAX_P]
#define	P_Recipe_M08_POS(i)	pshm->P[(9658+i)%MAX_P]
#define	P_Recipe_M09_POS(i)	pshm->P[(9669+i)%MAX_P]
#define	P_Recipe_M10_POS(i)	pshm->P[(9680+i)%MAX_P]
#define	P_Recipe_M11_POS(i)	pshm->P[(9691+i)%MAX_P]
#define	P_Recipe_M12_POS(i)	pshm->P[(9702+i)%MAX_P]
#define	P_Recipe_M13_POS(i)	pshm->P[(9713+i)%MAX_P]
#define	P_Recipe_M14_POS(i)	pshm->P[(9724+i)%MAX_P]
#define	P_Recipe_M15_POS(i)	pshm->P[(9735+i)%MAX_P]
#define	P_Recipe_M16_POS(i)	pshm->P[(9746+i)%MAX_P]
#define	P_Recipe_M17_POS(i)	pshm->P[(9757+i)%MAX_P]
#define	P_Recipe_M18_POS(i)	pshm->P[(9768+i)%MAX_P]
#define	P_Recipe_M19_POS(i)	pshm->P[(9779+i)%MAX_P]
#define	P_Recipe_M20_POS(i)	pshm->P[(9790+i)%MAX_P]
#define	P_Recipe_M21_POS(i)	pshm->P[(9801+i)%MAX_P]
#define	P_Recipe_M22_POS(i)	pshm->P[(9812+i)%MAX_P]
#define	P_Recipe_M23_POS(i)	pshm->P[(9823+i)%MAX_P]
#define	P_Recipe_M24_POS(i)	pshm->P[(9834+i)%MAX_P]
#define	P_Recipe_M25_POS(i)	pshm->P[(9845+i)%MAX_P]
#define	P_Recipe_M26_POS(i)	pshm->P[(9856+i)%MAX_P]
#define	P_Recipe_M27_POS(i)	pshm->P[(9867+i)%MAX_P]
#define	P_Recipe_M28_POS(i)	pshm->P[(9878+i)%MAX_P]
#define	P_Recipe_M29_POS(i)	pshm->P[(9889+i)%MAX_P]
#define	P_Recipe_M30_POS(i)	pshm->P[(9900+i)%MAX_P]
#define	P_Recipe_M31_POS(i)	pshm->P[(9911+i)%MAX_P]
#define	P_Recipe_M32_POS(i)	pshm->P[(9922+i)%MAX_P]
#define	P_Recipe_M33_POS(i)	pshm->P[(9933+i)%MAX_P]
#define	P_Recipe_M34_POS(i)	pshm->P[(9944+i)%MAX_P]
#define	P_Recipe_M35_POS(i)	pshm->P[(9955+i)%MAX_P]
#define	P_Recipe_M36_POS(i)	pshm->P[(9966+i)%MAX_P]
#define	P_Recipe_M37_POS(i)	pshm->P[(9977+i)%MAX_P]
#define	P_Recipe_M38_POS(i)	pshm->P[(9988+i)%MAX_P]
#define	P_Recipe_M39_POS(i)	pshm->P[(9999+i)%MAX_P]
#define	P_Recipe_M40_POS(i)	pshm->P[(10010+i)%MAX_P]
#define	P_Recipe_M41_POS(i)	pshm->P[(10021+i)%MAX_P]
#define	P_Recipe_M42_POS(i)	pshm->P[(10032+i)%MAX_P]
#define	P_Recipe_M43_POS(i)	pshm->P[(10043+i)%MAX_P]
#define	P_Recipe_M44_POS(i)	pshm->P[(10054+i)%MAX_P]
#define	P_Recipe_M45_POS(i)	pshm->P[(10065+i)%MAX_P]
#define	P_Recipe_M46_POS(i)	pshm->P[(10076+i)%MAX_P]
#define	P_Recipe_M47_POS(i)	pshm->P[(10087+i)%MAX_P]
#define	P_Recipe_M48_POS(i)	pshm->P[(10098+i)%MAX_P]
#define	P_Recipe_M49_POS(i)	pshm->P[(10109+i)%MAX_P]
#define	P_Recipe_M50_POS(i)	pshm->P[(10120+i)%MAX_P]
#define	P_Memory_Tower_X_Err_Flag	pshm->P[10131]
#define	P_Memory_Tower_Y_Err_Flag	pshm->P[10132]
#define	P_Memory_Tower_Z_Err_Flag	pshm->P[10133]
#define	P_Memory_Tower_ZZ_Err_Flag	pshm->P[10134]
#define	P_CA_Clamp_Cell_Down_Pos	pshm->P[10135]
#define	P_AN_Clamp_Cell_Down_Pos	pshm->P[10136]
#define	P_Error_X_Axis_Packml(i)	pshm->P[(10137+i)%MAX_P]
#define	P_Error_X_Axis_Dequeue(i)	pshm->P[(10143+i)%MAX_P]
#define	P_Error_X_Axis_Num(i)	pshm->P[(10149+i)%MAX_P]
#define	P_Memory_Tower_Err_Pos_X_Save(i)	pshm->P[(10155+i)%MAX_P]
#define	P_Error_Y_Axis_Packml(i)	pshm->P[(10161+i)%MAX_P]
#define	P_Error_Y_Axis_Dequeue(i)	pshm->P[(10167+i)%MAX_P]
#define	P_Error_Y_Axis_Num(i)	pshm->P[(10173+i)%MAX_P]
#define	P_Memory_Tower_Err_Pos_Y_Save(i)	pshm->P[(10179+i)%MAX_P]
#define	P_Error_Z_Axis_Packml(i)	pshm->P[(10185+i)%MAX_P]
#define	P_Error_Z_Axis_Dequeue(i)	pshm->P[(10191+i)%MAX_P]
#define	P_Error_Z_Axis_Num(i)	pshm->P[(10197+i)%MAX_P]
#define	P_Memory_Tower_Err_Pos_Z_Save(i)	pshm->P[(10203+i)%MAX_P]
#define	P_Error_ZZ_Axis_Packml(i)	pshm->P[(10209+i)%MAX_P]
#define	P_Error_ZZ_Axis_Dequeue(i)	pshm->P[(10215+i)%MAX_P]
#define	P_Error_ZZ_Axis_Num(i)	pshm->P[(10221+i)%MAX_P]
#define	P_Memory_Tower_Err_Pos_ZZ_Save(i)	pshm->P[(10227+i)%MAX_P]
#define	P_PNP_Abort_Use_Bit	pshm->P[10233]
#define	P_PNP_Abort_Use_Total_Bit	pshm->P[10234]
#define	P_C_1st_PNP_FWD_Abort_Use_Bit	pshm->P[10235]
#define	P_C_1st_PNP_BWD_Abort_Use_Bit	pshm->P[10236]
#define	P_C_2nd_PNP_FWD_Abort_Use_Bit	pshm->P[10237]
#define	P_C_2nd_PNP_BWD_Abort_Use_Bit	pshm->P[10238]
#define	P_A_1st_PNP_FWD_Abort_Use_Bit	pshm->P[10239]
#define	P_A_1st_PNP_BWD_Abort_Use_Bit	pshm->P[10240]
#define	P_A_2nd_PNP_FWD_Abort_Use_Bit	pshm->P[10241]
#define	P_A_2nd_PNP_BWD_Abort_Use_Bit	pshm->P[10242]
#define	P_Single_Motor_Control_Bit	pshm->P[10243]
#define	P_C_1st_PNP_FWD_Abort_Calc_Bit	pshm->P[10244]
#define	P_C_1st_PNP_BWD_Abort_Calc_Bit	pshm->P[10245]
#define	P_C_2nd_PNP_FWD_Abort_Calc_Bit	pshm->P[10246]
#define	P_C_2nd_PNP_BWD_Abort_Calc_Bit	pshm->P[10247]
#define	P_A_1st_PNP_FWD_Abort_Calc_Bit	pshm->P[10248]
#define	P_A_1st_PNP_BWD_Abort_Calc_Bit	pshm->P[10249]
#define	P_A_2nd_PNP_FWD_Abort_Calc_Bit	pshm->P[10250]
#define	P_A_2nd_PNP_BWD_Abort_Calc_Bit	pshm->P[10251]
#define	P_C_1st_PNP_FWD_Cur_Pos	pshm->P[10252]
#define	P_C_1st_PNP_FWD_Cur_Vel	pshm->P[10253]
#define	P_C_1st_PNP_BWD_Cur_Pos	pshm->P[10254]
#define	P_C_1st_PNP_BWD_Cur_Vel	pshm->P[10255]
#define	P_C_2nd_PNP_FWD_Cur_Pos	pshm->P[10256]
#define	P_C_2nd_PNP_FWD_Cur_Vel	pshm->P[10257]
#define	P_C_2nd_PNP_BWD_Cur_Pos	pshm->P[10258]
#define	P_C_2nd_PNP_BWD_Cur_Vel	pshm->P[10259]
#define	P_A_1st_PNP_FWD_Cur_Pos	pshm->P[10260]
#define	P_A_1st_PNP_FWD_Cur_Vel	pshm->P[10261]
#define	P_A_1st_PNP_BWD_Cur_Pos	pshm->P[10262]
#define	P_A_1st_PNP_BWD_Cur_Vel	pshm->P[10263]
#define	P_A_2nd_PNP_FWD_Cur_Pos	pshm->P[10264]
#define	P_A_2nd_PNP_FWD_Cur_Vel	pshm->P[10265]
#define	P_A_2nd_PNP_BWD_Cur_Pos	pshm->P[10266]
#define	P_A_2nd_PNP_BWD_Cur_Vel	pshm->P[10267]
#define	P_C_1st_PNP_FWD_Limit_Pos	pshm->P[10268]
#define	P_C_1st_PNP_BWD_Limit_Pos	pshm->P[10269]
#define	P_C_2nd_PNP_FWD_Limit_Pos	pshm->P[10270]
#define	P_C_2nd_PNP_BWD_Limit_Pos	pshm->P[10271]
#define	P_A_1st_PNP_FWD_Limit_Pos	pshm->P[10272]
#define	P_A_1st_PNP_BWD_Limit_Pos	pshm->P[10273]
#define	P_A_2nd_PNP_FWD_Limit_Pos	pshm->P[10274]
#define	P_A_2nd_PNP_BWD_Limit_Pos	pshm->P[10275]
#define	P_C_1st_PNP_FWD_Max_Limit_Pos	pshm->P[10276]
#define	P_C_1st_PNP_BWD_Max_Limit_Pos	pshm->P[10277]
#define	P_C_2nd_PNP_FWD_Max_Limit_Pos	pshm->P[10278]
#define	P_C_2nd_PNP_BWD_Max_Limit_Pos	pshm->P[10279]
#define	P_A_1st_PNP_FWD_Max_Limit_Pos	pshm->P[10280]
#define	P_A_1st_PNP_BWD_Max_Limit_Pos	pshm->P[10281]
#define	P_A_2nd_PNP_FWD_Max_Limit_Pos	pshm->P[10282]
#define	P_A_2nd_PNP_BWD_Max_Limit_Pos	pshm->P[10283]
#define	P_C_1st_PNP_FWD_Remain_Stroke	pshm->P[10284]
#define	P_C_1st_PNP_BWD_Remain_Stroke	pshm->P[10285]
#define	P_C_2nd_PNP_FWD_Remain_Stroke	pshm->P[10286]
#define	P_C_2nd_PNP_BWD_Remain_Stroke	pshm->P[10287]
#define	P_A_1st_PNP_FWD_Remain_Stroke	pshm->P[10288]
#define	P_A_1st_PNP_BWD_Remain_Stroke	pshm->P[10289]
#define	P_A_2nd_PNP_FWD_Remain_Stroke	pshm->P[10290]
#define	P_A_2nd_PNP_BWD_Remain_Stroke	pshm->P[10291]
#define	P_C_1st_PNP_FWD_Stroke_Time	pshm->P[10292]
#define	P_C_1st_PNP_BWD_Stroke_Time	pshm->P[10293]
#define	P_C_2nd_PNP_FWD_Stroke_Time	pshm->P[10294]
#define	P_C_2nd_PNP_BWD_Stroke_Time	pshm->P[10295]
#define	P_A_1st_PNP_FWD_Stroke_Time	pshm->P[10296]
#define	P_A_1st_PNP_BWD_Stroke_Time	pshm->P[10297]
#define	P_A_2nd_PNP_FWD_Stroke_Time	pshm->P[10298]
#define	P_A_2nd_PNP_BWD_Stroke_Time	pshm->P[10299]
#define	P_C_1st_PNP_FWD_Max_Speed	pshm->P[10300]
#define	P_C_1st_PNP_BWD_Max_Speed	pshm->P[10301]
#define	P_C_2nd_PNP_FWD_Max_Speed	pshm->P[10302]
#define	P_C_2nd_PNP_BWD_Max_Speed	pshm->P[10303]
#define	P_A_1st_PNP_FWD_Max_Speed	pshm->P[10304]
#define	P_A_1st_PNP_BWD_Max_Speed	pshm->P[10305]
#define	P_A_2nd_PNP_FWD_Max_Speed	pshm->P[10306]
#define	P_A_2nd_PNP_BWD_Max_Speed	pshm->P[10307]
#define	P_C_1st_PNP_FWD_ACC_Dis	pshm->P[10308]
#define	P_C_1st_PNP_BWD_ACC_Dis	pshm->P[10309]
#define	P_C_2nd_PNP_FWD_ACC_Dis	pshm->P[10310]
#define	P_C_2nd_PNP_BWD_ACC_Dis	pshm->P[10311]
#define	P_A_1st_PNP_FWD_ACC_Dis	pshm->P[10312]
#define	P_A_1st_PNP_BWD_ACC_Dis	pshm->P[10313]
#define	P_A_2nd_PNP_FWD_ACC_Dis	pshm->P[10314]
#define	P_A_2nd_PNP_BWD_ACC_Dis	pshm->P[10315]
#define	P_C_1st_PNP_FWD_AbortTa	pshm->P[10316]
#define	P_C_1st_PNP_FWD_AbortTs	pshm->P[10317]
#define	P_C_1st_PNP_BWD_AbortTa	pshm->P[10318]
#define	P_C_1st_PNP_BWD_AbortTs	pshm->P[10319]
#define	P_C_2nd_PNP_FWD_AbortTa	pshm->P[10320]
#define	P_C_2nd_PNP_FWD_AbortTs	pshm->P[10321]
#define	P_C_2nd_PNP_BWD_AbortTa	pshm->P[10322]
#define	P_C_2nd_PNP_BWD_AbortTs	pshm->P[10323]
#define	P_A_1st_PNP_FWD_AbortTa	pshm->P[10324]
#define	P_A_1st_PNP_FWD_AbortTs	pshm->P[10325]
#define	P_A_1st_PNP_BWD_AbortTa	pshm->P[10326]
#define	P_A_1st_PNP_BWD_AbortTs	pshm->P[10327]
#define	P_A_2nd_PNP_FWD_AbortTa	pshm->P[10328]
#define	P_A_2nd_PNP_FWD_AbortTs	pshm->P[10329]
#define	P_A_2nd_PNP_BWD_AbortTa	pshm->P[10330]
#define	P_A_2nd_PNP_BWD_AbortTs	pshm->P[10331]
#define	P_C_1st_PNP_FWD_Abort_Dec_Offset	pshm->P[10332]
#define	P_C_1st_PNP_BWD_Abort_Dec_Offset	pshm->P[10333]
#define	P_C_2nd_PNP_FWD_Abort_Dec_Offset	pshm->P[10334]
#define	P_C_2nd_PNP_BWD_Abort_Dec_Offset	pshm->P[10335]
#define	P_A_1st_PNP_FWD_Abort_Dec_Offset	pshm->P[10336]
#define	P_A_1st_PNP_BWD_Abort_Dec_Offset	pshm->P[10337]
#define	P_A_2nd_PNP_FWD_Abort_Dec_Offset	pshm->P[10338]
#define	P_A_2nd_PNP_BWD_Abort_Dec_Offset	pshm->P[10339]
#define	P_1st_PNP_FWD_Abort_Offset(i)	pshm->P[(10340+i)%MAX_P]
#define	P_1st_PNP_BWD_Abort_Offset(i)	pshm->P[(10430+i)%MAX_P]
#define	P_2nd_PNP_FWD_Abort_Offset(i)	pshm->P[(10520+i)%MAX_P]
#define	P_2nd_PNP_BWD_Abort_Offset(i)	pshm->P[(10610+i)%MAX_P]
#define	P_Abort_Init_Value	pshm->P[10700]
#define	P_C_1st_PNP_FWD_AbortTa_Buffer	pshm->P[10701]
#define	P_C_1st_PNP_FWD_AbortTs_Buffer	pshm->P[10702]
#define	P_C_1st_PNP_BWD_AbortTa_Buffer	pshm->P[10703]
#define	P_C_1st_PNP_BWD_AbortTs_Buffer	pshm->P[10704]
#define	P_C_2nd_PNP_FWD_AbortTa_Buffer	pshm->P[10705]
#define	P_C_2nd_PNP_FWD_AbortTs_Buffer	pshm->P[10706]
#define	P_C_2nd_PNP_BWD_AbortTa_Buffer	pshm->P[10707]
#define	P_C_2nd_PNP_BWD_AbortTs_Buffer	pshm->P[10708]
#define	P_A_1st_PNP_FWD_AbortTa_Buffer	pshm->P[10709]
#define	P_A_1st_PNP_FWD_AbortTs_Buffer	pshm->P[10710]
#define	P_A_1st_PNP_BWD_AbortTa_Buffer	pshm->P[10711]
#define	P_A_1st_PNP_BWD_AbortTs_Buffer	pshm->P[10712]
#define	P_A_2nd_PNP_FWD_AbortTa_Buffer	pshm->P[10713]
#define	P_A_2nd_PNP_FWD_AbortTs_Buffer	pshm->P[10714]
#define	P_A_2nd_PNP_BWD_AbortTa_Buffer	pshm->P[10715]
#define	P_A_2nd_PNP_BWD_AbortTs_Buffer	pshm->P[10716]
#define	P_C_1st_PNP_FWD_Restore_Bit	pshm->P[10717]
#define	P_C_1st_PNP_BWD_Restore_Bit	pshm->P[10718]
#define	P_C_2nd_PNP_FWD_Restore_Bit	pshm->P[10719]
#define	P_C_2nd_PNP_BWD_Restore_Bit	pshm->P[10720]
#define	P_A_1st_PNP_FWD_Restore_Bit	pshm->P[10721]
#define	P_A_1st_PNP_BWD_Restore_Bit	pshm->P[10722]
#define	P_A_2nd_PNP_FWD_Restore_Bit	pshm->P[10723]
#define	P_A_2nd_PNP_BWD_Restore_Bit	pshm->P[10724]
#define	P_Align_Inspection_Time	pshm->P[10725]
#define	P_Front_Inspection_Time	pshm->P[10726]
#define	P_Stack_Inspection_Time	pshm->P[10727]
#define	P_Existence_Inspection_Time	pshm->P[10728]
#define	P_EmptyTable_Inspection_Time	pshm->P[10729]
#define	P_FirstSepa_Inspection_Time	pshm->P[10730]
#define	P_Vision_Anode_Sepa_Mode_Stack_Command	pshm->P[10731]
#define	P_Vision_Cathode_Sepa_Mode_Stack_Command	pshm->P[10732]
#define	P_Cathode_Sepa_Mode_Timer	pshm->P[10733]
#define	P_Anode_Sepa_Mode_Timer	pshm->P[10734]
#define	P_Vision_Pass	pshm->P[10735]
#define	P_FirstSepa_Ret	pshm->P[10736]
#define	P_Vision_Align_Command	pshm->P[10737]
#define	P_Vision_Surface_Command	pshm->P[10738]
#define	P_Vision_Stack_Command	pshm->P[10739]
#define	P_Vision_Existence_Command	pshm->P[10740]
#define	P_Vision_EmptyTable_Command	pshm->P[10741]
#define	P_Vision_FirstSepa_Command	pshm->P[10742]
#define	P_Selected_Align_Inspection_Unit	pshm->P[10743]
#define	P_Selected_Surface_Inspection_Unit	pshm->P[10744]
#define	P_Selected_Stack_Inspection_Unit	pshm->P[10745]
#define	P_Selected_Existence_Inspection_Unit	pshm->P[10746]
#define	P_Selected_EmptyTable_Inspection_Unit	pshm->P[10747]
#define	P_Set_Cathode_Align_Zero_Pos	pshm->P[10748]
#define	P_Set_Anode_Align_Zero_Pos	pshm->P[10749]
#define	P_Vision_Align_State_Machine	pshm->P[10750]
#define	P_Vision_Surface_State_Machine	pshm->P[10751]
#define	P_Vision_Stack_State_Machine	pshm->P[10752]
#define	P_Vision_Existence_State_Machine	pshm->P[10753]
#define	P_Vision_EmptyTable_State_Machine	pshm->P[10754]
#define	P_Vision_FirstSepa_State_Machine	pshm->P[10755]
#define	P_Vision_Align_Status	pshm->P[10756]
#define	P_Vision_Surface_Status	pshm->P[10757]
#define	P_Vision_Stack_Status	pshm->P[10758]
#define	P_Vision_Existence_Status	pshm->P[10759]
#define	P_Vision_EmptyTable_Status	pshm->P[10760]
#define	P_Vision_FirstSepa_Status	pshm->P[10761]
#define	P_Align_Zero_Move_Start_Flag(i)	pshm->P[(10762+i)%MAX_P]
#define	P_Cathode_Align_Table_Move	pshm->P[10764]
#define	P_Anode_Align_Table_Move	pshm->P[10765]
#define	P_Vision_Anode_Cell_Existence	pshm->P[10766]
#define	P_Vision_Cathode_Cell_Existence	pshm->P[10767]
#define	P_Align_Sheet_CHK	pshm->P[10768]
#define	P_Anode_NG_Code	pshm->P[10769]
#define	P_Cathode_NG_Code	pshm->P[10770]
#define	P_Stack_NG_Code	pshm->P[10771]
#define	P_Cathode_Align_Continuous_NG_Alarm_Flag	pshm->P[10772]
#define	P_Anode_Align_Continuous_NG_Alarm_Flag	pshm->P[10773]
#define	P_Cathode_Retry_Continuous_NG_Alarm_Flag	pshm->P[10774]
#define	P_Anode_Retry_Continuous_NG_Alarm_Flag	pshm->P[10775]
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
#define	P_Stop_Debug_Flag	pshm->P[10776]
#define	P_Stop_Sub_Master_Motion_Program_Flag(i)	pshm->P[(10777+i)%MAX_P]
#define	P_Stop_Slave_Motion_Program_Flag(i)	pshm->P[(10797+i)%MAX_P]
#define	P_Stop_Motor_Status(i)	pshm->P[(10817+i)%MAX_P]
#define	P_Stop_Coord_Status(i)	pshm->P[(10865+i)%MAX_P]
#define	P_Stop_Status_Check_Address	pshm->P[10899]
#define	P_Stop_Status_Save_Address	pshm->P[10900]
#define	P_Stop_Check_RTN	pshm->P[10901]
#define	P_Stop_Save_RTN(i)	pshm->P[(10902+i)%MAX_P]
#define	P_Old_Total_Unit_Bit	pshm->P[10906]
#define	P_Memory_Tower_Dec_Result	pshm->P[10907]
#define	P_Stop_Motor_Pos(i)	pshm->P[(10908+i)%MAX_P]
#define	P_PNP_Move_Timer	pshm->P[10917]
#define	P_PNP_Move_Delay_Time	pshm->P[10918]
#define	P_Stop_Memory_Pos_RTN	pshm->P[10919]
#define	P_Slave1_Motion_Command	pshm->P[10920]
#define	P_Slave2_Motion_Command	pshm->P[10921]
#define	P_Slave3_Motion_Command	pshm->P[10922]
#define	P_Slave4_Motion_Command	pshm->P[10923]
#define	P_Slave5_Motion_Command	pshm->P[10924]
#define	P_Slave6_Motion_Command	pshm->P[10925]
#define	P_Slave7_Motion_Command	pshm->P[10926]
#define	P_Slave8_Motion_Command	pshm->P[10927]
#define	P_Slave9_Motion_Command	pshm->P[10928]
#define	P_Slave10_Motion_Command	pshm->P[10929]
#define	P_Slave11_Motion_Command	pshm->P[10930]
#define	P_Slave12_Motion_Command	pshm->P[10931]
#define	P_Slave13_Motion_Command	pshm->P[10932]
#define	P_Slave14_Motion_Command	pshm->P[10933]
#define	P_Slave15_Motion_Command	pshm->P[10934]
#define	P_Slave16_Motion_Command	pshm->P[10935]
#define	P_Slave17_Motion_Command	pshm->P[10936]
#define	P_Slave18_Motion_Command	pshm->P[10937]
#define	P_Slave19_Motion_Command	pshm->P[10938]
#define	P_Slave20_Motion_Command	pshm->P[10939]
#define	P_PNP_90_Deg_TM	pshm->P[10940]
#define	P_PNP_90_Deg_TA	pshm->P[10941]
#define	P_PNP_90_Deg_TS	pshm->P[10942]
#define	P_PNP_Ready_TM	pshm->P[10943]
#define	P_PNP_Ready_TA	pshm->P[10944]
#define	P_PNP_Ready_TS	pshm->P[10945]
#define	P_PNP_45_Deg_TM	pshm->P[10946]
#define	P_PNP_45_Deg_TA	pshm->P[10947]
#define	P_PNP_45_Deg_TS	pshm->P[10948]
#define	P_Unloader_TM_Test	pshm->P[10949]
#define	P_Unloader_TA_Test	pshm->P[10950]
#define	P_PROG_21_Program_Ver	pshm->P[2781]
#define	P_PROG_23_Program_Ver	pshm->P[2783]
#define	P_PROG_24_Program_Ver	pshm->P[2784]
#define	P_PROG_25_Program_Ver	pshm->P[2785]
#define	P_PROG_26_Program_Ver	pshm->P[2786]
#define	P_PROG_27_Program_Ver	pshm->P[2787]
#define	P_PROG_28_Program_Ver	pshm->P[2788]
#define	P_PROG_30_Program_Ver	pshm->P[2790]
#define	P_Master_Motion_Trigger	pshm->P[10951]
#define	P_Parity_Bit	pshm->P[10952]
#define	P_Master_Move	pshm->P[10953]
#define	P_Master_TA	pshm->P[10954]
#define	P_Master_TS	pshm->P[10955]
#define	P_Master_TM	pshm->P[10956]
#define	P_Anode_Count	pshm->P[10957]
#define	P_Cathode_Count	pshm->P[10958]
#define	P_Anode_Thickness	pshm->P[10959]
#define	P_Cathode_Thickness	pshm->P[10960]
#define	P_Sepa_Thickness	pshm->P[10961]
#define	P_Anode_Thickness_PLC	pshm->P[10962]
#define	P_Cathode_Thickness_PLC	pshm->P[10963]
#define	P_Sepa_Thickness_PLC	pshm->P[10964]
#define	P_Old_P_Anode_TR1_Master_Motion_Trigger(i)	pshm->P[(10965+i)%MAX_P]
#define	P_Old_P_Cathode_TR1_Master_Motion_Trigger(i)	pshm->P[(10981+i)%MAX_P]
#define	P_Anode_TR1_Old_Mode(i)	pshm->P[(10997+i)%MAX_P]
#define	P_Cathode_TR1_Old_Mode(i)	pshm->P[(11013+i)%MAX_P]
#define	P_Older_Than_P_Anode_TR1_Old_Mode(i)	pshm->P[(11029+i)%MAX_P]
#define	P_Older_Than_P_Cathode_TR1_Old_Mode(i)	pshm->P[(11045+i)%MAX_P]
#define	P_Older_Than_P_Sequence_Old_P_Anode_TR1_Current_Mode_Trigger(i)	pshm->P[(11061+i)%MAX_P]
#define	P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Current_Mode_Trigger(i)	pshm->P[(11077+i)%MAX_P]
#define	P_Old_P_Anode_TR1_Mode_Command(i)	pshm->P[(11093+i)%MAX_P]
#define	P_Old_P_Cathode_TR1_Mode_Command(i)	pshm->P[(11109+i)%MAX_P]
#define	P_Older_Than_P_Old_P_Anode_TR1_Mode_Command(i)	pshm->P[(11125+i)%MAX_P]
#define	P_Older_Than_P_Old_P_Cathode_TR1_Mode_Command(i)	pshm->P[(11141+i)%MAX_P]
#define	P_Older_Than_P_Sequence_Old_P_Anode_TR1_Mode_Command_Trigger(i)	pshm->P[(11157+i)%MAX_P]
#define	P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Mode_Command_Trigger(i)	pshm->P[(11173+i)%MAX_P]
#define	P_Old_P_Anode_TR1_PMAC_Status(i)	pshm->P[(11189+i)%MAX_P]
#define	P_Old_P_Cathode_TR1_PMAC_Status(i)	pshm->P[(11205+i)%MAX_P]
#define	P_Older_Than_P_Old_P_Anode_TR1_PMAC_Status(i)	pshm->P[(11221+i)%MAX_P]
#define	P_Older_Than_P_Old_P_Cathode_TR1_PMAC_Status(i)	pshm->P[(11237+i)%MAX_P]
#define	P_Old_P_Slave1_Motion_Command(i)	pshm->P[(11253+i)%MAX_P]
#define	P_Old_P_Slave10_Motion_Command(i)	pshm->P[(11269+i)%MAX_P]
#define	P_Old_Slave1_P_SubMaster_Sub_Mode_Command(i)	pshm->P[(11285+i)%MAX_P]
#define	P_Old_Slave10_P_SubMaster_Sub_Mode_Command(i)	pshm->P[(11301+i)%MAX_P]
#define	P_Sequence_Old_P_Current_Mode_Trigger(i)	pshm->P[(11317+i)%MAX_P]
#define	P_Sequence_Old_Mode(i)	pshm->P[(11333+i)%MAX_P]
#define	P_Sequence_Old_P_Mode_Command(i)	pshm->P[(11349+i)%MAX_P]
#define	P_Sequence_Old_P_Mode_Command_Trigger(i)	pshm->P[(11365+i)%MAX_P]
#define	P_SubMaster_Sub_Old_Mode(i)	pshm->P[(11381+i)%MAX_P]
#define	P_SubMaster_Sub_Old_Command(i)	pshm->P[(11397+i)%MAX_P]
#define	P_SubMaster_Sub_Mode_Command(i)	pshm->P[(11413+i)%MAX_P]
#define	P_SubMaster_Sub_Old_Trigger(i)	pshm->P[(11429+i)%MAX_P]
#define	P_InterLock_No3_Array(i)	pshm->P[(11445+i)%MAX_P]
#define	P_Old_InterLock_No3_Array(i)	pshm->P[(11461+i)%MAX_P]
#define	P_Mode_Err(i)	pshm->P[(11477+i)%MAX_P]
#define	P_Spool_Enable	pshm->P[11482]
#define	P_Cathode_1St_Flow_Chart_Bit_Flag	pshm->P[11483]
#define	P_Cathode_AT_Flow_Chart_Bit_Flag	pshm->P[11484]
#define	P_Cathode_2nd_Flow_Chart_Bit_Flag	pshm->P[11485]
#define	P_Anode_Clamp_Flow_Chart_Bit_Flag	pshm->P[11486]
#define	P_Final_Roll_Flow_Chart_Bit_Flag	pshm->P[11487]
#define	P_Stack_Table_Flow_Chart_Bit_Flag	pshm->P[11488]
#define	P_Cathode_Clamp_Flow_Chart_Bit_Flag	pshm->P[11489]
#define	P_Anode_2nd_Flow_Chart_Bit_Flag	pshm->P[11490]
#define	P_Anode_AT_Flow_Chart_Bit_Flag	pshm->P[11491]
#define	P_Anode_1St_Flow_Chart_Bit_Flag	pshm->P[11492]
#define	P_Sepa_Unwinder_Flow_Chart_Bit_Flag	pshm->P[11493]
#define	P_Slave5_Target_Z_For_Cutting	pshm->P[11494]
#define	P_Slave31_Motion_Command	pshm->P[11495]
#define	P_Pause_Err_Process	pshm->P[11496]
#define	P_Pause_Err_Timer	pshm->P[11497]
#define	P_Pause_Err_Count	pshm->P[11498]
#define	P_Pause_Err_Use	pshm->P[11499]
#define	P_Pause_Err_Use2	pshm->P[11500]
#define	P_Anode_Pause_Signal_Err	pshm->P[11501]
#define	P_Cathode_Pause_Signal_Err	pshm->P[11502]
#define	P_Anode_Pause_Err	pshm->P[11503]
#define	P_Anode_Pause_Err_Count	pshm->P[11504]
#define	P_Phasing_Err(i)	pshm->P[(11505+i)%MAX_P]
#define	P_Phasing_Err2(i)	pshm->P[(11510+i)%MAX_P]
#define	P_Execute_Wait_Mode_Memory_Tower	pshm->P[11515]
#define	P_Execute_Vac_MNTR	pshm->P[11516]
#define	P_Old_Cathode_Cur_Mode	pshm->P[11517]
#define	P_Cathode_Run_Mode_Type(i)	pshm->P[(11518+i)%MAX_P]
#define	P_Cathode_Run_Mode_Trigger(i)	pshm->P[(11538+i)%MAX_P]
#define	P_Old_Anode_Cur_Mode	pshm->P[11558]
#define	P_Anode_Run_Mode_Type(i)	pshm->P[(11559+i)%MAX_P]
#define	P_Anode_Run_Mode_Trigger(i)	pshm->P[(11579+i)%MAX_P]
#define	P_Anode_1TR_T_Belt_To_Align	pshm->P[11599]
#define	P_Anode_1TR_T_Align_To_Belt	pshm->P[11600]
#define	P_Anode_1TR_T_Ready_Pos	pshm->P[11601]
#define	P_Anode_1TR_T_Ready_To_Align	pshm->P[11602]
#define	P_Anode_1TR_T_Ready_To_Belt	pshm->P[11603]
#define	P_Anode_Picker_Turn	pshm->P[11604]
#define	P_Anode_2TR_T_Align_To_Stack	pshm->P[11605]
#define	P_Anode_2TR_T_Stack_To_Align	pshm->P[11606]
#define	P_Anode_Clamp_Off	pshm->P[11607]
#define	P_Anode_Clamp_On	pshm->P[11608]
#define	P_Anode_Clamp_Down	pshm->P[11609]
#define	P_FR_Anode_Motion	pshm->P[11610]
#define	P_FR_Cathode_Motion	pshm->P[11611]
#define	P_Stack_Table_Down	pshm->P[11612]
#define	P_Cathode_Clamp_On	pshm->P[11613]
#define	P_Cathode_Clamp_Off	pshm->P[11614]
#define	P_Cathode_Clamp_Down	pshm->P[11615]
#define	P_Cathode_2TR_T_Align_To_Stack	pshm->P[11616]
#define	P_Cathode_2TR_T_Stack_To_Align	pshm->P[11617]
#define	P_Cathode_Picker_Turn	pshm->P[11618]
#define	P_Cathode_1TR_T_Belt_To_Align	pshm->P[11619]
#define	P_Cathode_1TR_T_Align_To_Belt	pshm->P[11620]
#define	P_Cathode_1TR_T_Ready_Pos	pshm->P[11621]
#define	P_Cathode_1TR_T_Ready_To_Align	pshm->P[11622]
#define	P_Cathode_1TR_T_Ready_To_Belt	pshm->P[11623]
#define	P_Anode_1TR_Z_Belt_To_Align	pshm->P[11624]
#define	P_Anode_1TR_Z_Align_To_Belt	pshm->P[11625]
#define	P_Anode_1TR_Z_Align_Down	pshm->P[11626]
#define	P_Anode_1TR_Z_Align_UP	pshm->P[11627]
#define	P_Anode_1TR_Z_Belt_Down	pshm->P[11628]
#define	P_Anode_1TR_Z_Belt_UP	pshm->P[11629]
#define	P_Anode_1TR_Z_Ready	pshm->P[11630]
#define	P_Anode_1TR_Z_Align_Blow	pshm->P[11631]
#define	P_Anode_1TR_Z_Belt_Vac	pshm->P[11632]
#define	P_Cathode_1TR_Z_Belt_To_Align	pshm->P[11633]
#define	P_Cathode_1TR_Z_Align_To_Belt	pshm->P[11634]
#define	P_Cathode_1TR_Z_Align_Down	pshm->P[11635]
#define	P_Cathode_1TR_Z_Align_UP	pshm->P[11636]
#define	P_Cathode_1TR_Z_Belt_Down	pshm->P[11637]
#define	P_Cathode_1TR_Z_Belt_UP	pshm->P[11638]
#define	P_Cathode_1TR_Z_Ready	pshm->P[11639]
#define	P_Cathode_1TR_Z_Align_Blow	pshm->P[11640]
#define	P_Cathode_1TR_Z_Belt_Vac	pshm->P[11641]
#define	P_Anode_2TR_Align_To_Stack	pshm->P[11642]
#define	P_Anode_2TR_Stack_To_Align	pshm->P[11643]
#define	P_Anode_2TR_Stack_Down	pshm->P[11644]
#define	P_Anode_2TR_Stack_UP	pshm->P[11645]
#define	P_Anode_2TR_Align_Down	pshm->P[11646]
#define	P_Anode_2TR_Align_UP	pshm->P[11647]
#define	P_Anode_2TR_Align_Vac	pshm->P[11648]
#define	P_Anode_2TR_Stack_Blow	pshm->P[11649]
#define	P_Anode_2TR_Stack_Sepa_Blow	pshm->P[11650]
#define	P_FR_Last_Run_Motion	pshm->P[11651]
#define	P_Servo_Dancer_Ready_Pos	pshm->P[11652]
#define	P_Servo_Dancer_Ready_Offset	pshm->P[11653]
#define	P_Servo_Dancer_Test	pshm->P[11654]
#define	P_Align_Start_IO_Judgment	pshm->P[11655]
#define	P_Driving_Clamp2	pshm->P[11656]
#define	P_Driving_Clamp	pshm->P[11657]
#define	P_MSA_Timer	pshm->P[11658]
#define	P_SM_Cathode_Stack_MSA	pshm->P[11659]
#define	P_SM_Anode_Stack_MSA	pshm->P[11660]
#define	P_SM_Cathode_Align_MSA	pshm->P[11661]
#define	P_SM_Anode_Align_MSA	pshm->P[11662]
#define	P_MSA_Interlock	pshm->P[11663]
#define	P_Anode_MSA_Final_Roll_Pos_Check	pshm->P[11664]
#define	P_Anode_MSA_2nd_PNP_Pos_Check	pshm->P[11665]
#define	P_Anode_MSA_1nd_PNP_Pos_Check	pshm->P[11666]
#define	P_MSA_Err_Save_CA_Stack_MSA	pshm->P[11667]
#define	P_MSA_Err_Save_AN_Stack_MSA	pshm->P[11668]
#define	P_MSA_Err_Save_CA_Align_MSA	pshm->P[11669]
#define	P_MSA_Err_Save_AN_Align_MSA	pshm->P[11670]
#define	P_MSA_BTN_Err	pshm->P[11671]
#define	P_Anode_Algin_MSA_RTN	pshm->P[11672]
#define	P_Anode_Algin_MSA_RTN2	pshm->P[11673]
#define	P_Cathode_Algin_MSA_RTN	pshm->P[11674]
#define	P_Cathode_Stack_MSA_RTN	pshm->P[11675]
#define	P_Anode_Stack_MSA_RTN	pshm->P[11676]
#define	P_Anode_Align_MSA_Count	pshm->P[11677]
#define	P_Cathode_Align_MSA_Count	pshm->P[11678]
#define	P_Anode_Stack_MSA_Count	pshm->P[11679]
#define	P_Cathode_Stack_MSA_Count	pshm->P[11680]
#define	P_Cathode_Align_Stop_Blocked	pshm->P[11681]
#define	P_Anode_Align_Stop_Blocked	pshm->P[11682]
#define	P_Cathode_Stack_Stop_Blocked	pshm->P[11683]
#define	P_Anode_Stack_Stop_Blocked	pshm->P[11684]
#define	P_Anode_Align_MSA_Execute_Timer	pshm->P[11685]
#define	P_Cathode_Align_MSA_Execute_Timer	pshm->P[11686]
#define	P_Anode_Stack_MSA_Execute_Timer	pshm->P[11687]
#define	P_Cathode_Stack_MSA_Execute_Timer	pshm->P[11688]
#define	P_Anode_Align_Interlock_Blocked	pshm->P[11689]
#define	P_Cathode_Align_Interlock_Blocked	pshm->P[11690]
#define	P_Anode_Stack_Interlock_Blocked	pshm->P[11691]
#define	P_Cathode_Stack_Interlock_Blocked	pshm->P[11692]
#define	P_Anode_1TR_T_Align_POS	pshm->P[11693]
#define	P_Anode_1TR_T_Belt_POS	pshm->P[11694]
#define	P_Anode_1TR_T_Ready_POS	pshm->P[11695]
#define	P_Anode_2TR_T_Align_POS	pshm->P[11696]
#define	P_Anode_2TR_T_Stack_POS	pshm->P[11697]
#define	P_Cathode_2TR_T_Align_POS	pshm->P[11698]
#define	P_Cathode_2TR_T_Stack_POS	pshm->P[11699]
#define	P_Cathode_1TR_T_Align_POS	pshm->P[11700]
#define	P_Cathode_1TR_T_Belt_POS	pshm->P[11701]
#define	P_Cathode_1TR_T_Ready_POS	pshm->P[11702]
#define	P_Seq_Abort	pshm->P[11703]
#define	P_Blocked_Abort	pshm->P[11704]
#define	P_Abort_Flag	pshm->P[11705]
#define	P_Opposite_Lane_1ST_TR_Safe_Pos	pshm->P[11706]
#define	P_Opposite_Lane_P_PMAC_Status	pshm->P[11707]
#define	P_Opposite_Lane_OFF_Not_Start	pshm->P[11708]
#define	P_Pause_Alarm_Blocked	pshm->P[11709]
#define	P_Old_Alarm_Arr	pshm->P[11710]
#define	P_Cycle_Stop_Delay_Time	pshm->P[11711]
#define	P_Cycle_Stop_Offset	pshm->P[11712]
#define	P_Opposite_Lane_Abort_Alram_Flag	pshm->P[11713]
#define	P_Cathode_Clmap_Y1_Ready_Pos	pshm->P[11714]
#define	P_Cathode_Clmap_Y1_Clamp_Pos	pshm->P[11715]
#define	P_Anode_Clmap_Y1_Ready_Pos	pshm->P[11716]
#define	P_Anode_Clmap_Y1_Clamp_Pos	pshm->P[11717]
#define	P_Cathode_Clmap_Y2_Ready_Pos	pshm->P[11718]
#define	P_Cathode_Clmap_Y2_Clamp_Pos	pshm->P[11719]
#define	P_Anode_Clmap_Y2_Ready_Pos	pshm->P[11720]
#define	P_Anode_Clmap_Y2_Clamp_Pos	pshm->P[11721]
#define	P_Cathode_Clamp_Z2_Ready_Pos	pshm->P[11722]
#define	P_Cathode_Clamp_Z2_Clamp_Pos	pshm->P[11723]
#define	P_Anode_Clamp_Z2_Ready_Pos	pshm->P[11724]
#define	P_Anode_Clamp_Z2_Clamp_Pos	pshm->P[11725]
#define	P_Cathode_Clamp_Z1_Ready_Pos	pshm->P[11726]
#define	P_Cathode_Clamp_Z1_Clamp_Pos	pshm->P[11727]
#define	P_Anode_Clamp_Z1_Ready_Pos	pshm->P[11728]
#define	P_Anode_Clamp_Z1_Clamp_Pos	pshm->P[11729]
#define	P_Cathode_Clamp_Z2_Cell_Down	pshm->P[11730]
#define	P_Anode_Clamp_Z2_Cell_Down	pshm->P[11731]
#define	P_Cathode_Clamp_Z1_Cell_Down	pshm->P[11732]
#define	P_Anode_Clamp_Z1_Cell_Down	pshm->P[11733]
#define	P_Single_Run_Pass	pshm->P[11734]
#define	P_Cathode_2nd_PNP_Sepa_Blow	pshm->P[11735]
#define	P_Cathode_2nd_PNP_Align_Blow	pshm->P[11736]
#define	P_Cathode_2nd_PNP_Stack_Blow	pshm->P[11737]
#define	P_Cathode_2nd_PNP_Align_Vac	pshm->P[11738]
#define	P_Cathode_2nd_PNP_Align_Up_Motion	pshm->P[11739]
#define	P_Cathode_2nd_PNP_Align_Down_Motion	pshm->P[11740]
#define	P_Cathode_2nd_PNP_Stack_Up_Motion	pshm->P[11741]
#define	P_Cathode_2nd_PNP_Stack_Down_Motion	pshm->P[11742]
#define	P_Cathode_2nd_PNP_Stack_To_Align_Motion	pshm->P[11743]
#define	P_Cathode_2nd_PNP_Align_To_Stack_Motion	pshm->P[11744]
#define	P_Door_Open_Stop_Count	pshm->P[11745]
#define	P_Buf_Stack_NG_Flag	pshm->P[11746]
#define	P_Stop_1st_PNP_Move	pshm->P[11747]
#define	P_Seq_Abort_Timer	pshm->P[11748]
#define	P_Sync_Test	pshm->P[11749]
#define	P_Dry_Pause_Flag	pshm->P[11750]
#define	P_Dry_Run_Pasue_Timer	pshm->P[11751]
#define	P_Resume_Stop_Blocked	pshm->P[11752]
#define	P_Discharge_Wait	pshm->P[11753]
#define	P_Command_Run_Flag	pshm->P[11754]
#define	P_Stop_Cmd_Origin	pshm->P[11755]
#define	P_Stop_Origin_Save(i)	pshm->P[(11756+i)%MAX_P]
#define	P_Old_M_Y_Sepa_Cutter_SSR_On	pshm->P[11771]
#define	P_Sepa_Cutter_SSR_Off_Time	pshm->P[11772]
#define	P_Sepa_Cutter_SSR_Off	pshm->P[11773]
#define	P_Sepa_Cutter_SSR_Off_Timer	pshm->P[11774]
#define	P_Starting_Pause_IO_Flag	pshm->P[11775]
#define	P_PLC03_Seq_Pause_Start_Flag	pshm->P[11776]
#define	P_PLC03_Seq_Pause_Start_State_Machine	pshm->P[11777]
#define	P_PLC03_Seq_Pause_Start_Status	pshm->P[11778]
#define	P_ARC_NP_Push_BTN	pshm->P[11779]
#define	P_ARC_UI_Push_BTN	pshm->P[11780]
#define	P_M_Manual_ARC_BTN	pshm->P[11781]
#define	P_Two_Btn_Active_Flag	pshm->P[11782]
#define	P_Two_Btn_Interlock_Time	pshm->P[11783]
#define	P_NP_Unwinder_Active_Hold	pshm->P[11784]
#define	P_MAX_KGF	pshm->P[11785]
#define	P_KGF_TO_DAC_RATIO	pshm->P[11786]
#define	P_Dac_Out_Value	pshm->P[11787]
#define	P_Recipe_Dancer_input_kgf	pshm->P[11788]
#define	P_Cathode_NG_PNP_Vel_Zero_Set	pshm->P[11789]
#define	P_Anode_NG_PNP_Vel_Zero_Set	pshm->P[11790]
#define	P_NG_Box_Open_Popup_Flag	pshm->P[11791]
#define	P_Anode_Run_DR	pshm->P[11792]
#define	P_Cathode_Run_DR	pshm->P[11793]
#define	P_1st_UND_Grip_Time	pshm->P[11794]
#define	P_1st_UND_Grip_Time_offset	pshm->P[11795]
#define	P_1st_UND_Grip_Time_offset2	pshm->P[11796]
#define	P_First_Sepa_Driving_Use	pshm->P[11797]
#define	P_First_Sepa_Driving_Timing	pshm->P[11798]
#define	P_Unloader_Safe_rtn	pshm->P[11799]
#define	P_Final_Start	pshm->P[11800]
#define	P_Driving_Start	pshm->P[11801]
#define	P_Starting_Pause_IO_OFF_Flag	pshm->P[11802]
#define	P_individual_Hold_return	pshm->P[11803]
#define	P_individual_Hold_return2	pshm->P[11804]
#define	P_Tension_Ready_Pass	pshm->P[11805]
#define	P_Discharge_cal_rtn	pshm->P[11806]
#define	P_Old_Tact_Current_Mode	pshm->P[11807]
#define	P_Sheet_Clear	pshm->P[11808]
#define	P_Anode_Clamp_On_Time2	pshm->P[11809]
#define	P_Anode_Clamp_On_Time	pshm->P[11810]
#define	P_Cathode_Clamp_On_Time	pshm->P[11811]
#define	P_Cathode_Clamp_On_Time2	pshm->P[11812]
#define	P_Offset	pshm->P[11813]
#define	P_Man_C	pshm->P[11814]
#define	P_NG_Box_Stop_Use	pshm->P[11815]
#define	P_SlewTime	pshm->P[11816]
#define	P_Old_SlewTime	pshm->P[11817]
#define	P_Resume_MNTR1	pshm->P[11818]
#define	P_Resume_MNTR2	pshm->P[11819]
#define	P_Resume_MNTR3	pshm->P[11820]
#define	P_Resume_MNTR4	pshm->P[11821]
#define	P_Resume_MNTR5	pshm->P[11822]
#define	P_Resume_MNTR6	pshm->P[11823]
#define	P_Resume_MNTR7	pshm->P[11824]
#define	P_Resume_MNTR8	pshm->P[11825]
#define	P_Resume_MNTR9	pshm->P[11826]
#define	P_Resume_MNTR10	pshm->P[11827]
#define	P_Resume_MNTR11	pshm->P[11828]
#define	P_Resume_MNTR12	pshm->P[11829]
#define	P_old_P_Anode_Count	pshm->P[11830]
#define	P_Sheet_Paper_BWD_Count	pshm->P[11831]
#define	P_Stop_CHK	pshm->P[11832]
#define	P_Seq_Pause	pshm->P[11833]
#define	P_Seq_Pause2	pshm->P[11834]
#define	P_MSA_TimeBase_Rtn	pshm->P[11835]
#define	P_Old_Vison_Read_EPC_Camera_Move_Request	pshm->P[11836]
#define	P_First_Sepa_Time_Out_Count	pshm->P[11837]
#define	P_Align_Retry_Cal_RTN	pshm->P[11838]
#define	P_Sheet_Err(i)	pshm->P[(11839+i)%MAX_P]
#define	P_Driving_Cal	pshm->P[11855]
#define	P_Driving_End_Pos	pshm->P[11856]
#define	P_Driving_Start_Pos	pshm->P[11857]
#define	P_Drivig_Cal_Save(i)	pshm->P[(11858+i)%MAX_P]
#define	P_Anode_Align_Blow	pshm->P[11863]
#define	P_Cathode_Align_Blow	pshm->P[11864]
#define	P_PMAC_Status_Arr_Save1(i)	pshm->P[(11865+i)%MAX_P]
#define	P_HomePos_Save1(i)	pshm->P[(11870+i)%MAX_P]
#define	P_PMAC_Status_Arr_Save2(i)	pshm->P[(11875+i)%MAX_P]
#define	P_HomePos_Save2(i)	pshm->P[(11880+i)%MAX_P]
#define	P_PMAC_Status_Arr_Save3(i)	pshm->P[(11885+i)%MAX_P]
#define	P_HomePos_Save3(i)	pshm->P[(11890+i)%MAX_P]
#define	P_PMAC_Status_Arr_Save4(i)	pshm->P[(11895+i)%MAX_P]
#define	P_HomePos_Save4(i)	pshm->P[(11900+i)%MAX_P]
#define	P_Home_Pos_Err_Cnt1	pshm->P[11905]
#define	P_Home_Pos_Err_Cnt2	pshm->P[11906]
#define	P_Home_Pos_Err_Cnt3	pshm->P[11907]
#define	P_Home_Pos_Err_Cnt4	pshm->P[11908]
#define	P_Align_Inspection_Delay	pshm->P[11909]
#define	P_HomePos_Err(i)	pshm->P[(11910+i)%MAX_P]
#define	P_Anode_Sheet_Test	pshm->P[11915]
#define	P_Cathode_Sheet_Test	pshm->P[11916]
#define	P_Anode_Sheet_Interlock_Timing	pshm->P[11917]
#define	P_Cathode_Sheet_Interlock_Timing	pshm->P[11918]
#define	P_Discharge_Err_MNTR	pshm->P[11919]
#define	P_Arc_Err_MNTR	pshm->P[11920]
#define	P_Abort_Cnt	pshm->P[11921]
#define	P_EMO_Cnt	pshm->P[11922]
#define	P_Dry_Run_Inspection	pshm->P[11923]
#define	P_Servo_ON_MNTR1	pshm->P[11924]
#define	P_Servo_ON_MNTR2	pshm->P[11925]
#define	P_Servo_ON_MNTR3	pshm->P[11926]
#define	P_Servo_ON_MNTR4	pshm->P[11927]
#define	P_Servo_ON_MNTR5	pshm->P[11928]
#define	P_Servo_ON_MNTR6	pshm->P[11929]
#define	P_Servo_ON_MNTR7	pshm->P[11930]
#define	P_Servo_ON_MNTR8	pshm->P[11931]
#define	P_Servo_ON_MNTR9	pshm->P[11932]
#define	P_Servo_ON_MNTR10	pshm->P[11933]
#define	P_Servo_ON_MNTR11	pshm->P[11934]
#define	P_Servo_ON_MNTR12	pshm->P[11935]
#define	P_Servo_ON_MNTR13	pshm->P[11936]
#define	P_Servo_ON_MNTR14	pshm->P[11937]
#define	P_Servo_ON_MNTR15	pshm->P[11938]
#define	P_Servo_ON_MNTR16	pshm->P[11939]
#define	P_Servo_ON_MNTR17	pshm->P[11940]
#define	P_Servo_ON_MNTR18	pshm->P[11941]
#define	P_Servo_ON_MNTR19	pshm->P[11942]
#define	P_Servo_ON_MNTR20	pshm->P[11943]
#define	P_Servo_ON_MNTR21	pshm->P[11944]
#define	P_Servo_ON_MNTR22	pshm->P[11945]
#define	P_Servo_ON_MNTR23	pshm->P[11946]
#define	P_Servo_ON_MNTR24	pshm->P[11947]
#define	P_Servo_ON_MNTR25	pshm->P[11948]
#define	P_Servo_ON_MNTR26	pshm->P[11949]
#define	P_Servo_ON_MNTR27	pshm->P[11950]
#define	P_Servo_ON_MNTR28	pshm->P[11951]
#define	P_Servo_ON_MNTR29	pshm->P[11952]
#define	P_Servo_ON_MNTR30	pshm->P[11953]
#define	P_X_IO_WinMess_Connect_BTN	pshm->P[11954]
#define	P_Ecat_ReConnetion_State_Machine	pshm->P[11955]
#define	P_Ecat_Reconnection_Timer	pshm->P[11956]
#define	P_Y_Ecat_Reconnecting	pshm->P[11957]
#define	P_Y_Ecat_ReConnection_Fail	pshm->P[11958]
#define	P_Y_Ecat_ReConnection_Complete	pshm->P[11959]
#define	P_X_Ecat_Reconnection_BTN	pshm->P[11960]
#define	P_X_PLC_Setup_Mode_Check	pshm->P[11961]
#define	P_Interlock_On_Off_Flag	pshm->P[11962]
#define	P_X_Old_MC_Reconnect_BTN_Signal	pshm->P[11963]
#define	P_BTN_1st_ULD_Data_Clear	pshm->P[11964]
#define	P_Old_BTN_1st_ULD_Data_Clear	pshm->P[11965]
#define	P_Old_M_Y_1st_Unloader_UnGrip_Sol	pshm->P[11966]
#define	P_Sepa_Cutter_Heat_Meter	pshm->P[11967]
#define	P_Sepa_Cutter_Heating_Timer	pshm->P[11968]
#define	P_Middle_Skip_Off_Flag	pshm->P[11969]
#define	P_Stop_MNTR1	pshm->P[11970]
#define	P_Stop_MNTR2	pshm->P[11971]
#define	P_Sheet_Pos_Offset	pshm->P[11972]
#define	P_Stopping_Wait_Time	pshm->P[11973]
#define	P_Stopping_Test_Timer	pshm->P[11974]
#define	P_Cutter_FWB_Heater_Current(i)	pshm->P[(11975+i)%MAX_P]
#define	P_1st_ULD_OK_Lamp	pshm->P[11985]
#define	P_1st_ULD_NG_Lamp	pshm->P[11986]
#define	P_1st_ULD_Sample_QC_Lamp	pshm->P[11987]
#define	P_Proceed_Execute_Flag	pshm->P[11988]
#define	P_Continuous_Call_Stack_NG_Flag	pshm->P[11989]
#define	P_Continuous_Call_Stack_OK_Flag	pshm->P[11990]
#define	P_Cathode_Picker_Home_Pos	pshm->P[11991]
#define	P_Anode_Picker_Home_Pos	pshm->P[11992]
#define	P_FR_Sheet_Paper_Home_Chk	pshm->P[11993]
#define	P_Align_TimeOut1	pshm->P[11994]
#define	P_Align_TimeOut2	pshm->P[11995]
#define	P_Align_TimeOut3	pshm->P[11996]
#define	P_Align_TimeOut4	pshm->P[11997]
#define	P_Align_TimeOut5	pshm->P[11998]
#define	P_Align_TimeOut6	pshm->P[11999]
#define	P_Anode_Align_OK	pshm->P[12000]
#define	P_Cathode_Align_OK	pshm->P[12001]
#define	P_Anode_Align_NG	pshm->P[12002]
#define	P_Cathode_Align_NG	pshm->P[12003]
#define	P_Anode_Align_TimeOut	pshm->P[12004]
#define	P_Cathode_Align_TimeOut	pshm->P[12005]
#define	P_Anode_Surf_OK	pshm->P[12006]
#define	P_Cathode_Surf_OK	pshm->P[12007]
#define	P_Anode_Surf_NG	pshm->P[12008]
#define	P_Cathode_Surf_NG	pshm->P[12009]
#define	P_Anode_Surf_TimeOut	pshm->P[12010]
#define	P_Cathode_Surf_TimeOut	pshm->P[12011]
#define	P_Surf_TimeOut1	pshm->P[12012]
#define	P_Surf_TimeOut2	pshm->P[12013]
#define	P_Surf_TimeOut3	pshm->P[12014]
#define	P_Surf_TimeOut4	pshm->P[12015]
#define	P_Surf_TimeOut5	pshm->P[12016]
#define	P_Surf_TimeOut6	pshm->P[12017]
#define	P_Anode_Stack_TimeOut	pshm->P[12018]
#define	P_Cathode_Stack_TimeOut	pshm->P[12019]
#define	P_Anode_Stack_OK	pshm->P[12020]
#define	P_Cathode_Stack_OK	pshm->P[12021]
#define	P_Anode_Stack_NG	pshm->P[12022]
#define	P_Cathode_Stack_NG	pshm->P[12023]
#define	P_Stack_TimeOut1	pshm->P[12024]
#define	P_Stack_TimeOut2	pshm->P[12025]
#define	P_Stack_TimeOut3	pshm->P[12026]
#define	P_Align_Move_Err	pshm->P[12027]
#define	P_Ecat_Test	pshm->P[12028]
#define	P_Scan_Time(i)	pshm->P[(12029+i)%MAX_P]
#define	P_Scan_Aver	pshm->P[12031]
#define	P_Scan_MAX	pshm->P[12032]
#define	P_Cathode_1TR_Picker_T_Belt_POS	pshm->P[12033]
#define	P_Cathode_1TR_Picker_T_Align_POS	pshm->P[12034]
#define	P_Anode_1TR_Picker_T_Belt_POS	pshm->P[12035]
#define	P_Anode_1TR_Picker_T_Align_POS	pshm->P[12036]
#define	P_1TR_Picker_T_Align_POS	pshm->P[12037]
#define	P_AVRG_Lower_Sepa_Thickness_mm	pshm->P[12038]
#define	P_AVRG_Upper_Sepa_Thickness_mm	pshm->P[12039]
#define	P_PLC06_Upper_Curr_Unwinder_Thickness_mm	pshm->P[12040]
#define	P_PLC06_Lower_Curr_Unwinder_Thickness_mm	pshm->P[12041]
#define	P_Upper_Curr_Spool_Radius	pshm->P[12042]
#define	P_Lower_Curr_Spool_Radius	pshm->P[12043]
#define	P_PLC06_Curr_Upper_Distance_mm	pshm->P[12044]
#define	P_PLC06_Curr_Lower_Distance_mm	pshm->P[12045]
#define	P_Upper_Sepa_Min_Distance_mm	pshm->P[12046]
#define	P_Lower_Sepa_Min_Distance_mm	pshm->P[12047]
#define	P_PLC06_Sepa_Change_Set	pshm->P[12048]
#define	P_Upper_Sepa_To_Sensor_Min_Dis	pshm->P[12049]
#define	P_Upper_Sepa_To_Sensor_Max_Dis	pshm->P[12050]
#define	P_Upper_Sensor_To_Unwinder_Core_Dis	pshm->P[12051]
#define	P_Upper_Sensor_Min_AD	pshm->P[12052]
#define	P_Upper_Sensor_Max_AD	pshm->P[12053]
#define	P_Lower_Sepa_To_Sensor_Min_Dis	pshm->P[12054]
#define	P_Lower_Sepa_To_Sensor_Max_Dis	pshm->P[12055]
#define	P_Lower_Sensor_To_Unwinder_Core_Dis	pshm->P[12056]
#define	P_Lower_Sensor_Min_AD	pshm->P[12057]
#define	P_Lower_Sensor_Max_AD	pshm->P[12058]
#define	M_AI_Upper_Sepa_Sensing	pshm->P[372]
#define	M_AI_Lower_Sepa_Sensing	pshm->P[373]
#define	P_Status_NP_BTN_Lower_Unwinder	pshm->P[12059]
#define	P_Status_NP_BTN_Upper_Unwinder	pshm->P[12060]
#define	P_Driving_CamTable_Scale_Change_Flag	pshm->P[12061]
#define	P_FR_Driving_Diameter	pshm->P[12062]
#define	P_FR_Driving_Floating_Point	pshm->P[12063]
#define	P_FR_Driving_Reward	pshm->P[12064]
#define	P_Unwinder_Master_Following_Use_Flag	pshm->P[12065]
#define	P_Unwinder_Master_Following_On	pshm->P[12066]
#define	P_Old_Master_Following_Start	pshm->P[12067]
#define	P_Unwinder_Master_Following_Scale	pshm->P[12068]
#define	P_Unwinder_Jog_Use_Flag	pshm->P[12069]
#define	P_Old_Jog_Start	pshm->P[12070]
#define	P_Unwinder_Jog_Total_Time	pshm->P[12071]
#define	P_Unwinder_Ta	pshm->P[12072]
#define	P_Unwinder_Ts	pshm->P[12073]
#define	P_Unwinder_Tm	pshm->P[12074]
#define	P_Unwinder_1mm_Deg	pshm->P[12075]
#define	P_Unwinder_Jog_Pos	pshm->P[12076]
#define	P_Unwinder_Jog_Cnt	pshm->P[12077]
#define	P_PLC06_Frist_Flag	pshm->P[12078]
#define	P_Sepa_AI	pshm->P[12079]
#define	P_PLC06_Reel_Upper_Change_Flag	pshm->P[12080]
#define	P_PLC06_Reel_Lower_Change_Flag	pshm->P[12081]
#define	P_Spool_Ready_Enable_Flag	pshm->P[12082]
#define	P_Spool_Lack_Flag	pshm->P[12083]
#define	P_Sepa_DR_Start_Flag	pshm->P[12084]
#define	P_cdTime_Tact_Sec	pshm->P[12085]
#define	P_Master_Tact_Sec	pshm->P[12086]
#define	P_Prev_Err_Pos	pshm->P[12087]
#define	P_Cur_Arc_Rad	pshm->P[12088]
#define	P_Cur_Arc_Deg	pshm->P[12089]
#define	P_Spool_Velocity	pshm->P[12090]
#define	P_Lin_Prop_Vel	pshm->P[12091]
#define	P_Err_Pos	pshm->P[12092]
#define	P_Lin_Deriv_Vel	pshm->P[12093]
#define	P_Lin_Dacer_Kd	pshm->P[12094]
#define	P_Lin_Dacer_Kp	pshm->P[12095]
#define	P_Running_CDTimer	pshm->P[12096]
#define	P_Unwinder_Jog_Ta	pshm->P[12097]
#define	P_Unwinder_Jog_Ts	pshm->P[12098]
#define	P_Unwinder_Vel_Test_Time	pshm->P[12099]
#define	P_Set_Interval_Time	pshm->P[12100]
#define	P_PLC06_Upper_Sepa_AI_Timer	pshm->P[12101]
#define	P_PLC06_Upper_Sepa_AI_Data	pshm->P[12102]
#define	P_PLC06_Upper_Sepa_AI_Cnt	pshm->P[12103]
#define	P_PLC06_Upper_AVRG_Sensor_Data	pshm->P[12104]
#define	P_PLC06_Lower_Sepa_AI_Timer	pshm->P[12105]
#define	P_PLC06_Lower_Sepa_AI_Data	pshm->P[12106]
#define	P_PLC06_Lower_Sepa_AI_Cnt	pshm->P[12107]
#define	P_PLC06_Lower_AVRG_Sensor_Data	pshm->P[12108]
#define	P_PLC06_Sepa_Upper_Thickness_Timer	pshm->P[12109]
#define	P_PLC06_Sepa_Upper_Thickness_Data	pshm->P[12110]
#define	P_PLC06_Sepa_Upper_Thickness_Cnt	pshm->P[12111]
#define	P_PLC06_Sepa_Lower_Thickness_Timer	pshm->P[12112]
#define	P_PLC06_Sepa_Lower_Thickness_Data	pshm->P[12113]
#define	P_PLC06_Sepa_Lower_Thickness_Cnt	pshm->P[12114]
#define	P_Sepa_Thickness_Chk_Timer	pshm->P[12115]
#define	P_Spool_Length	pshm->P[12116]
#define	P_Cascade_Sf_Driving_Value	pshm->P[12117]
#define	P_Cascade_Sf_None_Driving_Value	pshm->P[12118]
#define	P_Sepa_Min_Value_Cal_Cmd	pshm->P[12119]
#define	P_Total_Sepa_Need_Length	pshm->P[12120]
#define	P_Alpa	pshm->P[12121]
#define	P_Sepa_Num_of_Turns	pshm->P[12122]
#define	P_Sepa_Turn_Num	pshm->P[12123]
#define	P_Accumulate_Value	pshm->P[12124]
#define	P_Sharft_to_Sepa_Core_mm	pshm->P[12125]
#define	P_Sepa_Cal_Circum	pshm->P[12126]
#define	P_Sepa_Min_Need_Thickness	pshm->P[12127]
#define	P_Sepa_Min_Thickness_Cmd	pshm->P[12128]
#define	P_Sepa_Accumulate_Cmd	pshm->P[12129]
#define	P_Sepa_Required_Amount	pshm->P[12130]
#define	P_Sepa_Current_Thickness	pshm->P[12131]
#define	P_Sepa_Initial_Tickness	pshm->P[12132]
#define	P_Sepa_Required_Update_Timer	pshm->P[12133]
#define	P_TEST_EPC_Interlock_Auto	pshm->P[12134]
#define	P_TEST_EPC_Interlock_Manual	pshm->P[12135]
#define	P_Discharge_Total_Tact	pshm->P[12136]
#define	P_Read_Sector_TactTime(i)	pshm->P[(12137+i)%MAX_P]
#define	P_Write_Sector_TactTime(i)	pshm->P[(12143+i)%MAX_P]
#define	P_PLC15_Sub_Function_Dryrun_Active_Flag	pshm->P[12149]
#define	P_Sepa_Rotation_Sequence_Run_Trigger_Cnt	pshm->P[12150]
#define	P_Sepa_Mode_Sepa_Recipe_Count	pshm->P[12151]
#define	P_Discharged_After_End_Trigger	pshm->P[12152]
#define	P_Unloader_1st_Grip_Delay	pshm->P[12153]
#define	P_Separate_Cutter_Heating_Limit_Value	pshm->P[12154]
#define	P_Separate_Cutting_Current	pshm->P[12155]
#define	P_Separate_Cutter_Change_Cycle	pshm->P[12156]
#define	P_X_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12157]
#define	P_X_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12158]
#define	P_X_Cathode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12159]
#define	P_X_Anode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12160]
#define	P_X_Stack_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12161]
#define	P_Interlock_Messege_Confirmed	pshm->P[12162]
#define	P_X_MC_Communication_HeartBit	pshm->P[12163]
#define	P_SV_Cathode_Count	pshm->P[12164]
#define	P_SV_Anode_Count	pshm->P[12165]
#define	P_SV_AO_Reference_Value_Chanel(i)	pshm->P[(12166+i)%MAX_P]
#define	P_SV_Cathode_Reference_Thickness	pshm->P[12169]
#define	P_SV_Anode_Reference_Thickness	pshm->P[12170]
#define	P_SV_Stack_Table_Damper_Cathode	pshm->P[12171]
#define	P_SV_Stack_Table_Damper_Anode	pshm->P[12172]
#define	P_SV_Sepa_Reference_Thickness	pshm->P[12173]
#define	P_SV_Jelly_Roll_Width	pshm->P[12174]
#define	P_Cathode_Align_Continuous_NG_Recipe	pshm->P[12175]
#define	P_Anode_Align_Continuous_NG_Recipe	pshm->P[12176]
#define	P_Stack_Vision_Continuous_NG_Recipe	pshm->P[12177]
#define	P_PLC_Recipe_EPC_Sepa_Count	pshm->P[12178]
#define	P_PLC_Recipe_Revise_Sepa	pshm->P[12179]
#define	P_X_PLC_to_PMAC_Correction_Value	pshm->P[12180]
#define	P_Anode_Align_Continuous_NG_Check_range	pshm->P[12181]
#define	P_Cathode_Align_Continuous_NG_Check_range	pshm->P[12182]
#define	P_Stack_Align_Continuous_NG_Check_range	pshm->P[12183]
#define	P_Cathode_Surface_Continuous_NG_Recipe	pshm->P[12184]
#define	P_Anode_Surface_Continuous_NG_Recipe	pshm->P[12185]
#define	P_Cathode_Surface_Continuous_NG_Check_range	pshm->P[12186]
#define	P_Anode_Surface_Continuous_NG_Check_range	pshm->P[12187]
#define	P_Servo_Dancer_Alarm_Maximum_Angle_Value	pshm->P[12188]
#define	P_Servo_Dancer_Alarm_Minimum_Angle_Value	pshm->P[12189]
#define	P_Current_Selected_Spool_Rev_Counts_Init_Read	pshm->P[12190]
#define	P_Spool_ARC_Distance_mm	pshm->P[12191]
#define	P_ARC_Upper_Request_Sepa_Thickness_mm	pshm->P[12192]
#define	P_ARC_Lower_Request_Sepa_Thickness_mm	pshm->P[12193]
#define	P_Selected_Spool_Arc_Set_Rev_Counts_Value	pshm->P[12194]
#define	P_Set_Cnt_FR_Moving_Sepa_ARC	pshm->P[12195]
#define	P_Current_Selected_Spool_Rev_Counts	pshm->P[12196]
#define	P_AI_Cathode_Clamp_Damper	pshm->P[12197]
#define	P_AI_Anode_Clamp_Damper	pshm->P[12198]
#define	P_MSA_Run_Repeat_Num(i)	pshm->P[(12199+i)%MAX_P]
#define	P_Current_MSA_Run_Num(i)	pshm->P[(12204+i)%MAX_P]
#define	P_Select_Sheet_Value	pshm->P[12209]
#define	P_BTN_Config_Setup_Mode_Select	pshm->P[12210]
#define	P_Sepa_Thickness_Max_Value	pshm->P[12211]
#define	P_AI_Cathode_Clamp_Damper_Zero_Mpa_Analog_Value	pshm->P[12212]
#define	P_AI_Anode_Clamp_Damper_Zero_Mpa_Analog_Value	pshm->P[12213]
#define	P_Accumulated_Movement_MM_Unit_Cathode_1ST_pnp	pshm->P[12214]
#define	P_Accumulated_Movement_MM_Unit_Anode_1ST_pnp	pshm->P[12215]
#define	P_Accumulated_Movement_MM_Unit_Cathode_2nd_pnp	pshm->P[12216]
#define	P_Accumulated_Movement_MM_Unit_Anode_2nd_pnp	pshm->P[12217]
#define	P_AI_Anode_Clamp_Damper_Mpa	pshm->P[12218]
#define	P_AI_Cathode_Clamp_Damper_Mpa	pshm->P[12219]
#define	P_Current_Whole_Stack_Jelly_Roll_Thinckness_mm	pshm->P[12220]
#define	P_Upper_Sepa_Current_Thickness_um	pshm->P[12221]
#define	P_Lower_Sepa_Current_Thickness_um	pshm->P[12222]
#define	P_Spool_Rotate_Distance	pshm->P[12223]
#define	Spool_Diameter	pshm->P[12224]
#define	P_Current_FR_Moving_Cnt_To_PlC	pshm->P[12225]
#define	P_MES_APC_Select_Btn	pshm->P[12226]
#define	P_AO_Anode_Clamp_Damper	pshm->P[12227]
#define	P_AO_Cathode_Clamp_Damper	pshm->P[12228]
#define	P_Sepa_Length	pshm->P[12229]
#define	P_Minus_Limit_Detect_Popup_Flag	pshm->P[12230]
#define	P_Plus_Limit_Detect_Popup_Flag	pshm->P[12231]
#define	P_Fatal_Fe_Limit_Detect_Popup_Flag	pshm->P[12232]
#define	P_Emergency_Alarm_Popup_Flag	pshm->P[12233]
#define	P_SepaArcing_Popup_Flag	pshm->P[12234]
#define	P_Y_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger	pshm->P[12235]
#define	P_Y_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger	pshm->P[12236]
#define	P_Y_Cathode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger	pshm->P[12237]
#define	P_Y_Anode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger	pshm->P[12238]
#define	P_Y_Stack_Align_Calibration_twisted_Cycle_Stop_Request_Trigger	pshm->P[12239]
#define	P_Current_Selected_Sheet_Value	pshm->P[12240]
#define	P_Status_Config_Mode_Select	pshm->P[12241]
#define	P_Sepa_Thickness_Jig_Value	pshm->P[12242]
#define	P_PV_Stack_Table_Damper_Cathode	pshm->P[12243]
#define	P_PV_Stack_Table_Damper_Anode	pshm->P[12244]
#define	P_Discharge_Standby_Pos_Tack_Time	pshm->P[12245]
#define	P_Discharge_FR_MainZ_Pos_Tack_Time	pshm->P[12246]
#define	P_Discharge_Unloader_Go_Pos_Tack_Time	pshm->P[12247]
#define	P_Discharge_SubZ_Down_Pos_Tack_Time	pshm->P[12248]
#define	P_Discharge_Unloader_Cutting_Pos_Tack_Time	pshm->P[12249]
#define	P_Discharge_FR_Clamp_ON_Complete_Tack_Time	pshm->P[12250]
#define	P_Discharge_Cutting_Complete_Tack_Time	pshm->P[12251]
#define	P_Discharge_Motion_PG_Active_Starting_Tack_Time	pshm->P[12252]
#define	P_Discharge_Motion_PG_Active_Complete_Tack_Time	pshm->P[12253]
#define	P_Discharge_Sepa_First_Complete_Tack_Time	pshm->P[12254]
#define	P_Discharge_Complete_Tack_Time	pshm->P[12255]
#define	P_Discharge_Total_Tack_Time	pshm->P[12256]
#define	P_Anode_Clamp_TackTime_Array0	pshm->P[12257]
#define	P_Anode_Clamp_TackTime_Array1	pshm->P[12258]
#define	P_Anode_Clamp_TackTime_Array2	pshm->P[12259]
#define	P_Anode_Clamp_TackTime_Array3	pshm->P[12260]
#define	P_Anode_Clamp_TackTime_Array4	pshm->P[12261]
#define	P_Anode_Clamp_TackTime_Array5	pshm->P[12262]
#define	P_Anode_Clamp_TackTime_Array6	pshm->P[12263]
#define	P_Anode_Clamp_TackTime_Array7	pshm->P[12264]
#define	P_Anode_Clamp_TackTime_Array8	pshm->P[12265]
#define	P_Anode_Clamp_TackTime_Array9	pshm->P[12266]
#define	P_Anode_Clamp_TackTime_Array10	pshm->P[12267]
#define	P_Stacking_TackTime_Array0	pshm->P[12268]
#define	P_Stacking_TackTime_Array1	pshm->P[12269]
#define	P_Stacking_TackTime_Array2	pshm->P[12270]
#define	P_Stacking_TackTime_Array3	pshm->P[12271]
#define	P_Stacking_TackTime_Array4	pshm->P[12272]
#define	P_Stacking_TackTime_Array5	pshm->P[12273]
#define	P_Stacking_TackTime_Array6	pshm->P[12274]
#define	P_Stacking_TackTime_Array7	pshm->P[12275]
#define	P_Stacking_TackTime_Array8	pshm->P[12276]
#define	P_Stacking_TackTime_Array9	pshm->P[12277]
#define	P_Stacking_TackTime_Array10	pshm->P[12278]
#define	P_Cathode_Clamp_TackTime_Array0	pshm->P[12279]
#define	P_Cathode_Clamp_TackTime_Array1	pshm->P[12280]
#define	P_Cathode_Clamp_TackTime_Array2	pshm->P[12281]
#define	P_Cathode_Clamp_TackTime_Array3	pshm->P[12282]
#define	P_Cathode_Clamp_TackTime_Array4	pshm->P[12283]
#define	P_Cathode_Clamp_TackTime_Array5	pshm->P[12284]
#define	P_Cathode_Clamp_TackTime_Array6	pshm->P[12285]
#define	P_Cathode_Clamp_TackTime_Array7	pshm->P[12286]
#define	P_Cathode_Clamp_TackTime_Array8	pshm->P[12287]
#define	P_Cathode_Clamp_TackTime_Array9	pshm->P[12288]
#define	P_Cathode_Clamp_TackTime_Array10	pshm->P[12289]
#define	P_JellyRoll_Out_TackTime_Array0	pshm->P[12290]
#define	P_JellyRoll_Out_TackTime_Array1	pshm->P[12291]
#define	P_JellyRoll_Out_TackTime_Array2	pshm->P[12292]
#define	P_JellyRoll_Out_TackTime_Array3	pshm->P[12293]
#define	P_JellyRoll_Out_TackTime_Array4	pshm->P[12294]
#define	P_JellyRoll_Out_TackTime_Array5	pshm->P[12295]
#define	P_JellyRoll_Out_TackTime_Array6	pshm->P[12296]
#define	P_JellyRoll_Out_TackTime_Array7	pshm->P[12297]
#define	P_JellyRoll_Out_TackTime_Array8	pshm->P[12298]
#define	P_JellyRoll_Out_TackTime_Array9	pshm->P[12299]
#define	P_JellyRoll_Out_TackTime_Array10	pshm->P[12300]
#define	P_Anode_1th_TackTime_Array0	pshm->P[12301]
#define	P_Anode_1th_TackTime_Array1	pshm->P[12302]
#define	P_Anode_1th_TackTime_Array2	pshm->P[12303]
#define	P_Anode_1th_TackTime_Array3	pshm->P[12304]
#define	P_Anode_1th_TackTime_Array4	pshm->P[12305]
#define	P_Anode_1th_TackTime_Array5	pshm->P[12306]
#define	P_Anode_1th_TackTime_Array6	pshm->P[12307]
#define	P_Anode_1th_TackTime_Array7	pshm->P[12308]
#define	P_Anode_1th_TackTime_Array8	pshm->P[12309]
#define	P_Anode_1th_TackTime_Array9	pshm->P[12310]
#define	P_Anode_1th_TackTime_Array10	pshm->P[12311]
#define	P_Cathode_1th_TackTime_Array0	pshm->P[12312]
#define	P_Cathode_1th_TackTime_Array1	pshm->P[12313]
#define	P_Cathode_1th_TackTime_Array2	pshm->P[12314]
#define	P_Cathode_1th_TackTime_Array3	pshm->P[12315]
#define	P_Cathode_1th_TackTime_Array4	pshm->P[12316]
#define	P_Cathode_1th_TackTime_Array5	pshm->P[12317]
#define	P_Cathode_1th_TackTime_Array6	pshm->P[12318]
#define	P_Cathode_1th_TackTime_Array7	pshm->P[12319]
#define	P_Cathode_1th_TackTime_Array8	pshm->P[12320]
#define	P_Cathode_1th_TackTime_Array9	pshm->P[12321]
#define	P_Cathode_1th_TackTime_Array10	pshm->P[12322]
#define	P_Anode_2th_TackTime_Array0	pshm->P[12323]
#define	P_Anode_2th_TackTime_Array1	pshm->P[12324]
#define	P_Anode_2th_TackTime_Array2	pshm->P[12325]
#define	P_Anode_2th_TackTime_Array3	pshm->P[12326]
#define	P_Anode_2th_TackTime_Array4	pshm->P[12327]
#define	P_Anode_2th_TackTime_Array5	pshm->P[12328]
#define	P_Anode_2th_TackTime_Array6	pshm->P[12329]
#define	P_Anode_2th_TackTime_Array7	pshm->P[12330]
#define	P_Anode_2th_TackTime_Array8	pshm->P[12331]
#define	P_Anode_2th_TackTime_Array9	pshm->P[12332]
#define	P_Anode_2th_TackTime_Array10	pshm->P[12333]
#define	P_Cathode_2th_TackTime_Array0	pshm->P[12334]
#define	P_Cathode_2th_TackTime_Array1	pshm->P[12335]
#define	P_Cathode_2th_TackTime_Array2	pshm->P[12336]
#define	P_Cathode_2th_TackTime_Array3	pshm->P[12337]
#define	P_Cathode_2th_TackTime_Array4	pshm->P[12338]
#define	P_Cathode_2th_TackTime_Array5	pshm->P[12339]
#define	P_Cathode_2th_TackTime_Array6	pshm->P[12340]
#define	P_Cathode_2th_TackTime_Array7	pshm->P[12341]
#define	P_Cathode_2th_TackTime_Array8	pshm->P[12342]
#define	P_Cathode_2th_TackTime_Array9	pshm->P[12343]
#define	P_Cathode_2th_TackTime_Array10	pshm->P[12344]
#define	P_Anode_Align_Table_TackTime_Array0	pshm->P[12345]
#define	P_Anode_Align_Table_TackTime_Array1	pshm->P[12346]
#define	P_Anode_Align_Table_TackTime_Array2	pshm->P[12347]
#define	P_Anode_Align_Table_TackTime_Array3	pshm->P[12348]
#define	P_Anode_Align_Table_TackTime_Array4	pshm->P[12349]
#define	P_Anode_Align_Table_TackTime_Array5	pshm->P[12350]
#define	P_Anode_Align_Table_TackTime_Array6	pshm->P[12351]
#define	P_Anode_Align_Table_TackTime_Array7	pshm->P[12352]
#define	P_Anode_Align_Table_TackTime_Array8	pshm->P[12353]
#define	P_Anode_Align_Table_TackTime_Array9	pshm->P[12354]
#define	P_Anode_Align_Table_TackTime_Array10	pshm->P[12355]
#define	P_Cathode_Align_Table_TackTime_Array0	pshm->P[12356]
#define	P_Cathode_Align_Table_TackTime_Array1	pshm->P[12357]
#define	P_Cathode_Align_Table_TackTime_Array2	pshm->P[12358]
#define	P_Cathode_Align_Table_TackTime_Array3	pshm->P[12359]
#define	P_Cathode_Align_Table_TackTime_Array4	pshm->P[12360]
#define	P_Cathode_Align_Table_TackTime_Array5	pshm->P[12361]
#define	P_Cathode_Align_Table_TackTime_Array6	pshm->P[12362]
#define	P_Cathode_Align_Table_TackTime_Array7	pshm->P[12363]
#define	P_Cathode_Align_Table_TackTime_Array8	pshm->P[12364]
#define	P_Cathode_Align_Table_TackTime_Array9	pshm->P[12365]
#define	P_Cathode_Align_Table_TackTime_Array10	pshm->P[12366]
#define	P_Anode_NG_PNP_TackTime_Array0	pshm->P[12367]
#define	P_Anode_NG_PNP_TackTime_Array1	pshm->P[12368]
#define	P_Anode_NG_PNP_TackTime_Array2	pshm->P[12369]
#define	P_Anode_NG_PNP_TackTime_Array3	pshm->P[12370]
#define	P_Anode_NG_PNP_TackTime_Array4	pshm->P[12371]
#define	P_Anode_NG_PNP_TackTime_Array5	pshm->P[12372]
#define	P_Anode_NG_PNP_TackTime_Array6	pshm->P[12373]
#define	P_Anode_NG_PNP_TackTime_Array7	pshm->P[12374]
#define	P_Anode_NG_PNP_TackTime_Array8	pshm->P[12375]
#define	P_Anode_NG_PNP_TackTime_Array9	pshm->P[12376]
#define	P_Anode_NG_PNP_TackTime_Array10	pshm->P[12377]
#define	P_Cathode_NG_PNP_TackTime_Array0	pshm->P[12378]
#define	P_Cathode_NG_PNP_TackTime_Array1	pshm->P[12379]
#define	P_Cathode_NG_PNP_TackTime_Array2	pshm->P[12380]
#define	P_Cathode_NG_PNP_TackTime_Array3	pshm->P[12381]
#define	P_Cathode_NG_PNP_TackTime_Array4	pshm->P[12382]
#define	P_Cathode_NG_PNP_TackTime_Array5	pshm->P[12383]
#define	P_Cathode_NG_PNP_TackTime_Array6	pshm->P[12384]
#define	P_Cathode_NG_PNP_TackTime_Array7	pshm->P[12385]
#define	P_Cathode_NG_PNP_TackTime_Array8	pshm->P[12386]
#define	P_Cathode_NG_PNP_TackTime_Array9	pshm->P[12387]
#define	P_Cathode_NG_PNP_TackTime_Array10	pshm->P[12388]
#define	P_Sepa_Unwinder_TackTime_Array0	pshm->P[12389]
#define	P_Sepa_Unwinder_TackTime_Array1	pshm->P[12390]
#define	P_Sepa_Unwinder_TackTime_Array2	pshm->P[12391]
#define	P_Sepa_Unwinder_TackTime_Array3	pshm->P[12392]
#define	P_Sepa_Unwinder_TackTime_Array4	pshm->P[12393]
#define	P_Sepa_Unwinder_TackTime_Array5	pshm->P[12394]
#define	P_Sepa_Unwinder_TackTime_Array6	pshm->P[12395]
#define	P_Sepa_Unwinder_TackTime_Array7	pshm->P[12396]
#define	P_Sepa_Unwinder_TackTime_Array8	pshm->P[12397]
#define	P_Sepa_Unwinder_TackTime_Array9	pshm->P[12398]
#define	P_Sepa_Unwinder_TackTime_Array10	pshm->P[12399]
#define	P_Sepa_Unwinder_TackTime_Array11	pshm->P[12400]
#define	P_1st_Unloader_TackTime_Array0	pshm->P[12401]
#define	P_1st_Unloader_TackTime_Array1	pshm->P[12402]
#define	P_1st_Unloader_TackTime_Array2	pshm->P[12403]
#define	P_1st_Unloader_TackTime_Array3	pshm->P[12404]
#define	P_1st_Unloader_TackTime_Array4	pshm->P[12405]
#define	P_1st_Unloader_TackTime_Array5	pshm->P[12406]
#define	P_1st_Unloader_TackTime_Array6	pshm->P[12407]
#define	P_1st_Unloader_TackTime_Array7	pshm->P[12408]
#define	P_1st_Unloader_TackTime_Array8	pshm->P[12409]
#define	P_1st_Unloader_TackTime_Array9	pshm->P[12410]
#define	P_1st_Unloader_TackTime_Array10	pshm->P[12411]
#define	P_Cathode_1st_Vacuum_TackTime_Array1	pshm->P[12412]
#define	P_Cathode_1st_Vacuum_TackTime_Array2	pshm->P[12413]
#define	P_Cathode_1st_Vacuum_TackTime_Array3	pshm->P[12414]
#define	P_Cathode_1st_Vacuum_TackTime_Array4	pshm->P[12415]
#define	P_Cathode_1st_Vacuum_TackTime_Array5	pshm->P[12416]
#define	P_Cathode_1st_Vacuum_TackTime_Array6	pshm->P[12417]
#define	P_Cathode_1st_Vacuum_TackTime_Array7	pshm->P[12418]
#define	P_Cathode_1st_Vacuum_TackTime_Array8	pshm->P[12419]
#define	P_Cathode_1st_Vacuum_TackTime_Array9	pshm->P[12420]
#define	P_Cathode_1st_Vacuum_TackTime_Array10	pshm->P[12421]
#define	P_Cathode_Align_Vacuum_TackTime_Array1	pshm->P[12422]
#define	P_Cathode_Align_Vacuum_TackTime_Array2	pshm->P[12423]
#define	P_Cathode_Align_Vacuum_TackTime_Array3	pshm->P[12424]
#define	P_Cathode_Align_Vacuum_TackTime_Array4	pshm->P[12425]
#define	P_Cathode_Align_Vacuum_TackTime_Array5	pshm->P[12426]
#define	P_Cathode_Align_Vacuum_TackTime_Array6	pshm->P[12427]
#define	P_Cathode_Align_Vacuum_TackTime_Array7	pshm->P[12428]
#define	P_Cathode_Align_Vacuum_TackTime_Array8	pshm->P[12429]
#define	P_Cathode_Align_Vacuum_TackTime_Array9	pshm->P[12430]
#define	P_Cathode_Align_Vacuum_TackTime_Array10	pshm->P[12431]
#define	P_Cathode_2nd_Vacuum_TackTime_Array1	pshm->P[12432]
#define	P_Cathode_2nd_Vacuum_TackTime_Array2	pshm->P[12433]
#define	P_Cathode_2nd_Vacuum_TackTime_Array3	pshm->P[12434]
#define	P_Cathode_2nd_Vacuum_TackTime_Array4	pshm->P[12435]
#define	P_Cathode_2nd_Vacuum_TackTime_Array5	pshm->P[12436]
#define	P_Cathode_2nd_Vacuum_TackTime_Array6	pshm->P[12437]
#define	P_Cathode_2nd_Vacuum_TackTime_Array7	pshm->P[12438]
#define	P_Cathode_2nd_Vacuum_TackTime_Array8	pshm->P[12439]
#define	P_Cathode_2nd_Vacuum_TackTime_Array9	pshm->P[12440]
#define	P_Cathode_2nd_Vacuum_TackTime_Array10	pshm->P[12441]
#define	P_Anode_1st_Vacuum_TackTime_Array1	pshm->P[12442]
#define	P_Anode_1st_Vacuum_TackTime_Array2	pshm->P[12443]
#define	P_Anode_1st_Vacuum_TackTime_Array3	pshm->P[12444]
#define	P_Anode_1st_Vacuum_TackTime_Array4	pshm->P[12445]
#define	P_Anode_1st_Vacuum_TackTime_Array5	pshm->P[12446]
#define	P_Anode_1st_Vacuum_TackTime_Array6	pshm->P[12447]
#define	P_Anode_1st_Vacuum_TackTime_Array7	pshm->P[12448]
#define	P_Anode_1st_Vacuum_TackTime_Array8	pshm->P[12449]
#define	P_Anode_1st_Vacuum_TackTime_Array9	pshm->P[12450]
#define	P_Anode_1st_Vacuum_TackTime_Array10	pshm->P[12451]
#define	P_Anode_Align_Vacuum_TackTime_Array1	pshm->P[12452]
#define	P_Anode_Align_Vacuum_TackTime_Array2	pshm->P[12453]
#define	P_Anode_Align_Vacuum_TackTime_Array3	pshm->P[12454]
#define	P_Anode_Align_Vacuum_TackTime_Array4	pshm->P[12455]
#define	P_Anode_Align_Vacuum_TackTime_Array5	pshm->P[12456]
#define	P_Anode_Align_Vacuum_TackTime_Array6	pshm->P[12457]
#define	P_Anode_Align_Vacuum_TackTime_Array7	pshm->P[12458]
#define	P_Anode_Align_Vacuum_TackTime_Array8	pshm->P[12459]
#define	P_Anode_Align_Vacuum_TackTime_Array9	pshm->P[12460]
#define	P_Anode_Align_Vacuum_TackTime_Array10	pshm->P[12461]
#define	P_Anode_2nd_Vacuum_TackTime_Array1	pshm->P[12462]
#define	P_Anode_2nd_Vacuum_TackTime_Array2	pshm->P[12463]
#define	P_Anode_2nd_Vacuum_TackTime_Array3	pshm->P[12464]
#define	P_Anode_2nd_Vacuum_TackTime_Array4	pshm->P[12465]
#define	P_Anode_2nd_Vacuum_TackTime_Array5	pshm->P[12466]
#define	P_Anode_2nd_Vacuum_TackTime_Array6	pshm->P[12467]
#define	P_Anode_2nd_Vacuum_TackTime_Array7	pshm->P[12468]
#define	P_Anode_2nd_Vacuum_TackTime_Array8	pshm->P[12469]
#define	P_Anode_2nd_Vacuum_TackTime_Array9	pshm->P[12470]
#define	P_Anode_2nd_Vacuum_TackTime_Array10	pshm->P[12471]
#define	P_Final_Roll_TackTime_Array1	pshm->P[12472]
#define	P_Final_Roll_TackTime_Array2	pshm->P[12473]
#define	P_Final_Roll_TackTime_Array3	pshm->P[12474]
#define	P_Final_Roll_TackTime_Array4	pshm->P[12475]
#define	P_Final_Roll_TackTime_Array5	pshm->P[12476]
#define	P_Final_Roll_TackTime_Array6	pshm->P[12477]
#define	P_Final_Roll_TackTime_Array7	pshm->P[12478]
#define	P_Final_Roll_TackTime_Array8	pshm->P[12479]
#define	P_Final_Roll_TackTime_Array9	pshm->P[12480]
#define	P_Final_Roll_TackTime_Array10	pshm->P[12481]
#define	P_Sepa_ARC_TackTime_Array1	pshm->P[12482]
#define	P_Sepa_ARC_TackTime_Array2	pshm->P[12483]
#define	P_Sepa_ARC_TackTime_Array3	pshm->P[12484]
#define	P_Sepa_ARC_TackTime_Array4	pshm->P[12485]
#define	P_Sepa_ARC_TackTime_Array5	pshm->P[12486]
#define	P_Sepa_ARC_TackTime_Array6	pshm->P[12487]
#define	P_Sepa_ARC_TackTime_Array7	pshm->P[12488]
#define	P_Sepa_ARC_TackTime_Array8	pshm->P[12489]
#define	P_Sepa_ARC_TackTime_Array9	pshm->P[12490]
#define	P_Sepa_ARC_TackTime_Array10	pshm->P[12491]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array1	pshm->P[12492]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array2	pshm->P[12493]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array3	pshm->P[12494]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array4	pshm->P[12495]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array5	pshm->P[12496]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array6	pshm->P[12497]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array7	pshm->P[12498]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array8	pshm->P[12499]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array9	pshm->P[12500]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array10	pshm->P[12501]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array1	pshm->P[12502]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array2	pshm->P[12503]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array3	pshm->P[12504]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array4	pshm->P[12505]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array5	pshm->P[12506]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array6	pshm->P[12507]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array7	pshm->P[12508]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array8	pshm->P[12509]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array9	pshm->P[12510]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array10	pshm->P[12511]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array1	pshm->P[12512]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array2	pshm->P[12513]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array3	pshm->P[12514]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array4	pshm->P[12515]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array5	pshm->P[12516]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array6	pshm->P[12517]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array7	pshm->P[12518]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array8	pshm->P[12519]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array9	pshm->P[12520]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array10	pshm->P[12521]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array1	pshm->P[12522]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array2	pshm->P[12523]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array3	pshm->P[12524]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array4	pshm->P[12525]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array5	pshm->P[12526]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array6	pshm->P[12527]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array7	pshm->P[12528]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array8	pshm->P[12529]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array9	pshm->P[12530]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array10	pshm->P[12531]
#define	P_PACK_ML_Status_bit	pshm->P[12532]
#define	P_Whole_Stacking_TackTime_MES_Report_Flag	pshm->P[12533]
#define	P_JellyRoll_Out_TackTime_MES_Report_Flag	pshm->P[12534]
#define	P_PV_Cathode_Count	pshm->P[12535]
#define	P_PV_Anode_Count	pshm->P[12536]
#define	P_PV_AO_Value_Chanel(i)	pshm->P[(12537+i)%MAX_P]
#define	P_PV_Cathode_NG_TR_NG_Count	pshm->P[12541]
#define	P_PV_Anode_NG_TR_NG_Count	pshm->P[12542]
#define	P_PV_Anode_Retry_NG_Count	pshm->P[12543]
#define	P_PV_Cathode_Retry_NG_Count	pshm->P[12544]
#define	P_PV_Align_INPUT_Count	pshm->P[12545]
#define	P_Unloader_Grip_Pressure	pshm->P[12546]
#define	P_Unloader_Heatmeter	pshm->P[12547]
#define	P_Interlock_Messege(i)	pshm->P[(12548+i)%MAX_P]
#define	P_EPC_Y_StandBy	pshm->P[12598]
#define	P_SV_Read_Enable_Flag	pshm->P[12599]
#define	P_Spool_Rotate_Distance_mm	pshm->P[12600]
#define	P_Current_Homming_Status(i)	pshm->P[(12601+i)%MAX_P]
#define	P_Home_Execute_Type(i)	pshm->P[(12651+i)%MAX_P]
#define	P_Cathode_Clamp_Gantry	pshm->P[12701]
#define	P_Anode_Clamp_Gantry	pshm->P[12702]
#define	P_SV_Separator_Heting_Cutter_Change_Period	pshm->P[12703]
#define	P_Interval_Read_Time(i)	pshm->P[(12704+i)%MAX_P]
#define	P_Interval_Write_Time(i)	pshm->P[(12710+i)%MAX_P]
#define	P_Cathode_Picker_Cylinder_Count	pshm->P[12716]
#define	P_Anode_Picker_Cylinder_Count	pshm->P[12717]
#define	P_SV_Stack_Table_Cathode_Reference_Value	pshm->P[12718]
#define	P_SV_Stack_Table_Anode_Reference_Value	pshm->P[12719]
#define	P_CA_DR_Offset	pshm->P[12720]
#define	P_AN_DR_Offset	pshm->P[12721]
#define	P_First_DR_Offset	pshm->P[12722]
#define	P_Last_DR_Offset	pshm->P[12723]
#define	P_BTN_QC_Sample_Flag	pshm->P[12724]
#define	P_BTN_Loss_Sample_Flag	pshm->P[12725]
#define	P_MSA_Sample_Flag	pshm->P[12726]
#define	P_Sample_JR_Recipe_Count	pshm->P[12727]
#define	P_Ca_Clamp_Y_Move	pshm->P[12728]
#define	P_An_Clamp_Y_Move	pshm->P[12729]
#define	P_Stack_Table_JR_Exist_Flag	pshm->P[12730]
#define	P_MES_Status	pshm->P[12731]
#define	P_Sepa_Unwinder_Upper_Confirm_Status	pshm->P[12732]
#define	P_Sepa_Unwinder_Lower_Confirm_Status	pshm->P[12733]
#define	P_Program_Monitoring_Lamp_Cell_Ready	pshm->P[12734]
#define	P_Program_Monitoring_Lamp_Ready_Pos	pshm->P[12735]
#define	P_Program_Monitoring_Lamp_Pause_Pos	pshm->P[12736]
#define	P_Program_Monitoring_Lamp_Motion_Run	pshm->P[12737]
#define	P_Program_Monitoring_Lamp_Cell_Remove	pshm->P[12738]
#define	P_Program_Monitoring_Lamp_Cell_Supply	pshm->P[12739]
#define	P_Program_Monitoring_Lamp_Sepa_Mode	pshm->P[12740]
#define	P_Program_Monitoring_Lamp_Semi_Run	pshm->P[12741]
#define	P_Program_Monitoring_Lamp_Stack_Mode	pshm->P[12742]
#define	P_Program_Monitoring_Lamp_Anode_Aling_NG	pshm->P[12743]
#define	P_Program_Monitoring_Lamp_Anode_Retry_NG	pshm->P[12744]
#define	P_Program_Monitoring_Lamp_Cathode_Align_NG	pshm->P[12745]
#define	P_Program_Monitoring_Lamp_Cathode_Retry_NG	pshm->P[12746]
#define	P_Program_Monitoring_Lamp_Last_Stack_Mode	pshm->P[12747]
#define	P_Program_Monitoring_Lamp_Jelly_Roll_OK	pshm->P[12748]
#define	P_Program_Monitoring_Lamp_Jelly_Roll_NG	pshm->P[12749]
#define	P_Program_Monitoring_Lamp_Jelly_Roll_Sepa	pshm->P[12750]
#define	P_Program_Monitoring_Lamp_Cell_Out_Pos	pshm->P[12751]
#define	P_Program_Monitoring_Lamp_Cell_Out_Mode	pshm->P[12752]
#define	P_Master_Motion_Program_Flag	pshm->P[12753]
#define	P_Sub_Master_Motion_Program_Flag(i)	pshm->P[(12754+i)%MAX_P]
#define	P_Slave_Motion_Program_Flag(i)	pshm->P[(12774+i)%MAX_P]
#define	P_Master_Motion_CycleStop_Flag	pshm->P[12794]
#define	P_OLD_Jog_Speed_Motor(i)	pshm->P[(12795+i)%MAX_P]
#define	P_PLC_08_Program_Ver	pshm->P[12845]
#define	P_Old_PMAC_Commands	pshm->P[12846]
#define	P_Old_PMAC_Status	pshm->P[12847]
#define	P_Old_PMAC_Current_Mode	pshm->P[12848]
#define	P_Mode_Function_State_Machine	pshm->P[12849]
#define	P_PMAC_Commands	pshm->P[12850]
#define	P_Command_Start(i)	pshm->P[(12851+i)%MAX_P]
#define	P_Command_Complete(i)	pshm->P[(12869+i)%MAX_P]
#define	P_Command_Reset(i)	pshm->P[(12887+i)%MAX_P]
#define	P_Command_Hold(i)	pshm->P[(12905+i)%MAX_P]
#define	P_Command_Unhold(i)	pshm->P[(12923+i)%MAX_P]
#define	P_Command_Suspend(i)	pshm->P[(12941+i)%MAX_P]
#define	P_Command_Unsuspend(i)	pshm->P[(12959+i)%MAX_P]
#define	P_Command_Clear(i)	pshm->P[(12977+i)%MAX_P]
#define	P_Command_Stop(i)	pshm->P[(12995+i)%MAX_P]
#define	P_Command_Abort(i)	pshm->P[(13013+i)%MAX_P]
#define	P_Command_Status_Complete(i)	pshm->P[(13031+i)%MAX_P]
#define	P_Command_Mask_Layer(i)	pshm->P[(13049+i)%MAX_P]
#define	P_Command_Process_Type(i)	pshm->P[(13067+i)%MAX_P]
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
#define	P_PMAC_Current_Mode	pshm->P[13085]
#define	P_PMAC_Status	pshm->P[13086]
#define	P_PMAC_Old_Mode	pshm->P[13087]
#define	P_Ready_Tack_Chk_Timer	pshm->P[13088]
#define	P_PLC09_Common_Command_Flag	pshm->P[13089]
#define	P_PLC09_Common_Command_Complete_Bit	pshm->P[13090]
#define	P_PLC09_Common_Execute_Flag	pshm->P[13091]
#define	P_PLC09_Common_Execute_Complete_Bit	pshm->P[13092]
#define	P_PLC09_Status	pshm->P[13093]
#define	P_PLC09_Libraries_Var	pshm->P[13094]
#define	P_Master_Motion_Program_ON_Flag	pshm->P[13095]
#define	P_Master_Motion_Program_ON_Complete_Bit	pshm->P[13096]
#define	P_Master_Motion_Program_OFF_Flag	pshm->P[13097]
#define	P_Master_Motion_Program_OFF_Complete_Bit	pshm->P[13098]
#define	P_Common_Function_Timbase_ON_Flag	pshm->P[13099]
#define	P_Common_Function_Timbase_ON_Complete_Bit	pshm->P[13100]
#define	P_Common_Function_Timbase_OFF_Flag	pshm->P[13101]
#define	P_Common_Function_Timbase_OFF_Complete_Bit	pshm->P[13102]
#define	P_Common_Function_Monitoring_Lamp_OFF_Flag	pshm->P[13103]
#define	P_Common_Function_Monitoring_Lamp_OFF_Complete_Bit	pshm->P[13104]
#define	P_Common_Function_Slave_Motion_Common_Init_Flag	pshm->P[13105]
#define	P_Common_Function_Slave_Motion_Common_Init_Complete_Bit	pshm->P[13106]
#define	P_Common_Function_OlD_Jog_Speed_Save_ON_Flag	pshm->P[13107]
#define	P_Common_Function_OlD_Jog_Speed_Save_ON_Complete_Bit	pshm->P[13108]
#define	P_Auto_Resetting_Sum_Ready_Pos_Check_Flag	pshm->P[13109]
#define	P_Auto_Resetting_Sum_Ready_Pos_Check_Complete_bit	pshm->P[13110]
#define	P_Manual_Resetting_Sum_Ready_Pos_Check_Flag	pshm->P[13111]
#define	P_Manual_Resetting_Sum_Ready_Pos_Check_Complete_bit	pshm->P[13112]
#define	P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Flag	pshm->P[13113]
#define	P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Complete_Bit	pshm->P[13114]
#define	P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Flag	pshm->P[13115]
#define	P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Complete_Bit	pshm->P[13116]
#define	P_Motion_Target_Position_Complete	pshm->P[13117]
#define	P_SM_Auto_Run_Layer_Management	pshm->P[13118]
#define	P_Buffer_Mode_Status_Sequence	pshm->P[13119]
#define	P_SM_Sub_Function_Pause	pshm->P[13120]
#define	P_PLC09_Resetting_Position_Check_State_Machine	pshm->P[13121]
#define	P_PLC09_Resetting_Position_Moving_State_Machine	pshm->P[13122]
#define	P_Sum_Ready_pos_Motor(i)	pshm->P[(13123+i)%MAX_P]
#define	P_SM_Resetting_Pause_Position	pshm->P[13165]
#define	P_20per_Vac_Error_Cycle_Stop_Flag	pshm->P[13166]
#define	P_MNTR_PLC23_ARC_Complete	pshm->P[13167]
#define	P_FUNCTION_PLC13_Sepa_Trigger_Enable	pshm->P[13168]
#define	P_PLC_Recipe_PLC2_Revise_Sepa	pshm->P[13169]
#define	P_Auto_Semi_Init_Status	pshm->P[13170]
#define	P_Auto_Semi_Init_Chk_Bit	pshm->P[13171]
#define	P_Old_PLC_HeartBit_Flag	pshm->P[13172]
#define	P_PLC09_Init_Flag	pshm->P[13173]
#define	P_Check_IDLE_CF_Flag	pshm->P[13174]
#define	P_Check_EXECUTE_CF_Flag	pshm->P[13175]
#define	P_Check_COMPLETING_CF_Flag	pshm->P[13176]
#define	P_Check_COMPLETE_CF_Flag	pshm->P[13177]
#define	P_Check_HOLDING_CF_Flag	pshm->P[13178]
#define	P_Check_HOLD_CF_Flag	pshm->P[13179]
#define	P_Check_UNHOLDING_CF_Flag	pshm->P[13180]
#define	P_Check_SUSPENDING_CF_Flag	pshm->P[13181]
#define	P_Check_SUSPENDED_CF_Flag	pshm->P[13182]
#define	P_Check_UNSUSPENDING_CF_Flag	pshm->P[13183]
#define	P_Check_STOPPED_CF_Flag	pshm->P[13184]
#define	P_Check_ABORTED_CF_Flag	pshm->P[13185]
#define	P_Check_CLEARING_CF_Flag	pshm->P[13186]
#define	P_Check_IDLE_CF	pshm->P[13187]
#define	P_Check_EXECUTE_CF	pshm->P[13188]
#define	P_Check_COMPLETING_CF	pshm->P[13189]
#define	P_Check_COMPLETE_CF	pshm->P[13190]
#define	P_Check_HOLDING_CF	pshm->P[13191]
#define	P_Check_HOLD_CF	pshm->P[13192]
#define	P_Check_UNHOLDING_CF	pshm->P[13193]
#define	P_Check_SUSPENDING_CF	pshm->P[13194]
#define	P_Check_SUSPENDED_CF	pshm->P[13195]
#define	P_Check_UNSUSPENDING_CF	pshm->P[13196]
#define	P_Check_STOPPED_CF	pshm->P[13197]
#define	P_Check_ABORTED_CF	pshm->P[13198]
#define	P_Check_CLEARING_CF	pshm->P[13199]
#define	P_Check_STOPPING_CF	pshm->P[13200]
#define	P_Check_STARTING_CF	pshm->P[13201]
#define	P_Check_RESETTING_CF	pshm->P[13202]
#define	P_Check_STARTTING_CF	pshm->P[13203]
#define	P_Queue_Clear	pshm->P[13204]
#define	P_Resetting_First_Approach_Start_Flag	pshm->P[13205]
#define	P_Resetting_Re_Entry_Step_Count	pshm->P[13206]
#define	P_PLC09_Alarm_Test_Flag	pshm->P[13207]
#define	P_PLC09_Test_Temp	pshm->P[13208]
#define	P_PLC01_STOP_Queue_Complete_Flag	pshm->P[13209]
#define	P_PMAC_All_Home_Cmd	pshm->P[13210]
#define	P_PMAC_All_Home_Status	pshm->P[13211]
#define	P_PMAC_Master_Following_Use_Flag	pshm->P[13212]
#define	PnP_Belt_Waring_Pos	pshm->P[13213]
#define	P_Old_X_PLC_Sync_Heart_Bit	pshm->P[13214]
#define	P_Stack_Heart_Bit_Sync_Flag	pshm->P[13215]
#define	P_Stack_Heart_Bit_Sunc_Complete_Bit	pshm->P[13216]
#define	P_Resetting_Init_Module_RTN	pshm->P[13217]
#define	P_PLC09_MNTR	pshm->P[13218]
#define	P_Unloder_PNP_Home_IL_Pos	pshm->P[13219]
#define	P_ECAT_Slave_Err_Bit	pshm->P[13220]
#define	P_MC_Power_Down_Flag	pshm->P[13221]
#define	P_Old_MC_Power_Down_Flag	pshm->P[13222]
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
#define	P_Modbus_Delay_Timer	pshm->P[13223]
#define	P_Modbus_Connect_Status	pshm->P[13224]
#define	P_Modbus_Reconnect_MNTR	pshm->P[13225]
#define	P_Ecat_Reconn_Chk_Lamp	pshm->P[13226]
#define	P_MC_Reconn_Chk_Lamp	pshm->P[13227]
#define	P_Cathode_2TR_PNP_Avoid_Pos	pshm->P[13228]
#define	P_Anode_2TR_PNP_Avoid_Pos	pshm->P[13229]
#define	P_Cathode_2TR_PNP_Avoid_Value	pshm->P[13230]
#define	P_Anode_2TR_PNP_Avoid_Value	pshm->P[13231]
#define	P_Cathode_1st_Vac_Set_Time	pshm->P[13232]
#define	P_Cathode_2nd_Vac_Set_Time	pshm->P[13233]
#define	P_Cathode_Align_Vac_Set_Time	pshm->P[13234]
#define	P_Cathode_Align_Blow_Set_Time	pshm->P[13235]
#define	P_Anode_1st_Vac_Set_Time	pshm->P[13236]
#define	P_Anode_2nd_Vac_Set_Time	pshm->P[13237]
#define	P_Sepa_Consume_Mode_Thickness_rate	pshm->P[13238]
#define	P_Sepa_Anode_Recipe_Count	pshm->P[13239]
#define	P_Sepa_Cathode_Recipe_Count	pshm->P[13240]
#define	P_Discharge_Cathode_Recipe_Count	pshm->P[13241]
#define	P_Discharge_Anode_Recipe_Count	pshm->P[13242]
#define	P_Suspend_Discharge_Cathode_Counter	pshm->P[13243]
#define	P_Suspend_Discharge_Anode_Counter	pshm->P[13244]
#define	P_Suspend_Discharge_Waiting_Flag	pshm->P[13245]
#define	P_Com_ARC_Sepa_Consume_Mode_Flag	pshm->P[13246]
#define	P_Com_EPC_Sepa_Consume_Mode_Flag	pshm->P[13247]
#define	P_Com_User_Sepa_Consume_Mode_Flag	pshm->P[13248]
#define	P_Com_Dry_Mode_Flag	pshm->P[13249]
#define	P_SM_Recipe_Value_Management	pshm->P[13250]
#define	P_Sepa_Mode_Recipe_Count	pshm->P[13251]
#define	P_Sepa_Mode_EPC_Recipe_Count	pshm->P[13252]
#define	P_ARC_End_Sepa_Recipe_Count	pshm->P[13253]
#define	P_Anode_Align_NG_Array(i)	pshm->P[(13254+i)%MAX_P]
#define	P_Cathode_Align_NG_Array(i)	pshm->P[(13274+i)%MAX_P]
#define	P_Anode_Surface_NG_Array(i)	pshm->P[(13294+i)%MAX_P]
#define	P_Cathode_Surface_NG_Array(i)	pshm->P[(13314+i)%MAX_P]
#define	P_Stack_NG_Array(i)	pshm->P[(13334+i)%MAX_P]
#define	P_Cathode_Align_Continuous_NG_Stop_Select	pshm->P[13354]
#define	P_Anode_Align_Continuous_NG_Stop_Select	pshm->P[13355]
#define	P_Stack_Vision_NG_Enable	pshm->P[13356]
#define	P_Cathode_Surface_Continuous_NG_Stop_Select	pshm->P[13357]
#define	P_Anode_Surface_Continuous_NG_Stop_Select	pshm->P[13358]
#define	P_Anode_Trigger_IO_Test_Vision_PLC_Loop	pshm->P[13359]
#define	P_Anode_Trigger_IO_Test_Motion_Loop	pshm->P[13360]
#define	P_Cathode_Trigger_IO_Test_Vision_PLC_Loop	pshm->P[13361]
#define	P_Cathode_Trigger_IO_Test_Motion_Loop	pshm->P[13362]
#define	P_Stack_Trigger_IO_Test_Vision_PLC_Loop	pshm->P[13363]
#define	P_Stack_Trigger_IO_Test_Motion_Loop	pshm->P[13364]
#define	P_PLC12_Continuous_Buffer_Reset_Flag	pshm->P[13365]
#define	P_Continuous_Call_Align_OK_Flag(i)	pshm->P[(13366+i)%MAX_P]
#define	P_Continuous_Call_Align_NG_Flag(i)	pshm->P[(13368+i)%MAX_P]
#define	P_Continuous_Call_Align_TimeOut_Flag(i)	pshm->P[(13370+i)%MAX_P]
#define	P_Continuous_Call_Surface_OK_Flag(i)	pshm->P[(13372+i)%MAX_P]
#define	P_Continuous_Call_Surface_NG_Flag(i)	pshm->P[(13374+i)%MAX_P]
#define	P_Continuous_Call_Surface_TimeOut_Flag(i)	pshm->P[(13376+i)%MAX_P]
#define	P_Continuous_Call_Stack_Flag(i)	pshm->P[(13378+i)%MAX_P]
#define	P_PLC12_Anode_Sheet_Pick_Up_Flag	pshm->P[13381]
#define	P_PLC12_Cathode_Sheet_Pick_Up_Flag	pshm->P[13382]
#define	P_Hold_Anode_Sheet_Pick_Up_Flag	pshm->P[13383]
#define	P_Hold_Cathode_Sheet_Pick_Up_Flag	pshm->P[13384]
#define	P_Sheet_Interface_Complete_Pos	pshm->P[13385]
#define	P_Anode_Sheet_Interface_Complete_Pos	pshm->P[13386]
#define	P_Cathode_Sheet_Interface_Complete_Pos	pshm->P[13387]
#define	P_Anode_2nd_TR_Maint_Check	pshm->P[13388]
#define	P_Cathode_2nd_TR_Maint_Check	pshm->P[13389]
#define	P_PLC12_Observser_MNTR(i)	pshm->P[(13390+i)%MAX_P]
#define	P_PLC12_Vacuum_MNTR(i)	pshm->P[(13395+i)%MAX_P]
#define	P_Vacuum_Check(i)	pshm->P[(13403+i)%MAX_P]
#define	P_PLC12_Blow_MNTR(i)	pshm->P[(13411+i)%MAX_P]
#define	P_Blow_Check(i)	pshm->P[(13419+i)%MAX_P]
#define	P_PLC12_Vacuum_1st_Cathode_MNTR_Timer	pshm->P[13427]
#define	P_PLC12_Vacuum_2nd_Cathode_MNTR_Timer	pshm->P[13428]
#define	P_PLC12_Vacuum_NG_Cathode_MNTR_Timer	pshm->P[13429]
#define	P_PLC12_Vacuum_Align_Cathode_MNTR_Timer	pshm->P[13430]
#define	P_PLC12_Vacuum_1st_Anode_MNTR_Timer	pshm->P[13431]
#define	P_PLC12_Vacuum_2nd_Anode_MNTR_Timer	pshm->P[13432]
#define	P_PLC12_Vacuum_NG_Anode_MNTR_Timer	pshm->P[13433]
#define	P_PLC12_Vacuum_Align_Anode_MNTR_Timer	pshm->P[13434]
#define	P_PLC12_Vacuum_1st_Cathode_Set_Time	pshm->P[13435]
#define	P_PLC12_Vacuum_2nd_Cathode_Set_Time	pshm->P[13436]
#define	P_PLC12_Vacuum_NG_Cathode_Set_Time	pshm->P[13437]
#define	P_PLC12_Vacuum_Align_Cathode_Set_Time	pshm->P[13438]
#define	P_PLC12_Vacuum_1st_Anode_Set_Time	pshm->P[13439]
#define	P_PLC12_Vacuum_2nd_Anode_Set_Time	pshm->P[13440]
#define	P_PLC12_Vacuum_NG_Anode_Set_Time	pshm->P[13441]
#define	P_PLC12_Vacuum_Align_Anode_Set_Time	pshm->P[13442]
#define	P_PLC12_Vacuum_1st_Cathode_Take_Time(i)	pshm->P[(13443+i)%MAX_P]
#define	P_PLC12_Vacuum_2nd_Cathode_Take_Time(i)	pshm->P[(13448+i)%MAX_P]
#define	P_PLC12_Vacuum_NG_Cathode_Take_Time(i)	pshm->P[(13453+i)%MAX_P]
#define	P_PLC12_Vacuum_Align_Cathode_Take_Time(i)	pshm->P[(13458+i)%MAX_P]
#define	P_PLC12_Vacuum_1st_Anode_Take_Time(i)	pshm->P[(13463+i)%MAX_P]
#define	P_PLC12_Vacuum_2nd_Anode_Take_Time(i)	pshm->P[(13468+i)%MAX_P]
#define	P_PLC12_Vacuum_NG_Anode_Take_Time(i)	pshm->P[(13473+i)%MAX_P]
#define	P_PLC12_Vacuum_Align_Anode_Take_Time(i)	pshm->P[(13478+i)%MAX_P]
#define	P_PLC12_Blow_1st_Cathode_MNTR_Timer	pshm->P[13483]
#define	P_PLC12_Blow_2nd_Cathode_MNTR_Timer	pshm->P[13484]
#define	P_PLC12_Blow_NG_Cathode_MNTR_Timer	pshm->P[13485]
#define	P_PLC12_Blow_Align_Cathode_MNTR_Timer	pshm->P[13486]
#define	P_PLC12_Blow_1st_Anode_MNTR_Timer	pshm->P[13487]
#define	P_PLC12_Blow_2nd_Anode_MNTR_Timer	pshm->P[13488]
#define	P_PLC12_Blow_NG_Anode_MNTR_Timer	pshm->P[13489]
#define	P_PLC12_Blow_Align_Anode_MNTR_Timer	pshm->P[13490]
#define	P_PLC12_Blow_1st_Cathode_Set_Time	pshm->P[13491]
#define	P_PLC12_Blow_2nd_Cathode_Set_Time	pshm->P[13492]
#define	P_PLC12_Blow_NG_Cathode_Set_Time	pshm->P[13493]
#define	P_PLC12_Blow_Align_Cathode_Set_Time	pshm->P[13494]
#define	P_PLC12_Blow_1st_Anode_Set_Time	pshm->P[13495]
#define	P_PLC12_Blow_2nd_Anode_Set_Time	pshm->P[13496]
#define	P_PLC12_Blow_NG_Anode_Set_Time	pshm->P[13497]
#define	P_PLC12_Blow_Align_Anode_Set_Time	pshm->P[13498]
#define	P_PLC12_Blow_1st_Cathode_Take_Time(i)	pshm->P[(13499+i)%MAX_P]
#define	P_PLC12_Blow_2nd_Cathode_Take_Time(i)	pshm->P[(13504+i)%MAX_P]
#define	P_PLC12_Blow_NG_Cathode_Take_Time(i)	pshm->P[(13509+i)%MAX_P]
#define	P_PLC12_Blow_Align_Cathode_Take_Time(i)	pshm->P[(13514+i)%MAX_P]
#define	P_PLC12_Blow_1st_Anode_Take_Time(i)	pshm->P[(13519+i)%MAX_P]
#define	P_PLC12_Blow_2nd_Anode_Take_Time(i)	pshm->P[(13524+i)%MAX_P]
#define	P_PLC12_Blow_NG_Anode_Take_Time(i)	pshm->P[(13529+i)%MAX_P]
#define	P_PLC12_Blow_Align_Anode_Take_Time(i)	pshm->P[(13534+i)%MAX_P]
#define	P_Vacuum_Reentry_Bit	pshm->P[13539]
#define	P_Blow_Reentry_Bit	pshm->P[13540]
#define	P_Status_arry(i)	pshm->P[(13541+i)%MAX_P]
#define	P_Queue_arry(i)	pshm->P[(13561+i)%MAX_P]
#define	P_Step_arry(i)	pshm->P[(13581+i)%MAX_P]
#define	P_Index_arry(i)	pshm->P[(13601+i)%MAX_P]
#define	P_top	pshm->P[13621]
#define	P_Queue_stack_top	pshm->P[13622]
#define	P_Step_stack_top	pshm->P[13623]
#define	P_Index_stack_top	pshm->P[13624]
#define	P_Status_stack_top	pshm->P[13625]
#define	NN_Step	pshm->P[13626]
#define	NN_Index	pshm->P[13627]
#define	P_PLC_Observser_MNTR(i)	pshm->P[(13628+i)%MAX_P]
#define	P_PLC12_Frist	pshm->P[13633]
#define	P_SM_Auto_Run_Status_Management	pshm->P[13634]
#define	P_SM_Status_Main_Memory_Management	pshm->P[13635]
#define	P_SM_Cell_Memory_Management	pshm->P[13636]
#define	P_Test_Vacuum_Timer(i)	pshm->P[(13637+i)%MAX_P]
#define	P_Test_Blow_Timer(i)	pshm->P[(13645+i)%MAX_P]
#define	P_Vac_Test_Set_Time(i)	pshm->P[(13653+i)%MAX_P]
#define	P_Blow_Test_Set_Time(i)	pshm->P[(13661+i)%MAX_P]
#define	P_PLC12_Vacuum_Unit_Data	pshm->P[13669]
#define	P_PLC12_Blow_Unit_Data	pshm->P[13670]
#define	P_Stack_Algorithme_Cmd_Event_Status	pshm->P[13671]
#define	P_PLC12_vacuum_Event_Status	pshm->P[13672]
#define	P_PLC12_Blow_Event_status	pshm->P[13673]
#define	P_PLC12_vacuum_DIO_Observer_Status	pshm->P[13674]
#define	P_PLC12_Blow_DIO_Observer_Status	pshm->P[13675]
#define	P_Resetting_Vacuum_MNTR_State_Machine	pshm->P[13676]
#define	P_Heart_Bit_Time	pshm->P[13677]
#define	P_Dancer_Angle_Alarm_Timer_Flag	pshm->P[13678]
#define	P_Dancer_Angle_Alarm_Check_Timer	pshm->P[13679]
#define	P_BTN_LED_LAMP	pshm->P[13680]
#define	P_Old_BTN_LED_LAMP	pshm->P[13681]
#define	P_PLC_TO_PMAC_Work_Confirm_Operation_Cnt	pshm->P[13682]
#define	P_VISION_TO_PMAC_Work_Confirm_Operation_Ack_Cnt	pshm->P[13683]
#define	P_Ca_AT_Retry_Cal_Move_Complete	pshm->P[13684]
#define	P_An_AT_Retry_Cal_Move_Complete	pshm->P[13685]
#define	P_Ca_AT_Retry_Cal_Cnt	pshm->P[13686]
#define	P_An_AT_Retry_Cal_Cnt	pshm->P[13687]
#define	P_Ca_AT_Retry_Cal_Complete	pshm->P[13688]
#define	P_An_AT_Retry_Cal_Complete	pshm->P[13689]
#define	P_An_AT_Retry_Cal_Pass	pshm->P[13690]
#define	P_Ca_AT_Retry_Cal_Pass	pshm->P[13691]
#define	P_Ca_Picker_T_Turn_Cnt_Flag	pshm->P[13692]
#define	P_Ca_Picker_T_Turn_Cnt	pshm->P[13693]
#define	P_Ca_Picker_T_Home_Type	pshm->P[13694]
#define	P_An_Picker_T_Turn_Cnt_Flag	pshm->P[13695]
#define	P_An_Picker_T_Turn_Cnt	pshm->P[13696]
#define	P_An_Picker_T_Home_Type	pshm->P[13697]
#define	P_Flag_Vac_Status_Initialize	pshm->P[13698]
#define	P_SM_Vac_Initialize	pshm->P[13699]
#define	P_Flag_Anode_1st_Vac_OFF	pshm->P[13700]
#define	P_Flag_Anode_AT_Vac_OFF	pshm->P[13701]
#define	P_Flag_Anode_2nd_Vac_OFF	pshm->P[13702]
#define	P_Flag_Anode_NG_Vac_OFF	pshm->P[13703]
#define	P_Flag_Cathode_1st_Vac_OFF	pshm->P[13704]
#define	P_Flag_Cathode_AT_Vac_OFF	pshm->P[13705]
#define	P_Flag_Cathode_2nd_Vac_OFF	pshm->P[13706]
#define	P_Flag_Cathode_NG_Vac_OFF	pshm->P[13707]
#define	P_Flag_Anode_1st_Vac_Initial_Alarm	pshm->P[13708]
#define	P_Flag_Anode_AT_Vac_Initial_Alarm	pshm->P[13709]
#define	P_Flag_Anode_2nd_Vac_Initial_Alarm	pshm->P[13710]
#define	P_Flag_Anode_NG_Vac_Initial_Alarm	pshm->P[13711]
#define	P_Flag_Cathode_1st_Vac_Initial_Alarm	pshm->P[13712]
#define	P_Flag_Cathode_AT_Vac_Initial_Alarm	pshm->P[13713]
#define	P_Flag_Cathode_2nd_Vac_Initial_Alarm	pshm->P[13714]
#define	P_Flag_Cathode_NG_Vac_Initial_Alarm	pshm->P[13715]
#define	P_Middle_Discharge_Ignore_Total_Count	pshm->P[13716]
#define	P_Middle_Discharge_Ignore_Stack_Count	pshm->P[13717]
#define	P_Middle_Discharge_Ignore_ON_Signal	pshm->P[13718]
#define	P_Middle_Discharge_Ignore_OFF_Signal	pshm->P[13719]
#define	P_Middle_Discharge_Ignore_Cell_Count	pshm->P[13720]
#define	P_ARC_Middle_Discharge_Ignore_Vision_Check	pshm->P[13721]
#define	P_ARC_Middle_Discharge_Ignore_ON_Flag	pshm->P[13722]
#define	P_Middle_Discharge_Ignore_User_Sepa_Mode_Check	pshm->P[13723]
#define	P_Zero_Angle(i)	pshm->P[(13724+i)%MAX_P]
#define	P_Zero_Length(i)	pshm->P[(13749+i)%MAX_P]
#define	P_Homeoffset_Change_Flag(i)	pshm->P[(13774+i)%MAX_P]
#define	P_Cal_Distance(i)	pshm->P[(13799+i)%MAX_P]
#define	P_Cal_Denominator(i)	pshm->P[(13804+i)%MAX_P]
#define	P_Cal_Numerator(i)	pshm->P[(13809+i)%MAX_P]
#define	P_Cal_Dif_Deg(i)	pshm->P[(13814+i)%MAX_P]
#define	P_Vac_Door_Open_Clear(i)	pshm->P[(13819+i)%MAX_P]
#define	P_Flag_Sepa_Stack_Mode_CHK	pshm->P[13832]
#define	P_Read_Timer_S(i)	pshm->P[(13833+i)%MAX_P]
#define	P_Write_Timer_S(i)	pshm->P[(13842+i)%MAX_P]
#define	P_Interval_Read_S(i)	pshm->P[(13851+i)%MAX_P]
#define	P_Interval_Write_S(i)	pshm->P[(13860+i)%MAX_P]
#define	P_UI_Jog_Vel_M(i)	pshm->P[(13869+i)%MAX_P]
#define	P_Initialize_Read_Excom_Variables_Flag	pshm->P[13919]
#define	P_Old_X_Read_Count_S(i)	pshm->P[(13920+i)%MAX_P]
#define	P_Cathode_Clamp_MC_Cylinder_Count	pshm->P[13929]
#define	P_Cathode_Clamp_OP_Cylinder_Count	pshm->P[13930]
#define	P_Anode_Clamp_MC_Cylinder_Count	pshm->P[13931]
#define	P_Anode_Clamp_OP_Cylinder_Count	pshm->P[13932]
#define	P_Cathode_1ST_TR_Cylinder_Count	pshm->P[8003]
#define	P_Anode_1ST_TR_Cylinder_Count	pshm->P[8004]
#define	P_BTN_Cathode_Clamp_inside_Machine_Cylinder_Count_Clear	pshm->P[13933]
#define	P_BTN_Cathode_Clamp_Middle_Cylinder_Count_Clear	pshm->P[13934]
#define	P_BTN_Cathode_Clamp_outside_Machine_Cylinder_Count_Clear	pshm->P[13935]
#define	P_BTN_Anode_Clamp_inside_Machine_Cylinder_Count_Clear	pshm->P[13936]
#define	P_BTN_Anode_Clamp_Middle_Cylinder_Count_Clear	pshm->P[13937]
#define	P_BTN_Anode_Clamp_outside_Machine_Cylinder_Count_Clear	pshm->P[13938]
#define	P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear	pshm->P[13939]
#define	P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear_Old	pshm->P[13940]
#define	P_BTN_Anode_1ST_TR_Cylinder_Count_Clear	pshm->P[13941]
#define	P_BTN_Anode_1ST_TR_Cylinder_Count_Clear_Old	pshm->P[13942]
#define	P_X_BTN_Manual_1(i)	pshm->P[(13943+i)%MAX_P]
#define	P_X_BTN_Manual_2(i)	pshm->P[(14063+i)%MAX_P]
#define	P_X_BTN_Manual_3(i)	pshm->P[(14183+i)%MAX_P]
#define	P_Home_InterLock_M(i)	pshm->P[(14303+i)%MAX_P]
#define	P_Status_BTN_Manual_1(i)	pshm->P[(14353+i)%MAX_P]
#define	P_Status_BTN_Manual_2(i)	pshm->P[(14473+i)%MAX_P]
#define	P_Status_BTN_Manual_Interlock_1(i)	pshm->P[(14593+i)%MAX_P]
#define	P_Status_BTN_Manual_Interlock_2(i)	pshm->P[(14713+i)%MAX_P]
#define	P_Status_BTN_Manual_Interlock_3(i)	pshm->P[(14833+i)%MAX_P]
#define	P_Mode_Run_Enable_Flag(i)	pshm->P[(14953+i)%MAX_P]
#define	P_RECIPE_PLC27_Manual_Interval	pshm->P[14958]
#define	P_RECIPE_PLC27_Auto_Interval	pshm->P[14959]
#define	P_MNTR_PLC4_Vision_Result(i)	pshm->P[(14960+i)%MAX_P]
#define	P_PNP_Vac_Mode_Run_Enable_Flag(i)	pshm->P[(15161+i)%MAX_P]
#define	P_Recipe_Speed_Value	pshm->P[15166]
#define	P_Slave6_Target_X_For_Cell_Out	pshm->P[15167]
#define	P_HCK_Step_MNTR(i)	pshm->P[(15168+i)%MAX_P]
#define	P_Axis_Home_Pos(i)	pshm->P[(15218+i)%MAX_P]
#define	P_Axis_Ready_Pos(i)	pshm->P[(15268+i)%MAX_P]
#define	P_PMAC_Homing_CHK(i)	pshm->P[(15318+i)%MAX_P]
#define	P_Poistion_error	pshm->P[15368]
#define	P_Home_Command(i)	pshm->P[(15369+i)%MAX_P]
#define	P_Recipe_Count_Num	pshm->P[15419]
#define	L_Motor_Status_Update_Interval	pshm->P[15420]
#define	L_Motor_Recipe_Update_Interval	pshm->P[15421]
#define	P_UI_Servo_On_Off	pshm->P[15422]
#define	P_Old_BTN_Servo_On_Off_M(i)	pshm->P[(15423+i)%MAX_P]
#define	P_Peak_Load_Ratio_M(i)	pshm->P[(15456+i)%MAX_P]
#define	P_Chk_Current_Jog_Sel(i)	pshm->P[(15489+i)%MAX_P]
#define	P_Jog_Sel_Count	pshm->P[15522]
#define	P_Recipe_POS_Interock_Num_Bit(i)	pshm->P[(15523+i)%MAX_P]
#define	P_Recipe_VEL(i)	pshm->P[(15556+i)%MAX_P]
#define	P_Recipe_POS(i)	pshm->P[(15567+i)%MAX_P]
#define	P_BTN_Servo_On_Off_M(i)	pshm->P[(15578+i)%MAX_P]
#define	P_BTN_Home_M(i)	pshm->P[(15611+i)%MAX_P]
#define	P_BTN_Jog_Stop_M(i)	pshm->P[(15644+i)%MAX_P]
#define	P_BTN_Recipe_POS_RUN_M(i)	pshm->P[(15677+i)%MAX_P]
#define	P_Recipe_POS_Flag_M(i)	pshm->P[(15710+i)%MAX_P]
#define	P_BTN_Jog_INC_M(i)	pshm->P[(15743+i)%MAX_P]
#define	P_BTN_JOG_ABS_M(i)	pshm->P[(15776+i)%MAX_P]
#define	P_User_Jog_Distance	pshm->P[15809]
#define	P_Unit_Command(i)	pshm->P[(15810+i)%MAX_P]
#define	P_Unit_State_Machine(i)	pshm->P[(15910+i)%MAX_P]
#define	P_Status_BTN_Manual_3(i)	pshm->P[(16010+i)%MAX_P]
#define	P_Chk_Current_BTN_Sel(i)	pshm->P[(16110+i)%MAX_P]
#define	P_BTN_Sel_Count	pshm->P[16160]
#define	P_PC_BTN_No	pshm->P[16161]
#define	P_BTN_Interlock_Update_Interval	pshm->P[16162]
#define	P_Align_Table_Status_Update_Interval	pshm->P[16163]
#define	P_Jelly_Roll_Total_Count_Old	pshm->P[16164]
#define	P_Old_m4120	pshm->P[16165]
#define	P_Old_m4121	pshm->P[16166]
#define	P_Old_m4122	pshm->P[16167]
#define	P_Old_m4123	pshm->P[16168]
#define	P_Linear_Encoder_Pos_Check_Flag(i)	pshm->P[(16169+i)%MAX_P]
#define	P_Linear_Encoder_Pos(i)	pshm->P[(16174+i)%MAX_P]
#define	P_Status_Linear_Encoder_HomeZero(i)	pshm->P[(16179+i)%MAX_P]
#define	P_Command_Linear_Encoder_HomeZero(i)	pshm->P[(16184+i)%MAX_P]
#define	P_Flag_Linear_Enc_Homezero_Complete_M17	pshm->P[16189]
#define	P_Flag_Linear_Enc_Homezero_Complete_M18	pshm->P[16190]
#define	P_Flag_Linear_Enc_Homezero_Complete_M19	pshm->P[16191]
#define	P_Flag_Linear_Enc_Homezero_Complete_M20	pshm->P[16192]
#define	P_CMD_Linear_ENC_Homezero_M17	pshm->P[16193]
#define	P_CMD_Linear_ENC_Homezero_M18	pshm->P[16194]
#define	P_CMD_Linear_ENC_Homezero_M19	pshm->P[16195]
#define	P_CMD_Linear_ENC_Homezero_M20	pshm->P[16196]
#define	P_OLD_Home_Offset(i)	pshm->P[(16197+i)%MAX_P]
#define	P_RECIPE_PLC27_Alltime_Interval	pshm->P[16227]
#define	P_Manual_Memory_Tower_Timer	pshm->P[16228]
#define	P_Memory_Tower_Interval	pshm->P[16229]
#define	P_PLC_14_Status_Cycle_Stop_Flag	pshm->P[16230]
#define	P_Cathode_AlignTable_Cleaning_Pos_Status_Machine	pshm->P[16231]
#define	P_Anode_AlignTable_Cleaning_Pos_Status_Machine	pshm->P[16232]
#define	P_Status_Cathode_AlignTable_Cleaning_Pos	pshm->P[16233]
#define	P_Status_Anode_AlignTable_Cleaning_Pos	pshm->P[16234]
#define	P_CMD_Cathode_AlignTable_Cleaning_Pos	pshm->P[16235]
#define	P_CMD_Anode_AlignTable_Cleaning_Pos	pshm->P[16236]
#define	P_Cathode_2nd_pnp_Cleaning_Mode_Pos	pshm->P[16237]
#define	P_Anode_2nd_pnp_Cleaning_Mode_Pos	pshm->P[16238]
#define	P_Interlock_Test	pshm->P[16239]
#define	P_PNP_Picker_T_Pos	pshm->P[16240]
#define	P_NG_PNP_Pos	pshm->P[16241]
#define	M_Old_X_BTN_Machine_READY	pshm->P[16242]
#define	M_Old_X_BTN_Machine_START	pshm->P[16243]
#define	M_Old_X_BTN_Machine_STOP	pshm->P[16244]
#define	M_Old_X_BTN_Machine_RESET	pshm->P[16245]
#define	M_Old_X_BTN_Machine_MODE	pshm->P[16246]
#define	P_BTN_Motor_Pos_Check_RTN	pshm->P[16247]
#define	P_BTN_Memory_Tower_Check_Bit	pshm->P[16248]
#define	P_PMAC_Status_IDLE_Motor_Not_Pos	pshm->P[16249]
#define	P_PMAC_Status_IDLE_Motor_Pos	pshm->P[16250]
#define	P_BTN_Motor_Pos_Check_Monitor	pshm->P[16251]
#define	P_PackML_Auto_Stop_Bit	pshm->P[16252]
#define	P_BTN_IDLE_Motor_Not_Pos	pshm->P[16253]
#define	M_X_BTN_Machine_Mode	pshm->P[16254]
#define	M_Old_X_BTN_Machine_Mode	pshm->P[16255]
#define	P_Lamp_Blinking_Timer	pshm->P[16256]
#define	P_BTN_Ready_Lamp	pshm->P[16257]
#define	P_BTN_Start_Lamp	pshm->P[16258]
#define	P_BTN_Stop_Lamp	pshm->P[16259]
#define	P_ARC_Name_Plate_Passive_Status	pshm->P[16260]
#define	P_ARC_Passive_Status	pshm->P[16261]
#define	P_NP_Spool_Number	pshm->P[16262]
#define	P_ARC_Page_On	pshm->P[16263]
#define	P_ARC_NP_Upper_Timer	pshm->P[16264]
#define	P_ARC_Upper_Ready	pshm->P[16265]
#define	P_ARC_NP_Upper_3rd_Step_Toggle_Variable	pshm->P[16266]
#define	P_ARC_NP_Upper_7th_Step_Variable	pshm->P[16267]
#define	P_ARC_NP_Upper_7th_Step_Edge_Variable	pshm->P[16268]
#define	P_ARC_NP_Upper_Rot_ReRot_Blinking_Bit	pshm->P[16269]
#define	P_ARC_NP_Lower_Timer	pshm->P[16270]
#define	P_ARC_Lower_Ready	pshm->P[16271]
#define	P_ARC_NP_Lower_3rd_Step_Toggle_Variable	pshm->P[16272]
#define	P_ARC_NP_Lower_7th_Step_Variable	pshm->P[16273]
#define	P_ARC_NP_Lower_7th_Step_Edge_Variable	pshm->P[16274]
#define	P_ARC_NP_Lower_Rot_ReRot_Blinking_Bit	pshm->P[16275]
#define	M_Old_X_ARC_NP_Ready	pshm->P[16276]
#define	M_Old_X_ARC_NP_Unwinder_Rotation	pshm->P[16277]
#define	M_Old_X_ARC_NP_Unwinder_Re_Rotation	pshm->P[16278]
#define	P_Status_Clear_Flag	pshm->P[16279]
#define	P_Status_Clear_RTN	pshm->P[16280]
#define	P_MSA_BTN_On	pshm->P[16281]
#define	P_Align_Take_Off_BTN_ON	pshm->P[16282]
#define	P_ARC_NP_Upper_Ready_Check_Bit	pshm->P[16283]
#define	P_ARC_NP_Lower_Ready_Check_Bit	pshm->P[16284]
#define	P_PLC13_Cycle_Stop_Return_Array(i)	pshm->P[(16285+i)%MAX_P]
#define	P_Stopping_CycleStop_Status	pshm->P[16385]
#define	P_Stopping_CycleStop_Seq_Index	pshm->P[16386]
#define	P_Stopping_CycleStop_Precondition_Seq_Index	pshm->P[16387]
#define	P_Stopping_CycleStop_Module_Status	pshm->P[16388]
#define	P_Stopping_CycleStop_Cmd	pshm->P[16389]
#define	P_Stopping_CycleStop_State_Machine	pshm->P[16390]
#define	P_Stopping_CycleStop_Act_State_Machine(i)	pshm->P[(16391+i)%MAX_P]
#define	P_Module_Cycle_Stop_Act_State_Machine_Array(i)	pshm->P[(16411+i)%MAX_P]
#define	P_Module_Cycle_Stop_Act_Complete_Bit(i)	pshm->P[(16431+i)%MAX_P]
#define	P_Module_Cycle_Stop_Act_Command_Array(i)	pshm->P[(16451+i)%MAX_P]
#define	P_OLD_Module_Cycle_Stop_Act_Command_Array(i)	pshm->P[(16471+i)%MAX_P]
#define	P_Buffer_Seqdata_CycleStop_Array(i)	pshm->P[(16491+i)%MAX_P]
#define	P_Final_Roll_Cathode_Pos_Status	pshm->P[16511]
#define	P_Sheet_Paper_FWD_Pos_Status	pshm->P[16512]
#define	P_Final_Roll_Vision_Pos_Status	pshm->P[16513]
#define	P_Cathode_Clamp_ON_Status	pshm->P[16514]
#define	P_Anode_Clamp_ON_Status	pshm->P[16515]
#define	P_Anode_Clamp_OFF_Status	pshm->P[16516]
#define	P_Partition_Up_Flag	pshm->P[16517]
#define	P_Partition_Down_Flag	pshm->P[16518]
#define	P_Partition_Avoid_Flag	pshm->P[16519]
#define	P_Partition_Avoid_Z_Speed	pshm->P[16520]
#define	P_Partition_Avoid_X_Speed	pshm->P[16521]
#define	P_Partition_Avoid_T_Speed	pshm->P[16522]
#define	P_Partition_Avoid_2nd_T_Pos	pshm->P[16523]
#define	P_Partition_Step_Flag	pshm->P[16524]
#define	P_Partition_1st_Avoid_Offset	pshm->P[16525]
#define	P_Partition_Picker_Avoid_Offset	pshm->P[16526]
#define	P_Partition_Avoid_Check	pshm->P[16527]
#define	P_Tact_Time_Timer(i)	pshm->P[(16528+i)%MAX_P]
#define	P_Tack_Time_Save_Time(i)	pshm->P[(16568+i)%MAX_P]
#define	P_Anode_NG_PNP_Tact_Time_Start	pshm->P[16608]
#define	P_Cathode_NG_PNP_Tact_Time_Start	pshm->P[16609]
#define	P_Anode_NG_PNP_Tact_Time_End	pshm->P[16610]
#define	P_Cathode_NG_PNP_Tact_Time_End	pshm->P[16611]
#define	P_Tact_Time_Stack_Array(i)	pshm->P[(16612+i)%MAX_P]
#define	P_Tact_Time_Discharge_Array(i)	pshm->P[(16622+i)%MAX_P]
#define	P_Tact_Time_1st_Unloader_Array(i)	pshm->P[(16632+i)%MAX_P]
#define	P_Tact_Time_Sepa_ARC_Array(i)	pshm->P[(16642+i)%MAX_P]
#define	P_Tact_Time_Final_Roll_Array(i)	pshm->P[(16652+i)%MAX_P]
#define	P_Tact_Time_Cathode_1st_PNP_Array(i)	pshm->P[(16662+i)%MAX_P]
#define	P_Tact_Time_Cathode_Align_Array(i)	pshm->P[(16672+i)%MAX_P]
#define	P_Tact_Time_Cathode_2nd_PNP_Array(i)	pshm->P[(16682+i)%MAX_P]
#define	P_Tact_Time_Cathode_Clamp_Array(i)	pshm->P[(16692+i)%MAX_P]
#define	P_Tact_Time_Anode_1st_PNP_Array(i)	pshm->P[(16702+i)%MAX_P]
#define	P_Tact_Time_Anode_Align_Array(i)	pshm->P[(16712+i)%MAX_P]
#define	P_Tact_Time_Anode_2nd_PNP_Array(i)	pshm->P[(16722+i)%MAX_P]
#define	P_Tact_Time_Anode_Clamp_Array(i)	pshm->P[(16732+i)%MAX_P]
#define	P_Tact_Time_Cathode_1st_PNP_Vac_Array(i)	pshm->P[(16742+i)%MAX_P]
#define	P_Tact_Time_Cathode_Align_PNP_Vac_Array(i)	pshm->P[(16752+i)%MAX_P]
#define	P_Tact_Time_Cathode_2nd_PNP_Vac_Array(i)	pshm->P[(16762+i)%MAX_P]
#define	P_Tact_Time_Anode_1st_PNP_Vac_Array(i)	pshm->P[(16772+i)%MAX_P]
#define	P_Tact_Time_Anode_Align_PNP_Vac_Array(i)	pshm->P[(16782+i)%MAX_P]
#define	P_Tact_Time_Anode_2nd_PNP_Vac_Array(i)	pshm->P[(16792+i)%MAX_P]
#define	P_Tact_Time_Final_Roller_Clamp	pshm->P[16802]
#define	P_Tact_Time_Final_Roller_Unclamp	pshm->P[16803]
#define	P_Tact_Time_Stack_Table_Down	pshm->P[16804]
#define	P_Tact_Time_Stack_Table_Up	pshm->P[16805]
#define	P_Tact_Time_Sepa_Cutting_Down	pshm->P[16806]
#define	P_Tact_Time_Sepa_Cutting_Up	pshm->P[16807]
#define	P_Tact_Time_ARC_Upper_Plate_Up	pshm->P[16808]
#define	P_Tact_Time_ARC_Upper_Plate_Down	pshm->P[16809]
#define	P_Tact_Time_ARC_Upper_Tilting_On	pshm->P[16810]
#define	P_Tact_Time_ARC_Upper_Tilting_Off	pshm->P[16811]
#define	P_Tact_Time_ARC_Upper_Cutter_Fwd	pshm->P[16812]
#define	P_Tact_Time_ARC_Upper_Cutter_Bwd	pshm->P[16813]
#define	P_Tact_Time_ARC_Upper_Clamp_On	pshm->P[16814]
#define	P_Tact_Time_ARC_Upper_Clamp_Off	pshm->P[16815]
#define	P_Tact_Time_ARC_Lower_Plate_Up	pshm->P[16816]
#define	P_Tact_Time_ARC_Lower_Plate_Down	pshm->P[16817]
#define	P_Tact_Time_ARC_Lower_Tilting_On	pshm->P[16818]
#define	P_Tact_Time_ARC_Lower_Tilting_Off	pshm->P[16819]
#define	P_Tact_Time_ARC_Lower_Cutter_Fwd	pshm->P[16820]
#define	P_Tact_Time_ARC_Lower_Cutter_Bwd	pshm->P[16821]
#define	P_Tact_Time_ARC_Lower_Clamp_On	pshm->P[16822]
#define	P_Tact_Time_ARC_Lower_Clamp_Off	pshm->P[16823]
#define	P_Tact_Time_Save_Final_Roller_Clamp_Time	pshm->P[16824]
#define	P_Tact_Time_Save_Final_Roller_Unclamp_Time	pshm->P[16825]
#define	P_Tact_Time_Save_Stack_Table_Down_Time	pshm->P[16826]
#define	P_Tact_Time_Save_Stack_Table_Up_Time	pshm->P[16827]
#define	P_Tact_Time_Save_Sepa_Cutting_Down_Time	pshm->P[16828]
#define	P_Tact_Time_Save_Sepa_Cutting_Up_Time	pshm->P[16829]
#define	P_Tact_Time_Save_ARC_Upper_Plate_Up_Time	pshm->P[16830]
#define	P_Tact_Time_Save_ARC_Upper_Plate_Down_Time	pshm->P[16831]
#define	P_Tact_Time_Save_ARC_Upper_Tilting_On_Time	pshm->P[16832]
#define	P_Tact_Time_Save_ARC_Upper_Tilting_Off_Time	pshm->P[16833]
#define	P_Tact_Time_Save_ARC_Upper_Cutter_Fwd_Time	pshm->P[16834]
#define	P_Tact_Time_Save_ARC_Upper_Cutter_Bwd_Time	pshm->P[16835]
#define	P_Tact_Time_Save_ARC_Upper_Clamp_On_Time	pshm->P[16836]
#define	P_Tact_Time_Save_ARC_Upper_Clamp_Off_Time	pshm->P[16837]
#define	P_Tact_Time_Save_ARC_Lower_Plate_Up_Time	pshm->P[16838]
#define	P_Tact_Time_Save_ARC_Lower_Plate_Down_Time	pshm->P[16839]
#define	P_Tact_Time_Save_ARC_Lower_Tilting_On_Time	pshm->P[16840]
#define	P_Tact_Time_Save_ARC_Lower_Tilting_Off_Time	pshm->P[16841]
#define	P_Tact_Time_Save_ARC_Lower_Cutter_Fwd_Time	pshm->P[16842]
#define	P_Tact_Time_Save_ARC_Lower_Cutter_Bwd_Time	pshm->P[16843]
#define	P_Tact_Time_Save_ARC_Lower_Clamp_On_Time	pshm->P[16844]
#define	P_Tact_Time_Save_ARC_Lower_Clamp_Off_Time	pshm->P[16845]
#define	P_Tact_Time_Check(i)	pshm->P[(16846+i)%MAX_P]
#define	P_Old_Tact_Time_Check(i)	pshm->P[(16886+i)%MAX_P]
#define	P_Tact_Time_Head_Address(i)	pshm->P[(16926+i)%MAX_P]
#define	P_Tact_Time_Array_Init	pshm->P[16966]
#define	P_Last_Run_To_Discharge_Tact_Timer	pshm->P[16967]
#define	P_Last_Run_To_Discharge_Tact_Time	pshm->P[16968]
#define	P_Master_Trigger_Sync_Tact_Timer	pshm->P[16969]
#define	P_Master_Trigger_Sync_Tact_Time	pshm->P[16970]
#define	P_Vision_First_Sepa_Stack_Align_OK_PMAC_Flag	pshm->P[16971]
#define	P_PLC18_EPC_Retry_Mode_Time_Use_Flag	pshm->P[16972]
#define	P_PLC18_Vision_EPC_Correction_Request_Old	pshm->P[16973]
#define	P_PLC18_EPC_Moving_Flag	pshm->P[16974]
#define	P_PLC18_EPC_Moving_Status	pshm->P[16975]
#define	P_PLC18_EPC_Move_State_Machine	pshm->P[16976]
#define	P_PLC18_EPC_Move_Status	pshm->P[16977]
#define	P_PLC18_EPC_inspection_Time	pshm->P[16978]
#define	P_EPC_Insp_Time	pshm->P[16979]
#define	P_EPC_Correction_Time	pshm->P[16980]
#define	P_TEST_Max_EPC_Sensor_Value_um	pshm->P[16981]
#define	P_PLC18_EPC_Moving_Timer	pshm->P[16982]
#define	P_EPC_MNTR_VAR(i)	pshm->P[(16983+i)%MAX_P]
#define	P_EPC_Axis_Target_Y	pshm->P[16993]
#define	P_Com_After_Sepa_Mode_Status	pshm->P[16994]
#define	P_PLC18_PLC_to_PMAC_Correction_Value	pshm->P[16995]
#define	P_PLC_EPC_Status	pshm->P[16996]
#define	P_EPC_Retry_Over_Alarm_Flag	pshm->P[16997]
#define	P_ARC_EPC_Vision_Value_Apply_Bit	pshm->P[16998]
#define	P_ARC_EPC_Vision_Value_Apply_Flag	pshm->P[16999]
#define	P_ARC_EPC_Vision_Value_Apply_State_Machine	pshm->P[17000]
#define	P_ARC_EPC_Vision_Value_Apply_Timer	pshm->P[17001]
#define	P_ARC_EPC_Vision_Value_Apply_Time	pshm->P[17002]
#define	P_AH_Home_Status	pshm->P[17003]
#define	P_Resetting_All_Home_Command	pshm->P[17004]
#define	P_Homing_Alarm_Time	pshm->P[17005]
#define	P_Home_Check_Arry(i)	pshm->P[(17006+i)%MAX_P]
#define	P_All_Home_Stop_Cmd	pshm->P[17056]
#define	P_Home_First_Move	pshm->P[17057]
#define	P_PWM_Phasing_Start(i)	pshm->P[(17058+i)%MAX_P]
#define	P_PWM_Status(i)	pshm->P[(17063+i)%MAX_P]
#define	P_PWM_State_Machine(i)	pshm->P[(17068+i)%MAX_P]
#define	P_AH_Seq_arr(i)	pshm->P[(17073+i)%MAX_P]
#define	P_DD_M_Home_ABS_Pos(i)	pshm->P[(17088+i)%MAX_P]
#define	P_AH_Indvi_rtn(i)	pshm->P[(17093+i)%MAX_P]
#define	P_DD_M_Home_Pos_Flag	pshm->P[17144]
#define	P_WAIT_INDEX	pshm->P[17145]
#define	P_Home_Check_Arry1(i)	pshm->P[(17146+i)%MAX_P]
#define	P_FR_Cmd_Check_Flag	pshm->P[17196]
#define	P_PV_Separator_Dancer_Pressure	pshm->P[17197]
#define	P_PV_Cathode_Clamp_Pressure	pshm->P[17198]
#define	P_PV_Anoode_Clamp_Pressure	pshm->P[17199]
#define	P_PV_Cathode_Final_Roller_X_Axis	pshm->P[17200]
#define	P_PV_Anode_Final_Roller_X_Axis	pshm->P[17201]
#define	P_PV_Cathode_Clamp_ON_Y1_Axis_Pos	pshm->P[17202]
#define	P_PV_Cathode_Clamp_ON_Y2_Axis_Pos	pshm->P[17203]
#define	P_PV_Cathode_Clamp_ON_Z1_Axis_Pos	pshm->P[17204]
#define	P_PV_Cathode_Clamp_ON_Z2_Axis_Pos	pshm->P[17205]
#define	P_PV_Anode_Clamp_ON_Y1_Axis_Pos	pshm->P[17206]
#define	P_PV_Anode_Clamp_ON_Y2_Axis_Pos	pshm->P[17207]
#define	P_PV_Anode_Clamp_ON_Z1_Axis_Pos	pshm->P[17208]
#define	P_PV_Anode_Clamp_ON_Z2_Axis_Pos	pshm->P[17209]
#define	P_PV_Cathode_2th_AT_T_Axis_Pos	pshm->P[17210]
#define	P_PV_Cathode_2th_ST_T_Axis_Pos	pshm->P[17211]
#define	P_PV_Cathode_2th_AT_Z_Axis_Pos	pshm->P[17212]
#define	P_PV_Cathode_2th_ST_Z_Axis_Pos	pshm->P[17213]
#define	P_PV_Anode_2th_AT_T_Axis_Pos	pshm->P[17214]
#define	P_PV_Anode_2th_ST_T_Axis_Pos	pshm->P[17215]
#define	P_PV_Anode_2th_AT_Z_Axis_Pos	pshm->P[17216]
#define	P_PV_Anode_2th_ST_Z_Axis_Pos	pshm->P[17217]
#define	P_PV_Cathode_1th_Ready_T_Axis_Pos	pshm->P[17218]
#define	P_PV_Cathode_1th_CV_T_Axis_Pos	pshm->P[17219]
#define	P_PV_Cathode_1th_AT_T_Axis_Pos	pshm->P[17220]
#define	P_PV_Cathode_1th_Ready_Z_Axis_Pos	pshm->P[17221]
#define	P_PV_Cathode_1th_CV_Z_Axis_Pos	pshm->P[17222]
#define	P_PV_Cathode_1th_AT_Z_Axis_Pos	pshm->P[17223]
#define	P_PV_Anode_1th_Ready_T_Axis_Pos	pshm->P[17224]
#define	P_PV_Anode_1th_CV_T_Axis_Pos	pshm->P[17225]
#define	P_PV_Anode_1th_AT_T_Axis_Pos	pshm->P[17226]
#define	P_PV_Anode_1th_Ready_Z_Axis_Pos	pshm->P[17227]
#define	P_PV_Anode_1th_CV_Z_Axis_Pos	pshm->P[17228]
#define	P_PV_Anode_1th_AT_Z_Axis_Pos	pshm->P[17229]
#define	P_PV_Cathode_NG_AT_T_Axis_Pos	pshm->P[17230]
#define	P_PV_Cathode_NG_Box_T_Axis_Pos	pshm->P[17231]
#define	P_PV_Anode_NG_AT_T_Axis_Pos	pshm->P[17232]
#define	P_PV_Anode_NG_Box_T_Axis_Pos	pshm->P[17233]
#define	P_PV_1st_Unloader_X_Axis_Pos	pshm->P[17234]
#define	P_PV_1st_Unloader_Z_Axis_Pos	pshm->P[17235]
#define	P_SemiRun_Separator_Dancer_Pressure_Flag	pshm->P[17236]
#define	P_SemiRun_Cathode_Clamp_Pressure_Flag	pshm->P[17237]
#define	P_SemiRun_Anoode_Clamp_Pressure_Flag	pshm->P[17238]
#define	P_SemiRun_Cathode_Final_Roller_X_Axis_Flag	pshm->P[17239]
#define	P_SemiRun_Anode_Final_Roller_X_Axis_Flag	pshm->P[17240]
#define	P_SemiRun_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag	pshm->P[17241]
#define	P_SemiRun_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag	pshm->P[17242]
#define	P_SemiRun_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag	pshm->P[17243]
#define	P_SemiRun_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag	pshm->P[17244]
#define	P_SemiRun_Cathode_2th_AT_T_Axis_Pos_Flag	pshm->P[17245]
#define	P_SemiRun_Cathode_2th_ST_T_Axis_Pos_Flag	pshm->P[17246]
#define	P_SemiRun_Cathode_2th_AT_Z_Axis_Pos_Flag	pshm->P[17247]
#define	P_SemiRun_Cathode_2th_ST_Z_Axis_Pos_Flag	pshm->P[17248]
#define	P_SemiRun_Anode_2th_AT_T_Axis_Pos_Flag	pshm->P[17249]
#define	P_SemiRun_Anode_2th_ST_T_Axis_Pos_Flag	pshm->P[17250]
#define	P_SemiRun_Anode_2th_AT_Z_Axis_Pos_Flag	pshm->P[17251]
#define	P_SemiRun_Anode_2th_ST_Z_Axis_Pos_Flag	pshm->P[17252]
#define	P_SemiRun_Cathode_1th_Ready_T_Axis_Pos_Flag	pshm->P[17253]
#define	P_SemiRun_Cathode_1th_CV_T_Axis_Pos_Flag	pshm->P[17254]
#define	P_SemiRun_Cathode_1th_AT_T_Axis_Pos_Flag	pshm->P[17255]
#define	P_SemiRun_Cathode_1th_Ready_Z_Axis_Pos_Flag	pshm->P[17256]
#define	P_SemiRun_Cathode_1th_CV_Z_Axis_Pos_Flag	pshm->P[17257]
#define	P_SemiRun_Cathode_1th_AT_Z_Axis_Pos_Flag	pshm->P[17258]
#define	P_SemiRun_Anode_1th_Ready_T_Axis_Pos_Flag	pshm->P[17259]
#define	P_SemiRun_Anode_1th_CV_T_Axis_Pos_Flag	pshm->P[17260]
#define	P_SemiRun_Anode_1th_AT_T_Axis_Pos_Flag	pshm->P[17261]
#define	P_SemiRun_Anode_1th_Ready_Z_Axis_Pos_Flag	pshm->P[17262]
#define	P_SemiRun_Anode_1th_CV_Z_Axis_Pos_Flag	pshm->P[17263]
#define	P_SemiRun_Anode_1th_AT_Z_Axis_Pos_Flag	pshm->P[17264]
#define	P_SemiRun_Cathode_NG_AT_T_Axis_Pos_Flag	pshm->P[17265]
#define	P_SemiRun_Cathode_NG_Box_T_Axis_Pos_Flag	pshm->P[17266]
#define	P_SemiRun_Anode_NG_AT_T_Axis_Pos_Flag	pshm->P[17267]
#define	P_SemiRun_Anode_NG_Box_T_Axis_Pos_Flag	pshm->P[17268]
#define	P_SemiRun_1st_Unloader_Forward_Pos_Flag	pshm->P[17269]
#define	P_Motion_Separator_Dancer_Pressure_Flag	pshm->P[17270]
#define	P_Motion_Cathode_Clamp_Pressure_Flag	pshm->P[17271]
#define	P_Motion_Anoode_Clamp_Pressure_Flag	pshm->P[17272]
#define	P_Motion_Cathode_Final_Roller_X_Axis_Flag	pshm->P[17273]
#define	P_Motion_Anode_Final_Roller_X_Axis_Flag	pshm->P[17274]
#define	P_Motion_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag	pshm->P[17275]
#define	P_Motion_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag	pshm->P[17276]
#define	P_Motion_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag	pshm->P[17277]
#define	P_Motion_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag	pshm->P[17278]
#define	P_Motion_Cathode_2th_AT_T_Axis_Pos_Flag	pshm->P[17279]
#define	P_Motion_Cathode_2th_ST_T_Axis_Pos_Flag	pshm->P[17280]
#define	P_Motion_Cathode_2th_AT_Z_Axis_Pos_Flag	pshm->P[17281]
#define	P_Motion_Cathode_2th_ST_Z_Axis_Pos_Flag	pshm->P[17282]
#define	P_Motion_Anode_2th_AT_T_Axis_Pos_Flag	pshm->P[17283]
#define	P_Motion_Anode_2th_ST_T_Axis_Pos_Flag	pshm->P[17284]
#define	P_Motion_Anode_2th_AT_Z_Axis_Pos_Flag	pshm->P[17285]
#define	P_Motion_Anode_2th_ST_Z_Axis_Pos_Flag	pshm->P[17286]
#define	P_Motion_Cathode_1th_Ready_T_Axis_Pos_Flag	pshm->P[17287]
#define	P_Motion_Cathode_1th_CV_T_Axis_Pos_Flag	pshm->P[17288]
#define	P_Motion_Cathode_1th_AT_T_Axis_Pos_Flag	pshm->P[17289]
#define	P_Motion_Cathode_1th_Ready_Z_Axis_Pos_Flag	pshm->P[17290]
#define	P_Motion_Cathode_1th_CV_Z_Axis_Pos_Flag	pshm->P[17291]
#define	P_Motion_Cathode_1th_AT_Z_Axis_Pos_Flag	pshm->P[17292]
#define	P_Motion_Anode_1th_Ready_T_Axis_Pos_Flag	pshm->P[17293]
#define	P_Motion_Anode_1th_CV_T_Axis_Pos_Flag	pshm->P[17294]
#define	P_Motion_Anode_1th_AT_T_Axis_Pos_Flag	pshm->P[17295]
#define	P_Motion_Anode_1th_Ready_Z_Axis_Pos_Flag	pshm->P[17296]
#define	P_Motion_Anode_1th_CV_Z_Axis_Pos_Flag	pshm->P[17297]
#define	P_Motion_Anode_1th_AT_Z_Axis_Pos_Flag	pshm->P[17298]
#define	P_Motion_Cathode_NG_AT_T_Axis_Pos_Flag	pshm->P[17299]
#define	P_Motion_Cathode_NG_Box_T_Axis_Pos_Flag	pshm->P[17300]
#define	P_Motion_Anode_NG_AT_T_Axis_Pos_Flag	pshm->P[17301]
#define	P_Motion_Anode_NG_Box_T_Axis_Pos_Flag	pshm->P[17302]
#define	P_Motion_1st_Unloader_Forward_Pos_Flag	pshm->P[17303]
#define	P_Cathode_1PNP_Sacle_Value	pshm->P[17304]
#define	P_Cathode_2PNP_Sacle_Value	pshm->P[17305]
#define	P_Anode_1PNP_Sacle_Value	pshm->P[17306]
#define	P_Anode_2PNP_Sacle_Value	pshm->P[17307]
#define	P_PLC01_SemiRun_PV_Flag	pshm->P[17308]
#define	P_PV_EPC_Index	pshm->P[17309]
#define	P_PV_EPC_Camera_Pos(i)	pshm->P[(17310+i)%MAX_P]
#define	P_BTN_MSA_Total_Value	pshm->P[17325]
#define	P_Vision_Align_Trigger_Timer	pshm->P[17326]
#define	P_Vision_Stack_Trigger_Timer	pshm->P[17327]
#define	P_MSA_Chk_Pos_Timer	pshm->P[17328]
#define	P_MSA_Chk_Pos_Time	pshm->P[17329]
#define	P_VISION_MSA_Status_Prod_Sequence(i)	pshm->P[(17330+i)%MAX_P]
#define	P_VISION_MSA_Seq_Index	pshm->P[17350]
#define	P_VISION_MSA_Anode_Align_Bit_Pos	pshm->P[17351]
#define	P_VISION_MSA_Seq_PreCondition_Index	pshm->P[17352]
#define	P_MSA_CycleStop_Point_Check_Complete_RTN	pshm->P[17353]
#define	P_MSA_Cmd(i)	pshm->P[(17354+i)%MAX_P]
#define	P_Current_Anode_Align_MSA_Run_Count	pshm->P[17359]
#define	P_Current_Cathode_Align_MSA_Run_Count	pshm->P[17360]
#define	P_Current_Anode_Stack_MSA_Run_Count	pshm->P[17361]
#define	P_Current_Cathode_Stack_MSA_Run_Count	pshm->P[17362]
#define	P_VISION_MSA_Align_Count_Chk_Flag	pshm->P[17363]
#define	P_VISION_MSA_Stack_Count_Chk_Flag	pshm->P[17364]
#define	P_VISION_MSA_pre_InterLock_Cmd	pshm->P[17365]
#define	P_VISION_MSA_pre_InterLock_Status	pshm->P[17366]
#define	P_VISION_MSA_pre_InterLock_Check_Assy_Bit	pshm->P[17367]
#define	P_VISION_MSA_pre_InterLock_Assy_Bit_Pos	pshm->P[17368]
#define	P_Vision_MSA_Interlock_Status	pshm->P[17369]
#define	P_VISION_MSA_MODE	pshm->P[17370]
#define	P_VISION_MSA_Status_Flag	pshm->P[17371]
#define	P_VISION_MSA_State_Machine	pshm->P[17372]
#define	P_VISION_MSA_Status	pshm->P[17373]
#define	P_VISION_MSA_Seq_Command_Occurs	pshm->P[17374]
#define	P_Vision_Align_Trigger_Time	pshm->P[17375]
#define	P_Anode_Align_MSA_Motion_Check	pshm->P[17376]
#define	P_Cathode_Align_MSA_Motion_Check	pshm->P[17377]
#define	P_Anode_Stack_MSA_Motion_Check	pshm->P[17378]
#define	P_Cathode_Stack_MSA_Motion_Check	pshm->P[17379]
#define	P_Anode_Align_MSA_Motion_ProgActive_Complete	pshm->P[17380]
#define	P_Cathode_Align_MSA_Motion_ProgActive_Complete	pshm->P[17381]
#define	P_Anode_Stack_MSA_Motion_ProgActive_Complete	pshm->P[17382]
#define	P_Cathode_Stack_MSA_Motion_ProgActive_Complete	pshm->P[17383]
#define	P_BTN_Align_Off_Total_Value	pshm->P[17384]
#define	P_Align_Take_Off_Cmd(i)	pshm->P[(17385+i)%MAX_P]
#define	P_Align_Take_Off_Status	pshm->P[17388]
#define	P_Align_Take_Off_Mode	pshm->P[17389]
#define	P_Align_Take_Off_Status_Flag	pshm->P[17390]
#define	P_Align_Take_Off_State_Machine	pshm->P[17391]
#define	P_Align_Take_Off_Chk_Pos_Timer	pshm->P[17392]
#define	P_Align_Take_Off_Motor_Check_Complete	pshm->P[17393]
#define	P_Align_Take_Off_Speed_Return_Complete	pshm->P[17394]
#define	P_Align_Take_Off_Interlock_Status	pshm->P[17395]
#define	P_Align_Take_Off_pre_InterLock_Cmd	pshm->P[17396]
#define	P_Align_Take_Off_pre_InterLock_Status	pshm->P[17397]
#define	P_Align_Take_Off_pre_InterLock_Check_Assy_Bit	pshm->P[17398]
#define	P_Align_Take_Off_pre_InterLock_Assy_Bit_Pos	pshm->P[17399]
#define	P_Align_Take_Off_Seq_Index	pshm->P[17400]
#define	P_Align_Take_Off_Seq_PreCondition_Index	pshm->P[17401]
#define	P_Align_Take_Off_Status_Prod_Sequence(i)	pshm->P[(17402+i)%MAX_P]
#define	P_Align_Take_Off_Stop_Signal	pshm->P[17422]
#define	P_Vision_Cal_Reset_Count	pshm->P[17423]
#define	P_2nd_PNP_Cleaning_Mode_Cmd	pshm->P[17424]
#define	P_2nd_PNP_Cleaning_Mode_Status	pshm->P[17425]
#define	P_2nd_PNP_Cleaning_Mode_Z_Jog_Speed	pshm->P[17426]
#define	P_2nd_PNP_Cleaning_Mode_X_Jog_Speed	pshm->P[17427]
#define	P_2nd_PNP_Cleaning_Mode_T_Jog_Speed	pshm->P[17428]
#define	P_2nd_PNP_Cleaning_Avoid_2nd_T_Pos	pshm->P[17429]
#define	P_PNP_Vac_Chk_Mode_Interlock	pshm->P[17430]
#define	P_Vac_Chk_Test	pshm->P[17431]
#define	P_Anode_1st_PNP_Vac_Chk_Mode_Blocked	pshm->P[17432]
#define	P_Cathode_1st_PNP_Vac_Chk_Mode_Blocked	pshm->P[17433]
#define	P_Anode_2nd_PNP_Vac_Chk_Mode_Blocked	pshm->P[17434]
#define	P_Cathode_2nd_PNP_Vac_Chk_Mode_Blocked	pshm->P[17435]
#define	P_SM_Anode_1st_PNP_Vac_Chk_Mode	pshm->P[17436]
#define	P_SM_Cathode_1st_PNP_Vac_Chk_Mode	pshm->P[17437]
#define	P_SM_Anode_2nd_PNP_Vac_Chk_Mode	pshm->P[17438]
#define	P_SM_Cathode_2nd_PNP_Vac_Chk_Mode	pshm->P[17439]
#define	P_Anode_1st_PNP_Vac_Chk_Execute_Timer	pshm->P[17440]
#define	P_Cathode_1st_PNP_Vac_Chk_Execute_Timer	pshm->P[17441]
#define	P_Anode_2nd_PNP_Vac_Chk_Execute_Timer	pshm->P[17442]
#define	P_Cathode_2nd_PNP_Vac_Chk_Execute_Timer	pshm->P[17443]
#define	P_Anode_1st_PNP_Vac_Check_Timer	pshm->P[17444]
#define	P_Cathode_1st_PNP_Vac_Check_Timer	pshm->P[17445]
#define	P_Anode_2nd_PNP_Vac_Check_Timer	pshm->P[17446]
#define	P_Cathode_2nd_PNP_Vac_Check_Timer	pshm->P[17447]
#define	P_Anode_1st_PNP_Vac_Chk_Status	pshm->P[17448]
#define	P_Cathode_1st_PNP_Vac_Chk_Status	pshm->P[17449]
#define	P_Anode_2nd_PNP_Vac_Chk_Status	pshm->P[17450]
#define	P_Cathode_2nd_PNP_Vac_Chk_Status	pshm->P[17451]
#define	P_Anode_1st_PNP_Vac_Chk_Mode_Stop_Blocked	pshm->P[17452]
#define	P_Cathode_1st_PNP_Vac_Chk_Mode_Stop_Blocked	pshm->P[17453]
#define	P_Anode_2nd_PNP_Vac_Chk_Mode_Stop_Blocked	pshm->P[17454]
#define	P_Cathode_2nd_PNP_Vac_Chk_Mode_Stop_Blocked	pshm->P[17455]
#define	P_Anode_1st_PnP_Vac_Chk_Mode_RTN	pshm->P[17456]
#define	P_Cathode_1st_PnP_Vac_Chk_Mode_RTN	pshm->P[17457]
#define	P_Anode_2nd_PnP_Vac_Chk_Mode_RTN	pshm->P[17458]
#define	P_Cathode_2nd_PnP_Vac_Chk_Mode_RTN	pshm->P[17459]
#define	P_PNP_Vac_Chk_Mode_TimeBase_Rtn	pshm->P[17460]
#define	P_PNP_Vac_Chk_Mode_Timer	pshm->P[17461]
#define	P_Anode_1st_PNP_Vac_Chk_Mode_Err	pshm->P[17462]
#define	P_Cathode_1st_PNP_Vac_Chk_Mode_Err	pshm->P[17463]
#define	P_Anode_2nd_PNP_Vac_Chk_Mode_Err	pshm->P[17464]
#define	P_Cathode_2nd_PNP_Vac_Chk_Mode_Err	pshm->P[17465]
#define	P_PNP_Vac_Chk_Mode_BTN_Err	pshm->P[17466]
#define	P_BTN_CA_1st_PNP_Vac_Chk_Mode	pshm->P[17467]
#define	P_BTN_AN_1st_PNP_Vac_Chk_Mode	pshm->P[17468]
#define	P_BTN_CA_2nd_PNP_Vac_Chk_Mode	pshm->P[17469]
#define	P_BTN_AN_2nd_PNP_Vac_Chk_Mode	pshm->P[17470]
#define	P_Old_Upper_Sensor(i)	pshm->P[(17471+i)%MAX_P]
#define	P_Edge_Upper_Sensor(i)	pshm->P[(17479+i)%MAX_P]
#define	P_Old_Lower_Sensor(i)	pshm->P[(17487+i)%MAX_P]
#define	P_Edge_Lower_Sensor(i)	pshm->P[(17495+i)%MAX_P]
#define	P_Edge_NP_BTN(i)	pshm->P[(17503+i)%MAX_P]
#define	P_Old_ARC_Upper_Tilting_Status	pshm->P[17505]
#define	P_Old_ARC_Lower_Tilting_Status	pshm->P[17506]
#define	P_ARC_Tilting_Unwinder_Move_Dis	pshm->P[17507]
#define	P_ARC_Tilting_Unwinder_Move_Motor_Num	pshm->P[17508]
#define	P_ARC_Tilting_Unwinder_Move_State_Machine	pshm->P[17509]
#define	P_ARC_Tilting_Unwinder_Move_Status	pshm->P[17510]
#define	P_ARC_Tilting_Unwinder_Move_Chk_Timer	pshm->P[17511]
#define	P_ARC_Tilting_Unwinder_Move_Chk_Time	pshm->P[17512]
#define	P_MSA_Cathode_Blow_Time	pshm->P[17513]
#define	P_MSA_Cathode_Vac_Time	pshm->P[17514]
#define	P_MES_FR_Avoid_Z_Tm	pshm->P[17515]
#define	P_MES_FR_Avoid_Z_Ta	pshm->P[17516]
#define	P_MES_FR_Avoid_Z_Ts	pshm->P[17517]
#define	P_MES_FR_Avoid_X_Tm	pshm->P[17518]
#define	P_MES_FR_Avoid_X_Ta	pshm->P[17519]
#define	P_MES_FR_Avoid_X_Ts	pshm->P[17520]
#define	P_UI_Unit_Status(i)	pshm->P[(17521+i)%MAX_P]
#define	P_Motor_Unit_Status(i)	pshm->P[(17531+i)%MAX_P]
#define	P_Current_Homming_Status_To_PLC(i)	pshm->P[(17581+i)%MAX_P]
#define	P_System_Cascading_ON_Cmd	pshm->P[17631]
#define	P_System_Cascading_OFF_Cmd	pshm->P[17632]
#define	P_System_Master_Following_ON_Cmd	pshm->P[17633]
#define	P_System_Master_Following_OFF_Cmd	pshm->P[17634]
#define	P_System_CamTable_ON_Cmd	pshm->P[17635]
#define	P_System_CamTable_OFF_Cmd	pshm->P[17636]
#define	P_System_Spool_Home_Ready_Pos_Cmd	pshm->P[17637]
#define	P_System_Cascading_ON_Status	pshm->P[17638]
#define	P_System_Cascading_OFF_Status	pshm->P[17639]
#define	P_System_Master_Following_ON_Status	pshm->P[17640]
#define	P_System_Master_Following_OFF_Status	pshm->P[17641]
#define	P_System_CamTable_ON_Status	pshm->P[17642]
#define	P_System_CamTable_OFF_Status	pshm->P[17643]
#define	P_System_Spool_Home_Ready_Pos_Status	pshm->P[17644]
#define	P_System_Cascading_ON_State_Machine	pshm->P[17645]
#define	P_System_Cascading_OFF_State_Machine	pshm->P[17646]
#define	P_System_Master_Follwing_ON_State_Machine	pshm->P[17647]
#define	P_System_Master_Follwing_OFF_State_Machine	pshm->P[17648]
#define	P_System_CamTable_ON_State_Machine	pshm->P[17649]
#define	P_System_CamTable_OFF_State_Machine	pshm->P[17650]
#define	P_System_Spool_Home_Ready_Pos_State_Machine	pshm->P[17651]
#define	P_System_Cascading_ON_Complete_Flag	pshm->P[17652]
#define	P_System_Cascading_OFF_Complete_Flag	pshm->P[17653]
#define	P_System_Master_Following_ON_Complete_Flag	pshm->P[17654]
#define	P_System_Master_Following_OFF_Complete_Flag	pshm->P[17655]
#define	P_System_CamTable_ON_Complete_Flag	pshm->P[17656]
#define	P_System_CamTable_OFF_Complete_Flag	pshm->P[17657]
#define	P_System_Spool_Home_Ready_Pos_Complete_Flag	pshm->P[17658]
#define	P_Servo_Dancer_Cascading_Off_Timer	pshm->P[17659]
#define	P_Servo_Dancer_Cascading_Set_Timer	pshm->P[17660]
#define	P_Dancer_Frist_Home_Ready_Pos_Timer	pshm->P[17661]
#define	P_Driving_Motor_Use_Flag	pshm->P[17662]
#define	P_Home_Spool_Unwinding	pshm->P[17663]
#define	P_OutValue	pshm->P[17664]
#define	P_Dancer_Out_Slew_Seq	pshm->P[17665]
#define	P_OutChangeValue	pshm->P[17666]
#define	P_Rot_OutValue	pshm->P[17667]
#define	P_OutChangeTime	pshm->P[17668]
#define	P_AO_Module_Arr(i)	pshm->P[(17669+i)%MAX_P]
#define	P_AO_Range_Set_Value(i)	pshm->P[(17674+i)%MAX_P]
#define	P_Regul_Max_kPa_Value	pshm->P[17679]
#define	P_Regul_Min_kPa_Value	pshm->P[17680]
#define	P_Regul_Max_AD	pshm->P[17681]
#define	P_Regul_Min_AD	pshm->P[17682]
#define	P_Current_Max_Value	pshm->P[17683]
#define	P_Current_Min_Value	pshm->P[17684]
#define	P_Current_Max_AD	pshm->P[17685]
#define	P_Current_Min_AD	pshm->P[17686]
#define	P_Sepa_Cal_Inclination	pshm->P[17687]
#define	P_Regul_Cal_Inclination	pshm->P[17688]
#define	P_Cutter_Heat_Amp_Data_Bit	pshm->P[17689]
#define	P_Cut_Heat_Amp_Value	pshm->P[17690]
#define	P_AI_Cathode_Clamp_Damper_AVG	pshm->P[17691]
#define	P_AI_Anode_Clamp_Damper_AVG	pshm->P[17692]
#define	P_Tension_Ready_Pos_Cmd	pshm->P[17693]
#define	P_Tension_Ready_State_Machine	pshm->P[17694]
#define	P_Tension_Ready_Pos_Status	pshm->P[17695]
#define	P_Dancer_Center_Pos	pshm->P[17696]
#define	P_Upper_Sepa_Cal_Inclination	pshm->P[17697]
#define	P_Lower_Sepa_Cal_Inclination	pshm->P[17698]
#define	P_Unwinder_Jogspeed	pshm->P[17699]
#define	P_Cascading_First_Out	pshm->P[17700]
#define	P_Dancer_Cur_Vdc	pshm->P[17701]
#define	P_Dancer_Cur_Torque	pshm->P[17702]
#define	P_Dancer_Cur_Newton	pshm->P[17703]
#define	P_Dancer_Cur_Kgf	pshm->P[17704]
#define	P_Board_IO_Count	pshm->P[17705]
#define	P_Force_BTN_Address_Clear_Count	pshm->P[17706]
#define	P_Force_BTN_M_Variable_Save(i)	pshm->P[(17707+i)%MAX_P]
#define	P_Force_BTN_Condition_Count	pshm->P[18091]
#define	P_Old_Force_BTN_Mode	pshm->P[18092]
#define	P_Force_BTN_Address_Count	pshm->P[18093]
#define	P_Force_BTN_GPIO_Address_Count	pshm->P[18094]
#define	P_Force_BTN_Ecat_Address_Count	pshm->P[18095]
#define	P_Force_BTN_M_Variable_Save_Count	pshm->P[18096]
#define	P_Force_BTN_M_Variable_Start_Num	pshm->P[18097]
#define	P_Force_BTN_Normal_Mode_Status	pshm->P[18098]
#define	P_Force_BTN_Normal_Mode_State_Machine	pshm->P[18099]
#define	P_Force_BTN_Normal_Mode_Complete_Flag	pshm->P[18100]
#define	P_Force_BTN_Force_Mode_Timer	pshm->P[18101]
#define	P_Force_BTN_Force_Mode_Delay_Time	pshm->P[18102]
#define	P_Force_BTN_Force_Mode_Status	pshm->P[18103]
#define	P_Force_BTN_Force_Mode_State_Machine	pshm->P[18104]
#define	P_Force_BTN_Force_Mode_Complete_Flag	pshm->P[18105]
#define	P_Mem_Save_Error_Bit	pshm->P[18106]
#define	P_ABS_Phasing_Data(i)	pshm->P[(18107+i)%MAX_P]
#define	P_ABS_Home_Offset_Data(i)	pshm->P[(18112+i)%MAX_P]
#define	P_Servo_Gain_Save_Command	pshm->P[18117]
#define	P_Servo_Gain_Load_Command	pshm->P[18118]
#define	P_Servo_Gain_Save_Flag	pshm->P[18119]
#define	P_Servo_Gain_Load_Flag	pshm->P[18120]
#define	P_Servo_Gain_Kp(i)	pshm->P[(18121+i)%MAX_P]
#define	P_Servo_Gain_Kvfb(i)	pshm->P[(18151+i)%MAX_P]
#define	P_Servo_Gain_Kvff(i)	pshm->P[(18181+i)%MAX_P]
#define	P_Servo_Gain_Ki(i)	pshm->P[(18211+i)%MAX_P]
#define	P_Servo_Gain_SwZvInt(i)	pshm->P[(18241+i)%MAX_P]
#define	P_Servo_Gain_Kaff(i)	pshm->P[(18271+i)%MAX_P]
#define	P_Insert_Phase_Flag	pshm->P[18301]
#define	P_Alarm_Arr(i)	pshm->P[(18302+i)%MAX_P]
#define	P_Alarm_Occur_Flag	pshm->P[18402]
#define	P_Alarm_Occur_Index_Flag(i)	pshm->P[(18403+i)%MAX_P]
#define	P_Alarm_Wait_Time	pshm->P[18407]
#define	P_Alarm_Delay_Timer	pshm->P[18408]
#define	P_Compare_Priority	pshm->P[18409]
#define	P_Alarm_Report	pshm->P[18410]
#define	P_Alarm_Num	pshm->P[18411]
#define	P_Alarm_Index	pshm->P[18412]
#define	P_First_Alarm_Flag	pshm->P[18413]
#define	P_First_Alarm_Log(i)	pshm->P[(18414+i)%MAX_P]
#define	P_Servo_Alarm_Check	pshm->P[18444]
#define	P_Ecat_Servo_Alarm_Check	pshm->P[18445]
#define	P_Alarm_Count	pshm->P[18446]
#define	P_Alarm_Get_Flag	pshm->P[18447]
#define	P_Alarm_Sort_Time	pshm->P[18448]
#define	P_Alarm_Frist_Flag	pshm->P[18449]
#define	P_Alarm_Delay_time	pshm->P[18450]
#define	P_Alarm_duplicate_Check_Arr(i)	pshm->P[(18451+i)%MAX_P]
#define	P_Alarm_Time_Log(i)	pshm->P[(19121+i)%MAX_P]
#define	P_Alarm_Log(i)	pshm->P[(19171+i)%MAX_P]
#define	P_Old_Drive_Alarm(i)	pshm->P[(19221+i)%MAX_P]
#define	P_IL_ON_OFF_Flag	pshm->P[19271]
#define	P_IL_Coord_Robot	pshm->P[19272]
#define	P_IL_Robot_Bit	pshm->P[19273]
#define	P_IL_Outer_Status	pshm->P[19274]
#define	P_Robot_Unit_Serch_Flag	pshm->P[19275]
#define	P_IL_Home_Chk_Edge	pshm->P[19276]
#define	P_Limit_PosData(i)	pshm->P[(19277+i)%MAX_P]
#define	P_IL_Sprint	pshm->P[19280]
#define	P_IL_length	pshm->P[19281]
#define	P_IL_Strcat	pshm->P[19282]
#define	P_IL_Popup_Motor	pshm->P[19283]
#define	P_IL_Motor_Page	pshm->P[19284]
#define	P_IL_Recipe_Bit	pshm->P[19285]
#define	P_Interlock_Popup_On_Flag	pshm->P[19286]
#define	P_Motor_Page	pshm->P[19287]
#define	P_OP_Side_Ca_PNP_Pos	pshm->P[19288]
#define	P_OP_Side_An_PNP_Pos	pshm->P[19289]
#define	P_OP_Side_PMAC_Cur_Mode	pshm->P[19290]
#define	P_Abs_Trans_Cur_Pos	pshm->P[19291]
#define	P_Minus_IL_Offset	pshm->P[19292]
#define	P_Plus_IL_Offset	pshm->P[19293]
#define	P_2nd_PNP_Arm_Radius	pshm->P[19294]
#define	P_IL_Enable_Flag	pshm->P[19295]
#define	P_Plus_Interlock_Bit	pshm->P[19296]
#define	P_Minus_Interlock_Bit	pshm->P[19297]
#define	UPPos	pshm->P[19298]
#define	Unloader_In_StackPos	pshm->P[19299]
#define	FR_AnodePos	pshm->P[19300]
#define	FR_CathodePos	pshm->P[19301]
#define	Before_In_Stack	pshm->P[19302]
#define	In_Stack	pshm->P[19303]
#define	P_Collision_Risk_Motor(i)	pshm->P[(19304+i)%MAX_P]
#define	P_Minus_Collision_Risk_Motor	pshm->P[19306]
#define	P_IL_Clamp_Y	pshm->P[19307]
#define	P_IL_Clamp_Z	pshm->P[19308]
#define	P_IL_Clamp_Pos	pshm->P[19309]
#define	P_IL_Use_FR_Clamp_Pos	pshm->P[19310]
#define	P_P_IL_Normal_Pos_Offset(i)	pshm->P[(19311+i)%MAX_P]
#define	P_M_IL_Normal_Pos_Offset(i)	pshm->P[(19361+i)%MAX_P]
#define	P_P_IL_Upper_Pos_Offset(i)	pshm->P[(19411+i)%MAX_P]
#define	P_M_IL_Upper_Pos_Offset(i)	pshm->P[(19461+i)%MAX_P]
#define	P_P_IL_Align_Pos_Offset(i)	pshm->P[(19511+i)%MAX_P]
#define	P_M_IL_Align_Pos_Offset(i)	pshm->P[(19561+i)%MAX_P]
#define	P_P_IL_Stack_Pos_Offset(i)	pshm->P[(19611+i)%MAX_P]
#define	P_M_IL_Stack_Pos_Offset(i)	pshm->P[(19661+i)%MAX_P]
#define	P_Ca_1st_Plus_IL_Offset	pshm->P[19711]
#define	P_Ca_1st_Minus_IL_Offset	pshm->P[19712]
#define	P_An_1st_Plus_IL_Offset	pshm->P[19713]
#define	P_An_1st_Minus_IL_Offset	pshm->P[19714]
#define	P_Ca_2nd_T_Plus_IL_Offset(i)	pshm->P[(19715+i)%MAX_P]
#define	P_Ca_2nd_T_Minus_IL_Offset(i)	pshm->P[(19718+i)%MAX_P]
#define	P_Ca_2nd_Z_Plus_IL_Offset(i)	pshm->P[(19721+i)%MAX_P]
#define	P_Ca_2nd_Z_Minus_IL_Offset(i)	pshm->P[(19723+i)%MAX_P]
#define	P_An_2nd_T_Plus_IL_Offset(i)	pshm->P[(19725+i)%MAX_P]
#define	P_An_2nd_T_Minus_IL_Offset(i)	pshm->P[(19728+i)%MAX_P]
#define	P_An_2nd_Z_Minus_IL_Offset(i)	pshm->P[(19731+i)%MAX_P]
#define	P_Z_Pos_Data	pshm->P[19733]
#define	P_Clamp_Z_Plus_IL_Offset	pshm->P[19734]
#define	P_FR_X_Plus_IL_Offset(i)	pshm->P[(19735+i)%MAX_P]
#define	P_FR_X_Minus_IL_Offset(i)	pshm->P[(19737+i)%MAX_P]
#define	P_FR_Z_Minus_IL_Offset	pshm->P[19739]
#define	P_Ca_NG_PNP_Plus_IL_Offset(i)	pshm->P[(19740+i)%MAX_P]
#define	P_Ca_NG_PNP_Minus_IL_Offset(i)	pshm->P[(19744+i)%MAX_P]
#define	P_An_NG_PNP_Plus_IL_Offset(i)	pshm->P[(19748+i)%MAX_P]
#define	P_An_NG_PNP_Minus_IL_Offset(i)	pshm->P[(19752+i)%MAX_P]
#define	P_Unloader_X_Plus_IL_Offset(i)	pshm->P[(19756+i)%MAX_P]
#define	P_Unloader_X_Minus_IL_Offset(i)	pshm->P[(19760+i)%MAX_P]
#define	P_Unloader_Z_Plus_IL_Offset(i)	pshm->P[(19764+i)%MAX_P]
#define	P_Unloader_Z_Minus_IL_Offset(i)	pshm->P[(19767+i)%MAX_P]
#define	P_IL_In_Offset(i)	pshm->P[(19770+i)%MAX_P]
#define	P_X_PLC_InterLock	pshm->P[19795]
#define	P_IL_Home_Chk	pshm->P[19796]
#define	P_IL_Home_Chk_Motor_Num(i)	pshm->P[(19797+i)%MAX_P]
#define	P_IL_Home_Chk_Motor_Update	pshm->P[19817]
#define	P_IL_Inside_Home_Chk_Complete	pshm->P[19818]
#define	P_IL_Outside_Home_Chk_Complete	pshm->P[19819]
#define	P_IL_Motor_Home_Chk_RTN	pshm->P[19820]
#define	P_IL_Function_Cnt	pshm->P[19821]
#define	P_IL_Function_Motor_Num	pshm->P[19822]
#define	P_Jog_Page_Flag	pshm->P[19823]
#define	P_Jog_Btn_Flag	pshm->P[19824]
#define	P_Old_Jog_Btn_Flag	pshm->P[19825]
#define	P_Anode_1st_TR_Belt_Down_Flag	pshm->P[19826]
#define	P_Anode_1st_TR_Belt_Pick_Up_Flag	pshm->P[19827]
#define	P_Anode_1st_TR_Align_Down_Flag	pshm->P[19828]
#define	P_Anode_2nd_TR_Align_Pick_Up_Flag	pshm->P[19829]
#define	P_Anode_2nd_TR_Stack_Down_Flag	pshm->P[19830]
#define	P_Anode_NG_TR_Align_Pick_Up_Flag	pshm->P[19831]
#define	P_Anode_NG_TR_NG_Place_Down_Flag	pshm->P[19832]
#define	P_Anode_2nd_TR_Align_Down_Flag	pshm->P[19833]
#define	P_Anode_1st_TR_Align_Pick_Up_Flag	pshm->P[19834]
#define	P_Anode_1st_TR_Belt_Down_State_Machine	pshm->P[19835]
#define	P_Anode_1st_TR_Belt_Down_Status	pshm->P[19836]
#define	P_Anode_1st_TR_Belt_Pick_Up_State_Machine	pshm->P[19837]
#define	P_Anode_1st_TR_Belt_Pick_Up_Status	pshm->P[19838]
#define	P_Anode_1st_TR_Align_Down_State_Machine	pshm->P[19839]
#define	P_Anode_1st_TR_Align_Down_Status	pshm->P[19840]
#define	P_Anode_2nd_TR_Align_Pick_Up_State_Machine	pshm->P[19841]
#define	P_Anode_2nd_TR_Align_Pick_Up_Status	pshm->P[19842]
#define	P_Anode_2nd_TR_Stack_Down_State_Machine	pshm->P[19843]
#define	P_Anode_2nd_TR_Stack_Down_Status	pshm->P[19844]
#define	P_Anode_NG_TR_Align_Pick_Up_State_Machine	pshm->P[19845]
#define	P_Anode_NG_TR_Align_Pick_Up_Status	pshm->P[19846]
#define	P_Anode_NG_TR_NG_Place_Down_State_Machine	pshm->P[19847]
#define	P_Anode_NG_TR_NG_Place_Down_Status	pshm->P[19848]
#define	P_Anode_2nd_TR_Align_Down_State_Machine	pshm->P[19849]
#define	P_Anode_2nd_TR_Align_Down_Status	pshm->P[19850]
#define	P_Anode_1st_TR_Align_Pick_Up_State_Machine	pshm->P[19851]
#define	P_Anode_1st_TR_Align_Pick_Up_Status	pshm->P[19852]
#define	P_Cathode_1st_TR_Belt_Down_Flag	pshm->P[19853]
#define	P_Cathode_1st_TR_Belt_Pick_Up_Flag	pshm->P[19854]
#define	P_Cathode_1st_TR_Align_Down_Flag	pshm->P[19855]
#define	P_Cathode_2nd_TR_Align_Pick_Up_Flag	pshm->P[19856]
#define	P_Cathode_2nd_TR_Stack_Down_Flag	pshm->P[19857]
#define	P_Cathode_NG_TR_Align_Pick_Up_Flag	pshm->P[19858]
#define	P_Cathode_NG_TR_NG_Place_Down_Flag	pshm->P[19859]
#define	P_Cathode_2nd_TR_Align_Down_Flag	pshm->P[19860]
#define	P_Cathode_1st_TR_Align_Pick_Up_Flag	pshm->P[19861]
#define	P_Cathode_1st_TR_Belt_Down_State_Machine	pshm->P[19862]
#define	P_Cathode_1st_TR_Belt_Down_Status	pshm->P[19863]
#define	P_Cathode_1st_TR_Belt_Pick_Up_State_Machine	pshm->P[19864]
#define	P_Cathode_1st_TR_Belt_Pick_Up_Status	pshm->P[19865]
#define	P_Cathode_1st_TR_Align_Down_State_Machine	pshm->P[19866]
#define	P_Cathode_1st_TR_Align_Down_Status	pshm->P[19867]
#define	P_Cathode_2nd_TR_Align_Pick_Up_State_Machine	pshm->P[19868]
#define	P_Cathode_2nd_TR_Align_Pick_Up_Status	pshm->P[19869]
#define	P_Cathode_2nd_TR_Stack_Down_State_Machine	pshm->P[19870]
#define	P_Cathode_2nd_TR_Stack_Down_Status	pshm->P[19871]
#define	P_Cathode_NG_TR_Align_Pick_Up_State_Machine	pshm->P[19872]
#define	P_Cathode_NG_TR_Align_Pick_Up_Status	pshm->P[19873]
#define	P_Cathode_NG_TR_NG_Place_Down_State_Machine	pshm->P[19874]
#define	P_Cathode_NG_TR_NG_Place_Down_Status	pshm->P[19875]
#define	P_Cathode_2nd_TR_Align_Down_State_Machine	pshm->P[19876]
#define	P_Cathode_2nd_TR_Align_Down_Status	pshm->P[19877]
#define	P_Cathode_1st_TR_Align_Pick_Up_State_Machine	pshm->P[19878]
#define	P_Cathode_1st_TR_Align_Pick_Up_Status	pshm->P[19879]
#define	P_Old_Anode_Belt_ASCII	pshm->P[19880]
#define	P_Old_Cathode_Belt_ASCII	pshm->P[19881]
#define	P_Anode_Belt_ASCII	pshm->P[19882]
#define	P_Cathode_Belt_ASCII	pshm->P[19883]
#define	P_Check_Vac_Time	pshm->P[19884]
#define	P_Send_Anode_NG_Code_To_PLC	pshm->P[19885]
#define	P_Receive_Anode_NG_Code_From_PLC	pshm->P[19886]
#define	P_Send_Cathode_NG_Code_To_PLC	pshm->P[19887]
#define	P_Receive_Cathode_NG_Code_From_PLC	pshm->P[19888]
#define	P_Current_Cell_Memory_Anode_1P	pshm->P[19889]
#define	P_Current_Cell_Memory_Anode_AT	pshm->P[19890]
#define	P_Current_Cell_Memory_Anode_2P	pshm->P[19891]
#define	P_Current_Cell_Memory_Cathode_1P	pshm->P[19892]
#define	P_Current_Cell_Memory_Cathode_AT	pshm->P[19893]
#define	P_Current_Cell_Memory_Cathode_2P	pshm->P[19894]
#define	P_Current_Cell_Memory_Stack_Table	pshm->P[19895]
#define	P_Current_Cell_Memory_Cathode_NG_TR	pshm->P[19896]
#define	P_Current_Cell_Memory_Anode_NG_TR	pshm->P[19897]
#define	P_BTN_Anode_1st_TR_Buffer_Clear	pshm->P[19898]
#define	P_BTN_Anode_2nd_TR_Buffer_Clear	pshm->P[19899]
#define	P_BTN_Anode_Align_Buffer_Clear	pshm->P[19900]
#define	P_BTN_Anode_NG_TR_Buffer_Clear	pshm->P[19901]
#define	P_BTN_Cathode_1st_TR_Buffer_Clear	pshm->P[19902]
#define	P_BTN_Cathode_2nd_TR_Buffer_Clear	pshm->P[19903]
#define	P_BTN_Cathode_Align_Buffer_Clear	pshm->P[19904]
#define	P_BTN_Cathode_NG_TR_Buffer_Clear	pshm->P[19905]
#define	P_Old_BTN_Anode_1st_TR_Buffer_Clear	pshm->P[19906]
#define	P_Old_BTN_Anode_2nd_TR_Buffer_Clear	pshm->P[19907]
#define	P_Old_BTN_Anode_Align_Buffer_Clear	pshm->P[19908]
#define	P_Old_BTN_Anode_NG_TR_Buffer_Clear	pshm->P[19909]
#define	P_Old_BTN_Cathode_1st_TR_Buffer_Clear	pshm->P[19910]
#define	P_Old_BTN_Cathode_2nd_TR_Buffer_Clear	pshm->P[19911]
#define	P_Old_BTN_Cathode_Align_Buffer_Clear	pshm->P[19912]
#define	P_Old_BTN_Cathode_NG_TR_Buffer_Clear	pshm->P[19913]
#define	P_Send_Anode_NG_Code_Flag	pshm->P[19914]
#define	P_Send_Cathode_NG_Code_Flag	pshm->P[19915]
#define	P_Anode_Vision_NG_To_PLC_Flag	pshm->P[19916]
#define	P_Cathode_Vision_NG_To_PLC_Flag	pshm->P[19917]
#define	P_Status_Clear_Sheet_Maint_Check	pshm->P[19918]
#define	P_Single_Run_Start_Flag	pshm->P[19919]
#define	P_Single_Run_Control_State_Machine	pshm->P[19920]
#define	P_Single_Run_Control_Status	pshm->P[19921]
#define	P_Single_Run_Execute_Bit	pshm->P[19922]
#define	P_User_Dry_Run_Mode	pshm->P[19923]
#define	P_Single_Run_State_Machine	pshm->P[19924]
#define	P_Single_Run_Status	pshm->P[19925]
#define	P_Single_Run_Unit	pshm->P[19926]
#define	P_Single_Run_Evade_Pos_RTN	pshm->P[19927]
#define	P_Single_Run_Evade_Pos_Check_RTN	pshm->P[19928]
#define	P_Single_Run_Pos_Rtn1	pshm->P[19929]
#define	P_Single_Run_Pos_Rtn2	pshm->P[19930]
#define	P_Single_Run_Motion_Ready_RTN	pshm->P[19931]
#define	P_Single_Run_Execution_Interlock_RTN	pshm->P[19932]
#define	P_Single_Run_Coord_Activate_RTN	pshm->P[19933]
#define	P_Single_Run_Coord_Activate_Check_RTN	pshm->P[19934]
#define	P_Single_Run_Select_Run_Mode_RTN	pshm->P[19935]
#define	P_Single_Run_Execution_Run_RTN	pshm->P[19936]
#define	P_Single_Run_Motion_Ready_State_Machine	pshm->P[19937]
#define	P_Coord_1	pshm->P[19938]
#define	P_Coord_2	pshm->P[19939]
#define	P_Coord_3	pshm->P[19940]
#define	P_Coord_4	pshm->P[19941]
#define	P_Final_Roll_Z_Motion_Flag	pshm->P[19942]
#define	P_Final_Roll_Z_Motion_State_Machine	pshm->P[19943]
#define	P_Main_Z_Motion_Flag	pshm->P[19944]
#define	P_Main_Z_Motion_State_Machine	pshm->P[19945]
#define	P_Single_Run_Mode_Flag	pshm->P[19946]
#define	P_Cathode_AT_Motion_Flag	pshm->P[19947]
#define	P_Cathode_Align_Motion_State_Machine	pshm->P[19948]
#define	P_Anode_AT_Motion_Flag	pshm->P[19949]
#define	P_Anode_Align_Motion_State_Machine	pshm->P[19950]
#define	P_Sheet_Paper_Motion_Flag	pshm->P[19951]
#define	P_Sheet_Paper_Motion_State_Machine	pshm->P[19952]
#define	P_Cathode_NG_PNP_T_Motion_Flag	pshm->P[19953]
#define	P_Cathode_NG_PNP_T_Motion_State_Machine	pshm->P[19954]
#define	P_Cathode_NG_PNP_Z_Motion_Flag	pshm->P[19955]
#define	P_Cathode_NG_PNP_Z_Motion_State_Machine	pshm->P[19956]
#define	P_Anode_NG_PNP_T_Motion_Flag	pshm->P[19957]
#define	P_Anode_NG_PNP_T_Motion_State_Machine	pshm->P[19958]
#define	P_Anode_NG_PNP_Z_Motion_Flag	pshm->P[19959]
#define	P_Anode_NG_PNP_Z_Motion_State_Machine	pshm->P[19960]
#define	P_1st_UND_X_Motion_Flag	pshm->P[19961]
#define	P_1st_UND_X_Motion_State_Machine	pshm->P[19962]
#define	P_1st_UND_Z_Motion_Flag	pshm->P[19963]
#define	P_1st_UND_Z_Motion_State_Machine	pshm->P[19964]
#define	P_1st_UND_T_Motion_Flag	pshm->P[19965]
#define	P_1st_UND_T_Motion_State_Machine	pshm->P[19966]
#define	P_Cathode_Run_Command_Flag	pshm->P[19967]
#define	P_Anode_Run_Command_Flag	pshm->P[19968]
#define	P_NG_PNP_Uint_Motion_Flag	pshm->P[19969]
#define	P_NG_PNP_Uint_State_Machine	pshm->P[19970]
#define	P_NG_PNP_Motion_Cnt	pshm->P[19971]
#define	P_NG_PNP_Motion_arr(i)	pshm->P[(19972+i)%MAX_P]
#define	P_Single_Run_Timer	pshm->P[19982]
#define	P_Single_Run_Align_Timer	pshm->P[19983]
#define	P_Single_Run_Align_Timer2	pshm->P[19984]
#define	P_Single_Run_Finall_Roll_Z_Timer	pshm->P[19985]
#define	P_Single_RuN_MAIN_Z_Timer	pshm->P[19986]
#define	P_Single_Run_Sheet_Paper_Timer	pshm->P[19987]
#define	P_Single_Run_Debug_SM	pshm->P[19988]
#define	P_Error_Monitoring_Count_1	pshm->P[19989]
#define	P_Error_Monitoring_Count_2	pshm->P[19990]
#define	P_Error_Monitoring_Count_3	pshm->P[19991]
#define	P_Error_Monitoring_Count_4	pshm->P[19992]
#define	P_Error_Monitoring_Count_5	pshm->P[19993]
#define	P_Old_Single_Run_Mode_Flag	pshm->P[19994]
#define	P_Old_Current_Mode	pshm->P[19995]
#define	P_Single_Run_Timebase_Off_RTN	pshm->P[19996]
#define	P_Single_Run_Stop_State_Machine	pshm->P[19997]
#define	P_Single_Run_Stop_Status	pshm->P[19998]
#define	P_Single_Run_Stop_Timer	pshm->P[19999]
#define	P_Single_Run_Stop_Init_RTN	pshm->P[20000]
#define	P_Single_Run_Stop_Btn_Chk	pshm->P[20001]
#define	P_Single_Run_Stop_Command	pshm->P[20002]
#define	P_Motor_Ready_Poa_Inpos_200um	pshm->P[20003]
#define	P_Ecat_Parameter_Write_Flag	pshm->P[20004]
#define	P_Ecat_Parameter_Read_Flag	pshm->P[20005]
#define	P_Ecat_Each_Parameter_Write_Flag	pshm->P[20006]
#define	P_Ecat_Slave_Idx	pshm->P[20007]
#define	P_Ec_Num	pshm->P[20008]
#define	P_Ecat_Read_Motor_Num	pshm->P[20009]
#define	P_Ecat_Write_Motor_Num	pshm->P[20010]
#define	P_Ecat_Parameter_Write_State_Machine	pshm->P[20011]
#define	P_Ecat_Parameter_Read_State_Machine	pshm->P[20012]
#define	P_Ecat_Each_Parameter_Write_State_Machine	pshm->P[20013]
#define	P_Ecat_Read_MNTR(i)	pshm->P[(20014+i)%MAX_P]
#define	P_Ecat_Write_MNTR(i)	pshm->P[(20042+i)%MAX_P]
#define	P_Ecat_Save_MNTR(i)	pshm->P[(20070+i)%MAX_P]
#define	P_Ecat_Error_MNTR(i)	pshm->P[(20086+i)%MAX_P]
#define	P_Ecat_Read_Error_MNTR(i)	pshm->P[(20102+i)%MAX_P]
#define	P_Ecat_Each_Write_Error_MNTR(i)	pshm->P[(20118+i)%MAX_P]
#define	P_Ecat_Write_Status	pshm->P[20134]
#define	P_Ecat_Read_Status	pshm->P[20135]
#define	P_Ecat_Each_Write_Status	pshm->P[20136]
#define	P_Pn000(i)	pshm->P[(20137+i)%MAX_P]
#define	P_Pn001(i)	pshm->P[(20157+i)%MAX_P]
#define	P_Pn00B(i)	pshm->P[(20177+i)%MAX_P]
#define	P_Pn100(i)	pshm->P[(20197+i)%MAX_P]
#define	P_Pn101(i)	pshm->P[(20217+i)%MAX_P]
#define	P_Pn102(i)	pshm->P[(20237+i)%MAX_P]
#define	P_Pn103(i)	pshm->P[(20257+i)%MAX_P]
#define	P_Pn123(i)	pshm->P[(20277+i)%MAX_P]
#define	P_Pn140(i)	pshm->P[(20297+i)%MAX_P]
#define	P_Pn141(i)	pshm->P[(20317+i)%MAX_P]
#define	P_Pn145(i)	pshm->P[(20337+i)%MAX_P]
#define	P_Pn146(i)	pshm->P[(20357+i)%MAX_P]
#define	P_Pn160(i)	pshm->P[(20377+i)%MAX_P]
#define	P_Pn161(i)	pshm->P[(20397+i)%MAX_P]
#define	P_Pn163(i)	pshm->P[(20417+i)%MAX_P]
#define	P_Pn170(i)	pshm->P[(20437+i)%MAX_P]
#define	P_Pn401(i)	pshm->P[(20457+i)%MAX_P]
#define	P_Pn408(i)	pshm->P[(20477+i)%MAX_P]
#define	P_Pn409(i)	pshm->P[(20497+i)%MAX_P]
#define	P_Pn40A(i)	pshm->P[(20517+i)%MAX_P]
#define	P_Pn40C(i)	pshm->P[(20537+i)%MAX_P]
#define	P_Pn40D(i)	pshm->P[(20557+i)%MAX_P]
#define	P_Pn416(i)	pshm->P[(20577+i)%MAX_P]
#define	P_Pn417(i)	pshm->P[(20597+i)%MAX_P]
#define	P_Pn511(i)	pshm->P[(20617+i)%MAX_P]
#define	P_Pn520(i)	pshm->P[(20637+i)%MAX_P]
#define	P_PnB02_Numerator(i)	pshm->P[(20657+i)%MAX_P]
#define	P_PnB02_Denominator(i)	pshm->P[(20677+i)%MAX_P]
#define	P_Align_Plus_Blow_Test	pshm->P[20697]
#define	P_System_Setting_Flag	pshm->P[20698]
#define	P_Ecat_Setting_Flag	pshm->P[20699]
#define	P_Ecat_Activation_State_Machine	pshm->P[20700]
#define	P_PLC31_Ecat_Retry_Cnt	pshm->P[20701]
#define	P_Ecat_Connect_Result	pshm->P[20702]
#define	P_Ecat_Slave_Error	pshm->P[20703]
#define	P_PWM_AbsPhasePosOffset_Change_State_Machine	pshm->P[20704]
#define	P_AbsPhasePosOffset_Change_Complete	pshm->P[20705]
#define	P_PWM_AbsPhasing_Fail	pshm->P[20706]
#define	P_PWM_AbsPhasing_Complete	pshm->P[20707]
#define	P_Whole_Stacking_Tack_Time	pshm->P[20708]
#define	P_Whole_Stacking_Tack_Time_Check	pshm->P[20709]
#define	P_Whole_Stacking_Tack_Timer_Check_Flag	pshm->P[20710]
#define	P_Whole_Stacking_Timer_Shift_Status_Machine	pshm->P[20711]
#define	P_Whole_Stacking_TackTime_Array0	pshm->P[20712]
#define	P_Whole_Stacking_TackTime_Array1	pshm->P[20713]
#define	P_Whole_Stacking_TackTime_Array2	pshm->P[20714]
#define	P_Whole_Stacking_TackTime_Array3	pshm->P[20715]
#define	P_Whole_Stacking_TackTime_Array4	pshm->P[20716]
#define	P_Whole_Stacking_TackTime_Array5	pshm->P[20717]
#define	P_Whole_Stacking_TackTime_Array6	pshm->P[20718]
#define	P_Whole_Stacking_TackTime_Array7	pshm->P[20719]
#define	P_Whole_Stacking_TackTime_Array8	pshm->P[20720]
#define	P_Whole_Stacking_TackTime_Array9	pshm->P[20721]
#define	P_Whole_Stacking_TackTime_Array10	pshm->P[20722]
#define	P_First_Stacking_Start	pshm->P[20723]
#define	P_Last_Stacking_Complete	pshm->P[20724]
#define	P_Stacking_Tack_Time	pshm->P[20725]
#define	P_Stacking_Tack_Time_Check	pshm->P[20726]
#define	P_Stacking_Tack_Timer_Check_Flag	pshm->P[20727]
#define	P_Stacking_Timer_Shift_Status_Machine	pshm->P[20728]
#define	P_Cathode_to_Anode_FR_Tack_Time_Check	pshm->P[20729]
#define	P_Anode_to_Cathode_FR_Tack_Time_Check	pshm->P[20730]
#define	P_Cathode_to_Anode_FR_Tack_Time_Start	pshm->P[20731]
#define	P_Anode_to_Cathode_FR_Tack_Time_Start	pshm->P[20732]
#define	P_Cathode_to_Anode_FR_Tack_Time_Complete	pshm->P[20733]
#define	P_Anode_to_Cathode_FR_Tack_Time_Complete	pshm->P[20734]
#define	P_Cathode_to_Anode_FR_Time	pshm->P[20735]
#define	P_Anode_to_Cathode_FR_Time	pshm->P[20736]
#define	P_Cathode_to_Anode_FR_Tack_Timer_Check_Flag	pshm->P[20737]
#define	P_Anode_to_Cathode_FR_Tack_Timer_Check_Flag	pshm->P[20738]
#define	P_Anode_Align_Table_Time	pshm->P[20739]
#define	P_Anode_Align_Table_Tack_Time_Check	pshm->P[20740]
#define	P_Anode_Align_Table_Tack_Timer_Check_Flag	pshm->P[20741]
#define	P_Anode_Align_Table_Timer_Shift_Status_Machine	pshm->P[20742]
#define	P_Anode_Align_Tack_Time_Start	pshm->P[20743]
#define	P_Anode_Align_Tack_Time_Complete	pshm->P[20744]
#define	P_Cathode_Align_Table_Time	pshm->P[20745]
#define	P_Cathode_Align_Table_Tack_Time_Check	pshm->P[20746]
#define	P_Cathode_Align_Table_Tack_Timer_Check_Flag	pshm->P[20747]
#define	P_Cathode_Align_Table_Timer_Shift_Status_Machine	pshm->P[20748]
#define	P_Cathode_Align_Tack_Time_Start	pshm->P[20749]
#define	P_Cathode_Align_Tack_Time_Complete	pshm->P[20750]
#define	P_Anode_1th_Tack_Time_Start	pshm->P[20751]
#define	P_Anode_1th_Tack_Time_Complete	pshm->P[20752]
#define	P_Anode_1th_Time	pshm->P[20753]
#define	P_Anode_1th_Tack_Time_Check	pshm->P[20754]
#define	P_Anode_1th_Tack_Timer_Check_Flag	pshm->P[20755]
#define	P_Anode_1th_Timer_Shift_Status_Machine	pshm->P[20756]
#define	P_Cathode_1th_Tack_Time_Start	pshm->P[20757]
#define	P_Cathode_1th_Tack_Time_Complete	pshm->P[20758]
#define	P_Cathode_1th_Time	pshm->P[20759]
#define	P_Cathode_1th_Tack_Time_Check	pshm->P[20760]
#define	P_Cathode_1th_Tack_Timer_Check_Flag	pshm->P[20761]
#define	P_Cathode_1th_Timer_Shift_Status_Machine	pshm->P[20762]
#define	P_Anode_2th_Tack_Time_Start	pshm->P[20763]
#define	P_Anode_2th_Tack_Time_Complete	pshm->P[20764]
#define	P_Anode_2th_Time	pshm->P[20765]
#define	P_Anode_2th_Tack_Time_Check	pshm->P[20766]
#define	P_Anode_2th_Tack_Timer_Check_Flag	pshm->P[20767]
#define	P_Anode_2th_Timer_Shift_Status_Machine	pshm->P[20768]
#define	P_Cathode_2th_Tack_Time_Start	pshm->P[20769]
#define	P_Cathode_2th_Tack_Time_Complete	pshm->P[20770]
#define	P_Cathode_2th_Time	pshm->P[20771]
#define	P_Cathode_2th_Tack_Time_Check	pshm->P[20772]
#define	P_Cathode_2th_Tack_Timer_Check_Flag	pshm->P[20773]
#define	P_Cathode_2th_Timer_Shift_Status_Machine	pshm->P[20774]
#define	P_Anode_1th_NG_Tack_Time_Start	pshm->P[20775]
#define	P_Anode_1th_NG_Tack_Time_Complete	pshm->P[20776]
#define	P_Anode_1th_NG_Time	pshm->P[20777]
#define	P_Anode_1th_NG_Tack_Time_Check	pshm->P[20778]
#define	P_Anode_1th_NG_Tack_Timer_Check_Flag	pshm->P[20779]
#define	P_Anode_1th_NG_Timer_Shift_Status_Machine	pshm->P[20780]
#define	P_Cathode_1th_NG_Tack_Time_Start	pshm->P[20781]
#define	P_Cathode_1th_NG_Tack_Time_Complete	pshm->P[20782]
#define	P_Cathode_1th_NG_Time	pshm->P[20783]
#define	P_Cathode_1th_NG_Tack_Time_Check	pshm->P[20784]
#define	P_Cathode_1th_NG_Tack_Timer_Check_Flag	pshm->P[20785]
#define	P_Cathode_1th_NG_Timer_Shift_Status_Machine	pshm->P[20786]
#define	P_Anode_Clamp_Tack_Time_Start	pshm->P[20787]
#define	P_Anode_Clamp_Tack_Time_Complete	pshm->P[20788]
#define	P_Anode_Clamp_Time	pshm->P[20789]
#define	P_Anode_Clamp_Tack_Time_Check	pshm->P[20790]
#define	P_Anode_Clamp_Tack_Timer_Check_Flag	pshm->P[20791]
#define	P_Anode_Clamp_Timer_Shift_Status_Machine	pshm->P[20792]
#define	P_Cathode_Clamp_Tack_Time_Start	pshm->P[20793]
#define	P_Cathode_Clamp_Tack_Time_Complete	pshm->P[20794]
#define	P_Cathode_Clamp_Time	pshm->P[20795]
#define	P_Cathode_Clamp_Tack_Time_Check	pshm->P[20796]
#define	P_Cathode_Clamp_Tack_Timer_Check_Flag	pshm->P[20797]
#define	P_Cathode_Clamp_Timer_Shift_Status_Machine	pshm->P[20798]
#define	P_Final_Roll_X_Timer_Shift_Status_Machine	pshm->P[20799]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array0	pshm->P[20800]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array1	pshm->P[20801]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array2	pshm->P[20802]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array3	pshm->P[20803]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array4	pshm->P[20804]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array5	pshm->P[20805]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array6	pshm->P[20806]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array7	pshm->P[20807]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array8	pshm->P[20808]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array9	pshm->P[20809]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array10	pshm->P[20810]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array0	pshm->P[20811]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array1	pshm->P[20812]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array2	pshm->P[20813]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array3	pshm->P[20814]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array4	pshm->P[20815]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array5	pshm->P[20816]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array6	pshm->P[20817]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array7	pshm->P[20818]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array8	pshm->P[20819]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array9	pshm->P[20820]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array10	pshm->P[20821]
#define	P_Pneumatic_Pressure_Unit_Tack_Time_Chk_Timer(i)	pshm->P[(20822+i)%MAX_P]
#define	P_Pneumatic_Pressure_Unit_Tack_Time(i)	pshm->P[(20849+i)%MAX_P]
#define	P_MCC_Anode_Align_NG_Count	pshm->P[20876]
#define	P_MCC_Cathode_Align_NG_Count	pshm->P[20877]
#define	P_MCC_Anode_Retry_NG_Count	pshm->P[20878]
#define	P_MCC_Cathode_Retry_NG_Count	pshm->P[20879]
#define	P_Discharge_Tact_Time_Arr(i)	pshm->P[(20880+i)%MAX_P]
#define	P_Discharge_Hold_Timer	pshm->P[20892]
#define	P_Discharge_Hold_Time	pshm->P[20893]
#define	P_AN_1st_Z_Zero_Angle	pshm->P[20894]
#define	P_AN_1st_Z_Zero_Length	pshm->P[20895]
#define	P_Anode_1st_PNP_Z_Crank_Zero_Pos	pshm->P[20896]
#define	P_Anode_1st_PNP_Z_Crank_real_Move_Pos	pshm->P[20897]
#define	P_Anode_1st_PNP_Z_Crank_radian	pshm->P[20898]
#define	P_Anode_1st_PNP_Z_Acos_denominator	pshm->P[20899]
#define	P_Anode_1st_PNP_Z_Acos_numerator	pshm->P[20900]
#define	P_Anode_1st_PNP_Z_Crank_Angle	pshm->P[20901]
#define	P_Anode_1st_PNP_Z_Real_Move_Pos	pshm->P[20902]
#define	P_Anode_1st_Fwd_Bwd_Rise	pshm->P[20903]
#define	P_CA_1st_Z_Zero_Angle	pshm->P[20904]
#define	P_CA_1st_Z_Zero_Length	pshm->P[20905]
#define	P_Cathode_1st_PNP_Z_Crank_Zero_Pos	pshm->P[20906]
#define	P_Cathode_1st_PNP_Z_Crank_real_Move_Pos	pshm->P[20907]
#define	P_Cathode_1st_PNP_Z_Crank_radian	pshm->P[20908]
#define	P_Cathode_1st_PNP_Z_Acos_denominator	pshm->P[20909]
#define	P_Cathode_1st_PNP_Z_Acos_numerator	pshm->P[20910]
#define	P_Cathode_1st_PNP_Z_Crank_Angle	pshm->P[20911]
#define	P_Cathode_1st_PNP_Z_Real_Move_Pos	pshm->P[20912]
#define	P_Cathode_1st_Fwd_Bwd_Rise	pshm->P[20913]
#define	P_AN_2nd_Z_Zero_Angle	pshm->P[20914]
#define	P_AN_2nd_Z_Zero_Length	pshm->P[20915]
#define	P_Anode_2nd_PNP_Z_Crank_Zero_Pos	pshm->P[20916]
#define	P_Anode_2nd_PNP_Z_Crank_real_Move_Pos	pshm->P[20917]
#define	P_Anode_2nd_PNP_Z_Crank_radian	pshm->P[20918]
#define	P_Anode_2nd_PNP_Z_Acos_denominator	pshm->P[20919]
#define	P_Anode_2nd_PNP_Z_Acos_numerator	pshm->P[20920]
#define	P_Anode_2nd_PNP_Z_Crank_Angle	pshm->P[20921]
#define	P_Anode_2nd_PNP_Z_Real_Move_Pos	pshm->P[20922]
#define	P_Anode_2nd_Fwd_Bwd_Rise	pshm->P[20923]
#define	P_CA_2nd_Z_Zero_Angle	pshm->P[20924]
#define	P_CA_2nd_Z_Zero_Length	pshm->P[20925]
#define	P_Cathode_2nd_PNP_Z_Crank_Zero_Pos	pshm->P[20926]
#define	P_Cathode_2nd_PNP_Z_Crank_real_Move_Pos	pshm->P[20927]
#define	P_Cathode_2nd_PNP_Z_Crank_radian	pshm->P[20928]
#define	P_Cathode_2nd_PNP_Z_Acos_denominator	pshm->P[20929]
#define	P_Cathode_2nd_PNP_Z_Acos_numerator	pshm->P[20930]
#define	P_Cathode_2nd_PNP_Z_Crank_Angle	pshm->P[20931]
#define	P_Cathode_2nd_PNP_Z_Real_Move_Pos	pshm->P[20932]
#define	P_Cathode_2nd_Fwd_Bwd_Rise	pshm->P[20933]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Ready_Up	pshm->P[20934]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Belt_Up	pshm->P[20935]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Belt_Down	pshm->P[20936]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Align_Up	pshm->P[20937]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Align_Down	pshm->P[20938]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Ready_Up	pshm->P[20939]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Up	pshm->P[20940]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Down	pshm->P[20941]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Align_Up	pshm->P[20942]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Align_Down	pshm->P[20943]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Align_Up	pshm->P[20944]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Align_Down	pshm->P[20945]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Up	pshm->P[20946]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Down	pshm->P[20947]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Ready_Up	pshm->P[20948]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Up	pshm->P[20949]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Down	pshm->P[20950]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Up	pshm->P[20951]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Down	pshm->P[20952]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Ready_Up	pshm->P[20953]
#define	P_PLC19_All_Home_Status	pshm->P[20954]
#define	P_PLC19_All_Home_Module_Status	pshm->P[20955]
#define	P_PLC19_All_Home_State_Machine	pshm->P[20956]
#define	P_PLC19_All_Home_Seq_Index	pshm->P[20957]
#define	P_PLC19_All_Home_Self_Index	pshm->P[20958]
#define	P_PLC19_All_Home_Set_Mode_Return	pshm->P[20959]
#define	P_PLC19_All_Home_Timer	pshm->P[20960]
#define	P_PLC19_All_Home_Tact_Time_Array(i)	pshm->P[(20961+i)%MAX_P]
#define	P_PLC19_All_Home_Tact_Time	pshm->P[20981]
#define	P_All_Home_Module_Error	pshm->P[20982]
#define	P_Act_ALL_Home_Time_Out_Time	pshm->P[20983]
#define	P_Act_ALL_Home_Time_Out(i)	pshm->P[(20984+i)%MAX_P]
#define	P_Act_Hold_Complete_Bit(i)	pshm->P[(21024+i)%MAX_P]
#define	P_Module_Act_Hold_Command_Array(i)	pshm->P[(21059+i)%MAX_P]
#define	P_OLD_Module_Act_Hold_Command_Array(i)	pshm->P[(21094+i)%MAX_P]
#define	P_Module_Act_Hold_State_Machine_Array(i)	pshm->P[(21129+i)%MAX_P]
#define	P_Act_Hold_Old_Time(i)	pshm->P[(21164+i)%MAX_P]
#define	P_Act_Hold_Time_Out_Time	pshm->P[21199]
#define	P_Act_Hold_Time_Out(i)	pshm->P[(21200+i)%MAX_P]
#define	P_First_PNP_T_Wait_Status	pshm->P[21235]
#define	P_First_PNP_Z_Wait_Status	pshm->P[21236]
#define	P_First_PNP_Picker_T_Turn_Status	pshm->P[21237]
#define	P_First_PNP_T_Wait_To_Belt_Status	pshm->P[21238]
#define	P_First_PNP_Z_Wait_To_Belt_Status	pshm->P[21239]
#define	P_First_PNP_T_Align_To_Belt_Status	pshm->P[21240]
#define	P_First_PNP_Z_Align_To_Belt_Status	pshm->P[21241]
#define	P_First_PNP_Z_Belt_Down_Status	pshm->P[21242]
#define	P_First_PNP_Z_Belt_Up_Status	pshm->P[21243]
#define	P_First_PNP_T_Wait_To_Align_Status	pshm->P[21244]
#define	P_First_PNP_Z_Wait_To_Align_Status	pshm->P[21245]
#define	P_First_PNP_T_Belt_To_Align_Status	pshm->P[21246]
#define	P_First_PNP_Z_Belt_To_Align_Status	pshm->P[21247]
#define	P_First_PNP_Z_Align_Down_Status	pshm->P[21248]
#define	P_First_PNP_Z_Align_Up_Status	pshm->P[21249]
#define	P_First_PNP_Vac_On_Status	pshm->P[21250]
#define	P_First_PNP_Blow_On_Status	pshm->P[21251]
#define	P_Second_PNP_T_Align_To_Stack_Status	pshm->P[21252]
#define	P_Second_PNP_Z_Align_To_Stack_Status	pshm->P[21253]
#define	P_Second_PNP_T_Stack_To_Align_Status	pshm->P[21254]
#define	P_Second_PNP_Z_Stack_To_Align_Status	pshm->P[21255]
#define	P_Second_PNP_Z_Align_Down_Status	pshm->P[21256]
#define	P_Second_PNP_Z_Align_Up_Status	pshm->P[21257]
#define	P_Second_PNP_Vac_On_Status	pshm->P[21258]
#define	P_Second_PNP_Blow_On_Status	pshm->P[21259]
#define	P_NG_PNP_NG_Bos_Status	pshm->P[21260]
#define	P_NG_PNP_Align_Status	pshm->P[21261]
#define	P_NG_PNP_Align_Down_Status	pshm->P[21262]
#define	P_NG_PNP_Align_Up_Status	pshm->P[21263]
#define	P_NG_PNP_Vac_On_Status	pshm->P[21264]
#define	P_NG_PNP_Blow_On_Status	pshm->P[21265]
#define	P_Hold_1st_PNP_Position	pshm->P[21266]
#define	P_Hold_Module_Error	pshm->P[21267]
#define	P_Act_Execute_Complete_Bit(i)	pshm->P[(21268+i)%MAX_P]
#define	P_Module_Act_Execute_Command_Array(i)	pshm->P[(21280+i)%MAX_P]
#define	P_OLD_Module_Act_Execute_Command_Array(i)	pshm->P[(21292+i)%MAX_P]
#define	P_Module_Act_Execute_State_Machine_Array(i)	pshm->P[(21304+i)%MAX_P]
#define	P_Act_Execute_Old_Time(i)	pshm->P[(21316+i)%MAX_P]
#define	P_Act_Execute_Time_Out_Time	pshm->P[21328]
#define	P_Act_Execute_Time_Out(i)	pshm->P[(21329+i)%MAX_P]
#define	P_Execute_Module_Error	pshm->P[21341]
#define	P_Execute_First_Sepa_Total_Tact_Time	pshm->P[21342]
#define	P_Current_JR_Thickness_mm	pshm->P[21343]
#define	P_Current_Jelly_Roll_Thinckness_mm_Send_Enable_Flag	pshm->P[21344]
#define	P_Stack_Table_NG_Flag	pshm->P[21345]
#define	P_Suspend_Discharge_Cell_Out_Restart	pshm->P[21346]
#define	P_Jelly_Roll_OK_Count	pshm->P[21347]
#define	P_Jelly_Roll_NG_Count	pshm->P[21348]
#define	P_Jelly_Roll_Total_Count	pshm->P[21349]
#define	P_Jelly_Roll_Prod_Count	pshm->P[21350]
#define	P_Jelly_Roll_Recipe_Count	pshm->P[21351]
#define	P_Current_Cell_Memory_Jelly_Roll	pshm->P[21352]
#define	P_VISION_PLC10_Anode_Align_Start	pshm->P[21353]
#define	P_VISION_PLC10_Cathode_Align_Start	pshm->P[21354]
#define	P_Stack_Table_NG_Count	pshm->P[21355]
#define	P_Stack_PMAC_NG_Code	pshm->P[21356]
#define	P_Stack_Vision_NG_Code_IN_Timer	pshm->P[21357]
#define	P_1st_Discharge_State	pshm->P[21358]
#define	P_Prev_Sepa_Stack_Completed_Flag	pshm->P[21359]
#define	P_First_Sepa_Vision_Skip_Flag	pshm->P[21360]
#define	P_Discharge_Unloader_Handover_Timer	pshm->P[21361]
#define	P_Discharge_Unloader_Handover_Time	pshm->P[21362]
#define	P_Buffer_Mode_Module_Status_Sequence(i)	pshm->P[(21363+i)%MAX_P]
#define	P_EXECUTE_Status_Prod_Sequence(i)	pshm->P[(21393+i)%MAX_P]
#define	P_Execute_First_Sepa_Mode_Cmd	pshm->P[21423]
#define	P_Execute_First_Sepa_Mode_Status	pshm->P[21424]
#define	P_Execute_First_Sepa_Mode_Module_Status	pshm->P[21425]
#define	P_Execute_First_Sepa_Mode_State_Machine	pshm->P[21426]
#define	P_Execute_First_Sepa_Mode_Seq_Index	pshm->P[21427]
#define	P_Execute_First_Sepa_Mode_Self_Index	pshm->P[21428]
#define	P_Execute_First_Sepa_Mode_Debug_Edge	pshm->P[21429]
#define	P_Buffer_Seqdata_Execute_First_Sepa_Mode_Array(i)	pshm->P[(21430+i)%MAX_P]
#define	P_Execute_First_Sepa_Mode_Timer	pshm->P[21460]
#define	P_Execute_First_Sepa_Mode_Tact_Time_Array(i)	pshm->P[(21461+i)%MAX_P]
#define	P_Execute_First_Sepa_Mode_Tact_Time	pshm->P[21481]
#define	P_Execute_1st_Sepa_Status	pshm->P[21482]
#define	P_Suspend_Discharge_Cmd	pshm->P[21483]
#define	P_Suspend_Discharge_Status	pshm->P[21484]
#define	P_Suspend_Discharge_State_Machine	pshm->P[21485]
#define	P_Suspend_Discharge_Seq_Index	pshm->P[21486]
#define	P_Suspend_Discharge_Self_Index	pshm->P[21487]
#define	P_Discharge_Seq_InterLock_Delay_Time(i)	pshm->P[(21488+i)%MAX_P]
#define	P_Discharge_Seq_InterLock_Flag(i)	pshm->P[(21518+i)%MAX_P]
#define	P_Buffer_Seqdata_Discharge_Array(i)	pshm->P[(21548+i)%MAX_P]
#define	P_Suspend_Discharge_Timer	pshm->P[21578]
#define	P_Suspend_Discharge_Tact_Time_Array(i)	pshm->P[(21579+i)%MAX_P]
#define	P_Suspend_Discharge_Tact_Time	pshm->P[21599]
#define	P_Suspend_Discharge_1st_Unloader_JR_Grip	pshm->P[21600]
#define	P_Suspend_ARC_Cmd	pshm->P[21601]
#define	P_Suspend_ARC_Status	pshm->P[21602]
#define	P_Suspend_ARC_State_Machine	pshm->P[21603]
#define	P_Suspend_ARC_Seq_Index	pshm->P[21604]
#define	P_Suspend_ARC_Self_Index	pshm->P[21605]
#define	P_Suspend_ARC_Manual_Occur_Flag	pshm->P[21606]
#define	P_ARC_Seq_InterLock_Delay_Time(i)	pshm->P[(21607+i)%MAX_P]
#define	P_ARC_Seq_InterLock_Flag(i)	pshm->P[(21637+i)%MAX_P]
#define	P_Buffer_Seqdata_ARC_Array(i)	pshm->P[(21667+i)%MAX_P]
#define	P_Suspend_ARC_Timer	pshm->P[21697]
#define	P_Suspend_ARC_Tact_Time_Array(i)	pshm->P[(21698+i)%MAX_P]
#define	P_Suspend_ARC_Tact_Time	pshm->P[21718]
#define	P_Suspend_Anode_1TR_Cell_Supply_Cmd	pshm->P[21719]
#define	P_Suspend_Anode_1TR_Cell_Supply_Status	pshm->P[21720]
#define	P_Suspend_Anode_1TR_Cell_Supply_State_Machine	pshm->P[21721]
#define	P_Suspend_Anode_1TR_Cell_Supply_Seq_Index	pshm->P[21722]
#define	P_Suspend_Anode_1TR_Cell_Supply_Self_Index	pshm->P[21723]
#define	P_Suspend_Anode_1TR_Cell_Supply_Module_Status	pshm->P[21724]
#define	P_Anode_1TR_Cell_Supply_Seq_InterLock_Delay_Time(i)	pshm->P[(21725+i)%MAX_P]
#define	P_Anode_1TR_Cell_Supply_Seq_InterLock_Flag(i)	pshm->P[(21755+i)%MAX_P]
#define	P_Buffer_Seqdata_Anode_1TR_Cell_Supply_Array(i)	pshm->P[(21785+i)%MAX_P]
#define	P_Suspend_Anode_1TR_Cell_Supply_Timer	pshm->P[21815]
#define	P_Suspend_Anode_1TR_Cell_Supply_Tact_Time_Array(i)	pshm->P[(21816+i)%MAX_P]
#define	P_Suspend_Anode_1TR_Cell_Supply_Tact_Time	pshm->P[21836]
#define	P_Hold_Exist_Insp_Cmd	pshm->P[21837]
#define	P_Hold_Exist_Insp_Status	pshm->P[21838]
#define	P_Hold_Exist_Insp_Module_Status	pshm->P[21839]
#define	P_Hold_Exist_Insp_State_Machine	pshm->P[21840]
#define	P_Hold_Exist_Insp_Seq_Index	pshm->P[21841]
#define	P_Hold_Exist_Insp_Self_Index	pshm->P[21842]
#define	P_Hold_Exist_Insp_Debug_Edge	pshm->P[21843]
#define	P_Buffer_Seqdata_Hold_Exist_Insp_Array(i)	pshm->P[(21844+i)%MAX_P]
#define	P_Hold_Exist_Insp_Timer	pshm->P[21874]
#define	P_Hold_Exist_Insp_Tact_Time_Array(i)	pshm->P[(21875+i)%MAX_P]
#define	P_Hold_Exist_Insp_Tact_Time	pshm->P[21895]
#define	P_Hold_Remove_NG_PNP_Cmd	pshm->P[21896]
#define	P_Hold_Remove_NG_PNP_Status	pshm->P[21897]
#define	P_Hold_Remove_NG_PNP_Module_Status	pshm->P[21898]
#define	P_Hold_Remove_NG_PNP_State_Machine	pshm->P[21899]
#define	P_Hold_Remove_NG_PNP_Seq_Index	pshm->P[21900]
#define	P_Hold_Remove_NG_PNP_Self_Index	pshm->P[21901]
#define	P_Hold_Remove_NG_PNP_Debug_Edge	pshm->P[21902]
#define	P_Buffer_Seqdata_Hold_Remove_NG_PNP_Array(i)	pshm->P[(21903+i)%MAX_P]
#define	P_Hold_Remove_NG_PNP_Timer	pshm->P[21933]
#define	P_Hold_Remove_NG_PNP_Tact_Time_Array(i)	pshm->P[(21934+i)%MAX_P]
#define	P_Hold_Remove_NG_PNP_Tact_Time	pshm->P[21954]
#define	P_PLC01_Hold_Remove_NG_PNP_Sub_Flag	pshm->P[21955]
#define	P_PLC01_Hold_Remove_NG_PNP_Sub_State_Machine	pshm->P[21956]
#define	P_PLC01_Hold_Remove_NG_PNP_Sub_Status	pshm->P[21957]
#define	P_Hold_Remove_Align_Cmd	pshm->P[21958]
#define	P_Hold_Remove_Align_Status	pshm->P[21959]
#define	P_Hold_Remove_Align_Module_Status	pshm->P[21960]
#define	P_Hold_Remove_Align_State_Machine	pshm->P[21961]
#define	P_Hold_Remove_Align_Seq_Index	pshm->P[21962]
#define	P_Hold_Remove_Align_Self_Index	pshm->P[21963]
#define	P_Hold_Remove_Align_Debug_Edge	pshm->P[21964]
#define	P_Buffer_Seqdata_Hold_Remove_Align_Array(i)	pshm->P[(21965+i)%MAX_P]
#define	P_Hold_Remove_Align_Timer	pshm->P[21995]
#define	P_Hold_Remove_Align_Tact_Time_Array(i)	pshm->P[(21996+i)%MAX_P]
#define	P_Hold_Remove_Align_Tact_Time	pshm->P[22016]
#define	P_PLC01_Hold_Remove_Align_Sub_Flag	pshm->P[22017]
#define	P_PLC01_Hold_Remove_Align_Sub_State_Machine	pshm->P[22018]
#define	P_PLC01_Hold_Remove_Align_Sub_Status	pshm->P[22019]
#define	P_Hold_Remove_2TR_Cmd	pshm->P[22020]
#define	P_Hold_Remove_2TR_Status	pshm->P[22021]
#define	P_Hold_Remove_2TR_Module_Status	pshm->P[22022]
#define	P_Hold_Remove_2TR_State_Machine	pshm->P[22023]
#define	P_Hold_Remove_2TR_Seq_Index	pshm->P[22024]
#define	P_Hold_Remove_2TR_Self_Index	pshm->P[22025]
#define	P_Hold_Remove_2TR_Debug_Edge	pshm->P[22026]
#define	P_Buffer_Seqdata_Hold_Remove_2TR_Array(i)	pshm->P[(22027+i)%MAX_P]
#define	P_Hold_Remove_2TR_Timer	pshm->P[22057]
#define	P_Hold_Remove_2TR_Tact_Time_Array(i)	pshm->P[(22058+i)%MAX_P]
#define	P_Hold_Remove_2TR_Tact_Time	pshm->P[22078]
#define	P_Hold_Supply_1TR_Cmd	pshm->P[22079]
#define	P_Hold_Supply_1TR_Status	pshm->P[22080]
#define	P_Hold_Supply_1TR_Module_Status	pshm->P[22081]
#define	P_Hold_Supply_1TR_State_Machine	pshm->P[22082]
#define	P_Hold_Supply_1TR_Seq_Index	pshm->P[22083]
#define	P_Hold_Supply_1TR_Self_Index	pshm->P[22084]
#define	P_Hold_Supply_1TR_Debug_Edge	pshm->P[22085]
#define	P_Buffer_Seqdata_Hold_Supply_1TR_Array(i)	pshm->P[(22086+i)%MAX_P]
#define	P_Hold_Supply_1TR_Timer	pshm->P[22116]
#define	P_Hold_Supply_1TR_Tact_Time_Array(i)	pshm->P[(22117+i)%MAX_P]
#define	P_Hold_Supply_1TR_Tact_Time	pshm->P[22137]
#define	P_PLC01_Hold_Supply_1TR_Memory_RTN	pshm->P[22138]
#define	P_PLC01_Hold_Supply_1TR_Judge_Flag	pshm->P[22139]
#define	P_PLC01_Hold_Supply_1TR_Judge_State_Machine	pshm->P[22140]
#define	P_PLC01_Hold_Supply_1TR_Judge_Status	pshm->P[22141]
#define	P_Plate_1TR_Supply_Module_Judge_Bit	pshm->P[22142]
#define	P_Hold_Supply_Align_Cmd	pshm->P[22143]
#define	P_Hold_Supply_Align_Status	pshm->P[22144]
#define	P_Hold_Supply_Align_Module_Status	pshm->P[22145]
#define	P_Hold_Supply_Align_State_Machine	pshm->P[22146]
#define	P_Hold_Supply_Align_Seq_Index	pshm->P[22147]
#define	P_Hold_Supply_Align_Self_Index	pshm->P[22148]
#define	P_Hold_Supply_Align_Debug_Edge	pshm->P[22149]
#define	P_Buffer_Seqdata_Hold_Supply_Align_Array(i)	pshm->P[(22150+i)%MAX_P]
#define	P_Hold_Supply_Align_Timer	pshm->P[22180]
#define	P_Hold_Supply_Align_Tact_Time_Array(i)	pshm->P[(22181+i)%MAX_P]
#define	P_Hold_Supply_Align_Tact_Time	pshm->P[22201]
#define	P_Hold_Supply_2TR_Cmd	pshm->P[22202]
#define	P_Hold_Supply_2TR_Status	pshm->P[22203]
#define	P_Hold_Supply_2TR_Module_Status	pshm->P[22204]
#define	P_Hold_Supply_2TR_State_Machine	pshm->P[22205]
#define	P_Hold_Supply_2TR_Seq_Index	pshm->P[22206]
#define	P_Hold_Supply_2TR_Self_Index	pshm->P[22207]
#define	P_Hold_Supply_2TR_Debug_Edge	pshm->P[22208]
#define	P_Buffer_Seqdata_Hold_Supply_2TR_Array(i)	pshm->P[(22209+i)%MAX_P]
#define	P_Hold_Supply_2TR_Timer	pshm->P[22239]
#define	P_Hold_Supply_2TR_Tact_Time_Array(i)	pshm->P[(22240+i)%MAX_P]
#define	P_Hold_Supply_2TR_Tact_Time	pshm->P[22260]
#define	P_Hold_Semi_Run_Pos_Move_Cmd	pshm->P[22261]
#define	P_Hold_Semi_Run_Pos_Move_Status	pshm->P[22262]
#define	P_Hold_Semi_Run_Pos_Move_Module_Status	pshm->P[22263]
#define	P_Hold_Semi_Run_Pos_Move_State_Machine	pshm->P[22264]
#define	P_Hold_Semi_Run_Pos_Move_Seq_Index	pshm->P[22265]
#define	P_Hold_Semi_Run_Pos_Move_Self_Index	pshm->P[22266]
#define	P_Hold_Semi_Run_Pos_Move_Debug_Edge	pshm->P[22267]
#define	P_Buffer_Seqdata_Hold_Semi_Run_Pos_Move_Array(i)	pshm->P[(22268+i)%MAX_P]
#define	P_Hold_Semi_Run_Pos_Move_Timer	pshm->P[22298]
#define	P_Hold_Semi_Run_Pos_Move_Tact_Time_Array(i)	pshm->P[(22299+i)%MAX_P]
#define	P_Hold_Semi_Run_Pos_Move_Tact_Time	pshm->P[22319]
#define	P_Act_Complete_Bit(i)	pshm->P[(22320+i)%MAX_P]
#define	P_Act_Old_Time(i)	pshm->P[(22386+i)%MAX_P]
#define	P_Act_Delay_Time(i)	pshm->P[(22452+i)%MAX_P]
#define	P_Act_Suspend_Time_Out_Time	pshm->P[22518]
#define	P_Act_Time_Out(i)	pshm->P[(22519+i)%MAX_P]
#define	P_Test_Sungmin_Flag	pshm->P[22585]
#define	P_Discharge_Possibility_Bit(i)	pshm->P[(22586+i)%MAX_P]
#define	P_HOLD_Exist_Possibility_Bit(i)	pshm->P[(22652+i)%MAX_P]
#define	P_HOLD_NG_Remove_Possibility_Bit(i)	pshm->P[(22718+i)%MAX_P]
#define	P_HOLD_Align_Remove_Possibility_Bit(i)	pshm->P[(22784+i)%MAX_P]
#define	P_HOLD_2TR_Remove_Possibility_Bit(i)	pshm->P[(22850+i)%MAX_P]
#define	P_HOLD_1TR_Supply_Possibility_Bit(i)	pshm->P[(22916+i)%MAX_P]
#define	P_HOLD_Align_Supply_Possibility_Bit(i)	pshm->P[(22982+i)%MAX_P]
#define	P_HOLD_2TR_Supply_Possibility_Bit(i)	pshm->P[(23048+i)%MAX_P]
#define	P_HOLD_Semi_Run_Pos_Possibility_Bit(i)	pshm->P[(23114+i)%MAX_P]
#define	P_Module_Act_Command_Array(i)	pshm->P[(23180+i)%MAX_P]
#define	P_OLD_Module_Act_Command_Array(i)	pshm->P[(23246+i)%MAX_P]
#define	P_Module_Act_State_Machine_Array(i)	pshm->P[(23312+i)%MAX_P]
#define	P_Module_Act_State_Machine_Error_Array(i)	pshm->P[(23378+i)%MAX_P]
#define	P_Suspend_Discharge_Module_Status	pshm->P[23444]
#define	P_Suspend_Discharge_To_Execute_Flag	pshm->P[23445]
#define	P_Suspend_Discharge_Complete_Flag	pshm->P[23446]
#define	P_First_Unloader_Stack_Up_Status	pshm->P[23447]
#define	P_First_Unloader_Stack_FWD_Status	pshm->P[23448]
#define	P_First_Unloader_Grip_Cell_Status	pshm->P[23449]
#define	P_First_Unloader_Stack_BWD_Wait_Status	pshm->P[23450]
#define	P_First_Unloader_Stack_BWD_Status	pshm->P[23451]
#define	P_First_Unloader_Stack_Down_Status	pshm->P[23452]
#define	P_First_Unloader_Avoid_Status	pshm->P[23453]
#define	P_First_Unloader_Turn_Status	pshm->P[23454]
#define	P_First_Unloader_Handover_Status	pshm->P[23455]
#define	P_Cathode_Clamp_OFF_Status	pshm->P[23456]
#define	P_Final_Roll_Discharge_Status	pshm->P[23457]
#define	P_Final_Roll_Stack_Pos_Status	pshm->P[23458]
#define	P_Final_Roll_Stack_Up_Pos_Status	pshm->P[23459]
#define	P_Main_Z_Init_Pos_Status	pshm->P[23460]
#define	P_Sheet_Paper_BWD_Status	pshm->P[23461]
#define	P_Discharge_Vision_DIO_RTN	pshm->P[23462]
#define	P_Discharge_Sub_RTN	pshm->P[23463]
#define	P_Discharge_NG_Code_Report_RTN	pshm->P[23464]
#define	P_Individual_RTN	pshm->P[23465]
#define	P_Suspend_Discharge_Last_Run_Bit	pshm->P[23466]
#define	P_Suspend_Discharge_JR_Result_RTN	pshm->P[23467]
#define	P_ARC_Buffer_Jog_Speed	pshm->P[23468]
#define	P_Selected_Spool_Number	pshm->P[23469]
#define	P_ARC_Home_Check_RTN	pshm->P[23470]
#define	P_Suspend_ARC_Module_Status	pshm->P[23471]
#define	P_Not_Selected_Spool_Radius	pshm->P[23472]
#define	P_Not_Selected_Spool_Circumference	pshm->P[23473]
#define	P_Sensor_To_Sepa_Curr_Distance_mm(i)	pshm->P[(23474+i)%MAX_P]
#define	P_Passive_D_One_Degree_AD_Value	pshm->P[23499]
#define	P_After_ARC_Rotate_Distance	pshm->P[23500]
#define	P_Stack_Vision_NG_Code_Time_Over	pshm->P[23501]
#define	P_Suspend_Discharge_Resume_Flag	pshm->P[23502]
#define	P_Suspend_Discharge_Resume_Complete	pshm->P[23503]
#define	P_Suspend_Discharge_Pause_Flag	pshm->P[23504]
#define	P_Suspend_Monitor_(i)	pshm->P[(23505+i)%MAX_P]
#define	P_Flag_Stack_Work_Host_ID	pshm->P[23515]
#define	P_First_Sepa_Stack_Align_OK_PMAC_Flag	pshm->P[23516]
#define	P_Sepa_Run_Completed_Status_Machine	pshm->P[23517]
#define	P_Discharge_Debug_Edge	pshm->P[23518]
#define	P_Suspend_Discharge_Debug_Address(i)	pshm->P[(23519+i)%MAX_P]
#define	P_Suspend_Discharge_Debug_Value(i)	pshm->P[(23524+i)%MAX_P]
#define	P_Discharge_Sepa_Cutter_Time_Out_State_Machine	pshm->P[23529]
#define	P_Old_Suspend_Discharge_Seq_Index	pshm->P[23530]
#define	P_Discharge_Debug_Index_1	pshm->P[23531]
#define	P_Discharge_Debug_Index_2	pshm->P[23532]
#define	P_Discharge_Debug_Index_3	pshm->P[23533]
#define	P_Discharge_Debug_Index_4	pshm->P[23534]
#define	P_ARC_Debug_Edge	pshm->P[23535]
#define	P_Suspend_ARC_Debug_Address(i)	pshm->P[(23536+i)%MAX_P]
#define	P_Suspend_ARC_Debug_Value(i)	pshm->P[(23541+i)%MAX_P]
#define	P_Old_Suspend_ARC_Seq_Index	pshm->P[23546]
#define	P_ARC_Debug_Index_1	pshm->P[23547]
#define	P_ARC_Debug_Index_2	pshm->P[23548]
#define	P_ARC_Debug_Index_3	pshm->P[23549]
#define	P_ARC_Debug_Index_4	pshm->P[23550]
#define	P_ARC_Ready_Flag(i)	pshm->P[(23551+i)%MAX_P]
#define	P_Suspend_Cutter_Heating_Time	pshm->P[23553]
#define	P_Suspend_Cutter_Heating_Timer	pshm->P[23554]
#define	P_An_1TR_Supply_Debug_Edge	pshm->P[23555]
#define	P_Suspend_An_1TR_Supply_Debug_Address(i)	pshm->P[(23556+i)%MAX_P]
#define	P_Suspend_An_1TR_Supply_Debug_Value(i)	pshm->P[(23561+i)%MAX_P]
#define	P_Old_Suspend_An_1TR_Supply_Seq_Index	pshm->P[23566]
#define	P_An_1TR_Supply_Debug_Index_1	pshm->P[23567]
#define	P_An_1TR_Supply_Debug_Index_2	pshm->P[23568]
#define	P_An_1TR_Supply_Debug_Index_3	pshm->P[23569]
#define	P_An_1TR_Supply_Debug_Index_4	pshm->P[23570]
#define	P_Suspend_Supply_Index	pshm->P[23571]
#define	P_Suspend_Supply_Index_2nd	pshm->P[23572]
#define	P_Anode_Suspend_Supply_Complete(i)	pshm->P[(23573+i)%MAX_P]
#define	P_Suspend_Supply_Pause_Flag	pshm->P[23581]
#define	P_Suspend_Supply_Resume_Flag	pshm->P[23582]
#define	P_Supply_Module_Status	pshm->P[23583]
#define	P_Suspend_Anode_1TR_Supply_Complete_Flag	pshm->P[23584]
#define	P_Suspend_Discharge_Module_Error	pshm->P[23585]
#define	P_Suspend_ARC_Module_Error	pshm->P[23586]
#define	P_Suspend_1st_Supply_Error	pshm->P[23587]
#define	P_Discharge_Seq_Data	pshm->P[23588]
#define	P_Suspend_Discharging_Popup_Flag	pshm->P[23589]
#define	P_Suspend_Discharge_FR_Unclamp_Error_Popup_Flag	pshm->P[23590]
#define	P_Suspend_Discharge_Cathode_Align_Retry_Cal_Error_Popup_Flag	pshm->P[23591]
#define	P_Suspend_Discharge_Anode_Align_Retry_Cal_Error_Popup_Flag	pshm->P[23592]
#define	P_Suspend_Discharge_FR_Discharge_Pos_Error_Popup_Flag	pshm->P[23593]
#define	P_Suspend_Discharge_1st_Unloader_Grip_OFF_Error_Popup_Flag	pshm->P[23594]
#define	P_Suspend_Discharge_1st_Unloader_Up_Error_Popup_Flag	pshm->P[23595]
#define	P_Suspend_Discharge_1st_Unloader_FWD_Error_Popup_Flag	pshm->P[23596]
#define	P_Suspend_Discharge_FR_Clamp_Error_Popup_Flag	pshm->P[23597]
#define	P_Suspend_Discharge_Sepa_Cutter_Heating_Error_Popup_Flag	pshm->P[23598]
#define	P_Suspend_Discharge_1st_Unloader_Grip_Cell_Pos_Error_Popup_Flag	pshm->P[23599]
#define	P_Suspend_Discharge_1st_Unloader_Grip_ON_Error_Popup_Flag	pshm->P[23600]
#define	P_Suspend_Discharge_Sheet_Paper_BWD_Error_Popup_Flag	pshm->P[23601]
#define	P_Suspend_Discharge_Cathode_Clamp_OFF_Error_Popup_Flag	pshm->P[23602]
#define	P_Suspend_Discharge_Sepa_Cutter_FWD_Error_Popup_Flag	pshm->P[23603]
#define	P_Suspend_Discharge_Sheet_Paper_Vacuum_ON_Error_Popup_Flag	pshm->P[23604]
#define	P_Suspend_Discharge_Sepa_Cutter_BWD_Error_Popup_Flag	pshm->P[23605]
#define	P_Suspend_Discharge_1st_Unloader_BWD_Wait_Pos_Error_Popup_Flag	pshm->P[23606]
#define	P_Suspend_Discharge_1st_Unloader_BWD_Error_Popup_Flag	pshm->P[23607]
#define	P_Suspend_Discharge_1st_Unloader_Stack_Down_Error_Popup_Flag	pshm->P[23608]
#define	P_Suspend_Discharge_FR_Stack_Pos_Error_Popup_Flag	pshm->P[23609]
#define	P_Suspend_Discharge_After_Action_Init_Error_Popup_Flag	pshm->P[23610]
#define	P_Suspend_Discharge_1st_Unloader_Avoid_Pos_Error_Popup_Flag	pshm->P[23611]
#define	P_Suspend_Discharge_1st_2nd_Unloader_Handover_Chk_Error_Popup_Flag	pshm->P[23612]
#define	P_Suspend_Discharge_1st_Unloader_Handover_Pos_Error_Popup_Flag	pshm->P[23613]
#define	P_Suspend_Discharge_2nd_3rd_Unloader_Grip_Request_Error_Popup_Flag	pshm->P[23614]
#define	P_Suspend_Discharge_1st_Unloader_Wait_Pos_Error_Popup_Flag	pshm->P[23615]
#define	P_Suspend_Discharge_1st_Unloader_Unuse_Btn_Check_Popup_Flag	pshm->P[23616]
#define	P_Suspend_ARC_Manual_ARC_Active_Popup_Flag	pshm->P[23617]
#define	P_Suspend_ARC_Auto_ARC_Active_Popup_Flag	pshm->P[23618]
#define	P_Suspend_ARC_Pre_Act_Popup_Flag	pshm->P[23619]
#define	P_Suspend_ARC_Dancer_Close_Popup_Flag	pshm->P[23620]
#define	P_Suspend_ARC_Use_Plate_FWD_Popup_Flag	pshm->P[23621]
#define	P_Suspend_ARC_Replace_Plate_Blow_ON_Popup_Flag	pshm->P[23622]
#define	P_Suspend_ARC_Use_Plate_Clamp_Popup_Flag	pshm->P[23623]
#define	P_Suspend_ARC_Use_Plate_Cutter_FWD_Popup_Flag	pshm->P[23624]
#define	P_Suspend_ARC_Use_Plate_Cutter_BWD_Popup_Flag	pshm->P[23625]
#define	P_Suspend_ARC_Use_Plate_Unclamp_Popup_Flag	pshm->P[23626]
#define	P_Suspend_ARC_Use_Plate_BWD_Popup_Flag	pshm->P[23627]
#define	P_Suspend_ARC_Replace_Plate_Blow_OFF_Popup_Flag	pshm->P[23628]
#define	P_Suspend_ARC_Dancer_Open_Popup_Flag	pshm->P[23629]
#define	P_Suspend_ARC_Spool_Change_Popup_Flag	pshm->P[23630]
#define	P_Suspend_ARC_Post_Act_Popup_Flag	pshm->P[23631]
#define	P_Suspend_ARC_Previous_Spool_Remain_Winding_Popup_Flag	pshm->P[23632]
#define	P_Suspend_Discharge_First_Address	pshm->P[23633]
#define	P_Suspend_ARC_First_Address	pshm->P[23634]
#define	P_Status_Stop_Ready_Pos_Move	pshm->P[23635]
#define	P_Cycle_Stop_Stauts	pshm->P[23636]
#define	P_Cycle_Stop_Status_Machine	pshm->P[23637]
#define	P_Cycle_Stop_Flag	pshm->P[23638]
#define	P_Speed_Origin_rtn	pshm->P[23639]
#define	P_Speed_rtn	pshm->P[23640]
#define	P_NG_PNP_Z_Move_rtn	pshm->P[23641]
#define	P_NG_PNP_Z_Move_Check_rtn	pshm->P[23642]
#define	P_NG_PNP_T_Move_rtn	pshm->P[23643]
#define	P_NG_PNP_T_Move_Check_rtn	pshm->P[23644]
#define	P_2nd_Z_Move_rtn	pshm->P[23645]
#define	P_2nd_Z_Move_Check_rtn	pshm->P[23646]
#define	P_2nd_T_Move_rtn	pshm->P[23647]
#define	P_2nd_T_Move_Check_rtn	pshm->P[23648]
#define	P_Stack_Judgement_Memory	pshm->P[23649]
#define	P_Stop_Cycle_Stop_Move_Status	pshm->P[23650]
#define	P_STOP_Initial_Process_Status	pshm->P[23651]
#define	P_Stopping_CycleStop_Init_Flag	pshm->P[23652]
#define	P_Sepa_Timing	pshm->P[23653]
#define	P_Old_Trigger_PLC0	pshm->P[23654]
#define	P_Mode_Command	pshm->P[23655]
#define	P_Current_Mode	pshm->P[23656]
#define	P_MOde_Num(i)	pshm->P[(23657+i)%MAX_P]
#define	P_Command_Depth(i)	pshm->P[(23662+i)%MAX_P]
#define	P_In_Position(i)	pshm->P[(23667+i)%MAX_P]
#define	P_Last_Cycle_Command(i)	pshm->P[(23672+i)%MAX_P]
#define	P_Mode_Command_Buffer	pshm->P[23677]
#define	P_Mode_Command_Wait_Count	pshm->P[23678]
#define	P_Old_Mode_Command	pshm->P[23679]
#define	P_Slave1_Anode_Run_Motion_Array(i)	pshm->P[(23680+i)%MAX_P]
#define	P_Slave2_Anode_Run_Motion_Array(i)	pshm->P[(23780+i)%MAX_P]
#define	P_Slave3_Anode_Run_Motion_Array(i)	pshm->P[(23880+i)%MAX_P]
#define	P_Slave4_Anode_Run_Motion_Array(i)	pshm->P[(23980+i)%MAX_P]
#define	P_Slave5_Anode_Run_Motion_Array(i)	pshm->P[(24080+i)%MAX_P]
#define	P_Slave6_Anode_Run_Motion_Array(i)	pshm->P[(24180+i)%MAX_P]
#define	P_Slave7_Anode_Run_Motion_Array(i)	pshm->P[(24280+i)%MAX_P]
#define	P_Slave8_Anode_Run_Motion_Array(i)	pshm->P[(24380+i)%MAX_P]
#define	P_Slave9_Anode_Run_Motion_Array(i)	pshm->P[(24480+i)%MAX_P]
#define	P_Slave10_Anode_Run_Motion_Array(i)	pshm->P[(24580+i)%MAX_P]
#define	P_Slave15_Anode_Run_Motion_Array(i)	pshm->P[(24680+i)%MAX_P]
#define	P_Slave16_Anode_Run_Motion_Array(i)	pshm->P[(24780+i)%MAX_P]
#define	P_Slave17_Anode_Run_Motion_Array(i)	pshm->P[(24880+i)%MAX_P]
#define	P_Slave18_Anode_Run_Motion_Array(i)	pshm->P[(24980+i)%MAX_P]
#define	P_Slave19_Anode_Run_Motion_Array(i)	pshm->P[(25080+i)%MAX_P]
#define	P_Slave1_Cathode_Run_Motion_Array(i)	pshm->P[(25180+i)%MAX_P]
#define	P_Slave2_Cathode_Run_Motion_Array(i)	pshm->P[(25280+i)%MAX_P]
#define	P_Slave3_Cathode_Run_Motion_Array(i)	pshm->P[(25380+i)%MAX_P]
#define	P_Slave4_Cathode_Run_Motion_Array(i)	pshm->P[(25480+i)%MAX_P]
#define	P_Slave5_Cathode_Run_Motion_Array(i)	pshm->P[(25580+i)%MAX_P]
#define	P_Slave15_Cathode_Run_Motion_Array(i)	pshm->P[(25680+i)%MAX_P]
#define	P_Slave6_Cathode_Run_Motion_Array(i)	pshm->P[(25780+i)%MAX_P]
#define	P_Slave7_Cathode_Run_Motion_Array(i)	pshm->P[(25880+i)%MAX_P]
#define	P_Slave8_Cathode_Run_Motion_Array(i)	pshm->P[(25980+i)%MAX_P]
#define	P_Slave9_Cathode_Run_Motion_Array(i)	pshm->P[(26080+i)%MAX_P]
#define	P_Slave10_Cathode_Run_Motion_Array(i)	pshm->P[(26180+i)%MAX_P]
#define	P_Slave16_Cathode_Run_Motion_Array(i)	pshm->P[(26280+i)%MAX_P]
#define	P_Slave17_Cathode_Run_Motion_Array(i)	pshm->P[(26380+i)%MAX_P]
#define	P_Slave18_Cathode_Run_Motion_Array(i)	pshm->P[(26480+i)%MAX_P]
#define	P_Slave19_Cathode_Run_Motion_Array(i)	pshm->P[(26580+i)%MAX_P]
#define	P_Anode_NG_Unit_Status	pshm->P[26680]
#define	P_Cathode_NG_Unit_Status	pshm->P[26681]
#define	P_ParsingRtn	pshm->P[26682]
#define	P_CurPosData	pshm->P[26683]
#define	P_Hold_MNTR_Supply_1st	pshm->P[26684]
#define	P_TimeOutNumb	pshm->P[26685]
#define	P_PosRtn	pshm->P[26686]
#define	P_MotionRtn	pshm->P[26687]
#define	P_CmdData	pshm->P[26688]
#define	P_Interval	pshm->P[26689]
#define	P_Cont_Ret	pshm->P[26690]
#define	P_Cur_Idx	pshm->P[26691]
#define	P_NextID	pshm->P[26692]
#define	P_Cur_Size	pshm->P[26693]
#define	P_Hold_Exist_Insp	pshm->P[26694]
#define	P_Hold_Remove_NG_PNP	pshm->P[26695]
#define	P_Hold_Remove_Align	pshm->P[26696]
#define	P_Hold_Remove_2TR	pshm->P[26697]
#define	P_Hold_Supply_1TR	pshm->P[26698]
#define	P_Hold_Supply_Align	pshm->P[26699]
#define	P_Hold_Supply_2TR	pshm->P[26700]
#define	P_Hold_Semi_Run	pshm->P[26701]
#define	P_Hold_NG_PNP_Remove	pshm->P[180]
#define	P_Hold_Remove_2nd	pshm->P[182]
#define	P_Hold_Supply_1st	pshm->P[183]
#define	P_Hold_Supply_2nd	pshm->P[185]
#define	P_Hold_Data_process	pshm->P[186]
#define	P_Hold_Semi_Run_Enable_Pos	pshm->P[187]
#define	P_Hold_Existence_Insp	pshm->P[188]
#define	P_Hold_1st_Belt_Move	pshm->P[189]
#define	P_Hold_Motion	pshm->P[190]
#define	P_Hold_Data_process_State_Machine	pshm->P[26702]
#define	P_Hold_Align_Remove_State_Machine	pshm->P[26703]
#define	P_Hold_2nd_Remove_State_Machine	pshm->P[26704]
#define	P_Hold_Supply_1st_State_Machine	pshm->P[26705]
#define	P_Hold_Supply_2nd_State_Machine	pshm->P[26706]
#define	P_Hold_Existence_Insp_State_Machine	pshm->P[26707]
#define	P_Hold_NG_PNP_Remove_State_Machine	pshm->P[26708]
#define	P_Hold_Data_Process_Complete	pshm->P[26709]
#define	P_Hold_Semi_Run_Enable_Pos_State_Machine	pshm->P[26710]
#define	P_HOLD_Existence_Insp_Queue_State_Machine	pshm->P[26711]
#define	P_Hold_Stop_Existence_Insp_STEP	pshm->P[26712]
#define	P_SubMaster_Status_Err	pshm->P[26713]
#define	P_Data_Process_Rtn	pshm->P[26714]
#define	P_Hold_Set_Trigger	pshm->P[26715]
#define	P_Hold_Get_Trigger	pshm->P[26716]
#define	P_Anode_2nd_Data	pshm->P[26717]
#define	P_Anode_Align_Data	pshm->P[26718]
#define	P_Hold_Remove_Step	pshm->P[26719]
#define	P_HList_Head_Idx	pshm->P[26720]
#define	P_Hold_Next_ID	pshm->P[26721]
#define	P_HCmd_List(i)	pshm->P[(26722+i)%MAX_P]
#define	P_Hold_Data_Value	pshm->P[26742]
#define	P_Comb_Bitwise	pshm->P[26743]
#define	P_Target_Cmd	pshm->P[26744]
#define	P_Temp_Bit	pshm->P[26745]
#define	P_Get_ErrorCode	pshm->P[26746]
#define	P_Rtn_Code	pshm->P[26747]
#define	P_Complete_Hold_Bit	pshm->P[26748]
#define	P_HoldMtion_Flag	pshm->P[26749]
#define	P_Ret_BitWise	pshm->P[26750]
#define	P_NotEnough_GetSpace	pshm->P[26751]
#define	P_NotEnough_SetSpace	pshm->P[26752]
#define	P_Check_SetSpace	pshm->P[26753]
#define	P_Hold_Get_Data	pshm->P[26754]
#define	P_Err_NextID_Flag	pshm->P[26755]
#define	P_Elec_Bit	pshm->P[26756]
#define	P_MotionData	pshm->P[26757]
#define	P_DataList(i)	pshm->P[(26758+i)%MAX_P]
#define	P_Hold_Data_Err(i)	pshm->P[(26763+i)%MAX_P]
#define	P_Cur_PosX1	pshm->P[26773]
#define	P_Cur_PosZ1	pshm->P[26774]
#define	P_Cur_PosX2	pshm->P[26775]
#define	P_Cur_PosZ2	pshm->P[26776]
#define	P_Dest_PosX	pshm->P[26777]
#define	P_Dest_PosZ	pshm->P[26778]
#define	P_FailToParse	pshm->P[26779]
#define	P_CurTrigger	pshm->P[26780]
#define	P_TimeOutTrigger	pshm->P[26781]
#define	P_CalcTime	pshm->P[26782]
#define	P_Cycle_Count	pshm->P[26783]
#define	P_MotionTimeOutFlag	pshm->P[26784]
#define	P_Set_Data	pshm->P[26785]
#define	P_Rtn	pshm->P[26786]
#define	P_CurPosTestBit	pshm->P[26787]
#define	P_Hold_Anode_Pause_CHK	pshm->P[26788]
#define	P_Hold_Cathode_Pause_CHK	pshm->P[26789]
#define	P_Surface_Complete_To_Hold	pshm->P[26790]
#define	P_Hold_Motion_Arr(i)	pshm->P[(26791+i)%MAX_P]
#define	P_Hold_Pause_Trg	pshm->P[26811]
#define	P_From_Staring_Flag	pshm->P[26812]
#define	P_Hold_Existence_Insp_Enqueue_Flag	pshm->P[26813]
#define	P_Hold_Rtn	pshm->P[26814]
#define	P_Debug_Existence_Insp_STEP	pshm->P[26815]
#define	P_Hold_Align_Sheet_CHK	pshm->P[26816]
#define	P_Hold_Cathode_Exception_Empty_Flag	pshm->P[26817]
#define	P_Hold_Anode_Exception_Empty_Flag	pshm->P[26818]
#define	P_HOLD_Hold_Process_State_Machine	pshm->P[26819]
#define	P_Hold_Stop_Sheet_Process_STEP	pshm->P[26820]
#define	P_Hold_Debug_Sheet_Process_STEP	pshm->P[26821]
#define	P_Hold_Stop_Point	pshm->P[26822]
#define	P_Hold_CHK	pshm->P[26823]
#define	P_Hold_Test	pshm->P[26824]
#define	P_Anode_1st_Motion_Complete	pshm->P[26825]
#define	P_Anode_2nd_Motion_Complete	pshm->P[26826]
#define	P_Anode_NG_PNP_Motion_Complete	pshm->P[26827]
#define	P_Cathode_1st_Motion_Complete	pshm->P[26828]
#define	P_Cathode_2nd_Motion_Complete	pshm->P[26829]
#define	P_Cathode_NG_PNP_Motion_Complete	pshm->P[26830]
#define	P_Anode_1st_Picker_Motion_Complete	pshm->P[26831]
#define	P_Cathode_1st_Picker_Motion_Complete	pshm->P[26832]
#define	P_individual_return	pshm->P[26833]
#define	P_individual_return2	pshm->P[26834]
#define	P_HoldCurPosBit1	pshm->P[26835]
#define	P_HoldCurPosBit2	pshm->P[26836]
#define	P_Parsing_Status	pshm->P[26837]
#define	P_Sel_Obj	pshm->P[26838]
#define	P_Sel_Elec	pshm->P[26839]
#define	P_Error	pshm->P[26840]
#define	P_Vision_FirstSepa_Complete	pshm->P[26841]
#define	P_NG_PNP_Turn_TM	pshm->P[26842]
#define	P_NG_PNP_Turn_TS	pshm->P[26843]
#define	P_NG_PNP_Turn_TA	pshm->P[26844]
#define	P_NG_PNP_Up_TM	pshm->P[26845]
#define	P_NG_PNP_Up_TS	pshm->P[26846]
#define	P_NG_PNP_Up_TA	pshm->P[26847]
#define	P_NG_PNP_Down_TM	pshm->P[26848]
#define	P_NG_PNP_Down_TS	pshm->P[26849]
#define	P_NG_PNP_Down_TA	pshm->P[26850]
#define	P_NG_PNP_Vac_Time	pshm->P[26851]
#define	P_NG_PNP_Blow_Time	pshm->P[26852]
#define	P_Slow_NG_Mode_Btn	pshm->P[26853]
#define	P_HOLD_Memory_Tower_Offset	pshm->P[26854]
#define	P_Hold_Pause_Use	pshm->P[26855]
#define	P_Hold_Err_MNTR(i)	pshm->P[(26856+i)%MAX_P]
#define	P_Hold_Err_Data_Save(i)	pshm->P[(26860+i)%MAX_P]
#define	P_Hold_Err_Action_Data_Save(i)	pshm->P[(26868+i)%MAX_P]
#define	P_Hold_Motion_Err_Chk	pshm->P[26876]
#define	P_Hold_Memory_Tower_Err_Pos(i)	pshm->P[(26877+i)%MAX_P]
#define	P_Hold_Motion_TimeOut	pshm->P[26892]
#define	P_Hold_Data_OK	pshm->P[26893]
#define	P_VISION_TRG_PLC4_AnodeSurface_Ins_Shoot	pshm->P[26894]
#define	P_VISION_TRG_PLC4_CathodeSurface_Ins_Shoot	pshm->P[26895]
#define	P_Memory_Tower_Test	pshm->P[26896]
#define	P_Temp_Run_Mode	pshm->P[26897]
#define	P_Data_Idx	pshm->P[26898]
#define	P_Get_Data_Idx	pshm->P[26899]
#define	P_HOLD_Data_Err_Queue	pshm->P[26900]
#define	P_HOLD_Data_Err_State_Machine	pshm->P[26901]
#define	P_HOLD_Err_Set_Data	pshm->P[26902]
#define	P_HOLD_Err_Save	pshm->P[26903]
#define	P_Sepa_Run_Completed_Flag	pshm->P[26904]
#define	P_Buffer_Seqdata_MSA_Array(i)	pshm->P[(26905+i)%MAX_P]
#define	P_Buffer_Seqdata_Align_Take_Off_Array(i)	pshm->P[(26955+i)%MAX_P]
#define	P_VISION_MSA_Align_Module_Complete_Bit(i)	pshm->P[(27005+i)%MAX_P]
#define	P_Module_Manual_MSA_Act_Command_Array(i)	pshm->P[(27105+i)%MAX_P]
#define	P_OLD_Module_Manual_MSA_Act_Command_Array(i)	pshm->P[(27205+i)%MAX_P]
#define	P_Module_MSA_Act_State_Machine_Array(i)	pshm->P[(27305+i)%MAX_P]
#define	P_VISION_MSA_Seq_Stopping_Point(i)	pshm->P[(27405+i)%MAX_P]
#define	P_Align_Take_Off_Module_Complete_Bit(i)	pshm->P[(27438+i)%MAX_P]
#define	P_Module_Manual_Align_Take_Off_Act_Command_Array(i)	pshm->P[(27538+i)%MAX_P]
#define	P_OLD_Module_Manual_Align_Take_Off_Act_Command_Array(i)	pshm->P[(27638+i)%MAX_P]
#define	P_Module_Align_Take_Off_Act_State_Machine_Array(i)	pshm->P[(27738+i)%MAX_P]
#define	P_Log_Data_Y	pshm->P[27838]
#define	P_Log_Data_M	pshm->P[27839]
#define	P_Log_Data_D	pshm->P[27840]
#define	P_Log_Data_H	pshm->P[27841]
#define	P_Log_Data_m	pshm->P[27842]
#define	P_Log_Data_s	pshm->P[27843]
#define	P_MNTR_End_Index	pshm->P[27844]
#define	P_BG_CPLC_Running_MNTR	pshm->P[50]
#define	P_RTI_CPLC_Running_MNTR	pshm->P[51]
#define	P_Log_Start_Flag	pshm->P[170]
#define	P_Log_Document_Remove_Flag	pshm->P[171]
#define	P_Sepa_ID_Change_Flag	pshm->P[172]
#define	P_USB_Register	pshm->P[173]
#define	P_Cur_Line_Check	pshm->P[175]
#define	P_Cur_Line_Check_Init	pshm->P[176]
#define	P_Buffer_Judge_Trg(i)	pshm->P[(27845+i)%MAX_P]
#define	P_Hold_Pass	pshm->P[27855]
#define	P_PLC01_Queue_MNTR(i)	pshm->P[(27856+i)%MAX_P]
#define	P_PLC01_Total_Step_Flag	pshm->P[27871]
#define	P_PLC02_Total_Step_Flag	pshm->P[27872]
#define	P_PLC014_Total_Step_Flag	pshm->P[27873]
#define	P_PLC02_Total_Step_Flag2	pshm->P[27874]
#define	P_Vac_Pass	pshm->P[27875]
#define	P_Vision_Pass_Exisitence	pshm->P[27876]
#define	P_Vision_Pass_Empty	pshm->P[27877]
#define	P_Vision_Pass_FirstSepa	pshm->P[27878]
#define	P_Vision_Pass_Stack_Inspection	pshm->P[27879]
#define	P_ULD_Home_Pass	pshm->P[27880]
#define	P_Clamp_Cell_Down_Use	pshm->P[27881]
#define	P_FR_Clamp_Use_Test	pshm->P[27882]
#define	P_Door_Interlock_Use_Flag	pshm->P[27883]
#define	P_Vacuum_Door_Clear_Use	pshm->P[27884]
#define	P_Align_Test_Pos	pshm->P[27885]
#define	P_PLC01_Exe_Is_Ena_Step_Flag(i)	pshm->P[(27886+i)%MAX_P]
#define	P_PLC01_Exe_Fist_Sepa_Step_Flag(i)	pshm->P[(27896+i)%MAX_P]
#define	P_PLC01_Exe_Prod_Step_Flag(i)	pshm->P[(27906+i)%MAX_P]
#define	P_PLC01_HOLD_Insp_Step_Flag(i)	pshm->P[(27911+i)%MAX_P]
#define	P_PLC01_HOLD_Main_Step_Flag(i)	pshm->P[(27921+i)%MAX_P]
#define	P_PLC01_Sus_Discharge_Step_Flag(i)	pshm->P[(27936+i)%MAX_P]
#define	P_PLC01_Sus_ARC_Step_Flag(i)	pshm->P[(27946+i)%MAX_P]
#define	P_PLC01_STOP_Init_Step_Flag(i)	pshm->P[(27956+i)%MAX_P]
#define	P_PLC01_STOP_Cycle_ST_Step_Flag(i)	pshm->P[(27966+i)%MAX_P]
#define	P_PLC02_Exe_Module_First_Sepa_Step_Flag	pshm->P[27981]
#define	P_PLC02_Sus_Module_Discharge_Step_Flag	pshm->P[27982]
#define	P_PLC02_Sus_Module_ARC_Step_Flag	pshm->P[27983]
#define	P_PLC02_Sus_Module_1TR_Supply_Step_Flag	pshm->P[27984]
#define	P_PLC02_HOLD_Module_Insp_Step_Flag	pshm->P[27985]
#define	P_PLC02_HOLD_Module_Remove_NGPNP_Step_Flag	pshm->P[27986]
#define	P_PLC02_HOLD_Module_Remove_Align_Step_Flag	pshm->P[27987]
#define	P_PLC02_HOLD_Module_Remove_2TR_Step_Flag	pshm->P[27988]
#define	P_PLC02_HOLD_Module_Supply_1TR_Step_Flag	pshm->P[27989]
#define	P_PLC02_HOLD_Module_Supply_Align_Step_Flag	pshm->P[27990]
#define	P_PLC02_HOLD_Module_Supply_2TR_Step_Flag	pshm->P[27991]
#define	P_PLC02_HOLD_Module_SemiRun_Pos_Step_Flag	pshm->P[27992]
#define	P_PLC14_STOP_Module_Cycle_Stop_Step_Flag	pshm->P[27993]
#define	P_PLC02_Discharge_MNTR	pshm->P[27994]
#define	P_NEW_Alarm_USE_Flag	pshm->P[27995]
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
#define	P_Error_Index_Number	pshm->P[27996]
#define	P_ECAT_MNTR_Bit	pshm->P[27997]
#define	P_Local_MNTR_Bit	pshm->P[27998]
#define	P_Clamp_Motion_VER1	pshm->P[27999]
#define	P_CA_DR_Ta	pshm->P[28000]
#define	P_CA_DR_Ts	pshm->P[28001]
#define	P_CA_DR_Tm	pshm->P[28002]
#define	P_CA_DR_Td	pshm->P[28003]
#define	P_CA_DR_Tsd	pshm->P[28004]
#define	P_AN_DR_Ta	pshm->P[28005]
#define	P_AN_DR_Ts	pshm->P[28006]
#define	P_AN_DR_Tm	pshm->P[28007]
#define	P_AN_DR_Td	pshm->P[28008]
#define	P_AN_DR_Tsd	pshm->P[28009]
#define	P_First_Sepa_1st_Driving_Move	pshm->P[28010]
#define	P_AN_Cam_Total_Time	pshm->P[28011]
#define	P_CA_Cam_Total_Time	pshm->P[28012]
#define	P_Dry_Run_BTN	pshm->P[28013]
#define	P_Home_Angle_Offset_change_Bit	pshm->P[28014]
#define	P_InterLock_Motor_Num	pshm->P[28015]
#define	P_Recipe_Move_IL_Loop	pshm->P[28016]
#define	P_Z_Var	pshm->P[28017]
#define	P_No1_Recipe_Pos_IL(i)	pshm->P[(28018+i)%MAX_P]
#define	P_No2_Recipe_Pos_IL(i)	pshm->P[(28071+i)%MAX_P]
#define	P_No3_Recipe_Pos_IL(i)	pshm->P[(28124+i)%MAX_P]
#define	P_No4_Recipe_Pos_IL(i)	pshm->P[(28177+i)%MAX_P]
#define	P_No5_Recipe_Pos_IL(i)	pshm->P[(28230+i)%MAX_P]
#define	P_No6_Recipe_Pos_IL(i)	pshm->P[(28283+i)%MAX_P]
#define	P_No7_Recipe_Pos_IL(i)	pshm->P[(28336+i)%MAX_P]
#define	P_No8_Recipe_Pos_IL(i)	pshm->P[(28389+i)%MAX_P]
#define	P_No9_Recipe_Pos_IL(i)	pshm->P[(28442+i)%MAX_P]
#define	P_No10_Recipe_Pos_IL(i)	pshm->P[(28495+i)%MAX_P]
#define	P_Recipe_POS_Interock_M(i)	pshm->P[(28548+i)%MAX_P]
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
,P_BTN_Sepa_Stack_Mode=8473
,P_Anode_X_Sum_Move_mm=8504
,P_Cathode_X_Sum_Move_mm=8505
,P_Anode_Align_Stage_TM=8506
,P_Anode_Align_Stage_TS=8507
,P_Anode_Align_Stage_TA=8508
,P_Cathode_Align_Stage_TM=8509
,P_Cathode_Align_Stage_TS=8510
,P_Cathode_Align_Stage_TA=8511
,P_X_Move_Recipe_Percent=8512
,P_PC_Jog_Motor_No=4301
,P_PC_Jog_Speed=4254
,P_Custom_Speed=4500
,P_Jog_Position=4300
,P_Anode_Recipe_Count=8544
,P_Cathode_Recipe_Count=8545
,P_Anode_1st_T_Belt_To_Align=8595
,P_Anode_1st_T_Align_To_Belt=8596
,P_Anode_1st_T_Ready=8597
,P_Recipe_A_1st_Z_Belt_Down=8598
,P_Recipe_A_1st_Z_Belt_Up=8599
,P_Recipe_A_1st_Z_Align_Down=8600
,P_Recipe_A_1st_Z_Align_Up=8601
,P_Recipe_A_1st_Z_Ready_Up=8602
,P_Recipe_A_1st_Z_Ready_Down=8603
,P_Anode_1st_Z_Belt_Down=8604
,P_Anode_1st_Z_Belt_Up=8605
,P_Anode_1st_Z_Align_Down=8606
,P_Anode_1st_Z_Align_Up=8607
,P_Anode_1st_Z_Ready_Up=8608
,P_Anode_1st_Z_Ready_Down=8609
,P_Anode_2st_T_Align_To_Stack=8610
,P_Anode_2st_T_Stack_To_Align=8611
,P_Recipe_A_2st_Z_Align_Up=8612
,P_Recipe_A_2st_Z_Align_Down=8613
,P_Recipe_A_2st_Z_Stack_Up=8614
,P_Recipe_A_2st_Z_Stack_Down=8615
,P_Recipe_A_2st_Z_Ready_Up=8616
,P_Recipe_A_2st_Z_Ready_Down=8617
,P_Anode_2nd_Z_Align_Up=8618
,P_Anode_2nd_Z_Align_Down=8619
,P_Anode_2nd_Z_Stack_Up=8620
,P_Anode_2nd_Z_Stack_Down=8621
,P_Anode_2nd_Z_Ready_Up=8622
,P_Anode_2st_Z_Ready_Down=8623
,P_Anode_Clamp_Y1_On_1st=8624
,P_Anode_Clamp_Y1_On_2nd=8625
,P_Anode_Clamp_Y1_On_3rd=8626
,P_Anode_Clamp_Y1_On_4th=8627
,P_Anode_Clamp_Y1_Off_1st=8628
,P_Anode_Clamp_Y1_Off_2nd=8629
,P_Anode_Clamp_Y1_Off_3rd=8630
,P_Anode_Clamp_Y2_On_1st=8631
,P_Anode_Clamp_Y2_On_2nd=8632
,P_Anode_Clamp_Y2_On_3rd=8633
,P_Anode_Clamp_Y2_On_4th=8634
,P_Anode_Clamp_Y2_Off_1st=8635
,P_Anode_Clamp_Y2_Off_2nd=8636
,P_Anode_Clamp_Y2_Off_3rd=8637
,P_Anode_Clamp_Z1_On_1st=8638
,P_Anode_Clamp_Z1_On_2nd=8639
,P_Anode_Clamp_Z1_On_3rd=8640
,P_Anode_Clamp_Z1_On_4th=8641
,P_Anode_Clamp_Z1_Off_1st=8642
,P_Anode_Clamp_Z1_Off_2nd=8643
,P_Anode_Clamp_Z1_Off_3rd=8644
,P_Anode_Clamp_Z1_Down=8645
,P_Final_Roll_X_Sepa_1st=8646
,P_Final_Roll_X_Sepa_2nd=8647
,P_Final_Roll_X_Sepa_3rd=8648
,P_Final_Roll_X_Sepa_4th=8649
,P_Final_Roll_X_Sepa_5th=8650
,P_Final_Roll_X_Anode_Move=8651
,P_Final_Roll_X_Discharge=8652
,P_Final_Roll_X_Cathode_Move=8653
,P_Final_Roll_X_Run_Wait_Pos=8654
,P_Final_Roll_Z_Ready_And_Cutting=8655
,P_Final_Roll_Z_Run_Pos=8656
,P_Final_Roll_Z_Sepa_3rd=8657
,P_Final_Roll_Z_Sepa_4th=8658
,P_Final_Roll_Z_Sepa_5th=8659
,P_Stack_Table_Z_For_Sepa=8660
,P_Stack_Table_Z_For_Run=8661
,P_Stack_Table_Z_For_Init=8662
,P_Cathode_Clamp_Y1_On_1st=8663
,P_Cathode_Clamp_Y1_On_2nd=8664
,P_Cathode_Clamp_Y1_On_3rd=8665
,P_Cathode_Clamp_Y1_On_4th=8666
,P_Cathode_Clamp_Y1_Off_1st=8667
,P_Cathode_Clamp_Y1_Off_2nd=8668
,P_Cathode_Clamp_Y1_Off_3rd=8669
,P_Cathode_Clamp_Y2_On_1st=8670
,P_Cathode_Clamp_Y2_On_2nd=8671
,P_Cathode_Clamp_Y2_On_3rd=8672
,P_Cathode_Clamp_Y2_On_4th=8673
,P_Cathode_Clamp_Y2_Off_1st=8674
,P_Cathode_Clamp_Y2_Off_2nd=8675
,P_Cathode_Clamp_Y2_Off_3rd=8676
,P_Cathode_Clamp_Z1_On_1st=8677
,P_Cathode_Clamp_Z1_On_2nd=8678
,P_Cathode_Clamp_Z1_On_3rd=8679
,P_Cathode_Clamp_Z1_On_4th=8680
,P_Cathode_Clamp_Z1_Off_1st=8681
,P_Cathode_Clamp_Z1_Off_2nd=8682
,P_Cathode_Clamp_Z1_Off_3rd=8683
,P_Cathode_Clamp_Z1_Down=8684
,P_Cathode_2st_T_Align_To_Stack=8685
,P_Cathode_2st_T_Stack_To_Align=8686
,P_Slave8_Target_X_Align_To_Stack_1st=8687
,P_Slave8_Target_X_Align_To_Stack_2nd=8688
,P_Slave8_Target_X_Stack_To_Align_1st=8689
,P_Slave8_Target_X_Stack_To_Align_2nd=8690
,P_Slave8_Target_X_Stack_To_Align_3rd=8691
,P_Cathode_2nd_Z_Align_Up=8692
,P_Cathode_2nd_Z_Align_Down=8693
,P_Cathode_2nd_Z_Stack_Up=8694
,P_Cathode_2nd_Z_Stack_Down=8695
,P_Cathode_2nd_Z_Ready_Up=8696
,P_Cathode_2st_Z_Ready_Down=8697
,P_Recipe_C_2st_Z_Align_Up=8698
,P_Recipe_C_2st_Z_Align_Down=8699
,P_Recipe_C_2st_Z_Stack_Up=8700
,P_Recipe_C_2st_Z_Stack_Down=8701
,P_Recipe_C_2st_Z_Ready_Up=8702
,P_Recipe_C_2st_Z_Ready_Down=8703
,P_Cathode_1st_T_Belt_To_Align=8704
,P_Cathode_1st_T_Align_To_Belt=8705
,P_Cathode_1st_T_Ready=8706
,P_Cathode_1st_Z_Belt_Down=8707
,P_Cathode_1st_Z_Belt_Up=8708
,P_Cathode_1st_Z_Align_Down=8709
,P_Cathode_1st_Z_Align_Up=8710
,P_Cathode_1st_Z_Ready_Up=8711
,P_Cathode_1st_Z_Ready_Down=8712
,P_Recipe_C_1st_Z_Belt_Down=8713
,P_Recipe_C_1st_Z_Belt_Up=8714
,P_Recipe_C_1st_Z_Align_Down=8715
,P_Recipe_C_1st_Z_Align_Up=8716
,P_Recipe_C_1st_Z_Ready_Up=8717
,P_Recipe_C_1st_Z_Ready_Down=8718
,P_1st_Sheet_Paper_X_FWD=8719
,P_1st_Sheet_Paper_X_BWD=8720
,P_Cathode_NG_T_NG_To_Align=8721
,P_Cathode_NG_T_Align_To_NG=8722
,P_Cathode_NG_Z_NG_Down=8723
,P_Cathode_NG_Z_NG_Up=8724
,P_Cathode_NG_Z_Align_Down=8725
,P_Cathode_NG_Z_Align_Up=8726
,P_Anode_NG_T_NG_To_Align=8727
,P_Anode_NG_T_Align_To_NG=8728
,P_Anode_NG_Z_NG_Down=8729
,P_Anode_NG_Z_NG_Up=8730
,P_Anode_NG_Z_Align_Down=8731
,P_Anode_NG_Z_Align_Up=8732
,P_1st_ULD_X_Stack=8733
,P_1st_ULD_X_FWD=8734
,P_1st_ULD_X_Init_Pos=8735
,P_1st_ULD_X_Target_BWD=8736
,P_1st_ULD_Z_Stack=8737
,P_1st_ULD_Z_Cutting_For_Cell=8738
,P_1st_ULD_Z_Discharge_For_Cell=8739
,P_1st_ULD_Z_Target_Down=8740
,P_1st_ULD_T_Wait=8741
,P_1st_ULD_T_Avoid_Angle=8742
,P_1st_ULD_T_90_Angle=8743
,P_2nd_PNP_Stack_Down_Pos=8744
,P_2nd_PNP_Stack_Up_Pos=8745
,P_Anode_Clamp_Down_MNTR=8746
,P_Cathode_Clamp_Down_MNTR=8747
,P_FR_Ta=8748
,P_FR_Ts=8749
,P_FR_Tm=8750
,P_Anode_2TR_Avoid=8751
,P_Cathode_2TR_Avoid=8752
,P_Force_Stop_Flag=8753
,P_Execute_DryRun_Stop_Timer=8754
,P_DryRun_Timer=8755
,P_Dryrun_Operating_Time=8756
,P_Anode_Align_Vac_Err_On=8757
,P_Cathode_Align_Vac_Err_On=8758
,P_Anode_1ST_TR_Vac_Err_On=8759
,P_Anode_2ND_TR_Vac_Err_On=8760
,P_Cathode_1ST_TR_Vac_Err_On=8761
,P_Cathode_2ND_TR_Vac_Err_On=8762
,P_MNTR_PLC0_Task_Max_Time=8765
,P_MNTR_PLC1_Task_Max_Time=8768
,P_MNTR_PLC2_Task_Max_Time=8771
,P_MNTR_PLC3_Task_Max_Time=8774
,P_MNTR_PLC4_Task_Max_Time=8777
,P_MNTR_PLC5_Task_Max_Time=8780
,P_MNTR_PLC6_Task_Max_Time=8783
,P_MNTR_PLC7_Task_Max_Time=8786
,P_MNTR_PLC8_Task_Max_Time=8789
,P_MNTR_PLC9_Task_Max_Time=8792
,P_MNTR_PLC10_Task_Max_Time=8795
,P_MNTR_PLC11_Task_Max_Time=8798
,P_MNTR_PLC12_Task_Max_Time=8801
,P_MNTR_PLC13_Task_Max_Time=8804
,P_MNTR_PLC14_Task_Max_Time=8807
,P_MNTR_PLC15_Task_Max_Time=8810
,P_MNTR_PLC16_Task_Max_Time=8813
,P_MNTR_PLC17_Task_Max_Time=8816
,P_MNTR_PLC18_Task_Max_Time=8819
,P_MNTR_PLC19_Task_Max_Time=8822
,P_MNTR_PLC20_Task_Max_Time=8825
,P_MNTR_PLC21_Task_Max_Time=8828
,P_MNTR_PLC22_Task_Max_Time=8831
,P_MNTR_PLC23_Task_Max_Time=8834
,P_MNTR_PLC24_Task_Max_Time=8837
,P_MNTR_PLC25_Task_Max_Time=8840
,P_MNTR_PLC26_Task_Max_Time=8843
,P_MNTR_PLC27_Task_Max_Time=8846
,P_MNTR_PLC28_Task_Max_Time=8849
,P_MNTR_PLC29_Task_Max_Time=8852
,P_MNTR_PLC30_Task_Max_Time=8855
,P_In_Pos_Trg=8856
,P_Position_Calc_Status=8857
,P_PNP_Pos=8872
,P_Execute_Manage_Mode=8873
,P_Align_NG_Tack_Flag=8874
,P_Anode_Align_OK_Flag=8875
,P_Anode_Align_NG_Flag=8876
,P_Cathode_Align_OK_Flag=8877
,P_Cathode_Align_NG_Flag=8878
,P_Stack_Table_OK_Flag=8879
,P_Anode_Retry_OK_Flag=8880
,P_Anode_Retry_NG_Flag=8881
,P_Cathode_Retry_OK_Flag=8882
,P_Cathode_Retry_NG_Flag=8883
,P_Anode_Surf_Insp_Trigger=8884
,P_Cathode_Surf_Insp_Trigger=8885
,P_First_Anode_Sheet_Supply_Flag=8886
,P_First_Cathode_Sheet_Supply_Flag=8887
,P_Cathode_Cur_Mode=8888
,P_Anode_Cur_Mode=8889
,P_Anode_Run_FR_Move_Check_AI=8890
,P_Cathode_Run_FR_Move_Check_AI=8891
,P_FR_Move_Check_AI_OffSet=8892
,P_Aver_FR_AI_Value=8898
,P_Process_Function_Command=8899
,P_HOLD_Existence_Insp_State_Machine=8900
,P_Execute_IsEnable_State_Machine=8901
,P_EXECUTE_FUNC_Ready_STEP=8902
,P_Execute_First_Sepa_Ontable_State_Machine=8903
,P_Execute_Prod_Manage_State_Machine=8904
,P_Execute_Enqueue_State_Machine=8905
,P_STOP_Initial_Process_STEP=8906
,P_STOP_Cylce_Stop_STEP=8907
,P_Stop_CycleStop_Position=8908
,P_Upcount_NextStep=8909
,P_SUSPEND_FUNC_JR_Discharge_STEP=8910
,P_SUSPEND_FUNC_ARC_STEP=8911
,P_Suspend_ARC_Complete_Flag=8912
,P_EXECUTE_FUNC_Debug_On_Sepa_STEP=8913
,P_QueueCommand_Occurs=8914
,P_EXECUTE_STEP=8915
,P_SUSPEND_STEP=8916
,P_HOLD_STEP=8917
,P_STOP_STEP=8918
,P_EXECUTE_Error_STEP=8919
,P_SUSPEND_Error_STEP=8920
,P_HOLD_Error_STEP=8921
,P_STOP_Error_STEP=8922
,P_Queue_Enqueue_Command=8923
,P_Queue_Enqueue_return=8924
,P_Queue_Dequeue_Command=8925
,P_Queue_Dequeue_return=8926
,P_Queue_Peek_Command=8927
,P_Dummy_Dequeue=8948
,P_Queue_Command_Status=8949
,P_Queue_Process_Command=8950
,P_Queue_Process_Status=8951
,P_Coord_Test=8952
,P_Coord_Test3=8953
,P_Coord_Test2=8954
,P_Coord_Motion_Prog_Down_Entering_Bit=8955
,P_PMAC_Coord_Status_Bit=8956
,P_Coord_Down_Check_Bit=8957
,P_PMAC_Coord_Down_Inspection_Flag=8958
,P_PMAC_Coord_Down_Num=8959
,P_PMAC_Coord_Error_Status=8960
,P_PLC01_Process_Function_Enter_Flag=9181
,P_PLC01_SubMotion_Active=9182
,P_PLC01_SlaveMotion_Active=9183
,P_EXECUTE_Isenable_MNTR=9184
,P_EXECUTE_IsEnable_Firt_Stacking_Flag=9185
,P_PLC01_Execute_Retry_Sepa_Mode_Count=9186
,P_SUSPEND_MNTR=9187
,P_SUSPEND_MNTR_2=9188
,P_Execute_Last_Run_Flag=9189
,P_Suspend_ARC_Request_Flag=9190
,P_Hold_Queue_Exist_Insp_MNTR=9191
,P_CirQueue_Status_Value=9192
,P_Debug_CirQueue_Status=9193
,P_Front_Index=9194
,P_Rear_Index=9195
,P_Index_Max=9196
,P_CirQueue_Length=9208
,P_Queue_Full=9209
,P_Queue_Empty=9210
,P_Queue_PeekEmpty=9211
,P_Self_items=9212
,P_Hold_Resume_Need_Flag=9213
,P_Stack_Heart_Bit_Timer=9214
,P_Stack_Heart_Bit_Calc=9215
,P_Stack_Heart_Bit_Sync_State_Machine=9216
,P_Pause_Anode_MNTR_Min_Trigger=9217
,P_Pause_Anode_MNTR_Max_Trigger=9218
,P_Pause_Cathode_MNTR_Min_Trigger=9219
,P_Pause_Cathode_MNTR_Max_Trigger=9220
,P_Pause_Protect_Variable=9221
,P_Resume_Protect_Variable=9222
,P_Sepa_Mode_Opposite_Resume_Free=9223
,P_Sepa_To_Normal_Mode_Sync_Flag=9224
,P_Sepa_To_Normal_Mode_Sync_Err_Avoid=9225
,P_Pause_Time_Flag=9226
,P_Puase_Resume_Time_Check=9227
,P_Pause_To_Resume_Time=9228
,P_Pause_Error_Avoid_Count=9229
,P_Pause_Error_Debug_Flag=9230
,P_Pause_Error_Debug_P_PMAC_status=9231
,P_Pause_Error_Debug_M_Y_Pause_Cathode_Signal=9232
,P_Pause_Error_Debug_M_Y_Pause_Anode_Signal=9233
,P_Pause_Error_Debug_M_Y_Pause_Status_Complete_Signal=9234
,P_Pause_Error_Debug_P_Sepa_To_Normal_Mode_Sync_Err_Avoid=9235
,P_Pause_Error_Debug_P_Master_Motion_Trigger=9236
,P_Pause_Error_Debug_M_X_Opposite_Resume_Not_Free=9237
,P_Pause_Error_Debug_P_Opposite_Lane_P_PMAC_Status=9238
,P_Pause_Error_Debug_M_X_Pause_Status_Complete_Signal=9239
,P_Pause_Error_Debug_M_X_PLC_Sync_Heart_Bit=9240
,P_Pause_Error_Debug_P_Old_X_PLC_Sync_Heart_Bit=9241
,P_Pause_Error_Debug_Buffer_P_PMAC_status=9242
,P_Pause_Error_Debug_Buffer_M_Y_Pause_Cathode_Signal=9243
,P_Pause_Error_Debug_Buffer_M_Y_Pause_Anode_Signal=9244
,P_Pause_Error_Debug_Buffer_M_Y_Pause_Status_Complete_Signal=9245
,P_Pause_Error_Debug_Buffer_P_Sepa_To_Normal_Mode_Sync_Err_Avoid=9246
,P_Pause_Error_Debug_Buffer_P_Master_Motion_Trigger=9247
,P_Pause_Error_Debug_Buffer_M_X_Opposite_Resume_Not_Free=9248
,P_Pause_Error_Debug_Buffer_P_Opposite_Lane_P_PMAC_Status=9249
,P_Pause_Error_Debug_Buffer_M_X_Pause_Status_Complete_Signal=9250
,P_Pause_Error_Debug_Buffer_M_X_PLC_Sync_Heart_Bit=9251
,P_Pause_Error_Debug_Buffer_P_Old_X_PLC_Sync_Heart_Bit=9252
,P_X_Axis_Num=9553
,P_Y_Axis_Num=9554
,P_Z_Axis_Num=9555
,P_ZZ_Axis_Num=9556
,P_X_Unit=9557
,P_Y_Unit=9558
,P_Z_Unit=9559
,P_ZZ_Unit=9560
,P_Pos_Memory_Bit_Save=9561
,P_Total_Unit_Bit=9562
,P_Total_Unit_Pos=9563
,P_Anode_1st_Unit_Status=9564
,P_Anode_2nd_Unit_Status=9565
,P_Anode_CLP_Unit_Status=9566
,P_FinalRoll_Unit_Status=9567
,P_StackTable_Unit_Status=9568
,P_Cathode_CLP_Unit_Status=9569
,P_Cathode_2nd_Unit_Status=9570
,P_Cathode_1st_Unit_Status=9571
,P_1st_Unloader_Unit_Status=9572
,P_Cathode_NG_PNP_Status=9573
,P_Anode_NG_PNP_Status=9574
,P_Unit_integrated_Status=9575
,P_Unit_Status_Update_Flag=9576
,P_Memory_Tower_Search_Flag=9577
,P_MemTow_integrated_return=9578
,P_Error_STMS_Memory_Tower_Status=9579
,P_STMS_Memory_Tower_Status=9580
,P_Memory_Tower_X_Err_Flag=10131
,P_Memory_Tower_Y_Err_Flag=10132
,P_Memory_Tower_Z_Err_Flag=10133
,P_Memory_Tower_ZZ_Err_Flag=10134
,P_CA_Clamp_Cell_Down_Pos=10135
,P_AN_Clamp_Cell_Down_Pos=10136
,P_PNP_Abort_Use_Bit=10233
,P_PNP_Abort_Use_Total_Bit=10234
,P_C_1st_PNP_FWD_Abort_Use_Bit=10235
,P_C_1st_PNP_BWD_Abort_Use_Bit=10236
,P_C_2nd_PNP_FWD_Abort_Use_Bit=10237
,P_C_2nd_PNP_BWD_Abort_Use_Bit=10238
,P_A_1st_PNP_FWD_Abort_Use_Bit=10239
,P_A_1st_PNP_BWD_Abort_Use_Bit=10240
,P_A_2nd_PNP_FWD_Abort_Use_Bit=10241
,P_A_2nd_PNP_BWD_Abort_Use_Bit=10242
,P_Single_Motor_Control_Bit=10243
,P_C_1st_PNP_FWD_Abort_Calc_Bit=10244
,P_C_1st_PNP_BWD_Abort_Calc_Bit=10245
,P_C_2nd_PNP_FWD_Abort_Calc_Bit=10246
,P_C_2nd_PNP_BWD_Abort_Calc_Bit=10247
,P_A_1st_PNP_FWD_Abort_Calc_Bit=10248
,P_A_1st_PNP_BWD_Abort_Calc_Bit=10249
,P_A_2nd_PNP_FWD_Abort_Calc_Bit=10250
,P_A_2nd_PNP_BWD_Abort_Calc_Bit=10251
,P_C_1st_PNP_FWD_Cur_Pos=10252
,P_C_1st_PNP_FWD_Cur_Vel=10253
,P_C_1st_PNP_BWD_Cur_Pos=10254
,P_C_1st_PNP_BWD_Cur_Vel=10255
,P_C_2nd_PNP_FWD_Cur_Pos=10256
,P_C_2nd_PNP_FWD_Cur_Vel=10257
,P_C_2nd_PNP_BWD_Cur_Pos=10258
,P_C_2nd_PNP_BWD_Cur_Vel=10259
,P_A_1st_PNP_FWD_Cur_Pos=10260
,P_A_1st_PNP_FWD_Cur_Vel=10261
,P_A_1st_PNP_BWD_Cur_Pos=10262
,P_A_1st_PNP_BWD_Cur_Vel=10263
,P_A_2nd_PNP_FWD_Cur_Pos=10264
,P_A_2nd_PNP_FWD_Cur_Vel=10265
,P_A_2nd_PNP_BWD_Cur_Pos=10266
,P_A_2nd_PNP_BWD_Cur_Vel=10267
,P_C_1st_PNP_FWD_Limit_Pos=10268
,P_C_1st_PNP_BWD_Limit_Pos=10269
,P_C_2nd_PNP_FWD_Limit_Pos=10270
,P_C_2nd_PNP_BWD_Limit_Pos=10271
,P_A_1st_PNP_FWD_Limit_Pos=10272
,P_A_1st_PNP_BWD_Limit_Pos=10273
,P_A_2nd_PNP_FWD_Limit_Pos=10274
,P_A_2nd_PNP_BWD_Limit_Pos=10275
,P_C_1st_PNP_FWD_Max_Limit_Pos=10276
,P_C_1st_PNP_BWD_Max_Limit_Pos=10277
,P_C_2nd_PNP_FWD_Max_Limit_Pos=10278
,P_C_2nd_PNP_BWD_Max_Limit_Pos=10279
,P_A_1st_PNP_FWD_Max_Limit_Pos=10280
,P_A_1st_PNP_BWD_Max_Limit_Pos=10281
,P_A_2nd_PNP_FWD_Max_Limit_Pos=10282
,P_A_2nd_PNP_BWD_Max_Limit_Pos=10283
,P_C_1st_PNP_FWD_Remain_Stroke=10284
,P_C_1st_PNP_BWD_Remain_Stroke=10285
,P_C_2nd_PNP_FWD_Remain_Stroke=10286
,P_C_2nd_PNP_BWD_Remain_Stroke=10287
,P_A_1st_PNP_FWD_Remain_Stroke=10288
,P_A_1st_PNP_BWD_Remain_Stroke=10289
,P_A_2nd_PNP_FWD_Remain_Stroke=10290
,P_A_2nd_PNP_BWD_Remain_Stroke=10291
,P_C_1st_PNP_FWD_Stroke_Time=10292
,P_C_1st_PNP_BWD_Stroke_Time=10293
,P_C_2nd_PNP_FWD_Stroke_Time=10294
,P_C_2nd_PNP_BWD_Stroke_Time=10295
,P_A_1st_PNP_FWD_Stroke_Time=10296
,P_A_1st_PNP_BWD_Stroke_Time=10297
,P_A_2nd_PNP_FWD_Stroke_Time=10298
,P_A_2nd_PNP_BWD_Stroke_Time=10299
,P_C_1st_PNP_FWD_Max_Speed=10300
,P_C_1st_PNP_BWD_Max_Speed=10301
,P_C_2nd_PNP_FWD_Max_Speed=10302
,P_C_2nd_PNP_BWD_Max_Speed=10303
,P_A_1st_PNP_FWD_Max_Speed=10304
,P_A_1st_PNP_BWD_Max_Speed=10305
,P_A_2nd_PNP_FWD_Max_Speed=10306
,P_A_2nd_PNP_BWD_Max_Speed=10307
,P_C_1st_PNP_FWD_ACC_Dis=10308
,P_C_1st_PNP_BWD_ACC_Dis=10309
,P_C_2nd_PNP_FWD_ACC_Dis=10310
,P_C_2nd_PNP_BWD_ACC_Dis=10311
,P_A_1st_PNP_FWD_ACC_Dis=10312
,P_A_1st_PNP_BWD_ACC_Dis=10313
,P_A_2nd_PNP_FWD_ACC_Dis=10314
,P_A_2nd_PNP_BWD_ACC_Dis=10315
,P_C_1st_PNP_FWD_AbortTa=10316
,P_C_1st_PNP_FWD_AbortTs=10317
,P_C_1st_PNP_BWD_AbortTa=10318
,P_C_1st_PNP_BWD_AbortTs=10319
,P_C_2nd_PNP_FWD_AbortTa=10320
,P_C_2nd_PNP_FWD_AbortTs=10321
,P_C_2nd_PNP_BWD_AbortTa=10322
,P_C_2nd_PNP_BWD_AbortTs=10323
,P_A_1st_PNP_FWD_AbortTa=10324
,P_A_1st_PNP_FWD_AbortTs=10325
,P_A_1st_PNP_BWD_AbortTa=10326
,P_A_1st_PNP_BWD_AbortTs=10327
,P_A_2nd_PNP_FWD_AbortTa=10328
,P_A_2nd_PNP_FWD_AbortTs=10329
,P_A_2nd_PNP_BWD_AbortTa=10330
,P_A_2nd_PNP_BWD_AbortTs=10331
,P_C_1st_PNP_FWD_Abort_Dec_Offset=10332
,P_C_1st_PNP_BWD_Abort_Dec_Offset=10333
,P_C_2nd_PNP_FWD_Abort_Dec_Offset=10334
,P_C_2nd_PNP_BWD_Abort_Dec_Offset=10335
,P_A_1st_PNP_FWD_Abort_Dec_Offset=10336
,P_A_1st_PNP_BWD_Abort_Dec_Offset=10337
,P_A_2nd_PNP_FWD_Abort_Dec_Offset=10338
,P_A_2nd_PNP_BWD_Abort_Dec_Offset=10339
,P_Abort_Init_Value=10700
,P_C_1st_PNP_FWD_AbortTa_Buffer=10701
,P_C_1st_PNP_FWD_AbortTs_Buffer=10702
,P_C_1st_PNP_BWD_AbortTa_Buffer=10703
,P_C_1st_PNP_BWD_AbortTs_Buffer=10704
,P_C_2nd_PNP_FWD_AbortTa_Buffer=10705
,P_C_2nd_PNP_FWD_AbortTs_Buffer=10706
,P_C_2nd_PNP_BWD_AbortTa_Buffer=10707
,P_C_2nd_PNP_BWD_AbortTs_Buffer=10708
,P_A_1st_PNP_FWD_AbortTa_Buffer=10709
,P_A_1st_PNP_FWD_AbortTs_Buffer=10710
,P_A_1st_PNP_BWD_AbortTa_Buffer=10711
,P_A_1st_PNP_BWD_AbortTs_Buffer=10712
,P_A_2nd_PNP_FWD_AbortTa_Buffer=10713
,P_A_2nd_PNP_FWD_AbortTs_Buffer=10714
,P_A_2nd_PNP_BWD_AbortTa_Buffer=10715
,P_A_2nd_PNP_BWD_AbortTs_Buffer=10716
,P_C_1st_PNP_FWD_Restore_Bit=10717
,P_C_1st_PNP_BWD_Restore_Bit=10718
,P_C_2nd_PNP_FWD_Restore_Bit=10719
,P_C_2nd_PNP_BWD_Restore_Bit=10720
,P_A_1st_PNP_FWD_Restore_Bit=10721
,P_A_1st_PNP_BWD_Restore_Bit=10722
,P_A_2nd_PNP_FWD_Restore_Bit=10723
,P_A_2nd_PNP_BWD_Restore_Bit=10724
,P_Align_Inspection_Time=10725
,P_Front_Inspection_Time=10726
,P_Stack_Inspection_Time=10727
,P_Existence_Inspection_Time=10728
,P_EmptyTable_Inspection_Time=10729
,P_FirstSepa_Inspection_Time=10730
,P_Vision_Anode_Sepa_Mode_Stack_Command=10731
,P_Vision_Cathode_Sepa_Mode_Stack_Command=10732
,P_Cathode_Sepa_Mode_Timer=10733
,P_Anode_Sepa_Mode_Timer=10734
,P_Vision_Pass=10735
,P_FirstSepa_Ret=10736
,P_Vision_Align_Command=10737
,P_Vision_Surface_Command=10738
,P_Vision_Stack_Command=10739
,P_Vision_Existence_Command=10740
,P_Vision_EmptyTable_Command=10741
,P_Vision_FirstSepa_Command=10742
,P_Selected_Align_Inspection_Unit=10743
,P_Selected_Surface_Inspection_Unit=10744
,P_Selected_Stack_Inspection_Unit=10745
,P_Selected_Existence_Inspection_Unit=10746
,P_Selected_EmptyTable_Inspection_Unit=10747
,P_Set_Cathode_Align_Zero_Pos=10748
,P_Set_Anode_Align_Zero_Pos=10749
,P_Vision_Align_State_Machine=10750
,P_Vision_Surface_State_Machine=10751
,P_Vision_Stack_State_Machine=10752
,P_Vision_Existence_State_Machine=10753
,P_Vision_EmptyTable_State_Machine=10754
,P_Vision_FirstSepa_State_Machine=10755
,P_Vision_Align_Status=10756
,P_Vision_Surface_Status=10757
,P_Vision_Stack_Status=10758
,P_Vision_Existence_Status=10759
,P_Vision_EmptyTable_Status=10760
,P_Vision_FirstSepa_Status=10761
,P_Cathode_Align_Table_Move=10764
,P_Anode_Align_Table_Move=10765
,P_Vision_Anode_Cell_Existence=10766
,P_Vision_Cathode_Cell_Existence=10767
,P_Align_Sheet_CHK=10768
,P_Anode_NG_Code=10769
,P_Cathode_NG_Code=10770
,P_Stack_NG_Code=10771
,P_Cathode_Align_Continuous_NG_Alarm_Flag=10772
,P_Anode_Align_Continuous_NG_Alarm_Flag=10773
,P_Cathode_Retry_Continuous_NG_Alarm_Flag=10774
,P_Anode_Retry_Continuous_NG_Alarm_Flag=10775
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
,P_Stop_Debug_Flag=10776
,P_Stop_Status_Check_Address=10899
,P_Stop_Status_Save_Address=10900
,P_Stop_Check_RTN=10901
,P_Old_Total_Unit_Bit=10906
,P_Memory_Tower_Dec_Result=10907
,P_PNP_Move_Timer=10917
,P_PNP_Move_Delay_Time=10918
,P_Stop_Memory_Pos_RTN=10919
,P_Slave1_Motion_Command=10920
,P_Slave2_Motion_Command=10921
,P_Slave3_Motion_Command=10922
,P_Slave4_Motion_Command=10923
,P_Slave5_Motion_Command=10924
,P_Slave6_Motion_Command=10925
,P_Slave7_Motion_Command=10926
,P_Slave8_Motion_Command=10927
,P_Slave9_Motion_Command=10928
,P_Slave10_Motion_Command=10929
,P_Slave11_Motion_Command=10930
,P_Slave12_Motion_Command=10931
,P_Slave13_Motion_Command=10932
,P_Slave14_Motion_Command=10933
,P_Slave15_Motion_Command=10934
,P_Slave16_Motion_Command=10935
,P_Slave17_Motion_Command=10936
,P_Slave18_Motion_Command=10937
,P_Slave19_Motion_Command=10938
,P_Slave20_Motion_Command=10939
,P_PNP_90_Deg_TM=10940
,P_PNP_90_Deg_TA=10941
,P_PNP_90_Deg_TS=10942
,P_PNP_Ready_TM=10943
,P_PNP_Ready_TA=10944
,P_PNP_Ready_TS=10945
,P_PNP_45_Deg_TM=10946
,P_PNP_45_Deg_TA=10947
,P_PNP_45_Deg_TS=10948
,P_Unloader_TM_Test=10949
,P_Unloader_TA_Test=10950
,P_PROG_21_Program_Ver=2781
,P_PROG_23_Program_Ver=2783
,P_PROG_24_Program_Ver=2784
,P_PROG_25_Program_Ver=2785
,P_PROG_26_Program_Ver=2786
,P_PROG_27_Program_Ver=2787
,P_PROG_28_Program_Ver=2788
,P_PROG_30_Program_Ver=2790
,P_Master_Motion_Trigger=10951
,P_Parity_Bit=10952
,P_Master_Move=10953
,P_Master_TA=10954
,P_Master_TS=10955
,P_Master_TM=10956
,P_Anode_Count=10957
,P_Cathode_Count=10958
,P_Anode_Thickness=10959
,P_Cathode_Thickness=10960
,P_Sepa_Thickness=10961
,P_Anode_Thickness_PLC=10962
,P_Cathode_Thickness_PLC=10963
,P_Sepa_Thickness_PLC=10964
,P_Spool_Enable=11482
,P_Cathode_1St_Flow_Chart_Bit_Flag=11483
,P_Cathode_AT_Flow_Chart_Bit_Flag=11484
,P_Cathode_2nd_Flow_Chart_Bit_Flag=11485
,P_Anode_Clamp_Flow_Chart_Bit_Flag=11486
,P_Final_Roll_Flow_Chart_Bit_Flag=11487
,P_Stack_Table_Flow_Chart_Bit_Flag=11488
,P_Cathode_Clamp_Flow_Chart_Bit_Flag=11489
,P_Anode_2nd_Flow_Chart_Bit_Flag=11490
,P_Anode_AT_Flow_Chart_Bit_Flag=11491
,P_Anode_1St_Flow_Chart_Bit_Flag=11492
,P_Sepa_Unwinder_Flow_Chart_Bit_Flag=11493
,P_Slave5_Target_Z_For_Cutting=11494
,P_Slave31_Motion_Command=11495
,P_Pause_Err_Process=11496
,P_Pause_Err_Timer=11497
,P_Pause_Err_Count=11498
,P_Pause_Err_Use=11499
,P_Pause_Err_Use2=11500
,P_Anode_Pause_Signal_Err=11501
,P_Cathode_Pause_Signal_Err=11502
,P_Anode_Pause_Err=11503
,P_Anode_Pause_Err_Count=11504
,P_Execute_Wait_Mode_Memory_Tower=11515
,P_Execute_Vac_MNTR=11516
,P_Old_Cathode_Cur_Mode=11517
,P_Old_Anode_Cur_Mode=11558
,P_Anode_1TR_T_Belt_To_Align=11599
,P_Anode_1TR_T_Align_To_Belt=11600
,P_Anode_1TR_T_Ready_Pos=11601
,P_Anode_1TR_T_Ready_To_Align=11602
,P_Anode_1TR_T_Ready_To_Belt=11603
,P_Anode_Picker_Turn=11604
,P_Anode_2TR_T_Align_To_Stack=11605
,P_Anode_2TR_T_Stack_To_Align=11606
,P_Anode_Clamp_Off=11607
,P_Anode_Clamp_On=11608
,P_Anode_Clamp_Down=11609
,P_FR_Anode_Motion=11610
,P_FR_Cathode_Motion=11611
,P_Stack_Table_Down=11612
,P_Cathode_Clamp_On=11613
,P_Cathode_Clamp_Off=11614
,P_Cathode_Clamp_Down=11615
,P_Cathode_2TR_T_Align_To_Stack=11616
,P_Cathode_2TR_T_Stack_To_Align=11617
,P_Cathode_Picker_Turn=11618
,P_Cathode_1TR_T_Belt_To_Align=11619
,P_Cathode_1TR_T_Align_To_Belt=11620
,P_Cathode_1TR_T_Ready_Pos=11621
,P_Cathode_1TR_T_Ready_To_Align=11622
,P_Cathode_1TR_T_Ready_To_Belt=11623
,P_Anode_1TR_Z_Belt_To_Align=11624
,P_Anode_1TR_Z_Align_To_Belt=11625
,P_Anode_1TR_Z_Align_Down=11626
,P_Anode_1TR_Z_Align_UP=11627
,P_Anode_1TR_Z_Belt_Down=11628
,P_Anode_1TR_Z_Belt_UP=11629
,P_Anode_1TR_Z_Ready=11630
,P_Anode_1TR_Z_Align_Blow=11631
,P_Anode_1TR_Z_Belt_Vac=11632
,P_Cathode_1TR_Z_Belt_To_Align=11633
,P_Cathode_1TR_Z_Align_To_Belt=11634
,P_Cathode_1TR_Z_Align_Down=11635
,P_Cathode_1TR_Z_Align_UP=11636
,P_Cathode_1TR_Z_Belt_Down=11637
,P_Cathode_1TR_Z_Belt_UP=11638
,P_Cathode_1TR_Z_Ready=11639
,P_Cathode_1TR_Z_Align_Blow=11640
,P_Cathode_1TR_Z_Belt_Vac=11641
,P_Anode_2TR_Align_To_Stack=11642
,P_Anode_2TR_Stack_To_Align=11643
,P_Anode_2TR_Stack_Down=11644
,P_Anode_2TR_Stack_UP=11645
,P_Anode_2TR_Align_Down=11646
,P_Anode_2TR_Align_UP=11647
,P_Anode_2TR_Align_Vac=11648
,P_Anode_2TR_Stack_Blow=11649
,P_Anode_2TR_Stack_Sepa_Blow=11650
,P_FR_Last_Run_Motion=11651
,P_Servo_Dancer_Ready_Pos=11652
,P_Servo_Dancer_Ready_Offset=11653
,P_Servo_Dancer_Test=11654
,P_Align_Start_IO_Judgment=11655
,P_Driving_Clamp2=11656
,P_Driving_Clamp=11657
,P_MSA_Timer=11658
,P_SM_Cathode_Stack_MSA=11659
,P_SM_Anode_Stack_MSA=11660
,P_SM_Cathode_Align_MSA=11661
,P_SM_Anode_Align_MSA=11662
,P_MSA_Interlock=11663
,P_Anode_MSA_Final_Roll_Pos_Check=11664
,P_Anode_MSA_2nd_PNP_Pos_Check=11665
,P_Anode_MSA_1nd_PNP_Pos_Check=11666
,P_MSA_Err_Save_CA_Stack_MSA=11667
,P_MSA_Err_Save_AN_Stack_MSA=11668
,P_MSA_Err_Save_CA_Align_MSA=11669
,P_MSA_Err_Save_AN_Align_MSA=11670
,P_MSA_BTN_Err=11671
,P_Anode_Algin_MSA_RTN=11672
,P_Anode_Algin_MSA_RTN2=11673
,P_Cathode_Algin_MSA_RTN=11674
,P_Cathode_Stack_MSA_RTN=11675
,P_Anode_Stack_MSA_RTN=11676
,P_Anode_Align_MSA_Count=11677
,P_Cathode_Align_MSA_Count=11678
,P_Anode_Stack_MSA_Count=11679
,P_Cathode_Stack_MSA_Count=11680
,P_Cathode_Align_Stop_Blocked=11681
,P_Anode_Align_Stop_Blocked=11682
,P_Cathode_Stack_Stop_Blocked=11683
,P_Anode_Stack_Stop_Blocked=11684
,P_Anode_Align_MSA_Execute_Timer=11685
,P_Cathode_Align_MSA_Execute_Timer=11686
,P_Anode_Stack_MSA_Execute_Timer=11687
,P_Cathode_Stack_MSA_Execute_Timer=11688
,P_Anode_Align_Interlock_Blocked=11689
,P_Cathode_Align_Interlock_Blocked=11690
,P_Anode_Stack_Interlock_Blocked=11691
,P_Cathode_Stack_Interlock_Blocked=11692
,P_Anode_1TR_T_Align_POS=11693
,P_Anode_1TR_T_Belt_POS=11694
,P_Anode_1TR_T_Ready_POS=11695
,P_Anode_2TR_T_Align_POS=11696
,P_Anode_2TR_T_Stack_POS=11697
,P_Cathode_2TR_T_Align_POS=11698
,P_Cathode_2TR_T_Stack_POS=11699
,P_Cathode_1TR_T_Align_POS=11700
,P_Cathode_1TR_T_Belt_POS=11701
,P_Cathode_1TR_T_Ready_POS=11702
,P_Seq_Abort=11703
,P_Blocked_Abort=11704
,P_Abort_Flag=11705
,P_Opposite_Lane_1ST_TR_Safe_Pos=11706
,P_Opposite_Lane_P_PMAC_Status=11707
,P_Opposite_Lane_OFF_Not_Start=11708
,P_Pause_Alarm_Blocked=11709
,P_Old_Alarm_Arr=11710
,P_Cycle_Stop_Delay_Time=11711
,P_Cycle_Stop_Offset=11712
,P_Opposite_Lane_Abort_Alram_Flag=11713
,P_Cathode_Clmap_Y1_Ready_Pos=11714
,P_Cathode_Clmap_Y1_Clamp_Pos=11715
,P_Anode_Clmap_Y1_Ready_Pos=11716
,P_Anode_Clmap_Y1_Clamp_Pos=11717
,P_Cathode_Clmap_Y2_Ready_Pos=11718
,P_Cathode_Clmap_Y2_Clamp_Pos=11719
,P_Anode_Clmap_Y2_Ready_Pos=11720
,P_Anode_Clmap_Y2_Clamp_Pos=11721
,P_Cathode_Clamp_Z2_Ready_Pos=11722
,P_Cathode_Clamp_Z2_Clamp_Pos=11723
,P_Anode_Clamp_Z2_Ready_Pos=11724
,P_Anode_Clamp_Z2_Clamp_Pos=11725
,P_Cathode_Clamp_Z1_Ready_Pos=11726
,P_Cathode_Clamp_Z1_Clamp_Pos=11727
,P_Anode_Clamp_Z1_Ready_Pos=11728
,P_Anode_Clamp_Z1_Clamp_Pos=11729
,P_Cathode_Clamp_Z2_Cell_Down=11730
,P_Anode_Clamp_Z2_Cell_Down=11731
,P_Cathode_Clamp_Z1_Cell_Down=11732
,P_Anode_Clamp_Z1_Cell_Down=11733
,P_Single_Run_Pass=11734
,P_Cathode_2nd_PNP_Sepa_Blow=11735
,P_Cathode_2nd_PNP_Align_Blow=11736
,P_Cathode_2nd_PNP_Stack_Blow=11737
,P_Cathode_2nd_PNP_Align_Vac=11738
,P_Cathode_2nd_PNP_Align_Up_Motion=11739
,P_Cathode_2nd_PNP_Align_Down_Motion=11740
,P_Cathode_2nd_PNP_Stack_Up_Motion=11741
,P_Cathode_2nd_PNP_Stack_Down_Motion=11742
,P_Cathode_2nd_PNP_Stack_To_Align_Motion=11743
,P_Cathode_2nd_PNP_Align_To_Stack_Motion=11744
,P_Door_Open_Stop_Count=11745
,P_Buf_Stack_NG_Flag=11746
,P_Stop_1st_PNP_Move=11747
,P_Seq_Abort_Timer=11748
,P_Sync_Test=11749
,P_Dry_Pause_Flag=11750
,P_Dry_Run_Pasue_Timer=11751
,P_Resume_Stop_Blocked=11752
,P_Discharge_Wait=11753
,P_Command_Run_Flag=11754
,P_Stop_Cmd_Origin=11755
,P_Old_M_Y_Sepa_Cutter_SSR_On=11771
,P_Sepa_Cutter_SSR_Off_Time=11772
,P_Sepa_Cutter_SSR_Off=11773
,P_Sepa_Cutter_SSR_Off_Timer=11774
,P_Starting_Pause_IO_Flag=11775
,P_PLC03_Seq_Pause_Start_Flag=11776
,P_PLC03_Seq_Pause_Start_State_Machine=11777
,P_PLC03_Seq_Pause_Start_Status=11778
,P_ARC_NP_Push_BTN=11779
,P_ARC_UI_Push_BTN=11780
,P_M_Manual_ARC_BTN=11781
,P_Two_Btn_Active_Flag=11782
,P_Two_Btn_Interlock_Time=11783
,P_NP_Unwinder_Active_Hold=11784
,P_MAX_KGF=11785
,P_KGF_TO_DAC_RATIO=11786
,P_Dac_Out_Value=11787
,P_Recipe_Dancer_input_kgf=11788
,P_Cathode_NG_PNP_Vel_Zero_Set=11789
,P_Anode_NG_PNP_Vel_Zero_Set=11790
,P_NG_Box_Open_Popup_Flag=11791
,P_Anode_Run_DR=11792
,P_Cathode_Run_DR=11793
,P_1st_UND_Grip_Time=11794
,P_1st_UND_Grip_Time_offset=11795
,P_1st_UND_Grip_Time_offset2=11796
,P_First_Sepa_Driving_Use=11797
,P_First_Sepa_Driving_Timing=11798
,P_Unloader_Safe_rtn=11799
,P_Final_Start=11800
,P_Driving_Start=11801
,P_Starting_Pause_IO_OFF_Flag=11802
,P_individual_Hold_return=11803
,P_individual_Hold_return2=11804
,P_Tension_Ready_Pass=11805
,P_Discharge_cal_rtn=11806
,P_Old_Tact_Current_Mode=11807
,P_Sheet_Clear=11808
,P_Anode_Clamp_On_Time2=11809
,P_Anode_Clamp_On_Time=11810
,P_Cathode_Clamp_On_Time=11811
,P_Cathode_Clamp_On_Time2=11812
,P_Offset=11813
,P_Man_C=11814
,P_NG_Box_Stop_Use=11815
,P_SlewTime=11816
,P_Old_SlewTime=11817
,P_Resume_MNTR1=11818
,P_Resume_MNTR2=11819
,P_Resume_MNTR3=11820
,P_Resume_MNTR4=11821
,P_Resume_MNTR5=11822
,P_Resume_MNTR6=11823
,P_Resume_MNTR7=11824
,P_Resume_MNTR8=11825
,P_Resume_MNTR9=11826
,P_Resume_MNTR10=11827
,P_Resume_MNTR11=11828
,P_Resume_MNTR12=11829
,P_old_P_Anode_Count=11830
,P_Sheet_Paper_BWD_Count=11831
,P_Stop_CHK=11832
,P_Seq_Pause=11833
,P_Seq_Pause2=11834
,P_MSA_TimeBase_Rtn=11835
,P_Old_Vison_Read_EPC_Camera_Move_Request=11836
,P_First_Sepa_Time_Out_Count=11837
,P_Align_Retry_Cal_RTN=11838
,P_Driving_Cal=11855
,P_Driving_End_Pos=11856
,P_Driving_Start_Pos=11857
,P_Anode_Align_Blow=11863
,P_Cathode_Align_Blow=11864
,P_Home_Pos_Err_Cnt1=11905
,P_Home_Pos_Err_Cnt2=11906
,P_Home_Pos_Err_Cnt3=11907
,P_Home_Pos_Err_Cnt4=11908
,P_Align_Inspection_Delay=11909
,P_Anode_Sheet_Test=11915
,P_Cathode_Sheet_Test=11916
,P_Anode_Sheet_Interlock_Timing=11917
,P_Cathode_Sheet_Interlock_Timing=11918
,P_Discharge_Err_MNTR=11919
,P_Arc_Err_MNTR=11920
,P_Abort_Cnt=11921
,P_EMO_Cnt=11922
,P_Dry_Run_Inspection=11923
,P_Servo_ON_MNTR1=11924
,P_Servo_ON_MNTR2=11925
,P_Servo_ON_MNTR3=11926
,P_Servo_ON_MNTR4=11927
,P_Servo_ON_MNTR5=11928
,P_Servo_ON_MNTR6=11929
,P_Servo_ON_MNTR7=11930
,P_Servo_ON_MNTR8=11931
,P_Servo_ON_MNTR9=11932
,P_Servo_ON_MNTR10=11933
,P_Servo_ON_MNTR11=11934
,P_Servo_ON_MNTR12=11935
,P_Servo_ON_MNTR13=11936
,P_Servo_ON_MNTR14=11937
,P_Servo_ON_MNTR15=11938
,P_Servo_ON_MNTR16=11939
,P_Servo_ON_MNTR17=11940
,P_Servo_ON_MNTR18=11941
,P_Servo_ON_MNTR19=11942
,P_Servo_ON_MNTR20=11943
,P_Servo_ON_MNTR21=11944
,P_Servo_ON_MNTR22=11945
,P_Servo_ON_MNTR23=11946
,P_Servo_ON_MNTR24=11947
,P_Servo_ON_MNTR25=11948
,P_Servo_ON_MNTR26=11949
,P_Servo_ON_MNTR27=11950
,P_Servo_ON_MNTR28=11951
,P_Servo_ON_MNTR29=11952
,P_Servo_ON_MNTR30=11953
,P_X_IO_WinMess_Connect_BTN=11954
,P_Ecat_ReConnetion_State_Machine=11955
,P_Ecat_Reconnection_Timer=11956
,P_Y_Ecat_Reconnecting=11957
,P_Y_Ecat_ReConnection_Fail=11958
,P_Y_Ecat_ReConnection_Complete=11959
,P_X_Ecat_Reconnection_BTN=11960
,P_X_PLC_Setup_Mode_Check=11961
,P_Interlock_On_Off_Flag=11962
,P_X_Old_MC_Reconnect_BTN_Signal=11963
,P_BTN_1st_ULD_Data_Clear=11964
,P_Old_BTN_1st_ULD_Data_Clear=11965
,P_Old_M_Y_1st_Unloader_UnGrip_Sol=11966
,P_Sepa_Cutter_Heat_Meter=11967
,P_Sepa_Cutter_Heating_Timer=11968
,P_Middle_Skip_Off_Flag=11969
,P_Stop_MNTR1=11970
,P_Stop_MNTR2=11971
,P_Sheet_Pos_Offset=11972
,P_Stopping_Wait_Time=11973
,P_Stopping_Test_Timer=11974
,P_1st_ULD_OK_Lamp=11985
,P_1st_ULD_NG_Lamp=11986
,P_1st_ULD_Sample_QC_Lamp=11987
,P_Proceed_Execute_Flag=11988
,P_Continuous_Call_Stack_NG_Flag=11989
,P_Continuous_Call_Stack_OK_Flag=11990
,P_Cathode_Picker_Home_Pos=11991
,P_Anode_Picker_Home_Pos=11992
,P_FR_Sheet_Paper_Home_Chk=11993
,P_Align_TimeOut1=11994
,P_Align_TimeOut2=11995
,P_Align_TimeOut3=11996
,P_Align_TimeOut4=11997
,P_Align_TimeOut5=11998
,P_Align_TimeOut6=11999
,P_Anode_Align_OK=12000
,P_Cathode_Align_OK=12001
,P_Anode_Align_NG=12002
,P_Cathode_Align_NG=12003
,P_Anode_Align_TimeOut=12004
,P_Cathode_Align_TimeOut=12005
,P_Anode_Surf_OK=12006
,P_Cathode_Surf_OK=12007
,P_Anode_Surf_NG=12008
,P_Cathode_Surf_NG=12009
,P_Anode_Surf_TimeOut=12010
,P_Cathode_Surf_TimeOut=12011
,P_Surf_TimeOut1=12012
,P_Surf_TimeOut2=12013
,P_Surf_TimeOut3=12014
,P_Surf_TimeOut4=12015
,P_Surf_TimeOut5=12016
,P_Surf_TimeOut6=12017
,P_Anode_Stack_TimeOut=12018
,P_Cathode_Stack_TimeOut=12019
,P_Anode_Stack_OK=12020
,P_Cathode_Stack_OK=12021
,P_Anode_Stack_NG=12022
,P_Cathode_Stack_NG=12023
,P_Stack_TimeOut1=12024
,P_Stack_TimeOut2=12025
,P_Stack_TimeOut3=12026
,P_Align_Move_Err=12027
,P_Ecat_Test=12028
,P_Scan_Aver=12031
,P_Scan_MAX=12032
,P_Cathode_1TR_Picker_T_Belt_POS=12033
,P_Cathode_1TR_Picker_T_Align_POS=12034
,P_Anode_1TR_Picker_T_Belt_POS=12035
,P_Anode_1TR_Picker_T_Align_POS=12036
,P_1TR_Picker_T_Align_POS=12037
,P_AVRG_Lower_Sepa_Thickness_mm=12038
,P_AVRG_Upper_Sepa_Thickness_mm=12039
,P_PLC06_Upper_Curr_Unwinder_Thickness_mm=12040
,P_PLC06_Lower_Curr_Unwinder_Thickness_mm=12041
,P_Upper_Curr_Spool_Radius=12042
,P_Lower_Curr_Spool_Radius=12043
,P_PLC06_Curr_Upper_Distance_mm=12044
,P_PLC06_Curr_Lower_Distance_mm=12045
,P_Upper_Sepa_Min_Distance_mm=12046
,P_Lower_Sepa_Min_Distance_mm=12047
,P_PLC06_Sepa_Change_Set=12048
,P_Upper_Sepa_To_Sensor_Min_Dis=12049
,P_Upper_Sepa_To_Sensor_Max_Dis=12050
,P_Upper_Sensor_To_Unwinder_Core_Dis=12051
,P_Upper_Sensor_Min_AD=12052
,P_Upper_Sensor_Max_AD=12053
,P_Lower_Sepa_To_Sensor_Min_Dis=12054
,P_Lower_Sepa_To_Sensor_Max_Dis=12055
,P_Lower_Sensor_To_Unwinder_Core_Dis=12056
,P_Lower_Sensor_Min_AD=12057
,P_Lower_Sensor_Max_AD=12058
,M_AI_Upper_Sepa_Sensing=372
,M_AI_Lower_Sepa_Sensing=373
,P_Status_NP_BTN_Lower_Unwinder=12059
,P_Status_NP_BTN_Upper_Unwinder=12060
,P_Driving_CamTable_Scale_Change_Flag=12061
,P_FR_Driving_Diameter=12062
,P_FR_Driving_Floating_Point=12063
,P_FR_Driving_Reward=12064
,P_Unwinder_Master_Following_Use_Flag=12065
,P_Unwinder_Master_Following_On=12066
,P_Old_Master_Following_Start=12067
,P_Unwinder_Master_Following_Scale=12068
,P_Unwinder_Jog_Use_Flag=12069
,P_Old_Jog_Start=12070
,P_Unwinder_Jog_Total_Time=12071
,P_Unwinder_Ta=12072
,P_Unwinder_Ts=12073
,P_Unwinder_Tm=12074
,P_Unwinder_1mm_Deg=12075
,P_Unwinder_Jog_Pos=12076
,P_Unwinder_Jog_Cnt=12077
,P_PLC06_Frist_Flag=12078
,P_Sepa_AI=12079
,P_PLC06_Reel_Upper_Change_Flag=12080
,P_PLC06_Reel_Lower_Change_Flag=12081
,P_Spool_Ready_Enable_Flag=12082
,P_Spool_Lack_Flag=12083
,P_Sepa_DR_Start_Flag=12084
,P_cdTime_Tact_Sec=12085
,P_Master_Tact_Sec=12086
,P_Prev_Err_Pos=12087
,P_Cur_Arc_Rad=12088
,P_Cur_Arc_Deg=12089
,P_Spool_Velocity=12090
,P_Lin_Prop_Vel=12091
,P_Err_Pos=12092
,P_Lin_Deriv_Vel=12093
,P_Lin_Dacer_Kd=12094
,P_Lin_Dacer_Kp=12095
,P_Running_CDTimer=12096
,P_Unwinder_Jog_Ta=12097
,P_Unwinder_Jog_Ts=12098
,P_Unwinder_Vel_Test_Time=12099
,P_Set_Interval_Time=12100
,P_PLC06_Upper_Sepa_AI_Timer=12101
,P_PLC06_Upper_Sepa_AI_Data=12102
,P_PLC06_Upper_Sepa_AI_Cnt=12103
,P_PLC06_Upper_AVRG_Sensor_Data=12104
,P_PLC06_Lower_Sepa_AI_Timer=12105
,P_PLC06_Lower_Sepa_AI_Data=12106
,P_PLC06_Lower_Sepa_AI_Cnt=12107
,P_PLC06_Lower_AVRG_Sensor_Data=12108
,P_PLC06_Sepa_Upper_Thickness_Timer=12109
,P_PLC06_Sepa_Upper_Thickness_Data=12110
,P_PLC06_Sepa_Upper_Thickness_Cnt=12111
,P_PLC06_Sepa_Lower_Thickness_Timer=12112
,P_PLC06_Sepa_Lower_Thickness_Data=12113
,P_PLC06_Sepa_Lower_Thickness_Cnt=12114
,P_Sepa_Thickness_Chk_Timer=12115
,P_Spool_Length=12116
,P_Cascade_Sf_Driving_Value=12117
,P_Cascade_Sf_None_Driving_Value=12118
,P_Sepa_Min_Value_Cal_Cmd=12119
,P_Total_Sepa_Need_Length=12120
,P_Alpa=12121
,P_Sepa_Num_of_Turns=12122
,P_Sepa_Turn_Num=12123
,P_Accumulate_Value=12124
,P_Sharft_to_Sepa_Core_mm=12125
,P_Sepa_Cal_Circum=12126
,P_Sepa_Min_Need_Thickness=12127
,P_Sepa_Min_Thickness_Cmd=12128
,P_Sepa_Accumulate_Cmd=12129
,P_Sepa_Required_Amount=12130
,P_Sepa_Current_Thickness=12131
,P_Sepa_Initial_Tickness=12132
,P_Sepa_Required_Update_Timer=12133
,P_TEST_EPC_Interlock_Auto=12134
,P_TEST_EPC_Interlock_Manual=12135
,P_Discharge_Total_Tact=12136
,P_PLC15_Sub_Function_Dryrun_Active_Flag=12149
,P_Sepa_Rotation_Sequence_Run_Trigger_Cnt=12150
,P_Sepa_Mode_Sepa_Recipe_Count=12151
,P_Discharged_After_End_Trigger=12152
,P_Unloader_1st_Grip_Delay=12153
,P_Separate_Cutter_Heating_Limit_Value=12154
,P_Separate_Cutting_Current=12155
,P_Separate_Cutter_Change_Cycle=12156
,P_X_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger=12157
,P_X_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger=12158
,P_X_Cathode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger=12159
,P_X_Anode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger=12160
,P_X_Stack_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger=12161
,P_Interlock_Messege_Confirmed=12162
,P_X_MC_Communication_HeartBit=12163
,P_SV_Cathode_Count=12164
,P_SV_Anode_Count=12165
,P_SV_Cathode_Reference_Thickness=12169
,P_SV_Anode_Reference_Thickness=12170
,P_SV_Stack_Table_Damper_Cathode=12171
,P_SV_Stack_Table_Damper_Anode=12172
,P_SV_Sepa_Reference_Thickness=12173
,P_SV_Jelly_Roll_Width=12174
,P_Cathode_Align_Continuous_NG_Recipe=12175
,P_Anode_Align_Continuous_NG_Recipe=12176
,P_Stack_Vision_Continuous_NG_Recipe=12177
,P_PLC_Recipe_EPC_Sepa_Count=12178
,P_PLC_Recipe_Revise_Sepa=12179
,P_X_PLC_to_PMAC_Correction_Value=12180
,P_Anode_Align_Continuous_NG_Check_range=12181
,P_Cathode_Align_Continuous_NG_Check_range=12182
,P_Stack_Align_Continuous_NG_Check_range=12183
,P_Cathode_Surface_Continuous_NG_Recipe=12184
,P_Anode_Surface_Continuous_NG_Recipe=12185
,P_Cathode_Surface_Continuous_NG_Check_range=12186
,P_Anode_Surface_Continuous_NG_Check_range=12187
,P_Servo_Dancer_Alarm_Maximum_Angle_Value=12188
,P_Servo_Dancer_Alarm_Minimum_Angle_Value=12189
,P_Current_Selected_Spool_Rev_Counts_Init_Read=12190
,P_Spool_ARC_Distance_mm=12191
,P_ARC_Upper_Request_Sepa_Thickness_mm=12192
,P_ARC_Lower_Request_Sepa_Thickness_mm=12193
,P_Selected_Spool_Arc_Set_Rev_Counts_Value=12194
,P_Set_Cnt_FR_Moving_Sepa_ARC=12195
,P_Current_Selected_Spool_Rev_Counts=12196
,P_AI_Cathode_Clamp_Damper=12197
,P_AI_Anode_Clamp_Damper=12198
,P_Select_Sheet_Value=12209
,P_BTN_Config_Setup_Mode_Select=12210
,P_Sepa_Thickness_Max_Value=12211
,P_AI_Cathode_Clamp_Damper_Zero_Mpa_Analog_Value=12212
,P_AI_Anode_Clamp_Damper_Zero_Mpa_Analog_Value=12213
,P_Accumulated_Movement_MM_Unit_Cathode_1ST_pnp=12214
,P_Accumulated_Movement_MM_Unit_Anode_1ST_pnp=12215
,P_Accumulated_Movement_MM_Unit_Cathode_2nd_pnp=12216
,P_Accumulated_Movement_MM_Unit_Anode_2nd_pnp=12217
,P_AI_Anode_Clamp_Damper_Mpa=12218
,P_AI_Cathode_Clamp_Damper_Mpa=12219
,P_Current_Whole_Stack_Jelly_Roll_Thinckness_mm=12220
,P_Upper_Sepa_Current_Thickness_um=12221
,P_Lower_Sepa_Current_Thickness_um=12222
,P_Spool_Rotate_Distance=12223
,Spool_Diameter=12224
,P_Current_FR_Moving_Cnt_To_PlC=12225
,P_MES_APC_Select_Btn=12226
,P_AO_Anode_Clamp_Damper=12227
,P_AO_Cathode_Clamp_Damper=12228
,P_Sepa_Length=12229
,P_Minus_Limit_Detect_Popup_Flag=12230
,P_Plus_Limit_Detect_Popup_Flag=12231
,P_Fatal_Fe_Limit_Detect_Popup_Flag=12232
,P_Emergency_Alarm_Popup_Flag=12233
,P_SepaArcing_Popup_Flag=12234
,P_Y_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger=12235
,P_Y_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger=12236
,P_Y_Cathode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger=12237
,P_Y_Anode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger=12238
,P_Y_Stack_Align_Calibration_twisted_Cycle_Stop_Request_Trigger=12239
,P_Current_Selected_Sheet_Value=12240
,P_Status_Config_Mode_Select=12241
,P_Sepa_Thickness_Jig_Value=12242
,P_PV_Stack_Table_Damper_Cathode=12243
,P_PV_Stack_Table_Damper_Anode=12244
,P_Discharge_Standby_Pos_Tack_Time=12245
,P_Discharge_FR_MainZ_Pos_Tack_Time=12246
,P_Discharge_Unloader_Go_Pos_Tack_Time=12247
,P_Discharge_SubZ_Down_Pos_Tack_Time=12248
,P_Discharge_Unloader_Cutting_Pos_Tack_Time=12249
,P_Discharge_FR_Clamp_ON_Complete_Tack_Time=12250
,P_Discharge_Cutting_Complete_Tack_Time=12251
,P_Discharge_Motion_PG_Active_Starting_Tack_Time=12252
,P_Discharge_Motion_PG_Active_Complete_Tack_Time=12253
,P_Discharge_Sepa_First_Complete_Tack_Time=12254
,P_Discharge_Complete_Tack_Time=12255
,P_Discharge_Total_Tack_Time=12256
,P_Anode_Clamp_TackTime_Array0=12257
,P_Anode_Clamp_TackTime_Array1=12258
,P_Anode_Clamp_TackTime_Array2=12259
,P_Anode_Clamp_TackTime_Array3=12260
,P_Anode_Clamp_TackTime_Array4=12261
,P_Anode_Clamp_TackTime_Array5=12262
,P_Anode_Clamp_TackTime_Array6=12263
,P_Anode_Clamp_TackTime_Array7=12264
,P_Anode_Clamp_TackTime_Array8=12265
,P_Anode_Clamp_TackTime_Array9=12266
,P_Anode_Clamp_TackTime_Array10=12267
,P_Stacking_TackTime_Array0=12268
,P_Stacking_TackTime_Array1=12269
,P_Stacking_TackTime_Array2=12270
,P_Stacking_TackTime_Array3=12271
,P_Stacking_TackTime_Array4=12272
,P_Stacking_TackTime_Array5=12273
,P_Stacking_TackTime_Array6=12274
,P_Stacking_TackTime_Array7=12275
,P_Stacking_TackTime_Array8=12276
,P_Stacking_TackTime_Array9=12277
,P_Stacking_TackTime_Array10=12278
,P_Cathode_Clamp_TackTime_Array0=12279
,P_Cathode_Clamp_TackTime_Array1=12280
,P_Cathode_Clamp_TackTime_Array2=12281
,P_Cathode_Clamp_TackTime_Array3=12282
,P_Cathode_Clamp_TackTime_Array4=12283
,P_Cathode_Clamp_TackTime_Array5=12284
,P_Cathode_Clamp_TackTime_Array6=12285
,P_Cathode_Clamp_TackTime_Array7=12286
,P_Cathode_Clamp_TackTime_Array8=12287
,P_Cathode_Clamp_TackTime_Array9=12288
,P_Cathode_Clamp_TackTime_Array10=12289
,P_JellyRoll_Out_TackTime_Array0=12290
,P_JellyRoll_Out_TackTime_Array1=12291
,P_JellyRoll_Out_TackTime_Array2=12292
,P_JellyRoll_Out_TackTime_Array3=12293
,P_JellyRoll_Out_TackTime_Array4=12294
,P_JellyRoll_Out_TackTime_Array5=12295
,P_JellyRoll_Out_TackTime_Array6=12296
,P_JellyRoll_Out_TackTime_Array7=12297
,P_JellyRoll_Out_TackTime_Array8=12298
,P_JellyRoll_Out_TackTime_Array9=12299
,P_JellyRoll_Out_TackTime_Array10=12300
,P_Anode_1th_TackTime_Array0=12301
,P_Anode_1th_TackTime_Array1=12302
,P_Anode_1th_TackTime_Array2=12303
,P_Anode_1th_TackTime_Array3=12304
,P_Anode_1th_TackTime_Array4=12305
,P_Anode_1th_TackTime_Array5=12306
,P_Anode_1th_TackTime_Array6=12307
,P_Anode_1th_TackTime_Array7=12308
,P_Anode_1th_TackTime_Array8=12309
,P_Anode_1th_TackTime_Array9=12310
,P_Anode_1th_TackTime_Array10=12311
,P_Cathode_1th_TackTime_Array0=12312
,P_Cathode_1th_TackTime_Array1=12313
,P_Cathode_1th_TackTime_Array2=12314
,P_Cathode_1th_TackTime_Array3=12315
,P_Cathode_1th_TackTime_Array4=12316
,P_Cathode_1th_TackTime_Array5=12317
,P_Cathode_1th_TackTime_Array6=12318
,P_Cathode_1th_TackTime_Array7=12319
,P_Cathode_1th_TackTime_Array8=12320
,P_Cathode_1th_TackTime_Array9=12321
,P_Cathode_1th_TackTime_Array10=12322
,P_Anode_2th_TackTime_Array0=12323
,P_Anode_2th_TackTime_Array1=12324
,P_Anode_2th_TackTime_Array2=12325
,P_Anode_2th_TackTime_Array3=12326
,P_Anode_2th_TackTime_Array4=12327
,P_Anode_2th_TackTime_Array5=12328
,P_Anode_2th_TackTime_Array6=12329
,P_Anode_2th_TackTime_Array7=12330
,P_Anode_2th_TackTime_Array8=12331
,P_Anode_2th_TackTime_Array9=12332
,P_Anode_2th_TackTime_Array10=12333
,P_Cathode_2th_TackTime_Array0=12334
,P_Cathode_2th_TackTime_Array1=12335
,P_Cathode_2th_TackTime_Array2=12336
,P_Cathode_2th_TackTime_Array3=12337
,P_Cathode_2th_TackTime_Array4=12338
,P_Cathode_2th_TackTime_Array5=12339
,P_Cathode_2th_TackTime_Array6=12340
,P_Cathode_2th_TackTime_Array7=12341
,P_Cathode_2th_TackTime_Array8=12342
,P_Cathode_2th_TackTime_Array9=12343
,P_Cathode_2th_TackTime_Array10=12344
,P_Anode_Align_Table_TackTime_Array0=12345
,P_Anode_Align_Table_TackTime_Array1=12346
,P_Anode_Align_Table_TackTime_Array2=12347
,P_Anode_Align_Table_TackTime_Array3=12348
,P_Anode_Align_Table_TackTime_Array4=12349
,P_Anode_Align_Table_TackTime_Array5=12350
,P_Anode_Align_Table_TackTime_Array6=12351
,P_Anode_Align_Table_TackTime_Array7=12352
,P_Anode_Align_Table_TackTime_Array8=12353
,P_Anode_Align_Table_TackTime_Array9=12354
,P_Anode_Align_Table_TackTime_Array10=12355
,P_Cathode_Align_Table_TackTime_Array0=12356
,P_Cathode_Align_Table_TackTime_Array1=12357
,P_Cathode_Align_Table_TackTime_Array2=12358
,P_Cathode_Align_Table_TackTime_Array3=12359
,P_Cathode_Align_Table_TackTime_Array4=12360
,P_Cathode_Align_Table_TackTime_Array5=12361
,P_Cathode_Align_Table_TackTime_Array6=12362
,P_Cathode_Align_Table_TackTime_Array7=12363
,P_Cathode_Align_Table_TackTime_Array8=12364
,P_Cathode_Align_Table_TackTime_Array9=12365
,P_Cathode_Align_Table_TackTime_Array10=12366
,P_Anode_NG_PNP_TackTime_Array0=12367
,P_Anode_NG_PNP_TackTime_Array1=12368
,P_Anode_NG_PNP_TackTime_Array2=12369
,P_Anode_NG_PNP_TackTime_Array3=12370
,P_Anode_NG_PNP_TackTime_Array4=12371
,P_Anode_NG_PNP_TackTime_Array5=12372
,P_Anode_NG_PNP_TackTime_Array6=12373
,P_Anode_NG_PNP_TackTime_Array7=12374
,P_Anode_NG_PNP_TackTime_Array8=12375
,P_Anode_NG_PNP_TackTime_Array9=12376
,P_Anode_NG_PNP_TackTime_Array10=12377
,P_Cathode_NG_PNP_TackTime_Array0=12378
,P_Cathode_NG_PNP_TackTime_Array1=12379
,P_Cathode_NG_PNP_TackTime_Array2=12380
,P_Cathode_NG_PNP_TackTime_Array3=12381
,P_Cathode_NG_PNP_TackTime_Array4=12382
,P_Cathode_NG_PNP_TackTime_Array5=12383
,P_Cathode_NG_PNP_TackTime_Array6=12384
,P_Cathode_NG_PNP_TackTime_Array7=12385
,P_Cathode_NG_PNP_TackTime_Array8=12386
,P_Cathode_NG_PNP_TackTime_Array9=12387
,P_Cathode_NG_PNP_TackTime_Array10=12388
,P_Sepa_Unwinder_TackTime_Array0=12389
,P_Sepa_Unwinder_TackTime_Array1=12390
,P_Sepa_Unwinder_TackTime_Array2=12391
,P_Sepa_Unwinder_TackTime_Array3=12392
,P_Sepa_Unwinder_TackTime_Array4=12393
,P_Sepa_Unwinder_TackTime_Array5=12394
,P_Sepa_Unwinder_TackTime_Array6=12395
,P_Sepa_Unwinder_TackTime_Array7=12396
,P_Sepa_Unwinder_TackTime_Array8=12397
,P_Sepa_Unwinder_TackTime_Array9=12398
,P_Sepa_Unwinder_TackTime_Array10=12399
,P_Sepa_Unwinder_TackTime_Array11=12400
,P_1st_Unloader_TackTime_Array0=12401
,P_1st_Unloader_TackTime_Array1=12402
,P_1st_Unloader_TackTime_Array2=12403
,P_1st_Unloader_TackTime_Array3=12404
,P_1st_Unloader_TackTime_Array4=12405
,P_1st_Unloader_TackTime_Array5=12406
,P_1st_Unloader_TackTime_Array6=12407
,P_1st_Unloader_TackTime_Array7=12408
,P_1st_Unloader_TackTime_Array8=12409
,P_1st_Unloader_TackTime_Array9=12410
,P_1st_Unloader_TackTime_Array10=12411
,P_Cathode_1st_Vacuum_TackTime_Array1=12412
,P_Cathode_1st_Vacuum_TackTime_Array2=12413
,P_Cathode_1st_Vacuum_TackTime_Array3=12414
,P_Cathode_1st_Vacuum_TackTime_Array4=12415
,P_Cathode_1st_Vacuum_TackTime_Array5=12416
,P_Cathode_1st_Vacuum_TackTime_Array6=12417
,P_Cathode_1st_Vacuum_TackTime_Array7=12418
,P_Cathode_1st_Vacuum_TackTime_Array8=12419
,P_Cathode_1st_Vacuum_TackTime_Array9=12420
,P_Cathode_1st_Vacuum_TackTime_Array10=12421
,P_Cathode_Align_Vacuum_TackTime_Array1=12422
,P_Cathode_Align_Vacuum_TackTime_Array2=12423
,P_Cathode_Align_Vacuum_TackTime_Array3=12424
,P_Cathode_Align_Vacuum_TackTime_Array4=12425
,P_Cathode_Align_Vacuum_TackTime_Array5=12426
,P_Cathode_Align_Vacuum_TackTime_Array6=12427
,P_Cathode_Align_Vacuum_TackTime_Array7=12428
,P_Cathode_Align_Vacuum_TackTime_Array8=12429
,P_Cathode_Align_Vacuum_TackTime_Array9=12430
,P_Cathode_Align_Vacuum_TackTime_Array10=12431
,P_Cathode_2nd_Vacuum_TackTime_Array1=12432
,P_Cathode_2nd_Vacuum_TackTime_Array2=12433
,P_Cathode_2nd_Vacuum_TackTime_Array3=12434
,P_Cathode_2nd_Vacuum_TackTime_Array4=12435
,P_Cathode_2nd_Vacuum_TackTime_Array5=12436
,P_Cathode_2nd_Vacuum_TackTime_Array6=12437
,P_Cathode_2nd_Vacuum_TackTime_Array7=12438
,P_Cathode_2nd_Vacuum_TackTime_Array8=12439
,P_Cathode_2nd_Vacuum_TackTime_Array9=12440
,P_Cathode_2nd_Vacuum_TackTime_Array10=12441
,P_Anode_1st_Vacuum_TackTime_Array1=12442
,P_Anode_1st_Vacuum_TackTime_Array2=12443
,P_Anode_1st_Vacuum_TackTime_Array3=12444
,P_Anode_1st_Vacuum_TackTime_Array4=12445
,P_Anode_1st_Vacuum_TackTime_Array5=12446
,P_Anode_1st_Vacuum_TackTime_Array6=12447
,P_Anode_1st_Vacuum_TackTime_Array7=12448
,P_Anode_1st_Vacuum_TackTime_Array8=12449
,P_Anode_1st_Vacuum_TackTime_Array9=12450
,P_Anode_1st_Vacuum_TackTime_Array10=12451
,P_Anode_Align_Vacuum_TackTime_Array1=12452
,P_Anode_Align_Vacuum_TackTime_Array2=12453
,P_Anode_Align_Vacuum_TackTime_Array3=12454
,P_Anode_Align_Vacuum_TackTime_Array4=12455
,P_Anode_Align_Vacuum_TackTime_Array5=12456
,P_Anode_Align_Vacuum_TackTime_Array6=12457
,P_Anode_Align_Vacuum_TackTime_Array7=12458
,P_Anode_Align_Vacuum_TackTime_Array8=12459
,P_Anode_Align_Vacuum_TackTime_Array9=12460
,P_Anode_Align_Vacuum_TackTime_Array10=12461
,P_Anode_2nd_Vacuum_TackTime_Array1=12462
,P_Anode_2nd_Vacuum_TackTime_Array2=12463
,P_Anode_2nd_Vacuum_TackTime_Array3=12464
,P_Anode_2nd_Vacuum_TackTime_Array4=12465
,P_Anode_2nd_Vacuum_TackTime_Array5=12466
,P_Anode_2nd_Vacuum_TackTime_Array6=12467
,P_Anode_2nd_Vacuum_TackTime_Array7=12468
,P_Anode_2nd_Vacuum_TackTime_Array8=12469
,P_Anode_2nd_Vacuum_TackTime_Array9=12470
,P_Anode_2nd_Vacuum_TackTime_Array10=12471
,P_Final_Roll_TackTime_Array1=12472
,P_Final_Roll_TackTime_Array2=12473
,P_Final_Roll_TackTime_Array3=12474
,P_Final_Roll_TackTime_Array4=12475
,P_Final_Roll_TackTime_Array5=12476
,P_Final_Roll_TackTime_Array6=12477
,P_Final_Roll_TackTime_Array7=12478
,P_Final_Roll_TackTime_Array8=12479
,P_Final_Roll_TackTime_Array9=12480
,P_Final_Roll_TackTime_Array10=12481
,P_Sepa_ARC_TackTime_Array1=12482
,P_Sepa_ARC_TackTime_Array2=12483
,P_Sepa_ARC_TackTime_Array3=12484
,P_Sepa_ARC_TackTime_Array4=12485
,P_Sepa_ARC_TackTime_Array5=12486
,P_Sepa_ARC_TackTime_Array6=12487
,P_Sepa_ARC_TackTime_Array7=12488
,P_Sepa_ARC_TackTime_Array8=12489
,P_Sepa_ARC_TackTime_Array9=12490
,P_Sepa_ARC_TackTime_Array10=12491
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array1=12492
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array2=12493
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array3=12494
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array4=12495
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array5=12496
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array6=12497
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array7=12498
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array8=12499
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array9=12500
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array10=12501
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array1=12502
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array2=12503
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array3=12504
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array4=12505
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array5=12506
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array6=12507
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array7=12508
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array8=12509
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array9=12510
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array10=12511
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array1=12512
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array2=12513
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array3=12514
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array4=12515
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array5=12516
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array6=12517
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array7=12518
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array8=12519
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array9=12520
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array10=12521
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array1=12522
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array2=12523
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array3=12524
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array4=12525
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array5=12526
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array6=12527
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array7=12528
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array8=12529
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array9=12530
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array10=12531
,P_PACK_ML_Status_bit=12532
,P_Whole_Stacking_TackTime_MES_Report_Flag=12533
,P_JellyRoll_Out_TackTime_MES_Report_Flag=12534
,P_PV_Cathode_Count=12535
,P_PV_Anode_Count=12536
,P_PV_Cathode_NG_TR_NG_Count=12541
,P_PV_Anode_NG_TR_NG_Count=12542
,P_PV_Anode_Retry_NG_Count=12543
,P_PV_Cathode_Retry_NG_Count=12544
,P_PV_Align_INPUT_Count=12545
,P_Unloader_Grip_Pressure=12546
,P_Unloader_Heatmeter=12547
,P_EPC_Y_StandBy=12598
,P_SV_Read_Enable_Flag=12599
,P_Spool_Rotate_Distance_mm=12600
,P_Cathode_Clamp_Gantry=12701
,P_Anode_Clamp_Gantry=12702
,P_SV_Separator_Heting_Cutter_Change_Period=12703
,P_Cathode_Picker_Cylinder_Count=12716
,P_Anode_Picker_Cylinder_Count=12717
,P_SV_Stack_Table_Cathode_Reference_Value=12718
,P_SV_Stack_Table_Anode_Reference_Value=12719
,P_CA_DR_Offset=12720
,P_AN_DR_Offset=12721
,P_First_DR_Offset=12722
,P_Last_DR_Offset=12723
,P_BTN_QC_Sample_Flag=12724
,P_BTN_Loss_Sample_Flag=12725
,P_MSA_Sample_Flag=12726
,P_Sample_JR_Recipe_Count=12727
,P_Ca_Clamp_Y_Move=12728
,P_An_Clamp_Y_Move=12729
,P_Stack_Table_JR_Exist_Flag=12730
,P_MES_Status=12731
,P_Sepa_Unwinder_Upper_Confirm_Status=12732
,P_Sepa_Unwinder_Lower_Confirm_Status=12733
,P_Program_Monitoring_Lamp_Cell_Ready=12734
,P_Program_Monitoring_Lamp_Ready_Pos=12735
,P_Program_Monitoring_Lamp_Pause_Pos=12736
,P_Program_Monitoring_Lamp_Motion_Run=12737
,P_Program_Monitoring_Lamp_Cell_Remove=12738
,P_Program_Monitoring_Lamp_Cell_Supply=12739
,P_Program_Monitoring_Lamp_Sepa_Mode=12740
,P_Program_Monitoring_Lamp_Semi_Run=12741
,P_Program_Monitoring_Lamp_Stack_Mode=12742
,P_Program_Monitoring_Lamp_Anode_Aling_NG=12743
,P_Program_Monitoring_Lamp_Anode_Retry_NG=12744
,P_Program_Monitoring_Lamp_Cathode_Align_NG=12745
,P_Program_Monitoring_Lamp_Cathode_Retry_NG=12746
,P_Program_Monitoring_Lamp_Last_Stack_Mode=12747
,P_Program_Monitoring_Lamp_Jelly_Roll_OK=12748
,P_Program_Monitoring_Lamp_Jelly_Roll_NG=12749
,P_Program_Monitoring_Lamp_Jelly_Roll_Sepa=12750
,P_Program_Monitoring_Lamp_Cell_Out_Pos=12751
,P_Program_Monitoring_Lamp_Cell_Out_Mode=12752
,P_Master_Motion_Program_Flag=12753
,P_Master_Motion_CycleStop_Flag=12794
,P_PLC_08_Program_Ver=12845
,P_Old_PMAC_Commands=12846
,P_Old_PMAC_Status=12847
,P_Old_PMAC_Current_Mode=12848
,P_Mode_Function_State_Machine=12849
,P_PMAC_Commands=12850
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
,P_PMAC_Current_Mode=13085
,P_PMAC_Status=13086
,P_PMAC_Old_Mode=13087
,P_Ready_Tack_Chk_Timer=13088
,P_PLC09_Common_Command_Flag=13089
,P_PLC09_Common_Command_Complete_Bit=13090
,P_PLC09_Common_Execute_Flag=13091
,P_PLC09_Common_Execute_Complete_Bit=13092
,P_PLC09_Status=13093
,P_PLC09_Libraries_Var=13094
,P_Master_Motion_Program_ON_Flag=13095
,P_Master_Motion_Program_ON_Complete_Bit=13096
,P_Master_Motion_Program_OFF_Flag=13097
,P_Master_Motion_Program_OFF_Complete_Bit=13098
,P_Common_Function_Timbase_ON_Flag=13099
,P_Common_Function_Timbase_ON_Complete_Bit=13100
,P_Common_Function_Timbase_OFF_Flag=13101
,P_Common_Function_Timbase_OFF_Complete_Bit=13102
,P_Common_Function_Monitoring_Lamp_OFF_Flag=13103
,P_Common_Function_Monitoring_Lamp_OFF_Complete_Bit=13104
,P_Common_Function_Slave_Motion_Common_Init_Flag=13105
,P_Common_Function_Slave_Motion_Common_Init_Complete_Bit=13106
,P_Common_Function_OlD_Jog_Speed_Save_ON_Flag=13107
,P_Common_Function_OlD_Jog_Speed_Save_ON_Complete_Bit=13108
,P_Auto_Resetting_Sum_Ready_Pos_Check_Flag=13109
,P_Auto_Resetting_Sum_Ready_Pos_Check_Complete_bit=13110
,P_Manual_Resetting_Sum_Ready_Pos_Check_Flag=13111
,P_Manual_Resetting_Sum_Ready_Pos_Check_Complete_bit=13112
,P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Flag=13113
,P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Complete_Bit=13114
,P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Flag=13115
,P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Complete_Bit=13116
,P_Motion_Target_Position_Complete=13117
,P_SM_Auto_Run_Layer_Management=13118
,P_Buffer_Mode_Status_Sequence=13119
,P_SM_Sub_Function_Pause=13120
,P_PLC09_Resetting_Position_Check_State_Machine=13121
,P_PLC09_Resetting_Position_Moving_State_Machine=13122
,P_SM_Resetting_Pause_Position=13165
,P_20per_Vac_Error_Cycle_Stop_Flag=13166
,P_MNTR_PLC23_ARC_Complete=13167
,P_FUNCTION_PLC13_Sepa_Trigger_Enable=13168
,P_PLC_Recipe_PLC2_Revise_Sepa=13169
,P_Auto_Semi_Init_Status=13170
,P_Auto_Semi_Init_Chk_Bit=13171
,P_Old_PLC_HeartBit_Flag=13172
,P_PLC09_Init_Flag=13173
,P_Check_IDLE_CF_Flag=13174
,P_Check_EXECUTE_CF_Flag=13175
,P_Check_COMPLETING_CF_Flag=13176
,P_Check_COMPLETE_CF_Flag=13177
,P_Check_HOLDING_CF_Flag=13178
,P_Check_HOLD_CF_Flag=13179
,P_Check_UNHOLDING_CF_Flag=13180
,P_Check_SUSPENDING_CF_Flag=13181
,P_Check_SUSPENDED_CF_Flag=13182
,P_Check_UNSUSPENDING_CF_Flag=13183
,P_Check_STOPPED_CF_Flag=13184
,P_Check_ABORTED_CF_Flag=13185
,P_Check_CLEARING_CF_Flag=13186
,P_Check_IDLE_CF=13187
,P_Check_EXECUTE_CF=13188
,P_Check_COMPLETING_CF=13189
,P_Check_COMPLETE_CF=13190
,P_Check_HOLDING_CF=13191
,P_Check_HOLD_CF=13192
,P_Check_UNHOLDING_CF=13193
,P_Check_SUSPENDING_CF=13194
,P_Check_SUSPENDED_CF=13195
,P_Check_UNSUSPENDING_CF=13196
,P_Check_STOPPED_CF=13197
,P_Check_ABORTED_CF=13198
,P_Check_CLEARING_CF=13199
,P_Check_STOPPING_CF=13200
,P_Check_STARTING_CF=13201
,P_Check_RESETTING_CF=13202
,P_Check_STARTTING_CF=13203
,P_Queue_Clear=13204
,P_Resetting_First_Approach_Start_Flag=13205
,P_Resetting_Re_Entry_Step_Count=13206
,P_PLC09_Alarm_Test_Flag=13207
,P_PLC09_Test_Temp=13208
,P_PLC01_STOP_Queue_Complete_Flag=13209
,P_PMAC_All_Home_Cmd=13210
,P_PMAC_All_Home_Status=13211
,P_PMAC_Master_Following_Use_Flag=13212
,PnP_Belt_Waring_Pos=13213
,P_Old_X_PLC_Sync_Heart_Bit=13214
,P_Stack_Heart_Bit_Sync_Flag=13215
,P_Stack_Heart_Bit_Sunc_Complete_Bit=13216
,P_Resetting_Init_Module_RTN=13217
,P_PLC09_MNTR=13218
,P_Unloder_PNP_Home_IL_Pos=13219
,P_ECAT_Slave_Err_Bit=13220
,P_MC_Power_Down_Flag=13221
,P_Old_MC_Power_Down_Flag=13222
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
,P_Modbus_Delay_Timer=13223
,P_Modbus_Connect_Status=13224
,P_Modbus_Reconnect_MNTR=13225
,P_Ecat_Reconn_Chk_Lamp=13226
,P_MC_Reconn_Chk_Lamp=13227
,P_Cathode_2TR_PNP_Avoid_Pos=13228
,P_Anode_2TR_PNP_Avoid_Pos=13229
,P_Cathode_2TR_PNP_Avoid_Value=13230
,P_Anode_2TR_PNP_Avoid_Value=13231
,P_Cathode_1st_Vac_Set_Time=13232
,P_Cathode_2nd_Vac_Set_Time=13233
,P_Cathode_Align_Vac_Set_Time=13234
,P_Cathode_Align_Blow_Set_Time=13235
,P_Anode_1st_Vac_Set_Time=13236
,P_Anode_2nd_Vac_Set_Time=13237
,P_Sepa_Consume_Mode_Thickness_rate=13238
,P_Sepa_Anode_Recipe_Count=13239
,P_Sepa_Cathode_Recipe_Count=13240
,P_Discharge_Cathode_Recipe_Count=13241
,P_Discharge_Anode_Recipe_Count=13242
,P_Suspend_Discharge_Cathode_Counter=13243
,P_Suspend_Discharge_Anode_Counter=13244
,P_Suspend_Discharge_Waiting_Flag=13245
,P_Com_ARC_Sepa_Consume_Mode_Flag=13246
,P_Com_EPC_Sepa_Consume_Mode_Flag=13247
,P_Com_User_Sepa_Consume_Mode_Flag=13248
,P_Com_Dry_Mode_Flag=13249
,P_SM_Recipe_Value_Management=13250
,P_Sepa_Mode_Recipe_Count=13251
,P_Sepa_Mode_EPC_Recipe_Count=13252
,P_ARC_End_Sepa_Recipe_Count=13253
,P_Cathode_Align_Continuous_NG_Stop_Select=13354
,P_Anode_Align_Continuous_NG_Stop_Select=13355
,P_Stack_Vision_NG_Enable=13356
,P_Cathode_Surface_Continuous_NG_Stop_Select=13357
,P_Anode_Surface_Continuous_NG_Stop_Select=13358
,P_Anode_Trigger_IO_Test_Vision_PLC_Loop=13359
,P_Anode_Trigger_IO_Test_Motion_Loop=13360
,P_Cathode_Trigger_IO_Test_Vision_PLC_Loop=13361
,P_Cathode_Trigger_IO_Test_Motion_Loop=13362
,P_Stack_Trigger_IO_Test_Vision_PLC_Loop=13363
,P_Stack_Trigger_IO_Test_Motion_Loop=13364
,P_PLC12_Continuous_Buffer_Reset_Flag=13365
,P_PLC12_Anode_Sheet_Pick_Up_Flag=13381
,P_PLC12_Cathode_Sheet_Pick_Up_Flag=13382
,P_Hold_Anode_Sheet_Pick_Up_Flag=13383
,P_Hold_Cathode_Sheet_Pick_Up_Flag=13384
,P_Sheet_Interface_Complete_Pos=13385
,P_Anode_Sheet_Interface_Complete_Pos=13386
,P_Cathode_Sheet_Interface_Complete_Pos=13387
,P_Anode_2nd_TR_Maint_Check=13388
,P_Cathode_2nd_TR_Maint_Check=13389
,P_PLC12_Vacuum_1st_Cathode_MNTR_Timer=13427
,P_PLC12_Vacuum_2nd_Cathode_MNTR_Timer=13428
,P_PLC12_Vacuum_NG_Cathode_MNTR_Timer=13429
,P_PLC12_Vacuum_Align_Cathode_MNTR_Timer=13430
,P_PLC12_Vacuum_1st_Anode_MNTR_Timer=13431
,P_PLC12_Vacuum_2nd_Anode_MNTR_Timer=13432
,P_PLC12_Vacuum_NG_Anode_MNTR_Timer=13433
,P_PLC12_Vacuum_Align_Anode_MNTR_Timer=13434
,P_PLC12_Vacuum_1st_Cathode_Set_Time=13435
,P_PLC12_Vacuum_2nd_Cathode_Set_Time=13436
,P_PLC12_Vacuum_NG_Cathode_Set_Time=13437
,P_PLC12_Vacuum_Align_Cathode_Set_Time=13438
,P_PLC12_Vacuum_1st_Anode_Set_Time=13439
,P_PLC12_Vacuum_2nd_Anode_Set_Time=13440
,P_PLC12_Vacuum_NG_Anode_Set_Time=13441
,P_PLC12_Vacuum_Align_Anode_Set_Time=13442
,P_PLC12_Blow_1st_Cathode_MNTR_Timer=13483
,P_PLC12_Blow_2nd_Cathode_MNTR_Timer=13484
,P_PLC12_Blow_NG_Cathode_MNTR_Timer=13485
,P_PLC12_Blow_Align_Cathode_MNTR_Timer=13486
,P_PLC12_Blow_1st_Anode_MNTR_Timer=13487
,P_PLC12_Blow_2nd_Anode_MNTR_Timer=13488
,P_PLC12_Blow_NG_Anode_MNTR_Timer=13489
,P_PLC12_Blow_Align_Anode_MNTR_Timer=13490
,P_PLC12_Blow_1st_Cathode_Set_Time=13491
,P_PLC12_Blow_2nd_Cathode_Set_Time=13492
,P_PLC12_Blow_NG_Cathode_Set_Time=13493
,P_PLC12_Blow_Align_Cathode_Set_Time=13494
,P_PLC12_Blow_1st_Anode_Set_Time=13495
,P_PLC12_Blow_2nd_Anode_Set_Time=13496
,P_PLC12_Blow_NG_Anode_Set_Time=13497
,P_PLC12_Blow_Align_Anode_Set_Time=13498
,P_Vacuum_Reentry_Bit=13539
,P_Blow_Reentry_Bit=13540
,P_top=13621
,P_Queue_stack_top=13622
,P_Step_stack_top=13623
,P_Index_stack_top=13624
,P_Status_stack_top=13625
,NN_Step=13626
,NN_Index=13627
,P_PLC12_Frist=13633
,P_SM_Auto_Run_Status_Management=13634
,P_SM_Status_Main_Memory_Management=13635
,P_SM_Cell_Memory_Management=13636
,P_PLC12_Vacuum_Unit_Data=13669
,P_PLC12_Blow_Unit_Data=13670
,P_Stack_Algorithme_Cmd_Event_Status=13671
,P_PLC12_vacuum_Event_Status=13672
,P_PLC12_Blow_Event_status=13673
,P_PLC12_vacuum_DIO_Observer_Status=13674
,P_PLC12_Blow_DIO_Observer_Status=13675
,P_Resetting_Vacuum_MNTR_State_Machine=13676
,P_Heart_Bit_Time=13677
,P_Dancer_Angle_Alarm_Timer_Flag=13678
,P_Dancer_Angle_Alarm_Check_Timer=13679
,P_BTN_LED_LAMP=13680
,P_Old_BTN_LED_LAMP=13681
,P_PLC_TO_PMAC_Work_Confirm_Operation_Cnt=13682
,P_VISION_TO_PMAC_Work_Confirm_Operation_Ack_Cnt=13683
,P_Ca_AT_Retry_Cal_Move_Complete=13684
,P_An_AT_Retry_Cal_Move_Complete=13685
,P_Ca_AT_Retry_Cal_Cnt=13686
,P_An_AT_Retry_Cal_Cnt=13687
,P_Ca_AT_Retry_Cal_Complete=13688
,P_An_AT_Retry_Cal_Complete=13689
,P_An_AT_Retry_Cal_Pass=13690
,P_Ca_AT_Retry_Cal_Pass=13691
,P_Ca_Picker_T_Turn_Cnt_Flag=13692
,P_Ca_Picker_T_Turn_Cnt=13693
,P_Ca_Picker_T_Home_Type=13694
,P_An_Picker_T_Turn_Cnt_Flag=13695
,P_An_Picker_T_Turn_Cnt=13696
,P_An_Picker_T_Home_Type=13697
,P_Flag_Vac_Status_Initialize=13698
,P_SM_Vac_Initialize=13699
,P_Flag_Anode_1st_Vac_OFF=13700
,P_Flag_Anode_AT_Vac_OFF=13701
,P_Flag_Anode_2nd_Vac_OFF=13702
,P_Flag_Anode_NG_Vac_OFF=13703
,P_Flag_Cathode_1st_Vac_OFF=13704
,P_Flag_Cathode_AT_Vac_OFF=13705
,P_Flag_Cathode_2nd_Vac_OFF=13706
,P_Flag_Cathode_NG_Vac_OFF=13707
,P_Flag_Anode_1st_Vac_Initial_Alarm=13708
,P_Flag_Anode_AT_Vac_Initial_Alarm=13709
,P_Flag_Anode_2nd_Vac_Initial_Alarm=13710
,P_Flag_Anode_NG_Vac_Initial_Alarm=13711
,P_Flag_Cathode_1st_Vac_Initial_Alarm=13712
,P_Flag_Cathode_AT_Vac_Initial_Alarm=13713
,P_Flag_Cathode_2nd_Vac_Initial_Alarm=13714
,P_Flag_Cathode_NG_Vac_Initial_Alarm=13715
,P_Middle_Discharge_Ignore_Total_Count=13716
,P_Middle_Discharge_Ignore_Stack_Count=13717
,P_Middle_Discharge_Ignore_ON_Signal=13718
,P_Middle_Discharge_Ignore_OFF_Signal=13719
,P_Middle_Discharge_Ignore_Cell_Count=13720
,P_ARC_Middle_Discharge_Ignore_Vision_Check=13721
,P_ARC_Middle_Discharge_Ignore_ON_Flag=13722
,P_Middle_Discharge_Ignore_User_Sepa_Mode_Check=13723
,P_Flag_Sepa_Stack_Mode_CHK=13832
,P_Initialize_Read_Excom_Variables_Flag=13919
,P_Cathode_Clamp_MC_Cylinder_Count=13929
,P_Cathode_Clamp_OP_Cylinder_Count=13930
,P_Anode_Clamp_MC_Cylinder_Count=13931
,P_Anode_Clamp_OP_Cylinder_Count=13932
,P_Cathode_1ST_TR_Cylinder_Count=8003
,P_Anode_1ST_TR_Cylinder_Count=8004
,P_BTN_Cathode_Clamp_inside_Machine_Cylinder_Count_Clear=13933
,P_BTN_Cathode_Clamp_Middle_Cylinder_Count_Clear=13934
,P_BTN_Cathode_Clamp_outside_Machine_Cylinder_Count_Clear=13935
,P_BTN_Anode_Clamp_inside_Machine_Cylinder_Count_Clear=13936
,P_BTN_Anode_Clamp_Middle_Cylinder_Count_Clear=13937
,P_BTN_Anode_Clamp_outside_Machine_Cylinder_Count_Clear=13938
,P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear=13939
,P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear_Old=13940
,P_BTN_Anode_1ST_TR_Cylinder_Count_Clear=13941
,P_BTN_Anode_1ST_TR_Cylinder_Count_Clear_Old=13942
,P_RECIPE_PLC27_Manual_Interval=14958
,P_RECIPE_PLC27_Auto_Interval=14959
,P_Recipe_Speed_Value=15166
,P_Slave6_Target_X_For_Cell_Out=15167
,P_Poistion_error=15368
,P_Recipe_Count_Num=15419
,L_Motor_Status_Update_Interval=15420
,L_Motor_Recipe_Update_Interval=15421
,P_UI_Servo_On_Off=15422
,P_Jog_Sel_Count=15522
,P_User_Jog_Distance=15809
,P_BTN_Sel_Count=16160
,P_PC_BTN_No=16161
,P_BTN_Interlock_Update_Interval=16162
,P_Align_Table_Status_Update_Interval=16163
,P_Jelly_Roll_Total_Count_Old=16164
,P_Old_m4120=16165
,P_Old_m4121=16166
,P_Old_m4122=16167
,P_Old_m4123=16168
,P_Flag_Linear_Enc_Homezero_Complete_M17=16189
,P_Flag_Linear_Enc_Homezero_Complete_M18=16190
,P_Flag_Linear_Enc_Homezero_Complete_M19=16191
,P_Flag_Linear_Enc_Homezero_Complete_M20=16192
,P_CMD_Linear_ENC_Homezero_M17=16193
,P_CMD_Linear_ENC_Homezero_M18=16194
,P_CMD_Linear_ENC_Homezero_M19=16195
,P_CMD_Linear_ENC_Homezero_M20=16196
,P_RECIPE_PLC27_Alltime_Interval=16227
,P_Manual_Memory_Tower_Timer=16228
,P_Memory_Tower_Interval=16229
,P_PLC_14_Status_Cycle_Stop_Flag=16230
,P_Cathode_AlignTable_Cleaning_Pos_Status_Machine=16231
,P_Anode_AlignTable_Cleaning_Pos_Status_Machine=16232
,P_Status_Cathode_AlignTable_Cleaning_Pos=16233
,P_Status_Anode_AlignTable_Cleaning_Pos=16234
,P_CMD_Cathode_AlignTable_Cleaning_Pos=16235
,P_CMD_Anode_AlignTable_Cleaning_Pos=16236
,P_Cathode_2nd_pnp_Cleaning_Mode_Pos=16237
,P_Anode_2nd_pnp_Cleaning_Mode_Pos=16238
,P_Interlock_Test=16239
,P_PNP_Picker_T_Pos=16240
,P_NG_PNP_Pos=16241
,M_Old_X_BTN_Machine_READY=16242
,M_Old_X_BTN_Machine_START=16243
,M_Old_X_BTN_Machine_STOP=16244
,M_Old_X_BTN_Machine_RESET=16245
,M_Old_X_BTN_Machine_MODE=16246
,P_BTN_Motor_Pos_Check_RTN=16247
,P_BTN_Memory_Tower_Check_Bit=16248
,P_PMAC_Status_IDLE_Motor_Not_Pos=16249
,P_PMAC_Status_IDLE_Motor_Pos=16250
,P_BTN_Motor_Pos_Check_Monitor=16251
,P_PackML_Auto_Stop_Bit=16252
,P_BTN_IDLE_Motor_Not_Pos=16253
,M_X_BTN_Machine_Mode=16254
,M_Old_X_BTN_Machine_Mode=16255
,P_Lamp_Blinking_Timer=16256
,P_BTN_Ready_Lamp=16257
,P_BTN_Start_Lamp=16258
,P_BTN_Stop_Lamp=16259
,P_ARC_Name_Plate_Passive_Status=16260
,P_ARC_Passive_Status=16261
,P_NP_Spool_Number=16262
,P_ARC_Page_On=16263
,P_ARC_NP_Upper_Timer=16264
,P_ARC_Upper_Ready=16265
,P_ARC_NP_Upper_3rd_Step_Toggle_Variable=16266
,P_ARC_NP_Upper_7th_Step_Variable=16267
,P_ARC_NP_Upper_7th_Step_Edge_Variable=16268
,P_ARC_NP_Upper_Rot_ReRot_Blinking_Bit=16269
,P_ARC_NP_Lower_Timer=16270
,P_ARC_Lower_Ready=16271
,P_ARC_NP_Lower_3rd_Step_Toggle_Variable=16272
,P_ARC_NP_Lower_7th_Step_Variable=16273
,P_ARC_NP_Lower_7th_Step_Edge_Variable=16274
,P_ARC_NP_Lower_Rot_ReRot_Blinking_Bit=16275
,M_Old_X_ARC_NP_Ready=16276
,M_Old_X_ARC_NP_Unwinder_Rotation=16277
,M_Old_X_ARC_NP_Unwinder_Re_Rotation=16278
,P_Status_Clear_Flag=16279
,P_Status_Clear_RTN=16280
,P_MSA_BTN_On=16281
,P_Align_Take_Off_BTN_ON=16282
,P_ARC_NP_Upper_Ready_Check_Bit=16283
,P_ARC_NP_Lower_Ready_Check_Bit=16284
,P_Stopping_CycleStop_Status=16385
,P_Stopping_CycleStop_Seq_Index=16386
,P_Stopping_CycleStop_Precondition_Seq_Index=16387
,P_Stopping_CycleStop_Module_Status=16388
,P_Stopping_CycleStop_Cmd=16389
,P_Stopping_CycleStop_State_Machine=16390
,P_Final_Roll_Cathode_Pos_Status=16511
,P_Sheet_Paper_FWD_Pos_Status=16512
,P_Final_Roll_Vision_Pos_Status=16513
,P_Cathode_Clamp_ON_Status=16514
,P_Anode_Clamp_ON_Status=16515
,P_Anode_Clamp_OFF_Status=16516
,P_Partition_Up_Flag=16517
,P_Partition_Down_Flag=16518
,P_Partition_Avoid_Flag=16519
,P_Partition_Avoid_Z_Speed=16520
,P_Partition_Avoid_X_Speed=16521
,P_Partition_Avoid_T_Speed=16522
,P_Partition_Avoid_2nd_T_Pos=16523
,P_Partition_Step_Flag=16524
,P_Partition_1st_Avoid_Offset=16525
,P_Partition_Picker_Avoid_Offset=16526
,P_Partition_Avoid_Check=16527
,P_Anode_NG_PNP_Tact_Time_Start=16608
,P_Cathode_NG_PNP_Tact_Time_Start=16609
,P_Anode_NG_PNP_Tact_Time_End=16610
,P_Cathode_NG_PNP_Tact_Time_End=16611
,P_Tact_Time_Final_Roller_Clamp=16802
,P_Tact_Time_Final_Roller_Unclamp=16803
,P_Tact_Time_Stack_Table_Down=16804
,P_Tact_Time_Stack_Table_Up=16805
,P_Tact_Time_Sepa_Cutting_Down=16806
,P_Tact_Time_Sepa_Cutting_Up=16807
,P_Tact_Time_ARC_Upper_Plate_Up=16808
,P_Tact_Time_ARC_Upper_Plate_Down=16809
,P_Tact_Time_ARC_Upper_Tilting_On=16810
,P_Tact_Time_ARC_Upper_Tilting_Off=16811
,P_Tact_Time_ARC_Upper_Cutter_Fwd=16812
,P_Tact_Time_ARC_Upper_Cutter_Bwd=16813
,P_Tact_Time_ARC_Upper_Clamp_On=16814
,P_Tact_Time_ARC_Upper_Clamp_Off=16815
,P_Tact_Time_ARC_Lower_Plate_Up=16816
,P_Tact_Time_ARC_Lower_Plate_Down=16817
,P_Tact_Time_ARC_Lower_Tilting_On=16818
,P_Tact_Time_ARC_Lower_Tilting_Off=16819
,P_Tact_Time_ARC_Lower_Cutter_Fwd=16820
,P_Tact_Time_ARC_Lower_Cutter_Bwd=16821
,P_Tact_Time_ARC_Lower_Clamp_On=16822
,P_Tact_Time_ARC_Lower_Clamp_Off=16823
,P_Tact_Time_Save_Final_Roller_Clamp_Time=16824
,P_Tact_Time_Save_Final_Roller_Unclamp_Time=16825
,P_Tact_Time_Save_Stack_Table_Down_Time=16826
,P_Tact_Time_Save_Stack_Table_Up_Time=16827
,P_Tact_Time_Save_Sepa_Cutting_Down_Time=16828
,P_Tact_Time_Save_Sepa_Cutting_Up_Time=16829
,P_Tact_Time_Save_ARC_Upper_Plate_Up_Time=16830
,P_Tact_Time_Save_ARC_Upper_Plate_Down_Time=16831
,P_Tact_Time_Save_ARC_Upper_Tilting_On_Time=16832
,P_Tact_Time_Save_ARC_Upper_Tilting_Off_Time=16833
,P_Tact_Time_Save_ARC_Upper_Cutter_Fwd_Time=16834
,P_Tact_Time_Save_ARC_Upper_Cutter_Bwd_Time=16835
,P_Tact_Time_Save_ARC_Upper_Clamp_On_Time=16836
,P_Tact_Time_Save_ARC_Upper_Clamp_Off_Time=16837
,P_Tact_Time_Save_ARC_Lower_Plate_Up_Time=16838
,P_Tact_Time_Save_ARC_Lower_Plate_Down_Time=16839
,P_Tact_Time_Save_ARC_Lower_Tilting_On_Time=16840
,P_Tact_Time_Save_ARC_Lower_Tilting_Off_Time=16841
,P_Tact_Time_Save_ARC_Lower_Cutter_Fwd_Time=16842
,P_Tact_Time_Save_ARC_Lower_Cutter_Bwd_Time=16843
,P_Tact_Time_Save_ARC_Lower_Clamp_On_Time=16844
,P_Tact_Time_Save_ARC_Lower_Clamp_Off_Time=16845
,P_Tact_Time_Array_Init=16966
,P_Last_Run_To_Discharge_Tact_Timer=16967
,P_Last_Run_To_Discharge_Tact_Time=16968
,P_Master_Trigger_Sync_Tact_Timer=16969
,P_Master_Trigger_Sync_Tact_Time=16970
,P_Vision_First_Sepa_Stack_Align_OK_PMAC_Flag=16971
,P_PLC18_EPC_Retry_Mode_Time_Use_Flag=16972
,P_PLC18_Vision_EPC_Correction_Request_Old=16973
,P_PLC18_EPC_Moving_Flag=16974
,P_PLC18_EPC_Moving_Status=16975
,P_PLC18_EPC_Move_State_Machine=16976
,P_PLC18_EPC_Move_Status=16977
,P_PLC18_EPC_inspection_Time=16978
,P_EPC_Insp_Time=16979
,P_EPC_Correction_Time=16980
,P_TEST_Max_EPC_Sensor_Value_um=16981
,P_PLC18_EPC_Moving_Timer=16982
,P_EPC_Axis_Target_Y=16993
,P_Com_After_Sepa_Mode_Status=16994
,P_PLC18_PLC_to_PMAC_Correction_Value=16995
,P_PLC_EPC_Status=16996
,P_EPC_Retry_Over_Alarm_Flag=16997
,P_ARC_EPC_Vision_Value_Apply_Bit=16998
,P_ARC_EPC_Vision_Value_Apply_Flag=16999
,P_ARC_EPC_Vision_Value_Apply_State_Machine=17000
,P_ARC_EPC_Vision_Value_Apply_Timer=17001
,P_ARC_EPC_Vision_Value_Apply_Time=17002
,P_AH_Home_Status=17003
,P_Resetting_All_Home_Command=17004
,P_Homing_Alarm_Time=17005
,P_All_Home_Stop_Cmd=17056
,P_Home_First_Move=17057
,P_DD_M_Home_Pos_Flag=17144
,P_WAIT_INDEX=17145
,P_FR_Cmd_Check_Flag=17196
,P_PV_Separator_Dancer_Pressure=17197
,P_PV_Cathode_Clamp_Pressure=17198
,P_PV_Anoode_Clamp_Pressure=17199
,P_PV_Cathode_Final_Roller_X_Axis=17200
,P_PV_Anode_Final_Roller_X_Axis=17201
,P_PV_Cathode_Clamp_ON_Y1_Axis_Pos=17202
,P_PV_Cathode_Clamp_ON_Y2_Axis_Pos=17203
,P_PV_Cathode_Clamp_ON_Z1_Axis_Pos=17204
,P_PV_Cathode_Clamp_ON_Z2_Axis_Pos=17205
,P_PV_Anode_Clamp_ON_Y1_Axis_Pos=17206
,P_PV_Anode_Clamp_ON_Y2_Axis_Pos=17207
,P_PV_Anode_Clamp_ON_Z1_Axis_Pos=17208
,P_PV_Anode_Clamp_ON_Z2_Axis_Pos=17209
,P_PV_Cathode_2th_AT_T_Axis_Pos=17210
,P_PV_Cathode_2th_ST_T_Axis_Pos=17211
,P_PV_Cathode_2th_AT_Z_Axis_Pos=17212
,P_PV_Cathode_2th_ST_Z_Axis_Pos=17213
,P_PV_Anode_2th_AT_T_Axis_Pos=17214
,P_PV_Anode_2th_ST_T_Axis_Pos=17215
,P_PV_Anode_2th_AT_Z_Axis_Pos=17216
,P_PV_Anode_2th_ST_Z_Axis_Pos=17217
,P_PV_Cathode_1th_Ready_T_Axis_Pos=17218
,P_PV_Cathode_1th_CV_T_Axis_Pos=17219
,P_PV_Cathode_1th_AT_T_Axis_Pos=17220
,P_PV_Cathode_1th_Ready_Z_Axis_Pos=17221
,P_PV_Cathode_1th_CV_Z_Axis_Pos=17222
,P_PV_Cathode_1th_AT_Z_Axis_Pos=17223
,P_PV_Anode_1th_Ready_T_Axis_Pos=17224
,P_PV_Anode_1th_CV_T_Axis_Pos=17225
,P_PV_Anode_1th_AT_T_Axis_Pos=17226
,P_PV_Anode_1th_Ready_Z_Axis_Pos=17227
,P_PV_Anode_1th_CV_Z_Axis_Pos=17228
,P_PV_Anode_1th_AT_Z_Axis_Pos=17229
,P_PV_Cathode_NG_AT_T_Axis_Pos=17230
,P_PV_Cathode_NG_Box_T_Axis_Pos=17231
,P_PV_Anode_NG_AT_T_Axis_Pos=17232
,P_PV_Anode_NG_Box_T_Axis_Pos=17233
,P_PV_1st_Unloader_X_Axis_Pos=17234
,P_PV_1st_Unloader_Z_Axis_Pos=17235
,P_SemiRun_Separator_Dancer_Pressure_Flag=17236
,P_SemiRun_Cathode_Clamp_Pressure_Flag=17237
,P_SemiRun_Anoode_Clamp_Pressure_Flag=17238
,P_SemiRun_Cathode_Final_Roller_X_Axis_Flag=17239
,P_SemiRun_Anode_Final_Roller_X_Axis_Flag=17240
,P_SemiRun_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag=17241
,P_SemiRun_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag=17242
,P_SemiRun_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag=17243
,P_SemiRun_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag=17244
,P_SemiRun_Cathode_2th_AT_T_Axis_Pos_Flag=17245
,P_SemiRun_Cathode_2th_ST_T_Axis_Pos_Flag=17246
,P_SemiRun_Cathode_2th_AT_Z_Axis_Pos_Flag=17247
,P_SemiRun_Cathode_2th_ST_Z_Axis_Pos_Flag=17248
,P_SemiRun_Anode_2th_AT_T_Axis_Pos_Flag=17249
,P_SemiRun_Anode_2th_ST_T_Axis_Pos_Flag=17250
,P_SemiRun_Anode_2th_AT_Z_Axis_Pos_Flag=17251
,P_SemiRun_Anode_2th_ST_Z_Axis_Pos_Flag=17252
,P_SemiRun_Cathode_1th_Ready_T_Axis_Pos_Flag=17253
,P_SemiRun_Cathode_1th_CV_T_Axis_Pos_Flag=17254
,P_SemiRun_Cathode_1th_AT_T_Axis_Pos_Flag=17255
,P_SemiRun_Cathode_1th_Ready_Z_Axis_Pos_Flag=17256
,P_SemiRun_Cathode_1th_CV_Z_Axis_Pos_Flag=17257
,P_SemiRun_Cathode_1th_AT_Z_Axis_Pos_Flag=17258
,P_SemiRun_Anode_1th_Ready_T_Axis_Pos_Flag=17259
,P_SemiRun_Anode_1th_CV_T_Axis_Pos_Flag=17260
,P_SemiRun_Anode_1th_AT_T_Axis_Pos_Flag=17261
,P_SemiRun_Anode_1th_Ready_Z_Axis_Pos_Flag=17262
,P_SemiRun_Anode_1th_CV_Z_Axis_Pos_Flag=17263
,P_SemiRun_Anode_1th_AT_Z_Axis_Pos_Flag=17264
,P_SemiRun_Cathode_NG_AT_T_Axis_Pos_Flag=17265
,P_SemiRun_Cathode_NG_Box_T_Axis_Pos_Flag=17266
,P_SemiRun_Anode_NG_AT_T_Axis_Pos_Flag=17267
,P_SemiRun_Anode_NG_Box_T_Axis_Pos_Flag=17268
,P_SemiRun_1st_Unloader_Forward_Pos_Flag=17269
,P_Motion_Separator_Dancer_Pressure_Flag=17270
,P_Motion_Cathode_Clamp_Pressure_Flag=17271
,P_Motion_Anoode_Clamp_Pressure_Flag=17272
,P_Motion_Cathode_Final_Roller_X_Axis_Flag=17273
,P_Motion_Anode_Final_Roller_X_Axis_Flag=17274
,P_Motion_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag=17275
,P_Motion_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag=17276
,P_Motion_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag=17277
,P_Motion_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag=17278
,P_Motion_Cathode_2th_AT_T_Axis_Pos_Flag=17279
,P_Motion_Cathode_2th_ST_T_Axis_Pos_Flag=17280
,P_Motion_Cathode_2th_AT_Z_Axis_Pos_Flag=17281
,P_Motion_Cathode_2th_ST_Z_Axis_Pos_Flag=17282
,P_Motion_Anode_2th_AT_T_Axis_Pos_Flag=17283
,P_Motion_Anode_2th_ST_T_Axis_Pos_Flag=17284
,P_Motion_Anode_2th_AT_Z_Axis_Pos_Flag=17285
,P_Motion_Anode_2th_ST_Z_Axis_Pos_Flag=17286
,P_Motion_Cathode_1th_Ready_T_Axis_Pos_Flag=17287
,P_Motion_Cathode_1th_CV_T_Axis_Pos_Flag=17288
,P_Motion_Cathode_1th_AT_T_Axis_Pos_Flag=17289
,P_Motion_Cathode_1th_Ready_Z_Axis_Pos_Flag=17290
,P_Motion_Cathode_1th_CV_Z_Axis_Pos_Flag=17291
,P_Motion_Cathode_1th_AT_Z_Axis_Pos_Flag=17292
,P_Motion_Anode_1th_Ready_T_Axis_Pos_Flag=17293
,P_Motion_Anode_1th_CV_T_Axis_Pos_Flag=17294
,P_Motion_Anode_1th_AT_T_Axis_Pos_Flag=17295
,P_Motion_Anode_1th_Ready_Z_Axis_Pos_Flag=17296
,P_Motion_Anode_1th_CV_Z_Axis_Pos_Flag=17297
,P_Motion_Anode_1th_AT_Z_Axis_Pos_Flag=17298
,P_Motion_Cathode_NG_AT_T_Axis_Pos_Flag=17299
,P_Motion_Cathode_NG_Box_T_Axis_Pos_Flag=17300
,P_Motion_Anode_NG_AT_T_Axis_Pos_Flag=17301
,P_Motion_Anode_NG_Box_T_Axis_Pos_Flag=17302
,P_Motion_1st_Unloader_Forward_Pos_Flag=17303
,P_Cathode_1PNP_Sacle_Value=17304
,P_Cathode_2PNP_Sacle_Value=17305
,P_Anode_1PNP_Sacle_Value=17306
,P_Anode_2PNP_Sacle_Value=17307
,P_PLC01_SemiRun_PV_Flag=17308
,P_PV_EPC_Index=17309
,P_BTN_MSA_Total_Value=17325
,P_Vision_Align_Trigger_Timer=17326
,P_Vision_Stack_Trigger_Timer=17327
,P_MSA_Chk_Pos_Timer=17328
,P_MSA_Chk_Pos_Time=17329
,P_VISION_MSA_Seq_Index=17350
,P_VISION_MSA_Anode_Align_Bit_Pos=17351
,P_VISION_MSA_Seq_PreCondition_Index=17352
,P_MSA_CycleStop_Point_Check_Complete_RTN=17353
,P_Current_Anode_Align_MSA_Run_Count=17359
,P_Current_Cathode_Align_MSA_Run_Count=17360
,P_Current_Anode_Stack_MSA_Run_Count=17361
,P_Current_Cathode_Stack_MSA_Run_Count=17362
,P_VISION_MSA_Align_Count_Chk_Flag=17363
,P_VISION_MSA_Stack_Count_Chk_Flag=17364
,P_VISION_MSA_pre_InterLock_Cmd=17365
,P_VISION_MSA_pre_InterLock_Status=17366
,P_VISION_MSA_pre_InterLock_Check_Assy_Bit=17367
,P_VISION_MSA_pre_InterLock_Assy_Bit_Pos=17368
,P_Vision_MSA_Interlock_Status=17369
,P_VISION_MSA_MODE=17370
,P_VISION_MSA_Status_Flag=17371
,P_VISION_MSA_State_Machine=17372
,P_VISION_MSA_Status=17373
,P_VISION_MSA_Seq_Command_Occurs=17374
,P_Vision_Align_Trigger_Time=17375
,P_Anode_Align_MSA_Motion_Check=17376
,P_Cathode_Align_MSA_Motion_Check=17377
,P_Anode_Stack_MSA_Motion_Check=17378
,P_Cathode_Stack_MSA_Motion_Check=17379
,P_Anode_Align_MSA_Motion_ProgActive_Complete=17380
,P_Cathode_Align_MSA_Motion_ProgActive_Complete=17381
,P_Anode_Stack_MSA_Motion_ProgActive_Complete=17382
,P_Cathode_Stack_MSA_Motion_ProgActive_Complete=17383
,P_BTN_Align_Off_Total_Value=17384
,P_Align_Take_Off_Status=17388
,P_Align_Take_Off_Mode=17389
,P_Align_Take_Off_Status_Flag=17390
,P_Align_Take_Off_State_Machine=17391
,P_Align_Take_Off_Chk_Pos_Timer=17392
,P_Align_Take_Off_Motor_Check_Complete=17393
,P_Align_Take_Off_Speed_Return_Complete=17394
,P_Align_Take_Off_Interlock_Status=17395
,P_Align_Take_Off_pre_InterLock_Cmd=17396
,P_Align_Take_Off_pre_InterLock_Status=17397
,P_Align_Take_Off_pre_InterLock_Check_Assy_Bit=17398
,P_Align_Take_Off_pre_InterLock_Assy_Bit_Pos=17399
,P_Align_Take_Off_Seq_Index=17400
,P_Align_Take_Off_Seq_PreCondition_Index=17401
,P_Align_Take_Off_Stop_Signal=17422
,P_Vision_Cal_Reset_Count=17423
,P_2nd_PNP_Cleaning_Mode_Cmd=17424
,P_2nd_PNP_Cleaning_Mode_Status=17425
,P_2nd_PNP_Cleaning_Mode_Z_Jog_Speed=17426
,P_2nd_PNP_Cleaning_Mode_X_Jog_Speed=17427
,P_2nd_PNP_Cleaning_Mode_T_Jog_Speed=17428
,P_2nd_PNP_Cleaning_Avoid_2nd_T_Pos=17429
,P_PNP_Vac_Chk_Mode_Interlock=17430
,P_Vac_Chk_Test=17431
,P_Anode_1st_PNP_Vac_Chk_Mode_Blocked=17432
,P_Cathode_1st_PNP_Vac_Chk_Mode_Blocked=17433
,P_Anode_2nd_PNP_Vac_Chk_Mode_Blocked=17434
,P_Cathode_2nd_PNP_Vac_Chk_Mode_Blocked=17435
,P_SM_Anode_1st_PNP_Vac_Chk_Mode=17436
,P_SM_Cathode_1st_PNP_Vac_Chk_Mode=17437
,P_SM_Anode_2nd_PNP_Vac_Chk_Mode=17438
,P_SM_Cathode_2nd_PNP_Vac_Chk_Mode=17439
,P_Anode_1st_PNP_Vac_Chk_Execute_Timer=17440
,P_Cathode_1st_PNP_Vac_Chk_Execute_Timer=17441
,P_Anode_2nd_PNP_Vac_Chk_Execute_Timer=17442
,P_Cathode_2nd_PNP_Vac_Chk_Execute_Timer=17443
,P_Anode_1st_PNP_Vac_Check_Timer=17444
,P_Cathode_1st_PNP_Vac_Check_Timer=17445
,P_Anode_2nd_PNP_Vac_Check_Timer=17446
,P_Cathode_2nd_PNP_Vac_Check_Timer=17447
,P_Anode_1st_PNP_Vac_Chk_Status=17448
,P_Cathode_1st_PNP_Vac_Chk_Status=17449
,P_Anode_2nd_PNP_Vac_Chk_Status=17450
,P_Cathode_2nd_PNP_Vac_Chk_Status=17451
,P_Anode_1st_PNP_Vac_Chk_Mode_Stop_Blocked=17452
,P_Cathode_1st_PNP_Vac_Chk_Mode_Stop_Blocked=17453
,P_Anode_2nd_PNP_Vac_Chk_Mode_Stop_Blocked=17454
,P_Cathode_2nd_PNP_Vac_Chk_Mode_Stop_Blocked=17455
,P_Anode_1st_PnP_Vac_Chk_Mode_RTN=17456
,P_Cathode_1st_PnP_Vac_Chk_Mode_RTN=17457
,P_Anode_2nd_PnP_Vac_Chk_Mode_RTN=17458
,P_Cathode_2nd_PnP_Vac_Chk_Mode_RTN=17459
,P_PNP_Vac_Chk_Mode_TimeBase_Rtn=17460
,P_PNP_Vac_Chk_Mode_Timer=17461
,P_Anode_1st_PNP_Vac_Chk_Mode_Err=17462
,P_Cathode_1st_PNP_Vac_Chk_Mode_Err=17463
,P_Anode_2nd_PNP_Vac_Chk_Mode_Err=17464
,P_Cathode_2nd_PNP_Vac_Chk_Mode_Err=17465
,P_PNP_Vac_Chk_Mode_BTN_Err=17466
,P_BTN_CA_1st_PNP_Vac_Chk_Mode=17467
,P_BTN_AN_1st_PNP_Vac_Chk_Mode=17468
,P_BTN_CA_2nd_PNP_Vac_Chk_Mode=17469
,P_BTN_AN_2nd_PNP_Vac_Chk_Mode=17470
,P_Old_ARC_Upper_Tilting_Status=17505
,P_Old_ARC_Lower_Tilting_Status=17506
,P_ARC_Tilting_Unwinder_Move_Dis=17507
,P_ARC_Tilting_Unwinder_Move_Motor_Num=17508
,P_ARC_Tilting_Unwinder_Move_State_Machine=17509
,P_ARC_Tilting_Unwinder_Move_Status=17510
,P_ARC_Tilting_Unwinder_Move_Chk_Timer=17511
,P_ARC_Tilting_Unwinder_Move_Chk_Time=17512
,P_MSA_Cathode_Blow_Time=17513
,P_MSA_Cathode_Vac_Time=17514
,P_MES_FR_Avoid_Z_Tm=17515
,P_MES_FR_Avoid_Z_Ta=17516
,P_MES_FR_Avoid_Z_Ts=17517
,P_MES_FR_Avoid_X_Tm=17518
,P_MES_FR_Avoid_X_Ta=17519
,P_MES_FR_Avoid_X_Ts=17520
,P_System_Cascading_ON_Cmd=17631
,P_System_Cascading_OFF_Cmd=17632
,P_System_Master_Following_ON_Cmd=17633
,P_System_Master_Following_OFF_Cmd=17634
,P_System_CamTable_ON_Cmd=17635
,P_System_CamTable_OFF_Cmd=17636
,P_System_Spool_Home_Ready_Pos_Cmd=17637
,P_System_Cascading_ON_Status=17638
,P_System_Cascading_OFF_Status=17639
,P_System_Master_Following_ON_Status=17640
,P_System_Master_Following_OFF_Status=17641
,P_System_CamTable_ON_Status=17642
,P_System_CamTable_OFF_Status=17643
,P_System_Spool_Home_Ready_Pos_Status=17644
,P_System_Cascading_ON_State_Machine=17645
,P_System_Cascading_OFF_State_Machine=17646
,P_System_Master_Follwing_ON_State_Machine=17647
,P_System_Master_Follwing_OFF_State_Machine=17648
,P_System_CamTable_ON_State_Machine=17649
,P_System_CamTable_OFF_State_Machine=17650
,P_System_Spool_Home_Ready_Pos_State_Machine=17651
,P_System_Cascading_ON_Complete_Flag=17652
,P_System_Cascading_OFF_Complete_Flag=17653
,P_System_Master_Following_ON_Complete_Flag=17654
,P_System_Master_Following_OFF_Complete_Flag=17655
,P_System_CamTable_ON_Complete_Flag=17656
,P_System_CamTable_OFF_Complete_Flag=17657
,P_System_Spool_Home_Ready_Pos_Complete_Flag=17658
,P_Servo_Dancer_Cascading_Off_Timer=17659
,P_Servo_Dancer_Cascading_Set_Timer=17660
,P_Dancer_Frist_Home_Ready_Pos_Timer=17661
,P_Driving_Motor_Use_Flag=17662
,P_Home_Spool_Unwinding=17663
,P_OutValue=17664
,P_Dancer_Out_Slew_Seq=17665
,P_OutChangeValue=17666
,P_Rot_OutValue=17667
,P_OutChangeTime=17668
,P_Regul_Max_kPa_Value=17679
,P_Regul_Min_kPa_Value=17680
,P_Regul_Max_AD=17681
,P_Regul_Min_AD=17682
,P_Current_Max_Value=17683
,P_Current_Min_Value=17684
,P_Current_Max_AD=17685
,P_Current_Min_AD=17686
,P_Sepa_Cal_Inclination=17687
,P_Regul_Cal_Inclination=17688
,P_Cutter_Heat_Amp_Data_Bit=17689
,P_Cut_Heat_Amp_Value=17690
,P_AI_Cathode_Clamp_Damper_AVG=17691
,P_AI_Anode_Clamp_Damper_AVG=17692
,P_Tension_Ready_Pos_Cmd=17693
,P_Tension_Ready_State_Machine=17694
,P_Tension_Ready_Pos_Status=17695
,P_Dancer_Center_Pos=17696
,P_Upper_Sepa_Cal_Inclination=17697
,P_Lower_Sepa_Cal_Inclination=17698
,P_Unwinder_Jogspeed=17699
,P_Cascading_First_Out=17700
,P_Dancer_Cur_Vdc=17701
,P_Dancer_Cur_Torque=17702
,P_Dancer_Cur_Newton=17703
,P_Dancer_Cur_Kgf=17704
,P_Board_IO_Count=17705
,P_Force_BTN_Address_Clear_Count=17706
,P_Force_BTN_Condition_Count=18091
,P_Old_Force_BTN_Mode=18092
,P_Force_BTN_Address_Count=18093
,P_Force_BTN_GPIO_Address_Count=18094
,P_Force_BTN_Ecat_Address_Count=18095
,P_Force_BTN_M_Variable_Save_Count=18096
,P_Force_BTN_M_Variable_Start_Num=18097
,P_Force_BTN_Normal_Mode_Status=18098
,P_Force_BTN_Normal_Mode_State_Machine=18099
,P_Force_BTN_Normal_Mode_Complete_Flag=18100
,P_Force_BTN_Force_Mode_Timer=18101
,P_Force_BTN_Force_Mode_Delay_Time=18102
,P_Force_BTN_Force_Mode_Status=18103
,P_Force_BTN_Force_Mode_State_Machine=18104
,P_Force_BTN_Force_Mode_Complete_Flag=18105
,P_Mem_Save_Error_Bit=18106
,P_Servo_Gain_Save_Command=18117
,P_Servo_Gain_Load_Command=18118
,P_Servo_Gain_Save_Flag=18119
,P_Servo_Gain_Load_Flag=18120
,P_Insert_Phase_Flag=18301
,P_Alarm_Occur_Flag=18402
,P_Alarm_Wait_Time=18407
,P_Alarm_Delay_Timer=18408
,P_Compare_Priority=18409
,P_Alarm_Report=18410
,P_Alarm_Num=18411
,P_Alarm_Index=18412
,P_First_Alarm_Flag=18413
,P_Servo_Alarm_Check=18444
,P_Ecat_Servo_Alarm_Check=18445
,P_Alarm_Count=18446
,P_Alarm_Get_Flag=18447
,P_Alarm_Sort_Time=18448
,P_Alarm_Frist_Flag=18449
,P_Alarm_Delay_time=18450
,P_IL_ON_OFF_Flag=19271
,P_IL_Coord_Robot=19272
,P_IL_Robot_Bit=19273
,P_IL_Outer_Status=19274
,P_Robot_Unit_Serch_Flag=19275
,P_IL_Home_Chk_Edge=19276
,P_IL_Sprint=19280
,P_IL_length=19281
,P_IL_Strcat=19282
,P_IL_Popup_Motor=19283
,P_IL_Motor_Page=19284
,P_IL_Recipe_Bit=19285
,P_Interlock_Popup_On_Flag=19286
,P_Motor_Page=19287
,P_OP_Side_Ca_PNP_Pos=19288
,P_OP_Side_An_PNP_Pos=19289
,P_OP_Side_PMAC_Cur_Mode=19290
,P_Abs_Trans_Cur_Pos=19291
,P_Minus_IL_Offset=19292
,P_Plus_IL_Offset=19293
,P_2nd_PNP_Arm_Radius=19294
,P_IL_Enable_Flag=19295
,P_Plus_Interlock_Bit=19296
,P_Minus_Interlock_Bit=19297
,UPPos=19298
,Unloader_In_StackPos=19299
,FR_AnodePos=19300
,FR_CathodePos=19301
,Before_In_Stack=19302
,In_Stack=19303
,P_Minus_Collision_Risk_Motor=19306
,P_IL_Clamp_Y=19307
,P_IL_Clamp_Z=19308
,P_IL_Clamp_Pos=19309
,P_IL_Use_FR_Clamp_Pos=19310
,P_Ca_1st_Plus_IL_Offset=19711
,P_Ca_1st_Minus_IL_Offset=19712
,P_An_1st_Plus_IL_Offset=19713
,P_An_1st_Minus_IL_Offset=19714
,P_Z_Pos_Data=19733
,P_Clamp_Z_Plus_IL_Offset=19734
,P_FR_Z_Minus_IL_Offset=19739
,P_X_PLC_InterLock=19795
,P_IL_Home_Chk=19796
,P_IL_Home_Chk_Motor_Update=19817
,P_IL_Inside_Home_Chk_Complete=19818
,P_IL_Outside_Home_Chk_Complete=19819
,P_IL_Motor_Home_Chk_RTN=19820
,P_IL_Function_Cnt=19821
,P_IL_Function_Motor_Num=19822
,P_Jog_Page_Flag=19823
,P_Jog_Btn_Flag=19824
,P_Old_Jog_Btn_Flag=19825
,P_Anode_1st_TR_Belt_Down_Flag=19826
,P_Anode_1st_TR_Belt_Pick_Up_Flag=19827
,P_Anode_1st_TR_Align_Down_Flag=19828
,P_Anode_2nd_TR_Align_Pick_Up_Flag=19829
,P_Anode_2nd_TR_Stack_Down_Flag=19830
,P_Anode_NG_TR_Align_Pick_Up_Flag=19831
,P_Anode_NG_TR_NG_Place_Down_Flag=19832
,P_Anode_2nd_TR_Align_Down_Flag=19833
,P_Anode_1st_TR_Align_Pick_Up_Flag=19834
,P_Anode_1st_TR_Belt_Down_State_Machine=19835
,P_Anode_1st_TR_Belt_Down_Status=19836
,P_Anode_1st_TR_Belt_Pick_Up_State_Machine=19837
,P_Anode_1st_TR_Belt_Pick_Up_Status=19838
,P_Anode_1st_TR_Align_Down_State_Machine=19839
,P_Anode_1st_TR_Align_Down_Status=19840
,P_Anode_2nd_TR_Align_Pick_Up_State_Machine=19841
,P_Anode_2nd_TR_Align_Pick_Up_Status=19842
,P_Anode_2nd_TR_Stack_Down_State_Machine=19843
,P_Anode_2nd_TR_Stack_Down_Status=19844
,P_Anode_NG_TR_Align_Pick_Up_State_Machine=19845
,P_Anode_NG_TR_Align_Pick_Up_Status=19846
,P_Anode_NG_TR_NG_Place_Down_State_Machine=19847
,P_Anode_NG_TR_NG_Place_Down_Status=19848
,P_Anode_2nd_TR_Align_Down_State_Machine=19849
,P_Anode_2nd_TR_Align_Down_Status=19850
,P_Anode_1st_TR_Align_Pick_Up_State_Machine=19851
,P_Anode_1st_TR_Align_Pick_Up_Status=19852
,P_Cathode_1st_TR_Belt_Down_Flag=19853
,P_Cathode_1st_TR_Belt_Pick_Up_Flag=19854
,P_Cathode_1st_TR_Align_Down_Flag=19855
,P_Cathode_2nd_TR_Align_Pick_Up_Flag=19856
,P_Cathode_2nd_TR_Stack_Down_Flag=19857
,P_Cathode_NG_TR_Align_Pick_Up_Flag=19858
,P_Cathode_NG_TR_NG_Place_Down_Flag=19859
,P_Cathode_2nd_TR_Align_Down_Flag=19860
,P_Cathode_1st_TR_Align_Pick_Up_Flag=19861
,P_Cathode_1st_TR_Belt_Down_State_Machine=19862
,P_Cathode_1st_TR_Belt_Down_Status=19863
,P_Cathode_1st_TR_Belt_Pick_Up_State_Machine=19864
,P_Cathode_1st_TR_Belt_Pick_Up_Status=19865
,P_Cathode_1st_TR_Align_Down_State_Machine=19866
,P_Cathode_1st_TR_Align_Down_Status=19867
,P_Cathode_2nd_TR_Align_Pick_Up_State_Machine=19868
,P_Cathode_2nd_TR_Align_Pick_Up_Status=19869
,P_Cathode_2nd_TR_Stack_Down_State_Machine=19870
,P_Cathode_2nd_TR_Stack_Down_Status=19871
,P_Cathode_NG_TR_Align_Pick_Up_State_Machine=19872
,P_Cathode_NG_TR_Align_Pick_Up_Status=19873
,P_Cathode_NG_TR_NG_Place_Down_State_Machine=19874
,P_Cathode_NG_TR_NG_Place_Down_Status=19875
,P_Cathode_2nd_TR_Align_Down_State_Machine=19876
,P_Cathode_2nd_TR_Align_Down_Status=19877
,P_Cathode_1st_TR_Align_Pick_Up_State_Machine=19878
,P_Cathode_1st_TR_Align_Pick_Up_Status=19879
,P_Old_Anode_Belt_ASCII=19880
,P_Old_Cathode_Belt_ASCII=19881
,P_Anode_Belt_ASCII=19882
,P_Cathode_Belt_ASCII=19883
,P_Check_Vac_Time=19884
,P_Send_Anode_NG_Code_To_PLC=19885
,P_Receive_Anode_NG_Code_From_PLC=19886
,P_Send_Cathode_NG_Code_To_PLC=19887
,P_Receive_Cathode_NG_Code_From_PLC=19888
,P_Current_Cell_Memory_Anode_1P=19889
,P_Current_Cell_Memory_Anode_AT=19890
,P_Current_Cell_Memory_Anode_2P=19891
,P_Current_Cell_Memory_Cathode_1P=19892
,P_Current_Cell_Memory_Cathode_AT=19893
,P_Current_Cell_Memory_Cathode_2P=19894
,P_Current_Cell_Memory_Stack_Table=19895
,P_Current_Cell_Memory_Cathode_NG_TR=19896
,P_Current_Cell_Memory_Anode_NG_TR=19897
,P_BTN_Anode_1st_TR_Buffer_Clear=19898
,P_BTN_Anode_2nd_TR_Buffer_Clear=19899
,P_BTN_Anode_Align_Buffer_Clear=19900
,P_BTN_Anode_NG_TR_Buffer_Clear=19901
,P_BTN_Cathode_1st_TR_Buffer_Clear=19902
,P_BTN_Cathode_2nd_TR_Buffer_Clear=19903
,P_BTN_Cathode_Align_Buffer_Clear=19904
,P_BTN_Cathode_NG_TR_Buffer_Clear=19905
,P_Old_BTN_Anode_1st_TR_Buffer_Clear=19906
,P_Old_BTN_Anode_2nd_TR_Buffer_Clear=19907
,P_Old_BTN_Anode_Align_Buffer_Clear=19908
,P_Old_BTN_Anode_NG_TR_Buffer_Clear=19909
,P_Old_BTN_Cathode_1st_TR_Buffer_Clear=19910
,P_Old_BTN_Cathode_2nd_TR_Buffer_Clear=19911
,P_Old_BTN_Cathode_Align_Buffer_Clear=19912
,P_Old_BTN_Cathode_NG_TR_Buffer_Clear=19913
,P_Send_Anode_NG_Code_Flag=19914
,P_Send_Cathode_NG_Code_Flag=19915
,P_Anode_Vision_NG_To_PLC_Flag=19916
,P_Cathode_Vision_NG_To_PLC_Flag=19917
,P_Status_Clear_Sheet_Maint_Check=19918
,P_Single_Run_Start_Flag=19919
,P_Single_Run_Control_State_Machine=19920
,P_Single_Run_Control_Status=19921
,P_Single_Run_Execute_Bit=19922
,P_User_Dry_Run_Mode=19923
,P_Single_Run_State_Machine=19924
,P_Single_Run_Status=19925
,P_Single_Run_Unit=19926
,P_Single_Run_Evade_Pos_RTN=19927
,P_Single_Run_Evade_Pos_Check_RTN=19928
,P_Single_Run_Pos_Rtn1=19929
,P_Single_Run_Pos_Rtn2=19930
,P_Single_Run_Motion_Ready_RTN=19931
,P_Single_Run_Execution_Interlock_RTN=19932
,P_Single_Run_Coord_Activate_RTN=19933
,P_Single_Run_Coord_Activate_Check_RTN=19934
,P_Single_Run_Select_Run_Mode_RTN=19935
,P_Single_Run_Execution_Run_RTN=19936
,P_Single_Run_Motion_Ready_State_Machine=19937
,P_Coord_1=19938
,P_Coord_2=19939
,P_Coord_3=19940
,P_Coord_4=19941
,P_Final_Roll_Z_Motion_Flag=19942
,P_Final_Roll_Z_Motion_State_Machine=19943
,P_Main_Z_Motion_Flag=19944
,P_Main_Z_Motion_State_Machine=19945
,P_Single_Run_Mode_Flag=19946
,P_Cathode_AT_Motion_Flag=19947
,P_Cathode_Align_Motion_State_Machine=19948
,P_Anode_AT_Motion_Flag=19949
,P_Anode_Align_Motion_State_Machine=19950
,P_Sheet_Paper_Motion_Flag=19951
,P_Sheet_Paper_Motion_State_Machine=19952
,P_Cathode_NG_PNP_T_Motion_Flag=19953
,P_Cathode_NG_PNP_T_Motion_State_Machine=19954
,P_Cathode_NG_PNP_Z_Motion_Flag=19955
,P_Cathode_NG_PNP_Z_Motion_State_Machine=19956
,P_Anode_NG_PNP_T_Motion_Flag=19957
,P_Anode_NG_PNP_T_Motion_State_Machine=19958
,P_Anode_NG_PNP_Z_Motion_Flag=19959
,P_Anode_NG_PNP_Z_Motion_State_Machine=19960
,P_1st_UND_X_Motion_Flag=19961
,P_1st_UND_X_Motion_State_Machine=19962
,P_1st_UND_Z_Motion_Flag=19963
,P_1st_UND_Z_Motion_State_Machine=19964
,P_1st_UND_T_Motion_Flag=19965
,P_1st_UND_T_Motion_State_Machine=19966
,P_Cathode_Run_Command_Flag=19967
,P_Anode_Run_Command_Flag=19968
,P_NG_PNP_Uint_Motion_Flag=19969
,P_NG_PNP_Uint_State_Machine=19970
,P_NG_PNP_Motion_Cnt=19971
,P_Single_Run_Timer=19982
,P_Single_Run_Align_Timer=19983
,P_Single_Run_Align_Timer2=19984
,P_Single_Run_Finall_Roll_Z_Timer=19985
,P_Single_RuN_MAIN_Z_Timer=19986
,P_Single_Run_Sheet_Paper_Timer=19987
,P_Single_Run_Debug_SM=19988
,P_Error_Monitoring_Count_1=19989
,P_Error_Monitoring_Count_2=19990
,P_Error_Monitoring_Count_3=19991
,P_Error_Monitoring_Count_4=19992
,P_Error_Monitoring_Count_5=19993
,P_Old_Single_Run_Mode_Flag=19994
,P_Old_Current_Mode=19995
,P_Single_Run_Timebase_Off_RTN=19996
,P_Single_Run_Stop_State_Machine=19997
,P_Single_Run_Stop_Status=19998
,P_Single_Run_Stop_Timer=19999
,P_Single_Run_Stop_Init_RTN=20000
,P_Single_Run_Stop_Btn_Chk=20001
,P_Single_Run_Stop_Command=20002
,P_Motor_Ready_Poa_Inpos_200um=20003
,P_Ecat_Parameter_Write_Flag=20004
,P_Ecat_Parameter_Read_Flag=20005
,P_Ecat_Each_Parameter_Write_Flag=20006
,P_Ecat_Slave_Idx=20007
,P_Ec_Num=20008
,P_Ecat_Read_Motor_Num=20009
,P_Ecat_Write_Motor_Num=20010
,P_Ecat_Parameter_Write_State_Machine=20011
,P_Ecat_Parameter_Read_State_Machine=20012
,P_Ecat_Each_Parameter_Write_State_Machine=20013
,P_Ecat_Write_Status=20134
,P_Ecat_Read_Status=20135
,P_Ecat_Each_Write_Status=20136
,P_Align_Plus_Blow_Test=20697
,P_System_Setting_Flag=20698
,P_Ecat_Setting_Flag=20699
,P_Ecat_Activation_State_Machine=20700
,P_PLC31_Ecat_Retry_Cnt=20701
,P_Ecat_Connect_Result=20702
,P_Ecat_Slave_Error=20703
,P_PWM_AbsPhasePosOffset_Change_State_Machine=20704
,P_AbsPhasePosOffset_Change_Complete=20705
,P_PWM_AbsPhasing_Fail=20706
,P_PWM_AbsPhasing_Complete=20707
,P_Whole_Stacking_Tack_Time=20708
,P_Whole_Stacking_Tack_Time_Check=20709
,P_Whole_Stacking_Tack_Timer_Check_Flag=20710
,P_Whole_Stacking_Timer_Shift_Status_Machine=20711
,P_Whole_Stacking_TackTime_Array0=20712
,P_Whole_Stacking_TackTime_Array1=20713
,P_Whole_Stacking_TackTime_Array2=20714
,P_Whole_Stacking_TackTime_Array3=20715
,P_Whole_Stacking_TackTime_Array4=20716
,P_Whole_Stacking_TackTime_Array5=20717
,P_Whole_Stacking_TackTime_Array6=20718
,P_Whole_Stacking_TackTime_Array7=20719
,P_Whole_Stacking_TackTime_Array8=20720
,P_Whole_Stacking_TackTime_Array9=20721
,P_Whole_Stacking_TackTime_Array10=20722
,P_First_Stacking_Start=20723
,P_Last_Stacking_Complete=20724
,P_Stacking_Tack_Time=20725
,P_Stacking_Tack_Time_Check=20726
,P_Stacking_Tack_Timer_Check_Flag=20727
,P_Stacking_Timer_Shift_Status_Machine=20728
,P_Cathode_to_Anode_FR_Tack_Time_Check=20729
,P_Anode_to_Cathode_FR_Tack_Time_Check=20730
,P_Cathode_to_Anode_FR_Tack_Time_Start=20731
,P_Anode_to_Cathode_FR_Tack_Time_Start=20732
,P_Cathode_to_Anode_FR_Tack_Time_Complete=20733
,P_Anode_to_Cathode_FR_Tack_Time_Complete=20734
,P_Cathode_to_Anode_FR_Time=20735
,P_Anode_to_Cathode_FR_Time=20736
,P_Cathode_to_Anode_FR_Tack_Timer_Check_Flag=20737
,P_Anode_to_Cathode_FR_Tack_Timer_Check_Flag=20738
,P_Anode_Align_Table_Time=20739
,P_Anode_Align_Table_Tack_Time_Check=20740
,P_Anode_Align_Table_Tack_Timer_Check_Flag=20741
,P_Anode_Align_Table_Timer_Shift_Status_Machine=20742
,P_Anode_Align_Tack_Time_Start=20743
,P_Anode_Align_Tack_Time_Complete=20744
,P_Cathode_Align_Table_Time=20745
,P_Cathode_Align_Table_Tack_Time_Check=20746
,P_Cathode_Align_Table_Tack_Timer_Check_Flag=20747
,P_Cathode_Align_Table_Timer_Shift_Status_Machine=20748
,P_Cathode_Align_Tack_Time_Start=20749
,P_Cathode_Align_Tack_Time_Complete=20750
,P_Anode_1th_Tack_Time_Start=20751
,P_Anode_1th_Tack_Time_Complete=20752
,P_Anode_1th_Time=20753
,P_Anode_1th_Tack_Time_Check=20754
,P_Anode_1th_Tack_Timer_Check_Flag=20755
,P_Anode_1th_Timer_Shift_Status_Machine=20756
,P_Cathode_1th_Tack_Time_Start=20757
,P_Cathode_1th_Tack_Time_Complete=20758
,P_Cathode_1th_Time=20759
,P_Cathode_1th_Tack_Time_Check=20760
,P_Cathode_1th_Tack_Timer_Check_Flag=20761
,P_Cathode_1th_Timer_Shift_Status_Machine=20762
,P_Anode_2th_Tack_Time_Start=20763
,P_Anode_2th_Tack_Time_Complete=20764
,P_Anode_2th_Time=20765
,P_Anode_2th_Tack_Time_Check=20766
,P_Anode_2th_Tack_Timer_Check_Flag=20767
,P_Anode_2th_Timer_Shift_Status_Machine=20768
,P_Cathode_2th_Tack_Time_Start=20769
,P_Cathode_2th_Tack_Time_Complete=20770
,P_Cathode_2th_Time=20771
,P_Cathode_2th_Tack_Time_Check=20772
,P_Cathode_2th_Tack_Timer_Check_Flag=20773
,P_Cathode_2th_Timer_Shift_Status_Machine=20774
,P_Anode_1th_NG_Tack_Time_Start=20775
,P_Anode_1th_NG_Tack_Time_Complete=20776
,P_Anode_1th_NG_Time=20777
,P_Anode_1th_NG_Tack_Time_Check=20778
,P_Anode_1th_NG_Tack_Timer_Check_Flag=20779
,P_Anode_1th_NG_Timer_Shift_Status_Machine=20780
,P_Cathode_1th_NG_Tack_Time_Start=20781
,P_Cathode_1th_NG_Tack_Time_Complete=20782
,P_Cathode_1th_NG_Time=20783
,P_Cathode_1th_NG_Tack_Time_Check=20784
,P_Cathode_1th_NG_Tack_Timer_Check_Flag=20785
,P_Cathode_1th_NG_Timer_Shift_Status_Machine=20786
,P_Anode_Clamp_Tack_Time_Start=20787
,P_Anode_Clamp_Tack_Time_Complete=20788
,P_Anode_Clamp_Time=20789
,P_Anode_Clamp_Tack_Time_Check=20790
,P_Anode_Clamp_Tack_Timer_Check_Flag=20791
,P_Anode_Clamp_Timer_Shift_Status_Machine=20792
,P_Cathode_Clamp_Tack_Time_Start=20793
,P_Cathode_Clamp_Tack_Time_Complete=20794
,P_Cathode_Clamp_Time=20795
,P_Cathode_Clamp_Tack_Time_Check=20796
,P_Cathode_Clamp_Tack_Timer_Check_Flag=20797
,P_Cathode_Clamp_Timer_Shift_Status_Machine=20798
,P_Final_Roll_X_Timer_Shift_Status_Machine=20799
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array0=20800
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array1=20801
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array2=20802
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array3=20803
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array4=20804
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array5=20805
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array6=20806
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array7=20807
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array8=20808
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array9=20809
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array10=20810
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array0=20811
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array1=20812
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array2=20813
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array3=20814
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array4=20815
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array5=20816
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array6=20817
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array7=20818
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array8=20819
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array9=20820
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array10=20821
,P_MCC_Anode_Align_NG_Count=20876
,P_MCC_Cathode_Align_NG_Count=20877
,P_MCC_Anode_Retry_NG_Count=20878
,P_MCC_Cathode_Retry_NG_Count=20879
,P_Discharge_Hold_Timer=20892
,P_Discharge_Hold_Time=20893
,P_AN_1st_Z_Zero_Angle=20894
,P_AN_1st_Z_Zero_Length=20895
,P_Anode_1st_PNP_Z_Crank_Zero_Pos=20896
,P_Anode_1st_PNP_Z_Crank_real_Move_Pos=20897
,P_Anode_1st_PNP_Z_Crank_radian=20898
,P_Anode_1st_PNP_Z_Acos_denominator=20899
,P_Anode_1st_PNP_Z_Acos_numerator=20900
,P_Anode_1st_PNP_Z_Crank_Angle=20901
,P_Anode_1st_PNP_Z_Real_Move_Pos=20902
,P_Anode_1st_Fwd_Bwd_Rise=20903
,P_CA_1st_Z_Zero_Angle=20904
,P_CA_1st_Z_Zero_Length=20905
,P_Cathode_1st_PNP_Z_Crank_Zero_Pos=20906
,P_Cathode_1st_PNP_Z_Crank_real_Move_Pos=20907
,P_Cathode_1st_PNP_Z_Crank_radian=20908
,P_Cathode_1st_PNP_Z_Acos_denominator=20909
,P_Cathode_1st_PNP_Z_Acos_numerator=20910
,P_Cathode_1st_PNP_Z_Crank_Angle=20911
,P_Cathode_1st_PNP_Z_Real_Move_Pos=20912
,P_Cathode_1st_Fwd_Bwd_Rise=20913
,P_AN_2nd_Z_Zero_Angle=20914
,P_AN_2nd_Z_Zero_Length=20915
,P_Anode_2nd_PNP_Z_Crank_Zero_Pos=20916
,P_Anode_2nd_PNP_Z_Crank_real_Move_Pos=20917
,P_Anode_2nd_PNP_Z_Crank_radian=20918
,P_Anode_2nd_PNP_Z_Acos_denominator=20919
,P_Anode_2nd_PNP_Z_Acos_numerator=20920
,P_Anode_2nd_PNP_Z_Crank_Angle=20921
,P_Anode_2nd_PNP_Z_Real_Move_Pos=20922
,P_Anode_2nd_Fwd_Bwd_Rise=20923
,P_CA_2nd_Z_Zero_Angle=20924
,P_CA_2nd_Z_Zero_Length=20925
,P_Cathode_2nd_PNP_Z_Crank_Zero_Pos=20926
,P_Cathode_2nd_PNP_Z_Crank_real_Move_Pos=20927
,P_Cathode_2nd_PNP_Z_Crank_radian=20928
,P_Cathode_2nd_PNP_Z_Acos_denominator=20929
,P_Cathode_2nd_PNP_Z_Acos_numerator=20930
,P_Cathode_2nd_PNP_Z_Crank_Angle=20931
,P_Cathode_2nd_PNP_Z_Real_Move_Pos=20932
,P_Cathode_2nd_Fwd_Bwd_Rise=20933
,P_Old_Recipe_Anode_1st_PNP_Z_Ready_Up=20934
,P_Old_Recipe_Anode_1st_PNP_Z_Belt_Up=20935
,P_Old_Recipe_Anode_1st_PNP_Z_Belt_Down=20936
,P_Old_Recipe_Anode_1st_PNP_Z_Align_Up=20937
,P_Old_Recipe_Anode_1st_PNP_Z_Align_Down=20938
,P_Old_Recipe_Cathode_1st_PNP_Z_Ready_Up=20939
,P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Up=20940
,P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Down=20941
,P_Old_Recipe_Cathode_1st_PNP_Z_Align_Up=20942
,P_Old_Recipe_Cathode_1st_PNP_Z_Align_Down=20943
,P_Old_Recipe_Anode_2nd_PNP_Z_Align_Up=20944
,P_Old_Recipe_Anode_2nd_PNP_Z_Align_Down=20945
,P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Up=20946
,P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Down=20947
,P_Old_Recipe_Anode_2nd_PNP_Z_Ready_Up=20948
,P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Up=20949
,P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Down=20950
,P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Up=20951
,P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Down=20952
,P_Old_Recipe_Cathode_2nd_PNP_Z_Ready_Up=20953
,P_PLC19_All_Home_Status=20954
,P_PLC19_All_Home_Module_Status=20955
,P_PLC19_All_Home_State_Machine=20956
,P_PLC19_All_Home_Seq_Index=20957
,P_PLC19_All_Home_Self_Index=20958
,P_PLC19_All_Home_Set_Mode_Return=20959
,P_PLC19_All_Home_Timer=20960
,P_PLC19_All_Home_Tact_Time=20981
,P_All_Home_Module_Error=20982
,P_Act_ALL_Home_Time_Out_Time=20983
,P_Act_Hold_Time_Out_Time=21199
,P_First_PNP_T_Wait_Status=21235
,P_First_PNP_Z_Wait_Status=21236
,P_First_PNP_Picker_T_Turn_Status=21237
,P_First_PNP_T_Wait_To_Belt_Status=21238
,P_First_PNP_Z_Wait_To_Belt_Status=21239
,P_First_PNP_T_Align_To_Belt_Status=21240
,P_First_PNP_Z_Align_To_Belt_Status=21241
,P_First_PNP_Z_Belt_Down_Status=21242
,P_First_PNP_Z_Belt_Up_Status=21243
,P_First_PNP_T_Wait_To_Align_Status=21244
,P_First_PNP_Z_Wait_To_Align_Status=21245
,P_First_PNP_T_Belt_To_Align_Status=21246
,P_First_PNP_Z_Belt_To_Align_Status=21247
,P_First_PNP_Z_Align_Down_Status=21248
,P_First_PNP_Z_Align_Up_Status=21249
,P_First_PNP_Vac_On_Status=21250
,P_First_PNP_Blow_On_Status=21251
,P_Second_PNP_T_Align_To_Stack_Status=21252
,P_Second_PNP_Z_Align_To_Stack_Status=21253
,P_Second_PNP_T_Stack_To_Align_Status=21254
,P_Second_PNP_Z_Stack_To_Align_Status=21255
,P_Second_PNP_Z_Align_Down_Status=21256
,P_Second_PNP_Z_Align_Up_Status=21257
,P_Second_PNP_Vac_On_Status=21258
,P_Second_PNP_Blow_On_Status=21259
,P_NG_PNP_NG_Bos_Status=21260
,P_NG_PNP_Align_Status=21261
,P_NG_PNP_Align_Down_Status=21262
,P_NG_PNP_Align_Up_Status=21263
,P_NG_PNP_Vac_On_Status=21264
,P_NG_PNP_Blow_On_Status=21265
,P_Hold_1st_PNP_Position=21266
,P_Hold_Module_Error=21267
,P_Act_Execute_Time_Out_Time=21328
,P_Execute_Module_Error=21341
,P_Execute_First_Sepa_Total_Tact_Time=21342
,P_Current_JR_Thickness_mm=21343
,P_Current_Jelly_Roll_Thinckness_mm_Send_Enable_Flag=21344
,P_Stack_Table_NG_Flag=21345
,P_Suspend_Discharge_Cell_Out_Restart=21346
,P_Jelly_Roll_OK_Count=21347
,P_Jelly_Roll_NG_Count=21348
,P_Jelly_Roll_Total_Count=21349
,P_Jelly_Roll_Prod_Count=21350
,P_Jelly_Roll_Recipe_Count=21351
,P_Current_Cell_Memory_Jelly_Roll=21352
,P_VISION_PLC10_Anode_Align_Start=21353
,P_VISION_PLC10_Cathode_Align_Start=21354
,P_Stack_Table_NG_Count=21355
,P_Stack_PMAC_NG_Code=21356
,P_Stack_Vision_NG_Code_IN_Timer=21357
,P_1st_Discharge_State=21358
,P_Prev_Sepa_Stack_Completed_Flag=21359
,P_First_Sepa_Vision_Skip_Flag=21360
,P_Discharge_Unloader_Handover_Timer=21361
,P_Discharge_Unloader_Handover_Time=21362
,P_Execute_First_Sepa_Mode_Cmd=21423
,P_Execute_First_Sepa_Mode_Status=21424
,P_Execute_First_Sepa_Mode_Module_Status=21425
,P_Execute_First_Sepa_Mode_State_Machine=21426
,P_Execute_First_Sepa_Mode_Seq_Index=21427
,P_Execute_First_Sepa_Mode_Self_Index=21428
,P_Execute_First_Sepa_Mode_Debug_Edge=21429
,P_Execute_First_Sepa_Mode_Timer=21460
,P_Execute_First_Sepa_Mode_Tact_Time=21481
,P_Execute_1st_Sepa_Status=21482
,P_Suspend_Discharge_Cmd=21483
,P_Suspend_Discharge_Status=21484
,P_Suspend_Discharge_State_Machine=21485
,P_Suspend_Discharge_Seq_Index=21486
,P_Suspend_Discharge_Self_Index=21487
,P_Suspend_Discharge_Timer=21578
,P_Suspend_Discharge_Tact_Time=21599
,P_Suspend_Discharge_1st_Unloader_JR_Grip=21600
,P_Suspend_ARC_Cmd=21601
,P_Suspend_ARC_Status=21602
,P_Suspend_ARC_State_Machine=21603
,P_Suspend_ARC_Seq_Index=21604
,P_Suspend_ARC_Self_Index=21605
,P_Suspend_ARC_Manual_Occur_Flag=21606
,P_Suspend_ARC_Timer=21697
,P_Suspend_ARC_Tact_Time=21718
,P_Suspend_Anode_1TR_Cell_Supply_Cmd=21719
,P_Suspend_Anode_1TR_Cell_Supply_Status=21720
,P_Suspend_Anode_1TR_Cell_Supply_State_Machine=21721
,P_Suspend_Anode_1TR_Cell_Supply_Seq_Index=21722
,P_Suspend_Anode_1TR_Cell_Supply_Self_Index=21723
,P_Suspend_Anode_1TR_Cell_Supply_Module_Status=21724
,P_Suspend_Anode_1TR_Cell_Supply_Timer=21815
,P_Suspend_Anode_1TR_Cell_Supply_Tact_Time=21836
,P_Hold_Exist_Insp_Cmd=21837
,P_Hold_Exist_Insp_Status=21838
,P_Hold_Exist_Insp_Module_Status=21839
,P_Hold_Exist_Insp_State_Machine=21840
,P_Hold_Exist_Insp_Seq_Index=21841
,P_Hold_Exist_Insp_Self_Index=21842
,P_Hold_Exist_Insp_Debug_Edge=21843
,P_Hold_Exist_Insp_Timer=21874
,P_Hold_Exist_Insp_Tact_Time=21895
,P_Hold_Remove_NG_PNP_Cmd=21896
,P_Hold_Remove_NG_PNP_Status=21897
,P_Hold_Remove_NG_PNP_Module_Status=21898
,P_Hold_Remove_NG_PNP_State_Machine=21899
,P_Hold_Remove_NG_PNP_Seq_Index=21900
,P_Hold_Remove_NG_PNP_Self_Index=21901
,P_Hold_Remove_NG_PNP_Debug_Edge=21902
,P_Hold_Remove_NG_PNP_Timer=21933
,P_Hold_Remove_NG_PNP_Tact_Time=21954
,P_PLC01_Hold_Remove_NG_PNP_Sub_Flag=21955
,P_PLC01_Hold_Remove_NG_PNP_Sub_State_Machine=21956
,P_PLC01_Hold_Remove_NG_PNP_Sub_Status=21957
,P_Hold_Remove_Align_Cmd=21958
,P_Hold_Remove_Align_Status=21959
,P_Hold_Remove_Align_Module_Status=21960
,P_Hold_Remove_Align_State_Machine=21961
,P_Hold_Remove_Align_Seq_Index=21962
,P_Hold_Remove_Align_Self_Index=21963
,P_Hold_Remove_Align_Debug_Edge=21964
,P_Hold_Remove_Align_Timer=21995
,P_Hold_Remove_Align_Tact_Time=22016
,P_PLC01_Hold_Remove_Align_Sub_Flag=22017
,P_PLC01_Hold_Remove_Align_Sub_State_Machine=22018
,P_PLC01_Hold_Remove_Align_Sub_Status=22019
,P_Hold_Remove_2TR_Cmd=22020
,P_Hold_Remove_2TR_Status=22021
,P_Hold_Remove_2TR_Module_Status=22022
,P_Hold_Remove_2TR_State_Machine=22023
,P_Hold_Remove_2TR_Seq_Index=22024
,P_Hold_Remove_2TR_Self_Index=22025
,P_Hold_Remove_2TR_Debug_Edge=22026
,P_Hold_Remove_2TR_Timer=22057
,P_Hold_Remove_2TR_Tact_Time=22078
,P_Hold_Supply_1TR_Cmd=22079
,P_Hold_Supply_1TR_Status=22080
,P_Hold_Supply_1TR_Module_Status=22081
,P_Hold_Supply_1TR_State_Machine=22082
,P_Hold_Supply_1TR_Seq_Index=22083
,P_Hold_Supply_1TR_Self_Index=22084
,P_Hold_Supply_1TR_Debug_Edge=22085
,P_Hold_Supply_1TR_Timer=22116
,P_Hold_Supply_1TR_Tact_Time=22137
,P_PLC01_Hold_Supply_1TR_Memory_RTN=22138
,P_PLC01_Hold_Supply_1TR_Judge_Flag=22139
,P_PLC01_Hold_Supply_1TR_Judge_State_Machine=22140
,P_PLC01_Hold_Supply_1TR_Judge_Status=22141
,P_Plate_1TR_Supply_Module_Judge_Bit=22142
,P_Hold_Supply_Align_Cmd=22143
,P_Hold_Supply_Align_Status=22144
,P_Hold_Supply_Align_Module_Status=22145
,P_Hold_Supply_Align_State_Machine=22146
,P_Hold_Supply_Align_Seq_Index=22147
,P_Hold_Supply_Align_Self_Index=22148
,P_Hold_Supply_Align_Debug_Edge=22149
,P_Hold_Supply_Align_Timer=22180
,P_Hold_Supply_Align_Tact_Time=22201
,P_Hold_Supply_2TR_Cmd=22202
,P_Hold_Supply_2TR_Status=22203
,P_Hold_Supply_2TR_Module_Status=22204
,P_Hold_Supply_2TR_State_Machine=22205
,P_Hold_Supply_2TR_Seq_Index=22206
,P_Hold_Supply_2TR_Self_Index=22207
,P_Hold_Supply_2TR_Debug_Edge=22208
,P_Hold_Supply_2TR_Timer=22239
,P_Hold_Supply_2TR_Tact_Time=22260
,P_Hold_Semi_Run_Pos_Move_Cmd=22261
,P_Hold_Semi_Run_Pos_Move_Status=22262
,P_Hold_Semi_Run_Pos_Move_Module_Status=22263
,P_Hold_Semi_Run_Pos_Move_State_Machine=22264
,P_Hold_Semi_Run_Pos_Move_Seq_Index=22265
,P_Hold_Semi_Run_Pos_Move_Self_Index=22266
,P_Hold_Semi_Run_Pos_Move_Debug_Edge=22267
,P_Hold_Semi_Run_Pos_Move_Timer=22298
,P_Hold_Semi_Run_Pos_Move_Tact_Time=22319
,P_Act_Suspend_Time_Out_Time=22518
,P_Test_Sungmin_Flag=22585
,P_Suspend_Discharge_Module_Status=23444
,P_Suspend_Discharge_To_Execute_Flag=23445
,P_Suspend_Discharge_Complete_Flag=23446
,P_First_Unloader_Stack_Up_Status=23447
,P_First_Unloader_Stack_FWD_Status=23448
,P_First_Unloader_Grip_Cell_Status=23449
,P_First_Unloader_Stack_BWD_Wait_Status=23450
,P_First_Unloader_Stack_BWD_Status=23451
,P_First_Unloader_Stack_Down_Status=23452
,P_First_Unloader_Avoid_Status=23453
,P_First_Unloader_Turn_Status=23454
,P_First_Unloader_Handover_Status=23455
,P_Cathode_Clamp_OFF_Status=23456
,P_Final_Roll_Discharge_Status=23457
,P_Final_Roll_Stack_Pos_Status=23458
,P_Final_Roll_Stack_Up_Pos_Status=23459
,P_Main_Z_Init_Pos_Status=23460
,P_Sheet_Paper_BWD_Status=23461
,P_Discharge_Vision_DIO_RTN=23462
,P_Discharge_Sub_RTN=23463
,P_Discharge_NG_Code_Report_RTN=23464
,P_Individual_RTN=23465
,P_Suspend_Discharge_Last_Run_Bit=23466
,P_Suspend_Discharge_JR_Result_RTN=23467
,P_ARC_Buffer_Jog_Speed=23468
,P_Selected_Spool_Number=23469
,P_ARC_Home_Check_RTN=23470
,P_Suspend_ARC_Module_Status=23471
,P_Not_Selected_Spool_Radius=23472
,P_Not_Selected_Spool_Circumference=23473
,P_Passive_D_One_Degree_AD_Value=23499
,P_After_ARC_Rotate_Distance=23500
,P_Stack_Vision_NG_Code_Time_Over=23501
,P_Suspend_Discharge_Resume_Flag=23502
,P_Suspend_Discharge_Resume_Complete=23503
,P_Suspend_Discharge_Pause_Flag=23504
,P_Flag_Stack_Work_Host_ID=23515
,P_First_Sepa_Stack_Align_OK_PMAC_Flag=23516
,P_Sepa_Run_Completed_Status_Machine=23517
,P_Discharge_Debug_Edge=23518
,P_Discharge_Sepa_Cutter_Time_Out_State_Machine=23529
,P_Old_Suspend_Discharge_Seq_Index=23530
,P_Discharge_Debug_Index_1=23531
,P_Discharge_Debug_Index_2=23532
,P_Discharge_Debug_Index_3=23533
,P_Discharge_Debug_Index_4=23534
,P_ARC_Debug_Edge=23535
,P_Old_Suspend_ARC_Seq_Index=23546
,P_ARC_Debug_Index_1=23547
,P_ARC_Debug_Index_2=23548
,P_ARC_Debug_Index_3=23549
,P_ARC_Debug_Index_4=23550
,P_Suspend_Cutter_Heating_Time=23553
,P_Suspend_Cutter_Heating_Timer=23554
,P_An_1TR_Supply_Debug_Edge=23555
,P_Old_Suspend_An_1TR_Supply_Seq_Index=23566
,P_An_1TR_Supply_Debug_Index_1=23567
,P_An_1TR_Supply_Debug_Index_2=23568
,P_An_1TR_Supply_Debug_Index_3=23569
,P_An_1TR_Supply_Debug_Index_4=23570
,P_Suspend_Supply_Index=23571
,P_Suspend_Supply_Index_2nd=23572
,P_Suspend_Supply_Pause_Flag=23581
,P_Suspend_Supply_Resume_Flag=23582
,P_Supply_Module_Status=23583
,P_Suspend_Anode_1TR_Supply_Complete_Flag=23584
,P_Suspend_Discharge_Module_Error=23585
,P_Suspend_ARC_Module_Error=23586
,P_Suspend_1st_Supply_Error=23587
,P_Discharge_Seq_Data=23588
,P_Suspend_Discharging_Popup_Flag=23589
,P_Suspend_Discharge_FR_Unclamp_Error_Popup_Flag=23590
,P_Suspend_Discharge_Cathode_Align_Retry_Cal_Error_Popup_Flag=23591
,P_Suspend_Discharge_Anode_Align_Retry_Cal_Error_Popup_Flag=23592
,P_Suspend_Discharge_FR_Discharge_Pos_Error_Popup_Flag=23593
,P_Suspend_Discharge_1st_Unloader_Grip_OFF_Error_Popup_Flag=23594
,P_Suspend_Discharge_1st_Unloader_Up_Error_Popup_Flag=23595
,P_Suspend_Discharge_1st_Unloader_FWD_Error_Popup_Flag=23596
,P_Suspend_Discharge_FR_Clamp_Error_Popup_Flag=23597
,P_Suspend_Discharge_Sepa_Cutter_Heating_Error_Popup_Flag=23598
,P_Suspend_Discharge_1st_Unloader_Grip_Cell_Pos_Error_Popup_Flag=23599
,P_Suspend_Discharge_1st_Unloader_Grip_ON_Error_Popup_Flag=23600
,P_Suspend_Discharge_Sheet_Paper_BWD_Error_Popup_Flag=23601
,P_Suspend_Discharge_Cathode_Clamp_OFF_Error_Popup_Flag=23602
,P_Suspend_Discharge_Sepa_Cutter_FWD_Error_Popup_Flag=23603
,P_Suspend_Discharge_Sheet_Paper_Vacuum_ON_Error_Popup_Flag=23604
,P_Suspend_Discharge_Sepa_Cutter_BWD_Error_Popup_Flag=23605
,P_Suspend_Discharge_1st_Unloader_BWD_Wait_Pos_Error_Popup_Flag=23606
,P_Suspend_Discharge_1st_Unloader_BWD_Error_Popup_Flag=23607
,P_Suspend_Discharge_1st_Unloader_Stack_Down_Error_Popup_Flag=23608
,P_Suspend_Discharge_FR_Stack_Pos_Error_Popup_Flag=23609
,P_Suspend_Discharge_After_Action_Init_Error_Popup_Flag=23610
,P_Suspend_Discharge_1st_Unloader_Avoid_Pos_Error_Popup_Flag=23611
,P_Suspend_Discharge_1st_2nd_Unloader_Handover_Chk_Error_Popup_Flag=23612
,P_Suspend_Discharge_1st_Unloader_Handover_Pos_Error_Popup_Flag=23613
,P_Suspend_Discharge_2nd_3rd_Unloader_Grip_Request_Error_Popup_Flag=23614
,P_Suspend_Discharge_1st_Unloader_Wait_Pos_Error_Popup_Flag=23615
,P_Suspend_Discharge_1st_Unloader_Unuse_Btn_Check_Popup_Flag=23616
,P_Suspend_ARC_Manual_ARC_Active_Popup_Flag=23617
,P_Suspend_ARC_Auto_ARC_Active_Popup_Flag=23618
,P_Suspend_ARC_Pre_Act_Popup_Flag=23619
,P_Suspend_ARC_Dancer_Close_Popup_Flag=23620
,P_Suspend_ARC_Use_Plate_FWD_Popup_Flag=23621
,P_Suspend_ARC_Replace_Plate_Blow_ON_Popup_Flag=23622
,P_Suspend_ARC_Use_Plate_Clamp_Popup_Flag=23623
,P_Suspend_ARC_Use_Plate_Cutter_FWD_Popup_Flag=23624
,P_Suspend_ARC_Use_Plate_Cutter_BWD_Popup_Flag=23625
,P_Suspend_ARC_Use_Plate_Unclamp_Popup_Flag=23626
,P_Suspend_ARC_Use_Plate_BWD_Popup_Flag=23627
,P_Suspend_ARC_Replace_Plate_Blow_OFF_Popup_Flag=23628
,P_Suspend_ARC_Dancer_Open_Popup_Flag=23629
,P_Suspend_ARC_Spool_Change_Popup_Flag=23630
,P_Suspend_ARC_Post_Act_Popup_Flag=23631
,P_Suspend_ARC_Previous_Spool_Remain_Winding_Popup_Flag=23632
,P_Suspend_Discharge_First_Address=23633
,P_Suspend_ARC_First_Address=23634
,P_Status_Stop_Ready_Pos_Move=23635
,P_Cycle_Stop_Stauts=23636
,P_Cycle_Stop_Status_Machine=23637
,P_Cycle_Stop_Flag=23638
,P_Speed_Origin_rtn=23639
,P_Speed_rtn=23640
,P_NG_PNP_Z_Move_rtn=23641
,P_NG_PNP_Z_Move_Check_rtn=23642
,P_NG_PNP_T_Move_rtn=23643
,P_NG_PNP_T_Move_Check_rtn=23644
,P_2nd_Z_Move_rtn=23645
,P_2nd_Z_Move_Check_rtn=23646
,P_2nd_T_Move_rtn=23647
,P_2nd_T_Move_Check_rtn=23648
,P_Stack_Judgement_Memory=23649
,P_Stop_Cycle_Stop_Move_Status=23650
,P_STOP_Initial_Process_Status=23651
,P_Stopping_CycleStop_Init_Flag=23652
,P_Sepa_Timing=23653
,P_Old_Trigger_PLC0=23654
,P_Mode_Command=23655
,P_Current_Mode=23656
,P_Mode_Command_Buffer=23677
,P_Mode_Command_Wait_Count=23678
,P_Old_Mode_Command=23679
,P_Anode_NG_Unit_Status=26680
,P_Cathode_NG_Unit_Status=26681
,P_ParsingRtn=26682
,P_CurPosData=26683
,P_Hold_MNTR_Supply_1st=26684
,P_TimeOutNumb=26685
,P_PosRtn=26686
,P_MotionRtn=26687
,P_CmdData=26688
,P_Interval=26689
,P_Cont_Ret=26690
,P_Cur_Idx=26691
,P_NextID=26692
,P_Cur_Size=26693
,P_Hold_Exist_Insp=26694
,P_Hold_Remove_NG_PNP=26695
,P_Hold_Remove_Align=26696
,P_Hold_Remove_2TR=26697
,P_Hold_Supply_1TR=26698
,P_Hold_Supply_Align=26699
,P_Hold_Supply_2TR=26700
,P_Hold_Semi_Run=26701
,P_Hold_NG_PNP_Remove=180
,P_Hold_Remove_2nd=182
,P_Hold_Supply_1st=183
,P_Hold_Supply_2nd=185
,P_Hold_Data_process=186
,P_Hold_Semi_Run_Enable_Pos=187
,P_Hold_Existence_Insp=188
,P_Hold_1st_Belt_Move=189
,P_Hold_Motion=190
,P_Hold_Data_process_State_Machine=26702
,P_Hold_Align_Remove_State_Machine=26703
,P_Hold_2nd_Remove_State_Machine=26704
,P_Hold_Supply_1st_State_Machine=26705
,P_Hold_Supply_2nd_State_Machine=26706
,P_Hold_Existence_Insp_State_Machine=26707
,P_Hold_NG_PNP_Remove_State_Machine=26708
,P_Hold_Data_Process_Complete=26709
,P_Hold_Semi_Run_Enable_Pos_State_Machine=26710
,P_HOLD_Existence_Insp_Queue_State_Machine=26711
,P_Hold_Stop_Existence_Insp_STEP=26712
,P_SubMaster_Status_Err=26713
,P_Data_Process_Rtn=26714
,P_Hold_Set_Trigger=26715
,P_Hold_Get_Trigger=26716
,P_Anode_2nd_Data=26717
,P_Anode_Align_Data=26718
,P_Hold_Remove_Step=26719
,P_HList_Head_Idx=26720
,P_Hold_Next_ID=26721
,P_Hold_Data_Value=26742
,P_Comb_Bitwise=26743
,P_Target_Cmd=26744
,P_Temp_Bit=26745
,P_Get_ErrorCode=26746
,P_Rtn_Code=26747
,P_Complete_Hold_Bit=26748
,P_HoldMtion_Flag=26749
,P_Ret_BitWise=26750
,P_NotEnough_GetSpace=26751
,P_NotEnough_SetSpace=26752
,P_Check_SetSpace=26753
,P_Hold_Get_Data=26754
,P_Err_NextID_Flag=26755
,P_Elec_Bit=26756
,P_MotionData=26757
,P_Cur_PosX1=26773
,P_Cur_PosZ1=26774
,P_Cur_PosX2=26775
,P_Cur_PosZ2=26776
,P_Dest_PosX=26777
,P_Dest_PosZ=26778
,P_FailToParse=26779
,P_CurTrigger=26780
,P_TimeOutTrigger=26781
,P_CalcTime=26782
,P_Cycle_Count=26783
,P_MotionTimeOutFlag=26784
,P_Set_Data=26785
,P_Rtn=26786
,P_CurPosTestBit=26787
,P_Hold_Anode_Pause_CHK=26788
,P_Hold_Cathode_Pause_CHK=26789
,P_Surface_Complete_To_Hold=26790
,P_Hold_Pause_Trg=26811
,P_From_Staring_Flag=26812
,P_Hold_Existence_Insp_Enqueue_Flag=26813
,P_Hold_Rtn=26814
,P_Debug_Existence_Insp_STEP=26815
,P_Hold_Align_Sheet_CHK=26816
,P_Hold_Cathode_Exception_Empty_Flag=26817
,P_Hold_Anode_Exception_Empty_Flag=26818
,P_HOLD_Hold_Process_State_Machine=26819
,P_Hold_Stop_Sheet_Process_STEP=26820
,P_Hold_Debug_Sheet_Process_STEP=26821
,P_Hold_Stop_Point=26822
,P_Hold_CHK=26823
,P_Hold_Test=26824
,P_Anode_1st_Motion_Complete=26825
,P_Anode_2nd_Motion_Complete=26826
,P_Anode_NG_PNP_Motion_Complete=26827
,P_Cathode_1st_Motion_Complete=26828
,P_Cathode_2nd_Motion_Complete=26829
,P_Cathode_NG_PNP_Motion_Complete=26830
,P_Anode_1st_Picker_Motion_Complete=26831
,P_Cathode_1st_Picker_Motion_Complete=26832
,P_individual_return=26833
,P_individual_return2=26834
,P_HoldCurPosBit1=26835
,P_HoldCurPosBit2=26836
,P_Parsing_Status=26837
,P_Sel_Obj=26838
,P_Sel_Elec=26839
,P_Error=26840
,P_Vision_FirstSepa_Complete=26841
,P_NG_PNP_Turn_TM=26842
,P_NG_PNP_Turn_TS=26843
,P_NG_PNP_Turn_TA=26844
,P_NG_PNP_Up_TM=26845
,P_NG_PNP_Up_TS=26846
,P_NG_PNP_Up_TA=26847
,P_NG_PNP_Down_TM=26848
,P_NG_PNP_Down_TS=26849
,P_NG_PNP_Down_TA=26850
,P_NG_PNP_Vac_Time=26851
,P_NG_PNP_Blow_Time=26852
,P_Slow_NG_Mode_Btn=26853
,P_HOLD_Memory_Tower_Offset=26854
,P_Hold_Pause_Use=26855
,P_Hold_Motion_Err_Chk=26876
,P_Hold_Motion_TimeOut=26892
,P_Hold_Data_OK=26893
,P_VISION_TRG_PLC4_AnodeSurface_Ins_Shoot=26894
,P_VISION_TRG_PLC4_CathodeSurface_Ins_Shoot=26895
,P_Memory_Tower_Test=26896
,P_Temp_Run_Mode=26897
,P_Data_Idx=26898
,P_Get_Data_Idx=26899
,P_HOLD_Data_Err_Queue=26900
,P_HOLD_Data_Err_State_Machine=26901
,P_HOLD_Err_Set_Data=26902
,P_HOLD_Err_Save=26903
,P_Sepa_Run_Completed_Flag=26904
,P_Log_Data_Y=27838
,P_Log_Data_M=27839
,P_Log_Data_D=27840
,P_Log_Data_H=27841
,P_Log_Data_m=27842
,P_Log_Data_s=27843
,P_MNTR_End_Index=27844
,P_BG_CPLC_Running_MNTR=50
,P_RTI_CPLC_Running_MNTR=51
,P_Log_Start_Flag=170
,P_Log_Document_Remove_Flag=171
,P_Sepa_ID_Change_Flag=172
,P_USB_Register=173
,P_Cur_Line_Check=175
,P_Cur_Line_Check_Init=176
,P_Hold_Pass=27855
,P_PLC01_Total_Step_Flag=27871
,P_PLC02_Total_Step_Flag=27872
,P_PLC014_Total_Step_Flag=27873
,P_PLC02_Total_Step_Flag2=27874
,P_Vac_Pass=27875
,P_Vision_Pass_Exisitence=27876
,P_Vision_Pass_Empty=27877
,P_Vision_Pass_FirstSepa=27878
,P_Vision_Pass_Stack_Inspection=27879
,P_ULD_Home_Pass=27880
,P_Clamp_Cell_Down_Use=27881
,P_FR_Clamp_Use_Test=27882
,P_Door_Interlock_Use_Flag=27883
,P_Vacuum_Door_Clear_Use=27884
,P_Align_Test_Pos=27885
,P_PLC02_Exe_Module_First_Sepa_Step_Flag=27981
,P_PLC02_Sus_Module_Discharge_Step_Flag=27982
,P_PLC02_Sus_Module_ARC_Step_Flag=27983
,P_PLC02_Sus_Module_1TR_Supply_Step_Flag=27984
,P_PLC02_HOLD_Module_Insp_Step_Flag=27985
,P_PLC02_HOLD_Module_Remove_NGPNP_Step_Flag=27986
,P_PLC02_HOLD_Module_Remove_Align_Step_Flag=27987
,P_PLC02_HOLD_Module_Remove_2TR_Step_Flag=27988
,P_PLC02_HOLD_Module_Supply_1TR_Step_Flag=27989
,P_PLC02_HOLD_Module_Supply_Align_Step_Flag=27990
,P_PLC02_HOLD_Module_Supply_2TR_Step_Flag=27991
,P_PLC02_HOLD_Module_SemiRun_Pos_Step_Flag=27992
,P_PLC14_STOP_Module_Cycle_Stop_Step_Flag=27993
,P_PLC02_Discharge_MNTR=27994
,P_NEW_Alarm_USE_Flag=27995
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
,P_Error_Index_Number=27996
,P_ECAT_MNTR_Bit=27997
,P_Local_MNTR_Bit=27998
,P_Clamp_Motion_VER1=27999
,P_CA_DR_Ta=28000
,P_CA_DR_Ts=28001
,P_CA_DR_Tm=28002
,P_CA_DR_Td=28003
,P_CA_DR_Tsd=28004
,P_AN_DR_Ta=28005
,P_AN_DR_Ts=28006
,P_AN_DR_Tm=28007
,P_AN_DR_Td=28008
,P_AN_DR_Tsd=28009
,P_First_Sepa_1st_Driving_Move=28010
,P_AN_Cam_Total_Time=28011
,P_CA_Cam_Total_Time=28012
,P_Dry_Run_BTN=28013
,P_Home_Angle_Offset_change_Bit=28014
,P_InterLock_Motor_Num=28015
,P_Recipe_Move_IL_Loop=28016
,P_Z_Var=28017};
enum globalParray {_globalParray_=-1
,P_Ca_1st_PNP_ABSPhasing_Pos=8196
,P_An_1st_PNP_ABSPhasing_Pos=8236
,P_Ca_2nd_PNP_ABSPhasing_Pos=8276
,P_An_2nd_PNP_ABSPhasing_Pos=8316
,P_Home_Status=8362
,P_Homing_Step_Monitor=8423
,P_CMD_Cell_Align=8474
,P_CMD_Cell_Stop=8484
,P_CMD_Cell_Reset=8494
,P_Jog_Work_Speed=8513
,P_Recipe_Homing_Speed=8546
,P_MNTR_PLC0_Task_Time=8763
,P_MNTR_PLC1_Task_Time=8766
,P_MNTR_PLC2_Task_Time=8769
,P_MNTR_PLC3_Task_Time=8772
,P_MNTR_PLC4_Task_Time=8775
,P_MNTR_PLC5_Task_Time=8778
,P_MNTR_PLC6_Task_Time=8781
,P_MNTR_PLC7_Task_Time=8784
,P_MNTR_PLC8_Task_Time=8787
,P_MNTR_PLC9_Task_Time=8790
,P_MNTR_PLC10_Task_Time=8793
,P_MNTR_PLC11_Task_Time=8796
,P_MNTR_PLC12_Task_Time=8799
,P_MNTR_PLC13_Task_Time=8802
,P_MNTR_PLC14_Task_Time=8805
,P_MNTR_PLC15_Task_Time=8808
,P_MNTR_PLC16_Task_Time=8811
,P_MNTR_PLC17_Task_Time=8814
,P_MNTR_PLC18_Task_Time=8817
,P_MNTR_PLC19_Task_Time=8820
,P_MNTR_PLC20_Task_Time=8823
,P_MNTR_PLC21_Task_Time=8826
,P_MNTR_PLC22_Task_Time=8829
,P_MNTR_PLC23_Task_Time=8832
,P_MNTR_PLC24_Task_Time=8835
,P_MNTR_PLC25_Task_Time=8838
,P_MNTR_PLC26_Task_Time=8841
,P_MNTR_PLC27_Task_Time=8844
,P_MNTR_PLC28_Task_Time=8847
,P_MNTR_PLC29_Task_Time=8850
,P_MNTR_PLC30_Task_Time=8853
,P_Vision_Result=8858
,P_Vision_Result_Get_First_Cycle=8862
,P_Init_Result=8866
,P_FR_AI_Value=8893
,P_Dequeue_Log=8928
,P_Motor_Current_Pos=8961
,P_Axis_Scale_Value=9011
,P_Except_Return_Array=9061
,P_Hold_Memory=9161
,P_Suspend_Memory=9166
,P_Execute_Memory=9171
,P_Stop_Memory=9176
,P_CircularQueue_Command_array=9197
,P_Recipe_1st_MotorNo=9253
,P_Recipe_2nd_MotorNo=9303
,P_Recipe_3rd_MotorNo=9353
,P_Recipe_4th_MotorNo=9403
,P_Recipe_5th_MotorNo=9453
,P_Recipe_6th_MotorNo=9503
,P_Recipe_M01_POS=9581
,P_Recipe_M02_POS=9592
,P_Recipe_M03_POS=9603
,P_Recipe_M04_POS=9614
,P_Recipe_M05_POS=9625
,P_Recipe_M06_POS=9636
,P_Recipe_M07_POS=9647
,P_Recipe_M08_POS=9658
,P_Recipe_M09_POS=9669
,P_Recipe_M10_POS=9680
,P_Recipe_M11_POS=9691
,P_Recipe_M12_POS=9702
,P_Recipe_M13_POS=9713
,P_Recipe_M14_POS=9724
,P_Recipe_M15_POS=9735
,P_Recipe_M16_POS=9746
,P_Recipe_M17_POS=9757
,P_Recipe_M18_POS=9768
,P_Recipe_M19_POS=9779
,P_Recipe_M20_POS=9790
,P_Recipe_M21_POS=9801
,P_Recipe_M22_POS=9812
,P_Recipe_M23_POS=9823
,P_Recipe_M24_POS=9834
,P_Recipe_M25_POS=9845
,P_Recipe_M26_POS=9856
,P_Recipe_M27_POS=9867
,P_Recipe_M28_POS=9878
,P_Recipe_M29_POS=9889
,P_Recipe_M30_POS=9900
,P_Recipe_M31_POS=9911
,P_Recipe_M32_POS=9922
,P_Recipe_M33_POS=9933
,P_Recipe_M34_POS=9944
,P_Recipe_M35_POS=9955
,P_Recipe_M36_POS=9966
,P_Recipe_M37_POS=9977
,P_Recipe_M38_POS=9988
,P_Recipe_M39_POS=9999
,P_Recipe_M40_POS=10010
,P_Recipe_M41_POS=10021
,P_Recipe_M42_POS=10032
,P_Recipe_M43_POS=10043
,P_Recipe_M44_POS=10054
,P_Recipe_M45_POS=10065
,P_Recipe_M46_POS=10076
,P_Recipe_M47_POS=10087
,P_Recipe_M48_POS=10098
,P_Recipe_M49_POS=10109
,P_Recipe_M50_POS=10120
,P_Error_X_Axis_Packml=10137
,P_Error_X_Axis_Dequeue=10143
,P_Error_X_Axis_Num=10149
,P_Memory_Tower_Err_Pos_X_Save=10155
,P_Error_Y_Axis_Packml=10161
,P_Error_Y_Axis_Dequeue=10167
,P_Error_Y_Axis_Num=10173
,P_Memory_Tower_Err_Pos_Y_Save=10179
,P_Error_Z_Axis_Packml=10185
,P_Error_Z_Axis_Dequeue=10191
,P_Error_Z_Axis_Num=10197
,P_Memory_Tower_Err_Pos_Z_Save=10203
,P_Error_ZZ_Axis_Packml=10209
,P_Error_ZZ_Axis_Dequeue=10215
,P_Error_ZZ_Axis_Num=10221
,P_Memory_Tower_Err_Pos_ZZ_Save=10227
,P_1st_PNP_FWD_Abort_Offset=10340
,P_1st_PNP_BWD_Abort_Offset=10430
,P_2nd_PNP_FWD_Abort_Offset=10520
,P_2nd_PNP_BWD_Abort_Offset=10610
,P_Align_Zero_Move_Start_Flag=10762
,P_Stop_Sub_Master_Motion_Program_Flag=10777
,P_Stop_Slave_Motion_Program_Flag=10797
,P_Stop_Motor_Status=10817
,P_Stop_Coord_Status=10865
,P_Stop_Save_RTN=10902
,P_Stop_Motor_Pos=10908
,P_Old_P_Anode_TR1_Master_Motion_Trigger=10965
,P_Old_P_Cathode_TR1_Master_Motion_Trigger=10981
,P_Anode_TR1_Old_Mode=10997
,P_Cathode_TR1_Old_Mode=11013
,P_Older_Than_P_Anode_TR1_Old_Mode=11029
,P_Older_Than_P_Cathode_TR1_Old_Mode=11045
,P_Older_Than_P_Sequence_Old_P_Anode_TR1_Current_Mode_Trigger=11061
,P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Current_Mode_Trigger=11077
,P_Old_P_Anode_TR1_Mode_Command=11093
,P_Old_P_Cathode_TR1_Mode_Command=11109
,P_Older_Than_P_Old_P_Anode_TR1_Mode_Command=11125
,P_Older_Than_P_Old_P_Cathode_TR1_Mode_Command=11141
,P_Older_Than_P_Sequence_Old_P_Anode_TR1_Mode_Command_Trigger=11157
,P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Mode_Command_Trigger=11173
,P_Old_P_Anode_TR1_PMAC_Status=11189
,P_Old_P_Cathode_TR1_PMAC_Status=11205
,P_Older_Than_P_Old_P_Anode_TR1_PMAC_Status=11221
,P_Older_Than_P_Old_P_Cathode_TR1_PMAC_Status=11237
,P_Old_P_Slave1_Motion_Command=11253
,P_Old_P_Slave10_Motion_Command=11269
,P_Old_Slave1_P_SubMaster_Sub_Mode_Command=11285
,P_Old_Slave10_P_SubMaster_Sub_Mode_Command=11301
,P_Sequence_Old_P_Current_Mode_Trigger=11317
,P_Sequence_Old_Mode=11333
,P_Sequence_Old_P_Mode_Command=11349
,P_Sequence_Old_P_Mode_Command_Trigger=11365
,P_SubMaster_Sub_Old_Mode=11381
,P_SubMaster_Sub_Old_Command=11397
,P_SubMaster_Sub_Mode_Command=11413
,P_SubMaster_Sub_Old_Trigger=11429
,P_InterLock_No3_Array=11445
,P_Old_InterLock_No3_Array=11461
,P_Mode_Err=11477
,P_Phasing_Err=11505
,P_Phasing_Err2=11510
,P_Cathode_Run_Mode_Type=11518
,P_Cathode_Run_Mode_Trigger=11538
,P_Anode_Run_Mode_Type=11559
,P_Anode_Run_Mode_Trigger=11579
,P_Stop_Origin_Save=11756
,P_Sheet_Err=11839
,P_Drivig_Cal_Save=11858
,P_PMAC_Status_Arr_Save1=11865
,P_HomePos_Save1=11870
,P_PMAC_Status_Arr_Save2=11875
,P_HomePos_Save2=11880
,P_PMAC_Status_Arr_Save3=11885
,P_HomePos_Save3=11890
,P_PMAC_Status_Arr_Save4=11895
,P_HomePos_Save4=11900
,P_HomePos_Err=11910
,P_Cutter_FWB_Heater_Current=11975
,P_Scan_Time=12029
,P_Read_Sector_TactTime=12137
,P_Write_Sector_TactTime=12143
,P_SV_AO_Reference_Value_Chanel=12166
,P_MSA_Run_Repeat_Num=12199
,P_Current_MSA_Run_Num=12204
,P_PV_AO_Value_Chanel=12537
,P_Interlock_Messege=12548
,P_Current_Homming_Status=12601
,P_Home_Execute_Type=12651
,P_Interval_Read_Time=12704
,P_Interval_Write_Time=12710
,P_Sub_Master_Motion_Program_Flag=12754
,P_Slave_Motion_Program_Flag=12774
,P_OLD_Jog_Speed_Motor=12795
,P_Command_Start=12851
,P_Command_Complete=12869
,P_Command_Reset=12887
,P_Command_Hold=12905
,P_Command_Unhold=12923
,P_Command_Suspend=12941
,P_Command_Unsuspend=12959
,P_Command_Clear=12977
,P_Command_Stop=12995
,P_Command_Abort=13013
,P_Command_Status_Complete=13031
,P_Command_Mask_Layer=13049
,P_Command_Process_Type=13067
,P_Sum_Ready_pos_Motor=13123
,P_Anode_Align_NG_Array=13254
,P_Cathode_Align_NG_Array=13274
,P_Anode_Surface_NG_Array=13294
,P_Cathode_Surface_NG_Array=13314
,P_Stack_NG_Array=13334
,P_Continuous_Call_Align_OK_Flag=13366
,P_Continuous_Call_Align_NG_Flag=13368
,P_Continuous_Call_Align_TimeOut_Flag=13370
,P_Continuous_Call_Surface_OK_Flag=13372
,P_Continuous_Call_Surface_NG_Flag=13374
,P_Continuous_Call_Surface_TimeOut_Flag=13376
,P_Continuous_Call_Stack_Flag=13378
,P_PLC12_Observser_MNTR=13390
,P_PLC12_Vacuum_MNTR=13395
,P_Vacuum_Check=13403
,P_PLC12_Blow_MNTR=13411
,P_Blow_Check=13419
,P_PLC12_Vacuum_1st_Cathode_Take_Time=13443
,P_PLC12_Vacuum_2nd_Cathode_Take_Time=13448
,P_PLC12_Vacuum_NG_Cathode_Take_Time=13453
,P_PLC12_Vacuum_Align_Cathode_Take_Time=13458
,P_PLC12_Vacuum_1st_Anode_Take_Time=13463
,P_PLC12_Vacuum_2nd_Anode_Take_Time=13468
,P_PLC12_Vacuum_NG_Anode_Take_Time=13473
,P_PLC12_Vacuum_Align_Anode_Take_Time=13478
,P_PLC12_Blow_1st_Cathode_Take_Time=13499
,P_PLC12_Blow_2nd_Cathode_Take_Time=13504
,P_PLC12_Blow_NG_Cathode_Take_Time=13509
,P_PLC12_Blow_Align_Cathode_Take_Time=13514
,P_PLC12_Blow_1st_Anode_Take_Time=13519
,P_PLC12_Blow_2nd_Anode_Take_Time=13524
,P_PLC12_Blow_NG_Anode_Take_Time=13529
,P_PLC12_Blow_Align_Anode_Take_Time=13534
,P_Status_arry=13541
,P_Queue_arry=13561
,P_Step_arry=13581
,P_Index_arry=13601
,P_PLC_Observser_MNTR=13628
,P_Test_Vacuum_Timer=13637
,P_Test_Blow_Timer=13645
,P_Vac_Test_Set_Time=13653
,P_Blow_Test_Set_Time=13661
,P_Zero_Angle=13724
,P_Zero_Length=13749
,P_Homeoffset_Change_Flag=13774
,P_Cal_Distance=13799
,P_Cal_Denominator=13804
,P_Cal_Numerator=13809
,P_Cal_Dif_Deg=13814
,P_Vac_Door_Open_Clear=13819
,P_Read_Timer_S=13833
,P_Write_Timer_S=13842
,P_Interval_Read_S=13851
,P_Interval_Write_S=13860
,P_UI_Jog_Vel_M=13869
,P_Old_X_Read_Count_S=13920
,P_X_BTN_Manual_1=13943
,P_X_BTN_Manual_2=14063
,P_X_BTN_Manual_3=14183
,P_Home_InterLock_M=14303
,P_Status_BTN_Manual_1=14353
,P_Status_BTN_Manual_2=14473
,P_Status_BTN_Manual_Interlock_1=14593
,P_Status_BTN_Manual_Interlock_2=14713
,P_Status_BTN_Manual_Interlock_3=14833
,P_Mode_Run_Enable_Flag=14953
,P_MNTR_PLC4_Vision_Result=14960
,P_PNP_Vac_Mode_Run_Enable_Flag=15161
,P_HCK_Step_MNTR=15168
,P_Axis_Home_Pos=15218
,P_Axis_Ready_Pos=15268
,P_PMAC_Homing_CHK=15318
,P_Home_Command=15369
,P_Old_BTN_Servo_On_Off_M=15423
,P_Peak_Load_Ratio_M=15456
,P_Chk_Current_Jog_Sel=15489
,P_Recipe_POS_Interock_Num_Bit=15523
,P_Recipe_VEL=15556
,P_Recipe_POS=15567
,P_BTN_Servo_On_Off_M=15578
,P_BTN_Home_M=15611
,P_BTN_Jog_Stop_M=15644
,P_BTN_Recipe_POS_RUN_M=15677
,P_Recipe_POS_Flag_M=15710
,P_BTN_Jog_INC_M=15743
,P_BTN_JOG_ABS_M=15776
,P_Unit_Command=15810
,P_Unit_State_Machine=15910
,P_Status_BTN_Manual_3=16010
,P_Chk_Current_BTN_Sel=16110
,P_Linear_Encoder_Pos_Check_Flag=16169
,P_Linear_Encoder_Pos=16174
,P_Status_Linear_Encoder_HomeZero=16179
,P_Command_Linear_Encoder_HomeZero=16184
,P_OLD_Home_Offset=16197
,P_PLC13_Cycle_Stop_Return_Array=16285
,P_Stopping_CycleStop_Act_State_Machine=16391
,P_Module_Cycle_Stop_Act_State_Machine_Array=16411
,P_Module_Cycle_Stop_Act_Complete_Bit=16431
,P_Module_Cycle_Stop_Act_Command_Array=16451
,P_OLD_Module_Cycle_Stop_Act_Command_Array=16471
,P_Buffer_Seqdata_CycleStop_Array=16491
,P_Tact_Time_Timer=16528
,P_Tack_Time_Save_Time=16568
,P_Tact_Time_Stack_Array=16612
,P_Tact_Time_Discharge_Array=16622
,P_Tact_Time_1st_Unloader_Array=16632
,P_Tact_Time_Sepa_ARC_Array=16642
,P_Tact_Time_Final_Roll_Array=16652
,P_Tact_Time_Cathode_1st_PNP_Array=16662
,P_Tact_Time_Cathode_Align_Array=16672
,P_Tact_Time_Cathode_2nd_PNP_Array=16682
,P_Tact_Time_Cathode_Clamp_Array=16692
,P_Tact_Time_Anode_1st_PNP_Array=16702
,P_Tact_Time_Anode_Align_Array=16712
,P_Tact_Time_Anode_2nd_PNP_Array=16722
,P_Tact_Time_Anode_Clamp_Array=16732
,P_Tact_Time_Cathode_1st_PNP_Vac_Array=16742
,P_Tact_Time_Cathode_Align_PNP_Vac_Array=16752
,P_Tact_Time_Cathode_2nd_PNP_Vac_Array=16762
,P_Tact_Time_Anode_1st_PNP_Vac_Array=16772
,P_Tact_Time_Anode_Align_PNP_Vac_Array=16782
,P_Tact_Time_Anode_2nd_PNP_Vac_Array=16792
,P_Tact_Time_Check=16846
,P_Old_Tact_Time_Check=16886
,P_Tact_Time_Head_Address=16926
,P_EPC_MNTR_VAR=16983
,P_Home_Check_Arry=17006
,P_PWM_Phasing_Start=17058
,P_PWM_Status=17063
,P_PWM_State_Machine=17068
,P_AH_Seq_arr=17073
,P_DD_M_Home_ABS_Pos=17088
,P_AH_Indvi_rtn=17093
,P_Home_Check_Arry1=17146
,P_PV_EPC_Camera_Pos=17310
,P_VISION_MSA_Status_Prod_Sequence=17330
,P_MSA_Cmd=17354
,P_Align_Take_Off_Cmd=17385
,P_Align_Take_Off_Status_Prod_Sequence=17402
,P_Old_Upper_Sensor=17471
,P_Edge_Upper_Sensor=17479
,P_Old_Lower_Sensor=17487
,P_Edge_Lower_Sensor=17495
,P_Edge_NP_BTN=17503
,P_UI_Unit_Status=17521
,P_Motor_Unit_Status=17531
,P_Current_Homming_Status_To_PLC=17581
,P_AO_Module_Arr=17669
,P_AO_Range_Set_Value=17674
,P_Force_BTN_M_Variable_Save=17707
,P_ABS_Phasing_Data=18107
,P_ABS_Home_Offset_Data=18112
,P_Servo_Gain_Kp=18121
,P_Servo_Gain_Kvfb=18151
,P_Servo_Gain_Kvff=18181
,P_Servo_Gain_Ki=18211
,P_Servo_Gain_SwZvInt=18241
,P_Servo_Gain_Kaff=18271
,P_Alarm_Arr=18302
,P_Alarm_Occur_Index_Flag=18403
,P_First_Alarm_Log=18414
,P_Alarm_duplicate_Check_Arr=18451
,P_Alarm_Time_Log=19121
,P_Alarm_Log=19171
,P_Old_Drive_Alarm=19221
,P_Limit_PosData=19277
,P_Collision_Risk_Motor=19304
,P_P_IL_Normal_Pos_Offset=19311
,P_M_IL_Normal_Pos_Offset=19361
,P_P_IL_Upper_Pos_Offset=19411
,P_M_IL_Upper_Pos_Offset=19461
,P_P_IL_Align_Pos_Offset=19511
,P_M_IL_Align_Pos_Offset=19561
,P_P_IL_Stack_Pos_Offset=19611
,P_M_IL_Stack_Pos_Offset=19661
,P_Ca_2nd_T_Plus_IL_Offset=19715
,P_Ca_2nd_T_Minus_IL_Offset=19718
,P_Ca_2nd_Z_Plus_IL_Offset=19721
,P_Ca_2nd_Z_Minus_IL_Offset=19723
,P_An_2nd_T_Plus_IL_Offset=19725
,P_An_2nd_T_Minus_IL_Offset=19728
,P_An_2nd_Z_Minus_IL_Offset=19731
,P_FR_X_Plus_IL_Offset=19735
,P_FR_X_Minus_IL_Offset=19737
,P_Ca_NG_PNP_Plus_IL_Offset=19740
,P_Ca_NG_PNP_Minus_IL_Offset=19744
,P_An_NG_PNP_Plus_IL_Offset=19748
,P_An_NG_PNP_Minus_IL_Offset=19752
,P_Unloader_X_Plus_IL_Offset=19756
,P_Unloader_X_Minus_IL_Offset=19760
,P_Unloader_Z_Plus_IL_Offset=19764
,P_Unloader_Z_Minus_IL_Offset=19767
,P_IL_In_Offset=19770
,P_IL_Home_Chk_Motor_Num=19797
,P_NG_PNP_Motion_arr=19972
,P_Ecat_Read_MNTR=20014
,P_Ecat_Write_MNTR=20042
,P_Ecat_Save_MNTR=20070
,P_Ecat_Error_MNTR=20086
,P_Ecat_Read_Error_MNTR=20102
,P_Ecat_Each_Write_Error_MNTR=20118
,P_Pn000=20137
,P_Pn001=20157
,P_Pn00B=20177
,P_Pn100=20197
,P_Pn101=20217
,P_Pn102=20237
,P_Pn103=20257
,P_Pn123=20277
,P_Pn140=20297
,P_Pn141=20317
,P_Pn145=20337
,P_Pn146=20357
,P_Pn160=20377
,P_Pn161=20397
,P_Pn163=20417
,P_Pn170=20437
,P_Pn401=20457
,P_Pn408=20477
,P_Pn409=20497
,P_Pn40A=20517
,P_Pn40C=20537
,P_Pn40D=20557
,P_Pn416=20577
,P_Pn417=20597
,P_Pn511=20617
,P_Pn520=20637
,P_PnB02_Numerator=20657
,P_PnB02_Denominator=20677
,P_Pneumatic_Pressure_Unit_Tack_Time_Chk_Timer=20822
,P_Pneumatic_Pressure_Unit_Tack_Time=20849
,P_Discharge_Tact_Time_Arr=20880
,P_PLC19_All_Home_Tact_Time_Array=20961
,P_Act_ALL_Home_Time_Out=20984
,P_Act_Hold_Complete_Bit=21024
,P_Module_Act_Hold_Command_Array=21059
,P_OLD_Module_Act_Hold_Command_Array=21094
,P_Module_Act_Hold_State_Machine_Array=21129
,P_Act_Hold_Old_Time=21164
,P_Act_Hold_Time_Out=21200
,P_Act_Execute_Complete_Bit=21268
,P_Module_Act_Execute_Command_Array=21280
,P_OLD_Module_Act_Execute_Command_Array=21292
,P_Module_Act_Execute_State_Machine_Array=21304
,P_Act_Execute_Old_Time=21316
,P_Act_Execute_Time_Out=21329
,P_Buffer_Mode_Module_Status_Sequence=21363
,P_EXECUTE_Status_Prod_Sequence=21393
,P_Buffer_Seqdata_Execute_First_Sepa_Mode_Array=21430
,P_Execute_First_Sepa_Mode_Tact_Time_Array=21461
,P_Discharge_Seq_InterLock_Delay_Time=21488
,P_Discharge_Seq_InterLock_Flag=21518
,P_Buffer_Seqdata_Discharge_Array=21548
,P_Suspend_Discharge_Tact_Time_Array=21579
,P_ARC_Seq_InterLock_Delay_Time=21607
,P_ARC_Seq_InterLock_Flag=21637
,P_Buffer_Seqdata_ARC_Array=21667
,P_Suspend_ARC_Tact_Time_Array=21698
,P_Anode_1TR_Cell_Supply_Seq_InterLock_Delay_Time=21725
,P_Anode_1TR_Cell_Supply_Seq_InterLock_Flag=21755
,P_Buffer_Seqdata_Anode_1TR_Cell_Supply_Array=21785
,P_Suspend_Anode_1TR_Cell_Supply_Tact_Time_Array=21816
,P_Buffer_Seqdata_Hold_Exist_Insp_Array=21844
,P_Hold_Exist_Insp_Tact_Time_Array=21875
,P_Buffer_Seqdata_Hold_Remove_NG_PNP_Array=21903
,P_Hold_Remove_NG_PNP_Tact_Time_Array=21934
,P_Buffer_Seqdata_Hold_Remove_Align_Array=21965
,P_Hold_Remove_Align_Tact_Time_Array=21996
,P_Buffer_Seqdata_Hold_Remove_2TR_Array=22027
,P_Hold_Remove_2TR_Tact_Time_Array=22058
,P_Buffer_Seqdata_Hold_Supply_1TR_Array=22086
,P_Hold_Supply_1TR_Tact_Time_Array=22117
,P_Buffer_Seqdata_Hold_Supply_Align_Array=22150
,P_Hold_Supply_Align_Tact_Time_Array=22181
,P_Buffer_Seqdata_Hold_Supply_2TR_Array=22209
,P_Hold_Supply_2TR_Tact_Time_Array=22240
,P_Buffer_Seqdata_Hold_Semi_Run_Pos_Move_Array=22268
,P_Hold_Semi_Run_Pos_Move_Tact_Time_Array=22299
,P_Act_Complete_Bit=22320
,P_Act_Old_Time=22386
,P_Act_Delay_Time=22452
,P_Act_Time_Out=22519
,P_Discharge_Possibility_Bit=22586
,P_HOLD_Exist_Possibility_Bit=22652
,P_HOLD_NG_Remove_Possibility_Bit=22718
,P_HOLD_Align_Remove_Possibility_Bit=22784
,P_HOLD_2TR_Remove_Possibility_Bit=22850
,P_HOLD_1TR_Supply_Possibility_Bit=22916
,P_HOLD_Align_Supply_Possibility_Bit=22982
,P_HOLD_2TR_Supply_Possibility_Bit=23048
,P_HOLD_Semi_Run_Pos_Possibility_Bit=23114
,P_Module_Act_Command_Array=23180
,P_OLD_Module_Act_Command_Array=23246
,P_Module_Act_State_Machine_Array=23312
,P_Module_Act_State_Machine_Error_Array=23378
,P_Sensor_To_Sepa_Curr_Distance_mm=23474
,P_Suspend_Monitor_=23505
,P_Suspend_Discharge_Debug_Address=23519
,P_Suspend_Discharge_Debug_Value=23524
,P_Suspend_ARC_Debug_Address=23536
,P_Suspend_ARC_Debug_Value=23541
,P_ARC_Ready_Flag=23551
,P_Suspend_An_1TR_Supply_Debug_Address=23556
,P_Suspend_An_1TR_Supply_Debug_Value=23561
,P_Anode_Suspend_Supply_Complete=23573
,P_MOde_Num=23657
,P_Command_Depth=23662
,P_In_Position=23667
,P_Last_Cycle_Command=23672
,P_Slave1_Anode_Run_Motion_Array=23680
,P_Slave2_Anode_Run_Motion_Array=23780
,P_Slave3_Anode_Run_Motion_Array=23880
,P_Slave4_Anode_Run_Motion_Array=23980
,P_Slave5_Anode_Run_Motion_Array=24080
,P_Slave6_Anode_Run_Motion_Array=24180
,P_Slave7_Anode_Run_Motion_Array=24280
,P_Slave8_Anode_Run_Motion_Array=24380
,P_Slave9_Anode_Run_Motion_Array=24480
,P_Slave10_Anode_Run_Motion_Array=24580
,P_Slave15_Anode_Run_Motion_Array=24680
,P_Slave16_Anode_Run_Motion_Array=24780
,P_Slave17_Anode_Run_Motion_Array=24880
,P_Slave18_Anode_Run_Motion_Array=24980
,P_Slave19_Anode_Run_Motion_Array=25080
,P_Slave1_Cathode_Run_Motion_Array=25180
,P_Slave2_Cathode_Run_Motion_Array=25280
,P_Slave3_Cathode_Run_Motion_Array=25380
,P_Slave4_Cathode_Run_Motion_Array=25480
,P_Slave5_Cathode_Run_Motion_Array=25580
,P_Slave15_Cathode_Run_Motion_Array=25680
,P_Slave6_Cathode_Run_Motion_Array=25780
,P_Slave7_Cathode_Run_Motion_Array=25880
,P_Slave8_Cathode_Run_Motion_Array=25980
,P_Slave9_Cathode_Run_Motion_Array=26080
,P_Slave10_Cathode_Run_Motion_Array=26180
,P_Slave16_Cathode_Run_Motion_Array=26280
,P_Slave17_Cathode_Run_Motion_Array=26380
,P_Slave18_Cathode_Run_Motion_Array=26480
,P_Slave19_Cathode_Run_Motion_Array=26580
,P_HCmd_List=26722
,P_DataList=26758
,P_Hold_Data_Err=26763
,P_Hold_Motion_Arr=26791
,P_Hold_Err_MNTR=26856
,P_Hold_Err_Data_Save=26860
,P_Hold_Err_Action_Data_Save=26868
,P_Hold_Memory_Tower_Err_Pos=26877
,P_Buffer_Seqdata_MSA_Array=26905
,P_Buffer_Seqdata_Align_Take_Off_Array=26955
,P_VISION_MSA_Align_Module_Complete_Bit=27005
,P_Module_Manual_MSA_Act_Command_Array=27105
,P_OLD_Module_Manual_MSA_Act_Command_Array=27205
,P_Module_MSA_Act_State_Machine_Array=27305
,P_VISION_MSA_Seq_Stopping_Point=27405
,P_Align_Take_Off_Module_Complete_Bit=27438
,P_Module_Manual_Align_Take_Off_Act_Command_Array=27538
,P_OLD_Module_Manual_Align_Take_Off_Act_Command_Array=27638
,P_Module_Align_Take_Off_Act_State_Machine_Array=27738
,P_Buffer_Judge_Trg=27845
,P_PLC01_Queue_MNTR=27856
,P_PLC01_Exe_Is_Ena_Step_Flag=27886
,P_PLC01_Exe_Fist_Sepa_Step_Flag=27896
,P_PLC01_Exe_Prod_Step_Flag=27906
,P_PLC01_HOLD_Insp_Step_Flag=27911
,P_PLC01_HOLD_Main_Step_Flag=27921
,P_PLC01_Sus_Discharge_Step_Flag=27936
,P_PLC01_Sus_ARC_Step_Flag=27946
,P_PLC01_STOP_Init_Step_Flag=27956
,P_PLC01_STOP_Cycle_ST_Step_Flag=27966
,P_No1_Recipe_Pos_IL=28018
,P_No2_Recipe_Pos_IL=28071
,P_No3_Recipe_Pos_IL=28124
,P_No4_Recipe_Pos_IL=28177
,P_No5_Recipe_Pos_IL=28230
,P_No6_Recipe_Pos_IL=28283
,P_No7_Recipe_Pos_IL=28336
,P_No8_Recipe_Pos_IL=28389
,P_No9_Recipe_Pos_IL=28442
,P_No10_Recipe_Pos_IL=28495
,P_Recipe_POS_Interock_M=28548};
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
,M_Y_A_Site_Heart_Bit=5014
,M_X_PLC_Anode_Sheet_Ready2=4010
,M_X_PLC_Cathode_Sheet_Ready2=4011
,M_X_B_Site_Heart_Bit=4014
,M_PLC_HeartBit_Flag=4223
,M_X_BTN_Press_Jog_Left_From_PLC=4160
,M_X_BTN_Press_Jog_Right_From_PLC=4107
,M_Sample_JR_Prod_Count=8351
,M_Sample_Btn_Flag=8352
,M_Y_Vacuum_Popup_On_Request=8353
,M_X_Vacuum_Popup_On_Request_Ack=8354
,M_SysTimer=8503
,M_Stack_Host_ID_Buffer_Mode=8564
,M_Stack_Host_ID_Sample_Type=8565
,M_Stack_Host_ID_JR_Result=8566
,M_Stack_Host_ID_NG_Type=8567
,M_Manual_ARC_BTN=9129
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
,M_Touchprobefunction=8355
,M_Touchprobestatus=8404
,M_Ecat_Motor_State=8453
,M_Motor_BTN_Info=8504
,M_ASCII_Stack_Work_Host_Sepa_ID_Buffer=8554
,M_ASCII_Read_Stack_Work_Host_Sepa_ID_Buffer=8568
,M_ASCII_Uloader_1st_Host_ID_Buffer=8575
,M_ASCII_Anode_Sheet_Belt_Buffer=8585
,M_ASCII_Anode_Sheet_Buffer=8592
,M_ASCII_Cathode_Sheet_Belt_Buffer=8648
,M_ASCII_Cathode_Sheet_Buffer=8655
,M_ASCII_First_Sheet_Buffer=8711
,M_ASCII_Last_Sheet_Buffer=8718
,P_BTN_Jog_BWD_M=8725
,P_BTN_Jog_FWD_M=8775
,M_UnWinder_BTN_Lamp=8825
,M_Cathode_BTN_Lamp=8841
,M_Anode_BTN_Lamp=8873
,M_Stack_BTN_Lamp=8905
,M_ARC_BTN_Lamp=8937
,M_UnWinder_BTN_Interlock=8969
,M_Cathode_BTN_Interlock=8985
,M_Anode_BTN_Interlock=9017
,M_Stack_BTN_Interlock=9049
,M_ARC_BTN_Interlock=9081
,M_NP_BTN_Interlock=9113
,M_Motor_Vel=9130
,M_Motor_TA=9180
,M_Motor_TD=9230
,M_Motor_BTN=9280
,M_Motor_RecipePos=9330
,M_Motor_Move_Distance=9380
,M_Motor_Home_Offset=9430
,M_Motor_Pos_Data=9480
,M_Motor_Status_Data=9530
,M_Motor_Recipe_Pos_Interlock=9580
,M_Motor_Peak_Load_Ratio=9630
,M_Motor_Effective_Load_Ratio=9680
,M_Motor_Check_Current_Recipe_Pos=9730};
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
#define P_BTN_Sepa_Stack_Mode 8473
#define P_CMD_Cell_Align 8474
#define P_CMD_Cell_Stop 8484
#define P_CMD_Cell_Reset 8494
#define P_Anode_X_Sum_Move_mm 8504
#define P_Cathode_X_Sum_Move_mm 8505
#define P_Anode_Align_Stage_TM 8506
#define P_Anode_Align_Stage_TS 8507
#define P_Anode_Align_Stage_TA 8508
#define P_Cathode_Align_Stage_TM 8509
#define P_Cathode_Align_Stage_TS 8510
#define P_Cathode_Align_Stage_TA 8511
#define P_X_Move_Recipe_Percent 8512
#define P_PC_Jog_Motor_No 4301
#define P_PC_Jog_Speed 4254
#define P_Custom_Speed 4500
#define P_Jog_Position 4300
#define P_Jog_Work_Speed 8513
#define P_Anode_Recipe_Count 8544
#define P_Cathode_Recipe_Count 8545
#define P_Recipe_Homing_Speed 8546
#define P_Anode_1st_T_Belt_To_Align 8595
#define P_Anode_1st_T_Align_To_Belt 8596
#define P_Anode_1st_T_Ready 8597
#define P_Recipe_A_1st_Z_Belt_Down 8598
#define P_Recipe_A_1st_Z_Belt_Up 8599
#define P_Recipe_A_1st_Z_Align_Down 8600
#define P_Recipe_A_1st_Z_Align_Up 8601
#define P_Recipe_A_1st_Z_Ready_Up 8602
#define P_Recipe_A_1st_Z_Ready_Down 8603
#define P_Anode_1st_Z_Belt_Down 8604
#define P_Anode_1st_Z_Belt_Up 8605
#define P_Anode_1st_Z_Align_Down 8606
#define P_Anode_1st_Z_Align_Up 8607
#define P_Anode_1st_Z_Ready_Up 8608
#define P_Anode_1st_Z_Ready_Down 8609
#define P_Anode_2st_T_Align_To_Stack 8610
#define P_Anode_2st_T_Stack_To_Align 8611
#define P_Recipe_A_2st_Z_Align_Up 8612
#define P_Recipe_A_2st_Z_Align_Down 8613
#define P_Recipe_A_2st_Z_Stack_Up 8614
#define P_Recipe_A_2st_Z_Stack_Down 8615
#define P_Recipe_A_2st_Z_Ready_Up 8616
#define P_Recipe_A_2st_Z_Ready_Down 8617
#define P_Anode_2nd_Z_Align_Up 8618
#define P_Anode_2nd_Z_Align_Down 8619
#define P_Anode_2nd_Z_Stack_Up 8620
#define P_Anode_2nd_Z_Stack_Down 8621
#define P_Anode_2nd_Z_Ready_Up 8622
#define P_Anode_2st_Z_Ready_Down 8623
#define P_Anode_Clamp_Y1_On_1st 8624
#define P_Anode_Clamp_Y1_On_2nd 8625
#define P_Anode_Clamp_Y1_On_3rd 8626
#define P_Anode_Clamp_Y1_On_4th 8627
#define P_Anode_Clamp_Y1_Off_1st 8628
#define P_Anode_Clamp_Y1_Off_2nd 8629
#define P_Anode_Clamp_Y1_Off_3rd 8630
#define P_Anode_Clamp_Y2_On_1st 8631
#define P_Anode_Clamp_Y2_On_2nd 8632
#define P_Anode_Clamp_Y2_On_3rd 8633
#define P_Anode_Clamp_Y2_On_4th 8634
#define P_Anode_Clamp_Y2_Off_1st 8635
#define P_Anode_Clamp_Y2_Off_2nd 8636
#define P_Anode_Clamp_Y2_Off_3rd 8637
#define P_Anode_Clamp_Z1_On_1st 8638
#define P_Anode_Clamp_Z1_On_2nd 8639
#define P_Anode_Clamp_Z1_On_3rd 8640
#define P_Anode_Clamp_Z1_On_4th 8641
#define P_Anode_Clamp_Z1_Off_1st 8642
#define P_Anode_Clamp_Z1_Off_2nd 8643
#define P_Anode_Clamp_Z1_Off_3rd 8644
#define P_Anode_Clamp_Z1_Down 8645
#define P_Final_Roll_X_Sepa_1st 8646
#define P_Final_Roll_X_Sepa_2nd 8647
#define P_Final_Roll_X_Sepa_3rd 8648
#define P_Final_Roll_X_Sepa_4th 8649
#define P_Final_Roll_X_Sepa_5th 8650
#define P_Final_Roll_X_Anode_Move 8651
#define P_Final_Roll_X_Discharge 8652
#define P_Final_Roll_X_Cathode_Move 8653
#define P_Final_Roll_X_Run_Wait_Pos 8654
#define P_Final_Roll_Z_Ready_And_Cutting 8655
#define P_Final_Roll_Z_Run_Pos 8656
#define P_Final_Roll_Z_Sepa_3rd 8657
#define P_Final_Roll_Z_Sepa_4th 8658
#define P_Final_Roll_Z_Sepa_5th 8659
#define P_Stack_Table_Z_For_Sepa 8660
#define P_Stack_Table_Z_For_Run 8661
#define P_Stack_Table_Z_For_Init 8662
#define P_Cathode_Clamp_Y1_On_1st 8663
#define P_Cathode_Clamp_Y1_On_2nd 8664
#define P_Cathode_Clamp_Y1_On_3rd 8665
#define P_Cathode_Clamp_Y1_On_4th 8666
#define P_Cathode_Clamp_Y1_Off_1st 8667
#define P_Cathode_Clamp_Y1_Off_2nd 8668
#define P_Cathode_Clamp_Y1_Off_3rd 8669
#define P_Cathode_Clamp_Y2_On_1st 8670
#define P_Cathode_Clamp_Y2_On_2nd 8671
#define P_Cathode_Clamp_Y2_On_3rd 8672
#define P_Cathode_Clamp_Y2_On_4th 8673
#define P_Cathode_Clamp_Y2_Off_1st 8674
#define P_Cathode_Clamp_Y2_Off_2nd 8675
#define P_Cathode_Clamp_Y2_Off_3rd 8676
#define P_Cathode_Clamp_Z1_On_1st 8677
#define P_Cathode_Clamp_Z1_On_2nd 8678
#define P_Cathode_Clamp_Z1_On_3rd 8679
#define P_Cathode_Clamp_Z1_On_4th 8680
#define P_Cathode_Clamp_Z1_Off_1st 8681
#define P_Cathode_Clamp_Z1_Off_2nd 8682
#define P_Cathode_Clamp_Z1_Off_3rd 8683
#define P_Cathode_Clamp_Z1_Down 8684
#define P_Cathode_2st_T_Align_To_Stack 8685
#define P_Cathode_2st_T_Stack_To_Align 8686
#define P_Slave8_Target_X_Align_To_Stack_1st 8687
#define P_Slave8_Target_X_Align_To_Stack_2nd 8688
#define P_Slave8_Target_X_Stack_To_Align_1st 8689
#define P_Slave8_Target_X_Stack_To_Align_2nd 8690
#define P_Slave8_Target_X_Stack_To_Align_3rd 8691
#define P_Cathode_2nd_Z_Align_Up 8692
#define P_Cathode_2nd_Z_Align_Down 8693
#define P_Cathode_2nd_Z_Stack_Up 8694
#define P_Cathode_2nd_Z_Stack_Down 8695
#define P_Cathode_2nd_Z_Ready_Up 8696
#define P_Cathode_2st_Z_Ready_Down 8697
#define P_Recipe_C_2st_Z_Align_Up 8698
#define P_Recipe_C_2st_Z_Align_Down 8699
#define P_Recipe_C_2st_Z_Stack_Up 8700
#define P_Recipe_C_2st_Z_Stack_Down 8701
#define P_Recipe_C_2st_Z_Ready_Up 8702
#define P_Recipe_C_2st_Z_Ready_Down 8703
#define P_Cathode_1st_T_Belt_To_Align 8704
#define P_Cathode_1st_T_Align_To_Belt 8705
#define P_Cathode_1st_T_Ready 8706
#define P_Cathode_1st_Z_Belt_Down 8707
#define P_Cathode_1st_Z_Belt_Up 8708
#define P_Cathode_1st_Z_Align_Down 8709
#define P_Cathode_1st_Z_Align_Up 8710
#define P_Cathode_1st_Z_Ready_Up 8711
#define P_Cathode_1st_Z_Ready_Down 8712
#define P_Recipe_C_1st_Z_Belt_Down 8713
#define P_Recipe_C_1st_Z_Belt_Up 8714
#define P_Recipe_C_1st_Z_Align_Down 8715
#define P_Recipe_C_1st_Z_Align_Up 8716
#define P_Recipe_C_1st_Z_Ready_Up 8717
#define P_Recipe_C_1st_Z_Ready_Down 8718
#define P_1st_Sheet_Paper_X_FWD 8719
#define P_1st_Sheet_Paper_X_BWD 8720
#define P_Cathode_NG_T_NG_To_Align 8721
#define P_Cathode_NG_T_Align_To_NG 8722
#define P_Cathode_NG_Z_NG_Down 8723
#define P_Cathode_NG_Z_NG_Up 8724
#define P_Cathode_NG_Z_Align_Down 8725
#define P_Cathode_NG_Z_Align_Up 8726
#define P_Anode_NG_T_NG_To_Align 8727
#define P_Anode_NG_T_Align_To_NG 8728
#define P_Anode_NG_Z_NG_Down 8729
#define P_Anode_NG_Z_NG_Up 8730
#define P_Anode_NG_Z_Align_Down 8731
#define P_Anode_NG_Z_Align_Up 8732
#define P_1st_ULD_X_Stack 8733
#define P_1st_ULD_X_FWD 8734
#define P_1st_ULD_X_Init_Pos 8735
#define P_1st_ULD_X_Target_BWD 8736
#define P_1st_ULD_Z_Stack 8737
#define P_1st_ULD_Z_Cutting_For_Cell 8738
#define P_1st_ULD_Z_Discharge_For_Cell 8739
#define P_1st_ULD_Z_Target_Down 8740
#define P_1st_ULD_T_Wait 8741
#define P_1st_ULD_T_Avoid_Angle 8742
#define P_1st_ULD_T_90_Angle 8743
#define P_2nd_PNP_Stack_Down_Pos 8744
#define P_2nd_PNP_Stack_Up_Pos 8745
#define P_Anode_Clamp_Down_MNTR 8746
#define P_Cathode_Clamp_Down_MNTR 8747
#define P_FR_Ta 8748
#define P_FR_Ts 8749
#define P_FR_Tm 8750
#define P_Anode_2TR_Avoid 8751
#define P_Cathode_2TR_Avoid 8752
#define P_Force_Stop_Flag 8753
#define P_Execute_DryRun_Stop_Timer 8754
#define P_DryRun_Timer 8755
#define P_Dryrun_Operating_Time 8756
#define P_Anode_Align_Vac_Err_On 8757
#define P_Cathode_Align_Vac_Err_On 8758
#define P_Anode_1ST_TR_Vac_Err_On 8759
#define P_Anode_2ND_TR_Vac_Err_On 8760
#define P_Cathode_1ST_TR_Vac_Err_On 8761
#define P_Cathode_2ND_TR_Vac_Err_On 8762
#define P_MNTR_PLC0_Task_Time 8763
#define P_MNTR_PLC0_Task_Max_Time 8765
#define P_MNTR_PLC1_Task_Time 8766
#define P_MNTR_PLC1_Task_Max_Time 8768
#define P_MNTR_PLC2_Task_Time 8769
#define P_MNTR_PLC2_Task_Max_Time 8771
#define P_MNTR_PLC3_Task_Time 8772
#define P_MNTR_PLC3_Task_Max_Time 8774
#define P_MNTR_PLC4_Task_Time 8775
#define P_MNTR_PLC4_Task_Max_Time 8777
#define P_MNTR_PLC5_Task_Time 8778
#define P_MNTR_PLC5_Task_Max_Time 8780
#define P_MNTR_PLC6_Task_Time 8781
#define P_MNTR_PLC6_Task_Max_Time 8783
#define P_MNTR_PLC7_Task_Time 8784
#define P_MNTR_PLC7_Task_Max_Time 8786
#define P_MNTR_PLC8_Task_Time 8787
#define P_MNTR_PLC8_Task_Max_Time 8789
#define P_MNTR_PLC9_Task_Time 8790
#define P_MNTR_PLC9_Task_Max_Time 8792
#define P_MNTR_PLC10_Task_Time 8793
#define P_MNTR_PLC10_Task_Max_Time 8795
#define P_MNTR_PLC11_Task_Time 8796
#define P_MNTR_PLC11_Task_Max_Time 8798
#define P_MNTR_PLC12_Task_Time 8799
#define P_MNTR_PLC12_Task_Max_Time 8801
#define P_MNTR_PLC13_Task_Time 8802
#define P_MNTR_PLC13_Task_Max_Time 8804
#define P_MNTR_PLC14_Task_Time 8805
#define P_MNTR_PLC14_Task_Max_Time 8807
#define P_MNTR_PLC15_Task_Time 8808
#define P_MNTR_PLC15_Task_Max_Time 8810
#define P_MNTR_PLC16_Task_Time 8811
#define P_MNTR_PLC16_Task_Max_Time 8813
#define P_MNTR_PLC17_Task_Time 8814
#define P_MNTR_PLC17_Task_Max_Time 8816
#define P_MNTR_PLC18_Task_Time 8817
#define P_MNTR_PLC18_Task_Max_Time 8819
#define P_MNTR_PLC19_Task_Time 8820
#define P_MNTR_PLC19_Task_Max_Time 8822
#define P_MNTR_PLC20_Task_Time 8823
#define P_MNTR_PLC20_Task_Max_Time 8825
#define P_MNTR_PLC21_Task_Time 8826
#define P_MNTR_PLC21_Task_Max_Time 8828
#define P_MNTR_PLC22_Task_Time 8829
#define P_MNTR_PLC22_Task_Max_Time 8831
#define P_MNTR_PLC23_Task_Time 8832
#define P_MNTR_PLC23_Task_Max_Time 8834
#define P_MNTR_PLC24_Task_Time 8835
#define P_MNTR_PLC24_Task_Max_Time 8837
#define P_MNTR_PLC25_Task_Time 8838
#define P_MNTR_PLC25_Task_Max_Time 8840
#define P_MNTR_PLC26_Task_Time 8841
#define P_MNTR_PLC26_Task_Max_Time 8843
#define P_MNTR_PLC27_Task_Time 8844
#define P_MNTR_PLC27_Task_Max_Time 8846
#define P_MNTR_PLC28_Task_Time 8847
#define P_MNTR_PLC28_Task_Max_Time 8849
#define P_MNTR_PLC29_Task_Time 8850
#define P_MNTR_PLC29_Task_Max_Time 8852
#define P_MNTR_PLC30_Task_Time 8853
#define P_MNTR_PLC30_Task_Max_Time 8855
#define P_In_Pos_Trg 8856
#define P_Position_Calc_Status 8857
#define P_Vision_Result 8858
#define P_Vision_Result_Get_First_Cycle 8862
#define P_Init_Result 8866
#define P_PNP_Pos 8872
#define P_Execute_Manage_Mode 8873
#define P_Align_NG_Tack_Flag 8874
#define P_Anode_Align_OK_Flag 8875
#define P_Anode_Align_NG_Flag 8876
#define P_Cathode_Align_OK_Flag 8877
#define P_Cathode_Align_NG_Flag 8878
#define P_Stack_Table_OK_Flag 8879
#define P_Anode_Retry_OK_Flag 8880
#define P_Anode_Retry_NG_Flag 8881
#define P_Cathode_Retry_OK_Flag 8882
#define P_Cathode_Retry_NG_Flag 8883
#define P_Anode_Surf_Insp_Trigger 8884
#define P_Cathode_Surf_Insp_Trigger 8885
#define P_First_Anode_Sheet_Supply_Flag 8886
#define P_First_Cathode_Sheet_Supply_Flag 8887
#define P_Cathode_Cur_Mode 8888
#define P_Anode_Cur_Mode 8889
#define P_Anode_Run_FR_Move_Check_AI 8890
#define P_Cathode_Run_FR_Move_Check_AI 8891
#define P_FR_Move_Check_AI_OffSet 8892
#define P_FR_AI_Value 8893
#define P_Aver_FR_AI_Value 8898
#define P_Process_Function_Command 8899
#define P_HOLD_Existence_Insp_State_Machine 8900
#define P_Execute_IsEnable_State_Machine 8901
#define P_EXECUTE_FUNC_Ready_STEP 8902
#define P_Execute_First_Sepa_Ontable_State_Machine 8903
#define P_Execute_Prod_Manage_State_Machine 8904
#define P_Execute_Enqueue_State_Machine 8905
#define P_STOP_Initial_Process_STEP 8906
#define P_STOP_Cylce_Stop_STEP 8907
#define P_Stop_CycleStop_Position 8908
#define P_Upcount_NextStep 8909
#define P_SUSPEND_FUNC_JR_Discharge_STEP 8910
#define P_SUSPEND_FUNC_ARC_STEP 8911
#define P_Suspend_ARC_Complete_Flag 8912
#define P_EXECUTE_FUNC_Debug_On_Sepa_STEP 8913
#define P_QueueCommand_Occurs 8914
#define P_EXECUTE_STEP 8915
#define P_SUSPEND_STEP 8916
#define P_HOLD_STEP 8917
#define P_STOP_STEP 8918
#define P_EXECUTE_Error_STEP 8919
#define P_SUSPEND_Error_STEP 8920
#define P_HOLD_Error_STEP 8921
#define P_STOP_Error_STEP 8922
#define P_Queue_Enqueue_Command 8923
#define P_Queue_Enqueue_return 8924
#define P_Queue_Dequeue_Command 8925
#define P_Queue_Dequeue_return 8926
#define P_Queue_Peek_Command 8927
#define P_Dequeue_Log 8928
#define P_Dummy_Dequeue 8948
#define P_Queue_Command_Status 8949
#define P_Queue_Process_Command 8950
#define P_Queue_Process_Status 8951
#define P_Coord_Test 8952
#define P_Coord_Test3 8953
#define P_Coord_Test2 8954
#define P_Coord_Motion_Prog_Down_Entering_Bit 8955
#define P_PMAC_Coord_Status_Bit 8956
#define P_Coord_Down_Check_Bit 8957
#define P_PMAC_Coord_Down_Inspection_Flag 8958
#define P_PMAC_Coord_Down_Num 8959
#define P_PMAC_Coord_Error_Status 8960
#define P_Motor_Current_Pos 8961
#define P_Axis_Scale_Value 9011
#define P_Except_Return_Array 9061
#define P_Hold_Memory 9161
#define P_Suspend_Memory 9166
#define P_Execute_Memory 9171
#define P_Stop_Memory 9176
#define P_PLC01_Process_Function_Enter_Flag 9181
#define P_PLC01_SubMotion_Active 9182
#define P_PLC01_SlaveMotion_Active 9183
#define P_EXECUTE_Isenable_MNTR 9184
#define P_EXECUTE_IsEnable_Firt_Stacking_Flag 9185
#define P_PLC01_Execute_Retry_Sepa_Mode_Count 9186
#define P_SUSPEND_MNTR 9187
#define P_SUSPEND_MNTR_2 9188
#define P_Execute_Last_Run_Flag 9189
#define P_Suspend_ARC_Request_Flag 9190
#define P_Hold_Queue_Exist_Insp_MNTR 9191
#define P_CirQueue_Status_Value 9192
#define P_Debug_CirQueue_Status 9193
#define P_Front_Index 9194
#define P_Rear_Index 9195
#define P_Index_Max 9196
#define P_CircularQueue_Command_array 9197
#define P_CirQueue_Length 9208
#define P_Queue_Full 9209
#define P_Queue_Empty 9210
#define P_Queue_PeekEmpty 9211
#define P_Self_items 9212
#define P_Hold_Resume_Need_Flag 9213
#define M_Y_A_Site_Heart_Bit 5014
#define M_X_PLC_Anode_Sheet_Ready2 4010
#define M_X_PLC_Cathode_Sheet_Ready2 4011
#define M_X_B_Site_Heart_Bit 4014
#define P_Stack_Heart_Bit_Timer 9214
#define P_Stack_Heart_Bit_Calc 9215
#define P_Stack_Heart_Bit_Sync_State_Machine 9216
#define P_Pause_Anode_MNTR_Min_Trigger 9217
#define P_Pause_Anode_MNTR_Max_Trigger 9218
#define P_Pause_Cathode_MNTR_Min_Trigger 9219
#define P_Pause_Cathode_MNTR_Max_Trigger 9220
#define P_Pause_Protect_Variable 9221
#define P_Resume_Protect_Variable 9222
#define P_Sepa_Mode_Opposite_Resume_Free 9223
#define P_Sepa_To_Normal_Mode_Sync_Flag 9224
#define P_Sepa_To_Normal_Mode_Sync_Err_Avoid 9225
#define P_Pause_Time_Flag 9226
#define P_Puase_Resume_Time_Check 9227
#define P_Pause_To_Resume_Time 9228
#define P_Pause_Error_Avoid_Count 9229
#define P_Pause_Error_Debug_Flag 9230
#define P_Pause_Error_Debug_P_PMAC_status 9231
#define P_Pause_Error_Debug_M_Y_Pause_Cathode_Signal 9232
#define P_Pause_Error_Debug_M_Y_Pause_Anode_Signal 9233
#define P_Pause_Error_Debug_M_Y_Pause_Status_Complete_Signal 9234
#define P_Pause_Error_Debug_P_Sepa_To_Normal_Mode_Sync_Err_Avoid 9235
#define P_Pause_Error_Debug_P_Master_Motion_Trigger 9236
#define P_Pause_Error_Debug_M_X_Opposite_Resume_Not_Free 9237
#define P_Pause_Error_Debug_P_Opposite_Lane_P_PMAC_Status 9238
#define P_Pause_Error_Debug_M_X_Pause_Status_Complete_Signal 9239
#define P_Pause_Error_Debug_M_X_PLC_Sync_Heart_Bit 9240
#define P_Pause_Error_Debug_P_Old_X_PLC_Sync_Heart_Bit 9241
#define P_Pause_Error_Debug_Buffer_P_PMAC_status 9242
#define P_Pause_Error_Debug_Buffer_M_Y_Pause_Cathode_Signal 9243
#define P_Pause_Error_Debug_Buffer_M_Y_Pause_Anode_Signal 9244
#define P_Pause_Error_Debug_Buffer_M_Y_Pause_Status_Complete_Signal 9245
#define P_Pause_Error_Debug_Buffer_P_Sepa_To_Normal_Mode_Sync_Err_Avoid 9246
#define P_Pause_Error_Debug_Buffer_P_Master_Motion_Trigger 9247
#define P_Pause_Error_Debug_Buffer_M_X_Opposite_Resume_Not_Free 9248
#define P_Pause_Error_Debug_Buffer_P_Opposite_Lane_P_PMAC_Status 9249
#define P_Pause_Error_Debug_Buffer_M_X_Pause_Status_Complete_Signal 9250
#define P_Pause_Error_Debug_Buffer_M_X_PLC_Sync_Heart_Bit 9251
#define P_Pause_Error_Debug_Buffer_P_Old_X_PLC_Sync_Heart_Bit 9252
#define P_Recipe_1st_MotorNo 9253
#define P_Recipe_2nd_MotorNo 9303
#define P_Recipe_3rd_MotorNo 9353
#define P_Recipe_4th_MotorNo 9403
#define P_Recipe_5th_MotorNo 9453
#define P_Recipe_6th_MotorNo 9503
#define P_X_Axis_Num 9553
#define P_Y_Axis_Num 9554
#define P_Z_Axis_Num 9555
#define P_ZZ_Axis_Num 9556
#define P_X_Unit 9557
#define P_Y_Unit 9558
#define P_Z_Unit 9559
#define P_ZZ_Unit 9560
#define P_Pos_Memory_Bit_Save 9561
#define P_Total_Unit_Bit 9562
#define P_Total_Unit_Pos 9563
#define P_Anode_1st_Unit_Status 9564
#define P_Anode_2nd_Unit_Status 9565
#define P_Anode_CLP_Unit_Status 9566
#define P_FinalRoll_Unit_Status 9567
#define P_StackTable_Unit_Status 9568
#define P_Cathode_CLP_Unit_Status 9569
#define P_Cathode_2nd_Unit_Status 9570
#define P_Cathode_1st_Unit_Status 9571
#define P_1st_Unloader_Unit_Status 9572
#define P_Cathode_NG_PNP_Status 9573
#define P_Anode_NG_PNP_Status 9574
#define P_Unit_integrated_Status 9575
#define P_Unit_Status_Update_Flag 9576
#define P_Memory_Tower_Search_Flag 9577
#define P_MemTow_integrated_return 9578
#define P_Error_STMS_Memory_Tower_Status 9579
#define P_STMS_Memory_Tower_Status 9580
#define P_Recipe_M01_POS 9581
#define P_Recipe_M02_POS 9592
#define P_Recipe_M03_POS 9603
#define P_Recipe_M04_POS 9614
#define P_Recipe_M05_POS 9625
#define P_Recipe_M06_POS 9636
#define P_Recipe_M07_POS 9647
#define P_Recipe_M08_POS 9658
#define P_Recipe_M09_POS 9669
#define P_Recipe_M10_POS 9680
#define P_Recipe_M11_POS 9691
#define P_Recipe_M12_POS 9702
#define P_Recipe_M13_POS 9713
#define P_Recipe_M14_POS 9724
#define P_Recipe_M15_POS 9735
#define P_Recipe_M16_POS 9746
#define P_Recipe_M17_POS 9757
#define P_Recipe_M18_POS 9768
#define P_Recipe_M19_POS 9779
#define P_Recipe_M20_POS 9790
#define P_Recipe_M21_POS 9801
#define P_Recipe_M22_POS 9812
#define P_Recipe_M23_POS 9823
#define P_Recipe_M24_POS 9834
#define P_Recipe_M25_POS 9845
#define P_Recipe_M26_POS 9856
#define P_Recipe_M27_POS 9867
#define P_Recipe_M28_POS 9878
#define P_Recipe_M29_POS 9889
#define P_Recipe_M30_POS 9900
#define P_Recipe_M31_POS 9911
#define P_Recipe_M32_POS 9922
#define P_Recipe_M33_POS 9933
#define P_Recipe_M34_POS 9944
#define P_Recipe_M35_POS 9955
#define P_Recipe_M36_POS 9966
#define P_Recipe_M37_POS 9977
#define P_Recipe_M38_POS 9988
#define P_Recipe_M39_POS 9999
#define P_Recipe_M40_POS 10010
#define P_Recipe_M41_POS 10021
#define P_Recipe_M42_POS 10032
#define P_Recipe_M43_POS 10043
#define P_Recipe_M44_POS 10054
#define P_Recipe_M45_POS 10065
#define P_Recipe_M46_POS 10076
#define P_Recipe_M47_POS 10087
#define P_Recipe_M48_POS 10098
#define P_Recipe_M49_POS 10109
#define P_Recipe_M50_POS 10120
#define P_Memory_Tower_X_Err_Flag 10131
#define P_Memory_Tower_Y_Err_Flag 10132
#define P_Memory_Tower_Z_Err_Flag 10133
#define P_Memory_Tower_ZZ_Err_Flag 10134
#define P_CA_Clamp_Cell_Down_Pos 10135
#define P_AN_Clamp_Cell_Down_Pos 10136
#define P_Error_X_Axis_Packml 10137
#define P_Error_X_Axis_Dequeue 10143
#define P_Error_X_Axis_Num 10149
#define P_Memory_Tower_Err_Pos_X_Save 10155
#define P_Error_Y_Axis_Packml 10161
#define P_Error_Y_Axis_Dequeue 10167
#define P_Error_Y_Axis_Num 10173
#define P_Memory_Tower_Err_Pos_Y_Save 10179
#define P_Error_Z_Axis_Packml 10185
#define P_Error_Z_Axis_Dequeue 10191
#define P_Error_Z_Axis_Num 10197
#define P_Memory_Tower_Err_Pos_Z_Save 10203
#define P_Error_ZZ_Axis_Packml 10209
#define P_Error_ZZ_Axis_Dequeue 10215
#define P_Error_ZZ_Axis_Num 10221
#define P_Memory_Tower_Err_Pos_ZZ_Save 10227
#define P_PNP_Abort_Use_Bit 10233
#define P_PNP_Abort_Use_Total_Bit 10234
#define P_C_1st_PNP_FWD_Abort_Use_Bit 10235
#define P_C_1st_PNP_BWD_Abort_Use_Bit 10236
#define P_C_2nd_PNP_FWD_Abort_Use_Bit 10237
#define P_C_2nd_PNP_BWD_Abort_Use_Bit 10238
#define P_A_1st_PNP_FWD_Abort_Use_Bit 10239
#define P_A_1st_PNP_BWD_Abort_Use_Bit 10240
#define P_A_2nd_PNP_FWD_Abort_Use_Bit 10241
#define P_A_2nd_PNP_BWD_Abort_Use_Bit 10242
#define P_Single_Motor_Control_Bit 10243
#define P_C_1st_PNP_FWD_Abort_Calc_Bit 10244
#define P_C_1st_PNP_BWD_Abort_Calc_Bit 10245
#define P_C_2nd_PNP_FWD_Abort_Calc_Bit 10246
#define P_C_2nd_PNP_BWD_Abort_Calc_Bit 10247
#define P_A_1st_PNP_FWD_Abort_Calc_Bit 10248
#define P_A_1st_PNP_BWD_Abort_Calc_Bit 10249
#define P_A_2nd_PNP_FWD_Abort_Calc_Bit 10250
#define P_A_2nd_PNP_BWD_Abort_Calc_Bit 10251
#define P_C_1st_PNP_FWD_Cur_Pos 10252
#define P_C_1st_PNP_FWD_Cur_Vel 10253
#define P_C_1st_PNP_BWD_Cur_Pos 10254
#define P_C_1st_PNP_BWD_Cur_Vel 10255
#define P_C_2nd_PNP_FWD_Cur_Pos 10256
#define P_C_2nd_PNP_FWD_Cur_Vel 10257
#define P_C_2nd_PNP_BWD_Cur_Pos 10258
#define P_C_2nd_PNP_BWD_Cur_Vel 10259
#define P_A_1st_PNP_FWD_Cur_Pos 10260
#define P_A_1st_PNP_FWD_Cur_Vel 10261
#define P_A_1st_PNP_BWD_Cur_Pos 10262
#define P_A_1st_PNP_BWD_Cur_Vel 10263
#define P_A_2nd_PNP_FWD_Cur_Pos 10264
#define P_A_2nd_PNP_FWD_Cur_Vel 10265
#define P_A_2nd_PNP_BWD_Cur_Pos 10266
#define P_A_2nd_PNP_BWD_Cur_Vel 10267
#define P_C_1st_PNP_FWD_Limit_Pos 10268
#define P_C_1st_PNP_BWD_Limit_Pos 10269
#define P_C_2nd_PNP_FWD_Limit_Pos 10270
#define P_C_2nd_PNP_BWD_Limit_Pos 10271
#define P_A_1st_PNP_FWD_Limit_Pos 10272
#define P_A_1st_PNP_BWD_Limit_Pos 10273
#define P_A_2nd_PNP_FWD_Limit_Pos 10274
#define P_A_2nd_PNP_BWD_Limit_Pos 10275
#define P_C_1st_PNP_FWD_Max_Limit_Pos 10276
#define P_C_1st_PNP_BWD_Max_Limit_Pos 10277
#define P_C_2nd_PNP_FWD_Max_Limit_Pos 10278
#define P_C_2nd_PNP_BWD_Max_Limit_Pos 10279
#define P_A_1st_PNP_FWD_Max_Limit_Pos 10280
#define P_A_1st_PNP_BWD_Max_Limit_Pos 10281
#define P_A_2nd_PNP_FWD_Max_Limit_Pos 10282
#define P_A_2nd_PNP_BWD_Max_Limit_Pos 10283
#define P_C_1st_PNP_FWD_Remain_Stroke 10284
#define P_C_1st_PNP_BWD_Remain_Stroke 10285
#define P_C_2nd_PNP_FWD_Remain_Stroke 10286
#define P_C_2nd_PNP_BWD_Remain_Stroke 10287
#define P_A_1st_PNP_FWD_Remain_Stroke 10288
#define P_A_1st_PNP_BWD_Remain_Stroke 10289
#define P_A_2nd_PNP_FWD_Remain_Stroke 10290
#define P_A_2nd_PNP_BWD_Remain_Stroke 10291
#define P_C_1st_PNP_FWD_Stroke_Time 10292
#define P_C_1st_PNP_BWD_Stroke_Time 10293
#define P_C_2nd_PNP_FWD_Stroke_Time 10294
#define P_C_2nd_PNP_BWD_Stroke_Time 10295
#define P_A_1st_PNP_FWD_Stroke_Time 10296
#define P_A_1st_PNP_BWD_Stroke_Time 10297
#define P_A_2nd_PNP_FWD_Stroke_Time 10298
#define P_A_2nd_PNP_BWD_Stroke_Time 10299
#define P_C_1st_PNP_FWD_Max_Speed 10300
#define P_C_1st_PNP_BWD_Max_Speed 10301
#define P_C_2nd_PNP_FWD_Max_Speed 10302
#define P_C_2nd_PNP_BWD_Max_Speed 10303
#define P_A_1st_PNP_FWD_Max_Speed 10304
#define P_A_1st_PNP_BWD_Max_Speed 10305
#define P_A_2nd_PNP_FWD_Max_Speed 10306
#define P_A_2nd_PNP_BWD_Max_Speed 10307
#define P_C_1st_PNP_FWD_ACC_Dis 10308
#define P_C_1st_PNP_BWD_ACC_Dis 10309
#define P_C_2nd_PNP_FWD_ACC_Dis 10310
#define P_C_2nd_PNP_BWD_ACC_Dis 10311
#define P_A_1st_PNP_FWD_ACC_Dis 10312
#define P_A_1st_PNP_BWD_ACC_Dis 10313
#define P_A_2nd_PNP_FWD_ACC_Dis 10314
#define P_A_2nd_PNP_BWD_ACC_Dis 10315
#define P_C_1st_PNP_FWD_AbortTa 10316
#define P_C_1st_PNP_FWD_AbortTs 10317
#define P_C_1st_PNP_BWD_AbortTa 10318
#define P_C_1st_PNP_BWD_AbortTs 10319
#define P_C_2nd_PNP_FWD_AbortTa 10320
#define P_C_2nd_PNP_FWD_AbortTs 10321
#define P_C_2nd_PNP_BWD_AbortTa 10322
#define P_C_2nd_PNP_BWD_AbortTs 10323
#define P_A_1st_PNP_FWD_AbortTa 10324
#define P_A_1st_PNP_FWD_AbortTs 10325
#define P_A_1st_PNP_BWD_AbortTa 10326
#define P_A_1st_PNP_BWD_AbortTs 10327
#define P_A_2nd_PNP_FWD_AbortTa 10328
#define P_A_2nd_PNP_FWD_AbortTs 10329
#define P_A_2nd_PNP_BWD_AbortTa 10330
#define P_A_2nd_PNP_BWD_AbortTs 10331
#define P_C_1st_PNP_FWD_Abort_Dec_Offset 10332
#define P_C_1st_PNP_BWD_Abort_Dec_Offset 10333
#define P_C_2nd_PNP_FWD_Abort_Dec_Offset 10334
#define P_C_2nd_PNP_BWD_Abort_Dec_Offset 10335
#define P_A_1st_PNP_FWD_Abort_Dec_Offset 10336
#define P_A_1st_PNP_BWD_Abort_Dec_Offset 10337
#define P_A_2nd_PNP_FWD_Abort_Dec_Offset 10338
#define P_A_2nd_PNP_BWD_Abort_Dec_Offset 10339
#define P_1st_PNP_FWD_Abort_Offset 10340
#define P_1st_PNP_BWD_Abort_Offset 10430
#define P_2nd_PNP_FWD_Abort_Offset 10520
#define P_2nd_PNP_BWD_Abort_Offset 10610
#define P_Abort_Init_Value 10700
#define P_C_1st_PNP_FWD_AbortTa_Buffer 10701
#define P_C_1st_PNP_FWD_AbortTs_Buffer 10702
#define P_C_1st_PNP_BWD_AbortTa_Buffer 10703
#define P_C_1st_PNP_BWD_AbortTs_Buffer 10704
#define P_C_2nd_PNP_FWD_AbortTa_Buffer 10705
#define P_C_2nd_PNP_FWD_AbortTs_Buffer 10706
#define P_C_2nd_PNP_BWD_AbortTa_Buffer 10707
#define P_C_2nd_PNP_BWD_AbortTs_Buffer 10708
#define P_A_1st_PNP_FWD_AbortTa_Buffer 10709
#define P_A_1st_PNP_FWD_AbortTs_Buffer 10710
#define P_A_1st_PNP_BWD_AbortTa_Buffer 10711
#define P_A_1st_PNP_BWD_AbortTs_Buffer 10712
#define P_A_2nd_PNP_FWD_AbortTa_Buffer 10713
#define P_A_2nd_PNP_FWD_AbortTs_Buffer 10714
#define P_A_2nd_PNP_BWD_AbortTa_Buffer 10715
#define P_A_2nd_PNP_BWD_AbortTs_Buffer 10716
#define P_C_1st_PNP_FWD_Restore_Bit 10717
#define P_C_1st_PNP_BWD_Restore_Bit 10718
#define P_C_2nd_PNP_FWD_Restore_Bit 10719
#define P_C_2nd_PNP_BWD_Restore_Bit 10720
#define P_A_1st_PNP_FWD_Restore_Bit 10721
#define P_A_1st_PNP_BWD_Restore_Bit 10722
#define P_A_2nd_PNP_FWD_Restore_Bit 10723
#define P_A_2nd_PNP_BWD_Restore_Bit 10724
#define P_Align_Inspection_Time 10725
#define P_Front_Inspection_Time 10726
#define P_Stack_Inspection_Time 10727
#define P_Existence_Inspection_Time 10728
#define P_EmptyTable_Inspection_Time 10729
#define P_FirstSepa_Inspection_Time 10730
#define P_Vision_Anode_Sepa_Mode_Stack_Command 10731
#define P_Vision_Cathode_Sepa_Mode_Stack_Command 10732
#define P_Cathode_Sepa_Mode_Timer 10733
#define P_Anode_Sepa_Mode_Timer 10734
#define P_Vision_Pass 10735
#define P_FirstSepa_Ret 10736
#define P_Vision_Align_Command 10737
#define P_Vision_Surface_Command 10738
#define P_Vision_Stack_Command 10739
#define P_Vision_Existence_Command 10740
#define P_Vision_EmptyTable_Command 10741
#define P_Vision_FirstSepa_Command 10742
#define P_Selected_Align_Inspection_Unit 10743
#define P_Selected_Surface_Inspection_Unit 10744
#define P_Selected_Stack_Inspection_Unit 10745
#define P_Selected_Existence_Inspection_Unit 10746
#define P_Selected_EmptyTable_Inspection_Unit 10747
#define P_Set_Cathode_Align_Zero_Pos 10748
#define P_Set_Anode_Align_Zero_Pos 10749
#define P_Vision_Align_State_Machine 10750
#define P_Vision_Surface_State_Machine 10751
#define P_Vision_Stack_State_Machine 10752
#define P_Vision_Existence_State_Machine 10753
#define P_Vision_EmptyTable_State_Machine 10754
#define P_Vision_FirstSepa_State_Machine 10755
#define P_Vision_Align_Status 10756
#define P_Vision_Surface_Status 10757
#define P_Vision_Stack_Status 10758
#define P_Vision_Existence_Status 10759
#define P_Vision_EmptyTable_Status 10760
#define P_Vision_FirstSepa_Status 10761
#define P_Align_Zero_Move_Start_Flag 10762
#define P_Cathode_Align_Table_Move 10764
#define P_Anode_Align_Table_Move 10765
#define P_Vision_Anode_Cell_Existence 10766
#define P_Vision_Cathode_Cell_Existence 10767
#define P_Align_Sheet_CHK 10768
#define P_Anode_NG_Code 10769
#define P_Cathode_NG_Code 10770
#define P_Stack_NG_Code 10771
#define P_Cathode_Align_Continuous_NG_Alarm_Flag 10772
#define P_Anode_Align_Continuous_NG_Alarm_Flag 10773
#define P_Cathode_Retry_Continuous_NG_Alarm_Flag 10774
#define P_Anode_Retry_Continuous_NG_Alarm_Flag 10775
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
#define P_Stop_Debug_Flag 10776
#define P_Stop_Sub_Master_Motion_Program_Flag 10777
#define P_Stop_Slave_Motion_Program_Flag 10797
#define P_Stop_Motor_Status 10817
#define P_Stop_Coord_Status 10865
#define P_Stop_Status_Check_Address 10899
#define P_Stop_Status_Save_Address 10900
#define P_Stop_Check_RTN 10901
#define P_Stop_Save_RTN 10902
#define P_Old_Total_Unit_Bit 10906
#define P_Memory_Tower_Dec_Result 10907
#define P_Stop_Motor_Pos 10908
#define P_PNP_Move_Timer 10917
#define P_PNP_Move_Delay_Time 10918
#define P_Stop_Memory_Pos_RTN 10919
#define P_Slave1_Motion_Command 10920
#define P_Slave2_Motion_Command 10921
#define P_Slave3_Motion_Command 10922
#define P_Slave4_Motion_Command 10923
#define P_Slave5_Motion_Command 10924
#define P_Slave6_Motion_Command 10925
#define P_Slave7_Motion_Command 10926
#define P_Slave8_Motion_Command 10927
#define P_Slave9_Motion_Command 10928
#define P_Slave10_Motion_Command 10929
#define P_Slave11_Motion_Command 10930
#define P_Slave12_Motion_Command 10931
#define P_Slave13_Motion_Command 10932
#define P_Slave14_Motion_Command 10933
#define P_Slave15_Motion_Command 10934
#define P_Slave16_Motion_Command 10935
#define P_Slave17_Motion_Command 10936
#define P_Slave18_Motion_Command 10937
#define P_Slave19_Motion_Command 10938
#define P_Slave20_Motion_Command 10939
#define P_PNP_90_Deg_TM 10940
#define P_PNP_90_Deg_TA 10941
#define P_PNP_90_Deg_TS 10942
#define P_PNP_Ready_TM 10943
#define P_PNP_Ready_TA 10944
#define P_PNP_Ready_TS 10945
#define P_PNP_45_Deg_TM 10946
#define P_PNP_45_Deg_TA 10947
#define P_PNP_45_Deg_TS 10948
#define P_Unloader_TM_Test 10949
#define P_Unloader_TA_Test 10950
#define P_PROG_21_Program_Ver 2781
#define P_PROG_23_Program_Ver 2783
#define P_PROG_24_Program_Ver 2784
#define P_PROG_25_Program_Ver 2785
#define P_PROG_26_Program_Ver 2786
#define P_PROG_27_Program_Ver 2787
#define P_PROG_28_Program_Ver 2788
#define P_PROG_30_Program_Ver 2790
#define P_Master_Motion_Trigger 10951
#define P_Parity_Bit 10952
#define P_Master_Move 10953
#define P_Master_TA 10954
#define P_Master_TS 10955
#define P_Master_TM 10956
#define P_Anode_Count 10957
#define P_Cathode_Count 10958
#define P_Anode_Thickness 10959
#define P_Cathode_Thickness 10960
#define P_Sepa_Thickness 10961
#define P_Anode_Thickness_PLC 10962
#define P_Cathode_Thickness_PLC 10963
#define P_Sepa_Thickness_PLC 10964
#define P_Old_P_Anode_TR1_Master_Motion_Trigger 10965
#define P_Old_P_Cathode_TR1_Master_Motion_Trigger 10981
#define P_Anode_TR1_Old_Mode 10997
#define P_Cathode_TR1_Old_Mode 11013
#define P_Older_Than_P_Anode_TR1_Old_Mode 11029
#define P_Older_Than_P_Cathode_TR1_Old_Mode 11045
#define P_Older_Than_P_Sequence_Old_P_Anode_TR1_Current_Mode_Trigger 11061
#define P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Current_Mode_Trigger 11077
#define P_Old_P_Anode_TR1_Mode_Command 11093
#define P_Old_P_Cathode_TR1_Mode_Command 11109
#define P_Older_Than_P_Old_P_Anode_TR1_Mode_Command 11125
#define P_Older_Than_P_Old_P_Cathode_TR1_Mode_Command 11141
#define P_Older_Than_P_Sequence_Old_P_Anode_TR1_Mode_Command_Trigger 11157
#define P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Mode_Command_Trigger 11173
#define P_Old_P_Anode_TR1_PMAC_Status 11189
#define P_Old_P_Cathode_TR1_PMAC_Status 11205
#define P_Older_Than_P_Old_P_Anode_TR1_PMAC_Status 11221
#define P_Older_Than_P_Old_P_Cathode_TR1_PMAC_Status 11237
#define P_Old_P_Slave1_Motion_Command 11253
#define P_Old_P_Slave10_Motion_Command 11269
#define P_Old_Slave1_P_SubMaster_Sub_Mode_Command 11285
#define P_Old_Slave10_P_SubMaster_Sub_Mode_Command 11301
#define P_Sequence_Old_P_Current_Mode_Trigger 11317
#define P_Sequence_Old_Mode 11333
#define P_Sequence_Old_P_Mode_Command 11349
#define P_Sequence_Old_P_Mode_Command_Trigger 11365
#define P_SubMaster_Sub_Old_Mode 11381
#define P_SubMaster_Sub_Old_Command 11397
#define P_SubMaster_Sub_Mode_Command 11413
#define P_SubMaster_Sub_Old_Trigger 11429
#define P_InterLock_No3_Array 11445
#define P_Old_InterLock_No3_Array 11461
#define P_Mode_Err 11477
#define P_Spool_Enable 11482
#define P_Cathode_1St_Flow_Chart_Bit_Flag 11483
#define P_Cathode_AT_Flow_Chart_Bit_Flag 11484
#define P_Cathode_2nd_Flow_Chart_Bit_Flag 11485
#define P_Anode_Clamp_Flow_Chart_Bit_Flag 11486
#define P_Final_Roll_Flow_Chart_Bit_Flag 11487
#define P_Stack_Table_Flow_Chart_Bit_Flag 11488
#define P_Cathode_Clamp_Flow_Chart_Bit_Flag 11489
#define P_Anode_2nd_Flow_Chart_Bit_Flag 11490
#define P_Anode_AT_Flow_Chart_Bit_Flag 11491
#define P_Anode_1St_Flow_Chart_Bit_Flag 11492
#define P_Sepa_Unwinder_Flow_Chart_Bit_Flag 11493
#define P_Slave5_Target_Z_For_Cutting 11494
#define P_Slave31_Motion_Command 11495
#define P_Pause_Err_Process 11496
#define P_Pause_Err_Timer 11497
#define P_Pause_Err_Count 11498
#define P_Pause_Err_Use 11499
#define P_Pause_Err_Use2 11500
#define P_Anode_Pause_Signal_Err 11501
#define P_Cathode_Pause_Signal_Err 11502
#define P_Anode_Pause_Err 11503
#define P_Anode_Pause_Err_Count 11504
#define P_Phasing_Err 11505
#define P_Phasing_Err2 11510
#define P_Execute_Wait_Mode_Memory_Tower 11515
#define P_Execute_Vac_MNTR 11516
#define P_Old_Cathode_Cur_Mode 11517
#define P_Cathode_Run_Mode_Type 11518
#define P_Cathode_Run_Mode_Trigger 11538
#define P_Old_Anode_Cur_Mode 11558
#define P_Anode_Run_Mode_Type 11559
#define P_Anode_Run_Mode_Trigger 11579
#define P_Anode_1TR_T_Belt_To_Align 11599
#define P_Anode_1TR_T_Align_To_Belt 11600
#define P_Anode_1TR_T_Ready_Pos 11601
#define P_Anode_1TR_T_Ready_To_Align 11602
#define P_Anode_1TR_T_Ready_To_Belt 11603
#define P_Anode_Picker_Turn 11604
#define P_Anode_2TR_T_Align_To_Stack 11605
#define P_Anode_2TR_T_Stack_To_Align 11606
#define P_Anode_Clamp_Off 11607
#define P_Anode_Clamp_On 11608
#define P_Anode_Clamp_Down 11609
#define P_FR_Anode_Motion 11610
#define P_FR_Cathode_Motion 11611
#define P_Stack_Table_Down 11612
#define P_Cathode_Clamp_On 11613
#define P_Cathode_Clamp_Off 11614
#define P_Cathode_Clamp_Down 11615
#define P_Cathode_2TR_T_Align_To_Stack 11616
#define P_Cathode_2TR_T_Stack_To_Align 11617
#define P_Cathode_Picker_Turn 11618
#define P_Cathode_1TR_T_Belt_To_Align 11619
#define P_Cathode_1TR_T_Align_To_Belt 11620
#define P_Cathode_1TR_T_Ready_Pos 11621
#define P_Cathode_1TR_T_Ready_To_Align 11622
#define P_Cathode_1TR_T_Ready_To_Belt 11623
#define P_Anode_1TR_Z_Belt_To_Align 11624
#define P_Anode_1TR_Z_Align_To_Belt 11625
#define P_Anode_1TR_Z_Align_Down 11626
#define P_Anode_1TR_Z_Align_UP 11627
#define P_Anode_1TR_Z_Belt_Down 11628
#define P_Anode_1TR_Z_Belt_UP 11629
#define P_Anode_1TR_Z_Ready 11630
#define P_Anode_1TR_Z_Align_Blow 11631
#define P_Anode_1TR_Z_Belt_Vac 11632
#define P_Cathode_1TR_Z_Belt_To_Align 11633
#define P_Cathode_1TR_Z_Align_To_Belt 11634
#define P_Cathode_1TR_Z_Align_Down 11635
#define P_Cathode_1TR_Z_Align_UP 11636
#define P_Cathode_1TR_Z_Belt_Down 11637
#define P_Cathode_1TR_Z_Belt_UP 11638
#define P_Cathode_1TR_Z_Ready 11639
#define P_Cathode_1TR_Z_Align_Blow 11640
#define P_Cathode_1TR_Z_Belt_Vac 11641
#define P_Anode_2TR_Align_To_Stack 11642
#define P_Anode_2TR_Stack_To_Align 11643
#define P_Anode_2TR_Stack_Down 11644
#define P_Anode_2TR_Stack_UP 11645
#define P_Anode_2TR_Align_Down 11646
#define P_Anode_2TR_Align_UP 11647
#define P_Anode_2TR_Align_Vac 11648
#define P_Anode_2TR_Stack_Blow 11649
#define P_Anode_2TR_Stack_Sepa_Blow 11650
#define P_FR_Last_Run_Motion 11651
#define P_Servo_Dancer_Ready_Pos 11652
#define P_Servo_Dancer_Ready_Offset 11653
#define P_Servo_Dancer_Test 11654
#define P_Align_Start_IO_Judgment 11655
#define P_Driving_Clamp2 11656
#define P_Driving_Clamp 11657
#define P_MSA_Timer 11658
#define P_SM_Cathode_Stack_MSA 11659
#define P_SM_Anode_Stack_MSA 11660
#define P_SM_Cathode_Align_MSA 11661
#define P_SM_Anode_Align_MSA 11662
#define P_MSA_Interlock 11663
#define P_Anode_MSA_Final_Roll_Pos_Check 11664
#define P_Anode_MSA_2nd_PNP_Pos_Check 11665
#define P_Anode_MSA_1nd_PNP_Pos_Check 11666
#define P_MSA_Err_Save_CA_Stack_MSA 11667
#define P_MSA_Err_Save_AN_Stack_MSA 11668
#define P_MSA_Err_Save_CA_Align_MSA 11669
#define P_MSA_Err_Save_AN_Align_MSA 11670
#define P_MSA_BTN_Err 11671
#define P_Anode_Algin_MSA_RTN 11672
#define P_Anode_Algin_MSA_RTN2 11673
#define P_Cathode_Algin_MSA_RTN 11674
#define P_Cathode_Stack_MSA_RTN 11675
#define P_Anode_Stack_MSA_RTN 11676
#define P_Anode_Align_MSA_Count 11677
#define P_Cathode_Align_MSA_Count 11678
#define P_Anode_Stack_MSA_Count 11679
#define P_Cathode_Stack_MSA_Count 11680
#define P_Cathode_Align_Stop_Blocked 11681
#define P_Anode_Align_Stop_Blocked 11682
#define P_Cathode_Stack_Stop_Blocked 11683
#define P_Anode_Stack_Stop_Blocked 11684
#define P_Anode_Align_MSA_Execute_Timer 11685
#define P_Cathode_Align_MSA_Execute_Timer 11686
#define P_Anode_Stack_MSA_Execute_Timer 11687
#define P_Cathode_Stack_MSA_Execute_Timer 11688
#define P_Anode_Align_Interlock_Blocked 11689
#define P_Cathode_Align_Interlock_Blocked 11690
#define P_Anode_Stack_Interlock_Blocked 11691
#define P_Cathode_Stack_Interlock_Blocked 11692
#define P_Anode_1TR_T_Align_POS 11693
#define P_Anode_1TR_T_Belt_POS 11694
#define P_Anode_1TR_T_Ready_POS 11695
#define P_Anode_2TR_T_Align_POS 11696
#define P_Anode_2TR_T_Stack_POS 11697
#define P_Cathode_2TR_T_Align_POS 11698
#define P_Cathode_2TR_T_Stack_POS 11699
#define P_Cathode_1TR_T_Align_POS 11700
#define P_Cathode_1TR_T_Belt_POS 11701
#define P_Cathode_1TR_T_Ready_POS 11702
#define P_Seq_Abort 11703
#define P_Blocked_Abort 11704
#define P_Abort_Flag 11705
#define P_Opposite_Lane_1ST_TR_Safe_Pos 11706
#define P_Opposite_Lane_P_PMAC_Status 11707
#define P_Opposite_Lane_OFF_Not_Start 11708
#define P_Pause_Alarm_Blocked 11709
#define P_Old_Alarm_Arr 11710
#define P_Cycle_Stop_Delay_Time 11711
#define P_Cycle_Stop_Offset 11712
#define P_Opposite_Lane_Abort_Alram_Flag 11713
#define P_Cathode_Clmap_Y1_Ready_Pos 11714
#define P_Cathode_Clmap_Y1_Clamp_Pos 11715
#define P_Anode_Clmap_Y1_Ready_Pos 11716
#define P_Anode_Clmap_Y1_Clamp_Pos 11717
#define P_Cathode_Clmap_Y2_Ready_Pos 11718
#define P_Cathode_Clmap_Y2_Clamp_Pos 11719
#define P_Anode_Clmap_Y2_Ready_Pos 11720
#define P_Anode_Clmap_Y2_Clamp_Pos 11721
#define P_Cathode_Clamp_Z2_Ready_Pos 11722
#define P_Cathode_Clamp_Z2_Clamp_Pos 11723
#define P_Anode_Clamp_Z2_Ready_Pos 11724
#define P_Anode_Clamp_Z2_Clamp_Pos 11725
#define P_Cathode_Clamp_Z1_Ready_Pos 11726
#define P_Cathode_Clamp_Z1_Clamp_Pos 11727
#define P_Anode_Clamp_Z1_Ready_Pos 11728
#define P_Anode_Clamp_Z1_Clamp_Pos 11729
#define P_Cathode_Clamp_Z2_Cell_Down 11730
#define P_Anode_Clamp_Z2_Cell_Down 11731
#define P_Cathode_Clamp_Z1_Cell_Down 11732
#define P_Anode_Clamp_Z1_Cell_Down 11733
#define P_Single_Run_Pass 11734
#define P_Cathode_2nd_PNP_Sepa_Blow 11735
#define P_Cathode_2nd_PNP_Align_Blow 11736
#define P_Cathode_2nd_PNP_Stack_Blow 11737
#define P_Cathode_2nd_PNP_Align_Vac 11738
#define P_Cathode_2nd_PNP_Align_Up_Motion 11739
#define P_Cathode_2nd_PNP_Align_Down_Motion 11740
#define P_Cathode_2nd_PNP_Stack_Up_Motion 11741
#define P_Cathode_2nd_PNP_Stack_Down_Motion 11742
#define P_Cathode_2nd_PNP_Stack_To_Align_Motion 11743
#define P_Cathode_2nd_PNP_Align_To_Stack_Motion 11744
#define P_Door_Open_Stop_Count 11745
#define P_Buf_Stack_NG_Flag 11746
#define P_Stop_1st_PNP_Move 11747
#define P_Seq_Abort_Timer 11748
#define P_Sync_Test 11749
#define P_Dry_Pause_Flag 11750
#define P_Dry_Run_Pasue_Timer 11751
#define P_Resume_Stop_Blocked 11752
#define P_Discharge_Wait 11753
#define P_Command_Run_Flag 11754
#define P_Stop_Cmd_Origin 11755
#define P_Stop_Origin_Save 11756
#define P_Old_M_Y_Sepa_Cutter_SSR_On 11771
#define P_Sepa_Cutter_SSR_Off_Time 11772
#define P_Sepa_Cutter_SSR_Off 11773
#define P_Sepa_Cutter_SSR_Off_Timer 11774
#define P_Starting_Pause_IO_Flag 11775
#define P_PLC03_Seq_Pause_Start_Flag 11776
#define P_PLC03_Seq_Pause_Start_State_Machine 11777
#define P_PLC03_Seq_Pause_Start_Status 11778
#define P_ARC_NP_Push_BTN 11779
#define P_ARC_UI_Push_BTN 11780
#define P_M_Manual_ARC_BTN 11781
#define P_Two_Btn_Active_Flag 11782
#define P_Two_Btn_Interlock_Time 11783
#define P_NP_Unwinder_Active_Hold 11784
#define P_MAX_KGF 11785
#define P_KGF_TO_DAC_RATIO 11786
#define P_Dac_Out_Value 11787
#define P_Recipe_Dancer_input_kgf 11788
#define P_Cathode_NG_PNP_Vel_Zero_Set 11789
#define P_Anode_NG_PNP_Vel_Zero_Set 11790
#define P_NG_Box_Open_Popup_Flag 11791
#define P_Anode_Run_DR 11792
#define P_Cathode_Run_DR 11793
#define P_1st_UND_Grip_Time 11794
#define P_1st_UND_Grip_Time_offset 11795
#define P_1st_UND_Grip_Time_offset2 11796
#define P_First_Sepa_Driving_Use 11797
#define P_First_Sepa_Driving_Timing 11798
#define P_Unloader_Safe_rtn 11799
#define P_Final_Start 11800
#define P_Driving_Start 11801
#define P_Starting_Pause_IO_OFF_Flag 11802
#define P_individual_Hold_return 11803
#define P_individual_Hold_return2 11804
#define P_Tension_Ready_Pass 11805
#define P_Discharge_cal_rtn 11806
#define P_Old_Tact_Current_Mode 11807
#define P_Sheet_Clear 11808
#define P_Anode_Clamp_On_Time2 11809
#define P_Anode_Clamp_On_Time 11810
#define P_Cathode_Clamp_On_Time 11811
#define P_Cathode_Clamp_On_Time2 11812
#define P_Offset 11813
#define P_Man_C 11814
#define P_NG_Box_Stop_Use 11815
#define P_SlewTime 11816
#define P_Old_SlewTime 11817
#define P_Resume_MNTR1 11818
#define P_Resume_MNTR2 11819
#define P_Resume_MNTR3 11820
#define P_Resume_MNTR4 11821
#define P_Resume_MNTR5 11822
#define P_Resume_MNTR6 11823
#define P_Resume_MNTR7 11824
#define P_Resume_MNTR8 11825
#define P_Resume_MNTR9 11826
#define P_Resume_MNTR10 11827
#define P_Resume_MNTR11 11828
#define P_Resume_MNTR12 11829
#define P_old_P_Anode_Count 11830
#define P_Sheet_Paper_BWD_Count 11831
#define P_Stop_CHK 11832
#define P_Seq_Pause 11833
#define P_Seq_Pause2 11834
#define P_MSA_TimeBase_Rtn 11835
#define P_Old_Vison_Read_EPC_Camera_Move_Request 11836
#define P_First_Sepa_Time_Out_Count 11837
#define P_Align_Retry_Cal_RTN 11838
#define P_Sheet_Err 11839
#define P_Driving_Cal 11855
#define P_Driving_End_Pos 11856
#define P_Driving_Start_Pos 11857
#define P_Drivig_Cal_Save 11858
#define P_Anode_Align_Blow 11863
#define P_Cathode_Align_Blow 11864
#define P_PMAC_Status_Arr_Save1 11865
#define P_HomePos_Save1 11870
#define P_PMAC_Status_Arr_Save2 11875
#define P_HomePos_Save2 11880
#define P_PMAC_Status_Arr_Save3 11885
#define P_HomePos_Save3 11890
#define P_PMAC_Status_Arr_Save4 11895
#define P_HomePos_Save4 11900
#define P_Home_Pos_Err_Cnt1 11905
#define P_Home_Pos_Err_Cnt2 11906
#define P_Home_Pos_Err_Cnt3 11907
#define P_Home_Pos_Err_Cnt4 11908
#define P_Align_Inspection_Delay 11909
#define P_HomePos_Err 11910
#define P_Anode_Sheet_Test 11915
#define P_Cathode_Sheet_Test 11916
#define P_Anode_Sheet_Interlock_Timing 11917
#define P_Cathode_Sheet_Interlock_Timing 11918
#define P_Discharge_Err_MNTR 11919
#define P_Arc_Err_MNTR 11920
#define P_Abort_Cnt 11921
#define P_EMO_Cnt 11922
#define P_Dry_Run_Inspection 11923
#define P_Servo_ON_MNTR1 11924
#define P_Servo_ON_MNTR2 11925
#define P_Servo_ON_MNTR3 11926
#define P_Servo_ON_MNTR4 11927
#define P_Servo_ON_MNTR5 11928
#define P_Servo_ON_MNTR6 11929
#define P_Servo_ON_MNTR7 11930
#define P_Servo_ON_MNTR8 11931
#define P_Servo_ON_MNTR9 11932
#define P_Servo_ON_MNTR10 11933
#define P_Servo_ON_MNTR11 11934
#define P_Servo_ON_MNTR12 11935
#define P_Servo_ON_MNTR13 11936
#define P_Servo_ON_MNTR14 11937
#define P_Servo_ON_MNTR15 11938
#define P_Servo_ON_MNTR16 11939
#define P_Servo_ON_MNTR17 11940
#define P_Servo_ON_MNTR18 11941
#define P_Servo_ON_MNTR19 11942
#define P_Servo_ON_MNTR20 11943
#define P_Servo_ON_MNTR21 11944
#define P_Servo_ON_MNTR22 11945
#define P_Servo_ON_MNTR23 11946
#define P_Servo_ON_MNTR24 11947
#define P_Servo_ON_MNTR25 11948
#define P_Servo_ON_MNTR26 11949
#define P_Servo_ON_MNTR27 11950
#define P_Servo_ON_MNTR28 11951
#define P_Servo_ON_MNTR29 11952
#define P_Servo_ON_MNTR30 11953
#define P_X_IO_WinMess_Connect_BTN 11954
#define P_Ecat_ReConnetion_State_Machine 11955
#define P_Ecat_Reconnection_Timer 11956
#define P_Y_Ecat_Reconnecting 11957
#define P_Y_Ecat_ReConnection_Fail 11958
#define P_Y_Ecat_ReConnection_Complete 11959
#define P_X_Ecat_Reconnection_BTN 11960
#define P_X_PLC_Setup_Mode_Check 11961
#define P_Interlock_On_Off_Flag 11962
#define P_X_Old_MC_Reconnect_BTN_Signal 11963
#define P_BTN_1st_ULD_Data_Clear 11964
#define P_Old_BTN_1st_ULD_Data_Clear 11965
#define P_Old_M_Y_1st_Unloader_UnGrip_Sol 11966
#define P_Sepa_Cutter_Heat_Meter 11967
#define P_Sepa_Cutter_Heating_Timer 11968
#define P_Middle_Skip_Off_Flag 11969
#define P_Stop_MNTR1 11970
#define P_Stop_MNTR2 11971
#define P_Sheet_Pos_Offset 11972
#define P_Stopping_Wait_Time 11973
#define P_Stopping_Test_Timer 11974
#define P_Cutter_FWB_Heater_Current 11975
#define P_1st_ULD_OK_Lamp 11985
#define P_1st_ULD_NG_Lamp 11986
#define P_1st_ULD_Sample_QC_Lamp 11987
#define P_Proceed_Execute_Flag 11988
#define P_Continuous_Call_Stack_NG_Flag 11989
#define P_Continuous_Call_Stack_OK_Flag 11990
#define P_Cathode_Picker_Home_Pos 11991
#define P_Anode_Picker_Home_Pos 11992
#define P_FR_Sheet_Paper_Home_Chk 11993
#define P_Align_TimeOut1 11994
#define P_Align_TimeOut2 11995
#define P_Align_TimeOut3 11996
#define P_Align_TimeOut4 11997
#define P_Align_TimeOut5 11998
#define P_Align_TimeOut6 11999
#define P_Anode_Align_OK 12000
#define P_Cathode_Align_OK 12001
#define P_Anode_Align_NG 12002
#define P_Cathode_Align_NG 12003
#define P_Anode_Align_TimeOut 12004
#define P_Cathode_Align_TimeOut 12005
#define P_Anode_Surf_OK 12006
#define P_Cathode_Surf_OK 12007
#define P_Anode_Surf_NG 12008
#define P_Cathode_Surf_NG 12009
#define P_Anode_Surf_TimeOut 12010
#define P_Cathode_Surf_TimeOut 12011
#define P_Surf_TimeOut1 12012
#define P_Surf_TimeOut2 12013
#define P_Surf_TimeOut3 12014
#define P_Surf_TimeOut4 12015
#define P_Surf_TimeOut5 12016
#define P_Surf_TimeOut6 12017
#define P_Anode_Stack_TimeOut 12018
#define P_Cathode_Stack_TimeOut 12019
#define P_Anode_Stack_OK 12020
#define P_Cathode_Stack_OK 12021
#define P_Anode_Stack_NG 12022
#define P_Cathode_Stack_NG 12023
#define P_Stack_TimeOut1 12024
#define P_Stack_TimeOut2 12025
#define P_Stack_TimeOut3 12026
#define P_Align_Move_Err 12027
#define P_Ecat_Test 12028
#define P_Scan_Time 12029
#define P_Scan_Aver 12031
#define P_Scan_MAX 12032
#define P_Cathode_1TR_Picker_T_Belt_POS 12033
#define P_Cathode_1TR_Picker_T_Align_POS 12034
#define P_Anode_1TR_Picker_T_Belt_POS 12035
#define P_Anode_1TR_Picker_T_Align_POS 12036
#define P_1TR_Picker_T_Align_POS 12037
#define P_AVRG_Lower_Sepa_Thickness_mm 12038
#define P_AVRG_Upper_Sepa_Thickness_mm 12039
#define P_PLC06_Upper_Curr_Unwinder_Thickness_mm 12040
#define P_PLC06_Lower_Curr_Unwinder_Thickness_mm 12041
#define P_Upper_Curr_Spool_Radius 12042
#define P_Lower_Curr_Spool_Radius 12043
#define P_PLC06_Curr_Upper_Distance_mm 12044
#define P_PLC06_Curr_Lower_Distance_mm 12045
#define P_Upper_Sepa_Min_Distance_mm 12046
#define P_Lower_Sepa_Min_Distance_mm 12047
#define P_PLC06_Sepa_Change_Set 12048
#define P_Upper_Sepa_To_Sensor_Min_Dis 12049
#define P_Upper_Sepa_To_Sensor_Max_Dis 12050
#define P_Upper_Sensor_To_Unwinder_Core_Dis 12051
#define P_Upper_Sensor_Min_AD 12052
#define P_Upper_Sensor_Max_AD 12053
#define P_Lower_Sepa_To_Sensor_Min_Dis 12054
#define P_Lower_Sepa_To_Sensor_Max_Dis 12055
#define P_Lower_Sensor_To_Unwinder_Core_Dis 12056
#define P_Lower_Sensor_Min_AD 12057
#define P_Lower_Sensor_Max_AD 12058
#define M_AI_Upper_Sepa_Sensing 372
#define M_AI_Lower_Sepa_Sensing 373
#define P_Status_NP_BTN_Lower_Unwinder 12059
#define P_Status_NP_BTN_Upper_Unwinder 12060
#define P_Driving_CamTable_Scale_Change_Flag 12061
#define P_FR_Driving_Diameter 12062
#define P_FR_Driving_Floating_Point 12063
#define P_FR_Driving_Reward 12064
#define P_Unwinder_Master_Following_Use_Flag 12065
#define P_Unwinder_Master_Following_On 12066
#define P_Old_Master_Following_Start 12067
#define P_Unwinder_Master_Following_Scale 12068
#define P_Unwinder_Jog_Use_Flag 12069
#define P_Old_Jog_Start 12070
#define P_Unwinder_Jog_Total_Time 12071
#define P_Unwinder_Ta 12072
#define P_Unwinder_Ts 12073
#define P_Unwinder_Tm 12074
#define P_Unwinder_1mm_Deg 12075
#define P_Unwinder_Jog_Pos 12076
#define P_Unwinder_Jog_Cnt 12077
#define P_PLC06_Frist_Flag 12078
#define P_Sepa_AI 12079
#define P_PLC06_Reel_Upper_Change_Flag 12080
#define P_PLC06_Reel_Lower_Change_Flag 12081
#define P_Spool_Ready_Enable_Flag 12082
#define P_Spool_Lack_Flag 12083
#define P_Sepa_DR_Start_Flag 12084
#define P_cdTime_Tact_Sec 12085
#define P_Master_Tact_Sec 12086
#define P_Prev_Err_Pos 12087
#define P_Cur_Arc_Rad 12088
#define P_Cur_Arc_Deg 12089
#define P_Spool_Velocity 12090
#define P_Lin_Prop_Vel 12091
#define P_Err_Pos 12092
#define P_Lin_Deriv_Vel 12093
#define P_Lin_Dacer_Kd 12094
#define P_Lin_Dacer_Kp 12095
#define P_Running_CDTimer 12096
#define P_Unwinder_Jog_Ta 12097
#define P_Unwinder_Jog_Ts 12098
#define P_Unwinder_Vel_Test_Time 12099
#define P_Set_Interval_Time 12100
#define P_PLC06_Upper_Sepa_AI_Timer 12101
#define P_PLC06_Upper_Sepa_AI_Data 12102
#define P_PLC06_Upper_Sepa_AI_Cnt 12103
#define P_PLC06_Upper_AVRG_Sensor_Data 12104
#define P_PLC06_Lower_Sepa_AI_Timer 12105
#define P_PLC06_Lower_Sepa_AI_Data 12106
#define P_PLC06_Lower_Sepa_AI_Cnt 12107
#define P_PLC06_Lower_AVRG_Sensor_Data 12108
#define P_PLC06_Sepa_Upper_Thickness_Timer 12109
#define P_PLC06_Sepa_Upper_Thickness_Data 12110
#define P_PLC06_Sepa_Upper_Thickness_Cnt 12111
#define P_PLC06_Sepa_Lower_Thickness_Timer 12112
#define P_PLC06_Sepa_Lower_Thickness_Data 12113
#define P_PLC06_Sepa_Lower_Thickness_Cnt 12114
#define P_Sepa_Thickness_Chk_Timer 12115
#define P_Spool_Length 12116
#define P_Cascade_Sf_Driving_Value 12117
#define P_Cascade_Sf_None_Driving_Value 12118
#define P_Sepa_Min_Value_Cal_Cmd 12119
#define P_Total_Sepa_Need_Length 12120
#define P_Alpa 12121
#define P_Sepa_Num_of_Turns 12122
#define P_Sepa_Turn_Num 12123
#define P_Accumulate_Value 12124
#define P_Sharft_to_Sepa_Core_mm 12125
#define P_Sepa_Cal_Circum 12126
#define P_Sepa_Min_Need_Thickness 12127
#define P_Sepa_Min_Thickness_Cmd 12128
#define P_Sepa_Accumulate_Cmd 12129
#define P_Sepa_Required_Amount 12130
#define P_Sepa_Current_Thickness 12131
#define P_Sepa_Initial_Tickness 12132
#define P_Sepa_Required_Update_Timer 12133
#define M_PLC_HeartBit_Flag 4223
#define M_X_BTN_Press_Jog_Left_From_PLC 4160
#define M_X_BTN_Press_Jog_Right_From_PLC 4107
#define P_TEST_EPC_Interlock_Auto 12134
#define P_TEST_EPC_Interlock_Manual 12135
#define P_Discharge_Total_Tact 12136
#define P_Read_Sector_TactTime 12137
#define P_Write_Sector_TactTime 12143
#define P_PLC15_Sub_Function_Dryrun_Active_Flag 12149
#define P_Sepa_Rotation_Sequence_Run_Trigger_Cnt 12150
#define P_Sepa_Mode_Sepa_Recipe_Count 12151
#define P_Discharged_After_End_Trigger 12152
#define P_Unloader_1st_Grip_Delay 12153
#define P_Separate_Cutter_Heating_Limit_Value 12154
#define P_Separate_Cutting_Current 12155
#define P_Separate_Cutter_Change_Cycle 12156
#define P_X_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger 12157
#define P_X_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger 12158
#define P_X_Cathode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger 12159
#define P_X_Anode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger 12160
#define P_X_Stack_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger 12161
#define P_Interlock_Messege_Confirmed 12162
#define P_X_MC_Communication_HeartBit 12163
#define P_SV_Cathode_Count 12164
#define P_SV_Anode_Count 12165
#define P_SV_AO_Reference_Value_Chanel 12166
#define P_SV_Cathode_Reference_Thickness 12169
#define P_SV_Anode_Reference_Thickness 12170
#define P_SV_Stack_Table_Damper_Cathode 12171
#define P_SV_Stack_Table_Damper_Anode 12172
#define P_SV_Sepa_Reference_Thickness 12173
#define P_SV_Jelly_Roll_Width 12174
#define P_Cathode_Align_Continuous_NG_Recipe 12175
#define P_Anode_Align_Continuous_NG_Recipe 12176
#define P_Stack_Vision_Continuous_NG_Recipe 12177
#define P_PLC_Recipe_EPC_Sepa_Count 12178
#define P_PLC_Recipe_Revise_Sepa 12179
#define P_X_PLC_to_PMAC_Correction_Value 12180
#define P_Anode_Align_Continuous_NG_Check_range 12181
#define P_Cathode_Align_Continuous_NG_Check_range 12182
#define P_Stack_Align_Continuous_NG_Check_range 12183
#define P_Cathode_Surface_Continuous_NG_Recipe 12184
#define P_Anode_Surface_Continuous_NG_Recipe 12185
#define P_Cathode_Surface_Continuous_NG_Check_range 12186
#define P_Anode_Surface_Continuous_NG_Check_range 12187
#define P_Servo_Dancer_Alarm_Maximum_Angle_Value 12188
#define P_Servo_Dancer_Alarm_Minimum_Angle_Value 12189
#define P_Current_Selected_Spool_Rev_Counts_Init_Read 12190
#define P_Spool_ARC_Distance_mm 12191
#define P_ARC_Upper_Request_Sepa_Thickness_mm 12192
#define P_ARC_Lower_Request_Sepa_Thickness_mm 12193
#define P_Selected_Spool_Arc_Set_Rev_Counts_Value 12194
#define P_Set_Cnt_FR_Moving_Sepa_ARC 12195
#define P_Current_Selected_Spool_Rev_Counts 12196
#define P_AI_Cathode_Clamp_Damper 12197
#define P_AI_Anode_Clamp_Damper 12198
#define P_MSA_Run_Repeat_Num 12199
#define P_Current_MSA_Run_Num 12204
#define P_Select_Sheet_Value 12209
#define P_BTN_Config_Setup_Mode_Select 12210
#define P_Sepa_Thickness_Max_Value 12211
#define P_AI_Cathode_Clamp_Damper_Zero_Mpa_Analog_Value 12212
#define P_AI_Anode_Clamp_Damper_Zero_Mpa_Analog_Value 12213
#define P_Accumulated_Movement_MM_Unit_Cathode_1ST_pnp 12214
#define P_Accumulated_Movement_MM_Unit_Anode_1ST_pnp 12215
#define P_Accumulated_Movement_MM_Unit_Cathode_2nd_pnp 12216
#define P_Accumulated_Movement_MM_Unit_Anode_2nd_pnp 12217
#define P_AI_Anode_Clamp_Damper_Mpa 12218
#define P_AI_Cathode_Clamp_Damper_Mpa 12219
#define P_Current_Whole_Stack_Jelly_Roll_Thinckness_mm 12220
#define P_Upper_Sepa_Current_Thickness_um 12221
#define P_Lower_Sepa_Current_Thickness_um 12222
#define P_Spool_Rotate_Distance 12223
#define Spool_Diameter 12224
#define P_Current_FR_Moving_Cnt_To_PlC 12225
#define P_MES_APC_Select_Btn 12226
#define P_AO_Anode_Clamp_Damper 12227
#define P_AO_Cathode_Clamp_Damper 12228
#define P_Sepa_Length 12229
#define P_Minus_Limit_Detect_Popup_Flag 12230
#define P_Plus_Limit_Detect_Popup_Flag 12231
#define P_Fatal_Fe_Limit_Detect_Popup_Flag 12232
#define P_Emergency_Alarm_Popup_Flag 12233
#define P_SepaArcing_Popup_Flag 12234
#define P_Y_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger 12235
#define P_Y_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger 12236
#define P_Y_Cathode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger 12237
#define P_Y_Anode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger 12238
#define P_Y_Stack_Align_Calibration_twisted_Cycle_Stop_Request_Trigger 12239
#define P_Current_Selected_Sheet_Value 12240
#define P_Status_Config_Mode_Select 12241
#define P_Sepa_Thickness_Jig_Value 12242
#define P_PV_Stack_Table_Damper_Cathode 12243
#define P_PV_Stack_Table_Damper_Anode 12244
#define P_Discharge_Standby_Pos_Tack_Time 12245
#define P_Discharge_FR_MainZ_Pos_Tack_Time 12246
#define P_Discharge_Unloader_Go_Pos_Tack_Time 12247
#define P_Discharge_SubZ_Down_Pos_Tack_Time 12248
#define P_Discharge_Unloader_Cutting_Pos_Tack_Time 12249
#define P_Discharge_FR_Clamp_ON_Complete_Tack_Time 12250
#define P_Discharge_Cutting_Complete_Tack_Time 12251
#define P_Discharge_Motion_PG_Active_Starting_Tack_Time 12252
#define P_Discharge_Motion_PG_Active_Complete_Tack_Time 12253
#define P_Discharge_Sepa_First_Complete_Tack_Time 12254
#define P_Discharge_Complete_Tack_Time 12255
#define P_Discharge_Total_Tack_Time 12256
#define P_Anode_Clamp_TackTime_Array0 12257
#define P_Anode_Clamp_TackTime_Array1 12258
#define P_Anode_Clamp_TackTime_Array2 12259
#define P_Anode_Clamp_TackTime_Array3 12260
#define P_Anode_Clamp_TackTime_Array4 12261
#define P_Anode_Clamp_TackTime_Array5 12262
#define P_Anode_Clamp_TackTime_Array6 12263
#define P_Anode_Clamp_TackTime_Array7 12264
#define P_Anode_Clamp_TackTime_Array8 12265
#define P_Anode_Clamp_TackTime_Array9 12266
#define P_Anode_Clamp_TackTime_Array10 12267
#define P_Stacking_TackTime_Array0 12268
#define P_Stacking_TackTime_Array1 12269
#define P_Stacking_TackTime_Array2 12270
#define P_Stacking_TackTime_Array3 12271
#define P_Stacking_TackTime_Array4 12272
#define P_Stacking_TackTime_Array5 12273
#define P_Stacking_TackTime_Array6 12274
#define P_Stacking_TackTime_Array7 12275
#define P_Stacking_TackTime_Array8 12276
#define P_Stacking_TackTime_Array9 12277
#define P_Stacking_TackTime_Array10 12278
#define P_Cathode_Clamp_TackTime_Array0 12279
#define P_Cathode_Clamp_TackTime_Array1 12280
#define P_Cathode_Clamp_TackTime_Array2 12281
#define P_Cathode_Clamp_TackTime_Array3 12282
#define P_Cathode_Clamp_TackTime_Array4 12283
#define P_Cathode_Clamp_TackTime_Array5 12284
#define P_Cathode_Clamp_TackTime_Array6 12285
#define P_Cathode_Clamp_TackTime_Array7 12286
#define P_Cathode_Clamp_TackTime_Array8 12287
#define P_Cathode_Clamp_TackTime_Array9 12288
#define P_Cathode_Clamp_TackTime_Array10 12289
#define P_JellyRoll_Out_TackTime_Array0 12290
#define P_JellyRoll_Out_TackTime_Array1 12291
#define P_JellyRoll_Out_TackTime_Array2 12292
#define P_JellyRoll_Out_TackTime_Array3 12293
#define P_JellyRoll_Out_TackTime_Array4 12294
#define P_JellyRoll_Out_TackTime_Array5 12295
#define P_JellyRoll_Out_TackTime_Array6 12296
#define P_JellyRoll_Out_TackTime_Array7 12297
#define P_JellyRoll_Out_TackTime_Array8 12298
#define P_JellyRoll_Out_TackTime_Array9 12299
#define P_JellyRoll_Out_TackTime_Array10 12300
#define P_Anode_1th_TackTime_Array0 12301
#define P_Anode_1th_TackTime_Array1 12302
#define P_Anode_1th_TackTime_Array2 12303
#define P_Anode_1th_TackTime_Array3 12304
#define P_Anode_1th_TackTime_Array4 12305
#define P_Anode_1th_TackTime_Array5 12306
#define P_Anode_1th_TackTime_Array6 12307
#define P_Anode_1th_TackTime_Array7 12308
#define P_Anode_1th_TackTime_Array8 12309
#define P_Anode_1th_TackTime_Array9 12310
#define P_Anode_1th_TackTime_Array10 12311
#define P_Cathode_1th_TackTime_Array0 12312
#define P_Cathode_1th_TackTime_Array1 12313
#define P_Cathode_1th_TackTime_Array2 12314
#define P_Cathode_1th_TackTime_Array3 12315
#define P_Cathode_1th_TackTime_Array4 12316
#define P_Cathode_1th_TackTime_Array5 12317
#define P_Cathode_1th_TackTime_Array6 12318
#define P_Cathode_1th_TackTime_Array7 12319
#define P_Cathode_1th_TackTime_Array8 12320
#define P_Cathode_1th_TackTime_Array9 12321
#define P_Cathode_1th_TackTime_Array10 12322
#define P_Anode_2th_TackTime_Array0 12323
#define P_Anode_2th_TackTime_Array1 12324
#define P_Anode_2th_TackTime_Array2 12325
#define P_Anode_2th_TackTime_Array3 12326
#define P_Anode_2th_TackTime_Array4 12327
#define P_Anode_2th_TackTime_Array5 12328
#define P_Anode_2th_TackTime_Array6 12329
#define P_Anode_2th_TackTime_Array7 12330
#define P_Anode_2th_TackTime_Array8 12331
#define P_Anode_2th_TackTime_Array9 12332
#define P_Anode_2th_TackTime_Array10 12333
#define P_Cathode_2th_TackTime_Array0 12334
#define P_Cathode_2th_TackTime_Array1 12335
#define P_Cathode_2th_TackTime_Array2 12336
#define P_Cathode_2th_TackTime_Array3 12337
#define P_Cathode_2th_TackTime_Array4 12338
#define P_Cathode_2th_TackTime_Array5 12339
#define P_Cathode_2th_TackTime_Array6 12340
#define P_Cathode_2th_TackTime_Array7 12341
#define P_Cathode_2th_TackTime_Array8 12342
#define P_Cathode_2th_TackTime_Array9 12343
#define P_Cathode_2th_TackTime_Array10 12344
#define P_Anode_Align_Table_TackTime_Array0 12345
#define P_Anode_Align_Table_TackTime_Array1 12346
#define P_Anode_Align_Table_TackTime_Array2 12347
#define P_Anode_Align_Table_TackTime_Array3 12348
#define P_Anode_Align_Table_TackTime_Array4 12349
#define P_Anode_Align_Table_TackTime_Array5 12350
#define P_Anode_Align_Table_TackTime_Array6 12351
#define P_Anode_Align_Table_TackTime_Array7 12352
#define P_Anode_Align_Table_TackTime_Array8 12353
#define P_Anode_Align_Table_TackTime_Array9 12354
#define P_Anode_Align_Table_TackTime_Array10 12355
#define P_Cathode_Align_Table_TackTime_Array0 12356
#define P_Cathode_Align_Table_TackTime_Array1 12357
#define P_Cathode_Align_Table_TackTime_Array2 12358
#define P_Cathode_Align_Table_TackTime_Array3 12359
#define P_Cathode_Align_Table_TackTime_Array4 12360
#define P_Cathode_Align_Table_TackTime_Array5 12361
#define P_Cathode_Align_Table_TackTime_Array6 12362
#define P_Cathode_Align_Table_TackTime_Array7 12363
#define P_Cathode_Align_Table_TackTime_Array8 12364
#define P_Cathode_Align_Table_TackTime_Array9 12365
#define P_Cathode_Align_Table_TackTime_Array10 12366
#define P_Anode_NG_PNP_TackTime_Array0 12367
#define P_Anode_NG_PNP_TackTime_Array1 12368
#define P_Anode_NG_PNP_TackTime_Array2 12369
#define P_Anode_NG_PNP_TackTime_Array3 12370
#define P_Anode_NG_PNP_TackTime_Array4 12371
#define P_Anode_NG_PNP_TackTime_Array5 12372
#define P_Anode_NG_PNP_TackTime_Array6 12373
#define P_Anode_NG_PNP_TackTime_Array7 12374
#define P_Anode_NG_PNP_TackTime_Array8 12375
#define P_Anode_NG_PNP_TackTime_Array9 12376
#define P_Anode_NG_PNP_TackTime_Array10 12377
#define P_Cathode_NG_PNP_TackTime_Array0 12378
#define P_Cathode_NG_PNP_TackTime_Array1 12379
#define P_Cathode_NG_PNP_TackTime_Array2 12380
#define P_Cathode_NG_PNP_TackTime_Array3 12381
#define P_Cathode_NG_PNP_TackTime_Array4 12382
#define P_Cathode_NG_PNP_TackTime_Array5 12383
#define P_Cathode_NG_PNP_TackTime_Array6 12384
#define P_Cathode_NG_PNP_TackTime_Array7 12385
#define P_Cathode_NG_PNP_TackTime_Array8 12386
#define P_Cathode_NG_PNP_TackTime_Array9 12387
#define P_Cathode_NG_PNP_TackTime_Array10 12388
#define P_Sepa_Unwinder_TackTime_Array0 12389
#define P_Sepa_Unwinder_TackTime_Array1 12390
#define P_Sepa_Unwinder_TackTime_Array2 12391
#define P_Sepa_Unwinder_TackTime_Array3 12392
#define P_Sepa_Unwinder_TackTime_Array4 12393
#define P_Sepa_Unwinder_TackTime_Array5 12394
#define P_Sepa_Unwinder_TackTime_Array6 12395
#define P_Sepa_Unwinder_TackTime_Array7 12396
#define P_Sepa_Unwinder_TackTime_Array8 12397
#define P_Sepa_Unwinder_TackTime_Array9 12398
#define P_Sepa_Unwinder_TackTime_Array10 12399
#define P_Sepa_Unwinder_TackTime_Array11 12400
#define P_1st_Unloader_TackTime_Array0 12401
#define P_1st_Unloader_TackTime_Array1 12402
#define P_1st_Unloader_TackTime_Array2 12403
#define P_1st_Unloader_TackTime_Array3 12404
#define P_1st_Unloader_TackTime_Array4 12405
#define P_1st_Unloader_TackTime_Array5 12406
#define P_1st_Unloader_TackTime_Array6 12407
#define P_1st_Unloader_TackTime_Array7 12408
#define P_1st_Unloader_TackTime_Array8 12409
#define P_1st_Unloader_TackTime_Array9 12410
#define P_1st_Unloader_TackTime_Array10 12411
#define P_Cathode_1st_Vacuum_TackTime_Array1 12412
#define P_Cathode_1st_Vacuum_TackTime_Array2 12413
#define P_Cathode_1st_Vacuum_TackTime_Array3 12414
#define P_Cathode_1st_Vacuum_TackTime_Array4 12415
#define P_Cathode_1st_Vacuum_TackTime_Array5 12416
#define P_Cathode_1st_Vacuum_TackTime_Array6 12417
#define P_Cathode_1st_Vacuum_TackTime_Array7 12418
#define P_Cathode_1st_Vacuum_TackTime_Array8 12419
#define P_Cathode_1st_Vacuum_TackTime_Array9 12420
#define P_Cathode_1st_Vacuum_TackTime_Array10 12421
#define P_Cathode_Align_Vacuum_TackTime_Array1 12422
#define P_Cathode_Align_Vacuum_TackTime_Array2 12423
#define P_Cathode_Align_Vacuum_TackTime_Array3 12424
#define P_Cathode_Align_Vacuum_TackTime_Array4 12425
#define P_Cathode_Align_Vacuum_TackTime_Array5 12426
#define P_Cathode_Align_Vacuum_TackTime_Array6 12427
#define P_Cathode_Align_Vacuum_TackTime_Array7 12428
#define P_Cathode_Align_Vacuum_TackTime_Array8 12429
#define P_Cathode_Align_Vacuum_TackTime_Array9 12430
#define P_Cathode_Align_Vacuum_TackTime_Array10 12431
#define P_Cathode_2nd_Vacuum_TackTime_Array1 12432
#define P_Cathode_2nd_Vacuum_TackTime_Array2 12433
#define P_Cathode_2nd_Vacuum_TackTime_Array3 12434
#define P_Cathode_2nd_Vacuum_TackTime_Array4 12435
#define P_Cathode_2nd_Vacuum_TackTime_Array5 12436
#define P_Cathode_2nd_Vacuum_TackTime_Array6 12437
#define P_Cathode_2nd_Vacuum_TackTime_Array7 12438
#define P_Cathode_2nd_Vacuum_TackTime_Array8 12439
#define P_Cathode_2nd_Vacuum_TackTime_Array9 12440
#define P_Cathode_2nd_Vacuum_TackTime_Array10 12441
#define P_Anode_1st_Vacuum_TackTime_Array1 12442
#define P_Anode_1st_Vacuum_TackTime_Array2 12443
#define P_Anode_1st_Vacuum_TackTime_Array3 12444
#define P_Anode_1st_Vacuum_TackTime_Array4 12445
#define P_Anode_1st_Vacuum_TackTime_Array5 12446
#define P_Anode_1st_Vacuum_TackTime_Array6 12447
#define P_Anode_1st_Vacuum_TackTime_Array7 12448
#define P_Anode_1st_Vacuum_TackTime_Array8 12449
#define P_Anode_1st_Vacuum_TackTime_Array9 12450
#define P_Anode_1st_Vacuum_TackTime_Array10 12451
#define P_Anode_Align_Vacuum_TackTime_Array1 12452
#define P_Anode_Align_Vacuum_TackTime_Array2 12453
#define P_Anode_Align_Vacuum_TackTime_Array3 12454
#define P_Anode_Align_Vacuum_TackTime_Array4 12455
#define P_Anode_Align_Vacuum_TackTime_Array5 12456
#define P_Anode_Align_Vacuum_TackTime_Array6 12457
#define P_Anode_Align_Vacuum_TackTime_Array7 12458
#define P_Anode_Align_Vacuum_TackTime_Array8 12459
#define P_Anode_Align_Vacuum_TackTime_Array9 12460
#define P_Anode_Align_Vacuum_TackTime_Array10 12461
#define P_Anode_2nd_Vacuum_TackTime_Array1 12462
#define P_Anode_2nd_Vacuum_TackTime_Array2 12463
#define P_Anode_2nd_Vacuum_TackTime_Array3 12464
#define P_Anode_2nd_Vacuum_TackTime_Array4 12465
#define P_Anode_2nd_Vacuum_TackTime_Array5 12466
#define P_Anode_2nd_Vacuum_TackTime_Array6 12467
#define P_Anode_2nd_Vacuum_TackTime_Array7 12468
#define P_Anode_2nd_Vacuum_TackTime_Array8 12469
#define P_Anode_2nd_Vacuum_TackTime_Array9 12470
#define P_Anode_2nd_Vacuum_TackTime_Array10 12471
#define P_Final_Roll_TackTime_Array1 12472
#define P_Final_Roll_TackTime_Array2 12473
#define P_Final_Roll_TackTime_Array3 12474
#define P_Final_Roll_TackTime_Array4 12475
#define P_Final_Roll_TackTime_Array5 12476
#define P_Final_Roll_TackTime_Array6 12477
#define P_Final_Roll_TackTime_Array7 12478
#define P_Final_Roll_TackTime_Array8 12479
#define P_Final_Roll_TackTime_Array9 12480
#define P_Final_Roll_TackTime_Array10 12481
#define P_Sepa_ARC_TackTime_Array1 12482
#define P_Sepa_ARC_TackTime_Array2 12483
#define P_Sepa_ARC_TackTime_Array3 12484
#define P_Sepa_ARC_TackTime_Array4 12485
#define P_Sepa_ARC_TackTime_Array5 12486
#define P_Sepa_ARC_TackTime_Array6 12487
#define P_Sepa_ARC_TackTime_Array7 12488
#define P_Sepa_ARC_TackTime_Array8 12489
#define P_Sepa_ARC_TackTime_Array9 12490
#define P_Sepa_ARC_TackTime_Array10 12491
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array1 12492
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array2 12493
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array3 12494
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array4 12495
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array5 12496
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array6 12497
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array7 12498
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array8 12499
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array9 12500
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array10 12501
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array1 12502
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array2 12503
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array3 12504
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array4 12505
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array5 12506
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array6 12507
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array7 12508
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array8 12509
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array9 12510
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array10 12511
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array1 12512
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array2 12513
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array3 12514
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array4 12515
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array5 12516
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array6 12517
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array7 12518
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array8 12519
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array9 12520
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array10 12521
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array1 12522
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array2 12523
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array3 12524
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array4 12525
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array5 12526
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array6 12527
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array7 12528
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array8 12529
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array9 12530
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array10 12531
#define P_PACK_ML_Status_bit 12532
#define P_Whole_Stacking_TackTime_MES_Report_Flag 12533
#define P_JellyRoll_Out_TackTime_MES_Report_Flag 12534
#define P_PV_Cathode_Count 12535
#define P_PV_Anode_Count 12536
#define P_PV_AO_Value_Chanel 12537
#define P_PV_Cathode_NG_TR_NG_Count 12541
#define P_PV_Anode_NG_TR_NG_Count 12542
#define P_PV_Anode_Retry_NG_Count 12543
#define P_PV_Cathode_Retry_NG_Count 12544
#define P_PV_Align_INPUT_Count 12545
#define P_Unloader_Grip_Pressure 12546
#define P_Unloader_Heatmeter 12547
#define P_Interlock_Messege 12548
#define P_EPC_Y_StandBy 12598
#define P_SV_Read_Enable_Flag 12599
#define P_Spool_Rotate_Distance_mm 12600
#define P_Current_Homming_Status 12601
#define P_Home_Execute_Type 12651
#define P_Cathode_Clamp_Gantry 12701
#define P_Anode_Clamp_Gantry 12702
#define P_SV_Separator_Heting_Cutter_Change_Period 12703
#define P_Interval_Read_Time 12704
#define P_Interval_Write_Time 12710
#define P_Cathode_Picker_Cylinder_Count 12716
#define P_Anode_Picker_Cylinder_Count 12717
#define P_SV_Stack_Table_Cathode_Reference_Value 12718
#define P_SV_Stack_Table_Anode_Reference_Value 12719
#define P_CA_DR_Offset 12720
#define P_AN_DR_Offset 12721
#define P_First_DR_Offset 12722
#define P_Last_DR_Offset 12723
#define P_BTN_QC_Sample_Flag 12724
#define P_BTN_Loss_Sample_Flag 12725
#define P_MSA_Sample_Flag 12726
#define P_Sample_JR_Recipe_Count 12727
#define M_Sample_JR_Prod_Count 8351
#define M_Sample_Btn_Flag 8352
#define P_Ca_Clamp_Y_Move 12728
#define P_An_Clamp_Y_Move 12729
#define P_Stack_Table_JR_Exist_Flag 12730
#define P_MES_Status 12731
#define P_Sepa_Unwinder_Upper_Confirm_Status 12732
#define P_Sepa_Unwinder_Lower_Confirm_Status 12733
#define P_Program_Monitoring_Lamp_Cell_Ready 12734
#define P_Program_Monitoring_Lamp_Ready_Pos 12735
#define P_Program_Monitoring_Lamp_Pause_Pos 12736
#define P_Program_Monitoring_Lamp_Motion_Run 12737
#define P_Program_Monitoring_Lamp_Cell_Remove 12738
#define P_Program_Monitoring_Lamp_Cell_Supply 12739
#define P_Program_Monitoring_Lamp_Sepa_Mode 12740
#define P_Program_Monitoring_Lamp_Semi_Run 12741
#define P_Program_Monitoring_Lamp_Stack_Mode 12742
#define P_Program_Monitoring_Lamp_Anode_Aling_NG 12743
#define P_Program_Monitoring_Lamp_Anode_Retry_NG 12744
#define P_Program_Monitoring_Lamp_Cathode_Align_NG 12745
#define P_Program_Monitoring_Lamp_Cathode_Retry_NG 12746
#define P_Program_Monitoring_Lamp_Last_Stack_Mode 12747
#define P_Program_Monitoring_Lamp_Jelly_Roll_OK 12748
#define P_Program_Monitoring_Lamp_Jelly_Roll_NG 12749
#define P_Program_Monitoring_Lamp_Jelly_Roll_Sepa 12750
#define P_Program_Monitoring_Lamp_Cell_Out_Pos 12751
#define P_Program_Monitoring_Lamp_Cell_Out_Mode 12752
#define P_Master_Motion_Program_Flag 12753
#define P_Sub_Master_Motion_Program_Flag 12754
#define P_Slave_Motion_Program_Flag 12774
#define P_Master_Motion_CycleStop_Flag 12794
#define P_OLD_Jog_Speed_Motor 12795
#define P_PLC_08_Program_Ver 12845
#define P_Old_PMAC_Commands 12846
#define P_Old_PMAC_Status 12847
#define P_Old_PMAC_Current_Mode 12848
#define P_Mode_Function_State_Machine 12849
#define P_PMAC_Commands 12850
#define P_Command_Start 12851
#define P_Command_Complete 12869
#define P_Command_Reset 12887
#define P_Command_Hold 12905
#define P_Command_Unhold 12923
#define P_Command_Suspend 12941
#define P_Command_Unsuspend 12959
#define P_Command_Clear 12977
#define P_Command_Stop 12995
#define P_Command_Abort 13013
#define P_Command_Status_Complete 13031
#define P_Command_Mask_Layer 13049
#define P_Command_Process_Type 13067
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
#define P_PMAC_Current_Mode 13085
#define P_PMAC_Status 13086
#define P_PMAC_Old_Mode 13087
#define P_Ready_Tack_Chk_Timer 13088
#define P_PLC09_Common_Command_Flag 13089
#define P_PLC09_Common_Command_Complete_Bit 13090
#define P_PLC09_Common_Execute_Flag 13091
#define P_PLC09_Common_Execute_Complete_Bit 13092
#define P_PLC09_Status 13093
#define P_PLC09_Libraries_Var 13094
#define P_Master_Motion_Program_ON_Flag 13095
#define P_Master_Motion_Program_ON_Complete_Bit 13096
#define P_Master_Motion_Program_OFF_Flag 13097
#define P_Master_Motion_Program_OFF_Complete_Bit 13098
#define P_Common_Function_Timbase_ON_Flag 13099
#define P_Common_Function_Timbase_ON_Complete_Bit 13100
#define P_Common_Function_Timbase_OFF_Flag 13101
#define P_Common_Function_Timbase_OFF_Complete_Bit 13102
#define P_Common_Function_Monitoring_Lamp_OFF_Flag 13103
#define P_Common_Function_Monitoring_Lamp_OFF_Complete_Bit 13104
#define P_Common_Function_Slave_Motion_Common_Init_Flag 13105
#define P_Common_Function_Slave_Motion_Common_Init_Complete_Bit 13106
#define P_Common_Function_OlD_Jog_Speed_Save_ON_Flag 13107
#define P_Common_Function_OlD_Jog_Speed_Save_ON_Complete_Bit 13108
#define P_Auto_Resetting_Sum_Ready_Pos_Check_Flag 13109
#define P_Auto_Resetting_Sum_Ready_Pos_Check_Complete_bit 13110
#define P_Manual_Resetting_Sum_Ready_Pos_Check_Flag 13111
#define P_Manual_Resetting_Sum_Ready_Pos_Check_Complete_bit 13112
#define P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Flag 13113
#define P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Complete_Bit 13114
#define P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Flag 13115
#define P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Complete_Bit 13116
#define P_Motion_Target_Position_Complete 13117
#define P_SM_Auto_Run_Layer_Management 13118
#define P_Buffer_Mode_Status_Sequence 13119
#define P_SM_Sub_Function_Pause 13120
#define P_PLC09_Resetting_Position_Check_State_Machine 13121
#define P_PLC09_Resetting_Position_Moving_State_Machine 13122
#define P_Sum_Ready_pos_Motor 13123
#define P_SM_Resetting_Pause_Position 13165
#define P_20per_Vac_Error_Cycle_Stop_Flag 13166
#define P_MNTR_PLC23_ARC_Complete 13167
#define P_FUNCTION_PLC13_Sepa_Trigger_Enable 13168
#define P_PLC_Recipe_PLC2_Revise_Sepa 13169
#define P_Auto_Semi_Init_Status 13170
#define P_Auto_Semi_Init_Chk_Bit 13171
#define P_Old_PLC_HeartBit_Flag 13172
#define P_PLC09_Init_Flag 13173
#define P_Check_IDLE_CF_Flag 13174
#define P_Check_EXECUTE_CF_Flag 13175
#define P_Check_COMPLETING_CF_Flag 13176
#define P_Check_COMPLETE_CF_Flag 13177
#define P_Check_HOLDING_CF_Flag 13178
#define P_Check_HOLD_CF_Flag 13179
#define P_Check_UNHOLDING_CF_Flag 13180
#define P_Check_SUSPENDING_CF_Flag 13181
#define P_Check_SUSPENDED_CF_Flag 13182
#define P_Check_UNSUSPENDING_CF_Flag 13183
#define P_Check_STOPPED_CF_Flag 13184
#define P_Check_ABORTED_CF_Flag 13185
#define P_Check_CLEARING_CF_Flag 13186
#define P_Check_IDLE_CF 13187
#define P_Check_EXECUTE_CF 13188
#define P_Check_COMPLETING_CF 13189
#define P_Check_COMPLETE_CF 13190
#define P_Check_HOLDING_CF 13191
#define P_Check_HOLD_CF 13192
#define P_Check_UNHOLDING_CF 13193
#define P_Check_SUSPENDING_CF 13194
#define P_Check_SUSPENDED_CF 13195
#define P_Check_UNSUSPENDING_CF 13196
#define P_Check_STOPPED_CF 13197
#define P_Check_ABORTED_CF 13198
#define P_Check_CLEARING_CF 13199
#define P_Check_STOPPING_CF 13200
#define P_Check_STARTING_CF 13201
#define P_Check_RESETTING_CF 13202
#define P_Check_STARTTING_CF 13203
#define P_Queue_Clear 13204
#define P_Resetting_First_Approach_Start_Flag 13205
#define P_Resetting_Re_Entry_Step_Count 13206
#define P_PLC09_Alarm_Test_Flag 13207
#define P_PLC09_Test_Temp 13208
#define P_PLC01_STOP_Queue_Complete_Flag 13209
#define P_PMAC_All_Home_Cmd 13210
#define P_PMAC_All_Home_Status 13211
#define P_PMAC_Master_Following_Use_Flag 13212
#define PnP_Belt_Waring_Pos 13213
#define P_Old_X_PLC_Sync_Heart_Bit 13214
#define P_Stack_Heart_Bit_Sync_Flag 13215
#define P_Stack_Heart_Bit_Sunc_Complete_Bit 13216
#define P_Resetting_Init_Module_RTN 13217
#define P_PLC09_MNTR 13218
#define P_Unloder_PNP_Home_IL_Pos 13219
#define P_ECAT_Slave_Err_Bit 13220
#define P_MC_Power_Down_Flag 13221
#define P_Old_MC_Power_Down_Flag 13222
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
#define P_Modbus_Delay_Timer 13223
#define P_Modbus_Connect_Status 13224
#define P_Modbus_Reconnect_MNTR 13225
#define P_Ecat_Reconn_Chk_Lamp 13226
#define P_MC_Reconn_Chk_Lamp 13227
#define P_Cathode_2TR_PNP_Avoid_Pos 13228
#define P_Anode_2TR_PNP_Avoid_Pos 13229
#define P_Cathode_2TR_PNP_Avoid_Value 13230
#define P_Anode_2TR_PNP_Avoid_Value 13231
#define P_Cathode_1st_Vac_Set_Time 13232
#define P_Cathode_2nd_Vac_Set_Time 13233
#define P_Cathode_Align_Vac_Set_Time 13234
#define P_Cathode_Align_Blow_Set_Time 13235
#define P_Anode_1st_Vac_Set_Time 13236
#define P_Anode_2nd_Vac_Set_Time 13237
#define P_Sepa_Consume_Mode_Thickness_rate 13238
#define P_Sepa_Anode_Recipe_Count 13239
#define P_Sepa_Cathode_Recipe_Count 13240
#define P_Discharge_Cathode_Recipe_Count 13241
#define P_Discharge_Anode_Recipe_Count 13242
#define P_Suspend_Discharge_Cathode_Counter 13243
#define P_Suspend_Discharge_Anode_Counter 13244
#define P_Suspend_Discharge_Waiting_Flag 13245
#define P_Com_ARC_Sepa_Consume_Mode_Flag 13246
#define P_Com_EPC_Sepa_Consume_Mode_Flag 13247
#define P_Com_User_Sepa_Consume_Mode_Flag 13248
#define P_Com_Dry_Mode_Flag 13249
#define P_SM_Recipe_Value_Management 13250
#define P_Sepa_Mode_Recipe_Count 13251
#define P_Sepa_Mode_EPC_Recipe_Count 13252
#define P_ARC_End_Sepa_Recipe_Count 13253
#define P_Anode_Align_NG_Array 13254
#define P_Cathode_Align_NG_Array 13274
#define P_Anode_Surface_NG_Array 13294
#define P_Cathode_Surface_NG_Array 13314
#define P_Stack_NG_Array 13334
#define P_Cathode_Align_Continuous_NG_Stop_Select 13354
#define P_Anode_Align_Continuous_NG_Stop_Select 13355
#define P_Stack_Vision_NG_Enable 13356
#define P_Cathode_Surface_Continuous_NG_Stop_Select 13357
#define P_Anode_Surface_Continuous_NG_Stop_Select 13358
#define P_Anode_Trigger_IO_Test_Vision_PLC_Loop 13359
#define P_Anode_Trigger_IO_Test_Motion_Loop 13360
#define P_Cathode_Trigger_IO_Test_Vision_PLC_Loop 13361
#define P_Cathode_Trigger_IO_Test_Motion_Loop 13362
#define P_Stack_Trigger_IO_Test_Vision_PLC_Loop 13363
#define P_Stack_Trigger_IO_Test_Motion_Loop 13364
#define P_PLC12_Continuous_Buffer_Reset_Flag 13365
#define P_Continuous_Call_Align_OK_Flag 13366
#define P_Continuous_Call_Align_NG_Flag 13368
#define P_Continuous_Call_Align_TimeOut_Flag 13370
#define P_Continuous_Call_Surface_OK_Flag 13372
#define P_Continuous_Call_Surface_NG_Flag 13374
#define P_Continuous_Call_Surface_TimeOut_Flag 13376
#define P_Continuous_Call_Stack_Flag 13378
#define P_PLC12_Anode_Sheet_Pick_Up_Flag 13381
#define P_PLC12_Cathode_Sheet_Pick_Up_Flag 13382
#define P_Hold_Anode_Sheet_Pick_Up_Flag 13383
#define P_Hold_Cathode_Sheet_Pick_Up_Flag 13384
#define P_Sheet_Interface_Complete_Pos 13385
#define P_Anode_Sheet_Interface_Complete_Pos 13386
#define P_Cathode_Sheet_Interface_Complete_Pos 13387
#define P_Anode_2nd_TR_Maint_Check 13388
#define P_Cathode_2nd_TR_Maint_Check 13389
#define P_PLC12_Observser_MNTR 13390
#define P_PLC12_Vacuum_MNTR 13395
#define P_Vacuum_Check 13403
#define P_PLC12_Blow_MNTR 13411
#define P_Blow_Check 13419
#define P_PLC12_Vacuum_1st_Cathode_MNTR_Timer 13427
#define P_PLC12_Vacuum_2nd_Cathode_MNTR_Timer 13428
#define P_PLC12_Vacuum_NG_Cathode_MNTR_Timer 13429
#define P_PLC12_Vacuum_Align_Cathode_MNTR_Timer 13430
#define P_PLC12_Vacuum_1st_Anode_MNTR_Timer 13431
#define P_PLC12_Vacuum_2nd_Anode_MNTR_Timer 13432
#define P_PLC12_Vacuum_NG_Anode_MNTR_Timer 13433
#define P_PLC12_Vacuum_Align_Anode_MNTR_Timer 13434
#define P_PLC12_Vacuum_1st_Cathode_Set_Time 13435
#define P_PLC12_Vacuum_2nd_Cathode_Set_Time 13436
#define P_PLC12_Vacuum_NG_Cathode_Set_Time 13437
#define P_PLC12_Vacuum_Align_Cathode_Set_Time 13438
#define P_PLC12_Vacuum_1st_Anode_Set_Time 13439
#define P_PLC12_Vacuum_2nd_Anode_Set_Time 13440
#define P_PLC12_Vacuum_NG_Anode_Set_Time 13441
#define P_PLC12_Vacuum_Align_Anode_Set_Time 13442
#define P_PLC12_Vacuum_1st_Cathode_Take_Time 13443
#define P_PLC12_Vacuum_2nd_Cathode_Take_Time 13448
#define P_PLC12_Vacuum_NG_Cathode_Take_Time 13453
#define P_PLC12_Vacuum_Align_Cathode_Take_Time 13458
#define P_PLC12_Vacuum_1st_Anode_Take_Time 13463
#define P_PLC12_Vacuum_2nd_Anode_Take_Time 13468
#define P_PLC12_Vacuum_NG_Anode_Take_Time 13473
#define P_PLC12_Vacuum_Align_Anode_Take_Time 13478
#define P_PLC12_Blow_1st_Cathode_MNTR_Timer 13483
#define P_PLC12_Blow_2nd_Cathode_MNTR_Timer 13484
#define P_PLC12_Blow_NG_Cathode_MNTR_Timer 13485
#define P_PLC12_Blow_Align_Cathode_MNTR_Timer 13486
#define P_PLC12_Blow_1st_Anode_MNTR_Timer 13487
#define P_PLC12_Blow_2nd_Anode_MNTR_Timer 13488
#define P_PLC12_Blow_NG_Anode_MNTR_Timer 13489
#define P_PLC12_Blow_Align_Anode_MNTR_Timer 13490
#define P_PLC12_Blow_1st_Cathode_Set_Time 13491
#define P_PLC12_Blow_2nd_Cathode_Set_Time 13492
#define P_PLC12_Blow_NG_Cathode_Set_Time 13493
#define P_PLC12_Blow_Align_Cathode_Set_Time 13494
#define P_PLC12_Blow_1st_Anode_Set_Time 13495
#define P_PLC12_Blow_2nd_Anode_Set_Time 13496
#define P_PLC12_Blow_NG_Anode_Set_Time 13497
#define P_PLC12_Blow_Align_Anode_Set_Time 13498
#define P_PLC12_Blow_1st_Cathode_Take_Time 13499
#define P_PLC12_Blow_2nd_Cathode_Take_Time 13504
#define P_PLC12_Blow_NG_Cathode_Take_Time 13509
#define P_PLC12_Blow_Align_Cathode_Take_Time 13514
#define P_PLC12_Blow_1st_Anode_Take_Time 13519
#define P_PLC12_Blow_2nd_Anode_Take_Time 13524
#define P_PLC12_Blow_NG_Anode_Take_Time 13529
#define P_PLC12_Blow_Align_Anode_Take_Time 13534
#define P_Vacuum_Reentry_Bit 13539
#define P_Blow_Reentry_Bit 13540
#define P_Status_arry 13541
#define P_Queue_arry 13561
#define P_Step_arry 13581
#define P_Index_arry 13601
#define P_top 13621
#define P_Queue_stack_top 13622
#define P_Step_stack_top 13623
#define P_Index_stack_top 13624
#define P_Status_stack_top 13625
#define NN_Step 13626
#define NN_Index 13627
#define P_PLC_Observser_MNTR 13628
#define P_PLC12_Frist 13633
#define P_SM_Auto_Run_Status_Management 13634
#define P_SM_Status_Main_Memory_Management 13635
#define P_SM_Cell_Memory_Management 13636
#define P_Test_Vacuum_Timer 13637
#define P_Test_Blow_Timer 13645
#define P_Vac_Test_Set_Time 13653
#define P_Blow_Test_Set_Time 13661
#define P_PLC12_Vacuum_Unit_Data 13669
#define P_PLC12_Blow_Unit_Data 13670
#define P_Stack_Algorithme_Cmd_Event_Status 13671
#define P_PLC12_vacuum_Event_Status 13672
#define P_PLC12_Blow_Event_status 13673
#define P_PLC12_vacuum_DIO_Observer_Status 13674
#define P_PLC12_Blow_DIO_Observer_Status 13675
#define P_Resetting_Vacuum_MNTR_State_Machine 13676
#define P_Heart_Bit_Time 13677
#define P_Dancer_Angle_Alarm_Timer_Flag 13678
#define P_Dancer_Angle_Alarm_Check_Timer 13679
#define P_BTN_LED_LAMP 13680
#define P_Old_BTN_LED_LAMP 13681
#define P_PLC_TO_PMAC_Work_Confirm_Operation_Cnt 13682
#define P_VISION_TO_PMAC_Work_Confirm_Operation_Ack_Cnt 13683
#define P_Ca_AT_Retry_Cal_Move_Complete 13684
#define P_An_AT_Retry_Cal_Move_Complete 13685
#define P_Ca_AT_Retry_Cal_Cnt 13686
#define P_An_AT_Retry_Cal_Cnt 13687
#define P_Ca_AT_Retry_Cal_Complete 13688
#define P_An_AT_Retry_Cal_Complete 13689
#define P_An_AT_Retry_Cal_Pass 13690
#define P_Ca_AT_Retry_Cal_Pass 13691
#define P_Ca_Picker_T_Turn_Cnt_Flag 13692
#define P_Ca_Picker_T_Turn_Cnt 13693
#define P_Ca_Picker_T_Home_Type 13694
#define P_An_Picker_T_Turn_Cnt_Flag 13695
#define P_An_Picker_T_Turn_Cnt 13696
#define P_An_Picker_T_Home_Type 13697
#define P_Flag_Vac_Status_Initialize 13698
#define P_SM_Vac_Initialize 13699
#define P_Flag_Anode_1st_Vac_OFF 13700
#define P_Flag_Anode_AT_Vac_OFF 13701
#define P_Flag_Anode_2nd_Vac_OFF 13702
#define P_Flag_Anode_NG_Vac_OFF 13703
#define P_Flag_Cathode_1st_Vac_OFF 13704
#define P_Flag_Cathode_AT_Vac_OFF 13705
#define P_Flag_Cathode_2nd_Vac_OFF 13706
#define P_Flag_Cathode_NG_Vac_OFF 13707
#define P_Flag_Anode_1st_Vac_Initial_Alarm 13708
#define P_Flag_Anode_AT_Vac_Initial_Alarm 13709
#define P_Flag_Anode_2nd_Vac_Initial_Alarm 13710
#define P_Flag_Anode_NG_Vac_Initial_Alarm 13711
#define P_Flag_Cathode_1st_Vac_Initial_Alarm 13712
#define P_Flag_Cathode_AT_Vac_Initial_Alarm 13713
#define P_Flag_Cathode_2nd_Vac_Initial_Alarm 13714
#define P_Flag_Cathode_NG_Vac_Initial_Alarm 13715
#define P_Middle_Discharge_Ignore_Total_Count 13716
#define P_Middle_Discharge_Ignore_Stack_Count 13717
#define P_Middle_Discharge_Ignore_ON_Signal 13718
#define P_Middle_Discharge_Ignore_OFF_Signal 13719
#define P_Middle_Discharge_Ignore_Cell_Count 13720
#define P_ARC_Middle_Discharge_Ignore_Vision_Check 13721
#define P_ARC_Middle_Discharge_Ignore_ON_Flag 13722
#define P_Middle_Discharge_Ignore_User_Sepa_Mode_Check 13723
#define P_Zero_Angle 13724
#define P_Zero_Length 13749
#define P_Homeoffset_Change_Flag 13774
#define P_Cal_Distance 13799
#define P_Cal_Denominator 13804
#define P_Cal_Numerator 13809
#define P_Cal_Dif_Deg 13814
#define P_Vac_Door_Open_Clear 13819
#define M_Y_Vacuum_Popup_On_Request 8353
#define M_X_Vacuum_Popup_On_Request_Ack 8354
#define M_Touchprobefunction 8355
#define M_Touchprobestatus 8404
#define P_Flag_Sepa_Stack_Mode_CHK 13832
#define P_Read_Timer_S 13833
#define P_Write_Timer_S 13842
#define P_Interval_Read_S 13851
#define P_Interval_Write_S 13860
#define P_UI_Jog_Vel_M 13869
#define P_Initialize_Read_Excom_Variables_Flag 13919
#define P_Old_X_Read_Count_S 13920
#define P_Cathode_Clamp_MC_Cylinder_Count 13929
#define P_Cathode_Clamp_OP_Cylinder_Count 13930
#define P_Anode_Clamp_MC_Cylinder_Count 13931
#define P_Anode_Clamp_OP_Cylinder_Count 13932
#define P_Cathode_1ST_TR_Cylinder_Count 8003
#define P_Anode_1ST_TR_Cylinder_Count 8004
#define P_BTN_Cathode_Clamp_inside_Machine_Cylinder_Count_Clear 13933
#define P_BTN_Cathode_Clamp_Middle_Cylinder_Count_Clear 13934
#define P_BTN_Cathode_Clamp_outside_Machine_Cylinder_Count_Clear 13935
#define P_BTN_Anode_Clamp_inside_Machine_Cylinder_Count_Clear 13936
#define P_BTN_Anode_Clamp_Middle_Cylinder_Count_Clear 13937
#define P_BTN_Anode_Clamp_outside_Machine_Cylinder_Count_Clear 13938
#define P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear 13939
#define P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear_Old 13940
#define P_BTN_Anode_1ST_TR_Cylinder_Count_Clear 13941
#define P_BTN_Anode_1ST_TR_Cylinder_Count_Clear_Old 13942
#define P_X_BTN_Manual_1 13943
#define P_X_BTN_Manual_2 14063
#define P_X_BTN_Manual_3 14183
#define P_Home_InterLock_M 14303
#define P_Status_BTN_Manual_1 14353
#define P_Status_BTN_Manual_2 14473
#define P_Status_BTN_Manual_Interlock_1 14593
#define P_Status_BTN_Manual_Interlock_2 14713
#define P_Status_BTN_Manual_Interlock_3 14833
#define P_Mode_Run_Enable_Flag 14953
#define P_RECIPE_PLC27_Manual_Interval 14958
#define P_RECIPE_PLC27_Auto_Interval 14959
#define P_MNTR_PLC4_Vision_Result 14960
#define P_PNP_Vac_Mode_Run_Enable_Flag 15161
#define P_Recipe_Speed_Value 15166
#define P_Slave6_Target_X_For_Cell_Out 15167
#define P_HCK_Step_MNTR 15168
#define P_Axis_Home_Pos 15218
#define P_Axis_Ready_Pos 15268
#define P_PMAC_Homing_CHK 15318
#define P_Poistion_error 15368
#define P_Home_Command 15369
#define P_Recipe_Count_Num 15419
#define L_Motor_Status_Update_Interval 15420
#define L_Motor_Recipe_Update_Interval 15421
#define P_UI_Servo_On_Off 15422
#define P_Old_BTN_Servo_On_Off_M 15423
#define P_Peak_Load_Ratio_M 15456
#define P_Chk_Current_Jog_Sel 15489
#define P_Jog_Sel_Count 15522
#define P_Recipe_POS_Interock_Num_Bit 15523
#define P_Recipe_VEL 15556
#define P_Recipe_POS 15567
#define P_BTN_Servo_On_Off_M 15578
#define P_BTN_Home_M 15611
#define P_BTN_Jog_Stop_M 15644
#define P_BTN_Recipe_POS_RUN_M 15677
#define P_Recipe_POS_Flag_M 15710
#define P_BTN_Jog_INC_M 15743
#define P_BTN_JOG_ABS_M 15776
#define P_User_Jog_Distance 15809
#define P_Unit_Command 15810
#define P_Unit_State_Machine 15910
#define P_Status_BTN_Manual_3 16010
#define P_Chk_Current_BTN_Sel 16110
#define P_BTN_Sel_Count 16160
#define P_PC_BTN_No 16161
#define P_BTN_Interlock_Update_Interval 16162
#define P_Align_Table_Status_Update_Interval 16163
#define P_Jelly_Roll_Total_Count_Old 16164
#define P_Old_m4120 16165
#define P_Old_m4121 16166
#define P_Old_m4122 16167
#define P_Old_m4123 16168
#define P_Linear_Encoder_Pos_Check_Flag 16169
#define P_Linear_Encoder_Pos 16174
#define P_Status_Linear_Encoder_HomeZero 16179
#define P_Command_Linear_Encoder_HomeZero 16184
#define P_Flag_Linear_Enc_Homezero_Complete_M17 16189
#define P_Flag_Linear_Enc_Homezero_Complete_M18 16190
#define P_Flag_Linear_Enc_Homezero_Complete_M19 16191
#define P_Flag_Linear_Enc_Homezero_Complete_M20 16192
#define P_CMD_Linear_ENC_Homezero_M17 16193
#define P_CMD_Linear_ENC_Homezero_M18 16194
#define P_CMD_Linear_ENC_Homezero_M19 16195
#define P_CMD_Linear_ENC_Homezero_M20 16196
#define P_OLD_Home_Offset 16197
#define P_RECIPE_PLC27_Alltime_Interval 16227
#define P_Manual_Memory_Tower_Timer 16228
#define P_Memory_Tower_Interval 16229
#define P_PLC_14_Status_Cycle_Stop_Flag 16230
#define P_Cathode_AlignTable_Cleaning_Pos_Status_Machine 16231
#define P_Anode_AlignTable_Cleaning_Pos_Status_Machine 16232
#define P_Status_Cathode_AlignTable_Cleaning_Pos 16233
#define P_Status_Anode_AlignTable_Cleaning_Pos 16234
#define P_CMD_Cathode_AlignTable_Cleaning_Pos 16235
#define P_CMD_Anode_AlignTable_Cleaning_Pos 16236
#define P_Cathode_2nd_pnp_Cleaning_Mode_Pos 16237
#define P_Anode_2nd_pnp_Cleaning_Mode_Pos 16238
#define P_Interlock_Test 16239
#define P_PNP_Picker_T_Pos 16240
#define P_NG_PNP_Pos 16241
#define M_Old_X_BTN_Machine_READY 16242
#define M_Old_X_BTN_Machine_START 16243
#define M_Old_X_BTN_Machine_STOP 16244
#define M_Old_X_BTN_Machine_RESET 16245
#define M_Old_X_BTN_Machine_MODE 16246
#define P_BTN_Motor_Pos_Check_RTN 16247
#define P_BTN_Memory_Tower_Check_Bit 16248
#define P_PMAC_Status_IDLE_Motor_Not_Pos 16249
#define P_PMAC_Status_IDLE_Motor_Pos 16250
#define P_BTN_Motor_Pos_Check_Monitor 16251
#define P_PackML_Auto_Stop_Bit 16252
#define P_BTN_IDLE_Motor_Not_Pos 16253
#define M_X_BTN_Machine_Mode 16254
#define M_Old_X_BTN_Machine_Mode 16255
#define P_Lamp_Blinking_Timer 16256
#define P_BTN_Ready_Lamp 16257
#define P_BTN_Start_Lamp 16258
#define P_BTN_Stop_Lamp 16259
#define P_ARC_Name_Plate_Passive_Status 16260
#define P_ARC_Passive_Status 16261
#define P_NP_Spool_Number 16262
#define P_ARC_Page_On 16263
#define P_ARC_NP_Upper_Timer 16264
#define P_ARC_Upper_Ready 16265
#define P_ARC_NP_Upper_3rd_Step_Toggle_Variable 16266
#define P_ARC_NP_Upper_7th_Step_Variable 16267
#define P_ARC_NP_Upper_7th_Step_Edge_Variable 16268
#define P_ARC_NP_Upper_Rot_ReRot_Blinking_Bit 16269
#define P_ARC_NP_Lower_Timer 16270
#define P_ARC_Lower_Ready 16271
#define P_ARC_NP_Lower_3rd_Step_Toggle_Variable 16272
#define P_ARC_NP_Lower_7th_Step_Variable 16273
#define P_ARC_NP_Lower_7th_Step_Edge_Variable 16274
#define P_ARC_NP_Lower_Rot_ReRot_Blinking_Bit 16275
#define M_Old_X_ARC_NP_Ready 16276
#define M_Old_X_ARC_NP_Unwinder_Rotation 16277
#define M_Old_X_ARC_NP_Unwinder_Re_Rotation 16278
#define P_Status_Clear_Flag 16279
#define P_Status_Clear_RTN 16280
#define P_MSA_BTN_On 16281
#define P_Align_Take_Off_BTN_ON 16282
#define P_ARC_NP_Upper_Ready_Check_Bit 16283
#define P_ARC_NP_Lower_Ready_Check_Bit 16284
#define P_PLC13_Cycle_Stop_Return_Array 16285
#define P_Stopping_CycleStop_Status 16385
#define P_Stopping_CycleStop_Seq_Index 16386
#define P_Stopping_CycleStop_Precondition_Seq_Index 16387
#define P_Stopping_CycleStop_Module_Status 16388
#define P_Stopping_CycleStop_Cmd 16389
#define P_Stopping_CycleStop_State_Machine 16390
#define P_Stopping_CycleStop_Act_State_Machine 16391
#define P_Module_Cycle_Stop_Act_State_Machine_Array 16411
#define P_Module_Cycle_Stop_Act_Complete_Bit 16431
#define P_Module_Cycle_Stop_Act_Command_Array 16451
#define P_OLD_Module_Cycle_Stop_Act_Command_Array 16471
#define P_Buffer_Seqdata_CycleStop_Array 16491
#define P_Final_Roll_Cathode_Pos_Status 16511
#define P_Sheet_Paper_FWD_Pos_Status 16512
#define P_Final_Roll_Vision_Pos_Status 16513
#define P_Cathode_Clamp_ON_Status 16514
#define P_Anode_Clamp_ON_Status 16515
#define P_Anode_Clamp_OFF_Status 16516
#define P_Partition_Up_Flag 16517
#define P_Partition_Down_Flag 16518
#define P_Partition_Avoid_Flag 16519
#define P_Partition_Avoid_Z_Speed 16520
#define P_Partition_Avoid_X_Speed 16521
#define P_Partition_Avoid_T_Speed 16522
#define P_Partition_Avoid_2nd_T_Pos 16523
#define P_Partition_Step_Flag 16524
#define P_Partition_1st_Avoid_Offset 16525
#define P_Partition_Picker_Avoid_Offset 16526
#define P_Partition_Avoid_Check 16527
#define P_Tact_Time_Timer 16528
#define P_Tack_Time_Save_Time 16568
#define P_Anode_NG_PNP_Tact_Time_Start 16608
#define P_Cathode_NG_PNP_Tact_Time_Start 16609
#define P_Anode_NG_PNP_Tact_Time_End 16610
#define P_Cathode_NG_PNP_Tact_Time_End 16611
#define P_Tact_Time_Stack_Array 16612
#define P_Tact_Time_Discharge_Array 16622
#define P_Tact_Time_1st_Unloader_Array 16632
#define P_Tact_Time_Sepa_ARC_Array 16642
#define P_Tact_Time_Final_Roll_Array 16652
#define P_Tact_Time_Cathode_1st_PNP_Array 16662
#define P_Tact_Time_Cathode_Align_Array 16672
#define P_Tact_Time_Cathode_2nd_PNP_Array 16682
#define P_Tact_Time_Cathode_Clamp_Array 16692
#define P_Tact_Time_Anode_1st_PNP_Array 16702
#define P_Tact_Time_Anode_Align_Array 16712
#define P_Tact_Time_Anode_2nd_PNP_Array 16722
#define P_Tact_Time_Anode_Clamp_Array 16732
#define P_Tact_Time_Cathode_1st_PNP_Vac_Array 16742
#define P_Tact_Time_Cathode_Align_PNP_Vac_Array 16752
#define P_Tact_Time_Cathode_2nd_PNP_Vac_Array 16762
#define P_Tact_Time_Anode_1st_PNP_Vac_Array 16772
#define P_Tact_Time_Anode_Align_PNP_Vac_Array 16782
#define P_Tact_Time_Anode_2nd_PNP_Vac_Array 16792
#define P_Tact_Time_Final_Roller_Clamp 16802
#define P_Tact_Time_Final_Roller_Unclamp 16803
#define P_Tact_Time_Stack_Table_Down 16804
#define P_Tact_Time_Stack_Table_Up 16805
#define P_Tact_Time_Sepa_Cutting_Down 16806
#define P_Tact_Time_Sepa_Cutting_Up 16807
#define P_Tact_Time_ARC_Upper_Plate_Up 16808
#define P_Tact_Time_ARC_Upper_Plate_Down 16809
#define P_Tact_Time_ARC_Upper_Tilting_On 16810
#define P_Tact_Time_ARC_Upper_Tilting_Off 16811
#define P_Tact_Time_ARC_Upper_Cutter_Fwd 16812
#define P_Tact_Time_ARC_Upper_Cutter_Bwd 16813
#define P_Tact_Time_ARC_Upper_Clamp_On 16814
#define P_Tact_Time_ARC_Upper_Clamp_Off 16815
#define P_Tact_Time_ARC_Lower_Plate_Up 16816
#define P_Tact_Time_ARC_Lower_Plate_Down 16817
#define P_Tact_Time_ARC_Lower_Tilting_On 16818
#define P_Tact_Time_ARC_Lower_Tilting_Off 16819
#define P_Tact_Time_ARC_Lower_Cutter_Fwd 16820
#define P_Tact_Time_ARC_Lower_Cutter_Bwd 16821
#define P_Tact_Time_ARC_Lower_Clamp_On 16822
#define P_Tact_Time_ARC_Lower_Clamp_Off 16823
#define P_Tact_Time_Save_Final_Roller_Clamp_Time 16824
#define P_Tact_Time_Save_Final_Roller_Unclamp_Time 16825
#define P_Tact_Time_Save_Stack_Table_Down_Time 16826
#define P_Tact_Time_Save_Stack_Table_Up_Time 16827
#define P_Tact_Time_Save_Sepa_Cutting_Down_Time 16828
#define P_Tact_Time_Save_Sepa_Cutting_Up_Time 16829
#define P_Tact_Time_Save_ARC_Upper_Plate_Up_Time 16830
#define P_Tact_Time_Save_ARC_Upper_Plate_Down_Time 16831
#define P_Tact_Time_Save_ARC_Upper_Tilting_On_Time 16832
#define P_Tact_Time_Save_ARC_Upper_Tilting_Off_Time 16833
#define P_Tact_Time_Save_ARC_Upper_Cutter_Fwd_Time 16834
#define P_Tact_Time_Save_ARC_Upper_Cutter_Bwd_Time 16835
#define P_Tact_Time_Save_ARC_Upper_Clamp_On_Time 16836
#define P_Tact_Time_Save_ARC_Upper_Clamp_Off_Time 16837
#define P_Tact_Time_Save_ARC_Lower_Plate_Up_Time 16838
#define P_Tact_Time_Save_ARC_Lower_Plate_Down_Time 16839
#define P_Tact_Time_Save_ARC_Lower_Tilting_On_Time 16840
#define P_Tact_Time_Save_ARC_Lower_Tilting_Off_Time 16841
#define P_Tact_Time_Save_ARC_Lower_Cutter_Fwd_Time 16842
#define P_Tact_Time_Save_ARC_Lower_Cutter_Bwd_Time 16843
#define P_Tact_Time_Save_ARC_Lower_Clamp_On_Time 16844
#define P_Tact_Time_Save_ARC_Lower_Clamp_Off_Time 16845
#define P_Tact_Time_Check 16846
#define P_Old_Tact_Time_Check 16886
#define P_Tact_Time_Head_Address 16926
#define P_Tact_Time_Array_Init 16966
#define P_Last_Run_To_Discharge_Tact_Timer 16967
#define P_Last_Run_To_Discharge_Tact_Time 16968
#define P_Master_Trigger_Sync_Tact_Timer 16969
#define P_Master_Trigger_Sync_Tact_Time 16970
#define P_Vision_First_Sepa_Stack_Align_OK_PMAC_Flag 16971
#define P_PLC18_EPC_Retry_Mode_Time_Use_Flag 16972
#define P_PLC18_Vision_EPC_Correction_Request_Old 16973
#define P_PLC18_EPC_Moving_Flag 16974
#define P_PLC18_EPC_Moving_Status 16975
#define P_PLC18_EPC_Move_State_Machine 16976
#define P_PLC18_EPC_Move_Status 16977
#define P_PLC18_EPC_inspection_Time 16978
#define P_EPC_Insp_Time 16979
#define P_EPC_Correction_Time 16980
#define P_TEST_Max_EPC_Sensor_Value_um 16981
#define P_PLC18_EPC_Moving_Timer 16982
#define P_EPC_MNTR_VAR 16983
#define P_EPC_Axis_Target_Y 16993
#define P_Com_After_Sepa_Mode_Status 16994
#define P_PLC18_PLC_to_PMAC_Correction_Value 16995
#define P_PLC_EPC_Status 16996
#define P_EPC_Retry_Over_Alarm_Flag 16997
#define P_ARC_EPC_Vision_Value_Apply_Bit 16998
#define P_ARC_EPC_Vision_Value_Apply_Flag 16999
#define P_ARC_EPC_Vision_Value_Apply_State_Machine 17000
#define P_ARC_EPC_Vision_Value_Apply_Timer 17001
#define P_ARC_EPC_Vision_Value_Apply_Time 17002
#define P_AH_Home_Status 17003
#define P_Resetting_All_Home_Command 17004
#define P_Homing_Alarm_Time 17005
#define P_Home_Check_Arry 17006
#define P_All_Home_Stop_Cmd 17056
#define P_Home_First_Move 17057
#define P_PWM_Phasing_Start 17058
#define P_PWM_Status 17063
#define P_PWM_State_Machine 17068
#define P_AH_Seq_arr 17073
#define P_DD_M_Home_ABS_Pos 17088
#define P_AH_Indvi_rtn 17093
#define P_DD_M_Home_Pos_Flag 17144
#define P_WAIT_INDEX 17145
#define P_Home_Check_Arry1 17146
#define P_FR_Cmd_Check_Flag 17196
#define M_Ecat_Motor_State 8453
#define P_PV_Separator_Dancer_Pressure 17197
#define P_PV_Cathode_Clamp_Pressure 17198
#define P_PV_Anoode_Clamp_Pressure 17199
#define P_PV_Cathode_Final_Roller_X_Axis 17200
#define P_PV_Anode_Final_Roller_X_Axis 17201
#define P_PV_Cathode_Clamp_ON_Y1_Axis_Pos 17202
#define P_PV_Cathode_Clamp_ON_Y2_Axis_Pos 17203
#define P_PV_Cathode_Clamp_ON_Z1_Axis_Pos 17204
#define P_PV_Cathode_Clamp_ON_Z2_Axis_Pos 17205
#define P_PV_Anode_Clamp_ON_Y1_Axis_Pos 17206
#define P_PV_Anode_Clamp_ON_Y2_Axis_Pos 17207
#define P_PV_Anode_Clamp_ON_Z1_Axis_Pos 17208
#define P_PV_Anode_Clamp_ON_Z2_Axis_Pos 17209
#define P_PV_Cathode_2th_AT_T_Axis_Pos 17210
#define P_PV_Cathode_2th_ST_T_Axis_Pos 17211
#define P_PV_Cathode_2th_AT_Z_Axis_Pos 17212
#define P_PV_Cathode_2th_ST_Z_Axis_Pos 17213
#define P_PV_Anode_2th_AT_T_Axis_Pos 17214
#define P_PV_Anode_2th_ST_T_Axis_Pos 17215
#define P_PV_Anode_2th_AT_Z_Axis_Pos 17216
#define P_PV_Anode_2th_ST_Z_Axis_Pos 17217
#define P_PV_Cathode_1th_Ready_T_Axis_Pos 17218
#define P_PV_Cathode_1th_CV_T_Axis_Pos 17219
#define P_PV_Cathode_1th_AT_T_Axis_Pos 17220
#define P_PV_Cathode_1th_Ready_Z_Axis_Pos 17221
#define P_PV_Cathode_1th_CV_Z_Axis_Pos 17222
#define P_PV_Cathode_1th_AT_Z_Axis_Pos 17223
#define P_PV_Anode_1th_Ready_T_Axis_Pos 17224
#define P_PV_Anode_1th_CV_T_Axis_Pos 17225
#define P_PV_Anode_1th_AT_T_Axis_Pos 17226
#define P_PV_Anode_1th_Ready_Z_Axis_Pos 17227
#define P_PV_Anode_1th_CV_Z_Axis_Pos 17228
#define P_PV_Anode_1th_AT_Z_Axis_Pos 17229
#define P_PV_Cathode_NG_AT_T_Axis_Pos 17230
#define P_PV_Cathode_NG_Box_T_Axis_Pos 17231
#define P_PV_Anode_NG_AT_T_Axis_Pos 17232
#define P_PV_Anode_NG_Box_T_Axis_Pos 17233
#define P_PV_1st_Unloader_X_Axis_Pos 17234
#define P_PV_1st_Unloader_Z_Axis_Pos 17235
#define P_SemiRun_Separator_Dancer_Pressure_Flag 17236
#define P_SemiRun_Cathode_Clamp_Pressure_Flag 17237
#define P_SemiRun_Anoode_Clamp_Pressure_Flag 17238
#define P_SemiRun_Cathode_Final_Roller_X_Axis_Flag 17239
#define P_SemiRun_Anode_Final_Roller_X_Axis_Flag 17240
#define P_SemiRun_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag 17241
#define P_SemiRun_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag 17242
#define P_SemiRun_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag 17243
#define P_SemiRun_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag 17244
#define P_SemiRun_Cathode_2th_AT_T_Axis_Pos_Flag 17245
#define P_SemiRun_Cathode_2th_ST_T_Axis_Pos_Flag 17246
#define P_SemiRun_Cathode_2th_AT_Z_Axis_Pos_Flag 17247
#define P_SemiRun_Cathode_2th_ST_Z_Axis_Pos_Flag 17248
#define P_SemiRun_Anode_2th_AT_T_Axis_Pos_Flag 17249
#define P_SemiRun_Anode_2th_ST_T_Axis_Pos_Flag 17250
#define P_SemiRun_Anode_2th_AT_Z_Axis_Pos_Flag 17251
#define P_SemiRun_Anode_2th_ST_Z_Axis_Pos_Flag 17252
#define P_SemiRun_Cathode_1th_Ready_T_Axis_Pos_Flag 17253
#define P_SemiRun_Cathode_1th_CV_T_Axis_Pos_Flag 17254
#define P_SemiRun_Cathode_1th_AT_T_Axis_Pos_Flag 17255
#define P_SemiRun_Cathode_1th_Ready_Z_Axis_Pos_Flag 17256
#define P_SemiRun_Cathode_1th_CV_Z_Axis_Pos_Flag 17257
#define P_SemiRun_Cathode_1th_AT_Z_Axis_Pos_Flag 17258
#define P_SemiRun_Anode_1th_Ready_T_Axis_Pos_Flag 17259
#define P_SemiRun_Anode_1th_CV_T_Axis_Pos_Flag 17260
#define P_SemiRun_Anode_1th_AT_T_Axis_Pos_Flag 17261
#define P_SemiRun_Anode_1th_Ready_Z_Axis_Pos_Flag 17262
#define P_SemiRun_Anode_1th_CV_Z_Axis_Pos_Flag 17263
#define P_SemiRun_Anode_1th_AT_Z_Axis_Pos_Flag 17264
#define P_SemiRun_Cathode_NG_AT_T_Axis_Pos_Flag 17265
#define P_SemiRun_Cathode_NG_Box_T_Axis_Pos_Flag 17266
#define P_SemiRun_Anode_NG_AT_T_Axis_Pos_Flag 17267
#define P_SemiRun_Anode_NG_Box_T_Axis_Pos_Flag 17268
#define P_SemiRun_1st_Unloader_Forward_Pos_Flag 17269
#define P_Motion_Separator_Dancer_Pressure_Flag 17270
#define P_Motion_Cathode_Clamp_Pressure_Flag 17271
#define P_Motion_Anoode_Clamp_Pressure_Flag 17272
#define P_Motion_Cathode_Final_Roller_X_Axis_Flag 17273
#define P_Motion_Anode_Final_Roller_X_Axis_Flag 17274
#define P_Motion_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag 17275
#define P_Motion_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag 17276
#define P_Motion_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag 17277
#define P_Motion_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag 17278
#define P_Motion_Cathode_2th_AT_T_Axis_Pos_Flag 17279
#define P_Motion_Cathode_2th_ST_T_Axis_Pos_Flag 17280
#define P_Motion_Cathode_2th_AT_Z_Axis_Pos_Flag 17281
#define P_Motion_Cathode_2th_ST_Z_Axis_Pos_Flag 17282
#define P_Motion_Anode_2th_AT_T_Axis_Pos_Flag 17283
#define P_Motion_Anode_2th_ST_T_Axis_Pos_Flag 17284
#define P_Motion_Anode_2th_AT_Z_Axis_Pos_Flag 17285
#define P_Motion_Anode_2th_ST_Z_Axis_Pos_Flag 17286
#define P_Motion_Cathode_1th_Ready_T_Axis_Pos_Flag 17287
#define P_Motion_Cathode_1th_CV_T_Axis_Pos_Flag 17288
#define P_Motion_Cathode_1th_AT_T_Axis_Pos_Flag 17289
#define P_Motion_Cathode_1th_Ready_Z_Axis_Pos_Flag 17290
#define P_Motion_Cathode_1th_CV_Z_Axis_Pos_Flag 17291
#define P_Motion_Cathode_1th_AT_Z_Axis_Pos_Flag 17292
#define P_Motion_Anode_1th_Ready_T_Axis_Pos_Flag 17293
#define P_Motion_Anode_1th_CV_T_Axis_Pos_Flag 17294
#define P_Motion_Anode_1th_AT_T_Axis_Pos_Flag 17295
#define P_Motion_Anode_1th_Ready_Z_Axis_Pos_Flag 17296
#define P_Motion_Anode_1th_CV_Z_Axis_Pos_Flag 17297
#define P_Motion_Anode_1th_AT_Z_Axis_Pos_Flag 17298
#define P_Motion_Cathode_NG_AT_T_Axis_Pos_Flag 17299
#define P_Motion_Cathode_NG_Box_T_Axis_Pos_Flag 17300
#define P_Motion_Anode_NG_AT_T_Axis_Pos_Flag 17301
#define P_Motion_Anode_NG_Box_T_Axis_Pos_Flag 17302
#define P_Motion_1st_Unloader_Forward_Pos_Flag 17303
#define P_Cathode_1PNP_Sacle_Value 17304
#define P_Cathode_2PNP_Sacle_Value 17305
#define P_Anode_1PNP_Sacle_Value 17306
#define P_Anode_2PNP_Sacle_Value 17307
#define P_PLC01_SemiRun_PV_Flag 17308
#define P_PV_EPC_Index 17309
#define P_PV_EPC_Camera_Pos 17310
#define P_BTN_MSA_Total_Value 17325
#define P_Vision_Align_Trigger_Timer 17326
#define P_Vision_Stack_Trigger_Timer 17327
#define P_MSA_Chk_Pos_Timer 17328
#define P_MSA_Chk_Pos_Time 17329
#define P_VISION_MSA_Status_Prod_Sequence 17330
#define P_VISION_MSA_Seq_Index 17350
#define P_VISION_MSA_Anode_Align_Bit_Pos 17351
#define P_VISION_MSA_Seq_PreCondition_Index 17352
#define P_MSA_CycleStop_Point_Check_Complete_RTN 17353
#define P_MSA_Cmd 17354
#define P_Current_Anode_Align_MSA_Run_Count 17359
#define P_Current_Cathode_Align_MSA_Run_Count 17360
#define P_Current_Anode_Stack_MSA_Run_Count 17361
#define P_Current_Cathode_Stack_MSA_Run_Count 17362
#define P_VISION_MSA_Align_Count_Chk_Flag 17363
#define P_VISION_MSA_Stack_Count_Chk_Flag 17364
#define P_VISION_MSA_pre_InterLock_Cmd 17365
#define P_VISION_MSA_pre_InterLock_Status 17366
#define P_VISION_MSA_pre_InterLock_Check_Assy_Bit 17367
#define P_VISION_MSA_pre_InterLock_Assy_Bit_Pos 17368
#define P_Vision_MSA_Interlock_Status 17369
#define P_VISION_MSA_MODE 17370
#define P_VISION_MSA_Status_Flag 17371
#define P_VISION_MSA_State_Machine 17372
#define P_VISION_MSA_Status 17373
#define P_VISION_MSA_Seq_Command_Occurs 17374
#define P_Vision_Align_Trigger_Time 17375
#define P_Anode_Align_MSA_Motion_Check 17376
#define P_Cathode_Align_MSA_Motion_Check 17377
#define P_Anode_Stack_MSA_Motion_Check 17378
#define P_Cathode_Stack_MSA_Motion_Check 17379
#define P_Anode_Align_MSA_Motion_ProgActive_Complete 17380
#define P_Cathode_Align_MSA_Motion_ProgActive_Complete 17381
#define P_Anode_Stack_MSA_Motion_ProgActive_Complete 17382
#define P_Cathode_Stack_MSA_Motion_ProgActive_Complete 17383
#define P_BTN_Align_Off_Total_Value 17384
#define P_Align_Take_Off_Cmd 17385
#define P_Align_Take_Off_Status 17388
#define P_Align_Take_Off_Mode 17389
#define P_Align_Take_Off_Status_Flag 17390
#define P_Align_Take_Off_State_Machine 17391
#define P_Align_Take_Off_Chk_Pos_Timer 17392
#define P_Align_Take_Off_Motor_Check_Complete 17393
#define P_Align_Take_Off_Speed_Return_Complete 17394
#define P_Align_Take_Off_Interlock_Status 17395
#define P_Align_Take_Off_pre_InterLock_Cmd 17396
#define P_Align_Take_Off_pre_InterLock_Status 17397
#define P_Align_Take_Off_pre_InterLock_Check_Assy_Bit 17398
#define P_Align_Take_Off_pre_InterLock_Assy_Bit_Pos 17399
#define P_Align_Take_Off_Seq_Index 17400
#define P_Align_Take_Off_Seq_PreCondition_Index 17401
#define P_Align_Take_Off_Status_Prod_Sequence 17402
#define P_Align_Take_Off_Stop_Signal 17422
#define P_Vision_Cal_Reset_Count 17423
#define P_2nd_PNP_Cleaning_Mode_Cmd 17424
#define P_2nd_PNP_Cleaning_Mode_Status 17425
#define P_2nd_PNP_Cleaning_Mode_Z_Jog_Speed 17426
#define P_2nd_PNP_Cleaning_Mode_X_Jog_Speed 17427
#define P_2nd_PNP_Cleaning_Mode_T_Jog_Speed 17428
#define P_2nd_PNP_Cleaning_Avoid_2nd_T_Pos 17429
#define P_PNP_Vac_Chk_Mode_Interlock 17430
#define P_Vac_Chk_Test 17431
#define P_Anode_1st_PNP_Vac_Chk_Mode_Blocked 17432
#define P_Cathode_1st_PNP_Vac_Chk_Mode_Blocked 17433
#define P_Anode_2nd_PNP_Vac_Chk_Mode_Blocked 17434
#define P_Cathode_2nd_PNP_Vac_Chk_Mode_Blocked 17435
#define P_SM_Anode_1st_PNP_Vac_Chk_Mode 17436
#define P_SM_Cathode_1st_PNP_Vac_Chk_Mode 17437
#define P_SM_Anode_2nd_PNP_Vac_Chk_Mode 17438
#define P_SM_Cathode_2nd_PNP_Vac_Chk_Mode 17439
#define P_Anode_1st_PNP_Vac_Chk_Execute_Timer 17440
#define P_Cathode_1st_PNP_Vac_Chk_Execute_Timer 17441
#define P_Anode_2nd_PNP_Vac_Chk_Execute_Timer 17442
#define P_Cathode_2nd_PNP_Vac_Chk_Execute_Timer 17443
#define P_Anode_1st_PNP_Vac_Check_Timer 17444
#define P_Cathode_1st_PNP_Vac_Check_Timer 17445
#define P_Anode_2nd_PNP_Vac_Check_Timer 17446
#define P_Cathode_2nd_PNP_Vac_Check_Timer 17447
#define P_Anode_1st_PNP_Vac_Chk_Status 17448
#define P_Cathode_1st_PNP_Vac_Chk_Status 17449
#define P_Anode_2nd_PNP_Vac_Chk_Status 17450
#define P_Cathode_2nd_PNP_Vac_Chk_Status 17451
#define P_Anode_1st_PNP_Vac_Chk_Mode_Stop_Blocked 17452
#define P_Cathode_1st_PNP_Vac_Chk_Mode_Stop_Blocked 17453
#define P_Anode_2nd_PNP_Vac_Chk_Mode_Stop_Blocked 17454
#define P_Cathode_2nd_PNP_Vac_Chk_Mode_Stop_Blocked 17455
#define P_Anode_1st_PnP_Vac_Chk_Mode_RTN 17456
#define P_Cathode_1st_PnP_Vac_Chk_Mode_RTN 17457
#define P_Anode_2nd_PnP_Vac_Chk_Mode_RTN 17458
#define P_Cathode_2nd_PnP_Vac_Chk_Mode_RTN 17459
#define P_PNP_Vac_Chk_Mode_TimeBase_Rtn 17460
#define P_PNP_Vac_Chk_Mode_Timer 17461
#define P_Anode_1st_PNP_Vac_Chk_Mode_Err 17462
#define P_Cathode_1st_PNP_Vac_Chk_Mode_Err 17463
#define P_Anode_2nd_PNP_Vac_Chk_Mode_Err 17464
#define P_Cathode_2nd_PNP_Vac_Chk_Mode_Err 17465
#define P_PNP_Vac_Chk_Mode_BTN_Err 17466
#define P_BTN_CA_1st_PNP_Vac_Chk_Mode 17467
#define P_BTN_AN_1st_PNP_Vac_Chk_Mode 17468
#define P_BTN_CA_2nd_PNP_Vac_Chk_Mode 17469
#define P_BTN_AN_2nd_PNP_Vac_Chk_Mode 17470
#define P_Old_Upper_Sensor 17471
#define P_Edge_Upper_Sensor 17479
#define P_Old_Lower_Sensor 17487
#define P_Edge_Lower_Sensor 17495
#define P_Edge_NP_BTN 17503
#define P_Old_ARC_Upper_Tilting_Status 17505
#define P_Old_ARC_Lower_Tilting_Status 17506
#define P_ARC_Tilting_Unwinder_Move_Dis 17507
#define P_ARC_Tilting_Unwinder_Move_Motor_Num 17508
#define P_ARC_Tilting_Unwinder_Move_State_Machine 17509
#define P_ARC_Tilting_Unwinder_Move_Status 17510
#define P_ARC_Tilting_Unwinder_Move_Chk_Timer 17511
#define P_ARC_Tilting_Unwinder_Move_Chk_Time 17512
#define P_MSA_Cathode_Blow_Time 17513
#define P_MSA_Cathode_Vac_Time 17514
#define P_MES_FR_Avoid_Z_Tm 17515
#define P_MES_FR_Avoid_Z_Ta 17516
#define P_MES_FR_Avoid_Z_Ts 17517
#define P_MES_FR_Avoid_X_Tm 17518
#define P_MES_FR_Avoid_X_Ta 17519
#define P_MES_FR_Avoid_X_Ts 17520
#define P_UI_Unit_Status 17521
#define P_Motor_Unit_Status 17531
#define P_Current_Homming_Status_To_PLC 17581
#define P_System_Cascading_ON_Cmd 17631
#define P_System_Cascading_OFF_Cmd 17632
#define P_System_Master_Following_ON_Cmd 17633
#define P_System_Master_Following_OFF_Cmd 17634
#define P_System_CamTable_ON_Cmd 17635
#define P_System_CamTable_OFF_Cmd 17636
#define P_System_Spool_Home_Ready_Pos_Cmd 17637
#define P_System_Cascading_ON_Status 17638
#define P_System_Cascading_OFF_Status 17639
#define P_System_Master_Following_ON_Status 17640
#define P_System_Master_Following_OFF_Status 17641
#define P_System_CamTable_ON_Status 17642
#define P_System_CamTable_OFF_Status 17643
#define P_System_Spool_Home_Ready_Pos_Status 17644
#define P_System_Cascading_ON_State_Machine 17645
#define P_System_Cascading_OFF_State_Machine 17646
#define P_System_Master_Follwing_ON_State_Machine 17647
#define P_System_Master_Follwing_OFF_State_Machine 17648
#define P_System_CamTable_ON_State_Machine 17649
#define P_System_CamTable_OFF_State_Machine 17650
#define P_System_Spool_Home_Ready_Pos_State_Machine 17651
#define P_System_Cascading_ON_Complete_Flag 17652
#define P_System_Cascading_OFF_Complete_Flag 17653
#define P_System_Master_Following_ON_Complete_Flag 17654
#define P_System_Master_Following_OFF_Complete_Flag 17655
#define P_System_CamTable_ON_Complete_Flag 17656
#define P_System_CamTable_OFF_Complete_Flag 17657
#define P_System_Spool_Home_Ready_Pos_Complete_Flag 17658
#define P_Servo_Dancer_Cascading_Off_Timer 17659
#define P_Servo_Dancer_Cascading_Set_Timer 17660
#define P_Dancer_Frist_Home_Ready_Pos_Timer 17661
#define P_Driving_Motor_Use_Flag 17662
#define P_Home_Spool_Unwinding 17663
#define P_OutValue 17664
#define P_Dancer_Out_Slew_Seq 17665
#define P_OutChangeValue 17666
#define P_Rot_OutValue 17667
#define P_OutChangeTime 17668
#define P_AO_Module_Arr 17669
#define P_AO_Range_Set_Value 17674
#define P_Regul_Max_kPa_Value 17679
#define P_Regul_Min_kPa_Value 17680
#define P_Regul_Max_AD 17681
#define P_Regul_Min_AD 17682
#define P_Current_Max_Value 17683
#define P_Current_Min_Value 17684
#define P_Current_Max_AD 17685
#define P_Current_Min_AD 17686
#define P_Sepa_Cal_Inclination 17687
#define P_Regul_Cal_Inclination 17688
#define P_Cutter_Heat_Amp_Data_Bit 17689
#define P_Cut_Heat_Amp_Value 17690
#define P_AI_Cathode_Clamp_Damper_AVG 17691
#define P_AI_Anode_Clamp_Damper_AVG 17692
#define P_Tension_Ready_Pos_Cmd 17693
#define P_Tension_Ready_State_Machine 17694
#define P_Tension_Ready_Pos_Status 17695
#define P_Dancer_Center_Pos 17696
#define P_Upper_Sepa_Cal_Inclination 17697
#define P_Lower_Sepa_Cal_Inclination 17698
#define P_Unwinder_Jogspeed 17699
#define P_Cascading_First_Out 17700
#define P_Dancer_Cur_Vdc 17701
#define P_Dancer_Cur_Torque 17702
#define P_Dancer_Cur_Newton 17703
#define P_Dancer_Cur_Kgf 17704
#define P_Board_IO_Count 17705
#define P_Force_BTN_Address_Clear_Count 17706
#define P_Force_BTN_M_Variable_Save 17707
#define P_Force_BTN_Condition_Count 18091
#define P_Old_Force_BTN_Mode 18092
#define P_Force_BTN_Address_Count 18093
#define P_Force_BTN_GPIO_Address_Count 18094
#define P_Force_BTN_Ecat_Address_Count 18095
#define P_Force_BTN_M_Variable_Save_Count 18096
#define P_Force_BTN_M_Variable_Start_Num 18097
#define P_Force_BTN_Normal_Mode_Status 18098
#define P_Force_BTN_Normal_Mode_State_Machine 18099
#define P_Force_BTN_Normal_Mode_Complete_Flag 18100
#define P_Force_BTN_Force_Mode_Timer 18101
#define P_Force_BTN_Force_Mode_Delay_Time 18102
#define P_Force_BTN_Force_Mode_Status 18103
#define P_Force_BTN_Force_Mode_State_Machine 18104
#define P_Force_BTN_Force_Mode_Complete_Flag 18105
#define P_Mem_Save_Error_Bit 18106
#define P_ABS_Phasing_Data 18107
#define P_ABS_Home_Offset_Data 18112
#define P_Servo_Gain_Save_Command 18117
#define P_Servo_Gain_Load_Command 18118
#define P_Servo_Gain_Save_Flag 18119
#define P_Servo_Gain_Load_Flag 18120
#define P_Servo_Gain_Kp 18121
#define P_Servo_Gain_Kvfb 18151
#define P_Servo_Gain_Kvff 18181
#define P_Servo_Gain_Ki 18211
#define P_Servo_Gain_SwZvInt 18241
#define P_Servo_Gain_Kaff 18271
#define P_Insert_Phase_Flag 18301
#define P_Alarm_Arr 18302
#define P_Alarm_Occur_Flag 18402
#define P_Alarm_Occur_Index_Flag 18403
#define P_Alarm_Wait_Time 18407
#define P_Alarm_Delay_Timer 18408
#define P_Compare_Priority 18409
#define P_Alarm_Report 18410
#define P_Alarm_Num 18411
#define P_Alarm_Index 18412
#define P_First_Alarm_Flag 18413
#define P_First_Alarm_Log 18414
#define P_Servo_Alarm_Check 18444
#define P_Ecat_Servo_Alarm_Check 18445
#define M_SysTimer 8503
#define P_Alarm_Count 18446
#define P_Alarm_Get_Flag 18447
#define P_Alarm_Sort_Time 18448
#define P_Alarm_Frist_Flag 18449
#define P_Alarm_Delay_time 18450
#define P_Alarm_duplicate_Check_Arr 18451
#define P_Alarm_Time_Log 19121
#define P_Alarm_Log 19171
#define P_Old_Drive_Alarm 19221
#define P_IL_ON_OFF_Flag 19271
#define P_IL_Coord_Robot 19272
#define P_IL_Robot_Bit 19273
#define P_IL_Outer_Status 19274
#define P_Robot_Unit_Serch_Flag 19275
#define P_IL_Home_Chk_Edge 19276
#define P_Limit_PosData 19277
#define P_IL_Sprint 19280
#define P_IL_length 19281
#define P_IL_Strcat 19282
#define P_IL_Popup_Motor 19283
#define P_IL_Motor_Page 19284
#define P_IL_Recipe_Bit 19285
#define P_Interlock_Popup_On_Flag 19286
#define P_Motor_Page 19287
#define M_Motor_BTN_Info 8504
#define P_OP_Side_Ca_PNP_Pos 19288
#define P_OP_Side_An_PNP_Pos 19289
#define P_OP_Side_PMAC_Cur_Mode 19290
#define P_Abs_Trans_Cur_Pos 19291
#define P_Minus_IL_Offset 19292
#define P_Plus_IL_Offset 19293
#define P_2nd_PNP_Arm_Radius 19294
#define P_IL_Enable_Flag 19295
#define P_Plus_Interlock_Bit 19296
#define P_Minus_Interlock_Bit 19297
#define UPPos 19298
#define Unloader_In_StackPos 19299
#define FR_AnodePos 19300
#define FR_CathodePos 19301
#define Before_In_Stack 19302
#define In_Stack 19303
#define P_Collision_Risk_Motor 19304
#define P_Minus_Collision_Risk_Motor 19306
#define P_IL_Clamp_Y 19307
#define P_IL_Clamp_Z 19308
#define P_IL_Clamp_Pos 19309
#define P_IL_Use_FR_Clamp_Pos 19310
#define P_P_IL_Normal_Pos_Offset 19311
#define P_M_IL_Normal_Pos_Offset 19361
#define P_P_IL_Upper_Pos_Offset 19411
#define P_M_IL_Upper_Pos_Offset 19461
#define P_P_IL_Align_Pos_Offset 19511
#define P_M_IL_Align_Pos_Offset 19561
#define P_P_IL_Stack_Pos_Offset 19611
#define P_M_IL_Stack_Pos_Offset 19661
#define P_Ca_1st_Plus_IL_Offset 19711
#define P_Ca_1st_Minus_IL_Offset 19712
#define P_An_1st_Plus_IL_Offset 19713
#define P_An_1st_Minus_IL_Offset 19714
#define P_Ca_2nd_T_Plus_IL_Offset 19715
#define P_Ca_2nd_T_Minus_IL_Offset 19718
#define P_Ca_2nd_Z_Plus_IL_Offset 19721
#define P_Ca_2nd_Z_Minus_IL_Offset 19723
#define P_An_2nd_T_Plus_IL_Offset 19725
#define P_An_2nd_T_Minus_IL_Offset 19728
#define P_An_2nd_Z_Minus_IL_Offset 19731
#define P_Z_Pos_Data 19733
#define P_Clamp_Z_Plus_IL_Offset 19734
#define P_FR_X_Plus_IL_Offset 19735
#define P_FR_X_Minus_IL_Offset 19737
#define P_FR_Z_Minus_IL_Offset 19739
#define P_Ca_NG_PNP_Plus_IL_Offset 19740
#define P_Ca_NG_PNP_Minus_IL_Offset 19744
#define P_An_NG_PNP_Plus_IL_Offset 19748
#define P_An_NG_PNP_Minus_IL_Offset 19752
#define P_Unloader_X_Plus_IL_Offset 19756
#define P_Unloader_X_Minus_IL_Offset 19760
#define P_Unloader_Z_Plus_IL_Offset 19764
#define P_Unloader_Z_Minus_IL_Offset 19767
#define P_IL_In_Offset 19770
#define P_X_PLC_InterLock 19795
#define P_IL_Home_Chk 19796
#define P_IL_Home_Chk_Motor_Num 19797
#define P_IL_Home_Chk_Motor_Update 19817
#define P_IL_Inside_Home_Chk_Complete 19818
#define P_IL_Outside_Home_Chk_Complete 19819
#define P_IL_Motor_Home_Chk_RTN 19820
#define P_IL_Function_Cnt 19821
#define P_IL_Function_Motor_Num 19822
#define P_Jog_Page_Flag 19823
#define P_Jog_Btn_Flag 19824
#define P_Old_Jog_Btn_Flag 19825
#define P_Anode_1st_TR_Belt_Down_Flag 19826
#define P_Anode_1st_TR_Belt_Pick_Up_Flag 19827
#define P_Anode_1st_TR_Align_Down_Flag 19828
#define P_Anode_2nd_TR_Align_Pick_Up_Flag 19829
#define P_Anode_2nd_TR_Stack_Down_Flag 19830
#define P_Anode_NG_TR_Align_Pick_Up_Flag 19831
#define P_Anode_NG_TR_NG_Place_Down_Flag 19832
#define P_Anode_2nd_TR_Align_Down_Flag 19833
#define P_Anode_1st_TR_Align_Pick_Up_Flag 19834
#define P_Anode_1st_TR_Belt_Down_State_Machine 19835
#define P_Anode_1st_TR_Belt_Down_Status 19836
#define P_Anode_1st_TR_Belt_Pick_Up_State_Machine 19837
#define P_Anode_1st_TR_Belt_Pick_Up_Status 19838
#define P_Anode_1st_TR_Align_Down_State_Machine 19839
#define P_Anode_1st_TR_Align_Down_Status 19840
#define P_Anode_2nd_TR_Align_Pick_Up_State_Machine 19841
#define P_Anode_2nd_TR_Align_Pick_Up_Status 19842
#define P_Anode_2nd_TR_Stack_Down_State_Machine 19843
#define P_Anode_2nd_TR_Stack_Down_Status 19844
#define P_Anode_NG_TR_Align_Pick_Up_State_Machine 19845
#define P_Anode_NG_TR_Align_Pick_Up_Status 19846
#define P_Anode_NG_TR_NG_Place_Down_State_Machine 19847
#define P_Anode_NG_TR_NG_Place_Down_Status 19848
#define P_Anode_2nd_TR_Align_Down_State_Machine 19849
#define P_Anode_2nd_TR_Align_Down_Status 19850
#define P_Anode_1st_TR_Align_Pick_Up_State_Machine 19851
#define P_Anode_1st_TR_Align_Pick_Up_Status 19852
#define P_Cathode_1st_TR_Belt_Down_Flag 19853
#define P_Cathode_1st_TR_Belt_Pick_Up_Flag 19854
#define P_Cathode_1st_TR_Align_Down_Flag 19855
#define P_Cathode_2nd_TR_Align_Pick_Up_Flag 19856
#define P_Cathode_2nd_TR_Stack_Down_Flag 19857
#define P_Cathode_NG_TR_Align_Pick_Up_Flag 19858
#define P_Cathode_NG_TR_NG_Place_Down_Flag 19859
#define P_Cathode_2nd_TR_Align_Down_Flag 19860
#define P_Cathode_1st_TR_Align_Pick_Up_Flag 19861
#define P_Cathode_1st_TR_Belt_Down_State_Machine 19862
#define P_Cathode_1st_TR_Belt_Down_Status 19863
#define P_Cathode_1st_TR_Belt_Pick_Up_State_Machine 19864
#define P_Cathode_1st_TR_Belt_Pick_Up_Status 19865
#define P_Cathode_1st_TR_Align_Down_State_Machine 19866
#define P_Cathode_1st_TR_Align_Down_Status 19867
#define P_Cathode_2nd_TR_Align_Pick_Up_State_Machine 19868
#define P_Cathode_2nd_TR_Align_Pick_Up_Status 19869
#define P_Cathode_2nd_TR_Stack_Down_State_Machine 19870
#define P_Cathode_2nd_TR_Stack_Down_Status 19871
#define P_Cathode_NG_TR_Align_Pick_Up_State_Machine 19872
#define P_Cathode_NG_TR_Align_Pick_Up_Status 19873
#define P_Cathode_NG_TR_NG_Place_Down_State_Machine 19874
#define P_Cathode_NG_TR_NG_Place_Down_Status 19875
#define P_Cathode_2nd_TR_Align_Down_State_Machine 19876
#define P_Cathode_2nd_TR_Align_Down_Status 19877
#define P_Cathode_1st_TR_Align_Pick_Up_State_Machine 19878
#define P_Cathode_1st_TR_Align_Pick_Up_Status 19879
#define P_Old_Anode_Belt_ASCII 19880
#define P_Old_Cathode_Belt_ASCII 19881
#define P_Anode_Belt_ASCII 19882
#define P_Cathode_Belt_ASCII 19883
#define P_Check_Vac_Time 19884
#define P_Send_Anode_NG_Code_To_PLC 19885
#define P_Receive_Anode_NG_Code_From_PLC 19886
#define P_Send_Cathode_NG_Code_To_PLC 19887
#define P_Receive_Cathode_NG_Code_From_PLC 19888
#define P_Current_Cell_Memory_Anode_1P 19889
#define P_Current_Cell_Memory_Anode_AT 19890
#define P_Current_Cell_Memory_Anode_2P 19891
#define P_Current_Cell_Memory_Cathode_1P 19892
#define P_Current_Cell_Memory_Cathode_AT 19893
#define P_Current_Cell_Memory_Cathode_2P 19894
#define P_Current_Cell_Memory_Stack_Table 19895
#define P_Current_Cell_Memory_Cathode_NG_TR 19896
#define P_Current_Cell_Memory_Anode_NG_TR 19897
#define P_BTN_Anode_1st_TR_Buffer_Clear 19898
#define P_BTN_Anode_2nd_TR_Buffer_Clear 19899
#define P_BTN_Anode_Align_Buffer_Clear 19900
#define P_BTN_Anode_NG_TR_Buffer_Clear 19901
#define P_BTN_Cathode_1st_TR_Buffer_Clear 19902
#define P_BTN_Cathode_2nd_TR_Buffer_Clear 19903
#define P_BTN_Cathode_Align_Buffer_Clear 19904
#define P_BTN_Cathode_NG_TR_Buffer_Clear 19905
#define P_Old_BTN_Anode_1st_TR_Buffer_Clear 19906
#define P_Old_BTN_Anode_2nd_TR_Buffer_Clear 19907
#define P_Old_BTN_Anode_Align_Buffer_Clear 19908
#define P_Old_BTN_Anode_NG_TR_Buffer_Clear 19909
#define P_Old_BTN_Cathode_1st_TR_Buffer_Clear 19910
#define P_Old_BTN_Cathode_2nd_TR_Buffer_Clear 19911
#define P_Old_BTN_Cathode_Align_Buffer_Clear 19912
#define P_Old_BTN_Cathode_NG_TR_Buffer_Clear 19913
#define P_Send_Anode_NG_Code_Flag 19914
#define P_Send_Cathode_NG_Code_Flag 19915
#define P_Anode_Vision_NG_To_PLC_Flag 19916
#define P_Cathode_Vision_NG_To_PLC_Flag 19917
#define P_Status_Clear_Sheet_Maint_Check 19918
#define M_ASCII_Stack_Work_Host_Sepa_ID_Buffer 8554
#define M_Stack_Host_ID_Buffer_Mode 8564
#define M_Stack_Host_ID_Sample_Type 8565
#define M_Stack_Host_ID_JR_Result 8566
#define M_Stack_Host_ID_NG_Type 8567
#define M_ASCII_Read_Stack_Work_Host_Sepa_ID_Buffer 8568
#define M_ASCII_Uloader_1st_Host_ID_Buffer 8575
#define M_ASCII_Anode_Sheet_Belt_Buffer 8585
#define M_ASCII_Anode_Sheet_Buffer 8592
#define M_ASCII_Cathode_Sheet_Belt_Buffer 8648
#define M_ASCII_Cathode_Sheet_Buffer 8655
#define M_ASCII_First_Sheet_Buffer 8711
#define M_ASCII_Last_Sheet_Buffer 8718
#define P_Single_Run_Start_Flag 19919
#define P_Single_Run_Control_State_Machine 19920
#define P_Single_Run_Control_Status 19921
#define P_Single_Run_Execute_Bit 19922
#define P_User_Dry_Run_Mode 19923
#define P_Single_Run_State_Machine 19924
#define P_Single_Run_Status 19925
#define P_Single_Run_Unit 19926
#define P_Single_Run_Evade_Pos_RTN 19927
#define P_Single_Run_Evade_Pos_Check_RTN 19928
#define P_Single_Run_Pos_Rtn1 19929
#define P_Single_Run_Pos_Rtn2 19930
#define P_Single_Run_Motion_Ready_RTN 19931
#define P_Single_Run_Execution_Interlock_RTN 19932
#define P_Single_Run_Coord_Activate_RTN 19933
#define P_Single_Run_Coord_Activate_Check_RTN 19934
#define P_Single_Run_Select_Run_Mode_RTN 19935
#define P_Single_Run_Execution_Run_RTN 19936
#define P_Single_Run_Motion_Ready_State_Machine 19937
#define P_Coord_1 19938
#define P_Coord_2 19939
#define P_Coord_3 19940
#define P_Coord_4 19941
#define P_Final_Roll_Z_Motion_Flag 19942
#define P_Final_Roll_Z_Motion_State_Machine 19943
#define P_Main_Z_Motion_Flag 19944
#define P_Main_Z_Motion_State_Machine 19945
#define P_Single_Run_Mode_Flag 19946
#define P_Cathode_AT_Motion_Flag 19947
#define P_Cathode_Align_Motion_State_Machine 19948
#define P_Anode_AT_Motion_Flag 19949
#define P_Anode_Align_Motion_State_Machine 19950
#define P_Sheet_Paper_Motion_Flag 19951
#define P_Sheet_Paper_Motion_State_Machine 19952
#define P_Cathode_NG_PNP_T_Motion_Flag 19953
#define P_Cathode_NG_PNP_T_Motion_State_Machine 19954
#define P_Cathode_NG_PNP_Z_Motion_Flag 19955
#define P_Cathode_NG_PNP_Z_Motion_State_Machine 19956
#define P_Anode_NG_PNP_T_Motion_Flag 19957
#define P_Anode_NG_PNP_T_Motion_State_Machine 19958
#define P_Anode_NG_PNP_Z_Motion_Flag 19959
#define P_Anode_NG_PNP_Z_Motion_State_Machine 19960
#define P_1st_UND_X_Motion_Flag 19961
#define P_1st_UND_X_Motion_State_Machine 19962
#define P_1st_UND_Z_Motion_Flag 19963
#define P_1st_UND_Z_Motion_State_Machine 19964
#define P_1st_UND_T_Motion_Flag 19965
#define P_1st_UND_T_Motion_State_Machine 19966
#define P_Cathode_Run_Command_Flag 19967
#define P_Anode_Run_Command_Flag 19968
#define P_NG_PNP_Uint_Motion_Flag 19969
#define P_NG_PNP_Uint_State_Machine 19970
#define P_NG_PNP_Motion_Cnt 19971
#define P_NG_PNP_Motion_arr 19972
#define P_Single_Run_Timer 19982
#define P_Single_Run_Align_Timer 19983
#define P_Single_Run_Align_Timer2 19984
#define P_Single_Run_Finall_Roll_Z_Timer 19985
#define P_Single_RuN_MAIN_Z_Timer 19986
#define P_Single_Run_Sheet_Paper_Timer 19987
#define P_Single_Run_Debug_SM 19988
#define P_Error_Monitoring_Count_1 19989
#define P_Error_Monitoring_Count_2 19990
#define P_Error_Monitoring_Count_3 19991
#define P_Error_Monitoring_Count_4 19992
#define P_Error_Monitoring_Count_5 19993
#define P_Old_Single_Run_Mode_Flag 19994
#define P_Old_Current_Mode 19995
#define P_Single_Run_Timebase_Off_RTN 19996
#define P_Single_Run_Stop_State_Machine 19997
#define P_Single_Run_Stop_Status 19998
#define P_Single_Run_Stop_Timer 19999
#define P_Single_Run_Stop_Init_RTN 20000
#define P_Single_Run_Stop_Btn_Chk 20001
#define P_Single_Run_Stop_Command 20002
#define P_Motor_Ready_Poa_Inpos_200um 20003
#define P_Ecat_Parameter_Write_Flag 20004
#define P_Ecat_Parameter_Read_Flag 20005
#define P_Ecat_Each_Parameter_Write_Flag 20006
#define P_Ecat_Slave_Idx 20007
#define P_Ec_Num 20008
#define P_Ecat_Read_Motor_Num 20009
#define P_Ecat_Write_Motor_Num 20010
#define P_Ecat_Parameter_Write_State_Machine 20011
#define P_Ecat_Parameter_Read_State_Machine 20012
#define P_Ecat_Each_Parameter_Write_State_Machine 20013
#define P_Ecat_Read_MNTR 20014
#define P_Ecat_Write_MNTR 20042
#define P_Ecat_Save_MNTR 20070
#define P_Ecat_Error_MNTR 20086
#define P_Ecat_Read_Error_MNTR 20102
#define P_Ecat_Each_Write_Error_MNTR 20118
#define P_Ecat_Write_Status 20134
#define P_Ecat_Read_Status 20135
#define P_Ecat_Each_Write_Status 20136
#define P_Pn000 20137
#define P_Pn001 20157
#define P_Pn00B 20177
#define P_Pn100 20197
#define P_Pn101 20217
#define P_Pn102 20237
#define P_Pn103 20257
#define P_Pn123 20277
#define P_Pn140 20297
#define P_Pn141 20317
#define P_Pn145 20337
#define P_Pn146 20357
#define P_Pn160 20377
#define P_Pn161 20397
#define P_Pn163 20417
#define P_Pn170 20437
#define P_Pn401 20457
#define P_Pn408 20477
#define P_Pn409 20497
#define P_Pn40A 20517
#define P_Pn40C 20537
#define P_Pn40D 20557
#define P_Pn416 20577
#define P_Pn417 20597
#define P_Pn511 20617
#define P_Pn520 20637
#define P_PnB02_Numerator 20657
#define P_PnB02_Denominator 20677
#define P_Align_Plus_Blow_Test 20697
#define P_System_Setting_Flag 20698
#define P_Ecat_Setting_Flag 20699
#define P_Ecat_Activation_State_Machine 20700
#define P_PLC31_Ecat_Retry_Cnt 20701
#define P_Ecat_Connect_Result 20702
#define P_Ecat_Slave_Error 20703
#define P_PWM_AbsPhasePosOffset_Change_State_Machine 20704
#define P_AbsPhasePosOffset_Change_Complete 20705
#define P_PWM_AbsPhasing_Fail 20706
#define P_PWM_AbsPhasing_Complete 20707
#define P_Whole_Stacking_Tack_Time 20708
#define P_Whole_Stacking_Tack_Time_Check 20709
#define P_Whole_Stacking_Tack_Timer_Check_Flag 20710
#define P_Whole_Stacking_Timer_Shift_Status_Machine 20711
#define P_Whole_Stacking_TackTime_Array0 20712
#define P_Whole_Stacking_TackTime_Array1 20713
#define P_Whole_Stacking_TackTime_Array2 20714
#define P_Whole_Stacking_TackTime_Array3 20715
#define P_Whole_Stacking_TackTime_Array4 20716
#define P_Whole_Stacking_TackTime_Array5 20717
#define P_Whole_Stacking_TackTime_Array6 20718
#define P_Whole_Stacking_TackTime_Array7 20719
#define P_Whole_Stacking_TackTime_Array8 20720
#define P_Whole_Stacking_TackTime_Array9 20721
#define P_Whole_Stacking_TackTime_Array10 20722
#define P_First_Stacking_Start 20723
#define P_Last_Stacking_Complete 20724
#define P_Stacking_Tack_Time 20725
#define P_Stacking_Tack_Time_Check 20726
#define P_Stacking_Tack_Timer_Check_Flag 20727
#define P_Stacking_Timer_Shift_Status_Machine 20728
#define P_Cathode_to_Anode_FR_Tack_Time_Check 20729
#define P_Anode_to_Cathode_FR_Tack_Time_Check 20730
#define P_Cathode_to_Anode_FR_Tack_Time_Start 20731
#define P_Anode_to_Cathode_FR_Tack_Time_Start 20732
#define P_Cathode_to_Anode_FR_Tack_Time_Complete 20733
#define P_Anode_to_Cathode_FR_Tack_Time_Complete 20734
#define P_Cathode_to_Anode_FR_Time 20735
#define P_Anode_to_Cathode_FR_Time 20736
#define P_Cathode_to_Anode_FR_Tack_Timer_Check_Flag 20737
#define P_Anode_to_Cathode_FR_Tack_Timer_Check_Flag 20738
#define P_Anode_Align_Table_Time 20739
#define P_Anode_Align_Table_Tack_Time_Check 20740
#define P_Anode_Align_Table_Tack_Timer_Check_Flag 20741
#define P_Anode_Align_Table_Timer_Shift_Status_Machine 20742
#define P_Anode_Align_Tack_Time_Start 20743
#define P_Anode_Align_Tack_Time_Complete 20744
#define P_Cathode_Align_Table_Time 20745
#define P_Cathode_Align_Table_Tack_Time_Check 20746
#define P_Cathode_Align_Table_Tack_Timer_Check_Flag 20747
#define P_Cathode_Align_Table_Timer_Shift_Status_Machine 20748
#define P_Cathode_Align_Tack_Time_Start 20749
#define P_Cathode_Align_Tack_Time_Complete 20750
#define P_Anode_1th_Tack_Time_Start 20751
#define P_Anode_1th_Tack_Time_Complete 20752
#define P_Anode_1th_Time 20753
#define P_Anode_1th_Tack_Time_Check 20754
#define P_Anode_1th_Tack_Timer_Check_Flag 20755
#define P_Anode_1th_Timer_Shift_Status_Machine 20756
#define P_Cathode_1th_Tack_Time_Start 20757
#define P_Cathode_1th_Tack_Time_Complete 20758
#define P_Cathode_1th_Time 20759
#define P_Cathode_1th_Tack_Time_Check 20760
#define P_Cathode_1th_Tack_Timer_Check_Flag 20761
#define P_Cathode_1th_Timer_Shift_Status_Machine 20762
#define P_Anode_2th_Tack_Time_Start 20763
#define P_Anode_2th_Tack_Time_Complete 20764
#define P_Anode_2th_Time 20765
#define P_Anode_2th_Tack_Time_Check 20766
#define P_Anode_2th_Tack_Timer_Check_Flag 20767
#define P_Anode_2th_Timer_Shift_Status_Machine 20768
#define P_Cathode_2th_Tack_Time_Start 20769
#define P_Cathode_2th_Tack_Time_Complete 20770
#define P_Cathode_2th_Time 20771
#define P_Cathode_2th_Tack_Time_Check 20772
#define P_Cathode_2th_Tack_Timer_Check_Flag 20773
#define P_Cathode_2th_Timer_Shift_Status_Machine 20774
#define P_Anode_1th_NG_Tack_Time_Start 20775
#define P_Anode_1th_NG_Tack_Time_Complete 20776
#define P_Anode_1th_NG_Time 20777
#define P_Anode_1th_NG_Tack_Time_Check 20778
#define P_Anode_1th_NG_Tack_Timer_Check_Flag 20779
#define P_Anode_1th_NG_Timer_Shift_Status_Machine 20780
#define P_Cathode_1th_NG_Tack_Time_Start 20781
#define P_Cathode_1th_NG_Tack_Time_Complete 20782
#define P_Cathode_1th_NG_Time 20783
#define P_Cathode_1th_NG_Tack_Time_Check 20784
#define P_Cathode_1th_NG_Tack_Timer_Check_Flag 20785
#define P_Cathode_1th_NG_Timer_Shift_Status_Machine 20786
#define P_Anode_Clamp_Tack_Time_Start 20787
#define P_Anode_Clamp_Tack_Time_Complete 20788
#define P_Anode_Clamp_Time 20789
#define P_Anode_Clamp_Tack_Time_Check 20790
#define P_Anode_Clamp_Tack_Timer_Check_Flag 20791
#define P_Anode_Clamp_Timer_Shift_Status_Machine 20792
#define P_Cathode_Clamp_Tack_Time_Start 20793
#define P_Cathode_Clamp_Tack_Time_Complete 20794
#define P_Cathode_Clamp_Time 20795
#define P_Cathode_Clamp_Tack_Time_Check 20796
#define P_Cathode_Clamp_Tack_Timer_Check_Flag 20797
#define P_Cathode_Clamp_Timer_Shift_Status_Machine 20798
#define P_Final_Roll_X_Timer_Shift_Status_Machine 20799
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array0 20800
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array1 20801
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array2 20802
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array3 20803
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array4 20804
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array5 20805
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array6 20806
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array7 20807
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array8 20808
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array9 20809
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array10 20810
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array0 20811
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array1 20812
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array2 20813
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array3 20814
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array4 20815
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array5 20816
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array6 20817
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array7 20818
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array8 20819
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array9 20820
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array10 20821
#define P_Pneumatic_Pressure_Unit_Tack_Time_Chk_Timer 20822
#define P_Pneumatic_Pressure_Unit_Tack_Time 20849
#define P_MCC_Anode_Align_NG_Count 20876
#define P_MCC_Cathode_Align_NG_Count 20877
#define P_MCC_Anode_Retry_NG_Count 20878
#define P_MCC_Cathode_Retry_NG_Count 20879
#define P_Discharge_Tact_Time_Arr 20880
#define P_Discharge_Hold_Timer 20892
#define P_Discharge_Hold_Time 20893
#define P_AN_1st_Z_Zero_Angle 20894
#define P_AN_1st_Z_Zero_Length 20895
#define P_Anode_1st_PNP_Z_Crank_Zero_Pos 20896
#define P_Anode_1st_PNP_Z_Crank_real_Move_Pos 20897
#define P_Anode_1st_PNP_Z_Crank_radian 20898
#define P_Anode_1st_PNP_Z_Acos_denominator 20899
#define P_Anode_1st_PNP_Z_Acos_numerator 20900
#define P_Anode_1st_PNP_Z_Crank_Angle 20901
#define P_Anode_1st_PNP_Z_Real_Move_Pos 20902
#define P_Anode_1st_Fwd_Bwd_Rise 20903
#define P_CA_1st_Z_Zero_Angle 20904
#define P_CA_1st_Z_Zero_Length 20905
#define P_Cathode_1st_PNP_Z_Crank_Zero_Pos 20906
#define P_Cathode_1st_PNP_Z_Crank_real_Move_Pos 20907
#define P_Cathode_1st_PNP_Z_Crank_radian 20908
#define P_Cathode_1st_PNP_Z_Acos_denominator 20909
#define P_Cathode_1st_PNP_Z_Acos_numerator 20910
#define P_Cathode_1st_PNP_Z_Crank_Angle 20911
#define P_Cathode_1st_PNP_Z_Real_Move_Pos 20912
#define P_Cathode_1st_Fwd_Bwd_Rise 20913
#define P_AN_2nd_Z_Zero_Angle 20914
#define P_AN_2nd_Z_Zero_Length 20915
#define P_Anode_2nd_PNP_Z_Crank_Zero_Pos 20916
#define P_Anode_2nd_PNP_Z_Crank_real_Move_Pos 20917
#define P_Anode_2nd_PNP_Z_Crank_radian 20918
#define P_Anode_2nd_PNP_Z_Acos_denominator 20919
#define P_Anode_2nd_PNP_Z_Acos_numerator 20920
#define P_Anode_2nd_PNP_Z_Crank_Angle 20921
#define P_Anode_2nd_PNP_Z_Real_Move_Pos 20922
#define P_Anode_2nd_Fwd_Bwd_Rise 20923
#define P_CA_2nd_Z_Zero_Angle 20924
#define P_CA_2nd_Z_Zero_Length 20925
#define P_Cathode_2nd_PNP_Z_Crank_Zero_Pos 20926
#define P_Cathode_2nd_PNP_Z_Crank_real_Move_Pos 20927
#define P_Cathode_2nd_PNP_Z_Crank_radian 20928
#define P_Cathode_2nd_PNP_Z_Acos_denominator 20929
#define P_Cathode_2nd_PNP_Z_Acos_numerator 20930
#define P_Cathode_2nd_PNP_Z_Crank_Angle 20931
#define P_Cathode_2nd_PNP_Z_Real_Move_Pos 20932
#define P_Cathode_2nd_Fwd_Bwd_Rise 20933
#define P_Old_Recipe_Anode_1st_PNP_Z_Ready_Up 20934
#define P_Old_Recipe_Anode_1st_PNP_Z_Belt_Up 20935
#define P_Old_Recipe_Anode_1st_PNP_Z_Belt_Down 20936
#define P_Old_Recipe_Anode_1st_PNP_Z_Align_Up 20937
#define P_Old_Recipe_Anode_1st_PNP_Z_Align_Down 20938
#define P_Old_Recipe_Cathode_1st_PNP_Z_Ready_Up 20939
#define P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Up 20940
#define P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Down 20941
#define P_Old_Recipe_Cathode_1st_PNP_Z_Align_Up 20942
#define P_Old_Recipe_Cathode_1st_PNP_Z_Align_Down 20943
#define P_Old_Recipe_Anode_2nd_PNP_Z_Align_Up 20944
#define P_Old_Recipe_Anode_2nd_PNP_Z_Align_Down 20945
#define P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Up 20946
#define P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Down 20947
#define P_Old_Recipe_Anode_2nd_PNP_Z_Ready_Up 20948
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Up 20949
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Down 20950
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Up 20951
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Down 20952
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Ready_Up 20953
#define P_PLC19_All_Home_Status 20954
#define P_PLC19_All_Home_Module_Status 20955
#define P_PLC19_All_Home_State_Machine 20956
#define P_PLC19_All_Home_Seq_Index 20957
#define P_PLC19_All_Home_Self_Index 20958
#define P_PLC19_All_Home_Set_Mode_Return 20959
#define P_PLC19_All_Home_Timer 20960
#define P_PLC19_All_Home_Tact_Time_Array 20961
#define P_PLC19_All_Home_Tact_Time 20981
#define P_All_Home_Module_Error 20982
#define P_Act_ALL_Home_Time_Out_Time 20983
#define P_Act_ALL_Home_Time_Out 20984
#define P_Act_Hold_Complete_Bit 21024
#define P_Module_Act_Hold_Command_Array 21059
#define P_OLD_Module_Act_Hold_Command_Array 21094
#define P_Module_Act_Hold_State_Machine_Array 21129
#define P_Act_Hold_Old_Time 21164
#define P_Act_Hold_Time_Out_Time 21199
#define P_Act_Hold_Time_Out 21200
#define P_First_PNP_T_Wait_Status 21235
#define P_First_PNP_Z_Wait_Status 21236
#define P_First_PNP_Picker_T_Turn_Status 21237
#define P_First_PNP_T_Wait_To_Belt_Status 21238
#define P_First_PNP_Z_Wait_To_Belt_Status 21239
#define P_First_PNP_T_Align_To_Belt_Status 21240
#define P_First_PNP_Z_Align_To_Belt_Status 21241
#define P_First_PNP_Z_Belt_Down_Status 21242
#define P_First_PNP_Z_Belt_Up_Status 21243
#define P_First_PNP_T_Wait_To_Align_Status 21244
#define P_First_PNP_Z_Wait_To_Align_Status 21245
#define P_First_PNP_T_Belt_To_Align_Status 21246
#define P_First_PNP_Z_Belt_To_Align_Status 21247
#define P_First_PNP_Z_Align_Down_Status 21248
#define P_First_PNP_Z_Align_Up_Status 21249
#define P_First_PNP_Vac_On_Status 21250
#define P_First_PNP_Blow_On_Status 21251
#define P_Second_PNP_T_Align_To_Stack_Status 21252
#define P_Second_PNP_Z_Align_To_Stack_Status 21253
#define P_Second_PNP_T_Stack_To_Align_Status 21254
#define P_Second_PNP_Z_Stack_To_Align_Status 21255
#define P_Second_PNP_Z_Align_Down_Status 21256
#define P_Second_PNP_Z_Align_Up_Status 21257
#define P_Second_PNP_Vac_On_Status 21258
#define P_Second_PNP_Blow_On_Status 21259
#define P_NG_PNP_NG_Bos_Status 21260
#define P_NG_PNP_Align_Status 21261
#define P_NG_PNP_Align_Down_Status 21262
#define P_NG_PNP_Align_Up_Status 21263
#define P_NG_PNP_Vac_On_Status 21264
#define P_NG_PNP_Blow_On_Status 21265
#define P_Hold_1st_PNP_Position 21266
#define P_Hold_Module_Error 21267
#define P_Act_Execute_Complete_Bit 21268
#define P_Module_Act_Execute_Command_Array 21280
#define P_OLD_Module_Act_Execute_Command_Array 21292
#define P_Module_Act_Execute_State_Machine_Array 21304
#define P_Act_Execute_Old_Time 21316
#define P_Act_Execute_Time_Out_Time 21328
#define P_Act_Execute_Time_Out 21329
#define P_Execute_Module_Error 21341
#define P_Execute_First_Sepa_Total_Tact_Time 21342
#define P_Current_JR_Thickness_mm 21343
#define P_Current_Jelly_Roll_Thinckness_mm_Send_Enable_Flag 21344
#define P_Stack_Table_NG_Flag 21345
#define P_Suspend_Discharge_Cell_Out_Restart 21346
#define P_Jelly_Roll_OK_Count 21347
#define P_Jelly_Roll_NG_Count 21348
#define P_Jelly_Roll_Total_Count 21349
#define P_Jelly_Roll_Prod_Count 21350
#define P_Jelly_Roll_Recipe_Count 21351
#define P_Current_Cell_Memory_Jelly_Roll 21352
#define P_VISION_PLC10_Anode_Align_Start 21353
#define P_VISION_PLC10_Cathode_Align_Start 21354
#define P_Stack_Table_NG_Count 21355
#define P_Stack_PMAC_NG_Code 21356
#define P_Stack_Vision_NG_Code_IN_Timer 21357
#define P_1st_Discharge_State 21358
#define P_Prev_Sepa_Stack_Completed_Flag 21359
#define P_First_Sepa_Vision_Skip_Flag 21360
#define P_Discharge_Unloader_Handover_Timer 21361
#define P_Discharge_Unloader_Handover_Time 21362
#define P_Buffer_Mode_Module_Status_Sequence 21363
#define P_EXECUTE_Status_Prod_Sequence 21393
#define P_Execute_First_Sepa_Mode_Cmd 21423
#define P_Execute_First_Sepa_Mode_Status 21424
#define P_Execute_First_Sepa_Mode_Module_Status 21425
#define P_Execute_First_Sepa_Mode_State_Machine 21426
#define P_Execute_First_Sepa_Mode_Seq_Index 21427
#define P_Execute_First_Sepa_Mode_Self_Index 21428
#define P_Execute_First_Sepa_Mode_Debug_Edge 21429
#define P_Buffer_Seqdata_Execute_First_Sepa_Mode_Array 21430
#define P_Execute_First_Sepa_Mode_Timer 21460
#define P_Execute_First_Sepa_Mode_Tact_Time_Array 21461
#define P_Execute_First_Sepa_Mode_Tact_Time 21481
#define P_Execute_1st_Sepa_Status 21482
#define P_Suspend_Discharge_Cmd 21483
#define P_Suspend_Discharge_Status 21484
#define P_Suspend_Discharge_State_Machine 21485
#define P_Suspend_Discharge_Seq_Index 21486
#define P_Suspend_Discharge_Self_Index 21487
#define P_Discharge_Seq_InterLock_Delay_Time 21488
#define P_Discharge_Seq_InterLock_Flag 21518
#define P_Buffer_Seqdata_Discharge_Array 21548
#define P_Suspend_Discharge_Timer 21578
#define P_Suspend_Discharge_Tact_Time_Array 21579
#define P_Suspend_Discharge_Tact_Time 21599
#define P_Suspend_Discharge_1st_Unloader_JR_Grip 21600
#define P_Suspend_ARC_Cmd 21601
#define P_Suspend_ARC_Status 21602
#define P_Suspend_ARC_State_Machine 21603
#define P_Suspend_ARC_Seq_Index 21604
#define P_Suspend_ARC_Self_Index 21605
#define P_Suspend_ARC_Manual_Occur_Flag 21606
#define P_ARC_Seq_InterLock_Delay_Time 21607
#define P_ARC_Seq_InterLock_Flag 21637
#define P_Buffer_Seqdata_ARC_Array 21667
#define P_Suspend_ARC_Timer 21697
#define P_Suspend_ARC_Tact_Time_Array 21698
#define P_Suspend_ARC_Tact_Time 21718
#define P_Suspend_Anode_1TR_Cell_Supply_Cmd 21719
#define P_Suspend_Anode_1TR_Cell_Supply_Status 21720
#define P_Suspend_Anode_1TR_Cell_Supply_State_Machine 21721
#define P_Suspend_Anode_1TR_Cell_Supply_Seq_Index 21722
#define P_Suspend_Anode_1TR_Cell_Supply_Self_Index 21723
#define P_Suspend_Anode_1TR_Cell_Supply_Module_Status 21724
#define P_Anode_1TR_Cell_Supply_Seq_InterLock_Delay_Time 21725
#define P_Anode_1TR_Cell_Supply_Seq_InterLock_Flag 21755
#define P_Buffer_Seqdata_Anode_1TR_Cell_Supply_Array 21785
#define P_Suspend_Anode_1TR_Cell_Supply_Timer 21815
#define P_Suspend_Anode_1TR_Cell_Supply_Tact_Time_Array 21816
#define P_Suspend_Anode_1TR_Cell_Supply_Tact_Time 21836
#define P_Hold_Exist_Insp_Cmd 21837
#define P_Hold_Exist_Insp_Status 21838
#define P_Hold_Exist_Insp_Module_Status 21839
#define P_Hold_Exist_Insp_State_Machine 21840
#define P_Hold_Exist_Insp_Seq_Index 21841
#define P_Hold_Exist_Insp_Self_Index 21842
#define P_Hold_Exist_Insp_Debug_Edge 21843
#define P_Buffer_Seqdata_Hold_Exist_Insp_Array 21844
#define P_Hold_Exist_Insp_Timer 21874
#define P_Hold_Exist_Insp_Tact_Time_Array 21875
#define P_Hold_Exist_Insp_Tact_Time 21895
#define P_Hold_Remove_NG_PNP_Cmd 21896
#define P_Hold_Remove_NG_PNP_Status 21897
#define P_Hold_Remove_NG_PNP_Module_Status 21898
#define P_Hold_Remove_NG_PNP_State_Machine 21899
#define P_Hold_Remove_NG_PNP_Seq_Index 21900
#define P_Hold_Remove_NG_PNP_Self_Index 21901
#define P_Hold_Remove_NG_PNP_Debug_Edge 21902
#define P_Buffer_Seqdata_Hold_Remove_NG_PNP_Array 21903
#define P_Hold_Remove_NG_PNP_Timer 21933
#define P_Hold_Remove_NG_PNP_Tact_Time_Array 21934
#define P_Hold_Remove_NG_PNP_Tact_Time 21954
#define P_PLC01_Hold_Remove_NG_PNP_Sub_Flag 21955
#define P_PLC01_Hold_Remove_NG_PNP_Sub_State_Machine 21956
#define P_PLC01_Hold_Remove_NG_PNP_Sub_Status 21957
#define P_Hold_Remove_Align_Cmd 21958
#define P_Hold_Remove_Align_Status 21959
#define P_Hold_Remove_Align_Module_Status 21960
#define P_Hold_Remove_Align_State_Machine 21961
#define P_Hold_Remove_Align_Seq_Index 21962
#define P_Hold_Remove_Align_Self_Index 21963
#define P_Hold_Remove_Align_Debug_Edge 21964
#define P_Buffer_Seqdata_Hold_Remove_Align_Array 21965
#define P_Hold_Remove_Align_Timer 21995
#define P_Hold_Remove_Align_Tact_Time_Array 21996
#define P_Hold_Remove_Align_Tact_Time 22016
#define P_PLC01_Hold_Remove_Align_Sub_Flag 22017
#define P_PLC01_Hold_Remove_Align_Sub_State_Machine 22018
#define P_PLC01_Hold_Remove_Align_Sub_Status 22019
#define P_Hold_Remove_2TR_Cmd 22020
#define P_Hold_Remove_2TR_Status 22021
#define P_Hold_Remove_2TR_Module_Status 22022
#define P_Hold_Remove_2TR_State_Machine 22023
#define P_Hold_Remove_2TR_Seq_Index 22024
#define P_Hold_Remove_2TR_Self_Index 22025
#define P_Hold_Remove_2TR_Debug_Edge 22026
#define P_Buffer_Seqdata_Hold_Remove_2TR_Array 22027
#define P_Hold_Remove_2TR_Timer 22057
#define P_Hold_Remove_2TR_Tact_Time_Array 22058
#define P_Hold_Remove_2TR_Tact_Time 22078
#define P_Hold_Supply_1TR_Cmd 22079
#define P_Hold_Supply_1TR_Status 22080
#define P_Hold_Supply_1TR_Module_Status 22081
#define P_Hold_Supply_1TR_State_Machine 22082
#define P_Hold_Supply_1TR_Seq_Index 22083
#define P_Hold_Supply_1TR_Self_Index 22084
#define P_Hold_Supply_1TR_Debug_Edge 22085
#define P_Buffer_Seqdata_Hold_Supply_1TR_Array 22086
#define P_Hold_Supply_1TR_Timer 22116
#define P_Hold_Supply_1TR_Tact_Time_Array 22117
#define P_Hold_Supply_1TR_Tact_Time 22137
#define P_PLC01_Hold_Supply_1TR_Memory_RTN 22138
#define P_PLC01_Hold_Supply_1TR_Judge_Flag 22139
#define P_PLC01_Hold_Supply_1TR_Judge_State_Machine 22140
#define P_PLC01_Hold_Supply_1TR_Judge_Status 22141
#define P_Plate_1TR_Supply_Module_Judge_Bit 22142
#define P_Hold_Supply_Align_Cmd 22143
#define P_Hold_Supply_Align_Status 22144
#define P_Hold_Supply_Align_Module_Status 22145
#define P_Hold_Supply_Align_State_Machine 22146
#define P_Hold_Supply_Align_Seq_Index 22147
#define P_Hold_Supply_Align_Self_Index 22148
#define P_Hold_Supply_Align_Debug_Edge 22149
#define P_Buffer_Seqdata_Hold_Supply_Align_Array 22150
#define P_Hold_Supply_Align_Timer 22180
#define P_Hold_Supply_Align_Tact_Time_Array 22181
#define P_Hold_Supply_Align_Tact_Time 22201
#define P_Hold_Supply_2TR_Cmd 22202
#define P_Hold_Supply_2TR_Status 22203
#define P_Hold_Supply_2TR_Module_Status 22204
#define P_Hold_Supply_2TR_State_Machine 22205
#define P_Hold_Supply_2TR_Seq_Index 22206
#define P_Hold_Supply_2TR_Self_Index 22207
#define P_Hold_Supply_2TR_Debug_Edge 22208
#define P_Buffer_Seqdata_Hold_Supply_2TR_Array 22209
#define P_Hold_Supply_2TR_Timer 22239
#define P_Hold_Supply_2TR_Tact_Time_Array 22240
#define P_Hold_Supply_2TR_Tact_Time 22260
#define P_Hold_Semi_Run_Pos_Move_Cmd 22261
#define P_Hold_Semi_Run_Pos_Move_Status 22262
#define P_Hold_Semi_Run_Pos_Move_Module_Status 22263
#define P_Hold_Semi_Run_Pos_Move_State_Machine 22264
#define P_Hold_Semi_Run_Pos_Move_Seq_Index 22265
#define P_Hold_Semi_Run_Pos_Move_Self_Index 22266
#define P_Hold_Semi_Run_Pos_Move_Debug_Edge 22267
#define P_Buffer_Seqdata_Hold_Semi_Run_Pos_Move_Array 22268
#define P_Hold_Semi_Run_Pos_Move_Timer 22298
#define P_Hold_Semi_Run_Pos_Move_Tact_Time_Array 22299
#define P_Hold_Semi_Run_Pos_Move_Tact_Time 22319
#define P_Act_Complete_Bit 22320
#define P_Act_Old_Time 22386
#define P_Act_Delay_Time 22452
#define P_Act_Suspend_Time_Out_Time 22518
#define P_Act_Time_Out 22519
#define P_Test_Sungmin_Flag 22585
#define P_Discharge_Possibility_Bit 22586
#define P_HOLD_Exist_Possibility_Bit 22652
#define P_HOLD_NG_Remove_Possibility_Bit 22718
#define P_HOLD_Align_Remove_Possibility_Bit 22784
#define P_HOLD_2TR_Remove_Possibility_Bit 22850
#define P_HOLD_1TR_Supply_Possibility_Bit 22916
#define P_HOLD_Align_Supply_Possibility_Bit 22982
#define P_HOLD_2TR_Supply_Possibility_Bit 23048
#define P_HOLD_Semi_Run_Pos_Possibility_Bit 23114
#define P_Module_Act_Command_Array 23180
#define P_OLD_Module_Act_Command_Array 23246
#define P_Module_Act_State_Machine_Array 23312
#define P_Module_Act_State_Machine_Error_Array 23378
#define P_Suspend_Discharge_Module_Status 23444
#define P_Suspend_Discharge_To_Execute_Flag 23445
#define P_Suspend_Discharge_Complete_Flag 23446
#define P_First_Unloader_Stack_Up_Status 23447
#define P_First_Unloader_Stack_FWD_Status 23448
#define P_First_Unloader_Grip_Cell_Status 23449
#define P_First_Unloader_Stack_BWD_Wait_Status 23450
#define P_First_Unloader_Stack_BWD_Status 23451
#define P_First_Unloader_Stack_Down_Status 23452
#define P_First_Unloader_Avoid_Status 23453
#define P_First_Unloader_Turn_Status 23454
#define P_First_Unloader_Handover_Status 23455
#define P_Cathode_Clamp_OFF_Status 23456
#define P_Final_Roll_Discharge_Status 23457
#define P_Final_Roll_Stack_Pos_Status 23458
#define P_Final_Roll_Stack_Up_Pos_Status 23459
#define P_Main_Z_Init_Pos_Status 23460
#define P_Sheet_Paper_BWD_Status 23461
#define P_Discharge_Vision_DIO_RTN 23462
#define P_Discharge_Sub_RTN 23463
#define P_Discharge_NG_Code_Report_RTN 23464
#define P_Individual_RTN 23465
#define P_Suspend_Discharge_Last_Run_Bit 23466
#define P_Suspend_Discharge_JR_Result_RTN 23467
#define P_ARC_Buffer_Jog_Speed 23468
#define P_Selected_Spool_Number 23469
#define P_ARC_Home_Check_RTN 23470
#define P_Suspend_ARC_Module_Status 23471
#define P_Not_Selected_Spool_Radius 23472
#define P_Not_Selected_Spool_Circumference 23473
#define P_Sensor_To_Sepa_Curr_Distance_mm 23474
#define P_Passive_D_One_Degree_AD_Value 23499
#define P_After_ARC_Rotate_Distance 23500
#define P_Stack_Vision_NG_Code_Time_Over 23501
#define P_Suspend_Discharge_Resume_Flag 23502
#define P_Suspend_Discharge_Resume_Complete 23503
#define P_Suspend_Discharge_Pause_Flag 23504
#define P_Suspend_Monitor_ 23505
#define P_Flag_Stack_Work_Host_ID 23515
#define P_First_Sepa_Stack_Align_OK_PMAC_Flag 23516
#define P_Sepa_Run_Completed_Status_Machine 23517
#define P_Discharge_Debug_Edge 23518
#define P_Suspend_Discharge_Debug_Address 23519
#define P_Suspend_Discharge_Debug_Value 23524
#define P_Discharge_Sepa_Cutter_Time_Out_State_Machine 23529
#define P_Old_Suspend_Discharge_Seq_Index 23530
#define P_Discharge_Debug_Index_1 23531
#define P_Discharge_Debug_Index_2 23532
#define P_Discharge_Debug_Index_3 23533
#define P_Discharge_Debug_Index_4 23534
#define P_ARC_Debug_Edge 23535
#define P_Suspend_ARC_Debug_Address 23536
#define P_Suspend_ARC_Debug_Value 23541
#define P_Old_Suspend_ARC_Seq_Index 23546
#define P_ARC_Debug_Index_1 23547
#define P_ARC_Debug_Index_2 23548
#define P_ARC_Debug_Index_3 23549
#define P_ARC_Debug_Index_4 23550
#define P_ARC_Ready_Flag 23551
#define P_Suspend_Cutter_Heating_Time 23553
#define P_Suspend_Cutter_Heating_Timer 23554
#define P_An_1TR_Supply_Debug_Edge 23555
#define P_Suspend_An_1TR_Supply_Debug_Address 23556
#define P_Suspend_An_1TR_Supply_Debug_Value 23561
#define P_Old_Suspend_An_1TR_Supply_Seq_Index 23566
#define P_An_1TR_Supply_Debug_Index_1 23567
#define P_An_1TR_Supply_Debug_Index_2 23568
#define P_An_1TR_Supply_Debug_Index_3 23569
#define P_An_1TR_Supply_Debug_Index_4 23570
#define P_Suspend_Supply_Index 23571
#define P_Suspend_Supply_Index_2nd 23572
#define P_Anode_Suspend_Supply_Complete 23573
#define P_Suspend_Supply_Pause_Flag 23581
#define P_Suspend_Supply_Resume_Flag 23582
#define P_Supply_Module_Status 23583
#define P_Suspend_Anode_1TR_Supply_Complete_Flag 23584
#define P_Suspend_Discharge_Module_Error 23585
#define P_Suspend_ARC_Module_Error 23586
#define P_Suspend_1st_Supply_Error 23587
#define P_Discharge_Seq_Data 23588
#define P_Suspend_Discharging_Popup_Flag 23589
#define P_Suspend_Discharge_FR_Unclamp_Error_Popup_Flag 23590
#define P_Suspend_Discharge_Cathode_Align_Retry_Cal_Error_Popup_Flag 23591
#define P_Suspend_Discharge_Anode_Align_Retry_Cal_Error_Popup_Flag 23592
#define P_Suspend_Discharge_FR_Discharge_Pos_Error_Popup_Flag 23593
#define P_Suspend_Discharge_1st_Unloader_Grip_OFF_Error_Popup_Flag 23594
#define P_Suspend_Discharge_1st_Unloader_Up_Error_Popup_Flag 23595
#define P_Suspend_Discharge_1st_Unloader_FWD_Error_Popup_Flag 23596
#define P_Suspend_Discharge_FR_Clamp_Error_Popup_Flag 23597
#define P_Suspend_Discharge_Sepa_Cutter_Heating_Error_Popup_Flag 23598
#define P_Suspend_Discharge_1st_Unloader_Grip_Cell_Pos_Error_Popup_Flag 23599
#define P_Suspend_Discharge_1st_Unloader_Grip_ON_Error_Popup_Flag 23600
#define P_Suspend_Discharge_Sheet_Paper_BWD_Error_Popup_Flag 23601
#define P_Suspend_Discharge_Cathode_Clamp_OFF_Error_Popup_Flag 23602
#define P_Suspend_Discharge_Sepa_Cutter_FWD_Error_Popup_Flag 23603
#define P_Suspend_Discharge_Sheet_Paper_Vacuum_ON_Error_Popup_Flag 23604
#define P_Suspend_Discharge_Sepa_Cutter_BWD_Error_Popup_Flag 23605
#define P_Suspend_Discharge_1st_Unloader_BWD_Wait_Pos_Error_Popup_Flag 23606
#define P_Suspend_Discharge_1st_Unloader_BWD_Error_Popup_Flag 23607
#define P_Suspend_Discharge_1st_Unloader_Stack_Down_Error_Popup_Flag 23608
#define P_Suspend_Discharge_FR_Stack_Pos_Error_Popup_Flag 23609
#define P_Suspend_Discharge_After_Action_Init_Error_Popup_Flag 23610
#define P_Suspend_Discharge_1st_Unloader_Avoid_Pos_Error_Popup_Flag 23611
#define P_Suspend_Discharge_1st_2nd_Unloader_Handover_Chk_Error_Popup_Flag 23612
#define P_Suspend_Discharge_1st_Unloader_Handover_Pos_Error_Popup_Flag 23613
#define P_Suspend_Discharge_2nd_3rd_Unloader_Grip_Request_Error_Popup_Flag 23614
#define P_Suspend_Discharge_1st_Unloader_Wait_Pos_Error_Popup_Flag 23615
#define P_Suspend_Discharge_1st_Unloader_Unuse_Btn_Check_Popup_Flag 23616
#define P_Suspend_ARC_Manual_ARC_Active_Popup_Flag 23617
#define P_Suspend_ARC_Auto_ARC_Active_Popup_Flag 23618
#define P_Suspend_ARC_Pre_Act_Popup_Flag 23619
#define P_Suspend_ARC_Dancer_Close_Popup_Flag 23620
#define P_Suspend_ARC_Use_Plate_FWD_Popup_Flag 23621
#define P_Suspend_ARC_Replace_Plate_Blow_ON_Popup_Flag 23622
#define P_Suspend_ARC_Use_Plate_Clamp_Popup_Flag 23623
#define P_Suspend_ARC_Use_Plate_Cutter_FWD_Popup_Flag 23624
#define P_Suspend_ARC_Use_Plate_Cutter_BWD_Popup_Flag 23625
#define P_Suspend_ARC_Use_Plate_Unclamp_Popup_Flag 23626
#define P_Suspend_ARC_Use_Plate_BWD_Popup_Flag 23627
#define P_Suspend_ARC_Replace_Plate_Blow_OFF_Popup_Flag 23628
#define P_Suspend_ARC_Dancer_Open_Popup_Flag 23629
#define P_Suspend_ARC_Spool_Change_Popup_Flag 23630
#define P_Suspend_ARC_Post_Act_Popup_Flag 23631
#define P_Suspend_ARC_Previous_Spool_Remain_Winding_Popup_Flag 23632
#define P_Suspend_Discharge_First_Address 23633
#define P_Suspend_ARC_First_Address 23634
#define P_Status_Stop_Ready_Pos_Move 23635
#define P_Cycle_Stop_Stauts 23636
#define P_Cycle_Stop_Status_Machine 23637
#define P_Cycle_Stop_Flag 23638
#define P_Speed_Origin_rtn 23639
#define P_Speed_rtn 23640
#define P_NG_PNP_Z_Move_rtn 23641
#define P_NG_PNP_Z_Move_Check_rtn 23642
#define P_NG_PNP_T_Move_rtn 23643
#define P_NG_PNP_T_Move_Check_rtn 23644
#define P_2nd_Z_Move_rtn 23645
#define P_2nd_Z_Move_Check_rtn 23646
#define P_2nd_T_Move_rtn 23647
#define P_2nd_T_Move_Check_rtn 23648
#define P_Stack_Judgement_Memory 23649
#define P_Stop_Cycle_Stop_Move_Status 23650
#define P_STOP_Initial_Process_Status 23651
#define P_Stopping_CycleStop_Init_Flag 23652
#define P_Sepa_Timing 23653
#define P_Old_Trigger_PLC0 23654
#define P_Mode_Command 23655
#define P_Current_Mode 23656
#define P_MOde_Num 23657
#define P_Command_Depth 23662
#define P_In_Position 23667
#define P_Last_Cycle_Command 23672
#define P_Mode_Command_Buffer 23677
#define P_Mode_Command_Wait_Count 23678
#define P_Old_Mode_Command 23679
#define P_Slave1_Anode_Run_Motion_Array 23680
#define P_Slave2_Anode_Run_Motion_Array 23780
#define P_Slave3_Anode_Run_Motion_Array 23880
#define P_Slave4_Anode_Run_Motion_Array 23980
#define P_Slave5_Anode_Run_Motion_Array 24080
#define P_Slave6_Anode_Run_Motion_Array 24180
#define P_Slave7_Anode_Run_Motion_Array 24280
#define P_Slave8_Anode_Run_Motion_Array 24380
#define P_Slave9_Anode_Run_Motion_Array 24480
#define P_Slave10_Anode_Run_Motion_Array 24580
#define P_Slave15_Anode_Run_Motion_Array 24680
#define P_Slave16_Anode_Run_Motion_Array 24780
#define P_Slave17_Anode_Run_Motion_Array 24880
#define P_Slave18_Anode_Run_Motion_Array 24980
#define P_Slave19_Anode_Run_Motion_Array 25080
#define P_Slave1_Cathode_Run_Motion_Array 25180
#define P_Slave2_Cathode_Run_Motion_Array 25280
#define P_Slave3_Cathode_Run_Motion_Array 25380
#define P_Slave4_Cathode_Run_Motion_Array 25480
#define P_Slave5_Cathode_Run_Motion_Array 25580
#define P_Slave15_Cathode_Run_Motion_Array 25680
#define P_Slave6_Cathode_Run_Motion_Array 25780
#define P_Slave7_Cathode_Run_Motion_Array 25880
#define P_Slave8_Cathode_Run_Motion_Array 25980
#define P_Slave9_Cathode_Run_Motion_Array 26080
#define P_Slave10_Cathode_Run_Motion_Array 26180
#define P_Slave16_Cathode_Run_Motion_Array 26280
#define P_Slave17_Cathode_Run_Motion_Array 26380
#define P_Slave18_Cathode_Run_Motion_Array 26480
#define P_Slave19_Cathode_Run_Motion_Array 26580
#define P_BTN_Jog_BWD_M 8725
#define P_BTN_Jog_FWD_M 8775
#define M_UnWinder_BTN_Lamp 8825
#define M_Cathode_BTN_Lamp 8841
#define M_Anode_BTN_Lamp 8873
#define M_Stack_BTN_Lamp 8905
#define M_ARC_BTN_Lamp 8937
#define M_UnWinder_BTN_Interlock 8969
#define M_Cathode_BTN_Interlock 8985
#define M_Anode_BTN_Interlock 9017
#define M_Stack_BTN_Interlock 9049
#define M_ARC_BTN_Interlock 9081
#define M_NP_BTN_Interlock 9113
#define M_Manual_ARC_BTN 9129
#define P_Anode_NG_Unit_Status 26680
#define P_Cathode_NG_Unit_Status 26681
#define P_ParsingRtn 26682
#define P_CurPosData 26683
#define P_Hold_MNTR_Supply_1st 26684
#define P_TimeOutNumb 26685
#define P_PosRtn 26686
#define P_MotionRtn 26687
#define P_CmdData 26688
#define P_Interval 26689
#define P_Cont_Ret 26690
#define P_Cur_Idx 26691
#define P_NextID 26692
#define P_Cur_Size 26693
#define P_Hold_Exist_Insp 26694
#define P_Hold_Remove_NG_PNP 26695
#define P_Hold_Remove_Align 26696
#define P_Hold_Remove_2TR 26697
#define P_Hold_Supply_1TR 26698
#define P_Hold_Supply_Align 26699
#define P_Hold_Supply_2TR 26700
#define P_Hold_Semi_Run 26701
#define P_Hold_NG_PNP_Remove 180
#define P_Hold_Remove_2nd 182
#define P_Hold_Supply_1st 183
#define P_Hold_Supply_2nd 185
#define P_Hold_Data_process 186
#define P_Hold_Semi_Run_Enable_Pos 187
#define P_Hold_Existence_Insp 188
#define P_Hold_1st_Belt_Move 189
#define P_Hold_Motion 190
#define P_Hold_Data_process_State_Machine 26702
#define P_Hold_Align_Remove_State_Machine 26703
#define P_Hold_2nd_Remove_State_Machine 26704
#define P_Hold_Supply_1st_State_Machine 26705
#define P_Hold_Supply_2nd_State_Machine 26706
#define P_Hold_Existence_Insp_State_Machine 26707
#define P_Hold_NG_PNP_Remove_State_Machine 26708
#define P_Hold_Data_Process_Complete 26709
#define P_Hold_Semi_Run_Enable_Pos_State_Machine 26710
#define P_HOLD_Existence_Insp_Queue_State_Machine 26711
#define P_Hold_Stop_Existence_Insp_STEP 26712
#define P_SubMaster_Status_Err 26713
#define P_Data_Process_Rtn 26714
#define P_Hold_Set_Trigger 26715
#define P_Hold_Get_Trigger 26716
#define P_Anode_2nd_Data 26717
#define P_Anode_Align_Data 26718
#define P_Hold_Remove_Step 26719
#define P_HList_Head_Idx 26720
#define P_Hold_Next_ID 26721
#define P_HCmd_List 26722
#define P_Hold_Data_Value 26742
#define P_Comb_Bitwise 26743
#define P_Target_Cmd 26744
#define P_Temp_Bit 26745
#define P_Get_ErrorCode 26746
#define P_Rtn_Code 26747
#define P_Complete_Hold_Bit 26748
#define P_HoldMtion_Flag 26749
#define P_Ret_BitWise 26750
#define P_NotEnough_GetSpace 26751
#define P_NotEnough_SetSpace 26752
#define P_Check_SetSpace 26753
#define P_Hold_Get_Data 26754
#define P_Err_NextID_Flag 26755
#define P_Elec_Bit 26756
#define P_MotionData 26757
#define P_DataList 26758
#define P_Hold_Data_Err 26763
#define P_Cur_PosX1 26773
#define P_Cur_PosZ1 26774
#define P_Cur_PosX2 26775
#define P_Cur_PosZ2 26776
#define P_Dest_PosX 26777
#define P_Dest_PosZ 26778
#define P_FailToParse 26779
#define P_CurTrigger 26780
#define P_TimeOutTrigger 26781
#define P_CalcTime 26782
#define P_Cycle_Count 26783
#define P_MotionTimeOutFlag 26784
#define P_Set_Data 26785
#define P_Rtn 26786
#define P_CurPosTestBit 26787
#define P_Hold_Anode_Pause_CHK 26788
#define P_Hold_Cathode_Pause_CHK 26789
#define P_Surface_Complete_To_Hold 26790
#define P_Hold_Motion_Arr 26791
#define P_Hold_Pause_Trg 26811
#define P_From_Staring_Flag 26812
#define P_Hold_Existence_Insp_Enqueue_Flag 26813
#define P_Hold_Rtn 26814
#define P_Debug_Existence_Insp_STEP 26815
#define P_Hold_Align_Sheet_CHK 26816
#define P_Hold_Cathode_Exception_Empty_Flag 26817
#define P_Hold_Anode_Exception_Empty_Flag 26818
#define P_HOLD_Hold_Process_State_Machine 26819
#define P_Hold_Stop_Sheet_Process_STEP 26820
#define P_Hold_Debug_Sheet_Process_STEP 26821
#define P_Hold_Stop_Point 26822
#define P_Hold_CHK 26823
#define P_Hold_Test 26824
#define P_Anode_1st_Motion_Complete 26825
#define P_Anode_2nd_Motion_Complete 26826
#define P_Anode_NG_PNP_Motion_Complete 26827
#define P_Cathode_1st_Motion_Complete 26828
#define P_Cathode_2nd_Motion_Complete 26829
#define P_Cathode_NG_PNP_Motion_Complete 26830
#define P_Anode_1st_Picker_Motion_Complete 26831
#define P_Cathode_1st_Picker_Motion_Complete 26832
#define P_individual_return 26833
#define P_individual_return2 26834
#define P_HoldCurPosBit1 26835
#define P_HoldCurPosBit2 26836
#define P_Parsing_Status 26837
#define P_Sel_Obj 26838
#define P_Sel_Elec 26839
#define P_Error 26840
#define P_Vision_FirstSepa_Complete 26841
#define P_NG_PNP_Turn_TM 26842
#define P_NG_PNP_Turn_TS 26843
#define P_NG_PNP_Turn_TA 26844
#define P_NG_PNP_Up_TM 26845
#define P_NG_PNP_Up_TS 26846
#define P_NG_PNP_Up_TA 26847
#define P_NG_PNP_Down_TM 26848
#define P_NG_PNP_Down_TS 26849
#define P_NG_PNP_Down_TA 26850
#define P_NG_PNP_Vac_Time 26851
#define P_NG_PNP_Blow_Time 26852
#define P_Slow_NG_Mode_Btn 26853
#define P_HOLD_Memory_Tower_Offset 26854
#define P_Hold_Pause_Use 26855
#define P_Hold_Err_MNTR 26856
#define P_Hold_Err_Data_Save 26860
#define P_Hold_Err_Action_Data_Save 26868
#define P_Hold_Motion_Err_Chk 26876
#define P_Hold_Memory_Tower_Err_Pos 26877
#define P_Hold_Motion_TimeOut 26892
#define P_Hold_Data_OK 26893
#define P_VISION_TRG_PLC4_AnodeSurface_Ins_Shoot 26894
#define P_VISION_TRG_PLC4_CathodeSurface_Ins_Shoot 26895
#define P_Memory_Tower_Test 26896
#define P_Temp_Run_Mode 26897
#define P_Data_Idx 26898
#define P_Get_Data_Idx 26899
#define P_HOLD_Data_Err_Queue 26900
#define P_HOLD_Data_Err_State_Machine 26901
#define P_HOLD_Err_Set_Data 26902
#define P_HOLD_Err_Save 26903
#define P_Sepa_Run_Completed_Flag 26904
#define M_Motor_Vel 9130
#define M_Motor_TA 9180
#define M_Motor_TD 9230
#define M_Motor_BTN 9280
#define M_Motor_RecipePos 9330
#define M_Motor_Move_Distance 9380
#define M_Motor_Home_Offset 9430
#define M_Motor_Pos_Data 9480
#define M_Motor_Status_Data 9530
#define M_Motor_Recipe_Pos_Interlock 9580
#define M_Motor_Peak_Load_Ratio 9630
#define M_Motor_Effective_Load_Ratio 9680
#define M_Motor_Check_Current_Recipe_Pos 9730
#define P_Buffer_Seqdata_MSA_Array 26905
#define P_Buffer_Seqdata_Align_Take_Off_Array 26955
#define P_VISION_MSA_Align_Module_Complete_Bit 27005
#define P_Module_Manual_MSA_Act_Command_Array 27105
#define P_OLD_Module_Manual_MSA_Act_Command_Array 27205
#define P_Module_MSA_Act_State_Machine_Array 27305
#define P_VISION_MSA_Seq_Stopping_Point 27405
#define P_Align_Take_Off_Module_Complete_Bit 27438
#define P_Module_Manual_Align_Take_Off_Act_Command_Array 27538
#define P_OLD_Module_Manual_Align_Take_Off_Act_Command_Array 27638
#define P_Module_Align_Take_Off_Act_State_Machine_Array 27738
#define P_Log_Data_Y 27838
#define P_Log_Data_M 27839
#define P_Log_Data_D 27840
#define P_Log_Data_H 27841
#define P_Log_Data_m 27842
#define P_Log_Data_s 27843
#define P_MNTR_End_Index 27844
#define P_BG_CPLC_Running_MNTR 50
#define P_RTI_CPLC_Running_MNTR 51
#define P_Log_Start_Flag 170
#define P_Log_Document_Remove_Flag 171
#define P_Sepa_ID_Change_Flag 172
#define P_USB_Register 173
#define P_Cur_Line_Check 175
#define P_Cur_Line_Check_Init 176
#define P_Buffer_Judge_Trg 27845
#define P_Hold_Pass 27855
#define P_PLC01_Queue_MNTR 27856
#define P_PLC01_Total_Step_Flag 27871
#define P_PLC02_Total_Step_Flag 27872
#define P_PLC014_Total_Step_Flag 27873
#define P_PLC02_Total_Step_Flag2 27874
#define P_Vac_Pass 27875
#define P_Vision_Pass_Exisitence 27876
#define P_Vision_Pass_Empty 27877
#define P_Vision_Pass_FirstSepa 27878
#define P_Vision_Pass_Stack_Inspection 27879
#define P_ULD_Home_Pass 27880
#define P_Clamp_Cell_Down_Use 27881
#define P_FR_Clamp_Use_Test 27882
#define P_Door_Interlock_Use_Flag 27883
#define P_Vacuum_Door_Clear_Use 27884
#define P_Align_Test_Pos 27885
#define P_PLC01_Exe_Is_Ena_Step_Flag 27886
#define P_PLC01_Exe_Fist_Sepa_Step_Flag 27896
#define P_PLC01_Exe_Prod_Step_Flag 27906
#define P_PLC01_HOLD_Insp_Step_Flag 27911
#define P_PLC01_HOLD_Main_Step_Flag 27921
#define P_PLC01_Sus_Discharge_Step_Flag 27936
#define P_PLC01_Sus_ARC_Step_Flag 27946
#define P_PLC01_STOP_Init_Step_Flag 27956
#define P_PLC01_STOP_Cycle_ST_Step_Flag 27966
#define P_PLC02_Exe_Module_First_Sepa_Step_Flag 27981
#define P_PLC02_Sus_Module_Discharge_Step_Flag 27982
#define P_PLC02_Sus_Module_ARC_Step_Flag 27983
#define P_PLC02_Sus_Module_1TR_Supply_Step_Flag 27984
#define P_PLC02_HOLD_Module_Insp_Step_Flag 27985
#define P_PLC02_HOLD_Module_Remove_NGPNP_Step_Flag 27986
#define P_PLC02_HOLD_Module_Remove_Align_Step_Flag 27987
#define P_PLC02_HOLD_Module_Remove_2TR_Step_Flag 27988
#define P_PLC02_HOLD_Module_Supply_1TR_Step_Flag 27989
#define P_PLC02_HOLD_Module_Supply_Align_Step_Flag 27990
#define P_PLC02_HOLD_Module_Supply_2TR_Step_Flag 27991
#define P_PLC02_HOLD_Module_SemiRun_Pos_Step_Flag 27992
#define P_PLC14_STOP_Module_Cycle_Stop_Step_Flag 27993
#define P_PLC02_Discharge_MNTR 27994
#define P_NEW_Alarm_USE_Flag 27995
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
#define P_Error_Index_Number 27996
#define P_ECAT_MNTR_Bit 27997
#define P_Local_MNTR_Bit 27998
#define P_Clamp_Motion_VER1 27999
#define P_CA_DR_Ta 28000
#define P_CA_DR_Ts 28001
#define P_CA_DR_Tm 28002
#define P_CA_DR_Td 28003
#define P_CA_DR_Tsd 28004
#define P_AN_DR_Ta 28005
#define P_AN_DR_Ts 28006
#define P_AN_DR_Tm 28007
#define P_AN_DR_Td 28008
#define P_AN_DR_Tsd 28009
#define P_First_Sepa_1st_Driving_Move 28010
#define P_AN_Cam_Total_Time 28011
#define P_CA_Cam_Total_Time 28012
#define P_Dry_Run_BTN 28013
#define P_Home_Angle_Offset_change_Bit 28014
#define P_InterLock_Motor_Num 28015
#define P_Recipe_Move_IL_Loop 28016
#define P_Z_Var 28017
#define P_No1_Recipe_Pos_IL 28018
#define P_No2_Recipe_Pos_IL 28071
#define P_No3_Recipe_Pos_IL 28124
#define P_No4_Recipe_Pos_IL 28177
#define P_No5_Recipe_Pos_IL 28230
#define P_No6_Recipe_Pos_IL 28283
#define P_No7_Recipe_Pos_IL 28336
#define P_No8_Recipe_Pos_IL 28389
#define P_No9_Recipe_Pos_IL 28442
#define P_No10_Recipe_Pos_IL 28495
#define P_Recipe_POS_Interock_M 28548
#endif
#endif
#endif //_PP_PROJ_H_
