
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
,M_Stack_Host_ID_Buffer_Mode=8563
,M_Stack_Host_ID_Sample_Type=8564
,M_Stack_Host_ID_JR_Result=8565
,M_Stack_Host_ID_NG_Type=8566
,M_Manual_ARC_BTN=9128
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
,M_Motor_BTN_Info=8503
,M_ASCII_Stack_Work_Host_Sepa_ID_Buffer=8553
,M_ASCII_Read_Stack_Work_Host_Sepa_ID_Buffer=8567
,M_ASCII_Uloader_1st_Host_ID_Buffer=8574
,M_ASCII_Anode_Sheet_Belt_Buffer=8584
,M_ASCII_Anode_Sheet_Buffer=8591
,M_ASCII_Cathode_Sheet_Belt_Buffer=8647
,M_ASCII_Cathode_Sheet_Buffer=8654
,M_ASCII_First_Sheet_Buffer=8710
,M_ASCII_Last_Sheet_Buffer=8717
,P_BTN_Jog_BWD_M=8724
,P_BTN_Jog_FWD_M=8774
,M_UnWinder_BTN_Lamp=8824
,M_Cathode_BTN_Lamp=8840
,M_Anode_BTN_Lamp=8872
,M_Stack_BTN_Lamp=8904
,M_ARC_BTN_Lamp=8936
,M_UnWinder_BTN_Interlock=8968
,M_Cathode_BTN_Interlock=8984
,M_Anode_BTN_Interlock=9016
,M_Stack_BTN_Interlock=9048
,M_ARC_BTN_Interlock=9080
,M_NP_BTN_Interlock=9112
,M_Motor_Vel=9129
,M_Motor_TA=9179
,M_Motor_TD=9229
,M_Motor_BTN=9279
,M_Motor_RecipePos=9329
,M_Motor_Move_Distance=9379
,M_Motor_Home_Offset=9429
,M_Motor_Pos_Data=9479
,M_Motor_Status_Data=9529
,M_Motor_Recipe_Pos_Interlock=9579
,M_Motor_Peak_Load_Ratio=9629
,M_Motor_Effective_Load_Ratio=9679
,M_Motor_Check_Current_Recipe_Pos=9729};
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
#define	P_Force_Stop_Flag	pshm->P[8751]
#define	P_Execute_DryRun_Stop_Timer	pshm->P[8752]
#define	P_DryRun_Timer	pshm->P[8753]
#define	P_Dryrun_Operating_Time	pshm->P[8754]
#define	P_Anode_Align_Vac_Err_On	pshm->P[8755]
#define	P_Cathode_Align_Vac_Err_On	pshm->P[8756]
#define	P_Anode_1ST_TR_Vac_Err_On	pshm->P[8757]
#define	P_Anode_2ND_TR_Vac_Err_On	pshm->P[8758]
#define	P_Cathode_1ST_TR_Vac_Err_On	pshm->P[8759]
#define	P_Cathode_2ND_TR_Vac_Err_On	pshm->P[8760]
#define	P_MNTR_PLC0_Task_Time(i)	pshm->P[(8761+i)%MAX_P]
#define	P_MNTR_PLC0_Task_Max_Time	pshm->P[8763]
#define	P_MNTR_PLC1_Task_Time(i)	pshm->P[(8764+i)%MAX_P]
#define	P_MNTR_PLC1_Task_Max_Time	pshm->P[8766]
#define	P_MNTR_PLC2_Task_Time(i)	pshm->P[(8767+i)%MAX_P]
#define	P_MNTR_PLC2_Task_Max_Time	pshm->P[8769]
#define	P_MNTR_PLC3_Task_Time(i)	pshm->P[(8770+i)%MAX_P]
#define	P_MNTR_PLC3_Task_Max_Time	pshm->P[8772]
#define	P_MNTR_PLC4_Task_Time(i)	pshm->P[(8773+i)%MAX_P]
#define	P_MNTR_PLC4_Task_Max_Time	pshm->P[8775]
#define	P_MNTR_PLC5_Task_Time(i)	pshm->P[(8776+i)%MAX_P]
#define	P_MNTR_PLC5_Task_Max_Time	pshm->P[8778]
#define	P_MNTR_PLC6_Task_Time(i)	pshm->P[(8779+i)%MAX_P]
#define	P_MNTR_PLC6_Task_Max_Time	pshm->P[8781]
#define	P_MNTR_PLC7_Task_Time(i)	pshm->P[(8782+i)%MAX_P]
#define	P_MNTR_PLC7_Task_Max_Time	pshm->P[8784]
#define	P_MNTR_PLC8_Task_Time(i)	pshm->P[(8785+i)%MAX_P]
#define	P_MNTR_PLC8_Task_Max_Time	pshm->P[8787]
#define	P_MNTR_PLC9_Task_Time(i)	pshm->P[(8788+i)%MAX_P]
#define	P_MNTR_PLC9_Task_Max_Time	pshm->P[8790]
#define	P_MNTR_PLC10_Task_Time(i)	pshm->P[(8791+i)%MAX_P]
#define	P_MNTR_PLC10_Task_Max_Time	pshm->P[8793]
#define	P_MNTR_PLC11_Task_Time(i)	pshm->P[(8794+i)%MAX_P]
#define	P_MNTR_PLC11_Task_Max_Time	pshm->P[8796]
#define	P_MNTR_PLC12_Task_Time(i)	pshm->P[(8797+i)%MAX_P]
#define	P_MNTR_PLC12_Task_Max_Time	pshm->P[8799]
#define	P_MNTR_PLC13_Task_Time(i)	pshm->P[(8800+i)%MAX_P]
#define	P_MNTR_PLC13_Task_Max_Time	pshm->P[8802]
#define	P_MNTR_PLC14_Task_Time(i)	pshm->P[(8803+i)%MAX_P]
#define	P_MNTR_PLC14_Task_Max_Time	pshm->P[8805]
#define	P_MNTR_PLC15_Task_Time(i)	pshm->P[(8806+i)%MAX_P]
#define	P_MNTR_PLC15_Task_Max_Time	pshm->P[8808]
#define	P_MNTR_PLC16_Task_Time(i)	pshm->P[(8809+i)%MAX_P]
#define	P_MNTR_PLC16_Task_Max_Time	pshm->P[8811]
#define	P_MNTR_PLC17_Task_Time(i)	pshm->P[(8812+i)%MAX_P]
#define	P_MNTR_PLC17_Task_Max_Time	pshm->P[8814]
#define	P_MNTR_PLC18_Task_Time(i)	pshm->P[(8815+i)%MAX_P]
#define	P_MNTR_PLC18_Task_Max_Time	pshm->P[8817]
#define	P_MNTR_PLC19_Task_Time(i)	pshm->P[(8818+i)%MAX_P]
#define	P_MNTR_PLC19_Task_Max_Time	pshm->P[8820]
#define	P_MNTR_PLC20_Task_Time(i)	pshm->P[(8821+i)%MAX_P]
#define	P_MNTR_PLC20_Task_Max_Time	pshm->P[8823]
#define	P_MNTR_PLC21_Task_Time(i)	pshm->P[(8824+i)%MAX_P]
#define	P_MNTR_PLC21_Task_Max_Time	pshm->P[8826]
#define	P_MNTR_PLC22_Task_Time(i)	pshm->P[(8827+i)%MAX_P]
#define	P_MNTR_PLC22_Task_Max_Time	pshm->P[8829]
#define	P_MNTR_PLC23_Task_Time(i)	pshm->P[(8830+i)%MAX_P]
#define	P_MNTR_PLC23_Task_Max_Time	pshm->P[8832]
#define	P_MNTR_PLC24_Task_Time(i)	pshm->P[(8833+i)%MAX_P]
#define	P_MNTR_PLC24_Task_Max_Time	pshm->P[8835]
#define	P_MNTR_PLC25_Task_Time(i)	pshm->P[(8836+i)%MAX_P]
#define	P_MNTR_PLC25_Task_Max_Time	pshm->P[8838]
#define	P_MNTR_PLC26_Task_Time(i)	pshm->P[(8839+i)%MAX_P]
#define	P_MNTR_PLC26_Task_Max_Time	pshm->P[8841]
#define	P_MNTR_PLC27_Task_Time(i)	pshm->P[(8842+i)%MAX_P]
#define	P_MNTR_PLC27_Task_Max_Time	pshm->P[8844]
#define	P_MNTR_PLC28_Task_Time(i)	pshm->P[(8845+i)%MAX_P]
#define	P_MNTR_PLC28_Task_Max_Time	pshm->P[8847]
#define	P_MNTR_PLC29_Task_Time(i)	pshm->P[(8848+i)%MAX_P]
#define	P_MNTR_PLC29_Task_Max_Time	pshm->P[8850]
#define	P_MNTR_PLC30_Task_Time(i)	pshm->P[(8851+i)%MAX_P]
#define	P_MNTR_PLC30_Task_Max_Time	pshm->P[8853]
#define	P_In_Pos_Trg	pshm->P[8854]
#define	P_Position_Calc_Status	pshm->P[8855]
#define	P_Vision_Result(i)	pshm->P[(8856+i)%MAX_P]
#define	P_Vision_Result_Get_First_Cycle(i)	pshm->P[(8860+i)%MAX_P]
#define	P_Init_Result(i)	pshm->P[(8864+i)%MAX_P]
#define	P_PNP_Pos	pshm->P[8870]
#define	P_Execute_Manage_Mode	pshm->P[8871]
#define	P_Align_NG_Tack_Flag	pshm->P[8872]
#define	P_Anode_Align_OK_Flag	pshm->P[8873]
#define	P_Anode_Align_NG_Flag	pshm->P[8874]
#define	P_Cathode_Align_OK_Flag	pshm->P[8875]
#define	P_Cathode_Align_NG_Flag	pshm->P[8876]
#define	P_Stack_Table_OK_Flag	pshm->P[8877]
#define	P_Anode_Retry_OK_Flag	pshm->P[8878]
#define	P_Anode_Retry_NG_Flag	pshm->P[8879]
#define	P_Cathode_Retry_OK_Flag	pshm->P[8880]
#define	P_Cathode_Retry_NG_Flag	pshm->P[8881]
#define	P_Anode_Surf_Insp_Trigger	pshm->P[8882]
#define	P_Cathode_Surf_Insp_Trigger	pshm->P[8883]
#define	P_First_Anode_Sheet_Supply_Flag	pshm->P[8884]
#define	P_First_Cathode_Sheet_Supply_Flag	pshm->P[8885]
#define	P_Cathode_Cur_Mode	pshm->P[8886]
#define	P_Anode_Cur_Mode	pshm->P[8887]
#define	P_Anode_Run_FR_Move_Check_AI	pshm->P[8888]
#define	P_Cathode_Run_FR_Move_Check_AI	pshm->P[8889]
#define	P_FR_Move_Check_AI_OffSet	pshm->P[8890]
#define	P_FR_AI_Value(i)	pshm->P[(8891+i)%MAX_P]
#define	P_Aver_FR_AI_Value	pshm->P[8896]
#define	P_Process_Function_Command	pshm->P[8897]
#define	P_HOLD_Existence_Insp_State_Machine	pshm->P[8898]
#define	P_Execute_IsEnable_State_Machine	pshm->P[8899]
#define	P_EXECUTE_FUNC_Ready_STEP	pshm->P[8900]
#define	P_Execute_First_Sepa_Ontable_State_Machine	pshm->P[8901]
#define	P_Execute_Prod_Manage_State_Machine	pshm->P[8902]
#define	P_Execute_Enqueue_State_Machine	pshm->P[8903]
#define	P_STOP_Initial_Process_STEP	pshm->P[8904]
#define	P_STOP_Cylce_Stop_STEP	pshm->P[8905]
#define	P_Stop_CycleStop_Position	pshm->P[8906]
#define	P_Upcount_NextStep	pshm->P[8907]
#define	P_SUSPEND_FUNC_JR_Discharge_STEP	pshm->P[8908]
#define	P_SUSPEND_FUNC_ARC_STEP	pshm->P[8909]
#define	P_Suspend_ARC_Complete_Flag	pshm->P[8910]
#define	P_EXECUTE_FUNC_Debug_On_Sepa_STEP	pshm->P[8911]
#define	P_QueueCommand_Occurs	pshm->P[8912]
#define	P_EXECUTE_STEP	pshm->P[8913]
#define	P_SUSPEND_STEP	pshm->P[8914]
#define	P_HOLD_STEP	pshm->P[8915]
#define	P_STOP_STEP	pshm->P[8916]
#define	P_EXECUTE_Error_STEP	pshm->P[8917]
#define	P_SUSPEND_Error_STEP	pshm->P[8918]
#define	P_HOLD_Error_STEP	pshm->P[8919]
#define	P_STOP_Error_STEP	pshm->P[8920]
#define	P_Queue_Enqueue_Command	pshm->P[8921]
#define	P_Queue_Enqueue_return	pshm->P[8922]
#define	P_Queue_Dequeue_Command	pshm->P[8923]
#define	P_Queue_Dequeue_return	pshm->P[8924]
#define	P_Queue_Peek_Command	pshm->P[8925]
#define	P_Dequeue_Log(i)	pshm->P[(8926+i)%MAX_P]
#define	P_Dummy_Dequeue	pshm->P[8946]
#define	P_Queue_Command_Status	pshm->P[8947]
#define	P_Queue_Process_Command	pshm->P[8948]
#define	P_Queue_Process_Status	pshm->P[8949]
#define	P_Coord_Test	pshm->P[8950]
#define	P_Coord_Test3	pshm->P[8951]
#define	P_Coord_Test2	pshm->P[8952]
#define	P_Coord_Motion_Prog_Down_Entering_Bit	pshm->P[8953]
#define	P_PMAC_Coord_Status_Bit	pshm->P[8954]
#define	P_Coord_Down_Check_Bit	pshm->P[8955]
#define	P_PMAC_Coord_Down_Inspection_Flag	pshm->P[8956]
#define	P_PMAC_Coord_Down_Num	pshm->P[8957]
#define	P_PMAC_Coord_Error_Status	pshm->P[8958]
#define	P_Motor_Current_Pos(i)	pshm->P[(8959+i)%MAX_P]
#define	P_Axis_Scale_Value(i)	pshm->P[(9009+i)%MAX_P]
#define	P_Except_Return_Array(i)	pshm->P[(9059+i)%MAX_P]
#define	P_Hold_Memory(i)	pshm->P[(9159+i)%MAX_P]
#define	P_Suspend_Memory(i)	pshm->P[(9164+i)%MAX_P]
#define	P_Execute_Memory(i)	pshm->P[(9169+i)%MAX_P]
#define	P_Stop_Memory(i)	pshm->P[(9174+i)%MAX_P]
#define	P_PLC01_Process_Function_Enter_Flag	pshm->P[9179]
#define	P_PLC01_SubMotion_Active	pshm->P[9180]
#define	P_PLC01_SlaveMotion_Active	pshm->P[9181]
#define	P_EXECUTE_Isenable_MNTR	pshm->P[9182]
#define	P_EXECUTE_IsEnable_Firt_Stacking_Flag	pshm->P[9183]
#define	P_PLC01_Execute_Retry_Sepa_Mode_Count	pshm->P[9184]
#define	P_SUSPEND_MNTR	pshm->P[9185]
#define	P_SUSPEND_MNTR_2	pshm->P[9186]
#define	P_Execute_Last_Run_Flag	pshm->P[9187]
#define	P_Suspend_ARC_Request_Flag	pshm->P[9188]
#define	P_Hold_Queue_Exist_Insp_MNTR	pshm->P[9189]
#define	P_CirQueue_Status_Value	pshm->P[9190]
#define	P_Debug_CirQueue_Status	pshm->P[9191]
#define	P_Front_Index	pshm->P[9192]
#define	P_Rear_Index	pshm->P[9193]
#define	P_Index_Max	pshm->P[9194]
#define	P_CircularQueue_Command_array(i)	pshm->P[(9195+i)%MAX_P]
#define	P_CirQueue_Length	pshm->P[9206]
#define	P_Queue_Full	pshm->P[9207]
#define	P_Queue_Empty	pshm->P[9208]
#define	P_Queue_PeekEmpty	pshm->P[9209]
#define	P_Self_items	pshm->P[9210]
#define	P_Hold_Resume_Need_Flag	pshm->P[9211]
#define	P_Stack_Heart_Bit_Timer	pshm->P[9212]
#define	P_Stack_Heart_Bit_Calc	pshm->P[9213]
#define	P_Stack_Heart_Bit_Sync_State_Machine	pshm->P[9214]
#define	P_Pause_Anode_MNTR_Min_Trigger	pshm->P[9215]
#define	P_Pause_Anode_MNTR_Max_Trigger	pshm->P[9216]
#define	P_Pause_Cathode_MNTR_Min_Trigger	pshm->P[9217]
#define	P_Pause_Cathode_MNTR_Max_Trigger	pshm->P[9218]
#define	P_Pause_Protect_Variable	pshm->P[9219]
#define	P_Resume_Protect_Variable	pshm->P[9220]
#define	P_Sepa_Mode_Opposite_Resume_Free	pshm->P[9221]
#define	P_Sepa_To_Normal_Mode_Sync_Flag	pshm->P[9222]
#define	P_Sepa_To_Normal_Mode_Sync_Err_Avoid	pshm->P[9223]
#define	P_Recipe_1st_MotorNo(i)	pshm->P[(9224+i)%MAX_P]
#define	P_Recipe_2nd_MotorNo(i)	pshm->P[(9274+i)%MAX_P]
#define	P_Recipe_3rd_MotorNo(i)	pshm->P[(9324+i)%MAX_P]
#define	P_Recipe_4th_MotorNo(i)	pshm->P[(9374+i)%MAX_P]
#define	P_Recipe_5th_MotorNo(i)	pshm->P[(9424+i)%MAX_P]
#define	P_Recipe_6th_MotorNo(i)	pshm->P[(9474+i)%MAX_P]
#define	P_X_Axis_Num	pshm->P[9524]
#define	P_Y_Axis_Num	pshm->P[9525]
#define	P_Z_Axis_Num	pshm->P[9526]
#define	P_ZZ_Axis_Num	pshm->P[9527]
#define	P_X_Unit	pshm->P[9528]
#define	P_Y_Unit	pshm->P[9529]
#define	P_Z_Unit	pshm->P[9530]
#define	P_ZZ_Unit	pshm->P[9531]
#define	P_Pos_Memory_Bit_Save	pshm->P[9532]
#define	P_Total_Unit_Bit	pshm->P[9533]
#define	P_Total_Unit_Pos	pshm->P[9534]
#define	P_Anode_1st_Unit_Status	pshm->P[9535]
#define	P_Anode_2nd_Unit_Status	pshm->P[9536]
#define	P_Anode_CLP_Unit_Status	pshm->P[9537]
#define	P_FinalRoll_Unit_Status	pshm->P[9538]
#define	P_StackTable_Unit_Status	pshm->P[9539]
#define	P_Cathode_CLP_Unit_Status	pshm->P[9540]
#define	P_Cathode_2nd_Unit_Status	pshm->P[9541]
#define	P_Cathode_1st_Unit_Status	pshm->P[9542]
#define	P_1st_Unloader_Unit_Status	pshm->P[9543]
#define	P_Cathode_NG_PNP_Status	pshm->P[9544]
#define	P_Anode_NG_PNP_Status	pshm->P[9545]
#define	P_Unit_integrated_Status	pshm->P[9546]
#define	P_Unit_Status_Update_Flag	pshm->P[9547]
#define	P_Memory_Tower_Search_Flag	pshm->P[9548]
#define	P_MemTow_integrated_return	pshm->P[9549]
#define	P_Error_STMS_Memory_Tower_Status	pshm->P[9550]
#define	P_STMS_Memory_Tower_Status	pshm->P[9551]
#define	P_Recipe_M01_POS(i)	pshm->P[(9552+i)%MAX_P]
#define	P_Recipe_M02_POS(i)	pshm->P[(9563+i)%MAX_P]
#define	P_Recipe_M03_POS(i)	pshm->P[(9574+i)%MAX_P]
#define	P_Recipe_M04_POS(i)	pshm->P[(9585+i)%MAX_P]
#define	P_Recipe_M05_POS(i)	pshm->P[(9596+i)%MAX_P]
#define	P_Recipe_M06_POS(i)	pshm->P[(9607+i)%MAX_P]
#define	P_Recipe_M07_POS(i)	pshm->P[(9618+i)%MAX_P]
#define	P_Recipe_M08_POS(i)	pshm->P[(9629+i)%MAX_P]
#define	P_Recipe_M09_POS(i)	pshm->P[(9640+i)%MAX_P]
#define	P_Recipe_M10_POS(i)	pshm->P[(9651+i)%MAX_P]
#define	P_Recipe_M11_POS(i)	pshm->P[(9662+i)%MAX_P]
#define	P_Recipe_M12_POS(i)	pshm->P[(9673+i)%MAX_P]
#define	P_Recipe_M13_POS(i)	pshm->P[(9684+i)%MAX_P]
#define	P_Recipe_M14_POS(i)	pshm->P[(9695+i)%MAX_P]
#define	P_Recipe_M15_POS(i)	pshm->P[(9706+i)%MAX_P]
#define	P_Recipe_M16_POS(i)	pshm->P[(9717+i)%MAX_P]
#define	P_Recipe_M17_POS(i)	pshm->P[(9728+i)%MAX_P]
#define	P_Recipe_M18_POS(i)	pshm->P[(9739+i)%MAX_P]
#define	P_Recipe_M19_POS(i)	pshm->P[(9750+i)%MAX_P]
#define	P_Recipe_M20_POS(i)	pshm->P[(9761+i)%MAX_P]
#define	P_Recipe_M21_POS(i)	pshm->P[(9772+i)%MAX_P]
#define	P_Recipe_M22_POS(i)	pshm->P[(9783+i)%MAX_P]
#define	P_Recipe_M23_POS(i)	pshm->P[(9794+i)%MAX_P]
#define	P_Recipe_M24_POS(i)	pshm->P[(9805+i)%MAX_P]
#define	P_Recipe_M25_POS(i)	pshm->P[(9816+i)%MAX_P]
#define	P_Recipe_M26_POS(i)	pshm->P[(9827+i)%MAX_P]
#define	P_Recipe_M27_POS(i)	pshm->P[(9838+i)%MAX_P]
#define	P_Recipe_M28_POS(i)	pshm->P[(9849+i)%MAX_P]
#define	P_Recipe_M29_POS(i)	pshm->P[(9860+i)%MAX_P]
#define	P_Recipe_M30_POS(i)	pshm->P[(9871+i)%MAX_P]
#define	P_Recipe_M31_POS(i)	pshm->P[(9882+i)%MAX_P]
#define	P_Recipe_M32_POS(i)	pshm->P[(9893+i)%MAX_P]
#define	P_Recipe_M33_POS(i)	pshm->P[(9904+i)%MAX_P]
#define	P_Recipe_M34_POS(i)	pshm->P[(9915+i)%MAX_P]
#define	P_Recipe_M35_POS(i)	pshm->P[(9926+i)%MAX_P]
#define	P_Recipe_M36_POS(i)	pshm->P[(9937+i)%MAX_P]
#define	P_Recipe_M37_POS(i)	pshm->P[(9948+i)%MAX_P]
#define	P_Recipe_M38_POS(i)	pshm->P[(9959+i)%MAX_P]
#define	P_Recipe_M39_POS(i)	pshm->P[(9970+i)%MAX_P]
#define	P_Recipe_M40_POS(i)	pshm->P[(9981+i)%MAX_P]
#define	P_Recipe_M41_POS(i)	pshm->P[(9992+i)%MAX_P]
#define	P_Recipe_M42_POS(i)	pshm->P[(10003+i)%MAX_P]
#define	P_Recipe_M43_POS(i)	pshm->P[(10014+i)%MAX_P]
#define	P_Recipe_M44_POS(i)	pshm->P[(10025+i)%MAX_P]
#define	P_Recipe_M45_POS(i)	pshm->P[(10036+i)%MAX_P]
#define	P_Recipe_M46_POS(i)	pshm->P[(10047+i)%MAX_P]
#define	P_Recipe_M47_POS(i)	pshm->P[(10058+i)%MAX_P]
#define	P_Recipe_M48_POS(i)	pshm->P[(10069+i)%MAX_P]
#define	P_Recipe_M49_POS(i)	pshm->P[(10080+i)%MAX_P]
#define	P_Recipe_M50_POS(i)	pshm->P[(10091+i)%MAX_P]
#define	P_Memory_Tower_X_Err_Flag	pshm->P[10102]
#define	P_Memory_Tower_Y_Err_Flag	pshm->P[10103]
#define	P_Memory_Tower_Z_Err_Flag	pshm->P[10104]
#define	P_Memory_Tower_ZZ_Err_Flag	pshm->P[10105]
#define	P_CA_Clamp_Cell_Down_Pos	pshm->P[10106]
#define	P_AN_Clamp_Cell_Down_Pos	pshm->P[10107]
#define	P_Error_X_Axis_Packml(i)	pshm->P[(10108+i)%MAX_P]
#define	P_Error_X_Axis_Dequeue(i)	pshm->P[(10114+i)%MAX_P]
#define	P_Error_X_Axis_Num(i)	pshm->P[(10120+i)%MAX_P]
#define	P_Memory_Tower_Err_Pos_X_Save(i)	pshm->P[(10126+i)%MAX_P]
#define	P_Error_Y_Axis_Packml(i)	pshm->P[(10132+i)%MAX_P]
#define	P_Error_Y_Axis_Dequeue(i)	pshm->P[(10138+i)%MAX_P]
#define	P_Error_Y_Axis_Num(i)	pshm->P[(10144+i)%MAX_P]
#define	P_Memory_Tower_Err_Pos_Y_Save(i)	pshm->P[(10150+i)%MAX_P]
#define	P_Error_Z_Axis_Packml(i)	pshm->P[(10156+i)%MAX_P]
#define	P_Error_Z_Axis_Dequeue(i)	pshm->P[(10162+i)%MAX_P]
#define	P_Error_Z_Axis_Num(i)	pshm->P[(10168+i)%MAX_P]
#define	P_Memory_Tower_Err_Pos_Z_Save(i)	pshm->P[(10174+i)%MAX_P]
#define	P_Error_ZZ_Axis_Packml(i)	pshm->P[(10180+i)%MAX_P]
#define	P_Error_ZZ_Axis_Dequeue(i)	pshm->P[(10186+i)%MAX_P]
#define	P_Error_ZZ_Axis_Num(i)	pshm->P[(10192+i)%MAX_P]
#define	P_Memory_Tower_Err_Pos_ZZ_Save(i)	pshm->P[(10198+i)%MAX_P]
#define	P_PNP_Abort_Use_Bit	pshm->P[10204]
#define	P_PNP_Abort_Use_Total_Bit	pshm->P[10205]
#define	P_C_1st_PNP_FWD_Abort_Use_Bit	pshm->P[10206]
#define	P_C_1st_PNP_BWD_Abort_Use_Bit	pshm->P[10207]
#define	P_C_2nd_PNP_FWD_Abort_Use_Bit	pshm->P[10208]
#define	P_C_2nd_PNP_BWD_Abort_Use_Bit	pshm->P[10209]
#define	P_A_1st_PNP_FWD_Abort_Use_Bit	pshm->P[10210]
#define	P_A_1st_PNP_BWD_Abort_Use_Bit	pshm->P[10211]
#define	P_A_2nd_PNP_FWD_Abort_Use_Bit	pshm->P[10212]
#define	P_A_2nd_PNP_BWD_Abort_Use_Bit	pshm->P[10213]
#define	P_Single_Motor_Control_Bit	pshm->P[10214]
#define	P_C_1st_PNP_FWD_Abort_Calc_Bit	pshm->P[10215]
#define	P_C_1st_PNP_BWD_Abort_Calc_Bit	pshm->P[10216]
#define	P_C_2nd_PNP_FWD_Abort_Calc_Bit	pshm->P[10217]
#define	P_C_2nd_PNP_BWD_Abort_Calc_Bit	pshm->P[10218]
#define	P_A_1st_PNP_FWD_Abort_Calc_Bit	pshm->P[10219]
#define	P_A_1st_PNP_BWD_Abort_Calc_Bit	pshm->P[10220]
#define	P_A_2nd_PNP_FWD_Abort_Calc_Bit	pshm->P[10221]
#define	P_A_2nd_PNP_BWD_Abort_Calc_Bit	pshm->P[10222]
#define	P_C_1st_PNP_FWD_Cur_Pos	pshm->P[10223]
#define	P_C_1st_PNP_FWD_Cur_Vel	pshm->P[10224]
#define	P_C_1st_PNP_BWD_Cur_Pos	pshm->P[10225]
#define	P_C_1st_PNP_BWD_Cur_Vel	pshm->P[10226]
#define	P_C_2nd_PNP_FWD_Cur_Pos	pshm->P[10227]
#define	P_C_2nd_PNP_FWD_Cur_Vel	pshm->P[10228]
#define	P_C_2nd_PNP_BWD_Cur_Pos	pshm->P[10229]
#define	P_C_2nd_PNP_BWD_Cur_Vel	pshm->P[10230]
#define	P_A_1st_PNP_FWD_Cur_Pos	pshm->P[10231]
#define	P_A_1st_PNP_FWD_Cur_Vel	pshm->P[10232]
#define	P_A_1st_PNP_BWD_Cur_Pos	pshm->P[10233]
#define	P_A_1st_PNP_BWD_Cur_Vel	pshm->P[10234]
#define	P_A_2nd_PNP_FWD_Cur_Pos	pshm->P[10235]
#define	P_A_2nd_PNP_FWD_Cur_Vel	pshm->P[10236]
#define	P_A_2nd_PNP_BWD_Cur_Pos	pshm->P[10237]
#define	P_A_2nd_PNP_BWD_Cur_Vel	pshm->P[10238]
#define	P_C_1st_PNP_FWD_Limit_Pos	pshm->P[10239]
#define	P_C_1st_PNP_BWD_Limit_Pos	pshm->P[10240]
#define	P_C_2nd_PNP_FWD_Limit_Pos	pshm->P[10241]
#define	P_C_2nd_PNP_BWD_Limit_Pos	pshm->P[10242]
#define	P_A_1st_PNP_FWD_Limit_Pos	pshm->P[10243]
#define	P_A_1st_PNP_BWD_Limit_Pos	pshm->P[10244]
#define	P_A_2nd_PNP_FWD_Limit_Pos	pshm->P[10245]
#define	P_A_2nd_PNP_BWD_Limit_Pos	pshm->P[10246]
#define	P_C_1st_PNP_FWD_Max_Limit_Pos	pshm->P[10247]
#define	P_C_1st_PNP_BWD_Max_Limit_Pos	pshm->P[10248]
#define	P_C_2nd_PNP_FWD_Max_Limit_Pos	pshm->P[10249]
#define	P_C_2nd_PNP_BWD_Max_Limit_Pos	pshm->P[10250]
#define	P_A_1st_PNP_FWD_Max_Limit_Pos	pshm->P[10251]
#define	P_A_1st_PNP_BWD_Max_Limit_Pos	pshm->P[10252]
#define	P_A_2nd_PNP_FWD_Max_Limit_Pos	pshm->P[10253]
#define	P_A_2nd_PNP_BWD_Max_Limit_Pos	pshm->P[10254]
#define	P_C_1st_PNP_FWD_Remain_Stroke	pshm->P[10255]
#define	P_C_1st_PNP_BWD_Remain_Stroke	pshm->P[10256]
#define	P_C_2nd_PNP_FWD_Remain_Stroke	pshm->P[10257]
#define	P_C_2nd_PNP_BWD_Remain_Stroke	pshm->P[10258]
#define	P_A_1st_PNP_FWD_Remain_Stroke	pshm->P[10259]
#define	P_A_1st_PNP_BWD_Remain_Stroke	pshm->P[10260]
#define	P_A_2nd_PNP_FWD_Remain_Stroke	pshm->P[10261]
#define	P_A_2nd_PNP_BWD_Remain_Stroke	pshm->P[10262]
#define	P_C_1st_PNP_FWD_Stroke_Time	pshm->P[10263]
#define	P_C_1st_PNP_BWD_Stroke_Time	pshm->P[10264]
#define	P_C_2nd_PNP_FWD_Stroke_Time	pshm->P[10265]
#define	P_C_2nd_PNP_BWD_Stroke_Time	pshm->P[10266]
#define	P_A_1st_PNP_FWD_Stroke_Time	pshm->P[10267]
#define	P_A_1st_PNP_BWD_Stroke_Time	pshm->P[10268]
#define	P_A_2nd_PNP_FWD_Stroke_Time	pshm->P[10269]
#define	P_A_2nd_PNP_BWD_Stroke_Time	pshm->P[10270]
#define	P_C_1st_PNP_FWD_Max_Speed	pshm->P[10271]
#define	P_C_1st_PNP_BWD_Max_Speed	pshm->P[10272]
#define	P_C_2nd_PNP_FWD_Max_Speed	pshm->P[10273]
#define	P_C_2nd_PNP_BWD_Max_Speed	pshm->P[10274]
#define	P_A_1st_PNP_FWD_Max_Speed	pshm->P[10275]
#define	P_A_1st_PNP_BWD_Max_Speed	pshm->P[10276]
#define	P_A_2nd_PNP_FWD_Max_Speed	pshm->P[10277]
#define	P_A_2nd_PNP_BWD_Max_Speed	pshm->P[10278]
#define	P_C_1st_PNP_FWD_ACC_Dis	pshm->P[10279]
#define	P_C_1st_PNP_BWD_ACC_Dis	pshm->P[10280]
#define	P_C_2nd_PNP_FWD_ACC_Dis	pshm->P[10281]
#define	P_C_2nd_PNP_BWD_ACC_Dis	pshm->P[10282]
#define	P_A_1st_PNP_FWD_ACC_Dis	pshm->P[10283]
#define	P_A_1st_PNP_BWD_ACC_Dis	pshm->P[10284]
#define	P_A_2nd_PNP_FWD_ACC_Dis	pshm->P[10285]
#define	P_A_2nd_PNP_BWD_ACC_Dis	pshm->P[10286]
#define	P_C_1st_PNP_FWD_AbortTa	pshm->P[10287]
#define	P_C_1st_PNP_FWD_AbortTs	pshm->P[10288]
#define	P_C_1st_PNP_BWD_AbortTa	pshm->P[10289]
#define	P_C_1st_PNP_BWD_AbortTs	pshm->P[10290]
#define	P_C_2nd_PNP_FWD_AbortTa	pshm->P[10291]
#define	P_C_2nd_PNP_FWD_AbortTs	pshm->P[10292]
#define	P_C_2nd_PNP_BWD_AbortTa	pshm->P[10293]
#define	P_C_2nd_PNP_BWD_AbortTs	pshm->P[10294]
#define	P_A_1st_PNP_FWD_AbortTa	pshm->P[10295]
#define	P_A_1st_PNP_FWD_AbortTs	pshm->P[10296]
#define	P_A_1st_PNP_BWD_AbortTa	pshm->P[10297]
#define	P_A_1st_PNP_BWD_AbortTs	pshm->P[10298]
#define	P_A_2nd_PNP_FWD_AbortTa	pshm->P[10299]
#define	P_A_2nd_PNP_FWD_AbortTs	pshm->P[10300]
#define	P_A_2nd_PNP_BWD_AbortTa	pshm->P[10301]
#define	P_A_2nd_PNP_BWD_AbortTs	pshm->P[10302]
#define	P_C_1st_PNP_FWD_Abort_Dec_Offset	pshm->P[10303]
#define	P_C_1st_PNP_BWD_Abort_Dec_Offset	pshm->P[10304]
#define	P_C_2nd_PNP_FWD_Abort_Dec_Offset	pshm->P[10305]
#define	P_C_2nd_PNP_BWD_Abort_Dec_Offset	pshm->P[10306]
#define	P_A_1st_PNP_FWD_Abort_Dec_Offset	pshm->P[10307]
#define	P_A_1st_PNP_BWD_Abort_Dec_Offset	pshm->P[10308]
#define	P_A_2nd_PNP_FWD_Abort_Dec_Offset	pshm->P[10309]
#define	P_A_2nd_PNP_BWD_Abort_Dec_Offset	pshm->P[10310]
#define	P_1st_PNP_FWD_Abort_Offset(i)	pshm->P[(10311+i)%MAX_P]
#define	P_1st_PNP_BWD_Abort_Offset(i)	pshm->P[(10401+i)%MAX_P]
#define	P_2nd_PNP_FWD_Abort_Offset(i)	pshm->P[(10491+i)%MAX_P]
#define	P_2nd_PNP_BWD_Abort_Offset(i)	pshm->P[(10581+i)%MAX_P]
#define	P_Abort_Init_Value	pshm->P[10671]
#define	P_C_1st_PNP_FWD_AbortTa_Buffer	pshm->P[10672]
#define	P_C_1st_PNP_FWD_AbortTs_Buffer	pshm->P[10673]
#define	P_C_1st_PNP_BWD_AbortTa_Buffer	pshm->P[10674]
#define	P_C_1st_PNP_BWD_AbortTs_Buffer	pshm->P[10675]
#define	P_C_2nd_PNP_FWD_AbortTa_Buffer	pshm->P[10676]
#define	P_C_2nd_PNP_FWD_AbortTs_Buffer	pshm->P[10677]
#define	P_C_2nd_PNP_BWD_AbortTa_Buffer	pshm->P[10678]
#define	P_C_2nd_PNP_BWD_AbortTs_Buffer	pshm->P[10679]
#define	P_A_1st_PNP_FWD_AbortTa_Buffer	pshm->P[10680]
#define	P_A_1st_PNP_FWD_AbortTs_Buffer	pshm->P[10681]
#define	P_A_1st_PNP_BWD_AbortTa_Buffer	pshm->P[10682]
#define	P_A_1st_PNP_BWD_AbortTs_Buffer	pshm->P[10683]
#define	P_A_2nd_PNP_FWD_AbortTa_Buffer	pshm->P[10684]
#define	P_A_2nd_PNP_FWD_AbortTs_Buffer	pshm->P[10685]
#define	P_A_2nd_PNP_BWD_AbortTa_Buffer	pshm->P[10686]
#define	P_A_2nd_PNP_BWD_AbortTs_Buffer	pshm->P[10687]
#define	P_C_1st_PNP_FWD_Restore_Bit	pshm->P[10688]
#define	P_C_1st_PNP_BWD_Restore_Bit	pshm->P[10689]
#define	P_C_2nd_PNP_FWD_Restore_Bit	pshm->P[10690]
#define	P_C_2nd_PNP_BWD_Restore_Bit	pshm->P[10691]
#define	P_A_1st_PNP_FWD_Restore_Bit	pshm->P[10692]
#define	P_A_1st_PNP_BWD_Restore_Bit	pshm->P[10693]
#define	P_A_2nd_PNP_FWD_Restore_Bit	pshm->P[10694]
#define	P_A_2nd_PNP_BWD_Restore_Bit	pshm->P[10695]
#define	P_Align_Inspection_Time	pshm->P[10696]
#define	P_Front_Inspection_Time	pshm->P[10697]
#define	P_Stack_Inspection_Time	pshm->P[10698]
#define	P_Existence_Inspection_Time	pshm->P[10699]
#define	P_EmptyTable_Inspection_Time	pshm->P[10700]
#define	P_FirstSepa_Inspection_Time	pshm->P[10701]
#define	P_Vision_Anode_Sepa_Mode_Stack_Command	pshm->P[10702]
#define	P_Vision_Cathode_Sepa_Mode_Stack_Command	pshm->P[10703]
#define	P_Cathode_Sepa_Mode_Timer	pshm->P[10704]
#define	P_Anode_Sepa_Mode_Timer	pshm->P[10705]
#define	P_Vision_Pass	pshm->P[10706]
#define	P_FirstSepa_Ret	pshm->P[10707]
#define	P_Vision_Align_Command	pshm->P[10708]
#define	P_Vision_Surface_Command	pshm->P[10709]
#define	P_Vision_Stack_Command	pshm->P[10710]
#define	P_Vision_Existence_Command	pshm->P[10711]
#define	P_Vision_EmptyTable_Command	pshm->P[10712]
#define	P_Vision_FirstSepa_Command	pshm->P[10713]
#define	P_Selected_Align_Inspection_Unit	pshm->P[10714]
#define	P_Selected_Surface_Inspection_Unit	pshm->P[10715]
#define	P_Selected_Stack_Inspection_Unit	pshm->P[10716]
#define	P_Selected_Existence_Inspection_Unit	pshm->P[10717]
#define	P_Selected_EmptyTable_Inspection_Unit	pshm->P[10718]
#define	P_Set_Cathode_Align_Zero_Pos	pshm->P[10719]
#define	P_Set_Anode_Align_Zero_Pos	pshm->P[10720]
#define	P_Vision_Align_State_Machine	pshm->P[10721]
#define	P_Vision_Surface_State_Machine	pshm->P[10722]
#define	P_Vision_Stack_State_Machine	pshm->P[10723]
#define	P_Vision_Existence_State_Machine	pshm->P[10724]
#define	P_Vision_EmptyTable_State_Machine	pshm->P[10725]
#define	P_Vision_FirstSepa_State_Machine	pshm->P[10726]
#define	P_Vision_Align_Status	pshm->P[10727]
#define	P_Vision_Surface_Status	pshm->P[10728]
#define	P_Vision_Stack_Status	pshm->P[10729]
#define	P_Vision_Existence_Status	pshm->P[10730]
#define	P_Vision_EmptyTable_Status	pshm->P[10731]
#define	P_Vision_FirstSepa_Status	pshm->P[10732]
#define	P_Align_Zero_Move_Start_Flag(i)	pshm->P[(10733+i)%MAX_P]
#define	P_Cathode_Align_Table_Move	pshm->P[10735]
#define	P_Anode_Align_Table_Move	pshm->P[10736]
#define	P_Vision_Anode_Cell_Existence	pshm->P[10737]
#define	P_Vision_Cathode_Cell_Existence	pshm->P[10738]
#define	P_Align_Sheet_CHK	pshm->P[10739]
#define	P_Anode_NG_Code	pshm->P[10740]
#define	P_Cathode_NG_Code	pshm->P[10741]
#define	P_Stack_NG_Code	pshm->P[10742]
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
#define	P_Stop_Debug_Flag	pshm->P[10743]
#define	P_Stop_Sub_Master_Motion_Program_Flag(i)	pshm->P[(10744+i)%MAX_P]
#define	P_Stop_Slave_Motion_Program_Flag(i)	pshm->P[(10764+i)%MAX_P]
#define	P_Stop_Motor_Status(i)	pshm->P[(10784+i)%MAX_P]
#define	P_Stop_Coord_Status(i)	pshm->P[(10832+i)%MAX_P]
#define	P_Stop_Status_Check_Address	pshm->P[10866]
#define	P_Stop_Status_Save_Address	pshm->P[10867]
#define	P_Stop_Check_RTN	pshm->P[10868]
#define	P_Stop_Save_RTN(i)	pshm->P[(10869+i)%MAX_P]
#define	P_Old_Total_Unit_Bit	pshm->P[10873]
#define	P_Memory_Tower_Dec_Result	pshm->P[10874]
#define	P_Stop_Motor_Pos(i)	pshm->P[(10875+i)%MAX_P]
#define	P_PNP_Move_Timer	pshm->P[10884]
#define	P_PNP_Move_Delay_Time	pshm->P[10885]
#define	P_Stop_Memory_Pos_RTN	pshm->P[10886]
#define	P_Slave1_Motion_Command	pshm->P[10887]
#define	P_Slave2_Motion_Command	pshm->P[10888]
#define	P_Slave3_Motion_Command	pshm->P[10889]
#define	P_Slave4_Motion_Command	pshm->P[10890]
#define	P_Slave5_Motion_Command	pshm->P[10891]
#define	P_Slave6_Motion_Command	pshm->P[10892]
#define	P_Slave7_Motion_Command	pshm->P[10893]
#define	P_Slave8_Motion_Command	pshm->P[10894]
#define	P_Slave9_Motion_Command	pshm->P[10895]
#define	P_Slave10_Motion_Command	pshm->P[10896]
#define	P_Slave11_Motion_Command	pshm->P[10897]
#define	P_Slave12_Motion_Command	pshm->P[10898]
#define	P_Slave13_Motion_Command	pshm->P[10899]
#define	P_Slave14_Motion_Command	pshm->P[10900]
#define	P_Slave15_Motion_Command	pshm->P[10901]
#define	P_Slave16_Motion_Command	pshm->P[10902]
#define	P_Slave17_Motion_Command	pshm->P[10903]
#define	P_Slave18_Motion_Command	pshm->P[10904]
#define	P_Slave19_Motion_Command	pshm->P[10905]
#define	P_Slave20_Motion_Command	pshm->P[10906]
#define	P_PNP_90_Deg_TM	pshm->P[10907]
#define	P_PNP_90_Deg_TA	pshm->P[10908]
#define	P_PNP_90_Deg_TS	pshm->P[10909]
#define	P_PNP_Ready_TM	pshm->P[10910]
#define	P_PNP_Ready_TA	pshm->P[10911]
#define	P_PNP_Ready_TS	pshm->P[10912]
#define	P_PNP_45_Deg_TM	pshm->P[10913]
#define	P_PNP_45_Deg_TA	pshm->P[10914]
#define	P_PNP_45_Deg_TS	pshm->P[10915]
#define	P_Unloader_TM_Test	pshm->P[10916]
#define	P_Unloader_TA_Test	pshm->P[10917]
#define	P_PROG_21_Program_Ver	pshm->P[2781]
#define	P_PROG_23_Program_Ver	pshm->P[2783]
#define	P_PROG_24_Program_Ver	pshm->P[2784]
#define	P_PROG_25_Program_Ver	pshm->P[2785]
#define	P_PROG_26_Program_Ver	pshm->P[2786]
#define	P_PROG_27_Program_Ver	pshm->P[2787]
#define	P_PROG_28_Program_Ver	pshm->P[2788]
#define	P_PROG_30_Program_Ver	pshm->P[2790]
#define	P_Master_Motion_Trigger	pshm->P[10918]
#define	P_Parity_Bit	pshm->P[10919]
#define	P_Master_Move	pshm->P[10920]
#define	P_Master_TA	pshm->P[10921]
#define	P_Master_TS	pshm->P[10922]
#define	P_Master_TM	pshm->P[10923]
#define	P_Anode_Count	pshm->P[10924]
#define	P_Cathode_Count	pshm->P[10925]
#define	P_Anode_Thickness	pshm->P[10926]
#define	P_Cathode_Thickness	pshm->P[10927]
#define	P_Sepa_Thickness	pshm->P[10928]
#define	P_Anode_Thickness_PLC	pshm->P[10929]
#define	P_Cathode_Thickness_PLC	pshm->P[10930]
#define	P_Sepa_Thickness_PLC	pshm->P[10931]
#define	P_Old_P_Anode_TR1_Master_Motion_Trigger(i)	pshm->P[(10932+i)%MAX_P]
#define	P_Old_P_Cathode_TR1_Master_Motion_Trigger(i)	pshm->P[(10948+i)%MAX_P]
#define	P_Anode_TR1_Old_Mode(i)	pshm->P[(10964+i)%MAX_P]
#define	P_Cathode_TR1_Old_Mode(i)	pshm->P[(10980+i)%MAX_P]
#define	P_Older_Than_P_Anode_TR1_Old_Mode(i)	pshm->P[(10996+i)%MAX_P]
#define	P_Older_Than_P_Cathode_TR1_Old_Mode(i)	pshm->P[(11012+i)%MAX_P]
#define	P_Older_Than_P_Sequence_Old_P_Anode_TR1_Current_Mode_Trigger(i)	pshm->P[(11028+i)%MAX_P]
#define	P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Current_Mode_Trigger(i)	pshm->P[(11044+i)%MAX_P]
#define	P_Old_P_Anode_TR1_Mode_Command(i)	pshm->P[(11060+i)%MAX_P]
#define	P_Old_P_Cathode_TR1_Mode_Command(i)	pshm->P[(11076+i)%MAX_P]
#define	P_Older_Than_P_Old_P_Anode_TR1_Mode_Command(i)	pshm->P[(11092+i)%MAX_P]
#define	P_Older_Than_P_Old_P_Cathode_TR1_Mode_Command(i)	pshm->P[(11108+i)%MAX_P]
#define	P_Older_Than_P_Sequence_Old_P_Anode_TR1_Mode_Command_Trigger(i)	pshm->P[(11124+i)%MAX_P]
#define	P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Mode_Command_Trigger(i)	pshm->P[(11140+i)%MAX_P]
#define	P_Old_P_Anode_TR1_PMAC_Status(i)	pshm->P[(11156+i)%MAX_P]
#define	P_Old_P_Cathode_TR1_PMAC_Status(i)	pshm->P[(11172+i)%MAX_P]
#define	P_Older_Than_P_Old_P_Anode_TR1_PMAC_Status(i)	pshm->P[(11188+i)%MAX_P]
#define	P_Older_Than_P_Old_P_Cathode_TR1_PMAC_Status(i)	pshm->P[(11204+i)%MAX_P]
#define	P_Old_P_Slave1_Motion_Command(i)	pshm->P[(11220+i)%MAX_P]
#define	P_Old_P_Slave10_Motion_Command(i)	pshm->P[(11236+i)%MAX_P]
#define	P_Old_Slave1_P_SubMaster_Sub_Mode_Command(i)	pshm->P[(11252+i)%MAX_P]
#define	P_Old_Slave10_P_SubMaster_Sub_Mode_Command(i)	pshm->P[(11268+i)%MAX_P]
#define	P_Sequence_Old_P_Current_Mode_Trigger(i)	pshm->P[(11284+i)%MAX_P]
#define	P_Sequence_Old_Mode(i)	pshm->P[(11300+i)%MAX_P]
#define	P_Sequence_Old_P_Mode_Command(i)	pshm->P[(11316+i)%MAX_P]
#define	P_Sequence_Old_P_Mode_Command_Trigger(i)	pshm->P[(11332+i)%MAX_P]
#define	P_SubMaster_Sub_Old_Mode(i)	pshm->P[(11348+i)%MAX_P]
#define	P_SubMaster_Sub_Old_Command(i)	pshm->P[(11364+i)%MAX_P]
#define	P_SubMaster_Sub_Mode_Command(i)	pshm->P[(11380+i)%MAX_P]
#define	P_SubMaster_Sub_Old_Trigger(i)	pshm->P[(11396+i)%MAX_P]
#define	P_InterLock_No3_Array(i)	pshm->P[(11412+i)%MAX_P]
#define	P_Old_InterLock_No3_Array(i)	pshm->P[(11428+i)%MAX_P]
#define	P_Mode_Err(i)	pshm->P[(11444+i)%MAX_P]
#define	P_Spool_Enable	pshm->P[11449]
#define	P_Cathode_1St_Flow_Chart_Bit_Flag	pshm->P[11450]
#define	P_Cathode_AT_Flow_Chart_Bit_Flag	pshm->P[11451]
#define	P_Cathode_2nd_Flow_Chart_Bit_Flag	pshm->P[11452]
#define	P_Anode_Clamp_Flow_Chart_Bit_Flag	pshm->P[11453]
#define	P_Final_Roll_Flow_Chart_Bit_Flag	pshm->P[11454]
#define	P_Stack_Table_Flow_Chart_Bit_Flag	pshm->P[11455]
#define	P_Cathode_Clamp_Flow_Chart_Bit_Flag	pshm->P[11456]
#define	P_Anode_2nd_Flow_Chart_Bit_Flag	pshm->P[11457]
#define	P_Anode_AT_Flow_Chart_Bit_Flag	pshm->P[11458]
#define	P_Anode_1St_Flow_Chart_Bit_Flag	pshm->P[11459]
#define	P_Sepa_Unwinder_Flow_Chart_Bit_Flag	pshm->P[11460]
#define	P_Slave5_Target_Z_For_Cutting	pshm->P[11461]
#define	P_Slave31_Motion_Command	pshm->P[11462]
#define	P_Pause_Err_Process	pshm->P[11463]
#define	P_Pause_Err_Timer	pshm->P[11464]
#define	P_Pause_Err_Count	pshm->P[11465]
#define	P_Pause_Err_Use	pshm->P[11466]
#define	P_Pause_Err_Use2	pshm->P[11467]
#define	P_Anode_Pause_Signal_Err	pshm->P[11468]
#define	P_Cathode_Pause_Signal_Err	pshm->P[11469]
#define	P_Anode_Pause_Err	pshm->P[11470]
#define	P_Anode_Pause_Err_Count	pshm->P[11471]
#define	P_Phasing_Err(i)	pshm->P[(11472+i)%MAX_P]
#define	P_Phasing_Err2(i)	pshm->P[(11477+i)%MAX_P]
#define	P_Execute_Wait_Mode_Memory_Tower	pshm->P[11482]
#define	P_Execute_Vac_MNTR	pshm->P[11483]
#define	P_Old_Cathode_Cur_Mode	pshm->P[11484]
#define	P_Cathode_Run_Mode_Type(i)	pshm->P[(11485+i)%MAX_P]
#define	P_Cathode_Run_Mode_Trigger(i)	pshm->P[(11505+i)%MAX_P]
#define	P_Old_Anode_Cur_Mode	pshm->P[11525]
#define	P_Anode_Run_Mode_Type(i)	pshm->P[(11526+i)%MAX_P]
#define	P_Anode_Run_Mode_Trigger(i)	pshm->P[(11546+i)%MAX_P]
#define	P_Anode_1TR_T_Belt_To_Align	pshm->P[11566]
#define	P_Anode_1TR_T_Align_To_Belt	pshm->P[11567]
#define	P_Anode_1TR_T_Ready_Pos	pshm->P[11568]
#define	P_Anode_1TR_T_Ready_To_Align	pshm->P[11569]
#define	P_Anode_1TR_T_Ready_To_Belt	pshm->P[11570]
#define	P_Anode_Picker_Turn	pshm->P[11571]
#define	P_Anode_2TR_T_Align_To_Stack	pshm->P[11572]
#define	P_Anode_2TR_T_Stack_To_Align	pshm->P[11573]
#define	P_Anode_Clamp_Off	pshm->P[11574]
#define	P_Anode_Clamp_On	pshm->P[11575]
#define	P_Anode_Clamp_Down	pshm->P[11576]
#define	P_FR_Anode_Motion	pshm->P[11577]
#define	P_FR_Cathode_Motion	pshm->P[11578]
#define	P_Stack_Table_Down	pshm->P[11579]
#define	P_Cathode_Clamp_On	pshm->P[11580]
#define	P_Cathode_Clamp_Off	pshm->P[11581]
#define	P_Cathode_Clamp_Down	pshm->P[11582]
#define	P_Cathode_2TR_T_Align_To_Stack	pshm->P[11583]
#define	P_Cathode_2TR_T_Stack_To_Align	pshm->P[11584]
#define	P_Cathode_Picker_Turn	pshm->P[11585]
#define	P_Cathode_1TR_T_Belt_To_Align	pshm->P[11586]
#define	P_Cathode_1TR_T_Align_To_Belt	pshm->P[11587]
#define	P_Cathode_1TR_T_Ready_Pos	pshm->P[11588]
#define	P_Cathode_1TR_T_Ready_To_Align	pshm->P[11589]
#define	P_Cathode_1TR_T_Ready_To_Belt	pshm->P[11590]
#define	P_Anode_1TR_Z_Belt_To_Align	pshm->P[11591]
#define	P_Anode_1TR_Z_Align_To_Belt	pshm->P[11592]
#define	P_Anode_1TR_Z_Align_Down	pshm->P[11593]
#define	P_Anode_1TR_Z_Align_UP	pshm->P[11594]
#define	P_Anode_1TR_Z_Belt_Down	pshm->P[11595]
#define	P_Anode_1TR_Z_Belt_UP	pshm->P[11596]
#define	P_Anode_1TR_Z_Ready	pshm->P[11597]
#define	P_Anode_1TR_Z_Align_Blow	pshm->P[11598]
#define	P_Anode_1TR_Z_Belt_Vac	pshm->P[11599]
#define	P_Cathode_1TR_Z_Belt_To_Align	pshm->P[11600]
#define	P_Cathode_1TR_Z_Align_To_Belt	pshm->P[11601]
#define	P_Cathode_1TR_Z_Align_Down	pshm->P[11602]
#define	P_Cathode_1TR_Z_Align_UP	pshm->P[11603]
#define	P_Cathode_1TR_Z_Belt_Down	pshm->P[11604]
#define	P_Cathode_1TR_Z_Belt_UP	pshm->P[11605]
#define	P_Cathode_1TR_Z_Ready	pshm->P[11606]
#define	P_Cathode_1TR_Z_Align_Blow	pshm->P[11607]
#define	P_Cathode_1TR_Z_Belt_Vac	pshm->P[11608]
#define	P_Anode_2TR_Align_To_Stack	pshm->P[11609]
#define	P_Anode_2TR_Stack_To_Align	pshm->P[11610]
#define	P_Anode_2TR_Stack_Down	pshm->P[11611]
#define	P_Anode_2TR_Stack_UP	pshm->P[11612]
#define	P_Anode_2TR_Align_Down	pshm->P[11613]
#define	P_Anode_2TR_Align_UP	pshm->P[11614]
#define	P_Anode_2TR_Align_Vac	pshm->P[11615]
#define	P_Anode_2TR_Stack_Blow	pshm->P[11616]
#define	P_Anode_2TR_Stack_Sepa_Blow	pshm->P[11617]
#define	P_FR_Last_Run_Motion	pshm->P[11618]
#define	P_Servo_Dancer_Ready_Pos	pshm->P[11619]
#define	P_Servo_Dancer_Ready_Offset	pshm->P[11620]
#define	P_Servo_Dancer_Test	pshm->P[11621]
#define	P_Align_Start_IO_Judgment	pshm->P[11622]
#define	P_Driving_Clamp2	pshm->P[11623]
#define	P_Driving_Clamp	pshm->P[11624]
#define	P_MSA_Timer	pshm->P[11625]
#define	P_SM_Cathode_Stack_MSA	pshm->P[11626]
#define	P_SM_Anode_Stack_MSA	pshm->P[11627]
#define	P_SM_Cathode_Align_MSA	pshm->P[11628]
#define	P_SM_Anode_Align_MSA	pshm->P[11629]
#define	P_MSA_Interlock	pshm->P[11630]
#define	P_Anode_MSA_Final_Roll_Pos_Check	pshm->P[11631]
#define	P_Anode_MSA_2nd_PNP_Pos_Check	pshm->P[11632]
#define	P_Anode_MSA_1nd_PNP_Pos_Check	pshm->P[11633]
#define	P_MSA_Err_Save_CA_Stack_MSA	pshm->P[11634]
#define	P_MSA_Err_Save_AN_Stack_MSA	pshm->P[11635]
#define	P_MSA_Err_Save_CA_Align_MSA	pshm->P[11636]
#define	P_MSA_Err_Save_AN_Align_MSA	pshm->P[11637]
#define	P_MSA_BTN_Err	pshm->P[11638]
#define	P_Anode_Algin_MSA_RTN	pshm->P[11639]
#define	P_Anode_Algin_MSA_RTN2	pshm->P[11640]
#define	P_Cathode_Algin_MSA_RTN	pshm->P[11641]
#define	P_Cathode_Stack_MSA_RTN	pshm->P[11642]
#define	P_Anode_Stack_MSA_RTN	pshm->P[11643]
#define	P_Anode_Align_MSA_Count	pshm->P[11644]
#define	P_Cathode_Align_MSA_Count	pshm->P[11645]
#define	P_Anode_Stack_MSA_Count	pshm->P[11646]
#define	P_Cathode_Stack_MSA_Count	pshm->P[11647]
#define	P_Cathode_Align_Stop_Blocked	pshm->P[11648]
#define	P_Anode_Align_Stop_Blocked	pshm->P[11649]
#define	P_Cathode_Stack_Stop_Blocked	pshm->P[11650]
#define	P_Anode_Stack_Stop_Blocked	pshm->P[11651]
#define	P_Anode_Align_MSA_Execute_Timer	pshm->P[11652]
#define	P_Cathode_Align_MSA_Execute_Timer	pshm->P[11653]
#define	P_Anode_Stack_MSA_Execute_Timer	pshm->P[11654]
#define	P_Cathode_Stack_MSA_Execute_Timer	pshm->P[11655]
#define	P_Anode_Align_Interlock_Blocked	pshm->P[11656]
#define	P_Cathode_Align_Interlock_Blocked	pshm->P[11657]
#define	P_Anode_Stack_Interlock_Blocked	pshm->P[11658]
#define	P_Cathode_Stack_Interlock_Blocked	pshm->P[11659]
#define	P_Anode_1TR_T_Align_POS	pshm->P[11660]
#define	P_Anode_1TR_T_Belt_POS	pshm->P[11661]
#define	P_Anode_1TR_T_Ready_POS	pshm->P[11662]
#define	P_Anode_2TR_T_Align_POS	pshm->P[11663]
#define	P_Anode_2TR_T_Stack_POS	pshm->P[11664]
#define	P_Cathode_2TR_T_Align_POS	pshm->P[11665]
#define	P_Cathode_2TR_T_Stack_POS	pshm->P[11666]
#define	P_Cathode_1TR_T_Align_POS	pshm->P[11667]
#define	P_Cathode_1TR_T_Belt_POS	pshm->P[11668]
#define	P_Cathode_1TR_T_Ready_POS	pshm->P[11669]
#define	P_Seq_Abort	pshm->P[11670]
#define	P_Blocked_Abort	pshm->P[11671]
#define	P_Abort_Flag	pshm->P[11672]
#define	P_Opposite_Lane_1ST_TR_Safe_Pos	pshm->P[11673]
#define	P_Opposite_Lane_P_PMAC_Status	pshm->P[11674]
#define	P_Opposite_Lane_OFF_Not_Start	pshm->P[11675]
#define	P_Pause_Alarm_Blocked	pshm->P[11676]
#define	P_Old_Alarm_Arr	pshm->P[11677]
#define	P_Cycle_Stop_Delay_Time	pshm->P[11678]
#define	P_Cycle_Stop_Offset	pshm->P[11679]
#define	P_Opposite_Lane_Abort_Alram_Flag	pshm->P[11680]
#define	P_Cathode_Clmap_Y1_Ready_Pos	pshm->P[11681]
#define	P_Cathode_Clmap_Y1_Clamp_Pos	pshm->P[11682]
#define	P_Anode_Clmap_Y1_Ready_Pos	pshm->P[11683]
#define	P_Anode_Clmap_Y1_Clamp_Pos	pshm->P[11684]
#define	P_Cathode_Clmap_Y2_Ready_Pos	pshm->P[11685]
#define	P_Cathode_Clmap_Y2_Clamp_Pos	pshm->P[11686]
#define	P_Anode_Clmap_Y2_Ready_Pos	pshm->P[11687]
#define	P_Anode_Clmap_Y2_Clamp_Pos	pshm->P[11688]
#define	P_Cathode_Clamp_Z2_Ready_Pos	pshm->P[11689]
#define	P_Cathode_Clamp_Z2_Clamp_Pos	pshm->P[11690]
#define	P_Anode_Clamp_Z2_Ready_Pos	pshm->P[11691]
#define	P_Anode_Clamp_Z2_Clamp_Pos	pshm->P[11692]
#define	P_Cathode_Clamp_Z1_Ready_Pos	pshm->P[11693]
#define	P_Cathode_Clamp_Z1_Clamp_Pos	pshm->P[11694]
#define	P_Anode_Clamp_Z1_Ready_Pos	pshm->P[11695]
#define	P_Anode_Clamp_Z1_Clamp_Pos	pshm->P[11696]
#define	P_Cathode_Clamp_Z2_Cell_Down	pshm->P[11697]
#define	P_Anode_Clamp_Z2_Cell_Down	pshm->P[11698]
#define	P_Cathode_Clamp_Z1_Cell_Down	pshm->P[11699]
#define	P_Anode_Clamp_Z1_Cell_Down	pshm->P[11700]
#define	P_Single_Run_Pass	pshm->P[11701]
#define	P_Cathode_2nd_PNP_Sepa_Blow	pshm->P[11702]
#define	P_Cathode_2nd_PNP_Align_Blow	pshm->P[11703]
#define	P_Cathode_2nd_PNP_Stack_Blow	pshm->P[11704]
#define	P_Cathode_2nd_PNP_Align_Vac	pshm->P[11705]
#define	P_Cathode_2nd_PNP_Align_Up_Motion	pshm->P[11706]
#define	P_Cathode_2nd_PNP_Align_Down_Motion	pshm->P[11707]
#define	P_Cathode_2nd_PNP_Stack_Up_Motion	pshm->P[11708]
#define	P_Cathode_2nd_PNP_Stack_Down_Motion	pshm->P[11709]
#define	P_Cathode_2nd_PNP_Stack_To_Align_Motion	pshm->P[11710]
#define	P_Cathode_2nd_PNP_Align_To_Stack_Motion	pshm->P[11711]
#define	P_Door_Open_Stop_Count	pshm->P[11712]
#define	P_Buf_Stack_NG_Flag	pshm->P[11713]
#define	P_Stop_1st_PNP_Move	pshm->P[11714]
#define	P_Seq_Abort_Timer	pshm->P[11715]
#define	P_Sync_Test	pshm->P[11716]
#define	P_Dry_Pause_Flag	pshm->P[11717]
#define	P_Dry_Run_Pasue_Timer	pshm->P[11718]
#define	P_Resume_Stop_Blocked	pshm->P[11719]
#define	P_Discharge_Wait	pshm->P[11720]
#define	P_Command_Run_Flag	pshm->P[11721]
#define	P_Stop_Cmd_Origin	pshm->P[11722]
#define	P_Stop_Origin_Save(i)	pshm->P[(11723+i)%MAX_P]
#define	P_Old_M_Y_Sepa_Cutter_SSR_On	pshm->P[11738]
#define	P_Sepa_Cutter_SSR_Off_Time	pshm->P[11739]
#define	P_Sepa_Cutter_SSR_Off	pshm->P[11740]
#define	P_Sepa_Cutter_SSR_Off_Timer	pshm->P[11741]
#define	P_Starting_Pause_IO_Flag	pshm->P[11742]
#define	P_PLC03_Seq_Pause_Start_Flag	pshm->P[11743]
#define	P_PLC03_Seq_Pause_Start_State_Machine	pshm->P[11744]
#define	P_PLC03_Seq_Pause_Start_Status	pshm->P[11745]
#define	P_ARC_NP_Push_BTN	pshm->P[11746]
#define	P_ARC_UI_Push_BTN	pshm->P[11747]
#define	P_M_Manual_ARC_BTN	pshm->P[11748]
#define	P_Two_Btn_Active_Flag	pshm->P[11749]
#define	P_Two_Btn_Interlock_Time	pshm->P[11750]
#define	P_NP_Unwinder_Active_Hold	pshm->P[11751]
#define	P_MAX_KGF	pshm->P[11752]
#define	P_KGF_TO_DAC_RATIO	pshm->P[11753]
#define	P_Dac_Out_Value	pshm->P[11754]
#define	P_Recipe_Dancer_input_kgf	pshm->P[11755]
#define	P_Cathode_NG_PNP_Vel_Zero_Set	pshm->P[11756]
#define	P_Anode_NG_PNP_Vel_Zero_Set	pshm->P[11757]
#define	P_Anode_Run_DR	pshm->P[11758]
#define	P_Cathode_Run_DR	pshm->P[11759]
#define	P_1st_UND_Grip_Time	pshm->P[11760]
#define	P_1st_UND_Grip_Time_offset	pshm->P[11761]
#define	P_1st_UND_Grip_Time_offset2	pshm->P[11762]
#define	P_First_Sepa_Driving_Use	pshm->P[11763]
#define	P_First_Sepa_Driving_Timing	pshm->P[11764]
#define	P_Unloader_Safe_rtn	pshm->P[11765]
#define	P_Final_Start	pshm->P[11766]
#define	P_Driving_Start	pshm->P[11767]
#define	P_Starting_Pause_IO_OFF_Flag	pshm->P[11768]
#define	P_individual_Hold_return	pshm->P[11769]
#define	P_individual_Hold_return2	pshm->P[11770]
#define	P_Tension_Ready_Pass	pshm->P[11771]
#define	P_Discharge_cal_rtn	pshm->P[11772]
#define	P_Old_Tact_Current_Mode	pshm->P[11773]
#define	P_Sheet_Clear	pshm->P[11774]
#define	P_Anode_Clamp_On_Time2	pshm->P[11775]
#define	P_Anode_Clamp_On_Time	pshm->P[11776]
#define	P_Cathode_Clamp_On_Time	pshm->P[11777]
#define	P_Cathode_Clamp_On_Time2	pshm->P[11778]
#define	P_Offset	pshm->P[11779]
#define	P_Man_C	pshm->P[11780]
#define	P_NG_Box_Stop_Use	pshm->P[11781]
#define	P_SlewTime	pshm->P[11782]
#define	P_Old_SlewTime	pshm->P[11783]
#define	P_Resume_MNTR1	pshm->P[11784]
#define	P_Resume_MNTR2	pshm->P[11785]
#define	P_Resume_MNTR3	pshm->P[11786]
#define	P_Resume_MNTR4	pshm->P[11787]
#define	P_Resume_MNTR5	pshm->P[11788]
#define	P_Resume_MNTR6	pshm->P[11789]
#define	P_Resume_MNTR7	pshm->P[11790]
#define	P_Resume_MNTR8	pshm->P[11791]
#define	P_Resume_MNTR9	pshm->P[11792]
#define	P_Resume_MNTR10	pshm->P[11793]
#define	P_Resume_MNTR11	pshm->P[11794]
#define	P_Resume_MNTR12	pshm->P[11795]
#define	P_old_P_Anode_Count	pshm->P[11796]
#define	P_Sheet_Paper_BWD_Count	pshm->P[11797]
#define	P_Stop_CHK	pshm->P[11798]
#define	P_Seq_Pause	pshm->P[11799]
#define	P_Seq_Pause2	pshm->P[11800]
#define	P_MSA_TimeBase_Rtn	pshm->P[11801]
#define	P_Old_Vison_Read_EPC_Camera_Move_Request	pshm->P[11802]
#define	P_First_Sepa_Time_Out_Count	pshm->P[11803]
#define	P_Align_Retry_Cal_RTN	pshm->P[11804]
#define	P_Sheet_Err(i)	pshm->P[(11805+i)%MAX_P]
#define	P_Driving_Cal	pshm->P[11821]
#define	P_Driving_End_Pos	pshm->P[11822]
#define	P_Driving_Start_Pos	pshm->P[11823]
#define	P_Drivig_Cal_Save(i)	pshm->P[(11824+i)%MAX_P]
#define	P_Anode_Align_Blow	pshm->P[11829]
#define	P_Cathode_Align_Blow	pshm->P[11830]
#define	P_PMAC_Status_Arr_Save1(i)	pshm->P[(11831+i)%MAX_P]
#define	P_HomePos_Save1(i)	pshm->P[(11836+i)%MAX_P]
#define	P_PMAC_Status_Arr_Save2(i)	pshm->P[(11841+i)%MAX_P]
#define	P_HomePos_Save2(i)	pshm->P[(11846+i)%MAX_P]
#define	P_PMAC_Status_Arr_Save3(i)	pshm->P[(11851+i)%MAX_P]
#define	P_HomePos_Save3(i)	pshm->P[(11856+i)%MAX_P]
#define	P_PMAC_Status_Arr_Save4(i)	pshm->P[(11861+i)%MAX_P]
#define	P_HomePos_Save4(i)	pshm->P[(11866+i)%MAX_P]
#define	P_Home_Pos_Err_Cnt1	pshm->P[11871]
#define	P_Home_Pos_Err_Cnt2	pshm->P[11872]
#define	P_Home_Pos_Err_Cnt3	pshm->P[11873]
#define	P_Home_Pos_Err_Cnt4	pshm->P[11874]
#define	P_Align_Inspection_Delay	pshm->P[11875]
#define	P_HomePos_Err(i)	pshm->P[(11876+i)%MAX_P]
#define	P_Anode_Sheet_Test	pshm->P[11881]
#define	P_Cathode_Sheet_Test	pshm->P[11882]
#define	P_Anode_Sheet_Interlock_Timing	pshm->P[11883]
#define	P_Cathode_Sheet_Interlock_Timing	pshm->P[11884]
#define	P_Discharge_Err_MNTR	pshm->P[11885]
#define	P_Arc_Err_MNTR	pshm->P[11886]
#define	P_Abort_Cnt	pshm->P[11887]
#define	P_EMO_Cnt	pshm->P[11888]
#define	P_Dry_Run_Inspection	pshm->P[11889]
#define	P_Servo_ON_MNTR1	pshm->P[11890]
#define	P_Servo_ON_MNTR2	pshm->P[11891]
#define	P_Servo_ON_MNTR3	pshm->P[11892]
#define	P_Servo_ON_MNTR4	pshm->P[11893]
#define	P_Servo_ON_MNTR5	pshm->P[11894]
#define	P_Servo_ON_MNTR6	pshm->P[11895]
#define	P_Servo_ON_MNTR7	pshm->P[11896]
#define	P_Servo_ON_MNTR8	pshm->P[11897]
#define	P_Servo_ON_MNTR9	pshm->P[11898]
#define	P_Servo_ON_MNTR10	pshm->P[11899]
#define	P_Servo_ON_MNTR11	pshm->P[11900]
#define	P_Servo_ON_MNTR12	pshm->P[11901]
#define	P_Servo_ON_MNTR13	pshm->P[11902]
#define	P_Servo_ON_MNTR14	pshm->P[11903]
#define	P_Servo_ON_MNTR15	pshm->P[11904]
#define	P_Servo_ON_MNTR16	pshm->P[11905]
#define	P_Servo_ON_MNTR17	pshm->P[11906]
#define	P_Servo_ON_MNTR18	pshm->P[11907]
#define	P_Servo_ON_MNTR19	pshm->P[11908]
#define	P_Servo_ON_MNTR20	pshm->P[11909]
#define	P_Servo_ON_MNTR21	pshm->P[11910]
#define	P_Servo_ON_MNTR22	pshm->P[11911]
#define	P_Servo_ON_MNTR23	pshm->P[11912]
#define	P_Servo_ON_MNTR24	pshm->P[11913]
#define	P_Servo_ON_MNTR25	pshm->P[11914]
#define	P_Servo_ON_MNTR26	pshm->P[11915]
#define	P_Servo_ON_MNTR27	pshm->P[11916]
#define	P_Servo_ON_MNTR28	pshm->P[11917]
#define	P_Servo_ON_MNTR29	pshm->P[11918]
#define	P_Servo_ON_MNTR30	pshm->P[11919]
#define	P_X_IO_WinMess_Connect_BTN	pshm->P[11920]
#define	P_Ecat_ReConnetion_State_Machine	pshm->P[11921]
#define	P_Ecat_Reconnection_Timer	pshm->P[11922]
#define	P_Y_Ecat_Reconnecting	pshm->P[11923]
#define	P_Y_Ecat_ReConnection_Fail	pshm->P[11924]
#define	P_Y_Ecat_ReConnection_Complete	pshm->P[11925]
#define	P_X_Ecat_Reconnection_BTN	pshm->P[11926]
#define	P_X_PLC_Setup_Mode_Check	pshm->P[11927]
#define	P_Interlock_On_Off_Flag	pshm->P[11928]
#define	P_X_Old_MC_Reconnect_BTN_Signal	pshm->P[11929]
#define	P_BTN_1st_ULD_Data_Clear	pshm->P[11930]
#define	P_Old_BTN_1st_ULD_Data_Clear	pshm->P[11931]
#define	P_Old_M_Y_1st_Unloader_UnGrip_Sol	pshm->P[11932]
#define	P_Sepa_Cutter_Heat_Meter	pshm->P[11933]
#define	P_Sepa_Cutter_Heating_Timer	pshm->P[11934]
#define	P_Middle_Skip_Off_Flag	pshm->P[11935]
#define	P_Stop_MNTR1	pshm->P[11936]
#define	P_Stop_MNTR2	pshm->P[11937]
#define	P_Sheet_Pos_Offset	pshm->P[11938]
#define	P_Stopping_Wait_Time	pshm->P[11939]
#define	P_Stopping_Test_Timer	pshm->P[11940]
#define	P_Cutter_FWB_Heater_Current(i)	pshm->P[(11941+i)%MAX_P]
#define	P_1st_ULD_OK_Lamp	pshm->P[11951]
#define	P_1st_ULD_NG_Lamp	pshm->P[11952]
#define	P_1st_ULD_Sample_QC_Lamp	pshm->P[11953]
#define	P_Proceed_Execute_Flag	pshm->P[11954]
#define	P_Continuous_Call_Stack_NG_Flag	pshm->P[11955]
#define	P_Continuous_Call_Stack_OK_Flag	pshm->P[11956]
#define	P_Cathode_Picker_Home_Pos	pshm->P[11957]
#define	P_Anode_Picker_Home_Pos	pshm->P[11958]
#define	P_FR_Sheet_Paper_Home_Chk	pshm->P[11959]
#define	P_Align_TimeOut1	pshm->P[11960]
#define	P_Align_TimeOut2	pshm->P[11961]
#define	P_Align_TimeOut3	pshm->P[11962]
#define	P_Align_TimeOut4	pshm->P[11963]
#define	P_Align_TimeOut5	pshm->P[11964]
#define	P_Align_TimeOut6	pshm->P[11965]
#define	P_Anode_Align_OK	pshm->P[11966]
#define	P_Cathode_Align_OK	pshm->P[11967]
#define	P_Anode_Align_NG	pshm->P[11968]
#define	P_Cathode_Align_NG	pshm->P[11969]
#define	P_Anode_Align_TimeOut	pshm->P[11970]
#define	P_Cathode_Align_TimeOut	pshm->P[11971]
#define	P_Anode_Surf_OK	pshm->P[11972]
#define	P_Cathode_Surf_OK	pshm->P[11973]
#define	P_Anode_Surf_NG	pshm->P[11974]
#define	P_Cathode_Surf_NG	pshm->P[11975]
#define	P_Anode_Surf_TimeOut	pshm->P[11976]
#define	P_Cathode_Surf_TimeOut	pshm->P[11977]
#define	P_Surf_TimeOut1	pshm->P[11978]
#define	P_Surf_TimeOut2	pshm->P[11979]
#define	P_Surf_TimeOut3	pshm->P[11980]
#define	P_Surf_TimeOut4	pshm->P[11981]
#define	P_Surf_TimeOut5	pshm->P[11982]
#define	P_Surf_TimeOut6	pshm->P[11983]
#define	P_Anode_Stack_TimeOut	pshm->P[11984]
#define	P_Cathode_Stack_TimeOut	pshm->P[11985]
#define	P_Anode_Stack_OK	pshm->P[11986]
#define	P_Cathode_Stack_OK	pshm->P[11987]
#define	P_Anode_Stack_NG	pshm->P[11988]
#define	P_Cathode_Stack_NG	pshm->P[11989]
#define	P_Stack_TimeOut1	pshm->P[11990]
#define	P_Stack_TimeOut2	pshm->P[11991]
#define	P_Stack_TimeOut3	pshm->P[11992]
#define	P_Align_Move_Err	pshm->P[11993]
#define	P_Ecat_Test	pshm->P[11994]
#define	P_Scan_Time(i)	pshm->P[(11995+i)%MAX_P]
#define	P_Scan_Aver	pshm->P[11997]
#define	P_Scan_MAX	pshm->P[11998]
#define	P_Cathode_1TR_Picker_T_Belt_POS	pshm->P[11999]
#define	P_Cathode_1TR_Picker_T_Align_POS	pshm->P[12000]
#define	P_Anode_1TR_Picker_T_Belt_POS	pshm->P[12001]
#define	P_Anode_1TR_Picker_T_Align_POS	pshm->P[12002]
#define	P_1TR_Picker_T_Align_POS	pshm->P[12003]
#define	P_AVRG_Lower_Sepa_Thickness_mm	pshm->P[12004]
#define	P_AVRG_Upper_Sepa_Thickness_mm	pshm->P[12005]
#define	P_PLC06_Upper_Curr_Unwinder_Thickness_mm	pshm->P[12006]
#define	P_PLC06_Lower_Curr_Unwinder_Thickness_mm	pshm->P[12007]
#define	P_Upper_Curr_Spool_Radius	pshm->P[12008]
#define	P_Lower_Curr_Spool_Radius	pshm->P[12009]
#define	P_PLC06_Curr_Upper_Distance_mm	pshm->P[12010]
#define	P_PLC06_Curr_Lower_Distance_mm	pshm->P[12011]
#define	P_Upper_Sepa_Min_Distance_mm	pshm->P[12012]
#define	P_Lower_Sepa_Min_Distance_mm	pshm->P[12013]
#define	P_PLC06_Sepa_Change_Set	pshm->P[12014]
#define	P_Upper_Sepa_To_Sensor_Min_Dis	pshm->P[12015]
#define	P_Upper_Sepa_To_Sensor_Max_Dis	pshm->P[12016]
#define	P_Upper_Sensor_To_Unwinder_Core_Dis	pshm->P[12017]
#define	P_Upper_Sensor_Min_AD	pshm->P[12018]
#define	P_Upper_Sensor_Max_AD	pshm->P[12019]
#define	P_Lower_Sepa_To_Sensor_Min_Dis	pshm->P[12020]
#define	P_Lower_Sepa_To_Sensor_Max_Dis	pshm->P[12021]
#define	P_Lower_Sensor_To_Unwinder_Core_Dis	pshm->P[12022]
#define	P_Lower_Sensor_Min_AD	pshm->P[12023]
#define	P_Lower_Sensor_Max_AD	pshm->P[12024]
#define	M_AI_Upper_Sepa_Sensing	pshm->P[372]
#define	M_AI_Lower_Sepa_Sensing	pshm->P[373]
#define	P_Status_NP_BTN_Lower_Unwinder	pshm->P[12025]
#define	P_Status_NP_BTN_Upper_Unwinder	pshm->P[12026]
#define	P_Driving_CamTable_Scale_Change_Flag	pshm->P[12027]
#define	P_FR_Driving_Diameter	pshm->P[12028]
#define	P_FR_Driving_Floating_Point	pshm->P[12029]
#define	P_FR_Driving_Reward	pshm->P[12030]
#define	P_Unwinder_Master_Following_Use_Flag	pshm->P[12031]
#define	P_Unwinder_Master_Following_On	pshm->P[12032]
#define	P_Old_Master_Following_Start	pshm->P[12033]
#define	P_Unwinder_Master_Following_Scale	pshm->P[12034]
#define	P_Unwinder_Jog_Use_Flag	pshm->P[12035]
#define	P_Old_Jog_Start	pshm->P[12036]
#define	P_Unwinder_Jog_Total_Time	pshm->P[12037]
#define	P_Unwinder_Ta	pshm->P[12038]
#define	P_Unwinder_Ts	pshm->P[12039]
#define	P_Unwinder_Tm	pshm->P[12040]
#define	P_Unwinder_1mm_Deg	pshm->P[12041]
#define	P_Unwinder_Jog_Pos	pshm->P[12042]
#define	P_Unwinder_Jog_Cnt	pshm->P[12043]
#define	P_PLC06_Frist_Flag	pshm->P[12044]
#define	P_Sepa_AI	pshm->P[12045]
#define	P_PLC06_Reel_Upper_Change_Flag	pshm->P[12046]
#define	P_PLC06_Reel_Lower_Change_Flag	pshm->P[12047]
#define	P_Spool_Ready_Enable_Flag	pshm->P[12048]
#define	P_Spool_Lack_Flag	pshm->P[12049]
#define	P_Sepa_DR_Start_Flag	pshm->P[12050]
#define	P_cdTime_Tact_Sec	pshm->P[12051]
#define	P_Master_Tact_Sec	pshm->P[12052]
#define	P_Prev_Err_Pos	pshm->P[12053]
#define	P_Cur_Arc_Rad	pshm->P[12054]
#define	P_Cur_Arc_Deg	pshm->P[12055]
#define	P_Spool_Velocity	pshm->P[12056]
#define	P_Lin_Prop_Vel	pshm->P[12057]
#define	P_Err_Pos	pshm->P[12058]
#define	P_Lin_Deriv_Vel	pshm->P[12059]
#define	P_Lin_Dacer_Kd	pshm->P[12060]
#define	P_Lin_Dacer_Kp	pshm->P[12061]
#define	P_Running_CDTimer	pshm->P[12062]
#define	P_Unwinder_Jog_Ta	pshm->P[12063]
#define	P_Unwinder_Jog_Ts	pshm->P[12064]
#define	P_Unwinder_Vel_Test_Time	pshm->P[12065]
#define	P_Set_Interval_Time	pshm->P[12066]
#define	P_PLC06_Upper_Sepa_AI_Timer	pshm->P[12067]
#define	P_PLC06_Upper_Sepa_AI_Data	pshm->P[12068]
#define	P_PLC06_Upper_Sepa_AI_Cnt	pshm->P[12069]
#define	P_PLC06_Upper_AVRG_Sensor_Data	pshm->P[12070]
#define	P_PLC06_Lower_Sepa_AI_Timer	pshm->P[12071]
#define	P_PLC06_Lower_Sepa_AI_Data	pshm->P[12072]
#define	P_PLC06_Lower_Sepa_AI_Cnt	pshm->P[12073]
#define	P_PLC06_Lower_AVRG_Sensor_Data	pshm->P[12074]
#define	P_PLC06_Sepa_Upper_Thickness_Timer	pshm->P[12075]
#define	P_PLC06_Sepa_Upper_Thickness_Data	pshm->P[12076]
#define	P_PLC06_Sepa_Upper_Thickness_Cnt	pshm->P[12077]
#define	P_PLC06_Sepa_Lower_Thickness_Timer	pshm->P[12078]
#define	P_PLC06_Sepa_Lower_Thickness_Data	pshm->P[12079]
#define	P_PLC06_Sepa_Lower_Thickness_Cnt	pshm->P[12080]
#define	P_Sepa_Thickness_Chk_Timer	pshm->P[12081]
#define	P_Spool_Length	pshm->P[12082]
#define	P_Cascade_Sf_Driving_Value	pshm->P[12083]
#define	P_Cascade_Sf_None_Driving_Value	pshm->P[12084]
#define	P_Sepa_Min_Value_Cal_Cmd	pshm->P[12085]
#define	P_Total_Sepa_Need_Length	pshm->P[12086]
#define	P_Alpa	pshm->P[12087]
#define	P_Sepa_Num_of_Turns	pshm->P[12088]
#define	P_Sepa_Turn_Num	pshm->P[12089]
#define	P_Accumulate_Value	pshm->P[12090]
#define	P_Sharft_to_Sepa_Core_mm	pshm->P[12091]
#define	P_Sepa_Cal_Circum	pshm->P[12092]
#define	P_Sepa_Min_Need_Thickness	pshm->P[12093]
#define	P_Sepa_Min_Thickness_Cmd	pshm->P[12094]
#define	P_Sepa_Accumulate_Cmd	pshm->P[12095]
#define	P_Sepa_Required_Amount	pshm->P[12096]
#define	P_Sepa_Current_Thickness	pshm->P[12097]
#define	P_Sepa_Initial_Tickness	pshm->P[12098]
#define	P_Sepa_Required_Update_Timer	pshm->P[12099]
#define	P_TEST_EPC_Interlock_Auto	pshm->P[12100]
#define	P_TEST_EPC_Interlock_Manual	pshm->P[12101]
#define	P_Discharge_Total_Tact	pshm->P[12102]
#define	P_Read_Sector_TactTime(i)	pshm->P[(12103+i)%MAX_P]
#define	P_Write_Sector_TactTime(i)	pshm->P[(12109+i)%MAX_P]
#define	P_PLC15_Sub_Function_Dryrun_Active_Flag	pshm->P[12115]
#define	P_Sepa_Rotation_Sequence_Run_Trigger_Cnt	pshm->P[12116]
#define	P_Sepa_Mode_Sepa_Recipe_Count	pshm->P[12117]
#define	P_Discharged_After_End_Trigger	pshm->P[12118]
#define	P_Unloader_1st_Grip_Delay	pshm->P[12119]
#define	P_Separate_Cutter_Heating_Limit_Value	pshm->P[12120]
#define	P_Separate_Cutting_Current	pshm->P[12121]
#define	P_Separate_Cutter_Change_Cycle	pshm->P[12122]
#define	P_X_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12123]
#define	P_X_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12124]
#define	P_X_Cathode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12125]
#define	P_X_Anode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12126]
#define	P_X_Stack_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12127]
#define	P_Interlock_Messege_Confirmed	pshm->P[12128]
#define	P_X_MC_Communication_HeartBit	pshm->P[12129]
#define	P_SV_Cathode_Count	pshm->P[12130]
#define	P_SV_Anode_Count	pshm->P[12131]
#define	P_SV_AO_Reference_Value_Chanel(i)	pshm->P[(12132+i)%MAX_P]
#define	P_SV_Cathode_Reference_Thickness	pshm->P[12135]
#define	P_SV_Anode_Reference_Thickness	pshm->P[12136]
#define	P_SV_Stack_Table_Damper_Cathode	pshm->P[12137]
#define	P_SV_Stack_Table_Damper_Anode	pshm->P[12138]
#define	P_SV_Sepa_Reference_Thickness	pshm->P[12139]
#define	P_SV_Jelly_Roll_Width	pshm->P[12140]
#define	P_Cathode_Align_Continuous_NG_Recipe	pshm->P[12141]
#define	P_Anode_Align_Continuous_NG_Recipe	pshm->P[12142]
#define	P_Stack_Vision_Continuous_NG_Recipe	pshm->P[12143]
#define	P_PLC_Recipe_EPC_Sepa_Count	pshm->P[12144]
#define	P_PLC_Recipe_Revise_Sepa	pshm->P[12145]
#define	P_X_PLC_to_PMAC_Correction_Value	pshm->P[12146]
#define	P_Anode_Align_Continuous_NG_Check_range	pshm->P[12147]
#define	P_Cathode_Align_Continuous_NG_Check_range	pshm->P[12148]
#define	P_Stack_Align_Continuous_NG_Check_range	pshm->P[12149]
#define	P_Cathode_Surface_Continuous_NG_Recipe	pshm->P[12150]
#define	P_Anode_Surface_Continuous_NG_Recipe	pshm->P[12151]
#define	P_Cathode_Surface_Continuous_NG_Check_range	pshm->P[12152]
#define	P_Anode_Surface_Continuous_NG_Check_range	pshm->P[12153]
#define	P_Servo_Dancer_Alarm_Maximum_Angle_Value	pshm->P[12154]
#define	P_Servo_Dancer_Alarm_Minimum_Angle_Value	pshm->P[12155]
#define	P_Current_Selected_Spool_Rev_Counts_Init_Read	pshm->P[12156]
#define	P_Spool_ARC_Distance_mm	pshm->P[12157]
#define	P_ARC_Upper_Request_Sepa_Thickness_mm	pshm->P[12158]
#define	P_ARC_Lower_Request_Sepa_Thickness_mm	pshm->P[12159]
#define	P_Selected_Spool_Arc_Set_Rev_Counts_Value	pshm->P[12160]
#define	P_Set_Cnt_FR_Moving_Sepa_ARC	pshm->P[12161]
#define	P_Current_Selected_Spool_Rev_Counts	pshm->P[12162]
#define	P_AI_Cathode_Clamp_Damper	pshm->P[12163]
#define	P_AI_Anode_Clamp_Damper	pshm->P[12164]
#define	P_MSA_Run_Repeat_Num(i)	pshm->P[(12165+i)%MAX_P]
#define	P_Current_MSA_Run_Num(i)	pshm->P[(12170+i)%MAX_P]
#define	P_Select_Sheet_Value	pshm->P[12175]
#define	P_BTN_Config_Setup_Mode_Select	pshm->P[12176]
#define	P_Sepa_Thickness_Max_Value	pshm->P[12177]
#define	P_AI_Cathode_Clamp_Damper_Zero_Mpa_Analog_Value	pshm->P[12178]
#define	P_AI_Anode_Clamp_Damper_Zero_Mpa_Analog_Value	pshm->P[12179]
#define	P_Accumulated_Movement_MM_Unit_Cathode_1ST_pnp	pshm->P[12180]
#define	P_Accumulated_Movement_MM_Unit_Anode_1ST_pnp	pshm->P[12181]
#define	P_Accumulated_Movement_MM_Unit_Cathode_2nd_pnp	pshm->P[12182]
#define	P_Accumulated_Movement_MM_Unit_Anode_2nd_pnp	pshm->P[12183]
#define	P_AI_Anode_Clamp_Damper_Mpa	pshm->P[12184]
#define	P_AI_Cathode_Clamp_Damper_Mpa	pshm->P[12185]
#define	P_Current_Whole_Stack_Jelly_Roll_Thinckness_mm	pshm->P[12186]
#define	P_Upper_Sepa_Current_Thickness_um	pshm->P[12187]
#define	P_Lower_Sepa_Current_Thickness_um	pshm->P[12188]
#define	P_Spool_Rotate_Distance	pshm->P[12189]
#define	Spool_Diameter	pshm->P[12190]
#define	P_Current_FR_Moving_Cnt_To_PlC	pshm->P[12191]
#define	P_MES_APC_Select_Btn	pshm->P[12192]
#define	P_AO_Anode_Clamp_Damper	pshm->P[12193]
#define	P_AO_Cathode_Clamp_Damper	pshm->P[12194]
#define	P_Sepa_Length	pshm->P[12195]
#define	P_Minus_Limit_Detect_Popup_Flag	pshm->P[12196]
#define	P_Plus_Limit_Detect_Popup_Flag	pshm->P[12197]
#define	P_Fatal_Fe_Limit_Detect_Popup_Flag	pshm->P[12198]
#define	P_Emergency_Alarm_Popup_Flag	pshm->P[12199]
#define	P_SepaArcing_Popup_Flag	pshm->P[12200]
#define	P_Y_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger	pshm->P[12201]
#define	P_Y_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger	pshm->P[12202]
#define	P_Y_Cathode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger	pshm->P[12203]
#define	P_Y_Anode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger	pshm->P[12204]
#define	P_Y_Stack_Align_Calibration_twisted_Cycle_Stop_Request_Trigger	pshm->P[12205]
#define	P_Current_Selected_Sheet_Value	pshm->P[12206]
#define	P_Status_Config_Mode_Select	pshm->P[12207]
#define	P_Sepa_Thickness_Jig_Value	pshm->P[12208]
#define	P_PV_Stack_Table_Damper_Cathode	pshm->P[12209]
#define	P_PV_Stack_Table_Damper_Anode	pshm->P[12210]
#define	P_Discharge_Standby_Pos_Tack_Time	pshm->P[12211]
#define	P_Discharge_FR_MainZ_Pos_Tack_Time	pshm->P[12212]
#define	P_Discharge_Unloader_Go_Pos_Tack_Time	pshm->P[12213]
#define	P_Discharge_SubZ_Down_Pos_Tack_Time	pshm->P[12214]
#define	P_Discharge_Unloader_Cutting_Pos_Tack_Time	pshm->P[12215]
#define	P_Discharge_FR_Clamp_ON_Complete_Tack_Time	pshm->P[12216]
#define	P_Discharge_Cutting_Complete_Tack_Time	pshm->P[12217]
#define	P_Discharge_Motion_PG_Active_Starting_Tack_Time	pshm->P[12218]
#define	P_Discharge_Motion_PG_Active_Complete_Tack_Time	pshm->P[12219]
#define	P_Discharge_Sepa_First_Complete_Tack_Time	pshm->P[12220]
#define	P_Discharge_Complete_Tack_Time	pshm->P[12221]
#define	P_Discharge_Total_Tack_Time	pshm->P[12222]
#define	P_Anode_Clamp_TackTime_Array0	pshm->P[12223]
#define	P_Anode_Clamp_TackTime_Array1	pshm->P[12224]
#define	P_Anode_Clamp_TackTime_Array2	pshm->P[12225]
#define	P_Anode_Clamp_TackTime_Array3	pshm->P[12226]
#define	P_Anode_Clamp_TackTime_Array4	pshm->P[12227]
#define	P_Anode_Clamp_TackTime_Array5	pshm->P[12228]
#define	P_Anode_Clamp_TackTime_Array6	pshm->P[12229]
#define	P_Anode_Clamp_TackTime_Array7	pshm->P[12230]
#define	P_Anode_Clamp_TackTime_Array8	pshm->P[12231]
#define	P_Anode_Clamp_TackTime_Array9	pshm->P[12232]
#define	P_Anode_Clamp_TackTime_Array10	pshm->P[12233]
#define	P_Stacking_TackTime_Array0	pshm->P[12234]
#define	P_Stacking_TackTime_Array1	pshm->P[12235]
#define	P_Stacking_TackTime_Array2	pshm->P[12236]
#define	P_Stacking_TackTime_Array3	pshm->P[12237]
#define	P_Stacking_TackTime_Array4	pshm->P[12238]
#define	P_Stacking_TackTime_Array5	pshm->P[12239]
#define	P_Stacking_TackTime_Array6	pshm->P[12240]
#define	P_Stacking_TackTime_Array7	pshm->P[12241]
#define	P_Stacking_TackTime_Array8	pshm->P[12242]
#define	P_Stacking_TackTime_Array9	pshm->P[12243]
#define	P_Stacking_TackTime_Array10	pshm->P[12244]
#define	P_Cathode_Clamp_TackTime_Array0	pshm->P[12245]
#define	P_Cathode_Clamp_TackTime_Array1	pshm->P[12246]
#define	P_Cathode_Clamp_TackTime_Array2	pshm->P[12247]
#define	P_Cathode_Clamp_TackTime_Array3	pshm->P[12248]
#define	P_Cathode_Clamp_TackTime_Array4	pshm->P[12249]
#define	P_Cathode_Clamp_TackTime_Array5	pshm->P[12250]
#define	P_Cathode_Clamp_TackTime_Array6	pshm->P[12251]
#define	P_Cathode_Clamp_TackTime_Array7	pshm->P[12252]
#define	P_Cathode_Clamp_TackTime_Array8	pshm->P[12253]
#define	P_Cathode_Clamp_TackTime_Array9	pshm->P[12254]
#define	P_Cathode_Clamp_TackTime_Array10	pshm->P[12255]
#define	P_JellyRoll_Out_TackTime_Array0	pshm->P[12256]
#define	P_JellyRoll_Out_TackTime_Array1	pshm->P[12257]
#define	P_JellyRoll_Out_TackTime_Array2	pshm->P[12258]
#define	P_JellyRoll_Out_TackTime_Array3	pshm->P[12259]
#define	P_JellyRoll_Out_TackTime_Array4	pshm->P[12260]
#define	P_JellyRoll_Out_TackTime_Array5	pshm->P[12261]
#define	P_JellyRoll_Out_TackTime_Array6	pshm->P[12262]
#define	P_JellyRoll_Out_TackTime_Array7	pshm->P[12263]
#define	P_JellyRoll_Out_TackTime_Array8	pshm->P[12264]
#define	P_JellyRoll_Out_TackTime_Array9	pshm->P[12265]
#define	P_JellyRoll_Out_TackTime_Array10	pshm->P[12266]
#define	P_Anode_1th_TackTime_Array0	pshm->P[12267]
#define	P_Anode_1th_TackTime_Array1	pshm->P[12268]
#define	P_Anode_1th_TackTime_Array2	pshm->P[12269]
#define	P_Anode_1th_TackTime_Array3	pshm->P[12270]
#define	P_Anode_1th_TackTime_Array4	pshm->P[12271]
#define	P_Anode_1th_TackTime_Array5	pshm->P[12272]
#define	P_Anode_1th_TackTime_Array6	pshm->P[12273]
#define	P_Anode_1th_TackTime_Array7	pshm->P[12274]
#define	P_Anode_1th_TackTime_Array8	pshm->P[12275]
#define	P_Anode_1th_TackTime_Array9	pshm->P[12276]
#define	P_Anode_1th_TackTime_Array10	pshm->P[12277]
#define	P_Cathode_1th_TackTime_Array0	pshm->P[12278]
#define	P_Cathode_1th_TackTime_Array1	pshm->P[12279]
#define	P_Cathode_1th_TackTime_Array2	pshm->P[12280]
#define	P_Cathode_1th_TackTime_Array3	pshm->P[12281]
#define	P_Cathode_1th_TackTime_Array4	pshm->P[12282]
#define	P_Cathode_1th_TackTime_Array5	pshm->P[12283]
#define	P_Cathode_1th_TackTime_Array6	pshm->P[12284]
#define	P_Cathode_1th_TackTime_Array7	pshm->P[12285]
#define	P_Cathode_1th_TackTime_Array8	pshm->P[12286]
#define	P_Cathode_1th_TackTime_Array9	pshm->P[12287]
#define	P_Cathode_1th_TackTime_Array10	pshm->P[12288]
#define	P_Anode_2th_TackTime_Array0	pshm->P[12289]
#define	P_Anode_2th_TackTime_Array1	pshm->P[12290]
#define	P_Anode_2th_TackTime_Array2	pshm->P[12291]
#define	P_Anode_2th_TackTime_Array3	pshm->P[12292]
#define	P_Anode_2th_TackTime_Array4	pshm->P[12293]
#define	P_Anode_2th_TackTime_Array5	pshm->P[12294]
#define	P_Anode_2th_TackTime_Array6	pshm->P[12295]
#define	P_Anode_2th_TackTime_Array7	pshm->P[12296]
#define	P_Anode_2th_TackTime_Array8	pshm->P[12297]
#define	P_Anode_2th_TackTime_Array9	pshm->P[12298]
#define	P_Anode_2th_TackTime_Array10	pshm->P[12299]
#define	P_Cathode_2th_TackTime_Array0	pshm->P[12300]
#define	P_Cathode_2th_TackTime_Array1	pshm->P[12301]
#define	P_Cathode_2th_TackTime_Array2	pshm->P[12302]
#define	P_Cathode_2th_TackTime_Array3	pshm->P[12303]
#define	P_Cathode_2th_TackTime_Array4	pshm->P[12304]
#define	P_Cathode_2th_TackTime_Array5	pshm->P[12305]
#define	P_Cathode_2th_TackTime_Array6	pshm->P[12306]
#define	P_Cathode_2th_TackTime_Array7	pshm->P[12307]
#define	P_Cathode_2th_TackTime_Array8	pshm->P[12308]
#define	P_Cathode_2th_TackTime_Array9	pshm->P[12309]
#define	P_Cathode_2th_TackTime_Array10	pshm->P[12310]
#define	P_Anode_Align_Table_TackTime_Array0	pshm->P[12311]
#define	P_Anode_Align_Table_TackTime_Array1	pshm->P[12312]
#define	P_Anode_Align_Table_TackTime_Array2	pshm->P[12313]
#define	P_Anode_Align_Table_TackTime_Array3	pshm->P[12314]
#define	P_Anode_Align_Table_TackTime_Array4	pshm->P[12315]
#define	P_Anode_Align_Table_TackTime_Array5	pshm->P[12316]
#define	P_Anode_Align_Table_TackTime_Array6	pshm->P[12317]
#define	P_Anode_Align_Table_TackTime_Array7	pshm->P[12318]
#define	P_Anode_Align_Table_TackTime_Array8	pshm->P[12319]
#define	P_Anode_Align_Table_TackTime_Array9	pshm->P[12320]
#define	P_Anode_Align_Table_TackTime_Array10	pshm->P[12321]
#define	P_Cathode_Align_Table_TackTime_Array0	pshm->P[12322]
#define	P_Cathode_Align_Table_TackTime_Array1	pshm->P[12323]
#define	P_Cathode_Align_Table_TackTime_Array2	pshm->P[12324]
#define	P_Cathode_Align_Table_TackTime_Array3	pshm->P[12325]
#define	P_Cathode_Align_Table_TackTime_Array4	pshm->P[12326]
#define	P_Cathode_Align_Table_TackTime_Array5	pshm->P[12327]
#define	P_Cathode_Align_Table_TackTime_Array6	pshm->P[12328]
#define	P_Cathode_Align_Table_TackTime_Array7	pshm->P[12329]
#define	P_Cathode_Align_Table_TackTime_Array8	pshm->P[12330]
#define	P_Cathode_Align_Table_TackTime_Array9	pshm->P[12331]
#define	P_Cathode_Align_Table_TackTime_Array10	pshm->P[12332]
#define	P_Anode_NG_PNP_TackTime_Array0	pshm->P[12333]
#define	P_Anode_NG_PNP_TackTime_Array1	pshm->P[12334]
#define	P_Anode_NG_PNP_TackTime_Array2	pshm->P[12335]
#define	P_Anode_NG_PNP_TackTime_Array3	pshm->P[12336]
#define	P_Anode_NG_PNP_TackTime_Array4	pshm->P[12337]
#define	P_Anode_NG_PNP_TackTime_Array5	pshm->P[12338]
#define	P_Anode_NG_PNP_TackTime_Array6	pshm->P[12339]
#define	P_Anode_NG_PNP_TackTime_Array7	pshm->P[12340]
#define	P_Anode_NG_PNP_TackTime_Array8	pshm->P[12341]
#define	P_Anode_NG_PNP_TackTime_Array9	pshm->P[12342]
#define	P_Anode_NG_PNP_TackTime_Array10	pshm->P[12343]
#define	P_Cathode_NG_PNP_TackTime_Array0	pshm->P[12344]
#define	P_Cathode_NG_PNP_TackTime_Array1	pshm->P[12345]
#define	P_Cathode_NG_PNP_TackTime_Array2	pshm->P[12346]
#define	P_Cathode_NG_PNP_TackTime_Array3	pshm->P[12347]
#define	P_Cathode_NG_PNP_TackTime_Array4	pshm->P[12348]
#define	P_Cathode_NG_PNP_TackTime_Array5	pshm->P[12349]
#define	P_Cathode_NG_PNP_TackTime_Array6	pshm->P[12350]
#define	P_Cathode_NG_PNP_TackTime_Array7	pshm->P[12351]
#define	P_Cathode_NG_PNP_TackTime_Array8	pshm->P[12352]
#define	P_Cathode_NG_PNP_TackTime_Array9	pshm->P[12353]
#define	P_Cathode_NG_PNP_TackTime_Array10	pshm->P[12354]
#define	P_Sepa_Unwinder_TackTime_Array0	pshm->P[12355]
#define	P_Sepa_Unwinder_TackTime_Array1	pshm->P[12356]
#define	P_Sepa_Unwinder_TackTime_Array2	pshm->P[12357]
#define	P_Sepa_Unwinder_TackTime_Array3	pshm->P[12358]
#define	P_Sepa_Unwinder_TackTime_Array4	pshm->P[12359]
#define	P_Sepa_Unwinder_TackTime_Array5	pshm->P[12360]
#define	P_Sepa_Unwinder_TackTime_Array6	pshm->P[12361]
#define	P_Sepa_Unwinder_TackTime_Array7	pshm->P[12362]
#define	P_Sepa_Unwinder_TackTime_Array8	pshm->P[12363]
#define	P_Sepa_Unwinder_TackTime_Array9	pshm->P[12364]
#define	P_Sepa_Unwinder_TackTime_Array10	pshm->P[12365]
#define	P_Sepa_Unwinder_TackTime_Array11	pshm->P[12366]
#define	P_1st_Unloader_TackTime_Array0	pshm->P[12367]
#define	P_1st_Unloader_TackTime_Array1	pshm->P[12368]
#define	P_1st_Unloader_TackTime_Array2	pshm->P[12369]
#define	P_1st_Unloader_TackTime_Array3	pshm->P[12370]
#define	P_1st_Unloader_TackTime_Array4	pshm->P[12371]
#define	P_1st_Unloader_TackTime_Array5	pshm->P[12372]
#define	P_1st_Unloader_TackTime_Array6	pshm->P[12373]
#define	P_1st_Unloader_TackTime_Array7	pshm->P[12374]
#define	P_1st_Unloader_TackTime_Array8	pshm->P[12375]
#define	P_1st_Unloader_TackTime_Array9	pshm->P[12376]
#define	P_1st_Unloader_TackTime_Array10	pshm->P[12377]
#define	P_Cathode_1st_Vacuum_TackTime_Array1	pshm->P[12378]
#define	P_Cathode_1st_Vacuum_TackTime_Array2	pshm->P[12379]
#define	P_Cathode_1st_Vacuum_TackTime_Array3	pshm->P[12380]
#define	P_Cathode_1st_Vacuum_TackTime_Array4	pshm->P[12381]
#define	P_Cathode_1st_Vacuum_TackTime_Array5	pshm->P[12382]
#define	P_Cathode_1st_Vacuum_TackTime_Array6	pshm->P[12383]
#define	P_Cathode_1st_Vacuum_TackTime_Array7	pshm->P[12384]
#define	P_Cathode_1st_Vacuum_TackTime_Array8	pshm->P[12385]
#define	P_Cathode_1st_Vacuum_TackTime_Array9	pshm->P[12386]
#define	P_Cathode_1st_Vacuum_TackTime_Array10	pshm->P[12387]
#define	P_Cathode_Align_Vacuum_TackTime_Array1	pshm->P[12388]
#define	P_Cathode_Align_Vacuum_TackTime_Array2	pshm->P[12389]
#define	P_Cathode_Align_Vacuum_TackTime_Array3	pshm->P[12390]
#define	P_Cathode_Align_Vacuum_TackTime_Array4	pshm->P[12391]
#define	P_Cathode_Align_Vacuum_TackTime_Array5	pshm->P[12392]
#define	P_Cathode_Align_Vacuum_TackTime_Array6	pshm->P[12393]
#define	P_Cathode_Align_Vacuum_TackTime_Array7	pshm->P[12394]
#define	P_Cathode_Align_Vacuum_TackTime_Array8	pshm->P[12395]
#define	P_Cathode_Align_Vacuum_TackTime_Array9	pshm->P[12396]
#define	P_Cathode_Align_Vacuum_TackTime_Array10	pshm->P[12397]
#define	P_Cathode_2nd_Vacuum_TackTime_Array1	pshm->P[12398]
#define	P_Cathode_2nd_Vacuum_TackTime_Array2	pshm->P[12399]
#define	P_Cathode_2nd_Vacuum_TackTime_Array3	pshm->P[12400]
#define	P_Cathode_2nd_Vacuum_TackTime_Array4	pshm->P[12401]
#define	P_Cathode_2nd_Vacuum_TackTime_Array5	pshm->P[12402]
#define	P_Cathode_2nd_Vacuum_TackTime_Array6	pshm->P[12403]
#define	P_Cathode_2nd_Vacuum_TackTime_Array7	pshm->P[12404]
#define	P_Cathode_2nd_Vacuum_TackTime_Array8	pshm->P[12405]
#define	P_Cathode_2nd_Vacuum_TackTime_Array9	pshm->P[12406]
#define	P_Cathode_2nd_Vacuum_TackTime_Array10	pshm->P[12407]
#define	P_Anode_1st_Vacuum_TackTime_Array1	pshm->P[12408]
#define	P_Anode_1st_Vacuum_TackTime_Array2	pshm->P[12409]
#define	P_Anode_1st_Vacuum_TackTime_Array3	pshm->P[12410]
#define	P_Anode_1st_Vacuum_TackTime_Array4	pshm->P[12411]
#define	P_Anode_1st_Vacuum_TackTime_Array5	pshm->P[12412]
#define	P_Anode_1st_Vacuum_TackTime_Array6	pshm->P[12413]
#define	P_Anode_1st_Vacuum_TackTime_Array7	pshm->P[12414]
#define	P_Anode_1st_Vacuum_TackTime_Array8	pshm->P[12415]
#define	P_Anode_1st_Vacuum_TackTime_Array9	pshm->P[12416]
#define	P_Anode_1st_Vacuum_TackTime_Array10	pshm->P[12417]
#define	P_Anode_Align_Vacuum_TackTime_Array1	pshm->P[12418]
#define	P_Anode_Align_Vacuum_TackTime_Array2	pshm->P[12419]
#define	P_Anode_Align_Vacuum_TackTime_Array3	pshm->P[12420]
#define	P_Anode_Align_Vacuum_TackTime_Array4	pshm->P[12421]
#define	P_Anode_Align_Vacuum_TackTime_Array5	pshm->P[12422]
#define	P_Anode_Align_Vacuum_TackTime_Array6	pshm->P[12423]
#define	P_Anode_Align_Vacuum_TackTime_Array7	pshm->P[12424]
#define	P_Anode_Align_Vacuum_TackTime_Array8	pshm->P[12425]
#define	P_Anode_Align_Vacuum_TackTime_Array9	pshm->P[12426]
#define	P_Anode_Align_Vacuum_TackTime_Array10	pshm->P[12427]
#define	P_Anode_2nd_Vacuum_TackTime_Array1	pshm->P[12428]
#define	P_Anode_2nd_Vacuum_TackTime_Array2	pshm->P[12429]
#define	P_Anode_2nd_Vacuum_TackTime_Array3	pshm->P[12430]
#define	P_Anode_2nd_Vacuum_TackTime_Array4	pshm->P[12431]
#define	P_Anode_2nd_Vacuum_TackTime_Array5	pshm->P[12432]
#define	P_Anode_2nd_Vacuum_TackTime_Array6	pshm->P[12433]
#define	P_Anode_2nd_Vacuum_TackTime_Array7	pshm->P[12434]
#define	P_Anode_2nd_Vacuum_TackTime_Array8	pshm->P[12435]
#define	P_Anode_2nd_Vacuum_TackTime_Array9	pshm->P[12436]
#define	P_Anode_2nd_Vacuum_TackTime_Array10	pshm->P[12437]
#define	P_Final_Roll_TackTime_Array1	pshm->P[12438]
#define	P_Final_Roll_TackTime_Array2	pshm->P[12439]
#define	P_Final_Roll_TackTime_Array3	pshm->P[12440]
#define	P_Final_Roll_TackTime_Array4	pshm->P[12441]
#define	P_Final_Roll_TackTime_Array5	pshm->P[12442]
#define	P_Final_Roll_TackTime_Array6	pshm->P[12443]
#define	P_Final_Roll_TackTime_Array7	pshm->P[12444]
#define	P_Final_Roll_TackTime_Array8	pshm->P[12445]
#define	P_Final_Roll_TackTime_Array9	pshm->P[12446]
#define	P_Final_Roll_TackTime_Array10	pshm->P[12447]
#define	P_Sepa_ARC_TackTime_Array1	pshm->P[12448]
#define	P_Sepa_ARC_TackTime_Array2	pshm->P[12449]
#define	P_Sepa_ARC_TackTime_Array3	pshm->P[12450]
#define	P_Sepa_ARC_TackTime_Array4	pshm->P[12451]
#define	P_Sepa_ARC_TackTime_Array5	pshm->P[12452]
#define	P_Sepa_ARC_TackTime_Array6	pshm->P[12453]
#define	P_Sepa_ARC_TackTime_Array7	pshm->P[12454]
#define	P_Sepa_ARC_TackTime_Array8	pshm->P[12455]
#define	P_Sepa_ARC_TackTime_Array9	pshm->P[12456]
#define	P_Sepa_ARC_TackTime_Array10	pshm->P[12457]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array1	pshm->P[12458]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array2	pshm->P[12459]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array3	pshm->P[12460]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array4	pshm->P[12461]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array5	pshm->P[12462]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array6	pshm->P[12463]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array7	pshm->P[12464]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array8	pshm->P[12465]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array9	pshm->P[12466]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array10	pshm->P[12467]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array1	pshm->P[12468]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array2	pshm->P[12469]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array3	pshm->P[12470]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array4	pshm->P[12471]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array5	pshm->P[12472]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array6	pshm->P[12473]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array7	pshm->P[12474]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array8	pshm->P[12475]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array9	pshm->P[12476]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array10	pshm->P[12477]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array1	pshm->P[12478]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array2	pshm->P[12479]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array3	pshm->P[12480]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array4	pshm->P[12481]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array5	pshm->P[12482]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array6	pshm->P[12483]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array7	pshm->P[12484]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array8	pshm->P[12485]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array9	pshm->P[12486]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array10	pshm->P[12487]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array1	pshm->P[12488]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array2	pshm->P[12489]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array3	pshm->P[12490]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array4	pshm->P[12491]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array5	pshm->P[12492]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array6	pshm->P[12493]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array7	pshm->P[12494]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array8	pshm->P[12495]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array9	pshm->P[12496]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array10	pshm->P[12497]
#define	P_PACK_ML_Status_bit	pshm->P[12498]
#define	P_Whole_Stacking_TackTime_MES_Report_Flag	pshm->P[12499]
#define	P_JellyRoll_Out_TackTime_MES_Report_Flag	pshm->P[12500]
#define	P_PV_Cathode_Count	pshm->P[12501]
#define	P_PV_Anode_Count	pshm->P[12502]
#define	P_PV_AO_Value_Chanel(i)	pshm->P[(12503+i)%MAX_P]
#define	P_PV_Cathode_NG_TR_NG_Count	pshm->P[12507]
#define	P_PV_Anode_NG_TR_NG_Count	pshm->P[12508]
#define	P_PV_Anode_Retry_NG_Count	pshm->P[12509]
#define	P_PV_Cathode_Retry_NG_Count	pshm->P[12510]
#define	P_PV_Align_INPUT_Count	pshm->P[12511]
#define	P_Unloader_Grip_Pressure	pshm->P[12512]
#define	P_Unloader_Heatmeter	pshm->P[12513]
#define	P_Interlock_Messege(i)	pshm->P[(12514+i)%MAX_P]
#define	P_EPC_Y_StandBy	pshm->P[12564]
#define	P_SV_Read_Enable_Flag	pshm->P[12565]
#define	P_Spool_Rotate_Distance_mm	pshm->P[12566]
#define	P_Current_Homming_Status(i)	pshm->P[(12567+i)%MAX_P]
#define	P_Home_Execute_Type(i)	pshm->P[(12617+i)%MAX_P]
#define	P_Cathode_Clamp_Gantry	pshm->P[12667]
#define	P_Anode_Clamp_Gantry	pshm->P[12668]
#define	P_SV_Separator_Heting_Cutter_Change_Period	pshm->P[12669]
#define	P_Interval_Read_Time(i)	pshm->P[(12670+i)%MAX_P]
#define	P_Interval_Write_Time(i)	pshm->P[(12676+i)%MAX_P]
#define	P_Cathode_Picker_Cylinder_Count	pshm->P[12682]
#define	P_Anode_Picker_Cylinder_Count	pshm->P[12683]
#define	P_SV_Stack_Table_Cathode_Reference_Value	pshm->P[12684]
#define	P_SV_Stack_Table_Anode_Reference_Value	pshm->P[12685]
#define	P_CA_DR_Offset	pshm->P[12686]
#define	P_AN_DR_Offset	pshm->P[12687]
#define	P_First_DR_Offset	pshm->P[12688]
#define	P_Last_DR_Offset	pshm->P[12689]
#define	P_BTN_QC_Sample_Flag	pshm->P[12690]
#define	P_BTN_Loss_Sample_Flag	pshm->P[12691]
#define	P_MSA_Sample_Flag	pshm->P[12692]
#define	P_Sample_JR_Recipe_Count	pshm->P[12693]
#define	P_Ca_Clamp_Y_Move	pshm->P[12694]
#define	P_An_Clamp_Y_Move	pshm->P[12695]
#define	P_Stack_Table_JR_Exist_Flag	pshm->P[12696]
#define	P_Program_Monitoring_Lamp_Cell_Ready	pshm->P[12697]
#define	P_Program_Monitoring_Lamp_Ready_Pos	pshm->P[12698]
#define	P_Program_Monitoring_Lamp_Pause_Pos	pshm->P[12699]
#define	P_Program_Monitoring_Lamp_Motion_Run	pshm->P[12700]
#define	P_Program_Monitoring_Lamp_Cell_Remove	pshm->P[12701]
#define	P_Program_Monitoring_Lamp_Cell_Supply	pshm->P[12702]
#define	P_Program_Monitoring_Lamp_Sepa_Mode	pshm->P[12703]
#define	P_Program_Monitoring_Lamp_Semi_Run	pshm->P[12704]
#define	P_Program_Monitoring_Lamp_Stack_Mode	pshm->P[12705]
#define	P_Program_Monitoring_Lamp_Anode_Aling_NG	pshm->P[12706]
#define	P_Program_Monitoring_Lamp_Anode_Retry_NG	pshm->P[12707]
#define	P_Program_Monitoring_Lamp_Cathode_Align_NG	pshm->P[12708]
#define	P_Program_Monitoring_Lamp_Cathode_Retry_NG	pshm->P[12709]
#define	P_Program_Monitoring_Lamp_Last_Stack_Mode	pshm->P[12710]
#define	P_Program_Monitoring_Lamp_Jelly_Roll_OK	pshm->P[12711]
#define	P_Program_Monitoring_Lamp_Jelly_Roll_NG	pshm->P[12712]
#define	P_Program_Monitoring_Lamp_Jelly_Roll_Sepa	pshm->P[12713]
#define	P_Program_Monitoring_Lamp_Cell_Out_Pos	pshm->P[12714]
#define	P_Program_Monitoring_Lamp_Cell_Out_Mode	pshm->P[12715]
#define	P_Master_Motion_Program_Flag	pshm->P[12716]
#define	P_Sub_Master_Motion_Program_Flag(i)	pshm->P[(12717+i)%MAX_P]
#define	P_Slave_Motion_Program_Flag(i)	pshm->P[(12737+i)%MAX_P]
#define	P_Master_Motion_CycleStop_Flag	pshm->P[12757]
#define	P_OLD_Jog_Speed_Motor(i)	pshm->P[(12758+i)%MAX_P]
#define	P_PLC_08_Program_Ver	pshm->P[12808]
#define	P_Old_PMAC_Commands	pshm->P[12809]
#define	P_Old_PMAC_Status	pshm->P[12810]
#define	P_Old_PMAC_Current_Mode	pshm->P[12811]
#define	P_Mode_Function_State_Machine	pshm->P[12812]
#define	P_PMAC_Commands	pshm->P[12813]
#define	P_Command_Start(i)	pshm->P[(12814+i)%MAX_P]
#define	P_Command_Complete(i)	pshm->P[(12832+i)%MAX_P]
#define	P_Command_Reset(i)	pshm->P[(12850+i)%MAX_P]
#define	P_Command_Hold(i)	pshm->P[(12868+i)%MAX_P]
#define	P_Command_Unhold(i)	pshm->P[(12886+i)%MAX_P]
#define	P_Command_Suspend(i)	pshm->P[(12904+i)%MAX_P]
#define	P_Command_Unsuspend(i)	pshm->P[(12922+i)%MAX_P]
#define	P_Command_Clear(i)	pshm->P[(12940+i)%MAX_P]
#define	P_Command_Stop(i)	pshm->P[(12958+i)%MAX_P]
#define	P_Command_Abort(i)	pshm->P[(12976+i)%MAX_P]
#define	P_Command_Status_Complete(i)	pshm->P[(12994+i)%MAX_P]
#define	P_Command_Mask_Layer(i)	pshm->P[(13012+i)%MAX_P]
#define	P_Command_Process_Type(i)	pshm->P[(13030+i)%MAX_P]
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
#define	P_PMAC_Current_Mode	pshm->P[13048]
#define	P_PMAC_Status	pshm->P[13049]
#define	P_PMAC_Old_Mode	pshm->P[13050]
#define	P_Ready_Tack_Chk_Timer	pshm->P[13051]
#define	P_PLC09_Common_Command_Flag	pshm->P[13052]
#define	P_PLC09_Common_Command_Complete_Bit	pshm->P[13053]
#define	P_PLC09_Common_Execute_Flag	pshm->P[13054]
#define	P_PLC09_Common_Execute_Complete_Bit	pshm->P[13055]
#define	P_PLC09_Status	pshm->P[13056]
#define	P_PLC09_Libraries_Var	pshm->P[13057]
#define	P_Master_Motion_Program_ON_Flag	pshm->P[13058]
#define	P_Master_Motion_Program_ON_Complete_Bit	pshm->P[13059]
#define	P_Master_Motion_Program_OFF_Flag	pshm->P[13060]
#define	P_Master_Motion_Program_OFF_Complete_Bit	pshm->P[13061]
#define	P_Common_Function_Timbase_ON_Flag	pshm->P[13062]
#define	P_Common_Function_Timbase_ON_Complete_Bit	pshm->P[13063]
#define	P_Common_Function_Timbase_OFF_Flag	pshm->P[13064]
#define	P_Common_Function_Timbase_OFF_Complete_Bit	pshm->P[13065]
#define	P_Common_Function_Monitoring_Lamp_OFF_Flag	pshm->P[13066]
#define	P_Common_Function_Monitoring_Lamp_OFF_Complete_Bit	pshm->P[13067]
#define	P_Common_Function_Slave_Motion_Common_Init_Flag	pshm->P[13068]
#define	P_Common_Function_Slave_Motion_Common_Init_Complete_Bit	pshm->P[13069]
#define	P_Common_Function_OlD_Jog_Speed_Save_ON_Flag	pshm->P[13070]
#define	P_Common_Function_OlD_Jog_Speed_Save_ON_Complete_Bit	pshm->P[13071]
#define	P_Auto_Resetting_Sum_Ready_Pos_Check_Flag	pshm->P[13072]
#define	P_Auto_Resetting_Sum_Ready_Pos_Check_Complete_bit	pshm->P[13073]
#define	P_Manual_Resetting_Sum_Ready_Pos_Check_Flag	pshm->P[13074]
#define	P_Manual_Resetting_Sum_Ready_Pos_Check_Complete_bit	pshm->P[13075]
#define	P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Flag	pshm->P[13076]
#define	P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Complete_Bit	pshm->P[13077]
#define	P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Flag	pshm->P[13078]
#define	P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Complete_Bit	pshm->P[13079]
#define	P_Motion_Target_Position_Complete	pshm->P[13080]
#define	P_SM_Auto_Run_Layer_Management	pshm->P[13081]
#define	P_Buffer_Mode_Status_Sequence	pshm->P[13082]
#define	P_SM_Sub_Function_Pause	pshm->P[13083]
#define	P_PLC09_Resetting_Position_Check_State_Machine	pshm->P[13084]
#define	P_PLC09_Resetting_Position_Moving_State_Machine	pshm->P[13085]
#define	P_Sum_Ready_pos_Motor(i)	pshm->P[(13086+i)%MAX_P]
#define	P_SM_Resetting_Pause_Position	pshm->P[13128]
#define	P_20per_Vac_Error_Cycle_Stop_Flag	pshm->P[13129]
#define	P_MNTR_PLC23_ARC_Complete	pshm->P[13130]
#define	P_FUNCTION_PLC13_Sepa_Trigger_Enable	pshm->P[13131]
#define	P_PLC_Recipe_PLC2_Revise_Sepa	pshm->P[13132]
#define	P_Auto_Semi_Init_Status	pshm->P[13133]
#define	P_Auto_Semi_Init_Chk_Bit	pshm->P[13134]
#define	P_Old_PLC_HeartBit_Flag	pshm->P[13135]
#define	P_PLC09_Init_Flag	pshm->P[13136]
#define	P_Check_IDLE_CF_Flag	pshm->P[13137]
#define	P_Check_EXECUTE_CF_Flag	pshm->P[13138]
#define	P_Check_COMPLETING_CF_Flag	pshm->P[13139]
#define	P_Check_COMPLETE_CF_Flag	pshm->P[13140]
#define	P_Check_HOLDING_CF_Flag	pshm->P[13141]
#define	P_Check_HOLD_CF_Flag	pshm->P[13142]
#define	P_Check_UNHOLDING_CF_Flag	pshm->P[13143]
#define	P_Check_SUSPENDING_CF_Flag	pshm->P[13144]
#define	P_Check_SUSPENDED_CF_Flag	pshm->P[13145]
#define	P_Check_UNSUSPENDING_CF_Flag	pshm->P[13146]
#define	P_Check_STOPPED_CF_Flag	pshm->P[13147]
#define	P_Check_ABORTED_CF_Flag	pshm->P[13148]
#define	P_Check_CLEARING_CF_Flag	pshm->P[13149]
#define	P_Check_IDLE_CF	pshm->P[13150]
#define	P_Check_EXECUTE_CF	pshm->P[13151]
#define	P_Check_COMPLETING_CF	pshm->P[13152]
#define	P_Check_COMPLETE_CF	pshm->P[13153]
#define	P_Check_HOLDING_CF	pshm->P[13154]
#define	P_Check_HOLD_CF	pshm->P[13155]
#define	P_Check_UNHOLDING_CF	pshm->P[13156]
#define	P_Check_SUSPENDING_CF	pshm->P[13157]
#define	P_Check_SUSPENDED_CF	pshm->P[13158]
#define	P_Check_UNSUSPENDING_CF	pshm->P[13159]
#define	P_Check_STOPPED_CF	pshm->P[13160]
#define	P_Check_ABORTED_CF	pshm->P[13161]
#define	P_Check_CLEARING_CF	pshm->P[13162]
#define	P_Check_STOPPING_CF	pshm->P[13163]
#define	P_Check_STARTING_CF	pshm->P[13164]
#define	P_Check_RESETTING_CF	pshm->P[13165]
#define	P_Check_STARTTING_CF	pshm->P[13166]
#define	P_Queue_Clear	pshm->P[13167]
#define	P_PLC09_Alarm_Test_Flag	pshm->P[13168]
#define	P_PLC09_Test_Temp	pshm->P[13169]
#define	P_PLC01_STOP_Queue_Complete_Flag	pshm->P[13170]
#define	P_PMAC_All_Home_Cmd	pshm->P[13171]
#define	P_PMAC_All_Home_Status	pshm->P[13172]
#define	P_PMAC_Master_Following_Use_Flag	pshm->P[13173]
#define	PnP_Belt_Waring_Pos	pshm->P[13174]
#define	P_Old_X_PLC_Sync_Heart_Bit	pshm->P[13175]
#define	P_Stack_Heart_Bit_Sync_Flag	pshm->P[13176]
#define	P_Stack_Heart_Bit_Sunc_Complete_Bit	pshm->P[13177]
#define	P_Resetting_Init_Module_RTN	pshm->P[13178]
#define	P_PLC09_MNTR	pshm->P[13179]
#define	P_Unloder_PNP_Home_IL_Pos	pshm->P[13180]
#define	P_ECAT_Slave_Err_Bit	pshm->P[13181]
#define	P_MC_Power_Down_Flag	pshm->P[13182]
#define	P_Old_MC_Power_Down_Flag	pshm->P[13183]
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
#define	P_Modbus_Delay_Timer	pshm->P[13184]
#define	P_Modbus_Connect_Status	pshm->P[13185]
#define	P_Modbus_Reconnect_MNTR	pshm->P[13186]
#define	P_Ecat_Reconn_Chk_Lamp	pshm->P[13187]
#define	P_MC_Reconn_Chk_Lamp	pshm->P[13188]
#define	P_Cathode_1st_Vac_Set_Time	pshm->P[13189]
#define	P_Cathode_2nd_Vac_Set_Time	pshm->P[13190]
#define	P_Cathode_Align_Vac_Set_Time	pshm->P[13191]
#define	P_Cathode_Align_Blow_Set_Time	pshm->P[13192]
#define	P_Anode_1st_Vac_Set_Time	pshm->P[13193]
#define	P_Anode_2nd_Vac_Set_Time	pshm->P[13194]
#define	P_Sepa_Consume_Mode_Thickness_rate	pshm->P[13195]
#define	P_Sepa_Anode_Recipe_Count	pshm->P[13196]
#define	P_Sepa_Cathode_Recipe_Count	pshm->P[13197]
#define	P_Discharge_Cathode_Recipe_Count	pshm->P[13198]
#define	P_Discharge_Anode_Recipe_Count	pshm->P[13199]
#define	P_Suspend_Discharge_Cathode_Counter	pshm->P[13200]
#define	P_Suspend_Discharge_Anode_Counter	pshm->P[13201]
#define	P_Suspend_Discharge_Waiting_Flag	pshm->P[13202]
#define	P_Com_ARC_Sepa_Consume_Mode_Flag	pshm->P[13203]
#define	P_Com_EPC_Sepa_Consume_Mode_Flag	pshm->P[13204]
#define	P_Com_User_Sepa_Consume_Mode_Flag	pshm->P[13205]
#define	P_Com_Dry_Mode_Flag	pshm->P[13206]
#define	P_SM_Recipe_Value_Management	pshm->P[13207]
#define	P_Sepa_Mode_Recipe_Count	pshm->P[13208]
#define	P_Sepa_Mode_EPC_Recipe_Count	pshm->P[13209]
#define	P_ARC_End_Sepa_Recipe_Count	pshm->P[13210]
#define	P_Anode_Align_NG_Array(i)	pshm->P[(13211+i)%MAX_P]
#define	P_Cathode_Align_NG_Array(i)	pshm->P[(13231+i)%MAX_P]
#define	P_Anode_Surface_NG_Array(i)	pshm->P[(13251+i)%MAX_P]
#define	P_Cathode_Surface_NG_Array(i)	pshm->P[(13271+i)%MAX_P]
#define	P_Stack_NG_Array(i)	pshm->P[(13291+i)%MAX_P]
#define	P_Cathode_Align_Continuous_NG_Stop_Select	pshm->P[13311]
#define	P_Anode_Align_Continuous_NG_Stop_Select	pshm->P[13312]
#define	P_Stack_Vision_NG_Enable	pshm->P[13313]
#define	P_Cathode_Surface_Continuous_NG_Stop_Select	pshm->P[13314]
#define	P_Anode_Surface_Continuous_NG_Stop_Select	pshm->P[13315]
#define	P_Anode_Trigger_IO_Test_Vision_PLC_Loop	pshm->P[13316]
#define	P_Anode_Trigger_IO_Test_Motion_Loop	pshm->P[13317]
#define	P_Cathode_Trigger_IO_Test_Vision_PLC_Loop	pshm->P[13318]
#define	P_Cathode_Trigger_IO_Test_Motion_Loop	pshm->P[13319]
#define	P_Stack_Trigger_IO_Test_Vision_PLC_Loop	pshm->P[13320]
#define	P_Stack_Trigger_IO_Test_Motion_Loop	pshm->P[13321]
#define	P_PLC12_Continuous_Buffer_Reset_Flag	pshm->P[13322]
#define	P_Continuous_Call_Align_OK_Flag(i)	pshm->P[(13323+i)%MAX_P]
#define	P_Continuous_Call_Align_NG_Flag(i)	pshm->P[(13325+i)%MAX_P]
#define	P_Continuous_Call_Align_TimeOut_Flag(i)	pshm->P[(13327+i)%MAX_P]
#define	P_Continuous_Call_Surface_OK_Flag(i)	pshm->P[(13329+i)%MAX_P]
#define	P_Continuous_Call_Surface_NG_Flag(i)	pshm->P[(13331+i)%MAX_P]
#define	P_Continuous_Call_Surface_TimeOut_Flag(i)	pshm->P[(13333+i)%MAX_P]
#define	P_Continuous_Call_Stack_Flag(i)	pshm->P[(13335+i)%MAX_P]
#define	P_PLC12_Anode_Sheet_Pick_Up_Flag	pshm->P[13338]
#define	P_PLC12_Cathode_Sheet_Pick_Up_Flag	pshm->P[13339]
#define	P_Hold_Anode_Sheet_Pick_Up_Flag	pshm->P[13340]
#define	P_Hold_Cathode_Sheet_Pick_Up_Flag	pshm->P[13341]
#define	P_Sheet_Interface_Complete_Pos	pshm->P[13342]
#define	P_Anode_Sheet_Interface_Complete_Pos	pshm->P[13343]
#define	P_Cathode_Sheet_Interface_Complete_Pos	pshm->P[13344]
#define	P_Anode_2nd_TR_Maint_Check	pshm->P[13345]
#define	P_Cathode_2nd_TR_Maint_Check	pshm->P[13346]
#define	P_PLC12_Observser_MNTR(i)	pshm->P[(13347+i)%MAX_P]
#define	P_PLC12_Vacuum_MNTR(i)	pshm->P[(13352+i)%MAX_P]
#define	P_Vacuum_Check(i)	pshm->P[(13360+i)%MAX_P]
#define	P_PLC12_Blow_MNTR(i)	pshm->P[(13368+i)%MAX_P]
#define	P_Blow_Check(i)	pshm->P[(13376+i)%MAX_P]
#define	P_PLC12_Vacuum_1st_Cathode_MNTR_Timer	pshm->P[13384]
#define	P_PLC12_Vacuum_2nd_Cathode_MNTR_Timer	pshm->P[13385]
#define	P_PLC12_Vacuum_NG_Cathode_MNTR_Timer	pshm->P[13386]
#define	P_PLC12_Vacuum_Align_Cathode_MNTR_Timer	pshm->P[13387]
#define	P_PLC12_Vacuum_1st_Anode_MNTR_Timer	pshm->P[13388]
#define	P_PLC12_Vacuum_2nd_Anode_MNTR_Timer	pshm->P[13389]
#define	P_PLC12_Vacuum_NG_Anode_MNTR_Timer	pshm->P[13390]
#define	P_PLC12_Vacuum_Align_Anode_MNTR_Timer	pshm->P[13391]
#define	P_PLC12_Vacuum_1st_Cathode_Set_Time	pshm->P[13392]
#define	P_PLC12_Vacuum_2nd_Cathode_Set_Time	pshm->P[13393]
#define	P_PLC12_Vacuum_NG_Cathode_Set_Time	pshm->P[13394]
#define	P_PLC12_Vacuum_Align_Cathode_Set_Time	pshm->P[13395]
#define	P_PLC12_Vacuum_1st_Anode_Set_Time	pshm->P[13396]
#define	P_PLC12_Vacuum_2nd_Anode_Set_Time	pshm->P[13397]
#define	P_PLC12_Vacuum_NG_Anode_Set_Time	pshm->P[13398]
#define	P_PLC12_Vacuum_Align_Anode_Set_Time	pshm->P[13399]
#define	P_PLC12_Vacuum_1st_Cathode_Take_Time(i)	pshm->P[(13400+i)%MAX_P]
#define	P_PLC12_Vacuum_2nd_Cathode_Take_Time(i)	pshm->P[(13405+i)%MAX_P]
#define	P_PLC12_Vacuum_NG_Cathode_Take_Time(i)	pshm->P[(13410+i)%MAX_P]
#define	P_PLC12_Vacuum_Align_Cathode_Take_Time(i)	pshm->P[(13415+i)%MAX_P]
#define	P_PLC12_Vacuum_1st_Anode_Take_Time(i)	pshm->P[(13420+i)%MAX_P]
#define	P_PLC12_Vacuum_2nd_Anode_Take_Time(i)	pshm->P[(13425+i)%MAX_P]
#define	P_PLC12_Vacuum_NG_Anode_Take_Time(i)	pshm->P[(13430+i)%MAX_P]
#define	P_PLC12_Vacuum_Align_Anode_Take_Time(i)	pshm->P[(13435+i)%MAX_P]
#define	P_PLC12_Blow_1st_Cathode_MNTR_Timer	pshm->P[13440]
#define	P_PLC12_Blow_2nd_Cathode_MNTR_Timer	pshm->P[13441]
#define	P_PLC12_Blow_NG_Cathode_MNTR_Timer	pshm->P[13442]
#define	P_PLC12_Blow_Align_Cathode_MNTR_Timer	pshm->P[13443]
#define	P_PLC12_Blow_1st_Anode_MNTR_Timer	pshm->P[13444]
#define	P_PLC12_Blow_2nd_Anode_MNTR_Timer	pshm->P[13445]
#define	P_PLC12_Blow_NG_Anode_MNTR_Timer	pshm->P[13446]
#define	P_PLC12_Blow_Align_Anode_MNTR_Timer	pshm->P[13447]
#define	P_PLC12_Blow_1st_Cathode_Set_Time	pshm->P[13448]
#define	P_PLC12_Blow_2nd_Cathode_Set_Time	pshm->P[13449]
#define	P_PLC12_Blow_NG_Cathode_Set_Time	pshm->P[13450]
#define	P_PLC12_Blow_Align_Cathode_Set_Time	pshm->P[13451]
#define	P_PLC12_Blow_1st_Anode_Set_Time	pshm->P[13452]
#define	P_PLC12_Blow_2nd_Anode_Set_Time	pshm->P[13453]
#define	P_PLC12_Blow_NG_Anode_Set_Time	pshm->P[13454]
#define	P_PLC12_Blow_Align_Anode_Set_Time	pshm->P[13455]
#define	P_PLC12_Blow_1st_Cathode_Take_Time(i)	pshm->P[(13456+i)%MAX_P]
#define	P_PLC12_Blow_2nd_Cathode_Take_Time(i)	pshm->P[(13461+i)%MAX_P]
#define	P_PLC12_Blow_NG_Cathode_Take_Time(i)	pshm->P[(13466+i)%MAX_P]
#define	P_PLC12_Blow_Align_Cathode_Take_Time(i)	pshm->P[(13471+i)%MAX_P]
#define	P_PLC12_Blow_1st_Anode_Take_Time(i)	pshm->P[(13476+i)%MAX_P]
#define	P_PLC12_Blow_2nd_Anode_Take_Time(i)	pshm->P[(13481+i)%MAX_P]
#define	P_PLC12_Blow_NG_Anode_Take_Time(i)	pshm->P[(13486+i)%MAX_P]
#define	P_PLC12_Blow_Align_Anode_Take_Time(i)	pshm->P[(13491+i)%MAX_P]
#define	P_Vacuum_Reentry_Bit	pshm->P[13496]
#define	P_Blow_Reentry_Bit	pshm->P[13497]
#define	P_Status_arry(i)	pshm->P[(13498+i)%MAX_P]
#define	P_Queue_arry(i)	pshm->P[(13518+i)%MAX_P]
#define	P_Step_arry(i)	pshm->P[(13538+i)%MAX_P]
#define	P_Index_arry(i)	pshm->P[(13558+i)%MAX_P]
#define	P_top	pshm->P[13578]
#define	P_Queue_stack_top	pshm->P[13579]
#define	P_Step_stack_top	pshm->P[13580]
#define	P_Index_stack_top	pshm->P[13581]
#define	P_Status_stack_top	pshm->P[13582]
#define	NN_Step	pshm->P[13583]
#define	NN_Index	pshm->P[13584]
#define	P_PLC_Observser_MNTR(i)	pshm->P[(13585+i)%MAX_P]
#define	P_PLC12_Frist	pshm->P[13590]
#define	P_SM_Auto_Run_Status_Management	pshm->P[13591]
#define	P_SM_Status_Main_Memory_Management	pshm->P[13592]
#define	P_SM_Cell_Memory_Management	pshm->P[13593]
#define	P_Test_Vacuum_Timer(i)	pshm->P[(13594+i)%MAX_P]
#define	P_Test_Blow_Timer(i)	pshm->P[(13602+i)%MAX_P]
#define	P_Vac_Test_Set_Time(i)	pshm->P[(13610+i)%MAX_P]
#define	P_Blow_Test_Set_Time(i)	pshm->P[(13618+i)%MAX_P]
#define	P_PLC12_Vacuum_Unit_Data	pshm->P[13626]
#define	P_PLC12_Blow_Unit_Data	pshm->P[13627]
#define	P_Stack_Algorithme_Cmd_Event_Status	pshm->P[13628]
#define	P_PLC12_vacuum_Event_Status	pshm->P[13629]
#define	P_PLC12_Blow_Event_status	pshm->P[13630]
#define	P_PLC12_vacuum_DIO_Observer_Status	pshm->P[13631]
#define	P_PLC12_Blow_DIO_Observer_Status	pshm->P[13632]
#define	P_Resetting_Vacuum_MNTR_State_Machine	pshm->P[13633]
#define	P_Heart_Bit_Time	pshm->P[13634]
#define	P_Dancer_Angle_Alarm_Timer_Flag	pshm->P[13635]
#define	P_Dancer_Angle_Alarm_Check_Timer	pshm->P[13636]
#define	P_BTN_LED_LAMP	pshm->P[13637]
#define	P_Old_BTN_LED_LAMP	pshm->P[13638]
#define	P_PLC_TO_PMAC_Work_Confirm_Operation_Cnt	pshm->P[13639]
#define	P_VISION_TO_PMAC_Work_Confirm_Operation_Ack_Cnt	pshm->P[13640]
#define	P_Ca_AT_Retry_Cal_Move_Complete	pshm->P[13641]
#define	P_An_AT_Retry_Cal_Move_Complete	pshm->P[13642]
#define	P_Ca_AT_Retry_Cal_Cnt	pshm->P[13643]
#define	P_An_AT_Retry_Cal_Cnt	pshm->P[13644]
#define	P_Ca_AT_Retry_Cal_Complete	pshm->P[13645]
#define	P_An_AT_Retry_Cal_Complete	pshm->P[13646]
#define	P_An_AT_Retry_Cal_Pass	pshm->P[13647]
#define	P_Ca_AT_Retry_Cal_Pass	pshm->P[13648]
#define	P_Ca_Picker_T_Turn_Cnt_Flag	pshm->P[13649]
#define	P_Ca_Picker_T_Turn_Cnt	pshm->P[13650]
#define	P_Ca_Picker_T_Home_Type	pshm->P[13651]
#define	P_An_Picker_T_Turn_Cnt_Flag	pshm->P[13652]
#define	P_An_Picker_T_Turn_Cnt	pshm->P[13653]
#define	P_An_Picker_T_Home_Type	pshm->P[13654]
#define	P_Flag_Vac_Status_Initialize	pshm->P[13655]
#define	P_SM_Vac_Initialize	pshm->P[13656]
#define	P_Flag_Anode_1st_Vac_OFF	pshm->P[13657]
#define	P_Flag_Anode_AT_Vac_OFF	pshm->P[13658]
#define	P_Flag_Anode_2nd_Vac_OFF	pshm->P[13659]
#define	P_Flag_Anode_NG_Vac_OFF	pshm->P[13660]
#define	P_Flag_Cathode_1st_Vac_OFF	pshm->P[13661]
#define	P_Flag_Cathode_AT_Vac_OFF	pshm->P[13662]
#define	P_Flag_Cathode_2nd_Vac_OFF	pshm->P[13663]
#define	P_Flag_Cathode_NG_Vac_OFF	pshm->P[13664]
#define	P_Flag_Anode_1st_Vac_Initial_Alarm	pshm->P[13665]
#define	P_Flag_Anode_AT_Vac_Initial_Alarm	pshm->P[13666]
#define	P_Flag_Anode_2nd_Vac_Initial_Alarm	pshm->P[13667]
#define	P_Flag_Anode_NG_Vac_Initial_Alarm	pshm->P[13668]
#define	P_Flag_Cathode_1st_Vac_Initial_Alarm	pshm->P[13669]
#define	P_Flag_Cathode_AT_Vac_Initial_Alarm	pshm->P[13670]
#define	P_Flag_Cathode_2nd_Vac_Initial_Alarm	pshm->P[13671]
#define	P_Flag_Cathode_NG_Vac_Initial_Alarm	pshm->P[13672]
#define	P_Middle_Discharge_Ignore_Total_Count	pshm->P[13673]
#define	P_Middle_Discharge_Ignore_Stack_Count	pshm->P[13674]
#define	P_Middle_Discharge_Ignore_ON_Signal	pshm->P[13675]
#define	P_Middle_Discharge_Ignore_OFF_Signal	pshm->P[13676]
#define	P_Middle_Discharge_Ignore_Cell_Count	pshm->P[13677]
#define	P_ARC_Middle_Discharge_Ignore_Vision_Check	pshm->P[13678]
#define	P_ARC_Middle_Discharge_Ignore_ON_Flag	pshm->P[13679]
#define	P_Middle_Discharge_Ignore_User_Sepa_Mode_Check	pshm->P[13680]
#define	P_Zero_Angle(i)	pshm->P[(13681+i)%MAX_P]
#define	P_Zero_Length(i)	pshm->P[(13706+i)%MAX_P]
#define	P_Homeoffset_Change_Flag(i)	pshm->P[(13731+i)%MAX_P]
#define	P_Cal_Distance(i)	pshm->P[(13756+i)%MAX_P]
#define	P_Cal_Denominator(i)	pshm->P[(13761+i)%MAX_P]
#define	P_Cal_Numerator(i)	pshm->P[(13766+i)%MAX_P]
#define	P_Cal_Dif_Deg(i)	pshm->P[(13771+i)%MAX_P]
#define	P_Vac_Door_Open_Clear(i)	pshm->P[(13776+i)%MAX_P]
#define	P_Flag_Sepa_Stack_Mode_CHK	pshm->P[13789]
#define	P_Read_Timer_S(i)	pshm->P[(13790+i)%MAX_P]
#define	P_Write_Timer_S(i)	pshm->P[(13799+i)%MAX_P]
#define	P_Interval_Read_S(i)	pshm->P[(13808+i)%MAX_P]
#define	P_Interval_Write_S(i)	pshm->P[(13817+i)%MAX_P]
#define	P_UI_Jog_Vel_M(i)	pshm->P[(13826+i)%MAX_P]
#define	P_Initialize_Read_Excom_Variables_Flag	pshm->P[13876]
#define	P_Old_X_Read_Count_S(i)	pshm->P[(13877+i)%MAX_P]
#define	P_Cathode_Clamp_MC_Cylinder_Count	pshm->P[13886]
#define	P_Cathode_Clamp_OP_Cylinder_Count	pshm->P[13887]
#define	P_Anode_Clamp_MC_Cylinder_Count	pshm->P[13888]
#define	P_Anode_Clamp_OP_Cylinder_Count	pshm->P[13889]
#define	P_Cathode_1ST_TR_Cylinder_Count	pshm->P[8003]
#define	P_Anode_1ST_TR_Cylinder_Count	pshm->P[8004]
#define	P_BTN_Cathode_Clamp_inside_Machine_Cylinder_Count_Clear	pshm->P[13890]
#define	P_BTN_Cathode_Clamp_Middle_Cylinder_Count_Clear	pshm->P[13891]
#define	P_BTN_Cathode_Clamp_outside_Machine_Cylinder_Count_Clear	pshm->P[13892]
#define	P_BTN_Anode_Clamp_inside_Machine_Cylinder_Count_Clear	pshm->P[13893]
#define	P_BTN_Anode_Clamp_Middle_Cylinder_Count_Clear	pshm->P[13894]
#define	P_BTN_Anode_Clamp_outside_Machine_Cylinder_Count_Clear	pshm->P[13895]
#define	P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear	pshm->P[13896]
#define	P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear_Old	pshm->P[13897]
#define	P_BTN_Anode_1ST_TR_Cylinder_Count_Clear	pshm->P[13898]
#define	P_BTN_Anode_1ST_TR_Cylinder_Count_Clear_Old	pshm->P[13899]
#define	P_X_BTN_Manual_1(i)	pshm->P[(13900+i)%MAX_P]
#define	P_X_BTN_Manual_2(i)	pshm->P[(14020+i)%MAX_P]
#define	P_X_BTN_Manual_3(i)	pshm->P[(14140+i)%MAX_P]
#define	P_Home_InterLock_M(i)	pshm->P[(14260+i)%MAX_P]
#define	P_Status_BTN_Manual_1(i)	pshm->P[(14310+i)%MAX_P]
#define	P_Status_BTN_Manual_2(i)	pshm->P[(14430+i)%MAX_P]
#define	P_Status_BTN_Manual_Interlock_1(i)	pshm->P[(14550+i)%MAX_P]
#define	P_Status_BTN_Manual_Interlock_2(i)	pshm->P[(14670+i)%MAX_P]
#define	P_Status_BTN_Manual_Interlock_3(i)	pshm->P[(14790+i)%MAX_P]
#define	P_Mode_Run_Enable_Flag(i)	pshm->P[(14910+i)%MAX_P]
#define	P_RECIPE_PLC27_Manual_Interval	pshm->P[14915]
#define	P_RECIPE_PLC27_Auto_Interval	pshm->P[14916]
#define	P_MNTR_PLC4_Vision_Result(i)	pshm->P[(14917+i)%MAX_P]
#define	P_PNP_Vac_Mode_Run_Enable_Flag(i)	pshm->P[(15118+i)%MAX_P]
#define	P_Recipe_Speed_Value	pshm->P[15123]
#define	P_Slave6_Target_X_For_Cell_Out	pshm->P[15124]
#define	P_HCK_Step_MNTR(i)	pshm->P[(15125+i)%MAX_P]
#define	P_Axis_Home_Pos(i)	pshm->P[(15175+i)%MAX_P]
#define	P_Axis_Ready_Pos(i)	pshm->P[(15225+i)%MAX_P]
#define	P_PMAC_Homing_CHK(i)	pshm->P[(15275+i)%MAX_P]
#define	P_Poistion_error	pshm->P[15325]
#define	P_Home_Command(i)	pshm->P[(15326+i)%MAX_P]
#define	P_Recipe_Count_Num	pshm->P[15376]
#define	L_Motor_Status_Update_Interval	pshm->P[15377]
#define	L_Motor_Recipe_Update_Interval	pshm->P[15378]
#define	P_UI_Servo_On_Off	pshm->P[15379]
#define	P_Old_BTN_Servo_On_Off_M(i)	pshm->P[(15380+i)%MAX_P]
#define	P_Peak_Load_Ratio_M(i)	pshm->P[(15413+i)%MAX_P]
#define	P_Chk_Current_Jog_Sel(i)	pshm->P[(15446+i)%MAX_P]
#define	P_Jog_Sel_Count	pshm->P[15479]
#define	P_Recipe_POS_Interock_Num_Bit(i)	pshm->P[(15480+i)%MAX_P]
#define	P_Recipe_VEL(i)	pshm->P[(15513+i)%MAX_P]
#define	P_Recipe_POS(i)	pshm->P[(15524+i)%MAX_P]
#define	P_BTN_Servo_On_Off_M(i)	pshm->P[(15535+i)%MAX_P]
#define	P_BTN_Home_M(i)	pshm->P[(15568+i)%MAX_P]
#define	P_BTN_Jog_Stop_M(i)	pshm->P[(15601+i)%MAX_P]
#define	P_BTN_Recipe_POS_RUN_M(i)	pshm->P[(15634+i)%MAX_P]
#define	P_Recipe_POS_Flag_M(i)	pshm->P[(15667+i)%MAX_P]
#define	P_BTN_Jog_INC_M(i)	pshm->P[(15700+i)%MAX_P]
#define	P_BTN_JOG_ABS_M(i)	pshm->P[(15733+i)%MAX_P]
#define	P_User_Jog_Distance	pshm->P[15766]
#define	P_Unit_Command(i)	pshm->P[(15767+i)%MAX_P]
#define	P_Unit_State_Machine(i)	pshm->P[(15867+i)%MAX_P]
#define	P_Status_BTN_Manual_3(i)	pshm->P[(15967+i)%MAX_P]
#define	P_Chk_Current_BTN_Sel(i)	pshm->P[(16067+i)%MAX_P]
#define	P_BTN_Sel_Count	pshm->P[16117]
#define	P_PC_BTN_No	pshm->P[16118]
#define	P_BTN_Interlock_Update_Interval	pshm->P[16119]
#define	P_Align_Table_Status_Update_Interval	pshm->P[16120]
#define	P_Jelly_Roll_Total_Count_Old	pshm->P[16121]
#define	P_Old_m4120	pshm->P[16122]
#define	P_Old_m4121	pshm->P[16123]
#define	P_Old_m4122	pshm->P[16124]
#define	P_Old_m4123	pshm->P[16125]
#define	P_Linear_Encoder_Pos_Check_Flag(i)	pshm->P[(16126+i)%MAX_P]
#define	P_Linear_Encoder_Pos(i)	pshm->P[(16131+i)%MAX_P]
#define	P_Status_Linear_Encoder_HomeZero(i)	pshm->P[(16136+i)%MAX_P]
#define	P_Command_Linear_Encoder_HomeZero(i)	pshm->P[(16141+i)%MAX_P]
#define	P_Flag_Linear_Enc_Homezero_Complete_M17	pshm->P[16146]
#define	P_Flag_Linear_Enc_Homezero_Complete_M18	pshm->P[16147]
#define	P_Flag_Linear_Enc_Homezero_Complete_M19	pshm->P[16148]
#define	P_Flag_Linear_Enc_Homezero_Complete_M20	pshm->P[16149]
#define	P_CMD_Linear_ENC_Homezero_M17	pshm->P[16150]
#define	P_CMD_Linear_ENC_Homezero_M18	pshm->P[16151]
#define	P_CMD_Linear_ENC_Homezero_M19	pshm->P[16152]
#define	P_CMD_Linear_ENC_Homezero_M20	pshm->P[16153]
#define	P_OLD_Home_Offset(i)	pshm->P[(16154+i)%MAX_P]
#define	P_RECIPE_PLC27_Alltime_Interval	pshm->P[16184]
#define	P_Manual_Memory_Tower_Timer	pshm->P[16185]
#define	P_Memory_Tower_Interval	pshm->P[16186]
#define	P_PLC_14_Status_Cycle_Stop_Flag	pshm->P[16187]
#define	P_Cathode_AlignTable_Cleaning_Pos_Status_Machine	pshm->P[16188]
#define	P_Anode_AlignTable_Cleaning_Pos_Status_Machine	pshm->P[16189]
#define	P_Status_Cathode_AlignTable_Cleaning_Pos	pshm->P[16190]
#define	P_Status_Anode_AlignTable_Cleaning_Pos	pshm->P[16191]
#define	P_CMD_Cathode_AlignTable_Cleaning_Pos	pshm->P[16192]
#define	P_CMD_Anode_AlignTable_Cleaning_Pos	pshm->P[16193]
#define	P_Cathode_2nd_pnp_Cleaning_Mode_Pos	pshm->P[16194]
#define	P_Anode_2nd_pnp_Cleaning_Mode_Pos	pshm->P[16195]
#define	P_Interlock_Test	pshm->P[16196]
#define	P_PNP_Picker_T_Pos	pshm->P[16197]
#define	P_NG_PNP_Pos	pshm->P[16198]
#define	M_Old_X_BTN_Machine_READY	pshm->P[16199]
#define	M_Old_X_BTN_Machine_START	pshm->P[16200]
#define	M_Old_X_BTN_Machine_STOP	pshm->P[16201]
#define	M_Old_X_BTN_Machine_RESET	pshm->P[16202]
#define	M_Old_X_BTN_Machine_MODE	pshm->P[16203]
#define	P_BTN_Motor_Pos_Check_RTN	pshm->P[16204]
#define	P_BTN_Memory_Tower_Check_Bit	pshm->P[16205]
#define	P_PMAC_Status_IDLE_Motor_Not_Pos	pshm->P[16206]
#define	P_PMAC_Status_IDLE_Motor_Pos	pshm->P[16207]
#define	P_BTN_Motor_Pos_Check_Monitor	pshm->P[16208]
#define	P_PackML_Auto_Stop_Bit	pshm->P[16209]
#define	P_BTN_IDLE_Motor_Not_Pos	pshm->P[16210]
#define	M_X_BTN_Machine_Mode	pshm->P[16211]
#define	M_Old_X_BTN_Machine_Mode	pshm->P[16212]
#define	P_Lamp_Blinking_Timer	pshm->P[16213]
#define	P_BTN_Ready_Lamp	pshm->P[16214]
#define	P_BTN_Start_Lamp	pshm->P[16215]
#define	P_BTN_Stop_Lamp	pshm->P[16216]
#define	P_ARC_Name_Plate_Passive_Status	pshm->P[16217]
#define	P_ARC_Passive_Status	pshm->P[16218]
#define	P_NP_Spool_Number	pshm->P[16219]
#define	P_ARC_Page_On	pshm->P[16220]
#define	P_ARC_NP_Upper_Timer	pshm->P[16221]
#define	P_ARC_Upper_Ready	pshm->P[16222]
#define	P_ARC_NP_Upper_3rd_Step_Toggle_Variable	pshm->P[16223]
#define	P_ARC_NP_Upper_7th_Step_Variable	pshm->P[16224]
#define	P_ARC_NP_Upper_7th_Step_Edge_Variable	pshm->P[16225]
#define	P_ARC_NP_Upper_Rot_ReRot_Blinking_Bit	pshm->P[16226]
#define	P_ARC_NP_Lower_Timer	pshm->P[16227]
#define	P_ARC_Lower_Ready	pshm->P[16228]
#define	P_ARC_NP_Lower_3rd_Step_Toggle_Variable	pshm->P[16229]
#define	P_ARC_NP_Lower_7th_Step_Variable	pshm->P[16230]
#define	P_ARC_NP_Lower_7th_Step_Edge_Variable	pshm->P[16231]
#define	P_ARC_NP_Lower_Rot_ReRot_Blinking_Bit	pshm->P[16232]
#define	M_Old_X_ARC_NP_Ready	pshm->P[16233]
#define	M_Old_X_ARC_NP_Unwinder_Rotation	pshm->P[16234]
#define	M_Old_X_ARC_NP_Unwinder_Re_Rotation	pshm->P[16235]
#define	P_Status_Clear_Flag	pshm->P[16236]
#define	P_Status_Clear_RTN	pshm->P[16237]
#define	P_MSA_BTN_On	pshm->P[16238]
#define	P_Align_Take_Off_BTN_ON	pshm->P[16239]
#define	P_ARC_NP_Upper_Ready_Check_Bit	pshm->P[16240]
#define	P_ARC_NP_Lower_Ready_Check_Bit	pshm->P[16241]
#define	P_PLC13_Cycle_Stop_Return_Array(i)	pshm->P[(16242+i)%MAX_P]
#define	P_Stopping_CycleStop_Status	pshm->P[16342]
#define	P_Stopping_CycleStop_Seq_Index	pshm->P[16343]
#define	P_Stopping_CycleStop_Precondition_Seq_Index	pshm->P[16344]
#define	P_Stopping_CycleStop_Module_Status	pshm->P[16345]
#define	P_Stopping_CycleStop_Cmd	pshm->P[16346]
#define	P_Stopping_CycleStop_State_Machine	pshm->P[16347]
#define	P_Stopping_CycleStop_Act_State_Machine(i)	pshm->P[(16348+i)%MAX_P]
#define	P_Module_Cycle_Stop_Act_State_Machine_Array(i)	pshm->P[(16368+i)%MAX_P]
#define	P_Module_Cycle_Stop_Act_Complete_Bit(i)	pshm->P[(16388+i)%MAX_P]
#define	P_Module_Cycle_Stop_Act_Command_Array(i)	pshm->P[(16408+i)%MAX_P]
#define	P_OLD_Module_Cycle_Stop_Act_Command_Array(i)	pshm->P[(16428+i)%MAX_P]
#define	P_Buffer_Seqdata_CycleStop_Array(i)	pshm->P[(16448+i)%MAX_P]
#define	P_Final_Roll_Cathode_Pos_Status	pshm->P[16468]
#define	P_Sheet_Paper_FWD_Pos_Status	pshm->P[16469]
#define	P_Final_Roll_Vision_Pos_Status	pshm->P[16470]
#define	P_Cathode_Clamp_ON_Status	pshm->P[16471]
#define	P_Anode_Clamp_ON_Status	pshm->P[16472]
#define	P_Anode_Clamp_OFF_Status	pshm->P[16473]
#define	P_Partition_Up_Flag	pshm->P[16474]
#define	P_Partition_Down_Flag	pshm->P[16475]
#define	P_Partition_Avoid_Flag	pshm->P[16476]
#define	P_Partition_Avoid_Z_Speed	pshm->P[16477]
#define	P_Partition_Avoid_X_Speed	pshm->P[16478]
#define	P_Partition_Avoid_T_Speed	pshm->P[16479]
#define	P_Partition_Avoid_2nd_T_Pos	pshm->P[16480]
#define	P_Partition_Step_Flag	pshm->P[16481]
#define	P_Partition_1st_Avoid_Offset	pshm->P[16482]
#define	P_Partition_Picker_Avoid_Offset	pshm->P[16483]
#define	P_Partition_Avoid_Check	pshm->P[16484]
#define	P_Tact_Time_Timer(i)	pshm->P[(16485+i)%MAX_P]
#define	P_Tack_Time_Save_Time(i)	pshm->P[(16525+i)%MAX_P]
#define	P_Anode_NG_PNP_Tact_Time_Start	pshm->P[16565]
#define	P_Cathode_NG_PNP_Tact_Time_Start	pshm->P[16566]
#define	P_Anode_NG_PNP_Tact_Time_End	pshm->P[16567]
#define	P_Cathode_NG_PNP_Tact_Time_End	pshm->P[16568]
#define	P_Tact_Time_Stack_Array(i)	pshm->P[(16569+i)%MAX_P]
#define	P_Tact_Time_Discharge_Array(i)	pshm->P[(16579+i)%MAX_P]
#define	P_Tact_Time_1st_Unloader_Array(i)	pshm->P[(16589+i)%MAX_P]
#define	P_Tact_Time_Sepa_ARC_Array(i)	pshm->P[(16599+i)%MAX_P]
#define	P_Tact_Time_Final_Roll_Array(i)	pshm->P[(16609+i)%MAX_P]
#define	P_Tact_Time_Cathode_1st_PNP_Array(i)	pshm->P[(16619+i)%MAX_P]
#define	P_Tact_Time_Cathode_Align_Array(i)	pshm->P[(16629+i)%MAX_P]
#define	P_Tact_Time_Cathode_2nd_PNP_Array(i)	pshm->P[(16639+i)%MAX_P]
#define	P_Tact_Time_Cathode_Clamp_Array(i)	pshm->P[(16649+i)%MAX_P]
#define	P_Tact_Time_Anode_1st_PNP_Array(i)	pshm->P[(16659+i)%MAX_P]
#define	P_Tact_Time_Anode_Align_Array(i)	pshm->P[(16669+i)%MAX_P]
#define	P_Tact_Time_Anode_2nd_PNP_Array(i)	pshm->P[(16679+i)%MAX_P]
#define	P_Tact_Time_Anode_Clamp_Array(i)	pshm->P[(16689+i)%MAX_P]
#define	P_Tact_Time_Cathode_1st_PNP_Vac_Array(i)	pshm->P[(16699+i)%MAX_P]
#define	P_Tact_Time_Cathode_Align_PNP_Vac_Array(i)	pshm->P[(16709+i)%MAX_P]
#define	P_Tact_Time_Cathode_2nd_PNP_Vac_Array(i)	pshm->P[(16719+i)%MAX_P]
#define	P_Tact_Time_Anode_1st_PNP_Vac_Array(i)	pshm->P[(16729+i)%MAX_P]
#define	P_Tact_Time_Anode_Align_PNP_Vac_Array(i)	pshm->P[(16739+i)%MAX_P]
#define	P_Tact_Time_Anode_2nd_PNP_Vac_Array(i)	pshm->P[(16749+i)%MAX_P]
#define	P_Tact_Time_Final_Roller_Clamp	pshm->P[16759]
#define	P_Tact_Time_Final_Roller_Unclamp	pshm->P[16760]
#define	P_Tact_Time_Stack_Table_Down	pshm->P[16761]
#define	P_Tact_Time_Stack_Table_Up	pshm->P[16762]
#define	P_Tact_Time_Sepa_Cutting_Down	pshm->P[16763]
#define	P_Tact_Time_Sepa_Cutting_Up	pshm->P[16764]
#define	P_Tact_Time_ARC_Upper_Plate_Up	pshm->P[16765]
#define	P_Tact_Time_ARC_Upper_Plate_Down	pshm->P[16766]
#define	P_Tact_Time_ARC_Upper_Tilting_On	pshm->P[16767]
#define	P_Tact_Time_ARC_Upper_Tilting_Off	pshm->P[16768]
#define	P_Tact_Time_ARC_Upper_Cutter_Fwd	pshm->P[16769]
#define	P_Tact_Time_ARC_Upper_Cutter_Bwd	pshm->P[16770]
#define	P_Tact_Time_ARC_Upper_Clamp_On	pshm->P[16771]
#define	P_Tact_Time_ARC_Upper_Clamp_Off	pshm->P[16772]
#define	P_Tact_Time_ARC_Lower_Plate_Up	pshm->P[16773]
#define	P_Tact_Time_ARC_Lower_Plate_Down	pshm->P[16774]
#define	P_Tact_Time_ARC_Lower_Tilting_On	pshm->P[16775]
#define	P_Tact_Time_ARC_Lower_Tilting_Off	pshm->P[16776]
#define	P_Tact_Time_ARC_Lower_Cutter_Fwd	pshm->P[16777]
#define	P_Tact_Time_ARC_Lower_Cutter_Bwd	pshm->P[16778]
#define	P_Tact_Time_ARC_Lower_Clamp_On	pshm->P[16779]
#define	P_Tact_Time_ARC_Lower_Clamp_Off	pshm->P[16780]
#define	P_Tact_Time_Save_Final_Roller_Clamp_Time	pshm->P[16781]
#define	P_Tact_Time_Save_Final_Roller_Unclamp_Time	pshm->P[16782]
#define	P_Tact_Time_Save_Stack_Table_Down_Time	pshm->P[16783]
#define	P_Tact_Time_Save_Stack_Table_Up_Time	pshm->P[16784]
#define	P_Tact_Time_Save_Sepa_Cutting_Down_Time	pshm->P[16785]
#define	P_Tact_Time_Save_Sepa_Cutting_Up_Time	pshm->P[16786]
#define	P_Tact_Time_Save_ARC_Upper_Plate_Up_Time	pshm->P[16787]
#define	P_Tact_Time_Save_ARC_Upper_Plate_Down_Time	pshm->P[16788]
#define	P_Tact_Time_Save_ARC_Upper_Tilting_On_Time	pshm->P[16789]
#define	P_Tact_Time_Save_ARC_Upper_Tilting_Off_Time	pshm->P[16790]
#define	P_Tact_Time_Save_ARC_Upper_Cutter_Fwd_Time	pshm->P[16791]
#define	P_Tact_Time_Save_ARC_Upper_Cutter_Bwd_Time	pshm->P[16792]
#define	P_Tact_Time_Save_ARC_Upper_Clamp_On_Time	pshm->P[16793]
#define	P_Tact_Time_Save_ARC_Upper_Clamp_Off_Time	pshm->P[16794]
#define	P_Tact_Time_Save_ARC_Lower_Plate_Up_Time	pshm->P[16795]
#define	P_Tact_Time_Save_ARC_Lower_Plate_Down_Time	pshm->P[16796]
#define	P_Tact_Time_Save_ARC_Lower_Tilting_On_Time	pshm->P[16797]
#define	P_Tact_Time_Save_ARC_Lower_Tilting_Off_Time	pshm->P[16798]
#define	P_Tact_Time_Save_ARC_Lower_Cutter_Fwd_Time	pshm->P[16799]
#define	P_Tact_Time_Save_ARC_Lower_Cutter_Bwd_Time	pshm->P[16800]
#define	P_Tact_Time_Save_ARC_Lower_Clamp_On_Time	pshm->P[16801]
#define	P_Tact_Time_Save_ARC_Lower_Clamp_Off_Time	pshm->P[16802]
#define	P_Tact_Time_Check(i)	pshm->P[(16803+i)%MAX_P]
#define	P_Old_Tact_Time_Check(i)	pshm->P[(16843+i)%MAX_P]
#define	P_Tact_Time_Head_Address(i)	pshm->P[(16883+i)%MAX_P]
#define	P_Tact_Time_Array_Init	pshm->P[16923]
#define	P_Last_Run_To_Discharge_Tact_Timer	pshm->P[16924]
#define	P_Last_Run_To_Discharge_Tact_Time	pshm->P[16925]
#define	P_Master_Trigger_Sync_Tact_Timer	pshm->P[16926]
#define	P_Master_Trigger_Sync_Tact_Time	pshm->P[16927]
#define	P_Vision_First_Sepa_Stack_Align_OK_PMAC_Flag	pshm->P[16928]
#define	P_PLC18_EPC_Retry_Mode_Time_Use_Flag	pshm->P[16929]
#define	P_PLC18_Vision_EPC_Correction_Request_Old	pshm->P[16930]
#define	P_PLC18_EPC_Moving_Flag	pshm->P[16931]
#define	P_PLC18_EPC_Moving_Status	pshm->P[16932]
#define	P_PLC18_EPC_Move_State_Machine	pshm->P[16933]
#define	P_PLC18_EPC_Move_Status	pshm->P[16934]
#define	P_PLC18_EPC_inspection_Time	pshm->P[16935]
#define	P_EPC_Insp_Time	pshm->P[16936]
#define	P_EPC_Correction_Time	pshm->P[16937]
#define	P_TEST_Max_EPC_Sensor_Value_um	pshm->P[16938]
#define	P_PLC18_EPC_Moving_Timer	pshm->P[16939]
#define	P_EPC_MNTR_VAR(i)	pshm->P[(16940+i)%MAX_P]
#define	P_EPC_Axis_Target_Y	pshm->P[16950]
#define	P_Com_After_Sepa_Mode_Status	pshm->P[16951]
#define	P_PLC18_PLC_to_PMAC_Correction_Value	pshm->P[16952]
#define	P_PLC_EPC_Status	pshm->P[16953]
#define	P_EPC_Retry_Over_Alarm_Flag	pshm->P[16954]
#define	P_ARC_EPC_Vision_Value_Apply_Bit	pshm->P[16955]
#define	P_ARC_EPC_Vision_Value_Apply_Flag	pshm->P[16956]
#define	P_ARC_EPC_Vision_Value_Apply_State_Machine	pshm->P[16957]
#define	P_ARC_EPC_Vision_Value_Apply_Timer	pshm->P[16958]
#define	P_ARC_EPC_Vision_Value_Apply_Time	pshm->P[16959]
#define	P_AH_Home_Status	pshm->P[16960]
#define	P_Resetting_All_Home_Command	pshm->P[16961]
#define	P_Homing_Alarm_Time	pshm->P[16962]
#define	P_Home_Check_Arry(i)	pshm->P[(16963+i)%MAX_P]
#define	P_All_Home_Stop_Cmd	pshm->P[17013]
#define	P_Home_First_Move	pshm->P[17014]
#define	P_PWM_Phasing_Start(i)	pshm->P[(17015+i)%MAX_P]
#define	P_PWM_Status(i)	pshm->P[(17020+i)%MAX_P]
#define	P_PWM_State_Machine(i)	pshm->P[(17025+i)%MAX_P]
#define	P_AH_Seq_arr(i)	pshm->P[(17030+i)%MAX_P]
#define	P_DD_M_Home_ABS_Pos(i)	pshm->P[(17045+i)%MAX_P]
#define	P_AH_Indvi_rtn(i)	pshm->P[(17050+i)%MAX_P]
#define	P_DD_M_Home_Pos_Flag	pshm->P[17101]
#define	P_WAIT_INDEX	pshm->P[17102]
#define	P_Home_Check_Arry1(i)	pshm->P[(17103+i)%MAX_P]
#define	P_FR_Cmd_Check_Flag	pshm->P[17153]
#define	P_PV_Separator_Dancer_Pressure	pshm->P[17154]
#define	P_PV_Cathode_Clamp_Pressure	pshm->P[17155]
#define	P_PV_Anoode_Clamp_Pressure	pshm->P[17156]
#define	P_PV_Cathode_Final_Roller_X_Axis	pshm->P[17157]
#define	P_PV_Anode_Final_Roller_X_Axis	pshm->P[17158]
#define	P_PV_Cathode_Clamp_ON_Y1_Axis_Pos	pshm->P[17159]
#define	P_PV_Cathode_Clamp_ON_Y2_Axis_Pos	pshm->P[17160]
#define	P_PV_Cathode_Clamp_ON_Z1_Axis_Pos	pshm->P[17161]
#define	P_PV_Cathode_Clamp_ON_Z2_Axis_Pos	pshm->P[17162]
#define	P_PV_Anode_Clamp_ON_Y1_Axis_Pos	pshm->P[17163]
#define	P_PV_Anode_Clamp_ON_Y2_Axis_Pos	pshm->P[17164]
#define	P_PV_Anode_Clamp_ON_Z1_Axis_Pos	pshm->P[17165]
#define	P_PV_Anode_Clamp_ON_Z2_Axis_Pos	pshm->P[17166]
#define	P_PV_Cathode_2th_AT_T_Axis_Pos	pshm->P[17167]
#define	P_PV_Cathode_2th_ST_T_Axis_Pos	pshm->P[17168]
#define	P_PV_Cathode_2th_AT_Z_Axis_Pos	pshm->P[17169]
#define	P_PV_Cathode_2th_ST_Z_Axis_Pos	pshm->P[17170]
#define	P_PV_Anode_2th_AT_T_Axis_Pos	pshm->P[17171]
#define	P_PV_Anode_2th_ST_T_Axis_Pos	pshm->P[17172]
#define	P_PV_Anode_2th_AT_Z_Axis_Pos	pshm->P[17173]
#define	P_PV_Anode_2th_ST_Z_Axis_Pos	pshm->P[17174]
#define	P_PV_Cathode_1th_Ready_T_Axis_Pos	pshm->P[17175]
#define	P_PV_Cathode_1th_CV_T_Axis_Pos	pshm->P[17176]
#define	P_PV_Cathode_1th_AT_T_Axis_Pos	pshm->P[17177]
#define	P_PV_Cathode_1th_Ready_Z_Axis_Pos	pshm->P[17178]
#define	P_PV_Cathode_1th_CV_Z_Axis_Pos	pshm->P[17179]
#define	P_PV_Cathode_1th_AT_Z_Axis_Pos	pshm->P[17180]
#define	P_PV_Anode_1th_Ready_T_Axis_Pos	pshm->P[17181]
#define	P_PV_Anode_1th_CV_T_Axis_Pos	pshm->P[17182]
#define	P_PV_Anode_1th_AT_T_Axis_Pos	pshm->P[17183]
#define	P_PV_Anode_1th_Ready_Z_Axis_Pos	pshm->P[17184]
#define	P_PV_Anode_1th_CV_Z_Axis_Pos	pshm->P[17185]
#define	P_PV_Anode_1th_AT_Z_Axis_Pos	pshm->P[17186]
#define	P_PV_Cathode_NG_AT_T_Axis_Pos	pshm->P[17187]
#define	P_PV_Cathode_NG_Box_T_Axis_Pos	pshm->P[17188]
#define	P_PV_Anode_NG_AT_T_Axis_Pos	pshm->P[17189]
#define	P_PV_Anode_NG_Box_T_Axis_Pos	pshm->P[17190]
#define	P_SemiRun_Separator_Dancer_Pressure_Flag	pshm->P[17191]
#define	P_SemiRun_Cathode_Clamp_Pressure_Flag	pshm->P[17192]
#define	P_SemiRun_Anoode_Clamp_Pressure_Flag	pshm->P[17193]
#define	P_SemiRun_Cathode_Final_Roller_X_Axis_Flag	pshm->P[17194]
#define	P_SemiRun_Anode_Final_Roller_X_Axis_Flag	pshm->P[17195]
#define	P_SemiRun_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag	pshm->P[17196]
#define	P_SemiRun_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag	pshm->P[17197]
#define	P_SemiRun_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag	pshm->P[17198]
#define	P_SemiRun_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag	pshm->P[17199]
#define	P_SemiRun_Cathode_2th_AT_T_Axis_Pos_Flag	pshm->P[17200]
#define	P_SemiRun_Cathode_2th_ST_T_Axis_Pos_Flag	pshm->P[17201]
#define	P_SemiRun_Cathode_2th_AT_Z_Axis_Pos_Flag	pshm->P[17202]
#define	P_SemiRun_Cathode_2th_ST_Z_Axis_Pos_Flag	pshm->P[17203]
#define	P_SemiRun_Anode_2th_AT_T_Axis_Pos_Flag	pshm->P[17204]
#define	P_SemiRun_Anode_2th_ST_T_Axis_Pos_Flag	pshm->P[17205]
#define	P_SemiRun_Anode_2th_AT_Z_Axis_Pos_Flag	pshm->P[17206]
#define	P_SemiRun_Anode_2th_ST_Z_Axis_Pos_Flag	pshm->P[17207]
#define	P_SemiRun_Cathode_1th_Ready_T_Axis_Pos_Flag	pshm->P[17208]
#define	P_SemiRun_Cathode_1th_CV_T_Axis_Pos_Flag	pshm->P[17209]
#define	P_SemiRun_Cathode_1th_AT_T_Axis_Pos_Flag	pshm->P[17210]
#define	P_SemiRun_Cathode_1th_Ready_Z_Axis_Pos_Flag	pshm->P[17211]
#define	P_SemiRun_Cathode_1th_CV_Z_Axis_Pos_Flag	pshm->P[17212]
#define	P_SemiRun_Cathode_1th_AT_Z_Axis_Pos_Flag	pshm->P[17213]
#define	P_SemiRun_Anode_1th_Ready_T_Axis_Pos_Flag	pshm->P[17214]
#define	P_SemiRun_Anode_1th_CV_T_Axis_Pos_Flag	pshm->P[17215]
#define	P_SemiRun_Anode_1th_AT_T_Axis_Pos_Flag	pshm->P[17216]
#define	P_SemiRun_Anode_1th_Ready_Z_Axis_Pos_Flag	pshm->P[17217]
#define	P_SemiRun_Anode_1th_CV_Z_Axis_Pos_Flag	pshm->P[17218]
#define	P_SemiRun_Anode_1th_AT_Z_Axis_Pos_Flag	pshm->P[17219]
#define	P_SemiRun_Cathode_NG_AT_T_Axis_Pos_Flag	pshm->P[17220]
#define	P_SemiRun_Cathode_NG_Box_T_Axis_Pos_Flag	pshm->P[17221]
#define	P_SemiRun_Anode_NG_AT_T_Axis_Pos_Flag	pshm->P[17222]
#define	P_SemiRun_Anode_NG_Box_T_Axis_Pos_Flag	pshm->P[17223]
#define	P_Motion_Separator_Dancer_Pressure_Flag	pshm->P[17224]
#define	P_Motion_Cathode_Clamp_Pressure_Flag	pshm->P[17225]
#define	P_Motion_Anoode_Clamp_Pressure_Flag	pshm->P[17226]
#define	P_Motion_Cathode_Final_Roller_X_Axis_Flag	pshm->P[17227]
#define	P_Motion_Anode_Final_Roller_X_Axis_Flag	pshm->P[17228]
#define	P_Motion_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag	pshm->P[17229]
#define	P_Motion_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag	pshm->P[17230]
#define	P_Motion_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag	pshm->P[17231]
#define	P_Motion_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag	pshm->P[17232]
#define	P_Motion_Cathode_2th_AT_T_Axis_Pos_Flag	pshm->P[17233]
#define	P_Motion_Cathode_2th_ST_T_Axis_Pos_Flag	pshm->P[17234]
#define	P_Motion_Cathode_2th_AT_Z_Axis_Pos_Flag	pshm->P[17235]
#define	P_Motion_Cathode_2th_ST_Z_Axis_Pos_Flag	pshm->P[17236]
#define	P_Motion_Anode_2th_AT_T_Axis_Pos_Flag	pshm->P[17237]
#define	P_Motion_Anode_2th_ST_T_Axis_Pos_Flag	pshm->P[17238]
#define	P_Motion_Anode_2th_AT_Z_Axis_Pos_Flag	pshm->P[17239]
#define	P_Motion_Anode_2th_ST_Z_Axis_Pos_Flag	pshm->P[17240]
#define	P_Motion_Cathode_1th_Ready_T_Axis_Pos_Flag	pshm->P[17241]
#define	P_Motion_Cathode_1th_CV_T_Axis_Pos_Flag	pshm->P[17242]
#define	P_Motion_Cathode_1th_AT_T_Axis_Pos_Flag	pshm->P[17243]
#define	P_Motion_Cathode_1th_Ready_Z_Axis_Pos_Flag	pshm->P[17244]
#define	P_Motion_Cathode_1th_CV_Z_Axis_Pos_Flag	pshm->P[17245]
#define	P_Motion_Cathode_1th_AT_Z_Axis_Pos_Flag	pshm->P[17246]
#define	P_Motion_Anode_1th_Ready_T_Axis_Pos_Flag	pshm->P[17247]
#define	P_Motion_Anode_1th_CV_T_Axis_Pos_Flag	pshm->P[17248]
#define	P_Motion_Anode_1th_AT_T_Axis_Pos_Flag	pshm->P[17249]
#define	P_Motion_Anode_1th_Ready_Z_Axis_Pos_Flag	pshm->P[17250]
#define	P_Motion_Anode_1th_CV_Z_Axis_Pos_Flag	pshm->P[17251]
#define	P_Motion_Anode_1th_AT_Z_Axis_Pos_Flag	pshm->P[17252]
#define	P_Motion_Cathode_NG_AT_T_Axis_Pos_Flag	pshm->P[17253]
#define	P_Motion_Cathode_NG_Box_T_Axis_Pos_Flag	pshm->P[17254]
#define	P_Motion_Anode_NG_AT_T_Axis_Pos_Flag	pshm->P[17255]
#define	P_Motion_Anode_NG_Box_T_Axis_Pos_Flag	pshm->P[17256]
#define	P_Cathode_1PNP_Sacle_Value	pshm->P[17257]
#define	P_Cathode_2PNP_Sacle_Value	pshm->P[17258]
#define	P_Anode_1PNP_Sacle_Value	pshm->P[17259]
#define	P_Anode_2PNP_Sacle_Value	pshm->P[17260]
#define	P_PLC01_SemiRun_PV_Flag	pshm->P[17261]
#define	P_PV_EPC_Index	pshm->P[17262]
#define	P_PV_EPC_Camera_Pos(i)	pshm->P[(17263+i)%MAX_P]
#define	P_BTN_MSA_Total_Value	pshm->P[17278]
#define	P_Vision_Align_Trigger_Timer	pshm->P[17279]
#define	P_Vision_Stack_Trigger_Timer	pshm->P[17280]
#define	P_MSA_Chk_Pos_Timer	pshm->P[17281]
#define	P_MSA_Chk_Pos_Time	pshm->P[17282]
#define	P_VISION_MSA_Status_Prod_Sequence(i)	pshm->P[(17283+i)%MAX_P]
#define	P_VISION_MSA_Seq_Index	pshm->P[17303]
#define	P_VISION_MSA_Anode_Align_Bit_Pos	pshm->P[17304]
#define	P_VISION_MSA_Seq_PreCondition_Index	pshm->P[17305]
#define	P_MSA_CycleStop_Point_Check_Complete_RTN	pshm->P[17306]
#define	P_MSA_Cmd(i)	pshm->P[(17307+i)%MAX_P]
#define	P_Current_Anode_Align_MSA_Run_Count	pshm->P[17312]
#define	P_Current_Cathode_Align_MSA_Run_Count	pshm->P[17313]
#define	P_Current_Anode_Stack_MSA_Run_Count	pshm->P[17314]
#define	P_Current_Cathode_Stack_MSA_Run_Count	pshm->P[17315]
#define	P_VISION_MSA_Align_Count_Chk_Flag	pshm->P[17316]
#define	P_VISION_MSA_Stack_Count_Chk_Flag	pshm->P[17317]
#define	P_VISION_MSA_pre_InterLock_Cmd	pshm->P[17318]
#define	P_VISION_MSA_pre_InterLock_Status	pshm->P[17319]
#define	P_VISION_MSA_pre_InterLock_Check_Assy_Bit	pshm->P[17320]
#define	P_VISION_MSA_pre_InterLock_Assy_Bit_Pos	pshm->P[17321]
#define	P_Vision_MSA_Interlock_Status	pshm->P[17322]
#define	P_VISION_MSA_MODE	pshm->P[17323]
#define	P_VISION_MSA_Status_Flag	pshm->P[17324]
#define	P_VISION_MSA_State_Machine	pshm->P[17325]
#define	P_VISION_MSA_Status	pshm->P[17326]
#define	P_VISION_MSA_Seq_Command_Occurs	pshm->P[17327]
#define	P_Vision_Align_Trigger_Time	pshm->P[17328]
#define	P_Anode_Align_MSA_Motion_Check	pshm->P[17329]
#define	P_Cathode_Align_MSA_Motion_Check	pshm->P[17330]
#define	P_Anode_Stack_MSA_Motion_Check	pshm->P[17331]
#define	P_Cathode_Stack_MSA_Motion_Check	pshm->P[17332]
#define	P_Anode_Align_MSA_Motion_ProgActive_Complete	pshm->P[17333]
#define	P_Cathode_Align_MSA_Motion_ProgActive_Complete	pshm->P[17334]
#define	P_Anode_Stack_MSA_Motion_ProgActive_Complete	pshm->P[17335]
#define	P_Cathode_Stack_MSA_Motion_ProgActive_Complete	pshm->P[17336]
#define	P_BTN_Align_Off_Total_Value	pshm->P[17337]
#define	P_Align_Take_Off_Cmd(i)	pshm->P[(17338+i)%MAX_P]
#define	P_Align_Take_Off_Status	pshm->P[17341]
#define	P_Align_Take_Off_Mode	pshm->P[17342]
#define	P_Align_Take_Off_Status_Flag	pshm->P[17343]
#define	P_Align_Take_Off_State_Machine	pshm->P[17344]
#define	P_Align_Take_Off_Chk_Pos_Timer	pshm->P[17345]
#define	P_Align_Take_Off_Motor_Check_Complete	pshm->P[17346]
#define	P_Align_Take_Off_Speed_Return_Complete	pshm->P[17347]
#define	P_Align_Take_Off_Interlock_Status	pshm->P[17348]
#define	P_Align_Take_Off_pre_InterLock_Cmd	pshm->P[17349]
#define	P_Align_Take_Off_pre_InterLock_Status	pshm->P[17350]
#define	P_Align_Take_Off_pre_InterLock_Check_Assy_Bit	pshm->P[17351]
#define	P_Align_Take_Off_pre_InterLock_Assy_Bit_Pos	pshm->P[17352]
#define	P_Align_Take_Off_Seq_Index	pshm->P[17353]
#define	P_Align_Take_Off_Seq_PreCondition_Index	pshm->P[17354]
#define	P_Align_Take_Off_Status_Prod_Sequence(i)	pshm->P[(17355+i)%MAX_P]
#define	P_Align_Take_Off_Stop_Signal	pshm->P[17375]
#define	P_Vision_Cal_Reset_Count	pshm->P[17376]
#define	P_2nd_PNP_Cleaning_Mode_Cmd	pshm->P[17377]
#define	P_2nd_PNP_Cleaning_Mode_Status	pshm->P[17378]
#define	P_2nd_PNP_Cleaning_Mode_Z_Jog_Speed	pshm->P[17379]
#define	P_2nd_PNP_Cleaning_Mode_X_Jog_Speed	pshm->P[17380]
#define	P_2nd_PNP_Cleaning_Mode_T_Jog_Speed	pshm->P[17381]
#define	P_2nd_PNP_Cleaning_Avoid_2nd_T_Pos	pshm->P[17382]
#define	P_PNP_Vac_Chk_Mode_Interlock	pshm->P[17383]
#define	P_Vac_Chk_Test	pshm->P[17384]
#define	P_Anode_1st_PNP_Vac_Chk_Mode_Blocked	pshm->P[17385]
#define	P_Cathode_1st_PNP_Vac_Chk_Mode_Blocked	pshm->P[17386]
#define	P_Anode_2nd_PNP_Vac_Chk_Mode_Blocked	pshm->P[17387]
#define	P_Cathode_2nd_PNP_Vac_Chk_Mode_Blocked	pshm->P[17388]
#define	P_SM_Anode_1st_PNP_Vac_Chk_Mode	pshm->P[17389]
#define	P_SM_Cathode_1st_PNP_Vac_Chk_Mode	pshm->P[17390]
#define	P_SM_Anode_2nd_PNP_Vac_Chk_Mode	pshm->P[17391]
#define	P_SM_Cathode_2nd_PNP_Vac_Chk_Mode	pshm->P[17392]
#define	P_Anode_1st_PNP_Vac_Chk_Execute_Timer	pshm->P[17393]
#define	P_Cathode_1st_PNP_Vac_Chk_Execute_Timer	pshm->P[17394]
#define	P_Anode_2nd_PNP_Vac_Chk_Execute_Timer	pshm->P[17395]
#define	P_Cathode_2nd_PNP_Vac_Chk_Execute_Timer	pshm->P[17396]
#define	P_Anode_1st_PNP_Vac_Check_Timer	pshm->P[17397]
#define	P_Cathode_1st_PNP_Vac_Check_Timer	pshm->P[17398]
#define	P_Anode_2nd_PNP_Vac_Check_Timer	pshm->P[17399]
#define	P_Cathode_2nd_PNP_Vac_Check_Timer	pshm->P[17400]
#define	P_Anode_1st_PNP_Vac_Chk_Status	pshm->P[17401]
#define	P_Cathode_1st_PNP_Vac_Chk_Status	pshm->P[17402]
#define	P_Anode_2nd_PNP_Vac_Chk_Status	pshm->P[17403]
#define	P_Cathode_2nd_PNP_Vac_Chk_Status	pshm->P[17404]
#define	P_Anode_1st_PNP_Vac_Chk_Mode_Stop_Blocked	pshm->P[17405]
#define	P_Cathode_1st_PNP_Vac_Chk_Mode_Stop_Blocked	pshm->P[17406]
#define	P_Anode_2nd_PNP_Vac_Chk_Mode_Stop_Blocked	pshm->P[17407]
#define	P_Cathode_2nd_PNP_Vac_Chk_Mode_Stop_Blocked	pshm->P[17408]
#define	P_Anode_1st_PnP_Vac_Chk_Mode_RTN	pshm->P[17409]
#define	P_Cathode_1st_PnP_Vac_Chk_Mode_RTN	pshm->P[17410]
#define	P_Anode_2nd_PnP_Vac_Chk_Mode_RTN	pshm->P[17411]
#define	P_Cathode_2nd_PnP_Vac_Chk_Mode_RTN	pshm->P[17412]
#define	P_PNP_Vac_Chk_Mode_TimeBase_Rtn	pshm->P[17413]
#define	P_PNP_Vac_Chk_Mode_Timer	pshm->P[17414]
#define	P_Anode_1st_PNP_Vac_Chk_Mode_Err	pshm->P[17415]
#define	P_Cathode_1st_PNP_Vac_Chk_Mode_Err	pshm->P[17416]
#define	P_Anode_2nd_PNP_Vac_Chk_Mode_Err	pshm->P[17417]
#define	P_Cathode_2nd_PNP_Vac_Chk_Mode_Err	pshm->P[17418]
#define	P_PNP_Vac_Chk_Mode_BTN_Err	pshm->P[17419]
#define	P_BTN_CA_1st_PNP_Vac_Chk_Mode	pshm->P[17420]
#define	P_BTN_AN_1st_PNP_Vac_Chk_Mode	pshm->P[17421]
#define	P_BTN_CA_2nd_PNP_Vac_Chk_Mode	pshm->P[17422]
#define	P_BTN_AN_2nd_PNP_Vac_Chk_Mode	pshm->P[17423]
#define	P_Old_Upper_Sensor(i)	pshm->P[(17424+i)%MAX_P]
#define	P_Edge_Upper_Sensor(i)	pshm->P[(17432+i)%MAX_P]
#define	P_Old_Lower_Sensor(i)	pshm->P[(17440+i)%MAX_P]
#define	P_Edge_Lower_Sensor(i)	pshm->P[(17448+i)%MAX_P]
#define	P_Edge_NP_BTN(i)	pshm->P[(17456+i)%MAX_P]
#define	P_UI_Unit_Status(i)	pshm->P[(17458+i)%MAX_P]
#define	P_Motor_Unit_Status(i)	pshm->P[(17468+i)%MAX_P]
#define	P_Current_Homming_Status_To_PLC(i)	pshm->P[(17518+i)%MAX_P]
#define	P_System_Cascading_ON_Cmd	pshm->P[17568]
#define	P_System_Cascading_OFF_Cmd	pshm->P[17569]
#define	P_System_Master_Following_ON_Cmd	pshm->P[17570]
#define	P_System_Master_Following_OFF_Cmd	pshm->P[17571]
#define	P_System_CamTable_ON_Cmd	pshm->P[17572]
#define	P_System_CamTable_OFF_Cmd	pshm->P[17573]
#define	P_System_Spool_Home_Ready_Pos_Cmd	pshm->P[17574]
#define	P_System_Cascading_ON_Status	pshm->P[17575]
#define	P_System_Cascading_OFF_Status	pshm->P[17576]
#define	P_System_Master_Following_ON_Status	pshm->P[17577]
#define	P_System_Master_Following_OFF_Status	pshm->P[17578]
#define	P_System_CamTable_ON_Status	pshm->P[17579]
#define	P_System_CamTable_OFF_Status	pshm->P[17580]
#define	P_System_Spool_Home_Ready_Pos_Status	pshm->P[17581]
#define	P_System_Cascading_ON_State_Machine	pshm->P[17582]
#define	P_System_Cascading_OFF_State_Machine	pshm->P[17583]
#define	P_System_Master_Follwing_ON_State_Machine	pshm->P[17584]
#define	P_System_Master_Follwing_OFF_State_Machine	pshm->P[17585]
#define	P_System_CamTable_ON_State_Machine	pshm->P[17586]
#define	P_System_CamTable_OFF_State_Machine	pshm->P[17587]
#define	P_System_Spool_Home_Ready_Pos_State_Machine	pshm->P[17588]
#define	P_System_Cascading_ON_Complete_Flag	pshm->P[17589]
#define	P_System_Cascading_OFF_Complete_Flag	pshm->P[17590]
#define	P_System_Master_Following_ON_Complete_Flag	pshm->P[17591]
#define	P_System_Master_Following_OFF_Complete_Flag	pshm->P[17592]
#define	P_System_CamTable_ON_Complete_Flag	pshm->P[17593]
#define	P_System_CamTable_OFF_Complete_Flag	pshm->P[17594]
#define	P_System_Spool_Home_Ready_Pos_Complete_Flag	pshm->P[17595]
#define	P_Servo_Dancer_Cascading_Off_Timer	pshm->P[17596]
#define	P_Servo_Dancer_Cascading_Set_Timer	pshm->P[17597]
#define	P_Dancer_Frist_Home_Ready_Pos_Timer	pshm->P[17598]
#define	P_Driving_Motor_Use_Flag	pshm->P[17599]
#define	P_Home_Spool_Unwinding	pshm->P[17600]
#define	P_OutValue	pshm->P[17601]
#define	P_Dancer_Out_Slew_Seq	pshm->P[17602]
#define	P_OutChangeValue	pshm->P[17603]
#define	P_Rot_OutValue	pshm->P[17604]
#define	P_OutChangeTime	pshm->P[17605]
#define	P_AO_Module_Arr(i)	pshm->P[(17606+i)%MAX_P]
#define	P_AO_Range_Set_Value(i)	pshm->P[(17611+i)%MAX_P]
#define	P_Regul_Max_kPa_Value	pshm->P[17616]
#define	P_Regul_Min_kPa_Value	pshm->P[17617]
#define	P_Regul_Max_AD	pshm->P[17618]
#define	P_Regul_Min_AD	pshm->P[17619]
#define	P_Current_Max_Value	pshm->P[17620]
#define	P_Current_Min_Value	pshm->P[17621]
#define	P_Current_Max_AD	pshm->P[17622]
#define	P_Current_Min_AD	pshm->P[17623]
#define	P_Sepa_Cal_Inclination	pshm->P[17624]
#define	P_Regul_Cal_Inclination	pshm->P[17625]
#define	P_Cutter_Heat_Amp_Data_Bit	pshm->P[17626]
#define	P_Cut_Heat_Amp_Value	pshm->P[17627]
#define	P_AI_Cathode_Clamp_Damper_AVG	pshm->P[17628]
#define	P_AI_Anode_Clamp_Damper_AVG	pshm->P[17629]
#define	P_Tension_Ready_Pos_Cmd	pshm->P[17630]
#define	P_Tension_Ready_State_Machine	pshm->P[17631]
#define	P_Tension_Ready_Pos_Status	pshm->P[17632]
#define	P_Dancer_Center_Pos	pshm->P[17633]
#define	P_Upper_Sepa_Cal_Inclination	pshm->P[17634]
#define	P_Lower_Sepa_Cal_Inclination	pshm->P[17635]
#define	P_Unwinder_Jogspeed	pshm->P[17636]
#define	P_Cascading_First_Out	pshm->P[17637]
#define	P_Dancer_Cur_Vdc	pshm->P[17638]
#define	P_Dancer_Cur_Torque	pshm->P[17639]
#define	P_Dancer_Cur_Newton	pshm->P[17640]
#define	P_Dancer_Cur_Kgf	pshm->P[17641]
#define	P_Board_IO_Count	pshm->P[17642]
#define	P_Force_BTN_Address_Clear_Count	pshm->P[17643]
#define	P_Force_BTN_M_Variable_Save(i)	pshm->P[(17644+i)%MAX_P]
#define	P_Force_BTN_Condition_Count	pshm->P[18028]
#define	P_Old_Force_BTN_Mode	pshm->P[18029]
#define	P_Force_BTN_Address_Count	pshm->P[18030]
#define	P_Force_BTN_GPIO_Address_Count	pshm->P[18031]
#define	P_Force_BTN_Ecat_Address_Count	pshm->P[18032]
#define	P_Force_BTN_M_Variable_Save_Count	pshm->P[18033]
#define	P_Force_BTN_M_Variable_Start_Num	pshm->P[18034]
#define	P_Force_BTN_Normal_Mode_Status	pshm->P[18035]
#define	P_Force_BTN_Normal_Mode_State_Machine	pshm->P[18036]
#define	P_Force_BTN_Normal_Mode_Complete_Flag	pshm->P[18037]
#define	P_Force_BTN_Force_Mode_Timer	pshm->P[18038]
#define	P_Force_BTN_Force_Mode_Delay_Time	pshm->P[18039]
#define	P_Force_BTN_Force_Mode_Status	pshm->P[18040]
#define	P_Force_BTN_Force_Mode_State_Machine	pshm->P[18041]
#define	P_Force_BTN_Force_Mode_Complete_Flag	pshm->P[18042]
#define	P_Mem_Save_Error_Bit	pshm->P[18043]
#define	P_ABS_Phasing_Data(i)	pshm->P[(18044+i)%MAX_P]
#define	P_ABS_Home_Offset_Data(i)	pshm->P[(18049+i)%MAX_P]
#define	P_Servo_Gain_Save_Command	pshm->P[18054]
#define	P_Servo_Gain_Load_Command	pshm->P[18055]
#define	P_Servo_Gain_Save_Flag	pshm->P[18056]
#define	P_Servo_Gain_Load_Flag	pshm->P[18057]
#define	P_Servo_Gain_Kp(i)	pshm->P[(18058+i)%MAX_P]
#define	P_Servo_Gain_Kvfb(i)	pshm->P[(18088+i)%MAX_P]
#define	P_Servo_Gain_Kvff(i)	pshm->P[(18118+i)%MAX_P]
#define	P_Servo_Gain_Ki(i)	pshm->P[(18148+i)%MAX_P]
#define	P_Servo_Gain_SwZvInt(i)	pshm->P[(18178+i)%MAX_P]
#define	P_Servo_Gain_Kaff(i)	pshm->P[(18208+i)%MAX_P]
#define	P_Insert_Phase_Flag	pshm->P[18238]
#define	P_Alarm_Arr(i)	pshm->P[(18239+i)%MAX_P]
#define	P_Alarm_Occur_Flag	pshm->P[18339]
#define	P_Alarm_Occur_Index_Flag(i)	pshm->P[(18340+i)%MAX_P]
#define	P_Alarm_Wait_Time	pshm->P[18344]
#define	P_Alarm_Delay_Timer	pshm->P[18345]
#define	P_Compare_Priority	pshm->P[18346]
#define	P_Alarm_Report	pshm->P[18347]
#define	P_Alarm_Num	pshm->P[18348]
#define	P_Alarm_Index	pshm->P[18349]
#define	P_First_Alarm_Flag	pshm->P[18350]
#define	P_Alarm_Log(i)	pshm->P[(18351+i)%MAX_P]
#define	P_First_Alarm_Log(i)	pshm->P[(18451+i)%MAX_P]
#define	P_Servo_Alarm_Check	pshm->P[18481]
#define	P_Ecat_Servo_Alarm_Check	pshm->P[18482]
#define	P_Alarm_duplicate_Check_Arr(i)	pshm->P[(18483+i)%MAX_P]
#define	P_Old_Drive_Alarm(i)	pshm->P[(19153+i)%MAX_P]
#define	P_IL_ON_OFF_Flag	pshm->P[19203]
#define	P_IL_Coord_Robot	pshm->P[19204]
#define	P_IL_Robot_Bit	pshm->P[19205]
#define	P_IL_Outer_Status	pshm->P[19206]
#define	P_Robot_Unit_Serch_Flag	pshm->P[19207]
#define	P_IL_Home_Chk_Edge	pshm->P[19208]
#define	P_Limit_PosData(i)	pshm->P[(19209+i)%MAX_P]
#define	P_IL_Sprint	pshm->P[19212]
#define	P_IL_length	pshm->P[19213]
#define	P_IL_Strcat	pshm->P[19214]
#define	P_IL_Popup_Motor	pshm->P[19215]
#define	P_IL_Motor_Page	pshm->P[19216]
#define	P_IL_Recipe_Bit	pshm->P[19217]
#define	P_Interlock_Popup_On_Flag	pshm->P[19218]
#define	P_Motor_Page	pshm->P[19219]
#define	P_OP_Side_Ca_PNP_Pos	pshm->P[19220]
#define	P_OP_Side_An_PNP_Pos	pshm->P[19221]
#define	P_OP_Side_PMAC_Cur_Mode	pshm->P[19222]
#define	P_Abs_Trans_Cur_Pos	pshm->P[19223]
#define	P_Minus_IL_Offset	pshm->P[19224]
#define	P_Plus_IL_Offset	pshm->P[19225]
#define	P_2nd_PNP_Arm_Radius	pshm->P[19226]
#define	P_IL_Enable_Flag	pshm->P[19227]
#define	P_Plus_Interlock_Bit	pshm->P[19228]
#define	P_Minus_Interlock_Bit	pshm->P[19229]
#define	UPPos	pshm->P[19230]
#define	Unloader_In_StackPos	pshm->P[19231]
#define	FR_AnodePos	pshm->P[19232]
#define	FR_CathodePos	pshm->P[19233]
#define	Before_In_Stack	pshm->P[19234]
#define	In_Stack	pshm->P[19235]
#define	P_Collision_Risk_Motor(i)	pshm->P[(19236+i)%MAX_P]
#define	P_Minus_Collision_Risk_Motor	pshm->P[19238]
#define	P_IL_Clamp_Y	pshm->P[19239]
#define	P_IL_Clamp_Z	pshm->P[19240]
#define	P_IL_Clamp_Pos	pshm->P[19241]
#define	P_IL_Use_FR_Clamp_Pos	pshm->P[19242]
#define	P_P_IL_Normal_Pos_Offset(i)	pshm->P[(19243+i)%MAX_P]
#define	P_M_IL_Normal_Pos_Offset(i)	pshm->P[(19293+i)%MAX_P]
#define	P_P_IL_Upper_Pos_Offset(i)	pshm->P[(19343+i)%MAX_P]
#define	P_M_IL_Upper_Pos_Offset(i)	pshm->P[(19393+i)%MAX_P]
#define	P_P_IL_Align_Pos_Offset(i)	pshm->P[(19443+i)%MAX_P]
#define	P_M_IL_Align_Pos_Offset(i)	pshm->P[(19493+i)%MAX_P]
#define	P_P_IL_Stack_Pos_Offset(i)	pshm->P[(19543+i)%MAX_P]
#define	P_M_IL_Stack_Pos_Offset(i)	pshm->P[(19593+i)%MAX_P]
#define	P_Ca_1st_Plus_IL_Offset	pshm->P[19643]
#define	P_Ca_1st_Minus_IL_Offset	pshm->P[19644]
#define	P_An_1st_Plus_IL_Offset	pshm->P[19645]
#define	P_An_1st_Minus_IL_Offset	pshm->P[19646]
#define	P_Ca_2nd_T_Plus_IL_Offset(i)	pshm->P[(19647+i)%MAX_P]
#define	P_Ca_2nd_T_Minus_IL_Offset(i)	pshm->P[(19650+i)%MAX_P]
#define	P_Ca_2nd_Z_Plus_IL_Offset(i)	pshm->P[(19653+i)%MAX_P]
#define	P_Ca_2nd_Z_Minus_IL_Offset(i)	pshm->P[(19655+i)%MAX_P]
#define	P_An_2nd_T_Plus_IL_Offset(i)	pshm->P[(19657+i)%MAX_P]
#define	P_An_2nd_T_Minus_IL_Offset(i)	pshm->P[(19660+i)%MAX_P]
#define	P_An_2nd_Z_Minus_IL_Offset(i)	pshm->P[(19663+i)%MAX_P]
#define	P_Z_Pos_Data	pshm->P[19665]
#define	P_Clamp_Z_Plus_IL_Offset	pshm->P[19666]
#define	P_FR_X_Plus_IL_Offset(i)	pshm->P[(19667+i)%MAX_P]
#define	P_FR_X_Minus_IL_Offset(i)	pshm->P[(19669+i)%MAX_P]
#define	P_FR_Z_Minus_IL_Offset	pshm->P[19671]
#define	P_Ca_NG_PNP_Plus_IL_Offset(i)	pshm->P[(19672+i)%MAX_P]
#define	P_Ca_NG_PNP_Minus_IL_Offset(i)	pshm->P[(19676+i)%MAX_P]
#define	P_An_NG_PNP_Plus_IL_Offset(i)	pshm->P[(19680+i)%MAX_P]
#define	P_An_NG_PNP_Minus_IL_Offset(i)	pshm->P[(19684+i)%MAX_P]
#define	P_Unloader_X_Plus_IL_Offset(i)	pshm->P[(19688+i)%MAX_P]
#define	P_Unloader_X_Minus_IL_Offset(i)	pshm->P[(19692+i)%MAX_P]
#define	P_Unloader_Z_Plus_IL_Offset(i)	pshm->P[(19696+i)%MAX_P]
#define	P_Unloader_Z_Minus_IL_Offset(i)	pshm->P[(19699+i)%MAX_P]
#define	P_IL_In_Offset(i)	pshm->P[(19702+i)%MAX_P]
#define	P_X_PLC_InterLock	pshm->P[19727]
#define	P_IL_Home_Chk	pshm->P[19728]
#define	P_IL_Home_Chk_Motor_Num(i)	pshm->P[(19729+i)%MAX_P]
#define	P_IL_Home_Chk_Motor_Update	pshm->P[19749]
#define	P_IL_Inside_Home_Chk_Complete	pshm->P[19750]
#define	P_IL_Outside_Home_Chk_Complete	pshm->P[19751]
#define	P_IL_Motor_Home_Chk_RTN	pshm->P[19752]
#define	P_IL_Function_Cnt	pshm->P[19753]
#define	P_IL_Function_Motor_Num	pshm->P[19754]
#define	P_Jog_Page_Flag	pshm->P[19755]
#define	P_Anode_1st_TR_Belt_Down_Flag	pshm->P[19756]
#define	P_Anode_1st_TR_Belt_Pick_Up_Flag	pshm->P[19757]
#define	P_Anode_1st_TR_Align_Down_Flag	pshm->P[19758]
#define	P_Anode_2nd_TR_Align_Pick_Up_Flag	pshm->P[19759]
#define	P_Anode_2nd_TR_Stack_Down_Flag	pshm->P[19760]
#define	P_Anode_NG_TR_Align_Pick_Up_Flag	pshm->P[19761]
#define	P_Anode_NG_TR_NG_Place_Down_Flag	pshm->P[19762]
#define	P_Anode_2nd_TR_Align_Down_Flag	pshm->P[19763]
#define	P_Anode_1st_TR_Align_Pick_Up_Flag	pshm->P[19764]
#define	P_Anode_1st_TR_Belt_Down_State_Machine	pshm->P[19765]
#define	P_Anode_1st_TR_Belt_Down_Status	pshm->P[19766]
#define	P_Anode_1st_TR_Belt_Pick_Up_State_Machine	pshm->P[19767]
#define	P_Anode_1st_TR_Belt_Pick_Up_Status	pshm->P[19768]
#define	P_Anode_1st_TR_Align_Down_State_Machine	pshm->P[19769]
#define	P_Anode_1st_TR_Align_Down_Status	pshm->P[19770]
#define	P_Anode_2nd_TR_Align_Pick_Up_State_Machine	pshm->P[19771]
#define	P_Anode_2nd_TR_Align_Pick_Up_Status	pshm->P[19772]
#define	P_Anode_2nd_TR_Stack_Down_State_Machine	pshm->P[19773]
#define	P_Anode_2nd_TR_Stack_Down_Status	pshm->P[19774]
#define	P_Anode_NG_TR_Align_Pick_Up_State_Machine	pshm->P[19775]
#define	P_Anode_NG_TR_Align_Pick_Up_Status	pshm->P[19776]
#define	P_Anode_NG_TR_NG_Place_Down_State_Machine	pshm->P[19777]
#define	P_Anode_NG_TR_NG_Place_Down_Status	pshm->P[19778]
#define	P_Anode_2nd_TR_Align_Down_State_Machine	pshm->P[19779]
#define	P_Anode_2nd_TR_Align_Down_Status	pshm->P[19780]
#define	P_Anode_1st_TR_Align_Pick_Up_State_Machine	pshm->P[19781]
#define	P_Anode_1st_TR_Align_Pick_Up_Status	pshm->P[19782]
#define	P_Cathode_1st_TR_Belt_Down_Flag	pshm->P[19783]
#define	P_Cathode_1st_TR_Belt_Pick_Up_Flag	pshm->P[19784]
#define	P_Cathode_1st_TR_Align_Down_Flag	pshm->P[19785]
#define	P_Cathode_2nd_TR_Align_Pick_Up_Flag	pshm->P[19786]
#define	P_Cathode_2nd_TR_Stack_Down_Flag	pshm->P[19787]
#define	P_Cathode_NG_TR_Align_Pick_Up_Flag	pshm->P[19788]
#define	P_Cathode_NG_TR_NG_Place_Down_Flag	pshm->P[19789]
#define	P_Cathode_2nd_TR_Align_Down_Flag	pshm->P[19790]
#define	P_Cathode_1st_TR_Align_Pick_Up_Flag	pshm->P[19791]
#define	P_Cathode_1st_TR_Belt_Down_State_Machine	pshm->P[19792]
#define	P_Cathode_1st_TR_Belt_Down_Status	pshm->P[19793]
#define	P_Cathode_1st_TR_Belt_Pick_Up_State_Machine	pshm->P[19794]
#define	P_Cathode_1st_TR_Belt_Pick_Up_Status	pshm->P[19795]
#define	P_Cathode_1st_TR_Align_Down_State_Machine	pshm->P[19796]
#define	P_Cathode_1st_TR_Align_Down_Status	pshm->P[19797]
#define	P_Cathode_2nd_TR_Align_Pick_Up_State_Machine	pshm->P[19798]
#define	P_Cathode_2nd_TR_Align_Pick_Up_Status	pshm->P[19799]
#define	P_Cathode_2nd_TR_Stack_Down_State_Machine	pshm->P[19800]
#define	P_Cathode_2nd_TR_Stack_Down_Status	pshm->P[19801]
#define	P_Cathode_NG_TR_Align_Pick_Up_State_Machine	pshm->P[19802]
#define	P_Cathode_NG_TR_Align_Pick_Up_Status	pshm->P[19803]
#define	P_Cathode_NG_TR_NG_Place_Down_State_Machine	pshm->P[19804]
#define	P_Cathode_NG_TR_NG_Place_Down_Status	pshm->P[19805]
#define	P_Cathode_2nd_TR_Align_Down_State_Machine	pshm->P[19806]
#define	P_Cathode_2nd_TR_Align_Down_Status	pshm->P[19807]
#define	P_Cathode_1st_TR_Align_Pick_Up_State_Machine	pshm->P[19808]
#define	P_Cathode_1st_TR_Align_Pick_Up_Status	pshm->P[19809]
#define	P_Old_Anode_Belt_ASCII	pshm->P[19810]
#define	P_Old_Cathode_Belt_ASCII	pshm->P[19811]
#define	P_Anode_Belt_ASCII	pshm->P[19812]
#define	P_Cathode_Belt_ASCII	pshm->P[19813]
#define	P_Check_Vac_Time	pshm->P[19814]
#define	P_Send_Anode_NG_Code_To_PLC	pshm->P[19815]
#define	P_Receive_Anode_NG_Code_From_PLC	pshm->P[19816]
#define	P_Send_Cathode_NG_Code_To_PLC	pshm->P[19817]
#define	P_Receive_Cathode_NG_Code_From_PLC	pshm->P[19818]
#define	P_Current_Cell_Memory_Anode_1P	pshm->P[19819]
#define	P_Current_Cell_Memory_Anode_AT	pshm->P[19820]
#define	P_Current_Cell_Memory_Anode_2P	pshm->P[19821]
#define	P_Current_Cell_Memory_Cathode_1P	pshm->P[19822]
#define	P_Current_Cell_Memory_Cathode_AT	pshm->P[19823]
#define	P_Current_Cell_Memory_Cathode_2P	pshm->P[19824]
#define	P_Current_Cell_Memory_Stack_Table	pshm->P[19825]
#define	P_Current_Cell_Memory_Cathode_NG_TR	pshm->P[19826]
#define	P_Current_Cell_Memory_Anode_NG_TR	pshm->P[19827]
#define	P_BTN_Anode_1st_TR_Buffer_Clear	pshm->P[19828]
#define	P_BTN_Anode_2nd_TR_Buffer_Clear	pshm->P[19829]
#define	P_BTN_Anode_Align_Buffer_Clear	pshm->P[19830]
#define	P_BTN_Anode_NG_TR_Buffer_Clear	pshm->P[19831]
#define	P_BTN_Cathode_1st_TR_Buffer_Clear	pshm->P[19832]
#define	P_BTN_Cathode_2nd_TR_Buffer_Clear	pshm->P[19833]
#define	P_BTN_Cathode_Align_Buffer_Clear	pshm->P[19834]
#define	P_BTN_Cathode_NG_TR_Buffer_Clear	pshm->P[19835]
#define	P_Old_BTN_Anode_1st_TR_Buffer_Clear	pshm->P[19836]
#define	P_Old_BTN_Anode_2nd_TR_Buffer_Clear	pshm->P[19837]
#define	P_Old_BTN_Anode_Align_Buffer_Clear	pshm->P[19838]
#define	P_Old_BTN_Anode_NG_TR_Buffer_Clear	pshm->P[19839]
#define	P_Old_BTN_Cathode_1st_TR_Buffer_Clear	pshm->P[19840]
#define	P_Old_BTN_Cathode_2nd_TR_Buffer_Clear	pshm->P[19841]
#define	P_Old_BTN_Cathode_Align_Buffer_Clear	pshm->P[19842]
#define	P_Old_BTN_Cathode_NG_TR_Buffer_Clear	pshm->P[19843]
#define	P_Send_Anode_NG_Code_Flag	pshm->P[19844]
#define	P_Send_Cathode_NG_Code_Flag	pshm->P[19845]
#define	P_Anode_Vision_NG_To_PLC_Flag	pshm->P[19846]
#define	P_Cathode_Vision_NG_To_PLC_Flag	pshm->P[19847]
#define	P_Status_Clear_Sheet_Maint_Check	pshm->P[19848]
#define	P_Single_Run_Start_Flag	pshm->P[19849]
#define	P_Single_Run_Control_State_Machine	pshm->P[19850]
#define	P_Single_Run_Control_Status	pshm->P[19851]
#define	P_Single_Run_Execute_Bit	pshm->P[19852]
#define	P_User_Dry_Run_Mode	pshm->P[19853]
#define	P_Single_Run_State_Machine	pshm->P[19854]
#define	P_Single_Run_Status	pshm->P[19855]
#define	P_Single_Run_Unit	pshm->P[19856]
#define	P_Single_Run_Evade_Pos_RTN	pshm->P[19857]
#define	P_Single_Run_Evade_Pos_Check_RTN	pshm->P[19858]
#define	P_Single_Run_Pos_Rtn1	pshm->P[19859]
#define	P_Single_Run_Pos_Rtn2	pshm->P[19860]
#define	P_Single_Run_Motion_Ready_RTN	pshm->P[19861]
#define	P_Single_Run_Execution_Interlock_RTN	pshm->P[19862]
#define	P_Single_Run_Coord_Activate_RTN	pshm->P[19863]
#define	P_Single_Run_Coord_Activate_Check_RTN	pshm->P[19864]
#define	P_Single_Run_Select_Run_Mode_RTN	pshm->P[19865]
#define	P_Single_Run_Execution_Run_RTN	pshm->P[19866]
#define	P_Single_Run_Motion_Ready_State_Machine	pshm->P[19867]
#define	P_Coord_1	pshm->P[19868]
#define	P_Coord_2	pshm->P[19869]
#define	P_Coord_3	pshm->P[19870]
#define	P_Coord_4	pshm->P[19871]
#define	P_Final_Roll_Z_Motion_Flag	pshm->P[19872]
#define	P_Final_Roll_Z_Motion_State_Machine	pshm->P[19873]
#define	P_Main_Z_Motion_Flag	pshm->P[19874]
#define	P_Main_Z_Motion_State_Machine	pshm->P[19875]
#define	P_Single_Run_Mode_Flag	pshm->P[19876]
#define	P_Cathode_AT_Motion_Flag	pshm->P[19877]
#define	P_Cathode_Align_Motion_State_Machine	pshm->P[19878]
#define	P_Anode_AT_Motion_Flag	pshm->P[19879]
#define	P_Anode_Align_Motion_State_Machine	pshm->P[19880]
#define	P_Sheet_Paper_Motion_Flag	pshm->P[19881]
#define	P_Sheet_Paper_Motion_State_Machine	pshm->P[19882]
#define	P_Cathode_NG_PNP_T_Motion_Flag	pshm->P[19883]
#define	P_Cathode_NG_PNP_T_Motion_State_Machine	pshm->P[19884]
#define	P_Cathode_NG_PNP_Z_Motion_Flag	pshm->P[19885]
#define	P_Cathode_NG_PNP_Z_Motion_State_Machine	pshm->P[19886]
#define	P_Anode_NG_PNP_T_Motion_Flag	pshm->P[19887]
#define	P_Anode_NG_PNP_T_Motion_State_Machine	pshm->P[19888]
#define	P_Anode_NG_PNP_Z_Motion_Flag	pshm->P[19889]
#define	P_Anode_NG_PNP_Z_Motion_State_Machine	pshm->P[19890]
#define	P_1st_UND_X_Motion_Flag	pshm->P[19891]
#define	P_1st_UND_X_Motion_State_Machine	pshm->P[19892]
#define	P_1st_UND_Z_Motion_Flag	pshm->P[19893]
#define	P_1st_UND_Z_Motion_State_Machine	pshm->P[19894]
#define	P_1st_UND_T_Motion_Flag	pshm->P[19895]
#define	P_1st_UND_T_Motion_State_Machine	pshm->P[19896]
#define	P_Cathode_Run_Command_Flag	pshm->P[19897]
#define	P_Anode_Run_Command_Flag	pshm->P[19898]
#define	P_NG_PNP_Uint_Motion_Flag	pshm->P[19899]
#define	P_NG_PNP_Uint_State_Machine	pshm->P[19900]
#define	P_NG_PNP_Motion_Cnt	pshm->P[19901]
#define	P_NG_PNP_Motion_arr(i)	pshm->P[(19902+i)%MAX_P]
#define	P_Single_Run_Timer	pshm->P[19912]
#define	P_Single_Run_Align_Timer	pshm->P[19913]
#define	P_Single_Run_Align_Timer2	pshm->P[19914]
#define	P_Single_Run_Finall_Roll_Z_Timer	pshm->P[19915]
#define	P_Single_RuN_MAIN_Z_Timer	pshm->P[19916]
#define	P_Single_Run_Sheet_Paper_Timer	pshm->P[19917]
#define	P_Single_Run_Debug_SM	pshm->P[19918]
#define	P_Error_Monitoring_Count_1	pshm->P[19919]
#define	P_Error_Monitoring_Count_2	pshm->P[19920]
#define	P_Error_Monitoring_Count_3	pshm->P[19921]
#define	P_Error_Monitoring_Count_4	pshm->P[19922]
#define	P_Error_Monitoring_Count_5	pshm->P[19923]
#define	P_Old_Single_Run_Mode_Flag	pshm->P[19924]
#define	P_Old_Current_Mode	pshm->P[19925]
#define	P_Single_Run_Timebase_Off_RTN	pshm->P[19926]
#define	P_Single_Run_Stop_State_Machine	pshm->P[19927]
#define	P_Single_Run_Stop_Status	pshm->P[19928]
#define	P_Single_Run_Stop_Timer	pshm->P[19929]
#define	P_Single_Run_Stop_Init_RTN	pshm->P[19930]
#define	P_Single_Run_Stop_Btn_Chk	pshm->P[19931]
#define	P_Single_Run_Stop_Command	pshm->P[19932]
#define	P_Motor_Ready_Poa_Inpos_200um	pshm->P[19933]
#define	P_Ecat_Parameter_Write_Flag	pshm->P[19934]
#define	P_Ecat_Parameter_Read_Flag	pshm->P[19935]
#define	P_Ecat_Each_Parameter_Write_Flag	pshm->P[19936]
#define	P_Ecat_Slave_Idx	pshm->P[19937]
#define	P_Ec_Num	pshm->P[19938]
#define	P_Ecat_Read_Motor_Num	pshm->P[19939]
#define	P_Ecat_Write_Motor_Num	pshm->P[19940]
#define	P_Ecat_Parameter_Write_State_Machine	pshm->P[19941]
#define	P_Ecat_Parameter_Read_State_Machine	pshm->P[19942]
#define	P_Ecat_Each_Parameter_Write_State_Machine	pshm->P[19943]
#define	P_Ecat_Read_MNTR(i)	pshm->P[(19944+i)%MAX_P]
#define	P_Ecat_Write_MNTR(i)	pshm->P[(19972+i)%MAX_P]
#define	P_Ecat_Save_MNTR(i)	pshm->P[(20000+i)%MAX_P]
#define	P_Ecat_Error_MNTR(i)	pshm->P[(20016+i)%MAX_P]
#define	P_Ecat_Read_Error_MNTR(i)	pshm->P[(20032+i)%MAX_P]
#define	P_Ecat_Each_Write_Error_MNTR(i)	pshm->P[(20048+i)%MAX_P]
#define	P_Ecat_Write_Status	pshm->P[20064]
#define	P_Ecat_Read_Status	pshm->P[20065]
#define	P_Ecat_Each_Write_Status	pshm->P[20066]
#define	P_Pn000(i)	pshm->P[(20067+i)%MAX_P]
#define	P_Pn001(i)	pshm->P[(20087+i)%MAX_P]
#define	P_Pn00B(i)	pshm->P[(20107+i)%MAX_P]
#define	P_Pn100(i)	pshm->P[(20127+i)%MAX_P]
#define	P_Pn101(i)	pshm->P[(20147+i)%MAX_P]
#define	P_Pn102(i)	pshm->P[(20167+i)%MAX_P]
#define	P_Pn103(i)	pshm->P[(20187+i)%MAX_P]
#define	P_Pn123(i)	pshm->P[(20207+i)%MAX_P]
#define	P_Pn140(i)	pshm->P[(20227+i)%MAX_P]
#define	P_Pn141(i)	pshm->P[(20247+i)%MAX_P]
#define	P_Pn145(i)	pshm->P[(20267+i)%MAX_P]
#define	P_Pn146(i)	pshm->P[(20287+i)%MAX_P]
#define	P_Pn160(i)	pshm->P[(20307+i)%MAX_P]
#define	P_Pn161(i)	pshm->P[(20327+i)%MAX_P]
#define	P_Pn163(i)	pshm->P[(20347+i)%MAX_P]
#define	P_Pn170(i)	pshm->P[(20367+i)%MAX_P]
#define	P_Pn401(i)	pshm->P[(20387+i)%MAX_P]
#define	P_Pn408(i)	pshm->P[(20407+i)%MAX_P]
#define	P_Pn409(i)	pshm->P[(20427+i)%MAX_P]
#define	P_Pn40A(i)	pshm->P[(20447+i)%MAX_P]
#define	P_Pn40C(i)	pshm->P[(20467+i)%MAX_P]
#define	P_Pn40D(i)	pshm->P[(20487+i)%MAX_P]
#define	P_Pn416(i)	pshm->P[(20507+i)%MAX_P]
#define	P_Pn417(i)	pshm->P[(20527+i)%MAX_P]
#define	P_Pn511(i)	pshm->P[(20547+i)%MAX_P]
#define	P_Pn520(i)	pshm->P[(20567+i)%MAX_P]
#define	P_PnB02_Numerator(i)	pshm->P[(20587+i)%MAX_P]
#define	P_PnB02_Denominator(i)	pshm->P[(20607+i)%MAX_P]
#define	P_Align_Plus_Blow_Test	pshm->P[20627]
#define	P_System_Setting_Flag	pshm->P[20628]
#define	P_Ecat_Setting_Flag	pshm->P[20629]
#define	P_Ecat_Activation_State_Machine	pshm->P[20630]
#define	P_PLC31_Ecat_Retry_Cnt	pshm->P[20631]
#define	P_Ecat_Connect_Result	pshm->P[20632]
#define	P_Ecat_Slave_Error	pshm->P[20633]
#define	P_PWM_AbsPhasePosOffset_Change_State_Machine	pshm->P[20634]
#define	P_AbsPhasePosOffset_Change_Complete	pshm->P[20635]
#define	P_PWM_AbsPhasing_Fail	pshm->P[20636]
#define	P_PWM_AbsPhasing_Complete	pshm->P[20637]
#define	P_Whole_Stacking_Tack_Time	pshm->P[20638]
#define	P_Whole_Stacking_Tack_Time_Check	pshm->P[20639]
#define	P_Whole_Stacking_Tack_Timer_Check_Flag	pshm->P[20640]
#define	P_Whole_Stacking_Timer_Shift_Status_Machine	pshm->P[20641]
#define	P_Whole_Stacking_TackTime_Array0	pshm->P[20642]
#define	P_Whole_Stacking_TackTime_Array1	pshm->P[20643]
#define	P_Whole_Stacking_TackTime_Array2	pshm->P[20644]
#define	P_Whole_Stacking_TackTime_Array3	pshm->P[20645]
#define	P_Whole_Stacking_TackTime_Array4	pshm->P[20646]
#define	P_Whole_Stacking_TackTime_Array5	pshm->P[20647]
#define	P_Whole_Stacking_TackTime_Array6	pshm->P[20648]
#define	P_Whole_Stacking_TackTime_Array7	pshm->P[20649]
#define	P_Whole_Stacking_TackTime_Array8	pshm->P[20650]
#define	P_Whole_Stacking_TackTime_Array9	pshm->P[20651]
#define	P_Whole_Stacking_TackTime_Array10	pshm->P[20652]
#define	P_First_Stacking_Start	pshm->P[20653]
#define	P_Last_Stacking_Complete	pshm->P[20654]
#define	P_Stacking_Tack_Time	pshm->P[20655]
#define	P_Stacking_Tack_Time_Check	pshm->P[20656]
#define	P_Stacking_Tack_Timer_Check_Flag	pshm->P[20657]
#define	P_Stacking_Timer_Shift_Status_Machine	pshm->P[20658]
#define	P_Cathode_to_Anode_FR_Tack_Time_Check	pshm->P[20659]
#define	P_Anode_to_Cathode_FR_Tack_Time_Check	pshm->P[20660]
#define	P_Cathode_to_Anode_FR_Tack_Time_Start	pshm->P[20661]
#define	P_Anode_to_Cathode_FR_Tack_Time_Start	pshm->P[20662]
#define	P_Cathode_to_Anode_FR_Tack_Time_Complete	pshm->P[20663]
#define	P_Anode_to_Cathode_FR_Tack_Time_Complete	pshm->P[20664]
#define	P_Cathode_to_Anode_FR_Time	pshm->P[20665]
#define	P_Anode_to_Cathode_FR_Time	pshm->P[20666]
#define	P_Cathode_to_Anode_FR_Tack_Timer_Check_Flag	pshm->P[20667]
#define	P_Anode_to_Cathode_FR_Tack_Timer_Check_Flag	pshm->P[20668]
#define	P_Anode_Align_Table_Time	pshm->P[20669]
#define	P_Anode_Align_Table_Tack_Time_Check	pshm->P[20670]
#define	P_Anode_Align_Table_Tack_Timer_Check_Flag	pshm->P[20671]
#define	P_Anode_Align_Table_Timer_Shift_Status_Machine	pshm->P[20672]
#define	P_Anode_Align_Tack_Time_Start	pshm->P[20673]
#define	P_Anode_Align_Tack_Time_Complete	pshm->P[20674]
#define	P_Cathode_Align_Table_Time	pshm->P[20675]
#define	P_Cathode_Align_Table_Tack_Time_Check	pshm->P[20676]
#define	P_Cathode_Align_Table_Tack_Timer_Check_Flag	pshm->P[20677]
#define	P_Cathode_Align_Table_Timer_Shift_Status_Machine	pshm->P[20678]
#define	P_Cathode_Align_Tack_Time_Start	pshm->P[20679]
#define	P_Cathode_Align_Tack_Time_Complete	pshm->P[20680]
#define	P_Anode_1th_Tack_Time_Start	pshm->P[20681]
#define	P_Anode_1th_Tack_Time_Complete	pshm->P[20682]
#define	P_Anode_1th_Time	pshm->P[20683]
#define	P_Anode_1th_Tack_Time_Check	pshm->P[20684]
#define	P_Anode_1th_Tack_Timer_Check_Flag	pshm->P[20685]
#define	P_Anode_1th_Timer_Shift_Status_Machine	pshm->P[20686]
#define	P_Cathode_1th_Tack_Time_Start	pshm->P[20687]
#define	P_Cathode_1th_Tack_Time_Complete	pshm->P[20688]
#define	P_Cathode_1th_Time	pshm->P[20689]
#define	P_Cathode_1th_Tack_Time_Check	pshm->P[20690]
#define	P_Cathode_1th_Tack_Timer_Check_Flag	pshm->P[20691]
#define	P_Cathode_1th_Timer_Shift_Status_Machine	pshm->P[20692]
#define	P_Anode_2th_Tack_Time_Start	pshm->P[20693]
#define	P_Anode_2th_Tack_Time_Complete	pshm->P[20694]
#define	P_Anode_2th_Time	pshm->P[20695]
#define	P_Anode_2th_Tack_Time_Check	pshm->P[20696]
#define	P_Anode_2th_Tack_Timer_Check_Flag	pshm->P[20697]
#define	P_Anode_2th_Timer_Shift_Status_Machine	pshm->P[20698]
#define	P_Cathode_2th_Tack_Time_Start	pshm->P[20699]
#define	P_Cathode_2th_Tack_Time_Complete	pshm->P[20700]
#define	P_Cathode_2th_Time	pshm->P[20701]
#define	P_Cathode_2th_Tack_Time_Check	pshm->P[20702]
#define	P_Cathode_2th_Tack_Timer_Check_Flag	pshm->P[20703]
#define	P_Cathode_2th_Timer_Shift_Status_Machine	pshm->P[20704]
#define	P_Anode_1th_NG_Tack_Time_Start	pshm->P[20705]
#define	P_Anode_1th_NG_Tack_Time_Complete	pshm->P[20706]
#define	P_Anode_1th_NG_Time	pshm->P[20707]
#define	P_Anode_1th_NG_Tack_Time_Check	pshm->P[20708]
#define	P_Anode_1th_NG_Tack_Timer_Check_Flag	pshm->P[20709]
#define	P_Anode_1th_NG_Timer_Shift_Status_Machine	pshm->P[20710]
#define	P_Cathode_1th_NG_Tack_Time_Start	pshm->P[20711]
#define	P_Cathode_1th_NG_Tack_Time_Complete	pshm->P[20712]
#define	P_Cathode_1th_NG_Time	pshm->P[20713]
#define	P_Cathode_1th_NG_Tack_Time_Check	pshm->P[20714]
#define	P_Cathode_1th_NG_Tack_Timer_Check_Flag	pshm->P[20715]
#define	P_Cathode_1th_NG_Timer_Shift_Status_Machine	pshm->P[20716]
#define	P_Anode_Clamp_Tack_Time_Start	pshm->P[20717]
#define	P_Anode_Clamp_Tack_Time_Complete	pshm->P[20718]
#define	P_Anode_Clamp_Time	pshm->P[20719]
#define	P_Anode_Clamp_Tack_Time_Check	pshm->P[20720]
#define	P_Anode_Clamp_Tack_Timer_Check_Flag	pshm->P[20721]
#define	P_Anode_Clamp_Timer_Shift_Status_Machine	pshm->P[20722]
#define	P_Cathode_Clamp_Tack_Time_Start	pshm->P[20723]
#define	P_Cathode_Clamp_Tack_Time_Complete	pshm->P[20724]
#define	P_Cathode_Clamp_Time	pshm->P[20725]
#define	P_Cathode_Clamp_Tack_Time_Check	pshm->P[20726]
#define	P_Cathode_Clamp_Tack_Timer_Check_Flag	pshm->P[20727]
#define	P_Cathode_Clamp_Timer_Shift_Status_Machine	pshm->P[20728]
#define	P_Final_Roll_X_Timer_Shift_Status_Machine	pshm->P[20729]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array0	pshm->P[20730]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array1	pshm->P[20731]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array2	pshm->P[20732]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array3	pshm->P[20733]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array4	pshm->P[20734]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array5	pshm->P[20735]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array6	pshm->P[20736]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array7	pshm->P[20737]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array8	pshm->P[20738]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array9	pshm->P[20739]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array10	pshm->P[20740]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array0	pshm->P[20741]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array1	pshm->P[20742]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array2	pshm->P[20743]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array3	pshm->P[20744]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array4	pshm->P[20745]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array5	pshm->P[20746]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array6	pshm->P[20747]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array7	pshm->P[20748]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array8	pshm->P[20749]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array9	pshm->P[20750]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array10	pshm->P[20751]
#define	P_Pneumatic_Pressure_Unit_Tack_Time_Chk_Timer(i)	pshm->P[(20752+i)%MAX_P]
#define	P_Pneumatic_Pressure_Unit_Tack_Time(i)	pshm->P[(20779+i)%MAX_P]
#define	P_MCC_Anode_Align_NG_Count	pshm->P[20806]
#define	P_MCC_Cathode_Align_NG_Count	pshm->P[20807]
#define	P_MCC_Anode_Retry_NG_Count	pshm->P[20808]
#define	P_MCC_Cathode_Retry_NG_Count	pshm->P[20809]
#define	P_Discharge_Tact_Time_Arr(i)	pshm->P[(20810+i)%MAX_P]
#define	P_Discharge_Hold_Timer	pshm->P[20822]
#define	P_Discharge_Hold_Time	pshm->P[20823]
#define	P_AN_1st_Z_Zero_Angle	pshm->P[20824]
#define	P_AN_1st_Z_Zero_Length	pshm->P[20825]
#define	P_Anode_1st_PNP_Z_Crank_Zero_Pos	pshm->P[20826]
#define	P_Anode_1st_PNP_Z_Crank_real_Move_Pos	pshm->P[20827]
#define	P_Anode_1st_PNP_Z_Crank_radian	pshm->P[20828]
#define	P_Anode_1st_PNP_Z_Acos_denominator	pshm->P[20829]
#define	P_Anode_1st_PNP_Z_Acos_numerator	pshm->P[20830]
#define	P_Anode_1st_PNP_Z_Crank_Angle	pshm->P[20831]
#define	P_Anode_1st_PNP_Z_Real_Move_Pos	pshm->P[20832]
#define	P_Anode_1st_Fwd_Bwd_Rise	pshm->P[20833]
#define	P_CA_1st_Z_Zero_Angle	pshm->P[20834]
#define	P_CA_1st_Z_Zero_Length	pshm->P[20835]
#define	P_Cathode_1st_PNP_Z_Crank_Zero_Pos	pshm->P[20836]
#define	P_Cathode_1st_PNP_Z_Crank_real_Move_Pos	pshm->P[20837]
#define	P_Cathode_1st_PNP_Z_Crank_radian	pshm->P[20838]
#define	P_Cathode_1st_PNP_Z_Acos_denominator	pshm->P[20839]
#define	P_Cathode_1st_PNP_Z_Acos_numerator	pshm->P[20840]
#define	P_Cathode_1st_PNP_Z_Crank_Angle	pshm->P[20841]
#define	P_Cathode_1st_PNP_Z_Real_Move_Pos	pshm->P[20842]
#define	P_Cathode_1st_Fwd_Bwd_Rise	pshm->P[20843]
#define	P_AN_2nd_Z_Zero_Angle	pshm->P[20844]
#define	P_AN_2nd_Z_Zero_Length	pshm->P[20845]
#define	P_Anode_2nd_PNP_Z_Crank_Zero_Pos	pshm->P[20846]
#define	P_Anode_2nd_PNP_Z_Crank_real_Move_Pos	pshm->P[20847]
#define	P_Anode_2nd_PNP_Z_Crank_radian	pshm->P[20848]
#define	P_Anode_2nd_PNP_Z_Acos_denominator	pshm->P[20849]
#define	P_Anode_2nd_PNP_Z_Acos_numerator	pshm->P[20850]
#define	P_Anode_2nd_PNP_Z_Crank_Angle	pshm->P[20851]
#define	P_Anode_2nd_PNP_Z_Real_Move_Pos	pshm->P[20852]
#define	P_Anode_2nd_Fwd_Bwd_Rise	pshm->P[20853]
#define	P_CA_2nd_Z_Zero_Angle	pshm->P[20854]
#define	P_CA_2nd_Z_Zero_Length	pshm->P[20855]
#define	P_Cathode_2nd_PNP_Z_Crank_Zero_Pos	pshm->P[20856]
#define	P_Cathode_2nd_PNP_Z_Crank_real_Move_Pos	pshm->P[20857]
#define	P_Cathode_2nd_PNP_Z_Crank_radian	pshm->P[20858]
#define	P_Cathode_2nd_PNP_Z_Acos_denominator	pshm->P[20859]
#define	P_Cathode_2nd_PNP_Z_Acos_numerator	pshm->P[20860]
#define	P_Cathode_2nd_PNP_Z_Crank_Angle	pshm->P[20861]
#define	P_Cathode_2nd_PNP_Z_Real_Move_Pos	pshm->P[20862]
#define	P_Cathode_2nd_Fwd_Bwd_Rise	pshm->P[20863]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Ready_Up	pshm->P[20864]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Belt_Up	pshm->P[20865]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Belt_Down	pshm->P[20866]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Align_Up	pshm->P[20867]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Align_Down	pshm->P[20868]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Ready_Up	pshm->P[20869]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Up	pshm->P[20870]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Down	pshm->P[20871]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Align_Up	pshm->P[20872]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Align_Down	pshm->P[20873]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Align_Up	pshm->P[20874]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Align_Down	pshm->P[20875]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Up	pshm->P[20876]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Down	pshm->P[20877]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Ready_Up	pshm->P[20878]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Up	pshm->P[20879]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Down	pshm->P[20880]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Up	pshm->P[20881]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Down	pshm->P[20882]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Ready_Up	pshm->P[20883]
#define	P_PLC19_All_Home_Status	pshm->P[20884]
#define	P_PLC19_All_Home_Module_Status	pshm->P[20885]
#define	P_PLC19_All_Home_State_Machine	pshm->P[20886]
#define	P_PLC19_All_Home_Seq_Index	pshm->P[20887]
#define	P_PLC19_All_Home_Self_Index	pshm->P[20888]
#define	P_PLC19_All_Home_Set_Mode_Return	pshm->P[20889]
#define	P_PLC19_All_Home_Timer	pshm->P[20890]
#define	P_PLC19_All_Home_Tact_Time_Array(i)	pshm->P[(20891+i)%MAX_P]
#define	P_PLC19_All_Home_Tact_Time	pshm->P[20911]
#define	P_All_Home_Module_Error	pshm->P[20912]
#define	P_Act_ALL_Home_Time_Out_Time	pshm->P[20913]
#define	P_Act_ALL_Home_Time_Out(i)	pshm->P[(20914+i)%MAX_P]
#define	P_Act_Hold_Complete_Bit(i)	pshm->P[(20954+i)%MAX_P]
#define	P_Module_Act_Hold_Command_Array(i)	pshm->P[(20989+i)%MAX_P]
#define	P_OLD_Module_Act_Hold_Command_Array(i)	pshm->P[(21024+i)%MAX_P]
#define	P_Module_Act_Hold_State_Machine_Array(i)	pshm->P[(21059+i)%MAX_P]
#define	P_Act_Hold_Old_Time(i)	pshm->P[(21094+i)%MAX_P]
#define	P_Act_Hold_Time_Out_Time	pshm->P[21129]
#define	P_Act_Hold_Time_Out(i)	pshm->P[(21130+i)%MAX_P]
#define	P_First_PNP_T_Wait_Status	pshm->P[21165]
#define	P_First_PNP_Z_Wait_Status	pshm->P[21166]
#define	P_First_PNP_Picker_T_Turn_Status	pshm->P[21167]
#define	P_First_PNP_T_Wait_To_Belt_Status	pshm->P[21168]
#define	P_First_PNP_Z_Wait_To_Belt_Status	pshm->P[21169]
#define	P_First_PNP_T_Align_To_Belt_Status	pshm->P[21170]
#define	P_First_PNP_Z_Align_To_Belt_Status	pshm->P[21171]
#define	P_First_PNP_Z_Belt_Down_Status	pshm->P[21172]
#define	P_First_PNP_Z_Belt_Up_Status	pshm->P[21173]
#define	P_First_PNP_T_Wait_To_Align_Status	pshm->P[21174]
#define	P_First_PNP_Z_Wait_To_Align_Status	pshm->P[21175]
#define	P_First_PNP_T_Belt_To_Align_Status	pshm->P[21176]
#define	P_First_PNP_Z_Belt_To_Align_Status	pshm->P[21177]
#define	P_First_PNP_Z_Align_Down_Status	pshm->P[21178]
#define	P_First_PNP_Z_Align_Up_Status	pshm->P[21179]
#define	P_First_PNP_Vac_On_Status	pshm->P[21180]
#define	P_First_PNP_Blow_On_Status	pshm->P[21181]
#define	P_Second_PNP_T_Align_To_Stack_Status	pshm->P[21182]
#define	P_Second_PNP_Z_Align_To_Stack_Status	pshm->P[21183]
#define	P_Second_PNP_T_Stack_To_Align_Status	pshm->P[21184]
#define	P_Second_PNP_Z_Stack_To_Align_Status	pshm->P[21185]
#define	P_Second_PNP_Z_Align_Down_Status	pshm->P[21186]
#define	P_Second_PNP_Z_Align_Up_Status	pshm->P[21187]
#define	P_Second_PNP_Vac_On_Status	pshm->P[21188]
#define	P_Second_PNP_Blow_On_Status	pshm->P[21189]
#define	P_NG_PNP_NG_Bos_Status	pshm->P[21190]
#define	P_NG_PNP_Align_Status	pshm->P[21191]
#define	P_NG_PNP_Align_Down_Status	pshm->P[21192]
#define	P_NG_PNP_Align_Up_Status	pshm->P[21193]
#define	P_NG_PNP_Vac_On_Status	pshm->P[21194]
#define	P_NG_PNP_Blow_On_Status	pshm->P[21195]
#define	P_Hold_1st_PNP_Position	pshm->P[21196]
#define	P_Hold_Module_Error	pshm->P[21197]
#define	P_Act_Execute_Complete_Bit(i)	pshm->P[(21198+i)%MAX_P]
#define	P_Module_Act_Execute_Command_Array(i)	pshm->P[(21210+i)%MAX_P]
#define	P_OLD_Module_Act_Execute_Command_Array(i)	pshm->P[(21222+i)%MAX_P]
#define	P_Module_Act_Execute_State_Machine_Array(i)	pshm->P[(21234+i)%MAX_P]
#define	P_Act_Execute_Old_Time(i)	pshm->P[(21246+i)%MAX_P]
#define	P_Act_Execute_Time_Out_Time	pshm->P[21258]
#define	P_Act_Execute_Time_Out(i)	pshm->P[(21259+i)%MAX_P]
#define	P_Execute_Module_Error	pshm->P[21271]
#define	P_Execute_First_Sepa_Total_Tact_Time	pshm->P[21272]
#define	P_Current_JR_Thickness_mm	pshm->P[21273]
#define	P_Current_Jelly_Roll_Thinckness_mm_Send_Enable_Flag	pshm->P[21274]
#define	P_Stack_Table_NG_Flag	pshm->P[21275]
#define	P_Suspend_Discharge_Cell_Out_Restart	pshm->P[21276]
#define	P_Jelly_Roll_OK_Count	pshm->P[21277]
#define	P_Jelly_Roll_NG_Count	pshm->P[21278]
#define	P_Jelly_Roll_Total_Count	pshm->P[21279]
#define	P_Jelly_Roll_Prod_Count	pshm->P[21280]
#define	P_Jelly_Roll_Recipe_Count	pshm->P[21281]
#define	P_Current_Cell_Memory_Jelly_Roll	pshm->P[21282]
#define	P_VISION_PLC10_Anode_Align_Start	pshm->P[21283]
#define	P_VISION_PLC10_Cathode_Align_Start	pshm->P[21284]
#define	P_Stack_Table_NG_Count	pshm->P[21285]
#define	P_Stack_PMAC_NG_Code	pshm->P[21286]
#define	P_Stack_Vision_NG_Code_IN_Timer	pshm->P[21287]
#define	P_1st_Discharge_State	pshm->P[21288]
#define	P_Prev_Sepa_Stack_Completed_Flag	pshm->P[21289]
#define	P_Discharge_Unloader_Handover_Timer	pshm->P[21290]
#define	P_Discharge_Unloader_Handover_Time	pshm->P[21291]
#define	P_Buffer_Mode_Module_Status_Sequence(i)	pshm->P[(21292+i)%MAX_P]
#define	P_EXECUTE_Status_Prod_Sequence(i)	pshm->P[(21322+i)%MAX_P]
#define	P_Execute_First_Sepa_Mode_Cmd	pshm->P[21352]
#define	P_Execute_First_Sepa_Mode_Status	pshm->P[21353]
#define	P_Execute_First_Sepa_Mode_Module_Status	pshm->P[21354]
#define	P_Execute_First_Sepa_Mode_State_Machine	pshm->P[21355]
#define	P_Execute_First_Sepa_Mode_Seq_Index	pshm->P[21356]
#define	P_Execute_First_Sepa_Mode_Self_Index	pshm->P[21357]
#define	P_Execute_First_Sepa_Mode_Debug_Edge	pshm->P[21358]
#define	P_Buffer_Seqdata_Execute_First_Sepa_Mode_Array(i)	pshm->P[(21359+i)%MAX_P]
#define	P_Execute_First_Sepa_Mode_Timer	pshm->P[21389]
#define	P_Execute_First_Sepa_Mode_Tact_Time_Array(i)	pshm->P[(21390+i)%MAX_P]
#define	P_Execute_First_Sepa_Mode_Tact_Time	pshm->P[21410]
#define	P_Execute_1st_Sepa_Status	pshm->P[21411]
#define	P_Suspend_Discharge_Cmd	pshm->P[21412]
#define	P_Suspend_Discharge_Status	pshm->P[21413]
#define	P_Suspend_Discharge_State_Machine	pshm->P[21414]
#define	P_Suspend_Discharge_Seq_Index	pshm->P[21415]
#define	P_Suspend_Discharge_Self_Index	pshm->P[21416]
#define	P_Discharge_Seq_InterLock_Delay_Time(i)	pshm->P[(21417+i)%MAX_P]
#define	P_Discharge_Seq_InterLock_Flag(i)	pshm->P[(21447+i)%MAX_P]
#define	P_Buffer_Seqdata_Discharge_Array(i)	pshm->P[(21477+i)%MAX_P]
#define	P_Suspend_Discharge_Timer	pshm->P[21507]
#define	P_Suspend_Discharge_Tact_Time_Array(i)	pshm->P[(21508+i)%MAX_P]
#define	P_Suspend_Discharge_Tact_Time	pshm->P[21528]
#define	P_Suspend_Discharge_1st_Unloader_JR_Grip	pshm->P[21529]
#define	P_Suspend_ARC_Cmd	pshm->P[21530]
#define	P_Suspend_ARC_Status	pshm->P[21531]
#define	P_Suspend_ARC_State_Machine	pshm->P[21532]
#define	P_Suspend_ARC_Seq_Index	pshm->P[21533]
#define	P_Suspend_ARC_Self_Index	pshm->P[21534]
#define	P_Suspend_ARC_Manual_Occur_Flag	pshm->P[21535]
#define	P_ARC_Seq_InterLock_Delay_Time(i)	pshm->P[(21536+i)%MAX_P]
#define	P_ARC_Seq_InterLock_Flag(i)	pshm->P[(21566+i)%MAX_P]
#define	P_Buffer_Seqdata_ARC_Array(i)	pshm->P[(21596+i)%MAX_P]
#define	P_Suspend_ARC_Timer	pshm->P[21626]
#define	P_Suspend_ARC_Tact_Time_Array(i)	pshm->P[(21627+i)%MAX_P]
#define	P_Suspend_ARC_Tact_Time	pshm->P[21647]
#define	P_Suspend_Anode_1TR_Cell_Supply_Cmd	pshm->P[21648]
#define	P_Suspend_Anode_1TR_Cell_Supply_Status	pshm->P[21649]
#define	P_Suspend_Anode_1TR_Cell_Supply_State_Machine	pshm->P[21650]
#define	P_Suspend_Anode_1TR_Cell_Supply_Seq_Index	pshm->P[21651]
#define	P_Suspend_Anode_1TR_Cell_Supply_Self_Index	pshm->P[21652]
#define	P_Suspend_Anode_1TR_Cell_Supply_Module_Status	pshm->P[21653]
#define	P_Anode_1TR_Cell_Supply_Seq_InterLock_Delay_Time(i)	pshm->P[(21654+i)%MAX_P]
#define	P_Anode_1TR_Cell_Supply_Seq_InterLock_Flag(i)	pshm->P[(21684+i)%MAX_P]
#define	P_Buffer_Seqdata_Anode_1TR_Cell_Supply_Array(i)	pshm->P[(21714+i)%MAX_P]
#define	P_Suspend_Anode_1TR_Cell_Supply_Timer	pshm->P[21744]
#define	P_Suspend_Anode_1TR_Cell_Supply_Tact_Time_Array(i)	pshm->P[(21745+i)%MAX_P]
#define	P_Suspend_Anode_1TR_Cell_Supply_Tact_Time	pshm->P[21765]
#define	P_Hold_Exist_Insp_Cmd	pshm->P[21766]
#define	P_Hold_Exist_Insp_Status	pshm->P[21767]
#define	P_Hold_Exist_Insp_Module_Status	pshm->P[21768]
#define	P_Hold_Exist_Insp_State_Machine	pshm->P[21769]
#define	P_Hold_Exist_Insp_Seq_Index	pshm->P[21770]
#define	P_Hold_Exist_Insp_Self_Index	pshm->P[21771]
#define	P_Hold_Exist_Insp_Debug_Edge	pshm->P[21772]
#define	P_Buffer_Seqdata_Hold_Exist_Insp_Array(i)	pshm->P[(21773+i)%MAX_P]
#define	P_Hold_Exist_Insp_Timer	pshm->P[21803]
#define	P_Hold_Exist_Insp_Tact_Time_Array(i)	pshm->P[(21804+i)%MAX_P]
#define	P_Hold_Exist_Insp_Tact_Time	pshm->P[21824]
#define	P_Hold_Remove_NG_PNP_Cmd	pshm->P[21825]
#define	P_Hold_Remove_NG_PNP_Status	pshm->P[21826]
#define	P_Hold_Remove_NG_PNP_Module_Status	pshm->P[21827]
#define	P_Hold_Remove_NG_PNP_State_Machine	pshm->P[21828]
#define	P_Hold_Remove_NG_PNP_Seq_Index	pshm->P[21829]
#define	P_Hold_Remove_NG_PNP_Self_Index	pshm->P[21830]
#define	P_Hold_Remove_NG_PNP_Debug_Edge	pshm->P[21831]
#define	P_Buffer_Seqdata_Hold_Remove_NG_PNP_Array(i)	pshm->P[(21832+i)%MAX_P]
#define	P_Hold_Remove_NG_PNP_Timer	pshm->P[21862]
#define	P_Hold_Remove_NG_PNP_Tact_Time_Array(i)	pshm->P[(21863+i)%MAX_P]
#define	P_Hold_Remove_NG_PNP_Tact_Time	pshm->P[21883]
#define	P_PLC01_Hold_Remove_NG_PNP_Sub_Flag	pshm->P[21884]
#define	P_PLC01_Hold_Remove_NG_PNP_Sub_State_Machine	pshm->P[21885]
#define	P_PLC01_Hold_Remove_NG_PNP_Sub_Status	pshm->P[21886]
#define	P_Hold_Remove_Align_Cmd	pshm->P[21887]
#define	P_Hold_Remove_Align_Status	pshm->P[21888]
#define	P_Hold_Remove_Align_Module_Status	pshm->P[21889]
#define	P_Hold_Remove_Align_State_Machine	pshm->P[21890]
#define	P_Hold_Remove_Align_Seq_Index	pshm->P[21891]
#define	P_Hold_Remove_Align_Self_Index	pshm->P[21892]
#define	P_Hold_Remove_Align_Debug_Edge	pshm->P[21893]
#define	P_Buffer_Seqdata_Hold_Remove_Align_Array(i)	pshm->P[(21894+i)%MAX_P]
#define	P_Hold_Remove_Align_Timer	pshm->P[21924]
#define	P_Hold_Remove_Align_Tact_Time_Array(i)	pshm->P[(21925+i)%MAX_P]
#define	P_Hold_Remove_Align_Tact_Time	pshm->P[21945]
#define	P_PLC01_Hold_Remove_Align_Sub_Flag	pshm->P[21946]
#define	P_PLC01_Hold_Remove_Align_Sub_State_Machine	pshm->P[21947]
#define	P_PLC01_Hold_Remove_Align_Sub_Status	pshm->P[21948]
#define	P_Hold_Remove_2TR_Cmd	pshm->P[21949]
#define	P_Hold_Remove_2TR_Status	pshm->P[21950]
#define	P_Hold_Remove_2TR_Module_Status	pshm->P[21951]
#define	P_Hold_Remove_2TR_State_Machine	pshm->P[21952]
#define	P_Hold_Remove_2TR_Seq_Index	pshm->P[21953]
#define	P_Hold_Remove_2TR_Self_Index	pshm->P[21954]
#define	P_Hold_Remove_2TR_Debug_Edge	pshm->P[21955]
#define	P_Buffer_Seqdata_Hold_Remove_2TR_Array(i)	pshm->P[(21956+i)%MAX_P]
#define	P_Hold_Remove_2TR_Timer	pshm->P[21986]
#define	P_Hold_Remove_2TR_Tact_Time_Array(i)	pshm->P[(21987+i)%MAX_P]
#define	P_Hold_Remove_2TR_Tact_Time	pshm->P[22007]
#define	P_Hold_Supply_1TR_Cmd	pshm->P[22008]
#define	P_Hold_Supply_1TR_Status	pshm->P[22009]
#define	P_Hold_Supply_1TR_Module_Status	pshm->P[22010]
#define	P_Hold_Supply_1TR_State_Machine	pshm->P[22011]
#define	P_Hold_Supply_1TR_Seq_Index	pshm->P[22012]
#define	P_Hold_Supply_1TR_Self_Index	pshm->P[22013]
#define	P_Hold_Supply_1TR_Debug_Edge	pshm->P[22014]
#define	P_Buffer_Seqdata_Hold_Supply_1TR_Array(i)	pshm->P[(22015+i)%MAX_P]
#define	P_Hold_Supply_1TR_Timer	pshm->P[22045]
#define	P_Hold_Supply_1TR_Tact_Time_Array(i)	pshm->P[(22046+i)%MAX_P]
#define	P_Hold_Supply_1TR_Tact_Time	pshm->P[22066]
#define	P_PLC01_Hold_Supply_1TR_Memory_RTN	pshm->P[22067]
#define	P_PLC01_Hold_Supply_1TR_Judge_Flag	pshm->P[22068]
#define	P_PLC01_Hold_Supply_1TR_Judge_State_Machine	pshm->P[22069]
#define	P_PLC01_Hold_Supply_1TR_Judge_Status	pshm->P[22070]
#define	P_Plate_1TR_Supply_Module_Judge_Bit	pshm->P[22071]
#define	P_Hold_Supply_Align_Cmd	pshm->P[22072]
#define	P_Hold_Supply_Align_Status	pshm->P[22073]
#define	P_Hold_Supply_Align_Module_Status	pshm->P[22074]
#define	P_Hold_Supply_Align_State_Machine	pshm->P[22075]
#define	P_Hold_Supply_Align_Seq_Index	pshm->P[22076]
#define	P_Hold_Supply_Align_Self_Index	pshm->P[22077]
#define	P_Hold_Supply_Align_Debug_Edge	pshm->P[22078]
#define	P_Buffer_Seqdata_Hold_Supply_Align_Array(i)	pshm->P[(22079+i)%MAX_P]
#define	P_Hold_Supply_Align_Timer	pshm->P[22109]
#define	P_Hold_Supply_Align_Tact_Time_Array(i)	pshm->P[(22110+i)%MAX_P]
#define	P_Hold_Supply_Align_Tact_Time	pshm->P[22130]
#define	P_Hold_Supply_2TR_Cmd	pshm->P[22131]
#define	P_Hold_Supply_2TR_Status	pshm->P[22132]
#define	P_Hold_Supply_2TR_Module_Status	pshm->P[22133]
#define	P_Hold_Supply_2TR_State_Machine	pshm->P[22134]
#define	P_Hold_Supply_2TR_Seq_Index	pshm->P[22135]
#define	P_Hold_Supply_2TR_Self_Index	pshm->P[22136]
#define	P_Hold_Supply_2TR_Debug_Edge	pshm->P[22137]
#define	P_Buffer_Seqdata_Hold_Supply_2TR_Array(i)	pshm->P[(22138+i)%MAX_P]
#define	P_Hold_Supply_2TR_Timer	pshm->P[22168]
#define	P_Hold_Supply_2TR_Tact_Time_Array(i)	pshm->P[(22169+i)%MAX_P]
#define	P_Hold_Supply_2TR_Tact_Time	pshm->P[22189]
#define	P_Hold_Semi_Run_Pos_Move_Cmd	pshm->P[22190]
#define	P_Hold_Semi_Run_Pos_Move_Status	pshm->P[22191]
#define	P_Hold_Semi_Run_Pos_Move_Module_Status	pshm->P[22192]
#define	P_Hold_Semi_Run_Pos_Move_State_Machine	pshm->P[22193]
#define	P_Hold_Semi_Run_Pos_Move_Seq_Index	pshm->P[22194]
#define	P_Hold_Semi_Run_Pos_Move_Self_Index	pshm->P[22195]
#define	P_Hold_Semi_Run_Pos_Move_Debug_Edge	pshm->P[22196]
#define	P_Buffer_Seqdata_Hold_Semi_Run_Pos_Move_Array(i)	pshm->P[(22197+i)%MAX_P]
#define	P_Hold_Semi_Run_Pos_Move_Timer	pshm->P[22227]
#define	P_Hold_Semi_Run_Pos_Move_Tact_Time_Array(i)	pshm->P[(22228+i)%MAX_P]
#define	P_Hold_Semi_Run_Pos_Move_Tact_Time	pshm->P[22248]
#define	P_Act_Complete_Bit(i)	pshm->P[(22249+i)%MAX_P]
#define	P_Act_Old_Time(i)	pshm->P[(22315+i)%MAX_P]
#define	P_Act_Delay_Time(i)	pshm->P[(22381+i)%MAX_P]
#define	P_Act_Suspend_Time_Out_Time	pshm->P[22447]
#define	P_Act_Time_Out(i)	pshm->P[(22448+i)%MAX_P]
#define	P_Test_Sungmin_Flag	pshm->P[22514]
#define	P_Discharge_Possibility_Bit(i)	pshm->P[(22515+i)%MAX_P]
#define	P_HOLD_Exist_Possibility_Bit(i)	pshm->P[(22581+i)%MAX_P]
#define	P_HOLD_NG_Remove_Possibility_Bit(i)	pshm->P[(22647+i)%MAX_P]
#define	P_HOLD_Align_Remove_Possibility_Bit(i)	pshm->P[(22713+i)%MAX_P]
#define	P_HOLD_2TR_Remove_Possibility_Bit(i)	pshm->P[(22779+i)%MAX_P]
#define	P_HOLD_1TR_Supply_Possibility_Bit(i)	pshm->P[(22845+i)%MAX_P]
#define	P_HOLD_Align_Supply_Possibility_Bit(i)	pshm->P[(22911+i)%MAX_P]
#define	P_HOLD_2TR_Supply_Possibility_Bit(i)	pshm->P[(22977+i)%MAX_P]
#define	P_HOLD_Semi_Run_Pos_Possibility_Bit(i)	pshm->P[(23043+i)%MAX_P]
#define	P_Module_Act_Command_Array(i)	pshm->P[(23109+i)%MAX_P]
#define	P_OLD_Module_Act_Command_Array(i)	pshm->P[(23175+i)%MAX_P]
#define	P_Module_Act_State_Machine_Array(i)	pshm->P[(23241+i)%MAX_P]
#define	P_Module_Act_State_Machine_Error_Array(i)	pshm->P[(23307+i)%MAX_P]
#define	P_Suspend_Discharge_Module_Status	pshm->P[23373]
#define	P_Suspend_Discharge_To_Execute_Flag	pshm->P[23374]
#define	P_Suspend_Discharge_Complete_Flag	pshm->P[23375]
#define	P_First_Unloader_Stack_Up_Status	pshm->P[23376]
#define	P_First_Unloader_Stack_FWD_Status	pshm->P[23377]
#define	P_First_Unloader_Grip_Cell_Status	pshm->P[23378]
#define	P_First_Unloader_Stack_BWD_Wait_Status	pshm->P[23379]
#define	P_First_Unloader_Stack_BWD_Status	pshm->P[23380]
#define	P_First_Unloader_Stack_Down_Status	pshm->P[23381]
#define	P_First_Unloader_Avoid_Status	pshm->P[23382]
#define	P_First_Unloader_Turn_Status	pshm->P[23383]
#define	P_First_Unloader_Handover_Status	pshm->P[23384]
#define	P_Cathode_Clamp_OFF_Status	pshm->P[23385]
#define	P_Final_Roll_Discharge_Status	pshm->P[23386]
#define	P_Final_Roll_Stack_Pos_Status	pshm->P[23387]
#define	P_Final_Roll_Stack_Up_Pos_Status	pshm->P[23388]
#define	P_Main_Z_Init_Pos_Status	pshm->P[23389]
#define	P_Sheet_Paper_BWD_Status	pshm->P[23390]
#define	P_Discharge_Vision_DIO_RTN	pshm->P[23391]
#define	P_Discharge_Sub_RTN	pshm->P[23392]
#define	P_Discharge_NG_Code_Report_RTN	pshm->P[23393]
#define	P_Individual_RTN	pshm->P[23394]
#define	P_Suspend_Discharge_Last_Run_Bit	pshm->P[23395]
#define	P_Suspend_Discharge_JR_Result_RTN	pshm->P[23396]
#define	P_ARC_Buffer_Jog_Speed	pshm->P[23397]
#define	P_Selected_Spool_Number	pshm->P[23398]
#define	P_ARC_Home_Check_RTN	pshm->P[23399]
#define	P_Suspend_ARC_Module_Status	pshm->P[23400]
#define	P_Not_Selected_Spool_Radius	pshm->P[23401]
#define	P_Not_Selected_Spool_Circumference	pshm->P[23402]
#define	P_Sensor_To_Sepa_Curr_Distance_mm(i)	pshm->P[(23403+i)%MAX_P]
#define	P_Passive_D_One_Degree_AD_Value	pshm->P[23428]
#define	P_After_ARC_Rotate_Distance	pshm->P[23429]
#define	P_Stack_Vision_NG_Code_Time_Over	pshm->P[23430]
#define	P_Suspend_Discharge_Resume_Flag	pshm->P[23431]
#define	P_Suspend_Discharge_Resume_Complete	pshm->P[23432]
#define	P_Suspend_Discharge_Pause_Flag	pshm->P[23433]
#define	P_Suspend_Monitor_(i)	pshm->P[(23434+i)%MAX_P]
#define	P_Flag_Stack_Work_Host_ID	pshm->P[23444]
#define	P_First_Sepa_Stack_Align_OK_PMAC_Flag	pshm->P[23445]
#define	P_Sepa_Run_Completed_Status_Machine	pshm->P[23446]
#define	P_Discharge_Debug_Edge	pshm->P[23447]
#define	P_Suspend_Discharge_Debug_Address(i)	pshm->P[(23448+i)%MAX_P]
#define	P_Suspend_Discharge_Debug_Value(i)	pshm->P[(23453+i)%MAX_P]
#define	P_Discharge_Sepa_Cutter_Time_Out_State_Machine	pshm->P[23458]
#define	P_Old_Suspend_Discharge_Seq_Index	pshm->P[23459]
#define	P_Discharge_Debug_Index_1	pshm->P[23460]
#define	P_Discharge_Debug_Index_2	pshm->P[23461]
#define	P_Discharge_Debug_Index_3	pshm->P[23462]
#define	P_Discharge_Debug_Index_4	pshm->P[23463]
#define	P_ARC_Debug_Edge	pshm->P[23464]
#define	P_Suspend_ARC_Debug_Address(i)	pshm->P[(23465+i)%MAX_P]
#define	P_Suspend_ARC_Debug_Value(i)	pshm->P[(23470+i)%MAX_P]
#define	P_Old_Suspend_ARC_Seq_Index	pshm->P[23475]
#define	P_ARC_Debug_Index_1	pshm->P[23476]
#define	P_ARC_Debug_Index_2	pshm->P[23477]
#define	P_ARC_Debug_Index_3	pshm->P[23478]
#define	P_ARC_Debug_Index_4	pshm->P[23479]
#define	P_ARC_Ready_Flag(i)	pshm->P[(23480+i)%MAX_P]
#define	P_Suspend_Cutter_Heating_Time	pshm->P[23482]
#define	P_Suspend_Cutter_Heating_Timer	pshm->P[23483]
#define	P_An_1TR_Supply_Debug_Edge	pshm->P[23484]
#define	P_Suspend_An_1TR_Supply_Debug_Address(i)	pshm->P[(23485+i)%MAX_P]
#define	P_Suspend_An_1TR_Supply_Debug_Value(i)	pshm->P[(23490+i)%MAX_P]
#define	P_Old_Suspend_An_1TR_Supply_Seq_Index	pshm->P[23495]
#define	P_An_1TR_Supply_Debug_Index_1	pshm->P[23496]
#define	P_An_1TR_Supply_Debug_Index_2	pshm->P[23497]
#define	P_An_1TR_Supply_Debug_Index_3	pshm->P[23498]
#define	P_An_1TR_Supply_Debug_Index_4	pshm->P[23499]
#define	P_Suspend_Supply_Index	pshm->P[23500]
#define	P_Suspend_Supply_Index_2nd	pshm->P[23501]
#define	P_Anode_Suspend_Supply_Complete(i)	pshm->P[(23502+i)%MAX_P]
#define	P_Suspend_Supply_Pause_Flag	pshm->P[23510]
#define	P_Suspend_Supply_Resume_Flag	pshm->P[23511]
#define	P_Supply_Module_Status	pshm->P[23512]
#define	P_Suspend_Anode_1TR_Supply_Complete_Flag	pshm->P[23513]
#define	P_Suspend_Discharge_Module_Error	pshm->P[23514]
#define	P_Suspend_ARC_Module_Error	pshm->P[23515]
#define	P_Suspend_1st_Supply_Error	pshm->P[23516]
#define	P_Discharge_Seq_Data	pshm->P[23517]
#define	P_Suspend_Discharging_Popup_Flag	pshm->P[23518]
#define	P_Suspend_Discharge_FR_Unclamp_Error_Popup_Flag	pshm->P[23519]
#define	P_Suspend_Discharge_Cathode_Align_Retry_Cal_Error_Popup_Flag	pshm->P[23520]
#define	P_Suspend_Discharge_Anode_Align_Retry_Cal_Error_Popup_Flag	pshm->P[23521]
#define	P_Suspend_Discharge_FR_Discharge_Pos_Error_Popup_Flag	pshm->P[23522]
#define	P_Suspend_Discharge_1st_Unloader_Grip_OFF_Error_Popup_Flag	pshm->P[23523]
#define	P_Suspend_Discharge_1st_Unloader_Up_Error_Popup_Flag	pshm->P[23524]
#define	P_Suspend_Discharge_1st_Unloader_FWD_Error_Popup_Flag	pshm->P[23525]
#define	P_Suspend_Discharge_FR_Clamp_Error_Popup_Flag	pshm->P[23526]
#define	P_Suspend_Discharge_Sepa_Cutter_Heating_Error_Popup_Flag	pshm->P[23527]
#define	P_Suspend_Discharge_1st_Unloader_Grip_Cell_Pos_Error_Popup_Flag	pshm->P[23528]
#define	P_Suspend_Discharge_1st_Unloader_Grip_ON_Error_Popup_Flag	pshm->P[23529]
#define	P_Suspend_Discharge_Sheet_Paper_BWD_Error_Popup_Flag	pshm->P[23530]
#define	P_Suspend_Discharge_Cathode_Clamp_OFF_Error_Popup_Flag	pshm->P[23531]
#define	P_Suspend_Discharge_Sepa_Cutter_FWD_Error_Popup_Flag	pshm->P[23532]
#define	P_Suspend_Discharge_Sheet_Paper_Vacuum_ON_Error_Popup_Flag	pshm->P[23533]
#define	P_Suspend_Discharge_Sepa_Cutter_BWD_Error_Popup_Flag	pshm->P[23534]
#define	P_Suspend_Discharge_1st_Unloader_BWD_Wait_Pos_Error_Popup_Flag	pshm->P[23535]
#define	P_Suspend_Discharge_1st_Unloader_BWD_Error_Popup_Flag	pshm->P[23536]
#define	P_Suspend_Discharge_1st_Unloader_Stack_Down_Error_Popup_Flag	pshm->P[23537]
#define	P_Suspend_Discharge_FR_Stack_Pos_Error_Popup_Flag	pshm->P[23538]
#define	P_Suspend_Discharge_After_Action_Init_Error_Popup_Flag	pshm->P[23539]
#define	P_Suspend_Discharge_1st_Unloader_Avoid_Pos_Error_Popup_Flag	pshm->P[23540]
#define	P_Suspend_Discharge_1st_2nd_Unloader_Handover_Chk_Error_Popup_Flag	pshm->P[23541]
#define	P_Suspend_Discharge_1st_Unloader_Handover_Pos_Error_Popup_Flag	pshm->P[23542]
#define	P_Suspend_Discharge_2nd_3rd_Unloader_Grip_Request_Error_Popup_Flag	pshm->P[23543]
#define	P_Suspend_Discharge_1st_Unloader_Wait_Pos_Error_Popup_Flag	pshm->P[23544]
#define	P_Suspend_ARC_Manual_ARC_Active_Popup_Flag	pshm->P[23545]
#define	P_Suspend_ARC_Auto_ARC_Active_Popup_Flag	pshm->P[23546]
#define	P_Suspend_ARC_Pre_Act_Popup_Flag	pshm->P[23547]
#define	P_Suspend_ARC_Dancer_Close_Popup_Flag	pshm->P[23548]
#define	P_Suspend_ARC_Use_Plate_FWD_Popup_Flag	pshm->P[23549]
#define	P_Suspend_ARC_Replace_Plate_Blow_ON_Popup_Flag	pshm->P[23550]
#define	P_Suspend_ARC_Use_Plate_Clamp_Popup_Flag	pshm->P[23551]
#define	P_Suspend_ARC_Use_Plate_Cutter_FWD_Popup_Flag	pshm->P[23552]
#define	P_Suspend_ARC_Use_Plate_Cutter_BWD_Popup_Flag	pshm->P[23553]
#define	P_Suspend_ARC_Use_Plate_Unclamp_Popup_Flag	pshm->P[23554]
#define	P_Suspend_ARC_Use_Plate_BWD_Popup_Flag	pshm->P[23555]
#define	P_Suspend_ARC_Replace_Plate_Blow_OFF_Popup_Flag	pshm->P[23556]
#define	P_Suspend_ARC_Dancer_Open_Popup_Flag	pshm->P[23557]
#define	P_Suspend_ARC_Spool_Change_Popup_Flag	pshm->P[23558]
#define	P_Suspend_ARC_Post_Act_Popup_Flag	pshm->P[23559]
#define	P_Suspend_ARC_Previous_Spool_Remain_Winding_Popup_Flag	pshm->P[23560]
#define	P_Suspend_Discharge_First_Address	pshm->P[23561]
#define	P_Suspend_ARC_First_Address	pshm->P[23562]
#define	P_Status_Stop_Ready_Pos_Move	pshm->P[23563]
#define	P_Cycle_Stop_Stauts	pshm->P[23564]
#define	P_Cycle_Stop_Status_Machine	pshm->P[23565]
#define	P_Cycle_Stop_Flag	pshm->P[23566]
#define	P_Speed_Origin_rtn	pshm->P[23567]
#define	P_Speed_rtn	pshm->P[23568]
#define	P_NG_PNP_Z_Move_rtn	pshm->P[23569]
#define	P_NG_PNP_Z_Move_Check_rtn	pshm->P[23570]
#define	P_NG_PNP_T_Move_rtn	pshm->P[23571]
#define	P_NG_PNP_T_Move_Check_rtn	pshm->P[23572]
#define	P_2nd_Z_Move_rtn	pshm->P[23573]
#define	P_2nd_Z_Move_Check_rtn	pshm->P[23574]
#define	P_2nd_T_Move_rtn	pshm->P[23575]
#define	P_2nd_T_Move_Check_rtn	pshm->P[23576]
#define	P_Stack_Judgement_Memory	pshm->P[23577]
#define	P_Stop_Cycle_Stop_Move_Status	pshm->P[23578]
#define	P_STOP_Initial_Process_Status	pshm->P[23579]
#define	P_Stopping_CycleStop_Init_Flag	pshm->P[23580]
#define	P_Sepa_Timing	pshm->P[23581]
#define	P_Old_Trigger_PLC0	pshm->P[23582]
#define	P_Mode_Command	pshm->P[23583]
#define	P_Current_Mode	pshm->P[23584]
#define	P_MOde_Num(i)	pshm->P[(23585+i)%MAX_P]
#define	P_Command_Depth(i)	pshm->P[(23590+i)%MAX_P]
#define	P_In_Position(i)	pshm->P[(23595+i)%MAX_P]
#define	P_Last_Cycle_Command(i)	pshm->P[(23600+i)%MAX_P]
#define	P_Mode_Command_Buffer	pshm->P[23605]
#define	P_Mode_Command_Wait_Count	pshm->P[23606]
#define	P_Old_Mode_Command	pshm->P[23607]
#define	P_Slave1_Anode_Run_Motion_Array(i)	pshm->P[(23608+i)%MAX_P]
#define	P_Slave2_Anode_Run_Motion_Array(i)	pshm->P[(23708+i)%MAX_P]
#define	P_Slave3_Anode_Run_Motion_Array(i)	pshm->P[(23808+i)%MAX_P]
#define	P_Slave4_Anode_Run_Motion_Array(i)	pshm->P[(23908+i)%MAX_P]
#define	P_Slave5_Anode_Run_Motion_Array(i)	pshm->P[(24008+i)%MAX_P]
#define	P_Slave6_Anode_Run_Motion_Array(i)	pshm->P[(24108+i)%MAX_P]
#define	P_Slave7_Anode_Run_Motion_Array(i)	pshm->P[(24208+i)%MAX_P]
#define	P_Slave8_Anode_Run_Motion_Array(i)	pshm->P[(24308+i)%MAX_P]
#define	P_Slave9_Anode_Run_Motion_Array(i)	pshm->P[(24408+i)%MAX_P]
#define	P_Slave10_Anode_Run_Motion_Array(i)	pshm->P[(24508+i)%MAX_P]
#define	P_Slave15_Anode_Run_Motion_Array(i)	pshm->P[(24608+i)%MAX_P]
#define	P_Slave16_Anode_Run_Motion_Array(i)	pshm->P[(24708+i)%MAX_P]
#define	P_Slave17_Anode_Run_Motion_Array(i)	pshm->P[(24808+i)%MAX_P]
#define	P_Slave18_Anode_Run_Motion_Array(i)	pshm->P[(24908+i)%MAX_P]
#define	P_Slave19_Anode_Run_Motion_Array(i)	pshm->P[(25008+i)%MAX_P]
#define	P_Slave1_Cathode_Run_Motion_Array(i)	pshm->P[(25108+i)%MAX_P]
#define	P_Slave2_Cathode_Run_Motion_Array(i)	pshm->P[(25208+i)%MAX_P]
#define	P_Slave3_Cathode_Run_Motion_Array(i)	pshm->P[(25308+i)%MAX_P]
#define	P_Slave4_Cathode_Run_Motion_Array(i)	pshm->P[(25408+i)%MAX_P]
#define	P_Slave5_Cathode_Run_Motion_Array(i)	pshm->P[(25508+i)%MAX_P]
#define	P_Slave15_Cathode_Run_Motion_Array(i)	pshm->P[(25608+i)%MAX_P]
#define	P_Slave6_Cathode_Run_Motion_Array(i)	pshm->P[(25708+i)%MAX_P]
#define	P_Slave7_Cathode_Run_Motion_Array(i)	pshm->P[(25808+i)%MAX_P]
#define	P_Slave8_Cathode_Run_Motion_Array(i)	pshm->P[(25908+i)%MAX_P]
#define	P_Slave9_Cathode_Run_Motion_Array(i)	pshm->P[(26008+i)%MAX_P]
#define	P_Slave10_Cathode_Run_Motion_Array(i)	pshm->P[(26108+i)%MAX_P]
#define	P_Slave16_Cathode_Run_Motion_Array(i)	pshm->P[(26208+i)%MAX_P]
#define	P_Slave17_Cathode_Run_Motion_Array(i)	pshm->P[(26308+i)%MAX_P]
#define	P_Slave18_Cathode_Run_Motion_Array(i)	pshm->P[(26408+i)%MAX_P]
#define	P_Slave19_Cathode_Run_Motion_Array(i)	pshm->P[(26508+i)%MAX_P]
#define	P_Anode_NG_Unit_Status	pshm->P[26608]
#define	P_Cathode_NG_Unit_Status	pshm->P[26609]
#define	P_ParsingRtn	pshm->P[26610]
#define	P_CurPosData	pshm->P[26611]
#define	P_Hold_MNTR_Supply_1st	pshm->P[26612]
#define	P_TimeOutNumb	pshm->P[26613]
#define	P_PosRtn	pshm->P[26614]
#define	P_MotionRtn	pshm->P[26615]
#define	P_CmdData	pshm->P[26616]
#define	P_Interval	pshm->P[26617]
#define	P_Cont_Ret	pshm->P[26618]
#define	P_Cur_Idx	pshm->P[26619]
#define	P_NextID	pshm->P[26620]
#define	P_Cur_Size	pshm->P[26621]
#define	P_Hold_Exist_Insp	pshm->P[26622]
#define	P_Hold_Remove_NG_PNP	pshm->P[26623]
#define	P_Hold_Remove_Align	pshm->P[26624]
#define	P_Hold_Remove_2TR	pshm->P[26625]
#define	P_Hold_Supply_1TR	pshm->P[26626]
#define	P_Hold_Supply_Align	pshm->P[26627]
#define	P_Hold_Supply_2TR	pshm->P[26628]
#define	P_Hold_Semi_Run	pshm->P[26629]
#define	P_Hold_NG_PNP_Remove	pshm->P[180]
#define	P_Hold_Remove_2nd	pshm->P[182]
#define	P_Hold_Supply_1st	pshm->P[183]
#define	P_Hold_Supply_2nd	pshm->P[185]
#define	P_Hold_Data_process	pshm->P[186]
#define	P_Hold_Semi_Run_Enable_Pos	pshm->P[187]
#define	P_Hold_Existence_Insp	pshm->P[188]
#define	P_Hold_1st_Belt_Move	pshm->P[189]
#define	P_Hold_Motion	pshm->P[190]
#define	P_Hold_Data_process_State_Machine	pshm->P[26630]
#define	P_Hold_Align_Remove_State_Machine	pshm->P[26631]
#define	P_Hold_2nd_Remove_State_Machine	pshm->P[26632]
#define	P_Hold_Supply_1st_State_Machine	pshm->P[26633]
#define	P_Hold_Supply_2nd_State_Machine	pshm->P[26634]
#define	P_Hold_Existence_Insp_State_Machine	pshm->P[26635]
#define	P_Hold_NG_PNP_Remove_State_Machine	pshm->P[26636]
#define	P_Hold_Data_Process_Complete	pshm->P[26637]
#define	P_Hold_Semi_Run_Enable_Pos_State_Machine	pshm->P[26638]
#define	P_HOLD_Existence_Insp_Queue_State_Machine	pshm->P[26639]
#define	P_Hold_Stop_Existence_Insp_STEP	pshm->P[26640]
#define	P_SubMaster_Status_Err	pshm->P[26641]
#define	P_Data_Process_Rtn	pshm->P[26642]
#define	P_Hold_Set_Trigger	pshm->P[26643]
#define	P_Hold_Get_Trigger	pshm->P[26644]
#define	P_Anode_2nd_Data	pshm->P[26645]
#define	P_Anode_Align_Data	pshm->P[26646]
#define	P_Hold_Remove_Step	pshm->P[26647]
#define	P_HList_Head_Idx	pshm->P[26648]
#define	P_Hold_Next_ID	pshm->P[26649]
#define	P_HCmd_List(i)	pshm->P[(26650+i)%MAX_P]
#define	P_Hold_Data_Value	pshm->P[26670]
#define	P_Comb_Bitwise	pshm->P[26671]
#define	P_Target_Cmd	pshm->P[26672]
#define	P_Temp_Bit	pshm->P[26673]
#define	P_Get_ErrorCode	pshm->P[26674]
#define	P_Rtn_Code	pshm->P[26675]
#define	P_Complete_Hold_Bit	pshm->P[26676]
#define	P_HoldMtion_Flag	pshm->P[26677]
#define	P_Ret_BitWise	pshm->P[26678]
#define	P_NotEnough_GetSpace	pshm->P[26679]
#define	P_NotEnough_SetSpace	pshm->P[26680]
#define	P_Check_SetSpace	pshm->P[26681]
#define	P_Hold_Get_Data	pshm->P[26682]
#define	P_Err_NextID_Flag	pshm->P[26683]
#define	P_Elec_Bit	pshm->P[26684]
#define	P_MotionData	pshm->P[26685]
#define	P_DataList(i)	pshm->P[(26686+i)%MAX_P]
#define	P_Hold_Data_Err(i)	pshm->P[(26691+i)%MAX_P]
#define	P_Cur_PosX1	pshm->P[26701]
#define	P_Cur_PosZ1	pshm->P[26702]
#define	P_Cur_PosX2	pshm->P[26703]
#define	P_Cur_PosZ2	pshm->P[26704]
#define	P_Dest_PosX	pshm->P[26705]
#define	P_Dest_PosZ	pshm->P[26706]
#define	P_FailToParse	pshm->P[26707]
#define	P_CurTrigger	pshm->P[26708]
#define	P_TimeOutTrigger	pshm->P[26709]
#define	P_CalcTime	pshm->P[26710]
#define	P_Cycle_Count	pshm->P[26711]
#define	P_MotionTimeOutFlag	pshm->P[26712]
#define	P_Set_Data	pshm->P[26713]
#define	P_Rtn	pshm->P[26714]
#define	P_CurPosTestBit	pshm->P[26715]
#define	P_Hold_Anode_Pause_CHK	pshm->P[26716]
#define	P_Hold_Cathode_Pause_CHK	pshm->P[26717]
#define	P_Surface_Complete_To_Hold	pshm->P[26718]
#define	P_Hold_Motion_Arr(i)	pshm->P[(26719+i)%MAX_P]
#define	P_Hold_Pause_Trg	pshm->P[26739]
#define	P_From_Staring_Flag	pshm->P[26740]
#define	P_Hold_Existence_Insp_Enqueue_Flag	pshm->P[26741]
#define	P_Hold_Rtn	pshm->P[26742]
#define	P_Debug_Existence_Insp_STEP	pshm->P[26743]
#define	P_Hold_Align_Sheet_CHK	pshm->P[26744]
#define	P_Hold_Cathode_Exception_Empty_Flag	pshm->P[26745]
#define	P_Hold_Anode_Exception_Empty_Flag	pshm->P[26746]
#define	P_HOLD_Hold_Process_State_Machine	pshm->P[26747]
#define	P_Hold_Stop_Sheet_Process_STEP	pshm->P[26748]
#define	P_Hold_Debug_Sheet_Process_STEP	pshm->P[26749]
#define	P_Hold_Stop_Point	pshm->P[26750]
#define	P_Hold_CHK	pshm->P[26751]
#define	P_Hold_Test	pshm->P[26752]
#define	P_Anode_1st_Motion_Complete	pshm->P[26753]
#define	P_Anode_2nd_Motion_Complete	pshm->P[26754]
#define	P_Anode_NG_PNP_Motion_Complete	pshm->P[26755]
#define	P_Cathode_1st_Motion_Complete	pshm->P[26756]
#define	P_Cathode_2nd_Motion_Complete	pshm->P[26757]
#define	P_Cathode_NG_PNP_Motion_Complete	pshm->P[26758]
#define	P_Anode_1st_Picker_Motion_Complete	pshm->P[26759]
#define	P_Cathode_1st_Picker_Motion_Complete	pshm->P[26760]
#define	P_individual_return	pshm->P[26761]
#define	P_individual_return2	pshm->P[26762]
#define	P_HoldCurPosBit1	pshm->P[26763]
#define	P_HoldCurPosBit2	pshm->P[26764]
#define	P_Parsing_Status	pshm->P[26765]
#define	P_Sel_Obj	pshm->P[26766]
#define	P_Sel_Elec	pshm->P[26767]
#define	P_Error	pshm->P[26768]
#define	P_Vision_FirstSepa_Complete	pshm->P[26769]
#define	P_NG_PNP_Turn_TM	pshm->P[26770]
#define	P_NG_PNP_Turn_TS	pshm->P[26771]
#define	P_NG_PNP_Turn_TA	pshm->P[26772]
#define	P_NG_PNP_Up_TM	pshm->P[26773]
#define	P_NG_PNP_Up_TS	pshm->P[26774]
#define	P_NG_PNP_Up_TA	pshm->P[26775]
#define	P_NG_PNP_Down_TM	pshm->P[26776]
#define	P_NG_PNP_Down_TS	pshm->P[26777]
#define	P_NG_PNP_Down_TA	pshm->P[26778]
#define	P_NG_PNP_Vac_Time	pshm->P[26779]
#define	P_NG_PNP_Blow_Time	pshm->P[26780]
#define	P_Slow_NG_Mode_Btn	pshm->P[26781]
#define	P_HOLD_Memory_Tower_Offset	pshm->P[26782]
#define	P_Hold_Pause_Use	pshm->P[26783]
#define	P_Hold_Err_MNTR(i)	pshm->P[(26784+i)%MAX_P]
#define	P_Hold_Err_Data_Save(i)	pshm->P[(26788+i)%MAX_P]
#define	P_Hold_Err_Action_Data_Save(i)	pshm->P[(26796+i)%MAX_P]
#define	P_Hold_Motion_Err_Chk	pshm->P[26804]
#define	P_Hold_Memory_Tower_Err_Pos(i)	pshm->P[(26805+i)%MAX_P]
#define	P_Hold_Motion_TimeOut	pshm->P[26820]
#define	P_Hold_Data_OK	pshm->P[26821]
#define	P_VISION_TRG_PLC4_AnodeSurface_Ins_Shoot	pshm->P[26822]
#define	P_VISION_TRG_PLC4_CathodeSurface_Ins_Shoot	pshm->P[26823]
#define	P_Memory_Tower_Test	pshm->P[26824]
#define	P_Temp_Run_Mode	pshm->P[26825]
#define	P_Data_Idx	pshm->P[26826]
#define	P_Get_Data_Idx	pshm->P[26827]
#define	P_HOLD_Data_Err_Queue	pshm->P[26828]
#define	P_HOLD_Data_Err_State_Machine	pshm->P[26829]
#define	P_HOLD_Err_Set_Data	pshm->P[26830]
#define	P_HOLD_Err_Save	pshm->P[26831]
#define	P_Sepa_Run_Completed_Flag	pshm->P[26832]
#define	P_Buffer_Seqdata_MSA_Array(i)	pshm->P[(26833+i)%MAX_P]
#define	P_Buffer_Seqdata_Align_Take_Off_Array(i)	pshm->P[(26883+i)%MAX_P]
#define	P_VISION_MSA_Align_Module_Complete_Bit(i)	pshm->P[(26933+i)%MAX_P]
#define	P_Module_Manual_MSA_Act_Command_Array(i)	pshm->P[(27033+i)%MAX_P]
#define	P_OLD_Module_Manual_MSA_Act_Command_Array(i)	pshm->P[(27133+i)%MAX_P]
#define	P_Module_MSA_Act_State_Machine_Array(i)	pshm->P[(27233+i)%MAX_P]
#define	P_VISION_MSA_Seq_Stopping_Point(i)	pshm->P[(27333+i)%MAX_P]
#define	P_Align_Take_Off_Module_Complete_Bit(i)	pshm->P[(27366+i)%MAX_P]
#define	P_Module_Manual_Align_Take_Off_Act_Command_Array(i)	pshm->P[(27466+i)%MAX_P]
#define	P_OLD_Module_Manual_Align_Take_Off_Act_Command_Array(i)	pshm->P[(27566+i)%MAX_P]
#define	P_Module_Align_Take_Off_Act_State_Machine_Array(i)	pshm->P[(27666+i)%MAX_P]
#define	P_Log_Data_Y	pshm->P[27766]
#define	P_Log_Data_M	pshm->P[27767]
#define	P_Log_Data_D	pshm->P[27768]
#define	P_Log_Data_H	pshm->P[27769]
#define	P_Log_Data_m	pshm->P[27770]
#define	P_Log_Data_s	pshm->P[27771]
#define	P_MNTR_End_Index	pshm->P[27772]
#define	P_BG_CPLC_Running_MNTR	pshm->P[50]
#define	P_RTI_CPLC_Running_MNTR	pshm->P[51]
#define	P_Log_Start_Flag	pshm->P[170]
#define	P_Log_Document_Remove_Flag	pshm->P[171]
#define	P_Sepa_ID_Change_Flag	pshm->P[172]
#define	P_USB_Register	pshm->P[173]
#define	P_Cur_Line_Check	pshm->P[175]
#define	P_Cur_Line_Check_Init	pshm->P[176]
#define	P_Buffer_Judge_Trg(i)	pshm->P[(27773+i)%MAX_P]
#define	P_Hold_Pass	pshm->P[27783]
#define	P_PLC01_Queue_MNTR(i)	pshm->P[(27784+i)%MAX_P]
#define	P_PLC01_Total_Step_Flag	pshm->P[27799]
#define	P_PLC02_Total_Step_Flag	pshm->P[27800]
#define	P_PLC014_Total_Step_Flag	pshm->P[27801]
#define	P_PLC02_Total_Step_Flag2	pshm->P[27802]
#define	P_Vac_Pass	pshm->P[27803]
#define	P_Vision_Pass_Exisitence	pshm->P[27804]
#define	P_Vision_Pass_Empty	pshm->P[27805]
#define	P_Vision_Pass_FirstSepa	pshm->P[27806]
#define	P_Vision_Pass_Stack_Inspection	pshm->P[27807]
#define	P_ULD_Home_Pass	pshm->P[27808]
#define	P_Clamp_Cell_Down_Use	pshm->P[27809]
#define	P_FR_Clamp_Use_Test	pshm->P[27810]
#define	P_Door_Interlock_Use_Flag	pshm->P[27811]
#define	P_Vacuum_Door_Clear_Use	pshm->P[27812]
#define	P_Align_Test_Pos	pshm->P[27813]
#define	P_PLC01_Exe_Is_Ena_Step_Flag(i)	pshm->P[(27814+i)%MAX_P]
#define	P_PLC01_Exe_Fist_Sepa_Step_Flag(i)	pshm->P[(27824+i)%MAX_P]
#define	P_PLC01_Exe_Prod_Step_Flag(i)	pshm->P[(27834+i)%MAX_P]
#define	P_PLC01_HOLD_Insp_Step_Flag(i)	pshm->P[(27839+i)%MAX_P]
#define	P_PLC01_HOLD_Main_Step_Flag(i)	pshm->P[(27849+i)%MAX_P]
#define	P_PLC01_Sus_Discharge_Step_Flag(i)	pshm->P[(27864+i)%MAX_P]
#define	P_PLC01_Sus_ARC_Step_Flag(i)	pshm->P[(27874+i)%MAX_P]
#define	P_PLC01_STOP_Init_Step_Flag(i)	pshm->P[(27884+i)%MAX_P]
#define	P_PLC01_STOP_Cycle_ST_Step_Flag(i)	pshm->P[(27894+i)%MAX_P]
#define	P_PLC02_Exe_Module_First_Sepa_Step_Flag	pshm->P[27909]
#define	P_PLC02_Sus_Module_Discharge_Step_Flag	pshm->P[27910]
#define	P_PLC02_Sus_Module_ARC_Step_Flag	pshm->P[27911]
#define	P_PLC02_Sus_Module_1TR_Supply_Step_Flag	pshm->P[27912]
#define	P_PLC02_HOLD_Module_Insp_Step_Flag	pshm->P[27913]
#define	P_PLC02_HOLD_Module_Remove_NGPNP_Step_Flag	pshm->P[27914]
#define	P_PLC02_HOLD_Module_Remove_Align_Step_Flag	pshm->P[27915]
#define	P_PLC02_HOLD_Module_Remove_2TR_Step_Flag	pshm->P[27916]
#define	P_PLC02_HOLD_Module_Supply_1TR_Step_Flag	pshm->P[27917]
#define	P_PLC02_HOLD_Module_Supply_Align_Step_Flag	pshm->P[27918]
#define	P_PLC02_HOLD_Module_Supply_2TR_Step_Flag	pshm->P[27919]
#define	P_PLC02_HOLD_Module_SemiRun_Pos_Step_Flag	pshm->P[27920]
#define	P_PLC14_STOP_Module_Cycle_Stop_Step_Flag	pshm->P[27921]
#define	P_PLC02_Discharge_MNTR	pshm->P[27922]
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
#define	P_Error_Index_Number	pshm->P[27923]
#define	P_ECAT_MNTR_Bit	pshm->P[27924]
#define	P_Local_MNTR_Bit	pshm->P[27925]
#define	P_Clamp_Motion_VER1	pshm->P[27926]
#define	P_CA_DR_Ta	pshm->P[27927]
#define	P_CA_DR_Ts	pshm->P[27928]
#define	P_CA_DR_Tm	pshm->P[27929]
#define	P_CA_DR_Td	pshm->P[27930]
#define	P_CA_DR_Tsd	pshm->P[27931]
#define	P_AN_DR_Ta	pshm->P[27932]
#define	P_AN_DR_Ts	pshm->P[27933]
#define	P_AN_DR_Tm	pshm->P[27934]
#define	P_AN_DR_Td	pshm->P[27935]
#define	P_AN_DR_Tsd	pshm->P[27936]
#define	P_First_Sepa_1st_Driving_Move	pshm->P[27937]
#define	P_AN_Cam_Total_Time	pshm->P[27938]
#define	P_CA_Cam_Total_Time	pshm->P[27939]
#define	P_Dry_Run_BTN	pshm->P[27940]
#define	P_Home_Angle_Offset_change_Bit	pshm->P[27941]
#define	P_InterLock_Motor_Num	pshm->P[27942]
#define	P_Recipe_Move_IL_Loop	pshm->P[27943]
#define	P_Z_Var	pshm->P[27944]
#define	P_No1_Recipe_Pos_IL(i)	pshm->P[(27945+i)%MAX_P]
#define	P_No2_Recipe_Pos_IL(i)	pshm->P[(27998+i)%MAX_P]
#define	P_No3_Recipe_Pos_IL(i)	pshm->P[(28051+i)%MAX_P]
#define	P_No4_Recipe_Pos_IL(i)	pshm->P[(28104+i)%MAX_P]
#define	P_No5_Recipe_Pos_IL(i)	pshm->P[(28157+i)%MAX_P]
#define	P_No6_Recipe_Pos_IL(i)	pshm->P[(28210+i)%MAX_P]
#define	P_No7_Recipe_Pos_IL(i)	pshm->P[(28263+i)%MAX_P]
#define	P_No8_Recipe_Pos_IL(i)	pshm->P[(28316+i)%MAX_P]
#define	P_No9_Recipe_Pos_IL(i)	pshm->P[(28369+i)%MAX_P]
#define	P_No10_Recipe_Pos_IL(i)	pshm->P[(28422+i)%MAX_P]
#define	P_Recipe_POS_Interock_M(i)	pshm->P[(28475+i)%MAX_P]
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
,P_Force_Stop_Flag=8751
,P_Execute_DryRun_Stop_Timer=8752
,P_DryRun_Timer=8753
,P_Dryrun_Operating_Time=8754
,P_Anode_Align_Vac_Err_On=8755
,P_Cathode_Align_Vac_Err_On=8756
,P_Anode_1ST_TR_Vac_Err_On=8757
,P_Anode_2ND_TR_Vac_Err_On=8758
,P_Cathode_1ST_TR_Vac_Err_On=8759
,P_Cathode_2ND_TR_Vac_Err_On=8760
,P_MNTR_PLC0_Task_Max_Time=8763
,P_MNTR_PLC1_Task_Max_Time=8766
,P_MNTR_PLC2_Task_Max_Time=8769
,P_MNTR_PLC3_Task_Max_Time=8772
,P_MNTR_PLC4_Task_Max_Time=8775
,P_MNTR_PLC5_Task_Max_Time=8778
,P_MNTR_PLC6_Task_Max_Time=8781
,P_MNTR_PLC7_Task_Max_Time=8784
,P_MNTR_PLC8_Task_Max_Time=8787
,P_MNTR_PLC9_Task_Max_Time=8790
,P_MNTR_PLC10_Task_Max_Time=8793
,P_MNTR_PLC11_Task_Max_Time=8796
,P_MNTR_PLC12_Task_Max_Time=8799
,P_MNTR_PLC13_Task_Max_Time=8802
,P_MNTR_PLC14_Task_Max_Time=8805
,P_MNTR_PLC15_Task_Max_Time=8808
,P_MNTR_PLC16_Task_Max_Time=8811
,P_MNTR_PLC17_Task_Max_Time=8814
,P_MNTR_PLC18_Task_Max_Time=8817
,P_MNTR_PLC19_Task_Max_Time=8820
,P_MNTR_PLC20_Task_Max_Time=8823
,P_MNTR_PLC21_Task_Max_Time=8826
,P_MNTR_PLC22_Task_Max_Time=8829
,P_MNTR_PLC23_Task_Max_Time=8832
,P_MNTR_PLC24_Task_Max_Time=8835
,P_MNTR_PLC25_Task_Max_Time=8838
,P_MNTR_PLC26_Task_Max_Time=8841
,P_MNTR_PLC27_Task_Max_Time=8844
,P_MNTR_PLC28_Task_Max_Time=8847
,P_MNTR_PLC29_Task_Max_Time=8850
,P_MNTR_PLC30_Task_Max_Time=8853
,P_In_Pos_Trg=8854
,P_Position_Calc_Status=8855
,P_PNP_Pos=8870
,P_Execute_Manage_Mode=8871
,P_Align_NG_Tack_Flag=8872
,P_Anode_Align_OK_Flag=8873
,P_Anode_Align_NG_Flag=8874
,P_Cathode_Align_OK_Flag=8875
,P_Cathode_Align_NG_Flag=8876
,P_Stack_Table_OK_Flag=8877
,P_Anode_Retry_OK_Flag=8878
,P_Anode_Retry_NG_Flag=8879
,P_Cathode_Retry_OK_Flag=8880
,P_Cathode_Retry_NG_Flag=8881
,P_Anode_Surf_Insp_Trigger=8882
,P_Cathode_Surf_Insp_Trigger=8883
,P_First_Anode_Sheet_Supply_Flag=8884
,P_First_Cathode_Sheet_Supply_Flag=8885
,P_Cathode_Cur_Mode=8886
,P_Anode_Cur_Mode=8887
,P_Anode_Run_FR_Move_Check_AI=8888
,P_Cathode_Run_FR_Move_Check_AI=8889
,P_FR_Move_Check_AI_OffSet=8890
,P_Aver_FR_AI_Value=8896
,P_Process_Function_Command=8897
,P_HOLD_Existence_Insp_State_Machine=8898
,P_Execute_IsEnable_State_Machine=8899
,P_EXECUTE_FUNC_Ready_STEP=8900
,P_Execute_First_Sepa_Ontable_State_Machine=8901
,P_Execute_Prod_Manage_State_Machine=8902
,P_Execute_Enqueue_State_Machine=8903
,P_STOP_Initial_Process_STEP=8904
,P_STOP_Cylce_Stop_STEP=8905
,P_Stop_CycleStop_Position=8906
,P_Upcount_NextStep=8907
,P_SUSPEND_FUNC_JR_Discharge_STEP=8908
,P_SUSPEND_FUNC_ARC_STEP=8909
,P_Suspend_ARC_Complete_Flag=8910
,P_EXECUTE_FUNC_Debug_On_Sepa_STEP=8911
,P_QueueCommand_Occurs=8912
,P_EXECUTE_STEP=8913
,P_SUSPEND_STEP=8914
,P_HOLD_STEP=8915
,P_STOP_STEP=8916
,P_EXECUTE_Error_STEP=8917
,P_SUSPEND_Error_STEP=8918
,P_HOLD_Error_STEP=8919
,P_STOP_Error_STEP=8920
,P_Queue_Enqueue_Command=8921
,P_Queue_Enqueue_return=8922
,P_Queue_Dequeue_Command=8923
,P_Queue_Dequeue_return=8924
,P_Queue_Peek_Command=8925
,P_Dummy_Dequeue=8946
,P_Queue_Command_Status=8947
,P_Queue_Process_Command=8948
,P_Queue_Process_Status=8949
,P_Coord_Test=8950
,P_Coord_Test3=8951
,P_Coord_Test2=8952
,P_Coord_Motion_Prog_Down_Entering_Bit=8953
,P_PMAC_Coord_Status_Bit=8954
,P_Coord_Down_Check_Bit=8955
,P_PMAC_Coord_Down_Inspection_Flag=8956
,P_PMAC_Coord_Down_Num=8957
,P_PMAC_Coord_Error_Status=8958
,P_PLC01_Process_Function_Enter_Flag=9179
,P_PLC01_SubMotion_Active=9180
,P_PLC01_SlaveMotion_Active=9181
,P_EXECUTE_Isenable_MNTR=9182
,P_EXECUTE_IsEnable_Firt_Stacking_Flag=9183
,P_PLC01_Execute_Retry_Sepa_Mode_Count=9184
,P_SUSPEND_MNTR=9185
,P_SUSPEND_MNTR_2=9186
,P_Execute_Last_Run_Flag=9187
,P_Suspend_ARC_Request_Flag=9188
,P_Hold_Queue_Exist_Insp_MNTR=9189
,P_CirQueue_Status_Value=9190
,P_Debug_CirQueue_Status=9191
,P_Front_Index=9192
,P_Rear_Index=9193
,P_Index_Max=9194
,P_CirQueue_Length=9206
,P_Queue_Full=9207
,P_Queue_Empty=9208
,P_Queue_PeekEmpty=9209
,P_Self_items=9210
,P_Hold_Resume_Need_Flag=9211
,P_Stack_Heart_Bit_Timer=9212
,P_Stack_Heart_Bit_Calc=9213
,P_Stack_Heart_Bit_Sync_State_Machine=9214
,P_Pause_Anode_MNTR_Min_Trigger=9215
,P_Pause_Anode_MNTR_Max_Trigger=9216
,P_Pause_Cathode_MNTR_Min_Trigger=9217
,P_Pause_Cathode_MNTR_Max_Trigger=9218
,P_Pause_Protect_Variable=9219
,P_Resume_Protect_Variable=9220
,P_Sepa_Mode_Opposite_Resume_Free=9221
,P_Sepa_To_Normal_Mode_Sync_Flag=9222
,P_Sepa_To_Normal_Mode_Sync_Err_Avoid=9223
,P_X_Axis_Num=9524
,P_Y_Axis_Num=9525
,P_Z_Axis_Num=9526
,P_ZZ_Axis_Num=9527
,P_X_Unit=9528
,P_Y_Unit=9529
,P_Z_Unit=9530
,P_ZZ_Unit=9531
,P_Pos_Memory_Bit_Save=9532
,P_Total_Unit_Bit=9533
,P_Total_Unit_Pos=9534
,P_Anode_1st_Unit_Status=9535
,P_Anode_2nd_Unit_Status=9536
,P_Anode_CLP_Unit_Status=9537
,P_FinalRoll_Unit_Status=9538
,P_StackTable_Unit_Status=9539
,P_Cathode_CLP_Unit_Status=9540
,P_Cathode_2nd_Unit_Status=9541
,P_Cathode_1st_Unit_Status=9542
,P_1st_Unloader_Unit_Status=9543
,P_Cathode_NG_PNP_Status=9544
,P_Anode_NG_PNP_Status=9545
,P_Unit_integrated_Status=9546
,P_Unit_Status_Update_Flag=9547
,P_Memory_Tower_Search_Flag=9548
,P_MemTow_integrated_return=9549
,P_Error_STMS_Memory_Tower_Status=9550
,P_STMS_Memory_Tower_Status=9551
,P_Memory_Tower_X_Err_Flag=10102
,P_Memory_Tower_Y_Err_Flag=10103
,P_Memory_Tower_Z_Err_Flag=10104
,P_Memory_Tower_ZZ_Err_Flag=10105
,P_CA_Clamp_Cell_Down_Pos=10106
,P_AN_Clamp_Cell_Down_Pos=10107
,P_PNP_Abort_Use_Bit=10204
,P_PNP_Abort_Use_Total_Bit=10205
,P_C_1st_PNP_FWD_Abort_Use_Bit=10206
,P_C_1st_PNP_BWD_Abort_Use_Bit=10207
,P_C_2nd_PNP_FWD_Abort_Use_Bit=10208
,P_C_2nd_PNP_BWD_Abort_Use_Bit=10209
,P_A_1st_PNP_FWD_Abort_Use_Bit=10210
,P_A_1st_PNP_BWD_Abort_Use_Bit=10211
,P_A_2nd_PNP_FWD_Abort_Use_Bit=10212
,P_A_2nd_PNP_BWD_Abort_Use_Bit=10213
,P_Single_Motor_Control_Bit=10214
,P_C_1st_PNP_FWD_Abort_Calc_Bit=10215
,P_C_1st_PNP_BWD_Abort_Calc_Bit=10216
,P_C_2nd_PNP_FWD_Abort_Calc_Bit=10217
,P_C_2nd_PNP_BWD_Abort_Calc_Bit=10218
,P_A_1st_PNP_FWD_Abort_Calc_Bit=10219
,P_A_1st_PNP_BWD_Abort_Calc_Bit=10220
,P_A_2nd_PNP_FWD_Abort_Calc_Bit=10221
,P_A_2nd_PNP_BWD_Abort_Calc_Bit=10222
,P_C_1st_PNP_FWD_Cur_Pos=10223
,P_C_1st_PNP_FWD_Cur_Vel=10224
,P_C_1st_PNP_BWD_Cur_Pos=10225
,P_C_1st_PNP_BWD_Cur_Vel=10226
,P_C_2nd_PNP_FWD_Cur_Pos=10227
,P_C_2nd_PNP_FWD_Cur_Vel=10228
,P_C_2nd_PNP_BWD_Cur_Pos=10229
,P_C_2nd_PNP_BWD_Cur_Vel=10230
,P_A_1st_PNP_FWD_Cur_Pos=10231
,P_A_1st_PNP_FWD_Cur_Vel=10232
,P_A_1st_PNP_BWD_Cur_Pos=10233
,P_A_1st_PNP_BWD_Cur_Vel=10234
,P_A_2nd_PNP_FWD_Cur_Pos=10235
,P_A_2nd_PNP_FWD_Cur_Vel=10236
,P_A_2nd_PNP_BWD_Cur_Pos=10237
,P_A_2nd_PNP_BWD_Cur_Vel=10238
,P_C_1st_PNP_FWD_Limit_Pos=10239
,P_C_1st_PNP_BWD_Limit_Pos=10240
,P_C_2nd_PNP_FWD_Limit_Pos=10241
,P_C_2nd_PNP_BWD_Limit_Pos=10242
,P_A_1st_PNP_FWD_Limit_Pos=10243
,P_A_1st_PNP_BWD_Limit_Pos=10244
,P_A_2nd_PNP_FWD_Limit_Pos=10245
,P_A_2nd_PNP_BWD_Limit_Pos=10246
,P_C_1st_PNP_FWD_Max_Limit_Pos=10247
,P_C_1st_PNP_BWD_Max_Limit_Pos=10248
,P_C_2nd_PNP_FWD_Max_Limit_Pos=10249
,P_C_2nd_PNP_BWD_Max_Limit_Pos=10250
,P_A_1st_PNP_FWD_Max_Limit_Pos=10251
,P_A_1st_PNP_BWD_Max_Limit_Pos=10252
,P_A_2nd_PNP_FWD_Max_Limit_Pos=10253
,P_A_2nd_PNP_BWD_Max_Limit_Pos=10254
,P_C_1st_PNP_FWD_Remain_Stroke=10255
,P_C_1st_PNP_BWD_Remain_Stroke=10256
,P_C_2nd_PNP_FWD_Remain_Stroke=10257
,P_C_2nd_PNP_BWD_Remain_Stroke=10258
,P_A_1st_PNP_FWD_Remain_Stroke=10259
,P_A_1st_PNP_BWD_Remain_Stroke=10260
,P_A_2nd_PNP_FWD_Remain_Stroke=10261
,P_A_2nd_PNP_BWD_Remain_Stroke=10262
,P_C_1st_PNP_FWD_Stroke_Time=10263
,P_C_1st_PNP_BWD_Stroke_Time=10264
,P_C_2nd_PNP_FWD_Stroke_Time=10265
,P_C_2nd_PNP_BWD_Stroke_Time=10266
,P_A_1st_PNP_FWD_Stroke_Time=10267
,P_A_1st_PNP_BWD_Stroke_Time=10268
,P_A_2nd_PNP_FWD_Stroke_Time=10269
,P_A_2nd_PNP_BWD_Stroke_Time=10270
,P_C_1st_PNP_FWD_Max_Speed=10271
,P_C_1st_PNP_BWD_Max_Speed=10272
,P_C_2nd_PNP_FWD_Max_Speed=10273
,P_C_2nd_PNP_BWD_Max_Speed=10274
,P_A_1st_PNP_FWD_Max_Speed=10275
,P_A_1st_PNP_BWD_Max_Speed=10276
,P_A_2nd_PNP_FWD_Max_Speed=10277
,P_A_2nd_PNP_BWD_Max_Speed=10278
,P_C_1st_PNP_FWD_ACC_Dis=10279
,P_C_1st_PNP_BWD_ACC_Dis=10280
,P_C_2nd_PNP_FWD_ACC_Dis=10281
,P_C_2nd_PNP_BWD_ACC_Dis=10282
,P_A_1st_PNP_FWD_ACC_Dis=10283
,P_A_1st_PNP_BWD_ACC_Dis=10284
,P_A_2nd_PNP_FWD_ACC_Dis=10285
,P_A_2nd_PNP_BWD_ACC_Dis=10286
,P_C_1st_PNP_FWD_AbortTa=10287
,P_C_1st_PNP_FWD_AbortTs=10288
,P_C_1st_PNP_BWD_AbortTa=10289
,P_C_1st_PNP_BWD_AbortTs=10290
,P_C_2nd_PNP_FWD_AbortTa=10291
,P_C_2nd_PNP_FWD_AbortTs=10292
,P_C_2nd_PNP_BWD_AbortTa=10293
,P_C_2nd_PNP_BWD_AbortTs=10294
,P_A_1st_PNP_FWD_AbortTa=10295
,P_A_1st_PNP_FWD_AbortTs=10296
,P_A_1st_PNP_BWD_AbortTa=10297
,P_A_1st_PNP_BWD_AbortTs=10298
,P_A_2nd_PNP_FWD_AbortTa=10299
,P_A_2nd_PNP_FWD_AbortTs=10300
,P_A_2nd_PNP_BWD_AbortTa=10301
,P_A_2nd_PNP_BWD_AbortTs=10302
,P_C_1st_PNP_FWD_Abort_Dec_Offset=10303
,P_C_1st_PNP_BWD_Abort_Dec_Offset=10304
,P_C_2nd_PNP_FWD_Abort_Dec_Offset=10305
,P_C_2nd_PNP_BWD_Abort_Dec_Offset=10306
,P_A_1st_PNP_FWD_Abort_Dec_Offset=10307
,P_A_1st_PNP_BWD_Abort_Dec_Offset=10308
,P_A_2nd_PNP_FWD_Abort_Dec_Offset=10309
,P_A_2nd_PNP_BWD_Abort_Dec_Offset=10310
,P_Abort_Init_Value=10671
,P_C_1st_PNP_FWD_AbortTa_Buffer=10672
,P_C_1st_PNP_FWD_AbortTs_Buffer=10673
,P_C_1st_PNP_BWD_AbortTa_Buffer=10674
,P_C_1st_PNP_BWD_AbortTs_Buffer=10675
,P_C_2nd_PNP_FWD_AbortTa_Buffer=10676
,P_C_2nd_PNP_FWD_AbortTs_Buffer=10677
,P_C_2nd_PNP_BWD_AbortTa_Buffer=10678
,P_C_2nd_PNP_BWD_AbortTs_Buffer=10679
,P_A_1st_PNP_FWD_AbortTa_Buffer=10680
,P_A_1st_PNP_FWD_AbortTs_Buffer=10681
,P_A_1st_PNP_BWD_AbortTa_Buffer=10682
,P_A_1st_PNP_BWD_AbortTs_Buffer=10683
,P_A_2nd_PNP_FWD_AbortTa_Buffer=10684
,P_A_2nd_PNP_FWD_AbortTs_Buffer=10685
,P_A_2nd_PNP_BWD_AbortTa_Buffer=10686
,P_A_2nd_PNP_BWD_AbortTs_Buffer=10687
,P_C_1st_PNP_FWD_Restore_Bit=10688
,P_C_1st_PNP_BWD_Restore_Bit=10689
,P_C_2nd_PNP_FWD_Restore_Bit=10690
,P_C_2nd_PNP_BWD_Restore_Bit=10691
,P_A_1st_PNP_FWD_Restore_Bit=10692
,P_A_1st_PNP_BWD_Restore_Bit=10693
,P_A_2nd_PNP_FWD_Restore_Bit=10694
,P_A_2nd_PNP_BWD_Restore_Bit=10695
,P_Align_Inspection_Time=10696
,P_Front_Inspection_Time=10697
,P_Stack_Inspection_Time=10698
,P_Existence_Inspection_Time=10699
,P_EmptyTable_Inspection_Time=10700
,P_FirstSepa_Inspection_Time=10701
,P_Vision_Anode_Sepa_Mode_Stack_Command=10702
,P_Vision_Cathode_Sepa_Mode_Stack_Command=10703
,P_Cathode_Sepa_Mode_Timer=10704
,P_Anode_Sepa_Mode_Timer=10705
,P_Vision_Pass=10706
,P_FirstSepa_Ret=10707
,P_Vision_Align_Command=10708
,P_Vision_Surface_Command=10709
,P_Vision_Stack_Command=10710
,P_Vision_Existence_Command=10711
,P_Vision_EmptyTable_Command=10712
,P_Vision_FirstSepa_Command=10713
,P_Selected_Align_Inspection_Unit=10714
,P_Selected_Surface_Inspection_Unit=10715
,P_Selected_Stack_Inspection_Unit=10716
,P_Selected_Existence_Inspection_Unit=10717
,P_Selected_EmptyTable_Inspection_Unit=10718
,P_Set_Cathode_Align_Zero_Pos=10719
,P_Set_Anode_Align_Zero_Pos=10720
,P_Vision_Align_State_Machine=10721
,P_Vision_Surface_State_Machine=10722
,P_Vision_Stack_State_Machine=10723
,P_Vision_Existence_State_Machine=10724
,P_Vision_EmptyTable_State_Machine=10725
,P_Vision_FirstSepa_State_Machine=10726
,P_Vision_Align_Status=10727
,P_Vision_Surface_Status=10728
,P_Vision_Stack_Status=10729
,P_Vision_Existence_Status=10730
,P_Vision_EmptyTable_Status=10731
,P_Vision_FirstSepa_Status=10732
,P_Cathode_Align_Table_Move=10735
,P_Anode_Align_Table_Move=10736
,P_Vision_Anode_Cell_Existence=10737
,P_Vision_Cathode_Cell_Existence=10738
,P_Align_Sheet_CHK=10739
,P_Anode_NG_Code=10740
,P_Cathode_NG_Code=10741
,P_Stack_NG_Code=10742
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
,P_Stop_Debug_Flag=10743
,P_Stop_Status_Check_Address=10866
,P_Stop_Status_Save_Address=10867
,P_Stop_Check_RTN=10868
,P_Old_Total_Unit_Bit=10873
,P_Memory_Tower_Dec_Result=10874
,P_PNP_Move_Timer=10884
,P_PNP_Move_Delay_Time=10885
,P_Stop_Memory_Pos_RTN=10886
,P_Slave1_Motion_Command=10887
,P_Slave2_Motion_Command=10888
,P_Slave3_Motion_Command=10889
,P_Slave4_Motion_Command=10890
,P_Slave5_Motion_Command=10891
,P_Slave6_Motion_Command=10892
,P_Slave7_Motion_Command=10893
,P_Slave8_Motion_Command=10894
,P_Slave9_Motion_Command=10895
,P_Slave10_Motion_Command=10896
,P_Slave11_Motion_Command=10897
,P_Slave12_Motion_Command=10898
,P_Slave13_Motion_Command=10899
,P_Slave14_Motion_Command=10900
,P_Slave15_Motion_Command=10901
,P_Slave16_Motion_Command=10902
,P_Slave17_Motion_Command=10903
,P_Slave18_Motion_Command=10904
,P_Slave19_Motion_Command=10905
,P_Slave20_Motion_Command=10906
,P_PNP_90_Deg_TM=10907
,P_PNP_90_Deg_TA=10908
,P_PNP_90_Deg_TS=10909
,P_PNP_Ready_TM=10910
,P_PNP_Ready_TA=10911
,P_PNP_Ready_TS=10912
,P_PNP_45_Deg_TM=10913
,P_PNP_45_Deg_TA=10914
,P_PNP_45_Deg_TS=10915
,P_Unloader_TM_Test=10916
,P_Unloader_TA_Test=10917
,P_PROG_21_Program_Ver=2781
,P_PROG_23_Program_Ver=2783
,P_PROG_24_Program_Ver=2784
,P_PROG_25_Program_Ver=2785
,P_PROG_26_Program_Ver=2786
,P_PROG_27_Program_Ver=2787
,P_PROG_28_Program_Ver=2788
,P_PROG_30_Program_Ver=2790
,P_Master_Motion_Trigger=10918
,P_Parity_Bit=10919
,P_Master_Move=10920
,P_Master_TA=10921
,P_Master_TS=10922
,P_Master_TM=10923
,P_Anode_Count=10924
,P_Cathode_Count=10925
,P_Anode_Thickness=10926
,P_Cathode_Thickness=10927
,P_Sepa_Thickness=10928
,P_Anode_Thickness_PLC=10929
,P_Cathode_Thickness_PLC=10930
,P_Sepa_Thickness_PLC=10931
,P_Spool_Enable=11449
,P_Cathode_1St_Flow_Chart_Bit_Flag=11450
,P_Cathode_AT_Flow_Chart_Bit_Flag=11451
,P_Cathode_2nd_Flow_Chart_Bit_Flag=11452
,P_Anode_Clamp_Flow_Chart_Bit_Flag=11453
,P_Final_Roll_Flow_Chart_Bit_Flag=11454
,P_Stack_Table_Flow_Chart_Bit_Flag=11455
,P_Cathode_Clamp_Flow_Chart_Bit_Flag=11456
,P_Anode_2nd_Flow_Chart_Bit_Flag=11457
,P_Anode_AT_Flow_Chart_Bit_Flag=11458
,P_Anode_1St_Flow_Chart_Bit_Flag=11459
,P_Sepa_Unwinder_Flow_Chart_Bit_Flag=11460
,P_Slave5_Target_Z_For_Cutting=11461
,P_Slave31_Motion_Command=11462
,P_Pause_Err_Process=11463
,P_Pause_Err_Timer=11464
,P_Pause_Err_Count=11465
,P_Pause_Err_Use=11466
,P_Pause_Err_Use2=11467
,P_Anode_Pause_Signal_Err=11468
,P_Cathode_Pause_Signal_Err=11469
,P_Anode_Pause_Err=11470
,P_Anode_Pause_Err_Count=11471
,P_Execute_Wait_Mode_Memory_Tower=11482
,P_Execute_Vac_MNTR=11483
,P_Old_Cathode_Cur_Mode=11484
,P_Old_Anode_Cur_Mode=11525
,P_Anode_1TR_T_Belt_To_Align=11566
,P_Anode_1TR_T_Align_To_Belt=11567
,P_Anode_1TR_T_Ready_Pos=11568
,P_Anode_1TR_T_Ready_To_Align=11569
,P_Anode_1TR_T_Ready_To_Belt=11570
,P_Anode_Picker_Turn=11571
,P_Anode_2TR_T_Align_To_Stack=11572
,P_Anode_2TR_T_Stack_To_Align=11573
,P_Anode_Clamp_Off=11574
,P_Anode_Clamp_On=11575
,P_Anode_Clamp_Down=11576
,P_FR_Anode_Motion=11577
,P_FR_Cathode_Motion=11578
,P_Stack_Table_Down=11579
,P_Cathode_Clamp_On=11580
,P_Cathode_Clamp_Off=11581
,P_Cathode_Clamp_Down=11582
,P_Cathode_2TR_T_Align_To_Stack=11583
,P_Cathode_2TR_T_Stack_To_Align=11584
,P_Cathode_Picker_Turn=11585
,P_Cathode_1TR_T_Belt_To_Align=11586
,P_Cathode_1TR_T_Align_To_Belt=11587
,P_Cathode_1TR_T_Ready_Pos=11588
,P_Cathode_1TR_T_Ready_To_Align=11589
,P_Cathode_1TR_T_Ready_To_Belt=11590
,P_Anode_1TR_Z_Belt_To_Align=11591
,P_Anode_1TR_Z_Align_To_Belt=11592
,P_Anode_1TR_Z_Align_Down=11593
,P_Anode_1TR_Z_Align_UP=11594
,P_Anode_1TR_Z_Belt_Down=11595
,P_Anode_1TR_Z_Belt_UP=11596
,P_Anode_1TR_Z_Ready=11597
,P_Anode_1TR_Z_Align_Blow=11598
,P_Anode_1TR_Z_Belt_Vac=11599
,P_Cathode_1TR_Z_Belt_To_Align=11600
,P_Cathode_1TR_Z_Align_To_Belt=11601
,P_Cathode_1TR_Z_Align_Down=11602
,P_Cathode_1TR_Z_Align_UP=11603
,P_Cathode_1TR_Z_Belt_Down=11604
,P_Cathode_1TR_Z_Belt_UP=11605
,P_Cathode_1TR_Z_Ready=11606
,P_Cathode_1TR_Z_Align_Blow=11607
,P_Cathode_1TR_Z_Belt_Vac=11608
,P_Anode_2TR_Align_To_Stack=11609
,P_Anode_2TR_Stack_To_Align=11610
,P_Anode_2TR_Stack_Down=11611
,P_Anode_2TR_Stack_UP=11612
,P_Anode_2TR_Align_Down=11613
,P_Anode_2TR_Align_UP=11614
,P_Anode_2TR_Align_Vac=11615
,P_Anode_2TR_Stack_Blow=11616
,P_Anode_2TR_Stack_Sepa_Blow=11617
,P_FR_Last_Run_Motion=11618
,P_Servo_Dancer_Ready_Pos=11619
,P_Servo_Dancer_Ready_Offset=11620
,P_Servo_Dancer_Test=11621
,P_Align_Start_IO_Judgment=11622
,P_Driving_Clamp2=11623
,P_Driving_Clamp=11624
,P_MSA_Timer=11625
,P_SM_Cathode_Stack_MSA=11626
,P_SM_Anode_Stack_MSA=11627
,P_SM_Cathode_Align_MSA=11628
,P_SM_Anode_Align_MSA=11629
,P_MSA_Interlock=11630
,P_Anode_MSA_Final_Roll_Pos_Check=11631
,P_Anode_MSA_2nd_PNP_Pos_Check=11632
,P_Anode_MSA_1nd_PNP_Pos_Check=11633
,P_MSA_Err_Save_CA_Stack_MSA=11634
,P_MSA_Err_Save_AN_Stack_MSA=11635
,P_MSA_Err_Save_CA_Align_MSA=11636
,P_MSA_Err_Save_AN_Align_MSA=11637
,P_MSA_BTN_Err=11638
,P_Anode_Algin_MSA_RTN=11639
,P_Anode_Algin_MSA_RTN2=11640
,P_Cathode_Algin_MSA_RTN=11641
,P_Cathode_Stack_MSA_RTN=11642
,P_Anode_Stack_MSA_RTN=11643
,P_Anode_Align_MSA_Count=11644
,P_Cathode_Align_MSA_Count=11645
,P_Anode_Stack_MSA_Count=11646
,P_Cathode_Stack_MSA_Count=11647
,P_Cathode_Align_Stop_Blocked=11648
,P_Anode_Align_Stop_Blocked=11649
,P_Cathode_Stack_Stop_Blocked=11650
,P_Anode_Stack_Stop_Blocked=11651
,P_Anode_Align_MSA_Execute_Timer=11652
,P_Cathode_Align_MSA_Execute_Timer=11653
,P_Anode_Stack_MSA_Execute_Timer=11654
,P_Cathode_Stack_MSA_Execute_Timer=11655
,P_Anode_Align_Interlock_Blocked=11656
,P_Cathode_Align_Interlock_Blocked=11657
,P_Anode_Stack_Interlock_Blocked=11658
,P_Cathode_Stack_Interlock_Blocked=11659
,P_Anode_1TR_T_Align_POS=11660
,P_Anode_1TR_T_Belt_POS=11661
,P_Anode_1TR_T_Ready_POS=11662
,P_Anode_2TR_T_Align_POS=11663
,P_Anode_2TR_T_Stack_POS=11664
,P_Cathode_2TR_T_Align_POS=11665
,P_Cathode_2TR_T_Stack_POS=11666
,P_Cathode_1TR_T_Align_POS=11667
,P_Cathode_1TR_T_Belt_POS=11668
,P_Cathode_1TR_T_Ready_POS=11669
,P_Seq_Abort=11670
,P_Blocked_Abort=11671
,P_Abort_Flag=11672
,P_Opposite_Lane_1ST_TR_Safe_Pos=11673
,P_Opposite_Lane_P_PMAC_Status=11674
,P_Opposite_Lane_OFF_Not_Start=11675
,P_Pause_Alarm_Blocked=11676
,P_Old_Alarm_Arr=11677
,P_Cycle_Stop_Delay_Time=11678
,P_Cycle_Stop_Offset=11679
,P_Opposite_Lane_Abort_Alram_Flag=11680
,P_Cathode_Clmap_Y1_Ready_Pos=11681
,P_Cathode_Clmap_Y1_Clamp_Pos=11682
,P_Anode_Clmap_Y1_Ready_Pos=11683
,P_Anode_Clmap_Y1_Clamp_Pos=11684
,P_Cathode_Clmap_Y2_Ready_Pos=11685
,P_Cathode_Clmap_Y2_Clamp_Pos=11686
,P_Anode_Clmap_Y2_Ready_Pos=11687
,P_Anode_Clmap_Y2_Clamp_Pos=11688
,P_Cathode_Clamp_Z2_Ready_Pos=11689
,P_Cathode_Clamp_Z2_Clamp_Pos=11690
,P_Anode_Clamp_Z2_Ready_Pos=11691
,P_Anode_Clamp_Z2_Clamp_Pos=11692
,P_Cathode_Clamp_Z1_Ready_Pos=11693
,P_Cathode_Clamp_Z1_Clamp_Pos=11694
,P_Anode_Clamp_Z1_Ready_Pos=11695
,P_Anode_Clamp_Z1_Clamp_Pos=11696
,P_Cathode_Clamp_Z2_Cell_Down=11697
,P_Anode_Clamp_Z2_Cell_Down=11698
,P_Cathode_Clamp_Z1_Cell_Down=11699
,P_Anode_Clamp_Z1_Cell_Down=11700
,P_Single_Run_Pass=11701
,P_Cathode_2nd_PNP_Sepa_Blow=11702
,P_Cathode_2nd_PNP_Align_Blow=11703
,P_Cathode_2nd_PNP_Stack_Blow=11704
,P_Cathode_2nd_PNP_Align_Vac=11705
,P_Cathode_2nd_PNP_Align_Up_Motion=11706
,P_Cathode_2nd_PNP_Align_Down_Motion=11707
,P_Cathode_2nd_PNP_Stack_Up_Motion=11708
,P_Cathode_2nd_PNP_Stack_Down_Motion=11709
,P_Cathode_2nd_PNP_Stack_To_Align_Motion=11710
,P_Cathode_2nd_PNP_Align_To_Stack_Motion=11711
,P_Door_Open_Stop_Count=11712
,P_Buf_Stack_NG_Flag=11713
,P_Stop_1st_PNP_Move=11714
,P_Seq_Abort_Timer=11715
,P_Sync_Test=11716
,P_Dry_Pause_Flag=11717
,P_Dry_Run_Pasue_Timer=11718
,P_Resume_Stop_Blocked=11719
,P_Discharge_Wait=11720
,P_Command_Run_Flag=11721
,P_Stop_Cmd_Origin=11722
,P_Old_M_Y_Sepa_Cutter_SSR_On=11738
,P_Sepa_Cutter_SSR_Off_Time=11739
,P_Sepa_Cutter_SSR_Off=11740
,P_Sepa_Cutter_SSR_Off_Timer=11741
,P_Starting_Pause_IO_Flag=11742
,P_PLC03_Seq_Pause_Start_Flag=11743
,P_PLC03_Seq_Pause_Start_State_Machine=11744
,P_PLC03_Seq_Pause_Start_Status=11745
,P_ARC_NP_Push_BTN=11746
,P_ARC_UI_Push_BTN=11747
,P_M_Manual_ARC_BTN=11748
,P_Two_Btn_Active_Flag=11749
,P_Two_Btn_Interlock_Time=11750
,P_NP_Unwinder_Active_Hold=11751
,P_MAX_KGF=11752
,P_KGF_TO_DAC_RATIO=11753
,P_Dac_Out_Value=11754
,P_Recipe_Dancer_input_kgf=11755
,P_Cathode_NG_PNP_Vel_Zero_Set=11756
,P_Anode_NG_PNP_Vel_Zero_Set=11757
,P_Anode_Run_DR=11758
,P_Cathode_Run_DR=11759
,P_1st_UND_Grip_Time=11760
,P_1st_UND_Grip_Time_offset=11761
,P_1st_UND_Grip_Time_offset2=11762
,P_First_Sepa_Driving_Use=11763
,P_First_Sepa_Driving_Timing=11764
,P_Unloader_Safe_rtn=11765
,P_Final_Start=11766
,P_Driving_Start=11767
,P_Starting_Pause_IO_OFF_Flag=11768
,P_individual_Hold_return=11769
,P_individual_Hold_return2=11770
,P_Tension_Ready_Pass=11771
,P_Discharge_cal_rtn=11772
,P_Old_Tact_Current_Mode=11773
,P_Sheet_Clear=11774
,P_Anode_Clamp_On_Time2=11775
,P_Anode_Clamp_On_Time=11776
,P_Cathode_Clamp_On_Time=11777
,P_Cathode_Clamp_On_Time2=11778
,P_Offset=11779
,P_Man_C=11780
,P_NG_Box_Stop_Use=11781
,P_SlewTime=11782
,P_Old_SlewTime=11783
,P_Resume_MNTR1=11784
,P_Resume_MNTR2=11785
,P_Resume_MNTR3=11786
,P_Resume_MNTR4=11787
,P_Resume_MNTR5=11788
,P_Resume_MNTR6=11789
,P_Resume_MNTR7=11790
,P_Resume_MNTR8=11791
,P_Resume_MNTR9=11792
,P_Resume_MNTR10=11793
,P_Resume_MNTR11=11794
,P_Resume_MNTR12=11795
,P_old_P_Anode_Count=11796
,P_Sheet_Paper_BWD_Count=11797
,P_Stop_CHK=11798
,P_Seq_Pause=11799
,P_Seq_Pause2=11800
,P_MSA_TimeBase_Rtn=11801
,P_Old_Vison_Read_EPC_Camera_Move_Request=11802
,P_First_Sepa_Time_Out_Count=11803
,P_Align_Retry_Cal_RTN=11804
,P_Driving_Cal=11821
,P_Driving_End_Pos=11822
,P_Driving_Start_Pos=11823
,P_Anode_Align_Blow=11829
,P_Cathode_Align_Blow=11830
,P_Home_Pos_Err_Cnt1=11871
,P_Home_Pos_Err_Cnt2=11872
,P_Home_Pos_Err_Cnt3=11873
,P_Home_Pos_Err_Cnt4=11874
,P_Align_Inspection_Delay=11875
,P_Anode_Sheet_Test=11881
,P_Cathode_Sheet_Test=11882
,P_Anode_Sheet_Interlock_Timing=11883
,P_Cathode_Sheet_Interlock_Timing=11884
,P_Discharge_Err_MNTR=11885
,P_Arc_Err_MNTR=11886
,P_Abort_Cnt=11887
,P_EMO_Cnt=11888
,P_Dry_Run_Inspection=11889
,P_Servo_ON_MNTR1=11890
,P_Servo_ON_MNTR2=11891
,P_Servo_ON_MNTR3=11892
,P_Servo_ON_MNTR4=11893
,P_Servo_ON_MNTR5=11894
,P_Servo_ON_MNTR6=11895
,P_Servo_ON_MNTR7=11896
,P_Servo_ON_MNTR8=11897
,P_Servo_ON_MNTR9=11898
,P_Servo_ON_MNTR10=11899
,P_Servo_ON_MNTR11=11900
,P_Servo_ON_MNTR12=11901
,P_Servo_ON_MNTR13=11902
,P_Servo_ON_MNTR14=11903
,P_Servo_ON_MNTR15=11904
,P_Servo_ON_MNTR16=11905
,P_Servo_ON_MNTR17=11906
,P_Servo_ON_MNTR18=11907
,P_Servo_ON_MNTR19=11908
,P_Servo_ON_MNTR20=11909
,P_Servo_ON_MNTR21=11910
,P_Servo_ON_MNTR22=11911
,P_Servo_ON_MNTR23=11912
,P_Servo_ON_MNTR24=11913
,P_Servo_ON_MNTR25=11914
,P_Servo_ON_MNTR26=11915
,P_Servo_ON_MNTR27=11916
,P_Servo_ON_MNTR28=11917
,P_Servo_ON_MNTR29=11918
,P_Servo_ON_MNTR30=11919
,P_X_IO_WinMess_Connect_BTN=11920
,P_Ecat_ReConnetion_State_Machine=11921
,P_Ecat_Reconnection_Timer=11922
,P_Y_Ecat_Reconnecting=11923
,P_Y_Ecat_ReConnection_Fail=11924
,P_Y_Ecat_ReConnection_Complete=11925
,P_X_Ecat_Reconnection_BTN=11926
,P_X_PLC_Setup_Mode_Check=11927
,P_Interlock_On_Off_Flag=11928
,P_X_Old_MC_Reconnect_BTN_Signal=11929
,P_BTN_1st_ULD_Data_Clear=11930
,P_Old_BTN_1st_ULD_Data_Clear=11931
,P_Old_M_Y_1st_Unloader_UnGrip_Sol=11932
,P_Sepa_Cutter_Heat_Meter=11933
,P_Sepa_Cutter_Heating_Timer=11934
,P_Middle_Skip_Off_Flag=11935
,P_Stop_MNTR1=11936
,P_Stop_MNTR2=11937
,P_Sheet_Pos_Offset=11938
,P_Stopping_Wait_Time=11939
,P_Stopping_Test_Timer=11940
,P_1st_ULD_OK_Lamp=11951
,P_1st_ULD_NG_Lamp=11952
,P_1st_ULD_Sample_QC_Lamp=11953
,P_Proceed_Execute_Flag=11954
,P_Continuous_Call_Stack_NG_Flag=11955
,P_Continuous_Call_Stack_OK_Flag=11956
,P_Cathode_Picker_Home_Pos=11957
,P_Anode_Picker_Home_Pos=11958
,P_FR_Sheet_Paper_Home_Chk=11959
,P_Align_TimeOut1=11960
,P_Align_TimeOut2=11961
,P_Align_TimeOut3=11962
,P_Align_TimeOut4=11963
,P_Align_TimeOut5=11964
,P_Align_TimeOut6=11965
,P_Anode_Align_OK=11966
,P_Cathode_Align_OK=11967
,P_Anode_Align_NG=11968
,P_Cathode_Align_NG=11969
,P_Anode_Align_TimeOut=11970
,P_Cathode_Align_TimeOut=11971
,P_Anode_Surf_OK=11972
,P_Cathode_Surf_OK=11973
,P_Anode_Surf_NG=11974
,P_Cathode_Surf_NG=11975
,P_Anode_Surf_TimeOut=11976
,P_Cathode_Surf_TimeOut=11977
,P_Surf_TimeOut1=11978
,P_Surf_TimeOut2=11979
,P_Surf_TimeOut3=11980
,P_Surf_TimeOut4=11981
,P_Surf_TimeOut5=11982
,P_Surf_TimeOut6=11983
,P_Anode_Stack_TimeOut=11984
,P_Cathode_Stack_TimeOut=11985
,P_Anode_Stack_OK=11986
,P_Cathode_Stack_OK=11987
,P_Anode_Stack_NG=11988
,P_Cathode_Stack_NG=11989
,P_Stack_TimeOut1=11990
,P_Stack_TimeOut2=11991
,P_Stack_TimeOut3=11992
,P_Align_Move_Err=11993
,P_Ecat_Test=11994
,P_Scan_Aver=11997
,P_Scan_MAX=11998
,P_Cathode_1TR_Picker_T_Belt_POS=11999
,P_Cathode_1TR_Picker_T_Align_POS=12000
,P_Anode_1TR_Picker_T_Belt_POS=12001
,P_Anode_1TR_Picker_T_Align_POS=12002
,P_1TR_Picker_T_Align_POS=12003
,P_AVRG_Lower_Sepa_Thickness_mm=12004
,P_AVRG_Upper_Sepa_Thickness_mm=12005
,P_PLC06_Upper_Curr_Unwinder_Thickness_mm=12006
,P_PLC06_Lower_Curr_Unwinder_Thickness_mm=12007
,P_Upper_Curr_Spool_Radius=12008
,P_Lower_Curr_Spool_Radius=12009
,P_PLC06_Curr_Upper_Distance_mm=12010
,P_PLC06_Curr_Lower_Distance_mm=12011
,P_Upper_Sepa_Min_Distance_mm=12012
,P_Lower_Sepa_Min_Distance_mm=12013
,P_PLC06_Sepa_Change_Set=12014
,P_Upper_Sepa_To_Sensor_Min_Dis=12015
,P_Upper_Sepa_To_Sensor_Max_Dis=12016
,P_Upper_Sensor_To_Unwinder_Core_Dis=12017
,P_Upper_Sensor_Min_AD=12018
,P_Upper_Sensor_Max_AD=12019
,P_Lower_Sepa_To_Sensor_Min_Dis=12020
,P_Lower_Sepa_To_Sensor_Max_Dis=12021
,P_Lower_Sensor_To_Unwinder_Core_Dis=12022
,P_Lower_Sensor_Min_AD=12023
,P_Lower_Sensor_Max_AD=12024
,M_AI_Upper_Sepa_Sensing=372
,M_AI_Lower_Sepa_Sensing=373
,P_Status_NP_BTN_Lower_Unwinder=12025
,P_Status_NP_BTN_Upper_Unwinder=12026
,P_Driving_CamTable_Scale_Change_Flag=12027
,P_FR_Driving_Diameter=12028
,P_FR_Driving_Floating_Point=12029
,P_FR_Driving_Reward=12030
,P_Unwinder_Master_Following_Use_Flag=12031
,P_Unwinder_Master_Following_On=12032
,P_Old_Master_Following_Start=12033
,P_Unwinder_Master_Following_Scale=12034
,P_Unwinder_Jog_Use_Flag=12035
,P_Old_Jog_Start=12036
,P_Unwinder_Jog_Total_Time=12037
,P_Unwinder_Ta=12038
,P_Unwinder_Ts=12039
,P_Unwinder_Tm=12040
,P_Unwinder_1mm_Deg=12041
,P_Unwinder_Jog_Pos=12042
,P_Unwinder_Jog_Cnt=12043
,P_PLC06_Frist_Flag=12044
,P_Sepa_AI=12045
,P_PLC06_Reel_Upper_Change_Flag=12046
,P_PLC06_Reel_Lower_Change_Flag=12047
,P_Spool_Ready_Enable_Flag=12048
,P_Spool_Lack_Flag=12049
,P_Sepa_DR_Start_Flag=12050
,P_cdTime_Tact_Sec=12051
,P_Master_Tact_Sec=12052
,P_Prev_Err_Pos=12053
,P_Cur_Arc_Rad=12054
,P_Cur_Arc_Deg=12055
,P_Spool_Velocity=12056
,P_Lin_Prop_Vel=12057
,P_Err_Pos=12058
,P_Lin_Deriv_Vel=12059
,P_Lin_Dacer_Kd=12060
,P_Lin_Dacer_Kp=12061
,P_Running_CDTimer=12062
,P_Unwinder_Jog_Ta=12063
,P_Unwinder_Jog_Ts=12064
,P_Unwinder_Vel_Test_Time=12065
,P_Set_Interval_Time=12066
,P_PLC06_Upper_Sepa_AI_Timer=12067
,P_PLC06_Upper_Sepa_AI_Data=12068
,P_PLC06_Upper_Sepa_AI_Cnt=12069
,P_PLC06_Upper_AVRG_Sensor_Data=12070
,P_PLC06_Lower_Sepa_AI_Timer=12071
,P_PLC06_Lower_Sepa_AI_Data=12072
,P_PLC06_Lower_Sepa_AI_Cnt=12073
,P_PLC06_Lower_AVRG_Sensor_Data=12074
,P_PLC06_Sepa_Upper_Thickness_Timer=12075
,P_PLC06_Sepa_Upper_Thickness_Data=12076
,P_PLC06_Sepa_Upper_Thickness_Cnt=12077
,P_PLC06_Sepa_Lower_Thickness_Timer=12078
,P_PLC06_Sepa_Lower_Thickness_Data=12079
,P_PLC06_Sepa_Lower_Thickness_Cnt=12080
,P_Sepa_Thickness_Chk_Timer=12081
,P_Spool_Length=12082
,P_Cascade_Sf_Driving_Value=12083
,P_Cascade_Sf_None_Driving_Value=12084
,P_Sepa_Min_Value_Cal_Cmd=12085
,P_Total_Sepa_Need_Length=12086
,P_Alpa=12087
,P_Sepa_Num_of_Turns=12088
,P_Sepa_Turn_Num=12089
,P_Accumulate_Value=12090
,P_Sharft_to_Sepa_Core_mm=12091
,P_Sepa_Cal_Circum=12092
,P_Sepa_Min_Need_Thickness=12093
,P_Sepa_Min_Thickness_Cmd=12094
,P_Sepa_Accumulate_Cmd=12095
,P_Sepa_Required_Amount=12096
,P_Sepa_Current_Thickness=12097
,P_Sepa_Initial_Tickness=12098
,P_Sepa_Required_Update_Timer=12099
,P_TEST_EPC_Interlock_Auto=12100
,P_TEST_EPC_Interlock_Manual=12101
,P_Discharge_Total_Tact=12102
,P_PLC15_Sub_Function_Dryrun_Active_Flag=12115
,P_Sepa_Rotation_Sequence_Run_Trigger_Cnt=12116
,P_Sepa_Mode_Sepa_Recipe_Count=12117
,P_Discharged_After_End_Trigger=12118
,P_Unloader_1st_Grip_Delay=12119
,P_Separate_Cutter_Heating_Limit_Value=12120
,P_Separate_Cutting_Current=12121
,P_Separate_Cutter_Change_Cycle=12122
,P_X_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger=12123
,P_X_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger=12124
,P_X_Cathode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger=12125
,P_X_Anode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger=12126
,P_X_Stack_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger=12127
,P_Interlock_Messege_Confirmed=12128
,P_X_MC_Communication_HeartBit=12129
,P_SV_Cathode_Count=12130
,P_SV_Anode_Count=12131
,P_SV_Cathode_Reference_Thickness=12135
,P_SV_Anode_Reference_Thickness=12136
,P_SV_Stack_Table_Damper_Cathode=12137
,P_SV_Stack_Table_Damper_Anode=12138
,P_SV_Sepa_Reference_Thickness=12139
,P_SV_Jelly_Roll_Width=12140
,P_Cathode_Align_Continuous_NG_Recipe=12141
,P_Anode_Align_Continuous_NG_Recipe=12142
,P_Stack_Vision_Continuous_NG_Recipe=12143
,P_PLC_Recipe_EPC_Sepa_Count=12144
,P_PLC_Recipe_Revise_Sepa=12145
,P_X_PLC_to_PMAC_Correction_Value=12146
,P_Anode_Align_Continuous_NG_Check_range=12147
,P_Cathode_Align_Continuous_NG_Check_range=12148
,P_Stack_Align_Continuous_NG_Check_range=12149
,P_Cathode_Surface_Continuous_NG_Recipe=12150
,P_Anode_Surface_Continuous_NG_Recipe=12151
,P_Cathode_Surface_Continuous_NG_Check_range=12152
,P_Anode_Surface_Continuous_NG_Check_range=12153
,P_Servo_Dancer_Alarm_Maximum_Angle_Value=12154
,P_Servo_Dancer_Alarm_Minimum_Angle_Value=12155
,P_Current_Selected_Spool_Rev_Counts_Init_Read=12156
,P_Spool_ARC_Distance_mm=12157
,P_ARC_Upper_Request_Sepa_Thickness_mm=12158
,P_ARC_Lower_Request_Sepa_Thickness_mm=12159
,P_Selected_Spool_Arc_Set_Rev_Counts_Value=12160
,P_Set_Cnt_FR_Moving_Sepa_ARC=12161
,P_Current_Selected_Spool_Rev_Counts=12162
,P_AI_Cathode_Clamp_Damper=12163
,P_AI_Anode_Clamp_Damper=12164
,P_Select_Sheet_Value=12175
,P_BTN_Config_Setup_Mode_Select=12176
,P_Sepa_Thickness_Max_Value=12177
,P_AI_Cathode_Clamp_Damper_Zero_Mpa_Analog_Value=12178
,P_AI_Anode_Clamp_Damper_Zero_Mpa_Analog_Value=12179
,P_Accumulated_Movement_MM_Unit_Cathode_1ST_pnp=12180
,P_Accumulated_Movement_MM_Unit_Anode_1ST_pnp=12181
,P_Accumulated_Movement_MM_Unit_Cathode_2nd_pnp=12182
,P_Accumulated_Movement_MM_Unit_Anode_2nd_pnp=12183
,P_AI_Anode_Clamp_Damper_Mpa=12184
,P_AI_Cathode_Clamp_Damper_Mpa=12185
,P_Current_Whole_Stack_Jelly_Roll_Thinckness_mm=12186
,P_Upper_Sepa_Current_Thickness_um=12187
,P_Lower_Sepa_Current_Thickness_um=12188
,P_Spool_Rotate_Distance=12189
,Spool_Diameter=12190
,P_Current_FR_Moving_Cnt_To_PlC=12191
,P_MES_APC_Select_Btn=12192
,P_AO_Anode_Clamp_Damper=12193
,P_AO_Cathode_Clamp_Damper=12194
,P_Sepa_Length=12195
,P_Minus_Limit_Detect_Popup_Flag=12196
,P_Plus_Limit_Detect_Popup_Flag=12197
,P_Fatal_Fe_Limit_Detect_Popup_Flag=12198
,P_Emergency_Alarm_Popup_Flag=12199
,P_SepaArcing_Popup_Flag=12200
,P_Y_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger=12201
,P_Y_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger=12202
,P_Y_Cathode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger=12203
,P_Y_Anode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger=12204
,P_Y_Stack_Align_Calibration_twisted_Cycle_Stop_Request_Trigger=12205
,P_Current_Selected_Sheet_Value=12206
,P_Status_Config_Mode_Select=12207
,P_Sepa_Thickness_Jig_Value=12208
,P_PV_Stack_Table_Damper_Cathode=12209
,P_PV_Stack_Table_Damper_Anode=12210
,P_Discharge_Standby_Pos_Tack_Time=12211
,P_Discharge_FR_MainZ_Pos_Tack_Time=12212
,P_Discharge_Unloader_Go_Pos_Tack_Time=12213
,P_Discharge_SubZ_Down_Pos_Tack_Time=12214
,P_Discharge_Unloader_Cutting_Pos_Tack_Time=12215
,P_Discharge_FR_Clamp_ON_Complete_Tack_Time=12216
,P_Discharge_Cutting_Complete_Tack_Time=12217
,P_Discharge_Motion_PG_Active_Starting_Tack_Time=12218
,P_Discharge_Motion_PG_Active_Complete_Tack_Time=12219
,P_Discharge_Sepa_First_Complete_Tack_Time=12220
,P_Discharge_Complete_Tack_Time=12221
,P_Discharge_Total_Tack_Time=12222
,P_Anode_Clamp_TackTime_Array0=12223
,P_Anode_Clamp_TackTime_Array1=12224
,P_Anode_Clamp_TackTime_Array2=12225
,P_Anode_Clamp_TackTime_Array3=12226
,P_Anode_Clamp_TackTime_Array4=12227
,P_Anode_Clamp_TackTime_Array5=12228
,P_Anode_Clamp_TackTime_Array6=12229
,P_Anode_Clamp_TackTime_Array7=12230
,P_Anode_Clamp_TackTime_Array8=12231
,P_Anode_Clamp_TackTime_Array9=12232
,P_Anode_Clamp_TackTime_Array10=12233
,P_Stacking_TackTime_Array0=12234
,P_Stacking_TackTime_Array1=12235
,P_Stacking_TackTime_Array2=12236
,P_Stacking_TackTime_Array3=12237
,P_Stacking_TackTime_Array4=12238
,P_Stacking_TackTime_Array5=12239
,P_Stacking_TackTime_Array6=12240
,P_Stacking_TackTime_Array7=12241
,P_Stacking_TackTime_Array8=12242
,P_Stacking_TackTime_Array9=12243
,P_Stacking_TackTime_Array10=12244
,P_Cathode_Clamp_TackTime_Array0=12245
,P_Cathode_Clamp_TackTime_Array1=12246
,P_Cathode_Clamp_TackTime_Array2=12247
,P_Cathode_Clamp_TackTime_Array3=12248
,P_Cathode_Clamp_TackTime_Array4=12249
,P_Cathode_Clamp_TackTime_Array5=12250
,P_Cathode_Clamp_TackTime_Array6=12251
,P_Cathode_Clamp_TackTime_Array7=12252
,P_Cathode_Clamp_TackTime_Array8=12253
,P_Cathode_Clamp_TackTime_Array9=12254
,P_Cathode_Clamp_TackTime_Array10=12255
,P_JellyRoll_Out_TackTime_Array0=12256
,P_JellyRoll_Out_TackTime_Array1=12257
,P_JellyRoll_Out_TackTime_Array2=12258
,P_JellyRoll_Out_TackTime_Array3=12259
,P_JellyRoll_Out_TackTime_Array4=12260
,P_JellyRoll_Out_TackTime_Array5=12261
,P_JellyRoll_Out_TackTime_Array6=12262
,P_JellyRoll_Out_TackTime_Array7=12263
,P_JellyRoll_Out_TackTime_Array8=12264
,P_JellyRoll_Out_TackTime_Array9=12265
,P_JellyRoll_Out_TackTime_Array10=12266
,P_Anode_1th_TackTime_Array0=12267
,P_Anode_1th_TackTime_Array1=12268
,P_Anode_1th_TackTime_Array2=12269
,P_Anode_1th_TackTime_Array3=12270
,P_Anode_1th_TackTime_Array4=12271
,P_Anode_1th_TackTime_Array5=12272
,P_Anode_1th_TackTime_Array6=12273
,P_Anode_1th_TackTime_Array7=12274
,P_Anode_1th_TackTime_Array8=12275
,P_Anode_1th_TackTime_Array9=12276
,P_Anode_1th_TackTime_Array10=12277
,P_Cathode_1th_TackTime_Array0=12278
,P_Cathode_1th_TackTime_Array1=12279
,P_Cathode_1th_TackTime_Array2=12280
,P_Cathode_1th_TackTime_Array3=12281
,P_Cathode_1th_TackTime_Array4=12282
,P_Cathode_1th_TackTime_Array5=12283
,P_Cathode_1th_TackTime_Array6=12284
,P_Cathode_1th_TackTime_Array7=12285
,P_Cathode_1th_TackTime_Array8=12286
,P_Cathode_1th_TackTime_Array9=12287
,P_Cathode_1th_TackTime_Array10=12288
,P_Anode_2th_TackTime_Array0=12289
,P_Anode_2th_TackTime_Array1=12290
,P_Anode_2th_TackTime_Array2=12291
,P_Anode_2th_TackTime_Array3=12292
,P_Anode_2th_TackTime_Array4=12293
,P_Anode_2th_TackTime_Array5=12294
,P_Anode_2th_TackTime_Array6=12295
,P_Anode_2th_TackTime_Array7=12296
,P_Anode_2th_TackTime_Array8=12297
,P_Anode_2th_TackTime_Array9=12298
,P_Anode_2th_TackTime_Array10=12299
,P_Cathode_2th_TackTime_Array0=12300
,P_Cathode_2th_TackTime_Array1=12301
,P_Cathode_2th_TackTime_Array2=12302
,P_Cathode_2th_TackTime_Array3=12303
,P_Cathode_2th_TackTime_Array4=12304
,P_Cathode_2th_TackTime_Array5=12305
,P_Cathode_2th_TackTime_Array6=12306
,P_Cathode_2th_TackTime_Array7=12307
,P_Cathode_2th_TackTime_Array8=12308
,P_Cathode_2th_TackTime_Array9=12309
,P_Cathode_2th_TackTime_Array10=12310
,P_Anode_Align_Table_TackTime_Array0=12311
,P_Anode_Align_Table_TackTime_Array1=12312
,P_Anode_Align_Table_TackTime_Array2=12313
,P_Anode_Align_Table_TackTime_Array3=12314
,P_Anode_Align_Table_TackTime_Array4=12315
,P_Anode_Align_Table_TackTime_Array5=12316
,P_Anode_Align_Table_TackTime_Array6=12317
,P_Anode_Align_Table_TackTime_Array7=12318
,P_Anode_Align_Table_TackTime_Array8=12319
,P_Anode_Align_Table_TackTime_Array9=12320
,P_Anode_Align_Table_TackTime_Array10=12321
,P_Cathode_Align_Table_TackTime_Array0=12322
,P_Cathode_Align_Table_TackTime_Array1=12323
,P_Cathode_Align_Table_TackTime_Array2=12324
,P_Cathode_Align_Table_TackTime_Array3=12325
,P_Cathode_Align_Table_TackTime_Array4=12326
,P_Cathode_Align_Table_TackTime_Array5=12327
,P_Cathode_Align_Table_TackTime_Array6=12328
,P_Cathode_Align_Table_TackTime_Array7=12329
,P_Cathode_Align_Table_TackTime_Array8=12330
,P_Cathode_Align_Table_TackTime_Array9=12331
,P_Cathode_Align_Table_TackTime_Array10=12332
,P_Anode_NG_PNP_TackTime_Array0=12333
,P_Anode_NG_PNP_TackTime_Array1=12334
,P_Anode_NG_PNP_TackTime_Array2=12335
,P_Anode_NG_PNP_TackTime_Array3=12336
,P_Anode_NG_PNP_TackTime_Array4=12337
,P_Anode_NG_PNP_TackTime_Array5=12338
,P_Anode_NG_PNP_TackTime_Array6=12339
,P_Anode_NG_PNP_TackTime_Array7=12340
,P_Anode_NG_PNP_TackTime_Array8=12341
,P_Anode_NG_PNP_TackTime_Array9=12342
,P_Anode_NG_PNP_TackTime_Array10=12343
,P_Cathode_NG_PNP_TackTime_Array0=12344
,P_Cathode_NG_PNP_TackTime_Array1=12345
,P_Cathode_NG_PNP_TackTime_Array2=12346
,P_Cathode_NG_PNP_TackTime_Array3=12347
,P_Cathode_NG_PNP_TackTime_Array4=12348
,P_Cathode_NG_PNP_TackTime_Array5=12349
,P_Cathode_NG_PNP_TackTime_Array6=12350
,P_Cathode_NG_PNP_TackTime_Array7=12351
,P_Cathode_NG_PNP_TackTime_Array8=12352
,P_Cathode_NG_PNP_TackTime_Array9=12353
,P_Cathode_NG_PNP_TackTime_Array10=12354
,P_Sepa_Unwinder_TackTime_Array0=12355
,P_Sepa_Unwinder_TackTime_Array1=12356
,P_Sepa_Unwinder_TackTime_Array2=12357
,P_Sepa_Unwinder_TackTime_Array3=12358
,P_Sepa_Unwinder_TackTime_Array4=12359
,P_Sepa_Unwinder_TackTime_Array5=12360
,P_Sepa_Unwinder_TackTime_Array6=12361
,P_Sepa_Unwinder_TackTime_Array7=12362
,P_Sepa_Unwinder_TackTime_Array8=12363
,P_Sepa_Unwinder_TackTime_Array9=12364
,P_Sepa_Unwinder_TackTime_Array10=12365
,P_Sepa_Unwinder_TackTime_Array11=12366
,P_1st_Unloader_TackTime_Array0=12367
,P_1st_Unloader_TackTime_Array1=12368
,P_1st_Unloader_TackTime_Array2=12369
,P_1st_Unloader_TackTime_Array3=12370
,P_1st_Unloader_TackTime_Array4=12371
,P_1st_Unloader_TackTime_Array5=12372
,P_1st_Unloader_TackTime_Array6=12373
,P_1st_Unloader_TackTime_Array7=12374
,P_1st_Unloader_TackTime_Array8=12375
,P_1st_Unloader_TackTime_Array9=12376
,P_1st_Unloader_TackTime_Array10=12377
,P_Cathode_1st_Vacuum_TackTime_Array1=12378
,P_Cathode_1st_Vacuum_TackTime_Array2=12379
,P_Cathode_1st_Vacuum_TackTime_Array3=12380
,P_Cathode_1st_Vacuum_TackTime_Array4=12381
,P_Cathode_1st_Vacuum_TackTime_Array5=12382
,P_Cathode_1st_Vacuum_TackTime_Array6=12383
,P_Cathode_1st_Vacuum_TackTime_Array7=12384
,P_Cathode_1st_Vacuum_TackTime_Array8=12385
,P_Cathode_1st_Vacuum_TackTime_Array9=12386
,P_Cathode_1st_Vacuum_TackTime_Array10=12387
,P_Cathode_Align_Vacuum_TackTime_Array1=12388
,P_Cathode_Align_Vacuum_TackTime_Array2=12389
,P_Cathode_Align_Vacuum_TackTime_Array3=12390
,P_Cathode_Align_Vacuum_TackTime_Array4=12391
,P_Cathode_Align_Vacuum_TackTime_Array5=12392
,P_Cathode_Align_Vacuum_TackTime_Array6=12393
,P_Cathode_Align_Vacuum_TackTime_Array7=12394
,P_Cathode_Align_Vacuum_TackTime_Array8=12395
,P_Cathode_Align_Vacuum_TackTime_Array9=12396
,P_Cathode_Align_Vacuum_TackTime_Array10=12397
,P_Cathode_2nd_Vacuum_TackTime_Array1=12398
,P_Cathode_2nd_Vacuum_TackTime_Array2=12399
,P_Cathode_2nd_Vacuum_TackTime_Array3=12400
,P_Cathode_2nd_Vacuum_TackTime_Array4=12401
,P_Cathode_2nd_Vacuum_TackTime_Array5=12402
,P_Cathode_2nd_Vacuum_TackTime_Array6=12403
,P_Cathode_2nd_Vacuum_TackTime_Array7=12404
,P_Cathode_2nd_Vacuum_TackTime_Array8=12405
,P_Cathode_2nd_Vacuum_TackTime_Array9=12406
,P_Cathode_2nd_Vacuum_TackTime_Array10=12407
,P_Anode_1st_Vacuum_TackTime_Array1=12408
,P_Anode_1st_Vacuum_TackTime_Array2=12409
,P_Anode_1st_Vacuum_TackTime_Array3=12410
,P_Anode_1st_Vacuum_TackTime_Array4=12411
,P_Anode_1st_Vacuum_TackTime_Array5=12412
,P_Anode_1st_Vacuum_TackTime_Array6=12413
,P_Anode_1st_Vacuum_TackTime_Array7=12414
,P_Anode_1st_Vacuum_TackTime_Array8=12415
,P_Anode_1st_Vacuum_TackTime_Array9=12416
,P_Anode_1st_Vacuum_TackTime_Array10=12417
,P_Anode_Align_Vacuum_TackTime_Array1=12418
,P_Anode_Align_Vacuum_TackTime_Array2=12419
,P_Anode_Align_Vacuum_TackTime_Array3=12420
,P_Anode_Align_Vacuum_TackTime_Array4=12421
,P_Anode_Align_Vacuum_TackTime_Array5=12422
,P_Anode_Align_Vacuum_TackTime_Array6=12423
,P_Anode_Align_Vacuum_TackTime_Array7=12424
,P_Anode_Align_Vacuum_TackTime_Array8=12425
,P_Anode_Align_Vacuum_TackTime_Array9=12426
,P_Anode_Align_Vacuum_TackTime_Array10=12427
,P_Anode_2nd_Vacuum_TackTime_Array1=12428
,P_Anode_2nd_Vacuum_TackTime_Array2=12429
,P_Anode_2nd_Vacuum_TackTime_Array3=12430
,P_Anode_2nd_Vacuum_TackTime_Array4=12431
,P_Anode_2nd_Vacuum_TackTime_Array5=12432
,P_Anode_2nd_Vacuum_TackTime_Array6=12433
,P_Anode_2nd_Vacuum_TackTime_Array7=12434
,P_Anode_2nd_Vacuum_TackTime_Array8=12435
,P_Anode_2nd_Vacuum_TackTime_Array9=12436
,P_Anode_2nd_Vacuum_TackTime_Array10=12437
,P_Final_Roll_TackTime_Array1=12438
,P_Final_Roll_TackTime_Array2=12439
,P_Final_Roll_TackTime_Array3=12440
,P_Final_Roll_TackTime_Array4=12441
,P_Final_Roll_TackTime_Array5=12442
,P_Final_Roll_TackTime_Array6=12443
,P_Final_Roll_TackTime_Array7=12444
,P_Final_Roll_TackTime_Array8=12445
,P_Final_Roll_TackTime_Array9=12446
,P_Final_Roll_TackTime_Array10=12447
,P_Sepa_ARC_TackTime_Array1=12448
,P_Sepa_ARC_TackTime_Array2=12449
,P_Sepa_ARC_TackTime_Array3=12450
,P_Sepa_ARC_TackTime_Array4=12451
,P_Sepa_ARC_TackTime_Array5=12452
,P_Sepa_ARC_TackTime_Array6=12453
,P_Sepa_ARC_TackTime_Array7=12454
,P_Sepa_ARC_TackTime_Array8=12455
,P_Sepa_ARC_TackTime_Array9=12456
,P_Sepa_ARC_TackTime_Array10=12457
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array1=12458
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array2=12459
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array3=12460
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array4=12461
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array5=12462
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array6=12463
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array7=12464
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array8=12465
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array9=12466
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array10=12467
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array1=12468
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array2=12469
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array3=12470
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array4=12471
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array5=12472
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array6=12473
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array7=12474
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array8=12475
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array9=12476
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array10=12477
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array1=12478
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array2=12479
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array3=12480
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array4=12481
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array5=12482
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array6=12483
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array7=12484
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array8=12485
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array9=12486
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array10=12487
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array1=12488
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array2=12489
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array3=12490
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array4=12491
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array5=12492
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array6=12493
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array7=12494
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array8=12495
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array9=12496
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array10=12497
,P_PACK_ML_Status_bit=12498
,P_Whole_Stacking_TackTime_MES_Report_Flag=12499
,P_JellyRoll_Out_TackTime_MES_Report_Flag=12500
,P_PV_Cathode_Count=12501
,P_PV_Anode_Count=12502
,P_PV_Cathode_NG_TR_NG_Count=12507
,P_PV_Anode_NG_TR_NG_Count=12508
,P_PV_Anode_Retry_NG_Count=12509
,P_PV_Cathode_Retry_NG_Count=12510
,P_PV_Align_INPUT_Count=12511
,P_Unloader_Grip_Pressure=12512
,P_Unloader_Heatmeter=12513
,P_EPC_Y_StandBy=12564
,P_SV_Read_Enable_Flag=12565
,P_Spool_Rotate_Distance_mm=12566
,P_Cathode_Clamp_Gantry=12667
,P_Anode_Clamp_Gantry=12668
,P_SV_Separator_Heting_Cutter_Change_Period=12669
,P_Cathode_Picker_Cylinder_Count=12682
,P_Anode_Picker_Cylinder_Count=12683
,P_SV_Stack_Table_Cathode_Reference_Value=12684
,P_SV_Stack_Table_Anode_Reference_Value=12685
,P_CA_DR_Offset=12686
,P_AN_DR_Offset=12687
,P_First_DR_Offset=12688
,P_Last_DR_Offset=12689
,P_BTN_QC_Sample_Flag=12690
,P_BTN_Loss_Sample_Flag=12691
,P_MSA_Sample_Flag=12692
,P_Sample_JR_Recipe_Count=12693
,P_Ca_Clamp_Y_Move=12694
,P_An_Clamp_Y_Move=12695
,P_Stack_Table_JR_Exist_Flag=12696
,P_Program_Monitoring_Lamp_Cell_Ready=12697
,P_Program_Monitoring_Lamp_Ready_Pos=12698
,P_Program_Monitoring_Lamp_Pause_Pos=12699
,P_Program_Monitoring_Lamp_Motion_Run=12700
,P_Program_Monitoring_Lamp_Cell_Remove=12701
,P_Program_Monitoring_Lamp_Cell_Supply=12702
,P_Program_Monitoring_Lamp_Sepa_Mode=12703
,P_Program_Monitoring_Lamp_Semi_Run=12704
,P_Program_Monitoring_Lamp_Stack_Mode=12705
,P_Program_Monitoring_Lamp_Anode_Aling_NG=12706
,P_Program_Monitoring_Lamp_Anode_Retry_NG=12707
,P_Program_Monitoring_Lamp_Cathode_Align_NG=12708
,P_Program_Monitoring_Lamp_Cathode_Retry_NG=12709
,P_Program_Monitoring_Lamp_Last_Stack_Mode=12710
,P_Program_Monitoring_Lamp_Jelly_Roll_OK=12711
,P_Program_Monitoring_Lamp_Jelly_Roll_NG=12712
,P_Program_Monitoring_Lamp_Jelly_Roll_Sepa=12713
,P_Program_Monitoring_Lamp_Cell_Out_Pos=12714
,P_Program_Monitoring_Lamp_Cell_Out_Mode=12715
,P_Master_Motion_Program_Flag=12716
,P_Master_Motion_CycleStop_Flag=12757
,P_PLC_08_Program_Ver=12808
,P_Old_PMAC_Commands=12809
,P_Old_PMAC_Status=12810
,P_Old_PMAC_Current_Mode=12811
,P_Mode_Function_State_Machine=12812
,P_PMAC_Commands=12813
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
,P_PMAC_Current_Mode=13048
,P_PMAC_Status=13049
,P_PMAC_Old_Mode=13050
,P_Ready_Tack_Chk_Timer=13051
,P_PLC09_Common_Command_Flag=13052
,P_PLC09_Common_Command_Complete_Bit=13053
,P_PLC09_Common_Execute_Flag=13054
,P_PLC09_Common_Execute_Complete_Bit=13055
,P_PLC09_Status=13056
,P_PLC09_Libraries_Var=13057
,P_Master_Motion_Program_ON_Flag=13058
,P_Master_Motion_Program_ON_Complete_Bit=13059
,P_Master_Motion_Program_OFF_Flag=13060
,P_Master_Motion_Program_OFF_Complete_Bit=13061
,P_Common_Function_Timbase_ON_Flag=13062
,P_Common_Function_Timbase_ON_Complete_Bit=13063
,P_Common_Function_Timbase_OFF_Flag=13064
,P_Common_Function_Timbase_OFF_Complete_Bit=13065
,P_Common_Function_Monitoring_Lamp_OFF_Flag=13066
,P_Common_Function_Monitoring_Lamp_OFF_Complete_Bit=13067
,P_Common_Function_Slave_Motion_Common_Init_Flag=13068
,P_Common_Function_Slave_Motion_Common_Init_Complete_Bit=13069
,P_Common_Function_OlD_Jog_Speed_Save_ON_Flag=13070
,P_Common_Function_OlD_Jog_Speed_Save_ON_Complete_Bit=13071
,P_Auto_Resetting_Sum_Ready_Pos_Check_Flag=13072
,P_Auto_Resetting_Sum_Ready_Pos_Check_Complete_bit=13073
,P_Manual_Resetting_Sum_Ready_Pos_Check_Flag=13074
,P_Manual_Resetting_Sum_Ready_Pos_Check_Complete_bit=13075
,P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Flag=13076
,P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Complete_Bit=13077
,P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Flag=13078
,P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Complete_Bit=13079
,P_Motion_Target_Position_Complete=13080
,P_SM_Auto_Run_Layer_Management=13081
,P_Buffer_Mode_Status_Sequence=13082
,P_SM_Sub_Function_Pause=13083
,P_PLC09_Resetting_Position_Check_State_Machine=13084
,P_PLC09_Resetting_Position_Moving_State_Machine=13085
,P_SM_Resetting_Pause_Position=13128
,P_20per_Vac_Error_Cycle_Stop_Flag=13129
,P_MNTR_PLC23_ARC_Complete=13130
,P_FUNCTION_PLC13_Sepa_Trigger_Enable=13131
,P_PLC_Recipe_PLC2_Revise_Sepa=13132
,P_Auto_Semi_Init_Status=13133
,P_Auto_Semi_Init_Chk_Bit=13134
,P_Old_PLC_HeartBit_Flag=13135
,P_PLC09_Init_Flag=13136
,P_Check_IDLE_CF_Flag=13137
,P_Check_EXECUTE_CF_Flag=13138
,P_Check_COMPLETING_CF_Flag=13139
,P_Check_COMPLETE_CF_Flag=13140
,P_Check_HOLDING_CF_Flag=13141
,P_Check_HOLD_CF_Flag=13142
,P_Check_UNHOLDING_CF_Flag=13143
,P_Check_SUSPENDING_CF_Flag=13144
,P_Check_SUSPENDED_CF_Flag=13145
,P_Check_UNSUSPENDING_CF_Flag=13146
,P_Check_STOPPED_CF_Flag=13147
,P_Check_ABORTED_CF_Flag=13148
,P_Check_CLEARING_CF_Flag=13149
,P_Check_IDLE_CF=13150
,P_Check_EXECUTE_CF=13151
,P_Check_COMPLETING_CF=13152
,P_Check_COMPLETE_CF=13153
,P_Check_HOLDING_CF=13154
,P_Check_HOLD_CF=13155
,P_Check_UNHOLDING_CF=13156
,P_Check_SUSPENDING_CF=13157
,P_Check_SUSPENDED_CF=13158
,P_Check_UNSUSPENDING_CF=13159
,P_Check_STOPPED_CF=13160
,P_Check_ABORTED_CF=13161
,P_Check_CLEARING_CF=13162
,P_Check_STOPPING_CF=13163
,P_Check_STARTING_CF=13164
,P_Check_RESETTING_CF=13165
,P_Check_STARTTING_CF=13166
,P_Queue_Clear=13167
,P_PLC09_Alarm_Test_Flag=13168
,P_PLC09_Test_Temp=13169
,P_PLC01_STOP_Queue_Complete_Flag=13170
,P_PMAC_All_Home_Cmd=13171
,P_PMAC_All_Home_Status=13172
,P_PMAC_Master_Following_Use_Flag=13173
,PnP_Belt_Waring_Pos=13174
,P_Old_X_PLC_Sync_Heart_Bit=13175
,P_Stack_Heart_Bit_Sync_Flag=13176
,P_Stack_Heart_Bit_Sunc_Complete_Bit=13177
,P_Resetting_Init_Module_RTN=13178
,P_PLC09_MNTR=13179
,P_Unloder_PNP_Home_IL_Pos=13180
,P_ECAT_Slave_Err_Bit=13181
,P_MC_Power_Down_Flag=13182
,P_Old_MC_Power_Down_Flag=13183
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
,P_Modbus_Delay_Timer=13184
,P_Modbus_Connect_Status=13185
,P_Modbus_Reconnect_MNTR=13186
,P_Ecat_Reconn_Chk_Lamp=13187
,P_MC_Reconn_Chk_Lamp=13188
,P_Cathode_1st_Vac_Set_Time=13189
,P_Cathode_2nd_Vac_Set_Time=13190
,P_Cathode_Align_Vac_Set_Time=13191
,P_Cathode_Align_Blow_Set_Time=13192
,P_Anode_1st_Vac_Set_Time=13193
,P_Anode_2nd_Vac_Set_Time=13194
,P_Sepa_Consume_Mode_Thickness_rate=13195
,P_Sepa_Anode_Recipe_Count=13196
,P_Sepa_Cathode_Recipe_Count=13197
,P_Discharge_Cathode_Recipe_Count=13198
,P_Discharge_Anode_Recipe_Count=13199
,P_Suspend_Discharge_Cathode_Counter=13200
,P_Suspend_Discharge_Anode_Counter=13201
,P_Suspend_Discharge_Waiting_Flag=13202
,P_Com_ARC_Sepa_Consume_Mode_Flag=13203
,P_Com_EPC_Sepa_Consume_Mode_Flag=13204
,P_Com_User_Sepa_Consume_Mode_Flag=13205
,P_Com_Dry_Mode_Flag=13206
,P_SM_Recipe_Value_Management=13207
,P_Sepa_Mode_Recipe_Count=13208
,P_Sepa_Mode_EPC_Recipe_Count=13209
,P_ARC_End_Sepa_Recipe_Count=13210
,P_Cathode_Align_Continuous_NG_Stop_Select=13311
,P_Anode_Align_Continuous_NG_Stop_Select=13312
,P_Stack_Vision_NG_Enable=13313
,P_Cathode_Surface_Continuous_NG_Stop_Select=13314
,P_Anode_Surface_Continuous_NG_Stop_Select=13315
,P_Anode_Trigger_IO_Test_Vision_PLC_Loop=13316
,P_Anode_Trigger_IO_Test_Motion_Loop=13317
,P_Cathode_Trigger_IO_Test_Vision_PLC_Loop=13318
,P_Cathode_Trigger_IO_Test_Motion_Loop=13319
,P_Stack_Trigger_IO_Test_Vision_PLC_Loop=13320
,P_Stack_Trigger_IO_Test_Motion_Loop=13321
,P_PLC12_Continuous_Buffer_Reset_Flag=13322
,P_PLC12_Anode_Sheet_Pick_Up_Flag=13338
,P_PLC12_Cathode_Sheet_Pick_Up_Flag=13339
,P_Hold_Anode_Sheet_Pick_Up_Flag=13340
,P_Hold_Cathode_Sheet_Pick_Up_Flag=13341
,P_Sheet_Interface_Complete_Pos=13342
,P_Anode_Sheet_Interface_Complete_Pos=13343
,P_Cathode_Sheet_Interface_Complete_Pos=13344
,P_Anode_2nd_TR_Maint_Check=13345
,P_Cathode_2nd_TR_Maint_Check=13346
,P_PLC12_Vacuum_1st_Cathode_MNTR_Timer=13384
,P_PLC12_Vacuum_2nd_Cathode_MNTR_Timer=13385
,P_PLC12_Vacuum_NG_Cathode_MNTR_Timer=13386
,P_PLC12_Vacuum_Align_Cathode_MNTR_Timer=13387
,P_PLC12_Vacuum_1st_Anode_MNTR_Timer=13388
,P_PLC12_Vacuum_2nd_Anode_MNTR_Timer=13389
,P_PLC12_Vacuum_NG_Anode_MNTR_Timer=13390
,P_PLC12_Vacuum_Align_Anode_MNTR_Timer=13391
,P_PLC12_Vacuum_1st_Cathode_Set_Time=13392
,P_PLC12_Vacuum_2nd_Cathode_Set_Time=13393
,P_PLC12_Vacuum_NG_Cathode_Set_Time=13394
,P_PLC12_Vacuum_Align_Cathode_Set_Time=13395
,P_PLC12_Vacuum_1st_Anode_Set_Time=13396
,P_PLC12_Vacuum_2nd_Anode_Set_Time=13397
,P_PLC12_Vacuum_NG_Anode_Set_Time=13398
,P_PLC12_Vacuum_Align_Anode_Set_Time=13399
,P_PLC12_Blow_1st_Cathode_MNTR_Timer=13440
,P_PLC12_Blow_2nd_Cathode_MNTR_Timer=13441
,P_PLC12_Blow_NG_Cathode_MNTR_Timer=13442
,P_PLC12_Blow_Align_Cathode_MNTR_Timer=13443
,P_PLC12_Blow_1st_Anode_MNTR_Timer=13444
,P_PLC12_Blow_2nd_Anode_MNTR_Timer=13445
,P_PLC12_Blow_NG_Anode_MNTR_Timer=13446
,P_PLC12_Blow_Align_Anode_MNTR_Timer=13447
,P_PLC12_Blow_1st_Cathode_Set_Time=13448
,P_PLC12_Blow_2nd_Cathode_Set_Time=13449
,P_PLC12_Blow_NG_Cathode_Set_Time=13450
,P_PLC12_Blow_Align_Cathode_Set_Time=13451
,P_PLC12_Blow_1st_Anode_Set_Time=13452
,P_PLC12_Blow_2nd_Anode_Set_Time=13453
,P_PLC12_Blow_NG_Anode_Set_Time=13454
,P_PLC12_Blow_Align_Anode_Set_Time=13455
,P_Vacuum_Reentry_Bit=13496
,P_Blow_Reentry_Bit=13497
,P_top=13578
,P_Queue_stack_top=13579
,P_Step_stack_top=13580
,P_Index_stack_top=13581
,P_Status_stack_top=13582
,NN_Step=13583
,NN_Index=13584
,P_PLC12_Frist=13590
,P_SM_Auto_Run_Status_Management=13591
,P_SM_Status_Main_Memory_Management=13592
,P_SM_Cell_Memory_Management=13593
,P_PLC12_Vacuum_Unit_Data=13626
,P_PLC12_Blow_Unit_Data=13627
,P_Stack_Algorithme_Cmd_Event_Status=13628
,P_PLC12_vacuum_Event_Status=13629
,P_PLC12_Blow_Event_status=13630
,P_PLC12_vacuum_DIO_Observer_Status=13631
,P_PLC12_Blow_DIO_Observer_Status=13632
,P_Resetting_Vacuum_MNTR_State_Machine=13633
,P_Heart_Bit_Time=13634
,P_Dancer_Angle_Alarm_Timer_Flag=13635
,P_Dancer_Angle_Alarm_Check_Timer=13636
,P_BTN_LED_LAMP=13637
,P_Old_BTN_LED_LAMP=13638
,P_PLC_TO_PMAC_Work_Confirm_Operation_Cnt=13639
,P_VISION_TO_PMAC_Work_Confirm_Operation_Ack_Cnt=13640
,P_Ca_AT_Retry_Cal_Move_Complete=13641
,P_An_AT_Retry_Cal_Move_Complete=13642
,P_Ca_AT_Retry_Cal_Cnt=13643
,P_An_AT_Retry_Cal_Cnt=13644
,P_Ca_AT_Retry_Cal_Complete=13645
,P_An_AT_Retry_Cal_Complete=13646
,P_An_AT_Retry_Cal_Pass=13647
,P_Ca_AT_Retry_Cal_Pass=13648
,P_Ca_Picker_T_Turn_Cnt_Flag=13649
,P_Ca_Picker_T_Turn_Cnt=13650
,P_Ca_Picker_T_Home_Type=13651
,P_An_Picker_T_Turn_Cnt_Flag=13652
,P_An_Picker_T_Turn_Cnt=13653
,P_An_Picker_T_Home_Type=13654
,P_Flag_Vac_Status_Initialize=13655
,P_SM_Vac_Initialize=13656
,P_Flag_Anode_1st_Vac_OFF=13657
,P_Flag_Anode_AT_Vac_OFF=13658
,P_Flag_Anode_2nd_Vac_OFF=13659
,P_Flag_Anode_NG_Vac_OFF=13660
,P_Flag_Cathode_1st_Vac_OFF=13661
,P_Flag_Cathode_AT_Vac_OFF=13662
,P_Flag_Cathode_2nd_Vac_OFF=13663
,P_Flag_Cathode_NG_Vac_OFF=13664
,P_Flag_Anode_1st_Vac_Initial_Alarm=13665
,P_Flag_Anode_AT_Vac_Initial_Alarm=13666
,P_Flag_Anode_2nd_Vac_Initial_Alarm=13667
,P_Flag_Anode_NG_Vac_Initial_Alarm=13668
,P_Flag_Cathode_1st_Vac_Initial_Alarm=13669
,P_Flag_Cathode_AT_Vac_Initial_Alarm=13670
,P_Flag_Cathode_2nd_Vac_Initial_Alarm=13671
,P_Flag_Cathode_NG_Vac_Initial_Alarm=13672
,P_Middle_Discharge_Ignore_Total_Count=13673
,P_Middle_Discharge_Ignore_Stack_Count=13674
,P_Middle_Discharge_Ignore_ON_Signal=13675
,P_Middle_Discharge_Ignore_OFF_Signal=13676
,P_Middle_Discharge_Ignore_Cell_Count=13677
,P_ARC_Middle_Discharge_Ignore_Vision_Check=13678
,P_ARC_Middle_Discharge_Ignore_ON_Flag=13679
,P_Middle_Discharge_Ignore_User_Sepa_Mode_Check=13680
,P_Flag_Sepa_Stack_Mode_CHK=13789
,P_Initialize_Read_Excom_Variables_Flag=13876
,P_Cathode_Clamp_MC_Cylinder_Count=13886
,P_Cathode_Clamp_OP_Cylinder_Count=13887
,P_Anode_Clamp_MC_Cylinder_Count=13888
,P_Anode_Clamp_OP_Cylinder_Count=13889
,P_Cathode_1ST_TR_Cylinder_Count=8003
,P_Anode_1ST_TR_Cylinder_Count=8004
,P_BTN_Cathode_Clamp_inside_Machine_Cylinder_Count_Clear=13890
,P_BTN_Cathode_Clamp_Middle_Cylinder_Count_Clear=13891
,P_BTN_Cathode_Clamp_outside_Machine_Cylinder_Count_Clear=13892
,P_BTN_Anode_Clamp_inside_Machine_Cylinder_Count_Clear=13893
,P_BTN_Anode_Clamp_Middle_Cylinder_Count_Clear=13894
,P_BTN_Anode_Clamp_outside_Machine_Cylinder_Count_Clear=13895
,P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear=13896
,P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear_Old=13897
,P_BTN_Anode_1ST_TR_Cylinder_Count_Clear=13898
,P_BTN_Anode_1ST_TR_Cylinder_Count_Clear_Old=13899
,P_RECIPE_PLC27_Manual_Interval=14915
,P_RECIPE_PLC27_Auto_Interval=14916
,P_Recipe_Speed_Value=15123
,P_Slave6_Target_X_For_Cell_Out=15124
,P_Poistion_error=15325
,P_Recipe_Count_Num=15376
,L_Motor_Status_Update_Interval=15377
,L_Motor_Recipe_Update_Interval=15378
,P_UI_Servo_On_Off=15379
,P_Jog_Sel_Count=15479
,P_User_Jog_Distance=15766
,P_BTN_Sel_Count=16117
,P_PC_BTN_No=16118
,P_BTN_Interlock_Update_Interval=16119
,P_Align_Table_Status_Update_Interval=16120
,P_Jelly_Roll_Total_Count_Old=16121
,P_Old_m4120=16122
,P_Old_m4121=16123
,P_Old_m4122=16124
,P_Old_m4123=16125
,P_Flag_Linear_Enc_Homezero_Complete_M17=16146
,P_Flag_Linear_Enc_Homezero_Complete_M18=16147
,P_Flag_Linear_Enc_Homezero_Complete_M19=16148
,P_Flag_Linear_Enc_Homezero_Complete_M20=16149
,P_CMD_Linear_ENC_Homezero_M17=16150
,P_CMD_Linear_ENC_Homezero_M18=16151
,P_CMD_Linear_ENC_Homezero_M19=16152
,P_CMD_Linear_ENC_Homezero_M20=16153
,P_RECIPE_PLC27_Alltime_Interval=16184
,P_Manual_Memory_Tower_Timer=16185
,P_Memory_Tower_Interval=16186
,P_PLC_14_Status_Cycle_Stop_Flag=16187
,P_Cathode_AlignTable_Cleaning_Pos_Status_Machine=16188
,P_Anode_AlignTable_Cleaning_Pos_Status_Machine=16189
,P_Status_Cathode_AlignTable_Cleaning_Pos=16190
,P_Status_Anode_AlignTable_Cleaning_Pos=16191
,P_CMD_Cathode_AlignTable_Cleaning_Pos=16192
,P_CMD_Anode_AlignTable_Cleaning_Pos=16193
,P_Cathode_2nd_pnp_Cleaning_Mode_Pos=16194
,P_Anode_2nd_pnp_Cleaning_Mode_Pos=16195
,P_Interlock_Test=16196
,P_PNP_Picker_T_Pos=16197
,P_NG_PNP_Pos=16198
,M_Old_X_BTN_Machine_READY=16199
,M_Old_X_BTN_Machine_START=16200
,M_Old_X_BTN_Machine_STOP=16201
,M_Old_X_BTN_Machine_RESET=16202
,M_Old_X_BTN_Machine_MODE=16203
,P_BTN_Motor_Pos_Check_RTN=16204
,P_BTN_Memory_Tower_Check_Bit=16205
,P_PMAC_Status_IDLE_Motor_Not_Pos=16206
,P_PMAC_Status_IDLE_Motor_Pos=16207
,P_BTN_Motor_Pos_Check_Monitor=16208
,P_PackML_Auto_Stop_Bit=16209
,P_BTN_IDLE_Motor_Not_Pos=16210
,M_X_BTN_Machine_Mode=16211
,M_Old_X_BTN_Machine_Mode=16212
,P_Lamp_Blinking_Timer=16213
,P_BTN_Ready_Lamp=16214
,P_BTN_Start_Lamp=16215
,P_BTN_Stop_Lamp=16216
,P_ARC_Name_Plate_Passive_Status=16217
,P_ARC_Passive_Status=16218
,P_NP_Spool_Number=16219
,P_ARC_Page_On=16220
,P_ARC_NP_Upper_Timer=16221
,P_ARC_Upper_Ready=16222
,P_ARC_NP_Upper_3rd_Step_Toggle_Variable=16223
,P_ARC_NP_Upper_7th_Step_Variable=16224
,P_ARC_NP_Upper_7th_Step_Edge_Variable=16225
,P_ARC_NP_Upper_Rot_ReRot_Blinking_Bit=16226
,P_ARC_NP_Lower_Timer=16227
,P_ARC_Lower_Ready=16228
,P_ARC_NP_Lower_3rd_Step_Toggle_Variable=16229
,P_ARC_NP_Lower_7th_Step_Variable=16230
,P_ARC_NP_Lower_7th_Step_Edge_Variable=16231
,P_ARC_NP_Lower_Rot_ReRot_Blinking_Bit=16232
,M_Old_X_ARC_NP_Ready=16233
,M_Old_X_ARC_NP_Unwinder_Rotation=16234
,M_Old_X_ARC_NP_Unwinder_Re_Rotation=16235
,P_Status_Clear_Flag=16236
,P_Status_Clear_RTN=16237
,P_MSA_BTN_On=16238
,P_Align_Take_Off_BTN_ON=16239
,P_ARC_NP_Upper_Ready_Check_Bit=16240
,P_ARC_NP_Lower_Ready_Check_Bit=16241
,P_Stopping_CycleStop_Status=16342
,P_Stopping_CycleStop_Seq_Index=16343
,P_Stopping_CycleStop_Precondition_Seq_Index=16344
,P_Stopping_CycleStop_Module_Status=16345
,P_Stopping_CycleStop_Cmd=16346
,P_Stopping_CycleStop_State_Machine=16347
,P_Final_Roll_Cathode_Pos_Status=16468
,P_Sheet_Paper_FWD_Pos_Status=16469
,P_Final_Roll_Vision_Pos_Status=16470
,P_Cathode_Clamp_ON_Status=16471
,P_Anode_Clamp_ON_Status=16472
,P_Anode_Clamp_OFF_Status=16473
,P_Partition_Up_Flag=16474
,P_Partition_Down_Flag=16475
,P_Partition_Avoid_Flag=16476
,P_Partition_Avoid_Z_Speed=16477
,P_Partition_Avoid_X_Speed=16478
,P_Partition_Avoid_T_Speed=16479
,P_Partition_Avoid_2nd_T_Pos=16480
,P_Partition_Step_Flag=16481
,P_Partition_1st_Avoid_Offset=16482
,P_Partition_Picker_Avoid_Offset=16483
,P_Partition_Avoid_Check=16484
,P_Anode_NG_PNP_Tact_Time_Start=16565
,P_Cathode_NG_PNP_Tact_Time_Start=16566
,P_Anode_NG_PNP_Tact_Time_End=16567
,P_Cathode_NG_PNP_Tact_Time_End=16568
,P_Tact_Time_Final_Roller_Clamp=16759
,P_Tact_Time_Final_Roller_Unclamp=16760
,P_Tact_Time_Stack_Table_Down=16761
,P_Tact_Time_Stack_Table_Up=16762
,P_Tact_Time_Sepa_Cutting_Down=16763
,P_Tact_Time_Sepa_Cutting_Up=16764
,P_Tact_Time_ARC_Upper_Plate_Up=16765
,P_Tact_Time_ARC_Upper_Plate_Down=16766
,P_Tact_Time_ARC_Upper_Tilting_On=16767
,P_Tact_Time_ARC_Upper_Tilting_Off=16768
,P_Tact_Time_ARC_Upper_Cutter_Fwd=16769
,P_Tact_Time_ARC_Upper_Cutter_Bwd=16770
,P_Tact_Time_ARC_Upper_Clamp_On=16771
,P_Tact_Time_ARC_Upper_Clamp_Off=16772
,P_Tact_Time_ARC_Lower_Plate_Up=16773
,P_Tact_Time_ARC_Lower_Plate_Down=16774
,P_Tact_Time_ARC_Lower_Tilting_On=16775
,P_Tact_Time_ARC_Lower_Tilting_Off=16776
,P_Tact_Time_ARC_Lower_Cutter_Fwd=16777
,P_Tact_Time_ARC_Lower_Cutter_Bwd=16778
,P_Tact_Time_ARC_Lower_Clamp_On=16779
,P_Tact_Time_ARC_Lower_Clamp_Off=16780
,P_Tact_Time_Save_Final_Roller_Clamp_Time=16781
,P_Tact_Time_Save_Final_Roller_Unclamp_Time=16782
,P_Tact_Time_Save_Stack_Table_Down_Time=16783
,P_Tact_Time_Save_Stack_Table_Up_Time=16784
,P_Tact_Time_Save_Sepa_Cutting_Down_Time=16785
,P_Tact_Time_Save_Sepa_Cutting_Up_Time=16786
,P_Tact_Time_Save_ARC_Upper_Plate_Up_Time=16787
,P_Tact_Time_Save_ARC_Upper_Plate_Down_Time=16788
,P_Tact_Time_Save_ARC_Upper_Tilting_On_Time=16789
,P_Tact_Time_Save_ARC_Upper_Tilting_Off_Time=16790
,P_Tact_Time_Save_ARC_Upper_Cutter_Fwd_Time=16791
,P_Tact_Time_Save_ARC_Upper_Cutter_Bwd_Time=16792
,P_Tact_Time_Save_ARC_Upper_Clamp_On_Time=16793
,P_Tact_Time_Save_ARC_Upper_Clamp_Off_Time=16794
,P_Tact_Time_Save_ARC_Lower_Plate_Up_Time=16795
,P_Tact_Time_Save_ARC_Lower_Plate_Down_Time=16796
,P_Tact_Time_Save_ARC_Lower_Tilting_On_Time=16797
,P_Tact_Time_Save_ARC_Lower_Tilting_Off_Time=16798
,P_Tact_Time_Save_ARC_Lower_Cutter_Fwd_Time=16799
,P_Tact_Time_Save_ARC_Lower_Cutter_Bwd_Time=16800
,P_Tact_Time_Save_ARC_Lower_Clamp_On_Time=16801
,P_Tact_Time_Save_ARC_Lower_Clamp_Off_Time=16802
,P_Tact_Time_Array_Init=16923
,P_Last_Run_To_Discharge_Tact_Timer=16924
,P_Last_Run_To_Discharge_Tact_Time=16925
,P_Master_Trigger_Sync_Tact_Timer=16926
,P_Master_Trigger_Sync_Tact_Time=16927
,P_Vision_First_Sepa_Stack_Align_OK_PMAC_Flag=16928
,P_PLC18_EPC_Retry_Mode_Time_Use_Flag=16929
,P_PLC18_Vision_EPC_Correction_Request_Old=16930
,P_PLC18_EPC_Moving_Flag=16931
,P_PLC18_EPC_Moving_Status=16932
,P_PLC18_EPC_Move_State_Machine=16933
,P_PLC18_EPC_Move_Status=16934
,P_PLC18_EPC_inspection_Time=16935
,P_EPC_Insp_Time=16936
,P_EPC_Correction_Time=16937
,P_TEST_Max_EPC_Sensor_Value_um=16938
,P_PLC18_EPC_Moving_Timer=16939
,P_EPC_Axis_Target_Y=16950
,P_Com_After_Sepa_Mode_Status=16951
,P_PLC18_PLC_to_PMAC_Correction_Value=16952
,P_PLC_EPC_Status=16953
,P_EPC_Retry_Over_Alarm_Flag=16954
,P_ARC_EPC_Vision_Value_Apply_Bit=16955
,P_ARC_EPC_Vision_Value_Apply_Flag=16956
,P_ARC_EPC_Vision_Value_Apply_State_Machine=16957
,P_ARC_EPC_Vision_Value_Apply_Timer=16958
,P_ARC_EPC_Vision_Value_Apply_Time=16959
,P_AH_Home_Status=16960
,P_Resetting_All_Home_Command=16961
,P_Homing_Alarm_Time=16962
,P_All_Home_Stop_Cmd=17013
,P_Home_First_Move=17014
,P_DD_M_Home_Pos_Flag=17101
,P_WAIT_INDEX=17102
,P_FR_Cmd_Check_Flag=17153
,P_PV_Separator_Dancer_Pressure=17154
,P_PV_Cathode_Clamp_Pressure=17155
,P_PV_Anoode_Clamp_Pressure=17156
,P_PV_Cathode_Final_Roller_X_Axis=17157
,P_PV_Anode_Final_Roller_X_Axis=17158
,P_PV_Cathode_Clamp_ON_Y1_Axis_Pos=17159
,P_PV_Cathode_Clamp_ON_Y2_Axis_Pos=17160
,P_PV_Cathode_Clamp_ON_Z1_Axis_Pos=17161
,P_PV_Cathode_Clamp_ON_Z2_Axis_Pos=17162
,P_PV_Anode_Clamp_ON_Y1_Axis_Pos=17163
,P_PV_Anode_Clamp_ON_Y2_Axis_Pos=17164
,P_PV_Anode_Clamp_ON_Z1_Axis_Pos=17165
,P_PV_Anode_Clamp_ON_Z2_Axis_Pos=17166
,P_PV_Cathode_2th_AT_T_Axis_Pos=17167
,P_PV_Cathode_2th_ST_T_Axis_Pos=17168
,P_PV_Cathode_2th_AT_Z_Axis_Pos=17169
,P_PV_Cathode_2th_ST_Z_Axis_Pos=17170
,P_PV_Anode_2th_AT_T_Axis_Pos=17171
,P_PV_Anode_2th_ST_T_Axis_Pos=17172
,P_PV_Anode_2th_AT_Z_Axis_Pos=17173
,P_PV_Anode_2th_ST_Z_Axis_Pos=17174
,P_PV_Cathode_1th_Ready_T_Axis_Pos=17175
,P_PV_Cathode_1th_CV_T_Axis_Pos=17176
,P_PV_Cathode_1th_AT_T_Axis_Pos=17177
,P_PV_Cathode_1th_Ready_Z_Axis_Pos=17178
,P_PV_Cathode_1th_CV_Z_Axis_Pos=17179
,P_PV_Cathode_1th_AT_Z_Axis_Pos=17180
,P_PV_Anode_1th_Ready_T_Axis_Pos=17181
,P_PV_Anode_1th_CV_T_Axis_Pos=17182
,P_PV_Anode_1th_AT_T_Axis_Pos=17183
,P_PV_Anode_1th_Ready_Z_Axis_Pos=17184
,P_PV_Anode_1th_CV_Z_Axis_Pos=17185
,P_PV_Anode_1th_AT_Z_Axis_Pos=17186
,P_PV_Cathode_NG_AT_T_Axis_Pos=17187
,P_PV_Cathode_NG_Box_T_Axis_Pos=17188
,P_PV_Anode_NG_AT_T_Axis_Pos=17189
,P_PV_Anode_NG_Box_T_Axis_Pos=17190
,P_SemiRun_Separator_Dancer_Pressure_Flag=17191
,P_SemiRun_Cathode_Clamp_Pressure_Flag=17192
,P_SemiRun_Anoode_Clamp_Pressure_Flag=17193
,P_SemiRun_Cathode_Final_Roller_X_Axis_Flag=17194
,P_SemiRun_Anode_Final_Roller_X_Axis_Flag=17195
,P_SemiRun_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag=17196
,P_SemiRun_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag=17197
,P_SemiRun_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag=17198
,P_SemiRun_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag=17199
,P_SemiRun_Cathode_2th_AT_T_Axis_Pos_Flag=17200
,P_SemiRun_Cathode_2th_ST_T_Axis_Pos_Flag=17201
,P_SemiRun_Cathode_2th_AT_Z_Axis_Pos_Flag=17202
,P_SemiRun_Cathode_2th_ST_Z_Axis_Pos_Flag=17203
,P_SemiRun_Anode_2th_AT_T_Axis_Pos_Flag=17204
,P_SemiRun_Anode_2th_ST_T_Axis_Pos_Flag=17205
,P_SemiRun_Anode_2th_AT_Z_Axis_Pos_Flag=17206
,P_SemiRun_Anode_2th_ST_Z_Axis_Pos_Flag=17207
,P_SemiRun_Cathode_1th_Ready_T_Axis_Pos_Flag=17208
,P_SemiRun_Cathode_1th_CV_T_Axis_Pos_Flag=17209
,P_SemiRun_Cathode_1th_AT_T_Axis_Pos_Flag=17210
,P_SemiRun_Cathode_1th_Ready_Z_Axis_Pos_Flag=17211
,P_SemiRun_Cathode_1th_CV_Z_Axis_Pos_Flag=17212
,P_SemiRun_Cathode_1th_AT_Z_Axis_Pos_Flag=17213
,P_SemiRun_Anode_1th_Ready_T_Axis_Pos_Flag=17214
,P_SemiRun_Anode_1th_CV_T_Axis_Pos_Flag=17215
,P_SemiRun_Anode_1th_AT_T_Axis_Pos_Flag=17216
,P_SemiRun_Anode_1th_Ready_Z_Axis_Pos_Flag=17217
,P_SemiRun_Anode_1th_CV_Z_Axis_Pos_Flag=17218
,P_SemiRun_Anode_1th_AT_Z_Axis_Pos_Flag=17219
,P_SemiRun_Cathode_NG_AT_T_Axis_Pos_Flag=17220
,P_SemiRun_Cathode_NG_Box_T_Axis_Pos_Flag=17221
,P_SemiRun_Anode_NG_AT_T_Axis_Pos_Flag=17222
,P_SemiRun_Anode_NG_Box_T_Axis_Pos_Flag=17223
,P_Motion_Separator_Dancer_Pressure_Flag=17224
,P_Motion_Cathode_Clamp_Pressure_Flag=17225
,P_Motion_Anoode_Clamp_Pressure_Flag=17226
,P_Motion_Cathode_Final_Roller_X_Axis_Flag=17227
,P_Motion_Anode_Final_Roller_X_Axis_Flag=17228
,P_Motion_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag=17229
,P_Motion_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag=17230
,P_Motion_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag=17231
,P_Motion_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag=17232
,P_Motion_Cathode_2th_AT_T_Axis_Pos_Flag=17233
,P_Motion_Cathode_2th_ST_T_Axis_Pos_Flag=17234
,P_Motion_Cathode_2th_AT_Z_Axis_Pos_Flag=17235
,P_Motion_Cathode_2th_ST_Z_Axis_Pos_Flag=17236
,P_Motion_Anode_2th_AT_T_Axis_Pos_Flag=17237
,P_Motion_Anode_2th_ST_T_Axis_Pos_Flag=17238
,P_Motion_Anode_2th_AT_Z_Axis_Pos_Flag=17239
,P_Motion_Anode_2th_ST_Z_Axis_Pos_Flag=17240
,P_Motion_Cathode_1th_Ready_T_Axis_Pos_Flag=17241
,P_Motion_Cathode_1th_CV_T_Axis_Pos_Flag=17242
,P_Motion_Cathode_1th_AT_T_Axis_Pos_Flag=17243
,P_Motion_Cathode_1th_Ready_Z_Axis_Pos_Flag=17244
,P_Motion_Cathode_1th_CV_Z_Axis_Pos_Flag=17245
,P_Motion_Cathode_1th_AT_Z_Axis_Pos_Flag=17246
,P_Motion_Anode_1th_Ready_T_Axis_Pos_Flag=17247
,P_Motion_Anode_1th_CV_T_Axis_Pos_Flag=17248
,P_Motion_Anode_1th_AT_T_Axis_Pos_Flag=17249
,P_Motion_Anode_1th_Ready_Z_Axis_Pos_Flag=17250
,P_Motion_Anode_1th_CV_Z_Axis_Pos_Flag=17251
,P_Motion_Anode_1th_AT_Z_Axis_Pos_Flag=17252
,P_Motion_Cathode_NG_AT_T_Axis_Pos_Flag=17253
,P_Motion_Cathode_NG_Box_T_Axis_Pos_Flag=17254
,P_Motion_Anode_NG_AT_T_Axis_Pos_Flag=17255
,P_Motion_Anode_NG_Box_T_Axis_Pos_Flag=17256
,P_Cathode_1PNP_Sacle_Value=17257
,P_Cathode_2PNP_Sacle_Value=17258
,P_Anode_1PNP_Sacle_Value=17259
,P_Anode_2PNP_Sacle_Value=17260
,P_PLC01_SemiRun_PV_Flag=17261
,P_PV_EPC_Index=17262
,P_BTN_MSA_Total_Value=17278
,P_Vision_Align_Trigger_Timer=17279
,P_Vision_Stack_Trigger_Timer=17280
,P_MSA_Chk_Pos_Timer=17281
,P_MSA_Chk_Pos_Time=17282
,P_VISION_MSA_Seq_Index=17303
,P_VISION_MSA_Anode_Align_Bit_Pos=17304
,P_VISION_MSA_Seq_PreCondition_Index=17305
,P_MSA_CycleStop_Point_Check_Complete_RTN=17306
,P_Current_Anode_Align_MSA_Run_Count=17312
,P_Current_Cathode_Align_MSA_Run_Count=17313
,P_Current_Anode_Stack_MSA_Run_Count=17314
,P_Current_Cathode_Stack_MSA_Run_Count=17315
,P_VISION_MSA_Align_Count_Chk_Flag=17316
,P_VISION_MSA_Stack_Count_Chk_Flag=17317
,P_VISION_MSA_pre_InterLock_Cmd=17318
,P_VISION_MSA_pre_InterLock_Status=17319
,P_VISION_MSA_pre_InterLock_Check_Assy_Bit=17320
,P_VISION_MSA_pre_InterLock_Assy_Bit_Pos=17321
,P_Vision_MSA_Interlock_Status=17322
,P_VISION_MSA_MODE=17323
,P_VISION_MSA_Status_Flag=17324
,P_VISION_MSA_State_Machine=17325
,P_VISION_MSA_Status=17326
,P_VISION_MSA_Seq_Command_Occurs=17327
,P_Vision_Align_Trigger_Time=17328
,P_Anode_Align_MSA_Motion_Check=17329
,P_Cathode_Align_MSA_Motion_Check=17330
,P_Anode_Stack_MSA_Motion_Check=17331
,P_Cathode_Stack_MSA_Motion_Check=17332
,P_Anode_Align_MSA_Motion_ProgActive_Complete=17333
,P_Cathode_Align_MSA_Motion_ProgActive_Complete=17334
,P_Anode_Stack_MSA_Motion_ProgActive_Complete=17335
,P_Cathode_Stack_MSA_Motion_ProgActive_Complete=17336
,P_BTN_Align_Off_Total_Value=17337
,P_Align_Take_Off_Status=17341
,P_Align_Take_Off_Mode=17342
,P_Align_Take_Off_Status_Flag=17343
,P_Align_Take_Off_State_Machine=17344
,P_Align_Take_Off_Chk_Pos_Timer=17345
,P_Align_Take_Off_Motor_Check_Complete=17346
,P_Align_Take_Off_Speed_Return_Complete=17347
,P_Align_Take_Off_Interlock_Status=17348
,P_Align_Take_Off_pre_InterLock_Cmd=17349
,P_Align_Take_Off_pre_InterLock_Status=17350
,P_Align_Take_Off_pre_InterLock_Check_Assy_Bit=17351
,P_Align_Take_Off_pre_InterLock_Assy_Bit_Pos=17352
,P_Align_Take_Off_Seq_Index=17353
,P_Align_Take_Off_Seq_PreCondition_Index=17354
,P_Align_Take_Off_Stop_Signal=17375
,P_Vision_Cal_Reset_Count=17376
,P_2nd_PNP_Cleaning_Mode_Cmd=17377
,P_2nd_PNP_Cleaning_Mode_Status=17378
,P_2nd_PNP_Cleaning_Mode_Z_Jog_Speed=17379
,P_2nd_PNP_Cleaning_Mode_X_Jog_Speed=17380
,P_2nd_PNP_Cleaning_Mode_T_Jog_Speed=17381
,P_2nd_PNP_Cleaning_Avoid_2nd_T_Pos=17382
,P_PNP_Vac_Chk_Mode_Interlock=17383
,P_Vac_Chk_Test=17384
,P_Anode_1st_PNP_Vac_Chk_Mode_Blocked=17385
,P_Cathode_1st_PNP_Vac_Chk_Mode_Blocked=17386
,P_Anode_2nd_PNP_Vac_Chk_Mode_Blocked=17387
,P_Cathode_2nd_PNP_Vac_Chk_Mode_Blocked=17388
,P_SM_Anode_1st_PNP_Vac_Chk_Mode=17389
,P_SM_Cathode_1st_PNP_Vac_Chk_Mode=17390
,P_SM_Anode_2nd_PNP_Vac_Chk_Mode=17391
,P_SM_Cathode_2nd_PNP_Vac_Chk_Mode=17392
,P_Anode_1st_PNP_Vac_Chk_Execute_Timer=17393
,P_Cathode_1st_PNP_Vac_Chk_Execute_Timer=17394
,P_Anode_2nd_PNP_Vac_Chk_Execute_Timer=17395
,P_Cathode_2nd_PNP_Vac_Chk_Execute_Timer=17396
,P_Anode_1st_PNP_Vac_Check_Timer=17397
,P_Cathode_1st_PNP_Vac_Check_Timer=17398
,P_Anode_2nd_PNP_Vac_Check_Timer=17399
,P_Cathode_2nd_PNP_Vac_Check_Timer=17400
,P_Anode_1st_PNP_Vac_Chk_Status=17401
,P_Cathode_1st_PNP_Vac_Chk_Status=17402
,P_Anode_2nd_PNP_Vac_Chk_Status=17403
,P_Cathode_2nd_PNP_Vac_Chk_Status=17404
,P_Anode_1st_PNP_Vac_Chk_Mode_Stop_Blocked=17405
,P_Cathode_1st_PNP_Vac_Chk_Mode_Stop_Blocked=17406
,P_Anode_2nd_PNP_Vac_Chk_Mode_Stop_Blocked=17407
,P_Cathode_2nd_PNP_Vac_Chk_Mode_Stop_Blocked=17408
,P_Anode_1st_PnP_Vac_Chk_Mode_RTN=17409
,P_Cathode_1st_PnP_Vac_Chk_Mode_RTN=17410
,P_Anode_2nd_PnP_Vac_Chk_Mode_RTN=17411
,P_Cathode_2nd_PnP_Vac_Chk_Mode_RTN=17412
,P_PNP_Vac_Chk_Mode_TimeBase_Rtn=17413
,P_PNP_Vac_Chk_Mode_Timer=17414
,P_Anode_1st_PNP_Vac_Chk_Mode_Err=17415
,P_Cathode_1st_PNP_Vac_Chk_Mode_Err=17416
,P_Anode_2nd_PNP_Vac_Chk_Mode_Err=17417
,P_Cathode_2nd_PNP_Vac_Chk_Mode_Err=17418
,P_PNP_Vac_Chk_Mode_BTN_Err=17419
,P_BTN_CA_1st_PNP_Vac_Chk_Mode=17420
,P_BTN_AN_1st_PNP_Vac_Chk_Mode=17421
,P_BTN_CA_2nd_PNP_Vac_Chk_Mode=17422
,P_BTN_AN_2nd_PNP_Vac_Chk_Mode=17423
,P_System_Cascading_ON_Cmd=17568
,P_System_Cascading_OFF_Cmd=17569
,P_System_Master_Following_ON_Cmd=17570
,P_System_Master_Following_OFF_Cmd=17571
,P_System_CamTable_ON_Cmd=17572
,P_System_CamTable_OFF_Cmd=17573
,P_System_Spool_Home_Ready_Pos_Cmd=17574
,P_System_Cascading_ON_Status=17575
,P_System_Cascading_OFF_Status=17576
,P_System_Master_Following_ON_Status=17577
,P_System_Master_Following_OFF_Status=17578
,P_System_CamTable_ON_Status=17579
,P_System_CamTable_OFF_Status=17580
,P_System_Spool_Home_Ready_Pos_Status=17581
,P_System_Cascading_ON_State_Machine=17582
,P_System_Cascading_OFF_State_Machine=17583
,P_System_Master_Follwing_ON_State_Machine=17584
,P_System_Master_Follwing_OFF_State_Machine=17585
,P_System_CamTable_ON_State_Machine=17586
,P_System_CamTable_OFF_State_Machine=17587
,P_System_Spool_Home_Ready_Pos_State_Machine=17588
,P_System_Cascading_ON_Complete_Flag=17589
,P_System_Cascading_OFF_Complete_Flag=17590
,P_System_Master_Following_ON_Complete_Flag=17591
,P_System_Master_Following_OFF_Complete_Flag=17592
,P_System_CamTable_ON_Complete_Flag=17593
,P_System_CamTable_OFF_Complete_Flag=17594
,P_System_Spool_Home_Ready_Pos_Complete_Flag=17595
,P_Servo_Dancer_Cascading_Off_Timer=17596
,P_Servo_Dancer_Cascading_Set_Timer=17597
,P_Dancer_Frist_Home_Ready_Pos_Timer=17598
,P_Driving_Motor_Use_Flag=17599
,P_Home_Spool_Unwinding=17600
,P_OutValue=17601
,P_Dancer_Out_Slew_Seq=17602
,P_OutChangeValue=17603
,P_Rot_OutValue=17604
,P_OutChangeTime=17605
,P_Regul_Max_kPa_Value=17616
,P_Regul_Min_kPa_Value=17617
,P_Regul_Max_AD=17618
,P_Regul_Min_AD=17619
,P_Current_Max_Value=17620
,P_Current_Min_Value=17621
,P_Current_Max_AD=17622
,P_Current_Min_AD=17623
,P_Sepa_Cal_Inclination=17624
,P_Regul_Cal_Inclination=17625
,P_Cutter_Heat_Amp_Data_Bit=17626
,P_Cut_Heat_Amp_Value=17627
,P_AI_Cathode_Clamp_Damper_AVG=17628
,P_AI_Anode_Clamp_Damper_AVG=17629
,P_Tension_Ready_Pos_Cmd=17630
,P_Tension_Ready_State_Machine=17631
,P_Tension_Ready_Pos_Status=17632
,P_Dancer_Center_Pos=17633
,P_Upper_Sepa_Cal_Inclination=17634
,P_Lower_Sepa_Cal_Inclination=17635
,P_Unwinder_Jogspeed=17636
,P_Cascading_First_Out=17637
,P_Dancer_Cur_Vdc=17638
,P_Dancer_Cur_Torque=17639
,P_Dancer_Cur_Newton=17640
,P_Dancer_Cur_Kgf=17641
,P_Board_IO_Count=17642
,P_Force_BTN_Address_Clear_Count=17643
,P_Force_BTN_Condition_Count=18028
,P_Old_Force_BTN_Mode=18029
,P_Force_BTN_Address_Count=18030
,P_Force_BTN_GPIO_Address_Count=18031
,P_Force_BTN_Ecat_Address_Count=18032
,P_Force_BTN_M_Variable_Save_Count=18033
,P_Force_BTN_M_Variable_Start_Num=18034
,P_Force_BTN_Normal_Mode_Status=18035
,P_Force_BTN_Normal_Mode_State_Machine=18036
,P_Force_BTN_Normal_Mode_Complete_Flag=18037
,P_Force_BTN_Force_Mode_Timer=18038
,P_Force_BTN_Force_Mode_Delay_Time=18039
,P_Force_BTN_Force_Mode_Status=18040
,P_Force_BTN_Force_Mode_State_Machine=18041
,P_Force_BTN_Force_Mode_Complete_Flag=18042
,P_Mem_Save_Error_Bit=18043
,P_Servo_Gain_Save_Command=18054
,P_Servo_Gain_Load_Command=18055
,P_Servo_Gain_Save_Flag=18056
,P_Servo_Gain_Load_Flag=18057
,P_Insert_Phase_Flag=18238
,P_Alarm_Occur_Flag=18339
,P_Alarm_Wait_Time=18344
,P_Alarm_Delay_Timer=18345
,P_Compare_Priority=18346
,P_Alarm_Report=18347
,P_Alarm_Num=18348
,P_Alarm_Index=18349
,P_First_Alarm_Flag=18350
,P_Servo_Alarm_Check=18481
,P_Ecat_Servo_Alarm_Check=18482
,P_IL_ON_OFF_Flag=19203
,P_IL_Coord_Robot=19204
,P_IL_Robot_Bit=19205
,P_IL_Outer_Status=19206
,P_Robot_Unit_Serch_Flag=19207
,P_IL_Home_Chk_Edge=19208
,P_IL_Sprint=19212
,P_IL_length=19213
,P_IL_Strcat=19214
,P_IL_Popup_Motor=19215
,P_IL_Motor_Page=19216
,P_IL_Recipe_Bit=19217
,P_Interlock_Popup_On_Flag=19218
,P_Motor_Page=19219
,P_OP_Side_Ca_PNP_Pos=19220
,P_OP_Side_An_PNP_Pos=19221
,P_OP_Side_PMAC_Cur_Mode=19222
,P_Abs_Trans_Cur_Pos=19223
,P_Minus_IL_Offset=19224
,P_Plus_IL_Offset=19225
,P_2nd_PNP_Arm_Radius=19226
,P_IL_Enable_Flag=19227
,P_Plus_Interlock_Bit=19228
,P_Minus_Interlock_Bit=19229
,UPPos=19230
,Unloader_In_StackPos=19231
,FR_AnodePos=19232
,FR_CathodePos=19233
,Before_In_Stack=19234
,In_Stack=19235
,P_Minus_Collision_Risk_Motor=19238
,P_IL_Clamp_Y=19239
,P_IL_Clamp_Z=19240
,P_IL_Clamp_Pos=19241
,P_IL_Use_FR_Clamp_Pos=19242
,P_Ca_1st_Plus_IL_Offset=19643
,P_Ca_1st_Minus_IL_Offset=19644
,P_An_1st_Plus_IL_Offset=19645
,P_An_1st_Minus_IL_Offset=19646
,P_Z_Pos_Data=19665
,P_Clamp_Z_Plus_IL_Offset=19666
,P_FR_Z_Minus_IL_Offset=19671
,P_X_PLC_InterLock=19727
,P_IL_Home_Chk=19728
,P_IL_Home_Chk_Motor_Update=19749
,P_IL_Inside_Home_Chk_Complete=19750
,P_IL_Outside_Home_Chk_Complete=19751
,P_IL_Motor_Home_Chk_RTN=19752
,P_IL_Function_Cnt=19753
,P_IL_Function_Motor_Num=19754
,P_Jog_Page_Flag=19755
,P_Anode_1st_TR_Belt_Down_Flag=19756
,P_Anode_1st_TR_Belt_Pick_Up_Flag=19757
,P_Anode_1st_TR_Align_Down_Flag=19758
,P_Anode_2nd_TR_Align_Pick_Up_Flag=19759
,P_Anode_2nd_TR_Stack_Down_Flag=19760
,P_Anode_NG_TR_Align_Pick_Up_Flag=19761
,P_Anode_NG_TR_NG_Place_Down_Flag=19762
,P_Anode_2nd_TR_Align_Down_Flag=19763
,P_Anode_1st_TR_Align_Pick_Up_Flag=19764
,P_Anode_1st_TR_Belt_Down_State_Machine=19765
,P_Anode_1st_TR_Belt_Down_Status=19766
,P_Anode_1st_TR_Belt_Pick_Up_State_Machine=19767
,P_Anode_1st_TR_Belt_Pick_Up_Status=19768
,P_Anode_1st_TR_Align_Down_State_Machine=19769
,P_Anode_1st_TR_Align_Down_Status=19770
,P_Anode_2nd_TR_Align_Pick_Up_State_Machine=19771
,P_Anode_2nd_TR_Align_Pick_Up_Status=19772
,P_Anode_2nd_TR_Stack_Down_State_Machine=19773
,P_Anode_2nd_TR_Stack_Down_Status=19774
,P_Anode_NG_TR_Align_Pick_Up_State_Machine=19775
,P_Anode_NG_TR_Align_Pick_Up_Status=19776
,P_Anode_NG_TR_NG_Place_Down_State_Machine=19777
,P_Anode_NG_TR_NG_Place_Down_Status=19778
,P_Anode_2nd_TR_Align_Down_State_Machine=19779
,P_Anode_2nd_TR_Align_Down_Status=19780
,P_Anode_1st_TR_Align_Pick_Up_State_Machine=19781
,P_Anode_1st_TR_Align_Pick_Up_Status=19782
,P_Cathode_1st_TR_Belt_Down_Flag=19783
,P_Cathode_1st_TR_Belt_Pick_Up_Flag=19784
,P_Cathode_1st_TR_Align_Down_Flag=19785
,P_Cathode_2nd_TR_Align_Pick_Up_Flag=19786
,P_Cathode_2nd_TR_Stack_Down_Flag=19787
,P_Cathode_NG_TR_Align_Pick_Up_Flag=19788
,P_Cathode_NG_TR_NG_Place_Down_Flag=19789
,P_Cathode_2nd_TR_Align_Down_Flag=19790
,P_Cathode_1st_TR_Align_Pick_Up_Flag=19791
,P_Cathode_1st_TR_Belt_Down_State_Machine=19792
,P_Cathode_1st_TR_Belt_Down_Status=19793
,P_Cathode_1st_TR_Belt_Pick_Up_State_Machine=19794
,P_Cathode_1st_TR_Belt_Pick_Up_Status=19795
,P_Cathode_1st_TR_Align_Down_State_Machine=19796
,P_Cathode_1st_TR_Align_Down_Status=19797
,P_Cathode_2nd_TR_Align_Pick_Up_State_Machine=19798
,P_Cathode_2nd_TR_Align_Pick_Up_Status=19799
,P_Cathode_2nd_TR_Stack_Down_State_Machine=19800
,P_Cathode_2nd_TR_Stack_Down_Status=19801
,P_Cathode_NG_TR_Align_Pick_Up_State_Machine=19802
,P_Cathode_NG_TR_Align_Pick_Up_Status=19803
,P_Cathode_NG_TR_NG_Place_Down_State_Machine=19804
,P_Cathode_NG_TR_NG_Place_Down_Status=19805
,P_Cathode_2nd_TR_Align_Down_State_Machine=19806
,P_Cathode_2nd_TR_Align_Down_Status=19807
,P_Cathode_1st_TR_Align_Pick_Up_State_Machine=19808
,P_Cathode_1st_TR_Align_Pick_Up_Status=19809
,P_Old_Anode_Belt_ASCII=19810
,P_Old_Cathode_Belt_ASCII=19811
,P_Anode_Belt_ASCII=19812
,P_Cathode_Belt_ASCII=19813
,P_Check_Vac_Time=19814
,P_Send_Anode_NG_Code_To_PLC=19815
,P_Receive_Anode_NG_Code_From_PLC=19816
,P_Send_Cathode_NG_Code_To_PLC=19817
,P_Receive_Cathode_NG_Code_From_PLC=19818
,P_Current_Cell_Memory_Anode_1P=19819
,P_Current_Cell_Memory_Anode_AT=19820
,P_Current_Cell_Memory_Anode_2P=19821
,P_Current_Cell_Memory_Cathode_1P=19822
,P_Current_Cell_Memory_Cathode_AT=19823
,P_Current_Cell_Memory_Cathode_2P=19824
,P_Current_Cell_Memory_Stack_Table=19825
,P_Current_Cell_Memory_Cathode_NG_TR=19826
,P_Current_Cell_Memory_Anode_NG_TR=19827
,P_BTN_Anode_1st_TR_Buffer_Clear=19828
,P_BTN_Anode_2nd_TR_Buffer_Clear=19829
,P_BTN_Anode_Align_Buffer_Clear=19830
,P_BTN_Anode_NG_TR_Buffer_Clear=19831
,P_BTN_Cathode_1st_TR_Buffer_Clear=19832
,P_BTN_Cathode_2nd_TR_Buffer_Clear=19833
,P_BTN_Cathode_Align_Buffer_Clear=19834
,P_BTN_Cathode_NG_TR_Buffer_Clear=19835
,P_Old_BTN_Anode_1st_TR_Buffer_Clear=19836
,P_Old_BTN_Anode_2nd_TR_Buffer_Clear=19837
,P_Old_BTN_Anode_Align_Buffer_Clear=19838
,P_Old_BTN_Anode_NG_TR_Buffer_Clear=19839
,P_Old_BTN_Cathode_1st_TR_Buffer_Clear=19840
,P_Old_BTN_Cathode_2nd_TR_Buffer_Clear=19841
,P_Old_BTN_Cathode_Align_Buffer_Clear=19842
,P_Old_BTN_Cathode_NG_TR_Buffer_Clear=19843
,P_Send_Anode_NG_Code_Flag=19844
,P_Send_Cathode_NG_Code_Flag=19845
,P_Anode_Vision_NG_To_PLC_Flag=19846
,P_Cathode_Vision_NG_To_PLC_Flag=19847
,P_Status_Clear_Sheet_Maint_Check=19848
,P_Single_Run_Start_Flag=19849
,P_Single_Run_Control_State_Machine=19850
,P_Single_Run_Control_Status=19851
,P_Single_Run_Execute_Bit=19852
,P_User_Dry_Run_Mode=19853
,P_Single_Run_State_Machine=19854
,P_Single_Run_Status=19855
,P_Single_Run_Unit=19856
,P_Single_Run_Evade_Pos_RTN=19857
,P_Single_Run_Evade_Pos_Check_RTN=19858
,P_Single_Run_Pos_Rtn1=19859
,P_Single_Run_Pos_Rtn2=19860
,P_Single_Run_Motion_Ready_RTN=19861
,P_Single_Run_Execution_Interlock_RTN=19862
,P_Single_Run_Coord_Activate_RTN=19863
,P_Single_Run_Coord_Activate_Check_RTN=19864
,P_Single_Run_Select_Run_Mode_RTN=19865
,P_Single_Run_Execution_Run_RTN=19866
,P_Single_Run_Motion_Ready_State_Machine=19867
,P_Coord_1=19868
,P_Coord_2=19869
,P_Coord_3=19870
,P_Coord_4=19871
,P_Final_Roll_Z_Motion_Flag=19872
,P_Final_Roll_Z_Motion_State_Machine=19873
,P_Main_Z_Motion_Flag=19874
,P_Main_Z_Motion_State_Machine=19875
,P_Single_Run_Mode_Flag=19876
,P_Cathode_AT_Motion_Flag=19877
,P_Cathode_Align_Motion_State_Machine=19878
,P_Anode_AT_Motion_Flag=19879
,P_Anode_Align_Motion_State_Machine=19880
,P_Sheet_Paper_Motion_Flag=19881
,P_Sheet_Paper_Motion_State_Machine=19882
,P_Cathode_NG_PNP_T_Motion_Flag=19883
,P_Cathode_NG_PNP_T_Motion_State_Machine=19884
,P_Cathode_NG_PNP_Z_Motion_Flag=19885
,P_Cathode_NG_PNP_Z_Motion_State_Machine=19886
,P_Anode_NG_PNP_T_Motion_Flag=19887
,P_Anode_NG_PNP_T_Motion_State_Machine=19888
,P_Anode_NG_PNP_Z_Motion_Flag=19889
,P_Anode_NG_PNP_Z_Motion_State_Machine=19890
,P_1st_UND_X_Motion_Flag=19891
,P_1st_UND_X_Motion_State_Machine=19892
,P_1st_UND_Z_Motion_Flag=19893
,P_1st_UND_Z_Motion_State_Machine=19894
,P_1st_UND_T_Motion_Flag=19895
,P_1st_UND_T_Motion_State_Machine=19896
,P_Cathode_Run_Command_Flag=19897
,P_Anode_Run_Command_Flag=19898
,P_NG_PNP_Uint_Motion_Flag=19899
,P_NG_PNP_Uint_State_Machine=19900
,P_NG_PNP_Motion_Cnt=19901
,P_Single_Run_Timer=19912
,P_Single_Run_Align_Timer=19913
,P_Single_Run_Align_Timer2=19914
,P_Single_Run_Finall_Roll_Z_Timer=19915
,P_Single_RuN_MAIN_Z_Timer=19916
,P_Single_Run_Sheet_Paper_Timer=19917
,P_Single_Run_Debug_SM=19918
,P_Error_Monitoring_Count_1=19919
,P_Error_Monitoring_Count_2=19920
,P_Error_Monitoring_Count_3=19921
,P_Error_Monitoring_Count_4=19922
,P_Error_Monitoring_Count_5=19923
,P_Old_Single_Run_Mode_Flag=19924
,P_Old_Current_Mode=19925
,P_Single_Run_Timebase_Off_RTN=19926
,P_Single_Run_Stop_State_Machine=19927
,P_Single_Run_Stop_Status=19928
,P_Single_Run_Stop_Timer=19929
,P_Single_Run_Stop_Init_RTN=19930
,P_Single_Run_Stop_Btn_Chk=19931
,P_Single_Run_Stop_Command=19932
,P_Motor_Ready_Poa_Inpos_200um=19933
,P_Ecat_Parameter_Write_Flag=19934
,P_Ecat_Parameter_Read_Flag=19935
,P_Ecat_Each_Parameter_Write_Flag=19936
,P_Ecat_Slave_Idx=19937
,P_Ec_Num=19938
,P_Ecat_Read_Motor_Num=19939
,P_Ecat_Write_Motor_Num=19940
,P_Ecat_Parameter_Write_State_Machine=19941
,P_Ecat_Parameter_Read_State_Machine=19942
,P_Ecat_Each_Parameter_Write_State_Machine=19943
,P_Ecat_Write_Status=20064
,P_Ecat_Read_Status=20065
,P_Ecat_Each_Write_Status=20066
,P_Align_Plus_Blow_Test=20627
,P_System_Setting_Flag=20628
,P_Ecat_Setting_Flag=20629
,P_Ecat_Activation_State_Machine=20630
,P_PLC31_Ecat_Retry_Cnt=20631
,P_Ecat_Connect_Result=20632
,P_Ecat_Slave_Error=20633
,P_PWM_AbsPhasePosOffset_Change_State_Machine=20634
,P_AbsPhasePosOffset_Change_Complete=20635
,P_PWM_AbsPhasing_Fail=20636
,P_PWM_AbsPhasing_Complete=20637
,P_Whole_Stacking_Tack_Time=20638
,P_Whole_Stacking_Tack_Time_Check=20639
,P_Whole_Stacking_Tack_Timer_Check_Flag=20640
,P_Whole_Stacking_Timer_Shift_Status_Machine=20641
,P_Whole_Stacking_TackTime_Array0=20642
,P_Whole_Stacking_TackTime_Array1=20643
,P_Whole_Stacking_TackTime_Array2=20644
,P_Whole_Stacking_TackTime_Array3=20645
,P_Whole_Stacking_TackTime_Array4=20646
,P_Whole_Stacking_TackTime_Array5=20647
,P_Whole_Stacking_TackTime_Array6=20648
,P_Whole_Stacking_TackTime_Array7=20649
,P_Whole_Stacking_TackTime_Array8=20650
,P_Whole_Stacking_TackTime_Array9=20651
,P_Whole_Stacking_TackTime_Array10=20652
,P_First_Stacking_Start=20653
,P_Last_Stacking_Complete=20654
,P_Stacking_Tack_Time=20655
,P_Stacking_Tack_Time_Check=20656
,P_Stacking_Tack_Timer_Check_Flag=20657
,P_Stacking_Timer_Shift_Status_Machine=20658
,P_Cathode_to_Anode_FR_Tack_Time_Check=20659
,P_Anode_to_Cathode_FR_Tack_Time_Check=20660
,P_Cathode_to_Anode_FR_Tack_Time_Start=20661
,P_Anode_to_Cathode_FR_Tack_Time_Start=20662
,P_Cathode_to_Anode_FR_Tack_Time_Complete=20663
,P_Anode_to_Cathode_FR_Tack_Time_Complete=20664
,P_Cathode_to_Anode_FR_Time=20665
,P_Anode_to_Cathode_FR_Time=20666
,P_Cathode_to_Anode_FR_Tack_Timer_Check_Flag=20667
,P_Anode_to_Cathode_FR_Tack_Timer_Check_Flag=20668
,P_Anode_Align_Table_Time=20669
,P_Anode_Align_Table_Tack_Time_Check=20670
,P_Anode_Align_Table_Tack_Timer_Check_Flag=20671
,P_Anode_Align_Table_Timer_Shift_Status_Machine=20672
,P_Anode_Align_Tack_Time_Start=20673
,P_Anode_Align_Tack_Time_Complete=20674
,P_Cathode_Align_Table_Time=20675
,P_Cathode_Align_Table_Tack_Time_Check=20676
,P_Cathode_Align_Table_Tack_Timer_Check_Flag=20677
,P_Cathode_Align_Table_Timer_Shift_Status_Machine=20678
,P_Cathode_Align_Tack_Time_Start=20679
,P_Cathode_Align_Tack_Time_Complete=20680
,P_Anode_1th_Tack_Time_Start=20681
,P_Anode_1th_Tack_Time_Complete=20682
,P_Anode_1th_Time=20683
,P_Anode_1th_Tack_Time_Check=20684
,P_Anode_1th_Tack_Timer_Check_Flag=20685
,P_Anode_1th_Timer_Shift_Status_Machine=20686
,P_Cathode_1th_Tack_Time_Start=20687
,P_Cathode_1th_Tack_Time_Complete=20688
,P_Cathode_1th_Time=20689
,P_Cathode_1th_Tack_Time_Check=20690
,P_Cathode_1th_Tack_Timer_Check_Flag=20691
,P_Cathode_1th_Timer_Shift_Status_Machine=20692
,P_Anode_2th_Tack_Time_Start=20693
,P_Anode_2th_Tack_Time_Complete=20694
,P_Anode_2th_Time=20695
,P_Anode_2th_Tack_Time_Check=20696
,P_Anode_2th_Tack_Timer_Check_Flag=20697
,P_Anode_2th_Timer_Shift_Status_Machine=20698
,P_Cathode_2th_Tack_Time_Start=20699
,P_Cathode_2th_Tack_Time_Complete=20700
,P_Cathode_2th_Time=20701
,P_Cathode_2th_Tack_Time_Check=20702
,P_Cathode_2th_Tack_Timer_Check_Flag=20703
,P_Cathode_2th_Timer_Shift_Status_Machine=20704
,P_Anode_1th_NG_Tack_Time_Start=20705
,P_Anode_1th_NG_Tack_Time_Complete=20706
,P_Anode_1th_NG_Time=20707
,P_Anode_1th_NG_Tack_Time_Check=20708
,P_Anode_1th_NG_Tack_Timer_Check_Flag=20709
,P_Anode_1th_NG_Timer_Shift_Status_Machine=20710
,P_Cathode_1th_NG_Tack_Time_Start=20711
,P_Cathode_1th_NG_Tack_Time_Complete=20712
,P_Cathode_1th_NG_Time=20713
,P_Cathode_1th_NG_Tack_Time_Check=20714
,P_Cathode_1th_NG_Tack_Timer_Check_Flag=20715
,P_Cathode_1th_NG_Timer_Shift_Status_Machine=20716
,P_Anode_Clamp_Tack_Time_Start=20717
,P_Anode_Clamp_Tack_Time_Complete=20718
,P_Anode_Clamp_Time=20719
,P_Anode_Clamp_Tack_Time_Check=20720
,P_Anode_Clamp_Tack_Timer_Check_Flag=20721
,P_Anode_Clamp_Timer_Shift_Status_Machine=20722
,P_Cathode_Clamp_Tack_Time_Start=20723
,P_Cathode_Clamp_Tack_Time_Complete=20724
,P_Cathode_Clamp_Time=20725
,P_Cathode_Clamp_Tack_Time_Check=20726
,P_Cathode_Clamp_Tack_Timer_Check_Flag=20727
,P_Cathode_Clamp_Timer_Shift_Status_Machine=20728
,P_Final_Roll_X_Timer_Shift_Status_Machine=20729
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array0=20730
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array1=20731
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array2=20732
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array3=20733
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array4=20734
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array5=20735
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array6=20736
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array7=20737
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array8=20738
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array9=20739
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array10=20740
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array0=20741
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array1=20742
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array2=20743
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array3=20744
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array4=20745
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array5=20746
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array6=20747
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array7=20748
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array8=20749
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array9=20750
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array10=20751
,P_MCC_Anode_Align_NG_Count=20806
,P_MCC_Cathode_Align_NG_Count=20807
,P_MCC_Anode_Retry_NG_Count=20808
,P_MCC_Cathode_Retry_NG_Count=20809
,P_Discharge_Hold_Timer=20822
,P_Discharge_Hold_Time=20823
,P_AN_1st_Z_Zero_Angle=20824
,P_AN_1st_Z_Zero_Length=20825
,P_Anode_1st_PNP_Z_Crank_Zero_Pos=20826
,P_Anode_1st_PNP_Z_Crank_real_Move_Pos=20827
,P_Anode_1st_PNP_Z_Crank_radian=20828
,P_Anode_1st_PNP_Z_Acos_denominator=20829
,P_Anode_1st_PNP_Z_Acos_numerator=20830
,P_Anode_1st_PNP_Z_Crank_Angle=20831
,P_Anode_1st_PNP_Z_Real_Move_Pos=20832
,P_Anode_1st_Fwd_Bwd_Rise=20833
,P_CA_1st_Z_Zero_Angle=20834
,P_CA_1st_Z_Zero_Length=20835
,P_Cathode_1st_PNP_Z_Crank_Zero_Pos=20836
,P_Cathode_1st_PNP_Z_Crank_real_Move_Pos=20837
,P_Cathode_1st_PNP_Z_Crank_radian=20838
,P_Cathode_1st_PNP_Z_Acos_denominator=20839
,P_Cathode_1st_PNP_Z_Acos_numerator=20840
,P_Cathode_1st_PNP_Z_Crank_Angle=20841
,P_Cathode_1st_PNP_Z_Real_Move_Pos=20842
,P_Cathode_1st_Fwd_Bwd_Rise=20843
,P_AN_2nd_Z_Zero_Angle=20844
,P_AN_2nd_Z_Zero_Length=20845
,P_Anode_2nd_PNP_Z_Crank_Zero_Pos=20846
,P_Anode_2nd_PNP_Z_Crank_real_Move_Pos=20847
,P_Anode_2nd_PNP_Z_Crank_radian=20848
,P_Anode_2nd_PNP_Z_Acos_denominator=20849
,P_Anode_2nd_PNP_Z_Acos_numerator=20850
,P_Anode_2nd_PNP_Z_Crank_Angle=20851
,P_Anode_2nd_PNP_Z_Real_Move_Pos=20852
,P_Anode_2nd_Fwd_Bwd_Rise=20853
,P_CA_2nd_Z_Zero_Angle=20854
,P_CA_2nd_Z_Zero_Length=20855
,P_Cathode_2nd_PNP_Z_Crank_Zero_Pos=20856
,P_Cathode_2nd_PNP_Z_Crank_real_Move_Pos=20857
,P_Cathode_2nd_PNP_Z_Crank_radian=20858
,P_Cathode_2nd_PNP_Z_Acos_denominator=20859
,P_Cathode_2nd_PNP_Z_Acos_numerator=20860
,P_Cathode_2nd_PNP_Z_Crank_Angle=20861
,P_Cathode_2nd_PNP_Z_Real_Move_Pos=20862
,P_Cathode_2nd_Fwd_Bwd_Rise=20863
,P_Old_Recipe_Anode_1st_PNP_Z_Ready_Up=20864
,P_Old_Recipe_Anode_1st_PNP_Z_Belt_Up=20865
,P_Old_Recipe_Anode_1st_PNP_Z_Belt_Down=20866
,P_Old_Recipe_Anode_1st_PNP_Z_Align_Up=20867
,P_Old_Recipe_Anode_1st_PNP_Z_Align_Down=20868
,P_Old_Recipe_Cathode_1st_PNP_Z_Ready_Up=20869
,P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Up=20870
,P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Down=20871
,P_Old_Recipe_Cathode_1st_PNP_Z_Align_Up=20872
,P_Old_Recipe_Cathode_1st_PNP_Z_Align_Down=20873
,P_Old_Recipe_Anode_2nd_PNP_Z_Align_Up=20874
,P_Old_Recipe_Anode_2nd_PNP_Z_Align_Down=20875
,P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Up=20876
,P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Down=20877
,P_Old_Recipe_Anode_2nd_PNP_Z_Ready_Up=20878
,P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Up=20879
,P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Down=20880
,P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Up=20881
,P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Down=20882
,P_Old_Recipe_Cathode_2nd_PNP_Z_Ready_Up=20883
,P_PLC19_All_Home_Status=20884
,P_PLC19_All_Home_Module_Status=20885
,P_PLC19_All_Home_State_Machine=20886
,P_PLC19_All_Home_Seq_Index=20887
,P_PLC19_All_Home_Self_Index=20888
,P_PLC19_All_Home_Set_Mode_Return=20889
,P_PLC19_All_Home_Timer=20890
,P_PLC19_All_Home_Tact_Time=20911
,P_All_Home_Module_Error=20912
,P_Act_ALL_Home_Time_Out_Time=20913
,P_Act_Hold_Time_Out_Time=21129
,P_First_PNP_T_Wait_Status=21165
,P_First_PNP_Z_Wait_Status=21166
,P_First_PNP_Picker_T_Turn_Status=21167
,P_First_PNP_T_Wait_To_Belt_Status=21168
,P_First_PNP_Z_Wait_To_Belt_Status=21169
,P_First_PNP_T_Align_To_Belt_Status=21170
,P_First_PNP_Z_Align_To_Belt_Status=21171
,P_First_PNP_Z_Belt_Down_Status=21172
,P_First_PNP_Z_Belt_Up_Status=21173
,P_First_PNP_T_Wait_To_Align_Status=21174
,P_First_PNP_Z_Wait_To_Align_Status=21175
,P_First_PNP_T_Belt_To_Align_Status=21176
,P_First_PNP_Z_Belt_To_Align_Status=21177
,P_First_PNP_Z_Align_Down_Status=21178
,P_First_PNP_Z_Align_Up_Status=21179
,P_First_PNP_Vac_On_Status=21180
,P_First_PNP_Blow_On_Status=21181
,P_Second_PNP_T_Align_To_Stack_Status=21182
,P_Second_PNP_Z_Align_To_Stack_Status=21183
,P_Second_PNP_T_Stack_To_Align_Status=21184
,P_Second_PNP_Z_Stack_To_Align_Status=21185
,P_Second_PNP_Z_Align_Down_Status=21186
,P_Second_PNP_Z_Align_Up_Status=21187
,P_Second_PNP_Vac_On_Status=21188
,P_Second_PNP_Blow_On_Status=21189
,P_NG_PNP_NG_Bos_Status=21190
,P_NG_PNP_Align_Status=21191
,P_NG_PNP_Align_Down_Status=21192
,P_NG_PNP_Align_Up_Status=21193
,P_NG_PNP_Vac_On_Status=21194
,P_NG_PNP_Blow_On_Status=21195
,P_Hold_1st_PNP_Position=21196
,P_Hold_Module_Error=21197
,P_Act_Execute_Time_Out_Time=21258
,P_Execute_Module_Error=21271
,P_Execute_First_Sepa_Total_Tact_Time=21272
,P_Current_JR_Thickness_mm=21273
,P_Current_Jelly_Roll_Thinckness_mm_Send_Enable_Flag=21274
,P_Stack_Table_NG_Flag=21275
,P_Suspend_Discharge_Cell_Out_Restart=21276
,P_Jelly_Roll_OK_Count=21277
,P_Jelly_Roll_NG_Count=21278
,P_Jelly_Roll_Total_Count=21279
,P_Jelly_Roll_Prod_Count=21280
,P_Jelly_Roll_Recipe_Count=21281
,P_Current_Cell_Memory_Jelly_Roll=21282
,P_VISION_PLC10_Anode_Align_Start=21283
,P_VISION_PLC10_Cathode_Align_Start=21284
,P_Stack_Table_NG_Count=21285
,P_Stack_PMAC_NG_Code=21286
,P_Stack_Vision_NG_Code_IN_Timer=21287
,P_1st_Discharge_State=21288
,P_Prev_Sepa_Stack_Completed_Flag=21289
,P_Discharge_Unloader_Handover_Timer=21290
,P_Discharge_Unloader_Handover_Time=21291
,P_Execute_First_Sepa_Mode_Cmd=21352
,P_Execute_First_Sepa_Mode_Status=21353
,P_Execute_First_Sepa_Mode_Module_Status=21354
,P_Execute_First_Sepa_Mode_State_Machine=21355
,P_Execute_First_Sepa_Mode_Seq_Index=21356
,P_Execute_First_Sepa_Mode_Self_Index=21357
,P_Execute_First_Sepa_Mode_Debug_Edge=21358
,P_Execute_First_Sepa_Mode_Timer=21389
,P_Execute_First_Sepa_Mode_Tact_Time=21410
,P_Execute_1st_Sepa_Status=21411
,P_Suspend_Discharge_Cmd=21412
,P_Suspend_Discharge_Status=21413
,P_Suspend_Discharge_State_Machine=21414
,P_Suspend_Discharge_Seq_Index=21415
,P_Suspend_Discharge_Self_Index=21416
,P_Suspend_Discharge_Timer=21507
,P_Suspend_Discharge_Tact_Time=21528
,P_Suspend_Discharge_1st_Unloader_JR_Grip=21529
,P_Suspend_ARC_Cmd=21530
,P_Suspend_ARC_Status=21531
,P_Suspend_ARC_State_Machine=21532
,P_Suspend_ARC_Seq_Index=21533
,P_Suspend_ARC_Self_Index=21534
,P_Suspend_ARC_Manual_Occur_Flag=21535
,P_Suspend_ARC_Timer=21626
,P_Suspend_ARC_Tact_Time=21647
,P_Suspend_Anode_1TR_Cell_Supply_Cmd=21648
,P_Suspend_Anode_1TR_Cell_Supply_Status=21649
,P_Suspend_Anode_1TR_Cell_Supply_State_Machine=21650
,P_Suspend_Anode_1TR_Cell_Supply_Seq_Index=21651
,P_Suspend_Anode_1TR_Cell_Supply_Self_Index=21652
,P_Suspend_Anode_1TR_Cell_Supply_Module_Status=21653
,P_Suspend_Anode_1TR_Cell_Supply_Timer=21744
,P_Suspend_Anode_1TR_Cell_Supply_Tact_Time=21765
,P_Hold_Exist_Insp_Cmd=21766
,P_Hold_Exist_Insp_Status=21767
,P_Hold_Exist_Insp_Module_Status=21768
,P_Hold_Exist_Insp_State_Machine=21769
,P_Hold_Exist_Insp_Seq_Index=21770
,P_Hold_Exist_Insp_Self_Index=21771
,P_Hold_Exist_Insp_Debug_Edge=21772
,P_Hold_Exist_Insp_Timer=21803
,P_Hold_Exist_Insp_Tact_Time=21824
,P_Hold_Remove_NG_PNP_Cmd=21825
,P_Hold_Remove_NG_PNP_Status=21826
,P_Hold_Remove_NG_PNP_Module_Status=21827
,P_Hold_Remove_NG_PNP_State_Machine=21828
,P_Hold_Remove_NG_PNP_Seq_Index=21829
,P_Hold_Remove_NG_PNP_Self_Index=21830
,P_Hold_Remove_NG_PNP_Debug_Edge=21831
,P_Hold_Remove_NG_PNP_Timer=21862
,P_Hold_Remove_NG_PNP_Tact_Time=21883
,P_PLC01_Hold_Remove_NG_PNP_Sub_Flag=21884
,P_PLC01_Hold_Remove_NG_PNP_Sub_State_Machine=21885
,P_PLC01_Hold_Remove_NG_PNP_Sub_Status=21886
,P_Hold_Remove_Align_Cmd=21887
,P_Hold_Remove_Align_Status=21888
,P_Hold_Remove_Align_Module_Status=21889
,P_Hold_Remove_Align_State_Machine=21890
,P_Hold_Remove_Align_Seq_Index=21891
,P_Hold_Remove_Align_Self_Index=21892
,P_Hold_Remove_Align_Debug_Edge=21893
,P_Hold_Remove_Align_Timer=21924
,P_Hold_Remove_Align_Tact_Time=21945
,P_PLC01_Hold_Remove_Align_Sub_Flag=21946
,P_PLC01_Hold_Remove_Align_Sub_State_Machine=21947
,P_PLC01_Hold_Remove_Align_Sub_Status=21948
,P_Hold_Remove_2TR_Cmd=21949
,P_Hold_Remove_2TR_Status=21950
,P_Hold_Remove_2TR_Module_Status=21951
,P_Hold_Remove_2TR_State_Machine=21952
,P_Hold_Remove_2TR_Seq_Index=21953
,P_Hold_Remove_2TR_Self_Index=21954
,P_Hold_Remove_2TR_Debug_Edge=21955
,P_Hold_Remove_2TR_Timer=21986
,P_Hold_Remove_2TR_Tact_Time=22007
,P_Hold_Supply_1TR_Cmd=22008
,P_Hold_Supply_1TR_Status=22009
,P_Hold_Supply_1TR_Module_Status=22010
,P_Hold_Supply_1TR_State_Machine=22011
,P_Hold_Supply_1TR_Seq_Index=22012
,P_Hold_Supply_1TR_Self_Index=22013
,P_Hold_Supply_1TR_Debug_Edge=22014
,P_Hold_Supply_1TR_Timer=22045
,P_Hold_Supply_1TR_Tact_Time=22066
,P_PLC01_Hold_Supply_1TR_Memory_RTN=22067
,P_PLC01_Hold_Supply_1TR_Judge_Flag=22068
,P_PLC01_Hold_Supply_1TR_Judge_State_Machine=22069
,P_PLC01_Hold_Supply_1TR_Judge_Status=22070
,P_Plate_1TR_Supply_Module_Judge_Bit=22071
,P_Hold_Supply_Align_Cmd=22072
,P_Hold_Supply_Align_Status=22073
,P_Hold_Supply_Align_Module_Status=22074
,P_Hold_Supply_Align_State_Machine=22075
,P_Hold_Supply_Align_Seq_Index=22076
,P_Hold_Supply_Align_Self_Index=22077
,P_Hold_Supply_Align_Debug_Edge=22078
,P_Hold_Supply_Align_Timer=22109
,P_Hold_Supply_Align_Tact_Time=22130
,P_Hold_Supply_2TR_Cmd=22131
,P_Hold_Supply_2TR_Status=22132
,P_Hold_Supply_2TR_Module_Status=22133
,P_Hold_Supply_2TR_State_Machine=22134
,P_Hold_Supply_2TR_Seq_Index=22135
,P_Hold_Supply_2TR_Self_Index=22136
,P_Hold_Supply_2TR_Debug_Edge=22137
,P_Hold_Supply_2TR_Timer=22168
,P_Hold_Supply_2TR_Tact_Time=22189
,P_Hold_Semi_Run_Pos_Move_Cmd=22190
,P_Hold_Semi_Run_Pos_Move_Status=22191
,P_Hold_Semi_Run_Pos_Move_Module_Status=22192
,P_Hold_Semi_Run_Pos_Move_State_Machine=22193
,P_Hold_Semi_Run_Pos_Move_Seq_Index=22194
,P_Hold_Semi_Run_Pos_Move_Self_Index=22195
,P_Hold_Semi_Run_Pos_Move_Debug_Edge=22196
,P_Hold_Semi_Run_Pos_Move_Timer=22227
,P_Hold_Semi_Run_Pos_Move_Tact_Time=22248
,P_Act_Suspend_Time_Out_Time=22447
,P_Test_Sungmin_Flag=22514
,P_Suspend_Discharge_Module_Status=23373
,P_Suspend_Discharge_To_Execute_Flag=23374
,P_Suspend_Discharge_Complete_Flag=23375
,P_First_Unloader_Stack_Up_Status=23376
,P_First_Unloader_Stack_FWD_Status=23377
,P_First_Unloader_Grip_Cell_Status=23378
,P_First_Unloader_Stack_BWD_Wait_Status=23379
,P_First_Unloader_Stack_BWD_Status=23380
,P_First_Unloader_Stack_Down_Status=23381
,P_First_Unloader_Avoid_Status=23382
,P_First_Unloader_Turn_Status=23383
,P_First_Unloader_Handover_Status=23384
,P_Cathode_Clamp_OFF_Status=23385
,P_Final_Roll_Discharge_Status=23386
,P_Final_Roll_Stack_Pos_Status=23387
,P_Final_Roll_Stack_Up_Pos_Status=23388
,P_Main_Z_Init_Pos_Status=23389
,P_Sheet_Paper_BWD_Status=23390
,P_Discharge_Vision_DIO_RTN=23391
,P_Discharge_Sub_RTN=23392
,P_Discharge_NG_Code_Report_RTN=23393
,P_Individual_RTN=23394
,P_Suspend_Discharge_Last_Run_Bit=23395
,P_Suspend_Discharge_JR_Result_RTN=23396
,P_ARC_Buffer_Jog_Speed=23397
,P_Selected_Spool_Number=23398
,P_ARC_Home_Check_RTN=23399
,P_Suspend_ARC_Module_Status=23400
,P_Not_Selected_Spool_Radius=23401
,P_Not_Selected_Spool_Circumference=23402
,P_Passive_D_One_Degree_AD_Value=23428
,P_After_ARC_Rotate_Distance=23429
,P_Stack_Vision_NG_Code_Time_Over=23430
,P_Suspend_Discharge_Resume_Flag=23431
,P_Suspend_Discharge_Resume_Complete=23432
,P_Suspend_Discharge_Pause_Flag=23433
,P_Flag_Stack_Work_Host_ID=23444
,P_First_Sepa_Stack_Align_OK_PMAC_Flag=23445
,P_Sepa_Run_Completed_Status_Machine=23446
,P_Discharge_Debug_Edge=23447
,P_Discharge_Sepa_Cutter_Time_Out_State_Machine=23458
,P_Old_Suspend_Discharge_Seq_Index=23459
,P_Discharge_Debug_Index_1=23460
,P_Discharge_Debug_Index_2=23461
,P_Discharge_Debug_Index_3=23462
,P_Discharge_Debug_Index_4=23463
,P_ARC_Debug_Edge=23464
,P_Old_Suspend_ARC_Seq_Index=23475
,P_ARC_Debug_Index_1=23476
,P_ARC_Debug_Index_2=23477
,P_ARC_Debug_Index_3=23478
,P_ARC_Debug_Index_4=23479
,P_Suspend_Cutter_Heating_Time=23482
,P_Suspend_Cutter_Heating_Timer=23483
,P_An_1TR_Supply_Debug_Edge=23484
,P_Old_Suspend_An_1TR_Supply_Seq_Index=23495
,P_An_1TR_Supply_Debug_Index_1=23496
,P_An_1TR_Supply_Debug_Index_2=23497
,P_An_1TR_Supply_Debug_Index_3=23498
,P_An_1TR_Supply_Debug_Index_4=23499
,P_Suspend_Supply_Index=23500
,P_Suspend_Supply_Index_2nd=23501
,P_Suspend_Supply_Pause_Flag=23510
,P_Suspend_Supply_Resume_Flag=23511
,P_Supply_Module_Status=23512
,P_Suspend_Anode_1TR_Supply_Complete_Flag=23513
,P_Suspend_Discharge_Module_Error=23514
,P_Suspend_ARC_Module_Error=23515
,P_Suspend_1st_Supply_Error=23516
,P_Discharge_Seq_Data=23517
,P_Suspend_Discharging_Popup_Flag=23518
,P_Suspend_Discharge_FR_Unclamp_Error_Popup_Flag=23519
,P_Suspend_Discharge_Cathode_Align_Retry_Cal_Error_Popup_Flag=23520
,P_Suspend_Discharge_Anode_Align_Retry_Cal_Error_Popup_Flag=23521
,P_Suspend_Discharge_FR_Discharge_Pos_Error_Popup_Flag=23522
,P_Suspend_Discharge_1st_Unloader_Grip_OFF_Error_Popup_Flag=23523
,P_Suspend_Discharge_1st_Unloader_Up_Error_Popup_Flag=23524
,P_Suspend_Discharge_1st_Unloader_FWD_Error_Popup_Flag=23525
,P_Suspend_Discharge_FR_Clamp_Error_Popup_Flag=23526
,P_Suspend_Discharge_Sepa_Cutter_Heating_Error_Popup_Flag=23527
,P_Suspend_Discharge_1st_Unloader_Grip_Cell_Pos_Error_Popup_Flag=23528
,P_Suspend_Discharge_1st_Unloader_Grip_ON_Error_Popup_Flag=23529
,P_Suspend_Discharge_Sheet_Paper_BWD_Error_Popup_Flag=23530
,P_Suspend_Discharge_Cathode_Clamp_OFF_Error_Popup_Flag=23531
,P_Suspend_Discharge_Sepa_Cutter_FWD_Error_Popup_Flag=23532
,P_Suspend_Discharge_Sheet_Paper_Vacuum_ON_Error_Popup_Flag=23533
,P_Suspend_Discharge_Sepa_Cutter_BWD_Error_Popup_Flag=23534
,P_Suspend_Discharge_1st_Unloader_BWD_Wait_Pos_Error_Popup_Flag=23535
,P_Suspend_Discharge_1st_Unloader_BWD_Error_Popup_Flag=23536
,P_Suspend_Discharge_1st_Unloader_Stack_Down_Error_Popup_Flag=23537
,P_Suspend_Discharge_FR_Stack_Pos_Error_Popup_Flag=23538
,P_Suspend_Discharge_After_Action_Init_Error_Popup_Flag=23539
,P_Suspend_Discharge_1st_Unloader_Avoid_Pos_Error_Popup_Flag=23540
,P_Suspend_Discharge_1st_2nd_Unloader_Handover_Chk_Error_Popup_Flag=23541
,P_Suspend_Discharge_1st_Unloader_Handover_Pos_Error_Popup_Flag=23542
,P_Suspend_Discharge_2nd_3rd_Unloader_Grip_Request_Error_Popup_Flag=23543
,P_Suspend_Discharge_1st_Unloader_Wait_Pos_Error_Popup_Flag=23544
,P_Suspend_ARC_Manual_ARC_Active_Popup_Flag=23545
,P_Suspend_ARC_Auto_ARC_Active_Popup_Flag=23546
,P_Suspend_ARC_Pre_Act_Popup_Flag=23547
,P_Suspend_ARC_Dancer_Close_Popup_Flag=23548
,P_Suspend_ARC_Use_Plate_FWD_Popup_Flag=23549
,P_Suspend_ARC_Replace_Plate_Blow_ON_Popup_Flag=23550
,P_Suspend_ARC_Use_Plate_Clamp_Popup_Flag=23551
,P_Suspend_ARC_Use_Plate_Cutter_FWD_Popup_Flag=23552
,P_Suspend_ARC_Use_Plate_Cutter_BWD_Popup_Flag=23553
,P_Suspend_ARC_Use_Plate_Unclamp_Popup_Flag=23554
,P_Suspend_ARC_Use_Plate_BWD_Popup_Flag=23555
,P_Suspend_ARC_Replace_Plate_Blow_OFF_Popup_Flag=23556
,P_Suspend_ARC_Dancer_Open_Popup_Flag=23557
,P_Suspend_ARC_Spool_Change_Popup_Flag=23558
,P_Suspend_ARC_Post_Act_Popup_Flag=23559
,P_Suspend_ARC_Previous_Spool_Remain_Winding_Popup_Flag=23560
,P_Suspend_Discharge_First_Address=23561
,P_Suspend_ARC_First_Address=23562
,P_Status_Stop_Ready_Pos_Move=23563
,P_Cycle_Stop_Stauts=23564
,P_Cycle_Stop_Status_Machine=23565
,P_Cycle_Stop_Flag=23566
,P_Speed_Origin_rtn=23567
,P_Speed_rtn=23568
,P_NG_PNP_Z_Move_rtn=23569
,P_NG_PNP_Z_Move_Check_rtn=23570
,P_NG_PNP_T_Move_rtn=23571
,P_NG_PNP_T_Move_Check_rtn=23572
,P_2nd_Z_Move_rtn=23573
,P_2nd_Z_Move_Check_rtn=23574
,P_2nd_T_Move_rtn=23575
,P_2nd_T_Move_Check_rtn=23576
,P_Stack_Judgement_Memory=23577
,P_Stop_Cycle_Stop_Move_Status=23578
,P_STOP_Initial_Process_Status=23579
,P_Stopping_CycleStop_Init_Flag=23580
,P_Sepa_Timing=23581
,P_Old_Trigger_PLC0=23582
,P_Mode_Command=23583
,P_Current_Mode=23584
,P_Mode_Command_Buffer=23605
,P_Mode_Command_Wait_Count=23606
,P_Old_Mode_Command=23607
,P_Anode_NG_Unit_Status=26608
,P_Cathode_NG_Unit_Status=26609
,P_ParsingRtn=26610
,P_CurPosData=26611
,P_Hold_MNTR_Supply_1st=26612
,P_TimeOutNumb=26613
,P_PosRtn=26614
,P_MotionRtn=26615
,P_CmdData=26616
,P_Interval=26617
,P_Cont_Ret=26618
,P_Cur_Idx=26619
,P_NextID=26620
,P_Cur_Size=26621
,P_Hold_Exist_Insp=26622
,P_Hold_Remove_NG_PNP=26623
,P_Hold_Remove_Align=26624
,P_Hold_Remove_2TR=26625
,P_Hold_Supply_1TR=26626
,P_Hold_Supply_Align=26627
,P_Hold_Supply_2TR=26628
,P_Hold_Semi_Run=26629
,P_Hold_NG_PNP_Remove=180
,P_Hold_Remove_2nd=182
,P_Hold_Supply_1st=183
,P_Hold_Supply_2nd=185
,P_Hold_Data_process=186
,P_Hold_Semi_Run_Enable_Pos=187
,P_Hold_Existence_Insp=188
,P_Hold_1st_Belt_Move=189
,P_Hold_Motion=190
,P_Hold_Data_process_State_Machine=26630
,P_Hold_Align_Remove_State_Machine=26631
,P_Hold_2nd_Remove_State_Machine=26632
,P_Hold_Supply_1st_State_Machine=26633
,P_Hold_Supply_2nd_State_Machine=26634
,P_Hold_Existence_Insp_State_Machine=26635
,P_Hold_NG_PNP_Remove_State_Machine=26636
,P_Hold_Data_Process_Complete=26637
,P_Hold_Semi_Run_Enable_Pos_State_Machine=26638
,P_HOLD_Existence_Insp_Queue_State_Machine=26639
,P_Hold_Stop_Existence_Insp_STEP=26640
,P_SubMaster_Status_Err=26641
,P_Data_Process_Rtn=26642
,P_Hold_Set_Trigger=26643
,P_Hold_Get_Trigger=26644
,P_Anode_2nd_Data=26645
,P_Anode_Align_Data=26646
,P_Hold_Remove_Step=26647
,P_HList_Head_Idx=26648
,P_Hold_Next_ID=26649
,P_Hold_Data_Value=26670
,P_Comb_Bitwise=26671
,P_Target_Cmd=26672
,P_Temp_Bit=26673
,P_Get_ErrorCode=26674
,P_Rtn_Code=26675
,P_Complete_Hold_Bit=26676
,P_HoldMtion_Flag=26677
,P_Ret_BitWise=26678
,P_NotEnough_GetSpace=26679
,P_NotEnough_SetSpace=26680
,P_Check_SetSpace=26681
,P_Hold_Get_Data=26682
,P_Err_NextID_Flag=26683
,P_Elec_Bit=26684
,P_MotionData=26685
,P_Cur_PosX1=26701
,P_Cur_PosZ1=26702
,P_Cur_PosX2=26703
,P_Cur_PosZ2=26704
,P_Dest_PosX=26705
,P_Dest_PosZ=26706
,P_FailToParse=26707
,P_CurTrigger=26708
,P_TimeOutTrigger=26709
,P_CalcTime=26710
,P_Cycle_Count=26711
,P_MotionTimeOutFlag=26712
,P_Set_Data=26713
,P_Rtn=26714
,P_CurPosTestBit=26715
,P_Hold_Anode_Pause_CHK=26716
,P_Hold_Cathode_Pause_CHK=26717
,P_Surface_Complete_To_Hold=26718
,P_Hold_Pause_Trg=26739
,P_From_Staring_Flag=26740
,P_Hold_Existence_Insp_Enqueue_Flag=26741
,P_Hold_Rtn=26742
,P_Debug_Existence_Insp_STEP=26743
,P_Hold_Align_Sheet_CHK=26744
,P_Hold_Cathode_Exception_Empty_Flag=26745
,P_Hold_Anode_Exception_Empty_Flag=26746
,P_HOLD_Hold_Process_State_Machine=26747
,P_Hold_Stop_Sheet_Process_STEP=26748
,P_Hold_Debug_Sheet_Process_STEP=26749
,P_Hold_Stop_Point=26750
,P_Hold_CHK=26751
,P_Hold_Test=26752
,P_Anode_1st_Motion_Complete=26753
,P_Anode_2nd_Motion_Complete=26754
,P_Anode_NG_PNP_Motion_Complete=26755
,P_Cathode_1st_Motion_Complete=26756
,P_Cathode_2nd_Motion_Complete=26757
,P_Cathode_NG_PNP_Motion_Complete=26758
,P_Anode_1st_Picker_Motion_Complete=26759
,P_Cathode_1st_Picker_Motion_Complete=26760
,P_individual_return=26761
,P_individual_return2=26762
,P_HoldCurPosBit1=26763
,P_HoldCurPosBit2=26764
,P_Parsing_Status=26765
,P_Sel_Obj=26766
,P_Sel_Elec=26767
,P_Error=26768
,P_Vision_FirstSepa_Complete=26769
,P_NG_PNP_Turn_TM=26770
,P_NG_PNP_Turn_TS=26771
,P_NG_PNP_Turn_TA=26772
,P_NG_PNP_Up_TM=26773
,P_NG_PNP_Up_TS=26774
,P_NG_PNP_Up_TA=26775
,P_NG_PNP_Down_TM=26776
,P_NG_PNP_Down_TS=26777
,P_NG_PNP_Down_TA=26778
,P_NG_PNP_Vac_Time=26779
,P_NG_PNP_Blow_Time=26780
,P_Slow_NG_Mode_Btn=26781
,P_HOLD_Memory_Tower_Offset=26782
,P_Hold_Pause_Use=26783
,P_Hold_Motion_Err_Chk=26804
,P_Hold_Motion_TimeOut=26820
,P_Hold_Data_OK=26821
,P_VISION_TRG_PLC4_AnodeSurface_Ins_Shoot=26822
,P_VISION_TRG_PLC4_CathodeSurface_Ins_Shoot=26823
,P_Memory_Tower_Test=26824
,P_Temp_Run_Mode=26825
,P_Data_Idx=26826
,P_Get_Data_Idx=26827
,P_HOLD_Data_Err_Queue=26828
,P_HOLD_Data_Err_State_Machine=26829
,P_HOLD_Err_Set_Data=26830
,P_HOLD_Err_Save=26831
,P_Sepa_Run_Completed_Flag=26832
,P_Log_Data_Y=27766
,P_Log_Data_M=27767
,P_Log_Data_D=27768
,P_Log_Data_H=27769
,P_Log_Data_m=27770
,P_Log_Data_s=27771
,P_MNTR_End_Index=27772
,P_BG_CPLC_Running_MNTR=50
,P_RTI_CPLC_Running_MNTR=51
,P_Log_Start_Flag=170
,P_Log_Document_Remove_Flag=171
,P_Sepa_ID_Change_Flag=172
,P_USB_Register=173
,P_Cur_Line_Check=175
,P_Cur_Line_Check_Init=176
,P_Hold_Pass=27783
,P_PLC01_Total_Step_Flag=27799
,P_PLC02_Total_Step_Flag=27800
,P_PLC014_Total_Step_Flag=27801
,P_PLC02_Total_Step_Flag2=27802
,P_Vac_Pass=27803
,P_Vision_Pass_Exisitence=27804
,P_Vision_Pass_Empty=27805
,P_Vision_Pass_FirstSepa=27806
,P_Vision_Pass_Stack_Inspection=27807
,P_ULD_Home_Pass=27808
,P_Clamp_Cell_Down_Use=27809
,P_FR_Clamp_Use_Test=27810
,P_Door_Interlock_Use_Flag=27811
,P_Vacuum_Door_Clear_Use=27812
,P_Align_Test_Pos=27813
,P_PLC02_Exe_Module_First_Sepa_Step_Flag=27909
,P_PLC02_Sus_Module_Discharge_Step_Flag=27910
,P_PLC02_Sus_Module_ARC_Step_Flag=27911
,P_PLC02_Sus_Module_1TR_Supply_Step_Flag=27912
,P_PLC02_HOLD_Module_Insp_Step_Flag=27913
,P_PLC02_HOLD_Module_Remove_NGPNP_Step_Flag=27914
,P_PLC02_HOLD_Module_Remove_Align_Step_Flag=27915
,P_PLC02_HOLD_Module_Remove_2TR_Step_Flag=27916
,P_PLC02_HOLD_Module_Supply_1TR_Step_Flag=27917
,P_PLC02_HOLD_Module_Supply_Align_Step_Flag=27918
,P_PLC02_HOLD_Module_Supply_2TR_Step_Flag=27919
,P_PLC02_HOLD_Module_SemiRun_Pos_Step_Flag=27920
,P_PLC14_STOP_Module_Cycle_Stop_Step_Flag=27921
,P_PLC02_Discharge_MNTR=27922
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
,P_Error_Index_Number=27923
,P_ECAT_MNTR_Bit=27924
,P_Local_MNTR_Bit=27925
,P_Clamp_Motion_VER1=27926
,P_CA_DR_Ta=27927
,P_CA_DR_Ts=27928
,P_CA_DR_Tm=27929
,P_CA_DR_Td=27930
,P_CA_DR_Tsd=27931
,P_AN_DR_Ta=27932
,P_AN_DR_Ts=27933
,P_AN_DR_Tm=27934
,P_AN_DR_Td=27935
,P_AN_DR_Tsd=27936
,P_First_Sepa_1st_Driving_Move=27937
,P_AN_Cam_Total_Time=27938
,P_CA_Cam_Total_Time=27939
,P_Dry_Run_BTN=27940
,P_Home_Angle_Offset_change_Bit=27941
,P_InterLock_Motor_Num=27942
,P_Recipe_Move_IL_Loop=27943
,P_Z_Var=27944};
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
,P_MNTR_PLC0_Task_Time=8761
,P_MNTR_PLC1_Task_Time=8764
,P_MNTR_PLC2_Task_Time=8767
,P_MNTR_PLC3_Task_Time=8770
,P_MNTR_PLC4_Task_Time=8773
,P_MNTR_PLC5_Task_Time=8776
,P_MNTR_PLC6_Task_Time=8779
,P_MNTR_PLC7_Task_Time=8782
,P_MNTR_PLC8_Task_Time=8785
,P_MNTR_PLC9_Task_Time=8788
,P_MNTR_PLC10_Task_Time=8791
,P_MNTR_PLC11_Task_Time=8794
,P_MNTR_PLC12_Task_Time=8797
,P_MNTR_PLC13_Task_Time=8800
,P_MNTR_PLC14_Task_Time=8803
,P_MNTR_PLC15_Task_Time=8806
,P_MNTR_PLC16_Task_Time=8809
,P_MNTR_PLC17_Task_Time=8812
,P_MNTR_PLC18_Task_Time=8815
,P_MNTR_PLC19_Task_Time=8818
,P_MNTR_PLC20_Task_Time=8821
,P_MNTR_PLC21_Task_Time=8824
,P_MNTR_PLC22_Task_Time=8827
,P_MNTR_PLC23_Task_Time=8830
,P_MNTR_PLC24_Task_Time=8833
,P_MNTR_PLC25_Task_Time=8836
,P_MNTR_PLC26_Task_Time=8839
,P_MNTR_PLC27_Task_Time=8842
,P_MNTR_PLC28_Task_Time=8845
,P_MNTR_PLC29_Task_Time=8848
,P_MNTR_PLC30_Task_Time=8851
,P_Vision_Result=8856
,P_Vision_Result_Get_First_Cycle=8860
,P_Init_Result=8864
,P_FR_AI_Value=8891
,P_Dequeue_Log=8926
,P_Motor_Current_Pos=8959
,P_Axis_Scale_Value=9009
,P_Except_Return_Array=9059
,P_Hold_Memory=9159
,P_Suspend_Memory=9164
,P_Execute_Memory=9169
,P_Stop_Memory=9174
,P_CircularQueue_Command_array=9195
,P_Recipe_1st_MotorNo=9224
,P_Recipe_2nd_MotorNo=9274
,P_Recipe_3rd_MotorNo=9324
,P_Recipe_4th_MotorNo=9374
,P_Recipe_5th_MotorNo=9424
,P_Recipe_6th_MotorNo=9474
,P_Recipe_M01_POS=9552
,P_Recipe_M02_POS=9563
,P_Recipe_M03_POS=9574
,P_Recipe_M04_POS=9585
,P_Recipe_M05_POS=9596
,P_Recipe_M06_POS=9607
,P_Recipe_M07_POS=9618
,P_Recipe_M08_POS=9629
,P_Recipe_M09_POS=9640
,P_Recipe_M10_POS=9651
,P_Recipe_M11_POS=9662
,P_Recipe_M12_POS=9673
,P_Recipe_M13_POS=9684
,P_Recipe_M14_POS=9695
,P_Recipe_M15_POS=9706
,P_Recipe_M16_POS=9717
,P_Recipe_M17_POS=9728
,P_Recipe_M18_POS=9739
,P_Recipe_M19_POS=9750
,P_Recipe_M20_POS=9761
,P_Recipe_M21_POS=9772
,P_Recipe_M22_POS=9783
,P_Recipe_M23_POS=9794
,P_Recipe_M24_POS=9805
,P_Recipe_M25_POS=9816
,P_Recipe_M26_POS=9827
,P_Recipe_M27_POS=9838
,P_Recipe_M28_POS=9849
,P_Recipe_M29_POS=9860
,P_Recipe_M30_POS=9871
,P_Recipe_M31_POS=9882
,P_Recipe_M32_POS=9893
,P_Recipe_M33_POS=9904
,P_Recipe_M34_POS=9915
,P_Recipe_M35_POS=9926
,P_Recipe_M36_POS=9937
,P_Recipe_M37_POS=9948
,P_Recipe_M38_POS=9959
,P_Recipe_M39_POS=9970
,P_Recipe_M40_POS=9981
,P_Recipe_M41_POS=9992
,P_Recipe_M42_POS=10003
,P_Recipe_M43_POS=10014
,P_Recipe_M44_POS=10025
,P_Recipe_M45_POS=10036
,P_Recipe_M46_POS=10047
,P_Recipe_M47_POS=10058
,P_Recipe_M48_POS=10069
,P_Recipe_M49_POS=10080
,P_Recipe_M50_POS=10091
,P_Error_X_Axis_Packml=10108
,P_Error_X_Axis_Dequeue=10114
,P_Error_X_Axis_Num=10120
,P_Memory_Tower_Err_Pos_X_Save=10126
,P_Error_Y_Axis_Packml=10132
,P_Error_Y_Axis_Dequeue=10138
,P_Error_Y_Axis_Num=10144
,P_Memory_Tower_Err_Pos_Y_Save=10150
,P_Error_Z_Axis_Packml=10156
,P_Error_Z_Axis_Dequeue=10162
,P_Error_Z_Axis_Num=10168
,P_Memory_Tower_Err_Pos_Z_Save=10174
,P_Error_ZZ_Axis_Packml=10180
,P_Error_ZZ_Axis_Dequeue=10186
,P_Error_ZZ_Axis_Num=10192
,P_Memory_Tower_Err_Pos_ZZ_Save=10198
,P_1st_PNP_FWD_Abort_Offset=10311
,P_1st_PNP_BWD_Abort_Offset=10401
,P_2nd_PNP_FWD_Abort_Offset=10491
,P_2nd_PNP_BWD_Abort_Offset=10581
,P_Align_Zero_Move_Start_Flag=10733
,P_Stop_Sub_Master_Motion_Program_Flag=10744
,P_Stop_Slave_Motion_Program_Flag=10764
,P_Stop_Motor_Status=10784
,P_Stop_Coord_Status=10832
,P_Stop_Save_RTN=10869
,P_Stop_Motor_Pos=10875
,P_Old_P_Anode_TR1_Master_Motion_Trigger=10932
,P_Old_P_Cathode_TR1_Master_Motion_Trigger=10948
,P_Anode_TR1_Old_Mode=10964
,P_Cathode_TR1_Old_Mode=10980
,P_Older_Than_P_Anode_TR1_Old_Mode=10996
,P_Older_Than_P_Cathode_TR1_Old_Mode=11012
,P_Older_Than_P_Sequence_Old_P_Anode_TR1_Current_Mode_Trigger=11028
,P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Current_Mode_Trigger=11044
,P_Old_P_Anode_TR1_Mode_Command=11060
,P_Old_P_Cathode_TR1_Mode_Command=11076
,P_Older_Than_P_Old_P_Anode_TR1_Mode_Command=11092
,P_Older_Than_P_Old_P_Cathode_TR1_Mode_Command=11108
,P_Older_Than_P_Sequence_Old_P_Anode_TR1_Mode_Command_Trigger=11124
,P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Mode_Command_Trigger=11140
,P_Old_P_Anode_TR1_PMAC_Status=11156
,P_Old_P_Cathode_TR1_PMAC_Status=11172
,P_Older_Than_P_Old_P_Anode_TR1_PMAC_Status=11188
,P_Older_Than_P_Old_P_Cathode_TR1_PMAC_Status=11204
,P_Old_P_Slave1_Motion_Command=11220
,P_Old_P_Slave10_Motion_Command=11236
,P_Old_Slave1_P_SubMaster_Sub_Mode_Command=11252
,P_Old_Slave10_P_SubMaster_Sub_Mode_Command=11268
,P_Sequence_Old_P_Current_Mode_Trigger=11284
,P_Sequence_Old_Mode=11300
,P_Sequence_Old_P_Mode_Command=11316
,P_Sequence_Old_P_Mode_Command_Trigger=11332
,P_SubMaster_Sub_Old_Mode=11348
,P_SubMaster_Sub_Old_Command=11364
,P_SubMaster_Sub_Mode_Command=11380
,P_SubMaster_Sub_Old_Trigger=11396
,P_InterLock_No3_Array=11412
,P_Old_InterLock_No3_Array=11428
,P_Mode_Err=11444
,P_Phasing_Err=11472
,P_Phasing_Err2=11477
,P_Cathode_Run_Mode_Type=11485
,P_Cathode_Run_Mode_Trigger=11505
,P_Anode_Run_Mode_Type=11526
,P_Anode_Run_Mode_Trigger=11546
,P_Stop_Origin_Save=11723
,P_Sheet_Err=11805
,P_Drivig_Cal_Save=11824
,P_PMAC_Status_Arr_Save1=11831
,P_HomePos_Save1=11836
,P_PMAC_Status_Arr_Save2=11841
,P_HomePos_Save2=11846
,P_PMAC_Status_Arr_Save3=11851
,P_HomePos_Save3=11856
,P_PMAC_Status_Arr_Save4=11861
,P_HomePos_Save4=11866
,P_HomePos_Err=11876
,P_Cutter_FWB_Heater_Current=11941
,P_Scan_Time=11995
,P_Read_Sector_TactTime=12103
,P_Write_Sector_TactTime=12109
,P_SV_AO_Reference_Value_Chanel=12132
,P_MSA_Run_Repeat_Num=12165
,P_Current_MSA_Run_Num=12170
,P_PV_AO_Value_Chanel=12503
,P_Interlock_Messege=12514
,P_Current_Homming_Status=12567
,P_Home_Execute_Type=12617
,P_Interval_Read_Time=12670
,P_Interval_Write_Time=12676
,P_Sub_Master_Motion_Program_Flag=12717
,P_Slave_Motion_Program_Flag=12737
,P_OLD_Jog_Speed_Motor=12758
,P_Command_Start=12814
,P_Command_Complete=12832
,P_Command_Reset=12850
,P_Command_Hold=12868
,P_Command_Unhold=12886
,P_Command_Suspend=12904
,P_Command_Unsuspend=12922
,P_Command_Clear=12940
,P_Command_Stop=12958
,P_Command_Abort=12976
,P_Command_Status_Complete=12994
,P_Command_Mask_Layer=13012
,P_Command_Process_Type=13030
,P_Sum_Ready_pos_Motor=13086
,P_Anode_Align_NG_Array=13211
,P_Cathode_Align_NG_Array=13231
,P_Anode_Surface_NG_Array=13251
,P_Cathode_Surface_NG_Array=13271
,P_Stack_NG_Array=13291
,P_Continuous_Call_Align_OK_Flag=13323
,P_Continuous_Call_Align_NG_Flag=13325
,P_Continuous_Call_Align_TimeOut_Flag=13327
,P_Continuous_Call_Surface_OK_Flag=13329
,P_Continuous_Call_Surface_NG_Flag=13331
,P_Continuous_Call_Surface_TimeOut_Flag=13333
,P_Continuous_Call_Stack_Flag=13335
,P_PLC12_Observser_MNTR=13347
,P_PLC12_Vacuum_MNTR=13352
,P_Vacuum_Check=13360
,P_PLC12_Blow_MNTR=13368
,P_Blow_Check=13376
,P_PLC12_Vacuum_1st_Cathode_Take_Time=13400
,P_PLC12_Vacuum_2nd_Cathode_Take_Time=13405
,P_PLC12_Vacuum_NG_Cathode_Take_Time=13410
,P_PLC12_Vacuum_Align_Cathode_Take_Time=13415
,P_PLC12_Vacuum_1st_Anode_Take_Time=13420
,P_PLC12_Vacuum_2nd_Anode_Take_Time=13425
,P_PLC12_Vacuum_NG_Anode_Take_Time=13430
,P_PLC12_Vacuum_Align_Anode_Take_Time=13435
,P_PLC12_Blow_1st_Cathode_Take_Time=13456
,P_PLC12_Blow_2nd_Cathode_Take_Time=13461
,P_PLC12_Blow_NG_Cathode_Take_Time=13466
,P_PLC12_Blow_Align_Cathode_Take_Time=13471
,P_PLC12_Blow_1st_Anode_Take_Time=13476
,P_PLC12_Blow_2nd_Anode_Take_Time=13481
,P_PLC12_Blow_NG_Anode_Take_Time=13486
,P_PLC12_Blow_Align_Anode_Take_Time=13491
,P_Status_arry=13498
,P_Queue_arry=13518
,P_Step_arry=13538
,P_Index_arry=13558
,P_PLC_Observser_MNTR=13585
,P_Test_Vacuum_Timer=13594
,P_Test_Blow_Timer=13602
,P_Vac_Test_Set_Time=13610
,P_Blow_Test_Set_Time=13618
,P_Zero_Angle=13681
,P_Zero_Length=13706
,P_Homeoffset_Change_Flag=13731
,P_Cal_Distance=13756
,P_Cal_Denominator=13761
,P_Cal_Numerator=13766
,P_Cal_Dif_Deg=13771
,P_Vac_Door_Open_Clear=13776
,P_Read_Timer_S=13790
,P_Write_Timer_S=13799
,P_Interval_Read_S=13808
,P_Interval_Write_S=13817
,P_UI_Jog_Vel_M=13826
,P_Old_X_Read_Count_S=13877
,P_X_BTN_Manual_1=13900
,P_X_BTN_Manual_2=14020
,P_X_BTN_Manual_3=14140
,P_Home_InterLock_M=14260
,P_Status_BTN_Manual_1=14310
,P_Status_BTN_Manual_2=14430
,P_Status_BTN_Manual_Interlock_1=14550
,P_Status_BTN_Manual_Interlock_2=14670
,P_Status_BTN_Manual_Interlock_3=14790
,P_Mode_Run_Enable_Flag=14910
,P_MNTR_PLC4_Vision_Result=14917
,P_PNP_Vac_Mode_Run_Enable_Flag=15118
,P_HCK_Step_MNTR=15125
,P_Axis_Home_Pos=15175
,P_Axis_Ready_Pos=15225
,P_PMAC_Homing_CHK=15275
,P_Home_Command=15326
,P_Old_BTN_Servo_On_Off_M=15380
,P_Peak_Load_Ratio_M=15413
,P_Chk_Current_Jog_Sel=15446
,P_Recipe_POS_Interock_Num_Bit=15480
,P_Recipe_VEL=15513
,P_Recipe_POS=15524
,P_BTN_Servo_On_Off_M=15535
,P_BTN_Home_M=15568
,P_BTN_Jog_Stop_M=15601
,P_BTN_Recipe_POS_RUN_M=15634
,P_Recipe_POS_Flag_M=15667
,P_BTN_Jog_INC_M=15700
,P_BTN_JOG_ABS_M=15733
,P_Unit_Command=15767
,P_Unit_State_Machine=15867
,P_Status_BTN_Manual_3=15967
,P_Chk_Current_BTN_Sel=16067
,P_Linear_Encoder_Pos_Check_Flag=16126
,P_Linear_Encoder_Pos=16131
,P_Status_Linear_Encoder_HomeZero=16136
,P_Command_Linear_Encoder_HomeZero=16141
,P_OLD_Home_Offset=16154
,P_PLC13_Cycle_Stop_Return_Array=16242
,P_Stopping_CycleStop_Act_State_Machine=16348
,P_Module_Cycle_Stop_Act_State_Machine_Array=16368
,P_Module_Cycle_Stop_Act_Complete_Bit=16388
,P_Module_Cycle_Stop_Act_Command_Array=16408
,P_OLD_Module_Cycle_Stop_Act_Command_Array=16428
,P_Buffer_Seqdata_CycleStop_Array=16448
,P_Tact_Time_Timer=16485
,P_Tack_Time_Save_Time=16525
,P_Tact_Time_Stack_Array=16569
,P_Tact_Time_Discharge_Array=16579
,P_Tact_Time_1st_Unloader_Array=16589
,P_Tact_Time_Sepa_ARC_Array=16599
,P_Tact_Time_Final_Roll_Array=16609
,P_Tact_Time_Cathode_1st_PNP_Array=16619
,P_Tact_Time_Cathode_Align_Array=16629
,P_Tact_Time_Cathode_2nd_PNP_Array=16639
,P_Tact_Time_Cathode_Clamp_Array=16649
,P_Tact_Time_Anode_1st_PNP_Array=16659
,P_Tact_Time_Anode_Align_Array=16669
,P_Tact_Time_Anode_2nd_PNP_Array=16679
,P_Tact_Time_Anode_Clamp_Array=16689
,P_Tact_Time_Cathode_1st_PNP_Vac_Array=16699
,P_Tact_Time_Cathode_Align_PNP_Vac_Array=16709
,P_Tact_Time_Cathode_2nd_PNP_Vac_Array=16719
,P_Tact_Time_Anode_1st_PNP_Vac_Array=16729
,P_Tact_Time_Anode_Align_PNP_Vac_Array=16739
,P_Tact_Time_Anode_2nd_PNP_Vac_Array=16749
,P_Tact_Time_Check=16803
,P_Old_Tact_Time_Check=16843
,P_Tact_Time_Head_Address=16883
,P_EPC_MNTR_VAR=16940
,P_Home_Check_Arry=16963
,P_PWM_Phasing_Start=17015
,P_PWM_Status=17020
,P_PWM_State_Machine=17025
,P_AH_Seq_arr=17030
,P_DD_M_Home_ABS_Pos=17045
,P_AH_Indvi_rtn=17050
,P_Home_Check_Arry1=17103
,P_PV_EPC_Camera_Pos=17263
,P_VISION_MSA_Status_Prod_Sequence=17283
,P_MSA_Cmd=17307
,P_Align_Take_Off_Cmd=17338
,P_Align_Take_Off_Status_Prod_Sequence=17355
,P_Old_Upper_Sensor=17424
,P_Edge_Upper_Sensor=17432
,P_Old_Lower_Sensor=17440
,P_Edge_Lower_Sensor=17448
,P_Edge_NP_BTN=17456
,P_UI_Unit_Status=17458
,P_Motor_Unit_Status=17468
,P_Current_Homming_Status_To_PLC=17518
,P_AO_Module_Arr=17606
,P_AO_Range_Set_Value=17611
,P_Force_BTN_M_Variable_Save=17644
,P_ABS_Phasing_Data=18044
,P_ABS_Home_Offset_Data=18049
,P_Servo_Gain_Kp=18058
,P_Servo_Gain_Kvfb=18088
,P_Servo_Gain_Kvff=18118
,P_Servo_Gain_Ki=18148
,P_Servo_Gain_SwZvInt=18178
,P_Servo_Gain_Kaff=18208
,P_Alarm_Arr=18239
,P_Alarm_Occur_Index_Flag=18340
,P_Alarm_Log=18351
,P_First_Alarm_Log=18451
,P_Alarm_duplicate_Check_Arr=18483
,P_Old_Drive_Alarm=19153
,P_Limit_PosData=19209
,P_Collision_Risk_Motor=19236
,P_P_IL_Normal_Pos_Offset=19243
,P_M_IL_Normal_Pos_Offset=19293
,P_P_IL_Upper_Pos_Offset=19343
,P_M_IL_Upper_Pos_Offset=19393
,P_P_IL_Align_Pos_Offset=19443
,P_M_IL_Align_Pos_Offset=19493
,P_P_IL_Stack_Pos_Offset=19543
,P_M_IL_Stack_Pos_Offset=19593
,P_Ca_2nd_T_Plus_IL_Offset=19647
,P_Ca_2nd_T_Minus_IL_Offset=19650
,P_Ca_2nd_Z_Plus_IL_Offset=19653
,P_Ca_2nd_Z_Minus_IL_Offset=19655
,P_An_2nd_T_Plus_IL_Offset=19657
,P_An_2nd_T_Minus_IL_Offset=19660
,P_An_2nd_Z_Minus_IL_Offset=19663
,P_FR_X_Plus_IL_Offset=19667
,P_FR_X_Minus_IL_Offset=19669
,P_Ca_NG_PNP_Plus_IL_Offset=19672
,P_Ca_NG_PNP_Minus_IL_Offset=19676
,P_An_NG_PNP_Plus_IL_Offset=19680
,P_An_NG_PNP_Minus_IL_Offset=19684
,P_Unloader_X_Plus_IL_Offset=19688
,P_Unloader_X_Minus_IL_Offset=19692
,P_Unloader_Z_Plus_IL_Offset=19696
,P_Unloader_Z_Minus_IL_Offset=19699
,P_IL_In_Offset=19702
,P_IL_Home_Chk_Motor_Num=19729
,P_NG_PNP_Motion_arr=19902
,P_Ecat_Read_MNTR=19944
,P_Ecat_Write_MNTR=19972
,P_Ecat_Save_MNTR=20000
,P_Ecat_Error_MNTR=20016
,P_Ecat_Read_Error_MNTR=20032
,P_Ecat_Each_Write_Error_MNTR=20048
,P_Pn000=20067
,P_Pn001=20087
,P_Pn00B=20107
,P_Pn100=20127
,P_Pn101=20147
,P_Pn102=20167
,P_Pn103=20187
,P_Pn123=20207
,P_Pn140=20227
,P_Pn141=20247
,P_Pn145=20267
,P_Pn146=20287
,P_Pn160=20307
,P_Pn161=20327
,P_Pn163=20347
,P_Pn170=20367
,P_Pn401=20387
,P_Pn408=20407
,P_Pn409=20427
,P_Pn40A=20447
,P_Pn40C=20467
,P_Pn40D=20487
,P_Pn416=20507
,P_Pn417=20527
,P_Pn511=20547
,P_Pn520=20567
,P_PnB02_Numerator=20587
,P_PnB02_Denominator=20607
,P_Pneumatic_Pressure_Unit_Tack_Time_Chk_Timer=20752
,P_Pneumatic_Pressure_Unit_Tack_Time=20779
,P_Discharge_Tact_Time_Arr=20810
,P_PLC19_All_Home_Tact_Time_Array=20891
,P_Act_ALL_Home_Time_Out=20914
,P_Act_Hold_Complete_Bit=20954
,P_Module_Act_Hold_Command_Array=20989
,P_OLD_Module_Act_Hold_Command_Array=21024
,P_Module_Act_Hold_State_Machine_Array=21059
,P_Act_Hold_Old_Time=21094
,P_Act_Hold_Time_Out=21130
,P_Act_Execute_Complete_Bit=21198
,P_Module_Act_Execute_Command_Array=21210
,P_OLD_Module_Act_Execute_Command_Array=21222
,P_Module_Act_Execute_State_Machine_Array=21234
,P_Act_Execute_Old_Time=21246
,P_Act_Execute_Time_Out=21259
,P_Buffer_Mode_Module_Status_Sequence=21292
,P_EXECUTE_Status_Prod_Sequence=21322
,P_Buffer_Seqdata_Execute_First_Sepa_Mode_Array=21359
,P_Execute_First_Sepa_Mode_Tact_Time_Array=21390
,P_Discharge_Seq_InterLock_Delay_Time=21417
,P_Discharge_Seq_InterLock_Flag=21447
,P_Buffer_Seqdata_Discharge_Array=21477
,P_Suspend_Discharge_Tact_Time_Array=21508
,P_ARC_Seq_InterLock_Delay_Time=21536
,P_ARC_Seq_InterLock_Flag=21566
,P_Buffer_Seqdata_ARC_Array=21596
,P_Suspend_ARC_Tact_Time_Array=21627
,P_Anode_1TR_Cell_Supply_Seq_InterLock_Delay_Time=21654
,P_Anode_1TR_Cell_Supply_Seq_InterLock_Flag=21684
,P_Buffer_Seqdata_Anode_1TR_Cell_Supply_Array=21714
,P_Suspend_Anode_1TR_Cell_Supply_Tact_Time_Array=21745
,P_Buffer_Seqdata_Hold_Exist_Insp_Array=21773
,P_Hold_Exist_Insp_Tact_Time_Array=21804
,P_Buffer_Seqdata_Hold_Remove_NG_PNP_Array=21832
,P_Hold_Remove_NG_PNP_Tact_Time_Array=21863
,P_Buffer_Seqdata_Hold_Remove_Align_Array=21894
,P_Hold_Remove_Align_Tact_Time_Array=21925
,P_Buffer_Seqdata_Hold_Remove_2TR_Array=21956
,P_Hold_Remove_2TR_Tact_Time_Array=21987
,P_Buffer_Seqdata_Hold_Supply_1TR_Array=22015
,P_Hold_Supply_1TR_Tact_Time_Array=22046
,P_Buffer_Seqdata_Hold_Supply_Align_Array=22079
,P_Hold_Supply_Align_Tact_Time_Array=22110
,P_Buffer_Seqdata_Hold_Supply_2TR_Array=22138
,P_Hold_Supply_2TR_Tact_Time_Array=22169
,P_Buffer_Seqdata_Hold_Semi_Run_Pos_Move_Array=22197
,P_Hold_Semi_Run_Pos_Move_Tact_Time_Array=22228
,P_Act_Complete_Bit=22249
,P_Act_Old_Time=22315
,P_Act_Delay_Time=22381
,P_Act_Time_Out=22448
,P_Discharge_Possibility_Bit=22515
,P_HOLD_Exist_Possibility_Bit=22581
,P_HOLD_NG_Remove_Possibility_Bit=22647
,P_HOLD_Align_Remove_Possibility_Bit=22713
,P_HOLD_2TR_Remove_Possibility_Bit=22779
,P_HOLD_1TR_Supply_Possibility_Bit=22845
,P_HOLD_Align_Supply_Possibility_Bit=22911
,P_HOLD_2TR_Supply_Possibility_Bit=22977
,P_HOLD_Semi_Run_Pos_Possibility_Bit=23043
,P_Module_Act_Command_Array=23109
,P_OLD_Module_Act_Command_Array=23175
,P_Module_Act_State_Machine_Array=23241
,P_Module_Act_State_Machine_Error_Array=23307
,P_Sensor_To_Sepa_Curr_Distance_mm=23403
,P_Suspend_Monitor_=23434
,P_Suspend_Discharge_Debug_Address=23448
,P_Suspend_Discharge_Debug_Value=23453
,P_Suspend_ARC_Debug_Address=23465
,P_Suspend_ARC_Debug_Value=23470
,P_ARC_Ready_Flag=23480
,P_Suspend_An_1TR_Supply_Debug_Address=23485
,P_Suspend_An_1TR_Supply_Debug_Value=23490
,P_Anode_Suspend_Supply_Complete=23502
,P_MOde_Num=23585
,P_Command_Depth=23590
,P_In_Position=23595
,P_Last_Cycle_Command=23600
,P_Slave1_Anode_Run_Motion_Array=23608
,P_Slave2_Anode_Run_Motion_Array=23708
,P_Slave3_Anode_Run_Motion_Array=23808
,P_Slave4_Anode_Run_Motion_Array=23908
,P_Slave5_Anode_Run_Motion_Array=24008
,P_Slave6_Anode_Run_Motion_Array=24108
,P_Slave7_Anode_Run_Motion_Array=24208
,P_Slave8_Anode_Run_Motion_Array=24308
,P_Slave9_Anode_Run_Motion_Array=24408
,P_Slave10_Anode_Run_Motion_Array=24508
,P_Slave15_Anode_Run_Motion_Array=24608
,P_Slave16_Anode_Run_Motion_Array=24708
,P_Slave17_Anode_Run_Motion_Array=24808
,P_Slave18_Anode_Run_Motion_Array=24908
,P_Slave19_Anode_Run_Motion_Array=25008
,P_Slave1_Cathode_Run_Motion_Array=25108
,P_Slave2_Cathode_Run_Motion_Array=25208
,P_Slave3_Cathode_Run_Motion_Array=25308
,P_Slave4_Cathode_Run_Motion_Array=25408
,P_Slave5_Cathode_Run_Motion_Array=25508
,P_Slave15_Cathode_Run_Motion_Array=25608
,P_Slave6_Cathode_Run_Motion_Array=25708
,P_Slave7_Cathode_Run_Motion_Array=25808
,P_Slave8_Cathode_Run_Motion_Array=25908
,P_Slave9_Cathode_Run_Motion_Array=26008
,P_Slave10_Cathode_Run_Motion_Array=26108
,P_Slave16_Cathode_Run_Motion_Array=26208
,P_Slave17_Cathode_Run_Motion_Array=26308
,P_Slave18_Cathode_Run_Motion_Array=26408
,P_Slave19_Cathode_Run_Motion_Array=26508
,P_HCmd_List=26650
,P_DataList=26686
,P_Hold_Data_Err=26691
,P_Hold_Motion_Arr=26719
,P_Hold_Err_MNTR=26784
,P_Hold_Err_Data_Save=26788
,P_Hold_Err_Action_Data_Save=26796
,P_Hold_Memory_Tower_Err_Pos=26805
,P_Buffer_Seqdata_MSA_Array=26833
,P_Buffer_Seqdata_Align_Take_Off_Array=26883
,P_VISION_MSA_Align_Module_Complete_Bit=26933
,P_Module_Manual_MSA_Act_Command_Array=27033
,P_OLD_Module_Manual_MSA_Act_Command_Array=27133
,P_Module_MSA_Act_State_Machine_Array=27233
,P_VISION_MSA_Seq_Stopping_Point=27333
,P_Align_Take_Off_Module_Complete_Bit=27366
,P_Module_Manual_Align_Take_Off_Act_Command_Array=27466
,P_OLD_Module_Manual_Align_Take_Off_Act_Command_Array=27566
,P_Module_Align_Take_Off_Act_State_Machine_Array=27666
,P_Buffer_Judge_Trg=27773
,P_PLC01_Queue_MNTR=27784
,P_PLC01_Exe_Is_Ena_Step_Flag=27814
,P_PLC01_Exe_Fist_Sepa_Step_Flag=27824
,P_PLC01_Exe_Prod_Step_Flag=27834
,P_PLC01_HOLD_Insp_Step_Flag=27839
,P_PLC01_HOLD_Main_Step_Flag=27849
,P_PLC01_Sus_Discharge_Step_Flag=27864
,P_PLC01_Sus_ARC_Step_Flag=27874
,P_PLC01_STOP_Init_Step_Flag=27884
,P_PLC01_STOP_Cycle_ST_Step_Flag=27894
,P_No1_Recipe_Pos_IL=27945
,P_No2_Recipe_Pos_IL=27998
,P_No3_Recipe_Pos_IL=28051
,P_No4_Recipe_Pos_IL=28104
,P_No5_Recipe_Pos_IL=28157
,P_No6_Recipe_Pos_IL=28210
,P_No7_Recipe_Pos_IL=28263
,P_No8_Recipe_Pos_IL=28316
,P_No9_Recipe_Pos_IL=28369
,P_No10_Recipe_Pos_IL=28422
,P_Recipe_POS_Interock_M=28475};
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
,M_Stack_Host_ID_Buffer_Mode=8563
,M_Stack_Host_ID_Sample_Type=8564
,M_Stack_Host_ID_JR_Result=8565
,M_Stack_Host_ID_NG_Type=8566
,M_Manual_ARC_BTN=9128
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
,M_Motor_BTN_Info=8503
,M_ASCII_Stack_Work_Host_Sepa_ID_Buffer=8553
,M_ASCII_Read_Stack_Work_Host_Sepa_ID_Buffer=8567
,M_ASCII_Uloader_1st_Host_ID_Buffer=8574
,M_ASCII_Anode_Sheet_Belt_Buffer=8584
,M_ASCII_Anode_Sheet_Buffer=8591
,M_ASCII_Cathode_Sheet_Belt_Buffer=8647
,M_ASCII_Cathode_Sheet_Buffer=8654
,M_ASCII_First_Sheet_Buffer=8710
,M_ASCII_Last_Sheet_Buffer=8717
,P_BTN_Jog_BWD_M=8724
,P_BTN_Jog_FWD_M=8774
,M_UnWinder_BTN_Lamp=8824
,M_Cathode_BTN_Lamp=8840
,M_Anode_BTN_Lamp=8872
,M_Stack_BTN_Lamp=8904
,M_ARC_BTN_Lamp=8936
,M_UnWinder_BTN_Interlock=8968
,M_Cathode_BTN_Interlock=8984
,M_Anode_BTN_Interlock=9016
,M_Stack_BTN_Interlock=9048
,M_ARC_BTN_Interlock=9080
,M_NP_BTN_Interlock=9112
,M_Motor_Vel=9129
,M_Motor_TA=9179
,M_Motor_TD=9229
,M_Motor_BTN=9279
,M_Motor_RecipePos=9329
,M_Motor_Move_Distance=9379
,M_Motor_Home_Offset=9429
,M_Motor_Pos_Data=9479
,M_Motor_Status_Data=9529
,M_Motor_Recipe_Pos_Interlock=9579
,M_Motor_Peak_Load_Ratio=9629
,M_Motor_Effective_Load_Ratio=9679
,M_Motor_Check_Current_Recipe_Pos=9729};
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
#define P_Force_Stop_Flag 8751
#define P_Execute_DryRun_Stop_Timer 8752
#define P_DryRun_Timer 8753
#define P_Dryrun_Operating_Time 8754
#define P_Anode_Align_Vac_Err_On 8755
#define P_Cathode_Align_Vac_Err_On 8756
#define P_Anode_1ST_TR_Vac_Err_On 8757
#define P_Anode_2ND_TR_Vac_Err_On 8758
#define P_Cathode_1ST_TR_Vac_Err_On 8759
#define P_Cathode_2ND_TR_Vac_Err_On 8760
#define P_MNTR_PLC0_Task_Time 8761
#define P_MNTR_PLC0_Task_Max_Time 8763
#define P_MNTR_PLC1_Task_Time 8764
#define P_MNTR_PLC1_Task_Max_Time 8766
#define P_MNTR_PLC2_Task_Time 8767
#define P_MNTR_PLC2_Task_Max_Time 8769
#define P_MNTR_PLC3_Task_Time 8770
#define P_MNTR_PLC3_Task_Max_Time 8772
#define P_MNTR_PLC4_Task_Time 8773
#define P_MNTR_PLC4_Task_Max_Time 8775
#define P_MNTR_PLC5_Task_Time 8776
#define P_MNTR_PLC5_Task_Max_Time 8778
#define P_MNTR_PLC6_Task_Time 8779
#define P_MNTR_PLC6_Task_Max_Time 8781
#define P_MNTR_PLC7_Task_Time 8782
#define P_MNTR_PLC7_Task_Max_Time 8784
#define P_MNTR_PLC8_Task_Time 8785
#define P_MNTR_PLC8_Task_Max_Time 8787
#define P_MNTR_PLC9_Task_Time 8788
#define P_MNTR_PLC9_Task_Max_Time 8790
#define P_MNTR_PLC10_Task_Time 8791
#define P_MNTR_PLC10_Task_Max_Time 8793
#define P_MNTR_PLC11_Task_Time 8794
#define P_MNTR_PLC11_Task_Max_Time 8796
#define P_MNTR_PLC12_Task_Time 8797
#define P_MNTR_PLC12_Task_Max_Time 8799
#define P_MNTR_PLC13_Task_Time 8800
#define P_MNTR_PLC13_Task_Max_Time 8802
#define P_MNTR_PLC14_Task_Time 8803
#define P_MNTR_PLC14_Task_Max_Time 8805
#define P_MNTR_PLC15_Task_Time 8806
#define P_MNTR_PLC15_Task_Max_Time 8808
#define P_MNTR_PLC16_Task_Time 8809
#define P_MNTR_PLC16_Task_Max_Time 8811
#define P_MNTR_PLC17_Task_Time 8812
#define P_MNTR_PLC17_Task_Max_Time 8814
#define P_MNTR_PLC18_Task_Time 8815
#define P_MNTR_PLC18_Task_Max_Time 8817
#define P_MNTR_PLC19_Task_Time 8818
#define P_MNTR_PLC19_Task_Max_Time 8820
#define P_MNTR_PLC20_Task_Time 8821
#define P_MNTR_PLC20_Task_Max_Time 8823
#define P_MNTR_PLC21_Task_Time 8824
#define P_MNTR_PLC21_Task_Max_Time 8826
#define P_MNTR_PLC22_Task_Time 8827
#define P_MNTR_PLC22_Task_Max_Time 8829
#define P_MNTR_PLC23_Task_Time 8830
#define P_MNTR_PLC23_Task_Max_Time 8832
#define P_MNTR_PLC24_Task_Time 8833
#define P_MNTR_PLC24_Task_Max_Time 8835
#define P_MNTR_PLC25_Task_Time 8836
#define P_MNTR_PLC25_Task_Max_Time 8838
#define P_MNTR_PLC26_Task_Time 8839
#define P_MNTR_PLC26_Task_Max_Time 8841
#define P_MNTR_PLC27_Task_Time 8842
#define P_MNTR_PLC27_Task_Max_Time 8844
#define P_MNTR_PLC28_Task_Time 8845
#define P_MNTR_PLC28_Task_Max_Time 8847
#define P_MNTR_PLC29_Task_Time 8848
#define P_MNTR_PLC29_Task_Max_Time 8850
#define P_MNTR_PLC30_Task_Time 8851
#define P_MNTR_PLC30_Task_Max_Time 8853
#define P_In_Pos_Trg 8854
#define P_Position_Calc_Status 8855
#define P_Vision_Result 8856
#define P_Vision_Result_Get_First_Cycle 8860
#define P_Init_Result 8864
#define P_PNP_Pos 8870
#define P_Execute_Manage_Mode 8871
#define P_Align_NG_Tack_Flag 8872
#define P_Anode_Align_OK_Flag 8873
#define P_Anode_Align_NG_Flag 8874
#define P_Cathode_Align_OK_Flag 8875
#define P_Cathode_Align_NG_Flag 8876
#define P_Stack_Table_OK_Flag 8877
#define P_Anode_Retry_OK_Flag 8878
#define P_Anode_Retry_NG_Flag 8879
#define P_Cathode_Retry_OK_Flag 8880
#define P_Cathode_Retry_NG_Flag 8881
#define P_Anode_Surf_Insp_Trigger 8882
#define P_Cathode_Surf_Insp_Trigger 8883
#define P_First_Anode_Sheet_Supply_Flag 8884
#define P_First_Cathode_Sheet_Supply_Flag 8885
#define P_Cathode_Cur_Mode 8886
#define P_Anode_Cur_Mode 8887
#define P_Anode_Run_FR_Move_Check_AI 8888
#define P_Cathode_Run_FR_Move_Check_AI 8889
#define P_FR_Move_Check_AI_OffSet 8890
#define P_FR_AI_Value 8891
#define P_Aver_FR_AI_Value 8896
#define P_Process_Function_Command 8897
#define P_HOLD_Existence_Insp_State_Machine 8898
#define P_Execute_IsEnable_State_Machine 8899
#define P_EXECUTE_FUNC_Ready_STEP 8900
#define P_Execute_First_Sepa_Ontable_State_Machine 8901
#define P_Execute_Prod_Manage_State_Machine 8902
#define P_Execute_Enqueue_State_Machine 8903
#define P_STOP_Initial_Process_STEP 8904
#define P_STOP_Cylce_Stop_STEP 8905
#define P_Stop_CycleStop_Position 8906
#define P_Upcount_NextStep 8907
#define P_SUSPEND_FUNC_JR_Discharge_STEP 8908
#define P_SUSPEND_FUNC_ARC_STEP 8909
#define P_Suspend_ARC_Complete_Flag 8910
#define P_EXECUTE_FUNC_Debug_On_Sepa_STEP 8911
#define P_QueueCommand_Occurs 8912
#define P_EXECUTE_STEP 8913
#define P_SUSPEND_STEP 8914
#define P_HOLD_STEP 8915
#define P_STOP_STEP 8916
#define P_EXECUTE_Error_STEP 8917
#define P_SUSPEND_Error_STEP 8918
#define P_HOLD_Error_STEP 8919
#define P_STOP_Error_STEP 8920
#define P_Queue_Enqueue_Command 8921
#define P_Queue_Enqueue_return 8922
#define P_Queue_Dequeue_Command 8923
#define P_Queue_Dequeue_return 8924
#define P_Queue_Peek_Command 8925
#define P_Dequeue_Log 8926
#define P_Dummy_Dequeue 8946
#define P_Queue_Command_Status 8947
#define P_Queue_Process_Command 8948
#define P_Queue_Process_Status 8949
#define P_Coord_Test 8950
#define P_Coord_Test3 8951
#define P_Coord_Test2 8952
#define P_Coord_Motion_Prog_Down_Entering_Bit 8953
#define P_PMAC_Coord_Status_Bit 8954
#define P_Coord_Down_Check_Bit 8955
#define P_PMAC_Coord_Down_Inspection_Flag 8956
#define P_PMAC_Coord_Down_Num 8957
#define P_PMAC_Coord_Error_Status 8958
#define P_Motor_Current_Pos 8959
#define P_Axis_Scale_Value 9009
#define P_Except_Return_Array 9059
#define P_Hold_Memory 9159
#define P_Suspend_Memory 9164
#define P_Execute_Memory 9169
#define P_Stop_Memory 9174
#define P_PLC01_Process_Function_Enter_Flag 9179
#define P_PLC01_SubMotion_Active 9180
#define P_PLC01_SlaveMotion_Active 9181
#define P_EXECUTE_Isenable_MNTR 9182
#define P_EXECUTE_IsEnable_Firt_Stacking_Flag 9183
#define P_PLC01_Execute_Retry_Sepa_Mode_Count 9184
#define P_SUSPEND_MNTR 9185
#define P_SUSPEND_MNTR_2 9186
#define P_Execute_Last_Run_Flag 9187
#define P_Suspend_ARC_Request_Flag 9188
#define P_Hold_Queue_Exist_Insp_MNTR 9189
#define P_CirQueue_Status_Value 9190
#define P_Debug_CirQueue_Status 9191
#define P_Front_Index 9192
#define P_Rear_Index 9193
#define P_Index_Max 9194
#define P_CircularQueue_Command_array 9195
#define P_CirQueue_Length 9206
#define P_Queue_Full 9207
#define P_Queue_Empty 9208
#define P_Queue_PeekEmpty 9209
#define P_Self_items 9210
#define P_Hold_Resume_Need_Flag 9211
#define M_Y_A_Site_Heart_Bit 5014
#define M_X_PLC_Anode_Sheet_Ready2 4010
#define M_X_PLC_Cathode_Sheet_Ready2 4011
#define M_X_B_Site_Heart_Bit 4014
#define P_Stack_Heart_Bit_Timer 9212
#define P_Stack_Heart_Bit_Calc 9213
#define P_Stack_Heart_Bit_Sync_State_Machine 9214
#define P_Pause_Anode_MNTR_Min_Trigger 9215
#define P_Pause_Anode_MNTR_Max_Trigger 9216
#define P_Pause_Cathode_MNTR_Min_Trigger 9217
#define P_Pause_Cathode_MNTR_Max_Trigger 9218
#define P_Pause_Protect_Variable 9219
#define P_Resume_Protect_Variable 9220
#define P_Sepa_Mode_Opposite_Resume_Free 9221
#define P_Sepa_To_Normal_Mode_Sync_Flag 9222
#define P_Sepa_To_Normal_Mode_Sync_Err_Avoid 9223
#define P_Recipe_1st_MotorNo 9224
#define P_Recipe_2nd_MotorNo 9274
#define P_Recipe_3rd_MotorNo 9324
#define P_Recipe_4th_MotorNo 9374
#define P_Recipe_5th_MotorNo 9424
#define P_Recipe_6th_MotorNo 9474
#define P_X_Axis_Num 9524
#define P_Y_Axis_Num 9525
#define P_Z_Axis_Num 9526
#define P_ZZ_Axis_Num 9527
#define P_X_Unit 9528
#define P_Y_Unit 9529
#define P_Z_Unit 9530
#define P_ZZ_Unit 9531
#define P_Pos_Memory_Bit_Save 9532
#define P_Total_Unit_Bit 9533
#define P_Total_Unit_Pos 9534
#define P_Anode_1st_Unit_Status 9535
#define P_Anode_2nd_Unit_Status 9536
#define P_Anode_CLP_Unit_Status 9537
#define P_FinalRoll_Unit_Status 9538
#define P_StackTable_Unit_Status 9539
#define P_Cathode_CLP_Unit_Status 9540
#define P_Cathode_2nd_Unit_Status 9541
#define P_Cathode_1st_Unit_Status 9542
#define P_1st_Unloader_Unit_Status 9543
#define P_Cathode_NG_PNP_Status 9544
#define P_Anode_NG_PNP_Status 9545
#define P_Unit_integrated_Status 9546
#define P_Unit_Status_Update_Flag 9547
#define P_Memory_Tower_Search_Flag 9548
#define P_MemTow_integrated_return 9549
#define P_Error_STMS_Memory_Tower_Status 9550
#define P_STMS_Memory_Tower_Status 9551
#define P_Recipe_M01_POS 9552
#define P_Recipe_M02_POS 9563
#define P_Recipe_M03_POS 9574
#define P_Recipe_M04_POS 9585
#define P_Recipe_M05_POS 9596
#define P_Recipe_M06_POS 9607
#define P_Recipe_M07_POS 9618
#define P_Recipe_M08_POS 9629
#define P_Recipe_M09_POS 9640
#define P_Recipe_M10_POS 9651
#define P_Recipe_M11_POS 9662
#define P_Recipe_M12_POS 9673
#define P_Recipe_M13_POS 9684
#define P_Recipe_M14_POS 9695
#define P_Recipe_M15_POS 9706
#define P_Recipe_M16_POS 9717
#define P_Recipe_M17_POS 9728
#define P_Recipe_M18_POS 9739
#define P_Recipe_M19_POS 9750
#define P_Recipe_M20_POS 9761
#define P_Recipe_M21_POS 9772
#define P_Recipe_M22_POS 9783
#define P_Recipe_M23_POS 9794
#define P_Recipe_M24_POS 9805
#define P_Recipe_M25_POS 9816
#define P_Recipe_M26_POS 9827
#define P_Recipe_M27_POS 9838
#define P_Recipe_M28_POS 9849
#define P_Recipe_M29_POS 9860
#define P_Recipe_M30_POS 9871
#define P_Recipe_M31_POS 9882
#define P_Recipe_M32_POS 9893
#define P_Recipe_M33_POS 9904
#define P_Recipe_M34_POS 9915
#define P_Recipe_M35_POS 9926
#define P_Recipe_M36_POS 9937
#define P_Recipe_M37_POS 9948
#define P_Recipe_M38_POS 9959
#define P_Recipe_M39_POS 9970
#define P_Recipe_M40_POS 9981
#define P_Recipe_M41_POS 9992
#define P_Recipe_M42_POS 10003
#define P_Recipe_M43_POS 10014
#define P_Recipe_M44_POS 10025
#define P_Recipe_M45_POS 10036
#define P_Recipe_M46_POS 10047
#define P_Recipe_M47_POS 10058
#define P_Recipe_M48_POS 10069
#define P_Recipe_M49_POS 10080
#define P_Recipe_M50_POS 10091
#define P_Memory_Tower_X_Err_Flag 10102
#define P_Memory_Tower_Y_Err_Flag 10103
#define P_Memory_Tower_Z_Err_Flag 10104
#define P_Memory_Tower_ZZ_Err_Flag 10105
#define P_CA_Clamp_Cell_Down_Pos 10106
#define P_AN_Clamp_Cell_Down_Pos 10107
#define P_Error_X_Axis_Packml 10108
#define P_Error_X_Axis_Dequeue 10114
#define P_Error_X_Axis_Num 10120
#define P_Memory_Tower_Err_Pos_X_Save 10126
#define P_Error_Y_Axis_Packml 10132
#define P_Error_Y_Axis_Dequeue 10138
#define P_Error_Y_Axis_Num 10144
#define P_Memory_Tower_Err_Pos_Y_Save 10150
#define P_Error_Z_Axis_Packml 10156
#define P_Error_Z_Axis_Dequeue 10162
#define P_Error_Z_Axis_Num 10168
#define P_Memory_Tower_Err_Pos_Z_Save 10174
#define P_Error_ZZ_Axis_Packml 10180
#define P_Error_ZZ_Axis_Dequeue 10186
#define P_Error_ZZ_Axis_Num 10192
#define P_Memory_Tower_Err_Pos_ZZ_Save 10198
#define P_PNP_Abort_Use_Bit 10204
#define P_PNP_Abort_Use_Total_Bit 10205
#define P_C_1st_PNP_FWD_Abort_Use_Bit 10206
#define P_C_1st_PNP_BWD_Abort_Use_Bit 10207
#define P_C_2nd_PNP_FWD_Abort_Use_Bit 10208
#define P_C_2nd_PNP_BWD_Abort_Use_Bit 10209
#define P_A_1st_PNP_FWD_Abort_Use_Bit 10210
#define P_A_1st_PNP_BWD_Abort_Use_Bit 10211
#define P_A_2nd_PNP_FWD_Abort_Use_Bit 10212
#define P_A_2nd_PNP_BWD_Abort_Use_Bit 10213
#define P_Single_Motor_Control_Bit 10214
#define P_C_1st_PNP_FWD_Abort_Calc_Bit 10215
#define P_C_1st_PNP_BWD_Abort_Calc_Bit 10216
#define P_C_2nd_PNP_FWD_Abort_Calc_Bit 10217
#define P_C_2nd_PNP_BWD_Abort_Calc_Bit 10218
#define P_A_1st_PNP_FWD_Abort_Calc_Bit 10219
#define P_A_1st_PNP_BWD_Abort_Calc_Bit 10220
#define P_A_2nd_PNP_FWD_Abort_Calc_Bit 10221
#define P_A_2nd_PNP_BWD_Abort_Calc_Bit 10222
#define P_C_1st_PNP_FWD_Cur_Pos 10223
#define P_C_1st_PNP_FWD_Cur_Vel 10224
#define P_C_1st_PNP_BWD_Cur_Pos 10225
#define P_C_1st_PNP_BWD_Cur_Vel 10226
#define P_C_2nd_PNP_FWD_Cur_Pos 10227
#define P_C_2nd_PNP_FWD_Cur_Vel 10228
#define P_C_2nd_PNP_BWD_Cur_Pos 10229
#define P_C_2nd_PNP_BWD_Cur_Vel 10230
#define P_A_1st_PNP_FWD_Cur_Pos 10231
#define P_A_1st_PNP_FWD_Cur_Vel 10232
#define P_A_1st_PNP_BWD_Cur_Pos 10233
#define P_A_1st_PNP_BWD_Cur_Vel 10234
#define P_A_2nd_PNP_FWD_Cur_Pos 10235
#define P_A_2nd_PNP_FWD_Cur_Vel 10236
#define P_A_2nd_PNP_BWD_Cur_Pos 10237
#define P_A_2nd_PNP_BWD_Cur_Vel 10238
#define P_C_1st_PNP_FWD_Limit_Pos 10239
#define P_C_1st_PNP_BWD_Limit_Pos 10240
#define P_C_2nd_PNP_FWD_Limit_Pos 10241
#define P_C_2nd_PNP_BWD_Limit_Pos 10242
#define P_A_1st_PNP_FWD_Limit_Pos 10243
#define P_A_1st_PNP_BWD_Limit_Pos 10244
#define P_A_2nd_PNP_FWD_Limit_Pos 10245
#define P_A_2nd_PNP_BWD_Limit_Pos 10246
#define P_C_1st_PNP_FWD_Max_Limit_Pos 10247
#define P_C_1st_PNP_BWD_Max_Limit_Pos 10248
#define P_C_2nd_PNP_FWD_Max_Limit_Pos 10249
#define P_C_2nd_PNP_BWD_Max_Limit_Pos 10250
#define P_A_1st_PNP_FWD_Max_Limit_Pos 10251
#define P_A_1st_PNP_BWD_Max_Limit_Pos 10252
#define P_A_2nd_PNP_FWD_Max_Limit_Pos 10253
#define P_A_2nd_PNP_BWD_Max_Limit_Pos 10254
#define P_C_1st_PNP_FWD_Remain_Stroke 10255
#define P_C_1st_PNP_BWD_Remain_Stroke 10256
#define P_C_2nd_PNP_FWD_Remain_Stroke 10257
#define P_C_2nd_PNP_BWD_Remain_Stroke 10258
#define P_A_1st_PNP_FWD_Remain_Stroke 10259
#define P_A_1st_PNP_BWD_Remain_Stroke 10260
#define P_A_2nd_PNP_FWD_Remain_Stroke 10261
#define P_A_2nd_PNP_BWD_Remain_Stroke 10262
#define P_C_1st_PNP_FWD_Stroke_Time 10263
#define P_C_1st_PNP_BWD_Stroke_Time 10264
#define P_C_2nd_PNP_FWD_Stroke_Time 10265
#define P_C_2nd_PNP_BWD_Stroke_Time 10266
#define P_A_1st_PNP_FWD_Stroke_Time 10267
#define P_A_1st_PNP_BWD_Stroke_Time 10268
#define P_A_2nd_PNP_FWD_Stroke_Time 10269
#define P_A_2nd_PNP_BWD_Stroke_Time 10270
#define P_C_1st_PNP_FWD_Max_Speed 10271
#define P_C_1st_PNP_BWD_Max_Speed 10272
#define P_C_2nd_PNP_FWD_Max_Speed 10273
#define P_C_2nd_PNP_BWD_Max_Speed 10274
#define P_A_1st_PNP_FWD_Max_Speed 10275
#define P_A_1st_PNP_BWD_Max_Speed 10276
#define P_A_2nd_PNP_FWD_Max_Speed 10277
#define P_A_2nd_PNP_BWD_Max_Speed 10278
#define P_C_1st_PNP_FWD_ACC_Dis 10279
#define P_C_1st_PNP_BWD_ACC_Dis 10280
#define P_C_2nd_PNP_FWD_ACC_Dis 10281
#define P_C_2nd_PNP_BWD_ACC_Dis 10282
#define P_A_1st_PNP_FWD_ACC_Dis 10283
#define P_A_1st_PNP_BWD_ACC_Dis 10284
#define P_A_2nd_PNP_FWD_ACC_Dis 10285
#define P_A_2nd_PNP_BWD_ACC_Dis 10286
#define P_C_1st_PNP_FWD_AbortTa 10287
#define P_C_1st_PNP_FWD_AbortTs 10288
#define P_C_1st_PNP_BWD_AbortTa 10289
#define P_C_1st_PNP_BWD_AbortTs 10290
#define P_C_2nd_PNP_FWD_AbortTa 10291
#define P_C_2nd_PNP_FWD_AbortTs 10292
#define P_C_2nd_PNP_BWD_AbortTa 10293
#define P_C_2nd_PNP_BWD_AbortTs 10294
#define P_A_1st_PNP_FWD_AbortTa 10295
#define P_A_1st_PNP_FWD_AbortTs 10296
#define P_A_1st_PNP_BWD_AbortTa 10297
#define P_A_1st_PNP_BWD_AbortTs 10298
#define P_A_2nd_PNP_FWD_AbortTa 10299
#define P_A_2nd_PNP_FWD_AbortTs 10300
#define P_A_2nd_PNP_BWD_AbortTa 10301
#define P_A_2nd_PNP_BWD_AbortTs 10302
#define P_C_1st_PNP_FWD_Abort_Dec_Offset 10303
#define P_C_1st_PNP_BWD_Abort_Dec_Offset 10304
#define P_C_2nd_PNP_FWD_Abort_Dec_Offset 10305
#define P_C_2nd_PNP_BWD_Abort_Dec_Offset 10306
#define P_A_1st_PNP_FWD_Abort_Dec_Offset 10307
#define P_A_1st_PNP_BWD_Abort_Dec_Offset 10308
#define P_A_2nd_PNP_FWD_Abort_Dec_Offset 10309
#define P_A_2nd_PNP_BWD_Abort_Dec_Offset 10310
#define P_1st_PNP_FWD_Abort_Offset 10311
#define P_1st_PNP_BWD_Abort_Offset 10401
#define P_2nd_PNP_FWD_Abort_Offset 10491
#define P_2nd_PNP_BWD_Abort_Offset 10581
#define P_Abort_Init_Value 10671
#define P_C_1st_PNP_FWD_AbortTa_Buffer 10672
#define P_C_1st_PNP_FWD_AbortTs_Buffer 10673
#define P_C_1st_PNP_BWD_AbortTa_Buffer 10674
#define P_C_1st_PNP_BWD_AbortTs_Buffer 10675
#define P_C_2nd_PNP_FWD_AbortTa_Buffer 10676
#define P_C_2nd_PNP_FWD_AbortTs_Buffer 10677
#define P_C_2nd_PNP_BWD_AbortTa_Buffer 10678
#define P_C_2nd_PNP_BWD_AbortTs_Buffer 10679
#define P_A_1st_PNP_FWD_AbortTa_Buffer 10680
#define P_A_1st_PNP_FWD_AbortTs_Buffer 10681
#define P_A_1st_PNP_BWD_AbortTa_Buffer 10682
#define P_A_1st_PNP_BWD_AbortTs_Buffer 10683
#define P_A_2nd_PNP_FWD_AbortTa_Buffer 10684
#define P_A_2nd_PNP_FWD_AbortTs_Buffer 10685
#define P_A_2nd_PNP_BWD_AbortTa_Buffer 10686
#define P_A_2nd_PNP_BWD_AbortTs_Buffer 10687
#define P_C_1st_PNP_FWD_Restore_Bit 10688
#define P_C_1st_PNP_BWD_Restore_Bit 10689
#define P_C_2nd_PNP_FWD_Restore_Bit 10690
#define P_C_2nd_PNP_BWD_Restore_Bit 10691
#define P_A_1st_PNP_FWD_Restore_Bit 10692
#define P_A_1st_PNP_BWD_Restore_Bit 10693
#define P_A_2nd_PNP_FWD_Restore_Bit 10694
#define P_A_2nd_PNP_BWD_Restore_Bit 10695
#define P_Align_Inspection_Time 10696
#define P_Front_Inspection_Time 10697
#define P_Stack_Inspection_Time 10698
#define P_Existence_Inspection_Time 10699
#define P_EmptyTable_Inspection_Time 10700
#define P_FirstSepa_Inspection_Time 10701
#define P_Vision_Anode_Sepa_Mode_Stack_Command 10702
#define P_Vision_Cathode_Sepa_Mode_Stack_Command 10703
#define P_Cathode_Sepa_Mode_Timer 10704
#define P_Anode_Sepa_Mode_Timer 10705
#define P_Vision_Pass 10706
#define P_FirstSepa_Ret 10707
#define P_Vision_Align_Command 10708
#define P_Vision_Surface_Command 10709
#define P_Vision_Stack_Command 10710
#define P_Vision_Existence_Command 10711
#define P_Vision_EmptyTable_Command 10712
#define P_Vision_FirstSepa_Command 10713
#define P_Selected_Align_Inspection_Unit 10714
#define P_Selected_Surface_Inspection_Unit 10715
#define P_Selected_Stack_Inspection_Unit 10716
#define P_Selected_Existence_Inspection_Unit 10717
#define P_Selected_EmptyTable_Inspection_Unit 10718
#define P_Set_Cathode_Align_Zero_Pos 10719
#define P_Set_Anode_Align_Zero_Pos 10720
#define P_Vision_Align_State_Machine 10721
#define P_Vision_Surface_State_Machine 10722
#define P_Vision_Stack_State_Machine 10723
#define P_Vision_Existence_State_Machine 10724
#define P_Vision_EmptyTable_State_Machine 10725
#define P_Vision_FirstSepa_State_Machine 10726
#define P_Vision_Align_Status 10727
#define P_Vision_Surface_Status 10728
#define P_Vision_Stack_Status 10729
#define P_Vision_Existence_Status 10730
#define P_Vision_EmptyTable_Status 10731
#define P_Vision_FirstSepa_Status 10732
#define P_Align_Zero_Move_Start_Flag 10733
#define P_Cathode_Align_Table_Move 10735
#define P_Anode_Align_Table_Move 10736
#define P_Vision_Anode_Cell_Existence 10737
#define P_Vision_Cathode_Cell_Existence 10738
#define P_Align_Sheet_CHK 10739
#define P_Anode_NG_Code 10740
#define P_Cathode_NG_Code 10741
#define P_Stack_NG_Code 10742
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
#define P_Stop_Debug_Flag 10743
#define P_Stop_Sub_Master_Motion_Program_Flag 10744
#define P_Stop_Slave_Motion_Program_Flag 10764
#define P_Stop_Motor_Status 10784
#define P_Stop_Coord_Status 10832
#define P_Stop_Status_Check_Address 10866
#define P_Stop_Status_Save_Address 10867
#define P_Stop_Check_RTN 10868
#define P_Stop_Save_RTN 10869
#define P_Old_Total_Unit_Bit 10873
#define P_Memory_Tower_Dec_Result 10874
#define P_Stop_Motor_Pos 10875
#define P_PNP_Move_Timer 10884
#define P_PNP_Move_Delay_Time 10885
#define P_Stop_Memory_Pos_RTN 10886
#define P_Slave1_Motion_Command 10887
#define P_Slave2_Motion_Command 10888
#define P_Slave3_Motion_Command 10889
#define P_Slave4_Motion_Command 10890
#define P_Slave5_Motion_Command 10891
#define P_Slave6_Motion_Command 10892
#define P_Slave7_Motion_Command 10893
#define P_Slave8_Motion_Command 10894
#define P_Slave9_Motion_Command 10895
#define P_Slave10_Motion_Command 10896
#define P_Slave11_Motion_Command 10897
#define P_Slave12_Motion_Command 10898
#define P_Slave13_Motion_Command 10899
#define P_Slave14_Motion_Command 10900
#define P_Slave15_Motion_Command 10901
#define P_Slave16_Motion_Command 10902
#define P_Slave17_Motion_Command 10903
#define P_Slave18_Motion_Command 10904
#define P_Slave19_Motion_Command 10905
#define P_Slave20_Motion_Command 10906
#define P_PNP_90_Deg_TM 10907
#define P_PNP_90_Deg_TA 10908
#define P_PNP_90_Deg_TS 10909
#define P_PNP_Ready_TM 10910
#define P_PNP_Ready_TA 10911
#define P_PNP_Ready_TS 10912
#define P_PNP_45_Deg_TM 10913
#define P_PNP_45_Deg_TA 10914
#define P_PNP_45_Deg_TS 10915
#define P_Unloader_TM_Test 10916
#define P_Unloader_TA_Test 10917
#define P_PROG_21_Program_Ver 2781
#define P_PROG_23_Program_Ver 2783
#define P_PROG_24_Program_Ver 2784
#define P_PROG_25_Program_Ver 2785
#define P_PROG_26_Program_Ver 2786
#define P_PROG_27_Program_Ver 2787
#define P_PROG_28_Program_Ver 2788
#define P_PROG_30_Program_Ver 2790
#define P_Master_Motion_Trigger 10918
#define P_Parity_Bit 10919
#define P_Master_Move 10920
#define P_Master_TA 10921
#define P_Master_TS 10922
#define P_Master_TM 10923
#define P_Anode_Count 10924
#define P_Cathode_Count 10925
#define P_Anode_Thickness 10926
#define P_Cathode_Thickness 10927
#define P_Sepa_Thickness 10928
#define P_Anode_Thickness_PLC 10929
#define P_Cathode_Thickness_PLC 10930
#define P_Sepa_Thickness_PLC 10931
#define P_Old_P_Anode_TR1_Master_Motion_Trigger 10932
#define P_Old_P_Cathode_TR1_Master_Motion_Trigger 10948
#define P_Anode_TR1_Old_Mode 10964
#define P_Cathode_TR1_Old_Mode 10980
#define P_Older_Than_P_Anode_TR1_Old_Mode 10996
#define P_Older_Than_P_Cathode_TR1_Old_Mode 11012
#define P_Older_Than_P_Sequence_Old_P_Anode_TR1_Current_Mode_Trigger 11028
#define P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Current_Mode_Trigger 11044
#define P_Old_P_Anode_TR1_Mode_Command 11060
#define P_Old_P_Cathode_TR1_Mode_Command 11076
#define P_Older_Than_P_Old_P_Anode_TR1_Mode_Command 11092
#define P_Older_Than_P_Old_P_Cathode_TR1_Mode_Command 11108
#define P_Older_Than_P_Sequence_Old_P_Anode_TR1_Mode_Command_Trigger 11124
#define P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Mode_Command_Trigger 11140
#define P_Old_P_Anode_TR1_PMAC_Status 11156
#define P_Old_P_Cathode_TR1_PMAC_Status 11172
#define P_Older_Than_P_Old_P_Anode_TR1_PMAC_Status 11188
#define P_Older_Than_P_Old_P_Cathode_TR1_PMAC_Status 11204
#define P_Old_P_Slave1_Motion_Command 11220
#define P_Old_P_Slave10_Motion_Command 11236
#define P_Old_Slave1_P_SubMaster_Sub_Mode_Command 11252
#define P_Old_Slave10_P_SubMaster_Sub_Mode_Command 11268
#define P_Sequence_Old_P_Current_Mode_Trigger 11284
#define P_Sequence_Old_Mode 11300
#define P_Sequence_Old_P_Mode_Command 11316
#define P_Sequence_Old_P_Mode_Command_Trigger 11332
#define P_SubMaster_Sub_Old_Mode 11348
#define P_SubMaster_Sub_Old_Command 11364
#define P_SubMaster_Sub_Mode_Command 11380
#define P_SubMaster_Sub_Old_Trigger 11396
#define P_InterLock_No3_Array 11412
#define P_Old_InterLock_No3_Array 11428
#define P_Mode_Err 11444
#define P_Spool_Enable 11449
#define P_Cathode_1St_Flow_Chart_Bit_Flag 11450
#define P_Cathode_AT_Flow_Chart_Bit_Flag 11451
#define P_Cathode_2nd_Flow_Chart_Bit_Flag 11452
#define P_Anode_Clamp_Flow_Chart_Bit_Flag 11453
#define P_Final_Roll_Flow_Chart_Bit_Flag 11454
#define P_Stack_Table_Flow_Chart_Bit_Flag 11455
#define P_Cathode_Clamp_Flow_Chart_Bit_Flag 11456
#define P_Anode_2nd_Flow_Chart_Bit_Flag 11457
#define P_Anode_AT_Flow_Chart_Bit_Flag 11458
#define P_Anode_1St_Flow_Chart_Bit_Flag 11459
#define P_Sepa_Unwinder_Flow_Chart_Bit_Flag 11460
#define P_Slave5_Target_Z_For_Cutting 11461
#define P_Slave31_Motion_Command 11462
#define P_Pause_Err_Process 11463
#define P_Pause_Err_Timer 11464
#define P_Pause_Err_Count 11465
#define P_Pause_Err_Use 11466
#define P_Pause_Err_Use2 11467
#define P_Anode_Pause_Signal_Err 11468
#define P_Cathode_Pause_Signal_Err 11469
#define P_Anode_Pause_Err 11470
#define P_Anode_Pause_Err_Count 11471
#define P_Phasing_Err 11472
#define P_Phasing_Err2 11477
#define P_Execute_Wait_Mode_Memory_Tower 11482
#define P_Execute_Vac_MNTR 11483
#define P_Old_Cathode_Cur_Mode 11484
#define P_Cathode_Run_Mode_Type 11485
#define P_Cathode_Run_Mode_Trigger 11505
#define P_Old_Anode_Cur_Mode 11525
#define P_Anode_Run_Mode_Type 11526
#define P_Anode_Run_Mode_Trigger 11546
#define P_Anode_1TR_T_Belt_To_Align 11566
#define P_Anode_1TR_T_Align_To_Belt 11567
#define P_Anode_1TR_T_Ready_Pos 11568
#define P_Anode_1TR_T_Ready_To_Align 11569
#define P_Anode_1TR_T_Ready_To_Belt 11570
#define P_Anode_Picker_Turn 11571
#define P_Anode_2TR_T_Align_To_Stack 11572
#define P_Anode_2TR_T_Stack_To_Align 11573
#define P_Anode_Clamp_Off 11574
#define P_Anode_Clamp_On 11575
#define P_Anode_Clamp_Down 11576
#define P_FR_Anode_Motion 11577
#define P_FR_Cathode_Motion 11578
#define P_Stack_Table_Down 11579
#define P_Cathode_Clamp_On 11580
#define P_Cathode_Clamp_Off 11581
#define P_Cathode_Clamp_Down 11582
#define P_Cathode_2TR_T_Align_To_Stack 11583
#define P_Cathode_2TR_T_Stack_To_Align 11584
#define P_Cathode_Picker_Turn 11585
#define P_Cathode_1TR_T_Belt_To_Align 11586
#define P_Cathode_1TR_T_Align_To_Belt 11587
#define P_Cathode_1TR_T_Ready_Pos 11588
#define P_Cathode_1TR_T_Ready_To_Align 11589
#define P_Cathode_1TR_T_Ready_To_Belt 11590
#define P_Anode_1TR_Z_Belt_To_Align 11591
#define P_Anode_1TR_Z_Align_To_Belt 11592
#define P_Anode_1TR_Z_Align_Down 11593
#define P_Anode_1TR_Z_Align_UP 11594
#define P_Anode_1TR_Z_Belt_Down 11595
#define P_Anode_1TR_Z_Belt_UP 11596
#define P_Anode_1TR_Z_Ready 11597
#define P_Anode_1TR_Z_Align_Blow 11598
#define P_Anode_1TR_Z_Belt_Vac 11599
#define P_Cathode_1TR_Z_Belt_To_Align 11600
#define P_Cathode_1TR_Z_Align_To_Belt 11601
#define P_Cathode_1TR_Z_Align_Down 11602
#define P_Cathode_1TR_Z_Align_UP 11603
#define P_Cathode_1TR_Z_Belt_Down 11604
#define P_Cathode_1TR_Z_Belt_UP 11605
#define P_Cathode_1TR_Z_Ready 11606
#define P_Cathode_1TR_Z_Align_Blow 11607
#define P_Cathode_1TR_Z_Belt_Vac 11608
#define P_Anode_2TR_Align_To_Stack 11609
#define P_Anode_2TR_Stack_To_Align 11610
#define P_Anode_2TR_Stack_Down 11611
#define P_Anode_2TR_Stack_UP 11612
#define P_Anode_2TR_Align_Down 11613
#define P_Anode_2TR_Align_UP 11614
#define P_Anode_2TR_Align_Vac 11615
#define P_Anode_2TR_Stack_Blow 11616
#define P_Anode_2TR_Stack_Sepa_Blow 11617
#define P_FR_Last_Run_Motion 11618
#define P_Servo_Dancer_Ready_Pos 11619
#define P_Servo_Dancer_Ready_Offset 11620
#define P_Servo_Dancer_Test 11621
#define P_Align_Start_IO_Judgment 11622
#define P_Driving_Clamp2 11623
#define P_Driving_Clamp 11624
#define P_MSA_Timer 11625
#define P_SM_Cathode_Stack_MSA 11626
#define P_SM_Anode_Stack_MSA 11627
#define P_SM_Cathode_Align_MSA 11628
#define P_SM_Anode_Align_MSA 11629
#define P_MSA_Interlock 11630
#define P_Anode_MSA_Final_Roll_Pos_Check 11631
#define P_Anode_MSA_2nd_PNP_Pos_Check 11632
#define P_Anode_MSA_1nd_PNP_Pos_Check 11633
#define P_MSA_Err_Save_CA_Stack_MSA 11634
#define P_MSA_Err_Save_AN_Stack_MSA 11635
#define P_MSA_Err_Save_CA_Align_MSA 11636
#define P_MSA_Err_Save_AN_Align_MSA 11637
#define P_MSA_BTN_Err 11638
#define P_Anode_Algin_MSA_RTN 11639
#define P_Anode_Algin_MSA_RTN2 11640
#define P_Cathode_Algin_MSA_RTN 11641
#define P_Cathode_Stack_MSA_RTN 11642
#define P_Anode_Stack_MSA_RTN 11643
#define P_Anode_Align_MSA_Count 11644
#define P_Cathode_Align_MSA_Count 11645
#define P_Anode_Stack_MSA_Count 11646
#define P_Cathode_Stack_MSA_Count 11647
#define P_Cathode_Align_Stop_Blocked 11648
#define P_Anode_Align_Stop_Blocked 11649
#define P_Cathode_Stack_Stop_Blocked 11650
#define P_Anode_Stack_Stop_Blocked 11651
#define P_Anode_Align_MSA_Execute_Timer 11652
#define P_Cathode_Align_MSA_Execute_Timer 11653
#define P_Anode_Stack_MSA_Execute_Timer 11654
#define P_Cathode_Stack_MSA_Execute_Timer 11655
#define P_Anode_Align_Interlock_Blocked 11656
#define P_Cathode_Align_Interlock_Blocked 11657
#define P_Anode_Stack_Interlock_Blocked 11658
#define P_Cathode_Stack_Interlock_Blocked 11659
#define P_Anode_1TR_T_Align_POS 11660
#define P_Anode_1TR_T_Belt_POS 11661
#define P_Anode_1TR_T_Ready_POS 11662
#define P_Anode_2TR_T_Align_POS 11663
#define P_Anode_2TR_T_Stack_POS 11664
#define P_Cathode_2TR_T_Align_POS 11665
#define P_Cathode_2TR_T_Stack_POS 11666
#define P_Cathode_1TR_T_Align_POS 11667
#define P_Cathode_1TR_T_Belt_POS 11668
#define P_Cathode_1TR_T_Ready_POS 11669
#define P_Seq_Abort 11670
#define P_Blocked_Abort 11671
#define P_Abort_Flag 11672
#define P_Opposite_Lane_1ST_TR_Safe_Pos 11673
#define P_Opposite_Lane_P_PMAC_Status 11674
#define P_Opposite_Lane_OFF_Not_Start 11675
#define P_Pause_Alarm_Blocked 11676
#define P_Old_Alarm_Arr 11677
#define P_Cycle_Stop_Delay_Time 11678
#define P_Cycle_Stop_Offset 11679
#define P_Opposite_Lane_Abort_Alram_Flag 11680
#define P_Cathode_Clmap_Y1_Ready_Pos 11681
#define P_Cathode_Clmap_Y1_Clamp_Pos 11682
#define P_Anode_Clmap_Y1_Ready_Pos 11683
#define P_Anode_Clmap_Y1_Clamp_Pos 11684
#define P_Cathode_Clmap_Y2_Ready_Pos 11685
#define P_Cathode_Clmap_Y2_Clamp_Pos 11686
#define P_Anode_Clmap_Y2_Ready_Pos 11687
#define P_Anode_Clmap_Y2_Clamp_Pos 11688
#define P_Cathode_Clamp_Z2_Ready_Pos 11689
#define P_Cathode_Clamp_Z2_Clamp_Pos 11690
#define P_Anode_Clamp_Z2_Ready_Pos 11691
#define P_Anode_Clamp_Z2_Clamp_Pos 11692
#define P_Cathode_Clamp_Z1_Ready_Pos 11693
#define P_Cathode_Clamp_Z1_Clamp_Pos 11694
#define P_Anode_Clamp_Z1_Ready_Pos 11695
#define P_Anode_Clamp_Z1_Clamp_Pos 11696
#define P_Cathode_Clamp_Z2_Cell_Down 11697
#define P_Anode_Clamp_Z2_Cell_Down 11698
#define P_Cathode_Clamp_Z1_Cell_Down 11699
#define P_Anode_Clamp_Z1_Cell_Down 11700
#define P_Single_Run_Pass 11701
#define P_Cathode_2nd_PNP_Sepa_Blow 11702
#define P_Cathode_2nd_PNP_Align_Blow 11703
#define P_Cathode_2nd_PNP_Stack_Blow 11704
#define P_Cathode_2nd_PNP_Align_Vac 11705
#define P_Cathode_2nd_PNP_Align_Up_Motion 11706
#define P_Cathode_2nd_PNP_Align_Down_Motion 11707
#define P_Cathode_2nd_PNP_Stack_Up_Motion 11708
#define P_Cathode_2nd_PNP_Stack_Down_Motion 11709
#define P_Cathode_2nd_PNP_Stack_To_Align_Motion 11710
#define P_Cathode_2nd_PNP_Align_To_Stack_Motion 11711
#define P_Door_Open_Stop_Count 11712
#define P_Buf_Stack_NG_Flag 11713
#define P_Stop_1st_PNP_Move 11714
#define P_Seq_Abort_Timer 11715
#define P_Sync_Test 11716
#define P_Dry_Pause_Flag 11717
#define P_Dry_Run_Pasue_Timer 11718
#define P_Resume_Stop_Blocked 11719
#define P_Discharge_Wait 11720
#define P_Command_Run_Flag 11721
#define P_Stop_Cmd_Origin 11722
#define P_Stop_Origin_Save 11723
#define P_Old_M_Y_Sepa_Cutter_SSR_On 11738
#define P_Sepa_Cutter_SSR_Off_Time 11739
#define P_Sepa_Cutter_SSR_Off 11740
#define P_Sepa_Cutter_SSR_Off_Timer 11741
#define P_Starting_Pause_IO_Flag 11742
#define P_PLC03_Seq_Pause_Start_Flag 11743
#define P_PLC03_Seq_Pause_Start_State_Machine 11744
#define P_PLC03_Seq_Pause_Start_Status 11745
#define P_ARC_NP_Push_BTN 11746
#define P_ARC_UI_Push_BTN 11747
#define P_M_Manual_ARC_BTN 11748
#define P_Two_Btn_Active_Flag 11749
#define P_Two_Btn_Interlock_Time 11750
#define P_NP_Unwinder_Active_Hold 11751
#define P_MAX_KGF 11752
#define P_KGF_TO_DAC_RATIO 11753
#define P_Dac_Out_Value 11754
#define P_Recipe_Dancer_input_kgf 11755
#define P_Cathode_NG_PNP_Vel_Zero_Set 11756
#define P_Anode_NG_PNP_Vel_Zero_Set 11757
#define P_Anode_Run_DR 11758
#define P_Cathode_Run_DR 11759
#define P_1st_UND_Grip_Time 11760
#define P_1st_UND_Grip_Time_offset 11761
#define P_1st_UND_Grip_Time_offset2 11762
#define P_First_Sepa_Driving_Use 11763
#define P_First_Sepa_Driving_Timing 11764
#define P_Unloader_Safe_rtn 11765
#define P_Final_Start 11766
#define P_Driving_Start 11767
#define P_Starting_Pause_IO_OFF_Flag 11768
#define P_individual_Hold_return 11769
#define P_individual_Hold_return2 11770
#define P_Tension_Ready_Pass 11771
#define P_Discharge_cal_rtn 11772
#define P_Old_Tact_Current_Mode 11773
#define P_Sheet_Clear 11774
#define P_Anode_Clamp_On_Time2 11775
#define P_Anode_Clamp_On_Time 11776
#define P_Cathode_Clamp_On_Time 11777
#define P_Cathode_Clamp_On_Time2 11778
#define P_Offset 11779
#define P_Man_C 11780
#define P_NG_Box_Stop_Use 11781
#define P_SlewTime 11782
#define P_Old_SlewTime 11783
#define P_Resume_MNTR1 11784
#define P_Resume_MNTR2 11785
#define P_Resume_MNTR3 11786
#define P_Resume_MNTR4 11787
#define P_Resume_MNTR5 11788
#define P_Resume_MNTR6 11789
#define P_Resume_MNTR7 11790
#define P_Resume_MNTR8 11791
#define P_Resume_MNTR9 11792
#define P_Resume_MNTR10 11793
#define P_Resume_MNTR11 11794
#define P_Resume_MNTR12 11795
#define P_old_P_Anode_Count 11796
#define P_Sheet_Paper_BWD_Count 11797
#define P_Stop_CHK 11798
#define P_Seq_Pause 11799
#define P_Seq_Pause2 11800
#define P_MSA_TimeBase_Rtn 11801
#define P_Old_Vison_Read_EPC_Camera_Move_Request 11802
#define P_First_Sepa_Time_Out_Count 11803
#define P_Align_Retry_Cal_RTN 11804
#define P_Sheet_Err 11805
#define P_Driving_Cal 11821
#define P_Driving_End_Pos 11822
#define P_Driving_Start_Pos 11823
#define P_Drivig_Cal_Save 11824
#define P_Anode_Align_Blow 11829
#define P_Cathode_Align_Blow 11830
#define P_PMAC_Status_Arr_Save1 11831
#define P_HomePos_Save1 11836
#define P_PMAC_Status_Arr_Save2 11841
#define P_HomePos_Save2 11846
#define P_PMAC_Status_Arr_Save3 11851
#define P_HomePos_Save3 11856
#define P_PMAC_Status_Arr_Save4 11861
#define P_HomePos_Save4 11866
#define P_Home_Pos_Err_Cnt1 11871
#define P_Home_Pos_Err_Cnt2 11872
#define P_Home_Pos_Err_Cnt3 11873
#define P_Home_Pos_Err_Cnt4 11874
#define P_Align_Inspection_Delay 11875
#define P_HomePos_Err 11876
#define P_Anode_Sheet_Test 11881
#define P_Cathode_Sheet_Test 11882
#define P_Anode_Sheet_Interlock_Timing 11883
#define P_Cathode_Sheet_Interlock_Timing 11884
#define P_Discharge_Err_MNTR 11885
#define P_Arc_Err_MNTR 11886
#define P_Abort_Cnt 11887
#define P_EMO_Cnt 11888
#define P_Dry_Run_Inspection 11889
#define P_Servo_ON_MNTR1 11890
#define P_Servo_ON_MNTR2 11891
#define P_Servo_ON_MNTR3 11892
#define P_Servo_ON_MNTR4 11893
#define P_Servo_ON_MNTR5 11894
#define P_Servo_ON_MNTR6 11895
#define P_Servo_ON_MNTR7 11896
#define P_Servo_ON_MNTR8 11897
#define P_Servo_ON_MNTR9 11898
#define P_Servo_ON_MNTR10 11899
#define P_Servo_ON_MNTR11 11900
#define P_Servo_ON_MNTR12 11901
#define P_Servo_ON_MNTR13 11902
#define P_Servo_ON_MNTR14 11903
#define P_Servo_ON_MNTR15 11904
#define P_Servo_ON_MNTR16 11905
#define P_Servo_ON_MNTR17 11906
#define P_Servo_ON_MNTR18 11907
#define P_Servo_ON_MNTR19 11908
#define P_Servo_ON_MNTR20 11909
#define P_Servo_ON_MNTR21 11910
#define P_Servo_ON_MNTR22 11911
#define P_Servo_ON_MNTR23 11912
#define P_Servo_ON_MNTR24 11913
#define P_Servo_ON_MNTR25 11914
#define P_Servo_ON_MNTR26 11915
#define P_Servo_ON_MNTR27 11916
#define P_Servo_ON_MNTR28 11917
#define P_Servo_ON_MNTR29 11918
#define P_Servo_ON_MNTR30 11919
#define P_X_IO_WinMess_Connect_BTN 11920
#define P_Ecat_ReConnetion_State_Machine 11921
#define P_Ecat_Reconnection_Timer 11922
#define P_Y_Ecat_Reconnecting 11923
#define P_Y_Ecat_ReConnection_Fail 11924
#define P_Y_Ecat_ReConnection_Complete 11925
#define P_X_Ecat_Reconnection_BTN 11926
#define P_X_PLC_Setup_Mode_Check 11927
#define P_Interlock_On_Off_Flag 11928
#define P_X_Old_MC_Reconnect_BTN_Signal 11929
#define P_BTN_1st_ULD_Data_Clear 11930
#define P_Old_BTN_1st_ULD_Data_Clear 11931
#define P_Old_M_Y_1st_Unloader_UnGrip_Sol 11932
#define P_Sepa_Cutter_Heat_Meter 11933
#define P_Sepa_Cutter_Heating_Timer 11934
#define P_Middle_Skip_Off_Flag 11935
#define P_Stop_MNTR1 11936
#define P_Stop_MNTR2 11937
#define P_Sheet_Pos_Offset 11938
#define P_Stopping_Wait_Time 11939
#define P_Stopping_Test_Timer 11940
#define P_Cutter_FWB_Heater_Current 11941
#define P_1st_ULD_OK_Lamp 11951
#define P_1st_ULD_NG_Lamp 11952
#define P_1st_ULD_Sample_QC_Lamp 11953
#define P_Proceed_Execute_Flag 11954
#define P_Continuous_Call_Stack_NG_Flag 11955
#define P_Continuous_Call_Stack_OK_Flag 11956
#define P_Cathode_Picker_Home_Pos 11957
#define P_Anode_Picker_Home_Pos 11958
#define P_FR_Sheet_Paper_Home_Chk 11959
#define P_Align_TimeOut1 11960
#define P_Align_TimeOut2 11961
#define P_Align_TimeOut3 11962
#define P_Align_TimeOut4 11963
#define P_Align_TimeOut5 11964
#define P_Align_TimeOut6 11965
#define P_Anode_Align_OK 11966
#define P_Cathode_Align_OK 11967
#define P_Anode_Align_NG 11968
#define P_Cathode_Align_NG 11969
#define P_Anode_Align_TimeOut 11970
#define P_Cathode_Align_TimeOut 11971
#define P_Anode_Surf_OK 11972
#define P_Cathode_Surf_OK 11973
#define P_Anode_Surf_NG 11974
#define P_Cathode_Surf_NG 11975
#define P_Anode_Surf_TimeOut 11976
#define P_Cathode_Surf_TimeOut 11977
#define P_Surf_TimeOut1 11978
#define P_Surf_TimeOut2 11979
#define P_Surf_TimeOut3 11980
#define P_Surf_TimeOut4 11981
#define P_Surf_TimeOut5 11982
#define P_Surf_TimeOut6 11983
#define P_Anode_Stack_TimeOut 11984
#define P_Cathode_Stack_TimeOut 11985
#define P_Anode_Stack_OK 11986
#define P_Cathode_Stack_OK 11987
#define P_Anode_Stack_NG 11988
#define P_Cathode_Stack_NG 11989
#define P_Stack_TimeOut1 11990
#define P_Stack_TimeOut2 11991
#define P_Stack_TimeOut3 11992
#define P_Align_Move_Err 11993
#define P_Ecat_Test 11994
#define P_Scan_Time 11995
#define P_Scan_Aver 11997
#define P_Scan_MAX 11998
#define P_Cathode_1TR_Picker_T_Belt_POS 11999
#define P_Cathode_1TR_Picker_T_Align_POS 12000
#define P_Anode_1TR_Picker_T_Belt_POS 12001
#define P_Anode_1TR_Picker_T_Align_POS 12002
#define P_1TR_Picker_T_Align_POS 12003
#define P_AVRG_Lower_Sepa_Thickness_mm 12004
#define P_AVRG_Upper_Sepa_Thickness_mm 12005
#define P_PLC06_Upper_Curr_Unwinder_Thickness_mm 12006
#define P_PLC06_Lower_Curr_Unwinder_Thickness_mm 12007
#define P_Upper_Curr_Spool_Radius 12008
#define P_Lower_Curr_Spool_Radius 12009
#define P_PLC06_Curr_Upper_Distance_mm 12010
#define P_PLC06_Curr_Lower_Distance_mm 12011
#define P_Upper_Sepa_Min_Distance_mm 12012
#define P_Lower_Sepa_Min_Distance_mm 12013
#define P_PLC06_Sepa_Change_Set 12014
#define P_Upper_Sepa_To_Sensor_Min_Dis 12015
#define P_Upper_Sepa_To_Sensor_Max_Dis 12016
#define P_Upper_Sensor_To_Unwinder_Core_Dis 12017
#define P_Upper_Sensor_Min_AD 12018
#define P_Upper_Sensor_Max_AD 12019
#define P_Lower_Sepa_To_Sensor_Min_Dis 12020
#define P_Lower_Sepa_To_Sensor_Max_Dis 12021
#define P_Lower_Sensor_To_Unwinder_Core_Dis 12022
#define P_Lower_Sensor_Min_AD 12023
#define P_Lower_Sensor_Max_AD 12024
#define M_AI_Upper_Sepa_Sensing 372
#define M_AI_Lower_Sepa_Sensing 373
#define P_Status_NP_BTN_Lower_Unwinder 12025
#define P_Status_NP_BTN_Upper_Unwinder 12026
#define P_Driving_CamTable_Scale_Change_Flag 12027
#define P_FR_Driving_Diameter 12028
#define P_FR_Driving_Floating_Point 12029
#define P_FR_Driving_Reward 12030
#define P_Unwinder_Master_Following_Use_Flag 12031
#define P_Unwinder_Master_Following_On 12032
#define P_Old_Master_Following_Start 12033
#define P_Unwinder_Master_Following_Scale 12034
#define P_Unwinder_Jog_Use_Flag 12035
#define P_Old_Jog_Start 12036
#define P_Unwinder_Jog_Total_Time 12037
#define P_Unwinder_Ta 12038
#define P_Unwinder_Ts 12039
#define P_Unwinder_Tm 12040
#define P_Unwinder_1mm_Deg 12041
#define P_Unwinder_Jog_Pos 12042
#define P_Unwinder_Jog_Cnt 12043
#define P_PLC06_Frist_Flag 12044
#define P_Sepa_AI 12045
#define P_PLC06_Reel_Upper_Change_Flag 12046
#define P_PLC06_Reel_Lower_Change_Flag 12047
#define P_Spool_Ready_Enable_Flag 12048
#define P_Spool_Lack_Flag 12049
#define P_Sepa_DR_Start_Flag 12050
#define P_cdTime_Tact_Sec 12051
#define P_Master_Tact_Sec 12052
#define P_Prev_Err_Pos 12053
#define P_Cur_Arc_Rad 12054
#define P_Cur_Arc_Deg 12055
#define P_Spool_Velocity 12056
#define P_Lin_Prop_Vel 12057
#define P_Err_Pos 12058
#define P_Lin_Deriv_Vel 12059
#define P_Lin_Dacer_Kd 12060
#define P_Lin_Dacer_Kp 12061
#define P_Running_CDTimer 12062
#define P_Unwinder_Jog_Ta 12063
#define P_Unwinder_Jog_Ts 12064
#define P_Unwinder_Vel_Test_Time 12065
#define P_Set_Interval_Time 12066
#define P_PLC06_Upper_Sepa_AI_Timer 12067
#define P_PLC06_Upper_Sepa_AI_Data 12068
#define P_PLC06_Upper_Sepa_AI_Cnt 12069
#define P_PLC06_Upper_AVRG_Sensor_Data 12070
#define P_PLC06_Lower_Sepa_AI_Timer 12071
#define P_PLC06_Lower_Sepa_AI_Data 12072
#define P_PLC06_Lower_Sepa_AI_Cnt 12073
#define P_PLC06_Lower_AVRG_Sensor_Data 12074
#define P_PLC06_Sepa_Upper_Thickness_Timer 12075
#define P_PLC06_Sepa_Upper_Thickness_Data 12076
#define P_PLC06_Sepa_Upper_Thickness_Cnt 12077
#define P_PLC06_Sepa_Lower_Thickness_Timer 12078
#define P_PLC06_Sepa_Lower_Thickness_Data 12079
#define P_PLC06_Sepa_Lower_Thickness_Cnt 12080
#define P_Sepa_Thickness_Chk_Timer 12081
#define P_Spool_Length 12082
#define P_Cascade_Sf_Driving_Value 12083
#define P_Cascade_Sf_None_Driving_Value 12084
#define P_Sepa_Min_Value_Cal_Cmd 12085
#define P_Total_Sepa_Need_Length 12086
#define P_Alpa 12087
#define P_Sepa_Num_of_Turns 12088
#define P_Sepa_Turn_Num 12089
#define P_Accumulate_Value 12090
#define P_Sharft_to_Sepa_Core_mm 12091
#define P_Sepa_Cal_Circum 12092
#define P_Sepa_Min_Need_Thickness 12093
#define P_Sepa_Min_Thickness_Cmd 12094
#define P_Sepa_Accumulate_Cmd 12095
#define P_Sepa_Required_Amount 12096
#define P_Sepa_Current_Thickness 12097
#define P_Sepa_Initial_Tickness 12098
#define P_Sepa_Required_Update_Timer 12099
#define M_PLC_HeartBit_Flag 4223
#define M_X_BTN_Press_Jog_Left_From_PLC 4160
#define M_X_BTN_Press_Jog_Right_From_PLC 4107
#define P_TEST_EPC_Interlock_Auto 12100
#define P_TEST_EPC_Interlock_Manual 12101
#define P_Discharge_Total_Tact 12102
#define P_Read_Sector_TactTime 12103
#define P_Write_Sector_TactTime 12109
#define P_PLC15_Sub_Function_Dryrun_Active_Flag 12115
#define P_Sepa_Rotation_Sequence_Run_Trigger_Cnt 12116
#define P_Sepa_Mode_Sepa_Recipe_Count 12117
#define P_Discharged_After_End_Trigger 12118
#define P_Unloader_1st_Grip_Delay 12119
#define P_Separate_Cutter_Heating_Limit_Value 12120
#define P_Separate_Cutting_Current 12121
#define P_Separate_Cutter_Change_Cycle 12122
#define P_X_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger 12123
#define P_X_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger 12124
#define P_X_Cathode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger 12125
#define P_X_Anode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger 12126
#define P_X_Stack_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger 12127
#define P_Interlock_Messege_Confirmed 12128
#define P_X_MC_Communication_HeartBit 12129
#define P_SV_Cathode_Count 12130
#define P_SV_Anode_Count 12131
#define P_SV_AO_Reference_Value_Chanel 12132
#define P_SV_Cathode_Reference_Thickness 12135
#define P_SV_Anode_Reference_Thickness 12136
#define P_SV_Stack_Table_Damper_Cathode 12137
#define P_SV_Stack_Table_Damper_Anode 12138
#define P_SV_Sepa_Reference_Thickness 12139
#define P_SV_Jelly_Roll_Width 12140
#define P_Cathode_Align_Continuous_NG_Recipe 12141
#define P_Anode_Align_Continuous_NG_Recipe 12142
#define P_Stack_Vision_Continuous_NG_Recipe 12143
#define P_PLC_Recipe_EPC_Sepa_Count 12144
#define P_PLC_Recipe_Revise_Sepa 12145
#define P_X_PLC_to_PMAC_Correction_Value 12146
#define P_Anode_Align_Continuous_NG_Check_range 12147
#define P_Cathode_Align_Continuous_NG_Check_range 12148
#define P_Stack_Align_Continuous_NG_Check_range 12149
#define P_Cathode_Surface_Continuous_NG_Recipe 12150
#define P_Anode_Surface_Continuous_NG_Recipe 12151
#define P_Cathode_Surface_Continuous_NG_Check_range 12152
#define P_Anode_Surface_Continuous_NG_Check_range 12153
#define P_Servo_Dancer_Alarm_Maximum_Angle_Value 12154
#define P_Servo_Dancer_Alarm_Minimum_Angle_Value 12155
#define P_Current_Selected_Spool_Rev_Counts_Init_Read 12156
#define P_Spool_ARC_Distance_mm 12157
#define P_ARC_Upper_Request_Sepa_Thickness_mm 12158
#define P_ARC_Lower_Request_Sepa_Thickness_mm 12159
#define P_Selected_Spool_Arc_Set_Rev_Counts_Value 12160
#define P_Set_Cnt_FR_Moving_Sepa_ARC 12161
#define P_Current_Selected_Spool_Rev_Counts 12162
#define P_AI_Cathode_Clamp_Damper 12163
#define P_AI_Anode_Clamp_Damper 12164
#define P_MSA_Run_Repeat_Num 12165
#define P_Current_MSA_Run_Num 12170
#define P_Select_Sheet_Value 12175
#define P_BTN_Config_Setup_Mode_Select 12176
#define P_Sepa_Thickness_Max_Value 12177
#define P_AI_Cathode_Clamp_Damper_Zero_Mpa_Analog_Value 12178
#define P_AI_Anode_Clamp_Damper_Zero_Mpa_Analog_Value 12179
#define P_Accumulated_Movement_MM_Unit_Cathode_1ST_pnp 12180
#define P_Accumulated_Movement_MM_Unit_Anode_1ST_pnp 12181
#define P_Accumulated_Movement_MM_Unit_Cathode_2nd_pnp 12182
#define P_Accumulated_Movement_MM_Unit_Anode_2nd_pnp 12183
#define P_AI_Anode_Clamp_Damper_Mpa 12184
#define P_AI_Cathode_Clamp_Damper_Mpa 12185
#define P_Current_Whole_Stack_Jelly_Roll_Thinckness_mm 12186
#define P_Upper_Sepa_Current_Thickness_um 12187
#define P_Lower_Sepa_Current_Thickness_um 12188
#define P_Spool_Rotate_Distance 12189
#define Spool_Diameter 12190
#define P_Current_FR_Moving_Cnt_To_PlC 12191
#define P_MES_APC_Select_Btn 12192
#define P_AO_Anode_Clamp_Damper 12193
#define P_AO_Cathode_Clamp_Damper 12194
#define P_Sepa_Length 12195
#define P_Minus_Limit_Detect_Popup_Flag 12196
#define P_Plus_Limit_Detect_Popup_Flag 12197
#define P_Fatal_Fe_Limit_Detect_Popup_Flag 12198
#define P_Emergency_Alarm_Popup_Flag 12199
#define P_SepaArcing_Popup_Flag 12200
#define P_Y_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger 12201
#define P_Y_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger 12202
#define P_Y_Cathode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger 12203
#define P_Y_Anode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger 12204
#define P_Y_Stack_Align_Calibration_twisted_Cycle_Stop_Request_Trigger 12205
#define P_Current_Selected_Sheet_Value 12206
#define P_Status_Config_Mode_Select 12207
#define P_Sepa_Thickness_Jig_Value 12208
#define P_PV_Stack_Table_Damper_Cathode 12209
#define P_PV_Stack_Table_Damper_Anode 12210
#define P_Discharge_Standby_Pos_Tack_Time 12211
#define P_Discharge_FR_MainZ_Pos_Tack_Time 12212
#define P_Discharge_Unloader_Go_Pos_Tack_Time 12213
#define P_Discharge_SubZ_Down_Pos_Tack_Time 12214
#define P_Discharge_Unloader_Cutting_Pos_Tack_Time 12215
#define P_Discharge_FR_Clamp_ON_Complete_Tack_Time 12216
#define P_Discharge_Cutting_Complete_Tack_Time 12217
#define P_Discharge_Motion_PG_Active_Starting_Tack_Time 12218
#define P_Discharge_Motion_PG_Active_Complete_Tack_Time 12219
#define P_Discharge_Sepa_First_Complete_Tack_Time 12220
#define P_Discharge_Complete_Tack_Time 12221
#define P_Discharge_Total_Tack_Time 12222
#define P_Anode_Clamp_TackTime_Array0 12223
#define P_Anode_Clamp_TackTime_Array1 12224
#define P_Anode_Clamp_TackTime_Array2 12225
#define P_Anode_Clamp_TackTime_Array3 12226
#define P_Anode_Clamp_TackTime_Array4 12227
#define P_Anode_Clamp_TackTime_Array5 12228
#define P_Anode_Clamp_TackTime_Array6 12229
#define P_Anode_Clamp_TackTime_Array7 12230
#define P_Anode_Clamp_TackTime_Array8 12231
#define P_Anode_Clamp_TackTime_Array9 12232
#define P_Anode_Clamp_TackTime_Array10 12233
#define P_Stacking_TackTime_Array0 12234
#define P_Stacking_TackTime_Array1 12235
#define P_Stacking_TackTime_Array2 12236
#define P_Stacking_TackTime_Array3 12237
#define P_Stacking_TackTime_Array4 12238
#define P_Stacking_TackTime_Array5 12239
#define P_Stacking_TackTime_Array6 12240
#define P_Stacking_TackTime_Array7 12241
#define P_Stacking_TackTime_Array8 12242
#define P_Stacking_TackTime_Array9 12243
#define P_Stacking_TackTime_Array10 12244
#define P_Cathode_Clamp_TackTime_Array0 12245
#define P_Cathode_Clamp_TackTime_Array1 12246
#define P_Cathode_Clamp_TackTime_Array2 12247
#define P_Cathode_Clamp_TackTime_Array3 12248
#define P_Cathode_Clamp_TackTime_Array4 12249
#define P_Cathode_Clamp_TackTime_Array5 12250
#define P_Cathode_Clamp_TackTime_Array6 12251
#define P_Cathode_Clamp_TackTime_Array7 12252
#define P_Cathode_Clamp_TackTime_Array8 12253
#define P_Cathode_Clamp_TackTime_Array9 12254
#define P_Cathode_Clamp_TackTime_Array10 12255
#define P_JellyRoll_Out_TackTime_Array0 12256
#define P_JellyRoll_Out_TackTime_Array1 12257
#define P_JellyRoll_Out_TackTime_Array2 12258
#define P_JellyRoll_Out_TackTime_Array3 12259
#define P_JellyRoll_Out_TackTime_Array4 12260
#define P_JellyRoll_Out_TackTime_Array5 12261
#define P_JellyRoll_Out_TackTime_Array6 12262
#define P_JellyRoll_Out_TackTime_Array7 12263
#define P_JellyRoll_Out_TackTime_Array8 12264
#define P_JellyRoll_Out_TackTime_Array9 12265
#define P_JellyRoll_Out_TackTime_Array10 12266
#define P_Anode_1th_TackTime_Array0 12267
#define P_Anode_1th_TackTime_Array1 12268
#define P_Anode_1th_TackTime_Array2 12269
#define P_Anode_1th_TackTime_Array3 12270
#define P_Anode_1th_TackTime_Array4 12271
#define P_Anode_1th_TackTime_Array5 12272
#define P_Anode_1th_TackTime_Array6 12273
#define P_Anode_1th_TackTime_Array7 12274
#define P_Anode_1th_TackTime_Array8 12275
#define P_Anode_1th_TackTime_Array9 12276
#define P_Anode_1th_TackTime_Array10 12277
#define P_Cathode_1th_TackTime_Array0 12278
#define P_Cathode_1th_TackTime_Array1 12279
#define P_Cathode_1th_TackTime_Array2 12280
#define P_Cathode_1th_TackTime_Array3 12281
#define P_Cathode_1th_TackTime_Array4 12282
#define P_Cathode_1th_TackTime_Array5 12283
#define P_Cathode_1th_TackTime_Array6 12284
#define P_Cathode_1th_TackTime_Array7 12285
#define P_Cathode_1th_TackTime_Array8 12286
#define P_Cathode_1th_TackTime_Array9 12287
#define P_Cathode_1th_TackTime_Array10 12288
#define P_Anode_2th_TackTime_Array0 12289
#define P_Anode_2th_TackTime_Array1 12290
#define P_Anode_2th_TackTime_Array2 12291
#define P_Anode_2th_TackTime_Array3 12292
#define P_Anode_2th_TackTime_Array4 12293
#define P_Anode_2th_TackTime_Array5 12294
#define P_Anode_2th_TackTime_Array6 12295
#define P_Anode_2th_TackTime_Array7 12296
#define P_Anode_2th_TackTime_Array8 12297
#define P_Anode_2th_TackTime_Array9 12298
#define P_Anode_2th_TackTime_Array10 12299
#define P_Cathode_2th_TackTime_Array0 12300
#define P_Cathode_2th_TackTime_Array1 12301
#define P_Cathode_2th_TackTime_Array2 12302
#define P_Cathode_2th_TackTime_Array3 12303
#define P_Cathode_2th_TackTime_Array4 12304
#define P_Cathode_2th_TackTime_Array5 12305
#define P_Cathode_2th_TackTime_Array6 12306
#define P_Cathode_2th_TackTime_Array7 12307
#define P_Cathode_2th_TackTime_Array8 12308
#define P_Cathode_2th_TackTime_Array9 12309
#define P_Cathode_2th_TackTime_Array10 12310
#define P_Anode_Align_Table_TackTime_Array0 12311
#define P_Anode_Align_Table_TackTime_Array1 12312
#define P_Anode_Align_Table_TackTime_Array2 12313
#define P_Anode_Align_Table_TackTime_Array3 12314
#define P_Anode_Align_Table_TackTime_Array4 12315
#define P_Anode_Align_Table_TackTime_Array5 12316
#define P_Anode_Align_Table_TackTime_Array6 12317
#define P_Anode_Align_Table_TackTime_Array7 12318
#define P_Anode_Align_Table_TackTime_Array8 12319
#define P_Anode_Align_Table_TackTime_Array9 12320
#define P_Anode_Align_Table_TackTime_Array10 12321
#define P_Cathode_Align_Table_TackTime_Array0 12322
#define P_Cathode_Align_Table_TackTime_Array1 12323
#define P_Cathode_Align_Table_TackTime_Array2 12324
#define P_Cathode_Align_Table_TackTime_Array3 12325
#define P_Cathode_Align_Table_TackTime_Array4 12326
#define P_Cathode_Align_Table_TackTime_Array5 12327
#define P_Cathode_Align_Table_TackTime_Array6 12328
#define P_Cathode_Align_Table_TackTime_Array7 12329
#define P_Cathode_Align_Table_TackTime_Array8 12330
#define P_Cathode_Align_Table_TackTime_Array9 12331
#define P_Cathode_Align_Table_TackTime_Array10 12332
#define P_Anode_NG_PNP_TackTime_Array0 12333
#define P_Anode_NG_PNP_TackTime_Array1 12334
#define P_Anode_NG_PNP_TackTime_Array2 12335
#define P_Anode_NG_PNP_TackTime_Array3 12336
#define P_Anode_NG_PNP_TackTime_Array4 12337
#define P_Anode_NG_PNP_TackTime_Array5 12338
#define P_Anode_NG_PNP_TackTime_Array6 12339
#define P_Anode_NG_PNP_TackTime_Array7 12340
#define P_Anode_NG_PNP_TackTime_Array8 12341
#define P_Anode_NG_PNP_TackTime_Array9 12342
#define P_Anode_NG_PNP_TackTime_Array10 12343
#define P_Cathode_NG_PNP_TackTime_Array0 12344
#define P_Cathode_NG_PNP_TackTime_Array1 12345
#define P_Cathode_NG_PNP_TackTime_Array2 12346
#define P_Cathode_NG_PNP_TackTime_Array3 12347
#define P_Cathode_NG_PNP_TackTime_Array4 12348
#define P_Cathode_NG_PNP_TackTime_Array5 12349
#define P_Cathode_NG_PNP_TackTime_Array6 12350
#define P_Cathode_NG_PNP_TackTime_Array7 12351
#define P_Cathode_NG_PNP_TackTime_Array8 12352
#define P_Cathode_NG_PNP_TackTime_Array9 12353
#define P_Cathode_NG_PNP_TackTime_Array10 12354
#define P_Sepa_Unwinder_TackTime_Array0 12355
#define P_Sepa_Unwinder_TackTime_Array1 12356
#define P_Sepa_Unwinder_TackTime_Array2 12357
#define P_Sepa_Unwinder_TackTime_Array3 12358
#define P_Sepa_Unwinder_TackTime_Array4 12359
#define P_Sepa_Unwinder_TackTime_Array5 12360
#define P_Sepa_Unwinder_TackTime_Array6 12361
#define P_Sepa_Unwinder_TackTime_Array7 12362
#define P_Sepa_Unwinder_TackTime_Array8 12363
#define P_Sepa_Unwinder_TackTime_Array9 12364
#define P_Sepa_Unwinder_TackTime_Array10 12365
#define P_Sepa_Unwinder_TackTime_Array11 12366
#define P_1st_Unloader_TackTime_Array0 12367
#define P_1st_Unloader_TackTime_Array1 12368
#define P_1st_Unloader_TackTime_Array2 12369
#define P_1st_Unloader_TackTime_Array3 12370
#define P_1st_Unloader_TackTime_Array4 12371
#define P_1st_Unloader_TackTime_Array5 12372
#define P_1st_Unloader_TackTime_Array6 12373
#define P_1st_Unloader_TackTime_Array7 12374
#define P_1st_Unloader_TackTime_Array8 12375
#define P_1st_Unloader_TackTime_Array9 12376
#define P_1st_Unloader_TackTime_Array10 12377
#define P_Cathode_1st_Vacuum_TackTime_Array1 12378
#define P_Cathode_1st_Vacuum_TackTime_Array2 12379
#define P_Cathode_1st_Vacuum_TackTime_Array3 12380
#define P_Cathode_1st_Vacuum_TackTime_Array4 12381
#define P_Cathode_1st_Vacuum_TackTime_Array5 12382
#define P_Cathode_1st_Vacuum_TackTime_Array6 12383
#define P_Cathode_1st_Vacuum_TackTime_Array7 12384
#define P_Cathode_1st_Vacuum_TackTime_Array8 12385
#define P_Cathode_1st_Vacuum_TackTime_Array9 12386
#define P_Cathode_1st_Vacuum_TackTime_Array10 12387
#define P_Cathode_Align_Vacuum_TackTime_Array1 12388
#define P_Cathode_Align_Vacuum_TackTime_Array2 12389
#define P_Cathode_Align_Vacuum_TackTime_Array3 12390
#define P_Cathode_Align_Vacuum_TackTime_Array4 12391
#define P_Cathode_Align_Vacuum_TackTime_Array5 12392
#define P_Cathode_Align_Vacuum_TackTime_Array6 12393
#define P_Cathode_Align_Vacuum_TackTime_Array7 12394
#define P_Cathode_Align_Vacuum_TackTime_Array8 12395
#define P_Cathode_Align_Vacuum_TackTime_Array9 12396
#define P_Cathode_Align_Vacuum_TackTime_Array10 12397
#define P_Cathode_2nd_Vacuum_TackTime_Array1 12398
#define P_Cathode_2nd_Vacuum_TackTime_Array2 12399
#define P_Cathode_2nd_Vacuum_TackTime_Array3 12400
#define P_Cathode_2nd_Vacuum_TackTime_Array4 12401
#define P_Cathode_2nd_Vacuum_TackTime_Array5 12402
#define P_Cathode_2nd_Vacuum_TackTime_Array6 12403
#define P_Cathode_2nd_Vacuum_TackTime_Array7 12404
#define P_Cathode_2nd_Vacuum_TackTime_Array8 12405
#define P_Cathode_2nd_Vacuum_TackTime_Array9 12406
#define P_Cathode_2nd_Vacuum_TackTime_Array10 12407
#define P_Anode_1st_Vacuum_TackTime_Array1 12408
#define P_Anode_1st_Vacuum_TackTime_Array2 12409
#define P_Anode_1st_Vacuum_TackTime_Array3 12410
#define P_Anode_1st_Vacuum_TackTime_Array4 12411
#define P_Anode_1st_Vacuum_TackTime_Array5 12412
#define P_Anode_1st_Vacuum_TackTime_Array6 12413
#define P_Anode_1st_Vacuum_TackTime_Array7 12414
#define P_Anode_1st_Vacuum_TackTime_Array8 12415
#define P_Anode_1st_Vacuum_TackTime_Array9 12416
#define P_Anode_1st_Vacuum_TackTime_Array10 12417
#define P_Anode_Align_Vacuum_TackTime_Array1 12418
#define P_Anode_Align_Vacuum_TackTime_Array2 12419
#define P_Anode_Align_Vacuum_TackTime_Array3 12420
#define P_Anode_Align_Vacuum_TackTime_Array4 12421
#define P_Anode_Align_Vacuum_TackTime_Array5 12422
#define P_Anode_Align_Vacuum_TackTime_Array6 12423
#define P_Anode_Align_Vacuum_TackTime_Array7 12424
#define P_Anode_Align_Vacuum_TackTime_Array8 12425
#define P_Anode_Align_Vacuum_TackTime_Array9 12426
#define P_Anode_Align_Vacuum_TackTime_Array10 12427
#define P_Anode_2nd_Vacuum_TackTime_Array1 12428
#define P_Anode_2nd_Vacuum_TackTime_Array2 12429
#define P_Anode_2nd_Vacuum_TackTime_Array3 12430
#define P_Anode_2nd_Vacuum_TackTime_Array4 12431
#define P_Anode_2nd_Vacuum_TackTime_Array5 12432
#define P_Anode_2nd_Vacuum_TackTime_Array6 12433
#define P_Anode_2nd_Vacuum_TackTime_Array7 12434
#define P_Anode_2nd_Vacuum_TackTime_Array8 12435
#define P_Anode_2nd_Vacuum_TackTime_Array9 12436
#define P_Anode_2nd_Vacuum_TackTime_Array10 12437
#define P_Final_Roll_TackTime_Array1 12438
#define P_Final_Roll_TackTime_Array2 12439
#define P_Final_Roll_TackTime_Array3 12440
#define P_Final_Roll_TackTime_Array4 12441
#define P_Final_Roll_TackTime_Array5 12442
#define P_Final_Roll_TackTime_Array6 12443
#define P_Final_Roll_TackTime_Array7 12444
#define P_Final_Roll_TackTime_Array8 12445
#define P_Final_Roll_TackTime_Array9 12446
#define P_Final_Roll_TackTime_Array10 12447
#define P_Sepa_ARC_TackTime_Array1 12448
#define P_Sepa_ARC_TackTime_Array2 12449
#define P_Sepa_ARC_TackTime_Array3 12450
#define P_Sepa_ARC_TackTime_Array4 12451
#define P_Sepa_ARC_TackTime_Array5 12452
#define P_Sepa_ARC_TackTime_Array6 12453
#define P_Sepa_ARC_TackTime_Array7 12454
#define P_Sepa_ARC_TackTime_Array8 12455
#define P_Sepa_ARC_TackTime_Array9 12456
#define P_Sepa_ARC_TackTime_Array10 12457
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array1 12458
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array2 12459
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array3 12460
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array4 12461
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array5 12462
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array6 12463
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array7 12464
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array8 12465
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array9 12466
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array10 12467
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array1 12468
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array2 12469
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array3 12470
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array4 12471
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array5 12472
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array6 12473
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array7 12474
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array8 12475
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array9 12476
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array10 12477
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array1 12478
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array2 12479
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array3 12480
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array4 12481
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array5 12482
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array6 12483
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array7 12484
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array8 12485
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array9 12486
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array10 12487
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array1 12488
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array2 12489
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array3 12490
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array4 12491
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array5 12492
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array6 12493
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array7 12494
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array8 12495
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array9 12496
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array10 12497
#define P_PACK_ML_Status_bit 12498
#define P_Whole_Stacking_TackTime_MES_Report_Flag 12499
#define P_JellyRoll_Out_TackTime_MES_Report_Flag 12500
#define P_PV_Cathode_Count 12501
#define P_PV_Anode_Count 12502
#define P_PV_AO_Value_Chanel 12503
#define P_PV_Cathode_NG_TR_NG_Count 12507
#define P_PV_Anode_NG_TR_NG_Count 12508
#define P_PV_Anode_Retry_NG_Count 12509
#define P_PV_Cathode_Retry_NG_Count 12510
#define P_PV_Align_INPUT_Count 12511
#define P_Unloader_Grip_Pressure 12512
#define P_Unloader_Heatmeter 12513
#define P_Interlock_Messege 12514
#define P_EPC_Y_StandBy 12564
#define P_SV_Read_Enable_Flag 12565
#define P_Spool_Rotate_Distance_mm 12566
#define P_Current_Homming_Status 12567
#define P_Home_Execute_Type 12617
#define P_Cathode_Clamp_Gantry 12667
#define P_Anode_Clamp_Gantry 12668
#define P_SV_Separator_Heting_Cutter_Change_Period 12669
#define P_Interval_Read_Time 12670
#define P_Interval_Write_Time 12676
#define P_Cathode_Picker_Cylinder_Count 12682
#define P_Anode_Picker_Cylinder_Count 12683
#define P_SV_Stack_Table_Cathode_Reference_Value 12684
#define P_SV_Stack_Table_Anode_Reference_Value 12685
#define P_CA_DR_Offset 12686
#define P_AN_DR_Offset 12687
#define P_First_DR_Offset 12688
#define P_Last_DR_Offset 12689
#define P_BTN_QC_Sample_Flag 12690
#define P_BTN_Loss_Sample_Flag 12691
#define P_MSA_Sample_Flag 12692
#define P_Sample_JR_Recipe_Count 12693
#define M_Sample_JR_Prod_Count 8351
#define M_Sample_Btn_Flag 8352
#define P_Ca_Clamp_Y_Move 12694
#define P_An_Clamp_Y_Move 12695
#define P_Stack_Table_JR_Exist_Flag 12696
#define P_Program_Monitoring_Lamp_Cell_Ready 12697
#define P_Program_Monitoring_Lamp_Ready_Pos 12698
#define P_Program_Monitoring_Lamp_Pause_Pos 12699
#define P_Program_Monitoring_Lamp_Motion_Run 12700
#define P_Program_Monitoring_Lamp_Cell_Remove 12701
#define P_Program_Monitoring_Lamp_Cell_Supply 12702
#define P_Program_Monitoring_Lamp_Sepa_Mode 12703
#define P_Program_Monitoring_Lamp_Semi_Run 12704
#define P_Program_Monitoring_Lamp_Stack_Mode 12705
#define P_Program_Monitoring_Lamp_Anode_Aling_NG 12706
#define P_Program_Monitoring_Lamp_Anode_Retry_NG 12707
#define P_Program_Monitoring_Lamp_Cathode_Align_NG 12708
#define P_Program_Monitoring_Lamp_Cathode_Retry_NG 12709
#define P_Program_Monitoring_Lamp_Last_Stack_Mode 12710
#define P_Program_Monitoring_Lamp_Jelly_Roll_OK 12711
#define P_Program_Monitoring_Lamp_Jelly_Roll_NG 12712
#define P_Program_Monitoring_Lamp_Jelly_Roll_Sepa 12713
#define P_Program_Monitoring_Lamp_Cell_Out_Pos 12714
#define P_Program_Monitoring_Lamp_Cell_Out_Mode 12715
#define P_Master_Motion_Program_Flag 12716
#define P_Sub_Master_Motion_Program_Flag 12717
#define P_Slave_Motion_Program_Flag 12737
#define P_Master_Motion_CycleStop_Flag 12757
#define P_OLD_Jog_Speed_Motor 12758
#define P_PLC_08_Program_Ver 12808
#define P_Old_PMAC_Commands 12809
#define P_Old_PMAC_Status 12810
#define P_Old_PMAC_Current_Mode 12811
#define P_Mode_Function_State_Machine 12812
#define P_PMAC_Commands 12813
#define P_Command_Start 12814
#define P_Command_Complete 12832
#define P_Command_Reset 12850
#define P_Command_Hold 12868
#define P_Command_Unhold 12886
#define P_Command_Suspend 12904
#define P_Command_Unsuspend 12922
#define P_Command_Clear 12940
#define P_Command_Stop 12958
#define P_Command_Abort 12976
#define P_Command_Status_Complete 12994
#define P_Command_Mask_Layer 13012
#define P_Command_Process_Type 13030
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
#define P_PMAC_Current_Mode 13048
#define P_PMAC_Status 13049
#define P_PMAC_Old_Mode 13050
#define P_Ready_Tack_Chk_Timer 13051
#define P_PLC09_Common_Command_Flag 13052
#define P_PLC09_Common_Command_Complete_Bit 13053
#define P_PLC09_Common_Execute_Flag 13054
#define P_PLC09_Common_Execute_Complete_Bit 13055
#define P_PLC09_Status 13056
#define P_PLC09_Libraries_Var 13057
#define P_Master_Motion_Program_ON_Flag 13058
#define P_Master_Motion_Program_ON_Complete_Bit 13059
#define P_Master_Motion_Program_OFF_Flag 13060
#define P_Master_Motion_Program_OFF_Complete_Bit 13061
#define P_Common_Function_Timbase_ON_Flag 13062
#define P_Common_Function_Timbase_ON_Complete_Bit 13063
#define P_Common_Function_Timbase_OFF_Flag 13064
#define P_Common_Function_Timbase_OFF_Complete_Bit 13065
#define P_Common_Function_Monitoring_Lamp_OFF_Flag 13066
#define P_Common_Function_Monitoring_Lamp_OFF_Complete_Bit 13067
#define P_Common_Function_Slave_Motion_Common_Init_Flag 13068
#define P_Common_Function_Slave_Motion_Common_Init_Complete_Bit 13069
#define P_Common_Function_OlD_Jog_Speed_Save_ON_Flag 13070
#define P_Common_Function_OlD_Jog_Speed_Save_ON_Complete_Bit 13071
#define P_Auto_Resetting_Sum_Ready_Pos_Check_Flag 13072
#define P_Auto_Resetting_Sum_Ready_Pos_Check_Complete_bit 13073
#define P_Manual_Resetting_Sum_Ready_Pos_Check_Flag 13074
#define P_Manual_Resetting_Sum_Ready_Pos_Check_Complete_bit 13075
#define P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Flag 13076
#define P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Complete_Bit 13077
#define P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Flag 13078
#define P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Complete_Bit 13079
#define P_Motion_Target_Position_Complete 13080
#define P_SM_Auto_Run_Layer_Management 13081
#define P_Buffer_Mode_Status_Sequence 13082
#define P_SM_Sub_Function_Pause 13083
#define P_PLC09_Resetting_Position_Check_State_Machine 13084
#define P_PLC09_Resetting_Position_Moving_State_Machine 13085
#define P_Sum_Ready_pos_Motor 13086
#define P_SM_Resetting_Pause_Position 13128
#define P_20per_Vac_Error_Cycle_Stop_Flag 13129
#define P_MNTR_PLC23_ARC_Complete 13130
#define P_FUNCTION_PLC13_Sepa_Trigger_Enable 13131
#define P_PLC_Recipe_PLC2_Revise_Sepa 13132
#define P_Auto_Semi_Init_Status 13133
#define P_Auto_Semi_Init_Chk_Bit 13134
#define P_Old_PLC_HeartBit_Flag 13135
#define P_PLC09_Init_Flag 13136
#define P_Check_IDLE_CF_Flag 13137
#define P_Check_EXECUTE_CF_Flag 13138
#define P_Check_COMPLETING_CF_Flag 13139
#define P_Check_COMPLETE_CF_Flag 13140
#define P_Check_HOLDING_CF_Flag 13141
#define P_Check_HOLD_CF_Flag 13142
#define P_Check_UNHOLDING_CF_Flag 13143
#define P_Check_SUSPENDING_CF_Flag 13144
#define P_Check_SUSPENDED_CF_Flag 13145
#define P_Check_UNSUSPENDING_CF_Flag 13146
#define P_Check_STOPPED_CF_Flag 13147
#define P_Check_ABORTED_CF_Flag 13148
#define P_Check_CLEARING_CF_Flag 13149
#define P_Check_IDLE_CF 13150
#define P_Check_EXECUTE_CF 13151
#define P_Check_COMPLETING_CF 13152
#define P_Check_COMPLETE_CF 13153
#define P_Check_HOLDING_CF 13154
#define P_Check_HOLD_CF 13155
#define P_Check_UNHOLDING_CF 13156
#define P_Check_SUSPENDING_CF 13157
#define P_Check_SUSPENDED_CF 13158
#define P_Check_UNSUSPENDING_CF 13159
#define P_Check_STOPPED_CF 13160
#define P_Check_ABORTED_CF 13161
#define P_Check_CLEARING_CF 13162
#define P_Check_STOPPING_CF 13163
#define P_Check_STARTING_CF 13164
#define P_Check_RESETTING_CF 13165
#define P_Check_STARTTING_CF 13166
#define P_Queue_Clear 13167
#define P_PLC09_Alarm_Test_Flag 13168
#define P_PLC09_Test_Temp 13169
#define P_PLC01_STOP_Queue_Complete_Flag 13170
#define P_PMAC_All_Home_Cmd 13171
#define P_PMAC_All_Home_Status 13172
#define P_PMAC_Master_Following_Use_Flag 13173
#define PnP_Belt_Waring_Pos 13174
#define P_Old_X_PLC_Sync_Heart_Bit 13175
#define P_Stack_Heart_Bit_Sync_Flag 13176
#define P_Stack_Heart_Bit_Sunc_Complete_Bit 13177
#define P_Resetting_Init_Module_RTN 13178
#define P_PLC09_MNTR 13179
#define P_Unloder_PNP_Home_IL_Pos 13180
#define P_ECAT_Slave_Err_Bit 13181
#define P_MC_Power_Down_Flag 13182
#define P_Old_MC_Power_Down_Flag 13183
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
#define P_Modbus_Delay_Timer 13184
#define P_Modbus_Connect_Status 13185
#define P_Modbus_Reconnect_MNTR 13186
#define P_Ecat_Reconn_Chk_Lamp 13187
#define P_MC_Reconn_Chk_Lamp 13188
#define P_Cathode_1st_Vac_Set_Time 13189
#define P_Cathode_2nd_Vac_Set_Time 13190
#define P_Cathode_Align_Vac_Set_Time 13191
#define P_Cathode_Align_Blow_Set_Time 13192
#define P_Anode_1st_Vac_Set_Time 13193
#define P_Anode_2nd_Vac_Set_Time 13194
#define P_Sepa_Consume_Mode_Thickness_rate 13195
#define P_Sepa_Anode_Recipe_Count 13196
#define P_Sepa_Cathode_Recipe_Count 13197
#define P_Discharge_Cathode_Recipe_Count 13198
#define P_Discharge_Anode_Recipe_Count 13199
#define P_Suspend_Discharge_Cathode_Counter 13200
#define P_Suspend_Discharge_Anode_Counter 13201
#define P_Suspend_Discharge_Waiting_Flag 13202
#define P_Com_ARC_Sepa_Consume_Mode_Flag 13203
#define P_Com_EPC_Sepa_Consume_Mode_Flag 13204
#define P_Com_User_Sepa_Consume_Mode_Flag 13205
#define P_Com_Dry_Mode_Flag 13206
#define P_SM_Recipe_Value_Management 13207
#define P_Sepa_Mode_Recipe_Count 13208
#define P_Sepa_Mode_EPC_Recipe_Count 13209
#define P_ARC_End_Sepa_Recipe_Count 13210
#define P_Anode_Align_NG_Array 13211
#define P_Cathode_Align_NG_Array 13231
#define P_Anode_Surface_NG_Array 13251
#define P_Cathode_Surface_NG_Array 13271
#define P_Stack_NG_Array 13291
#define P_Cathode_Align_Continuous_NG_Stop_Select 13311
#define P_Anode_Align_Continuous_NG_Stop_Select 13312
#define P_Stack_Vision_NG_Enable 13313
#define P_Cathode_Surface_Continuous_NG_Stop_Select 13314
#define P_Anode_Surface_Continuous_NG_Stop_Select 13315
#define P_Anode_Trigger_IO_Test_Vision_PLC_Loop 13316
#define P_Anode_Trigger_IO_Test_Motion_Loop 13317
#define P_Cathode_Trigger_IO_Test_Vision_PLC_Loop 13318
#define P_Cathode_Trigger_IO_Test_Motion_Loop 13319
#define P_Stack_Trigger_IO_Test_Vision_PLC_Loop 13320
#define P_Stack_Trigger_IO_Test_Motion_Loop 13321
#define P_PLC12_Continuous_Buffer_Reset_Flag 13322
#define P_Continuous_Call_Align_OK_Flag 13323
#define P_Continuous_Call_Align_NG_Flag 13325
#define P_Continuous_Call_Align_TimeOut_Flag 13327
#define P_Continuous_Call_Surface_OK_Flag 13329
#define P_Continuous_Call_Surface_NG_Flag 13331
#define P_Continuous_Call_Surface_TimeOut_Flag 13333
#define P_Continuous_Call_Stack_Flag 13335
#define P_PLC12_Anode_Sheet_Pick_Up_Flag 13338
#define P_PLC12_Cathode_Sheet_Pick_Up_Flag 13339
#define P_Hold_Anode_Sheet_Pick_Up_Flag 13340
#define P_Hold_Cathode_Sheet_Pick_Up_Flag 13341
#define P_Sheet_Interface_Complete_Pos 13342
#define P_Anode_Sheet_Interface_Complete_Pos 13343
#define P_Cathode_Sheet_Interface_Complete_Pos 13344
#define P_Anode_2nd_TR_Maint_Check 13345
#define P_Cathode_2nd_TR_Maint_Check 13346
#define P_PLC12_Observser_MNTR 13347
#define P_PLC12_Vacuum_MNTR 13352
#define P_Vacuum_Check 13360
#define P_PLC12_Blow_MNTR 13368
#define P_Blow_Check 13376
#define P_PLC12_Vacuum_1st_Cathode_MNTR_Timer 13384
#define P_PLC12_Vacuum_2nd_Cathode_MNTR_Timer 13385
#define P_PLC12_Vacuum_NG_Cathode_MNTR_Timer 13386
#define P_PLC12_Vacuum_Align_Cathode_MNTR_Timer 13387
#define P_PLC12_Vacuum_1st_Anode_MNTR_Timer 13388
#define P_PLC12_Vacuum_2nd_Anode_MNTR_Timer 13389
#define P_PLC12_Vacuum_NG_Anode_MNTR_Timer 13390
#define P_PLC12_Vacuum_Align_Anode_MNTR_Timer 13391
#define P_PLC12_Vacuum_1st_Cathode_Set_Time 13392
#define P_PLC12_Vacuum_2nd_Cathode_Set_Time 13393
#define P_PLC12_Vacuum_NG_Cathode_Set_Time 13394
#define P_PLC12_Vacuum_Align_Cathode_Set_Time 13395
#define P_PLC12_Vacuum_1st_Anode_Set_Time 13396
#define P_PLC12_Vacuum_2nd_Anode_Set_Time 13397
#define P_PLC12_Vacuum_NG_Anode_Set_Time 13398
#define P_PLC12_Vacuum_Align_Anode_Set_Time 13399
#define P_PLC12_Vacuum_1st_Cathode_Take_Time 13400
#define P_PLC12_Vacuum_2nd_Cathode_Take_Time 13405
#define P_PLC12_Vacuum_NG_Cathode_Take_Time 13410
#define P_PLC12_Vacuum_Align_Cathode_Take_Time 13415
#define P_PLC12_Vacuum_1st_Anode_Take_Time 13420
#define P_PLC12_Vacuum_2nd_Anode_Take_Time 13425
#define P_PLC12_Vacuum_NG_Anode_Take_Time 13430
#define P_PLC12_Vacuum_Align_Anode_Take_Time 13435
#define P_PLC12_Blow_1st_Cathode_MNTR_Timer 13440
#define P_PLC12_Blow_2nd_Cathode_MNTR_Timer 13441
#define P_PLC12_Blow_NG_Cathode_MNTR_Timer 13442
#define P_PLC12_Blow_Align_Cathode_MNTR_Timer 13443
#define P_PLC12_Blow_1st_Anode_MNTR_Timer 13444
#define P_PLC12_Blow_2nd_Anode_MNTR_Timer 13445
#define P_PLC12_Blow_NG_Anode_MNTR_Timer 13446
#define P_PLC12_Blow_Align_Anode_MNTR_Timer 13447
#define P_PLC12_Blow_1st_Cathode_Set_Time 13448
#define P_PLC12_Blow_2nd_Cathode_Set_Time 13449
#define P_PLC12_Blow_NG_Cathode_Set_Time 13450
#define P_PLC12_Blow_Align_Cathode_Set_Time 13451
#define P_PLC12_Blow_1st_Anode_Set_Time 13452
#define P_PLC12_Blow_2nd_Anode_Set_Time 13453
#define P_PLC12_Blow_NG_Anode_Set_Time 13454
#define P_PLC12_Blow_Align_Anode_Set_Time 13455
#define P_PLC12_Blow_1st_Cathode_Take_Time 13456
#define P_PLC12_Blow_2nd_Cathode_Take_Time 13461
#define P_PLC12_Blow_NG_Cathode_Take_Time 13466
#define P_PLC12_Blow_Align_Cathode_Take_Time 13471
#define P_PLC12_Blow_1st_Anode_Take_Time 13476
#define P_PLC12_Blow_2nd_Anode_Take_Time 13481
#define P_PLC12_Blow_NG_Anode_Take_Time 13486
#define P_PLC12_Blow_Align_Anode_Take_Time 13491
#define P_Vacuum_Reentry_Bit 13496
#define P_Blow_Reentry_Bit 13497
#define P_Status_arry 13498
#define P_Queue_arry 13518
#define P_Step_arry 13538
#define P_Index_arry 13558
#define P_top 13578
#define P_Queue_stack_top 13579
#define P_Step_stack_top 13580
#define P_Index_stack_top 13581
#define P_Status_stack_top 13582
#define NN_Step 13583
#define NN_Index 13584
#define P_PLC_Observser_MNTR 13585
#define P_PLC12_Frist 13590
#define P_SM_Auto_Run_Status_Management 13591
#define P_SM_Status_Main_Memory_Management 13592
#define P_SM_Cell_Memory_Management 13593
#define P_Test_Vacuum_Timer 13594
#define P_Test_Blow_Timer 13602
#define P_Vac_Test_Set_Time 13610
#define P_Blow_Test_Set_Time 13618
#define P_PLC12_Vacuum_Unit_Data 13626
#define P_PLC12_Blow_Unit_Data 13627
#define P_Stack_Algorithme_Cmd_Event_Status 13628
#define P_PLC12_vacuum_Event_Status 13629
#define P_PLC12_Blow_Event_status 13630
#define P_PLC12_vacuum_DIO_Observer_Status 13631
#define P_PLC12_Blow_DIO_Observer_Status 13632
#define P_Resetting_Vacuum_MNTR_State_Machine 13633
#define P_Heart_Bit_Time 13634
#define P_Dancer_Angle_Alarm_Timer_Flag 13635
#define P_Dancer_Angle_Alarm_Check_Timer 13636
#define P_BTN_LED_LAMP 13637
#define P_Old_BTN_LED_LAMP 13638
#define P_PLC_TO_PMAC_Work_Confirm_Operation_Cnt 13639
#define P_VISION_TO_PMAC_Work_Confirm_Operation_Ack_Cnt 13640
#define P_Ca_AT_Retry_Cal_Move_Complete 13641
#define P_An_AT_Retry_Cal_Move_Complete 13642
#define P_Ca_AT_Retry_Cal_Cnt 13643
#define P_An_AT_Retry_Cal_Cnt 13644
#define P_Ca_AT_Retry_Cal_Complete 13645
#define P_An_AT_Retry_Cal_Complete 13646
#define P_An_AT_Retry_Cal_Pass 13647
#define P_Ca_AT_Retry_Cal_Pass 13648
#define P_Ca_Picker_T_Turn_Cnt_Flag 13649
#define P_Ca_Picker_T_Turn_Cnt 13650
#define P_Ca_Picker_T_Home_Type 13651
#define P_An_Picker_T_Turn_Cnt_Flag 13652
#define P_An_Picker_T_Turn_Cnt 13653
#define P_An_Picker_T_Home_Type 13654
#define P_Flag_Vac_Status_Initialize 13655
#define P_SM_Vac_Initialize 13656
#define P_Flag_Anode_1st_Vac_OFF 13657
#define P_Flag_Anode_AT_Vac_OFF 13658
#define P_Flag_Anode_2nd_Vac_OFF 13659
#define P_Flag_Anode_NG_Vac_OFF 13660
#define P_Flag_Cathode_1st_Vac_OFF 13661
#define P_Flag_Cathode_AT_Vac_OFF 13662
#define P_Flag_Cathode_2nd_Vac_OFF 13663
#define P_Flag_Cathode_NG_Vac_OFF 13664
#define P_Flag_Anode_1st_Vac_Initial_Alarm 13665
#define P_Flag_Anode_AT_Vac_Initial_Alarm 13666
#define P_Flag_Anode_2nd_Vac_Initial_Alarm 13667
#define P_Flag_Anode_NG_Vac_Initial_Alarm 13668
#define P_Flag_Cathode_1st_Vac_Initial_Alarm 13669
#define P_Flag_Cathode_AT_Vac_Initial_Alarm 13670
#define P_Flag_Cathode_2nd_Vac_Initial_Alarm 13671
#define P_Flag_Cathode_NG_Vac_Initial_Alarm 13672
#define P_Middle_Discharge_Ignore_Total_Count 13673
#define P_Middle_Discharge_Ignore_Stack_Count 13674
#define P_Middle_Discharge_Ignore_ON_Signal 13675
#define P_Middle_Discharge_Ignore_OFF_Signal 13676
#define P_Middle_Discharge_Ignore_Cell_Count 13677
#define P_ARC_Middle_Discharge_Ignore_Vision_Check 13678
#define P_ARC_Middle_Discharge_Ignore_ON_Flag 13679
#define P_Middle_Discharge_Ignore_User_Sepa_Mode_Check 13680
#define P_Zero_Angle 13681
#define P_Zero_Length 13706
#define P_Homeoffset_Change_Flag 13731
#define P_Cal_Distance 13756
#define P_Cal_Denominator 13761
#define P_Cal_Numerator 13766
#define P_Cal_Dif_Deg 13771
#define P_Vac_Door_Open_Clear 13776
#define M_Y_Vacuum_Popup_On_Request 8353
#define M_X_Vacuum_Popup_On_Request_Ack 8354
#define M_Touchprobefunction 8355
#define M_Touchprobestatus 8404
#define P_Flag_Sepa_Stack_Mode_CHK 13789
#define P_Read_Timer_S 13790
#define P_Write_Timer_S 13799
#define P_Interval_Read_S 13808
#define P_Interval_Write_S 13817
#define P_UI_Jog_Vel_M 13826
#define P_Initialize_Read_Excom_Variables_Flag 13876
#define P_Old_X_Read_Count_S 13877
#define P_Cathode_Clamp_MC_Cylinder_Count 13886
#define P_Cathode_Clamp_OP_Cylinder_Count 13887
#define P_Anode_Clamp_MC_Cylinder_Count 13888
#define P_Anode_Clamp_OP_Cylinder_Count 13889
#define P_Cathode_1ST_TR_Cylinder_Count 8003
#define P_Anode_1ST_TR_Cylinder_Count 8004
#define P_BTN_Cathode_Clamp_inside_Machine_Cylinder_Count_Clear 13890
#define P_BTN_Cathode_Clamp_Middle_Cylinder_Count_Clear 13891
#define P_BTN_Cathode_Clamp_outside_Machine_Cylinder_Count_Clear 13892
#define P_BTN_Anode_Clamp_inside_Machine_Cylinder_Count_Clear 13893
#define P_BTN_Anode_Clamp_Middle_Cylinder_Count_Clear 13894
#define P_BTN_Anode_Clamp_outside_Machine_Cylinder_Count_Clear 13895
#define P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear 13896
#define P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear_Old 13897
#define P_BTN_Anode_1ST_TR_Cylinder_Count_Clear 13898
#define P_BTN_Anode_1ST_TR_Cylinder_Count_Clear_Old 13899
#define P_X_BTN_Manual_1 13900
#define P_X_BTN_Manual_2 14020
#define P_X_BTN_Manual_3 14140
#define P_Home_InterLock_M 14260
#define P_Status_BTN_Manual_1 14310
#define P_Status_BTN_Manual_2 14430
#define P_Status_BTN_Manual_Interlock_1 14550
#define P_Status_BTN_Manual_Interlock_2 14670
#define P_Status_BTN_Manual_Interlock_3 14790
#define P_Mode_Run_Enable_Flag 14910
#define P_RECIPE_PLC27_Manual_Interval 14915
#define P_RECIPE_PLC27_Auto_Interval 14916
#define P_MNTR_PLC4_Vision_Result 14917
#define P_PNP_Vac_Mode_Run_Enable_Flag 15118
#define P_Recipe_Speed_Value 15123
#define P_Slave6_Target_X_For_Cell_Out 15124
#define P_HCK_Step_MNTR 15125
#define P_Axis_Home_Pos 15175
#define P_Axis_Ready_Pos 15225
#define P_PMAC_Homing_CHK 15275
#define P_Poistion_error 15325
#define P_Home_Command 15326
#define P_Recipe_Count_Num 15376
#define L_Motor_Status_Update_Interval 15377
#define L_Motor_Recipe_Update_Interval 15378
#define P_UI_Servo_On_Off 15379
#define P_Old_BTN_Servo_On_Off_M 15380
#define P_Peak_Load_Ratio_M 15413
#define P_Chk_Current_Jog_Sel 15446
#define P_Jog_Sel_Count 15479
#define P_Recipe_POS_Interock_Num_Bit 15480
#define P_Recipe_VEL 15513
#define P_Recipe_POS 15524
#define P_BTN_Servo_On_Off_M 15535
#define P_BTN_Home_M 15568
#define P_BTN_Jog_Stop_M 15601
#define P_BTN_Recipe_POS_RUN_M 15634
#define P_Recipe_POS_Flag_M 15667
#define P_BTN_Jog_INC_M 15700
#define P_BTN_JOG_ABS_M 15733
#define P_User_Jog_Distance 15766
#define P_Unit_Command 15767
#define P_Unit_State_Machine 15867
#define P_Status_BTN_Manual_3 15967
#define P_Chk_Current_BTN_Sel 16067
#define P_BTN_Sel_Count 16117
#define P_PC_BTN_No 16118
#define P_BTN_Interlock_Update_Interval 16119
#define P_Align_Table_Status_Update_Interval 16120
#define P_Jelly_Roll_Total_Count_Old 16121
#define P_Old_m4120 16122
#define P_Old_m4121 16123
#define P_Old_m4122 16124
#define P_Old_m4123 16125
#define P_Linear_Encoder_Pos_Check_Flag 16126
#define P_Linear_Encoder_Pos 16131
#define P_Status_Linear_Encoder_HomeZero 16136
#define P_Command_Linear_Encoder_HomeZero 16141
#define P_Flag_Linear_Enc_Homezero_Complete_M17 16146
#define P_Flag_Linear_Enc_Homezero_Complete_M18 16147
#define P_Flag_Linear_Enc_Homezero_Complete_M19 16148
#define P_Flag_Linear_Enc_Homezero_Complete_M20 16149
#define P_CMD_Linear_ENC_Homezero_M17 16150
#define P_CMD_Linear_ENC_Homezero_M18 16151
#define P_CMD_Linear_ENC_Homezero_M19 16152
#define P_CMD_Linear_ENC_Homezero_M20 16153
#define P_OLD_Home_Offset 16154
#define P_RECIPE_PLC27_Alltime_Interval 16184
#define P_Manual_Memory_Tower_Timer 16185
#define P_Memory_Tower_Interval 16186
#define P_PLC_14_Status_Cycle_Stop_Flag 16187
#define P_Cathode_AlignTable_Cleaning_Pos_Status_Machine 16188
#define P_Anode_AlignTable_Cleaning_Pos_Status_Machine 16189
#define P_Status_Cathode_AlignTable_Cleaning_Pos 16190
#define P_Status_Anode_AlignTable_Cleaning_Pos 16191
#define P_CMD_Cathode_AlignTable_Cleaning_Pos 16192
#define P_CMD_Anode_AlignTable_Cleaning_Pos 16193
#define P_Cathode_2nd_pnp_Cleaning_Mode_Pos 16194
#define P_Anode_2nd_pnp_Cleaning_Mode_Pos 16195
#define P_Interlock_Test 16196
#define P_PNP_Picker_T_Pos 16197
#define P_NG_PNP_Pos 16198
#define M_Old_X_BTN_Machine_READY 16199
#define M_Old_X_BTN_Machine_START 16200
#define M_Old_X_BTN_Machine_STOP 16201
#define M_Old_X_BTN_Machine_RESET 16202
#define M_Old_X_BTN_Machine_MODE 16203
#define P_BTN_Motor_Pos_Check_RTN 16204
#define P_BTN_Memory_Tower_Check_Bit 16205
#define P_PMAC_Status_IDLE_Motor_Not_Pos 16206
#define P_PMAC_Status_IDLE_Motor_Pos 16207
#define P_BTN_Motor_Pos_Check_Monitor 16208
#define P_PackML_Auto_Stop_Bit 16209
#define P_BTN_IDLE_Motor_Not_Pos 16210
#define M_X_BTN_Machine_Mode 16211
#define M_Old_X_BTN_Machine_Mode 16212
#define P_Lamp_Blinking_Timer 16213
#define P_BTN_Ready_Lamp 16214
#define P_BTN_Start_Lamp 16215
#define P_BTN_Stop_Lamp 16216
#define P_ARC_Name_Plate_Passive_Status 16217
#define P_ARC_Passive_Status 16218
#define P_NP_Spool_Number 16219
#define P_ARC_Page_On 16220
#define P_ARC_NP_Upper_Timer 16221
#define P_ARC_Upper_Ready 16222
#define P_ARC_NP_Upper_3rd_Step_Toggle_Variable 16223
#define P_ARC_NP_Upper_7th_Step_Variable 16224
#define P_ARC_NP_Upper_7th_Step_Edge_Variable 16225
#define P_ARC_NP_Upper_Rot_ReRot_Blinking_Bit 16226
#define P_ARC_NP_Lower_Timer 16227
#define P_ARC_Lower_Ready 16228
#define P_ARC_NP_Lower_3rd_Step_Toggle_Variable 16229
#define P_ARC_NP_Lower_7th_Step_Variable 16230
#define P_ARC_NP_Lower_7th_Step_Edge_Variable 16231
#define P_ARC_NP_Lower_Rot_ReRot_Blinking_Bit 16232
#define M_Old_X_ARC_NP_Ready 16233
#define M_Old_X_ARC_NP_Unwinder_Rotation 16234
#define M_Old_X_ARC_NP_Unwinder_Re_Rotation 16235
#define P_Status_Clear_Flag 16236
#define P_Status_Clear_RTN 16237
#define P_MSA_BTN_On 16238
#define P_Align_Take_Off_BTN_ON 16239
#define P_ARC_NP_Upper_Ready_Check_Bit 16240
#define P_ARC_NP_Lower_Ready_Check_Bit 16241
#define P_PLC13_Cycle_Stop_Return_Array 16242
#define P_Stopping_CycleStop_Status 16342
#define P_Stopping_CycleStop_Seq_Index 16343
#define P_Stopping_CycleStop_Precondition_Seq_Index 16344
#define P_Stopping_CycleStop_Module_Status 16345
#define P_Stopping_CycleStop_Cmd 16346
#define P_Stopping_CycleStop_State_Machine 16347
#define P_Stopping_CycleStop_Act_State_Machine 16348
#define P_Module_Cycle_Stop_Act_State_Machine_Array 16368
#define P_Module_Cycle_Stop_Act_Complete_Bit 16388
#define P_Module_Cycle_Stop_Act_Command_Array 16408
#define P_OLD_Module_Cycle_Stop_Act_Command_Array 16428
#define P_Buffer_Seqdata_CycleStop_Array 16448
#define P_Final_Roll_Cathode_Pos_Status 16468
#define P_Sheet_Paper_FWD_Pos_Status 16469
#define P_Final_Roll_Vision_Pos_Status 16470
#define P_Cathode_Clamp_ON_Status 16471
#define P_Anode_Clamp_ON_Status 16472
#define P_Anode_Clamp_OFF_Status 16473
#define P_Partition_Up_Flag 16474
#define P_Partition_Down_Flag 16475
#define P_Partition_Avoid_Flag 16476
#define P_Partition_Avoid_Z_Speed 16477
#define P_Partition_Avoid_X_Speed 16478
#define P_Partition_Avoid_T_Speed 16479
#define P_Partition_Avoid_2nd_T_Pos 16480
#define P_Partition_Step_Flag 16481
#define P_Partition_1st_Avoid_Offset 16482
#define P_Partition_Picker_Avoid_Offset 16483
#define P_Partition_Avoid_Check 16484
#define P_Tact_Time_Timer 16485
#define P_Tack_Time_Save_Time 16525
#define P_Anode_NG_PNP_Tact_Time_Start 16565
#define P_Cathode_NG_PNP_Tact_Time_Start 16566
#define P_Anode_NG_PNP_Tact_Time_End 16567
#define P_Cathode_NG_PNP_Tact_Time_End 16568
#define P_Tact_Time_Stack_Array 16569
#define P_Tact_Time_Discharge_Array 16579
#define P_Tact_Time_1st_Unloader_Array 16589
#define P_Tact_Time_Sepa_ARC_Array 16599
#define P_Tact_Time_Final_Roll_Array 16609
#define P_Tact_Time_Cathode_1st_PNP_Array 16619
#define P_Tact_Time_Cathode_Align_Array 16629
#define P_Tact_Time_Cathode_2nd_PNP_Array 16639
#define P_Tact_Time_Cathode_Clamp_Array 16649
#define P_Tact_Time_Anode_1st_PNP_Array 16659
#define P_Tact_Time_Anode_Align_Array 16669
#define P_Tact_Time_Anode_2nd_PNP_Array 16679
#define P_Tact_Time_Anode_Clamp_Array 16689
#define P_Tact_Time_Cathode_1st_PNP_Vac_Array 16699
#define P_Tact_Time_Cathode_Align_PNP_Vac_Array 16709
#define P_Tact_Time_Cathode_2nd_PNP_Vac_Array 16719
#define P_Tact_Time_Anode_1st_PNP_Vac_Array 16729
#define P_Tact_Time_Anode_Align_PNP_Vac_Array 16739
#define P_Tact_Time_Anode_2nd_PNP_Vac_Array 16749
#define P_Tact_Time_Final_Roller_Clamp 16759
#define P_Tact_Time_Final_Roller_Unclamp 16760
#define P_Tact_Time_Stack_Table_Down 16761
#define P_Tact_Time_Stack_Table_Up 16762
#define P_Tact_Time_Sepa_Cutting_Down 16763
#define P_Tact_Time_Sepa_Cutting_Up 16764
#define P_Tact_Time_ARC_Upper_Plate_Up 16765
#define P_Tact_Time_ARC_Upper_Plate_Down 16766
#define P_Tact_Time_ARC_Upper_Tilting_On 16767
#define P_Tact_Time_ARC_Upper_Tilting_Off 16768
#define P_Tact_Time_ARC_Upper_Cutter_Fwd 16769
#define P_Tact_Time_ARC_Upper_Cutter_Bwd 16770
#define P_Tact_Time_ARC_Upper_Clamp_On 16771
#define P_Tact_Time_ARC_Upper_Clamp_Off 16772
#define P_Tact_Time_ARC_Lower_Plate_Up 16773
#define P_Tact_Time_ARC_Lower_Plate_Down 16774
#define P_Tact_Time_ARC_Lower_Tilting_On 16775
#define P_Tact_Time_ARC_Lower_Tilting_Off 16776
#define P_Tact_Time_ARC_Lower_Cutter_Fwd 16777
#define P_Tact_Time_ARC_Lower_Cutter_Bwd 16778
#define P_Tact_Time_ARC_Lower_Clamp_On 16779
#define P_Tact_Time_ARC_Lower_Clamp_Off 16780
#define P_Tact_Time_Save_Final_Roller_Clamp_Time 16781
#define P_Tact_Time_Save_Final_Roller_Unclamp_Time 16782
#define P_Tact_Time_Save_Stack_Table_Down_Time 16783
#define P_Tact_Time_Save_Stack_Table_Up_Time 16784
#define P_Tact_Time_Save_Sepa_Cutting_Down_Time 16785
#define P_Tact_Time_Save_Sepa_Cutting_Up_Time 16786
#define P_Tact_Time_Save_ARC_Upper_Plate_Up_Time 16787
#define P_Tact_Time_Save_ARC_Upper_Plate_Down_Time 16788
#define P_Tact_Time_Save_ARC_Upper_Tilting_On_Time 16789
#define P_Tact_Time_Save_ARC_Upper_Tilting_Off_Time 16790
#define P_Tact_Time_Save_ARC_Upper_Cutter_Fwd_Time 16791
#define P_Tact_Time_Save_ARC_Upper_Cutter_Bwd_Time 16792
#define P_Tact_Time_Save_ARC_Upper_Clamp_On_Time 16793
#define P_Tact_Time_Save_ARC_Upper_Clamp_Off_Time 16794
#define P_Tact_Time_Save_ARC_Lower_Plate_Up_Time 16795
#define P_Tact_Time_Save_ARC_Lower_Plate_Down_Time 16796
#define P_Tact_Time_Save_ARC_Lower_Tilting_On_Time 16797
#define P_Tact_Time_Save_ARC_Lower_Tilting_Off_Time 16798
#define P_Tact_Time_Save_ARC_Lower_Cutter_Fwd_Time 16799
#define P_Tact_Time_Save_ARC_Lower_Cutter_Bwd_Time 16800
#define P_Tact_Time_Save_ARC_Lower_Clamp_On_Time 16801
#define P_Tact_Time_Save_ARC_Lower_Clamp_Off_Time 16802
#define P_Tact_Time_Check 16803
#define P_Old_Tact_Time_Check 16843
#define P_Tact_Time_Head_Address 16883
#define P_Tact_Time_Array_Init 16923
#define P_Last_Run_To_Discharge_Tact_Timer 16924
#define P_Last_Run_To_Discharge_Tact_Time 16925
#define P_Master_Trigger_Sync_Tact_Timer 16926
#define P_Master_Trigger_Sync_Tact_Time 16927
#define P_Vision_First_Sepa_Stack_Align_OK_PMAC_Flag 16928
#define P_PLC18_EPC_Retry_Mode_Time_Use_Flag 16929
#define P_PLC18_Vision_EPC_Correction_Request_Old 16930
#define P_PLC18_EPC_Moving_Flag 16931
#define P_PLC18_EPC_Moving_Status 16932
#define P_PLC18_EPC_Move_State_Machine 16933
#define P_PLC18_EPC_Move_Status 16934
#define P_PLC18_EPC_inspection_Time 16935
#define P_EPC_Insp_Time 16936
#define P_EPC_Correction_Time 16937
#define P_TEST_Max_EPC_Sensor_Value_um 16938
#define P_PLC18_EPC_Moving_Timer 16939
#define P_EPC_MNTR_VAR 16940
#define P_EPC_Axis_Target_Y 16950
#define P_Com_After_Sepa_Mode_Status 16951
#define P_PLC18_PLC_to_PMAC_Correction_Value 16952
#define P_PLC_EPC_Status 16953
#define P_EPC_Retry_Over_Alarm_Flag 16954
#define P_ARC_EPC_Vision_Value_Apply_Bit 16955
#define P_ARC_EPC_Vision_Value_Apply_Flag 16956
#define P_ARC_EPC_Vision_Value_Apply_State_Machine 16957
#define P_ARC_EPC_Vision_Value_Apply_Timer 16958
#define P_ARC_EPC_Vision_Value_Apply_Time 16959
#define P_AH_Home_Status 16960
#define P_Resetting_All_Home_Command 16961
#define P_Homing_Alarm_Time 16962
#define P_Home_Check_Arry 16963
#define P_All_Home_Stop_Cmd 17013
#define P_Home_First_Move 17014
#define P_PWM_Phasing_Start 17015
#define P_PWM_Status 17020
#define P_PWM_State_Machine 17025
#define P_AH_Seq_arr 17030
#define P_DD_M_Home_ABS_Pos 17045
#define P_AH_Indvi_rtn 17050
#define P_DD_M_Home_Pos_Flag 17101
#define P_WAIT_INDEX 17102
#define P_Home_Check_Arry1 17103
#define P_FR_Cmd_Check_Flag 17153
#define M_Ecat_Motor_State 8453
#define P_PV_Separator_Dancer_Pressure 17154
#define P_PV_Cathode_Clamp_Pressure 17155
#define P_PV_Anoode_Clamp_Pressure 17156
#define P_PV_Cathode_Final_Roller_X_Axis 17157
#define P_PV_Anode_Final_Roller_X_Axis 17158
#define P_PV_Cathode_Clamp_ON_Y1_Axis_Pos 17159
#define P_PV_Cathode_Clamp_ON_Y2_Axis_Pos 17160
#define P_PV_Cathode_Clamp_ON_Z1_Axis_Pos 17161
#define P_PV_Cathode_Clamp_ON_Z2_Axis_Pos 17162
#define P_PV_Anode_Clamp_ON_Y1_Axis_Pos 17163
#define P_PV_Anode_Clamp_ON_Y2_Axis_Pos 17164
#define P_PV_Anode_Clamp_ON_Z1_Axis_Pos 17165
#define P_PV_Anode_Clamp_ON_Z2_Axis_Pos 17166
#define P_PV_Cathode_2th_AT_T_Axis_Pos 17167
#define P_PV_Cathode_2th_ST_T_Axis_Pos 17168
#define P_PV_Cathode_2th_AT_Z_Axis_Pos 17169
#define P_PV_Cathode_2th_ST_Z_Axis_Pos 17170
#define P_PV_Anode_2th_AT_T_Axis_Pos 17171
#define P_PV_Anode_2th_ST_T_Axis_Pos 17172
#define P_PV_Anode_2th_AT_Z_Axis_Pos 17173
#define P_PV_Anode_2th_ST_Z_Axis_Pos 17174
#define P_PV_Cathode_1th_Ready_T_Axis_Pos 17175
#define P_PV_Cathode_1th_CV_T_Axis_Pos 17176
#define P_PV_Cathode_1th_AT_T_Axis_Pos 17177
#define P_PV_Cathode_1th_Ready_Z_Axis_Pos 17178
#define P_PV_Cathode_1th_CV_Z_Axis_Pos 17179
#define P_PV_Cathode_1th_AT_Z_Axis_Pos 17180
#define P_PV_Anode_1th_Ready_T_Axis_Pos 17181
#define P_PV_Anode_1th_CV_T_Axis_Pos 17182
#define P_PV_Anode_1th_AT_T_Axis_Pos 17183
#define P_PV_Anode_1th_Ready_Z_Axis_Pos 17184
#define P_PV_Anode_1th_CV_Z_Axis_Pos 17185
#define P_PV_Anode_1th_AT_Z_Axis_Pos 17186
#define P_PV_Cathode_NG_AT_T_Axis_Pos 17187
#define P_PV_Cathode_NG_Box_T_Axis_Pos 17188
#define P_PV_Anode_NG_AT_T_Axis_Pos 17189
#define P_PV_Anode_NG_Box_T_Axis_Pos 17190
#define P_SemiRun_Separator_Dancer_Pressure_Flag 17191
#define P_SemiRun_Cathode_Clamp_Pressure_Flag 17192
#define P_SemiRun_Anoode_Clamp_Pressure_Flag 17193
#define P_SemiRun_Cathode_Final_Roller_X_Axis_Flag 17194
#define P_SemiRun_Anode_Final_Roller_X_Axis_Flag 17195
#define P_SemiRun_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag 17196
#define P_SemiRun_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag 17197
#define P_SemiRun_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag 17198
#define P_SemiRun_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag 17199
#define P_SemiRun_Cathode_2th_AT_T_Axis_Pos_Flag 17200
#define P_SemiRun_Cathode_2th_ST_T_Axis_Pos_Flag 17201
#define P_SemiRun_Cathode_2th_AT_Z_Axis_Pos_Flag 17202
#define P_SemiRun_Cathode_2th_ST_Z_Axis_Pos_Flag 17203
#define P_SemiRun_Anode_2th_AT_T_Axis_Pos_Flag 17204
#define P_SemiRun_Anode_2th_ST_T_Axis_Pos_Flag 17205
#define P_SemiRun_Anode_2th_AT_Z_Axis_Pos_Flag 17206
#define P_SemiRun_Anode_2th_ST_Z_Axis_Pos_Flag 17207
#define P_SemiRun_Cathode_1th_Ready_T_Axis_Pos_Flag 17208
#define P_SemiRun_Cathode_1th_CV_T_Axis_Pos_Flag 17209
#define P_SemiRun_Cathode_1th_AT_T_Axis_Pos_Flag 17210
#define P_SemiRun_Cathode_1th_Ready_Z_Axis_Pos_Flag 17211
#define P_SemiRun_Cathode_1th_CV_Z_Axis_Pos_Flag 17212
#define P_SemiRun_Cathode_1th_AT_Z_Axis_Pos_Flag 17213
#define P_SemiRun_Anode_1th_Ready_T_Axis_Pos_Flag 17214
#define P_SemiRun_Anode_1th_CV_T_Axis_Pos_Flag 17215
#define P_SemiRun_Anode_1th_AT_T_Axis_Pos_Flag 17216
#define P_SemiRun_Anode_1th_Ready_Z_Axis_Pos_Flag 17217
#define P_SemiRun_Anode_1th_CV_Z_Axis_Pos_Flag 17218
#define P_SemiRun_Anode_1th_AT_Z_Axis_Pos_Flag 17219
#define P_SemiRun_Cathode_NG_AT_T_Axis_Pos_Flag 17220
#define P_SemiRun_Cathode_NG_Box_T_Axis_Pos_Flag 17221
#define P_SemiRun_Anode_NG_AT_T_Axis_Pos_Flag 17222
#define P_SemiRun_Anode_NG_Box_T_Axis_Pos_Flag 17223
#define P_Motion_Separator_Dancer_Pressure_Flag 17224
#define P_Motion_Cathode_Clamp_Pressure_Flag 17225
#define P_Motion_Anoode_Clamp_Pressure_Flag 17226
#define P_Motion_Cathode_Final_Roller_X_Axis_Flag 17227
#define P_Motion_Anode_Final_Roller_X_Axis_Flag 17228
#define P_Motion_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag 17229
#define P_Motion_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag 17230
#define P_Motion_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag 17231
#define P_Motion_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag 17232
#define P_Motion_Cathode_2th_AT_T_Axis_Pos_Flag 17233
#define P_Motion_Cathode_2th_ST_T_Axis_Pos_Flag 17234
#define P_Motion_Cathode_2th_AT_Z_Axis_Pos_Flag 17235
#define P_Motion_Cathode_2th_ST_Z_Axis_Pos_Flag 17236
#define P_Motion_Anode_2th_AT_T_Axis_Pos_Flag 17237
#define P_Motion_Anode_2th_ST_T_Axis_Pos_Flag 17238
#define P_Motion_Anode_2th_AT_Z_Axis_Pos_Flag 17239
#define P_Motion_Anode_2th_ST_Z_Axis_Pos_Flag 17240
#define P_Motion_Cathode_1th_Ready_T_Axis_Pos_Flag 17241
#define P_Motion_Cathode_1th_CV_T_Axis_Pos_Flag 17242
#define P_Motion_Cathode_1th_AT_T_Axis_Pos_Flag 17243
#define P_Motion_Cathode_1th_Ready_Z_Axis_Pos_Flag 17244
#define P_Motion_Cathode_1th_CV_Z_Axis_Pos_Flag 17245
#define P_Motion_Cathode_1th_AT_Z_Axis_Pos_Flag 17246
#define P_Motion_Anode_1th_Ready_T_Axis_Pos_Flag 17247
#define P_Motion_Anode_1th_CV_T_Axis_Pos_Flag 17248
#define P_Motion_Anode_1th_AT_T_Axis_Pos_Flag 17249
#define P_Motion_Anode_1th_Ready_Z_Axis_Pos_Flag 17250
#define P_Motion_Anode_1th_CV_Z_Axis_Pos_Flag 17251
#define P_Motion_Anode_1th_AT_Z_Axis_Pos_Flag 17252
#define P_Motion_Cathode_NG_AT_T_Axis_Pos_Flag 17253
#define P_Motion_Cathode_NG_Box_T_Axis_Pos_Flag 17254
#define P_Motion_Anode_NG_AT_T_Axis_Pos_Flag 17255
#define P_Motion_Anode_NG_Box_T_Axis_Pos_Flag 17256
#define P_Cathode_1PNP_Sacle_Value 17257
#define P_Cathode_2PNP_Sacle_Value 17258
#define P_Anode_1PNP_Sacle_Value 17259
#define P_Anode_2PNP_Sacle_Value 17260
#define P_PLC01_SemiRun_PV_Flag 17261
#define P_PV_EPC_Index 17262
#define P_PV_EPC_Camera_Pos 17263
#define P_BTN_MSA_Total_Value 17278
#define P_Vision_Align_Trigger_Timer 17279
#define P_Vision_Stack_Trigger_Timer 17280
#define P_MSA_Chk_Pos_Timer 17281
#define P_MSA_Chk_Pos_Time 17282
#define P_VISION_MSA_Status_Prod_Sequence 17283
#define P_VISION_MSA_Seq_Index 17303
#define P_VISION_MSA_Anode_Align_Bit_Pos 17304
#define P_VISION_MSA_Seq_PreCondition_Index 17305
#define P_MSA_CycleStop_Point_Check_Complete_RTN 17306
#define P_MSA_Cmd 17307
#define P_Current_Anode_Align_MSA_Run_Count 17312
#define P_Current_Cathode_Align_MSA_Run_Count 17313
#define P_Current_Anode_Stack_MSA_Run_Count 17314
#define P_Current_Cathode_Stack_MSA_Run_Count 17315
#define P_VISION_MSA_Align_Count_Chk_Flag 17316
#define P_VISION_MSA_Stack_Count_Chk_Flag 17317
#define P_VISION_MSA_pre_InterLock_Cmd 17318
#define P_VISION_MSA_pre_InterLock_Status 17319
#define P_VISION_MSA_pre_InterLock_Check_Assy_Bit 17320
#define P_VISION_MSA_pre_InterLock_Assy_Bit_Pos 17321
#define P_Vision_MSA_Interlock_Status 17322
#define P_VISION_MSA_MODE 17323
#define P_VISION_MSA_Status_Flag 17324
#define P_VISION_MSA_State_Machine 17325
#define P_VISION_MSA_Status 17326
#define P_VISION_MSA_Seq_Command_Occurs 17327
#define P_Vision_Align_Trigger_Time 17328
#define P_Anode_Align_MSA_Motion_Check 17329
#define P_Cathode_Align_MSA_Motion_Check 17330
#define P_Anode_Stack_MSA_Motion_Check 17331
#define P_Cathode_Stack_MSA_Motion_Check 17332
#define P_Anode_Align_MSA_Motion_ProgActive_Complete 17333
#define P_Cathode_Align_MSA_Motion_ProgActive_Complete 17334
#define P_Anode_Stack_MSA_Motion_ProgActive_Complete 17335
#define P_Cathode_Stack_MSA_Motion_ProgActive_Complete 17336
#define P_BTN_Align_Off_Total_Value 17337
#define P_Align_Take_Off_Cmd 17338
#define P_Align_Take_Off_Status 17341
#define P_Align_Take_Off_Mode 17342
#define P_Align_Take_Off_Status_Flag 17343
#define P_Align_Take_Off_State_Machine 17344
#define P_Align_Take_Off_Chk_Pos_Timer 17345
#define P_Align_Take_Off_Motor_Check_Complete 17346
#define P_Align_Take_Off_Speed_Return_Complete 17347
#define P_Align_Take_Off_Interlock_Status 17348
#define P_Align_Take_Off_pre_InterLock_Cmd 17349
#define P_Align_Take_Off_pre_InterLock_Status 17350
#define P_Align_Take_Off_pre_InterLock_Check_Assy_Bit 17351
#define P_Align_Take_Off_pre_InterLock_Assy_Bit_Pos 17352
#define P_Align_Take_Off_Seq_Index 17353
#define P_Align_Take_Off_Seq_PreCondition_Index 17354
#define P_Align_Take_Off_Status_Prod_Sequence 17355
#define P_Align_Take_Off_Stop_Signal 17375
#define P_Vision_Cal_Reset_Count 17376
#define P_2nd_PNP_Cleaning_Mode_Cmd 17377
#define P_2nd_PNP_Cleaning_Mode_Status 17378
#define P_2nd_PNP_Cleaning_Mode_Z_Jog_Speed 17379
#define P_2nd_PNP_Cleaning_Mode_X_Jog_Speed 17380
#define P_2nd_PNP_Cleaning_Mode_T_Jog_Speed 17381
#define P_2nd_PNP_Cleaning_Avoid_2nd_T_Pos 17382
#define P_PNP_Vac_Chk_Mode_Interlock 17383
#define P_Vac_Chk_Test 17384
#define P_Anode_1st_PNP_Vac_Chk_Mode_Blocked 17385
#define P_Cathode_1st_PNP_Vac_Chk_Mode_Blocked 17386
#define P_Anode_2nd_PNP_Vac_Chk_Mode_Blocked 17387
#define P_Cathode_2nd_PNP_Vac_Chk_Mode_Blocked 17388
#define P_SM_Anode_1st_PNP_Vac_Chk_Mode 17389
#define P_SM_Cathode_1st_PNP_Vac_Chk_Mode 17390
#define P_SM_Anode_2nd_PNP_Vac_Chk_Mode 17391
#define P_SM_Cathode_2nd_PNP_Vac_Chk_Mode 17392
#define P_Anode_1st_PNP_Vac_Chk_Execute_Timer 17393
#define P_Cathode_1st_PNP_Vac_Chk_Execute_Timer 17394
#define P_Anode_2nd_PNP_Vac_Chk_Execute_Timer 17395
#define P_Cathode_2nd_PNP_Vac_Chk_Execute_Timer 17396
#define P_Anode_1st_PNP_Vac_Check_Timer 17397
#define P_Cathode_1st_PNP_Vac_Check_Timer 17398
#define P_Anode_2nd_PNP_Vac_Check_Timer 17399
#define P_Cathode_2nd_PNP_Vac_Check_Timer 17400
#define P_Anode_1st_PNP_Vac_Chk_Status 17401
#define P_Cathode_1st_PNP_Vac_Chk_Status 17402
#define P_Anode_2nd_PNP_Vac_Chk_Status 17403
#define P_Cathode_2nd_PNP_Vac_Chk_Status 17404
#define P_Anode_1st_PNP_Vac_Chk_Mode_Stop_Blocked 17405
#define P_Cathode_1st_PNP_Vac_Chk_Mode_Stop_Blocked 17406
#define P_Anode_2nd_PNP_Vac_Chk_Mode_Stop_Blocked 17407
#define P_Cathode_2nd_PNP_Vac_Chk_Mode_Stop_Blocked 17408
#define P_Anode_1st_PnP_Vac_Chk_Mode_RTN 17409
#define P_Cathode_1st_PnP_Vac_Chk_Mode_RTN 17410
#define P_Anode_2nd_PnP_Vac_Chk_Mode_RTN 17411
#define P_Cathode_2nd_PnP_Vac_Chk_Mode_RTN 17412
#define P_PNP_Vac_Chk_Mode_TimeBase_Rtn 17413
#define P_PNP_Vac_Chk_Mode_Timer 17414
#define P_Anode_1st_PNP_Vac_Chk_Mode_Err 17415
#define P_Cathode_1st_PNP_Vac_Chk_Mode_Err 17416
#define P_Anode_2nd_PNP_Vac_Chk_Mode_Err 17417
#define P_Cathode_2nd_PNP_Vac_Chk_Mode_Err 17418
#define P_PNP_Vac_Chk_Mode_BTN_Err 17419
#define P_BTN_CA_1st_PNP_Vac_Chk_Mode 17420
#define P_BTN_AN_1st_PNP_Vac_Chk_Mode 17421
#define P_BTN_CA_2nd_PNP_Vac_Chk_Mode 17422
#define P_BTN_AN_2nd_PNP_Vac_Chk_Mode 17423
#define P_Old_Upper_Sensor 17424
#define P_Edge_Upper_Sensor 17432
#define P_Old_Lower_Sensor 17440
#define P_Edge_Lower_Sensor 17448
#define P_Edge_NP_BTN 17456
#define P_UI_Unit_Status 17458
#define P_Motor_Unit_Status 17468
#define P_Current_Homming_Status_To_PLC 17518
#define P_System_Cascading_ON_Cmd 17568
#define P_System_Cascading_OFF_Cmd 17569
#define P_System_Master_Following_ON_Cmd 17570
#define P_System_Master_Following_OFF_Cmd 17571
#define P_System_CamTable_ON_Cmd 17572
#define P_System_CamTable_OFF_Cmd 17573
#define P_System_Spool_Home_Ready_Pos_Cmd 17574
#define P_System_Cascading_ON_Status 17575
#define P_System_Cascading_OFF_Status 17576
#define P_System_Master_Following_ON_Status 17577
#define P_System_Master_Following_OFF_Status 17578
#define P_System_CamTable_ON_Status 17579
#define P_System_CamTable_OFF_Status 17580
#define P_System_Spool_Home_Ready_Pos_Status 17581
#define P_System_Cascading_ON_State_Machine 17582
#define P_System_Cascading_OFF_State_Machine 17583
#define P_System_Master_Follwing_ON_State_Machine 17584
#define P_System_Master_Follwing_OFF_State_Machine 17585
#define P_System_CamTable_ON_State_Machine 17586
#define P_System_CamTable_OFF_State_Machine 17587
#define P_System_Spool_Home_Ready_Pos_State_Machine 17588
#define P_System_Cascading_ON_Complete_Flag 17589
#define P_System_Cascading_OFF_Complete_Flag 17590
#define P_System_Master_Following_ON_Complete_Flag 17591
#define P_System_Master_Following_OFF_Complete_Flag 17592
#define P_System_CamTable_ON_Complete_Flag 17593
#define P_System_CamTable_OFF_Complete_Flag 17594
#define P_System_Spool_Home_Ready_Pos_Complete_Flag 17595
#define P_Servo_Dancer_Cascading_Off_Timer 17596
#define P_Servo_Dancer_Cascading_Set_Timer 17597
#define P_Dancer_Frist_Home_Ready_Pos_Timer 17598
#define P_Driving_Motor_Use_Flag 17599
#define P_Home_Spool_Unwinding 17600
#define P_OutValue 17601
#define P_Dancer_Out_Slew_Seq 17602
#define P_OutChangeValue 17603
#define P_Rot_OutValue 17604
#define P_OutChangeTime 17605
#define P_AO_Module_Arr 17606
#define P_AO_Range_Set_Value 17611
#define P_Regul_Max_kPa_Value 17616
#define P_Regul_Min_kPa_Value 17617
#define P_Regul_Max_AD 17618
#define P_Regul_Min_AD 17619
#define P_Current_Max_Value 17620
#define P_Current_Min_Value 17621
#define P_Current_Max_AD 17622
#define P_Current_Min_AD 17623
#define P_Sepa_Cal_Inclination 17624
#define P_Regul_Cal_Inclination 17625
#define P_Cutter_Heat_Amp_Data_Bit 17626
#define P_Cut_Heat_Amp_Value 17627
#define P_AI_Cathode_Clamp_Damper_AVG 17628
#define P_AI_Anode_Clamp_Damper_AVG 17629
#define P_Tension_Ready_Pos_Cmd 17630
#define P_Tension_Ready_State_Machine 17631
#define P_Tension_Ready_Pos_Status 17632
#define P_Dancer_Center_Pos 17633
#define P_Upper_Sepa_Cal_Inclination 17634
#define P_Lower_Sepa_Cal_Inclination 17635
#define P_Unwinder_Jogspeed 17636
#define P_Cascading_First_Out 17637
#define P_Dancer_Cur_Vdc 17638
#define P_Dancer_Cur_Torque 17639
#define P_Dancer_Cur_Newton 17640
#define P_Dancer_Cur_Kgf 17641
#define P_Board_IO_Count 17642
#define P_Force_BTN_Address_Clear_Count 17643
#define P_Force_BTN_M_Variable_Save 17644
#define P_Force_BTN_Condition_Count 18028
#define P_Old_Force_BTN_Mode 18029
#define P_Force_BTN_Address_Count 18030
#define P_Force_BTN_GPIO_Address_Count 18031
#define P_Force_BTN_Ecat_Address_Count 18032
#define P_Force_BTN_M_Variable_Save_Count 18033
#define P_Force_BTN_M_Variable_Start_Num 18034
#define P_Force_BTN_Normal_Mode_Status 18035
#define P_Force_BTN_Normal_Mode_State_Machine 18036
#define P_Force_BTN_Normal_Mode_Complete_Flag 18037
#define P_Force_BTN_Force_Mode_Timer 18038
#define P_Force_BTN_Force_Mode_Delay_Time 18039
#define P_Force_BTN_Force_Mode_Status 18040
#define P_Force_BTN_Force_Mode_State_Machine 18041
#define P_Force_BTN_Force_Mode_Complete_Flag 18042
#define P_Mem_Save_Error_Bit 18043
#define P_ABS_Phasing_Data 18044
#define P_ABS_Home_Offset_Data 18049
#define P_Servo_Gain_Save_Command 18054
#define P_Servo_Gain_Load_Command 18055
#define P_Servo_Gain_Save_Flag 18056
#define P_Servo_Gain_Load_Flag 18057
#define P_Servo_Gain_Kp 18058
#define P_Servo_Gain_Kvfb 18088
#define P_Servo_Gain_Kvff 18118
#define P_Servo_Gain_Ki 18148
#define P_Servo_Gain_SwZvInt 18178
#define P_Servo_Gain_Kaff 18208
#define P_Insert_Phase_Flag 18238
#define P_Alarm_Arr 18239
#define P_Alarm_Occur_Flag 18339
#define P_Alarm_Occur_Index_Flag 18340
#define P_Alarm_Wait_Time 18344
#define P_Alarm_Delay_Timer 18345
#define P_Compare_Priority 18346
#define P_Alarm_Report 18347
#define P_Alarm_Num 18348
#define P_Alarm_Index 18349
#define P_First_Alarm_Flag 18350
#define P_Alarm_Log 18351
#define P_First_Alarm_Log 18451
#define P_Servo_Alarm_Check 18481
#define P_Ecat_Servo_Alarm_Check 18482
#define P_Alarm_duplicate_Check_Arr 18483
#define P_Old_Drive_Alarm 19153
#define P_IL_ON_OFF_Flag 19203
#define P_IL_Coord_Robot 19204
#define P_IL_Robot_Bit 19205
#define P_IL_Outer_Status 19206
#define P_Robot_Unit_Serch_Flag 19207
#define P_IL_Home_Chk_Edge 19208
#define P_Limit_PosData 19209
#define P_IL_Sprint 19212
#define P_IL_length 19213
#define P_IL_Strcat 19214
#define P_IL_Popup_Motor 19215
#define P_IL_Motor_Page 19216
#define P_IL_Recipe_Bit 19217
#define P_Interlock_Popup_On_Flag 19218
#define P_Motor_Page 19219
#define M_Motor_BTN_Info 8503
#define P_OP_Side_Ca_PNP_Pos 19220
#define P_OP_Side_An_PNP_Pos 19221
#define P_OP_Side_PMAC_Cur_Mode 19222
#define P_Abs_Trans_Cur_Pos 19223
#define P_Minus_IL_Offset 19224
#define P_Plus_IL_Offset 19225
#define P_2nd_PNP_Arm_Radius 19226
#define P_IL_Enable_Flag 19227
#define P_Plus_Interlock_Bit 19228
#define P_Minus_Interlock_Bit 19229
#define UPPos 19230
#define Unloader_In_StackPos 19231
#define FR_AnodePos 19232
#define FR_CathodePos 19233
#define Before_In_Stack 19234
#define In_Stack 19235
#define P_Collision_Risk_Motor 19236
#define P_Minus_Collision_Risk_Motor 19238
#define P_IL_Clamp_Y 19239
#define P_IL_Clamp_Z 19240
#define P_IL_Clamp_Pos 19241
#define P_IL_Use_FR_Clamp_Pos 19242
#define P_P_IL_Normal_Pos_Offset 19243
#define P_M_IL_Normal_Pos_Offset 19293
#define P_P_IL_Upper_Pos_Offset 19343
#define P_M_IL_Upper_Pos_Offset 19393
#define P_P_IL_Align_Pos_Offset 19443
#define P_M_IL_Align_Pos_Offset 19493
#define P_P_IL_Stack_Pos_Offset 19543
#define P_M_IL_Stack_Pos_Offset 19593
#define P_Ca_1st_Plus_IL_Offset 19643
#define P_Ca_1st_Minus_IL_Offset 19644
#define P_An_1st_Plus_IL_Offset 19645
#define P_An_1st_Minus_IL_Offset 19646
#define P_Ca_2nd_T_Plus_IL_Offset 19647
#define P_Ca_2nd_T_Minus_IL_Offset 19650
#define P_Ca_2nd_Z_Plus_IL_Offset 19653
#define P_Ca_2nd_Z_Minus_IL_Offset 19655
#define P_An_2nd_T_Plus_IL_Offset 19657
#define P_An_2nd_T_Minus_IL_Offset 19660
#define P_An_2nd_Z_Minus_IL_Offset 19663
#define P_Z_Pos_Data 19665
#define P_Clamp_Z_Plus_IL_Offset 19666
#define P_FR_X_Plus_IL_Offset 19667
#define P_FR_X_Minus_IL_Offset 19669
#define P_FR_Z_Minus_IL_Offset 19671
#define P_Ca_NG_PNP_Plus_IL_Offset 19672
#define P_Ca_NG_PNP_Minus_IL_Offset 19676
#define P_An_NG_PNP_Plus_IL_Offset 19680
#define P_An_NG_PNP_Minus_IL_Offset 19684
#define P_Unloader_X_Plus_IL_Offset 19688
#define P_Unloader_X_Minus_IL_Offset 19692
#define P_Unloader_Z_Plus_IL_Offset 19696
#define P_Unloader_Z_Minus_IL_Offset 19699
#define P_IL_In_Offset 19702
#define P_X_PLC_InterLock 19727
#define P_IL_Home_Chk 19728
#define P_IL_Home_Chk_Motor_Num 19729
#define P_IL_Home_Chk_Motor_Update 19749
#define P_IL_Inside_Home_Chk_Complete 19750
#define P_IL_Outside_Home_Chk_Complete 19751
#define P_IL_Motor_Home_Chk_RTN 19752
#define P_IL_Function_Cnt 19753
#define P_IL_Function_Motor_Num 19754
#define P_Jog_Page_Flag 19755
#define P_Anode_1st_TR_Belt_Down_Flag 19756
#define P_Anode_1st_TR_Belt_Pick_Up_Flag 19757
#define P_Anode_1st_TR_Align_Down_Flag 19758
#define P_Anode_2nd_TR_Align_Pick_Up_Flag 19759
#define P_Anode_2nd_TR_Stack_Down_Flag 19760
#define P_Anode_NG_TR_Align_Pick_Up_Flag 19761
#define P_Anode_NG_TR_NG_Place_Down_Flag 19762
#define P_Anode_2nd_TR_Align_Down_Flag 19763
#define P_Anode_1st_TR_Align_Pick_Up_Flag 19764
#define P_Anode_1st_TR_Belt_Down_State_Machine 19765
#define P_Anode_1st_TR_Belt_Down_Status 19766
#define P_Anode_1st_TR_Belt_Pick_Up_State_Machine 19767
#define P_Anode_1st_TR_Belt_Pick_Up_Status 19768
#define P_Anode_1st_TR_Align_Down_State_Machine 19769
#define P_Anode_1st_TR_Align_Down_Status 19770
#define P_Anode_2nd_TR_Align_Pick_Up_State_Machine 19771
#define P_Anode_2nd_TR_Align_Pick_Up_Status 19772
#define P_Anode_2nd_TR_Stack_Down_State_Machine 19773
#define P_Anode_2nd_TR_Stack_Down_Status 19774
#define P_Anode_NG_TR_Align_Pick_Up_State_Machine 19775
#define P_Anode_NG_TR_Align_Pick_Up_Status 19776
#define P_Anode_NG_TR_NG_Place_Down_State_Machine 19777
#define P_Anode_NG_TR_NG_Place_Down_Status 19778
#define P_Anode_2nd_TR_Align_Down_State_Machine 19779
#define P_Anode_2nd_TR_Align_Down_Status 19780
#define P_Anode_1st_TR_Align_Pick_Up_State_Machine 19781
#define P_Anode_1st_TR_Align_Pick_Up_Status 19782
#define P_Cathode_1st_TR_Belt_Down_Flag 19783
#define P_Cathode_1st_TR_Belt_Pick_Up_Flag 19784
#define P_Cathode_1st_TR_Align_Down_Flag 19785
#define P_Cathode_2nd_TR_Align_Pick_Up_Flag 19786
#define P_Cathode_2nd_TR_Stack_Down_Flag 19787
#define P_Cathode_NG_TR_Align_Pick_Up_Flag 19788
#define P_Cathode_NG_TR_NG_Place_Down_Flag 19789
#define P_Cathode_2nd_TR_Align_Down_Flag 19790
#define P_Cathode_1st_TR_Align_Pick_Up_Flag 19791
#define P_Cathode_1st_TR_Belt_Down_State_Machine 19792
#define P_Cathode_1st_TR_Belt_Down_Status 19793
#define P_Cathode_1st_TR_Belt_Pick_Up_State_Machine 19794
#define P_Cathode_1st_TR_Belt_Pick_Up_Status 19795
#define P_Cathode_1st_TR_Align_Down_State_Machine 19796
#define P_Cathode_1st_TR_Align_Down_Status 19797
#define P_Cathode_2nd_TR_Align_Pick_Up_State_Machine 19798
#define P_Cathode_2nd_TR_Align_Pick_Up_Status 19799
#define P_Cathode_2nd_TR_Stack_Down_State_Machine 19800
#define P_Cathode_2nd_TR_Stack_Down_Status 19801
#define P_Cathode_NG_TR_Align_Pick_Up_State_Machine 19802
#define P_Cathode_NG_TR_Align_Pick_Up_Status 19803
#define P_Cathode_NG_TR_NG_Place_Down_State_Machine 19804
#define P_Cathode_NG_TR_NG_Place_Down_Status 19805
#define P_Cathode_2nd_TR_Align_Down_State_Machine 19806
#define P_Cathode_2nd_TR_Align_Down_Status 19807
#define P_Cathode_1st_TR_Align_Pick_Up_State_Machine 19808
#define P_Cathode_1st_TR_Align_Pick_Up_Status 19809
#define P_Old_Anode_Belt_ASCII 19810
#define P_Old_Cathode_Belt_ASCII 19811
#define P_Anode_Belt_ASCII 19812
#define P_Cathode_Belt_ASCII 19813
#define P_Check_Vac_Time 19814
#define P_Send_Anode_NG_Code_To_PLC 19815
#define P_Receive_Anode_NG_Code_From_PLC 19816
#define P_Send_Cathode_NG_Code_To_PLC 19817
#define P_Receive_Cathode_NG_Code_From_PLC 19818
#define P_Current_Cell_Memory_Anode_1P 19819
#define P_Current_Cell_Memory_Anode_AT 19820
#define P_Current_Cell_Memory_Anode_2P 19821
#define P_Current_Cell_Memory_Cathode_1P 19822
#define P_Current_Cell_Memory_Cathode_AT 19823
#define P_Current_Cell_Memory_Cathode_2P 19824
#define P_Current_Cell_Memory_Stack_Table 19825
#define P_Current_Cell_Memory_Cathode_NG_TR 19826
#define P_Current_Cell_Memory_Anode_NG_TR 19827
#define P_BTN_Anode_1st_TR_Buffer_Clear 19828
#define P_BTN_Anode_2nd_TR_Buffer_Clear 19829
#define P_BTN_Anode_Align_Buffer_Clear 19830
#define P_BTN_Anode_NG_TR_Buffer_Clear 19831
#define P_BTN_Cathode_1st_TR_Buffer_Clear 19832
#define P_BTN_Cathode_2nd_TR_Buffer_Clear 19833
#define P_BTN_Cathode_Align_Buffer_Clear 19834
#define P_BTN_Cathode_NG_TR_Buffer_Clear 19835
#define P_Old_BTN_Anode_1st_TR_Buffer_Clear 19836
#define P_Old_BTN_Anode_2nd_TR_Buffer_Clear 19837
#define P_Old_BTN_Anode_Align_Buffer_Clear 19838
#define P_Old_BTN_Anode_NG_TR_Buffer_Clear 19839
#define P_Old_BTN_Cathode_1st_TR_Buffer_Clear 19840
#define P_Old_BTN_Cathode_2nd_TR_Buffer_Clear 19841
#define P_Old_BTN_Cathode_Align_Buffer_Clear 19842
#define P_Old_BTN_Cathode_NG_TR_Buffer_Clear 19843
#define P_Send_Anode_NG_Code_Flag 19844
#define P_Send_Cathode_NG_Code_Flag 19845
#define P_Anode_Vision_NG_To_PLC_Flag 19846
#define P_Cathode_Vision_NG_To_PLC_Flag 19847
#define P_Status_Clear_Sheet_Maint_Check 19848
#define M_ASCII_Stack_Work_Host_Sepa_ID_Buffer 8553
#define M_Stack_Host_ID_Buffer_Mode 8563
#define M_Stack_Host_ID_Sample_Type 8564
#define M_Stack_Host_ID_JR_Result 8565
#define M_Stack_Host_ID_NG_Type 8566
#define M_ASCII_Read_Stack_Work_Host_Sepa_ID_Buffer 8567
#define M_ASCII_Uloader_1st_Host_ID_Buffer 8574
#define M_ASCII_Anode_Sheet_Belt_Buffer 8584
#define M_ASCII_Anode_Sheet_Buffer 8591
#define M_ASCII_Cathode_Sheet_Belt_Buffer 8647
#define M_ASCII_Cathode_Sheet_Buffer 8654
#define M_ASCII_First_Sheet_Buffer 8710
#define M_ASCII_Last_Sheet_Buffer 8717
#define P_Single_Run_Start_Flag 19849
#define P_Single_Run_Control_State_Machine 19850
#define P_Single_Run_Control_Status 19851
#define P_Single_Run_Execute_Bit 19852
#define P_User_Dry_Run_Mode 19853
#define P_Single_Run_State_Machine 19854
#define P_Single_Run_Status 19855
#define P_Single_Run_Unit 19856
#define P_Single_Run_Evade_Pos_RTN 19857
#define P_Single_Run_Evade_Pos_Check_RTN 19858
#define P_Single_Run_Pos_Rtn1 19859
#define P_Single_Run_Pos_Rtn2 19860
#define P_Single_Run_Motion_Ready_RTN 19861
#define P_Single_Run_Execution_Interlock_RTN 19862
#define P_Single_Run_Coord_Activate_RTN 19863
#define P_Single_Run_Coord_Activate_Check_RTN 19864
#define P_Single_Run_Select_Run_Mode_RTN 19865
#define P_Single_Run_Execution_Run_RTN 19866
#define P_Single_Run_Motion_Ready_State_Machine 19867
#define P_Coord_1 19868
#define P_Coord_2 19869
#define P_Coord_3 19870
#define P_Coord_4 19871
#define P_Final_Roll_Z_Motion_Flag 19872
#define P_Final_Roll_Z_Motion_State_Machine 19873
#define P_Main_Z_Motion_Flag 19874
#define P_Main_Z_Motion_State_Machine 19875
#define P_Single_Run_Mode_Flag 19876
#define P_Cathode_AT_Motion_Flag 19877
#define P_Cathode_Align_Motion_State_Machine 19878
#define P_Anode_AT_Motion_Flag 19879
#define P_Anode_Align_Motion_State_Machine 19880
#define P_Sheet_Paper_Motion_Flag 19881
#define P_Sheet_Paper_Motion_State_Machine 19882
#define P_Cathode_NG_PNP_T_Motion_Flag 19883
#define P_Cathode_NG_PNP_T_Motion_State_Machine 19884
#define P_Cathode_NG_PNP_Z_Motion_Flag 19885
#define P_Cathode_NG_PNP_Z_Motion_State_Machine 19886
#define P_Anode_NG_PNP_T_Motion_Flag 19887
#define P_Anode_NG_PNP_T_Motion_State_Machine 19888
#define P_Anode_NG_PNP_Z_Motion_Flag 19889
#define P_Anode_NG_PNP_Z_Motion_State_Machine 19890
#define P_1st_UND_X_Motion_Flag 19891
#define P_1st_UND_X_Motion_State_Machine 19892
#define P_1st_UND_Z_Motion_Flag 19893
#define P_1st_UND_Z_Motion_State_Machine 19894
#define P_1st_UND_T_Motion_Flag 19895
#define P_1st_UND_T_Motion_State_Machine 19896
#define P_Cathode_Run_Command_Flag 19897
#define P_Anode_Run_Command_Flag 19898
#define P_NG_PNP_Uint_Motion_Flag 19899
#define P_NG_PNP_Uint_State_Machine 19900
#define P_NG_PNP_Motion_Cnt 19901
#define P_NG_PNP_Motion_arr 19902
#define P_Single_Run_Timer 19912
#define P_Single_Run_Align_Timer 19913
#define P_Single_Run_Align_Timer2 19914
#define P_Single_Run_Finall_Roll_Z_Timer 19915
#define P_Single_RuN_MAIN_Z_Timer 19916
#define P_Single_Run_Sheet_Paper_Timer 19917
#define P_Single_Run_Debug_SM 19918
#define P_Error_Monitoring_Count_1 19919
#define P_Error_Monitoring_Count_2 19920
#define P_Error_Monitoring_Count_3 19921
#define P_Error_Monitoring_Count_4 19922
#define P_Error_Monitoring_Count_5 19923
#define P_Old_Single_Run_Mode_Flag 19924
#define P_Old_Current_Mode 19925
#define P_Single_Run_Timebase_Off_RTN 19926
#define P_Single_Run_Stop_State_Machine 19927
#define P_Single_Run_Stop_Status 19928
#define P_Single_Run_Stop_Timer 19929
#define P_Single_Run_Stop_Init_RTN 19930
#define P_Single_Run_Stop_Btn_Chk 19931
#define P_Single_Run_Stop_Command 19932
#define P_Motor_Ready_Poa_Inpos_200um 19933
#define P_Ecat_Parameter_Write_Flag 19934
#define P_Ecat_Parameter_Read_Flag 19935
#define P_Ecat_Each_Parameter_Write_Flag 19936
#define P_Ecat_Slave_Idx 19937
#define P_Ec_Num 19938
#define P_Ecat_Read_Motor_Num 19939
#define P_Ecat_Write_Motor_Num 19940
#define P_Ecat_Parameter_Write_State_Machine 19941
#define P_Ecat_Parameter_Read_State_Machine 19942
#define P_Ecat_Each_Parameter_Write_State_Machine 19943
#define P_Ecat_Read_MNTR 19944
#define P_Ecat_Write_MNTR 19972
#define P_Ecat_Save_MNTR 20000
#define P_Ecat_Error_MNTR 20016
#define P_Ecat_Read_Error_MNTR 20032
#define P_Ecat_Each_Write_Error_MNTR 20048
#define P_Ecat_Write_Status 20064
#define P_Ecat_Read_Status 20065
#define P_Ecat_Each_Write_Status 20066
#define P_Pn000 20067
#define P_Pn001 20087
#define P_Pn00B 20107
#define P_Pn100 20127
#define P_Pn101 20147
#define P_Pn102 20167
#define P_Pn103 20187
#define P_Pn123 20207
#define P_Pn140 20227
#define P_Pn141 20247
#define P_Pn145 20267
#define P_Pn146 20287
#define P_Pn160 20307
#define P_Pn161 20327
#define P_Pn163 20347
#define P_Pn170 20367
#define P_Pn401 20387
#define P_Pn408 20407
#define P_Pn409 20427
#define P_Pn40A 20447
#define P_Pn40C 20467
#define P_Pn40D 20487
#define P_Pn416 20507
#define P_Pn417 20527
#define P_Pn511 20547
#define P_Pn520 20567
#define P_PnB02_Numerator 20587
#define P_PnB02_Denominator 20607
#define P_Align_Plus_Blow_Test 20627
#define P_System_Setting_Flag 20628
#define P_Ecat_Setting_Flag 20629
#define P_Ecat_Activation_State_Machine 20630
#define P_PLC31_Ecat_Retry_Cnt 20631
#define P_Ecat_Connect_Result 20632
#define P_Ecat_Slave_Error 20633
#define P_PWM_AbsPhasePosOffset_Change_State_Machine 20634
#define P_AbsPhasePosOffset_Change_Complete 20635
#define P_PWM_AbsPhasing_Fail 20636
#define P_PWM_AbsPhasing_Complete 20637
#define P_Whole_Stacking_Tack_Time 20638
#define P_Whole_Stacking_Tack_Time_Check 20639
#define P_Whole_Stacking_Tack_Timer_Check_Flag 20640
#define P_Whole_Stacking_Timer_Shift_Status_Machine 20641
#define P_Whole_Stacking_TackTime_Array0 20642
#define P_Whole_Stacking_TackTime_Array1 20643
#define P_Whole_Stacking_TackTime_Array2 20644
#define P_Whole_Stacking_TackTime_Array3 20645
#define P_Whole_Stacking_TackTime_Array4 20646
#define P_Whole_Stacking_TackTime_Array5 20647
#define P_Whole_Stacking_TackTime_Array6 20648
#define P_Whole_Stacking_TackTime_Array7 20649
#define P_Whole_Stacking_TackTime_Array8 20650
#define P_Whole_Stacking_TackTime_Array9 20651
#define P_Whole_Stacking_TackTime_Array10 20652
#define P_First_Stacking_Start 20653
#define P_Last_Stacking_Complete 20654
#define P_Stacking_Tack_Time 20655
#define P_Stacking_Tack_Time_Check 20656
#define P_Stacking_Tack_Timer_Check_Flag 20657
#define P_Stacking_Timer_Shift_Status_Machine 20658
#define P_Cathode_to_Anode_FR_Tack_Time_Check 20659
#define P_Anode_to_Cathode_FR_Tack_Time_Check 20660
#define P_Cathode_to_Anode_FR_Tack_Time_Start 20661
#define P_Anode_to_Cathode_FR_Tack_Time_Start 20662
#define P_Cathode_to_Anode_FR_Tack_Time_Complete 20663
#define P_Anode_to_Cathode_FR_Tack_Time_Complete 20664
#define P_Cathode_to_Anode_FR_Time 20665
#define P_Anode_to_Cathode_FR_Time 20666
#define P_Cathode_to_Anode_FR_Tack_Timer_Check_Flag 20667
#define P_Anode_to_Cathode_FR_Tack_Timer_Check_Flag 20668
#define P_Anode_Align_Table_Time 20669
#define P_Anode_Align_Table_Tack_Time_Check 20670
#define P_Anode_Align_Table_Tack_Timer_Check_Flag 20671
#define P_Anode_Align_Table_Timer_Shift_Status_Machine 20672
#define P_Anode_Align_Tack_Time_Start 20673
#define P_Anode_Align_Tack_Time_Complete 20674
#define P_Cathode_Align_Table_Time 20675
#define P_Cathode_Align_Table_Tack_Time_Check 20676
#define P_Cathode_Align_Table_Tack_Timer_Check_Flag 20677
#define P_Cathode_Align_Table_Timer_Shift_Status_Machine 20678
#define P_Cathode_Align_Tack_Time_Start 20679
#define P_Cathode_Align_Tack_Time_Complete 20680
#define P_Anode_1th_Tack_Time_Start 20681
#define P_Anode_1th_Tack_Time_Complete 20682
#define P_Anode_1th_Time 20683
#define P_Anode_1th_Tack_Time_Check 20684
#define P_Anode_1th_Tack_Timer_Check_Flag 20685
#define P_Anode_1th_Timer_Shift_Status_Machine 20686
#define P_Cathode_1th_Tack_Time_Start 20687
#define P_Cathode_1th_Tack_Time_Complete 20688
#define P_Cathode_1th_Time 20689
#define P_Cathode_1th_Tack_Time_Check 20690
#define P_Cathode_1th_Tack_Timer_Check_Flag 20691
#define P_Cathode_1th_Timer_Shift_Status_Machine 20692
#define P_Anode_2th_Tack_Time_Start 20693
#define P_Anode_2th_Tack_Time_Complete 20694
#define P_Anode_2th_Time 20695
#define P_Anode_2th_Tack_Time_Check 20696
#define P_Anode_2th_Tack_Timer_Check_Flag 20697
#define P_Anode_2th_Timer_Shift_Status_Machine 20698
#define P_Cathode_2th_Tack_Time_Start 20699
#define P_Cathode_2th_Tack_Time_Complete 20700
#define P_Cathode_2th_Time 20701
#define P_Cathode_2th_Tack_Time_Check 20702
#define P_Cathode_2th_Tack_Timer_Check_Flag 20703
#define P_Cathode_2th_Timer_Shift_Status_Machine 20704
#define P_Anode_1th_NG_Tack_Time_Start 20705
#define P_Anode_1th_NG_Tack_Time_Complete 20706
#define P_Anode_1th_NG_Time 20707
#define P_Anode_1th_NG_Tack_Time_Check 20708
#define P_Anode_1th_NG_Tack_Timer_Check_Flag 20709
#define P_Anode_1th_NG_Timer_Shift_Status_Machine 20710
#define P_Cathode_1th_NG_Tack_Time_Start 20711
#define P_Cathode_1th_NG_Tack_Time_Complete 20712
#define P_Cathode_1th_NG_Time 20713
#define P_Cathode_1th_NG_Tack_Time_Check 20714
#define P_Cathode_1th_NG_Tack_Timer_Check_Flag 20715
#define P_Cathode_1th_NG_Timer_Shift_Status_Machine 20716
#define P_Anode_Clamp_Tack_Time_Start 20717
#define P_Anode_Clamp_Tack_Time_Complete 20718
#define P_Anode_Clamp_Time 20719
#define P_Anode_Clamp_Tack_Time_Check 20720
#define P_Anode_Clamp_Tack_Timer_Check_Flag 20721
#define P_Anode_Clamp_Timer_Shift_Status_Machine 20722
#define P_Cathode_Clamp_Tack_Time_Start 20723
#define P_Cathode_Clamp_Tack_Time_Complete 20724
#define P_Cathode_Clamp_Time 20725
#define P_Cathode_Clamp_Tack_Time_Check 20726
#define P_Cathode_Clamp_Tack_Timer_Check_Flag 20727
#define P_Cathode_Clamp_Timer_Shift_Status_Machine 20728
#define P_Final_Roll_X_Timer_Shift_Status_Machine 20729
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array0 20730
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array1 20731
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array2 20732
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array3 20733
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array4 20734
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array5 20735
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array6 20736
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array7 20737
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array8 20738
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array9 20739
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array10 20740
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array0 20741
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array1 20742
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array2 20743
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array3 20744
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array4 20745
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array5 20746
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array6 20747
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array7 20748
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array8 20749
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array9 20750
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array10 20751
#define P_Pneumatic_Pressure_Unit_Tack_Time_Chk_Timer 20752
#define P_Pneumatic_Pressure_Unit_Tack_Time 20779
#define P_MCC_Anode_Align_NG_Count 20806
#define P_MCC_Cathode_Align_NG_Count 20807
#define P_MCC_Anode_Retry_NG_Count 20808
#define P_MCC_Cathode_Retry_NG_Count 20809
#define P_Discharge_Tact_Time_Arr 20810
#define P_Discharge_Hold_Timer 20822
#define P_Discharge_Hold_Time 20823
#define P_AN_1st_Z_Zero_Angle 20824
#define P_AN_1st_Z_Zero_Length 20825
#define P_Anode_1st_PNP_Z_Crank_Zero_Pos 20826
#define P_Anode_1st_PNP_Z_Crank_real_Move_Pos 20827
#define P_Anode_1st_PNP_Z_Crank_radian 20828
#define P_Anode_1st_PNP_Z_Acos_denominator 20829
#define P_Anode_1st_PNP_Z_Acos_numerator 20830
#define P_Anode_1st_PNP_Z_Crank_Angle 20831
#define P_Anode_1st_PNP_Z_Real_Move_Pos 20832
#define P_Anode_1st_Fwd_Bwd_Rise 20833
#define P_CA_1st_Z_Zero_Angle 20834
#define P_CA_1st_Z_Zero_Length 20835
#define P_Cathode_1st_PNP_Z_Crank_Zero_Pos 20836
#define P_Cathode_1st_PNP_Z_Crank_real_Move_Pos 20837
#define P_Cathode_1st_PNP_Z_Crank_radian 20838
#define P_Cathode_1st_PNP_Z_Acos_denominator 20839
#define P_Cathode_1st_PNP_Z_Acos_numerator 20840
#define P_Cathode_1st_PNP_Z_Crank_Angle 20841
#define P_Cathode_1st_PNP_Z_Real_Move_Pos 20842
#define P_Cathode_1st_Fwd_Bwd_Rise 20843
#define P_AN_2nd_Z_Zero_Angle 20844
#define P_AN_2nd_Z_Zero_Length 20845
#define P_Anode_2nd_PNP_Z_Crank_Zero_Pos 20846
#define P_Anode_2nd_PNP_Z_Crank_real_Move_Pos 20847
#define P_Anode_2nd_PNP_Z_Crank_radian 20848
#define P_Anode_2nd_PNP_Z_Acos_denominator 20849
#define P_Anode_2nd_PNP_Z_Acos_numerator 20850
#define P_Anode_2nd_PNP_Z_Crank_Angle 20851
#define P_Anode_2nd_PNP_Z_Real_Move_Pos 20852
#define P_Anode_2nd_Fwd_Bwd_Rise 20853
#define P_CA_2nd_Z_Zero_Angle 20854
#define P_CA_2nd_Z_Zero_Length 20855
#define P_Cathode_2nd_PNP_Z_Crank_Zero_Pos 20856
#define P_Cathode_2nd_PNP_Z_Crank_real_Move_Pos 20857
#define P_Cathode_2nd_PNP_Z_Crank_radian 20858
#define P_Cathode_2nd_PNP_Z_Acos_denominator 20859
#define P_Cathode_2nd_PNP_Z_Acos_numerator 20860
#define P_Cathode_2nd_PNP_Z_Crank_Angle 20861
#define P_Cathode_2nd_PNP_Z_Real_Move_Pos 20862
#define P_Cathode_2nd_Fwd_Bwd_Rise 20863
#define P_Old_Recipe_Anode_1st_PNP_Z_Ready_Up 20864
#define P_Old_Recipe_Anode_1st_PNP_Z_Belt_Up 20865
#define P_Old_Recipe_Anode_1st_PNP_Z_Belt_Down 20866
#define P_Old_Recipe_Anode_1st_PNP_Z_Align_Up 20867
#define P_Old_Recipe_Anode_1st_PNP_Z_Align_Down 20868
#define P_Old_Recipe_Cathode_1st_PNP_Z_Ready_Up 20869
#define P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Up 20870
#define P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Down 20871
#define P_Old_Recipe_Cathode_1st_PNP_Z_Align_Up 20872
#define P_Old_Recipe_Cathode_1st_PNP_Z_Align_Down 20873
#define P_Old_Recipe_Anode_2nd_PNP_Z_Align_Up 20874
#define P_Old_Recipe_Anode_2nd_PNP_Z_Align_Down 20875
#define P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Up 20876
#define P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Down 20877
#define P_Old_Recipe_Anode_2nd_PNP_Z_Ready_Up 20878
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Up 20879
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Down 20880
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Up 20881
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Down 20882
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Ready_Up 20883
#define P_PLC19_All_Home_Status 20884
#define P_PLC19_All_Home_Module_Status 20885
#define P_PLC19_All_Home_State_Machine 20886
#define P_PLC19_All_Home_Seq_Index 20887
#define P_PLC19_All_Home_Self_Index 20888
#define P_PLC19_All_Home_Set_Mode_Return 20889
#define P_PLC19_All_Home_Timer 20890
#define P_PLC19_All_Home_Tact_Time_Array 20891
#define P_PLC19_All_Home_Tact_Time 20911
#define P_All_Home_Module_Error 20912
#define P_Act_ALL_Home_Time_Out_Time 20913
#define P_Act_ALL_Home_Time_Out 20914
#define P_Act_Hold_Complete_Bit 20954
#define P_Module_Act_Hold_Command_Array 20989
#define P_OLD_Module_Act_Hold_Command_Array 21024
#define P_Module_Act_Hold_State_Machine_Array 21059
#define P_Act_Hold_Old_Time 21094
#define P_Act_Hold_Time_Out_Time 21129
#define P_Act_Hold_Time_Out 21130
#define P_First_PNP_T_Wait_Status 21165
#define P_First_PNP_Z_Wait_Status 21166
#define P_First_PNP_Picker_T_Turn_Status 21167
#define P_First_PNP_T_Wait_To_Belt_Status 21168
#define P_First_PNP_Z_Wait_To_Belt_Status 21169
#define P_First_PNP_T_Align_To_Belt_Status 21170
#define P_First_PNP_Z_Align_To_Belt_Status 21171
#define P_First_PNP_Z_Belt_Down_Status 21172
#define P_First_PNP_Z_Belt_Up_Status 21173
#define P_First_PNP_T_Wait_To_Align_Status 21174
#define P_First_PNP_Z_Wait_To_Align_Status 21175
#define P_First_PNP_T_Belt_To_Align_Status 21176
#define P_First_PNP_Z_Belt_To_Align_Status 21177
#define P_First_PNP_Z_Align_Down_Status 21178
#define P_First_PNP_Z_Align_Up_Status 21179
#define P_First_PNP_Vac_On_Status 21180
#define P_First_PNP_Blow_On_Status 21181
#define P_Second_PNP_T_Align_To_Stack_Status 21182
#define P_Second_PNP_Z_Align_To_Stack_Status 21183
#define P_Second_PNP_T_Stack_To_Align_Status 21184
#define P_Second_PNP_Z_Stack_To_Align_Status 21185
#define P_Second_PNP_Z_Align_Down_Status 21186
#define P_Second_PNP_Z_Align_Up_Status 21187
#define P_Second_PNP_Vac_On_Status 21188
#define P_Second_PNP_Blow_On_Status 21189
#define P_NG_PNP_NG_Bos_Status 21190
#define P_NG_PNP_Align_Status 21191
#define P_NG_PNP_Align_Down_Status 21192
#define P_NG_PNP_Align_Up_Status 21193
#define P_NG_PNP_Vac_On_Status 21194
#define P_NG_PNP_Blow_On_Status 21195
#define P_Hold_1st_PNP_Position 21196
#define P_Hold_Module_Error 21197
#define P_Act_Execute_Complete_Bit 21198
#define P_Module_Act_Execute_Command_Array 21210
#define P_OLD_Module_Act_Execute_Command_Array 21222
#define P_Module_Act_Execute_State_Machine_Array 21234
#define P_Act_Execute_Old_Time 21246
#define P_Act_Execute_Time_Out_Time 21258
#define P_Act_Execute_Time_Out 21259
#define P_Execute_Module_Error 21271
#define P_Execute_First_Sepa_Total_Tact_Time 21272
#define P_Current_JR_Thickness_mm 21273
#define P_Current_Jelly_Roll_Thinckness_mm_Send_Enable_Flag 21274
#define P_Stack_Table_NG_Flag 21275
#define P_Suspend_Discharge_Cell_Out_Restart 21276
#define P_Jelly_Roll_OK_Count 21277
#define P_Jelly_Roll_NG_Count 21278
#define P_Jelly_Roll_Total_Count 21279
#define P_Jelly_Roll_Prod_Count 21280
#define P_Jelly_Roll_Recipe_Count 21281
#define P_Current_Cell_Memory_Jelly_Roll 21282
#define P_VISION_PLC10_Anode_Align_Start 21283
#define P_VISION_PLC10_Cathode_Align_Start 21284
#define P_Stack_Table_NG_Count 21285
#define P_Stack_PMAC_NG_Code 21286
#define P_Stack_Vision_NG_Code_IN_Timer 21287
#define P_1st_Discharge_State 21288
#define P_Prev_Sepa_Stack_Completed_Flag 21289
#define P_Discharge_Unloader_Handover_Timer 21290
#define P_Discharge_Unloader_Handover_Time 21291
#define P_Buffer_Mode_Module_Status_Sequence 21292
#define P_EXECUTE_Status_Prod_Sequence 21322
#define P_Execute_First_Sepa_Mode_Cmd 21352
#define P_Execute_First_Sepa_Mode_Status 21353
#define P_Execute_First_Sepa_Mode_Module_Status 21354
#define P_Execute_First_Sepa_Mode_State_Machine 21355
#define P_Execute_First_Sepa_Mode_Seq_Index 21356
#define P_Execute_First_Sepa_Mode_Self_Index 21357
#define P_Execute_First_Sepa_Mode_Debug_Edge 21358
#define P_Buffer_Seqdata_Execute_First_Sepa_Mode_Array 21359
#define P_Execute_First_Sepa_Mode_Timer 21389
#define P_Execute_First_Sepa_Mode_Tact_Time_Array 21390
#define P_Execute_First_Sepa_Mode_Tact_Time 21410
#define P_Execute_1st_Sepa_Status 21411
#define P_Suspend_Discharge_Cmd 21412
#define P_Suspend_Discharge_Status 21413
#define P_Suspend_Discharge_State_Machine 21414
#define P_Suspend_Discharge_Seq_Index 21415
#define P_Suspend_Discharge_Self_Index 21416
#define P_Discharge_Seq_InterLock_Delay_Time 21417
#define P_Discharge_Seq_InterLock_Flag 21447
#define P_Buffer_Seqdata_Discharge_Array 21477
#define P_Suspend_Discharge_Timer 21507
#define P_Suspend_Discharge_Tact_Time_Array 21508
#define P_Suspend_Discharge_Tact_Time 21528
#define P_Suspend_Discharge_1st_Unloader_JR_Grip 21529
#define P_Suspend_ARC_Cmd 21530
#define P_Suspend_ARC_Status 21531
#define P_Suspend_ARC_State_Machine 21532
#define P_Suspend_ARC_Seq_Index 21533
#define P_Suspend_ARC_Self_Index 21534
#define P_Suspend_ARC_Manual_Occur_Flag 21535
#define P_ARC_Seq_InterLock_Delay_Time 21536
#define P_ARC_Seq_InterLock_Flag 21566
#define P_Buffer_Seqdata_ARC_Array 21596
#define P_Suspend_ARC_Timer 21626
#define P_Suspend_ARC_Tact_Time_Array 21627
#define P_Suspend_ARC_Tact_Time 21647
#define P_Suspend_Anode_1TR_Cell_Supply_Cmd 21648
#define P_Suspend_Anode_1TR_Cell_Supply_Status 21649
#define P_Suspend_Anode_1TR_Cell_Supply_State_Machine 21650
#define P_Suspend_Anode_1TR_Cell_Supply_Seq_Index 21651
#define P_Suspend_Anode_1TR_Cell_Supply_Self_Index 21652
#define P_Suspend_Anode_1TR_Cell_Supply_Module_Status 21653
#define P_Anode_1TR_Cell_Supply_Seq_InterLock_Delay_Time 21654
#define P_Anode_1TR_Cell_Supply_Seq_InterLock_Flag 21684
#define P_Buffer_Seqdata_Anode_1TR_Cell_Supply_Array 21714
#define P_Suspend_Anode_1TR_Cell_Supply_Timer 21744
#define P_Suspend_Anode_1TR_Cell_Supply_Tact_Time_Array 21745
#define P_Suspend_Anode_1TR_Cell_Supply_Tact_Time 21765
#define P_Hold_Exist_Insp_Cmd 21766
#define P_Hold_Exist_Insp_Status 21767
#define P_Hold_Exist_Insp_Module_Status 21768
#define P_Hold_Exist_Insp_State_Machine 21769
#define P_Hold_Exist_Insp_Seq_Index 21770
#define P_Hold_Exist_Insp_Self_Index 21771
#define P_Hold_Exist_Insp_Debug_Edge 21772
#define P_Buffer_Seqdata_Hold_Exist_Insp_Array 21773
#define P_Hold_Exist_Insp_Timer 21803
#define P_Hold_Exist_Insp_Tact_Time_Array 21804
#define P_Hold_Exist_Insp_Tact_Time 21824
#define P_Hold_Remove_NG_PNP_Cmd 21825
#define P_Hold_Remove_NG_PNP_Status 21826
#define P_Hold_Remove_NG_PNP_Module_Status 21827
#define P_Hold_Remove_NG_PNP_State_Machine 21828
#define P_Hold_Remove_NG_PNP_Seq_Index 21829
#define P_Hold_Remove_NG_PNP_Self_Index 21830
#define P_Hold_Remove_NG_PNP_Debug_Edge 21831
#define P_Buffer_Seqdata_Hold_Remove_NG_PNP_Array 21832
#define P_Hold_Remove_NG_PNP_Timer 21862
#define P_Hold_Remove_NG_PNP_Tact_Time_Array 21863
#define P_Hold_Remove_NG_PNP_Tact_Time 21883
#define P_PLC01_Hold_Remove_NG_PNP_Sub_Flag 21884
#define P_PLC01_Hold_Remove_NG_PNP_Sub_State_Machine 21885
#define P_PLC01_Hold_Remove_NG_PNP_Sub_Status 21886
#define P_Hold_Remove_Align_Cmd 21887
#define P_Hold_Remove_Align_Status 21888
#define P_Hold_Remove_Align_Module_Status 21889
#define P_Hold_Remove_Align_State_Machine 21890
#define P_Hold_Remove_Align_Seq_Index 21891
#define P_Hold_Remove_Align_Self_Index 21892
#define P_Hold_Remove_Align_Debug_Edge 21893
#define P_Buffer_Seqdata_Hold_Remove_Align_Array 21894
#define P_Hold_Remove_Align_Timer 21924
#define P_Hold_Remove_Align_Tact_Time_Array 21925
#define P_Hold_Remove_Align_Tact_Time 21945
#define P_PLC01_Hold_Remove_Align_Sub_Flag 21946
#define P_PLC01_Hold_Remove_Align_Sub_State_Machine 21947
#define P_PLC01_Hold_Remove_Align_Sub_Status 21948
#define P_Hold_Remove_2TR_Cmd 21949
#define P_Hold_Remove_2TR_Status 21950
#define P_Hold_Remove_2TR_Module_Status 21951
#define P_Hold_Remove_2TR_State_Machine 21952
#define P_Hold_Remove_2TR_Seq_Index 21953
#define P_Hold_Remove_2TR_Self_Index 21954
#define P_Hold_Remove_2TR_Debug_Edge 21955
#define P_Buffer_Seqdata_Hold_Remove_2TR_Array 21956
#define P_Hold_Remove_2TR_Timer 21986
#define P_Hold_Remove_2TR_Tact_Time_Array 21987
#define P_Hold_Remove_2TR_Tact_Time 22007
#define P_Hold_Supply_1TR_Cmd 22008
#define P_Hold_Supply_1TR_Status 22009
#define P_Hold_Supply_1TR_Module_Status 22010
#define P_Hold_Supply_1TR_State_Machine 22011
#define P_Hold_Supply_1TR_Seq_Index 22012
#define P_Hold_Supply_1TR_Self_Index 22013
#define P_Hold_Supply_1TR_Debug_Edge 22014
#define P_Buffer_Seqdata_Hold_Supply_1TR_Array 22015
#define P_Hold_Supply_1TR_Timer 22045
#define P_Hold_Supply_1TR_Tact_Time_Array 22046
#define P_Hold_Supply_1TR_Tact_Time 22066
#define P_PLC01_Hold_Supply_1TR_Memory_RTN 22067
#define P_PLC01_Hold_Supply_1TR_Judge_Flag 22068
#define P_PLC01_Hold_Supply_1TR_Judge_State_Machine 22069
#define P_PLC01_Hold_Supply_1TR_Judge_Status 22070
#define P_Plate_1TR_Supply_Module_Judge_Bit 22071
#define P_Hold_Supply_Align_Cmd 22072
#define P_Hold_Supply_Align_Status 22073
#define P_Hold_Supply_Align_Module_Status 22074
#define P_Hold_Supply_Align_State_Machine 22075
#define P_Hold_Supply_Align_Seq_Index 22076
#define P_Hold_Supply_Align_Self_Index 22077
#define P_Hold_Supply_Align_Debug_Edge 22078
#define P_Buffer_Seqdata_Hold_Supply_Align_Array 22079
#define P_Hold_Supply_Align_Timer 22109
#define P_Hold_Supply_Align_Tact_Time_Array 22110
#define P_Hold_Supply_Align_Tact_Time 22130
#define P_Hold_Supply_2TR_Cmd 22131
#define P_Hold_Supply_2TR_Status 22132
#define P_Hold_Supply_2TR_Module_Status 22133
#define P_Hold_Supply_2TR_State_Machine 22134
#define P_Hold_Supply_2TR_Seq_Index 22135
#define P_Hold_Supply_2TR_Self_Index 22136
#define P_Hold_Supply_2TR_Debug_Edge 22137
#define P_Buffer_Seqdata_Hold_Supply_2TR_Array 22138
#define P_Hold_Supply_2TR_Timer 22168
#define P_Hold_Supply_2TR_Tact_Time_Array 22169
#define P_Hold_Supply_2TR_Tact_Time 22189
#define P_Hold_Semi_Run_Pos_Move_Cmd 22190
#define P_Hold_Semi_Run_Pos_Move_Status 22191
#define P_Hold_Semi_Run_Pos_Move_Module_Status 22192
#define P_Hold_Semi_Run_Pos_Move_State_Machine 22193
#define P_Hold_Semi_Run_Pos_Move_Seq_Index 22194
#define P_Hold_Semi_Run_Pos_Move_Self_Index 22195
#define P_Hold_Semi_Run_Pos_Move_Debug_Edge 22196
#define P_Buffer_Seqdata_Hold_Semi_Run_Pos_Move_Array 22197
#define P_Hold_Semi_Run_Pos_Move_Timer 22227
#define P_Hold_Semi_Run_Pos_Move_Tact_Time_Array 22228
#define P_Hold_Semi_Run_Pos_Move_Tact_Time 22248
#define P_Act_Complete_Bit 22249
#define P_Act_Old_Time 22315
#define P_Act_Delay_Time 22381
#define P_Act_Suspend_Time_Out_Time 22447
#define P_Act_Time_Out 22448
#define P_Test_Sungmin_Flag 22514
#define P_Discharge_Possibility_Bit 22515
#define P_HOLD_Exist_Possibility_Bit 22581
#define P_HOLD_NG_Remove_Possibility_Bit 22647
#define P_HOLD_Align_Remove_Possibility_Bit 22713
#define P_HOLD_2TR_Remove_Possibility_Bit 22779
#define P_HOLD_1TR_Supply_Possibility_Bit 22845
#define P_HOLD_Align_Supply_Possibility_Bit 22911
#define P_HOLD_2TR_Supply_Possibility_Bit 22977
#define P_HOLD_Semi_Run_Pos_Possibility_Bit 23043
#define P_Module_Act_Command_Array 23109
#define P_OLD_Module_Act_Command_Array 23175
#define P_Module_Act_State_Machine_Array 23241
#define P_Module_Act_State_Machine_Error_Array 23307
#define P_Suspend_Discharge_Module_Status 23373
#define P_Suspend_Discharge_To_Execute_Flag 23374
#define P_Suspend_Discharge_Complete_Flag 23375
#define P_First_Unloader_Stack_Up_Status 23376
#define P_First_Unloader_Stack_FWD_Status 23377
#define P_First_Unloader_Grip_Cell_Status 23378
#define P_First_Unloader_Stack_BWD_Wait_Status 23379
#define P_First_Unloader_Stack_BWD_Status 23380
#define P_First_Unloader_Stack_Down_Status 23381
#define P_First_Unloader_Avoid_Status 23382
#define P_First_Unloader_Turn_Status 23383
#define P_First_Unloader_Handover_Status 23384
#define P_Cathode_Clamp_OFF_Status 23385
#define P_Final_Roll_Discharge_Status 23386
#define P_Final_Roll_Stack_Pos_Status 23387
#define P_Final_Roll_Stack_Up_Pos_Status 23388
#define P_Main_Z_Init_Pos_Status 23389
#define P_Sheet_Paper_BWD_Status 23390
#define P_Discharge_Vision_DIO_RTN 23391
#define P_Discharge_Sub_RTN 23392
#define P_Discharge_NG_Code_Report_RTN 23393
#define P_Individual_RTN 23394
#define P_Suspend_Discharge_Last_Run_Bit 23395
#define P_Suspend_Discharge_JR_Result_RTN 23396
#define P_ARC_Buffer_Jog_Speed 23397
#define P_Selected_Spool_Number 23398
#define P_ARC_Home_Check_RTN 23399
#define P_Suspend_ARC_Module_Status 23400
#define P_Not_Selected_Spool_Radius 23401
#define P_Not_Selected_Spool_Circumference 23402
#define P_Sensor_To_Sepa_Curr_Distance_mm 23403
#define P_Passive_D_One_Degree_AD_Value 23428
#define P_After_ARC_Rotate_Distance 23429
#define P_Stack_Vision_NG_Code_Time_Over 23430
#define P_Suspend_Discharge_Resume_Flag 23431
#define P_Suspend_Discharge_Resume_Complete 23432
#define P_Suspend_Discharge_Pause_Flag 23433
#define P_Suspend_Monitor_ 23434
#define P_Flag_Stack_Work_Host_ID 23444
#define P_First_Sepa_Stack_Align_OK_PMAC_Flag 23445
#define P_Sepa_Run_Completed_Status_Machine 23446
#define P_Discharge_Debug_Edge 23447
#define P_Suspend_Discharge_Debug_Address 23448
#define P_Suspend_Discharge_Debug_Value 23453
#define P_Discharge_Sepa_Cutter_Time_Out_State_Machine 23458
#define P_Old_Suspend_Discharge_Seq_Index 23459
#define P_Discharge_Debug_Index_1 23460
#define P_Discharge_Debug_Index_2 23461
#define P_Discharge_Debug_Index_3 23462
#define P_Discharge_Debug_Index_4 23463
#define P_ARC_Debug_Edge 23464
#define P_Suspend_ARC_Debug_Address 23465
#define P_Suspend_ARC_Debug_Value 23470
#define P_Old_Suspend_ARC_Seq_Index 23475
#define P_ARC_Debug_Index_1 23476
#define P_ARC_Debug_Index_2 23477
#define P_ARC_Debug_Index_3 23478
#define P_ARC_Debug_Index_4 23479
#define P_ARC_Ready_Flag 23480
#define P_Suspend_Cutter_Heating_Time 23482
#define P_Suspend_Cutter_Heating_Timer 23483
#define P_An_1TR_Supply_Debug_Edge 23484
#define P_Suspend_An_1TR_Supply_Debug_Address 23485
#define P_Suspend_An_1TR_Supply_Debug_Value 23490
#define P_Old_Suspend_An_1TR_Supply_Seq_Index 23495
#define P_An_1TR_Supply_Debug_Index_1 23496
#define P_An_1TR_Supply_Debug_Index_2 23497
#define P_An_1TR_Supply_Debug_Index_3 23498
#define P_An_1TR_Supply_Debug_Index_4 23499
#define P_Suspend_Supply_Index 23500
#define P_Suspend_Supply_Index_2nd 23501
#define P_Anode_Suspend_Supply_Complete 23502
#define P_Suspend_Supply_Pause_Flag 23510
#define P_Suspend_Supply_Resume_Flag 23511
#define P_Supply_Module_Status 23512
#define P_Suspend_Anode_1TR_Supply_Complete_Flag 23513
#define P_Suspend_Discharge_Module_Error 23514
#define P_Suspend_ARC_Module_Error 23515
#define P_Suspend_1st_Supply_Error 23516
#define P_Discharge_Seq_Data 23517
#define P_Suspend_Discharging_Popup_Flag 23518
#define P_Suspend_Discharge_FR_Unclamp_Error_Popup_Flag 23519
#define P_Suspend_Discharge_Cathode_Align_Retry_Cal_Error_Popup_Flag 23520
#define P_Suspend_Discharge_Anode_Align_Retry_Cal_Error_Popup_Flag 23521
#define P_Suspend_Discharge_FR_Discharge_Pos_Error_Popup_Flag 23522
#define P_Suspend_Discharge_1st_Unloader_Grip_OFF_Error_Popup_Flag 23523
#define P_Suspend_Discharge_1st_Unloader_Up_Error_Popup_Flag 23524
#define P_Suspend_Discharge_1st_Unloader_FWD_Error_Popup_Flag 23525
#define P_Suspend_Discharge_FR_Clamp_Error_Popup_Flag 23526
#define P_Suspend_Discharge_Sepa_Cutter_Heating_Error_Popup_Flag 23527
#define P_Suspend_Discharge_1st_Unloader_Grip_Cell_Pos_Error_Popup_Flag 23528
#define P_Suspend_Discharge_1st_Unloader_Grip_ON_Error_Popup_Flag 23529
#define P_Suspend_Discharge_Sheet_Paper_BWD_Error_Popup_Flag 23530
#define P_Suspend_Discharge_Cathode_Clamp_OFF_Error_Popup_Flag 23531
#define P_Suspend_Discharge_Sepa_Cutter_FWD_Error_Popup_Flag 23532
#define P_Suspend_Discharge_Sheet_Paper_Vacuum_ON_Error_Popup_Flag 23533
#define P_Suspend_Discharge_Sepa_Cutter_BWD_Error_Popup_Flag 23534
#define P_Suspend_Discharge_1st_Unloader_BWD_Wait_Pos_Error_Popup_Flag 23535
#define P_Suspend_Discharge_1st_Unloader_BWD_Error_Popup_Flag 23536
#define P_Suspend_Discharge_1st_Unloader_Stack_Down_Error_Popup_Flag 23537
#define P_Suspend_Discharge_FR_Stack_Pos_Error_Popup_Flag 23538
#define P_Suspend_Discharge_After_Action_Init_Error_Popup_Flag 23539
#define P_Suspend_Discharge_1st_Unloader_Avoid_Pos_Error_Popup_Flag 23540
#define P_Suspend_Discharge_1st_2nd_Unloader_Handover_Chk_Error_Popup_Flag 23541
#define P_Suspend_Discharge_1st_Unloader_Handover_Pos_Error_Popup_Flag 23542
#define P_Suspend_Discharge_2nd_3rd_Unloader_Grip_Request_Error_Popup_Flag 23543
#define P_Suspend_Discharge_1st_Unloader_Wait_Pos_Error_Popup_Flag 23544
#define P_Suspend_ARC_Manual_ARC_Active_Popup_Flag 23545
#define P_Suspend_ARC_Auto_ARC_Active_Popup_Flag 23546
#define P_Suspend_ARC_Pre_Act_Popup_Flag 23547
#define P_Suspend_ARC_Dancer_Close_Popup_Flag 23548
#define P_Suspend_ARC_Use_Plate_FWD_Popup_Flag 23549
#define P_Suspend_ARC_Replace_Plate_Blow_ON_Popup_Flag 23550
#define P_Suspend_ARC_Use_Plate_Clamp_Popup_Flag 23551
#define P_Suspend_ARC_Use_Plate_Cutter_FWD_Popup_Flag 23552
#define P_Suspend_ARC_Use_Plate_Cutter_BWD_Popup_Flag 23553
#define P_Suspend_ARC_Use_Plate_Unclamp_Popup_Flag 23554
#define P_Suspend_ARC_Use_Plate_BWD_Popup_Flag 23555
#define P_Suspend_ARC_Replace_Plate_Blow_OFF_Popup_Flag 23556
#define P_Suspend_ARC_Dancer_Open_Popup_Flag 23557
#define P_Suspend_ARC_Spool_Change_Popup_Flag 23558
#define P_Suspend_ARC_Post_Act_Popup_Flag 23559
#define P_Suspend_ARC_Previous_Spool_Remain_Winding_Popup_Flag 23560
#define P_Suspend_Discharge_First_Address 23561
#define P_Suspend_ARC_First_Address 23562
#define P_Status_Stop_Ready_Pos_Move 23563
#define P_Cycle_Stop_Stauts 23564
#define P_Cycle_Stop_Status_Machine 23565
#define P_Cycle_Stop_Flag 23566
#define P_Speed_Origin_rtn 23567
#define P_Speed_rtn 23568
#define P_NG_PNP_Z_Move_rtn 23569
#define P_NG_PNP_Z_Move_Check_rtn 23570
#define P_NG_PNP_T_Move_rtn 23571
#define P_NG_PNP_T_Move_Check_rtn 23572
#define P_2nd_Z_Move_rtn 23573
#define P_2nd_Z_Move_Check_rtn 23574
#define P_2nd_T_Move_rtn 23575
#define P_2nd_T_Move_Check_rtn 23576
#define P_Stack_Judgement_Memory 23577
#define P_Stop_Cycle_Stop_Move_Status 23578
#define P_STOP_Initial_Process_Status 23579
#define P_Stopping_CycleStop_Init_Flag 23580
#define P_Sepa_Timing 23581
#define P_Old_Trigger_PLC0 23582
#define P_Mode_Command 23583
#define P_Current_Mode 23584
#define P_MOde_Num 23585
#define P_Command_Depth 23590
#define P_In_Position 23595
#define P_Last_Cycle_Command 23600
#define P_Mode_Command_Buffer 23605
#define P_Mode_Command_Wait_Count 23606
#define P_Old_Mode_Command 23607
#define P_Slave1_Anode_Run_Motion_Array 23608
#define P_Slave2_Anode_Run_Motion_Array 23708
#define P_Slave3_Anode_Run_Motion_Array 23808
#define P_Slave4_Anode_Run_Motion_Array 23908
#define P_Slave5_Anode_Run_Motion_Array 24008
#define P_Slave6_Anode_Run_Motion_Array 24108
#define P_Slave7_Anode_Run_Motion_Array 24208
#define P_Slave8_Anode_Run_Motion_Array 24308
#define P_Slave9_Anode_Run_Motion_Array 24408
#define P_Slave10_Anode_Run_Motion_Array 24508
#define P_Slave15_Anode_Run_Motion_Array 24608
#define P_Slave16_Anode_Run_Motion_Array 24708
#define P_Slave17_Anode_Run_Motion_Array 24808
#define P_Slave18_Anode_Run_Motion_Array 24908
#define P_Slave19_Anode_Run_Motion_Array 25008
#define P_Slave1_Cathode_Run_Motion_Array 25108
#define P_Slave2_Cathode_Run_Motion_Array 25208
#define P_Slave3_Cathode_Run_Motion_Array 25308
#define P_Slave4_Cathode_Run_Motion_Array 25408
#define P_Slave5_Cathode_Run_Motion_Array 25508
#define P_Slave15_Cathode_Run_Motion_Array 25608
#define P_Slave6_Cathode_Run_Motion_Array 25708
#define P_Slave7_Cathode_Run_Motion_Array 25808
#define P_Slave8_Cathode_Run_Motion_Array 25908
#define P_Slave9_Cathode_Run_Motion_Array 26008
#define P_Slave10_Cathode_Run_Motion_Array 26108
#define P_Slave16_Cathode_Run_Motion_Array 26208
#define P_Slave17_Cathode_Run_Motion_Array 26308
#define P_Slave18_Cathode_Run_Motion_Array 26408
#define P_Slave19_Cathode_Run_Motion_Array 26508
#define P_BTN_Jog_BWD_M 8724
#define P_BTN_Jog_FWD_M 8774
#define M_UnWinder_BTN_Lamp 8824
#define M_Cathode_BTN_Lamp 8840
#define M_Anode_BTN_Lamp 8872
#define M_Stack_BTN_Lamp 8904
#define M_ARC_BTN_Lamp 8936
#define M_UnWinder_BTN_Interlock 8968
#define M_Cathode_BTN_Interlock 8984
#define M_Anode_BTN_Interlock 9016
#define M_Stack_BTN_Interlock 9048
#define M_ARC_BTN_Interlock 9080
#define M_NP_BTN_Interlock 9112
#define M_Manual_ARC_BTN 9128
#define P_Anode_NG_Unit_Status 26608
#define P_Cathode_NG_Unit_Status 26609
#define P_ParsingRtn 26610
#define P_CurPosData 26611
#define P_Hold_MNTR_Supply_1st 26612
#define P_TimeOutNumb 26613
#define P_PosRtn 26614
#define P_MotionRtn 26615
#define P_CmdData 26616
#define P_Interval 26617
#define P_Cont_Ret 26618
#define P_Cur_Idx 26619
#define P_NextID 26620
#define P_Cur_Size 26621
#define P_Hold_Exist_Insp 26622
#define P_Hold_Remove_NG_PNP 26623
#define P_Hold_Remove_Align 26624
#define P_Hold_Remove_2TR 26625
#define P_Hold_Supply_1TR 26626
#define P_Hold_Supply_Align 26627
#define P_Hold_Supply_2TR 26628
#define P_Hold_Semi_Run 26629
#define P_Hold_NG_PNP_Remove 180
#define P_Hold_Remove_2nd 182
#define P_Hold_Supply_1st 183
#define P_Hold_Supply_2nd 185
#define P_Hold_Data_process 186
#define P_Hold_Semi_Run_Enable_Pos 187
#define P_Hold_Existence_Insp 188
#define P_Hold_1st_Belt_Move 189
#define P_Hold_Motion 190
#define P_Hold_Data_process_State_Machine 26630
#define P_Hold_Align_Remove_State_Machine 26631
#define P_Hold_2nd_Remove_State_Machine 26632
#define P_Hold_Supply_1st_State_Machine 26633
#define P_Hold_Supply_2nd_State_Machine 26634
#define P_Hold_Existence_Insp_State_Machine 26635
#define P_Hold_NG_PNP_Remove_State_Machine 26636
#define P_Hold_Data_Process_Complete 26637
#define P_Hold_Semi_Run_Enable_Pos_State_Machine 26638
#define P_HOLD_Existence_Insp_Queue_State_Machine 26639
#define P_Hold_Stop_Existence_Insp_STEP 26640
#define P_SubMaster_Status_Err 26641
#define P_Data_Process_Rtn 26642
#define P_Hold_Set_Trigger 26643
#define P_Hold_Get_Trigger 26644
#define P_Anode_2nd_Data 26645
#define P_Anode_Align_Data 26646
#define P_Hold_Remove_Step 26647
#define P_HList_Head_Idx 26648
#define P_Hold_Next_ID 26649
#define P_HCmd_List 26650
#define P_Hold_Data_Value 26670
#define P_Comb_Bitwise 26671
#define P_Target_Cmd 26672
#define P_Temp_Bit 26673
#define P_Get_ErrorCode 26674
#define P_Rtn_Code 26675
#define P_Complete_Hold_Bit 26676
#define P_HoldMtion_Flag 26677
#define P_Ret_BitWise 26678
#define P_NotEnough_GetSpace 26679
#define P_NotEnough_SetSpace 26680
#define P_Check_SetSpace 26681
#define P_Hold_Get_Data 26682
#define P_Err_NextID_Flag 26683
#define P_Elec_Bit 26684
#define P_MotionData 26685
#define P_DataList 26686
#define P_Hold_Data_Err 26691
#define P_Cur_PosX1 26701
#define P_Cur_PosZ1 26702
#define P_Cur_PosX2 26703
#define P_Cur_PosZ2 26704
#define P_Dest_PosX 26705
#define P_Dest_PosZ 26706
#define P_FailToParse 26707
#define P_CurTrigger 26708
#define P_TimeOutTrigger 26709
#define P_CalcTime 26710
#define P_Cycle_Count 26711
#define P_MotionTimeOutFlag 26712
#define P_Set_Data 26713
#define P_Rtn 26714
#define P_CurPosTestBit 26715
#define P_Hold_Anode_Pause_CHK 26716
#define P_Hold_Cathode_Pause_CHK 26717
#define P_Surface_Complete_To_Hold 26718
#define P_Hold_Motion_Arr 26719
#define P_Hold_Pause_Trg 26739
#define P_From_Staring_Flag 26740
#define P_Hold_Existence_Insp_Enqueue_Flag 26741
#define P_Hold_Rtn 26742
#define P_Debug_Existence_Insp_STEP 26743
#define P_Hold_Align_Sheet_CHK 26744
#define P_Hold_Cathode_Exception_Empty_Flag 26745
#define P_Hold_Anode_Exception_Empty_Flag 26746
#define P_HOLD_Hold_Process_State_Machine 26747
#define P_Hold_Stop_Sheet_Process_STEP 26748
#define P_Hold_Debug_Sheet_Process_STEP 26749
#define P_Hold_Stop_Point 26750
#define P_Hold_CHK 26751
#define P_Hold_Test 26752
#define P_Anode_1st_Motion_Complete 26753
#define P_Anode_2nd_Motion_Complete 26754
#define P_Anode_NG_PNP_Motion_Complete 26755
#define P_Cathode_1st_Motion_Complete 26756
#define P_Cathode_2nd_Motion_Complete 26757
#define P_Cathode_NG_PNP_Motion_Complete 26758
#define P_Anode_1st_Picker_Motion_Complete 26759
#define P_Cathode_1st_Picker_Motion_Complete 26760
#define P_individual_return 26761
#define P_individual_return2 26762
#define P_HoldCurPosBit1 26763
#define P_HoldCurPosBit2 26764
#define P_Parsing_Status 26765
#define P_Sel_Obj 26766
#define P_Sel_Elec 26767
#define P_Error 26768
#define P_Vision_FirstSepa_Complete 26769
#define P_NG_PNP_Turn_TM 26770
#define P_NG_PNP_Turn_TS 26771
#define P_NG_PNP_Turn_TA 26772
#define P_NG_PNP_Up_TM 26773
#define P_NG_PNP_Up_TS 26774
#define P_NG_PNP_Up_TA 26775
#define P_NG_PNP_Down_TM 26776
#define P_NG_PNP_Down_TS 26777
#define P_NG_PNP_Down_TA 26778
#define P_NG_PNP_Vac_Time 26779
#define P_NG_PNP_Blow_Time 26780
#define P_Slow_NG_Mode_Btn 26781
#define P_HOLD_Memory_Tower_Offset 26782
#define P_Hold_Pause_Use 26783
#define P_Hold_Err_MNTR 26784
#define P_Hold_Err_Data_Save 26788
#define P_Hold_Err_Action_Data_Save 26796
#define P_Hold_Motion_Err_Chk 26804
#define P_Hold_Memory_Tower_Err_Pos 26805
#define P_Hold_Motion_TimeOut 26820
#define P_Hold_Data_OK 26821
#define P_VISION_TRG_PLC4_AnodeSurface_Ins_Shoot 26822
#define P_VISION_TRG_PLC4_CathodeSurface_Ins_Shoot 26823
#define P_Memory_Tower_Test 26824
#define P_Temp_Run_Mode 26825
#define P_Data_Idx 26826
#define P_Get_Data_Idx 26827
#define P_HOLD_Data_Err_Queue 26828
#define P_HOLD_Data_Err_State_Machine 26829
#define P_HOLD_Err_Set_Data 26830
#define P_HOLD_Err_Save 26831
#define P_Sepa_Run_Completed_Flag 26832
#define M_Motor_Vel 9129
#define M_Motor_TA 9179
#define M_Motor_TD 9229
#define M_Motor_BTN 9279
#define M_Motor_RecipePos 9329
#define M_Motor_Move_Distance 9379
#define M_Motor_Home_Offset 9429
#define M_Motor_Pos_Data 9479
#define M_Motor_Status_Data 9529
#define M_Motor_Recipe_Pos_Interlock 9579
#define M_Motor_Peak_Load_Ratio 9629
#define M_Motor_Effective_Load_Ratio 9679
#define M_Motor_Check_Current_Recipe_Pos 9729
#define P_Buffer_Seqdata_MSA_Array 26833
#define P_Buffer_Seqdata_Align_Take_Off_Array 26883
#define P_VISION_MSA_Align_Module_Complete_Bit 26933
#define P_Module_Manual_MSA_Act_Command_Array 27033
#define P_OLD_Module_Manual_MSA_Act_Command_Array 27133
#define P_Module_MSA_Act_State_Machine_Array 27233
#define P_VISION_MSA_Seq_Stopping_Point 27333
#define P_Align_Take_Off_Module_Complete_Bit 27366
#define P_Module_Manual_Align_Take_Off_Act_Command_Array 27466
#define P_OLD_Module_Manual_Align_Take_Off_Act_Command_Array 27566
#define P_Module_Align_Take_Off_Act_State_Machine_Array 27666
#define P_Log_Data_Y 27766
#define P_Log_Data_M 27767
#define P_Log_Data_D 27768
#define P_Log_Data_H 27769
#define P_Log_Data_m 27770
#define P_Log_Data_s 27771
#define P_MNTR_End_Index 27772
#define P_BG_CPLC_Running_MNTR 50
#define P_RTI_CPLC_Running_MNTR 51
#define P_Log_Start_Flag 170
#define P_Log_Document_Remove_Flag 171
#define P_Sepa_ID_Change_Flag 172
#define P_USB_Register 173
#define P_Cur_Line_Check 175
#define P_Cur_Line_Check_Init 176
#define P_Buffer_Judge_Trg 27773
#define P_Hold_Pass 27783
#define P_PLC01_Queue_MNTR 27784
#define P_PLC01_Total_Step_Flag 27799
#define P_PLC02_Total_Step_Flag 27800
#define P_PLC014_Total_Step_Flag 27801
#define P_PLC02_Total_Step_Flag2 27802
#define P_Vac_Pass 27803
#define P_Vision_Pass_Exisitence 27804
#define P_Vision_Pass_Empty 27805
#define P_Vision_Pass_FirstSepa 27806
#define P_Vision_Pass_Stack_Inspection 27807
#define P_ULD_Home_Pass 27808
#define P_Clamp_Cell_Down_Use 27809
#define P_FR_Clamp_Use_Test 27810
#define P_Door_Interlock_Use_Flag 27811
#define P_Vacuum_Door_Clear_Use 27812
#define P_Align_Test_Pos 27813
#define P_PLC01_Exe_Is_Ena_Step_Flag 27814
#define P_PLC01_Exe_Fist_Sepa_Step_Flag 27824
#define P_PLC01_Exe_Prod_Step_Flag 27834
#define P_PLC01_HOLD_Insp_Step_Flag 27839
#define P_PLC01_HOLD_Main_Step_Flag 27849
#define P_PLC01_Sus_Discharge_Step_Flag 27864
#define P_PLC01_Sus_ARC_Step_Flag 27874
#define P_PLC01_STOP_Init_Step_Flag 27884
#define P_PLC01_STOP_Cycle_ST_Step_Flag 27894
#define P_PLC02_Exe_Module_First_Sepa_Step_Flag 27909
#define P_PLC02_Sus_Module_Discharge_Step_Flag 27910
#define P_PLC02_Sus_Module_ARC_Step_Flag 27911
#define P_PLC02_Sus_Module_1TR_Supply_Step_Flag 27912
#define P_PLC02_HOLD_Module_Insp_Step_Flag 27913
#define P_PLC02_HOLD_Module_Remove_NGPNP_Step_Flag 27914
#define P_PLC02_HOLD_Module_Remove_Align_Step_Flag 27915
#define P_PLC02_HOLD_Module_Remove_2TR_Step_Flag 27916
#define P_PLC02_HOLD_Module_Supply_1TR_Step_Flag 27917
#define P_PLC02_HOLD_Module_Supply_Align_Step_Flag 27918
#define P_PLC02_HOLD_Module_Supply_2TR_Step_Flag 27919
#define P_PLC02_HOLD_Module_SemiRun_Pos_Step_Flag 27920
#define P_PLC14_STOP_Module_Cycle_Stop_Step_Flag 27921
#define P_PLC02_Discharge_MNTR 27922
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
#define P_Error_Index_Number 27923
#define P_ECAT_MNTR_Bit 27924
#define P_Local_MNTR_Bit 27925
#define P_Clamp_Motion_VER1 27926
#define P_CA_DR_Ta 27927
#define P_CA_DR_Ts 27928
#define P_CA_DR_Tm 27929
#define P_CA_DR_Td 27930
#define P_CA_DR_Tsd 27931
#define P_AN_DR_Ta 27932
#define P_AN_DR_Ts 27933
#define P_AN_DR_Tm 27934
#define P_AN_DR_Td 27935
#define P_AN_DR_Tsd 27936
#define P_First_Sepa_1st_Driving_Move 27937
#define P_AN_Cam_Total_Time 27938
#define P_CA_Cam_Total_Time 27939
#define P_Dry_Run_BTN 27940
#define P_Home_Angle_Offset_change_Bit 27941
#define P_InterLock_Motor_Num 27942
#define P_Recipe_Move_IL_Loop 27943
#define P_Z_Var 27944
#define P_No1_Recipe_Pos_IL 27945
#define P_No2_Recipe_Pos_IL 27998
#define P_No3_Recipe_Pos_IL 28051
#define P_No4_Recipe_Pos_IL 28104
#define P_No5_Recipe_Pos_IL 28157
#define P_No6_Recipe_Pos_IL 28210
#define P_No7_Recipe_Pos_IL 28263
#define P_No8_Recipe_Pos_IL 28316
#define P_No9_Recipe_Pos_IL 28369
#define P_No10_Recipe_Pos_IL 28422
#define P_Recipe_POS_Interock_M 28475
#endif
#endif
#endif //_PP_PROJ_H_
