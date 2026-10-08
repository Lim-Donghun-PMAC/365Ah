
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
#define	P_Slave7_Move_X_Clamp_On_1st	pshm->P[8744]
#define	P_Slave7_Move_X_Clamp_On_2nd	pshm->P[8745]
#define	P_Slave7_Move_X_Clamp_On_3rd	pshm->P[8746]
#define	P_Slave7_Move_X_Clamp_On_4th	pshm->P[8747]
#define	P_Slave7_Move_X_Clamp_Off_1st	pshm->P[8748]
#define	P_Slave7_Move_X_Clamp_Off_2nd	pshm->P[8749]
#define	P_Slave7_Move_X_Clamp_Off_3rd	pshm->P[8750]
#define	P_Slave7_Move_Z_Clamp_On_1st	pshm->P[8751]
#define	P_Slave7_Move_Z_Clamp_On_2nd	pshm->P[8752]
#define	P_Slave7_Move_Z_Clamp_On_3rd	pshm->P[8753]
#define	P_Slave7_Move_Z_Clamp_On_4th	pshm->P[8754]
#define	P_Slave7_Move_Z_Clamp_Off_1st	pshm->P[8755]
#define	P_Slave7_Move_Z_Clamp_Off_2nd	pshm->P[8756]
#define	P_Slave7_Move_Z_Clamp_Off_3rd	pshm->P[8757]
#define	P_Slave7_Move_Z_Down	pshm->P[8758]
#define	P_Slave8_Move_X_Align_To_Stack_1st	pshm->P[8759]
#define	P_Slave8_Move_X_Align_To_Stack_2nd	pshm->P[8760]
#define	P_Slave8_Move_X_Stack_To_Align_1st	pshm->P[8761]
#define	P_Slave8_Move_X_Stack_To_Align_2nd	pshm->P[8762]
#define	P_Slave8_Move_X_Stack_To_Align_3rd	pshm->P[8763]
#define	P_Slave8_Move_Z_Align_To_Stack_1st	pshm->P[8764]
#define	P_Slave8_Move_Z_Align_To_Stack_2nd	pshm->P[8765]
#define	P_Slave8_Move_Z_Stack_To_Align_1st	pshm->P[8766]
#define	P_Slave8_Move_Z_Stack_To_Align_2nd	pshm->P[8767]
#define	P_Slave8_Move_Z_Stack_To_Align_3rd	pshm->P[8768]
#define	P_Slave8_Move_Z_Align_Up	pshm->P[8769]
#define	P_Slave8_Move_Z_Align_Down	pshm->P[8770]
#define	P_Slave8_Move_Z_Stack_Up	pshm->P[8771]
#define	P_Slave8_Move_Z_Stack_Down	pshm->P[8772]
#define	P_Slave10_Move_X_Belt_Align	pshm->P[8773]
#define	P_Slave10_Move_X_Align_Belt	pshm->P[8774]
#define	P_Slave10_Move_X_Belt_NG	pshm->P[8775]
#define	P_Slave10_Move_X_NG_Belt	pshm->P[8776]
#define	P_Slave10_Move_X_Align_NG	pshm->P[8777]
#define	P_Slave10_Move_Z_Belt_Down	pshm->P[8778]
#define	P_Slave10_Move_Z_Belt_Up	pshm->P[8779]
#define	P_Slave10_Move_X_NG_Align	pshm->P[8780]
#define	P_Slave10_Move_Z_Align_Down	pshm->P[8781]
#define	P_Slave10_Move_Z_Align_Up	pshm->P[8782]
#define	P_Slave10_Move_Z_NG_Down	pshm->P[8783]
#define	P_Slave10_Move_Z_NG_Up	pshm->P[8784]
#define	P_Slave1_Offset_X_Align	pshm->P[8785]
#define	P_Slave1_Offset_X_Belt	pshm->P[8786]
#define	P_Slave1_Offset_X_NG	pshm->P[8787]
#define	P_Slave1_Offset_Z_Belt	pshm->P[8788]
#define	P_Slave1_Offset_Z_Align	pshm->P[8789]
#define	P_Slave1_Offset_Z_NG	pshm->P[8790]
#define	P_Slave1_Offset_Z_Up	pshm->P[8791]
#define	P_Slave3_Offset_X_Stack	pshm->P[8792]
#define	P_Slave3_Offset_X_Align	pshm->P[8793]
#define	P_Slave3_Offset_Z_Stack	pshm->P[8794]
#define	P_Slave3_Offset_Z_Align	pshm->P[8795]
#define	P_Slave3_Offset_Z_Align_Up	pshm->P[8796]
#define	P_Slave3_Offset_Z_Align_Down	pshm->P[8797]
#define	P_Slave3_Offset_Z_Stack_Up	pshm->P[8798]
#define	P_Slave3_Offset_Z_Stack_Down	pshm->P[8799]
#define	P_Slave3_Offset_Z_Wait_Pos	pshm->P[8800]
#define	P_Slave4_Offset_X_Clamp_On	pshm->P[8801]
#define	P_Slave4_Offset_X_Clamp_Off	pshm->P[8802]
#define	P_Slave4_Offset_Z_Clamp_On	pshm->P[8803]
#define	P_Slave4_Offset_Z_Clamp_Off	pshm->P[8804]
#define	P_Slave5_Offset_X_Anode_Move_1st	pshm->P[8805]
#define	P_Slave5_Offset_X_Anode_Move_2nd	pshm->P[8806]
#define	P_Slave5_Offset_X_Cathode_Move_1st	pshm->P[8807]
#define	P_Slave5_Offset_X_Cathode_Move_2nd	pshm->P[8808]
#define	P_Slave5_Offset_X_Sepa_1st	pshm->P[8809]
#define	P_Slave5_Offset_X_Sepa_2nd	pshm->P[8810]
#define	P_Slave5_Offset_X_Sepa_3rd	pshm->P[8811]
#define	P_Slave5_Offset_X_Sepa_4th	pshm->P[8812]
#define	P_Slave5_Offset_X_Sepa_5th	pshm->P[8813]
#define	P_Slave5_Offset_Z_Sepa_1st	pshm->P[8814]
#define	P_Slave5_Offset_Z_Sepa_2nd	pshm->P[8815]
#define	P_Slave5_Offset_Z_Sepa_3rd	pshm->P[8816]
#define	P_Slave5_Offset_Z_Sepa_4th	pshm->P[8817]
#define	P_Slave5_Offset_Z_Sepa_5th	pshm->P[8818]
#define	P_Slave6_Offset_X_For_Sepa_Mode	pshm->P[8819]
#define	P_Slave6_Offset_Z_Wait_Pos	pshm->P[8820]
#define	P_Slave7_Offset_X_Clamp_On	pshm->P[8821]
#define	P_Slave7_Offset_X_Clamp_Off	pshm->P[8822]
#define	P_Slave7_Offset_Z_Clamp_On	pshm->P[8823]
#define	P_Slave7_Offset_Z_Clamp_Off	pshm->P[8824]
#define	P_Slave8_Offset_X_Stack	pshm->P[8825]
#define	P_Slave8_Offset_X_Align	pshm->P[8826]
#define	P_Slave8_Offset_Z_Stack	pshm->P[8827]
#define	P_Slave8_Offset_Z_Align	pshm->P[8828]
#define	P_Slave8_Offset_Z_Align_Up	pshm->P[8829]
#define	P_Slave8_Offset_Z_Align_Down	pshm->P[8830]
#define	P_Slave8_Offset_Z_Stack_Up	pshm->P[8831]
#define	P_Slave8_Offset_Z_Stack_Down	pshm->P[8832]
#define	P_Slave8_Offset_Z_Wait_Pos	pshm->P[8833]
#define	P_Slave10_Offset_X_Align	pshm->P[8834]
#define	P_Slave10_Offset_X_Belt	pshm->P[8835]
#define	P_Slave10_Offset_X_NG	pshm->P[8836]
#define	P_Slave10_Offset_Z_Belt	pshm->P[8837]
#define	P_Slave10_Offset_Z_Align	pshm->P[8838]
#define	P_Slave10_Offset_Z_NG	pshm->P[8839]
#define	P_Slave10_Offset_Z_Up	pshm->P[8840]
#define	P_Slave1_Target_Z_CV_Blower_On_Pos	pshm->P[8841]
#define	P_Slave1_Target_Z_CV_Blower_Off_Pos	pshm->P[8842]
#define	P_Slave10_Target_Z_CV_Blower_On_Pos	pshm->P[8843]
#define	P_Slave10_Target_Z_CV_Blower_Off_Pos	pshm->P[8844]
#define	P_Anode_CV_Blower_On_Flag	pshm->P[8845]
#define	P_Anode_CV_Blower_Off_Flag	pshm->P[8846]
#define	P_Cathode_CV_Blower_On_Flag	pshm->P[8847]
#define	P_Cathode_CV_Blower_Off_Flag	pshm->P[8848]
#define	P_Select_RingBlow_Off_Use	pshm->P[8849]
#define	P_2nd_PNP_Stack_Down_Pos	pshm->P[8850]
#define	P_2nd_PNP_Stack_Up_Pos	pshm->P[8851]
#define	P_Anode_Clamp_Down_MNTR	pshm->P[8852]
#define	P_Cathode_Clamp_Down_MNTR	pshm->P[8853]
#define	P_Clamp_1st_Vector_Y	pshm->P[8854]
#define	P_Clamp_1st_Vector_Z	pshm->P[8855]
#define	P_Clamp_1st_Vector_Vel	pshm->P[8856]
#define	P_Clamp_2nd_Vector_Y	pshm->P[8857]
#define	P_Clamp_2nd_Vector_Z	pshm->P[8858]
#define	P_Clamp_2nd_Vector_Vel	pshm->P[8859]
#define	P_Clamp_2nd_TM_Time	pshm->P[8860]
#define	P_FR_Ta	pshm->P[8861]
#define	P_FR_Ts	pshm->P[8862]
#define	P_FR_Tm	pshm->P[8863]
#define	P_Master_Motion_Heartbit_Flag	pshm->P[8864]
#define	P_Master_Heartbit_Trigger	pshm->P[8865]
#define	P_Parity_Heartbit_Bit	pshm->P[8866]
#define	P_Master_Heartbit_Move	pshm->P[8867]
#define	P_Force_Stop_Flag	pshm->P[8868]
#define	P_Execute_DryRun_Stop_Timer	pshm->P[8869]
#define	P_DryRun_Timer	pshm->P[8870]
#define	P_Dryrun_Operating_Time	pshm->P[8871]
#define	P_Anode_Align_Vac_Err_On	pshm->P[8872]
#define	P_Cathode_Align_Vac_Err_On	pshm->P[8873]
#define	P_Anode_1ST_TR_Vac_Err_On	pshm->P[8874]
#define	P_Anode_2ND_TR_Vac_Err_On	pshm->P[8875]
#define	P_Cathode_1ST_TR_Vac_Err_On	pshm->P[8876]
#define	P_Cathode_2ND_TR_Vac_Err_On	pshm->P[8877]
#define	P_MNTR_PLC0_Task_Time(i)	pshm->P[(8878+i)%MAX_P]
#define	P_MNTR_PLC0_Task_Max_Time	pshm->P[8880]
#define	P_MNTR_PLC1_Task_Time(i)	pshm->P[(8881+i)%MAX_P]
#define	P_MNTR_PLC1_Task_Max_Time	pshm->P[8883]
#define	P_MNTR_PLC2_Task_Time(i)	pshm->P[(8884+i)%MAX_P]
#define	P_MNTR_PLC2_Task_Max_Time	pshm->P[8886]
#define	P_MNTR_PLC3_Task_Time(i)	pshm->P[(8887+i)%MAX_P]
#define	P_MNTR_PLC3_Task_Max_Time	pshm->P[8889]
#define	P_MNTR_PLC4_Task_Time(i)	pshm->P[(8890+i)%MAX_P]
#define	P_MNTR_PLC4_Task_Max_Time	pshm->P[8892]
#define	P_MNTR_PLC5_Task_Time(i)	pshm->P[(8893+i)%MAX_P]
#define	P_MNTR_PLC5_Task_Max_Time	pshm->P[8895]
#define	P_MNTR_PLC6_Task_Time(i)	pshm->P[(8896+i)%MAX_P]
#define	P_MNTR_PLC6_Task_Max_Time	pshm->P[8898]
#define	P_MNTR_PLC7_Task_Time(i)	pshm->P[(8899+i)%MAX_P]
#define	P_MNTR_PLC7_Task_Max_Time	pshm->P[8901]
#define	P_MNTR_PLC8_Task_Time(i)	pshm->P[(8902+i)%MAX_P]
#define	P_MNTR_PLC8_Task_Max_Time	pshm->P[8904]
#define	P_MNTR_PLC9_Task_Time(i)	pshm->P[(8905+i)%MAX_P]
#define	P_MNTR_PLC9_Task_Max_Time	pshm->P[8907]
#define	P_MNTR_PLC10_Task_Time(i)	pshm->P[(8908+i)%MAX_P]
#define	P_MNTR_PLC10_Task_Max_Time	pshm->P[8910]
#define	P_MNTR_PLC11_Task_Time(i)	pshm->P[(8911+i)%MAX_P]
#define	P_MNTR_PLC11_Task_Max_Time	pshm->P[8913]
#define	P_MNTR_PLC12_Task_Time(i)	pshm->P[(8914+i)%MAX_P]
#define	P_MNTR_PLC12_Task_Max_Time	pshm->P[8916]
#define	P_MNTR_PLC13_Task_Time(i)	pshm->P[(8917+i)%MAX_P]
#define	P_MNTR_PLC13_Task_Max_Time	pshm->P[8919]
#define	P_MNTR_PLC14_Task_Time(i)	pshm->P[(8920+i)%MAX_P]
#define	P_MNTR_PLC14_Task_Max_Time	pshm->P[8922]
#define	P_MNTR_PLC15_Task_Time(i)	pshm->P[(8923+i)%MAX_P]
#define	P_MNTR_PLC15_Task_Max_Time	pshm->P[8925]
#define	P_MNTR_PLC16_Task_Time(i)	pshm->P[(8926+i)%MAX_P]
#define	P_MNTR_PLC16_Task_Max_Time	pshm->P[8928]
#define	P_MNTR_PLC17_Task_Time(i)	pshm->P[(8929+i)%MAX_P]
#define	P_MNTR_PLC17_Task_Max_Time	pshm->P[8931]
#define	P_MNTR_PLC18_Task_Time(i)	pshm->P[(8932+i)%MAX_P]
#define	P_MNTR_PLC18_Task_Max_Time	pshm->P[8934]
#define	P_MNTR_PLC19_Task_Time(i)	pshm->P[(8935+i)%MAX_P]
#define	P_MNTR_PLC19_Task_Max_Time	pshm->P[8937]
#define	P_MNTR_PLC20_Task_Time(i)	pshm->P[(8938+i)%MAX_P]
#define	P_MNTR_PLC20_Task_Max_Time	pshm->P[8940]
#define	P_MNTR_PLC21_Task_Time(i)	pshm->P[(8941+i)%MAX_P]
#define	P_MNTR_PLC21_Task_Max_Time	pshm->P[8943]
#define	P_MNTR_PLC22_Task_Time(i)	pshm->P[(8944+i)%MAX_P]
#define	P_MNTR_PLC22_Task_Max_Time	pshm->P[8946]
#define	P_MNTR_PLC23_Task_Time(i)	pshm->P[(8947+i)%MAX_P]
#define	P_MNTR_PLC23_Task_Max_Time	pshm->P[8949]
#define	P_MNTR_PLC24_Task_Time(i)	pshm->P[(8950+i)%MAX_P]
#define	P_MNTR_PLC24_Task_Max_Time	pshm->P[8952]
#define	P_MNTR_PLC25_Task_Time(i)	pshm->P[(8953+i)%MAX_P]
#define	P_MNTR_PLC25_Task_Max_Time	pshm->P[8955]
#define	P_MNTR_PLC26_Task_Time(i)	pshm->P[(8956+i)%MAX_P]
#define	P_MNTR_PLC26_Task_Max_Time	pshm->P[8958]
#define	P_MNTR_PLC27_Task_Time(i)	pshm->P[(8959+i)%MAX_P]
#define	P_MNTR_PLC27_Task_Max_Time	pshm->P[8961]
#define	P_MNTR_PLC28_Task_Time(i)	pshm->P[(8962+i)%MAX_P]
#define	P_MNTR_PLC28_Task_Max_Time	pshm->P[8964]
#define	P_MNTR_PLC29_Task_Time(i)	pshm->P[(8965+i)%MAX_P]
#define	P_MNTR_PLC29_Task_Max_Time	pshm->P[8967]
#define	P_MNTR_PLC30_Task_Time(i)	pshm->P[(8968+i)%MAX_P]
#define	P_MNTR_PLC30_Task_Max_Time	pshm->P[8970]
#define	P_Coord_Shutdown_Status_log	pshm->P[8971]
#define	P_In_Pos_Trg	pshm->P[8972]
#define	P_Position_Calc_Status	pshm->P[8973]
#define	P_Vision_Result(i)	pshm->P[(8974+i)%MAX_P]
#define	P_Vision_Result_Get_First_Cycle(i)	pshm->P[(8978+i)%MAX_P]
#define	P_Init_Result(i)	pshm->P[(8982+i)%MAX_P]
#define	P_PNP_Pos	pshm->P[8988]
#define	P_Execute_Manage_Mode	pshm->P[8989]
#define	P_Align_NG_Tack_Flag	pshm->P[8990]
#define	P_2th_Ng_Front_Vision_Pos	pshm->P[8991]
#define	P_Anode_Align_OK_Flag	pshm->P[8992]
#define	P_Anode_Align_NG_Flag	pshm->P[8993]
#define	P_Cathode_Align_OK_Flag	pshm->P[8994]
#define	P_Cathode_Align_NG_Flag	pshm->P[8995]
#define	P_Stack_Table_OK_Flag	pshm->P[8996]
#define	P_Anode_Retry_OK_Flag	pshm->P[8997]
#define	P_Anode_Retry_NG_Flag	pshm->P[8998]
#define	P_Cathode_Retry_OK_Flag	pshm->P[8999]
#define	P_Cathode_Retry_NG_Flag	pshm->P[9000]
#define	P_Func_Anode_2TR_Avoid_X_Value	pshm->P[9001]
#define	P_Func_Cathode_2TR_Avoid_X_Value	pshm->P[9002]
#define	P_Anode_Surf_Insp_Trigger	pshm->P[9003]
#define	P_Cathode_Surf_Insp_Trigger	pshm->P[9004]
#define	P_CMD_Cathode_Vision_Tigger	pshm->P[9005]
#define	P_CMD_Anode_Vision_Tigger	pshm->P[9006]
#define	P_CMD_Stack_Table_Vision_Trigger	pshm->P[9007]
#define	P_CMD_Cathode_Empty_Table_Vision	pshm->P[9008]
#define	P_CMD_Anode_Empty_Table_Vision	pshm->P[9009]
#define	P_CMD_Cathode_Existence_Vision	pshm->P[9010]
#define	P_CMD_Anode_Existence_Vision	pshm->P[9011]
#define	P_Align_Manager_Error_Cnt	pshm->P[9012]
#define	P_Surf_Manager_Error_Cnt	pshm->P[9013]
#define	P_Retry_Manager_Error_Cnt	pshm->P[9014]
#define	P_Stack_Manager_Error_Cnt	pshm->P[9015]
#define	P_Existence_Manager_Error_Cnt	pshm->P[9016]
#define	P_Where_To_Occur_Error_Retry_Status	pshm->P[9017]
#define	P_Which_Retry_Insp_Type	pshm->P[9018]
#define	P_Where_To_Occur_Error_Align_Status	pshm->P[9019]
#define	P_Which_Align_Insp_Type	pshm->P[9020]
#define	P_Where_To_Occur_Error_Surf_Status	pshm->P[9021]
#define	P_Which_Surf_Insp_Type	pshm->P[9022]
#define	P_Where_To_Occur_Error_Existence_Status	pshm->P[9023]
#define	P_Which_Existence_Insp_Type	pshm->P[9024]
#define	P_Where_To_Occur_Error_Stack_Status	pshm->P[9025]
#define	P_Vision_Clamping_Flag	pshm->P[9026]
#define	P_Exist_Insp_Total_Time	pshm->P[9027]
#define	P_Exist_Insp_Trg_Time	pshm->P[9028]
#define	P_Stack_Insp_Total_Time	pshm->P[9029]
#define	P_Stack_Trg_Time	pshm->P[9030]
#define	P_Surf_Insp_Total_Time	pshm->P[9031]
#define	P_Retry_Insp_Total_Time	pshm->P[9032]
#define	P_Surf_TimeOut_Cnt	pshm->P[9033]
#define	P_Align_TimeOut_Cnt	pshm->P[9034]
#define	P_Retry_TimeOut_Cnt	pshm->P[9035]
#define	P_Stack_TimeOut_Cnt	pshm->P[9036]
#define	P_Align_Insp_Total_Time	pshm->P[9037]
#define	P_Align_Trg_Time	pshm->P[9038]
#define	P_Aligning_Time	pshm->P[9039]
#define	P_Cathode_Empty_Table_Vision_Flag	pshm->P[9040]
#define	P_Anode_Empty_Table_Vision_Flag	pshm->P[9041]
#define	P_Selected_Surf_Insp_Type	pshm->P[9042]
#define	P_Selected_Align_Insp_Type	pshm->P[9043]
#define	P_Selected_Retry_Insp_Type	pshm->P[9044]
#define	P_Selected_Exist_Insp_Type	pshm->P[9045]
#define	P_VISION_RECIPE_PLC4_Surface_TrgOff	pshm->P[9046]
#define	P_VISION_RECIPE_PLC4_Surface_Ins_Time	pshm->P[9047]
#define	P_CMD_Cathode_Vision_Retry	pshm->P[9048]
#define	P_CMD_Anode_Vision_Retry	pshm->P[9049]
#define	P_Prev_Align_Manager_Status	pshm->P[9050]
#define	P_Prev_Surf_Manager_Status	pshm->P[9051]
#define	P_Prev_Exist_Manager_Status	pshm->P[9052]
#define	P_Prev_Selected_Align_Type	pshm->P[9053]
#define	P_Prev_Selected_Surf_Type	pshm->P[9054]
#define	P_Prev_Selected_Exist_Type	pshm->P[9055]
#define	P_Status_Align_Vision_Manager	pshm->P[9056]
#define	P_Status_Surface_Vision_Manager	pshm->P[9057]
#define	P_Status_Sheet_Existence_Vision_Manager	pshm->P[9058]
#define	P_Status_Stack_Vision_Manager	pshm->P[9059]
#define	P_Status_Retry_Vision_Manager	pshm->P[9060]
#define	P_Vision_All_Status_Manager_Init_Flag	pshm->P[9061]
#define	P_Cycle_Stop_Command	pshm->P[9062]
#define	P_Surface_Inspection_Complete_Error	pshm->P[9063]
#define	P_Switching_From_Cathode_To_Anode_Flag	pshm->P[9064]
#define	P_Switching_From_Anode_To_Cathode_Flag	pshm->P[9065]
#define	P_Switching_Mode_Complete_Flag	pshm->P[9066]
#define	P_Surf_Cathode_Error_Count	pshm->P[9067]
#define	P_Surf_Anode_Error_Count	pshm->P[9068]
#define	P_First_Anode_Sheet_Supply_Flag	pshm->P[9069]
#define	P_First_Cathode_Sheet_Supply_Flag	pshm->P[9070]
#define	P_Set_Cathode_Align_Pos_Zero	pshm->P[9071]
#define	P_Set_Anode_Align_Pos_Zero	pshm->P[9072]
#define	P_Cathode_Cur_Mode	pshm->P[9073]
#define	P_Anode_Cur_Mode	pshm->P[9074]
#define	P_AN_to_CA_DR_Trig	pshm->P[9075]
#define	P_CA_to_AN_DR_Trig	pshm->P[9076]
#define	P_Tension_FF(i)	pshm->P[(9077+i)%MAX_P]
#define	P_Sepa_CompDac_Value	pshm->P[9079]
#define	P_FR_Move_Command	pshm->P[9080]
#define	P_FF_Enable	pshm->P[9081]
#define	P_Anode_Run_FR_Move_Check_AI	pshm->P[9082]
#define	P_Cathode_Run_FR_Move_Check_AI	pshm->P[9083]
#define	P_FR_Move_Check_AI_OffSet	pshm->P[9084]
#define	P_FR_AI_Value(i)	pshm->P[(9085+i)%MAX_P]
#define	P_Aver_FR_AI_Value	pshm->P[9090]
#define	P_Process_Function_Command	pshm->P[9091]
#define	P_HOLD_Existence_Insp_State_Machine	pshm->P[9092]
#define	P_Execute_IsEnable_State_Machine	pshm->P[9093]
#define	P_EXECUTE_FUNC_Ready_STEP	pshm->P[9094]
#define	P_Execute_First_Sepa_Ontable_State_Machine	pshm->P[9095]
#define	P_Execute_Prod_Manage_State_Machine	pshm->P[9096]
#define	P_Execute_Enqueue_State_Machine	pshm->P[9097]
#define	P_STOP_Initial_Process_STEP	pshm->P[9098]
#define	P_STOP_Cylce_Stop_STEP	pshm->P[9099]
#define	P_Stop_CycleStop_Position	pshm->P[9100]
#define	P_Upcount_NextStep	pshm->P[9101]
#define	P_SUSPEND_FUNC_JR_Discharge_STEP	pshm->P[9102]
#define	P_SUSPEND_FUNC_ARC_STEP	pshm->P[9103]
#define	P_Suspend_ARC_Complete_Flag	pshm->P[9104]
#define	P_EXECUTE_FUNC_Debug_On_Sepa_STEP	pshm->P[9105]
#define	P_QueueCommand_Occurs	pshm->P[9106]
#define	P_EXECUTE_STEP	pshm->P[9107]
#define	P_SUSPEND_STEP	pshm->P[9108]
#define	P_HOLD_STEP	pshm->P[9109]
#define	P_STOP_STEP	pshm->P[9110]
#define	P_EXECUTE_Error_STEP	pshm->P[9111]
#define	P_SUSPEND_Error_STEP	pshm->P[9112]
#define	P_HOLD_Error_STEP	pshm->P[9113]
#define	P_STOP_Error_STEP	pshm->P[9114]
#define	P_Queue_Enqueue_Command	pshm->P[9115]
#define	P_Queue_Enqueue_return	pshm->P[9116]
#define	P_Queue_Dequeue_Command	pshm->P[9117]
#define	P_Queue_Dequeue_return	pshm->P[9118]
#define	P_Queue_Peek_Command	pshm->P[9119]
#define	P_Dequeue_Log(i)	pshm->P[(9120+i)%MAX_P]
#define	P_Dummy_Dequeue	pshm->P[9140]
#define	P_Queue_Command_Status	pshm->P[9141]
#define	P_Queue_Process_Command	pshm->P[9142]
#define	P_Queue_Process_Status	pshm->P[9143]
#define	P_Coord_Test	pshm->P[9144]
#define	P_Coord_Test3	pshm->P[9145]
#define	P_Coord_Test2	pshm->P[9146]
#define	P_Coord_Motion_Prog_Down_Entering_Bit	pshm->P[9147]
#define	P_PMAC_Coord_Status_Bit	pshm->P[9148]
#define	P_Coord_Down_Check_Bit	pshm->P[9149]
#define	P_PMAC_Coord_Down_Inspection_Flag	pshm->P[9150]
#define	P_PMAC_Coord_Down_Num	pshm->P[9151]
#define	P_PMAC_Coord_Error_Status	pshm->P[9152]
#define	P_Motor_Current_Pos(i)	pshm->P[(9153+i)%MAX_P]
#define	P_Axis_Scale_Value(i)	pshm->P[(9203+i)%MAX_P]
#define	P_Except_Return_Array(i)	pshm->P[(9253+i)%MAX_P]
#define	P_Hold_Memory(i)	pshm->P[(9353+i)%MAX_P]
#define	P_Suspend_Memory(i)	pshm->P[(9358+i)%MAX_P]
#define	P_Execute_Memory(i)	pshm->P[(9363+i)%MAX_P]
#define	P_Stop_Memory(i)	pshm->P[(9368+i)%MAX_P]
#define	P_PLC01_Process_Function_Enter_Flag	pshm->P[9373]
#define	P_PLC01_SubMotion_Active	pshm->P[9374]
#define	P_PLC01_SlaveMotion_Active	pshm->P[9375]
#define	P_EXECUTE_Isenable_MNTR	pshm->P[9376]
#define	P_EXECUTE_IsEnable_Firt_Stacking_Flag	pshm->P[9377]
#define	P_PLC01_Execute_Retry_Sepa_Mode_Count	pshm->P[9378]
#define	P_SUSPEND_MNTR	pshm->P[9379]
#define	P_SUSPEND_MNTR_2	pshm->P[9380]
#define	P_Execute_Last_Run_Flag	pshm->P[9381]
#define	P_Suspend_ARC_Request_Flag	pshm->P[9382]
#define	P_Hold_Queue_Exist_Insp_MNTR	pshm->P[9383]
#define	P_CirQueue_Status_Value	pshm->P[9384]
#define	P_Debug_CirQueue_Status	pshm->P[9385]
#define	P_Front_Index	pshm->P[9386]
#define	P_Rear_Index	pshm->P[9387]
#define	P_Index_Max	pshm->P[9388]
#define	P_CircularQueue_Command_array(i)	pshm->P[(9389+i)%MAX_P]
#define	P_CirQueue_Length	pshm->P[9400]
#define	P_Queue_Full	pshm->P[9401]
#define	P_Queue_Empty	pshm->P[9402]
#define	P_Queue_PeekEmpty	pshm->P[9403]
#define	P_Self_items	pshm->P[9404]
#define	P_Hold_Pause_Need_Flag	pshm->P[9405]
#define	P_Pause_Ready_Flag	pshm->P[9406]
#define	P_Pause_Running_Flag	pshm->P[9407]
#define	P_Resume_Ready_Flag	pshm->P[9408]
#define	P_Resume_Start_Flag	pshm->P[9409]
#define	P_Hold_Resume_Need_Flag	pshm->P[9410]
#define	P_Stack_Heart_Bit_Timer	pshm->P[9411]
#define	P_Stack_Heart_Bit_Calc	pshm->P[9412]
#define	P_Stack_Heart_Bit_Sync_State_Machine	pshm->P[9413]
#define	P_Pause_Anode_MNTR_Min_Trigger	pshm->P[9414]
#define	P_Pause_Anode_MNTR_Max_Trigger	pshm->P[9415]
#define	P_Pause_Cathode_MNTR_Min_Trigger	pshm->P[9416]
#define	P_Pause_Cathode_MNTR_Max_Trigger	pshm->P[9417]
#define	P_Pause_Protect_Variable	pshm->P[9418]
#define	P_Resume_Protect_Variable	pshm->P[9419]
#define	P_Sepa_Mode_Opposite_Resume_Free	pshm->P[9420]
#define	P_Sepa_To_Normal_Mode_Sync_Flag	pshm->P[9421]
#define	P_Sepa_To_Normal_Mode_Sync_Err_Avoid	pshm->P[9422]
#define	P_Recipe_1st_MotorNo(i)	pshm->P[(9423+i)%MAX_P]
#define	P_Recipe_2nd_MotorNo(i)	pshm->P[(9473+i)%MAX_P]
#define	P_Recipe_3rd_MotorNo(i)	pshm->P[(9523+i)%MAX_P]
#define	P_Recipe_4th_MotorNo(i)	pshm->P[(9573+i)%MAX_P]
#define	P_Recipe_5th_MotorNo(i)	pshm->P[(9623+i)%MAX_P]
#define	P_Recipe_6th_MotorNo(i)	pshm->P[(9673+i)%MAX_P]
#define	P_X_Axis_Num	pshm->P[9723]
#define	P_Y_Axis_Num	pshm->P[9724]
#define	P_Z_Axis_Num	pshm->P[9725]
#define	P_ZZ_Axis_Num	pshm->P[9726]
#define	P_X_Unit	pshm->P[9727]
#define	P_Y_Unit	pshm->P[9728]
#define	P_Z_Unit	pshm->P[9729]
#define	P_ZZ_Unit	pshm->P[9730]
#define	P_Pos_Memory_Bit_Save	pshm->P[9731]
#define	P_Total_Unit_Bit	pshm->P[9732]
#define	P_Total_Unit_Pos	pshm->P[9733]
#define	P_Anode_1st_Unit_Status	pshm->P[9734]
#define	P_Anode_2nd_Unit_Status	pshm->P[9735]
#define	P_Anode_CLP_Unit_Status	pshm->P[9736]
#define	P_FinalRoll_Unit_Status	pshm->P[9737]
#define	P_StackTable_Unit_Status	pshm->P[9738]
#define	P_Cathode_CLP_Unit_Status	pshm->P[9739]
#define	P_Cathode_2nd_Unit_Status	pshm->P[9740]
#define	P_Cathode_1st_Unit_Status	pshm->P[9741]
#define	P_1st_Unloader_Unit_Status	pshm->P[9742]
#define	P_Cathode_NG_PNP_Status	pshm->P[9743]
#define	P_Anode_NG_PNP_Status	pshm->P[9744]
#define	P_Unit_integrated_Status	pshm->P[9745]
#define	P_Unit_Status_Update_Flag	pshm->P[9746]
#define	P_Memory_Tower_Search_Flag	pshm->P[9747]
#define	P_MemTow_integrated_return	pshm->P[9748]
#define	P_Error_STMS_Memory_Tower_Status	pshm->P[9749]
#define	P_STMS_Memory_Tower_Status	pshm->P[9750]
#define	P_Recipe_M01_POS(i)	pshm->P[(9751+i)%MAX_P]
#define	P_Recipe_M02_POS(i)	pshm->P[(9762+i)%MAX_P]
#define	P_Recipe_M03_POS(i)	pshm->P[(9773+i)%MAX_P]
#define	P_Recipe_M04_POS(i)	pshm->P[(9784+i)%MAX_P]
#define	P_Recipe_M05_POS(i)	pshm->P[(9795+i)%MAX_P]
#define	P_Recipe_M06_POS(i)	pshm->P[(9806+i)%MAX_P]
#define	P_Recipe_M07_POS(i)	pshm->P[(9817+i)%MAX_P]
#define	P_Recipe_M08_POS(i)	pshm->P[(9828+i)%MAX_P]
#define	P_Recipe_M09_POS(i)	pshm->P[(9839+i)%MAX_P]
#define	P_Recipe_M10_POS(i)	pshm->P[(9850+i)%MAX_P]
#define	P_Recipe_M11_POS(i)	pshm->P[(9861+i)%MAX_P]
#define	P_Recipe_M12_POS(i)	pshm->P[(9872+i)%MAX_P]
#define	P_Recipe_M13_POS(i)	pshm->P[(9883+i)%MAX_P]
#define	P_Recipe_M14_POS(i)	pshm->P[(9894+i)%MAX_P]
#define	P_Recipe_M15_POS(i)	pshm->P[(9905+i)%MAX_P]
#define	P_Recipe_M16_POS(i)	pshm->P[(9916+i)%MAX_P]
#define	P_Recipe_M17_POS(i)	pshm->P[(9927+i)%MAX_P]
#define	P_Recipe_M18_POS(i)	pshm->P[(9938+i)%MAX_P]
#define	P_Recipe_M19_POS(i)	pshm->P[(9949+i)%MAX_P]
#define	P_Recipe_M20_POS(i)	pshm->P[(9960+i)%MAX_P]
#define	P_Recipe_M21_POS(i)	pshm->P[(9971+i)%MAX_P]
#define	P_Recipe_M22_POS(i)	pshm->P[(9982+i)%MAX_P]
#define	P_Recipe_M23_POS(i)	pshm->P[(9993+i)%MAX_P]
#define	P_Recipe_M24_POS(i)	pshm->P[(10004+i)%MAX_P]
#define	P_Recipe_M25_POS(i)	pshm->P[(10015+i)%MAX_P]
#define	P_Recipe_M26_POS(i)	pshm->P[(10026+i)%MAX_P]
#define	P_Recipe_M27_POS(i)	pshm->P[(10037+i)%MAX_P]
#define	P_Recipe_M28_POS(i)	pshm->P[(10048+i)%MAX_P]
#define	P_Recipe_M29_POS(i)	pshm->P[(10059+i)%MAX_P]
#define	P_Recipe_M30_POS(i)	pshm->P[(10070+i)%MAX_P]
#define	P_Recipe_M31_POS(i)	pshm->P[(10081+i)%MAX_P]
#define	P_Recipe_M32_POS(i)	pshm->P[(10092+i)%MAX_P]
#define	P_Recipe_M33_POS(i)	pshm->P[(10103+i)%MAX_P]
#define	P_Recipe_M34_POS(i)	pshm->P[(10114+i)%MAX_P]
#define	P_Recipe_M35_POS(i)	pshm->P[(10125+i)%MAX_P]
#define	P_Recipe_M36_POS(i)	pshm->P[(10136+i)%MAX_P]
#define	P_Recipe_M37_POS(i)	pshm->P[(10147+i)%MAX_P]
#define	P_Recipe_M38_POS(i)	pshm->P[(10158+i)%MAX_P]
#define	P_Recipe_M39_POS(i)	pshm->P[(10169+i)%MAX_P]
#define	P_Recipe_M40_POS(i)	pshm->P[(10180+i)%MAX_P]
#define	P_Recipe_M41_POS(i)	pshm->P[(10191+i)%MAX_P]
#define	P_Recipe_M42_POS(i)	pshm->P[(10202+i)%MAX_P]
#define	P_Recipe_M43_POS(i)	pshm->P[(10213+i)%MAX_P]
#define	P_Recipe_M44_POS(i)	pshm->P[(10224+i)%MAX_P]
#define	P_Recipe_M45_POS(i)	pshm->P[(10235+i)%MAX_P]
#define	P_Recipe_M46_POS(i)	pshm->P[(10246+i)%MAX_P]
#define	P_Recipe_M47_POS(i)	pshm->P[(10257+i)%MAX_P]
#define	P_Recipe_M48_POS(i)	pshm->P[(10268+i)%MAX_P]
#define	P_Recipe_M49_POS(i)	pshm->P[(10279+i)%MAX_P]
#define	P_Recipe_M50_POS(i)	pshm->P[(10290+i)%MAX_P]
#define	P_Memory_Tower_X_Err_Flag	pshm->P[10301]
#define	P_Memory_Tower_Y_Err_Flag	pshm->P[10302]
#define	P_Memory_Tower_Z_Err_Flag	pshm->P[10303]
#define	P_Memory_Tower_ZZ_Err_Flag	pshm->P[10304]
#define	P_CA_Clamp_Cell_Down_Pos	pshm->P[10305]
#define	P_AN_Clamp_Cell_Down_Pos	pshm->P[10306]
#define	P_Error_X_Axis_Packml(i)	pshm->P[(10307+i)%MAX_P]
#define	P_Error_X_Axis_Dequeue(i)	pshm->P[(10313+i)%MAX_P]
#define	P_Error_X_Axis_Num(i)	pshm->P[(10319+i)%MAX_P]
#define	P_Memory_Tower_Err_Pos_X_Save(i)	pshm->P[(10325+i)%MAX_P]
#define	P_Error_Y_Axis_Packml(i)	pshm->P[(10331+i)%MAX_P]
#define	P_Error_Y_Axis_Dequeue(i)	pshm->P[(10337+i)%MAX_P]
#define	P_Error_Y_Axis_Num(i)	pshm->P[(10343+i)%MAX_P]
#define	P_Memory_Tower_Err_Pos_Y_Save(i)	pshm->P[(10349+i)%MAX_P]
#define	P_Error_Z_Axis_Packml(i)	pshm->P[(10355+i)%MAX_P]
#define	P_Error_Z_Axis_Dequeue(i)	pshm->P[(10361+i)%MAX_P]
#define	P_Error_Z_Axis_Num(i)	pshm->P[(10367+i)%MAX_P]
#define	P_Memory_Tower_Err_Pos_Z_Save(i)	pshm->P[(10373+i)%MAX_P]
#define	P_Error_ZZ_Axis_Packml(i)	pshm->P[(10379+i)%MAX_P]
#define	P_Error_ZZ_Axis_Dequeue(i)	pshm->P[(10385+i)%MAX_P]
#define	P_Error_ZZ_Axis_Num(i)	pshm->P[(10391+i)%MAX_P]
#define	P_Memory_Tower_Err_Pos_ZZ_Save(i)	pshm->P[(10397+i)%MAX_P]
#define	P_PNP_Abort_Use_Bit	pshm->P[10403]
#define	P_PNP_Abort_Use_Total_Bit	pshm->P[10404]
#define	P_C_1st_PNP_FWD_Abort_Use_Bit	pshm->P[10405]
#define	P_C_1st_PNP_BWD_Abort_Use_Bit	pshm->P[10406]
#define	P_C_2nd_PNP_FWD_Abort_Use_Bit	pshm->P[10407]
#define	P_C_2nd_PNP_BWD_Abort_Use_Bit	pshm->P[10408]
#define	P_A_1st_PNP_FWD_Abort_Use_Bit	pshm->P[10409]
#define	P_A_1st_PNP_BWD_Abort_Use_Bit	pshm->P[10410]
#define	P_A_2nd_PNP_FWD_Abort_Use_Bit	pshm->P[10411]
#define	P_A_2nd_PNP_BWD_Abort_Use_Bit	pshm->P[10412]
#define	P_Single_Motor_Control_Bit	pshm->P[10413]
#define	P_C_1st_PNP_FWD_Abort_Calc_Bit	pshm->P[10414]
#define	P_C_1st_PNP_BWD_Abort_Calc_Bit	pshm->P[10415]
#define	P_C_2nd_PNP_FWD_Abort_Calc_Bit	pshm->P[10416]
#define	P_C_2nd_PNP_BWD_Abort_Calc_Bit	pshm->P[10417]
#define	P_A_1st_PNP_FWD_Abort_Calc_Bit	pshm->P[10418]
#define	P_A_1st_PNP_BWD_Abort_Calc_Bit	pshm->P[10419]
#define	P_A_2nd_PNP_FWD_Abort_Calc_Bit	pshm->P[10420]
#define	P_A_2nd_PNP_BWD_Abort_Calc_Bit	pshm->P[10421]
#define	P_C_1st_PNP_FWD_Cur_Pos	pshm->P[10422]
#define	P_C_1st_PNP_FWD_Cur_Vel	pshm->P[10423]
#define	P_C_1st_PNP_BWD_Cur_Pos	pshm->P[10424]
#define	P_C_1st_PNP_BWD_Cur_Vel	pshm->P[10425]
#define	P_C_2nd_PNP_FWD_Cur_Pos	pshm->P[10426]
#define	P_C_2nd_PNP_FWD_Cur_Vel	pshm->P[10427]
#define	P_C_2nd_PNP_BWD_Cur_Pos	pshm->P[10428]
#define	P_C_2nd_PNP_BWD_Cur_Vel	pshm->P[10429]
#define	P_A_1st_PNP_FWD_Cur_Pos	pshm->P[10430]
#define	P_A_1st_PNP_FWD_Cur_Vel	pshm->P[10431]
#define	P_A_1st_PNP_BWD_Cur_Pos	pshm->P[10432]
#define	P_A_1st_PNP_BWD_Cur_Vel	pshm->P[10433]
#define	P_A_2nd_PNP_FWD_Cur_Pos	pshm->P[10434]
#define	P_A_2nd_PNP_FWD_Cur_Vel	pshm->P[10435]
#define	P_A_2nd_PNP_BWD_Cur_Pos	pshm->P[10436]
#define	P_A_2nd_PNP_BWD_Cur_Vel	pshm->P[10437]
#define	P_C_1st_PNP_FWD_Limit_Pos	pshm->P[10438]
#define	P_C_1st_PNP_BWD_Limit_Pos	pshm->P[10439]
#define	P_C_2nd_PNP_FWD_Limit_Pos	pshm->P[10440]
#define	P_C_2nd_PNP_BWD_Limit_Pos	pshm->P[10441]
#define	P_A_1st_PNP_FWD_Limit_Pos	pshm->P[10442]
#define	P_A_1st_PNP_BWD_Limit_Pos	pshm->P[10443]
#define	P_A_2nd_PNP_FWD_Limit_Pos	pshm->P[10444]
#define	P_A_2nd_PNP_BWD_Limit_Pos	pshm->P[10445]
#define	P_C_1st_PNP_FWD_Max_Limit_Pos	pshm->P[10446]
#define	P_C_1st_PNP_BWD_Max_Limit_Pos	pshm->P[10447]
#define	P_C_2nd_PNP_FWD_Max_Limit_Pos	pshm->P[10448]
#define	P_C_2nd_PNP_BWD_Max_Limit_Pos	pshm->P[10449]
#define	P_A_1st_PNP_FWD_Max_Limit_Pos	pshm->P[10450]
#define	P_A_1st_PNP_BWD_Max_Limit_Pos	pshm->P[10451]
#define	P_A_2nd_PNP_FWD_Max_Limit_Pos	pshm->P[10452]
#define	P_A_2nd_PNP_BWD_Max_Limit_Pos	pshm->P[10453]
#define	P_C_1st_PNP_FWD_Remain_Stroke	pshm->P[10454]
#define	P_C_1st_PNP_BWD_Remain_Stroke	pshm->P[10455]
#define	P_C_2nd_PNP_FWD_Remain_Stroke	pshm->P[10456]
#define	P_C_2nd_PNP_BWD_Remain_Stroke	pshm->P[10457]
#define	P_A_1st_PNP_FWD_Remain_Stroke	pshm->P[10458]
#define	P_A_1st_PNP_BWD_Remain_Stroke	pshm->P[10459]
#define	P_A_2nd_PNP_FWD_Remain_Stroke	pshm->P[10460]
#define	P_A_2nd_PNP_BWD_Remain_Stroke	pshm->P[10461]
#define	P_C_1st_PNP_FWD_Stroke_Time	pshm->P[10462]
#define	P_C_1st_PNP_BWD_Stroke_Time	pshm->P[10463]
#define	P_C_2nd_PNP_FWD_Stroke_Time	pshm->P[10464]
#define	P_C_2nd_PNP_BWD_Stroke_Time	pshm->P[10465]
#define	P_A_1st_PNP_FWD_Stroke_Time	pshm->P[10466]
#define	P_A_1st_PNP_BWD_Stroke_Time	pshm->P[10467]
#define	P_A_2nd_PNP_FWD_Stroke_Time	pshm->P[10468]
#define	P_A_2nd_PNP_BWD_Stroke_Time	pshm->P[10469]
#define	P_C_1st_PNP_FWD_Max_Speed	pshm->P[10470]
#define	P_C_1st_PNP_BWD_Max_Speed	pshm->P[10471]
#define	P_C_2nd_PNP_FWD_Max_Speed	pshm->P[10472]
#define	P_C_2nd_PNP_BWD_Max_Speed	pshm->P[10473]
#define	P_A_1st_PNP_FWD_Max_Speed	pshm->P[10474]
#define	P_A_1st_PNP_BWD_Max_Speed	pshm->P[10475]
#define	P_A_2nd_PNP_FWD_Max_Speed	pshm->P[10476]
#define	P_A_2nd_PNP_BWD_Max_Speed	pshm->P[10477]
#define	P_C_1st_PNP_FWD_ACC_Dis	pshm->P[10478]
#define	P_C_1st_PNP_BWD_ACC_Dis	pshm->P[10479]
#define	P_C_2nd_PNP_FWD_ACC_Dis	pshm->P[10480]
#define	P_C_2nd_PNP_BWD_ACC_Dis	pshm->P[10481]
#define	P_A_1st_PNP_FWD_ACC_Dis	pshm->P[10482]
#define	P_A_1st_PNP_BWD_ACC_Dis	pshm->P[10483]
#define	P_A_2nd_PNP_FWD_ACC_Dis	pshm->P[10484]
#define	P_A_2nd_PNP_BWD_ACC_Dis	pshm->P[10485]
#define	P_C_1st_PNP_FWD_AbortTa	pshm->P[10486]
#define	P_C_1st_PNP_FWD_AbortTs	pshm->P[10487]
#define	P_C_1st_PNP_BWD_AbortTa	pshm->P[10488]
#define	P_C_1st_PNP_BWD_AbortTs	pshm->P[10489]
#define	P_C_2nd_PNP_FWD_AbortTa	pshm->P[10490]
#define	P_C_2nd_PNP_FWD_AbortTs	pshm->P[10491]
#define	P_C_2nd_PNP_BWD_AbortTa	pshm->P[10492]
#define	P_C_2nd_PNP_BWD_AbortTs	pshm->P[10493]
#define	P_A_1st_PNP_FWD_AbortTa	pshm->P[10494]
#define	P_A_1st_PNP_FWD_AbortTs	pshm->P[10495]
#define	P_A_1st_PNP_BWD_AbortTa	pshm->P[10496]
#define	P_A_1st_PNP_BWD_AbortTs	pshm->P[10497]
#define	P_A_2nd_PNP_FWD_AbortTa	pshm->P[10498]
#define	P_A_2nd_PNP_FWD_AbortTs	pshm->P[10499]
#define	P_A_2nd_PNP_BWD_AbortTa	pshm->P[10500]
#define	P_A_2nd_PNP_BWD_AbortTs	pshm->P[10501]
#define	P_C_1st_PNP_FWD_Abort_Dec_Offset	pshm->P[10502]
#define	P_C_1st_PNP_BWD_Abort_Dec_Offset	pshm->P[10503]
#define	P_C_2nd_PNP_FWD_Abort_Dec_Offset	pshm->P[10504]
#define	P_C_2nd_PNP_BWD_Abort_Dec_Offset	pshm->P[10505]
#define	P_A_1st_PNP_FWD_Abort_Dec_Offset	pshm->P[10506]
#define	P_A_1st_PNP_BWD_Abort_Dec_Offset	pshm->P[10507]
#define	P_A_2nd_PNP_FWD_Abort_Dec_Offset	pshm->P[10508]
#define	P_A_2nd_PNP_BWD_Abort_Dec_Offset	pshm->P[10509]
#define	P_1st_PNP_FWD_Abort_Offset(i)	pshm->P[(10510+i)%MAX_P]
#define	P_1st_PNP_BWD_Abort_Offset(i)	pshm->P[(10600+i)%MAX_P]
#define	P_2nd_PNP_FWD_Abort_Offset(i)	pshm->P[(10690+i)%MAX_P]
#define	P_2nd_PNP_BWD_Abort_Offset(i)	pshm->P[(10780+i)%MAX_P]
#define	P_Abort_Init_Value	pshm->P[10870]
#define	P_C_1st_PNP_FWD_AbortTa_Buffer	pshm->P[10871]
#define	P_C_1st_PNP_FWD_AbortTs_Buffer	pshm->P[10872]
#define	P_C_1st_PNP_BWD_AbortTa_Buffer	pshm->P[10873]
#define	P_C_1st_PNP_BWD_AbortTs_Buffer	pshm->P[10874]
#define	P_C_2nd_PNP_FWD_AbortTa_Buffer	pshm->P[10875]
#define	P_C_2nd_PNP_FWD_AbortTs_Buffer	pshm->P[10876]
#define	P_C_2nd_PNP_BWD_AbortTa_Buffer	pshm->P[10877]
#define	P_C_2nd_PNP_BWD_AbortTs_Buffer	pshm->P[10878]
#define	P_A_1st_PNP_FWD_AbortTa_Buffer	pshm->P[10879]
#define	P_A_1st_PNP_FWD_AbortTs_Buffer	pshm->P[10880]
#define	P_A_1st_PNP_BWD_AbortTa_Buffer	pshm->P[10881]
#define	P_A_1st_PNP_BWD_AbortTs_Buffer	pshm->P[10882]
#define	P_A_2nd_PNP_FWD_AbortTa_Buffer	pshm->P[10883]
#define	P_A_2nd_PNP_FWD_AbortTs_Buffer	pshm->P[10884]
#define	P_A_2nd_PNP_BWD_AbortTa_Buffer	pshm->P[10885]
#define	P_A_2nd_PNP_BWD_AbortTs_Buffer	pshm->P[10886]
#define	P_C_1st_PNP_FWD_Restore_Bit	pshm->P[10887]
#define	P_C_1st_PNP_BWD_Restore_Bit	pshm->P[10888]
#define	P_C_2nd_PNP_FWD_Restore_Bit	pshm->P[10889]
#define	P_C_2nd_PNP_BWD_Restore_Bit	pshm->P[10890]
#define	P_A_1st_PNP_FWD_Restore_Bit	pshm->P[10891]
#define	P_A_1st_PNP_BWD_Restore_Bit	pshm->P[10892]
#define	P_A_2nd_PNP_FWD_Restore_Bit	pshm->P[10893]
#define	P_A_2nd_PNP_BWD_Restore_Bit	pshm->P[10894]
#define	P_Align_Inspection_Time	pshm->P[10895]
#define	P_Front_Inspection_Time	pshm->P[10896]
#define	P_Stack_Inspection_Time	pshm->P[10897]
#define	P_Existence_Inspection_Time	pshm->P[10898]
#define	P_EmptyTable_Inspection_Time	pshm->P[10899]
#define	P_FirstSepa_Inspection_Time	pshm->P[10900]
#define	P_Vision_Anode_Sepa_Mode_Stack_Command	pshm->P[10901]
#define	P_Vision_Cathode_Sepa_Mode_Stack_Command	pshm->P[10902]
#define	P_Cathode_Sepa_Mode_Timer	pshm->P[10903]
#define	P_Anode_Sepa_Mode_Timer	pshm->P[10904]
#define	P_Vision_Pass	pshm->P[10905]
#define	P_FirstSepa_Ret	pshm->P[10906]
#define	P_Vision_Align_Command	pshm->P[10907]
#define	P_Vision_Surface_Command	pshm->P[10908]
#define	P_Vision_Stack_Command	pshm->P[10909]
#define	P_Vision_Existence_Command	pshm->P[10910]
#define	P_Vision_EmptyTable_Command	pshm->P[10911]
#define	P_Vision_FirstSepa_Command	pshm->P[10912]
#define	P_Selected_Align_Inspection_Unit	pshm->P[10913]
#define	P_Selected_Surface_Inspection_Unit	pshm->P[10914]
#define	P_Selected_Stack_Inspection_Unit	pshm->P[10915]
#define	P_Selected_Existence_Inspection_Unit	pshm->P[10916]
#define	P_Selected_EmptyTable_Inspection_Unit	pshm->P[10917]
#define	P_Set_Cathode_Align_Zero_Pos	pshm->P[10918]
#define	P_Set_Anode_Align_Zero_Pos	pshm->P[10919]
#define	P_Vision_Align_State_Machine	pshm->P[10920]
#define	P_Vision_Surface_State_Machine	pshm->P[10921]
#define	P_Vision_Stack_State_Machine	pshm->P[10922]
#define	P_Vision_Existence_State_Machine	pshm->P[10923]
#define	P_Vision_EmptyTable_State_Machine	pshm->P[10924]
#define	P_Vision_FirstSepa_State_Machine	pshm->P[10925]
#define	P_Vision_Align_Status	pshm->P[10926]
#define	P_Vision_Surface_Status	pshm->P[10927]
#define	P_Vision_Stack_Status	pshm->P[10928]
#define	P_Vision_Existence_Status	pshm->P[10929]
#define	P_Vision_EmptyTable_Status	pshm->P[10930]
#define	P_Vision_FirstSepa_Status	pshm->P[10931]
#define	P_Align_Zero_Move_Start_Flag(i)	pshm->P[(10932+i)%MAX_P]
#define	P_Cathode_Align_Table_Move	pshm->P[10934]
#define	P_Anode_Align_Table_Move	pshm->P[10935]
#define	P_Vision_Anode_Cell_Existence	pshm->P[10936]
#define	P_Vision_Cathode_Cell_Existence	pshm->P[10937]
#define	P_Align_Sheet_CHK	pshm->P[10938]
#define	P_Anode_NG_Code	pshm->P[10939]
#define	P_Cathode_NG_Code	pshm->P[10940]
#define	P_Stack_NG_Code	pshm->P[10941]
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
#define	P_Stop_Debug_Flag	pshm->P[10942]
#define	P_Stop_Sub_Master_Motion_Program_Flag(i)	pshm->P[(10943+i)%MAX_P]
#define	P_Stop_Slave_Motion_Program_Flag(i)	pshm->P[(10963+i)%MAX_P]
#define	P_Stop_Motor_Status(i)	pshm->P[(10983+i)%MAX_P]
#define	P_Stop_Coord_Status(i)	pshm->P[(11031+i)%MAX_P]
#define	P_Stop_Status_Check_Address	pshm->P[11065]
#define	P_Stop_Status_Save_Address	pshm->P[11066]
#define	P_Stop_Check_RTN	pshm->P[11067]
#define	P_Stop_Save_RTN(i)	pshm->P[(11068+i)%MAX_P]
#define	P_Old_Total_Unit_Bit	pshm->P[11072]
#define	P_Memory_Tower_Dec_Result	pshm->P[11073]
#define	P_Stop_Motor_Pos(i)	pshm->P[(11074+i)%MAX_P]
#define	P_PNP_Move_Timer	pshm->P[11083]
#define	P_PNP_Move_Delay_Time	pshm->P[11084]
#define	P_Stop_Memory_Pos_RTN	pshm->P[11085]
#define	P_Slave1_Motion_Command	pshm->P[11086]
#define	P_Slave2_Motion_Command	pshm->P[11087]
#define	P_Slave3_Motion_Command	pshm->P[11088]
#define	P_Slave4_Motion_Command	pshm->P[11089]
#define	P_Slave5_Motion_Command	pshm->P[11090]
#define	P_Slave6_Motion_Command	pshm->P[11091]
#define	P_Slave7_Motion_Command	pshm->P[11092]
#define	P_Slave8_Motion_Command	pshm->P[11093]
#define	P_Slave9_Motion_Command	pshm->P[11094]
#define	P_Slave10_Motion_Command	pshm->P[11095]
#define	P_Slave11_Motion_Command	pshm->P[11096]
#define	P_Slave12_Motion_Command	pshm->P[11097]
#define	P_Slave13_Motion_Command	pshm->P[11098]
#define	P_Slave14_Motion_Command	pshm->P[11099]
#define	P_Slave15_Motion_Command	pshm->P[11100]
#define	P_Slave16_Motion_Command	pshm->P[11101]
#define	P_Slave17_Motion_Command	pshm->P[11102]
#define	P_Slave18_Motion_Command	pshm->P[11103]
#define	P_Slave19_Motion_Command	pshm->P[11104]
#define	P_Slave20_Motion_Command	pshm->P[11105]
#define	P_PNP_90_Deg_TM	pshm->P[11106]
#define	P_PNP_90_Deg_TA	pshm->P[11107]
#define	P_PNP_90_Deg_TS	pshm->P[11108]
#define	P_PNP_Ready_TM	pshm->P[11109]
#define	P_PNP_Ready_TA	pshm->P[11110]
#define	P_PNP_Ready_TS	pshm->P[11111]
#define	P_PNP_45_Deg_TM	pshm->P[11112]
#define	P_PNP_45_Deg_TA	pshm->P[11113]
#define	P_PNP_45_Deg_TS	pshm->P[11114]
#define	P_Unloader_TM_Test	pshm->P[11115]
#define	P_Unloader_TA_Test	pshm->P[11116]
#define	P_PROG_21_Program_Ver	pshm->P[2781]
#define	P_PROG_23_Program_Ver	pshm->P[2783]
#define	P_PROG_24_Program_Ver	pshm->P[2784]
#define	P_PROG_25_Program_Ver	pshm->P[2785]
#define	P_PROG_26_Program_Ver	pshm->P[2786]
#define	P_PROG_27_Program_Ver	pshm->P[2787]
#define	P_PROG_28_Program_Ver	pshm->P[2788]
#define	P_PROG_30_Program_Ver	pshm->P[2790]
#define	P_Master_Motion_Trigger	pshm->P[11117]
#define	P_Parity_Bit	pshm->P[11118]
#define	P_Master_Move	pshm->P[11119]
#define	P_Master_TA	pshm->P[11120]
#define	P_Master_TS	pshm->P[11121]
#define	P_Master_TM	pshm->P[11122]
#define	P_Anode_Count	pshm->P[11123]
#define	P_Cathode_Count	pshm->P[11124]
#define	P_Anode_Thickness	pshm->P[11125]
#define	P_Cathode_Thickness	pshm->P[11126]
#define	P_Sepa_Thickness	pshm->P[11127]
#define	P_Anode_Thickness_PLC	pshm->P[11128]
#define	P_Cathode_Thickness_PLC	pshm->P[11129]
#define	P_Sepa_Thickness_PLC	pshm->P[11130]
#define	P_Old_P_Anode_TR1_Master_Motion_Trigger(i)	pshm->P[(11131+i)%MAX_P]
#define	P_Old_P_Cathode_TR1_Master_Motion_Trigger(i)	pshm->P[(11147+i)%MAX_P]
#define	P_Anode_TR1_Old_Mode(i)	pshm->P[(11163+i)%MAX_P]
#define	P_Cathode_TR1_Old_Mode(i)	pshm->P[(11179+i)%MAX_P]
#define	P_Older_Than_P_Anode_TR1_Old_Mode(i)	pshm->P[(11195+i)%MAX_P]
#define	P_Older_Than_P_Cathode_TR1_Old_Mode(i)	pshm->P[(11211+i)%MAX_P]
#define	P_Older_Than_P_Sequence_Old_P_Anode_TR1_Current_Mode_Trigger(i)	pshm->P[(11227+i)%MAX_P]
#define	P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Current_Mode_Trigger(i)	pshm->P[(11243+i)%MAX_P]
#define	P_Old_P_Anode_TR1_Mode_Command(i)	pshm->P[(11259+i)%MAX_P]
#define	P_Old_P_Cathode_TR1_Mode_Command(i)	pshm->P[(11275+i)%MAX_P]
#define	P_Older_Than_P_Old_P_Anode_TR1_Mode_Command(i)	pshm->P[(11291+i)%MAX_P]
#define	P_Older_Than_P_Old_P_Cathode_TR1_Mode_Command(i)	pshm->P[(11307+i)%MAX_P]
#define	P_Older_Than_P_Sequence_Old_P_Anode_TR1_Mode_Command_Trigger(i)	pshm->P[(11323+i)%MAX_P]
#define	P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Mode_Command_Trigger(i)	pshm->P[(11339+i)%MAX_P]
#define	P_Old_P_Anode_TR1_PMAC_Status(i)	pshm->P[(11355+i)%MAX_P]
#define	P_Old_P_Cathode_TR1_PMAC_Status(i)	pshm->P[(11371+i)%MAX_P]
#define	P_Older_Than_P_Old_P_Anode_TR1_PMAC_Status(i)	pshm->P[(11387+i)%MAX_P]
#define	P_Older_Than_P_Old_P_Cathode_TR1_PMAC_Status(i)	pshm->P[(11403+i)%MAX_P]
#define	P_Old_P_Slave1_Motion_Command(i)	pshm->P[(11419+i)%MAX_P]
#define	P_Old_P_Slave10_Motion_Command(i)	pshm->P[(11435+i)%MAX_P]
#define	P_Old_Slave1_P_SubMaster_Sub_Mode_Command(i)	pshm->P[(11451+i)%MAX_P]
#define	P_Old_Slave10_P_SubMaster_Sub_Mode_Command(i)	pshm->P[(11467+i)%MAX_P]
#define	P_Sequence_Old_P_Current_Mode_Trigger(i)	pshm->P[(11483+i)%MAX_P]
#define	P_Sequence_Old_Mode(i)	pshm->P[(11499+i)%MAX_P]
#define	P_Sequence_Old_P_Mode_Command(i)	pshm->P[(11515+i)%MAX_P]
#define	P_Sequence_Old_P_Mode_Command_Trigger(i)	pshm->P[(11531+i)%MAX_P]
#define	P_SubMaster_Sub_Old_Mode(i)	pshm->P[(11547+i)%MAX_P]
#define	P_SubMaster_Sub_Old_Command(i)	pshm->P[(11563+i)%MAX_P]
#define	P_SubMaster_Sub_Mode_Command(i)	pshm->P[(11579+i)%MAX_P]
#define	P_SubMaster_Sub_Old_Trigger(i)	pshm->P[(11595+i)%MAX_P]
#define	P_InterLock_No3_Array(i)	pshm->P[(11611+i)%MAX_P]
#define	P_Old_InterLock_No3_Array(i)	pshm->P[(11627+i)%MAX_P]
#define	P_Mode_Err(i)	pshm->P[(11643+i)%MAX_P]
#define	P_Spool_Enable	pshm->P[11648]
#define	P_Cathode_1St_Flow_Chart_Bit_Flag	pshm->P[11649]
#define	P_Cathode_AT_Flow_Chart_Bit_Flag	pshm->P[11650]
#define	P_Cathode_2nd_Flow_Chart_Bit_Flag	pshm->P[11651]
#define	P_Anode_Clamp_Flow_Chart_Bit_Flag	pshm->P[11652]
#define	P_Final_Roll_Flow_Chart_Bit_Flag	pshm->P[11653]
#define	P_Stack_Table_Flow_Chart_Bit_Flag	pshm->P[11654]
#define	P_Cathode_Clamp_Flow_Chart_Bit_Flag	pshm->P[11655]
#define	P_Anode_2nd_Flow_Chart_Bit_Flag	pshm->P[11656]
#define	P_Anode_AT_Flow_Chart_Bit_Flag	pshm->P[11657]
#define	P_Anode_1St_Flow_Chart_Bit_Flag	pshm->P[11658]
#define	P_Sepa_Unwinder_Flow_Chart_Bit_Flag	pshm->P[11659]
#define	P_Slave5_Target_Z_For_Cutting	pshm->P[11660]
#define	P_Slave31_Motion_Command	pshm->P[11661]
#define	P_Pause_Err_Process	pshm->P[11662]
#define	P_Pause_Err_Timer	pshm->P[11663]
#define	P_Pause_Err_Count	pshm->P[11664]
#define	P_Pause_Err_Use	pshm->P[11665]
#define	P_Pause_Err_Use2	pshm->P[11666]
#define	P_Anode_Pause_Signal_Err	pshm->P[11667]
#define	P_Cathode_Pause_Signal_Err	pshm->P[11668]
#define	P_Anode_Pause_Err	pshm->P[11669]
#define	P_Anode_Pause_Err_Count	pshm->P[11670]
#define	P_Phasing_Err(i)	pshm->P[(11671+i)%MAX_P]
#define	P_Phasing_Err2(i)	pshm->P[(11676+i)%MAX_P]
#define	P_Execute_Wait_Mode_Memory_Tower	pshm->P[11681]
#define	P_Execute_Vac_MNTR	pshm->P[11682]
#define	P_Old_Cathode_Cur_Mode	pshm->P[11683]
#define	P_Cathode_Run_Mode_Type(i)	pshm->P[(11684+i)%MAX_P]
#define	P_Cathode_Run_Mode_Trigger(i)	pshm->P[(11704+i)%MAX_P]
#define	P_Old_Anode_Cur_Mode	pshm->P[11724]
#define	P_Anode_Run_Mode_Type(i)	pshm->P[(11725+i)%MAX_P]
#define	P_Anode_Run_Mode_Trigger(i)	pshm->P[(11745+i)%MAX_P]
#define	P_Anode_1TR_T_Belt_To_Align	pshm->P[11765]
#define	P_Anode_1TR_T_Align_To_Belt	pshm->P[11766]
#define	P_Anode_1TR_T_Ready_Pos	pshm->P[11767]
#define	P_Anode_1TR_T_Ready_To_Align	pshm->P[11768]
#define	P_Anode_1TR_T_Ready_To_Belt	pshm->P[11769]
#define	P_Anode_Picker_Turn	pshm->P[11770]
#define	P_Anode_2TR_T_Align_To_Stack	pshm->P[11771]
#define	P_Anode_2TR_T_Stack_To_Align	pshm->P[11772]
#define	P_Anode_Clamp_Off	pshm->P[11773]
#define	P_Anode_Clamp_On	pshm->P[11774]
#define	P_Anode_Clamp_Down	pshm->P[11775]
#define	P_FR_Anode_Motion	pshm->P[11776]
#define	P_FR_Cathode_Motion	pshm->P[11777]
#define	P_Stack_Table_Down	pshm->P[11778]
#define	P_Cathode_Clamp_On	pshm->P[11779]
#define	P_Cathode_Clamp_Off	pshm->P[11780]
#define	P_Cathode_Clamp_Down	pshm->P[11781]
#define	P_Cathode_2TR_T_Align_To_Stack	pshm->P[11782]
#define	P_Cathode_2TR_T_Stack_To_Align	pshm->P[11783]
#define	P_Cathode_Picker_Turn	pshm->P[11784]
#define	P_Cathode_1TR_T_Belt_To_Align	pshm->P[11785]
#define	P_Cathode_1TR_T_Align_To_Belt	pshm->P[11786]
#define	P_Cathode_1TR_T_Ready_Pos	pshm->P[11787]
#define	P_Cathode_1TR_T_Ready_To_Align	pshm->P[11788]
#define	P_Cathode_1TR_T_Ready_To_Belt	pshm->P[11789]
#define	P_Anode_1TR_Z_Belt_To_Align	pshm->P[11790]
#define	P_Anode_1TR_Z_Align_To_Belt	pshm->P[11791]
#define	P_Anode_1TR_Z_Align_Down	pshm->P[11792]
#define	P_Anode_1TR_Z_Align_UP	pshm->P[11793]
#define	P_Anode_1TR_Z_Belt_Down	pshm->P[11794]
#define	P_Anode_1TR_Z_Belt_UP	pshm->P[11795]
#define	P_Anode_1TR_Z_Ready	pshm->P[11796]
#define	P_Anode_1TR_Z_Align_Blow	pshm->P[11797]
#define	P_Anode_1TR_Z_Belt_Vac	pshm->P[11798]
#define	P_Cathode_1TR_Z_Belt_To_Align	pshm->P[11799]
#define	P_Cathode_1TR_Z_Align_To_Belt	pshm->P[11800]
#define	P_Cathode_1TR_Z_Align_Down	pshm->P[11801]
#define	P_Cathode_1TR_Z_Align_UP	pshm->P[11802]
#define	P_Cathode_1TR_Z_Belt_Down	pshm->P[11803]
#define	P_Cathode_1TR_Z_Belt_UP	pshm->P[11804]
#define	P_Cathode_1TR_Z_Ready	pshm->P[11805]
#define	P_Cathode_1TR_Z_Align_Blow	pshm->P[11806]
#define	P_Cathode_1TR_Z_Belt_Vac	pshm->P[11807]
#define	P_Anode_2TR_Align_To_Stack	pshm->P[11808]
#define	P_Anode_2TR_Stack_To_Align	pshm->P[11809]
#define	P_Anode_2TR_Stack_Down	pshm->P[11810]
#define	P_Anode_2TR_Stack_UP	pshm->P[11811]
#define	P_Anode_2TR_Align_Down	pshm->P[11812]
#define	P_Anode_2TR_Align_UP	pshm->P[11813]
#define	P_Anode_2TR_Align_Vac	pshm->P[11814]
#define	P_Anode_2TR_Stack_Blow	pshm->P[11815]
#define	P_Anode_2TR_Stack_Sepa_Blow	pshm->P[11816]
#define	P_FR_Last_Run_Motion	pshm->P[11817]
#define	P_Servo_Dancer_Ready_Pos	pshm->P[11818]
#define	P_Servo_Dancer_Ready_Offset	pshm->P[11819]
#define	P_Servo_Dancer_Test	pshm->P[11820]
#define	P_Align_Start_IO_Judgment	pshm->P[11821]
#define	P_Driving_Clamp2	pshm->P[11822]
#define	P_Driving_Clamp	pshm->P[11823]
#define	P_MSA_Timer	pshm->P[11824]
#define	P_SM_Cathode_Stack_MSA	pshm->P[11825]
#define	P_SM_Anode_Stack_MSA	pshm->P[11826]
#define	P_SM_Cathode_Align_MSA	pshm->P[11827]
#define	P_SM_Anode_Align_MSA	pshm->P[11828]
#define	P_MSA_Interlock	pshm->P[11829]
#define	P_Anode_MSA_Final_Roll_Pos_Check	pshm->P[11830]
#define	P_Anode_MSA_2nd_PNP_Pos_Check	pshm->P[11831]
#define	P_Anode_MSA_1nd_PNP_Pos_Check	pshm->P[11832]
#define	P_MSA_Err_Save_CA_Stack_MSA	pshm->P[11833]
#define	P_MSA_Err_Save_AN_Stack_MSA	pshm->P[11834]
#define	P_MSA_Err_Save_CA_Align_MSA	pshm->P[11835]
#define	P_MSA_Err_Save_AN_Align_MSA	pshm->P[11836]
#define	P_MSA_BTN_Err	pshm->P[11837]
#define	P_Anode_Algin_MSA_RTN	pshm->P[11838]
#define	P_Anode_Algin_MSA_RTN2	pshm->P[11839]
#define	P_Cathode_Algin_MSA_RTN	pshm->P[11840]
#define	P_Cathode_Stack_MSA_RTN	pshm->P[11841]
#define	P_Anode_Stack_MSA_RTN	pshm->P[11842]
#define	P_Anode_Align_MSA_Count	pshm->P[11843]
#define	P_Cathode_Align_MSA_Count	pshm->P[11844]
#define	P_Anode_Stack_MSA_Count	pshm->P[11845]
#define	P_Cathode_Stack_MSA_Count	pshm->P[11846]
#define	P_Cathode_Align_Stop_Blocked	pshm->P[11847]
#define	P_Anode_Align_Stop_Blocked	pshm->P[11848]
#define	P_Cathode_Stack_Stop_Blocked	pshm->P[11849]
#define	P_Anode_Stack_Stop_Blocked	pshm->P[11850]
#define	P_Anode_Align_MSA_Execute_Timer	pshm->P[11851]
#define	P_Cathode_Align_MSA_Execute_Timer	pshm->P[11852]
#define	P_Anode_Stack_MSA_Execute_Timer	pshm->P[11853]
#define	P_Cathode_Stack_MSA_Execute_Timer	pshm->P[11854]
#define	P_Anode_Align_Interlock_Blocked	pshm->P[11855]
#define	P_Cathode_Align_Interlock_Blocked	pshm->P[11856]
#define	P_Anode_Stack_Interlock_Blocked	pshm->P[11857]
#define	P_Cathode_Stack_Interlock_Blocked	pshm->P[11858]
#define	P_Anode_1TR_T_Align_POS	pshm->P[11859]
#define	P_Anode_1TR_T_Belt_POS	pshm->P[11860]
#define	P_Anode_1TR_T_Ready_POS	pshm->P[11861]
#define	P_Anode_2TR_T_Align_POS	pshm->P[11862]
#define	P_Anode_2TR_T_Stack_POS	pshm->P[11863]
#define	P_Cathode_2TR_T_Align_POS	pshm->P[11864]
#define	P_Cathode_2TR_T_Stack_POS	pshm->P[11865]
#define	P_Cathode_1TR_T_Align_POS	pshm->P[11866]
#define	P_Cathode_1TR_T_Belt_POS	pshm->P[11867]
#define	P_Cathode_1TR_T_Ready_POS	pshm->P[11868]
#define	P_Seq_Abort	pshm->P[11869]
#define	P_Blocked_Abort	pshm->P[11870]
#define	P_Abort_Flag	pshm->P[11871]
#define	P_Opposite_Lane_1ST_TR_Safe_Pos	pshm->P[11872]
#define	P_Opposite_Lane_P_PMAC_Status	pshm->P[11873]
#define	P_Opposite_Lane_OFF_Not_Start	pshm->P[11874]
#define	P_Pause_Alarm_Blocked	pshm->P[11875]
#define	P_Old_Alarm_Arr	pshm->P[11876]
#define	P_Cycle_Stop_Delay_Time	pshm->P[11877]
#define	P_Cycle_Stop_Offset	pshm->P[11878]
#define	P_Opposite_Lane_Abort_Alram_Flag	pshm->P[11879]
#define	P_Cathode_Clmap_Y1_Ready_Pos	pshm->P[11880]
#define	P_Cathode_Clmap_Y1_Clamp_Pos	pshm->P[11881]
#define	P_Anode_Clmap_Y1_Ready_Pos	pshm->P[11882]
#define	P_Anode_Clmap_Y1_Clamp_Pos	pshm->P[11883]
#define	P_Cathode_Clmap_Y2_Ready_Pos	pshm->P[11884]
#define	P_Cathode_Clmap_Y2_Clamp_Pos	pshm->P[11885]
#define	P_Anode_Clmap_Y2_Ready_Pos	pshm->P[11886]
#define	P_Anode_Clmap_Y2_Clamp_Pos	pshm->P[11887]
#define	P_Cathode_Clamp_Z2_Ready_Pos	pshm->P[11888]
#define	P_Cathode_Clamp_Z2_Clamp_Pos	pshm->P[11889]
#define	P_Anode_Clamp_Z2_Ready_Pos	pshm->P[11890]
#define	P_Anode_Clamp_Z2_Clamp_Pos	pshm->P[11891]
#define	P_Cathode_Clamp_Z1_Ready_Pos	pshm->P[11892]
#define	P_Cathode_Clamp_Z1_Clamp_Pos	pshm->P[11893]
#define	P_Anode_Clamp_Z1_Ready_Pos	pshm->P[11894]
#define	P_Anode_Clamp_Z1_Clamp_Pos	pshm->P[11895]
#define	P_Cathode_Clamp_Z2_Cell_Down	pshm->P[11896]
#define	P_Anode_Clamp_Z2_Cell_Down	pshm->P[11897]
#define	P_Cathode_Clamp_Z1_Cell_Down	pshm->P[11898]
#define	P_Anode_Clamp_Z1_Cell_Down	pshm->P[11899]
#define	P_Single_Run_Pass	pshm->P[11900]
#define	P_Cathode_2nd_PNP_Sepa_Blow	pshm->P[11901]
#define	P_Cathode_2nd_PNP_Align_Blow	pshm->P[11902]
#define	P_Cathode_2nd_PNP_Stack_Blow	pshm->P[11903]
#define	P_Cathode_2nd_PNP_Align_Vac	pshm->P[11904]
#define	P_Cathode_2nd_PNP_Align_Up_Motion	pshm->P[11905]
#define	P_Cathode_2nd_PNP_Align_Down_Motion	pshm->P[11906]
#define	P_Cathode_2nd_PNP_Stack_Up_Motion	pshm->P[11907]
#define	P_Cathode_2nd_PNP_Stack_Down_Motion	pshm->P[11908]
#define	P_Cathode_2nd_PNP_Stack_To_Align_Motion	pshm->P[11909]
#define	P_Cathode_2nd_PNP_Align_To_Stack_Motion	pshm->P[11910]
#define	P_Door_Open_Stop_Count	pshm->P[11911]
#define	P_Buf_Stack_NG_Flag	pshm->P[11912]
#define	P_Stop_1st_PNP_Move	pshm->P[11913]
#define	P_Seq_Abort_Timer	pshm->P[11914]
#define	P_Sync_Test	pshm->P[11915]
#define	P_Dry_Pause_Flag	pshm->P[11916]
#define	P_Dry_Run_Pasue_Timer	pshm->P[11917]
#define	P_Resume_Stop_Blocked	pshm->P[11918]
#define	P_Discharge_Wait	pshm->P[11919]
#define	P_Command_Run_Flag	pshm->P[11920]
#define	P_Stop_Cmd_Origin	pshm->P[11921]
#define	P_Stop_Origin_Save(i)	pshm->P[(11922+i)%MAX_P]
#define	P_Old_M_Y_Sepa_Cutter_SSR_On	pshm->P[11937]
#define	P_Sepa_Cutter_SSR_Off_Time	pshm->P[11938]
#define	P_Sepa_Cutter_SSR_Off	pshm->P[11939]
#define	P_Sepa_Cutter_SSR_Off_Timer	pshm->P[11940]
#define	P_Starting_Pause_IO_Flag	pshm->P[11941]
#define	P_PLC03_Seq_Pause_Start_Flag	pshm->P[11942]
#define	P_PLC03_Seq_Pause_Start_State_Machine	pshm->P[11943]
#define	P_PLC03_Seq_Pause_Start_Status	pshm->P[11944]
#define	P_ARC_NP_Push_BTN	pshm->P[11945]
#define	P_ARC_UI_Push_BTN	pshm->P[11946]
#define	P_M_Manual_ARC_BTN	pshm->P[11947]
#define	P_Two_Btn_Active_Flag	pshm->P[11948]
#define	P_Two_Btn_Interlock_Time	pshm->P[11949]
#define	P_NP_Unwinder_Active_Hold	pshm->P[11950]
#define	P_MAX_KGF	pshm->P[11951]
#define	P_KGF_TO_DAC_RATIO	pshm->P[11952]
#define	P_Dac_Out_Value	pshm->P[11953]
#define	P_Recipe_Dancer_input_kgf	pshm->P[11954]
#define	P_Cathode_NG_PNP_Vel_Zero_Set	pshm->P[11955]
#define	P_Anode_NG_PNP_Vel_Zero_Set	pshm->P[11956]
#define	P_Anode_Run_DR	pshm->P[11957]
#define	P_Cathode_Run_DR	pshm->P[11958]
#define	P_1st_UND_Grip_Time	pshm->P[11959]
#define	P_1st_UND_Grip_Time_offset	pshm->P[11960]
#define	P_1st_UND_Grip_Time_offset2	pshm->P[11961]
#define	P_First_Sepa_Driving_Use	pshm->P[11962]
#define	P_First_Sepa_Driving_Timing	pshm->P[11963]
#define	P_Unloader_Safe_rtn	pshm->P[11964]
#define	P_Final_Start	pshm->P[11965]
#define	P_Driving_Start	pshm->P[11966]
#define	P_Starting_Pause_IO_OFF_Flag	pshm->P[11967]
#define	P_individual_Hold_return	pshm->P[11968]
#define	P_individual_Hold_return2	pshm->P[11969]
#define	P_Tension_Ready_Pass	pshm->P[11970]
#define	P_Discharge_cal_rtn	pshm->P[11971]
#define	P_Old_Tact_Current_Mode	pshm->P[11972]
#define	P_Sheet_Clear	pshm->P[11973]
#define	P_Anode_Clamp_On_Time2	pshm->P[11974]
#define	P_Anode_Clamp_On_Time	pshm->P[11975]
#define	P_Cathode_Clamp_On_Time	pshm->P[11976]
#define	P_Cathode_Clamp_On_Time2	pshm->P[11977]
#define	P_Offset	pshm->P[11978]
#define	P_Man_C	pshm->P[11979]
#define	P_NG_Box_Stop_Use	pshm->P[11980]
#define	P_SlewTime	pshm->P[11981]
#define	P_Old_SlewTime	pshm->P[11982]
#define	P_Resume_MNTR1	pshm->P[11983]
#define	P_Resume_MNTR2	pshm->P[11984]
#define	P_Resume_MNTR3	pshm->P[11985]
#define	P_Resume_MNTR4	pshm->P[11986]
#define	P_Resume_MNTR5	pshm->P[11987]
#define	P_Resume_MNTR6	pshm->P[11988]
#define	P_Resume_MNTR7	pshm->P[11989]
#define	P_Resume_MNTR8	pshm->P[11990]
#define	P_Resume_MNTR9	pshm->P[11991]
#define	P_Resume_MNTR10	pshm->P[11992]
#define	P_Resume_MNTR11	pshm->P[11993]
#define	P_Resume_MNTR12	pshm->P[11994]
#define	P_old_P_Anode_Count	pshm->P[11995]
#define	P_Sheet_Paper_BWD_Count	pshm->P[11996]
#define	P_Stop_CHK	pshm->P[11997]
#define	P_Seq_Pause	pshm->P[11998]
#define	P_Seq_Pause2	pshm->P[11999]
#define	P_MSA_TimeBase_Rtn	pshm->P[12000]
#define	P_Old_Vison_Read_EPC_Camera_Move_Request	pshm->P[12001]
#define	P_First_Sepa_Time_Out_Count	pshm->P[12002]
#define	P_Align_Retry_Cal_RTN	pshm->P[12003]
#define	P_Sheet_Err(i)	pshm->P[(12004+i)%MAX_P]
#define	P_Driving_Cal	pshm->P[12020]
#define	P_Driving_End_Pos	pshm->P[12021]
#define	P_Driving_Start_Pos	pshm->P[12022]
#define	P_Drivig_Cal_Save(i)	pshm->P[(12023+i)%MAX_P]
#define	P_Anode_Align_Blow	pshm->P[12028]
#define	P_Cathode_Align_Blow	pshm->P[12029]
#define	P_PMAC_Status_Arr_Save1(i)	pshm->P[(12030+i)%MAX_P]
#define	P_HomePos_Save1(i)	pshm->P[(12035+i)%MAX_P]
#define	P_PMAC_Status_Arr_Save2(i)	pshm->P[(12040+i)%MAX_P]
#define	P_HomePos_Save2(i)	pshm->P[(12045+i)%MAX_P]
#define	P_PMAC_Status_Arr_Save3(i)	pshm->P[(12050+i)%MAX_P]
#define	P_HomePos_Save3(i)	pshm->P[(12055+i)%MAX_P]
#define	P_PMAC_Status_Arr_Save4(i)	pshm->P[(12060+i)%MAX_P]
#define	P_HomePos_Save4(i)	pshm->P[(12065+i)%MAX_P]
#define	P_Home_Pos_Err_Cnt1	pshm->P[12070]
#define	P_Home_Pos_Err_Cnt2	pshm->P[12071]
#define	P_Home_Pos_Err_Cnt3	pshm->P[12072]
#define	P_Home_Pos_Err_Cnt4	pshm->P[12073]
#define	P_Align_Inspection_Delay	pshm->P[12074]
#define	P_HomePos_Err(i)	pshm->P[(12075+i)%MAX_P]
#define	P_Anode_Sheet_Test	pshm->P[12080]
#define	P_Cathode_Sheet_Test	pshm->P[12081]
#define	P_Anode_Sheet_Interlock_Timing	pshm->P[12082]
#define	P_Cathode_Sheet_Interlock_Timing	pshm->P[12083]
#define	P_Discharge_Err_MNTR	pshm->P[12084]
#define	P_Arc_Err_MNTR	pshm->P[12085]
#define	P_Abort_Cnt	pshm->P[12086]
#define	P_EMO_Cnt	pshm->P[12087]
#define	P_Dry_Run_Inspection	pshm->P[12088]
#define	P_Servo_ON_MNTR1	pshm->P[12089]
#define	P_Servo_ON_MNTR2	pshm->P[12090]
#define	P_Servo_ON_MNTR3	pshm->P[12091]
#define	P_Servo_ON_MNTR4	pshm->P[12092]
#define	P_Servo_ON_MNTR5	pshm->P[12093]
#define	P_Servo_ON_MNTR6	pshm->P[12094]
#define	P_Servo_ON_MNTR7	pshm->P[12095]
#define	P_Servo_ON_MNTR8	pshm->P[12096]
#define	P_Servo_ON_MNTR9	pshm->P[12097]
#define	P_Servo_ON_MNTR10	pshm->P[12098]
#define	P_Servo_ON_MNTR11	pshm->P[12099]
#define	P_Servo_ON_MNTR12	pshm->P[12100]
#define	P_Servo_ON_MNTR13	pshm->P[12101]
#define	P_Servo_ON_MNTR14	pshm->P[12102]
#define	P_Servo_ON_MNTR15	pshm->P[12103]
#define	P_Servo_ON_MNTR16	pshm->P[12104]
#define	P_Servo_ON_MNTR17	pshm->P[12105]
#define	P_Servo_ON_MNTR18	pshm->P[12106]
#define	P_Servo_ON_MNTR19	pshm->P[12107]
#define	P_Servo_ON_MNTR20	pshm->P[12108]
#define	P_Servo_ON_MNTR21	pshm->P[12109]
#define	P_Servo_ON_MNTR22	pshm->P[12110]
#define	P_Servo_ON_MNTR23	pshm->P[12111]
#define	P_Servo_ON_MNTR24	pshm->P[12112]
#define	P_Servo_ON_MNTR25	pshm->P[12113]
#define	P_Servo_ON_MNTR26	pshm->P[12114]
#define	P_Servo_ON_MNTR27	pshm->P[12115]
#define	P_Servo_ON_MNTR28	pshm->P[12116]
#define	P_Servo_ON_MNTR29	pshm->P[12117]
#define	P_Servo_ON_MNTR30	pshm->P[12118]
#define	P_X_IO_WinMess_Connect_BTN	pshm->P[12119]
#define	P_Ecat_ReConnetion_State_Machine	pshm->P[12120]
#define	P_Ecat_Reconnection_Timer	pshm->P[12121]
#define	P_Y_Ecat_Reconnecting	pshm->P[12122]
#define	P_Y_Ecat_ReConnection_Fail	pshm->P[12123]
#define	P_Y_Ecat_ReConnection_Complete	pshm->P[12124]
#define	P_X_Ecat_Reconnection_BTN	pshm->P[12125]
#define	P_X_PLC_Setup_Mode_Check	pshm->P[12126]
#define	P_Interlock_On_Off_Flag	pshm->P[12127]
#define	P_X_Old_MC_Reconnect_BTN_Signal	pshm->P[12128]
#define	P_BTN_1st_ULD_Data_Clear	pshm->P[12129]
#define	P_Old_BTN_1st_ULD_Data_Clear	pshm->P[12130]
#define	P_Old_M_Y_1st_Unloader_UnGrip_Sol	pshm->P[12131]
#define	P_Sepa_Cutter_Heat_Meter	pshm->P[12132]
#define	P_Sepa_Cutter_Heating_Timer	pshm->P[12133]
#define	P_Middle_Skip_Off_Flag	pshm->P[12134]
#define	P_Stop_MNTR1	pshm->P[12135]
#define	P_Stop_MNTR2	pshm->P[12136]
#define	P_Sheet_Pos_Offset	pshm->P[12137]
#define	P_Stopping_Wait_Time	pshm->P[12138]
#define	P_Stopping_Test_Timer	pshm->P[12139]
#define	P_Cutter_FWB_Heater_Current(i)	pshm->P[(12140+i)%MAX_P]
#define	P_1st_ULD_OK_Lamp	pshm->P[12150]
#define	P_1st_ULD_NG_Lamp	pshm->P[12151]
#define	P_1st_ULD_Sample_QC_Lamp	pshm->P[12152]
#define	P_Proceed_Execute_Flag	pshm->P[12153]
#define	P_Continuous_Call_Stack_NG_Flag	pshm->P[12154]
#define	P_Continuous_Call_Stack_OK_Flag	pshm->P[12155]
#define	P_Cathode_Picker_Home_Pos	pshm->P[12156]
#define	P_Anode_Picker_Home_Pos	pshm->P[12157]
#define	P_FR_Sheet_Paper_Home_Chk	pshm->P[12158]
#define	P_Align_TimeOut1	pshm->P[12159]
#define	P_Align_TimeOut2	pshm->P[12160]
#define	P_Align_TimeOut3	pshm->P[12161]
#define	P_Align_TimeOut4	pshm->P[12162]
#define	P_Align_TimeOut5	pshm->P[12163]
#define	P_Align_TimeOut6	pshm->P[12164]
#define	P_Anode_Align_OK	pshm->P[12165]
#define	P_Cathode_Align_OK	pshm->P[12166]
#define	P_Anode_Align_NG	pshm->P[12167]
#define	P_Cathode_Align_NG	pshm->P[12168]
#define	P_Anode_Align_TimeOut	pshm->P[12169]
#define	P_Cathode_Align_TimeOut	pshm->P[12170]
#define	P_Anode_Surf_OK	pshm->P[12171]
#define	P_Cathode_Surf_OK	pshm->P[12172]
#define	P_Anode_Surf_NG	pshm->P[12173]
#define	P_Cathode_Surf_NG	pshm->P[12174]
#define	P_Anode_Surf_TimeOut	pshm->P[12175]
#define	P_Cathode_Surf_TimeOut	pshm->P[12176]
#define	P_Surf_TimeOut1	pshm->P[12177]
#define	P_Surf_TimeOut2	pshm->P[12178]
#define	P_Surf_TimeOut3	pshm->P[12179]
#define	P_Surf_TimeOut4	pshm->P[12180]
#define	P_Surf_TimeOut5	pshm->P[12181]
#define	P_Surf_TimeOut6	pshm->P[12182]
#define	P_Anode_Stack_TimeOut	pshm->P[12183]
#define	P_Cathode_Stack_TimeOut	pshm->P[12184]
#define	P_Anode_Stack_OK	pshm->P[12185]
#define	P_Cathode_Stack_OK	pshm->P[12186]
#define	P_Anode_Stack_NG	pshm->P[12187]
#define	P_Cathode_Stack_NG	pshm->P[12188]
#define	P_Stack_TimeOut1	pshm->P[12189]
#define	P_Stack_TimeOut2	pshm->P[12190]
#define	P_Stack_TimeOut3	pshm->P[12191]
#define	P_Align_Move_Err	pshm->P[12192]
#define	P_Ecat_Test	pshm->P[12193]
#define	P_Scan_Time(i)	pshm->P[(12194+i)%MAX_P]
#define	P_Scan_Aver	pshm->P[12196]
#define	P_Scan_MAX	pshm->P[12197]
#define	P_Cathode_1TR_Picker_T_Belt_POS	pshm->P[12198]
#define	P_Cathode_1TR_Picker_T_Align_POS	pshm->P[12199]
#define	P_Anode_1TR_Picker_T_Belt_POS	pshm->P[12200]
#define	P_Anode_1TR_Picker_T_Align_POS	pshm->P[12201]
#define	P_1TR_Picker_T_Align_POS	pshm->P[12202]
#define	P_AVRG_Lower_Sepa_Thickness_mm	pshm->P[12203]
#define	P_AVRG_Upper_Sepa_Thickness_mm	pshm->P[12204]
#define	P_PLC06_Upper_Curr_Unwinder_Thickness_mm	pshm->P[12205]
#define	P_PLC06_Lower_Curr_Unwinder_Thickness_mm	pshm->P[12206]
#define	P_Upper_Curr_Spool_Radius	pshm->P[12207]
#define	P_Lower_Curr_Spool_Radius	pshm->P[12208]
#define	P_PLC06_Curr_Upper_Distance_mm	pshm->P[12209]
#define	P_PLC06_Curr_Lower_Distance_mm	pshm->P[12210]
#define	P_Upper_Sepa_Min_Distance_mm	pshm->P[12211]
#define	P_Lower_Sepa_Min_Distance_mm	pshm->P[12212]
#define	P_PLC06_Sepa_Change_Set	pshm->P[12213]
#define	P_Upper_Sepa_To_Sensor_Min_Dis	pshm->P[12214]
#define	P_Upper_Sepa_To_Sensor_Max_Dis	pshm->P[12215]
#define	P_Upper_Sensor_To_Unwinder_Core_Dis	pshm->P[12216]
#define	P_Upper_Sensor_Min_AD	pshm->P[12217]
#define	P_Upper_Sensor_Max_AD	pshm->P[12218]
#define	P_Lower_Sepa_To_Sensor_Min_Dis	pshm->P[12219]
#define	P_Lower_Sepa_To_Sensor_Max_Dis	pshm->P[12220]
#define	P_Lower_Sensor_To_Unwinder_Core_Dis	pshm->P[12221]
#define	P_Lower_Sensor_Min_AD	pshm->P[12222]
#define	P_Lower_Sensor_Max_AD	pshm->P[12223]
#define	M_AI_Upper_Sepa_Sensing	pshm->P[372]
#define	M_AI_Lower_Sepa_Sensing	pshm->P[373]
#define	P_Status_NP_BTN_Lower_Unwinder	pshm->P[12224]
#define	P_Status_NP_BTN_Upper_Unwinder	pshm->P[12225]
#define	P_Driving_CamTable_Scale_Change_Flag	pshm->P[12226]
#define	P_FR_Driving_Diameter	pshm->P[12227]
#define	P_FR_Driving_Floating_Point	pshm->P[12228]
#define	P_FR_Driving_Reward	pshm->P[12229]
#define	P_Unwinder_Master_Following_Use_Flag	pshm->P[12230]
#define	P_Unwinder_Master_Following_On	pshm->P[12231]
#define	P_Old_Master_Following_Start	pshm->P[12232]
#define	P_Unwinder_Master_Following_Scale	pshm->P[12233]
#define	P_Unwinder_Jog_Use_Flag	pshm->P[12234]
#define	P_Old_Jog_Start	pshm->P[12235]
#define	P_Unwinder_Jog_Total_Time	pshm->P[12236]
#define	P_Unwinder_Ta	pshm->P[12237]
#define	P_Unwinder_Ts	pshm->P[12238]
#define	P_Unwinder_Tm	pshm->P[12239]
#define	P_Unwinder_1mm_Deg	pshm->P[12240]
#define	P_Unwinder_Jog_Pos	pshm->P[12241]
#define	P_Unwinder_Jog_Cnt	pshm->P[12242]
#define	P_PLC06_Frist_Flag	pshm->P[12243]
#define	P_Sepa_AI	pshm->P[12244]
#define	P_PLC06_Reel_Upper_Change_Flag	pshm->P[12245]
#define	P_PLC06_Reel_Lower_Change_Flag	pshm->P[12246]
#define	P_Spool_Ready_Enable_Flag	pshm->P[12247]
#define	P_Spool_Lack_Flag	pshm->P[12248]
#define	P_Sepa_DR_Start_Flag	pshm->P[12249]
#define	P_cdTime_Tact_Sec	pshm->P[12250]
#define	P_Master_Tact_Sec	pshm->P[12251]
#define	P_Prev_Err_Pos	pshm->P[12252]
#define	P_Cur_Arc_Rad	pshm->P[12253]
#define	P_Cur_Arc_Deg	pshm->P[12254]
#define	P_Spool_Velocity	pshm->P[12255]
#define	P_Lin_Prop_Vel	pshm->P[12256]
#define	P_Err_Pos	pshm->P[12257]
#define	P_Lin_Deriv_Vel	pshm->P[12258]
#define	P_Lin_Dacer_Kd	pshm->P[12259]
#define	P_Lin_Dacer_Kp	pshm->P[12260]
#define	P_Running_CDTimer	pshm->P[12261]
#define	P_Unwinder_Jog_Ta	pshm->P[12262]
#define	P_Unwinder_Jog_Ts	pshm->P[12263]
#define	P_Unwinder_Vel_Test_Time	pshm->P[12264]
#define	P_Set_Interval_Time	pshm->P[12265]
#define	P_PLC06_Upper_Sepa_AI_Timer	pshm->P[12266]
#define	P_PLC06_Upper_Sepa_AI_Data	pshm->P[12267]
#define	P_PLC06_Upper_Sepa_AI_Cnt	pshm->P[12268]
#define	P_PLC06_Upper_AVRG_Sensor_Data	pshm->P[12269]
#define	P_PLC06_Lower_Sepa_AI_Timer	pshm->P[12270]
#define	P_PLC06_Lower_Sepa_AI_Data	pshm->P[12271]
#define	P_PLC06_Lower_Sepa_AI_Cnt	pshm->P[12272]
#define	P_PLC06_Lower_AVRG_Sensor_Data	pshm->P[12273]
#define	P_PLC06_Sepa_Upper_Thickness_Timer	pshm->P[12274]
#define	P_PLC06_Sepa_Upper_Thickness_Data	pshm->P[12275]
#define	P_PLC06_Sepa_Upper_Thickness_Cnt	pshm->P[12276]
#define	P_PLC06_Sepa_Lower_Thickness_Timer	pshm->P[12277]
#define	P_PLC06_Sepa_Lower_Thickness_Data	pshm->P[12278]
#define	P_PLC06_Sepa_Lower_Thickness_Cnt	pshm->P[12279]
#define	P_Sepa_Thickness_Chk_Timer	pshm->P[12280]
#define	P_Spool_Length	pshm->P[12281]
#define	P_Cascade_Sf_Driving_Value	pshm->P[12282]
#define	P_Cascade_Sf_None_Driving_Value	pshm->P[12283]
#define	P_Sepa_Min_Value_Cal_Cmd	pshm->P[12284]
#define	P_Total_Sepa_Need_Length	pshm->P[12285]
#define	P_Alpa	pshm->P[12286]
#define	P_Sepa_Num_of_Turns	pshm->P[12287]
#define	P_Sepa_Turn_Num	pshm->P[12288]
#define	P_Accumulate_Value	pshm->P[12289]
#define	P_Sharft_to_Sepa_Core_mm	pshm->P[12290]
#define	P_Sepa_Cal_Circum	pshm->P[12291]
#define	P_Sepa_Min_Need_Thickness	pshm->P[12292]
#define	P_Sepa_Min_Thickness_Cmd	pshm->P[12293]
#define	P_Sepa_Accumulate_Cmd	pshm->P[12294]
#define	P_Sepa_Required_Amount	pshm->P[12295]
#define	P_Sepa_Current_Thickness	pshm->P[12296]
#define	P_Sepa_Initial_Tickness	pshm->P[12297]
#define	P_Sepa_Required_Update_Timer	pshm->P[12298]
#define	P_TEST_EPC_Interlock_Auto	pshm->P[12299]
#define	P_TEST_EPC_Interlock_Manual	pshm->P[12300]
#define	P_Discharge_Total_Tact	pshm->P[12301]
#define	P_Read_Sector_TactTime(i)	pshm->P[(12302+i)%MAX_P]
#define	P_Write_Sector_TactTime(i)	pshm->P[(12308+i)%MAX_P]
#define	P_PLC15_Sub_Function_Dryrun_Active_Flag	pshm->P[12314]
#define	P_Sepa_Rotation_Sequence_Run_Trigger_Cnt	pshm->P[12315]
#define	P_Sepa_Mode_Sepa_Recipe_Count	pshm->P[12316]
#define	P_Discharged_After_End_Trigger	pshm->P[12317]
#define	P_Unloader_1st_Grip_Delay	pshm->P[12318]
#define	P_Separate_Cutter_Heating_Limit_Value	pshm->P[12319]
#define	P_Separate_Cutting_Current	pshm->P[12320]
#define	P_Separate_Cutter_Change_Cycle	pshm->P[12321]
#define	P_X_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12322]
#define	P_X_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12323]
#define	P_X_Cathode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12324]
#define	P_X_Anode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12325]
#define	P_X_Stack_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12326]
#define	P_Interlock_Messege_Confirmed	pshm->P[12327]
#define	P_X_MC_Communication_HeartBit	pshm->P[12328]
#define	P_SV_Cathode_Count	pshm->P[12329]
#define	P_SV_Anode_Count	pshm->P[12330]
#define	P_SV_AO_Reference_Value_Chanel(i)	pshm->P[(12331+i)%MAX_P]
#define	P_SV_Cathode_Reference_Thickness	pshm->P[12334]
#define	P_SV_Anode_Reference_Thickness	pshm->P[12335]
#define	P_SV_Stack_Table_Damper_Cathode	pshm->P[12336]
#define	P_SV_Stack_Table_Damper_Anode	pshm->P[12337]
#define	P_SV_Sepa_Reference_Thickness	pshm->P[12338]
#define	P_SV_Jelly_Roll_Width	pshm->P[12339]
#define	P_Cathode_Align_Continuous_NG_Recipe	pshm->P[12340]
#define	P_Anode_Align_Continuous_NG_Recipe	pshm->P[12341]
#define	P_Stack_Vision_Continuous_NG_Recipe	pshm->P[12342]
#define	P_PLC_Recipe_EPC_Sepa_Count	pshm->P[12343]
#define	P_PLC_Recipe_Revise_Sepa	pshm->P[12344]
#define	P_X_PLC_to_PMAC_Correction_Value	pshm->P[12345]
#define	P_Anode_Align_Continuous_NG_Check_range	pshm->P[12346]
#define	P_Cathode_Align_Continuous_NG_Check_range	pshm->P[12347]
#define	P_Stack_Align_Continuous_NG_Check_range	pshm->P[12348]
#define	P_Cathode_Surface_Continuous_NG_Recipe	pshm->P[12349]
#define	P_Anode_Surface_Continuous_NG_Recipe	pshm->P[12350]
#define	P_Cathode_Surface_Continuous_NG_Check_range	pshm->P[12351]
#define	P_Anode_Surface_Continuous_NG_Check_range	pshm->P[12352]
#define	P_Servo_Dancer_Alarm_Maximum_Angle_Value	pshm->P[12353]
#define	P_Servo_Dancer_Alarm_Minimum_Angle_Value	pshm->P[12354]
#define	P_Current_Selected_Spool_Rev_Counts_Init_Read	pshm->P[12355]
#define	P_Spool_ARC_Distance_mm	pshm->P[12356]
#define	P_ARC_Upper_Request_Sepa_Thickness_mm	pshm->P[12357]
#define	P_ARC_Lower_Request_Sepa_Thickness_mm	pshm->P[12358]
#define	P_Selected_Spool_Arc_Set_Rev_Counts_Value	pshm->P[12359]
#define	P_Set_Cnt_FR_Moving_Sepa_ARC	pshm->P[12360]
#define	P_Current_Selected_Spool_Rev_Counts	pshm->P[12361]
#define	P_AI_Cathode_Clamp_Damper	pshm->P[12362]
#define	P_AI_Anode_Clamp_Damper	pshm->P[12363]
#define	P_MSA_Run_Repeat_Num(i)	pshm->P[(12364+i)%MAX_P]
#define	P_Current_MSA_Run_Num(i)	pshm->P[(12369+i)%MAX_P]
#define	P_Select_Sheet_Value	pshm->P[12374]
#define	P_BTN_Config_Setup_Mode_Select	pshm->P[12375]
#define	P_Sepa_Thickness_Max_Value	pshm->P[12376]
#define	P_AI_Cathode_Clamp_Damper_Zero_Mpa_Analog_Value	pshm->P[12377]
#define	P_AI_Anode_Clamp_Damper_Zero_Mpa_Analog_Value	pshm->P[12378]
#define	P_Accumulated_Movement_MM_Unit_Cathode_1ST_pnp	pshm->P[12379]
#define	P_Accumulated_Movement_MM_Unit_Anode_1ST_pnp	pshm->P[12380]
#define	P_Accumulated_Movement_MM_Unit_Cathode_2nd_pnp	pshm->P[12381]
#define	P_Accumulated_Movement_MM_Unit_Anode_2nd_pnp	pshm->P[12382]
#define	P_AI_Anode_Clamp_Damper_Mpa	pshm->P[12383]
#define	P_AI_Cathode_Clamp_Damper_Mpa	pshm->P[12384]
#define	P_Current_Whole_Stack_Jelly_Roll_Thinckness_mm	pshm->P[12385]
#define	P_Upper_Sepa_Current_Thickness_um	pshm->P[12386]
#define	P_Lower_Sepa_Current_Thickness_um	pshm->P[12387]
#define	P_Spool_Rotate_Distance	pshm->P[12388]
#define	Spool_Diameter	pshm->P[12389]
#define	P_Current_FR_Moving_Cnt_To_PlC	pshm->P[12390]
#define	P_MES_APC_Select_Btn	pshm->P[12391]
#define	P_AO_Anode_Clamp_Damper	pshm->P[12392]
#define	P_AO_Cathode_Clamp_Damper	pshm->P[12393]
#define	P_Sepa_Length	pshm->P[12394]
#define	P_Minus_Limit_Detect_Popup_Flag	pshm->P[12395]
#define	P_Plus_Limit_Detect_Popup_Flag	pshm->P[12396]
#define	P_Fatal_Fe_Limit_Detect_Popup_Flag	pshm->P[12397]
#define	P_Emergency_Alarm_Popup_Flag	pshm->P[12398]
#define	P_SepaArcing_Popup_Flag	pshm->P[12399]
#define	P_Y_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger	pshm->P[12400]
#define	P_Y_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger	pshm->P[12401]
#define	P_Y_Cathode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger	pshm->P[12402]
#define	P_Y_Anode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger	pshm->P[12403]
#define	P_Y_Stack_Align_Calibration_twisted_Cycle_Stop_Request_Trigger	pshm->P[12404]
#define	P_Current_Selected_Sheet_Value	pshm->P[12405]
#define	P_Status_Config_Mode_Select	pshm->P[12406]
#define	P_Sepa_Thickness_Jig_Value	pshm->P[12407]
#define	P_PV_Stack_Table_Damper_Cathode	pshm->P[12408]
#define	P_PV_Stack_Table_Damper_Anode	pshm->P[12409]
#define	P_Discharge_Standby_Pos_Tack_Time	pshm->P[12410]
#define	P_Discharge_FR_MainZ_Pos_Tack_Time	pshm->P[12411]
#define	P_Discharge_Unloader_Go_Pos_Tack_Time	pshm->P[12412]
#define	P_Discharge_SubZ_Down_Pos_Tack_Time	pshm->P[12413]
#define	P_Discharge_Unloader_Cutting_Pos_Tack_Time	pshm->P[12414]
#define	P_Discharge_FR_Clamp_ON_Complete_Tack_Time	pshm->P[12415]
#define	P_Discharge_Cutting_Complete_Tack_Time	pshm->P[12416]
#define	P_Discharge_Motion_PG_Active_Starting_Tack_Time	pshm->P[12417]
#define	P_Discharge_Motion_PG_Active_Complete_Tack_Time	pshm->P[12418]
#define	P_Discharge_Sepa_First_Complete_Tack_Time	pshm->P[12419]
#define	P_Discharge_Complete_Tack_Time	pshm->P[12420]
#define	P_Discharge_Total_Tack_Time	pshm->P[12421]
#define	P_Anode_Clamp_TackTime_Array0	pshm->P[12422]
#define	P_Anode_Clamp_TackTime_Array1	pshm->P[12423]
#define	P_Anode_Clamp_TackTime_Array2	pshm->P[12424]
#define	P_Anode_Clamp_TackTime_Array3	pshm->P[12425]
#define	P_Anode_Clamp_TackTime_Array4	pshm->P[12426]
#define	P_Anode_Clamp_TackTime_Array5	pshm->P[12427]
#define	P_Anode_Clamp_TackTime_Array6	pshm->P[12428]
#define	P_Anode_Clamp_TackTime_Array7	pshm->P[12429]
#define	P_Anode_Clamp_TackTime_Array8	pshm->P[12430]
#define	P_Anode_Clamp_TackTime_Array9	pshm->P[12431]
#define	P_Anode_Clamp_TackTime_Array10	pshm->P[12432]
#define	P_Stacking_TackTime_Array0	pshm->P[12433]
#define	P_Stacking_TackTime_Array1	pshm->P[12434]
#define	P_Stacking_TackTime_Array2	pshm->P[12435]
#define	P_Stacking_TackTime_Array3	pshm->P[12436]
#define	P_Stacking_TackTime_Array4	pshm->P[12437]
#define	P_Stacking_TackTime_Array5	pshm->P[12438]
#define	P_Stacking_TackTime_Array6	pshm->P[12439]
#define	P_Stacking_TackTime_Array7	pshm->P[12440]
#define	P_Stacking_TackTime_Array8	pshm->P[12441]
#define	P_Stacking_TackTime_Array9	pshm->P[12442]
#define	P_Stacking_TackTime_Array10	pshm->P[12443]
#define	P_Cathode_Clamp_TackTime_Array0	pshm->P[12444]
#define	P_Cathode_Clamp_TackTime_Array1	pshm->P[12445]
#define	P_Cathode_Clamp_TackTime_Array2	pshm->P[12446]
#define	P_Cathode_Clamp_TackTime_Array3	pshm->P[12447]
#define	P_Cathode_Clamp_TackTime_Array4	pshm->P[12448]
#define	P_Cathode_Clamp_TackTime_Array5	pshm->P[12449]
#define	P_Cathode_Clamp_TackTime_Array6	pshm->P[12450]
#define	P_Cathode_Clamp_TackTime_Array7	pshm->P[12451]
#define	P_Cathode_Clamp_TackTime_Array8	pshm->P[12452]
#define	P_Cathode_Clamp_TackTime_Array9	pshm->P[12453]
#define	P_Cathode_Clamp_TackTime_Array10	pshm->P[12454]
#define	P_JellyRoll_Out_TackTime_Array0	pshm->P[12455]
#define	P_JellyRoll_Out_TackTime_Array1	pshm->P[12456]
#define	P_JellyRoll_Out_TackTime_Array2	pshm->P[12457]
#define	P_JellyRoll_Out_TackTime_Array3	pshm->P[12458]
#define	P_JellyRoll_Out_TackTime_Array4	pshm->P[12459]
#define	P_JellyRoll_Out_TackTime_Array5	pshm->P[12460]
#define	P_JellyRoll_Out_TackTime_Array6	pshm->P[12461]
#define	P_JellyRoll_Out_TackTime_Array7	pshm->P[12462]
#define	P_JellyRoll_Out_TackTime_Array8	pshm->P[12463]
#define	P_JellyRoll_Out_TackTime_Array9	pshm->P[12464]
#define	P_JellyRoll_Out_TackTime_Array10	pshm->P[12465]
#define	P_Anode_1th_TackTime_Array0	pshm->P[12466]
#define	P_Anode_1th_TackTime_Array1	pshm->P[12467]
#define	P_Anode_1th_TackTime_Array2	pshm->P[12468]
#define	P_Anode_1th_TackTime_Array3	pshm->P[12469]
#define	P_Anode_1th_TackTime_Array4	pshm->P[12470]
#define	P_Anode_1th_TackTime_Array5	pshm->P[12471]
#define	P_Anode_1th_TackTime_Array6	pshm->P[12472]
#define	P_Anode_1th_TackTime_Array7	pshm->P[12473]
#define	P_Anode_1th_TackTime_Array8	pshm->P[12474]
#define	P_Anode_1th_TackTime_Array9	pshm->P[12475]
#define	P_Anode_1th_TackTime_Array10	pshm->P[12476]
#define	P_Cathode_1th_TackTime_Array0	pshm->P[12477]
#define	P_Cathode_1th_TackTime_Array1	pshm->P[12478]
#define	P_Cathode_1th_TackTime_Array2	pshm->P[12479]
#define	P_Cathode_1th_TackTime_Array3	pshm->P[12480]
#define	P_Cathode_1th_TackTime_Array4	pshm->P[12481]
#define	P_Cathode_1th_TackTime_Array5	pshm->P[12482]
#define	P_Cathode_1th_TackTime_Array6	pshm->P[12483]
#define	P_Cathode_1th_TackTime_Array7	pshm->P[12484]
#define	P_Cathode_1th_TackTime_Array8	pshm->P[12485]
#define	P_Cathode_1th_TackTime_Array9	pshm->P[12486]
#define	P_Cathode_1th_TackTime_Array10	pshm->P[12487]
#define	P_Anode_2th_TackTime_Array0	pshm->P[12488]
#define	P_Anode_2th_TackTime_Array1	pshm->P[12489]
#define	P_Anode_2th_TackTime_Array2	pshm->P[12490]
#define	P_Anode_2th_TackTime_Array3	pshm->P[12491]
#define	P_Anode_2th_TackTime_Array4	pshm->P[12492]
#define	P_Anode_2th_TackTime_Array5	pshm->P[12493]
#define	P_Anode_2th_TackTime_Array6	pshm->P[12494]
#define	P_Anode_2th_TackTime_Array7	pshm->P[12495]
#define	P_Anode_2th_TackTime_Array8	pshm->P[12496]
#define	P_Anode_2th_TackTime_Array9	pshm->P[12497]
#define	P_Anode_2th_TackTime_Array10	pshm->P[12498]
#define	P_Cathode_2th_TackTime_Array0	pshm->P[12499]
#define	P_Cathode_2th_TackTime_Array1	pshm->P[12500]
#define	P_Cathode_2th_TackTime_Array2	pshm->P[12501]
#define	P_Cathode_2th_TackTime_Array3	pshm->P[12502]
#define	P_Cathode_2th_TackTime_Array4	pshm->P[12503]
#define	P_Cathode_2th_TackTime_Array5	pshm->P[12504]
#define	P_Cathode_2th_TackTime_Array6	pshm->P[12505]
#define	P_Cathode_2th_TackTime_Array7	pshm->P[12506]
#define	P_Cathode_2th_TackTime_Array8	pshm->P[12507]
#define	P_Cathode_2th_TackTime_Array9	pshm->P[12508]
#define	P_Cathode_2th_TackTime_Array10	pshm->P[12509]
#define	P_Anode_Align_Table_TackTime_Array0	pshm->P[12510]
#define	P_Anode_Align_Table_TackTime_Array1	pshm->P[12511]
#define	P_Anode_Align_Table_TackTime_Array2	pshm->P[12512]
#define	P_Anode_Align_Table_TackTime_Array3	pshm->P[12513]
#define	P_Anode_Align_Table_TackTime_Array4	pshm->P[12514]
#define	P_Anode_Align_Table_TackTime_Array5	pshm->P[12515]
#define	P_Anode_Align_Table_TackTime_Array6	pshm->P[12516]
#define	P_Anode_Align_Table_TackTime_Array7	pshm->P[12517]
#define	P_Anode_Align_Table_TackTime_Array8	pshm->P[12518]
#define	P_Anode_Align_Table_TackTime_Array9	pshm->P[12519]
#define	P_Anode_Align_Table_TackTime_Array10	pshm->P[12520]
#define	P_Cathode_Align_Table_TackTime_Array0	pshm->P[12521]
#define	P_Cathode_Align_Table_TackTime_Array1	pshm->P[12522]
#define	P_Cathode_Align_Table_TackTime_Array2	pshm->P[12523]
#define	P_Cathode_Align_Table_TackTime_Array3	pshm->P[12524]
#define	P_Cathode_Align_Table_TackTime_Array4	pshm->P[12525]
#define	P_Cathode_Align_Table_TackTime_Array5	pshm->P[12526]
#define	P_Cathode_Align_Table_TackTime_Array6	pshm->P[12527]
#define	P_Cathode_Align_Table_TackTime_Array7	pshm->P[12528]
#define	P_Cathode_Align_Table_TackTime_Array8	pshm->P[12529]
#define	P_Cathode_Align_Table_TackTime_Array9	pshm->P[12530]
#define	P_Cathode_Align_Table_TackTime_Array10	pshm->P[12531]
#define	P_Anode_NG_PNP_TackTime_Array0	pshm->P[12532]
#define	P_Anode_NG_PNP_TackTime_Array1	pshm->P[12533]
#define	P_Anode_NG_PNP_TackTime_Array2	pshm->P[12534]
#define	P_Anode_NG_PNP_TackTime_Array3	pshm->P[12535]
#define	P_Anode_NG_PNP_TackTime_Array4	pshm->P[12536]
#define	P_Anode_NG_PNP_TackTime_Array5	pshm->P[12537]
#define	P_Anode_NG_PNP_TackTime_Array6	pshm->P[12538]
#define	P_Anode_NG_PNP_TackTime_Array7	pshm->P[12539]
#define	P_Anode_NG_PNP_TackTime_Array8	pshm->P[12540]
#define	P_Anode_NG_PNP_TackTime_Array9	pshm->P[12541]
#define	P_Anode_NG_PNP_TackTime_Array10	pshm->P[12542]
#define	P_Cathode_NG_PNP_TackTime_Array0	pshm->P[12543]
#define	P_Cathode_NG_PNP_TackTime_Array1	pshm->P[12544]
#define	P_Cathode_NG_PNP_TackTime_Array2	pshm->P[12545]
#define	P_Cathode_NG_PNP_TackTime_Array3	pshm->P[12546]
#define	P_Cathode_NG_PNP_TackTime_Array4	pshm->P[12547]
#define	P_Cathode_NG_PNP_TackTime_Array5	pshm->P[12548]
#define	P_Cathode_NG_PNP_TackTime_Array6	pshm->P[12549]
#define	P_Cathode_NG_PNP_TackTime_Array7	pshm->P[12550]
#define	P_Cathode_NG_PNP_TackTime_Array8	pshm->P[12551]
#define	P_Cathode_NG_PNP_TackTime_Array9	pshm->P[12552]
#define	P_Cathode_NG_PNP_TackTime_Array10	pshm->P[12553]
#define	P_Sepa_Unwinder_TackTime_Array0	pshm->P[12554]
#define	P_Sepa_Unwinder_TackTime_Array1	pshm->P[12555]
#define	P_Sepa_Unwinder_TackTime_Array2	pshm->P[12556]
#define	P_Sepa_Unwinder_TackTime_Array3	pshm->P[12557]
#define	P_Sepa_Unwinder_TackTime_Array4	pshm->P[12558]
#define	P_Sepa_Unwinder_TackTime_Array5	pshm->P[12559]
#define	P_Sepa_Unwinder_TackTime_Array6	pshm->P[12560]
#define	P_Sepa_Unwinder_TackTime_Array7	pshm->P[12561]
#define	P_Sepa_Unwinder_TackTime_Array8	pshm->P[12562]
#define	P_Sepa_Unwinder_TackTime_Array9	pshm->P[12563]
#define	P_Sepa_Unwinder_TackTime_Array10	pshm->P[12564]
#define	P_Sepa_Unwinder_TackTime_Array11	pshm->P[12565]
#define	P_1st_Unloader_TackTime_Array0	pshm->P[12566]
#define	P_1st_Unloader_TackTime_Array1	pshm->P[12567]
#define	P_1st_Unloader_TackTime_Array2	pshm->P[12568]
#define	P_1st_Unloader_TackTime_Array3	pshm->P[12569]
#define	P_1st_Unloader_TackTime_Array4	pshm->P[12570]
#define	P_1st_Unloader_TackTime_Array5	pshm->P[12571]
#define	P_1st_Unloader_TackTime_Array6	pshm->P[12572]
#define	P_1st_Unloader_TackTime_Array7	pshm->P[12573]
#define	P_1st_Unloader_TackTime_Array8	pshm->P[12574]
#define	P_1st_Unloader_TackTime_Array9	pshm->P[12575]
#define	P_1st_Unloader_TackTime_Array10	pshm->P[12576]
#define	P_Cathode_1st_Vacuum_TackTime_Array1	pshm->P[12577]
#define	P_Cathode_1st_Vacuum_TackTime_Array2	pshm->P[12578]
#define	P_Cathode_1st_Vacuum_TackTime_Array3	pshm->P[12579]
#define	P_Cathode_1st_Vacuum_TackTime_Array4	pshm->P[12580]
#define	P_Cathode_1st_Vacuum_TackTime_Array5	pshm->P[12581]
#define	P_Cathode_1st_Vacuum_TackTime_Array6	pshm->P[12582]
#define	P_Cathode_1st_Vacuum_TackTime_Array7	pshm->P[12583]
#define	P_Cathode_1st_Vacuum_TackTime_Array8	pshm->P[12584]
#define	P_Cathode_1st_Vacuum_TackTime_Array9	pshm->P[12585]
#define	P_Cathode_1st_Vacuum_TackTime_Array10	pshm->P[12586]
#define	P_Cathode_Align_Vacuum_TackTime_Array1	pshm->P[12587]
#define	P_Cathode_Align_Vacuum_TackTime_Array2	pshm->P[12588]
#define	P_Cathode_Align_Vacuum_TackTime_Array3	pshm->P[12589]
#define	P_Cathode_Align_Vacuum_TackTime_Array4	pshm->P[12590]
#define	P_Cathode_Align_Vacuum_TackTime_Array5	pshm->P[12591]
#define	P_Cathode_Align_Vacuum_TackTime_Array6	pshm->P[12592]
#define	P_Cathode_Align_Vacuum_TackTime_Array7	pshm->P[12593]
#define	P_Cathode_Align_Vacuum_TackTime_Array8	pshm->P[12594]
#define	P_Cathode_Align_Vacuum_TackTime_Array9	pshm->P[12595]
#define	P_Cathode_Align_Vacuum_TackTime_Array10	pshm->P[12596]
#define	P_Cathode_2nd_Vacuum_TackTime_Array1	pshm->P[12597]
#define	P_Cathode_2nd_Vacuum_TackTime_Array2	pshm->P[12598]
#define	P_Cathode_2nd_Vacuum_TackTime_Array3	pshm->P[12599]
#define	P_Cathode_2nd_Vacuum_TackTime_Array4	pshm->P[12600]
#define	P_Cathode_2nd_Vacuum_TackTime_Array5	pshm->P[12601]
#define	P_Cathode_2nd_Vacuum_TackTime_Array6	pshm->P[12602]
#define	P_Cathode_2nd_Vacuum_TackTime_Array7	pshm->P[12603]
#define	P_Cathode_2nd_Vacuum_TackTime_Array8	pshm->P[12604]
#define	P_Cathode_2nd_Vacuum_TackTime_Array9	pshm->P[12605]
#define	P_Cathode_2nd_Vacuum_TackTime_Array10	pshm->P[12606]
#define	P_Anode_1st_Vacuum_TackTime_Array1	pshm->P[12607]
#define	P_Anode_1st_Vacuum_TackTime_Array2	pshm->P[12608]
#define	P_Anode_1st_Vacuum_TackTime_Array3	pshm->P[12609]
#define	P_Anode_1st_Vacuum_TackTime_Array4	pshm->P[12610]
#define	P_Anode_1st_Vacuum_TackTime_Array5	pshm->P[12611]
#define	P_Anode_1st_Vacuum_TackTime_Array6	pshm->P[12612]
#define	P_Anode_1st_Vacuum_TackTime_Array7	pshm->P[12613]
#define	P_Anode_1st_Vacuum_TackTime_Array8	pshm->P[12614]
#define	P_Anode_1st_Vacuum_TackTime_Array9	pshm->P[12615]
#define	P_Anode_1st_Vacuum_TackTime_Array10	pshm->P[12616]
#define	P_Anode_Align_Vacuum_TackTime_Array1	pshm->P[12617]
#define	P_Anode_Align_Vacuum_TackTime_Array2	pshm->P[12618]
#define	P_Anode_Align_Vacuum_TackTime_Array3	pshm->P[12619]
#define	P_Anode_Align_Vacuum_TackTime_Array4	pshm->P[12620]
#define	P_Anode_Align_Vacuum_TackTime_Array5	pshm->P[12621]
#define	P_Anode_Align_Vacuum_TackTime_Array6	pshm->P[12622]
#define	P_Anode_Align_Vacuum_TackTime_Array7	pshm->P[12623]
#define	P_Anode_Align_Vacuum_TackTime_Array8	pshm->P[12624]
#define	P_Anode_Align_Vacuum_TackTime_Array9	pshm->P[12625]
#define	P_Anode_Align_Vacuum_TackTime_Array10	pshm->P[12626]
#define	P_Anode_2nd_Vacuum_TackTime_Array1	pshm->P[12627]
#define	P_Anode_2nd_Vacuum_TackTime_Array2	pshm->P[12628]
#define	P_Anode_2nd_Vacuum_TackTime_Array3	pshm->P[12629]
#define	P_Anode_2nd_Vacuum_TackTime_Array4	pshm->P[12630]
#define	P_Anode_2nd_Vacuum_TackTime_Array5	pshm->P[12631]
#define	P_Anode_2nd_Vacuum_TackTime_Array6	pshm->P[12632]
#define	P_Anode_2nd_Vacuum_TackTime_Array7	pshm->P[12633]
#define	P_Anode_2nd_Vacuum_TackTime_Array8	pshm->P[12634]
#define	P_Anode_2nd_Vacuum_TackTime_Array9	pshm->P[12635]
#define	P_Anode_2nd_Vacuum_TackTime_Array10	pshm->P[12636]
#define	P_Final_Roll_TackTime_Array1	pshm->P[12637]
#define	P_Final_Roll_TackTime_Array2	pshm->P[12638]
#define	P_Final_Roll_TackTime_Array3	pshm->P[12639]
#define	P_Final_Roll_TackTime_Array4	pshm->P[12640]
#define	P_Final_Roll_TackTime_Array5	pshm->P[12641]
#define	P_Final_Roll_TackTime_Array6	pshm->P[12642]
#define	P_Final_Roll_TackTime_Array7	pshm->P[12643]
#define	P_Final_Roll_TackTime_Array8	pshm->P[12644]
#define	P_Final_Roll_TackTime_Array9	pshm->P[12645]
#define	P_Final_Roll_TackTime_Array10	pshm->P[12646]
#define	P_Sepa_ARC_TackTime_Array1	pshm->P[12647]
#define	P_Sepa_ARC_TackTime_Array2	pshm->P[12648]
#define	P_Sepa_ARC_TackTime_Array3	pshm->P[12649]
#define	P_Sepa_ARC_TackTime_Array4	pshm->P[12650]
#define	P_Sepa_ARC_TackTime_Array5	pshm->P[12651]
#define	P_Sepa_ARC_TackTime_Array6	pshm->P[12652]
#define	P_Sepa_ARC_TackTime_Array7	pshm->P[12653]
#define	P_Sepa_ARC_TackTime_Array8	pshm->P[12654]
#define	P_Sepa_ARC_TackTime_Array9	pshm->P[12655]
#define	P_Sepa_ARC_TackTime_Array10	pshm->P[12656]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array1	pshm->P[12657]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array2	pshm->P[12658]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array3	pshm->P[12659]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array4	pshm->P[12660]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array5	pshm->P[12661]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array6	pshm->P[12662]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array7	pshm->P[12663]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array8	pshm->P[12664]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array9	pshm->P[12665]
#define	P_Cathode_1st_PNP_Vac_Chk_TackTime_Array10	pshm->P[12666]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array1	pshm->P[12667]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array2	pshm->P[12668]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array3	pshm->P[12669]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array4	pshm->P[12670]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array5	pshm->P[12671]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array6	pshm->P[12672]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array7	pshm->P[12673]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array8	pshm->P[12674]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array9	pshm->P[12675]
#define	P_Anode_1st_PNP_Vac_Chk_TackTime_Array10	pshm->P[12676]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array1	pshm->P[12677]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array2	pshm->P[12678]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array3	pshm->P[12679]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array4	pshm->P[12680]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array5	pshm->P[12681]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array6	pshm->P[12682]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array7	pshm->P[12683]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array8	pshm->P[12684]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array9	pshm->P[12685]
#define	P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array10	pshm->P[12686]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array1	pshm->P[12687]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array2	pshm->P[12688]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array3	pshm->P[12689]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array4	pshm->P[12690]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array5	pshm->P[12691]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array6	pshm->P[12692]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array7	pshm->P[12693]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array8	pshm->P[12694]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array9	pshm->P[12695]
#define	P_Anode_2nd_PNP_Vac_Chk_TackTime_Array10	pshm->P[12696]
#define	P_PACK_ML_Status_bit	pshm->P[12697]
#define	P_Whole_Stacking_TackTime_MES_Report_Flag	pshm->P[12698]
#define	P_JellyRoll_Out_TackTime_MES_Report_Flag	pshm->P[12699]
#define	P_PV_Cathode_Count	pshm->P[12700]
#define	P_PV_Anode_Count	pshm->P[12701]
#define	P_PV_AO_Value_Chanel(i)	pshm->P[(12702+i)%MAX_P]
#define	P_PV_Cathode_NG_TR_NG_Count	pshm->P[12706]
#define	P_PV_Anode_NG_TR_NG_Count	pshm->P[12707]
#define	P_PV_Anode_Retry_NG_Count	pshm->P[12708]
#define	P_PV_Cathode_Retry_NG_Count	pshm->P[12709]
#define	P_PV_Align_INPUT_Count	pshm->P[12710]
#define	P_Unloader_Grip_Pressure	pshm->P[12711]
#define	P_Unloader_Heatmeter	pshm->P[12712]
#define	P_Interlock_Messege(i)	pshm->P[(12713+i)%MAX_P]
#define	P_EPC_Y_StandBy	pshm->P[12763]
#define	P_SV_Read_Enable_Flag	pshm->P[12764]
#define	P_Spool_Rotate_Distance_mm	pshm->P[12765]
#define	P_Current_Homming_Status(i)	pshm->P[(12766+i)%MAX_P]
#define	P_Home_Execute_Type(i)	pshm->P[(12816+i)%MAX_P]
#define	P_Cathode_Clamp_Gantry	pshm->P[12866]
#define	P_Anode_Clamp_Gantry	pshm->P[12867]
#define	P_SV_Separator_Heting_Cutter_Change_Period	pshm->P[12868]
#define	P_Interval_Read_Time(i)	pshm->P[(12869+i)%MAX_P]
#define	P_Interval_Write_Time(i)	pshm->P[(12875+i)%MAX_P]
#define	P_Cathode_Picker_Cylinder_Count	pshm->P[12881]
#define	P_Anode_Picker_Cylinder_Count	pshm->P[12882]
#define	P_SV_Stack_Table_Cathode_Reference_Value	pshm->P[12883]
#define	P_SV_Stack_Table_Anode_Reference_Value	pshm->P[12884]
#define	P_CA_DR_Offset	pshm->P[12885]
#define	P_AN_DR_Offset	pshm->P[12886]
#define	P_First_DR_Offset	pshm->P[12887]
#define	P_Last_DR_Offset	pshm->P[12888]
#define	P_BTN_QC_Sample_Flag	pshm->P[12889]
#define	P_BTN_Loss_Sample_Flag	pshm->P[12890]
#define	P_MSA_Sample_Flag	pshm->P[12891]
#define	P_Sample_JR_Recipe_Count	pshm->P[12892]
#define	P_Ca_Clamp_Y_Move	pshm->P[12893]
#define	P_An_Clamp_Y_Move	pshm->P[12894]
#define	P_Stack_Table_JR_Exist_Flag	pshm->P[12895]
#define	P_Program_Monitoring_Lamp_Cell_Ready	pshm->P[12896]
#define	P_Program_Monitoring_Lamp_Ready_Pos	pshm->P[12897]
#define	P_Program_Monitoring_Lamp_Pause_Pos	pshm->P[12898]
#define	P_Program_Monitoring_Lamp_Motion_Run	pshm->P[12899]
#define	P_Program_Monitoring_Lamp_Cell_Remove	pshm->P[12900]
#define	P_Program_Monitoring_Lamp_Cell_Supply	pshm->P[12901]
#define	P_Program_Monitoring_Lamp_Sepa_Mode	pshm->P[12902]
#define	P_Program_Monitoring_Lamp_Semi_Run	pshm->P[12903]
#define	P_Program_Monitoring_Lamp_Stack_Mode	pshm->P[12904]
#define	P_Program_Monitoring_Lamp_Anode_Aling_NG	pshm->P[12905]
#define	P_Program_Monitoring_Lamp_Anode_Retry_NG	pshm->P[12906]
#define	P_Program_Monitoring_Lamp_Cathode_Align_NG	pshm->P[12907]
#define	P_Program_Monitoring_Lamp_Cathode_Retry_NG	pshm->P[12908]
#define	P_Program_Monitoring_Lamp_Last_Stack_Mode	pshm->P[12909]
#define	P_Program_Monitoring_Lamp_Jelly_Roll_OK	pshm->P[12910]
#define	P_Program_Monitoring_Lamp_Jelly_Roll_NG	pshm->P[12911]
#define	P_Program_Monitoring_Lamp_Jelly_Roll_Sepa	pshm->P[12912]
#define	P_Program_Monitoring_Lamp_Cell_Out_Pos	pshm->P[12913]
#define	P_Program_Monitoring_Lamp_Cell_Out_Mode	pshm->P[12914]
#define	P_Master_Motion_Program_Flag	pshm->P[12915]
#define	P_Sub_Master_Motion_Program_Flag(i)	pshm->P[(12916+i)%MAX_P]
#define	P_Slave_Motion_Program_Flag(i)	pshm->P[(12936+i)%MAX_P]
#define	P_Master_Motion_CycleStop_Flag	pshm->P[12956]
#define	P_OLD_Jog_Speed_Motor(i)	pshm->P[(12957+i)%MAX_P]
#define	P_PLC_08_Program_Ver	pshm->P[13007]
#define	P_Old_PMAC_Commands	pshm->P[13008]
#define	P_Old_PMAC_Status	pshm->P[13009]
#define	P_Old_PMAC_Current_Mode	pshm->P[13010]
#define	P_Mode_Function_State_Machine	pshm->P[13011]
#define	P_PMAC_Commands	pshm->P[13012]
#define	P_Command_Start(i)	pshm->P[(13013+i)%MAX_P]
#define	P_Command_Complete(i)	pshm->P[(13031+i)%MAX_P]
#define	P_Command_Reset(i)	pshm->P[(13049+i)%MAX_P]
#define	P_Command_Hold(i)	pshm->P[(13067+i)%MAX_P]
#define	P_Command_Unhold(i)	pshm->P[(13085+i)%MAX_P]
#define	P_Command_Suspend(i)	pshm->P[(13103+i)%MAX_P]
#define	P_Command_Unsuspend(i)	pshm->P[(13121+i)%MAX_P]
#define	P_Command_Clear(i)	pshm->P[(13139+i)%MAX_P]
#define	P_Command_Stop(i)	pshm->P[(13157+i)%MAX_P]
#define	P_Command_Abort(i)	pshm->P[(13175+i)%MAX_P]
#define	P_Command_Status_Complete(i)	pshm->P[(13193+i)%MAX_P]
#define	P_Command_Mask_Layer(i)	pshm->P[(13211+i)%MAX_P]
#define	P_Command_Process_Type(i)	pshm->P[(13229+i)%MAX_P]
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
#define	P_PMAC_Current_Mode	pshm->P[13247]
#define	P_PMAC_Status	pshm->P[13248]
#define	P_PMAC_Old_Mode	pshm->P[13249]
#define	P_Ready_Tack_Chk_Timer	pshm->P[13250]
#define	P_PLC09_Common_Command_Flag	pshm->P[13251]
#define	P_PLC09_Common_Command_Complete_Bit	pshm->P[13252]
#define	P_PLC09_Common_Execute_Flag	pshm->P[13253]
#define	P_PLC09_Common_Execute_Complete_Bit	pshm->P[13254]
#define	P_PLC09_Status	pshm->P[13255]
#define	P_PLC09_Libraries_Var	pshm->P[13256]
#define	P_Master_Motion_Program_ON_Flag	pshm->P[13257]
#define	P_Master_Motion_Program_ON_Complete_Bit	pshm->P[13258]
#define	P_Master_Motion_Program_OFF_Flag	pshm->P[13259]
#define	P_Master_Motion_Program_OFF_Complete_Bit	pshm->P[13260]
#define	P_Common_Function_Timbase_ON_Flag	pshm->P[13261]
#define	P_Common_Function_Timbase_ON_Complete_Bit	pshm->P[13262]
#define	P_Common_Function_Timbase_OFF_Flag	pshm->P[13263]
#define	P_Common_Function_Timbase_OFF_Complete_Bit	pshm->P[13264]
#define	P_Common_Function_Monitoring_Lamp_OFF_Flag	pshm->P[13265]
#define	P_Common_Function_Monitoring_Lamp_OFF_Complete_Bit	pshm->P[13266]
#define	P_Common_Function_Slave_Motion_Common_Init_Flag	pshm->P[13267]
#define	P_Common_Function_Slave_Motion_Common_Init_Complete_Bit	pshm->P[13268]
#define	P_Common_Function_OlD_Jog_Speed_Save_ON_Flag	pshm->P[13269]
#define	P_Common_Function_OlD_Jog_Speed_Save_ON_Complete_Bit	pshm->P[13270]
#define	P_Auto_Resetting_Sum_Ready_Pos_Check_Flag	pshm->P[13271]
#define	P_Auto_Resetting_Sum_Ready_Pos_Check_Complete_bit	pshm->P[13272]
#define	P_Manual_Resetting_Sum_Ready_Pos_Check_Flag	pshm->P[13273]
#define	P_Manual_Resetting_Sum_Ready_Pos_Check_Complete_bit	pshm->P[13274]
#define	P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Flag	pshm->P[13275]
#define	P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Complete_Bit	pshm->P[13276]
#define	P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Flag	pshm->P[13277]
#define	P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Complete_Bit	pshm->P[13278]
#define	P_Motion_Target_Position_Complete	pshm->P[13279]
#define	P_SM_Auto_Run_Layer_Management	pshm->P[13280]
#define	P_Buffer_Mode_Status_Sequence	pshm->P[13281]
#define	P_SM_Sub_Function_Pause	pshm->P[13282]
#define	P_PLC09_Resetting_Position_Check_State_Machine	pshm->P[13283]
#define	P_PLC09_Resetting_Position_Moving_State_Machine	pshm->P[13284]
#define	P_Sum_Ready_pos_Motor(i)	pshm->P[(13285+i)%MAX_P]
#define	P_SM_Resetting_Pause_Position	pshm->P[13327]
#define	P_20per_Vac_Error_Cycle_Stop_Flag	pshm->P[13328]
#define	P_MNTR_PLC23_ARC_Complete	pshm->P[13329]
#define	P_FUNCTION_PLC13_Sepa_Trigger_Enable	pshm->P[13330]
#define	P_PLC_Recipe_PLC2_Revise_Sepa	pshm->P[13331]
#define	P_Auto_Semi_Init_Status	pshm->P[13332]
#define	P_Auto_Semi_Init_Chk_Bit	pshm->P[13333]
#define	P_Old_PLC_HeartBit_Flag	pshm->P[13334]
#define	P_PLC09_Init_Flag	pshm->P[13335]
#define	P_Check_IDLE_CF_Flag	pshm->P[13336]
#define	P_Check_EXECUTE_CF_Flag	pshm->P[13337]
#define	P_Check_COMPLETING_CF_Flag	pshm->P[13338]
#define	P_Check_COMPLETE_CF_Flag	pshm->P[13339]
#define	P_Check_HOLDING_CF_Flag	pshm->P[13340]
#define	P_Check_HOLD_CF_Flag	pshm->P[13341]
#define	P_Check_UNHOLDING_CF_Flag	pshm->P[13342]
#define	P_Check_SUSPENDING_CF_Flag	pshm->P[13343]
#define	P_Check_SUSPENDED_CF_Flag	pshm->P[13344]
#define	P_Check_UNSUSPENDING_CF_Flag	pshm->P[13345]
#define	P_Check_STOPPED_CF_Flag	pshm->P[13346]
#define	P_Check_ABORTED_CF_Flag	pshm->P[13347]
#define	P_Check_CLEARING_CF_Flag	pshm->P[13348]
#define	P_Check_IDLE_CF	pshm->P[13349]
#define	P_Check_EXECUTE_CF	pshm->P[13350]
#define	P_Check_COMPLETING_CF	pshm->P[13351]
#define	P_Check_COMPLETE_CF	pshm->P[13352]
#define	P_Check_HOLDING_CF	pshm->P[13353]
#define	P_Check_HOLD_CF	pshm->P[13354]
#define	P_Check_UNHOLDING_CF	pshm->P[13355]
#define	P_Check_SUSPENDING_CF	pshm->P[13356]
#define	P_Check_SUSPENDED_CF	pshm->P[13357]
#define	P_Check_UNSUSPENDING_CF	pshm->P[13358]
#define	P_Check_STOPPED_CF	pshm->P[13359]
#define	P_Check_ABORTED_CF	pshm->P[13360]
#define	P_Check_CLEARING_CF	pshm->P[13361]
#define	P_Check_STOPPING_CF	pshm->P[13362]
#define	P_Check_STARTING_CF	pshm->P[13363]
#define	P_Check_RESETTING_CF	pshm->P[13364]
#define	P_Check_STARTTING_CF	pshm->P[13365]
#define	P_Queue_Clear	pshm->P[13366]
#define	P_PLC09_Alarm_Test_Flag	pshm->P[13367]
#define	P_PLC09_Test_Temp	pshm->P[13368]
#define	P_PLC01_STOP_Queue_Complete_Flag	pshm->P[13369]
#define	P_PMAC_All_Home_Cmd	pshm->P[13370]
#define	P_PMAC_All_Home_Status	pshm->P[13371]
#define	P_PMAC_Master_Following_Use_Flag	pshm->P[13372]
#define	PnP_Belt_Waring_Pos	pshm->P[13373]
#define	P_Old_X_PLC_Sync_Heart_Bit	pshm->P[13374]
#define	P_Stack_Heart_Bit_Sync_Flag	pshm->P[13375]
#define	P_Stack_Heart_Bit_Sunc_Complete_Bit	pshm->P[13376]
#define	P_Resetting_Init_Module_RTN	pshm->P[13377]
#define	P_PLC09_MNTR	pshm->P[13378]
#define	P_Unloder_PNP_Home_IL_Pos	pshm->P[13379]
#define	P_ECAT_Slave_Err_Bit	pshm->P[13380]
#define	P_MC_Power_Down_Flag	pshm->P[13381]
#define	P_Old_MC_Power_Down_Flag	pshm->P[13382]
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
#define	P_Modbus_Delay_Timer	pshm->P[13383]
#define	P_Modbus_Connect_Status	pshm->P[13384]
#define	P_Modbus_Reconnect_MNTR	pshm->P[13385]
#define	P_Ecat_Reconn_Chk_Lamp	pshm->P[13386]
#define	P_MC_Reconn_Chk_Lamp	pshm->P[13387]
#define	P_Cathode_1st_Vac_Set_Time	pshm->P[13388]
#define	P_Cathode_2nd_Vac_Set_Time	pshm->P[13389]
#define	P_Cathode_Align_Vac_Set_Time	pshm->P[13390]
#define	P_Cathode_Align_Blow_Set_Time	pshm->P[13391]
#define	P_Anode_1st_Vac_Set_Time	pshm->P[13392]
#define	P_Anode_2nd_Vac_Set_Time	pshm->P[13393]
#define	P_Sepa_Consume_Mode_Thickness_rate	pshm->P[13394]
#define	P_Sepa_Anode_Recipe_Count	pshm->P[13395]
#define	P_Sepa_Cathode_Recipe_Count	pshm->P[13396]
#define	P_Discharge_Cathode_Recipe_Count	pshm->P[13397]
#define	P_Discharge_Anode_Recipe_Count	pshm->P[13398]
#define	P_Suspend_Discharge_Cathode_Counter	pshm->P[13399]
#define	P_Suspend_Discharge_Anode_Counter	pshm->P[13400]
#define	P_Suspend_Discharge_Waiting_Flag	pshm->P[13401]
#define	P_Com_ARC_Sepa_Consume_Mode_Flag	pshm->P[13402]
#define	P_Com_EPC_Sepa_Consume_Mode_Flag	pshm->P[13403]
#define	P_Com_User_Sepa_Consume_Mode_Flag	pshm->P[13404]
#define	P_Com_Dry_Mode_Flag	pshm->P[13405]
#define	P_SM_Recipe_Value_Management	pshm->P[13406]
#define	P_Sepa_Mode_Recipe_Count	pshm->P[13407]
#define	P_Sepa_Mode_EPC_Recipe_Count	pshm->P[13408]
#define	P_ARC_End_Sepa_Recipe_Count	pshm->P[13409]
#define	P_Anode_Align_NG_Array(i)	pshm->P[(13410+i)%MAX_P]
#define	P_Cathode_Align_NG_Array(i)	pshm->P[(13430+i)%MAX_P]
#define	P_Anode_Surface_NG_Array(i)	pshm->P[(13450+i)%MAX_P]
#define	P_Cathode_Surface_NG_Array(i)	pshm->P[(13470+i)%MAX_P]
#define	P_Stack_NG_Array(i)	pshm->P[(13490+i)%MAX_P]
#define	P_Cathode_Align_Continuous_NG_Stop_Select	pshm->P[13510]
#define	P_Anode_Align_Continuous_NG_Stop_Select	pshm->P[13511]
#define	P_Stack_Vision_NG_Enable	pshm->P[13512]
#define	P_Cathode_Surface_Continuous_NG_Stop_Select	pshm->P[13513]
#define	P_Anode_Surface_Continuous_NG_Stop_Select	pshm->P[13514]
#define	P_Anode_Trigger_IO_Test_Vision_PLC_Loop	pshm->P[13515]
#define	P_Anode_Trigger_IO_Test_Motion_Loop	pshm->P[13516]
#define	P_Cathode_Trigger_IO_Test_Vision_PLC_Loop	pshm->P[13517]
#define	P_Cathode_Trigger_IO_Test_Motion_Loop	pshm->P[13518]
#define	P_Stack_Trigger_IO_Test_Vision_PLC_Loop	pshm->P[13519]
#define	P_Stack_Trigger_IO_Test_Motion_Loop	pshm->P[13520]
#define	P_PLC12_Continuous_Buffer_Reset_Flag	pshm->P[13521]
#define	P_Continuous_Call_Align_OK_Flag(i)	pshm->P[(13522+i)%MAX_P]
#define	P_Continuous_Call_Align_NG_Flag(i)	pshm->P[(13524+i)%MAX_P]
#define	P_Continuous_Call_Align_TimeOut_Flag(i)	pshm->P[(13526+i)%MAX_P]
#define	P_Continuous_Call_Surface_OK_Flag(i)	pshm->P[(13528+i)%MAX_P]
#define	P_Continuous_Call_Surface_NG_Flag(i)	pshm->P[(13530+i)%MAX_P]
#define	P_Continuous_Call_Surface_TimeOut_Flag(i)	pshm->P[(13532+i)%MAX_P]
#define	P_Continuous_Call_Stack_Flag(i)	pshm->P[(13534+i)%MAX_P]
#define	P_PLC12_Anode_Sheet_Pick_Up_Flag	pshm->P[13537]
#define	P_PLC12_Cathode_Sheet_Pick_Up_Flag	pshm->P[13538]
#define	P_Hold_Anode_Sheet_Pick_Up_Flag	pshm->P[13539]
#define	P_Hold_Cathode_Sheet_Pick_Up_Flag	pshm->P[13540]
#define	P_Sheet_Interface_Complete_Pos	pshm->P[13541]
#define	P_Anode_Sheet_Interface_Complete_Pos	pshm->P[13542]
#define	P_Cathode_Sheet_Interface_Complete_Pos	pshm->P[13543]
#define	P_Anode_2nd_TR_Maint_Check	pshm->P[13544]
#define	P_Cathode_2nd_TR_Maint_Check	pshm->P[13545]
#define	P_PLC12_Observser_MNTR(i)	pshm->P[(13546+i)%MAX_P]
#define	P_PLC12_Vacuum_MNTR(i)	pshm->P[(13551+i)%MAX_P]
#define	P_Vacuum_Check(i)	pshm->P[(13559+i)%MAX_P]
#define	P_PLC12_Blow_MNTR(i)	pshm->P[(13567+i)%MAX_P]
#define	P_Blow_Check(i)	pshm->P[(13575+i)%MAX_P]
#define	P_PLC12_Vacuum_1st_Cathode_MNTR_Timer	pshm->P[13583]
#define	P_PLC12_Vacuum_2nd_Cathode_MNTR_Timer	pshm->P[13584]
#define	P_PLC12_Vacuum_NG_Cathode_MNTR_Timer	pshm->P[13585]
#define	P_PLC12_Vacuum_Align_Cathode_MNTR_Timer	pshm->P[13586]
#define	P_PLC12_Vacuum_1st_Anode_MNTR_Timer	pshm->P[13587]
#define	P_PLC12_Vacuum_2nd_Anode_MNTR_Timer	pshm->P[13588]
#define	P_PLC12_Vacuum_NG_Anode_MNTR_Timer	pshm->P[13589]
#define	P_PLC12_Vacuum_Align_Anode_MNTR_Timer	pshm->P[13590]
#define	P_PLC12_Vacuum_1st_Cathode_Set_Time	pshm->P[13591]
#define	P_PLC12_Vacuum_2nd_Cathode_Set_Time	pshm->P[13592]
#define	P_PLC12_Vacuum_NG_Cathode_Set_Time	pshm->P[13593]
#define	P_PLC12_Vacuum_Align_Cathode_Set_Time	pshm->P[13594]
#define	P_PLC12_Vacuum_1st_Anode_Set_Time	pshm->P[13595]
#define	P_PLC12_Vacuum_2nd_Anode_Set_Time	pshm->P[13596]
#define	P_PLC12_Vacuum_NG_Anode_Set_Time	pshm->P[13597]
#define	P_PLC12_Vacuum_Align_Anode_Set_Time	pshm->P[13598]
#define	P_PLC12_Vacuum_1st_Cathode_Take_Time(i)	pshm->P[(13599+i)%MAX_P]
#define	P_PLC12_Vacuum_2nd_Cathode_Take_Time(i)	pshm->P[(13604+i)%MAX_P]
#define	P_PLC12_Vacuum_NG_Cathode_Take_Time(i)	pshm->P[(13609+i)%MAX_P]
#define	P_PLC12_Vacuum_Align_Cathode_Take_Time(i)	pshm->P[(13614+i)%MAX_P]
#define	P_PLC12_Vacuum_1st_Anode_Take_Time(i)	pshm->P[(13619+i)%MAX_P]
#define	P_PLC12_Vacuum_2nd_Anode_Take_Time(i)	pshm->P[(13624+i)%MAX_P]
#define	P_PLC12_Vacuum_NG_Anode_Take_Time(i)	pshm->P[(13629+i)%MAX_P]
#define	P_PLC12_Vacuum_Align_Anode_Take_Time(i)	pshm->P[(13634+i)%MAX_P]
#define	P_PLC12_Blow_1st_Cathode_MNTR_Timer	pshm->P[13639]
#define	P_PLC12_Blow_2nd_Cathode_MNTR_Timer	pshm->P[13640]
#define	P_PLC12_Blow_NG_Cathode_MNTR_Timer	pshm->P[13641]
#define	P_PLC12_Blow_Align_Cathode_MNTR_Timer	pshm->P[13642]
#define	P_PLC12_Blow_1st_Anode_MNTR_Timer	pshm->P[13643]
#define	P_PLC12_Blow_2nd_Anode_MNTR_Timer	pshm->P[13644]
#define	P_PLC12_Blow_NG_Anode_MNTR_Timer	pshm->P[13645]
#define	P_PLC12_Blow_Align_Anode_MNTR_Timer	pshm->P[13646]
#define	P_PLC12_Blow_1st_Cathode_Set_Time	pshm->P[13647]
#define	P_PLC12_Blow_2nd_Cathode_Set_Time	pshm->P[13648]
#define	P_PLC12_Blow_NG_Cathode_Set_Time	pshm->P[13649]
#define	P_PLC12_Blow_Align_Cathode_Set_Time	pshm->P[13650]
#define	P_PLC12_Blow_1st_Anode_Set_Time	pshm->P[13651]
#define	P_PLC12_Blow_2nd_Anode_Set_Time	pshm->P[13652]
#define	P_PLC12_Blow_NG_Anode_Set_Time	pshm->P[13653]
#define	P_PLC12_Blow_Align_Anode_Set_Time	pshm->P[13654]
#define	P_PLC12_Blow_1st_Cathode_Take_Time(i)	pshm->P[(13655+i)%MAX_P]
#define	P_PLC12_Blow_2nd_Cathode_Take_Time(i)	pshm->P[(13660+i)%MAX_P]
#define	P_PLC12_Blow_NG_Cathode_Take_Time(i)	pshm->P[(13665+i)%MAX_P]
#define	P_PLC12_Blow_Align_Cathode_Take_Time(i)	pshm->P[(13670+i)%MAX_P]
#define	P_PLC12_Blow_1st_Anode_Take_Time(i)	pshm->P[(13675+i)%MAX_P]
#define	P_PLC12_Blow_2nd_Anode_Take_Time(i)	pshm->P[(13680+i)%MAX_P]
#define	P_PLC12_Blow_NG_Anode_Take_Time(i)	pshm->P[(13685+i)%MAX_P]
#define	P_PLC12_Blow_Align_Anode_Take_Time(i)	pshm->P[(13690+i)%MAX_P]
#define	P_Vacuum_Reentry_Bit	pshm->P[13695]
#define	P_Blow_Reentry_Bit	pshm->P[13696]
#define	P_Status_arry(i)	pshm->P[(13697+i)%MAX_P]
#define	P_Queue_arry(i)	pshm->P[(13717+i)%MAX_P]
#define	P_Step_arry(i)	pshm->P[(13737+i)%MAX_P]
#define	P_Index_arry(i)	pshm->P[(13757+i)%MAX_P]
#define	P_top	pshm->P[13777]
#define	P_Queue_stack_top	pshm->P[13778]
#define	P_Step_stack_top	pshm->P[13779]
#define	P_Index_stack_top	pshm->P[13780]
#define	P_Status_stack_top	pshm->P[13781]
#define	NN_Step	pshm->P[13782]
#define	NN_Index	pshm->P[13783]
#define	P_PLC_Observser_MNTR(i)	pshm->P[(13784+i)%MAX_P]
#define	P_PLC12_Frist	pshm->P[13789]
#define	P_SM_Auto_Run_Status_Management	pshm->P[13790]
#define	P_SM_Status_Main_Memory_Management	pshm->P[13791]
#define	P_SM_Cell_Memory_Management	pshm->P[13792]
#define	P_Test_Vacuum_Timer(i)	pshm->P[(13793+i)%MAX_P]
#define	P_Test_Blow_Timer(i)	pshm->P[(13801+i)%MAX_P]
#define	P_Vac_Test_Set_Time(i)	pshm->P[(13809+i)%MAX_P]
#define	P_Blow_Test_Set_Time(i)	pshm->P[(13817+i)%MAX_P]
#define	P_PLC12_Vacuum_Unit_Data	pshm->P[13825]
#define	P_PLC12_Blow_Unit_Data	pshm->P[13826]
#define	P_Stack_Algorithme_Cmd_Event_Status	pshm->P[13827]
#define	P_PLC12_vacuum_Event_Status	pshm->P[13828]
#define	P_PLC12_Blow_Event_status	pshm->P[13829]
#define	P_PLC12_vacuum_DIO_Observer_Status	pshm->P[13830]
#define	P_PLC12_Blow_DIO_Observer_Status	pshm->P[13831]
#define	P_Resetting_Vacuum_MNTR_State_Machine	pshm->P[13832]
#define	P_Heart_Bit_Time	pshm->P[13833]
#define	P_Dancer_Angle_Alarm_Timer_Flag	pshm->P[13834]
#define	P_Dancer_Angle_Alarm_Check_Timer	pshm->P[13835]
#define	P_BTN_LED_LAMP	pshm->P[13836]
#define	P_Old_BTN_LED_LAMP	pshm->P[13837]
#define	P_PLC_TO_PMAC_Work_Confirm_Operation_Cnt	pshm->P[13838]
#define	P_VISION_TO_PMAC_Work_Confirm_Operation_Ack_Cnt	pshm->P[13839]
#define	P_Ca_AT_Retry_Cal_Move_Complete	pshm->P[13840]
#define	P_An_AT_Retry_Cal_Move_Complete	pshm->P[13841]
#define	P_Ca_AT_Retry_Cal_Cnt	pshm->P[13842]
#define	P_An_AT_Retry_Cal_Cnt	pshm->P[13843]
#define	P_Ca_AT_Retry_Cal_Complete	pshm->P[13844]
#define	P_An_AT_Retry_Cal_Complete	pshm->P[13845]
#define	P_An_AT_Retry_Cal_Pass	pshm->P[13846]
#define	P_Ca_AT_Retry_Cal_Pass	pshm->P[13847]
#define	P_Ca_Picker_T_Turn_Cnt_Flag	pshm->P[13848]
#define	P_Ca_Picker_T_Turn_Cnt	pshm->P[13849]
#define	P_Ca_Picker_T_Home_Type	pshm->P[13850]
#define	P_An_Picker_T_Turn_Cnt_Flag	pshm->P[13851]
#define	P_An_Picker_T_Turn_Cnt	pshm->P[13852]
#define	P_An_Picker_T_Home_Type	pshm->P[13853]
#define	P_Flag_Vac_Status_Initialize	pshm->P[13854]
#define	P_SM_Vac_Initialize	pshm->P[13855]
#define	P_Flag_Anode_1st_Vac_OFF	pshm->P[13856]
#define	P_Flag_Anode_AT_Vac_OFF	pshm->P[13857]
#define	P_Flag_Anode_2nd_Vac_OFF	pshm->P[13858]
#define	P_Flag_Anode_NG_Vac_OFF	pshm->P[13859]
#define	P_Flag_Cathode_1st_Vac_OFF	pshm->P[13860]
#define	P_Flag_Cathode_AT_Vac_OFF	pshm->P[13861]
#define	P_Flag_Cathode_2nd_Vac_OFF	pshm->P[13862]
#define	P_Flag_Cathode_NG_Vac_OFF	pshm->P[13863]
#define	P_Flag_Anode_1st_Vac_Initial_Alarm	pshm->P[13864]
#define	P_Flag_Anode_AT_Vac_Initial_Alarm	pshm->P[13865]
#define	P_Flag_Anode_2nd_Vac_Initial_Alarm	pshm->P[13866]
#define	P_Flag_Anode_NG_Vac_Initial_Alarm	pshm->P[13867]
#define	P_Flag_Cathode_1st_Vac_Initial_Alarm	pshm->P[13868]
#define	P_Flag_Cathode_AT_Vac_Initial_Alarm	pshm->P[13869]
#define	P_Flag_Cathode_2nd_Vac_Initial_Alarm	pshm->P[13870]
#define	P_Flag_Cathode_NG_Vac_Initial_Alarm	pshm->P[13871]
#define	P_Middle_Discharge_Ignore_Total_Count	pshm->P[13872]
#define	P_Middle_Discharge_Ignore_Stack_Count	pshm->P[13873]
#define	P_Middle_Discharge_Ignore_ON_Signal	pshm->P[13874]
#define	P_Middle_Discharge_Ignore_OFF_Signal	pshm->P[13875]
#define	P_Middle_Discharge_Ignore_Cell_Count	pshm->P[13876]
#define	P_ARC_Middle_Discharge_Ignore_Vision_Check	pshm->P[13877]
#define	P_ARC_Middle_Discharge_Ignore_ON_Flag	pshm->P[13878]
#define	P_Middle_Discharge_Ignore_User_Sepa_Mode_Check	pshm->P[13879]
#define	P_Zero_Angle(i)	pshm->P[(13880+i)%MAX_P]
#define	P_Zero_Length(i)	pshm->P[(13905+i)%MAX_P]
#define	P_Homeoffset_Change_Flag(i)	pshm->P[(13930+i)%MAX_P]
#define	P_Cal_Distance(i)	pshm->P[(13955+i)%MAX_P]
#define	P_Cal_Denominator(i)	pshm->P[(13960+i)%MAX_P]
#define	P_Cal_Numerator(i)	pshm->P[(13965+i)%MAX_P]
#define	P_Cal_Dif_Deg(i)	pshm->P[(13970+i)%MAX_P]
#define	P_Vac_Door_Open_Clear(i)	pshm->P[(13975+i)%MAX_P]
#define	P_Flag_Sepa_Stack_Mode_CHK	pshm->P[13988]
#define	P_Read_Timer_S(i)	pshm->P[(13989+i)%MAX_P]
#define	P_Write_Timer_S(i)	pshm->P[(13998+i)%MAX_P]
#define	P_Interval_Read_S(i)	pshm->P[(14007+i)%MAX_P]
#define	P_Interval_Write_S(i)	pshm->P[(14016+i)%MAX_P]
#define	P_UI_Jog_Vel_M(i)	pshm->P[(14025+i)%MAX_P]
#define	P_Initialize_Read_Excom_Variables_Flag	pshm->P[14075]
#define	P_Old_X_Read_Count_S(i)	pshm->P[(14076+i)%MAX_P]
#define	P_Cathode_Clamp_MC_Cylinder_Count	pshm->P[14085]
#define	P_Cathode_Clamp_OP_Cylinder_Count	pshm->P[14086]
#define	P_Anode_Clamp_MC_Cylinder_Count	pshm->P[14087]
#define	P_Anode_Clamp_OP_Cylinder_Count	pshm->P[14088]
#define	P_Cathode_1ST_TR_Cylinder_Count	pshm->P[8003]
#define	P_Anode_1ST_TR_Cylinder_Count	pshm->P[8004]
#define	P_BTN_Cathode_Clamp_inside_Machine_Cylinder_Count_Clear	pshm->P[14089]
#define	P_BTN_Cathode_Clamp_Middle_Cylinder_Count_Clear	pshm->P[14090]
#define	P_BTN_Cathode_Clamp_outside_Machine_Cylinder_Count_Clear	pshm->P[14091]
#define	P_BTN_Anode_Clamp_inside_Machine_Cylinder_Count_Clear	pshm->P[14092]
#define	P_BTN_Anode_Clamp_Middle_Cylinder_Count_Clear	pshm->P[14093]
#define	P_BTN_Anode_Clamp_outside_Machine_Cylinder_Count_Clear	pshm->P[14094]
#define	P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear	pshm->P[14095]
#define	P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear_Old	pshm->P[14096]
#define	P_BTN_Anode_1ST_TR_Cylinder_Count_Clear	pshm->P[14097]
#define	P_BTN_Anode_1ST_TR_Cylinder_Count_Clear_Old	pshm->P[14098]
#define	P_X_BTN_Manual_1(i)	pshm->P[(14099+i)%MAX_P]
#define	P_X_BTN_Manual_2(i)	pshm->P[(14219+i)%MAX_P]
#define	P_X_BTN_Manual_3(i)	pshm->P[(14339+i)%MAX_P]
#define	P_Home_InterLock_M(i)	pshm->P[(14459+i)%MAX_P]
#define	P_Status_BTN_Manual_1(i)	pshm->P[(14509+i)%MAX_P]
#define	P_Status_BTN_Manual_2(i)	pshm->P[(14629+i)%MAX_P]
#define	P_Status_BTN_Manual_Interlock_1(i)	pshm->P[(14749+i)%MAX_P]
#define	P_Status_BTN_Manual_Interlock_2(i)	pshm->P[(14869+i)%MAX_P]
#define	P_Status_BTN_Manual_Interlock_3(i)	pshm->P[(14989+i)%MAX_P]
#define	P_Mode_Run_Enable_Flag(i)	pshm->P[(15109+i)%MAX_P]
#define	P_RECIPE_PLC27_Manual_Interval	pshm->P[15114]
#define	P_RECIPE_PLC27_Auto_Interval	pshm->P[15115]
#define	P_MNTR_PLC4_Vision_Result(i)	pshm->P[(15116+i)%MAX_P]
#define	P_PNP_Vac_Mode_Run_Enable_Flag(i)	pshm->P[(15317+i)%MAX_P]
#define	P_Recipe_Speed_Value	pshm->P[15322]
#define	P_Slave6_Target_X_For_Cell_Out	pshm->P[15323]
#define	P_HCK_Step_MNTR(i)	pshm->P[(15324+i)%MAX_P]
#define	P_Axis_Home_Pos(i)	pshm->P[(15374+i)%MAX_P]
#define	P_Axis_Ready_Pos(i)	pshm->P[(15424+i)%MAX_P]
#define	P_PMAC_Homing_CHK(i)	pshm->P[(15474+i)%MAX_P]
#define	P_Poistion_error	pshm->P[15524]
#define	P_Home_Command(i)	pshm->P[(15525+i)%MAX_P]
#define	P_Recipe_Count_Num	pshm->P[15575]
#define	L_Motor_Status_Update_Interval	pshm->P[15576]
#define	L_Motor_Recipe_Update_Interval	pshm->P[15577]
#define	P_UI_Servo_On_Off	pshm->P[15578]
#define	P_Old_BTN_Servo_On_Off_M(i)	pshm->P[(15579+i)%MAX_P]
#define	P_Peak_Load_Ratio_M(i)	pshm->P[(15612+i)%MAX_P]
#define	P_Chk_Current_Jog_Sel(i)	pshm->P[(15645+i)%MAX_P]
#define	P_Jog_Sel_Count	pshm->P[15678]
#define	P_Recipe_POS_Interock_Num_Bit(i)	pshm->P[(15679+i)%MAX_P]
#define	P_Recipe_VEL(i)	pshm->P[(15712+i)%MAX_P]
#define	P_Recipe_POS(i)	pshm->P[(15723+i)%MAX_P]
#define	P_BTN_Servo_On_Off_M(i)	pshm->P[(15734+i)%MAX_P]
#define	P_BTN_Home_M(i)	pshm->P[(15767+i)%MAX_P]
#define	P_BTN_Jog_Stop_M(i)	pshm->P[(15800+i)%MAX_P]
#define	P_BTN_Recipe_POS_RUN_M(i)	pshm->P[(15833+i)%MAX_P]
#define	P_Recipe_POS_Flag_M(i)	pshm->P[(15866+i)%MAX_P]
#define	P_BTN_Jog_INC_M(i)	pshm->P[(15899+i)%MAX_P]
#define	P_BTN_JOG_ABS_M(i)	pshm->P[(15932+i)%MAX_P]
#define	P_User_Jog_Distance	pshm->P[15965]
#define	P_Unit_Command(i)	pshm->P[(15966+i)%MAX_P]
#define	P_Unit_State_Machine(i)	pshm->P[(16066+i)%MAX_P]
#define	P_Status_BTN_Manual_3(i)	pshm->P[(16166+i)%MAX_P]
#define	P_Chk_Current_BTN_Sel(i)	pshm->P[(16266+i)%MAX_P]
#define	P_BTN_Sel_Count	pshm->P[16316]
#define	P_PC_BTN_No	pshm->P[16317]
#define	P_BTN_Interlock_Update_Interval	pshm->P[16318]
#define	P_Align_Table_Status_Update_Interval	pshm->P[16319]
#define	P_Jelly_Roll_Total_Count_Old	pshm->P[16320]
#define	P_Old_m4120	pshm->P[16321]
#define	P_Old_m4121	pshm->P[16322]
#define	P_Old_m4122	pshm->P[16323]
#define	P_Old_m4123	pshm->P[16324]
#define	P_Linear_Encoder_Pos_Check_Flag(i)	pshm->P[(16325+i)%MAX_P]
#define	P_Linear_Encoder_Pos(i)	pshm->P[(16330+i)%MAX_P]
#define	P_Status_Linear_Encoder_HomeZero(i)	pshm->P[(16335+i)%MAX_P]
#define	P_Command_Linear_Encoder_HomeZero(i)	pshm->P[(16340+i)%MAX_P]
#define	P_Flag_Linear_Enc_Homezero_Complete_M17	pshm->P[16345]
#define	P_Flag_Linear_Enc_Homezero_Complete_M18	pshm->P[16346]
#define	P_Flag_Linear_Enc_Homezero_Complete_M19	pshm->P[16347]
#define	P_Flag_Linear_Enc_Homezero_Complete_M20	pshm->P[16348]
#define	P_CMD_Linear_ENC_Homezero_M17	pshm->P[16349]
#define	P_CMD_Linear_ENC_Homezero_M18	pshm->P[16350]
#define	P_CMD_Linear_ENC_Homezero_M19	pshm->P[16351]
#define	P_CMD_Linear_ENC_Homezero_M20	pshm->P[16352]
#define	P_OLD_Home_Offset(i)	pshm->P[(16353+i)%MAX_P]
#define	P_RECIPE_PLC27_Alltime_Interval	pshm->P[16383]
#define	P_Manual_Memory_Tower_Timer	pshm->P[16384]
#define	P_Memory_Tower_Interval	pshm->P[16385]
#define	P_PLC_14_Status_Cycle_Stop_Flag	pshm->P[16386]
#define	P_Cathode_AlignTable_Cleaning_Pos_Status_Machine	pshm->P[16387]
#define	P_Anode_AlignTable_Cleaning_Pos_Status_Machine	pshm->P[16388]
#define	P_Status_Cathode_AlignTable_Cleaning_Pos	pshm->P[16389]
#define	P_Status_Anode_AlignTable_Cleaning_Pos	pshm->P[16390]
#define	P_CMD_Cathode_AlignTable_Cleaning_Pos	pshm->P[16391]
#define	P_CMD_Anode_AlignTable_Cleaning_Pos	pshm->P[16392]
#define	P_Cathode_2nd_pnp_Cleaning_Mode_Pos	pshm->P[16393]
#define	P_Anode_2nd_pnp_Cleaning_Mode_Pos	pshm->P[16394]
#define	P_Interlock_Test	pshm->P[16395]
#define	P_PNP_Picker_T_Pos	pshm->P[16396]
#define	P_NG_PNP_Pos	pshm->P[16397]
#define	M_Old_X_BTN_Machine_READY	pshm->P[16398]
#define	M_Old_X_BTN_Machine_START	pshm->P[16399]
#define	M_Old_X_BTN_Machine_STOP	pshm->P[16400]
#define	M_Old_X_BTN_Machine_RESET	pshm->P[16401]
#define	M_Old_X_BTN_Machine_MODE	pshm->P[16402]
#define	P_BTN_Motor_Pos_Check_RTN	pshm->P[16403]
#define	P_BTN_Memory_Tower_Check_Bit	pshm->P[16404]
#define	P_PMAC_Status_IDLE_Motor_Not_Pos	pshm->P[16405]
#define	P_PMAC_Status_IDLE_Motor_Pos	pshm->P[16406]
#define	P_BTN_Motor_Pos_Check_Monitor	pshm->P[16407]
#define	P_PackML_Auto_Stop_Bit	pshm->P[16408]
#define	P_BTN_IDLE_Motor_Not_Pos	pshm->P[16409]
#define	M_X_BTN_Machine_Mode	pshm->P[16410]
#define	M_Old_X_BTN_Machine_Mode	pshm->P[16411]
#define	P_Lamp_Blinking_Timer	pshm->P[16412]
#define	P_BTN_Ready_Lamp	pshm->P[16413]
#define	P_BTN_Start_Lamp	pshm->P[16414]
#define	P_BTN_Stop_Lamp	pshm->P[16415]
#define	P_ARC_Name_Plate_Passive_Status	pshm->P[16416]
#define	P_ARC_Passive_Status	pshm->P[16417]
#define	P_NP_Spool_Number	pshm->P[16418]
#define	P_ARC_Page_On	pshm->P[16419]
#define	P_ARC_NP_Upper_Timer	pshm->P[16420]
#define	P_ARC_Upper_Ready	pshm->P[16421]
#define	P_ARC_NP_Upper_3rd_Step_Toggle_Variable	pshm->P[16422]
#define	P_ARC_NP_Upper_7th_Step_Variable	pshm->P[16423]
#define	P_ARC_NP_Upper_7th_Step_Edge_Variable	pshm->P[16424]
#define	P_ARC_NP_Upper_Rot_ReRot_Blinking_Bit	pshm->P[16425]
#define	P_ARC_NP_Lower_Timer	pshm->P[16426]
#define	P_ARC_Lower_Ready	pshm->P[16427]
#define	P_ARC_NP_Lower_3rd_Step_Toggle_Variable	pshm->P[16428]
#define	P_ARC_NP_Lower_7th_Step_Variable	pshm->P[16429]
#define	P_ARC_NP_Lower_7th_Step_Edge_Variable	pshm->P[16430]
#define	P_ARC_NP_Lower_Rot_ReRot_Blinking_Bit	pshm->P[16431]
#define	M_Old_X_ARC_NP_Ready	pshm->P[16432]
#define	M_Old_X_ARC_NP_Unwinder_Rotation	pshm->P[16433]
#define	M_Old_X_ARC_NP_Unwinder_Re_Rotation	pshm->P[16434]
#define	P_Status_Clear_Flag	pshm->P[16435]
#define	P_Status_Clear_RTN	pshm->P[16436]
#define	P_MSA_BTN_On	pshm->P[16437]
#define	P_Align_Take_Off_BTN_ON	pshm->P[16438]
#define	P_ARC_NP_Upper_Ready_Check_Bit	pshm->P[16439]
#define	P_ARC_NP_Lower_Ready_Check_Bit	pshm->P[16440]
#define	P_PLC13_Cycle_Stop_Return_Array(i)	pshm->P[(16441+i)%MAX_P]
#define	P_Stopping_CycleStop_Status	pshm->P[16541]
#define	P_Stopping_CycleStop_Seq_Index	pshm->P[16542]
#define	P_Stopping_CycleStop_Precondition_Seq_Index	pshm->P[16543]
#define	P_Stopping_CycleStop_Module_Status	pshm->P[16544]
#define	P_Stopping_CycleStop_Cmd	pshm->P[16545]
#define	P_Stopping_CycleStop_State_Machine	pshm->P[16546]
#define	P_Stopping_CycleStop_Act_State_Machine(i)	pshm->P[(16547+i)%MAX_P]
#define	P_Module_Cycle_Stop_Act_State_Machine_Array(i)	pshm->P[(16567+i)%MAX_P]
#define	P_Module_Cycle_Stop_Act_Complete_Bit(i)	pshm->P[(16587+i)%MAX_P]
#define	P_Module_Cycle_Stop_Act_Command_Array(i)	pshm->P[(16607+i)%MAX_P]
#define	P_OLD_Module_Cycle_Stop_Act_Command_Array(i)	pshm->P[(16627+i)%MAX_P]
#define	P_Buffer_Seqdata_CycleStop_Array(i)	pshm->P[(16647+i)%MAX_P]
#define	P_Final_Roll_Cathode_Pos_Status	pshm->P[16667]
#define	P_Sheet_Paper_FWD_Pos_Status	pshm->P[16668]
#define	P_Final_Roll_Vision_Pos_Status	pshm->P[16669]
#define	P_Cathode_Clamp_ON_Status	pshm->P[16670]
#define	P_Anode_Clamp_ON_Status	pshm->P[16671]
#define	P_Anode_Clamp_OFF_Status	pshm->P[16672]
#define	P_Partition_Up_Flag	pshm->P[16673]
#define	P_Partition_Down_Flag	pshm->P[16674]
#define	P_Partition_Avoid_Flag	pshm->P[16675]
#define	P_Partition_Avoid_Z_Speed	pshm->P[16676]
#define	P_Partition_Avoid_X_Speed	pshm->P[16677]
#define	P_Partition_Avoid_T_Speed	pshm->P[16678]
#define	P_Partition_Avoid_2nd_T_Pos	pshm->P[16679]
#define	P_Partition_Step_Flag	pshm->P[16680]
#define	P_Partition_1st_Avoid_Offset	pshm->P[16681]
#define	P_Partition_Picker_Avoid_Offset	pshm->P[16682]
#define	P_Partition_Avoid_Check	pshm->P[16683]
#define	P_Tact_Time_Timer(i)	pshm->P[(16684+i)%MAX_P]
#define	P_Tack_Time_Save_Time(i)	pshm->P[(16724+i)%MAX_P]
#define	P_Anode_NG_PNP_Tact_Time_Start	pshm->P[16764]
#define	P_Cathode_NG_PNP_Tact_Time_Start	pshm->P[16765]
#define	P_Anode_NG_PNP_Tact_Time_End	pshm->P[16766]
#define	P_Cathode_NG_PNP_Tact_Time_End	pshm->P[16767]
#define	P_Tact_Time_Stack_Array(i)	pshm->P[(16768+i)%MAX_P]
#define	P_Tact_Time_Discharge_Array(i)	pshm->P[(16778+i)%MAX_P]
#define	P_Tact_Time_1st_Unloader_Array(i)	pshm->P[(16788+i)%MAX_P]
#define	P_Tact_Time_Sepa_ARC_Array(i)	pshm->P[(16798+i)%MAX_P]
#define	P_Tact_Time_Final_Roll_Array(i)	pshm->P[(16808+i)%MAX_P]
#define	P_Tact_Time_Cathode_1st_PNP_Array(i)	pshm->P[(16818+i)%MAX_P]
#define	P_Tact_Time_Cathode_Align_Array(i)	pshm->P[(16828+i)%MAX_P]
#define	P_Tact_Time_Cathode_2nd_PNP_Array(i)	pshm->P[(16838+i)%MAX_P]
#define	P_Tact_Time_Cathode_Clamp_Array(i)	pshm->P[(16848+i)%MAX_P]
#define	P_Tact_Time_Anode_1st_PNP_Array(i)	pshm->P[(16858+i)%MAX_P]
#define	P_Tact_Time_Anode_Align_Array(i)	pshm->P[(16868+i)%MAX_P]
#define	P_Tact_Time_Anode_2nd_PNP_Array(i)	pshm->P[(16878+i)%MAX_P]
#define	P_Tact_Time_Anode_Clamp_Array(i)	pshm->P[(16888+i)%MAX_P]
#define	P_Tact_Time_Cathode_1st_PNP_Vac_Array(i)	pshm->P[(16898+i)%MAX_P]
#define	P_Tact_Time_Cathode_Align_PNP_Vac_Array(i)	pshm->P[(16908+i)%MAX_P]
#define	P_Tact_Time_Cathode_2nd_PNP_Vac_Array(i)	pshm->P[(16918+i)%MAX_P]
#define	P_Tact_Time_Anode_1st_PNP_Vac_Array(i)	pshm->P[(16928+i)%MAX_P]
#define	P_Tact_Time_Anode_Align_PNP_Vac_Array(i)	pshm->P[(16938+i)%MAX_P]
#define	P_Tact_Time_Anode_2nd_PNP_Vac_Array(i)	pshm->P[(16948+i)%MAX_P]
#define	P_Tact_Time_Final_Roller_Clamp	pshm->P[16958]
#define	P_Tact_Time_Final_Roller_Unclamp	pshm->P[16959]
#define	P_Tact_Time_Stack_Table_Down	pshm->P[16960]
#define	P_Tact_Time_Stack_Table_Up	pshm->P[16961]
#define	P_Tact_Time_Sepa_Cutting_Down	pshm->P[16962]
#define	P_Tact_Time_Sepa_Cutting_Up	pshm->P[16963]
#define	P_Tact_Time_ARC_Upper_Plate_Up	pshm->P[16964]
#define	P_Tact_Time_ARC_Upper_Plate_Down	pshm->P[16965]
#define	P_Tact_Time_ARC_Upper_Tilting_On	pshm->P[16966]
#define	P_Tact_Time_ARC_Upper_Tilting_Off	pshm->P[16967]
#define	P_Tact_Time_ARC_Upper_Cutter_Fwd	pshm->P[16968]
#define	P_Tact_Time_ARC_Upper_Cutter_Bwd	pshm->P[16969]
#define	P_Tact_Time_ARC_Upper_Clamp_On	pshm->P[16970]
#define	P_Tact_Time_ARC_Upper_Clamp_Off	pshm->P[16971]
#define	P_Tact_Time_ARC_Lower_Plate_Up	pshm->P[16972]
#define	P_Tact_Time_ARC_Lower_Plate_Down	pshm->P[16973]
#define	P_Tact_Time_ARC_Lower_Tilting_On	pshm->P[16974]
#define	P_Tact_Time_ARC_Lower_Tilting_Off	pshm->P[16975]
#define	P_Tact_Time_ARC_Lower_Cutter_Fwd	pshm->P[16976]
#define	P_Tact_Time_ARC_Lower_Cutter_Bwd	pshm->P[16977]
#define	P_Tact_Time_ARC_Lower_Clamp_On	pshm->P[16978]
#define	P_Tact_Time_ARC_Lower_Clamp_Off	pshm->P[16979]
#define	P_Tact_Time_Save_Final_Roller_Clamp_Time	pshm->P[16980]
#define	P_Tact_Time_Save_Final_Roller_Unclamp_Time	pshm->P[16981]
#define	P_Tact_Time_Save_Stack_Table_Down_Time	pshm->P[16982]
#define	P_Tact_Time_Save_Stack_Table_Up_Time	pshm->P[16983]
#define	P_Tact_Time_Save_Sepa_Cutting_Down_Time	pshm->P[16984]
#define	P_Tact_Time_Save_Sepa_Cutting_Up_Time	pshm->P[16985]
#define	P_Tact_Time_Save_ARC_Upper_Plate_Up_Time	pshm->P[16986]
#define	P_Tact_Time_Save_ARC_Upper_Plate_Down_Time	pshm->P[16987]
#define	P_Tact_Time_Save_ARC_Upper_Tilting_On_Time	pshm->P[16988]
#define	P_Tact_Time_Save_ARC_Upper_Tilting_Off_Time	pshm->P[16989]
#define	P_Tact_Time_Save_ARC_Upper_Cutter_Fwd_Time	pshm->P[16990]
#define	P_Tact_Time_Save_ARC_Upper_Cutter_Bwd_Time	pshm->P[16991]
#define	P_Tact_Time_Save_ARC_Upper_Clamp_On_Time	pshm->P[16992]
#define	P_Tact_Time_Save_ARC_Upper_Clamp_Off_Time	pshm->P[16993]
#define	P_Tact_Time_Save_ARC_Lower_Plate_Up_Time	pshm->P[16994]
#define	P_Tact_Time_Save_ARC_Lower_Plate_Down_Time	pshm->P[16995]
#define	P_Tact_Time_Save_ARC_Lower_Tilting_On_Time	pshm->P[16996]
#define	P_Tact_Time_Save_ARC_Lower_Tilting_Off_Time	pshm->P[16997]
#define	P_Tact_Time_Save_ARC_Lower_Cutter_Fwd_Time	pshm->P[16998]
#define	P_Tact_Time_Save_ARC_Lower_Cutter_Bwd_Time	pshm->P[16999]
#define	P_Tact_Time_Save_ARC_Lower_Clamp_On_Time	pshm->P[17000]
#define	P_Tact_Time_Save_ARC_Lower_Clamp_Off_Time	pshm->P[17001]
#define	P_Tact_Time_Check(i)	pshm->P[(17002+i)%MAX_P]
#define	P_Old_Tact_Time_Check(i)	pshm->P[(17042+i)%MAX_P]
#define	P_Tact_Time_Head_Address(i)	pshm->P[(17082+i)%MAX_P]
#define	P_Tact_Time_Array_Init	pshm->P[17122]
#define	P_Last_Run_To_Discharge_Tact_Timer	pshm->P[17123]
#define	P_Last_Run_To_Discharge_Tact_Time	pshm->P[17124]
#define	P_Master_Trigger_Sync_Tact_Timer	pshm->P[17125]
#define	P_Master_Trigger_Sync_Tact_Time	pshm->P[17126]
#define	P_Vision_First_Sepa_Stack_Align_OK_PMAC_Flag	pshm->P[17127]
#define	P_PLC18_EPC_Retry_Mode_Time_Use_Flag	pshm->P[17128]
#define	P_PLC18_Vision_EPC_Correction_Request_Old	pshm->P[17129]
#define	P_PLC18_EPC_Moving_Flag	pshm->P[17130]
#define	P_PLC18_EPC_Moving_Status	pshm->P[17131]
#define	P_PLC18_EPC_Move_State_Machine	pshm->P[17132]
#define	P_PLC18_EPC_Move_Status	pshm->P[17133]
#define	P_PLC18_EPC_inspection_Time	pshm->P[17134]
#define	P_EPC_Insp_Time	pshm->P[17135]
#define	P_EPC_Correction_Time	pshm->P[17136]
#define	P_TEST_Max_EPC_Sensor_Value_um	pshm->P[17137]
#define	P_PLC18_EPC_Moving_Timer	pshm->P[17138]
#define	P_EPC_MNTR_VAR(i)	pshm->P[(17139+i)%MAX_P]
#define	P_EPC_Axis_Target_Y	pshm->P[17149]
#define	P_Com_After_Sepa_Mode_Status	pshm->P[17150]
#define	P_PLC18_PLC_to_PMAC_Correction_Value	pshm->P[17151]
#define	P_PLC_EPC_Status	pshm->P[17152]
#define	P_EPC_Retry_Over_Alarm_Flag	pshm->P[17153]
#define	P_ARC_EPC_Vision_Value_Apply_Bit	pshm->P[17154]
#define	P_ARC_EPC_Vision_Value_Apply_Flag	pshm->P[17155]
#define	P_ARC_EPC_Vision_Value_Apply_State_Machine	pshm->P[17156]
#define	P_ARC_EPC_Vision_Value_Apply_Timer	pshm->P[17157]
#define	P_ARC_EPC_Vision_Value_Apply_Time	pshm->P[17158]
#define	P_AH_Home_Status	pshm->P[17159]
#define	P_Resetting_All_Home_Command	pshm->P[17160]
#define	P_Homing_Alarm_Time	pshm->P[17161]
#define	P_Home_Check_Arry(i)	pshm->P[(17162+i)%MAX_P]
#define	P_All_Home_Stop_Cmd	pshm->P[17212]
#define	P_Home_First_Move	pshm->P[17213]
#define	P_PWM_Phasing_Start(i)	pshm->P[(17214+i)%MAX_P]
#define	P_PWM_Status(i)	pshm->P[(17219+i)%MAX_P]
#define	P_PWM_State_Machine(i)	pshm->P[(17224+i)%MAX_P]
#define	P_AH_Seq_arr(i)	pshm->P[(17229+i)%MAX_P]
#define	P_DD_M_Home_ABS_Pos(i)	pshm->P[(17244+i)%MAX_P]
#define	P_AH_Indvi_rtn(i)	pshm->P[(17249+i)%MAX_P]
#define	P_DD_M_Home_Pos_Flag	pshm->P[17300]
#define	P_WAIT_INDEX	pshm->P[17301]
#define	P_Home_Check_Arry1(i)	pshm->P[(17302+i)%MAX_P]
#define	P_FR_Cmd_Check_Flag	pshm->P[17352]
#define	P_PV_Separator_Dancer_Pressure	pshm->P[17353]
#define	P_PV_Cathode_Clamp_Pressure	pshm->P[17354]
#define	P_PV_Anoode_Clamp_Pressure	pshm->P[17355]
#define	P_PV_Cathode_Final_Roller_X_Axis	pshm->P[17356]
#define	P_PV_Anode_Final_Roller_X_Axis	pshm->P[17357]
#define	P_PV_Cathode_Clamp_ON_Y1_Axis_Pos	pshm->P[17358]
#define	P_PV_Cathode_Clamp_ON_Y2_Axis_Pos	pshm->P[17359]
#define	P_PV_Cathode_Clamp_ON_Z1_Axis_Pos	pshm->P[17360]
#define	P_PV_Cathode_Clamp_ON_Z2_Axis_Pos	pshm->P[17361]
#define	P_PV_Anode_Clamp_ON_Y1_Axis_Pos	pshm->P[17362]
#define	P_PV_Anode_Clamp_ON_Y2_Axis_Pos	pshm->P[17363]
#define	P_PV_Anode_Clamp_ON_Z1_Axis_Pos	pshm->P[17364]
#define	P_PV_Anode_Clamp_ON_Z2_Axis_Pos	pshm->P[17365]
#define	P_PV_Cathode_2th_AT_T_Axis_Pos	pshm->P[17366]
#define	P_PV_Cathode_2th_ST_T_Axis_Pos	pshm->P[17367]
#define	P_PV_Cathode_2th_AT_Z_Axis_Pos	pshm->P[17368]
#define	P_PV_Cathode_2th_ST_Z_Axis_Pos	pshm->P[17369]
#define	P_PV_Anode_2th_AT_T_Axis_Pos	pshm->P[17370]
#define	P_PV_Anode_2th_ST_T_Axis_Pos	pshm->P[17371]
#define	P_PV_Anode_2th_AT_Z_Axis_Pos	pshm->P[17372]
#define	P_PV_Anode_2th_ST_Z_Axis_Pos	pshm->P[17373]
#define	P_PV_Cathode_1th_Ready_T_Axis_Pos	pshm->P[17374]
#define	P_PV_Cathode_1th_CV_T_Axis_Pos	pshm->P[17375]
#define	P_PV_Cathode_1th_AT_T_Axis_Pos	pshm->P[17376]
#define	P_PV_Cathode_1th_Ready_Z_Axis_Pos	pshm->P[17377]
#define	P_PV_Cathode_1th_CV_Z_Axis_Pos	pshm->P[17378]
#define	P_PV_Cathode_1th_AT_Z_Axis_Pos	pshm->P[17379]
#define	P_PV_Anode_1th_Ready_T_Axis_Pos	pshm->P[17380]
#define	P_PV_Anode_1th_CV_T_Axis_Pos	pshm->P[17381]
#define	P_PV_Anode_1th_AT_T_Axis_Pos	pshm->P[17382]
#define	P_PV_Anode_1th_Ready_Z_Axis_Pos	pshm->P[17383]
#define	P_PV_Anode_1th_CV_Z_Axis_Pos	pshm->P[17384]
#define	P_PV_Anode_1th_AT_Z_Axis_Pos	pshm->P[17385]
#define	P_PV_Cathode_NG_AT_T_Axis_Pos	pshm->P[17386]
#define	P_PV_Cathode_NG_Box_T_Axis_Pos	pshm->P[17387]
#define	P_PV_Anode_NG_AT_T_Axis_Pos	pshm->P[17388]
#define	P_PV_Anode_NG_Box_T_Axis_Pos	pshm->P[17389]
#define	P_SemiRun_Separator_Dancer_Pressure_Flag	pshm->P[17390]
#define	P_SemiRun_Cathode_Clamp_Pressure_Flag	pshm->P[17391]
#define	P_SemiRun_Anoode_Clamp_Pressure_Flag	pshm->P[17392]
#define	P_SemiRun_Cathode_Final_Roller_X_Axis_Flag	pshm->P[17393]
#define	P_SemiRun_Anode_Final_Roller_X_Axis_Flag	pshm->P[17394]
#define	P_SemiRun_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag	pshm->P[17395]
#define	P_SemiRun_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag	pshm->P[17396]
#define	P_SemiRun_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag	pshm->P[17397]
#define	P_SemiRun_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag	pshm->P[17398]
#define	P_SemiRun_Cathode_2th_AT_T_Axis_Pos_Flag	pshm->P[17399]
#define	P_SemiRun_Cathode_2th_ST_T_Axis_Pos_Flag	pshm->P[17400]
#define	P_SemiRun_Cathode_2th_AT_Z_Axis_Pos_Flag	pshm->P[17401]
#define	P_SemiRun_Cathode_2th_ST_Z_Axis_Pos_Flag	pshm->P[17402]
#define	P_SemiRun_Anode_2th_AT_T_Axis_Pos_Flag	pshm->P[17403]
#define	P_SemiRun_Anode_2th_ST_T_Axis_Pos_Flag	pshm->P[17404]
#define	P_SemiRun_Anode_2th_AT_Z_Axis_Pos_Flag	pshm->P[17405]
#define	P_SemiRun_Anode_2th_ST_Z_Axis_Pos_Flag	pshm->P[17406]
#define	P_SemiRun_Cathode_1th_Ready_T_Axis_Pos_Flag	pshm->P[17407]
#define	P_SemiRun_Cathode_1th_CV_T_Axis_Pos_Flag	pshm->P[17408]
#define	P_SemiRun_Cathode_1th_AT_T_Axis_Pos_Flag	pshm->P[17409]
#define	P_SemiRun_Cathode_1th_Ready_Z_Axis_Pos_Flag	pshm->P[17410]
#define	P_SemiRun_Cathode_1th_CV_Z_Axis_Pos_Flag	pshm->P[17411]
#define	P_SemiRun_Cathode_1th_AT_Z_Axis_Pos_Flag	pshm->P[17412]
#define	P_SemiRun_Anode_1th_Ready_T_Axis_Pos_Flag	pshm->P[17413]
#define	P_SemiRun_Anode_1th_CV_T_Axis_Pos_Flag	pshm->P[17414]
#define	P_SemiRun_Anode_1th_AT_T_Axis_Pos_Flag	pshm->P[17415]
#define	P_SemiRun_Anode_1th_Ready_Z_Axis_Pos_Flag	pshm->P[17416]
#define	P_SemiRun_Anode_1th_CV_Z_Axis_Pos_Flag	pshm->P[17417]
#define	P_SemiRun_Anode_1th_AT_Z_Axis_Pos_Flag	pshm->P[17418]
#define	P_SemiRun_Cathode_NG_AT_T_Axis_Pos_Flag	pshm->P[17419]
#define	P_SemiRun_Cathode_NG_Box_T_Axis_Pos_Flag	pshm->P[17420]
#define	P_SemiRun_Anode_NG_AT_T_Axis_Pos_Flag	pshm->P[17421]
#define	P_SemiRun_Anode_NG_Box_T_Axis_Pos_Flag	pshm->P[17422]
#define	P_Motion_Separator_Dancer_Pressure_Flag	pshm->P[17423]
#define	P_Motion_Cathode_Clamp_Pressure_Flag	pshm->P[17424]
#define	P_Motion_Anoode_Clamp_Pressure_Flag	pshm->P[17425]
#define	P_Motion_Cathode_Final_Roller_X_Axis_Flag	pshm->P[17426]
#define	P_Motion_Anode_Final_Roller_X_Axis_Flag	pshm->P[17427]
#define	P_Motion_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag	pshm->P[17428]
#define	P_Motion_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag	pshm->P[17429]
#define	P_Motion_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag	pshm->P[17430]
#define	P_Motion_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag	pshm->P[17431]
#define	P_Motion_Cathode_2th_AT_T_Axis_Pos_Flag	pshm->P[17432]
#define	P_Motion_Cathode_2th_ST_T_Axis_Pos_Flag	pshm->P[17433]
#define	P_Motion_Cathode_2th_AT_Z_Axis_Pos_Flag	pshm->P[17434]
#define	P_Motion_Cathode_2th_ST_Z_Axis_Pos_Flag	pshm->P[17435]
#define	P_Motion_Anode_2th_AT_T_Axis_Pos_Flag	pshm->P[17436]
#define	P_Motion_Anode_2th_ST_T_Axis_Pos_Flag	pshm->P[17437]
#define	P_Motion_Anode_2th_AT_Z_Axis_Pos_Flag	pshm->P[17438]
#define	P_Motion_Anode_2th_ST_Z_Axis_Pos_Flag	pshm->P[17439]
#define	P_Motion_Cathode_1th_Ready_T_Axis_Pos_Flag	pshm->P[17440]
#define	P_Motion_Cathode_1th_CV_T_Axis_Pos_Flag	pshm->P[17441]
#define	P_Motion_Cathode_1th_AT_T_Axis_Pos_Flag	pshm->P[17442]
#define	P_Motion_Cathode_1th_Ready_Z_Axis_Pos_Flag	pshm->P[17443]
#define	P_Motion_Cathode_1th_CV_Z_Axis_Pos_Flag	pshm->P[17444]
#define	P_Motion_Cathode_1th_AT_Z_Axis_Pos_Flag	pshm->P[17445]
#define	P_Motion_Anode_1th_Ready_T_Axis_Pos_Flag	pshm->P[17446]
#define	P_Motion_Anode_1th_CV_T_Axis_Pos_Flag	pshm->P[17447]
#define	P_Motion_Anode_1th_AT_T_Axis_Pos_Flag	pshm->P[17448]
#define	P_Motion_Anode_1th_Ready_Z_Axis_Pos_Flag	pshm->P[17449]
#define	P_Motion_Anode_1th_CV_Z_Axis_Pos_Flag	pshm->P[17450]
#define	P_Motion_Anode_1th_AT_Z_Axis_Pos_Flag	pshm->P[17451]
#define	P_Motion_Cathode_NG_AT_T_Axis_Pos_Flag	pshm->P[17452]
#define	P_Motion_Cathode_NG_Box_T_Axis_Pos_Flag	pshm->P[17453]
#define	P_Motion_Anode_NG_AT_T_Axis_Pos_Flag	pshm->P[17454]
#define	P_Motion_Anode_NG_Box_T_Axis_Pos_Flag	pshm->P[17455]
#define	P_Cathode_1PNP_Sacle_Value	pshm->P[17456]
#define	P_Cathode_2PNP_Sacle_Value	pshm->P[17457]
#define	P_Anode_1PNP_Sacle_Value	pshm->P[17458]
#define	P_Anode_2PNP_Sacle_Value	pshm->P[17459]
#define	P_PLC01_SemiRun_PV_Flag	pshm->P[17460]
#define	P_PV_EPC_Index	pshm->P[17461]
#define	P_PV_EPC_Camera_Pos(i)	pshm->P[(17462+i)%MAX_P]
#define	P_BTN_MSA_Total_Value	pshm->P[17477]
#define	P_Vision_Align_Trigger_Timer	pshm->P[17478]
#define	P_Vision_Stack_Trigger_Timer	pshm->P[17479]
#define	P_MSA_Chk_Pos_Timer	pshm->P[17480]
#define	P_MSA_Chk_Pos_Time	pshm->P[17481]
#define	P_VISION_MSA_Status_Prod_Sequence(i)	pshm->P[(17482+i)%MAX_P]
#define	P_VISION_MSA_Seq_Index	pshm->P[17502]
#define	P_VISION_MSA_Anode_Align_Bit_Pos	pshm->P[17503]
#define	P_VISION_MSA_Seq_PreCondition_Index	pshm->P[17504]
#define	P_MSA_CycleStop_Point_Check_Complete_RTN	pshm->P[17505]
#define	P_MSA_Cmd(i)	pshm->P[(17506+i)%MAX_P]
#define	P_Current_Anode_Align_MSA_Run_Count	pshm->P[17511]
#define	P_Current_Cathode_Align_MSA_Run_Count	pshm->P[17512]
#define	P_Current_Anode_Stack_MSA_Run_Count	pshm->P[17513]
#define	P_Current_Cathode_Stack_MSA_Run_Count	pshm->P[17514]
#define	P_VISION_MSA_Align_Count_Chk_Flag	pshm->P[17515]
#define	P_VISION_MSA_Stack_Count_Chk_Flag	pshm->P[17516]
#define	P_VISION_MSA_pre_InterLock_Cmd	pshm->P[17517]
#define	P_VISION_MSA_pre_InterLock_Status	pshm->P[17518]
#define	P_VISION_MSA_pre_InterLock_Check_Assy_Bit	pshm->P[17519]
#define	P_VISION_MSA_pre_InterLock_Assy_Bit_Pos	pshm->P[17520]
#define	P_Vision_MSA_Interlock_Status	pshm->P[17521]
#define	P_VISION_MSA_MODE	pshm->P[17522]
#define	P_VISION_MSA_Status_Flag	pshm->P[17523]
#define	P_VISION_MSA_State_Machine	pshm->P[17524]
#define	P_VISION_MSA_Status	pshm->P[17525]
#define	P_VISION_MSA_Seq_Command_Occurs	pshm->P[17526]
#define	P_Vision_Align_Trigger_Time	pshm->P[17527]
#define	P_Anode_Align_MSA_Motion_Check	pshm->P[17528]
#define	P_Cathode_Align_MSA_Motion_Check	pshm->P[17529]
#define	P_Anode_Stack_MSA_Motion_Check	pshm->P[17530]
#define	P_Cathode_Stack_MSA_Motion_Check	pshm->P[17531]
#define	P_Anode_Align_MSA_Motion_ProgActive_Complete	pshm->P[17532]
#define	P_Cathode_Align_MSA_Motion_ProgActive_Complete	pshm->P[17533]
#define	P_Anode_Stack_MSA_Motion_ProgActive_Complete	pshm->P[17534]
#define	P_Cathode_Stack_MSA_Motion_ProgActive_Complete	pshm->P[17535]
#define	P_BTN_Align_Off_Total_Value	pshm->P[17536]
#define	P_Align_Take_Off_Cmd(i)	pshm->P[(17537+i)%MAX_P]
#define	P_Align_Take_Off_Status	pshm->P[17540]
#define	P_Align_Take_Off_Mode	pshm->P[17541]
#define	P_Align_Take_Off_Status_Flag	pshm->P[17542]
#define	P_Align_Take_Off_State_Machine	pshm->P[17543]
#define	P_Align_Take_Off_Chk_Pos_Timer	pshm->P[17544]
#define	P_Align_Take_Off_Motor_Check_Complete	pshm->P[17545]
#define	P_Align_Take_Off_Speed_Return_Complete	pshm->P[17546]
#define	P_Align_Take_Off_Interlock_Status	pshm->P[17547]
#define	P_Align_Take_Off_pre_InterLock_Cmd	pshm->P[17548]
#define	P_Align_Take_Off_pre_InterLock_Status	pshm->P[17549]
#define	P_Align_Take_Off_pre_InterLock_Check_Assy_Bit	pshm->P[17550]
#define	P_Align_Take_Off_pre_InterLock_Assy_Bit_Pos	pshm->P[17551]
#define	P_Align_Take_Off_Seq_Index	pshm->P[17552]
#define	P_Align_Take_Off_Seq_PreCondition_Index	pshm->P[17553]
#define	P_Align_Take_Off_Status_Prod_Sequence(i)	pshm->P[(17554+i)%MAX_P]
#define	P_Align_Take_Off_Stop_Signal	pshm->P[17574]
#define	P_Vision_Cal_Reset_Count	pshm->P[17575]
#define	P_2nd_PNP_Cleaning_Mode_Cmd	pshm->P[17576]
#define	P_2nd_PNP_Cleaning_Mode_Status	pshm->P[17577]
#define	P_2nd_PNP_Cleaning_Mode_Z_Jog_Speed	pshm->P[17578]
#define	P_2nd_PNP_Cleaning_Mode_X_Jog_Speed	pshm->P[17579]
#define	P_2nd_PNP_Cleaning_Mode_T_Jog_Speed	pshm->P[17580]
#define	P_2nd_PNP_Cleaning_Avoid_2nd_T_Pos	pshm->P[17581]
#define	P_PNP_Vac_Chk_Mode_Interlock	pshm->P[17582]
#define	P_Vac_Chk_Test	pshm->P[17583]
#define	P_Anode_1st_PNP_Vac_Chk_Mode_Blocked	pshm->P[17584]
#define	P_Cathode_1st_PNP_Vac_Chk_Mode_Blocked	pshm->P[17585]
#define	P_Anode_2nd_PNP_Vac_Chk_Mode_Blocked	pshm->P[17586]
#define	P_Cathode_2nd_PNP_Vac_Chk_Mode_Blocked	pshm->P[17587]
#define	P_SM_Anode_1st_PNP_Vac_Chk_Mode	pshm->P[17588]
#define	P_SM_Cathode_1st_PNP_Vac_Chk_Mode	pshm->P[17589]
#define	P_SM_Anode_2nd_PNP_Vac_Chk_Mode	pshm->P[17590]
#define	P_SM_Cathode_2nd_PNP_Vac_Chk_Mode	pshm->P[17591]
#define	P_Anode_1st_PNP_Vac_Chk_Execute_Timer	pshm->P[17592]
#define	P_Cathode_1st_PNP_Vac_Chk_Execute_Timer	pshm->P[17593]
#define	P_Anode_2nd_PNP_Vac_Chk_Execute_Timer	pshm->P[17594]
#define	P_Cathode_2nd_PNP_Vac_Chk_Execute_Timer	pshm->P[17595]
#define	P_Anode_1st_PNP_Vac_Check_Timer	pshm->P[17596]
#define	P_Cathode_1st_PNP_Vac_Check_Timer	pshm->P[17597]
#define	P_Anode_2nd_PNP_Vac_Check_Timer	pshm->P[17598]
#define	P_Cathode_2nd_PNP_Vac_Check_Timer	pshm->P[17599]
#define	P_Anode_1st_PNP_Vac_Chk_Status	pshm->P[17600]
#define	P_Cathode_1st_PNP_Vac_Chk_Status	pshm->P[17601]
#define	P_Anode_2nd_PNP_Vac_Chk_Status	pshm->P[17602]
#define	P_Cathode_2nd_PNP_Vac_Chk_Status	pshm->P[17603]
#define	P_Anode_1st_PNP_Vac_Chk_Mode_Stop_Blocked	pshm->P[17604]
#define	P_Cathode_1st_PNP_Vac_Chk_Mode_Stop_Blocked	pshm->P[17605]
#define	P_Anode_2nd_PNP_Vac_Chk_Mode_Stop_Blocked	pshm->P[17606]
#define	P_Cathode_2nd_PNP_Vac_Chk_Mode_Stop_Blocked	pshm->P[17607]
#define	P_Anode_1st_PnP_Vac_Chk_Mode_RTN	pshm->P[17608]
#define	P_Cathode_1st_PnP_Vac_Chk_Mode_RTN	pshm->P[17609]
#define	P_Anode_2nd_PnP_Vac_Chk_Mode_RTN	pshm->P[17610]
#define	P_Cathode_2nd_PnP_Vac_Chk_Mode_RTN	pshm->P[17611]
#define	P_PNP_Vac_Chk_Mode_TimeBase_Rtn	pshm->P[17612]
#define	P_PNP_Vac_Chk_Mode_Timer	pshm->P[17613]
#define	P_Anode_1st_PNP_Vac_Chk_Mode_Err	pshm->P[17614]
#define	P_Cathode_1st_PNP_Vac_Chk_Mode_Err	pshm->P[17615]
#define	P_Anode_2nd_PNP_Vac_Chk_Mode_Err	pshm->P[17616]
#define	P_Cathode_2nd_PNP_Vac_Chk_Mode_Err	pshm->P[17617]
#define	P_PNP_Vac_Chk_Mode_BTN_Err	pshm->P[17618]
#define	P_BTN_CA_1st_PNP_Vac_Chk_Mode	pshm->P[17619]
#define	P_BTN_AN_1st_PNP_Vac_Chk_Mode	pshm->P[17620]
#define	P_BTN_CA_2nd_PNP_Vac_Chk_Mode	pshm->P[17621]
#define	P_BTN_AN_2nd_PNP_Vac_Chk_Mode	pshm->P[17622]
#define	P_Old_Upper_Sensor(i)	pshm->P[(17623+i)%MAX_P]
#define	P_Edge_Upper_Sensor(i)	pshm->P[(17631+i)%MAX_P]
#define	P_Old_Lower_Sensor(i)	pshm->P[(17639+i)%MAX_P]
#define	P_Edge_Lower_Sensor(i)	pshm->P[(17647+i)%MAX_P]
#define	P_Edge_NP_BTN(i)	pshm->P[(17655+i)%MAX_P]
#define	P_UI_Unit_Status(i)	pshm->P[(17657+i)%MAX_P]
#define	P_Motor_Unit_Status(i)	pshm->P[(17667+i)%MAX_P]
#define	P_Current_Homming_Status_To_PLC(i)	pshm->P[(17717+i)%MAX_P]
#define	P_System_Cascading_ON_Cmd	pshm->P[17767]
#define	P_System_Cascading_OFF_Cmd	pshm->P[17768]
#define	P_System_Master_Following_ON_Cmd	pshm->P[17769]
#define	P_System_Master_Following_OFF_Cmd	pshm->P[17770]
#define	P_System_CamTable_ON_Cmd	pshm->P[17771]
#define	P_System_CamTable_OFF_Cmd	pshm->P[17772]
#define	P_System_Spool_Home_Ready_Pos_Cmd	pshm->P[17773]
#define	P_System_Cascading_ON_Status	pshm->P[17774]
#define	P_System_Cascading_OFF_Status	pshm->P[17775]
#define	P_System_Master_Following_ON_Status	pshm->P[17776]
#define	P_System_Master_Following_OFF_Status	pshm->P[17777]
#define	P_System_CamTable_ON_Status	pshm->P[17778]
#define	P_System_CamTable_OFF_Status	pshm->P[17779]
#define	P_System_Spool_Home_Ready_Pos_Status	pshm->P[17780]
#define	P_System_Cascading_ON_State_Machine	pshm->P[17781]
#define	P_System_Cascading_OFF_State_Machine	pshm->P[17782]
#define	P_System_Master_Follwing_ON_State_Machine	pshm->P[17783]
#define	P_System_Master_Follwing_OFF_State_Machine	pshm->P[17784]
#define	P_System_CamTable_ON_State_Machine	pshm->P[17785]
#define	P_System_CamTable_OFF_State_Machine	pshm->P[17786]
#define	P_System_Spool_Home_Ready_Pos_State_Machine	pshm->P[17787]
#define	P_System_Cascading_ON_Complete_Flag	pshm->P[17788]
#define	P_System_Cascading_OFF_Complete_Flag	pshm->P[17789]
#define	P_System_Master_Following_ON_Complete_Flag	pshm->P[17790]
#define	P_System_Master_Following_OFF_Complete_Flag	pshm->P[17791]
#define	P_System_CamTable_ON_Complete_Flag	pshm->P[17792]
#define	P_System_CamTable_OFF_Complete_Flag	pshm->P[17793]
#define	P_System_Spool_Home_Ready_Pos_Complete_Flag	pshm->P[17794]
#define	P_Servo_Dancer_Cascading_Off_Timer	pshm->P[17795]
#define	P_Servo_Dancer_Cascading_Set_Timer	pshm->P[17796]
#define	P_Dancer_Frist_Home_Ready_Pos_Timer	pshm->P[17797]
#define	P_Driving_Motor_Use_Flag	pshm->P[17798]
#define	P_Home_Spool_Unwinding	pshm->P[17799]
#define	P_OutValue	pshm->P[17800]
#define	P_Dancer_Out_Slew_Seq	pshm->P[17801]
#define	P_OutChangeValue	pshm->P[17802]
#define	P_Rot_OutValue	pshm->P[17803]
#define	P_OutChangeTime	pshm->P[17804]
#define	P_AO_Module_Arr(i)	pshm->P[(17805+i)%MAX_P]
#define	P_AO_Range_Set_Value(i)	pshm->P[(17810+i)%MAX_P]
#define	P_Regul_Max_kPa_Value	pshm->P[17815]
#define	P_Regul_Min_kPa_Value	pshm->P[17816]
#define	P_Regul_Max_AD	pshm->P[17817]
#define	P_Regul_Min_AD	pshm->P[17818]
#define	P_Current_Max_Value	pshm->P[17819]
#define	P_Current_Min_Value	pshm->P[17820]
#define	P_Current_Max_AD	pshm->P[17821]
#define	P_Current_Min_AD	pshm->P[17822]
#define	P_Sepa_Cal_Inclination	pshm->P[17823]
#define	P_Regul_Cal_Inclination	pshm->P[17824]
#define	P_Cutter_Heat_Amp_Data_Bit	pshm->P[17825]
#define	P_Cut_Heat_Amp_Value	pshm->P[17826]
#define	P_AI_Cathode_Clamp_Damper_AVG	pshm->P[17827]
#define	P_AI_Anode_Clamp_Damper_AVG	pshm->P[17828]
#define	P_Tension_Ready_Pos_Cmd	pshm->P[17829]
#define	P_Tension_Ready_State_Machine	pshm->P[17830]
#define	P_Tension_Ready_Pos_Status	pshm->P[17831]
#define	P_Dancer_Center_Pos	pshm->P[17832]
#define	P_Upper_Sepa_Cal_Inclination	pshm->P[17833]
#define	P_Lower_Sepa_Cal_Inclination	pshm->P[17834]
#define	P_Unwinder_Jogspeed	pshm->P[17835]
#define	P_Cascading_First_Out	pshm->P[17836]
#define	P_Dancer_Cur_Vdc	pshm->P[17837]
#define	P_Dancer_Cur_Torque	pshm->P[17838]
#define	P_Dancer_Cur_Newton	pshm->P[17839]
#define	P_Dancer_Cur_Kgf	pshm->P[17840]
#define	P_Board_IO_Count	pshm->P[17841]
#define	P_Force_BTN_Address_Clear_Count	pshm->P[17842]
#define	P_Force_BTN_M_Variable_Save(i)	pshm->P[(17843+i)%MAX_P]
#define	P_Force_BTN_Condition_Count	pshm->P[18227]
#define	P_Old_Force_BTN_Mode	pshm->P[18228]
#define	P_Force_BTN_Address_Count	pshm->P[18229]
#define	P_Force_BTN_GPIO_Address_Count	pshm->P[18230]
#define	P_Force_BTN_Ecat_Address_Count	pshm->P[18231]
#define	P_Force_BTN_M_Variable_Save_Count	pshm->P[18232]
#define	P_Force_BTN_M_Variable_Start_Num	pshm->P[18233]
#define	P_Force_BTN_Normal_Mode_Status	pshm->P[18234]
#define	P_Force_BTN_Normal_Mode_State_Machine	pshm->P[18235]
#define	P_Force_BTN_Normal_Mode_Complete_Flag	pshm->P[18236]
#define	P_Force_BTN_Force_Mode_Timer	pshm->P[18237]
#define	P_Force_BTN_Force_Mode_Delay_Time	pshm->P[18238]
#define	P_Force_BTN_Force_Mode_Status	pshm->P[18239]
#define	P_Force_BTN_Force_Mode_State_Machine	pshm->P[18240]
#define	P_Force_BTN_Force_Mode_Complete_Flag	pshm->P[18241]
#define	P_Mem_Save_Error_Bit	pshm->P[18242]
#define	P_ABS_Phasing_Data(i)	pshm->P[(18243+i)%MAX_P]
#define	P_ABS_Home_Offset_Data(i)	pshm->P[(18248+i)%MAX_P]
#define	P_Servo_Gain_Save_Command	pshm->P[18253]
#define	P_Servo_Gain_Load_Command	pshm->P[18254]
#define	P_Servo_Gain_Save_Flag	pshm->P[18255]
#define	P_Servo_Gain_Load_Flag	pshm->P[18256]
#define	P_Servo_Gain_Kp(i)	pshm->P[(18257+i)%MAX_P]
#define	P_Servo_Gain_Kvfb(i)	pshm->P[(18287+i)%MAX_P]
#define	P_Servo_Gain_Kvff(i)	pshm->P[(18317+i)%MAX_P]
#define	P_Servo_Gain_Ki(i)	pshm->P[(18347+i)%MAX_P]
#define	P_Servo_Gain_SwZvInt(i)	pshm->P[(18377+i)%MAX_P]
#define	P_Servo_Gain_Kaff(i)	pshm->P[(18407+i)%MAX_P]
#define	P_Insert_Phase_Flag	pshm->P[18437]
#define	P_Alarm_Arr(i)	pshm->P[(18438+i)%MAX_P]
#define	P_Alarm_Occur_Flag	pshm->P[18538]
#define	P_Alarm_Occur_Index_Flag(i)	pshm->P[(18539+i)%MAX_P]
#define	P_Alarm_Wait_Time	pshm->P[18543]
#define	P_Alarm_Delay_Timer	pshm->P[18544]
#define	P_Compare_Priority	pshm->P[18545]
#define	P_Alarm_Report	pshm->P[18546]
#define	P_Alarm_Num	pshm->P[18547]
#define	P_Alarm_Index	pshm->P[18548]
#define	P_First_Alarm_Flag	pshm->P[18549]
#define	P_Alarm_Log(i)	pshm->P[(18550+i)%MAX_P]
#define	P_First_Alarm_Log(i)	pshm->P[(18650+i)%MAX_P]
#define	P_Servo_Alarm_Check	pshm->P[18680]
#define	P_Ecat_Servo_Alarm_Check	pshm->P[18681]
#define	P_Alarm_duplicate_Check_Arr(i)	pshm->P[(18682+i)%MAX_P]
#define	P_Old_Drive_Alarm(i)	pshm->P[(19352+i)%MAX_P]
#define	P_IL_ON_OFF_Flag	pshm->P[19402]
#define	P_IL_Coord_Robot	pshm->P[19403]
#define	P_IL_Robot_Bit	pshm->P[19404]
#define	P_IL_Outer_Status	pshm->P[19405]
#define	P_Robot_Unit_Serch_Flag	pshm->P[19406]
#define	P_IL_Home_Chk_Edge	pshm->P[19407]
#define	P_Limit_PosData(i)	pshm->P[(19408+i)%MAX_P]
#define	P_IL_Sprint	pshm->P[19411]
#define	P_IL_length	pshm->P[19412]
#define	P_IL_Strcat	pshm->P[19413]
#define	P_IL_Popup_Motor	pshm->P[19414]
#define	P_IL_Motor_Page	pshm->P[19415]
#define	P_IL_Recipe_Bit	pshm->P[19416]
#define	P_Interlock_Popup_On_Flag	pshm->P[19417]
#define	P_Motor_Page	pshm->P[19418]
#define	P_OP_Side_Ca_PNP_Pos	pshm->P[19419]
#define	P_OP_Side_An_PNP_Pos	pshm->P[19420]
#define	P_OP_Side_PMAC_Cur_Mode	pshm->P[19421]
#define	P_Abs_Trans_Cur_Pos	pshm->P[19422]
#define	P_Minus_IL_Offset	pshm->P[19423]
#define	P_Plus_IL_Offset	pshm->P[19424]
#define	P_2nd_PNP_Arm_Radius	pshm->P[19425]
#define	P_IL_Enable_Flag	pshm->P[19426]
#define	P_Plus_Interlock_Bit	pshm->P[19427]
#define	P_Minus_Interlock_Bit	pshm->P[19428]
#define	UPPos	pshm->P[19429]
#define	Unloader_In_StackPos	pshm->P[19430]
#define	FR_AnodePos	pshm->P[19431]
#define	FR_CathodePos	pshm->P[19432]
#define	Before_In_Stack	pshm->P[19433]
#define	In_Stack	pshm->P[19434]
#define	P_Collision_Risk_Motor(i)	pshm->P[(19435+i)%MAX_P]
#define	P_Minus_Collision_Risk_Motor	pshm->P[19437]
#define	P_IL_Clamp_Y	pshm->P[19438]
#define	P_IL_Clamp_Z	pshm->P[19439]
#define	P_IL_Clamp_Pos	pshm->P[19440]
#define	P_IL_Use_FR_Clamp_Pos	pshm->P[19441]
#define	P_P_IL_Normal_Pos_Offset(i)	pshm->P[(19442+i)%MAX_P]
#define	P_M_IL_Normal_Pos_Offset(i)	pshm->P[(19492+i)%MAX_P]
#define	P_P_IL_Upper_Pos_Offset(i)	pshm->P[(19542+i)%MAX_P]
#define	P_M_IL_Upper_Pos_Offset(i)	pshm->P[(19592+i)%MAX_P]
#define	P_P_IL_Align_Pos_Offset(i)	pshm->P[(19642+i)%MAX_P]
#define	P_M_IL_Align_Pos_Offset(i)	pshm->P[(19692+i)%MAX_P]
#define	P_P_IL_Stack_Pos_Offset(i)	pshm->P[(19742+i)%MAX_P]
#define	P_M_IL_Stack_Pos_Offset(i)	pshm->P[(19792+i)%MAX_P]
#define	P_Ca_1st_Plus_IL_Offset	pshm->P[19842]
#define	P_Ca_1st_Minus_IL_Offset	pshm->P[19843]
#define	P_An_1st_Plus_IL_Offset	pshm->P[19844]
#define	P_An_1st_Minus_IL_Offset	pshm->P[19845]
#define	P_Ca_2nd_T_Plus_IL_Offset(i)	pshm->P[(19846+i)%MAX_P]
#define	P_Ca_2nd_T_Minus_IL_Offset(i)	pshm->P[(19849+i)%MAX_P]
#define	P_Ca_2nd_Z_Plus_IL_Offset(i)	pshm->P[(19852+i)%MAX_P]
#define	P_Ca_2nd_Z_Minus_IL_Offset(i)	pshm->P[(19854+i)%MAX_P]
#define	P_An_2nd_T_Plus_IL_Offset(i)	pshm->P[(19856+i)%MAX_P]
#define	P_An_2nd_T_Minus_IL_Offset(i)	pshm->P[(19859+i)%MAX_P]
#define	P_An_2nd_Z_Minus_IL_Offset(i)	pshm->P[(19862+i)%MAX_P]
#define	P_Z_Pos_Data	pshm->P[19864]
#define	P_Clamp_Z_Plus_IL_Offset	pshm->P[19865]
#define	P_FR_X_Plus_IL_Offset(i)	pshm->P[(19866+i)%MAX_P]
#define	P_FR_X_Minus_IL_Offset(i)	pshm->P[(19868+i)%MAX_P]
#define	P_FR_Z_Minus_IL_Offset	pshm->P[19870]
#define	P_Ca_NG_PNP_Plus_IL_Offset(i)	pshm->P[(19871+i)%MAX_P]
#define	P_Ca_NG_PNP_Minus_IL_Offset(i)	pshm->P[(19875+i)%MAX_P]
#define	P_An_NG_PNP_Plus_IL_Offset(i)	pshm->P[(19879+i)%MAX_P]
#define	P_An_NG_PNP_Minus_IL_Offset(i)	pshm->P[(19883+i)%MAX_P]
#define	P_Unloader_X_Plus_IL_Offset(i)	pshm->P[(19887+i)%MAX_P]
#define	P_Unloader_X_Minus_IL_Offset(i)	pshm->P[(19891+i)%MAX_P]
#define	P_Unloader_Z_Plus_IL_Offset(i)	pshm->P[(19895+i)%MAX_P]
#define	P_Unloader_Z_Minus_IL_Offset(i)	pshm->P[(19898+i)%MAX_P]
#define	P_IL_In_Offset(i)	pshm->P[(19901+i)%MAX_P]
#define	P_X_PLC_InterLock	pshm->P[19926]
#define	P_IL_Home_Chk	pshm->P[19927]
#define	P_IL_Home_Chk_Motor_Num(i)	pshm->P[(19928+i)%MAX_P]
#define	P_IL_Home_Chk_Motor_Update	pshm->P[19948]
#define	P_IL_Inside_Home_Chk_Complete	pshm->P[19949]
#define	P_IL_Outside_Home_Chk_Complete	pshm->P[19950]
#define	P_IL_Motor_Home_Chk_RTN	pshm->P[19951]
#define	P_IL_Function_Cnt	pshm->P[19952]
#define	P_IL_Function_Motor_Num	pshm->P[19953]
#define	P_Jog_Page_Flag	pshm->P[19954]
#define	P_Anode_1st_TR_Belt_Down_Flag	pshm->P[19955]
#define	P_Anode_1st_TR_Belt_Pick_Up_Flag	pshm->P[19956]
#define	P_Anode_1st_TR_Align_Down_Flag	pshm->P[19957]
#define	P_Anode_2nd_TR_Align_Pick_Up_Flag	pshm->P[19958]
#define	P_Anode_2nd_TR_Stack_Down_Flag	pshm->P[19959]
#define	P_Anode_NG_TR_Align_Pick_Up_Flag	pshm->P[19960]
#define	P_Anode_NG_TR_NG_Place_Down_Flag	pshm->P[19961]
#define	P_Anode_2nd_TR_Align_Down_Flag	pshm->P[19962]
#define	P_Anode_1st_TR_Align_Pick_Up_Flag	pshm->P[19963]
#define	P_Anode_1st_TR_Belt_Down_State_Machine	pshm->P[19964]
#define	P_Anode_1st_TR_Belt_Down_Status	pshm->P[19965]
#define	P_Anode_1st_TR_Belt_Pick_Up_State_Machine	pshm->P[19966]
#define	P_Anode_1st_TR_Belt_Pick_Up_Status	pshm->P[19967]
#define	P_Anode_1st_TR_Align_Down_State_Machine	pshm->P[19968]
#define	P_Anode_1st_TR_Align_Down_Status	pshm->P[19969]
#define	P_Anode_2nd_TR_Align_Pick_Up_State_Machine	pshm->P[19970]
#define	P_Anode_2nd_TR_Align_Pick_Up_Status	pshm->P[19971]
#define	P_Anode_2nd_TR_Stack_Down_State_Machine	pshm->P[19972]
#define	P_Anode_2nd_TR_Stack_Down_Status	pshm->P[19973]
#define	P_Anode_NG_TR_Align_Pick_Up_State_Machine	pshm->P[19974]
#define	P_Anode_NG_TR_Align_Pick_Up_Status	pshm->P[19975]
#define	P_Anode_NG_TR_NG_Place_Down_State_Machine	pshm->P[19976]
#define	P_Anode_NG_TR_NG_Place_Down_Status	pshm->P[19977]
#define	P_Anode_2nd_TR_Align_Down_State_Machine	pshm->P[19978]
#define	P_Anode_2nd_TR_Align_Down_Status	pshm->P[19979]
#define	P_Anode_1st_TR_Align_Pick_Up_State_Machine	pshm->P[19980]
#define	P_Anode_1st_TR_Align_Pick_Up_Status	pshm->P[19981]
#define	P_Cathode_1st_TR_Belt_Down_Flag	pshm->P[19982]
#define	P_Cathode_1st_TR_Belt_Pick_Up_Flag	pshm->P[19983]
#define	P_Cathode_1st_TR_Align_Down_Flag	pshm->P[19984]
#define	P_Cathode_2nd_TR_Align_Pick_Up_Flag	pshm->P[19985]
#define	P_Cathode_2nd_TR_Stack_Down_Flag	pshm->P[19986]
#define	P_Cathode_NG_TR_Align_Pick_Up_Flag	pshm->P[19987]
#define	P_Cathode_NG_TR_NG_Place_Down_Flag	pshm->P[19988]
#define	P_Cathode_2nd_TR_Align_Down_Flag	pshm->P[19989]
#define	P_Cathode_1st_TR_Align_Pick_Up_Flag	pshm->P[19990]
#define	P_Cathode_1st_TR_Belt_Down_State_Machine	pshm->P[19991]
#define	P_Cathode_1st_TR_Belt_Down_Status	pshm->P[19992]
#define	P_Cathode_1st_TR_Belt_Pick_Up_State_Machine	pshm->P[19993]
#define	P_Cathode_1st_TR_Belt_Pick_Up_Status	pshm->P[19994]
#define	P_Cathode_1st_TR_Align_Down_State_Machine	pshm->P[19995]
#define	P_Cathode_1st_TR_Align_Down_Status	pshm->P[19996]
#define	P_Cathode_2nd_TR_Align_Pick_Up_State_Machine	pshm->P[19997]
#define	P_Cathode_2nd_TR_Align_Pick_Up_Status	pshm->P[19998]
#define	P_Cathode_2nd_TR_Stack_Down_State_Machine	pshm->P[19999]
#define	P_Cathode_2nd_TR_Stack_Down_Status	pshm->P[20000]
#define	P_Cathode_NG_TR_Align_Pick_Up_State_Machine	pshm->P[20001]
#define	P_Cathode_NG_TR_Align_Pick_Up_Status	pshm->P[20002]
#define	P_Cathode_NG_TR_NG_Place_Down_State_Machine	pshm->P[20003]
#define	P_Cathode_NG_TR_NG_Place_Down_Status	pshm->P[20004]
#define	P_Cathode_2nd_TR_Align_Down_State_Machine	pshm->P[20005]
#define	P_Cathode_2nd_TR_Align_Down_Status	pshm->P[20006]
#define	P_Cathode_1st_TR_Align_Pick_Up_State_Machine	pshm->P[20007]
#define	P_Cathode_1st_TR_Align_Pick_Up_Status	pshm->P[20008]
#define	P_Old_Anode_Belt_ASCII	pshm->P[20009]
#define	P_Old_Cathode_Belt_ASCII	pshm->P[20010]
#define	P_Anode_Belt_ASCII	pshm->P[20011]
#define	P_Cathode_Belt_ASCII	pshm->P[20012]
#define	P_Check_Vac_Time	pshm->P[20013]
#define	P_Send_Anode_NG_Code_To_PLC	pshm->P[20014]
#define	P_Receive_Anode_NG_Code_From_PLC	pshm->P[20015]
#define	P_Send_Cathode_NG_Code_To_PLC	pshm->P[20016]
#define	P_Receive_Cathode_NG_Code_From_PLC	pshm->P[20017]
#define	P_Current_Cell_Memory_Anode_1P	pshm->P[20018]
#define	P_Current_Cell_Memory_Anode_AT	pshm->P[20019]
#define	P_Current_Cell_Memory_Anode_2P	pshm->P[20020]
#define	P_Current_Cell_Memory_Cathode_1P	pshm->P[20021]
#define	P_Current_Cell_Memory_Cathode_AT	pshm->P[20022]
#define	P_Current_Cell_Memory_Cathode_2P	pshm->P[20023]
#define	P_Current_Cell_Memory_Stack_Table	pshm->P[20024]
#define	P_Current_Cell_Memory_Cathode_NG_TR	pshm->P[20025]
#define	P_Current_Cell_Memory_Anode_NG_TR	pshm->P[20026]
#define	P_BTN_Anode_1st_TR_Buffer_Clear	pshm->P[20027]
#define	P_BTN_Anode_2nd_TR_Buffer_Clear	pshm->P[20028]
#define	P_BTN_Anode_Align_Buffer_Clear	pshm->P[20029]
#define	P_BTN_Anode_NG_TR_Buffer_Clear	pshm->P[20030]
#define	P_BTN_Cathode_1st_TR_Buffer_Clear	pshm->P[20031]
#define	P_BTN_Cathode_2nd_TR_Buffer_Clear	pshm->P[20032]
#define	P_BTN_Cathode_Align_Buffer_Clear	pshm->P[20033]
#define	P_BTN_Cathode_NG_TR_Buffer_Clear	pshm->P[20034]
#define	P_Old_BTN_Anode_1st_TR_Buffer_Clear	pshm->P[20035]
#define	P_Old_BTN_Anode_2nd_TR_Buffer_Clear	pshm->P[20036]
#define	P_Old_BTN_Anode_Align_Buffer_Clear	pshm->P[20037]
#define	P_Old_BTN_Anode_NG_TR_Buffer_Clear	pshm->P[20038]
#define	P_Old_BTN_Cathode_1st_TR_Buffer_Clear	pshm->P[20039]
#define	P_Old_BTN_Cathode_2nd_TR_Buffer_Clear	pshm->P[20040]
#define	P_Old_BTN_Cathode_Align_Buffer_Clear	pshm->P[20041]
#define	P_Old_BTN_Cathode_NG_TR_Buffer_Clear	pshm->P[20042]
#define	P_Send_Anode_NG_Code_Flag	pshm->P[20043]
#define	P_Send_Cathode_NG_Code_Flag	pshm->P[20044]
#define	P_Anode_Vision_NG_To_PLC_Flag	pshm->P[20045]
#define	P_Cathode_Vision_NG_To_PLC_Flag	pshm->P[20046]
#define	P_Status_Clear_Sheet_Maint_Check	pshm->P[20047]
#define	P_Single_Run_Start_Flag	pshm->P[20048]
#define	P_Single_Run_Control_State_Machine	pshm->P[20049]
#define	P_Single_Run_Control_Status	pshm->P[20050]
#define	P_Single_Run_Execute_Bit	pshm->P[20051]
#define	P_User_Dry_Run_Mode	pshm->P[20052]
#define	P_Single_Run_State_Machine	pshm->P[20053]
#define	P_Single_Run_Status	pshm->P[20054]
#define	P_Single_Run_Unit	pshm->P[20055]
#define	P_Single_Run_Evade_Pos_RTN	pshm->P[20056]
#define	P_Single_Run_Evade_Pos_Check_RTN	pshm->P[20057]
#define	P_Single_Run_Pos_Rtn1	pshm->P[20058]
#define	P_Single_Run_Pos_Rtn2	pshm->P[20059]
#define	P_Single_Run_Motion_Ready_RTN	pshm->P[20060]
#define	P_Single_Run_Execution_Interlock_RTN	pshm->P[20061]
#define	P_Single_Run_Coord_Activate_RTN	pshm->P[20062]
#define	P_Single_Run_Coord_Activate_Check_RTN	pshm->P[20063]
#define	P_Single_Run_Select_Run_Mode_RTN	pshm->P[20064]
#define	P_Single_Run_Execution_Run_RTN	pshm->P[20065]
#define	P_Single_Run_Motion_Ready_State_Machine	pshm->P[20066]
#define	P_Coord_1	pshm->P[20067]
#define	P_Coord_2	pshm->P[20068]
#define	P_Coord_3	pshm->P[20069]
#define	P_Coord_4	pshm->P[20070]
#define	P_Final_Roll_Z_Motion_Flag	pshm->P[20071]
#define	P_Final_Roll_Z_Motion_State_Machine	pshm->P[20072]
#define	P_Main_Z_Motion_Flag	pshm->P[20073]
#define	P_Main_Z_Motion_State_Machine	pshm->P[20074]
#define	P_Single_Run_Mode_Flag	pshm->P[20075]
#define	P_Cathode_AT_Motion_Flag	pshm->P[20076]
#define	P_Cathode_Align_Motion_State_Machine	pshm->P[20077]
#define	P_Anode_AT_Motion_Flag	pshm->P[20078]
#define	P_Anode_Align_Motion_State_Machine	pshm->P[20079]
#define	P_Sheet_Paper_Motion_Flag	pshm->P[20080]
#define	P_Sheet_Paper_Motion_State_Machine	pshm->P[20081]
#define	P_Cathode_NG_PNP_T_Motion_Flag	pshm->P[20082]
#define	P_Cathode_NG_PNP_T_Motion_State_Machine	pshm->P[20083]
#define	P_Cathode_NG_PNP_Z_Motion_Flag	pshm->P[20084]
#define	P_Cathode_NG_PNP_Z_Motion_State_Machine	pshm->P[20085]
#define	P_Anode_NG_PNP_T_Motion_Flag	pshm->P[20086]
#define	P_Anode_NG_PNP_T_Motion_State_Machine	pshm->P[20087]
#define	P_Anode_NG_PNP_Z_Motion_Flag	pshm->P[20088]
#define	P_Anode_NG_PNP_Z_Motion_State_Machine	pshm->P[20089]
#define	P_1st_UND_X_Motion_Flag	pshm->P[20090]
#define	P_1st_UND_X_Motion_State_Machine	pshm->P[20091]
#define	P_1st_UND_Z_Motion_Flag	pshm->P[20092]
#define	P_1st_UND_Z_Motion_State_Machine	pshm->P[20093]
#define	P_1st_UND_T_Motion_Flag	pshm->P[20094]
#define	P_1st_UND_T_Motion_State_Machine	pshm->P[20095]
#define	P_Cathode_Run_Command_Flag	pshm->P[20096]
#define	P_Anode_Run_Command_Flag	pshm->P[20097]
#define	P_NG_PNP_Uint_Motion_Flag	pshm->P[20098]
#define	P_NG_PNP_Uint_State_Machine	pshm->P[20099]
#define	P_NG_PNP_Motion_Cnt	pshm->P[20100]
#define	P_NG_PNP_Motion_arr(i)	pshm->P[(20101+i)%MAX_P]
#define	P_Single_Run_Timer	pshm->P[20111]
#define	P_Single_Run_Align_Timer	pshm->P[20112]
#define	P_Single_Run_Align_Timer2	pshm->P[20113]
#define	P_Single_Run_Finall_Roll_Z_Timer	pshm->P[20114]
#define	P_Single_RuN_MAIN_Z_Timer	pshm->P[20115]
#define	P_Single_Run_Sheet_Paper_Timer	pshm->P[20116]
#define	P_Single_Run_Debug_SM	pshm->P[20117]
#define	P_Error_Monitoring_Count_1	pshm->P[20118]
#define	P_Error_Monitoring_Count_2	pshm->P[20119]
#define	P_Error_Monitoring_Count_3	pshm->P[20120]
#define	P_Error_Monitoring_Count_4	pshm->P[20121]
#define	P_Error_Monitoring_Count_5	pshm->P[20122]
#define	P_Old_Single_Run_Mode_Flag	pshm->P[20123]
#define	P_Old_Current_Mode	pshm->P[20124]
#define	P_Single_Run_Timebase_Off_RTN	pshm->P[20125]
#define	P_Single_Run_Stop_State_Machine	pshm->P[20126]
#define	P_Single_Run_Stop_Status	pshm->P[20127]
#define	P_Single_Run_Stop_Timer	pshm->P[20128]
#define	P_Single_Run_Stop_Init_RTN	pshm->P[20129]
#define	P_Single_Run_Stop_Btn_Chk	pshm->P[20130]
#define	P_Single_Run_Stop_Command	pshm->P[20131]
#define	P_Motor_Ready_Poa_Inpos_200um	pshm->P[20132]
#define	P_Ecat_Parameter_Write_Flag	pshm->P[20133]
#define	P_Ecat_Parameter_Read_Flag	pshm->P[20134]
#define	P_Ecat_Each_Parameter_Write_Flag	pshm->P[20135]
#define	P_Ecat_Slave_Idx	pshm->P[20136]
#define	P_Ec_Num	pshm->P[20137]
#define	P_Ecat_Read_Motor_Num	pshm->P[20138]
#define	P_Ecat_Write_Motor_Num	pshm->P[20139]
#define	P_Ecat_Parameter_Write_State_Machine	pshm->P[20140]
#define	P_Ecat_Parameter_Read_State_Machine	pshm->P[20141]
#define	P_Ecat_Each_Parameter_Write_State_Machine	pshm->P[20142]
#define	P_Ecat_Read_MNTR(i)	pshm->P[(20143+i)%MAX_P]
#define	P_Ecat_Write_MNTR(i)	pshm->P[(20171+i)%MAX_P]
#define	P_Ecat_Save_MNTR(i)	pshm->P[(20199+i)%MAX_P]
#define	P_Ecat_Error_MNTR(i)	pshm->P[(20215+i)%MAX_P]
#define	P_Ecat_Read_Error_MNTR(i)	pshm->P[(20231+i)%MAX_P]
#define	P_Ecat_Each_Write_Error_MNTR(i)	pshm->P[(20247+i)%MAX_P]
#define	P_Ecat_Write_Status	pshm->P[20263]
#define	P_Ecat_Read_Status	pshm->P[20264]
#define	P_Ecat_Each_Write_Status	pshm->P[20265]
#define	P_Pn000(i)	pshm->P[(20266+i)%MAX_P]
#define	P_Pn001(i)	pshm->P[(20286+i)%MAX_P]
#define	P_Pn00B(i)	pshm->P[(20306+i)%MAX_P]
#define	P_Pn100(i)	pshm->P[(20326+i)%MAX_P]
#define	P_Pn101(i)	pshm->P[(20346+i)%MAX_P]
#define	P_Pn102(i)	pshm->P[(20366+i)%MAX_P]
#define	P_Pn103(i)	pshm->P[(20386+i)%MAX_P]
#define	P_Pn123(i)	pshm->P[(20406+i)%MAX_P]
#define	P_Pn140(i)	pshm->P[(20426+i)%MAX_P]
#define	P_Pn141(i)	pshm->P[(20446+i)%MAX_P]
#define	P_Pn145(i)	pshm->P[(20466+i)%MAX_P]
#define	P_Pn146(i)	pshm->P[(20486+i)%MAX_P]
#define	P_Pn160(i)	pshm->P[(20506+i)%MAX_P]
#define	P_Pn161(i)	pshm->P[(20526+i)%MAX_P]
#define	P_Pn163(i)	pshm->P[(20546+i)%MAX_P]
#define	P_Pn170(i)	pshm->P[(20566+i)%MAX_P]
#define	P_Pn401(i)	pshm->P[(20586+i)%MAX_P]
#define	P_Pn408(i)	pshm->P[(20606+i)%MAX_P]
#define	P_Pn409(i)	pshm->P[(20626+i)%MAX_P]
#define	P_Pn40A(i)	pshm->P[(20646+i)%MAX_P]
#define	P_Pn40C(i)	pshm->P[(20666+i)%MAX_P]
#define	P_Pn40D(i)	pshm->P[(20686+i)%MAX_P]
#define	P_Pn416(i)	pshm->P[(20706+i)%MAX_P]
#define	P_Pn417(i)	pshm->P[(20726+i)%MAX_P]
#define	P_Pn511(i)	pshm->P[(20746+i)%MAX_P]
#define	P_Pn520(i)	pshm->P[(20766+i)%MAX_P]
#define	P_PnB02_Numerator(i)	pshm->P[(20786+i)%MAX_P]
#define	P_PnB02_Denominator(i)	pshm->P[(20806+i)%MAX_P]
#define	P_Align_Plus_Blow_Test	pshm->P[20826]
#define	P_System_Setting_Flag	pshm->P[20827]
#define	P_Ecat_Setting_Flag	pshm->P[20828]
#define	P_Ecat_Activation_State_Machine	pshm->P[20829]
#define	P_PLC31_Ecat_Retry_Cnt	pshm->P[20830]
#define	P_Ecat_Connect_Result	pshm->P[20831]
#define	P_Ecat_Slave_Error	pshm->P[20832]
#define	P_PWM_AbsPhasePosOffset_Change_State_Machine	pshm->P[20833]
#define	P_AbsPhasePosOffset_Change_Complete	pshm->P[20834]
#define	P_PWM_AbsPhasing_Fail	pshm->P[20835]
#define	P_PWM_AbsPhasing_Complete	pshm->P[20836]
#define	P_Whole_Stacking_Tack_Time	pshm->P[20837]
#define	P_Whole_Stacking_Tack_Time_Check	pshm->P[20838]
#define	P_Whole_Stacking_Tack_Timer_Check_Flag	pshm->P[20839]
#define	P_Whole_Stacking_Timer_Shift_Status_Machine	pshm->P[20840]
#define	P_Whole_Stacking_TackTime_Array0	pshm->P[20841]
#define	P_Whole_Stacking_TackTime_Array1	pshm->P[20842]
#define	P_Whole_Stacking_TackTime_Array2	pshm->P[20843]
#define	P_Whole_Stacking_TackTime_Array3	pshm->P[20844]
#define	P_Whole_Stacking_TackTime_Array4	pshm->P[20845]
#define	P_Whole_Stacking_TackTime_Array5	pshm->P[20846]
#define	P_Whole_Stacking_TackTime_Array6	pshm->P[20847]
#define	P_Whole_Stacking_TackTime_Array7	pshm->P[20848]
#define	P_Whole_Stacking_TackTime_Array8	pshm->P[20849]
#define	P_Whole_Stacking_TackTime_Array9	pshm->P[20850]
#define	P_Whole_Stacking_TackTime_Array10	pshm->P[20851]
#define	P_First_Stacking_Start	pshm->P[20852]
#define	P_Last_Stacking_Complete	pshm->P[20853]
#define	P_Stacking_Tack_Time	pshm->P[20854]
#define	P_Stacking_Tack_Time_Check	pshm->P[20855]
#define	P_Stacking_Tack_Timer_Check_Flag	pshm->P[20856]
#define	P_Stacking_Timer_Shift_Status_Machine	pshm->P[20857]
#define	P_Cathode_to_Anode_FR_Tack_Time_Check	pshm->P[20858]
#define	P_Anode_to_Cathode_FR_Tack_Time_Check	pshm->P[20859]
#define	P_Cathode_to_Anode_FR_Tack_Time_Start	pshm->P[20860]
#define	P_Anode_to_Cathode_FR_Tack_Time_Start	pshm->P[20861]
#define	P_Cathode_to_Anode_FR_Tack_Time_Complete	pshm->P[20862]
#define	P_Anode_to_Cathode_FR_Tack_Time_Complete	pshm->P[20863]
#define	P_Cathode_to_Anode_FR_Time	pshm->P[20864]
#define	P_Anode_to_Cathode_FR_Time	pshm->P[20865]
#define	P_Cathode_to_Anode_FR_Tack_Timer_Check_Flag	pshm->P[20866]
#define	P_Anode_to_Cathode_FR_Tack_Timer_Check_Flag	pshm->P[20867]
#define	P_Anode_Align_Table_Time	pshm->P[20868]
#define	P_Anode_Align_Table_Tack_Time_Check	pshm->P[20869]
#define	P_Anode_Align_Table_Tack_Timer_Check_Flag	pshm->P[20870]
#define	P_Anode_Align_Table_Timer_Shift_Status_Machine	pshm->P[20871]
#define	P_Anode_Align_Tack_Time_Start	pshm->P[20872]
#define	P_Anode_Align_Tack_Time_Complete	pshm->P[20873]
#define	P_Cathode_Align_Table_Time	pshm->P[20874]
#define	P_Cathode_Align_Table_Tack_Time_Check	pshm->P[20875]
#define	P_Cathode_Align_Table_Tack_Timer_Check_Flag	pshm->P[20876]
#define	P_Cathode_Align_Table_Timer_Shift_Status_Machine	pshm->P[20877]
#define	P_Cathode_Align_Tack_Time_Start	pshm->P[20878]
#define	P_Cathode_Align_Tack_Time_Complete	pshm->P[20879]
#define	P_Anode_1th_Tack_Time_Start	pshm->P[20880]
#define	P_Anode_1th_Tack_Time_Complete	pshm->P[20881]
#define	P_Anode_1th_Time	pshm->P[20882]
#define	P_Anode_1th_Tack_Time_Check	pshm->P[20883]
#define	P_Anode_1th_Tack_Timer_Check_Flag	pshm->P[20884]
#define	P_Anode_1th_Timer_Shift_Status_Machine	pshm->P[20885]
#define	P_Cathode_1th_Tack_Time_Start	pshm->P[20886]
#define	P_Cathode_1th_Tack_Time_Complete	pshm->P[20887]
#define	P_Cathode_1th_Time	pshm->P[20888]
#define	P_Cathode_1th_Tack_Time_Check	pshm->P[20889]
#define	P_Cathode_1th_Tack_Timer_Check_Flag	pshm->P[20890]
#define	P_Cathode_1th_Timer_Shift_Status_Machine	pshm->P[20891]
#define	P_Anode_2th_Tack_Time_Start	pshm->P[20892]
#define	P_Anode_2th_Tack_Time_Complete	pshm->P[20893]
#define	P_Anode_2th_Time	pshm->P[20894]
#define	P_Anode_2th_Tack_Time_Check	pshm->P[20895]
#define	P_Anode_2th_Tack_Timer_Check_Flag	pshm->P[20896]
#define	P_Anode_2th_Timer_Shift_Status_Machine	pshm->P[20897]
#define	P_Cathode_2th_Tack_Time_Start	pshm->P[20898]
#define	P_Cathode_2th_Tack_Time_Complete	pshm->P[20899]
#define	P_Cathode_2th_Time	pshm->P[20900]
#define	P_Cathode_2th_Tack_Time_Check	pshm->P[20901]
#define	P_Cathode_2th_Tack_Timer_Check_Flag	pshm->P[20902]
#define	P_Cathode_2th_Timer_Shift_Status_Machine	pshm->P[20903]
#define	P_Anode_1th_NG_Tack_Time_Start	pshm->P[20904]
#define	P_Anode_1th_NG_Tack_Time_Complete	pshm->P[20905]
#define	P_Anode_1th_NG_Time	pshm->P[20906]
#define	P_Anode_1th_NG_Tack_Time_Check	pshm->P[20907]
#define	P_Anode_1th_NG_Tack_Timer_Check_Flag	pshm->P[20908]
#define	P_Anode_1th_NG_Timer_Shift_Status_Machine	pshm->P[20909]
#define	P_Cathode_1th_NG_Tack_Time_Start	pshm->P[20910]
#define	P_Cathode_1th_NG_Tack_Time_Complete	pshm->P[20911]
#define	P_Cathode_1th_NG_Time	pshm->P[20912]
#define	P_Cathode_1th_NG_Tack_Time_Check	pshm->P[20913]
#define	P_Cathode_1th_NG_Tack_Timer_Check_Flag	pshm->P[20914]
#define	P_Cathode_1th_NG_Timer_Shift_Status_Machine	pshm->P[20915]
#define	P_Anode_Clamp_Tack_Time_Start	pshm->P[20916]
#define	P_Anode_Clamp_Tack_Time_Complete	pshm->P[20917]
#define	P_Anode_Clamp_Time	pshm->P[20918]
#define	P_Anode_Clamp_Tack_Time_Check	pshm->P[20919]
#define	P_Anode_Clamp_Tack_Timer_Check_Flag	pshm->P[20920]
#define	P_Anode_Clamp_Timer_Shift_Status_Machine	pshm->P[20921]
#define	P_Cathode_Clamp_Tack_Time_Start	pshm->P[20922]
#define	P_Cathode_Clamp_Tack_Time_Complete	pshm->P[20923]
#define	P_Cathode_Clamp_Time	pshm->P[20924]
#define	P_Cathode_Clamp_Tack_Time_Check	pshm->P[20925]
#define	P_Cathode_Clamp_Tack_Timer_Check_Flag	pshm->P[20926]
#define	P_Cathode_Clamp_Timer_Shift_Status_Machine	pshm->P[20927]
#define	P_Final_Roll_X_Timer_Shift_Status_Machine	pshm->P[20928]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array0	pshm->P[20929]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array1	pshm->P[20930]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array2	pshm->P[20931]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array3	pshm->P[20932]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array4	pshm->P[20933]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array5	pshm->P[20934]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array6	pshm->P[20935]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array7	pshm->P[20936]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array8	pshm->P[20937]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array9	pshm->P[20938]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array10	pshm->P[20939]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array0	pshm->P[20940]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array1	pshm->P[20941]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array2	pshm->P[20942]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array3	pshm->P[20943]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array4	pshm->P[20944]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array5	pshm->P[20945]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array6	pshm->P[20946]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array7	pshm->P[20947]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array8	pshm->P[20948]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array9	pshm->P[20949]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array10	pshm->P[20950]
#define	P_Pneumatic_Pressure_Unit_Tack_Time_Chk_Timer(i)	pshm->P[(20951+i)%MAX_P]
#define	P_Pneumatic_Pressure_Unit_Tack_Time(i)	pshm->P[(20978+i)%MAX_P]
#define	P_MCC_Anode_Align_NG_Count	pshm->P[21005]
#define	P_MCC_Cathode_Align_NG_Count	pshm->P[21006]
#define	P_MCC_Anode_Retry_NG_Count	pshm->P[21007]
#define	P_MCC_Cathode_Retry_NG_Count	pshm->P[21008]
#define	P_Discharge_Tact_Time_Arr(i)	pshm->P[(21009+i)%MAX_P]
#define	P_Discharge_Hold_Timer	pshm->P[21021]
#define	P_Discharge_Hold_Time	pshm->P[21022]
#define	P_AN_1st_Z_Zero_Angle	pshm->P[21023]
#define	P_AN_1st_Z_Zero_Length	pshm->P[21024]
#define	P_Anode_1st_PNP_Z_Crank_Zero_Pos	pshm->P[21025]
#define	P_Anode_1st_PNP_Z_Crank_real_Move_Pos	pshm->P[21026]
#define	P_Anode_1st_PNP_Z_Crank_radian	pshm->P[21027]
#define	P_Anode_1st_PNP_Z_Acos_denominator	pshm->P[21028]
#define	P_Anode_1st_PNP_Z_Acos_numerator	pshm->P[21029]
#define	P_Anode_1st_PNP_Z_Crank_Angle	pshm->P[21030]
#define	P_Anode_1st_PNP_Z_Real_Move_Pos	pshm->P[21031]
#define	P_Anode_1st_Fwd_Bwd_Rise	pshm->P[21032]
#define	P_CA_1st_Z_Zero_Angle	pshm->P[21033]
#define	P_CA_1st_Z_Zero_Length	pshm->P[21034]
#define	P_Cathode_1st_PNP_Z_Crank_Zero_Pos	pshm->P[21035]
#define	P_Cathode_1st_PNP_Z_Crank_real_Move_Pos	pshm->P[21036]
#define	P_Cathode_1st_PNP_Z_Crank_radian	pshm->P[21037]
#define	P_Cathode_1st_PNP_Z_Acos_denominator	pshm->P[21038]
#define	P_Cathode_1st_PNP_Z_Acos_numerator	pshm->P[21039]
#define	P_Cathode_1st_PNP_Z_Crank_Angle	pshm->P[21040]
#define	P_Cathode_1st_PNP_Z_Real_Move_Pos	pshm->P[21041]
#define	P_Cathode_1st_Fwd_Bwd_Rise	pshm->P[21042]
#define	P_AN_2nd_Z_Zero_Angle	pshm->P[21043]
#define	P_AN_2nd_Z_Zero_Length	pshm->P[21044]
#define	P_Anode_2nd_PNP_Z_Crank_Zero_Pos	pshm->P[21045]
#define	P_Anode_2nd_PNP_Z_Crank_real_Move_Pos	pshm->P[21046]
#define	P_Anode_2nd_PNP_Z_Crank_radian	pshm->P[21047]
#define	P_Anode_2nd_PNP_Z_Acos_denominator	pshm->P[21048]
#define	P_Anode_2nd_PNP_Z_Acos_numerator	pshm->P[21049]
#define	P_Anode_2nd_PNP_Z_Crank_Angle	pshm->P[21050]
#define	P_Anode_2nd_PNP_Z_Real_Move_Pos	pshm->P[21051]
#define	P_Anode_2nd_Fwd_Bwd_Rise	pshm->P[21052]
#define	P_CA_2nd_Z_Zero_Angle	pshm->P[21053]
#define	P_CA_2nd_Z_Zero_Length	pshm->P[21054]
#define	P_Cathode_2nd_PNP_Z_Crank_Zero_Pos	pshm->P[21055]
#define	P_Cathode_2nd_PNP_Z_Crank_real_Move_Pos	pshm->P[21056]
#define	P_Cathode_2nd_PNP_Z_Crank_radian	pshm->P[21057]
#define	P_Cathode_2nd_PNP_Z_Acos_denominator	pshm->P[21058]
#define	P_Cathode_2nd_PNP_Z_Acos_numerator	pshm->P[21059]
#define	P_Cathode_2nd_PNP_Z_Crank_Angle	pshm->P[21060]
#define	P_Cathode_2nd_PNP_Z_Real_Move_Pos	pshm->P[21061]
#define	P_Cathode_2nd_Fwd_Bwd_Rise	pshm->P[21062]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Ready_Up	pshm->P[21063]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Belt_Up	pshm->P[21064]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Belt_Down	pshm->P[21065]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Align_Up	pshm->P[21066]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Align_Down	pshm->P[21067]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Ready_Up	pshm->P[21068]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Up	pshm->P[21069]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Down	pshm->P[21070]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Align_Up	pshm->P[21071]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Align_Down	pshm->P[21072]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Align_Up	pshm->P[21073]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Align_Down	pshm->P[21074]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Up	pshm->P[21075]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Down	pshm->P[21076]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Ready_Up	pshm->P[21077]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Up	pshm->P[21078]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Down	pshm->P[21079]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Up	pshm->P[21080]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Down	pshm->P[21081]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Ready_Up	pshm->P[21082]
#define	P_PLC19_All_Home_Status	pshm->P[21083]
#define	P_PLC19_All_Home_Module_Status	pshm->P[21084]
#define	P_PLC19_All_Home_State_Machine	pshm->P[21085]
#define	P_PLC19_All_Home_Seq_Index	pshm->P[21086]
#define	P_PLC19_All_Home_Self_Index	pshm->P[21087]
#define	P_PLC19_All_Home_Set_Mode_Return	pshm->P[21088]
#define	P_PLC19_All_Home_Timer	pshm->P[21089]
#define	P_PLC19_All_Home_Tact_Time_Array(i)	pshm->P[(21090+i)%MAX_P]
#define	P_PLC19_All_Home_Tact_Time	pshm->P[21110]
#define	P_All_Home_Module_Error	pshm->P[21111]
#define	P_Act_ALL_Home_Time_Out_Time	pshm->P[21112]
#define	P_Act_ALL_Home_Time_Out(i)	pshm->P[(21113+i)%MAX_P]
#define	P_Act_Hold_Complete_Bit(i)	pshm->P[(21153+i)%MAX_P]
#define	P_Module_Act_Hold_Command_Array(i)	pshm->P[(21188+i)%MAX_P]
#define	P_OLD_Module_Act_Hold_Command_Array(i)	pshm->P[(21223+i)%MAX_P]
#define	P_Module_Act_Hold_State_Machine_Array(i)	pshm->P[(21258+i)%MAX_P]
#define	P_Act_Hold_Old_Time(i)	pshm->P[(21293+i)%MAX_P]
#define	P_Act_Hold_Time_Out_Time	pshm->P[21328]
#define	P_Act_Hold_Time_Out(i)	pshm->P[(21329+i)%MAX_P]
#define	P_First_PNP_T_Wait_Status	pshm->P[21364]
#define	P_First_PNP_Z_Wait_Status	pshm->P[21365]
#define	P_First_PNP_Picker_T_Turn_Status	pshm->P[21366]
#define	P_First_PNP_T_Wait_To_Belt_Status	pshm->P[21367]
#define	P_First_PNP_Z_Wait_To_Belt_Status	pshm->P[21368]
#define	P_First_PNP_T_Align_To_Belt_Status	pshm->P[21369]
#define	P_First_PNP_Z_Align_To_Belt_Status	pshm->P[21370]
#define	P_First_PNP_Z_Belt_Down_Status	pshm->P[21371]
#define	P_First_PNP_Z_Belt_Up_Status	pshm->P[21372]
#define	P_First_PNP_T_Wait_To_Align_Status	pshm->P[21373]
#define	P_First_PNP_Z_Wait_To_Align_Status	pshm->P[21374]
#define	P_First_PNP_T_Belt_To_Align_Status	pshm->P[21375]
#define	P_First_PNP_Z_Belt_To_Align_Status	pshm->P[21376]
#define	P_First_PNP_Z_Align_Down_Status	pshm->P[21377]
#define	P_First_PNP_Z_Align_Up_Status	pshm->P[21378]
#define	P_First_PNP_Vac_On_Status	pshm->P[21379]
#define	P_First_PNP_Blow_On_Status	pshm->P[21380]
#define	P_Second_PNP_T_Align_To_Stack_Status	pshm->P[21381]
#define	P_Second_PNP_Z_Align_To_Stack_Status	pshm->P[21382]
#define	P_Second_PNP_T_Stack_To_Align_Status	pshm->P[21383]
#define	P_Second_PNP_Z_Stack_To_Align_Status	pshm->P[21384]
#define	P_Second_PNP_Z_Align_Down_Status	pshm->P[21385]
#define	P_Second_PNP_Z_Align_Up_Status	pshm->P[21386]
#define	P_Second_PNP_Vac_On_Status	pshm->P[21387]
#define	P_Second_PNP_Blow_On_Status	pshm->P[21388]
#define	P_NG_PNP_NG_Bos_Status	pshm->P[21389]
#define	P_NG_PNP_Align_Status	pshm->P[21390]
#define	P_NG_PNP_Align_Down_Status	pshm->P[21391]
#define	P_NG_PNP_Align_Up_Status	pshm->P[21392]
#define	P_NG_PNP_Vac_On_Status	pshm->P[21393]
#define	P_NG_PNP_Blow_On_Status	pshm->P[21394]
#define	P_Hold_1st_PNP_Position	pshm->P[21395]
#define	P_Hold_Module_Error	pshm->P[21396]
#define	P_Act_Execute_Complete_Bit(i)	pshm->P[(21397+i)%MAX_P]
#define	P_Module_Act_Execute_Command_Array(i)	pshm->P[(21409+i)%MAX_P]
#define	P_OLD_Module_Act_Execute_Command_Array(i)	pshm->P[(21421+i)%MAX_P]
#define	P_Module_Act_Execute_State_Machine_Array(i)	pshm->P[(21433+i)%MAX_P]
#define	P_Act_Execute_Old_Time(i)	pshm->P[(21445+i)%MAX_P]
#define	P_Act_Execute_Time_Out_Time	pshm->P[21457]
#define	P_Act_Execute_Time_Out(i)	pshm->P[(21458+i)%MAX_P]
#define	P_Execute_Module_Error	pshm->P[21470]
#define	P_Execute_First_Sepa_Total_Tact_Time	pshm->P[21471]
#define	P_Current_JR_Thickness_mm	pshm->P[21472]
#define	P_Current_Jelly_Roll_Thinckness_mm_Send_Enable_Flag	pshm->P[21473]
#define	P_Stack_Table_NG_Flag	pshm->P[21474]
#define	P_Suspend_Discharge_Cell_Out_Restart	pshm->P[21475]
#define	P_Jelly_Roll_OK_Count	pshm->P[21476]
#define	P_Jelly_Roll_NG_Count	pshm->P[21477]
#define	P_Jelly_Roll_Total_Count	pshm->P[21478]
#define	P_Jelly_Roll_ID	pshm->P[21479]
#define	P_Jelly_Roll_Prod_Count	pshm->P[21480]
#define	P_Jelly_Roll_Recipe_Count	pshm->P[21481]
#define	P_Current_Cell_Memory_Jelly_Roll	pshm->P[21482]
#define	P_Real_Stacking_Host_ID_Count	pshm->P[21483]
#define	P_VISION_PLC10_Anode_Align_Start	pshm->P[21484]
#define	P_VISION_PLC10_Cathode_Align_Start	pshm->P[21485]
#define	P_Stack_Table_NG_Count	pshm->P[21486]
#define	P_Stack_PMAC_NG_Code	pshm->P[21487]
#define	P_Stack_Vision_NG_Code_IN_Timer	pshm->P[21488]
#define	P_Discharge_Waiting_Flag	pshm->P[21489]
#define	P_ARC_Flag	pshm->P[21490]
#define	P_Discharge_Queue_Complete_Flag	pshm->P[21491]
#define	P_Shared_Discharge_Cmd	pshm->P[21492]
#define	P_Shared_Discharge_State_Machine	pshm->P[21493]
#define	P_Discharge_Dont_Stop_Point_Flag	pshm->P[21494]
#define	P_1st_Discharge_State	pshm->P[21495]
#define	P_Discharge_DIO_Trg	pshm->P[21496]
#define	P_Data_Parsing_Flag	pshm->P[21497]
#define	P_Memory_Discharge_Data	pshm->P[21498]
#define	P_Prev_Sepa_Stack_Completed_Flag	pshm->P[21499]
#define	P_First_Sepa_Mode_Status	pshm->P[21500]
#define	P_First_Sepa_Mode_Flag	pshm->P[21501]
#define	P_Discharge_Unloader_Handover_Timer	pshm->P[21502]
#define	P_Discharge_Unloader_Handover_Time	pshm->P[21503]
#define	P_B_1st_to_3rd_Discharge_cmd	pshm->P[21504]
#define	P_B_1st_to_3rd_Discharge_State_Machine	pshm->P[21505]
#define	P_3rd_Discharge_Status	pshm->P[21506]
#define	P_Buffer_Mode_Module_Status_Sequence(i)	pshm->P[(21507+i)%MAX_P]
#define	P_EXECUTE_Status_Prod_Sequence(i)	pshm->P[(21537+i)%MAX_P]
#define	P_Execute_First_Sepa_Mode_Cmd	pshm->P[21567]
#define	P_Execute_First_Sepa_Mode_Status	pshm->P[21568]
#define	P_Execute_First_Sepa_Mode_Module_Status	pshm->P[21569]
#define	P_Execute_First_Sepa_Mode_State_Machine	pshm->P[21570]
#define	P_Execute_First_Sepa_Mode_Seq_Index	pshm->P[21571]
#define	P_Execute_First_Sepa_Mode_Self_Index	pshm->P[21572]
#define	P_Execute_First_Sepa_Mode_Debug_Edge	pshm->P[21573]
#define	P_Buffer_Seqdata_Execute_First_Sepa_Mode_Array(i)	pshm->P[(21574+i)%MAX_P]
#define	P_Execute_First_Sepa_Mode_Timer	pshm->P[21604]
#define	P_Execute_First_Sepa_Mode_Tact_Time_Array(i)	pshm->P[(21605+i)%MAX_P]
#define	P_Execute_First_Sepa_Mode_Tact_Time	pshm->P[21625]
#define	P_Execute_1st_Sepa_Status	pshm->P[21626]
#define	P_Suspend_Discharge_Cmd	pshm->P[21627]
#define	P_Suspend_Discharge_Status	pshm->P[21628]
#define	P_Suspend_Discharge_State_Machine	pshm->P[21629]
#define	P_Suspend_Discharge_Seq_Index	pshm->P[21630]
#define	P_Suspend_Discharge_Self_Index	pshm->P[21631]
#define	P_Discharge_Seq_InterLock_Delay_Time(i)	pshm->P[(21632+i)%MAX_P]
#define	P_Discharge_Seq_InterLock_Flag(i)	pshm->P[(21662+i)%MAX_P]
#define	P_Buffer_Seqdata_Discharge_Array(i)	pshm->P[(21692+i)%MAX_P]
#define	P_Suspend_Discharge_Timer	pshm->P[21722]
#define	P_Suspend_Discharge_Tact_Time_Array(i)	pshm->P[(21723+i)%MAX_P]
#define	P_Suspend_Discharge_Tact_Time	pshm->P[21743]
#define	P_Suspend_Discharge_1st_Unloader_JR_Grip	pshm->P[21744]
#define	P_Suspend_ARC_Cmd	pshm->P[21745]
#define	P_Suspend_ARC_Status	pshm->P[21746]
#define	P_Suspend_ARC_State_Machine	pshm->P[21747]
#define	P_Suspend_ARC_Seq_Index	pshm->P[21748]
#define	P_Suspend_ARC_Self_Index	pshm->P[21749]
#define	P_Suspend_ARC_Manual_Occur_Flag	pshm->P[21750]
#define	P_ARC_Seq_InterLock_Delay_Time(i)	pshm->P[(21751+i)%MAX_P]
#define	P_ARC_Seq_InterLock_Flag(i)	pshm->P[(21781+i)%MAX_P]
#define	P_Buffer_Seqdata_ARC_Array(i)	pshm->P[(21811+i)%MAX_P]
#define	P_Suspend_ARC_Timer	pshm->P[21841]
#define	P_Suspend_ARC_Tact_Time_Array(i)	pshm->P[(21842+i)%MAX_P]
#define	P_Suspend_ARC_Tact_Time	pshm->P[21862]
#define	P_Suspend_Anode_1TR_Cell_Supply_Cmd	pshm->P[21863]
#define	P_Suspend_Anode_1TR_Cell_Supply_Status	pshm->P[21864]
#define	P_Suspend_Anode_1TR_Cell_Supply_State_Machine	pshm->P[21865]
#define	P_Suspend_Anode_1TR_Cell_Supply_Seq_Index	pshm->P[21866]
#define	P_Suspend_Anode_1TR_Cell_Supply_Self_Index	pshm->P[21867]
#define	P_Suspend_Anode_1TR_Cell_Supply_Module_Status	pshm->P[21868]
#define	P_Anode_1TR_Cell_Supply_Seq_InterLock_Delay_Time(i)	pshm->P[(21869+i)%MAX_P]
#define	P_Anode_1TR_Cell_Supply_Seq_InterLock_Flag(i)	pshm->P[(21899+i)%MAX_P]
#define	P_Buffer_Seqdata_Anode_1TR_Cell_Supply_Array(i)	pshm->P[(21929+i)%MAX_P]
#define	P_Suspend_Anode_1TR_Cell_Supply_Timer	pshm->P[21959]
#define	P_Suspend_Anode_1TR_Cell_Supply_Tact_Time_Array(i)	pshm->P[(21960+i)%MAX_P]
#define	P_Suspend_Anode_1TR_Cell_Supply_Tact_Time	pshm->P[21980]
#define	P_Hold_Exist_Insp_Cmd	pshm->P[21981]
#define	P_Hold_Exist_Insp_Status	pshm->P[21982]
#define	P_Hold_Exist_Insp_Module_Status	pshm->P[21983]
#define	P_Hold_Exist_Insp_State_Machine	pshm->P[21984]
#define	P_Hold_Exist_Insp_Seq_Index	pshm->P[21985]
#define	P_Hold_Exist_Insp_Self_Index	pshm->P[21986]
#define	P_Hold_Exist_Insp_Debug_Edge	pshm->P[21987]
#define	P_Buffer_Seqdata_Hold_Exist_Insp_Array(i)	pshm->P[(21988+i)%MAX_P]
#define	P_Hold_Exist_Insp_Timer	pshm->P[22018]
#define	P_Hold_Exist_Insp_Tact_Time_Array(i)	pshm->P[(22019+i)%MAX_P]
#define	P_Hold_Exist_Insp_Tact_Time	pshm->P[22039]
#define	P_Hold_Remove_NG_PNP_Cmd	pshm->P[22040]
#define	P_Hold_Remove_NG_PNP_Status	pshm->P[22041]
#define	P_Hold_Remove_NG_PNP_Module_Status	pshm->P[22042]
#define	P_Hold_Remove_NG_PNP_State_Machine	pshm->P[22043]
#define	P_Hold_Remove_NG_PNP_Seq_Index	pshm->P[22044]
#define	P_Hold_Remove_NG_PNP_Self_Index	pshm->P[22045]
#define	P_Hold_Remove_NG_PNP_Debug_Edge	pshm->P[22046]
#define	P_Buffer_Seqdata_Hold_Remove_NG_PNP_Array(i)	pshm->P[(22047+i)%MAX_P]
#define	P_Hold_Remove_NG_PNP_Timer	pshm->P[22077]
#define	P_Hold_Remove_NG_PNP_Tact_Time_Array(i)	pshm->P[(22078+i)%MAX_P]
#define	P_Hold_Remove_NG_PNP_Tact_Time	pshm->P[22098]
#define	P_PLC01_Hold_Remove_NG_PNP_Sub_Flag	pshm->P[22099]
#define	P_PLC01_Hold_Remove_NG_PNP_Sub_State_Machine	pshm->P[22100]
#define	P_PLC01_Hold_Remove_NG_PNP_Sub_Status	pshm->P[22101]
#define	P_Hold_Remove_Align_Cmd	pshm->P[22102]
#define	P_Hold_Remove_Align_Status	pshm->P[22103]
#define	P_Hold_Remove_Align_Module_Status	pshm->P[22104]
#define	P_Hold_Remove_Align_State_Machine	pshm->P[22105]
#define	P_Hold_Remove_Align_Seq_Index	pshm->P[22106]
#define	P_Hold_Remove_Align_Self_Index	pshm->P[22107]
#define	P_Hold_Remove_Align_Debug_Edge	pshm->P[22108]
#define	P_Buffer_Seqdata_Hold_Remove_Align_Array(i)	pshm->P[(22109+i)%MAX_P]
#define	P_Hold_Remove_Align_Timer	pshm->P[22139]
#define	P_Hold_Remove_Align_Tact_Time_Array(i)	pshm->P[(22140+i)%MAX_P]
#define	P_Hold_Remove_Align_Tact_Time	pshm->P[22160]
#define	P_PLC01_Hold_Remove_Align_Sub_Flag	pshm->P[22161]
#define	P_PLC01_Hold_Remove_Align_Sub_State_Machine	pshm->P[22162]
#define	P_PLC01_Hold_Remove_Align_Sub_Status	pshm->P[22163]
#define	P_Hold_Remove_2TR_Cmd	pshm->P[22164]
#define	P_Hold_Remove_2TR_Status	pshm->P[22165]
#define	P_Hold_Remove_2TR_Module_Status	pshm->P[22166]
#define	P_Hold_Remove_2TR_State_Machine	pshm->P[22167]
#define	P_Hold_Remove_2TR_Seq_Index	pshm->P[22168]
#define	P_Hold_Remove_2TR_Self_Index	pshm->P[22169]
#define	P_Hold_Remove_2TR_Debug_Edge	pshm->P[22170]
#define	P_Buffer_Seqdata_Hold_Remove_2TR_Array(i)	pshm->P[(22171+i)%MAX_P]
#define	P_Hold_Remove_2TR_Timer	pshm->P[22201]
#define	P_Hold_Remove_2TR_Tact_Time_Array(i)	pshm->P[(22202+i)%MAX_P]
#define	P_Hold_Remove_2TR_Tact_Time	pshm->P[22222]
#define	P_Hold_Supply_1TR_Cmd	pshm->P[22223]
#define	P_Hold_Supply_1TR_Status	pshm->P[22224]
#define	P_Hold_Supply_1TR_Module_Status	pshm->P[22225]
#define	P_Hold_Supply_1TR_State_Machine	pshm->P[22226]
#define	P_Hold_Supply_1TR_Seq_Index	pshm->P[22227]
#define	P_Hold_Supply_1TR_Self_Index	pshm->P[22228]
#define	P_Hold_Supply_1TR_Debug_Edge	pshm->P[22229]
#define	P_Buffer_Seqdata_Hold_Supply_1TR_Array(i)	pshm->P[(22230+i)%MAX_P]
#define	P_Hold_Supply_1TR_Timer	pshm->P[22260]
#define	P_Hold_Supply_1TR_Tact_Time_Array(i)	pshm->P[(22261+i)%MAX_P]
#define	P_Hold_Supply_1TR_Tact_Time	pshm->P[22281]
#define	P_PLC01_Hold_Supply_1TR_Memory_RTN	pshm->P[22282]
#define	P_PLC01_Hold_Supply_1TR_Judge_Flag	pshm->P[22283]
#define	P_PLC01_Hold_Supply_1TR_Judge_State_Machine	pshm->P[22284]
#define	P_PLC01_Hold_Supply_1TR_Judge_Status	pshm->P[22285]
#define	P_Plate_1TR_Supply_Module_Judge_Bit	pshm->P[22286]
#define	P_Hold_Supply_Align_Cmd	pshm->P[22287]
#define	P_Hold_Supply_Align_Status	pshm->P[22288]
#define	P_Hold_Supply_Align_Module_Status	pshm->P[22289]
#define	P_Hold_Supply_Align_State_Machine	pshm->P[22290]
#define	P_Hold_Supply_Align_Seq_Index	pshm->P[22291]
#define	P_Hold_Supply_Align_Self_Index	pshm->P[22292]
#define	P_Hold_Supply_Align_Debug_Edge	pshm->P[22293]
#define	P_Buffer_Seqdata_Hold_Supply_Align_Array(i)	pshm->P[(22294+i)%MAX_P]
#define	P_Hold_Supply_Align_Timer	pshm->P[22324]
#define	P_Hold_Supply_Align_Tact_Time_Array(i)	pshm->P[(22325+i)%MAX_P]
#define	P_Hold_Supply_Align_Tact_Time	pshm->P[22345]
#define	P_Hold_Supply_2TR_Cmd	pshm->P[22346]
#define	P_Hold_Supply_2TR_Status	pshm->P[22347]
#define	P_Hold_Supply_2TR_Module_Status	pshm->P[22348]
#define	P_Hold_Supply_2TR_State_Machine	pshm->P[22349]
#define	P_Hold_Supply_2TR_Seq_Index	pshm->P[22350]
#define	P_Hold_Supply_2TR_Self_Index	pshm->P[22351]
#define	P_Hold_Supply_2TR_Debug_Edge	pshm->P[22352]
#define	P_Buffer_Seqdata_Hold_Supply_2TR_Array(i)	pshm->P[(22353+i)%MAX_P]
#define	P_Hold_Supply_2TR_Timer	pshm->P[22383]
#define	P_Hold_Supply_2TR_Tact_Time_Array(i)	pshm->P[(22384+i)%MAX_P]
#define	P_Hold_Supply_2TR_Tact_Time	pshm->P[22404]
#define	P_Hold_Semi_Run_Pos_Move_Cmd	pshm->P[22405]
#define	P_Hold_Semi_Run_Pos_Move_Status	pshm->P[22406]
#define	P_Hold_Semi_Run_Pos_Move_Module_Status	pshm->P[22407]
#define	P_Hold_Semi_Run_Pos_Move_State_Machine	pshm->P[22408]
#define	P_Hold_Semi_Run_Pos_Move_Seq_Index	pshm->P[22409]
#define	P_Hold_Semi_Run_Pos_Move_Self_Index	pshm->P[22410]
#define	P_Hold_Semi_Run_Pos_Move_Debug_Edge	pshm->P[22411]
#define	P_Buffer_Seqdata_Hold_Semi_Run_Pos_Move_Array(i)	pshm->P[(22412+i)%MAX_P]
#define	P_Hold_Semi_Run_Pos_Move_Timer	pshm->P[22442]
#define	P_Hold_Semi_Run_Pos_Move_Tact_Time_Array(i)	pshm->P[(22443+i)%MAX_P]
#define	P_Hold_Semi_Run_Pos_Move_Tact_Time	pshm->P[22463]
#define	P_Act_Complete_Bit(i)	pshm->P[(22464+i)%MAX_P]
#define	P_Act_Old_Time(i)	pshm->P[(22530+i)%MAX_P]
#define	P_Act_Delay_Time(i)	pshm->P[(22596+i)%MAX_P]
#define	P_Act_Suspend_Time_Out_Time	pshm->P[22662]
#define	P_Act_Time_Out(i)	pshm->P[(22663+i)%MAX_P]
#define	P_Test_Sungmin_Flag	pshm->P[22729]
#define	P_Discharge_Possibility_Bit(i)	pshm->P[(22730+i)%MAX_P]
#define	P_HOLD_Exist_Possibility_Bit(i)	pshm->P[(22796+i)%MAX_P]
#define	P_HOLD_NG_Remove_Possibility_Bit(i)	pshm->P[(22862+i)%MAX_P]
#define	P_HOLD_Align_Remove_Possibility_Bit(i)	pshm->P[(22928+i)%MAX_P]
#define	P_HOLD_2TR_Remove_Possibility_Bit(i)	pshm->P[(22994+i)%MAX_P]
#define	P_HOLD_1TR_Supply_Possibility_Bit(i)	pshm->P[(23060+i)%MAX_P]
#define	P_HOLD_Align_Supply_Possibility_Bit(i)	pshm->P[(23126+i)%MAX_P]
#define	P_HOLD_2TR_Supply_Possibility_Bit(i)	pshm->P[(23192+i)%MAX_P]
#define	P_HOLD_Semi_Run_Pos_Possibility_Bit(i)	pshm->P[(23258+i)%MAX_P]
#define	P_Module_Act_Command_Array(i)	pshm->P[(23324+i)%MAX_P]
#define	P_OLD_Module_Act_Command_Array(i)	pshm->P[(23390+i)%MAX_P]
#define	P_Module_Act_State_Machine_Array(i)	pshm->P[(23456+i)%MAX_P]
#define	P_Module_Act_State_Machine_Error_Array(i)	pshm->P[(23522+i)%MAX_P]
#define	P_Suspend_Discharge_Module_Status	pshm->P[23588]
#define	P_Suspend_Discharge_To_Execute_Flag	pshm->P[23589]
#define	P_Suspend_Discharge_Complete_Flag	pshm->P[23590]
#define	P_First_Unloader_Stack_Up_Status	pshm->P[23591]
#define	P_First_Unloader_Stack_FWD_Status	pshm->P[23592]
#define	P_First_Unloader_Grip_Cell_Status	pshm->P[23593]
#define	P_First_Unloader_Stack_BWD_Wait_Status	pshm->P[23594]
#define	P_First_Unloader_Stack_BWD_Status	pshm->P[23595]
#define	P_First_Unloader_Stack_Down_Status	pshm->P[23596]
#define	P_First_Unloader_Avoid_Status	pshm->P[23597]
#define	P_First_Unloader_Turn_Status	pshm->P[23598]
#define	P_First_Unloader_Handover_Status	pshm->P[23599]
#define	P_Cathode_Clamp_OFF_Status	pshm->P[23600]
#define	P_Final_Roll_Discharge_Status	pshm->P[23601]
#define	P_Final_Roll_Stack_Pos_Status	pshm->P[23602]
#define	P_Final_Roll_Stack_Up_Pos_Status	pshm->P[23603]
#define	P_Main_Z_Init_Pos_Status	pshm->P[23604]
#define	P_Sheet_Paper_BWD_Status	pshm->P[23605]
#define	P_Discharge_Vision_DIO_RTN	pshm->P[23606]
#define	P_Discharge_Sub_RTN	pshm->P[23607]
#define	P_Discharge_NG_Code_Report_RTN	pshm->P[23608]
#define	P_Individual_RTN	pshm->P[23609]
#define	P_Suspend_Discharge_Last_Run_Bit	pshm->P[23610]
#define	P_Suspend_Discharge_JR_Result_RTN	pshm->P[23611]
#define	P_ARC_Buffer_Jog_Speed	pshm->P[23612]
#define	P_Selected_Spool_Number	pshm->P[23613]
#define	P_ARC_Home_Check_RTN	pshm->P[23614]
#define	P_Suspend_ARC_Module_Status	pshm->P[23615]
#define	P_Not_Selected_Spool_Radius	pshm->P[23616]
#define	P_Not_Selected_Spool_Circumference	pshm->P[23617]
#define	P_Sensor_To_Sepa_Curr_Distance_mm(i)	pshm->P[(23618+i)%MAX_P]
#define	P_Passive_D_One_Degree_AD_Value	pshm->P[23643]
#define	P_After_ARC_Rotate_Distance	pshm->P[23644]
#define	P_Stack_Vision_NG_Code_Time_Over	pshm->P[23645]
#define	P_Suspend_Discharge_Resume_Flag	pshm->P[23646]
#define	P_Suspend_Discharge_Resume_Complete	pshm->P[23647]
#define	P_Suspend_Discharge_Pause_Flag	pshm->P[23648]
#define	P_Suspend_Monitor_(i)	pshm->P[(23649+i)%MAX_P]
#define	P_Flag_Stack_Work_Host_ID	pshm->P[23659]
#define	P_First_Sepa_Stack_Align_OK_PMAC_Flag	pshm->P[23660]
#define	P_Sepa_Run_Completed_Status_Machine	pshm->P[23661]
#define	P_Discharge_Debug_Edge	pshm->P[23662]
#define	P_Suspend_Discharge_Debug_Address(i)	pshm->P[(23663+i)%MAX_P]
#define	P_Suspend_Discharge_Debug_Value(i)	pshm->P[(23668+i)%MAX_P]
#define	P_Discharge_Sepa_Cutter_Time_Out_State_Machine	pshm->P[23673]
#define	P_Old_Suspend_Discharge_Seq_Index	pshm->P[23674]
#define	P_Discharge_Debug_Index_1	pshm->P[23675]
#define	P_Discharge_Debug_Index_2	pshm->P[23676]
#define	P_Discharge_Debug_Index_3	pshm->P[23677]
#define	P_Discharge_Debug_Index_4	pshm->P[23678]
#define	P_ARC_Debug_Edge	pshm->P[23679]
#define	P_Suspend_ARC_Debug_Address(i)	pshm->P[(23680+i)%MAX_P]
#define	P_Suspend_ARC_Debug_Value(i)	pshm->P[(23685+i)%MAX_P]
#define	P_Old_Suspend_ARC_Seq_Index	pshm->P[23690]
#define	P_ARC_Debug_Index_1	pshm->P[23691]
#define	P_ARC_Debug_Index_2	pshm->P[23692]
#define	P_ARC_Debug_Index_3	pshm->P[23693]
#define	P_ARC_Debug_Index_4	pshm->P[23694]
#define	P_ARC_Ready_Flag(i)	pshm->P[(23695+i)%MAX_P]
#define	P_Suspend_Cutter_Heating_Time	pshm->P[23697]
#define	P_Suspend_Cutter_Heating_Timer	pshm->P[23698]
#define	P_An_1TR_Supply_Debug_Edge	pshm->P[23699]
#define	P_Suspend_An_1TR_Supply_Debug_Address(i)	pshm->P[(23700+i)%MAX_P]
#define	P_Suspend_An_1TR_Supply_Debug_Value(i)	pshm->P[(23705+i)%MAX_P]
#define	P_Old_Suspend_An_1TR_Supply_Seq_Index	pshm->P[23710]
#define	P_An_1TR_Supply_Debug_Index_1	pshm->P[23711]
#define	P_An_1TR_Supply_Debug_Index_2	pshm->P[23712]
#define	P_An_1TR_Supply_Debug_Index_3	pshm->P[23713]
#define	P_An_1TR_Supply_Debug_Index_4	pshm->P[23714]
#define	P_Suspend_Supply_Index	pshm->P[23715]
#define	P_Suspend_Supply_Index_2nd	pshm->P[23716]
#define	P_Anode_Suspend_Supply_Complete(i)	pshm->P[(23717+i)%MAX_P]
#define	P_Suspend_Supply_Pause_Flag	pshm->P[23725]
#define	P_Suspend_Supply_Resume_Flag	pshm->P[23726]
#define	P_Supply_Module_Status	pshm->P[23727]
#define	P_Suspend_Anode_1TR_Supply_Complete_Flag	pshm->P[23728]
#define	P_Suspend_Discharge_Module_Error	pshm->P[23729]
#define	P_Suspend_ARC_Module_Error	pshm->P[23730]
#define	P_Suspend_1st_Supply_Error	pshm->P[23731]
#define	P_Discharge_Seq_Data	pshm->P[23732]
#define	P_Suspend_Discharging_Popup_Flag	pshm->P[23733]
#define	P_Suspend_Discharge_FR_Unclamp_Error_Popup_Flag	pshm->P[23734]
#define	P_Suspend_Discharge_Cathode_Align_Retry_Cal_Error_Popup_Flag	pshm->P[23735]
#define	P_Suspend_Discharge_Anode_Align_Retry_Cal_Error_Popup_Flag	pshm->P[23736]
#define	P_Suspend_Discharge_FR_Discharge_Pos_Error_Popup_Flag	pshm->P[23737]
#define	P_Suspend_Discharge_1st_Unloader_Grip_OFF_Error_Popup_Flag	pshm->P[23738]
#define	P_Suspend_Discharge_1st_Unloader_Up_Error_Popup_Flag	pshm->P[23739]
#define	P_Suspend_Discharge_1st_Unloader_FWD_Error_Popup_Flag	pshm->P[23740]
#define	P_Suspend_Discharge_FR_Clamp_Error_Popup_Flag	pshm->P[23741]
#define	P_Suspend_Discharge_Sepa_Cutter_Heating_Error_Popup_Flag	pshm->P[23742]
#define	P_Suspend_Discharge_1st_Unloader_Grip_Cell_Pos_Error_Popup_Flag	pshm->P[23743]
#define	P_Suspend_Discharge_1st_Unloader_Grip_ON_Error_Popup_Flag	pshm->P[23744]
#define	P_Suspend_Discharge_Sheet_Paper_BWD_Error_Popup_Flag	pshm->P[23745]
#define	P_Suspend_Discharge_Cathode_Clamp_OFF_Error_Popup_Flag	pshm->P[23746]
#define	P_Suspend_Discharge_Sepa_Cutter_FWD_Error_Popup_Flag	pshm->P[23747]
#define	P_Suspend_Discharge_Sheet_Paper_Vacuum_ON_Error_Popup_Flag	pshm->P[23748]
#define	P_Suspend_Discharge_Sepa_Cutter_BWD_Error_Popup_Flag	pshm->P[23749]
#define	P_Suspend_Discharge_1st_Unloader_BWD_Wait_Pos_Error_Popup_Flag	pshm->P[23750]
#define	P_Suspend_Discharge_1st_Unloader_BWD_Error_Popup_Flag	pshm->P[23751]
#define	P_Suspend_Discharge_1st_Unloader_Stack_Down_Error_Popup_Flag	pshm->P[23752]
#define	P_Suspend_Discharge_FR_Stack_Pos_Error_Popup_Flag	pshm->P[23753]
#define	P_Suspend_Discharge_After_Action_Init_Error_Popup_Flag	pshm->P[23754]
#define	P_Suspend_Discharge_1st_Unloader_Avoid_Pos_Error_Popup_Flag	pshm->P[23755]
#define	P_Suspend_Discharge_1st_2nd_Unloader_Handover_Chk_Error_Popup_Flag	pshm->P[23756]
#define	P_Suspend_Discharge_1st_Unloader_Handover_Pos_Error_Popup_Flag	pshm->P[23757]
#define	P_Suspend_Discharge_2nd_3rd_Unloader_Grip_Request_Error_Popup_Flag	pshm->P[23758]
#define	P_Suspend_Discharge_1st_Unloader_Wait_Pos_Error_Popup_Flag	pshm->P[23759]
#define	P_Suspend_ARC_Manual_ARC_Active_Popup_Flag	pshm->P[23760]
#define	P_Suspend_ARC_Auto_ARC_Active_Popup_Flag	pshm->P[23761]
#define	P_Suspend_ARC_Pre_Act_Popup_Flag	pshm->P[23762]
#define	P_Suspend_ARC_Dancer_Close_Popup_Flag	pshm->P[23763]
#define	P_Suspend_ARC_Use_Plate_FWD_Popup_Flag	pshm->P[23764]
#define	P_Suspend_ARC_Replace_Plate_Blow_ON_Popup_Flag	pshm->P[23765]
#define	P_Suspend_ARC_Use_Plate_Clamp_Popup_Flag	pshm->P[23766]
#define	P_Suspend_ARC_Use_Plate_Cutter_FWD_Popup_Flag	pshm->P[23767]
#define	P_Suspend_ARC_Use_Plate_Cutter_BWD_Popup_Flag	pshm->P[23768]
#define	P_Suspend_ARC_Use_Plate_Unclamp_Popup_Flag	pshm->P[23769]
#define	P_Suspend_ARC_Use_Plate_BWD_Popup_Flag	pshm->P[23770]
#define	P_Suspend_ARC_Replace_Plate_Blow_OFF_Popup_Flag	pshm->P[23771]
#define	P_Suspend_ARC_Dancer_Open_Popup_Flag	pshm->P[23772]
#define	P_Suspend_ARC_Spool_Change_Popup_Flag	pshm->P[23773]
#define	P_Suspend_ARC_Post_Act_Popup_Flag	pshm->P[23774]
#define	P_Suspend_ARC_Previous_Spool_Remain_Winding_Popup_Flag	pshm->P[23775]
#define	P_Suspend_Discharge_First_Address	pshm->P[23776]
#define	P_Suspend_ARC_First_Address	pshm->P[23777]
#define	P_Status_Stop_Ready_Pos_Move	pshm->P[23778]
#define	P_Cycle_Stop_Stauts	pshm->P[23779]
#define	P_Cycle_Stop_Status_Machine	pshm->P[23780]
#define	P_Cycle_Stop_Flag	pshm->P[23781]
#define	P_Speed_Origin_rtn	pshm->P[23782]
#define	P_Speed_rtn	pshm->P[23783]
#define	P_NG_PNP_Z_Move_rtn	pshm->P[23784]
#define	P_NG_PNP_Z_Move_Check_rtn	pshm->P[23785]
#define	P_NG_PNP_T_Move_rtn	pshm->P[23786]
#define	P_NG_PNP_T_Move_Check_rtn	pshm->P[23787]
#define	P_2nd_Z_Move_rtn	pshm->P[23788]
#define	P_2nd_Z_Move_Check_rtn	pshm->P[23789]
#define	P_2nd_T_Move_rtn	pshm->P[23790]
#define	P_2nd_T_Move_Check_rtn	pshm->P[23791]
#define	P_Stack_Judgement_Memory	pshm->P[23792]
#define	P_Stop_Cycle_Stop_Move_Status	pshm->P[23793]
#define	P_STOP_Initial_Process_Status	pshm->P[23794]
#define	P_Stopping_CycleStop_Init_Flag	pshm->P[23795]
#define	P_Sepa_Timing	pshm->P[23796]
#define	P_Old_Trigger_PLC0	pshm->P[23797]
#define	P_Mode_Command	pshm->P[23798]
#define	P_Current_Mode	pshm->P[23799]
#define	P_MOde_Num(i)	pshm->P[(23800+i)%MAX_P]
#define	P_Command_Depth(i)	pshm->P[(23805+i)%MAX_P]
#define	P_In_Position(i)	pshm->P[(23810+i)%MAX_P]
#define	P_Last_Cycle_Command(i)	pshm->P[(23815+i)%MAX_P]
#define	P_Mode_Command_Buffer	pshm->P[23820]
#define	P_Mode_Command_Wait_Count	pshm->P[23821]
#define	P_Old_Mode_Command	pshm->P[23822]
#define	P_Slave1_Anode_Run_Motion_Array(i)	pshm->P[(23823+i)%MAX_P]
#define	P_Slave2_Anode_Run_Motion_Array(i)	pshm->P[(23923+i)%MAX_P]
#define	P_Slave3_Anode_Run_Motion_Array(i)	pshm->P[(24023+i)%MAX_P]
#define	P_Slave4_Anode_Run_Motion_Array(i)	pshm->P[(24123+i)%MAX_P]
#define	P_Slave5_Anode_Run_Motion_Array(i)	pshm->P[(24223+i)%MAX_P]
#define	P_Slave6_Anode_Run_Motion_Array(i)	pshm->P[(24323+i)%MAX_P]
#define	P_Slave7_Anode_Run_Motion_Array(i)	pshm->P[(24423+i)%MAX_P]
#define	P_Slave8_Anode_Run_Motion_Array(i)	pshm->P[(24523+i)%MAX_P]
#define	P_Slave9_Anode_Run_Motion_Array(i)	pshm->P[(24623+i)%MAX_P]
#define	P_Slave10_Anode_Run_Motion_Array(i)	pshm->P[(24723+i)%MAX_P]
#define	P_Slave15_Anode_Run_Motion_Array(i)	pshm->P[(24823+i)%MAX_P]
#define	P_Slave16_Anode_Run_Motion_Array(i)	pshm->P[(24923+i)%MAX_P]
#define	P_Slave17_Anode_Run_Motion_Array(i)	pshm->P[(25023+i)%MAX_P]
#define	P_Slave18_Anode_Run_Motion_Array(i)	pshm->P[(25123+i)%MAX_P]
#define	P_Slave19_Anode_Run_Motion_Array(i)	pshm->P[(25223+i)%MAX_P]
#define	P_Slave1_Cathode_Run_Motion_Array(i)	pshm->P[(25323+i)%MAX_P]
#define	P_Slave2_Cathode_Run_Motion_Array(i)	pshm->P[(25423+i)%MAX_P]
#define	P_Slave3_Cathode_Run_Motion_Array(i)	pshm->P[(25523+i)%MAX_P]
#define	P_Slave4_Cathode_Run_Motion_Array(i)	pshm->P[(25623+i)%MAX_P]
#define	P_Slave5_Cathode_Run_Motion_Array(i)	pshm->P[(25723+i)%MAX_P]
#define	P_Slave15_Cathode_Run_Motion_Array(i)	pshm->P[(25823+i)%MAX_P]
#define	P_Slave6_Cathode_Run_Motion_Array(i)	pshm->P[(25923+i)%MAX_P]
#define	P_Slave7_Cathode_Run_Motion_Array(i)	pshm->P[(26023+i)%MAX_P]
#define	P_Slave8_Cathode_Run_Motion_Array(i)	pshm->P[(26123+i)%MAX_P]
#define	P_Slave9_Cathode_Run_Motion_Array(i)	pshm->P[(26223+i)%MAX_P]
#define	P_Slave10_Cathode_Run_Motion_Array(i)	pshm->P[(26323+i)%MAX_P]
#define	P_Slave16_Cathode_Run_Motion_Array(i)	pshm->P[(26423+i)%MAX_P]
#define	P_Slave17_Cathode_Run_Motion_Array(i)	pshm->P[(26523+i)%MAX_P]
#define	P_Slave18_Cathode_Run_Motion_Array(i)	pshm->P[(26623+i)%MAX_P]
#define	P_Slave19_Cathode_Run_Motion_Array(i)	pshm->P[(26723+i)%MAX_P]
#define	P_Anode_NG_Unit_Status	pshm->P[26823]
#define	P_Cathode_NG_Unit_Status	pshm->P[26824]
#define	P_ParsingRtn	pshm->P[26825]
#define	P_CurPosData	pshm->P[26826]
#define	P_Hold_MNTR_Supply_1st	pshm->P[26827]
#define	P_TimeOutNumb	pshm->P[26828]
#define	P_PosRtn	pshm->P[26829]
#define	P_MotionRtn	pshm->P[26830]
#define	P_CmdData	pshm->P[26831]
#define	P_Interval	pshm->P[26832]
#define	P_Cont_Ret	pshm->P[26833]
#define	P_Cur_Idx	pshm->P[26834]
#define	P_NextID	pshm->P[26835]
#define	P_Cur_Size	pshm->P[26836]
#define	P_Hold_Exist_Insp	pshm->P[26837]
#define	P_Hold_Remove_NG_PNP	pshm->P[26838]
#define	P_Hold_Remove_Align	pshm->P[26839]
#define	P_Hold_Remove_2TR	pshm->P[26840]
#define	P_Hold_Supply_1TR	pshm->P[26841]
#define	P_Hold_Supply_Align	pshm->P[26842]
#define	P_Hold_Supply_2TR	pshm->P[26843]
#define	P_Hold_Semi_Run	pshm->P[26844]
#define	P_Hold_NG_PNP_Remove	pshm->P[180]
#define	P_Hold_Remove_2nd	pshm->P[182]
#define	P_Hold_Supply_1st	pshm->P[183]
#define	P_Hold_Supply_2nd	pshm->P[185]
#define	P_Hold_Data_process	pshm->P[186]
#define	P_Hold_Semi_Run_Enable_Pos	pshm->P[187]
#define	P_Hold_Existence_Insp	pshm->P[188]
#define	P_Hold_1st_Belt_Move	pshm->P[189]
#define	P_Hold_Motion	pshm->P[190]
#define	P_Hold_Data_process_State_Machine	pshm->P[26845]
#define	P_Hold_Align_Remove_State_Machine	pshm->P[26846]
#define	P_Hold_2nd_Remove_State_Machine	pshm->P[26847]
#define	P_Hold_Supply_1st_State_Machine	pshm->P[26848]
#define	P_Hold_Supply_2nd_State_Machine	pshm->P[26849]
#define	P_Hold_Existence_Insp_State_Machine	pshm->P[26850]
#define	P_Hold_NG_PNP_Remove_State_Machine	pshm->P[26851]
#define	P_Hold_Data_Process_Complete	pshm->P[26852]
#define	P_Hold_Semi_Run_Enable_Pos_State_Machine	pshm->P[26853]
#define	P_HOLD_Existence_Insp_Queue_State_Machine	pshm->P[26854]
#define	P_Hold_Stop_Existence_Insp_STEP	pshm->P[26855]
#define	P_SubMaster_Status_Err	pshm->P[26856]
#define	P_Data_Process_Rtn	pshm->P[26857]
#define	P_Hold_Set_Trigger	pshm->P[26858]
#define	P_Hold_Get_Trigger	pshm->P[26859]
#define	P_Anode_2nd_Data	pshm->P[26860]
#define	P_Anode_Align_Data	pshm->P[26861]
#define	P_Hold_Remove_Step	pshm->P[26862]
#define	P_HList_Head_Idx	pshm->P[26863]
#define	P_Hold_Next_ID	pshm->P[26864]
#define	P_HCmd_List(i)	pshm->P[(26865+i)%MAX_P]
#define	P_Hold_Data_Value	pshm->P[26885]
#define	P_Comb_Bitwise	pshm->P[26886]
#define	P_Target_Cmd	pshm->P[26887]
#define	P_Temp_Bit	pshm->P[26888]
#define	P_Get_ErrorCode	pshm->P[26889]
#define	P_Rtn_Code	pshm->P[26890]
#define	P_Complete_Hold_Bit	pshm->P[26891]
#define	P_HoldMtion_Flag	pshm->P[26892]
#define	P_Ret_BitWise	pshm->P[26893]
#define	P_NotEnough_GetSpace	pshm->P[26894]
#define	P_NotEnough_SetSpace	pshm->P[26895]
#define	P_Check_SetSpace	pshm->P[26896]
#define	P_Hold_Get_Data	pshm->P[26897]
#define	P_Err_NextID_Flag	pshm->P[26898]
#define	P_Elec_Bit	pshm->P[26899]
#define	P_MotionData	pshm->P[26900]
#define	P_DataList(i)	pshm->P[(26901+i)%MAX_P]
#define	P_Hold_Data_Err(i)	pshm->P[(26906+i)%MAX_P]
#define	P_Cur_PosX1	pshm->P[26916]
#define	P_Cur_PosZ1	pshm->P[26917]
#define	P_Cur_PosX2	pshm->P[26918]
#define	P_Cur_PosZ2	pshm->P[26919]
#define	P_Dest_PosX	pshm->P[26920]
#define	P_Dest_PosZ	pshm->P[26921]
#define	P_FailToParse	pshm->P[26922]
#define	P_CurTrigger	pshm->P[26923]
#define	P_TimeOutTrigger	pshm->P[26924]
#define	P_CalcTime	pshm->P[26925]
#define	P_Cycle_Count	pshm->P[26926]
#define	P_MotionTimeOutFlag	pshm->P[26927]
#define	P_Set_Data	pshm->P[26928]
#define	P_Rtn	pshm->P[26929]
#define	P_CurPosTestBit	pshm->P[26930]
#define	P_Hold_Anode_Pause_CHK	pshm->P[26931]
#define	P_Hold_Cathode_Pause_CHK	pshm->P[26932]
#define	P_Surface_Complete_To_Hold	pshm->P[26933]
#define	P_Hold_Motion_Arr(i)	pshm->P[(26934+i)%MAX_P]
#define	P_Hold_Pause_Trg	pshm->P[26954]
#define	P_From_Staring_Flag	pshm->P[26955]
#define	P_Hold_Existence_Insp_Enqueue_Flag	pshm->P[26956]
#define	P_Hold_Rtn	pshm->P[26957]
#define	P_Debug_Existence_Insp_STEP	pshm->P[26958]
#define	P_Hold_Align_Sheet_CHK	pshm->P[26959]
#define	P_Hold_Cathode_Exception_Empty_Flag	pshm->P[26960]
#define	P_Hold_Anode_Exception_Empty_Flag	pshm->P[26961]
#define	P_HOLD_Hold_Process_State_Machine	pshm->P[26962]
#define	P_Hold_Stop_Sheet_Process_STEP	pshm->P[26963]
#define	P_Hold_Debug_Sheet_Process_STEP	pshm->P[26964]
#define	P_Hold_Stop_Point	pshm->P[26965]
#define	P_Hold_CHK	pshm->P[26966]
#define	P_Hold_Test	pshm->P[26967]
#define	P_Anode_1st_Motion_Complete	pshm->P[26968]
#define	P_Anode_2nd_Motion_Complete	pshm->P[26969]
#define	P_Anode_NG_PNP_Motion_Complete	pshm->P[26970]
#define	P_Cathode_1st_Motion_Complete	pshm->P[26971]
#define	P_Cathode_2nd_Motion_Complete	pshm->P[26972]
#define	P_Cathode_NG_PNP_Motion_Complete	pshm->P[26973]
#define	P_Anode_1st_Picker_Motion_Complete	pshm->P[26974]
#define	P_Cathode_1st_Picker_Motion_Complete	pshm->P[26975]
#define	P_individual_return	pshm->P[26976]
#define	P_individual_return2	pshm->P[26977]
#define	P_HoldCurPosBit1	pshm->P[26978]
#define	P_HoldCurPosBit2	pshm->P[26979]
#define	P_Parsing_Status	pshm->P[26980]
#define	P_Sel_Obj	pshm->P[26981]
#define	P_Sel_Elec	pshm->P[26982]
#define	P_Error	pshm->P[26983]
#define	P_Vision_FirstSepa_Complete	pshm->P[26984]
#define	P_NG_PNP_Turn_TM	pshm->P[26985]
#define	P_NG_PNP_Turn_TS	pshm->P[26986]
#define	P_NG_PNP_Turn_TA	pshm->P[26987]
#define	P_NG_PNP_Up_TM	pshm->P[26988]
#define	P_NG_PNP_Up_TS	pshm->P[26989]
#define	P_NG_PNP_Up_TA	pshm->P[26990]
#define	P_NG_PNP_Down_TM	pshm->P[26991]
#define	P_NG_PNP_Down_TS	pshm->P[26992]
#define	P_NG_PNP_Down_TA	pshm->P[26993]
#define	P_NG_PNP_Vac_Time	pshm->P[26994]
#define	P_NG_PNP_Blow_Time	pshm->P[26995]
#define	P_Slow_NG_Mode_Btn	pshm->P[26996]
#define	P_HOLD_Memory_Tower_Offset	pshm->P[26997]
#define	P_Hold_Pause_Use	pshm->P[26998]
#define	P_Hold_Err_MNTR(i)	pshm->P[(26999+i)%MAX_P]
#define	P_Hold_Err_Data_Save(i)	pshm->P[(27003+i)%MAX_P]
#define	P_Hold_Err_Action_Data_Save(i)	pshm->P[(27011+i)%MAX_P]
#define	P_Hold_Motion_Err_Chk	pshm->P[27019]
#define	P_Hold_Memory_Tower_Err_Pos(i)	pshm->P[(27020+i)%MAX_P]
#define	P_Hold_Motion_TimeOut	pshm->P[27035]
#define	P_Hold_Data_OK	pshm->P[27036]
#define	P_VISION_TRG_PLC4_AnodeSurface_Ins_Shoot	pshm->P[27037]
#define	P_VISION_TRG_PLC4_CathodeSurface_Ins_Shoot	pshm->P[27038]
#define	P_Memory_Tower_Test	pshm->P[27039]
#define	P_Temp_Run_Mode	pshm->P[27040]
#define	P_Data_Idx	pshm->P[27041]
#define	P_Get_Data_Idx	pshm->P[27042]
#define	P_HOLD_Data_Err_Queue	pshm->P[27043]
#define	P_HOLD_Data_Err_State_Machine	pshm->P[27044]
#define	P_HOLD_Err_Set_Data	pshm->P[27045]
#define	P_HOLD_Err_Save	pshm->P[27046]
#define	P_Sepa_Run_Completed_Flag	pshm->P[27047]
#define	P_Buffer_Seqdata_MSA_Array(i)	pshm->P[(27048+i)%MAX_P]
#define	P_Buffer_Seqdata_Align_Take_Off_Array(i)	pshm->P[(27098+i)%MAX_P]
#define	P_VISION_MSA_Align_Module_Complete_Bit(i)	pshm->P[(27148+i)%MAX_P]
#define	P_Module_Manual_MSA_Act_Command_Array(i)	pshm->P[(27248+i)%MAX_P]
#define	P_OLD_Module_Manual_MSA_Act_Command_Array(i)	pshm->P[(27348+i)%MAX_P]
#define	P_Module_MSA_Act_State_Machine_Array(i)	pshm->P[(27448+i)%MAX_P]
#define	P_VISION_MSA_Seq_Stopping_Point(i)	pshm->P[(27548+i)%MAX_P]
#define	P_Align_Take_Off_Module_Complete_Bit(i)	pshm->P[(27581+i)%MAX_P]
#define	P_Module_Manual_Align_Take_Off_Act_Command_Array(i)	pshm->P[(27681+i)%MAX_P]
#define	P_OLD_Module_Manual_Align_Take_Off_Act_Command_Array(i)	pshm->P[(27781+i)%MAX_P]
#define	P_Module_Align_Take_Off_Act_State_Machine_Array(i)	pshm->P[(27881+i)%MAX_P]
#define	P_Log_Data_Y	pshm->P[27981]
#define	P_Log_Data_M	pshm->P[27982]
#define	P_Log_Data_D	pshm->P[27983]
#define	P_Log_Data_H	pshm->P[27984]
#define	P_Log_Data_m	pshm->P[27985]
#define	P_Log_Data_s	pshm->P[27986]
#define	P_MNTR_End_Index	pshm->P[27987]
#define	P_BG_CPLC_Running_MNTR	pshm->P[50]
#define	P_RTI_CPLC_Running_MNTR	pshm->P[51]
#define	P_Log_Start_Flag	pshm->P[170]
#define	P_Log_Document_Remove_Flag	pshm->P[171]
#define	P_Sepa_ID_Change_Flag	pshm->P[172]
#define	P_USB_Register	pshm->P[173]
#define	P_Cur_Line_Check	pshm->P[175]
#define	P_Cur_Line_Check_Init	pshm->P[176]
#define	P_Buffer_Judge_Trg(i)	pshm->P[(27988+i)%MAX_P]
#define	P_Hold_Pass	pshm->P[27998]
#define	P_PLC01_Queue_MNTR(i)	pshm->P[(27999+i)%MAX_P]
#define	P_PLC01_Total_Step_Flag	pshm->P[28014]
#define	P_PLC02_Total_Step_Flag	pshm->P[28015]
#define	P_PLC014_Total_Step_Flag	pshm->P[28016]
#define	P_PLC02_Total_Step_Flag2	pshm->P[28017]
#define	P_Vac_Pass	pshm->P[28018]
#define	P_Vision_Pass_Exisitence	pshm->P[28019]
#define	P_Vision_Pass_Empty	pshm->P[28020]
#define	P_Vision_Pass_FirstSepa	pshm->P[28021]
#define	P_Vision_Pass_Stack_Inspection	pshm->P[28022]
#define	P_ULD_Home_Pass	pshm->P[28023]
#define	P_Clamp_Cell_Down_Use	pshm->P[28024]
#define	P_FR_Clamp_Use_Test	pshm->P[28025]
#define	P_Door_Interlock_Use_Flag	pshm->P[28026]
#define	P_Vacuum_Door_Clear_Use	pshm->P[28027]
#define	P_Align_Test_Pos	pshm->P[28028]
#define	P_PLC01_Exe_Is_Ena_Step_Flag(i)	pshm->P[(28029+i)%MAX_P]
#define	P_PLC01_Exe_Fist_Sepa_Step_Flag(i)	pshm->P[(28039+i)%MAX_P]
#define	P_PLC01_Exe_Prod_Step_Flag(i)	pshm->P[(28049+i)%MAX_P]
#define	P_PLC01_HOLD_Insp_Step_Flag(i)	pshm->P[(28054+i)%MAX_P]
#define	P_PLC01_HOLD_Main_Step_Flag(i)	pshm->P[(28064+i)%MAX_P]
#define	P_PLC01_Sus_Discharge_Step_Flag(i)	pshm->P[(28079+i)%MAX_P]
#define	P_PLC01_Sus_ARC_Step_Flag(i)	pshm->P[(28089+i)%MAX_P]
#define	P_PLC01_STOP_Init_Step_Flag(i)	pshm->P[(28099+i)%MAX_P]
#define	P_PLC01_STOP_Cycle_ST_Step_Flag(i)	pshm->P[(28109+i)%MAX_P]
#define	P_PLC02_Exe_Module_First_Sepa_Step_Flag	pshm->P[28124]
#define	P_PLC02_Sus_Module_Discharge_Step_Flag	pshm->P[28125]
#define	P_PLC02_Sus_Module_ARC_Step_Flag	pshm->P[28126]
#define	P_PLC02_Sus_Module_1TR_Supply_Step_Flag	pshm->P[28127]
#define	P_PLC02_HOLD_Module_Insp_Step_Flag	pshm->P[28128]
#define	P_PLC02_HOLD_Module_Remove_NGPNP_Step_Flag	pshm->P[28129]
#define	P_PLC02_HOLD_Module_Remove_Align_Step_Flag	pshm->P[28130]
#define	P_PLC02_HOLD_Module_Remove_2TR_Step_Flag	pshm->P[28131]
#define	P_PLC02_HOLD_Module_Supply_1TR_Step_Flag	pshm->P[28132]
#define	P_PLC02_HOLD_Module_Supply_Align_Step_Flag	pshm->P[28133]
#define	P_PLC02_HOLD_Module_Supply_2TR_Step_Flag	pshm->P[28134]
#define	P_PLC02_HOLD_Module_SemiRun_Pos_Step_Flag	pshm->P[28135]
#define	P_PLC14_STOP_Module_Cycle_Stop_Step_Flag	pshm->P[28136]
#define	P_PLC02_Discharge_MNTR	pshm->P[28137]
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
#define	P_Anode_Vision_MNTR	pshm->P[28138]
#define	P_Cathode_Vision_MNTR	pshm->P[28139]
#define	P_Vision_MNTR(i)	pshm->P[(28140+i)%MAX_P]
#define	P_Error_Index_Number	pshm->P[28145]
#define	P_ECAT_MNTR_Bit	pshm->P[28146]
#define	P_Local_MNTR_Bit	pshm->P[28147]
#define	P_Clamp_Motion_VER1	pshm->P[28148]
#define	P_CA_DR_Ta	pshm->P[28149]
#define	P_CA_DR_Ts	pshm->P[28150]
#define	P_CA_DR_Tm	pshm->P[28151]
#define	P_CA_DR_Td	pshm->P[28152]
#define	P_CA_DR_Tsd	pshm->P[28153]
#define	P_AN_DR_Ta	pshm->P[28154]
#define	P_AN_DR_Ts	pshm->P[28155]
#define	P_AN_DR_Tm	pshm->P[28156]
#define	P_AN_DR_Td	pshm->P[28157]
#define	P_AN_DR_Tsd	pshm->P[28158]
#define	P_First_Sepa_1st_Driving_Move	pshm->P[28159]
#define	P_AN_Cam_Total_Time	pshm->P[28160]
#define	P_CA_Cam_Total_Time	pshm->P[28161]
#define	P_Dry_Run_BTN	pshm->P[28162]
#define	P_Home_Angle_Offset_change_Bit	pshm->P[28163]
#define	P_InterLock_Motor_Num	pshm->P[28164]
#define	P_Recipe_Move_IL_Loop	pshm->P[28165]
#define	P_Z_Var	pshm->P[28166]
#define	P_No1_Recipe_Pos_IL(i)	pshm->P[(28167+i)%MAX_P]
#define	P_No2_Recipe_Pos_IL(i)	pshm->P[(28220+i)%MAX_P]
#define	P_No3_Recipe_Pos_IL(i)	pshm->P[(28273+i)%MAX_P]
#define	P_No4_Recipe_Pos_IL(i)	pshm->P[(28326+i)%MAX_P]
#define	P_No5_Recipe_Pos_IL(i)	pshm->P[(28379+i)%MAX_P]
#define	P_No6_Recipe_Pos_IL(i)	pshm->P[(28432+i)%MAX_P]
#define	P_No7_Recipe_Pos_IL(i)	pshm->P[(28485+i)%MAX_P]
#define	P_No8_Recipe_Pos_IL(i)	pshm->P[(28538+i)%MAX_P]
#define	P_No9_Recipe_Pos_IL(i)	pshm->P[(28591+i)%MAX_P]
#define	P_No10_Recipe_Pos_IL(i)	pshm->P[(28644+i)%MAX_P]
#define	P_Recipe_POS_Interock_M(i)	pshm->P[(28697+i)%MAX_P]
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
,P_Slave7_Move_X_Clamp_On_1st=8744
,P_Slave7_Move_X_Clamp_On_2nd=8745
,P_Slave7_Move_X_Clamp_On_3rd=8746
,P_Slave7_Move_X_Clamp_On_4th=8747
,P_Slave7_Move_X_Clamp_Off_1st=8748
,P_Slave7_Move_X_Clamp_Off_2nd=8749
,P_Slave7_Move_X_Clamp_Off_3rd=8750
,P_Slave7_Move_Z_Clamp_On_1st=8751
,P_Slave7_Move_Z_Clamp_On_2nd=8752
,P_Slave7_Move_Z_Clamp_On_3rd=8753
,P_Slave7_Move_Z_Clamp_On_4th=8754
,P_Slave7_Move_Z_Clamp_Off_1st=8755
,P_Slave7_Move_Z_Clamp_Off_2nd=8756
,P_Slave7_Move_Z_Clamp_Off_3rd=8757
,P_Slave7_Move_Z_Down=8758
,P_Slave8_Move_X_Align_To_Stack_1st=8759
,P_Slave8_Move_X_Align_To_Stack_2nd=8760
,P_Slave8_Move_X_Stack_To_Align_1st=8761
,P_Slave8_Move_X_Stack_To_Align_2nd=8762
,P_Slave8_Move_X_Stack_To_Align_3rd=8763
,P_Slave8_Move_Z_Align_To_Stack_1st=8764
,P_Slave8_Move_Z_Align_To_Stack_2nd=8765
,P_Slave8_Move_Z_Stack_To_Align_1st=8766
,P_Slave8_Move_Z_Stack_To_Align_2nd=8767
,P_Slave8_Move_Z_Stack_To_Align_3rd=8768
,P_Slave8_Move_Z_Align_Up=8769
,P_Slave8_Move_Z_Align_Down=8770
,P_Slave8_Move_Z_Stack_Up=8771
,P_Slave8_Move_Z_Stack_Down=8772
,P_Slave10_Move_X_Belt_Align=8773
,P_Slave10_Move_X_Align_Belt=8774
,P_Slave10_Move_X_Belt_NG=8775
,P_Slave10_Move_X_NG_Belt=8776
,P_Slave10_Move_X_Align_NG=8777
,P_Slave10_Move_Z_Belt_Down=8778
,P_Slave10_Move_Z_Belt_Up=8779
,P_Slave10_Move_X_NG_Align=8780
,P_Slave10_Move_Z_Align_Down=8781
,P_Slave10_Move_Z_Align_Up=8782
,P_Slave10_Move_Z_NG_Down=8783
,P_Slave10_Move_Z_NG_Up=8784
,P_Slave1_Offset_X_Align=8785
,P_Slave1_Offset_X_Belt=8786
,P_Slave1_Offset_X_NG=8787
,P_Slave1_Offset_Z_Belt=8788
,P_Slave1_Offset_Z_Align=8789
,P_Slave1_Offset_Z_NG=8790
,P_Slave1_Offset_Z_Up=8791
,P_Slave3_Offset_X_Stack=8792
,P_Slave3_Offset_X_Align=8793
,P_Slave3_Offset_Z_Stack=8794
,P_Slave3_Offset_Z_Align=8795
,P_Slave3_Offset_Z_Align_Up=8796
,P_Slave3_Offset_Z_Align_Down=8797
,P_Slave3_Offset_Z_Stack_Up=8798
,P_Slave3_Offset_Z_Stack_Down=8799
,P_Slave3_Offset_Z_Wait_Pos=8800
,P_Slave4_Offset_X_Clamp_On=8801
,P_Slave4_Offset_X_Clamp_Off=8802
,P_Slave4_Offset_Z_Clamp_On=8803
,P_Slave4_Offset_Z_Clamp_Off=8804
,P_Slave5_Offset_X_Anode_Move_1st=8805
,P_Slave5_Offset_X_Anode_Move_2nd=8806
,P_Slave5_Offset_X_Cathode_Move_1st=8807
,P_Slave5_Offset_X_Cathode_Move_2nd=8808
,P_Slave5_Offset_X_Sepa_1st=8809
,P_Slave5_Offset_X_Sepa_2nd=8810
,P_Slave5_Offset_X_Sepa_3rd=8811
,P_Slave5_Offset_X_Sepa_4th=8812
,P_Slave5_Offset_X_Sepa_5th=8813
,P_Slave5_Offset_Z_Sepa_1st=8814
,P_Slave5_Offset_Z_Sepa_2nd=8815
,P_Slave5_Offset_Z_Sepa_3rd=8816
,P_Slave5_Offset_Z_Sepa_4th=8817
,P_Slave5_Offset_Z_Sepa_5th=8818
,P_Slave6_Offset_X_For_Sepa_Mode=8819
,P_Slave6_Offset_Z_Wait_Pos=8820
,P_Slave7_Offset_X_Clamp_On=8821
,P_Slave7_Offset_X_Clamp_Off=8822
,P_Slave7_Offset_Z_Clamp_On=8823
,P_Slave7_Offset_Z_Clamp_Off=8824
,P_Slave8_Offset_X_Stack=8825
,P_Slave8_Offset_X_Align=8826
,P_Slave8_Offset_Z_Stack=8827
,P_Slave8_Offset_Z_Align=8828
,P_Slave8_Offset_Z_Align_Up=8829
,P_Slave8_Offset_Z_Align_Down=8830
,P_Slave8_Offset_Z_Stack_Up=8831
,P_Slave8_Offset_Z_Stack_Down=8832
,P_Slave8_Offset_Z_Wait_Pos=8833
,P_Slave10_Offset_X_Align=8834
,P_Slave10_Offset_X_Belt=8835
,P_Slave10_Offset_X_NG=8836
,P_Slave10_Offset_Z_Belt=8837
,P_Slave10_Offset_Z_Align=8838
,P_Slave10_Offset_Z_NG=8839
,P_Slave10_Offset_Z_Up=8840
,P_Slave1_Target_Z_CV_Blower_On_Pos=8841
,P_Slave1_Target_Z_CV_Blower_Off_Pos=8842
,P_Slave10_Target_Z_CV_Blower_On_Pos=8843
,P_Slave10_Target_Z_CV_Blower_Off_Pos=8844
,P_Anode_CV_Blower_On_Flag=8845
,P_Anode_CV_Blower_Off_Flag=8846
,P_Cathode_CV_Blower_On_Flag=8847
,P_Cathode_CV_Blower_Off_Flag=8848
,P_Select_RingBlow_Off_Use=8849
,P_2nd_PNP_Stack_Down_Pos=8850
,P_2nd_PNP_Stack_Up_Pos=8851
,P_Anode_Clamp_Down_MNTR=8852
,P_Cathode_Clamp_Down_MNTR=8853
,P_Clamp_1st_Vector_Y=8854
,P_Clamp_1st_Vector_Z=8855
,P_Clamp_1st_Vector_Vel=8856
,P_Clamp_2nd_Vector_Y=8857
,P_Clamp_2nd_Vector_Z=8858
,P_Clamp_2nd_Vector_Vel=8859
,P_Clamp_2nd_TM_Time=8860
,P_FR_Ta=8861
,P_FR_Ts=8862
,P_FR_Tm=8863
,P_Master_Motion_Heartbit_Flag=8864
,P_Master_Heartbit_Trigger=8865
,P_Parity_Heartbit_Bit=8866
,P_Master_Heartbit_Move=8867
,P_Force_Stop_Flag=8868
,P_Execute_DryRun_Stop_Timer=8869
,P_DryRun_Timer=8870
,P_Dryrun_Operating_Time=8871
,P_Anode_Align_Vac_Err_On=8872
,P_Cathode_Align_Vac_Err_On=8873
,P_Anode_1ST_TR_Vac_Err_On=8874
,P_Anode_2ND_TR_Vac_Err_On=8875
,P_Cathode_1ST_TR_Vac_Err_On=8876
,P_Cathode_2ND_TR_Vac_Err_On=8877
,P_MNTR_PLC0_Task_Max_Time=8880
,P_MNTR_PLC1_Task_Max_Time=8883
,P_MNTR_PLC2_Task_Max_Time=8886
,P_MNTR_PLC3_Task_Max_Time=8889
,P_MNTR_PLC4_Task_Max_Time=8892
,P_MNTR_PLC5_Task_Max_Time=8895
,P_MNTR_PLC6_Task_Max_Time=8898
,P_MNTR_PLC7_Task_Max_Time=8901
,P_MNTR_PLC8_Task_Max_Time=8904
,P_MNTR_PLC9_Task_Max_Time=8907
,P_MNTR_PLC10_Task_Max_Time=8910
,P_MNTR_PLC11_Task_Max_Time=8913
,P_MNTR_PLC12_Task_Max_Time=8916
,P_MNTR_PLC13_Task_Max_Time=8919
,P_MNTR_PLC14_Task_Max_Time=8922
,P_MNTR_PLC15_Task_Max_Time=8925
,P_MNTR_PLC16_Task_Max_Time=8928
,P_MNTR_PLC17_Task_Max_Time=8931
,P_MNTR_PLC18_Task_Max_Time=8934
,P_MNTR_PLC19_Task_Max_Time=8937
,P_MNTR_PLC20_Task_Max_Time=8940
,P_MNTR_PLC21_Task_Max_Time=8943
,P_MNTR_PLC22_Task_Max_Time=8946
,P_MNTR_PLC23_Task_Max_Time=8949
,P_MNTR_PLC24_Task_Max_Time=8952
,P_MNTR_PLC25_Task_Max_Time=8955
,P_MNTR_PLC26_Task_Max_Time=8958
,P_MNTR_PLC27_Task_Max_Time=8961
,P_MNTR_PLC28_Task_Max_Time=8964
,P_MNTR_PLC29_Task_Max_Time=8967
,P_MNTR_PLC30_Task_Max_Time=8970
,P_Coord_Shutdown_Status_log=8971
,P_In_Pos_Trg=8972
,P_Position_Calc_Status=8973
,P_PNP_Pos=8988
,P_Execute_Manage_Mode=8989
,P_Align_NG_Tack_Flag=8990
,P_2th_Ng_Front_Vision_Pos=8991
,P_Anode_Align_OK_Flag=8992
,P_Anode_Align_NG_Flag=8993
,P_Cathode_Align_OK_Flag=8994
,P_Cathode_Align_NG_Flag=8995
,P_Stack_Table_OK_Flag=8996
,P_Anode_Retry_OK_Flag=8997
,P_Anode_Retry_NG_Flag=8998
,P_Cathode_Retry_OK_Flag=8999
,P_Cathode_Retry_NG_Flag=9000
,P_Func_Anode_2TR_Avoid_X_Value=9001
,P_Func_Cathode_2TR_Avoid_X_Value=9002
,P_Anode_Surf_Insp_Trigger=9003
,P_Cathode_Surf_Insp_Trigger=9004
,P_CMD_Cathode_Vision_Tigger=9005
,P_CMD_Anode_Vision_Tigger=9006
,P_CMD_Stack_Table_Vision_Trigger=9007
,P_CMD_Cathode_Empty_Table_Vision=9008
,P_CMD_Anode_Empty_Table_Vision=9009
,P_CMD_Cathode_Existence_Vision=9010
,P_CMD_Anode_Existence_Vision=9011
,P_Align_Manager_Error_Cnt=9012
,P_Surf_Manager_Error_Cnt=9013
,P_Retry_Manager_Error_Cnt=9014
,P_Stack_Manager_Error_Cnt=9015
,P_Existence_Manager_Error_Cnt=9016
,P_Where_To_Occur_Error_Retry_Status=9017
,P_Which_Retry_Insp_Type=9018
,P_Where_To_Occur_Error_Align_Status=9019
,P_Which_Align_Insp_Type=9020
,P_Where_To_Occur_Error_Surf_Status=9021
,P_Which_Surf_Insp_Type=9022
,P_Where_To_Occur_Error_Existence_Status=9023
,P_Which_Existence_Insp_Type=9024
,P_Where_To_Occur_Error_Stack_Status=9025
,P_Vision_Clamping_Flag=9026
,P_Exist_Insp_Total_Time=9027
,P_Exist_Insp_Trg_Time=9028
,P_Stack_Insp_Total_Time=9029
,P_Stack_Trg_Time=9030
,P_Surf_Insp_Total_Time=9031
,P_Retry_Insp_Total_Time=9032
,P_Surf_TimeOut_Cnt=9033
,P_Align_TimeOut_Cnt=9034
,P_Retry_TimeOut_Cnt=9035
,P_Stack_TimeOut_Cnt=9036
,P_Align_Insp_Total_Time=9037
,P_Align_Trg_Time=9038
,P_Aligning_Time=9039
,P_Cathode_Empty_Table_Vision_Flag=9040
,P_Anode_Empty_Table_Vision_Flag=9041
,P_Selected_Surf_Insp_Type=9042
,P_Selected_Align_Insp_Type=9043
,P_Selected_Retry_Insp_Type=9044
,P_Selected_Exist_Insp_Type=9045
,P_VISION_RECIPE_PLC4_Surface_TrgOff=9046
,P_VISION_RECIPE_PLC4_Surface_Ins_Time=9047
,P_CMD_Cathode_Vision_Retry=9048
,P_CMD_Anode_Vision_Retry=9049
,P_Prev_Align_Manager_Status=9050
,P_Prev_Surf_Manager_Status=9051
,P_Prev_Exist_Manager_Status=9052
,P_Prev_Selected_Align_Type=9053
,P_Prev_Selected_Surf_Type=9054
,P_Prev_Selected_Exist_Type=9055
,P_Status_Align_Vision_Manager=9056
,P_Status_Surface_Vision_Manager=9057
,P_Status_Sheet_Existence_Vision_Manager=9058
,P_Status_Stack_Vision_Manager=9059
,P_Status_Retry_Vision_Manager=9060
,P_Vision_All_Status_Manager_Init_Flag=9061
,P_Cycle_Stop_Command=9062
,P_Surface_Inspection_Complete_Error=9063
,P_Switching_From_Cathode_To_Anode_Flag=9064
,P_Switching_From_Anode_To_Cathode_Flag=9065
,P_Switching_Mode_Complete_Flag=9066
,P_Surf_Cathode_Error_Count=9067
,P_Surf_Anode_Error_Count=9068
,P_First_Anode_Sheet_Supply_Flag=9069
,P_First_Cathode_Sheet_Supply_Flag=9070
,P_Set_Cathode_Align_Pos_Zero=9071
,P_Set_Anode_Align_Pos_Zero=9072
,P_Cathode_Cur_Mode=9073
,P_Anode_Cur_Mode=9074
,P_AN_to_CA_DR_Trig=9075
,P_CA_to_AN_DR_Trig=9076
,P_Sepa_CompDac_Value=9079
,P_FR_Move_Command=9080
,P_FF_Enable=9081
,P_Anode_Run_FR_Move_Check_AI=9082
,P_Cathode_Run_FR_Move_Check_AI=9083
,P_FR_Move_Check_AI_OffSet=9084
,P_Aver_FR_AI_Value=9090
,P_Process_Function_Command=9091
,P_HOLD_Existence_Insp_State_Machine=9092
,P_Execute_IsEnable_State_Machine=9093
,P_EXECUTE_FUNC_Ready_STEP=9094
,P_Execute_First_Sepa_Ontable_State_Machine=9095
,P_Execute_Prod_Manage_State_Machine=9096
,P_Execute_Enqueue_State_Machine=9097
,P_STOP_Initial_Process_STEP=9098
,P_STOP_Cylce_Stop_STEP=9099
,P_Stop_CycleStop_Position=9100
,P_Upcount_NextStep=9101
,P_SUSPEND_FUNC_JR_Discharge_STEP=9102
,P_SUSPEND_FUNC_ARC_STEP=9103
,P_Suspend_ARC_Complete_Flag=9104
,P_EXECUTE_FUNC_Debug_On_Sepa_STEP=9105
,P_QueueCommand_Occurs=9106
,P_EXECUTE_STEP=9107
,P_SUSPEND_STEP=9108
,P_HOLD_STEP=9109
,P_STOP_STEP=9110
,P_EXECUTE_Error_STEP=9111
,P_SUSPEND_Error_STEP=9112
,P_HOLD_Error_STEP=9113
,P_STOP_Error_STEP=9114
,P_Queue_Enqueue_Command=9115
,P_Queue_Enqueue_return=9116
,P_Queue_Dequeue_Command=9117
,P_Queue_Dequeue_return=9118
,P_Queue_Peek_Command=9119
,P_Dummy_Dequeue=9140
,P_Queue_Command_Status=9141
,P_Queue_Process_Command=9142
,P_Queue_Process_Status=9143
,P_Coord_Test=9144
,P_Coord_Test3=9145
,P_Coord_Test2=9146
,P_Coord_Motion_Prog_Down_Entering_Bit=9147
,P_PMAC_Coord_Status_Bit=9148
,P_Coord_Down_Check_Bit=9149
,P_PMAC_Coord_Down_Inspection_Flag=9150
,P_PMAC_Coord_Down_Num=9151
,P_PMAC_Coord_Error_Status=9152
,P_PLC01_Process_Function_Enter_Flag=9373
,P_PLC01_SubMotion_Active=9374
,P_PLC01_SlaveMotion_Active=9375
,P_EXECUTE_Isenable_MNTR=9376
,P_EXECUTE_IsEnable_Firt_Stacking_Flag=9377
,P_PLC01_Execute_Retry_Sepa_Mode_Count=9378
,P_SUSPEND_MNTR=9379
,P_SUSPEND_MNTR_2=9380
,P_Execute_Last_Run_Flag=9381
,P_Suspend_ARC_Request_Flag=9382
,P_Hold_Queue_Exist_Insp_MNTR=9383
,P_CirQueue_Status_Value=9384
,P_Debug_CirQueue_Status=9385
,P_Front_Index=9386
,P_Rear_Index=9387
,P_Index_Max=9388
,P_CirQueue_Length=9400
,P_Queue_Full=9401
,P_Queue_Empty=9402
,P_Queue_PeekEmpty=9403
,P_Self_items=9404
,P_Hold_Pause_Need_Flag=9405
,P_Pause_Ready_Flag=9406
,P_Pause_Running_Flag=9407
,P_Resume_Ready_Flag=9408
,P_Resume_Start_Flag=9409
,P_Hold_Resume_Need_Flag=9410
,P_Stack_Heart_Bit_Timer=9411
,P_Stack_Heart_Bit_Calc=9412
,P_Stack_Heart_Bit_Sync_State_Machine=9413
,P_Pause_Anode_MNTR_Min_Trigger=9414
,P_Pause_Anode_MNTR_Max_Trigger=9415
,P_Pause_Cathode_MNTR_Min_Trigger=9416
,P_Pause_Cathode_MNTR_Max_Trigger=9417
,P_Pause_Protect_Variable=9418
,P_Resume_Protect_Variable=9419
,P_Sepa_Mode_Opposite_Resume_Free=9420
,P_Sepa_To_Normal_Mode_Sync_Flag=9421
,P_Sepa_To_Normal_Mode_Sync_Err_Avoid=9422
,P_X_Axis_Num=9723
,P_Y_Axis_Num=9724
,P_Z_Axis_Num=9725
,P_ZZ_Axis_Num=9726
,P_X_Unit=9727
,P_Y_Unit=9728
,P_Z_Unit=9729
,P_ZZ_Unit=9730
,P_Pos_Memory_Bit_Save=9731
,P_Total_Unit_Bit=9732
,P_Total_Unit_Pos=9733
,P_Anode_1st_Unit_Status=9734
,P_Anode_2nd_Unit_Status=9735
,P_Anode_CLP_Unit_Status=9736
,P_FinalRoll_Unit_Status=9737
,P_StackTable_Unit_Status=9738
,P_Cathode_CLP_Unit_Status=9739
,P_Cathode_2nd_Unit_Status=9740
,P_Cathode_1st_Unit_Status=9741
,P_1st_Unloader_Unit_Status=9742
,P_Cathode_NG_PNP_Status=9743
,P_Anode_NG_PNP_Status=9744
,P_Unit_integrated_Status=9745
,P_Unit_Status_Update_Flag=9746
,P_Memory_Tower_Search_Flag=9747
,P_MemTow_integrated_return=9748
,P_Error_STMS_Memory_Tower_Status=9749
,P_STMS_Memory_Tower_Status=9750
,P_Memory_Tower_X_Err_Flag=10301
,P_Memory_Tower_Y_Err_Flag=10302
,P_Memory_Tower_Z_Err_Flag=10303
,P_Memory_Tower_ZZ_Err_Flag=10304
,P_CA_Clamp_Cell_Down_Pos=10305
,P_AN_Clamp_Cell_Down_Pos=10306
,P_PNP_Abort_Use_Bit=10403
,P_PNP_Abort_Use_Total_Bit=10404
,P_C_1st_PNP_FWD_Abort_Use_Bit=10405
,P_C_1st_PNP_BWD_Abort_Use_Bit=10406
,P_C_2nd_PNP_FWD_Abort_Use_Bit=10407
,P_C_2nd_PNP_BWD_Abort_Use_Bit=10408
,P_A_1st_PNP_FWD_Abort_Use_Bit=10409
,P_A_1st_PNP_BWD_Abort_Use_Bit=10410
,P_A_2nd_PNP_FWD_Abort_Use_Bit=10411
,P_A_2nd_PNP_BWD_Abort_Use_Bit=10412
,P_Single_Motor_Control_Bit=10413
,P_C_1st_PNP_FWD_Abort_Calc_Bit=10414
,P_C_1st_PNP_BWD_Abort_Calc_Bit=10415
,P_C_2nd_PNP_FWD_Abort_Calc_Bit=10416
,P_C_2nd_PNP_BWD_Abort_Calc_Bit=10417
,P_A_1st_PNP_FWD_Abort_Calc_Bit=10418
,P_A_1st_PNP_BWD_Abort_Calc_Bit=10419
,P_A_2nd_PNP_FWD_Abort_Calc_Bit=10420
,P_A_2nd_PNP_BWD_Abort_Calc_Bit=10421
,P_C_1st_PNP_FWD_Cur_Pos=10422
,P_C_1st_PNP_FWD_Cur_Vel=10423
,P_C_1st_PNP_BWD_Cur_Pos=10424
,P_C_1st_PNP_BWD_Cur_Vel=10425
,P_C_2nd_PNP_FWD_Cur_Pos=10426
,P_C_2nd_PNP_FWD_Cur_Vel=10427
,P_C_2nd_PNP_BWD_Cur_Pos=10428
,P_C_2nd_PNP_BWD_Cur_Vel=10429
,P_A_1st_PNP_FWD_Cur_Pos=10430
,P_A_1st_PNP_FWD_Cur_Vel=10431
,P_A_1st_PNP_BWD_Cur_Pos=10432
,P_A_1st_PNP_BWD_Cur_Vel=10433
,P_A_2nd_PNP_FWD_Cur_Pos=10434
,P_A_2nd_PNP_FWD_Cur_Vel=10435
,P_A_2nd_PNP_BWD_Cur_Pos=10436
,P_A_2nd_PNP_BWD_Cur_Vel=10437
,P_C_1st_PNP_FWD_Limit_Pos=10438
,P_C_1st_PNP_BWD_Limit_Pos=10439
,P_C_2nd_PNP_FWD_Limit_Pos=10440
,P_C_2nd_PNP_BWD_Limit_Pos=10441
,P_A_1st_PNP_FWD_Limit_Pos=10442
,P_A_1st_PNP_BWD_Limit_Pos=10443
,P_A_2nd_PNP_FWD_Limit_Pos=10444
,P_A_2nd_PNP_BWD_Limit_Pos=10445
,P_C_1st_PNP_FWD_Max_Limit_Pos=10446
,P_C_1st_PNP_BWD_Max_Limit_Pos=10447
,P_C_2nd_PNP_FWD_Max_Limit_Pos=10448
,P_C_2nd_PNP_BWD_Max_Limit_Pos=10449
,P_A_1st_PNP_FWD_Max_Limit_Pos=10450
,P_A_1st_PNP_BWD_Max_Limit_Pos=10451
,P_A_2nd_PNP_FWD_Max_Limit_Pos=10452
,P_A_2nd_PNP_BWD_Max_Limit_Pos=10453
,P_C_1st_PNP_FWD_Remain_Stroke=10454
,P_C_1st_PNP_BWD_Remain_Stroke=10455
,P_C_2nd_PNP_FWD_Remain_Stroke=10456
,P_C_2nd_PNP_BWD_Remain_Stroke=10457
,P_A_1st_PNP_FWD_Remain_Stroke=10458
,P_A_1st_PNP_BWD_Remain_Stroke=10459
,P_A_2nd_PNP_FWD_Remain_Stroke=10460
,P_A_2nd_PNP_BWD_Remain_Stroke=10461
,P_C_1st_PNP_FWD_Stroke_Time=10462
,P_C_1st_PNP_BWD_Stroke_Time=10463
,P_C_2nd_PNP_FWD_Stroke_Time=10464
,P_C_2nd_PNP_BWD_Stroke_Time=10465
,P_A_1st_PNP_FWD_Stroke_Time=10466
,P_A_1st_PNP_BWD_Stroke_Time=10467
,P_A_2nd_PNP_FWD_Stroke_Time=10468
,P_A_2nd_PNP_BWD_Stroke_Time=10469
,P_C_1st_PNP_FWD_Max_Speed=10470
,P_C_1st_PNP_BWD_Max_Speed=10471
,P_C_2nd_PNP_FWD_Max_Speed=10472
,P_C_2nd_PNP_BWD_Max_Speed=10473
,P_A_1st_PNP_FWD_Max_Speed=10474
,P_A_1st_PNP_BWD_Max_Speed=10475
,P_A_2nd_PNP_FWD_Max_Speed=10476
,P_A_2nd_PNP_BWD_Max_Speed=10477
,P_C_1st_PNP_FWD_ACC_Dis=10478
,P_C_1st_PNP_BWD_ACC_Dis=10479
,P_C_2nd_PNP_FWD_ACC_Dis=10480
,P_C_2nd_PNP_BWD_ACC_Dis=10481
,P_A_1st_PNP_FWD_ACC_Dis=10482
,P_A_1st_PNP_BWD_ACC_Dis=10483
,P_A_2nd_PNP_FWD_ACC_Dis=10484
,P_A_2nd_PNP_BWD_ACC_Dis=10485
,P_C_1st_PNP_FWD_AbortTa=10486
,P_C_1st_PNP_FWD_AbortTs=10487
,P_C_1st_PNP_BWD_AbortTa=10488
,P_C_1st_PNP_BWD_AbortTs=10489
,P_C_2nd_PNP_FWD_AbortTa=10490
,P_C_2nd_PNP_FWD_AbortTs=10491
,P_C_2nd_PNP_BWD_AbortTa=10492
,P_C_2nd_PNP_BWD_AbortTs=10493
,P_A_1st_PNP_FWD_AbortTa=10494
,P_A_1st_PNP_FWD_AbortTs=10495
,P_A_1st_PNP_BWD_AbortTa=10496
,P_A_1st_PNP_BWD_AbortTs=10497
,P_A_2nd_PNP_FWD_AbortTa=10498
,P_A_2nd_PNP_FWD_AbortTs=10499
,P_A_2nd_PNP_BWD_AbortTa=10500
,P_A_2nd_PNP_BWD_AbortTs=10501
,P_C_1st_PNP_FWD_Abort_Dec_Offset=10502
,P_C_1st_PNP_BWD_Abort_Dec_Offset=10503
,P_C_2nd_PNP_FWD_Abort_Dec_Offset=10504
,P_C_2nd_PNP_BWD_Abort_Dec_Offset=10505
,P_A_1st_PNP_FWD_Abort_Dec_Offset=10506
,P_A_1st_PNP_BWD_Abort_Dec_Offset=10507
,P_A_2nd_PNP_FWD_Abort_Dec_Offset=10508
,P_A_2nd_PNP_BWD_Abort_Dec_Offset=10509
,P_Abort_Init_Value=10870
,P_C_1st_PNP_FWD_AbortTa_Buffer=10871
,P_C_1st_PNP_FWD_AbortTs_Buffer=10872
,P_C_1st_PNP_BWD_AbortTa_Buffer=10873
,P_C_1st_PNP_BWD_AbortTs_Buffer=10874
,P_C_2nd_PNP_FWD_AbortTa_Buffer=10875
,P_C_2nd_PNP_FWD_AbortTs_Buffer=10876
,P_C_2nd_PNP_BWD_AbortTa_Buffer=10877
,P_C_2nd_PNP_BWD_AbortTs_Buffer=10878
,P_A_1st_PNP_FWD_AbortTa_Buffer=10879
,P_A_1st_PNP_FWD_AbortTs_Buffer=10880
,P_A_1st_PNP_BWD_AbortTa_Buffer=10881
,P_A_1st_PNP_BWD_AbortTs_Buffer=10882
,P_A_2nd_PNP_FWD_AbortTa_Buffer=10883
,P_A_2nd_PNP_FWD_AbortTs_Buffer=10884
,P_A_2nd_PNP_BWD_AbortTa_Buffer=10885
,P_A_2nd_PNP_BWD_AbortTs_Buffer=10886
,P_C_1st_PNP_FWD_Restore_Bit=10887
,P_C_1st_PNP_BWD_Restore_Bit=10888
,P_C_2nd_PNP_FWD_Restore_Bit=10889
,P_C_2nd_PNP_BWD_Restore_Bit=10890
,P_A_1st_PNP_FWD_Restore_Bit=10891
,P_A_1st_PNP_BWD_Restore_Bit=10892
,P_A_2nd_PNP_FWD_Restore_Bit=10893
,P_A_2nd_PNP_BWD_Restore_Bit=10894
,P_Align_Inspection_Time=10895
,P_Front_Inspection_Time=10896
,P_Stack_Inspection_Time=10897
,P_Existence_Inspection_Time=10898
,P_EmptyTable_Inspection_Time=10899
,P_FirstSepa_Inspection_Time=10900
,P_Vision_Anode_Sepa_Mode_Stack_Command=10901
,P_Vision_Cathode_Sepa_Mode_Stack_Command=10902
,P_Cathode_Sepa_Mode_Timer=10903
,P_Anode_Sepa_Mode_Timer=10904
,P_Vision_Pass=10905
,P_FirstSepa_Ret=10906
,P_Vision_Align_Command=10907
,P_Vision_Surface_Command=10908
,P_Vision_Stack_Command=10909
,P_Vision_Existence_Command=10910
,P_Vision_EmptyTable_Command=10911
,P_Vision_FirstSepa_Command=10912
,P_Selected_Align_Inspection_Unit=10913
,P_Selected_Surface_Inspection_Unit=10914
,P_Selected_Stack_Inspection_Unit=10915
,P_Selected_Existence_Inspection_Unit=10916
,P_Selected_EmptyTable_Inspection_Unit=10917
,P_Set_Cathode_Align_Zero_Pos=10918
,P_Set_Anode_Align_Zero_Pos=10919
,P_Vision_Align_State_Machine=10920
,P_Vision_Surface_State_Machine=10921
,P_Vision_Stack_State_Machine=10922
,P_Vision_Existence_State_Machine=10923
,P_Vision_EmptyTable_State_Machine=10924
,P_Vision_FirstSepa_State_Machine=10925
,P_Vision_Align_Status=10926
,P_Vision_Surface_Status=10927
,P_Vision_Stack_Status=10928
,P_Vision_Existence_Status=10929
,P_Vision_EmptyTable_Status=10930
,P_Vision_FirstSepa_Status=10931
,P_Cathode_Align_Table_Move=10934
,P_Anode_Align_Table_Move=10935
,P_Vision_Anode_Cell_Existence=10936
,P_Vision_Cathode_Cell_Existence=10937
,P_Align_Sheet_CHK=10938
,P_Anode_NG_Code=10939
,P_Cathode_NG_Code=10940
,P_Stack_NG_Code=10941
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
,P_Stop_Debug_Flag=10942
,P_Stop_Status_Check_Address=11065
,P_Stop_Status_Save_Address=11066
,P_Stop_Check_RTN=11067
,P_Old_Total_Unit_Bit=11072
,P_Memory_Tower_Dec_Result=11073
,P_PNP_Move_Timer=11083
,P_PNP_Move_Delay_Time=11084
,P_Stop_Memory_Pos_RTN=11085
,P_Slave1_Motion_Command=11086
,P_Slave2_Motion_Command=11087
,P_Slave3_Motion_Command=11088
,P_Slave4_Motion_Command=11089
,P_Slave5_Motion_Command=11090
,P_Slave6_Motion_Command=11091
,P_Slave7_Motion_Command=11092
,P_Slave8_Motion_Command=11093
,P_Slave9_Motion_Command=11094
,P_Slave10_Motion_Command=11095
,P_Slave11_Motion_Command=11096
,P_Slave12_Motion_Command=11097
,P_Slave13_Motion_Command=11098
,P_Slave14_Motion_Command=11099
,P_Slave15_Motion_Command=11100
,P_Slave16_Motion_Command=11101
,P_Slave17_Motion_Command=11102
,P_Slave18_Motion_Command=11103
,P_Slave19_Motion_Command=11104
,P_Slave20_Motion_Command=11105
,P_PNP_90_Deg_TM=11106
,P_PNP_90_Deg_TA=11107
,P_PNP_90_Deg_TS=11108
,P_PNP_Ready_TM=11109
,P_PNP_Ready_TA=11110
,P_PNP_Ready_TS=11111
,P_PNP_45_Deg_TM=11112
,P_PNP_45_Deg_TA=11113
,P_PNP_45_Deg_TS=11114
,P_Unloader_TM_Test=11115
,P_Unloader_TA_Test=11116
,P_PROG_21_Program_Ver=2781
,P_PROG_23_Program_Ver=2783
,P_PROG_24_Program_Ver=2784
,P_PROG_25_Program_Ver=2785
,P_PROG_26_Program_Ver=2786
,P_PROG_27_Program_Ver=2787
,P_PROG_28_Program_Ver=2788
,P_PROG_30_Program_Ver=2790
,P_Master_Motion_Trigger=11117
,P_Parity_Bit=11118
,P_Master_Move=11119
,P_Master_TA=11120
,P_Master_TS=11121
,P_Master_TM=11122
,P_Anode_Count=11123
,P_Cathode_Count=11124
,P_Anode_Thickness=11125
,P_Cathode_Thickness=11126
,P_Sepa_Thickness=11127
,P_Anode_Thickness_PLC=11128
,P_Cathode_Thickness_PLC=11129
,P_Sepa_Thickness_PLC=11130
,P_Spool_Enable=11648
,P_Cathode_1St_Flow_Chart_Bit_Flag=11649
,P_Cathode_AT_Flow_Chart_Bit_Flag=11650
,P_Cathode_2nd_Flow_Chart_Bit_Flag=11651
,P_Anode_Clamp_Flow_Chart_Bit_Flag=11652
,P_Final_Roll_Flow_Chart_Bit_Flag=11653
,P_Stack_Table_Flow_Chart_Bit_Flag=11654
,P_Cathode_Clamp_Flow_Chart_Bit_Flag=11655
,P_Anode_2nd_Flow_Chart_Bit_Flag=11656
,P_Anode_AT_Flow_Chart_Bit_Flag=11657
,P_Anode_1St_Flow_Chart_Bit_Flag=11658
,P_Sepa_Unwinder_Flow_Chart_Bit_Flag=11659
,P_Slave5_Target_Z_For_Cutting=11660
,P_Slave31_Motion_Command=11661
,P_Pause_Err_Process=11662
,P_Pause_Err_Timer=11663
,P_Pause_Err_Count=11664
,P_Pause_Err_Use=11665
,P_Pause_Err_Use2=11666
,P_Anode_Pause_Signal_Err=11667
,P_Cathode_Pause_Signal_Err=11668
,P_Anode_Pause_Err=11669
,P_Anode_Pause_Err_Count=11670
,P_Execute_Wait_Mode_Memory_Tower=11681
,P_Execute_Vac_MNTR=11682
,P_Old_Cathode_Cur_Mode=11683
,P_Old_Anode_Cur_Mode=11724
,P_Anode_1TR_T_Belt_To_Align=11765
,P_Anode_1TR_T_Align_To_Belt=11766
,P_Anode_1TR_T_Ready_Pos=11767
,P_Anode_1TR_T_Ready_To_Align=11768
,P_Anode_1TR_T_Ready_To_Belt=11769
,P_Anode_Picker_Turn=11770
,P_Anode_2TR_T_Align_To_Stack=11771
,P_Anode_2TR_T_Stack_To_Align=11772
,P_Anode_Clamp_Off=11773
,P_Anode_Clamp_On=11774
,P_Anode_Clamp_Down=11775
,P_FR_Anode_Motion=11776
,P_FR_Cathode_Motion=11777
,P_Stack_Table_Down=11778
,P_Cathode_Clamp_On=11779
,P_Cathode_Clamp_Off=11780
,P_Cathode_Clamp_Down=11781
,P_Cathode_2TR_T_Align_To_Stack=11782
,P_Cathode_2TR_T_Stack_To_Align=11783
,P_Cathode_Picker_Turn=11784
,P_Cathode_1TR_T_Belt_To_Align=11785
,P_Cathode_1TR_T_Align_To_Belt=11786
,P_Cathode_1TR_T_Ready_Pos=11787
,P_Cathode_1TR_T_Ready_To_Align=11788
,P_Cathode_1TR_T_Ready_To_Belt=11789
,P_Anode_1TR_Z_Belt_To_Align=11790
,P_Anode_1TR_Z_Align_To_Belt=11791
,P_Anode_1TR_Z_Align_Down=11792
,P_Anode_1TR_Z_Align_UP=11793
,P_Anode_1TR_Z_Belt_Down=11794
,P_Anode_1TR_Z_Belt_UP=11795
,P_Anode_1TR_Z_Ready=11796
,P_Anode_1TR_Z_Align_Blow=11797
,P_Anode_1TR_Z_Belt_Vac=11798
,P_Cathode_1TR_Z_Belt_To_Align=11799
,P_Cathode_1TR_Z_Align_To_Belt=11800
,P_Cathode_1TR_Z_Align_Down=11801
,P_Cathode_1TR_Z_Align_UP=11802
,P_Cathode_1TR_Z_Belt_Down=11803
,P_Cathode_1TR_Z_Belt_UP=11804
,P_Cathode_1TR_Z_Ready=11805
,P_Cathode_1TR_Z_Align_Blow=11806
,P_Cathode_1TR_Z_Belt_Vac=11807
,P_Anode_2TR_Align_To_Stack=11808
,P_Anode_2TR_Stack_To_Align=11809
,P_Anode_2TR_Stack_Down=11810
,P_Anode_2TR_Stack_UP=11811
,P_Anode_2TR_Align_Down=11812
,P_Anode_2TR_Align_UP=11813
,P_Anode_2TR_Align_Vac=11814
,P_Anode_2TR_Stack_Blow=11815
,P_Anode_2TR_Stack_Sepa_Blow=11816
,P_FR_Last_Run_Motion=11817
,P_Servo_Dancer_Ready_Pos=11818
,P_Servo_Dancer_Ready_Offset=11819
,P_Servo_Dancer_Test=11820
,P_Align_Start_IO_Judgment=11821
,P_Driving_Clamp2=11822
,P_Driving_Clamp=11823
,P_MSA_Timer=11824
,P_SM_Cathode_Stack_MSA=11825
,P_SM_Anode_Stack_MSA=11826
,P_SM_Cathode_Align_MSA=11827
,P_SM_Anode_Align_MSA=11828
,P_MSA_Interlock=11829
,P_Anode_MSA_Final_Roll_Pos_Check=11830
,P_Anode_MSA_2nd_PNP_Pos_Check=11831
,P_Anode_MSA_1nd_PNP_Pos_Check=11832
,P_MSA_Err_Save_CA_Stack_MSA=11833
,P_MSA_Err_Save_AN_Stack_MSA=11834
,P_MSA_Err_Save_CA_Align_MSA=11835
,P_MSA_Err_Save_AN_Align_MSA=11836
,P_MSA_BTN_Err=11837
,P_Anode_Algin_MSA_RTN=11838
,P_Anode_Algin_MSA_RTN2=11839
,P_Cathode_Algin_MSA_RTN=11840
,P_Cathode_Stack_MSA_RTN=11841
,P_Anode_Stack_MSA_RTN=11842
,P_Anode_Align_MSA_Count=11843
,P_Cathode_Align_MSA_Count=11844
,P_Anode_Stack_MSA_Count=11845
,P_Cathode_Stack_MSA_Count=11846
,P_Cathode_Align_Stop_Blocked=11847
,P_Anode_Align_Stop_Blocked=11848
,P_Cathode_Stack_Stop_Blocked=11849
,P_Anode_Stack_Stop_Blocked=11850
,P_Anode_Align_MSA_Execute_Timer=11851
,P_Cathode_Align_MSA_Execute_Timer=11852
,P_Anode_Stack_MSA_Execute_Timer=11853
,P_Cathode_Stack_MSA_Execute_Timer=11854
,P_Anode_Align_Interlock_Blocked=11855
,P_Cathode_Align_Interlock_Blocked=11856
,P_Anode_Stack_Interlock_Blocked=11857
,P_Cathode_Stack_Interlock_Blocked=11858
,P_Anode_1TR_T_Align_POS=11859
,P_Anode_1TR_T_Belt_POS=11860
,P_Anode_1TR_T_Ready_POS=11861
,P_Anode_2TR_T_Align_POS=11862
,P_Anode_2TR_T_Stack_POS=11863
,P_Cathode_2TR_T_Align_POS=11864
,P_Cathode_2TR_T_Stack_POS=11865
,P_Cathode_1TR_T_Align_POS=11866
,P_Cathode_1TR_T_Belt_POS=11867
,P_Cathode_1TR_T_Ready_POS=11868
,P_Seq_Abort=11869
,P_Blocked_Abort=11870
,P_Abort_Flag=11871
,P_Opposite_Lane_1ST_TR_Safe_Pos=11872
,P_Opposite_Lane_P_PMAC_Status=11873
,P_Opposite_Lane_OFF_Not_Start=11874
,P_Pause_Alarm_Blocked=11875
,P_Old_Alarm_Arr=11876
,P_Cycle_Stop_Delay_Time=11877
,P_Cycle_Stop_Offset=11878
,P_Opposite_Lane_Abort_Alram_Flag=11879
,P_Cathode_Clmap_Y1_Ready_Pos=11880
,P_Cathode_Clmap_Y1_Clamp_Pos=11881
,P_Anode_Clmap_Y1_Ready_Pos=11882
,P_Anode_Clmap_Y1_Clamp_Pos=11883
,P_Cathode_Clmap_Y2_Ready_Pos=11884
,P_Cathode_Clmap_Y2_Clamp_Pos=11885
,P_Anode_Clmap_Y2_Ready_Pos=11886
,P_Anode_Clmap_Y2_Clamp_Pos=11887
,P_Cathode_Clamp_Z2_Ready_Pos=11888
,P_Cathode_Clamp_Z2_Clamp_Pos=11889
,P_Anode_Clamp_Z2_Ready_Pos=11890
,P_Anode_Clamp_Z2_Clamp_Pos=11891
,P_Cathode_Clamp_Z1_Ready_Pos=11892
,P_Cathode_Clamp_Z1_Clamp_Pos=11893
,P_Anode_Clamp_Z1_Ready_Pos=11894
,P_Anode_Clamp_Z1_Clamp_Pos=11895
,P_Cathode_Clamp_Z2_Cell_Down=11896
,P_Anode_Clamp_Z2_Cell_Down=11897
,P_Cathode_Clamp_Z1_Cell_Down=11898
,P_Anode_Clamp_Z1_Cell_Down=11899
,P_Single_Run_Pass=11900
,P_Cathode_2nd_PNP_Sepa_Blow=11901
,P_Cathode_2nd_PNP_Align_Blow=11902
,P_Cathode_2nd_PNP_Stack_Blow=11903
,P_Cathode_2nd_PNP_Align_Vac=11904
,P_Cathode_2nd_PNP_Align_Up_Motion=11905
,P_Cathode_2nd_PNP_Align_Down_Motion=11906
,P_Cathode_2nd_PNP_Stack_Up_Motion=11907
,P_Cathode_2nd_PNP_Stack_Down_Motion=11908
,P_Cathode_2nd_PNP_Stack_To_Align_Motion=11909
,P_Cathode_2nd_PNP_Align_To_Stack_Motion=11910
,P_Door_Open_Stop_Count=11911
,P_Buf_Stack_NG_Flag=11912
,P_Stop_1st_PNP_Move=11913
,P_Seq_Abort_Timer=11914
,P_Sync_Test=11915
,P_Dry_Pause_Flag=11916
,P_Dry_Run_Pasue_Timer=11917
,P_Resume_Stop_Blocked=11918
,P_Discharge_Wait=11919
,P_Command_Run_Flag=11920
,P_Stop_Cmd_Origin=11921
,P_Old_M_Y_Sepa_Cutter_SSR_On=11937
,P_Sepa_Cutter_SSR_Off_Time=11938
,P_Sepa_Cutter_SSR_Off=11939
,P_Sepa_Cutter_SSR_Off_Timer=11940
,P_Starting_Pause_IO_Flag=11941
,P_PLC03_Seq_Pause_Start_Flag=11942
,P_PLC03_Seq_Pause_Start_State_Machine=11943
,P_PLC03_Seq_Pause_Start_Status=11944
,P_ARC_NP_Push_BTN=11945
,P_ARC_UI_Push_BTN=11946
,P_M_Manual_ARC_BTN=11947
,P_Two_Btn_Active_Flag=11948
,P_Two_Btn_Interlock_Time=11949
,P_NP_Unwinder_Active_Hold=11950
,P_MAX_KGF=11951
,P_KGF_TO_DAC_RATIO=11952
,P_Dac_Out_Value=11953
,P_Recipe_Dancer_input_kgf=11954
,P_Cathode_NG_PNP_Vel_Zero_Set=11955
,P_Anode_NG_PNP_Vel_Zero_Set=11956
,P_Anode_Run_DR=11957
,P_Cathode_Run_DR=11958
,P_1st_UND_Grip_Time=11959
,P_1st_UND_Grip_Time_offset=11960
,P_1st_UND_Grip_Time_offset2=11961
,P_First_Sepa_Driving_Use=11962
,P_First_Sepa_Driving_Timing=11963
,P_Unloader_Safe_rtn=11964
,P_Final_Start=11965
,P_Driving_Start=11966
,P_Starting_Pause_IO_OFF_Flag=11967
,P_individual_Hold_return=11968
,P_individual_Hold_return2=11969
,P_Tension_Ready_Pass=11970
,P_Discharge_cal_rtn=11971
,P_Old_Tact_Current_Mode=11972
,P_Sheet_Clear=11973
,P_Anode_Clamp_On_Time2=11974
,P_Anode_Clamp_On_Time=11975
,P_Cathode_Clamp_On_Time=11976
,P_Cathode_Clamp_On_Time2=11977
,P_Offset=11978
,P_Man_C=11979
,P_NG_Box_Stop_Use=11980
,P_SlewTime=11981
,P_Old_SlewTime=11982
,P_Resume_MNTR1=11983
,P_Resume_MNTR2=11984
,P_Resume_MNTR3=11985
,P_Resume_MNTR4=11986
,P_Resume_MNTR5=11987
,P_Resume_MNTR6=11988
,P_Resume_MNTR7=11989
,P_Resume_MNTR8=11990
,P_Resume_MNTR9=11991
,P_Resume_MNTR10=11992
,P_Resume_MNTR11=11993
,P_Resume_MNTR12=11994
,P_old_P_Anode_Count=11995
,P_Sheet_Paper_BWD_Count=11996
,P_Stop_CHK=11997
,P_Seq_Pause=11998
,P_Seq_Pause2=11999
,P_MSA_TimeBase_Rtn=12000
,P_Old_Vison_Read_EPC_Camera_Move_Request=12001
,P_First_Sepa_Time_Out_Count=12002
,P_Align_Retry_Cal_RTN=12003
,P_Driving_Cal=12020
,P_Driving_End_Pos=12021
,P_Driving_Start_Pos=12022
,P_Anode_Align_Blow=12028
,P_Cathode_Align_Blow=12029
,P_Home_Pos_Err_Cnt1=12070
,P_Home_Pos_Err_Cnt2=12071
,P_Home_Pos_Err_Cnt3=12072
,P_Home_Pos_Err_Cnt4=12073
,P_Align_Inspection_Delay=12074
,P_Anode_Sheet_Test=12080
,P_Cathode_Sheet_Test=12081
,P_Anode_Sheet_Interlock_Timing=12082
,P_Cathode_Sheet_Interlock_Timing=12083
,P_Discharge_Err_MNTR=12084
,P_Arc_Err_MNTR=12085
,P_Abort_Cnt=12086
,P_EMO_Cnt=12087
,P_Dry_Run_Inspection=12088
,P_Servo_ON_MNTR1=12089
,P_Servo_ON_MNTR2=12090
,P_Servo_ON_MNTR3=12091
,P_Servo_ON_MNTR4=12092
,P_Servo_ON_MNTR5=12093
,P_Servo_ON_MNTR6=12094
,P_Servo_ON_MNTR7=12095
,P_Servo_ON_MNTR8=12096
,P_Servo_ON_MNTR9=12097
,P_Servo_ON_MNTR10=12098
,P_Servo_ON_MNTR11=12099
,P_Servo_ON_MNTR12=12100
,P_Servo_ON_MNTR13=12101
,P_Servo_ON_MNTR14=12102
,P_Servo_ON_MNTR15=12103
,P_Servo_ON_MNTR16=12104
,P_Servo_ON_MNTR17=12105
,P_Servo_ON_MNTR18=12106
,P_Servo_ON_MNTR19=12107
,P_Servo_ON_MNTR20=12108
,P_Servo_ON_MNTR21=12109
,P_Servo_ON_MNTR22=12110
,P_Servo_ON_MNTR23=12111
,P_Servo_ON_MNTR24=12112
,P_Servo_ON_MNTR25=12113
,P_Servo_ON_MNTR26=12114
,P_Servo_ON_MNTR27=12115
,P_Servo_ON_MNTR28=12116
,P_Servo_ON_MNTR29=12117
,P_Servo_ON_MNTR30=12118
,P_X_IO_WinMess_Connect_BTN=12119
,P_Ecat_ReConnetion_State_Machine=12120
,P_Ecat_Reconnection_Timer=12121
,P_Y_Ecat_Reconnecting=12122
,P_Y_Ecat_ReConnection_Fail=12123
,P_Y_Ecat_ReConnection_Complete=12124
,P_X_Ecat_Reconnection_BTN=12125
,P_X_PLC_Setup_Mode_Check=12126
,P_Interlock_On_Off_Flag=12127
,P_X_Old_MC_Reconnect_BTN_Signal=12128
,P_BTN_1st_ULD_Data_Clear=12129
,P_Old_BTN_1st_ULD_Data_Clear=12130
,P_Old_M_Y_1st_Unloader_UnGrip_Sol=12131
,P_Sepa_Cutter_Heat_Meter=12132
,P_Sepa_Cutter_Heating_Timer=12133
,P_Middle_Skip_Off_Flag=12134
,P_Stop_MNTR1=12135
,P_Stop_MNTR2=12136
,P_Sheet_Pos_Offset=12137
,P_Stopping_Wait_Time=12138
,P_Stopping_Test_Timer=12139
,P_1st_ULD_OK_Lamp=12150
,P_1st_ULD_NG_Lamp=12151
,P_1st_ULD_Sample_QC_Lamp=12152
,P_Proceed_Execute_Flag=12153
,P_Continuous_Call_Stack_NG_Flag=12154
,P_Continuous_Call_Stack_OK_Flag=12155
,P_Cathode_Picker_Home_Pos=12156
,P_Anode_Picker_Home_Pos=12157
,P_FR_Sheet_Paper_Home_Chk=12158
,P_Align_TimeOut1=12159
,P_Align_TimeOut2=12160
,P_Align_TimeOut3=12161
,P_Align_TimeOut4=12162
,P_Align_TimeOut5=12163
,P_Align_TimeOut6=12164
,P_Anode_Align_OK=12165
,P_Cathode_Align_OK=12166
,P_Anode_Align_NG=12167
,P_Cathode_Align_NG=12168
,P_Anode_Align_TimeOut=12169
,P_Cathode_Align_TimeOut=12170
,P_Anode_Surf_OK=12171
,P_Cathode_Surf_OK=12172
,P_Anode_Surf_NG=12173
,P_Cathode_Surf_NG=12174
,P_Anode_Surf_TimeOut=12175
,P_Cathode_Surf_TimeOut=12176
,P_Surf_TimeOut1=12177
,P_Surf_TimeOut2=12178
,P_Surf_TimeOut3=12179
,P_Surf_TimeOut4=12180
,P_Surf_TimeOut5=12181
,P_Surf_TimeOut6=12182
,P_Anode_Stack_TimeOut=12183
,P_Cathode_Stack_TimeOut=12184
,P_Anode_Stack_OK=12185
,P_Cathode_Stack_OK=12186
,P_Anode_Stack_NG=12187
,P_Cathode_Stack_NG=12188
,P_Stack_TimeOut1=12189
,P_Stack_TimeOut2=12190
,P_Stack_TimeOut3=12191
,P_Align_Move_Err=12192
,P_Ecat_Test=12193
,P_Scan_Aver=12196
,P_Scan_MAX=12197
,P_Cathode_1TR_Picker_T_Belt_POS=12198
,P_Cathode_1TR_Picker_T_Align_POS=12199
,P_Anode_1TR_Picker_T_Belt_POS=12200
,P_Anode_1TR_Picker_T_Align_POS=12201
,P_1TR_Picker_T_Align_POS=12202
,P_AVRG_Lower_Sepa_Thickness_mm=12203
,P_AVRG_Upper_Sepa_Thickness_mm=12204
,P_PLC06_Upper_Curr_Unwinder_Thickness_mm=12205
,P_PLC06_Lower_Curr_Unwinder_Thickness_mm=12206
,P_Upper_Curr_Spool_Radius=12207
,P_Lower_Curr_Spool_Radius=12208
,P_PLC06_Curr_Upper_Distance_mm=12209
,P_PLC06_Curr_Lower_Distance_mm=12210
,P_Upper_Sepa_Min_Distance_mm=12211
,P_Lower_Sepa_Min_Distance_mm=12212
,P_PLC06_Sepa_Change_Set=12213
,P_Upper_Sepa_To_Sensor_Min_Dis=12214
,P_Upper_Sepa_To_Sensor_Max_Dis=12215
,P_Upper_Sensor_To_Unwinder_Core_Dis=12216
,P_Upper_Sensor_Min_AD=12217
,P_Upper_Sensor_Max_AD=12218
,P_Lower_Sepa_To_Sensor_Min_Dis=12219
,P_Lower_Sepa_To_Sensor_Max_Dis=12220
,P_Lower_Sensor_To_Unwinder_Core_Dis=12221
,P_Lower_Sensor_Min_AD=12222
,P_Lower_Sensor_Max_AD=12223
,M_AI_Upper_Sepa_Sensing=372
,M_AI_Lower_Sepa_Sensing=373
,P_Status_NP_BTN_Lower_Unwinder=12224
,P_Status_NP_BTN_Upper_Unwinder=12225
,P_Driving_CamTable_Scale_Change_Flag=12226
,P_FR_Driving_Diameter=12227
,P_FR_Driving_Floating_Point=12228
,P_FR_Driving_Reward=12229
,P_Unwinder_Master_Following_Use_Flag=12230
,P_Unwinder_Master_Following_On=12231
,P_Old_Master_Following_Start=12232
,P_Unwinder_Master_Following_Scale=12233
,P_Unwinder_Jog_Use_Flag=12234
,P_Old_Jog_Start=12235
,P_Unwinder_Jog_Total_Time=12236
,P_Unwinder_Ta=12237
,P_Unwinder_Ts=12238
,P_Unwinder_Tm=12239
,P_Unwinder_1mm_Deg=12240
,P_Unwinder_Jog_Pos=12241
,P_Unwinder_Jog_Cnt=12242
,P_PLC06_Frist_Flag=12243
,P_Sepa_AI=12244
,P_PLC06_Reel_Upper_Change_Flag=12245
,P_PLC06_Reel_Lower_Change_Flag=12246
,P_Spool_Ready_Enable_Flag=12247
,P_Spool_Lack_Flag=12248
,P_Sepa_DR_Start_Flag=12249
,P_cdTime_Tact_Sec=12250
,P_Master_Tact_Sec=12251
,P_Prev_Err_Pos=12252
,P_Cur_Arc_Rad=12253
,P_Cur_Arc_Deg=12254
,P_Spool_Velocity=12255
,P_Lin_Prop_Vel=12256
,P_Err_Pos=12257
,P_Lin_Deriv_Vel=12258
,P_Lin_Dacer_Kd=12259
,P_Lin_Dacer_Kp=12260
,P_Running_CDTimer=12261
,P_Unwinder_Jog_Ta=12262
,P_Unwinder_Jog_Ts=12263
,P_Unwinder_Vel_Test_Time=12264
,P_Set_Interval_Time=12265
,P_PLC06_Upper_Sepa_AI_Timer=12266
,P_PLC06_Upper_Sepa_AI_Data=12267
,P_PLC06_Upper_Sepa_AI_Cnt=12268
,P_PLC06_Upper_AVRG_Sensor_Data=12269
,P_PLC06_Lower_Sepa_AI_Timer=12270
,P_PLC06_Lower_Sepa_AI_Data=12271
,P_PLC06_Lower_Sepa_AI_Cnt=12272
,P_PLC06_Lower_AVRG_Sensor_Data=12273
,P_PLC06_Sepa_Upper_Thickness_Timer=12274
,P_PLC06_Sepa_Upper_Thickness_Data=12275
,P_PLC06_Sepa_Upper_Thickness_Cnt=12276
,P_PLC06_Sepa_Lower_Thickness_Timer=12277
,P_PLC06_Sepa_Lower_Thickness_Data=12278
,P_PLC06_Sepa_Lower_Thickness_Cnt=12279
,P_Sepa_Thickness_Chk_Timer=12280
,P_Spool_Length=12281
,P_Cascade_Sf_Driving_Value=12282
,P_Cascade_Sf_None_Driving_Value=12283
,P_Sepa_Min_Value_Cal_Cmd=12284
,P_Total_Sepa_Need_Length=12285
,P_Alpa=12286
,P_Sepa_Num_of_Turns=12287
,P_Sepa_Turn_Num=12288
,P_Accumulate_Value=12289
,P_Sharft_to_Sepa_Core_mm=12290
,P_Sepa_Cal_Circum=12291
,P_Sepa_Min_Need_Thickness=12292
,P_Sepa_Min_Thickness_Cmd=12293
,P_Sepa_Accumulate_Cmd=12294
,P_Sepa_Required_Amount=12295
,P_Sepa_Current_Thickness=12296
,P_Sepa_Initial_Tickness=12297
,P_Sepa_Required_Update_Timer=12298
,P_TEST_EPC_Interlock_Auto=12299
,P_TEST_EPC_Interlock_Manual=12300
,P_Discharge_Total_Tact=12301
,P_PLC15_Sub_Function_Dryrun_Active_Flag=12314
,P_Sepa_Rotation_Sequence_Run_Trigger_Cnt=12315
,P_Sepa_Mode_Sepa_Recipe_Count=12316
,P_Discharged_After_End_Trigger=12317
,P_Unloader_1st_Grip_Delay=12318
,P_Separate_Cutter_Heating_Limit_Value=12319
,P_Separate_Cutting_Current=12320
,P_Separate_Cutter_Change_Cycle=12321
,P_X_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger=12322
,P_X_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger=12323
,P_X_Cathode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger=12324
,P_X_Anode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger=12325
,P_X_Stack_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger=12326
,P_Interlock_Messege_Confirmed=12327
,P_X_MC_Communication_HeartBit=12328
,P_SV_Cathode_Count=12329
,P_SV_Anode_Count=12330
,P_SV_Cathode_Reference_Thickness=12334
,P_SV_Anode_Reference_Thickness=12335
,P_SV_Stack_Table_Damper_Cathode=12336
,P_SV_Stack_Table_Damper_Anode=12337
,P_SV_Sepa_Reference_Thickness=12338
,P_SV_Jelly_Roll_Width=12339
,P_Cathode_Align_Continuous_NG_Recipe=12340
,P_Anode_Align_Continuous_NG_Recipe=12341
,P_Stack_Vision_Continuous_NG_Recipe=12342
,P_PLC_Recipe_EPC_Sepa_Count=12343
,P_PLC_Recipe_Revise_Sepa=12344
,P_X_PLC_to_PMAC_Correction_Value=12345
,P_Anode_Align_Continuous_NG_Check_range=12346
,P_Cathode_Align_Continuous_NG_Check_range=12347
,P_Stack_Align_Continuous_NG_Check_range=12348
,P_Cathode_Surface_Continuous_NG_Recipe=12349
,P_Anode_Surface_Continuous_NG_Recipe=12350
,P_Cathode_Surface_Continuous_NG_Check_range=12351
,P_Anode_Surface_Continuous_NG_Check_range=12352
,P_Servo_Dancer_Alarm_Maximum_Angle_Value=12353
,P_Servo_Dancer_Alarm_Minimum_Angle_Value=12354
,P_Current_Selected_Spool_Rev_Counts_Init_Read=12355
,P_Spool_ARC_Distance_mm=12356
,P_ARC_Upper_Request_Sepa_Thickness_mm=12357
,P_ARC_Lower_Request_Sepa_Thickness_mm=12358
,P_Selected_Spool_Arc_Set_Rev_Counts_Value=12359
,P_Set_Cnt_FR_Moving_Sepa_ARC=12360
,P_Current_Selected_Spool_Rev_Counts=12361
,P_AI_Cathode_Clamp_Damper=12362
,P_AI_Anode_Clamp_Damper=12363
,P_Select_Sheet_Value=12374
,P_BTN_Config_Setup_Mode_Select=12375
,P_Sepa_Thickness_Max_Value=12376
,P_AI_Cathode_Clamp_Damper_Zero_Mpa_Analog_Value=12377
,P_AI_Anode_Clamp_Damper_Zero_Mpa_Analog_Value=12378
,P_Accumulated_Movement_MM_Unit_Cathode_1ST_pnp=12379
,P_Accumulated_Movement_MM_Unit_Anode_1ST_pnp=12380
,P_Accumulated_Movement_MM_Unit_Cathode_2nd_pnp=12381
,P_Accumulated_Movement_MM_Unit_Anode_2nd_pnp=12382
,P_AI_Anode_Clamp_Damper_Mpa=12383
,P_AI_Cathode_Clamp_Damper_Mpa=12384
,P_Current_Whole_Stack_Jelly_Roll_Thinckness_mm=12385
,P_Upper_Sepa_Current_Thickness_um=12386
,P_Lower_Sepa_Current_Thickness_um=12387
,P_Spool_Rotate_Distance=12388
,Spool_Diameter=12389
,P_Current_FR_Moving_Cnt_To_PlC=12390
,P_MES_APC_Select_Btn=12391
,P_AO_Anode_Clamp_Damper=12392
,P_AO_Cathode_Clamp_Damper=12393
,P_Sepa_Length=12394
,P_Minus_Limit_Detect_Popup_Flag=12395
,P_Plus_Limit_Detect_Popup_Flag=12396
,P_Fatal_Fe_Limit_Detect_Popup_Flag=12397
,P_Emergency_Alarm_Popup_Flag=12398
,P_SepaArcing_Popup_Flag=12399
,P_Y_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger=12400
,P_Y_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger=12401
,P_Y_Cathode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger=12402
,P_Y_Anode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger=12403
,P_Y_Stack_Align_Calibration_twisted_Cycle_Stop_Request_Trigger=12404
,P_Current_Selected_Sheet_Value=12405
,P_Status_Config_Mode_Select=12406
,P_Sepa_Thickness_Jig_Value=12407
,P_PV_Stack_Table_Damper_Cathode=12408
,P_PV_Stack_Table_Damper_Anode=12409
,P_Discharge_Standby_Pos_Tack_Time=12410
,P_Discharge_FR_MainZ_Pos_Tack_Time=12411
,P_Discharge_Unloader_Go_Pos_Tack_Time=12412
,P_Discharge_SubZ_Down_Pos_Tack_Time=12413
,P_Discharge_Unloader_Cutting_Pos_Tack_Time=12414
,P_Discharge_FR_Clamp_ON_Complete_Tack_Time=12415
,P_Discharge_Cutting_Complete_Tack_Time=12416
,P_Discharge_Motion_PG_Active_Starting_Tack_Time=12417
,P_Discharge_Motion_PG_Active_Complete_Tack_Time=12418
,P_Discharge_Sepa_First_Complete_Tack_Time=12419
,P_Discharge_Complete_Tack_Time=12420
,P_Discharge_Total_Tack_Time=12421
,P_Anode_Clamp_TackTime_Array0=12422
,P_Anode_Clamp_TackTime_Array1=12423
,P_Anode_Clamp_TackTime_Array2=12424
,P_Anode_Clamp_TackTime_Array3=12425
,P_Anode_Clamp_TackTime_Array4=12426
,P_Anode_Clamp_TackTime_Array5=12427
,P_Anode_Clamp_TackTime_Array6=12428
,P_Anode_Clamp_TackTime_Array7=12429
,P_Anode_Clamp_TackTime_Array8=12430
,P_Anode_Clamp_TackTime_Array9=12431
,P_Anode_Clamp_TackTime_Array10=12432
,P_Stacking_TackTime_Array0=12433
,P_Stacking_TackTime_Array1=12434
,P_Stacking_TackTime_Array2=12435
,P_Stacking_TackTime_Array3=12436
,P_Stacking_TackTime_Array4=12437
,P_Stacking_TackTime_Array5=12438
,P_Stacking_TackTime_Array6=12439
,P_Stacking_TackTime_Array7=12440
,P_Stacking_TackTime_Array8=12441
,P_Stacking_TackTime_Array9=12442
,P_Stacking_TackTime_Array10=12443
,P_Cathode_Clamp_TackTime_Array0=12444
,P_Cathode_Clamp_TackTime_Array1=12445
,P_Cathode_Clamp_TackTime_Array2=12446
,P_Cathode_Clamp_TackTime_Array3=12447
,P_Cathode_Clamp_TackTime_Array4=12448
,P_Cathode_Clamp_TackTime_Array5=12449
,P_Cathode_Clamp_TackTime_Array6=12450
,P_Cathode_Clamp_TackTime_Array7=12451
,P_Cathode_Clamp_TackTime_Array8=12452
,P_Cathode_Clamp_TackTime_Array9=12453
,P_Cathode_Clamp_TackTime_Array10=12454
,P_JellyRoll_Out_TackTime_Array0=12455
,P_JellyRoll_Out_TackTime_Array1=12456
,P_JellyRoll_Out_TackTime_Array2=12457
,P_JellyRoll_Out_TackTime_Array3=12458
,P_JellyRoll_Out_TackTime_Array4=12459
,P_JellyRoll_Out_TackTime_Array5=12460
,P_JellyRoll_Out_TackTime_Array6=12461
,P_JellyRoll_Out_TackTime_Array7=12462
,P_JellyRoll_Out_TackTime_Array8=12463
,P_JellyRoll_Out_TackTime_Array9=12464
,P_JellyRoll_Out_TackTime_Array10=12465
,P_Anode_1th_TackTime_Array0=12466
,P_Anode_1th_TackTime_Array1=12467
,P_Anode_1th_TackTime_Array2=12468
,P_Anode_1th_TackTime_Array3=12469
,P_Anode_1th_TackTime_Array4=12470
,P_Anode_1th_TackTime_Array5=12471
,P_Anode_1th_TackTime_Array6=12472
,P_Anode_1th_TackTime_Array7=12473
,P_Anode_1th_TackTime_Array8=12474
,P_Anode_1th_TackTime_Array9=12475
,P_Anode_1th_TackTime_Array10=12476
,P_Cathode_1th_TackTime_Array0=12477
,P_Cathode_1th_TackTime_Array1=12478
,P_Cathode_1th_TackTime_Array2=12479
,P_Cathode_1th_TackTime_Array3=12480
,P_Cathode_1th_TackTime_Array4=12481
,P_Cathode_1th_TackTime_Array5=12482
,P_Cathode_1th_TackTime_Array6=12483
,P_Cathode_1th_TackTime_Array7=12484
,P_Cathode_1th_TackTime_Array8=12485
,P_Cathode_1th_TackTime_Array9=12486
,P_Cathode_1th_TackTime_Array10=12487
,P_Anode_2th_TackTime_Array0=12488
,P_Anode_2th_TackTime_Array1=12489
,P_Anode_2th_TackTime_Array2=12490
,P_Anode_2th_TackTime_Array3=12491
,P_Anode_2th_TackTime_Array4=12492
,P_Anode_2th_TackTime_Array5=12493
,P_Anode_2th_TackTime_Array6=12494
,P_Anode_2th_TackTime_Array7=12495
,P_Anode_2th_TackTime_Array8=12496
,P_Anode_2th_TackTime_Array9=12497
,P_Anode_2th_TackTime_Array10=12498
,P_Cathode_2th_TackTime_Array0=12499
,P_Cathode_2th_TackTime_Array1=12500
,P_Cathode_2th_TackTime_Array2=12501
,P_Cathode_2th_TackTime_Array3=12502
,P_Cathode_2th_TackTime_Array4=12503
,P_Cathode_2th_TackTime_Array5=12504
,P_Cathode_2th_TackTime_Array6=12505
,P_Cathode_2th_TackTime_Array7=12506
,P_Cathode_2th_TackTime_Array8=12507
,P_Cathode_2th_TackTime_Array9=12508
,P_Cathode_2th_TackTime_Array10=12509
,P_Anode_Align_Table_TackTime_Array0=12510
,P_Anode_Align_Table_TackTime_Array1=12511
,P_Anode_Align_Table_TackTime_Array2=12512
,P_Anode_Align_Table_TackTime_Array3=12513
,P_Anode_Align_Table_TackTime_Array4=12514
,P_Anode_Align_Table_TackTime_Array5=12515
,P_Anode_Align_Table_TackTime_Array6=12516
,P_Anode_Align_Table_TackTime_Array7=12517
,P_Anode_Align_Table_TackTime_Array8=12518
,P_Anode_Align_Table_TackTime_Array9=12519
,P_Anode_Align_Table_TackTime_Array10=12520
,P_Cathode_Align_Table_TackTime_Array0=12521
,P_Cathode_Align_Table_TackTime_Array1=12522
,P_Cathode_Align_Table_TackTime_Array2=12523
,P_Cathode_Align_Table_TackTime_Array3=12524
,P_Cathode_Align_Table_TackTime_Array4=12525
,P_Cathode_Align_Table_TackTime_Array5=12526
,P_Cathode_Align_Table_TackTime_Array6=12527
,P_Cathode_Align_Table_TackTime_Array7=12528
,P_Cathode_Align_Table_TackTime_Array8=12529
,P_Cathode_Align_Table_TackTime_Array9=12530
,P_Cathode_Align_Table_TackTime_Array10=12531
,P_Anode_NG_PNP_TackTime_Array0=12532
,P_Anode_NG_PNP_TackTime_Array1=12533
,P_Anode_NG_PNP_TackTime_Array2=12534
,P_Anode_NG_PNP_TackTime_Array3=12535
,P_Anode_NG_PNP_TackTime_Array4=12536
,P_Anode_NG_PNP_TackTime_Array5=12537
,P_Anode_NG_PNP_TackTime_Array6=12538
,P_Anode_NG_PNP_TackTime_Array7=12539
,P_Anode_NG_PNP_TackTime_Array8=12540
,P_Anode_NG_PNP_TackTime_Array9=12541
,P_Anode_NG_PNP_TackTime_Array10=12542
,P_Cathode_NG_PNP_TackTime_Array0=12543
,P_Cathode_NG_PNP_TackTime_Array1=12544
,P_Cathode_NG_PNP_TackTime_Array2=12545
,P_Cathode_NG_PNP_TackTime_Array3=12546
,P_Cathode_NG_PNP_TackTime_Array4=12547
,P_Cathode_NG_PNP_TackTime_Array5=12548
,P_Cathode_NG_PNP_TackTime_Array6=12549
,P_Cathode_NG_PNP_TackTime_Array7=12550
,P_Cathode_NG_PNP_TackTime_Array8=12551
,P_Cathode_NG_PNP_TackTime_Array9=12552
,P_Cathode_NG_PNP_TackTime_Array10=12553
,P_Sepa_Unwinder_TackTime_Array0=12554
,P_Sepa_Unwinder_TackTime_Array1=12555
,P_Sepa_Unwinder_TackTime_Array2=12556
,P_Sepa_Unwinder_TackTime_Array3=12557
,P_Sepa_Unwinder_TackTime_Array4=12558
,P_Sepa_Unwinder_TackTime_Array5=12559
,P_Sepa_Unwinder_TackTime_Array6=12560
,P_Sepa_Unwinder_TackTime_Array7=12561
,P_Sepa_Unwinder_TackTime_Array8=12562
,P_Sepa_Unwinder_TackTime_Array9=12563
,P_Sepa_Unwinder_TackTime_Array10=12564
,P_Sepa_Unwinder_TackTime_Array11=12565
,P_1st_Unloader_TackTime_Array0=12566
,P_1st_Unloader_TackTime_Array1=12567
,P_1st_Unloader_TackTime_Array2=12568
,P_1st_Unloader_TackTime_Array3=12569
,P_1st_Unloader_TackTime_Array4=12570
,P_1st_Unloader_TackTime_Array5=12571
,P_1st_Unloader_TackTime_Array6=12572
,P_1st_Unloader_TackTime_Array7=12573
,P_1st_Unloader_TackTime_Array8=12574
,P_1st_Unloader_TackTime_Array9=12575
,P_1st_Unloader_TackTime_Array10=12576
,P_Cathode_1st_Vacuum_TackTime_Array1=12577
,P_Cathode_1st_Vacuum_TackTime_Array2=12578
,P_Cathode_1st_Vacuum_TackTime_Array3=12579
,P_Cathode_1st_Vacuum_TackTime_Array4=12580
,P_Cathode_1st_Vacuum_TackTime_Array5=12581
,P_Cathode_1st_Vacuum_TackTime_Array6=12582
,P_Cathode_1st_Vacuum_TackTime_Array7=12583
,P_Cathode_1st_Vacuum_TackTime_Array8=12584
,P_Cathode_1st_Vacuum_TackTime_Array9=12585
,P_Cathode_1st_Vacuum_TackTime_Array10=12586
,P_Cathode_Align_Vacuum_TackTime_Array1=12587
,P_Cathode_Align_Vacuum_TackTime_Array2=12588
,P_Cathode_Align_Vacuum_TackTime_Array3=12589
,P_Cathode_Align_Vacuum_TackTime_Array4=12590
,P_Cathode_Align_Vacuum_TackTime_Array5=12591
,P_Cathode_Align_Vacuum_TackTime_Array6=12592
,P_Cathode_Align_Vacuum_TackTime_Array7=12593
,P_Cathode_Align_Vacuum_TackTime_Array8=12594
,P_Cathode_Align_Vacuum_TackTime_Array9=12595
,P_Cathode_Align_Vacuum_TackTime_Array10=12596
,P_Cathode_2nd_Vacuum_TackTime_Array1=12597
,P_Cathode_2nd_Vacuum_TackTime_Array2=12598
,P_Cathode_2nd_Vacuum_TackTime_Array3=12599
,P_Cathode_2nd_Vacuum_TackTime_Array4=12600
,P_Cathode_2nd_Vacuum_TackTime_Array5=12601
,P_Cathode_2nd_Vacuum_TackTime_Array6=12602
,P_Cathode_2nd_Vacuum_TackTime_Array7=12603
,P_Cathode_2nd_Vacuum_TackTime_Array8=12604
,P_Cathode_2nd_Vacuum_TackTime_Array9=12605
,P_Cathode_2nd_Vacuum_TackTime_Array10=12606
,P_Anode_1st_Vacuum_TackTime_Array1=12607
,P_Anode_1st_Vacuum_TackTime_Array2=12608
,P_Anode_1st_Vacuum_TackTime_Array3=12609
,P_Anode_1st_Vacuum_TackTime_Array4=12610
,P_Anode_1st_Vacuum_TackTime_Array5=12611
,P_Anode_1st_Vacuum_TackTime_Array6=12612
,P_Anode_1st_Vacuum_TackTime_Array7=12613
,P_Anode_1st_Vacuum_TackTime_Array8=12614
,P_Anode_1st_Vacuum_TackTime_Array9=12615
,P_Anode_1st_Vacuum_TackTime_Array10=12616
,P_Anode_Align_Vacuum_TackTime_Array1=12617
,P_Anode_Align_Vacuum_TackTime_Array2=12618
,P_Anode_Align_Vacuum_TackTime_Array3=12619
,P_Anode_Align_Vacuum_TackTime_Array4=12620
,P_Anode_Align_Vacuum_TackTime_Array5=12621
,P_Anode_Align_Vacuum_TackTime_Array6=12622
,P_Anode_Align_Vacuum_TackTime_Array7=12623
,P_Anode_Align_Vacuum_TackTime_Array8=12624
,P_Anode_Align_Vacuum_TackTime_Array9=12625
,P_Anode_Align_Vacuum_TackTime_Array10=12626
,P_Anode_2nd_Vacuum_TackTime_Array1=12627
,P_Anode_2nd_Vacuum_TackTime_Array2=12628
,P_Anode_2nd_Vacuum_TackTime_Array3=12629
,P_Anode_2nd_Vacuum_TackTime_Array4=12630
,P_Anode_2nd_Vacuum_TackTime_Array5=12631
,P_Anode_2nd_Vacuum_TackTime_Array6=12632
,P_Anode_2nd_Vacuum_TackTime_Array7=12633
,P_Anode_2nd_Vacuum_TackTime_Array8=12634
,P_Anode_2nd_Vacuum_TackTime_Array9=12635
,P_Anode_2nd_Vacuum_TackTime_Array10=12636
,P_Final_Roll_TackTime_Array1=12637
,P_Final_Roll_TackTime_Array2=12638
,P_Final_Roll_TackTime_Array3=12639
,P_Final_Roll_TackTime_Array4=12640
,P_Final_Roll_TackTime_Array5=12641
,P_Final_Roll_TackTime_Array6=12642
,P_Final_Roll_TackTime_Array7=12643
,P_Final_Roll_TackTime_Array8=12644
,P_Final_Roll_TackTime_Array9=12645
,P_Final_Roll_TackTime_Array10=12646
,P_Sepa_ARC_TackTime_Array1=12647
,P_Sepa_ARC_TackTime_Array2=12648
,P_Sepa_ARC_TackTime_Array3=12649
,P_Sepa_ARC_TackTime_Array4=12650
,P_Sepa_ARC_TackTime_Array5=12651
,P_Sepa_ARC_TackTime_Array6=12652
,P_Sepa_ARC_TackTime_Array7=12653
,P_Sepa_ARC_TackTime_Array8=12654
,P_Sepa_ARC_TackTime_Array9=12655
,P_Sepa_ARC_TackTime_Array10=12656
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array1=12657
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array2=12658
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array3=12659
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array4=12660
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array5=12661
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array6=12662
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array7=12663
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array8=12664
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array9=12665
,P_Cathode_1st_PNP_Vac_Chk_TackTime_Array10=12666
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array1=12667
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array2=12668
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array3=12669
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array4=12670
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array5=12671
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array6=12672
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array7=12673
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array8=12674
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array9=12675
,P_Anode_1st_PNP_Vac_Chk_TackTime_Array10=12676
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array1=12677
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array2=12678
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array3=12679
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array4=12680
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array5=12681
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array6=12682
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array7=12683
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array8=12684
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array9=12685
,P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array10=12686
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array1=12687
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array2=12688
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array3=12689
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array4=12690
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array5=12691
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array6=12692
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array7=12693
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array8=12694
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array9=12695
,P_Anode_2nd_PNP_Vac_Chk_TackTime_Array10=12696
,P_PACK_ML_Status_bit=12697
,P_Whole_Stacking_TackTime_MES_Report_Flag=12698
,P_JellyRoll_Out_TackTime_MES_Report_Flag=12699
,P_PV_Cathode_Count=12700
,P_PV_Anode_Count=12701
,P_PV_Cathode_NG_TR_NG_Count=12706
,P_PV_Anode_NG_TR_NG_Count=12707
,P_PV_Anode_Retry_NG_Count=12708
,P_PV_Cathode_Retry_NG_Count=12709
,P_PV_Align_INPUT_Count=12710
,P_Unloader_Grip_Pressure=12711
,P_Unloader_Heatmeter=12712
,P_EPC_Y_StandBy=12763
,P_SV_Read_Enable_Flag=12764
,P_Spool_Rotate_Distance_mm=12765
,P_Cathode_Clamp_Gantry=12866
,P_Anode_Clamp_Gantry=12867
,P_SV_Separator_Heting_Cutter_Change_Period=12868
,P_Cathode_Picker_Cylinder_Count=12881
,P_Anode_Picker_Cylinder_Count=12882
,P_SV_Stack_Table_Cathode_Reference_Value=12883
,P_SV_Stack_Table_Anode_Reference_Value=12884
,P_CA_DR_Offset=12885
,P_AN_DR_Offset=12886
,P_First_DR_Offset=12887
,P_Last_DR_Offset=12888
,P_BTN_QC_Sample_Flag=12889
,P_BTN_Loss_Sample_Flag=12890
,P_MSA_Sample_Flag=12891
,P_Sample_JR_Recipe_Count=12892
,P_Ca_Clamp_Y_Move=12893
,P_An_Clamp_Y_Move=12894
,P_Stack_Table_JR_Exist_Flag=12895
,P_Program_Monitoring_Lamp_Cell_Ready=12896
,P_Program_Monitoring_Lamp_Ready_Pos=12897
,P_Program_Monitoring_Lamp_Pause_Pos=12898
,P_Program_Monitoring_Lamp_Motion_Run=12899
,P_Program_Monitoring_Lamp_Cell_Remove=12900
,P_Program_Monitoring_Lamp_Cell_Supply=12901
,P_Program_Monitoring_Lamp_Sepa_Mode=12902
,P_Program_Monitoring_Lamp_Semi_Run=12903
,P_Program_Monitoring_Lamp_Stack_Mode=12904
,P_Program_Monitoring_Lamp_Anode_Aling_NG=12905
,P_Program_Monitoring_Lamp_Anode_Retry_NG=12906
,P_Program_Monitoring_Lamp_Cathode_Align_NG=12907
,P_Program_Monitoring_Lamp_Cathode_Retry_NG=12908
,P_Program_Monitoring_Lamp_Last_Stack_Mode=12909
,P_Program_Monitoring_Lamp_Jelly_Roll_OK=12910
,P_Program_Monitoring_Lamp_Jelly_Roll_NG=12911
,P_Program_Monitoring_Lamp_Jelly_Roll_Sepa=12912
,P_Program_Monitoring_Lamp_Cell_Out_Pos=12913
,P_Program_Monitoring_Lamp_Cell_Out_Mode=12914
,P_Master_Motion_Program_Flag=12915
,P_Master_Motion_CycleStop_Flag=12956
,P_PLC_08_Program_Ver=13007
,P_Old_PMAC_Commands=13008
,P_Old_PMAC_Status=13009
,P_Old_PMAC_Current_Mode=13010
,P_Mode_Function_State_Machine=13011
,P_PMAC_Commands=13012
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
,P_PMAC_Current_Mode=13247
,P_PMAC_Status=13248
,P_PMAC_Old_Mode=13249
,P_Ready_Tack_Chk_Timer=13250
,P_PLC09_Common_Command_Flag=13251
,P_PLC09_Common_Command_Complete_Bit=13252
,P_PLC09_Common_Execute_Flag=13253
,P_PLC09_Common_Execute_Complete_Bit=13254
,P_PLC09_Status=13255
,P_PLC09_Libraries_Var=13256
,P_Master_Motion_Program_ON_Flag=13257
,P_Master_Motion_Program_ON_Complete_Bit=13258
,P_Master_Motion_Program_OFF_Flag=13259
,P_Master_Motion_Program_OFF_Complete_Bit=13260
,P_Common_Function_Timbase_ON_Flag=13261
,P_Common_Function_Timbase_ON_Complete_Bit=13262
,P_Common_Function_Timbase_OFF_Flag=13263
,P_Common_Function_Timbase_OFF_Complete_Bit=13264
,P_Common_Function_Monitoring_Lamp_OFF_Flag=13265
,P_Common_Function_Monitoring_Lamp_OFF_Complete_Bit=13266
,P_Common_Function_Slave_Motion_Common_Init_Flag=13267
,P_Common_Function_Slave_Motion_Common_Init_Complete_Bit=13268
,P_Common_Function_OlD_Jog_Speed_Save_ON_Flag=13269
,P_Common_Function_OlD_Jog_Speed_Save_ON_Complete_Bit=13270
,P_Auto_Resetting_Sum_Ready_Pos_Check_Flag=13271
,P_Auto_Resetting_Sum_Ready_Pos_Check_Complete_bit=13272
,P_Manual_Resetting_Sum_Ready_Pos_Check_Flag=13273
,P_Manual_Resetting_Sum_Ready_Pos_Check_Complete_bit=13274
,P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Flag=13275
,P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Complete_Bit=13276
,P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Flag=13277
,P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Complete_Bit=13278
,P_Motion_Target_Position_Complete=13279
,P_SM_Auto_Run_Layer_Management=13280
,P_Buffer_Mode_Status_Sequence=13281
,P_SM_Sub_Function_Pause=13282
,P_PLC09_Resetting_Position_Check_State_Machine=13283
,P_PLC09_Resetting_Position_Moving_State_Machine=13284
,P_SM_Resetting_Pause_Position=13327
,P_20per_Vac_Error_Cycle_Stop_Flag=13328
,P_MNTR_PLC23_ARC_Complete=13329
,P_FUNCTION_PLC13_Sepa_Trigger_Enable=13330
,P_PLC_Recipe_PLC2_Revise_Sepa=13331
,P_Auto_Semi_Init_Status=13332
,P_Auto_Semi_Init_Chk_Bit=13333
,P_Old_PLC_HeartBit_Flag=13334
,P_PLC09_Init_Flag=13335
,P_Check_IDLE_CF_Flag=13336
,P_Check_EXECUTE_CF_Flag=13337
,P_Check_COMPLETING_CF_Flag=13338
,P_Check_COMPLETE_CF_Flag=13339
,P_Check_HOLDING_CF_Flag=13340
,P_Check_HOLD_CF_Flag=13341
,P_Check_UNHOLDING_CF_Flag=13342
,P_Check_SUSPENDING_CF_Flag=13343
,P_Check_SUSPENDED_CF_Flag=13344
,P_Check_UNSUSPENDING_CF_Flag=13345
,P_Check_STOPPED_CF_Flag=13346
,P_Check_ABORTED_CF_Flag=13347
,P_Check_CLEARING_CF_Flag=13348
,P_Check_IDLE_CF=13349
,P_Check_EXECUTE_CF=13350
,P_Check_COMPLETING_CF=13351
,P_Check_COMPLETE_CF=13352
,P_Check_HOLDING_CF=13353
,P_Check_HOLD_CF=13354
,P_Check_UNHOLDING_CF=13355
,P_Check_SUSPENDING_CF=13356
,P_Check_SUSPENDED_CF=13357
,P_Check_UNSUSPENDING_CF=13358
,P_Check_STOPPED_CF=13359
,P_Check_ABORTED_CF=13360
,P_Check_CLEARING_CF=13361
,P_Check_STOPPING_CF=13362
,P_Check_STARTING_CF=13363
,P_Check_RESETTING_CF=13364
,P_Check_STARTTING_CF=13365
,P_Queue_Clear=13366
,P_PLC09_Alarm_Test_Flag=13367
,P_PLC09_Test_Temp=13368
,P_PLC01_STOP_Queue_Complete_Flag=13369
,P_PMAC_All_Home_Cmd=13370
,P_PMAC_All_Home_Status=13371
,P_PMAC_Master_Following_Use_Flag=13372
,PnP_Belt_Waring_Pos=13373
,P_Old_X_PLC_Sync_Heart_Bit=13374
,P_Stack_Heart_Bit_Sync_Flag=13375
,P_Stack_Heart_Bit_Sunc_Complete_Bit=13376
,P_Resetting_Init_Module_RTN=13377
,P_PLC09_MNTR=13378
,P_Unloder_PNP_Home_IL_Pos=13379
,P_ECAT_Slave_Err_Bit=13380
,P_MC_Power_Down_Flag=13381
,P_Old_MC_Power_Down_Flag=13382
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
,P_Modbus_Delay_Timer=13383
,P_Modbus_Connect_Status=13384
,P_Modbus_Reconnect_MNTR=13385
,P_Ecat_Reconn_Chk_Lamp=13386
,P_MC_Reconn_Chk_Lamp=13387
,P_Cathode_1st_Vac_Set_Time=13388
,P_Cathode_2nd_Vac_Set_Time=13389
,P_Cathode_Align_Vac_Set_Time=13390
,P_Cathode_Align_Blow_Set_Time=13391
,P_Anode_1st_Vac_Set_Time=13392
,P_Anode_2nd_Vac_Set_Time=13393
,P_Sepa_Consume_Mode_Thickness_rate=13394
,P_Sepa_Anode_Recipe_Count=13395
,P_Sepa_Cathode_Recipe_Count=13396
,P_Discharge_Cathode_Recipe_Count=13397
,P_Discharge_Anode_Recipe_Count=13398
,P_Suspend_Discharge_Cathode_Counter=13399
,P_Suspend_Discharge_Anode_Counter=13400
,P_Suspend_Discharge_Waiting_Flag=13401
,P_Com_ARC_Sepa_Consume_Mode_Flag=13402
,P_Com_EPC_Sepa_Consume_Mode_Flag=13403
,P_Com_User_Sepa_Consume_Mode_Flag=13404
,P_Com_Dry_Mode_Flag=13405
,P_SM_Recipe_Value_Management=13406
,P_Sepa_Mode_Recipe_Count=13407
,P_Sepa_Mode_EPC_Recipe_Count=13408
,P_ARC_End_Sepa_Recipe_Count=13409
,P_Cathode_Align_Continuous_NG_Stop_Select=13510
,P_Anode_Align_Continuous_NG_Stop_Select=13511
,P_Stack_Vision_NG_Enable=13512
,P_Cathode_Surface_Continuous_NG_Stop_Select=13513
,P_Anode_Surface_Continuous_NG_Stop_Select=13514
,P_Anode_Trigger_IO_Test_Vision_PLC_Loop=13515
,P_Anode_Trigger_IO_Test_Motion_Loop=13516
,P_Cathode_Trigger_IO_Test_Vision_PLC_Loop=13517
,P_Cathode_Trigger_IO_Test_Motion_Loop=13518
,P_Stack_Trigger_IO_Test_Vision_PLC_Loop=13519
,P_Stack_Trigger_IO_Test_Motion_Loop=13520
,P_PLC12_Continuous_Buffer_Reset_Flag=13521
,P_PLC12_Anode_Sheet_Pick_Up_Flag=13537
,P_PLC12_Cathode_Sheet_Pick_Up_Flag=13538
,P_Hold_Anode_Sheet_Pick_Up_Flag=13539
,P_Hold_Cathode_Sheet_Pick_Up_Flag=13540
,P_Sheet_Interface_Complete_Pos=13541
,P_Anode_Sheet_Interface_Complete_Pos=13542
,P_Cathode_Sheet_Interface_Complete_Pos=13543
,P_Anode_2nd_TR_Maint_Check=13544
,P_Cathode_2nd_TR_Maint_Check=13545
,P_PLC12_Vacuum_1st_Cathode_MNTR_Timer=13583
,P_PLC12_Vacuum_2nd_Cathode_MNTR_Timer=13584
,P_PLC12_Vacuum_NG_Cathode_MNTR_Timer=13585
,P_PLC12_Vacuum_Align_Cathode_MNTR_Timer=13586
,P_PLC12_Vacuum_1st_Anode_MNTR_Timer=13587
,P_PLC12_Vacuum_2nd_Anode_MNTR_Timer=13588
,P_PLC12_Vacuum_NG_Anode_MNTR_Timer=13589
,P_PLC12_Vacuum_Align_Anode_MNTR_Timer=13590
,P_PLC12_Vacuum_1st_Cathode_Set_Time=13591
,P_PLC12_Vacuum_2nd_Cathode_Set_Time=13592
,P_PLC12_Vacuum_NG_Cathode_Set_Time=13593
,P_PLC12_Vacuum_Align_Cathode_Set_Time=13594
,P_PLC12_Vacuum_1st_Anode_Set_Time=13595
,P_PLC12_Vacuum_2nd_Anode_Set_Time=13596
,P_PLC12_Vacuum_NG_Anode_Set_Time=13597
,P_PLC12_Vacuum_Align_Anode_Set_Time=13598
,P_PLC12_Blow_1st_Cathode_MNTR_Timer=13639
,P_PLC12_Blow_2nd_Cathode_MNTR_Timer=13640
,P_PLC12_Blow_NG_Cathode_MNTR_Timer=13641
,P_PLC12_Blow_Align_Cathode_MNTR_Timer=13642
,P_PLC12_Blow_1st_Anode_MNTR_Timer=13643
,P_PLC12_Blow_2nd_Anode_MNTR_Timer=13644
,P_PLC12_Blow_NG_Anode_MNTR_Timer=13645
,P_PLC12_Blow_Align_Anode_MNTR_Timer=13646
,P_PLC12_Blow_1st_Cathode_Set_Time=13647
,P_PLC12_Blow_2nd_Cathode_Set_Time=13648
,P_PLC12_Blow_NG_Cathode_Set_Time=13649
,P_PLC12_Blow_Align_Cathode_Set_Time=13650
,P_PLC12_Blow_1st_Anode_Set_Time=13651
,P_PLC12_Blow_2nd_Anode_Set_Time=13652
,P_PLC12_Blow_NG_Anode_Set_Time=13653
,P_PLC12_Blow_Align_Anode_Set_Time=13654
,P_Vacuum_Reentry_Bit=13695
,P_Blow_Reentry_Bit=13696
,P_top=13777
,P_Queue_stack_top=13778
,P_Step_stack_top=13779
,P_Index_stack_top=13780
,P_Status_stack_top=13781
,NN_Step=13782
,NN_Index=13783
,P_PLC12_Frist=13789
,P_SM_Auto_Run_Status_Management=13790
,P_SM_Status_Main_Memory_Management=13791
,P_SM_Cell_Memory_Management=13792
,P_PLC12_Vacuum_Unit_Data=13825
,P_PLC12_Blow_Unit_Data=13826
,P_Stack_Algorithme_Cmd_Event_Status=13827
,P_PLC12_vacuum_Event_Status=13828
,P_PLC12_Blow_Event_status=13829
,P_PLC12_vacuum_DIO_Observer_Status=13830
,P_PLC12_Blow_DIO_Observer_Status=13831
,P_Resetting_Vacuum_MNTR_State_Machine=13832
,P_Heart_Bit_Time=13833
,P_Dancer_Angle_Alarm_Timer_Flag=13834
,P_Dancer_Angle_Alarm_Check_Timer=13835
,P_BTN_LED_LAMP=13836
,P_Old_BTN_LED_LAMP=13837
,P_PLC_TO_PMAC_Work_Confirm_Operation_Cnt=13838
,P_VISION_TO_PMAC_Work_Confirm_Operation_Ack_Cnt=13839
,P_Ca_AT_Retry_Cal_Move_Complete=13840
,P_An_AT_Retry_Cal_Move_Complete=13841
,P_Ca_AT_Retry_Cal_Cnt=13842
,P_An_AT_Retry_Cal_Cnt=13843
,P_Ca_AT_Retry_Cal_Complete=13844
,P_An_AT_Retry_Cal_Complete=13845
,P_An_AT_Retry_Cal_Pass=13846
,P_Ca_AT_Retry_Cal_Pass=13847
,P_Ca_Picker_T_Turn_Cnt_Flag=13848
,P_Ca_Picker_T_Turn_Cnt=13849
,P_Ca_Picker_T_Home_Type=13850
,P_An_Picker_T_Turn_Cnt_Flag=13851
,P_An_Picker_T_Turn_Cnt=13852
,P_An_Picker_T_Home_Type=13853
,P_Flag_Vac_Status_Initialize=13854
,P_SM_Vac_Initialize=13855
,P_Flag_Anode_1st_Vac_OFF=13856
,P_Flag_Anode_AT_Vac_OFF=13857
,P_Flag_Anode_2nd_Vac_OFF=13858
,P_Flag_Anode_NG_Vac_OFF=13859
,P_Flag_Cathode_1st_Vac_OFF=13860
,P_Flag_Cathode_AT_Vac_OFF=13861
,P_Flag_Cathode_2nd_Vac_OFF=13862
,P_Flag_Cathode_NG_Vac_OFF=13863
,P_Flag_Anode_1st_Vac_Initial_Alarm=13864
,P_Flag_Anode_AT_Vac_Initial_Alarm=13865
,P_Flag_Anode_2nd_Vac_Initial_Alarm=13866
,P_Flag_Anode_NG_Vac_Initial_Alarm=13867
,P_Flag_Cathode_1st_Vac_Initial_Alarm=13868
,P_Flag_Cathode_AT_Vac_Initial_Alarm=13869
,P_Flag_Cathode_2nd_Vac_Initial_Alarm=13870
,P_Flag_Cathode_NG_Vac_Initial_Alarm=13871
,P_Middle_Discharge_Ignore_Total_Count=13872
,P_Middle_Discharge_Ignore_Stack_Count=13873
,P_Middle_Discharge_Ignore_ON_Signal=13874
,P_Middle_Discharge_Ignore_OFF_Signal=13875
,P_Middle_Discharge_Ignore_Cell_Count=13876
,P_ARC_Middle_Discharge_Ignore_Vision_Check=13877
,P_ARC_Middle_Discharge_Ignore_ON_Flag=13878
,P_Middle_Discharge_Ignore_User_Sepa_Mode_Check=13879
,P_Flag_Sepa_Stack_Mode_CHK=13988
,P_Initialize_Read_Excom_Variables_Flag=14075
,P_Cathode_Clamp_MC_Cylinder_Count=14085
,P_Cathode_Clamp_OP_Cylinder_Count=14086
,P_Anode_Clamp_MC_Cylinder_Count=14087
,P_Anode_Clamp_OP_Cylinder_Count=14088
,P_Cathode_1ST_TR_Cylinder_Count=8003
,P_Anode_1ST_TR_Cylinder_Count=8004
,P_BTN_Cathode_Clamp_inside_Machine_Cylinder_Count_Clear=14089
,P_BTN_Cathode_Clamp_Middle_Cylinder_Count_Clear=14090
,P_BTN_Cathode_Clamp_outside_Machine_Cylinder_Count_Clear=14091
,P_BTN_Anode_Clamp_inside_Machine_Cylinder_Count_Clear=14092
,P_BTN_Anode_Clamp_Middle_Cylinder_Count_Clear=14093
,P_BTN_Anode_Clamp_outside_Machine_Cylinder_Count_Clear=14094
,P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear=14095
,P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear_Old=14096
,P_BTN_Anode_1ST_TR_Cylinder_Count_Clear=14097
,P_BTN_Anode_1ST_TR_Cylinder_Count_Clear_Old=14098
,P_RECIPE_PLC27_Manual_Interval=15114
,P_RECIPE_PLC27_Auto_Interval=15115
,P_Recipe_Speed_Value=15322
,P_Slave6_Target_X_For_Cell_Out=15323
,P_Poistion_error=15524
,P_Recipe_Count_Num=15575
,L_Motor_Status_Update_Interval=15576
,L_Motor_Recipe_Update_Interval=15577
,P_UI_Servo_On_Off=15578
,P_Jog_Sel_Count=15678
,P_User_Jog_Distance=15965
,P_BTN_Sel_Count=16316
,P_PC_BTN_No=16317
,P_BTN_Interlock_Update_Interval=16318
,P_Align_Table_Status_Update_Interval=16319
,P_Jelly_Roll_Total_Count_Old=16320
,P_Old_m4120=16321
,P_Old_m4121=16322
,P_Old_m4122=16323
,P_Old_m4123=16324
,P_Flag_Linear_Enc_Homezero_Complete_M17=16345
,P_Flag_Linear_Enc_Homezero_Complete_M18=16346
,P_Flag_Linear_Enc_Homezero_Complete_M19=16347
,P_Flag_Linear_Enc_Homezero_Complete_M20=16348
,P_CMD_Linear_ENC_Homezero_M17=16349
,P_CMD_Linear_ENC_Homezero_M18=16350
,P_CMD_Linear_ENC_Homezero_M19=16351
,P_CMD_Linear_ENC_Homezero_M20=16352
,P_RECIPE_PLC27_Alltime_Interval=16383
,P_Manual_Memory_Tower_Timer=16384
,P_Memory_Tower_Interval=16385
,P_PLC_14_Status_Cycle_Stop_Flag=16386
,P_Cathode_AlignTable_Cleaning_Pos_Status_Machine=16387
,P_Anode_AlignTable_Cleaning_Pos_Status_Machine=16388
,P_Status_Cathode_AlignTable_Cleaning_Pos=16389
,P_Status_Anode_AlignTable_Cleaning_Pos=16390
,P_CMD_Cathode_AlignTable_Cleaning_Pos=16391
,P_CMD_Anode_AlignTable_Cleaning_Pos=16392
,P_Cathode_2nd_pnp_Cleaning_Mode_Pos=16393
,P_Anode_2nd_pnp_Cleaning_Mode_Pos=16394
,P_Interlock_Test=16395
,P_PNP_Picker_T_Pos=16396
,P_NG_PNP_Pos=16397
,M_Old_X_BTN_Machine_READY=16398
,M_Old_X_BTN_Machine_START=16399
,M_Old_X_BTN_Machine_STOP=16400
,M_Old_X_BTN_Machine_RESET=16401
,M_Old_X_BTN_Machine_MODE=16402
,P_BTN_Motor_Pos_Check_RTN=16403
,P_BTN_Memory_Tower_Check_Bit=16404
,P_PMAC_Status_IDLE_Motor_Not_Pos=16405
,P_PMAC_Status_IDLE_Motor_Pos=16406
,P_BTN_Motor_Pos_Check_Monitor=16407
,P_PackML_Auto_Stop_Bit=16408
,P_BTN_IDLE_Motor_Not_Pos=16409
,M_X_BTN_Machine_Mode=16410
,M_Old_X_BTN_Machine_Mode=16411
,P_Lamp_Blinking_Timer=16412
,P_BTN_Ready_Lamp=16413
,P_BTN_Start_Lamp=16414
,P_BTN_Stop_Lamp=16415
,P_ARC_Name_Plate_Passive_Status=16416
,P_ARC_Passive_Status=16417
,P_NP_Spool_Number=16418
,P_ARC_Page_On=16419
,P_ARC_NP_Upper_Timer=16420
,P_ARC_Upper_Ready=16421
,P_ARC_NP_Upper_3rd_Step_Toggle_Variable=16422
,P_ARC_NP_Upper_7th_Step_Variable=16423
,P_ARC_NP_Upper_7th_Step_Edge_Variable=16424
,P_ARC_NP_Upper_Rot_ReRot_Blinking_Bit=16425
,P_ARC_NP_Lower_Timer=16426
,P_ARC_Lower_Ready=16427
,P_ARC_NP_Lower_3rd_Step_Toggle_Variable=16428
,P_ARC_NP_Lower_7th_Step_Variable=16429
,P_ARC_NP_Lower_7th_Step_Edge_Variable=16430
,P_ARC_NP_Lower_Rot_ReRot_Blinking_Bit=16431
,M_Old_X_ARC_NP_Ready=16432
,M_Old_X_ARC_NP_Unwinder_Rotation=16433
,M_Old_X_ARC_NP_Unwinder_Re_Rotation=16434
,P_Status_Clear_Flag=16435
,P_Status_Clear_RTN=16436
,P_MSA_BTN_On=16437
,P_Align_Take_Off_BTN_ON=16438
,P_ARC_NP_Upper_Ready_Check_Bit=16439
,P_ARC_NP_Lower_Ready_Check_Bit=16440
,P_Stopping_CycleStop_Status=16541
,P_Stopping_CycleStop_Seq_Index=16542
,P_Stopping_CycleStop_Precondition_Seq_Index=16543
,P_Stopping_CycleStop_Module_Status=16544
,P_Stopping_CycleStop_Cmd=16545
,P_Stopping_CycleStop_State_Machine=16546
,P_Final_Roll_Cathode_Pos_Status=16667
,P_Sheet_Paper_FWD_Pos_Status=16668
,P_Final_Roll_Vision_Pos_Status=16669
,P_Cathode_Clamp_ON_Status=16670
,P_Anode_Clamp_ON_Status=16671
,P_Anode_Clamp_OFF_Status=16672
,P_Partition_Up_Flag=16673
,P_Partition_Down_Flag=16674
,P_Partition_Avoid_Flag=16675
,P_Partition_Avoid_Z_Speed=16676
,P_Partition_Avoid_X_Speed=16677
,P_Partition_Avoid_T_Speed=16678
,P_Partition_Avoid_2nd_T_Pos=16679
,P_Partition_Step_Flag=16680
,P_Partition_1st_Avoid_Offset=16681
,P_Partition_Picker_Avoid_Offset=16682
,P_Partition_Avoid_Check=16683
,P_Anode_NG_PNP_Tact_Time_Start=16764
,P_Cathode_NG_PNP_Tact_Time_Start=16765
,P_Anode_NG_PNP_Tact_Time_End=16766
,P_Cathode_NG_PNP_Tact_Time_End=16767
,P_Tact_Time_Final_Roller_Clamp=16958
,P_Tact_Time_Final_Roller_Unclamp=16959
,P_Tact_Time_Stack_Table_Down=16960
,P_Tact_Time_Stack_Table_Up=16961
,P_Tact_Time_Sepa_Cutting_Down=16962
,P_Tact_Time_Sepa_Cutting_Up=16963
,P_Tact_Time_ARC_Upper_Plate_Up=16964
,P_Tact_Time_ARC_Upper_Plate_Down=16965
,P_Tact_Time_ARC_Upper_Tilting_On=16966
,P_Tact_Time_ARC_Upper_Tilting_Off=16967
,P_Tact_Time_ARC_Upper_Cutter_Fwd=16968
,P_Tact_Time_ARC_Upper_Cutter_Bwd=16969
,P_Tact_Time_ARC_Upper_Clamp_On=16970
,P_Tact_Time_ARC_Upper_Clamp_Off=16971
,P_Tact_Time_ARC_Lower_Plate_Up=16972
,P_Tact_Time_ARC_Lower_Plate_Down=16973
,P_Tact_Time_ARC_Lower_Tilting_On=16974
,P_Tact_Time_ARC_Lower_Tilting_Off=16975
,P_Tact_Time_ARC_Lower_Cutter_Fwd=16976
,P_Tact_Time_ARC_Lower_Cutter_Bwd=16977
,P_Tact_Time_ARC_Lower_Clamp_On=16978
,P_Tact_Time_ARC_Lower_Clamp_Off=16979
,P_Tact_Time_Save_Final_Roller_Clamp_Time=16980
,P_Tact_Time_Save_Final_Roller_Unclamp_Time=16981
,P_Tact_Time_Save_Stack_Table_Down_Time=16982
,P_Tact_Time_Save_Stack_Table_Up_Time=16983
,P_Tact_Time_Save_Sepa_Cutting_Down_Time=16984
,P_Tact_Time_Save_Sepa_Cutting_Up_Time=16985
,P_Tact_Time_Save_ARC_Upper_Plate_Up_Time=16986
,P_Tact_Time_Save_ARC_Upper_Plate_Down_Time=16987
,P_Tact_Time_Save_ARC_Upper_Tilting_On_Time=16988
,P_Tact_Time_Save_ARC_Upper_Tilting_Off_Time=16989
,P_Tact_Time_Save_ARC_Upper_Cutter_Fwd_Time=16990
,P_Tact_Time_Save_ARC_Upper_Cutter_Bwd_Time=16991
,P_Tact_Time_Save_ARC_Upper_Clamp_On_Time=16992
,P_Tact_Time_Save_ARC_Upper_Clamp_Off_Time=16993
,P_Tact_Time_Save_ARC_Lower_Plate_Up_Time=16994
,P_Tact_Time_Save_ARC_Lower_Plate_Down_Time=16995
,P_Tact_Time_Save_ARC_Lower_Tilting_On_Time=16996
,P_Tact_Time_Save_ARC_Lower_Tilting_Off_Time=16997
,P_Tact_Time_Save_ARC_Lower_Cutter_Fwd_Time=16998
,P_Tact_Time_Save_ARC_Lower_Cutter_Bwd_Time=16999
,P_Tact_Time_Save_ARC_Lower_Clamp_On_Time=17000
,P_Tact_Time_Save_ARC_Lower_Clamp_Off_Time=17001
,P_Tact_Time_Array_Init=17122
,P_Last_Run_To_Discharge_Tact_Timer=17123
,P_Last_Run_To_Discharge_Tact_Time=17124
,P_Master_Trigger_Sync_Tact_Timer=17125
,P_Master_Trigger_Sync_Tact_Time=17126
,P_Vision_First_Sepa_Stack_Align_OK_PMAC_Flag=17127
,P_PLC18_EPC_Retry_Mode_Time_Use_Flag=17128
,P_PLC18_Vision_EPC_Correction_Request_Old=17129
,P_PLC18_EPC_Moving_Flag=17130
,P_PLC18_EPC_Moving_Status=17131
,P_PLC18_EPC_Move_State_Machine=17132
,P_PLC18_EPC_Move_Status=17133
,P_PLC18_EPC_inspection_Time=17134
,P_EPC_Insp_Time=17135
,P_EPC_Correction_Time=17136
,P_TEST_Max_EPC_Sensor_Value_um=17137
,P_PLC18_EPC_Moving_Timer=17138
,P_EPC_Axis_Target_Y=17149
,P_Com_After_Sepa_Mode_Status=17150
,P_PLC18_PLC_to_PMAC_Correction_Value=17151
,P_PLC_EPC_Status=17152
,P_EPC_Retry_Over_Alarm_Flag=17153
,P_ARC_EPC_Vision_Value_Apply_Bit=17154
,P_ARC_EPC_Vision_Value_Apply_Flag=17155
,P_ARC_EPC_Vision_Value_Apply_State_Machine=17156
,P_ARC_EPC_Vision_Value_Apply_Timer=17157
,P_ARC_EPC_Vision_Value_Apply_Time=17158
,P_AH_Home_Status=17159
,P_Resetting_All_Home_Command=17160
,P_Homing_Alarm_Time=17161
,P_All_Home_Stop_Cmd=17212
,P_Home_First_Move=17213
,P_DD_M_Home_Pos_Flag=17300
,P_WAIT_INDEX=17301
,P_FR_Cmd_Check_Flag=17352
,P_PV_Separator_Dancer_Pressure=17353
,P_PV_Cathode_Clamp_Pressure=17354
,P_PV_Anoode_Clamp_Pressure=17355
,P_PV_Cathode_Final_Roller_X_Axis=17356
,P_PV_Anode_Final_Roller_X_Axis=17357
,P_PV_Cathode_Clamp_ON_Y1_Axis_Pos=17358
,P_PV_Cathode_Clamp_ON_Y2_Axis_Pos=17359
,P_PV_Cathode_Clamp_ON_Z1_Axis_Pos=17360
,P_PV_Cathode_Clamp_ON_Z2_Axis_Pos=17361
,P_PV_Anode_Clamp_ON_Y1_Axis_Pos=17362
,P_PV_Anode_Clamp_ON_Y2_Axis_Pos=17363
,P_PV_Anode_Clamp_ON_Z1_Axis_Pos=17364
,P_PV_Anode_Clamp_ON_Z2_Axis_Pos=17365
,P_PV_Cathode_2th_AT_T_Axis_Pos=17366
,P_PV_Cathode_2th_ST_T_Axis_Pos=17367
,P_PV_Cathode_2th_AT_Z_Axis_Pos=17368
,P_PV_Cathode_2th_ST_Z_Axis_Pos=17369
,P_PV_Anode_2th_AT_T_Axis_Pos=17370
,P_PV_Anode_2th_ST_T_Axis_Pos=17371
,P_PV_Anode_2th_AT_Z_Axis_Pos=17372
,P_PV_Anode_2th_ST_Z_Axis_Pos=17373
,P_PV_Cathode_1th_Ready_T_Axis_Pos=17374
,P_PV_Cathode_1th_CV_T_Axis_Pos=17375
,P_PV_Cathode_1th_AT_T_Axis_Pos=17376
,P_PV_Cathode_1th_Ready_Z_Axis_Pos=17377
,P_PV_Cathode_1th_CV_Z_Axis_Pos=17378
,P_PV_Cathode_1th_AT_Z_Axis_Pos=17379
,P_PV_Anode_1th_Ready_T_Axis_Pos=17380
,P_PV_Anode_1th_CV_T_Axis_Pos=17381
,P_PV_Anode_1th_AT_T_Axis_Pos=17382
,P_PV_Anode_1th_Ready_Z_Axis_Pos=17383
,P_PV_Anode_1th_CV_Z_Axis_Pos=17384
,P_PV_Anode_1th_AT_Z_Axis_Pos=17385
,P_PV_Cathode_NG_AT_T_Axis_Pos=17386
,P_PV_Cathode_NG_Box_T_Axis_Pos=17387
,P_PV_Anode_NG_AT_T_Axis_Pos=17388
,P_PV_Anode_NG_Box_T_Axis_Pos=17389
,P_SemiRun_Separator_Dancer_Pressure_Flag=17390
,P_SemiRun_Cathode_Clamp_Pressure_Flag=17391
,P_SemiRun_Anoode_Clamp_Pressure_Flag=17392
,P_SemiRun_Cathode_Final_Roller_X_Axis_Flag=17393
,P_SemiRun_Anode_Final_Roller_X_Axis_Flag=17394
,P_SemiRun_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag=17395
,P_SemiRun_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag=17396
,P_SemiRun_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag=17397
,P_SemiRun_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag=17398
,P_SemiRun_Cathode_2th_AT_T_Axis_Pos_Flag=17399
,P_SemiRun_Cathode_2th_ST_T_Axis_Pos_Flag=17400
,P_SemiRun_Cathode_2th_AT_Z_Axis_Pos_Flag=17401
,P_SemiRun_Cathode_2th_ST_Z_Axis_Pos_Flag=17402
,P_SemiRun_Anode_2th_AT_T_Axis_Pos_Flag=17403
,P_SemiRun_Anode_2th_ST_T_Axis_Pos_Flag=17404
,P_SemiRun_Anode_2th_AT_Z_Axis_Pos_Flag=17405
,P_SemiRun_Anode_2th_ST_Z_Axis_Pos_Flag=17406
,P_SemiRun_Cathode_1th_Ready_T_Axis_Pos_Flag=17407
,P_SemiRun_Cathode_1th_CV_T_Axis_Pos_Flag=17408
,P_SemiRun_Cathode_1th_AT_T_Axis_Pos_Flag=17409
,P_SemiRun_Cathode_1th_Ready_Z_Axis_Pos_Flag=17410
,P_SemiRun_Cathode_1th_CV_Z_Axis_Pos_Flag=17411
,P_SemiRun_Cathode_1th_AT_Z_Axis_Pos_Flag=17412
,P_SemiRun_Anode_1th_Ready_T_Axis_Pos_Flag=17413
,P_SemiRun_Anode_1th_CV_T_Axis_Pos_Flag=17414
,P_SemiRun_Anode_1th_AT_T_Axis_Pos_Flag=17415
,P_SemiRun_Anode_1th_Ready_Z_Axis_Pos_Flag=17416
,P_SemiRun_Anode_1th_CV_Z_Axis_Pos_Flag=17417
,P_SemiRun_Anode_1th_AT_Z_Axis_Pos_Flag=17418
,P_SemiRun_Cathode_NG_AT_T_Axis_Pos_Flag=17419
,P_SemiRun_Cathode_NG_Box_T_Axis_Pos_Flag=17420
,P_SemiRun_Anode_NG_AT_T_Axis_Pos_Flag=17421
,P_SemiRun_Anode_NG_Box_T_Axis_Pos_Flag=17422
,P_Motion_Separator_Dancer_Pressure_Flag=17423
,P_Motion_Cathode_Clamp_Pressure_Flag=17424
,P_Motion_Anoode_Clamp_Pressure_Flag=17425
,P_Motion_Cathode_Final_Roller_X_Axis_Flag=17426
,P_Motion_Anode_Final_Roller_X_Axis_Flag=17427
,P_Motion_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag=17428
,P_Motion_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag=17429
,P_Motion_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag=17430
,P_Motion_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag=17431
,P_Motion_Cathode_2th_AT_T_Axis_Pos_Flag=17432
,P_Motion_Cathode_2th_ST_T_Axis_Pos_Flag=17433
,P_Motion_Cathode_2th_AT_Z_Axis_Pos_Flag=17434
,P_Motion_Cathode_2th_ST_Z_Axis_Pos_Flag=17435
,P_Motion_Anode_2th_AT_T_Axis_Pos_Flag=17436
,P_Motion_Anode_2th_ST_T_Axis_Pos_Flag=17437
,P_Motion_Anode_2th_AT_Z_Axis_Pos_Flag=17438
,P_Motion_Anode_2th_ST_Z_Axis_Pos_Flag=17439
,P_Motion_Cathode_1th_Ready_T_Axis_Pos_Flag=17440
,P_Motion_Cathode_1th_CV_T_Axis_Pos_Flag=17441
,P_Motion_Cathode_1th_AT_T_Axis_Pos_Flag=17442
,P_Motion_Cathode_1th_Ready_Z_Axis_Pos_Flag=17443
,P_Motion_Cathode_1th_CV_Z_Axis_Pos_Flag=17444
,P_Motion_Cathode_1th_AT_Z_Axis_Pos_Flag=17445
,P_Motion_Anode_1th_Ready_T_Axis_Pos_Flag=17446
,P_Motion_Anode_1th_CV_T_Axis_Pos_Flag=17447
,P_Motion_Anode_1th_AT_T_Axis_Pos_Flag=17448
,P_Motion_Anode_1th_Ready_Z_Axis_Pos_Flag=17449
,P_Motion_Anode_1th_CV_Z_Axis_Pos_Flag=17450
,P_Motion_Anode_1th_AT_Z_Axis_Pos_Flag=17451
,P_Motion_Cathode_NG_AT_T_Axis_Pos_Flag=17452
,P_Motion_Cathode_NG_Box_T_Axis_Pos_Flag=17453
,P_Motion_Anode_NG_AT_T_Axis_Pos_Flag=17454
,P_Motion_Anode_NG_Box_T_Axis_Pos_Flag=17455
,P_Cathode_1PNP_Sacle_Value=17456
,P_Cathode_2PNP_Sacle_Value=17457
,P_Anode_1PNP_Sacle_Value=17458
,P_Anode_2PNP_Sacle_Value=17459
,P_PLC01_SemiRun_PV_Flag=17460
,P_PV_EPC_Index=17461
,P_BTN_MSA_Total_Value=17477
,P_Vision_Align_Trigger_Timer=17478
,P_Vision_Stack_Trigger_Timer=17479
,P_MSA_Chk_Pos_Timer=17480
,P_MSA_Chk_Pos_Time=17481
,P_VISION_MSA_Seq_Index=17502
,P_VISION_MSA_Anode_Align_Bit_Pos=17503
,P_VISION_MSA_Seq_PreCondition_Index=17504
,P_MSA_CycleStop_Point_Check_Complete_RTN=17505
,P_Current_Anode_Align_MSA_Run_Count=17511
,P_Current_Cathode_Align_MSA_Run_Count=17512
,P_Current_Anode_Stack_MSA_Run_Count=17513
,P_Current_Cathode_Stack_MSA_Run_Count=17514
,P_VISION_MSA_Align_Count_Chk_Flag=17515
,P_VISION_MSA_Stack_Count_Chk_Flag=17516
,P_VISION_MSA_pre_InterLock_Cmd=17517
,P_VISION_MSA_pre_InterLock_Status=17518
,P_VISION_MSA_pre_InterLock_Check_Assy_Bit=17519
,P_VISION_MSA_pre_InterLock_Assy_Bit_Pos=17520
,P_Vision_MSA_Interlock_Status=17521
,P_VISION_MSA_MODE=17522
,P_VISION_MSA_Status_Flag=17523
,P_VISION_MSA_State_Machine=17524
,P_VISION_MSA_Status=17525
,P_VISION_MSA_Seq_Command_Occurs=17526
,P_Vision_Align_Trigger_Time=17527
,P_Anode_Align_MSA_Motion_Check=17528
,P_Cathode_Align_MSA_Motion_Check=17529
,P_Anode_Stack_MSA_Motion_Check=17530
,P_Cathode_Stack_MSA_Motion_Check=17531
,P_Anode_Align_MSA_Motion_ProgActive_Complete=17532
,P_Cathode_Align_MSA_Motion_ProgActive_Complete=17533
,P_Anode_Stack_MSA_Motion_ProgActive_Complete=17534
,P_Cathode_Stack_MSA_Motion_ProgActive_Complete=17535
,P_BTN_Align_Off_Total_Value=17536
,P_Align_Take_Off_Status=17540
,P_Align_Take_Off_Mode=17541
,P_Align_Take_Off_Status_Flag=17542
,P_Align_Take_Off_State_Machine=17543
,P_Align_Take_Off_Chk_Pos_Timer=17544
,P_Align_Take_Off_Motor_Check_Complete=17545
,P_Align_Take_Off_Speed_Return_Complete=17546
,P_Align_Take_Off_Interlock_Status=17547
,P_Align_Take_Off_pre_InterLock_Cmd=17548
,P_Align_Take_Off_pre_InterLock_Status=17549
,P_Align_Take_Off_pre_InterLock_Check_Assy_Bit=17550
,P_Align_Take_Off_pre_InterLock_Assy_Bit_Pos=17551
,P_Align_Take_Off_Seq_Index=17552
,P_Align_Take_Off_Seq_PreCondition_Index=17553
,P_Align_Take_Off_Stop_Signal=17574
,P_Vision_Cal_Reset_Count=17575
,P_2nd_PNP_Cleaning_Mode_Cmd=17576
,P_2nd_PNP_Cleaning_Mode_Status=17577
,P_2nd_PNP_Cleaning_Mode_Z_Jog_Speed=17578
,P_2nd_PNP_Cleaning_Mode_X_Jog_Speed=17579
,P_2nd_PNP_Cleaning_Mode_T_Jog_Speed=17580
,P_2nd_PNP_Cleaning_Avoid_2nd_T_Pos=17581
,P_PNP_Vac_Chk_Mode_Interlock=17582
,P_Vac_Chk_Test=17583
,P_Anode_1st_PNP_Vac_Chk_Mode_Blocked=17584
,P_Cathode_1st_PNP_Vac_Chk_Mode_Blocked=17585
,P_Anode_2nd_PNP_Vac_Chk_Mode_Blocked=17586
,P_Cathode_2nd_PNP_Vac_Chk_Mode_Blocked=17587
,P_SM_Anode_1st_PNP_Vac_Chk_Mode=17588
,P_SM_Cathode_1st_PNP_Vac_Chk_Mode=17589
,P_SM_Anode_2nd_PNP_Vac_Chk_Mode=17590
,P_SM_Cathode_2nd_PNP_Vac_Chk_Mode=17591
,P_Anode_1st_PNP_Vac_Chk_Execute_Timer=17592
,P_Cathode_1st_PNP_Vac_Chk_Execute_Timer=17593
,P_Anode_2nd_PNP_Vac_Chk_Execute_Timer=17594
,P_Cathode_2nd_PNP_Vac_Chk_Execute_Timer=17595
,P_Anode_1st_PNP_Vac_Check_Timer=17596
,P_Cathode_1st_PNP_Vac_Check_Timer=17597
,P_Anode_2nd_PNP_Vac_Check_Timer=17598
,P_Cathode_2nd_PNP_Vac_Check_Timer=17599
,P_Anode_1st_PNP_Vac_Chk_Status=17600
,P_Cathode_1st_PNP_Vac_Chk_Status=17601
,P_Anode_2nd_PNP_Vac_Chk_Status=17602
,P_Cathode_2nd_PNP_Vac_Chk_Status=17603
,P_Anode_1st_PNP_Vac_Chk_Mode_Stop_Blocked=17604
,P_Cathode_1st_PNP_Vac_Chk_Mode_Stop_Blocked=17605
,P_Anode_2nd_PNP_Vac_Chk_Mode_Stop_Blocked=17606
,P_Cathode_2nd_PNP_Vac_Chk_Mode_Stop_Blocked=17607
,P_Anode_1st_PnP_Vac_Chk_Mode_RTN=17608
,P_Cathode_1st_PnP_Vac_Chk_Mode_RTN=17609
,P_Anode_2nd_PnP_Vac_Chk_Mode_RTN=17610
,P_Cathode_2nd_PnP_Vac_Chk_Mode_RTN=17611
,P_PNP_Vac_Chk_Mode_TimeBase_Rtn=17612
,P_PNP_Vac_Chk_Mode_Timer=17613
,P_Anode_1st_PNP_Vac_Chk_Mode_Err=17614
,P_Cathode_1st_PNP_Vac_Chk_Mode_Err=17615
,P_Anode_2nd_PNP_Vac_Chk_Mode_Err=17616
,P_Cathode_2nd_PNP_Vac_Chk_Mode_Err=17617
,P_PNP_Vac_Chk_Mode_BTN_Err=17618
,P_BTN_CA_1st_PNP_Vac_Chk_Mode=17619
,P_BTN_AN_1st_PNP_Vac_Chk_Mode=17620
,P_BTN_CA_2nd_PNP_Vac_Chk_Mode=17621
,P_BTN_AN_2nd_PNP_Vac_Chk_Mode=17622
,P_System_Cascading_ON_Cmd=17767
,P_System_Cascading_OFF_Cmd=17768
,P_System_Master_Following_ON_Cmd=17769
,P_System_Master_Following_OFF_Cmd=17770
,P_System_CamTable_ON_Cmd=17771
,P_System_CamTable_OFF_Cmd=17772
,P_System_Spool_Home_Ready_Pos_Cmd=17773
,P_System_Cascading_ON_Status=17774
,P_System_Cascading_OFF_Status=17775
,P_System_Master_Following_ON_Status=17776
,P_System_Master_Following_OFF_Status=17777
,P_System_CamTable_ON_Status=17778
,P_System_CamTable_OFF_Status=17779
,P_System_Spool_Home_Ready_Pos_Status=17780
,P_System_Cascading_ON_State_Machine=17781
,P_System_Cascading_OFF_State_Machine=17782
,P_System_Master_Follwing_ON_State_Machine=17783
,P_System_Master_Follwing_OFF_State_Machine=17784
,P_System_CamTable_ON_State_Machine=17785
,P_System_CamTable_OFF_State_Machine=17786
,P_System_Spool_Home_Ready_Pos_State_Machine=17787
,P_System_Cascading_ON_Complete_Flag=17788
,P_System_Cascading_OFF_Complete_Flag=17789
,P_System_Master_Following_ON_Complete_Flag=17790
,P_System_Master_Following_OFF_Complete_Flag=17791
,P_System_CamTable_ON_Complete_Flag=17792
,P_System_CamTable_OFF_Complete_Flag=17793
,P_System_Spool_Home_Ready_Pos_Complete_Flag=17794
,P_Servo_Dancer_Cascading_Off_Timer=17795
,P_Servo_Dancer_Cascading_Set_Timer=17796
,P_Dancer_Frist_Home_Ready_Pos_Timer=17797
,P_Driving_Motor_Use_Flag=17798
,P_Home_Spool_Unwinding=17799
,P_OutValue=17800
,P_Dancer_Out_Slew_Seq=17801
,P_OutChangeValue=17802
,P_Rot_OutValue=17803
,P_OutChangeTime=17804
,P_Regul_Max_kPa_Value=17815
,P_Regul_Min_kPa_Value=17816
,P_Regul_Max_AD=17817
,P_Regul_Min_AD=17818
,P_Current_Max_Value=17819
,P_Current_Min_Value=17820
,P_Current_Max_AD=17821
,P_Current_Min_AD=17822
,P_Sepa_Cal_Inclination=17823
,P_Regul_Cal_Inclination=17824
,P_Cutter_Heat_Amp_Data_Bit=17825
,P_Cut_Heat_Amp_Value=17826
,P_AI_Cathode_Clamp_Damper_AVG=17827
,P_AI_Anode_Clamp_Damper_AVG=17828
,P_Tension_Ready_Pos_Cmd=17829
,P_Tension_Ready_State_Machine=17830
,P_Tension_Ready_Pos_Status=17831
,P_Dancer_Center_Pos=17832
,P_Upper_Sepa_Cal_Inclination=17833
,P_Lower_Sepa_Cal_Inclination=17834
,P_Unwinder_Jogspeed=17835
,P_Cascading_First_Out=17836
,P_Dancer_Cur_Vdc=17837
,P_Dancer_Cur_Torque=17838
,P_Dancer_Cur_Newton=17839
,P_Dancer_Cur_Kgf=17840
,P_Board_IO_Count=17841
,P_Force_BTN_Address_Clear_Count=17842
,P_Force_BTN_Condition_Count=18227
,P_Old_Force_BTN_Mode=18228
,P_Force_BTN_Address_Count=18229
,P_Force_BTN_GPIO_Address_Count=18230
,P_Force_BTN_Ecat_Address_Count=18231
,P_Force_BTN_M_Variable_Save_Count=18232
,P_Force_BTN_M_Variable_Start_Num=18233
,P_Force_BTN_Normal_Mode_Status=18234
,P_Force_BTN_Normal_Mode_State_Machine=18235
,P_Force_BTN_Normal_Mode_Complete_Flag=18236
,P_Force_BTN_Force_Mode_Timer=18237
,P_Force_BTN_Force_Mode_Delay_Time=18238
,P_Force_BTN_Force_Mode_Status=18239
,P_Force_BTN_Force_Mode_State_Machine=18240
,P_Force_BTN_Force_Mode_Complete_Flag=18241
,P_Mem_Save_Error_Bit=18242
,P_Servo_Gain_Save_Command=18253
,P_Servo_Gain_Load_Command=18254
,P_Servo_Gain_Save_Flag=18255
,P_Servo_Gain_Load_Flag=18256
,P_Insert_Phase_Flag=18437
,P_Alarm_Occur_Flag=18538
,P_Alarm_Wait_Time=18543
,P_Alarm_Delay_Timer=18544
,P_Compare_Priority=18545
,P_Alarm_Report=18546
,P_Alarm_Num=18547
,P_Alarm_Index=18548
,P_First_Alarm_Flag=18549
,P_Servo_Alarm_Check=18680
,P_Ecat_Servo_Alarm_Check=18681
,P_IL_ON_OFF_Flag=19402
,P_IL_Coord_Robot=19403
,P_IL_Robot_Bit=19404
,P_IL_Outer_Status=19405
,P_Robot_Unit_Serch_Flag=19406
,P_IL_Home_Chk_Edge=19407
,P_IL_Sprint=19411
,P_IL_length=19412
,P_IL_Strcat=19413
,P_IL_Popup_Motor=19414
,P_IL_Motor_Page=19415
,P_IL_Recipe_Bit=19416
,P_Interlock_Popup_On_Flag=19417
,P_Motor_Page=19418
,P_OP_Side_Ca_PNP_Pos=19419
,P_OP_Side_An_PNP_Pos=19420
,P_OP_Side_PMAC_Cur_Mode=19421
,P_Abs_Trans_Cur_Pos=19422
,P_Minus_IL_Offset=19423
,P_Plus_IL_Offset=19424
,P_2nd_PNP_Arm_Radius=19425
,P_IL_Enable_Flag=19426
,P_Plus_Interlock_Bit=19427
,P_Minus_Interlock_Bit=19428
,UPPos=19429
,Unloader_In_StackPos=19430
,FR_AnodePos=19431
,FR_CathodePos=19432
,Before_In_Stack=19433
,In_Stack=19434
,P_Minus_Collision_Risk_Motor=19437
,P_IL_Clamp_Y=19438
,P_IL_Clamp_Z=19439
,P_IL_Clamp_Pos=19440
,P_IL_Use_FR_Clamp_Pos=19441
,P_Ca_1st_Plus_IL_Offset=19842
,P_Ca_1st_Minus_IL_Offset=19843
,P_An_1st_Plus_IL_Offset=19844
,P_An_1st_Minus_IL_Offset=19845
,P_Z_Pos_Data=19864
,P_Clamp_Z_Plus_IL_Offset=19865
,P_FR_Z_Minus_IL_Offset=19870
,P_X_PLC_InterLock=19926
,P_IL_Home_Chk=19927
,P_IL_Home_Chk_Motor_Update=19948
,P_IL_Inside_Home_Chk_Complete=19949
,P_IL_Outside_Home_Chk_Complete=19950
,P_IL_Motor_Home_Chk_RTN=19951
,P_IL_Function_Cnt=19952
,P_IL_Function_Motor_Num=19953
,P_Jog_Page_Flag=19954
,P_Anode_1st_TR_Belt_Down_Flag=19955
,P_Anode_1st_TR_Belt_Pick_Up_Flag=19956
,P_Anode_1st_TR_Align_Down_Flag=19957
,P_Anode_2nd_TR_Align_Pick_Up_Flag=19958
,P_Anode_2nd_TR_Stack_Down_Flag=19959
,P_Anode_NG_TR_Align_Pick_Up_Flag=19960
,P_Anode_NG_TR_NG_Place_Down_Flag=19961
,P_Anode_2nd_TR_Align_Down_Flag=19962
,P_Anode_1st_TR_Align_Pick_Up_Flag=19963
,P_Anode_1st_TR_Belt_Down_State_Machine=19964
,P_Anode_1st_TR_Belt_Down_Status=19965
,P_Anode_1st_TR_Belt_Pick_Up_State_Machine=19966
,P_Anode_1st_TR_Belt_Pick_Up_Status=19967
,P_Anode_1st_TR_Align_Down_State_Machine=19968
,P_Anode_1st_TR_Align_Down_Status=19969
,P_Anode_2nd_TR_Align_Pick_Up_State_Machine=19970
,P_Anode_2nd_TR_Align_Pick_Up_Status=19971
,P_Anode_2nd_TR_Stack_Down_State_Machine=19972
,P_Anode_2nd_TR_Stack_Down_Status=19973
,P_Anode_NG_TR_Align_Pick_Up_State_Machine=19974
,P_Anode_NG_TR_Align_Pick_Up_Status=19975
,P_Anode_NG_TR_NG_Place_Down_State_Machine=19976
,P_Anode_NG_TR_NG_Place_Down_Status=19977
,P_Anode_2nd_TR_Align_Down_State_Machine=19978
,P_Anode_2nd_TR_Align_Down_Status=19979
,P_Anode_1st_TR_Align_Pick_Up_State_Machine=19980
,P_Anode_1st_TR_Align_Pick_Up_Status=19981
,P_Cathode_1st_TR_Belt_Down_Flag=19982
,P_Cathode_1st_TR_Belt_Pick_Up_Flag=19983
,P_Cathode_1st_TR_Align_Down_Flag=19984
,P_Cathode_2nd_TR_Align_Pick_Up_Flag=19985
,P_Cathode_2nd_TR_Stack_Down_Flag=19986
,P_Cathode_NG_TR_Align_Pick_Up_Flag=19987
,P_Cathode_NG_TR_NG_Place_Down_Flag=19988
,P_Cathode_2nd_TR_Align_Down_Flag=19989
,P_Cathode_1st_TR_Align_Pick_Up_Flag=19990
,P_Cathode_1st_TR_Belt_Down_State_Machine=19991
,P_Cathode_1st_TR_Belt_Down_Status=19992
,P_Cathode_1st_TR_Belt_Pick_Up_State_Machine=19993
,P_Cathode_1st_TR_Belt_Pick_Up_Status=19994
,P_Cathode_1st_TR_Align_Down_State_Machine=19995
,P_Cathode_1st_TR_Align_Down_Status=19996
,P_Cathode_2nd_TR_Align_Pick_Up_State_Machine=19997
,P_Cathode_2nd_TR_Align_Pick_Up_Status=19998
,P_Cathode_2nd_TR_Stack_Down_State_Machine=19999
,P_Cathode_2nd_TR_Stack_Down_Status=20000
,P_Cathode_NG_TR_Align_Pick_Up_State_Machine=20001
,P_Cathode_NG_TR_Align_Pick_Up_Status=20002
,P_Cathode_NG_TR_NG_Place_Down_State_Machine=20003
,P_Cathode_NG_TR_NG_Place_Down_Status=20004
,P_Cathode_2nd_TR_Align_Down_State_Machine=20005
,P_Cathode_2nd_TR_Align_Down_Status=20006
,P_Cathode_1st_TR_Align_Pick_Up_State_Machine=20007
,P_Cathode_1st_TR_Align_Pick_Up_Status=20008
,P_Old_Anode_Belt_ASCII=20009
,P_Old_Cathode_Belt_ASCII=20010
,P_Anode_Belt_ASCII=20011
,P_Cathode_Belt_ASCII=20012
,P_Check_Vac_Time=20013
,P_Send_Anode_NG_Code_To_PLC=20014
,P_Receive_Anode_NG_Code_From_PLC=20015
,P_Send_Cathode_NG_Code_To_PLC=20016
,P_Receive_Cathode_NG_Code_From_PLC=20017
,P_Current_Cell_Memory_Anode_1P=20018
,P_Current_Cell_Memory_Anode_AT=20019
,P_Current_Cell_Memory_Anode_2P=20020
,P_Current_Cell_Memory_Cathode_1P=20021
,P_Current_Cell_Memory_Cathode_AT=20022
,P_Current_Cell_Memory_Cathode_2P=20023
,P_Current_Cell_Memory_Stack_Table=20024
,P_Current_Cell_Memory_Cathode_NG_TR=20025
,P_Current_Cell_Memory_Anode_NG_TR=20026
,P_BTN_Anode_1st_TR_Buffer_Clear=20027
,P_BTN_Anode_2nd_TR_Buffer_Clear=20028
,P_BTN_Anode_Align_Buffer_Clear=20029
,P_BTN_Anode_NG_TR_Buffer_Clear=20030
,P_BTN_Cathode_1st_TR_Buffer_Clear=20031
,P_BTN_Cathode_2nd_TR_Buffer_Clear=20032
,P_BTN_Cathode_Align_Buffer_Clear=20033
,P_BTN_Cathode_NG_TR_Buffer_Clear=20034
,P_Old_BTN_Anode_1st_TR_Buffer_Clear=20035
,P_Old_BTN_Anode_2nd_TR_Buffer_Clear=20036
,P_Old_BTN_Anode_Align_Buffer_Clear=20037
,P_Old_BTN_Anode_NG_TR_Buffer_Clear=20038
,P_Old_BTN_Cathode_1st_TR_Buffer_Clear=20039
,P_Old_BTN_Cathode_2nd_TR_Buffer_Clear=20040
,P_Old_BTN_Cathode_Align_Buffer_Clear=20041
,P_Old_BTN_Cathode_NG_TR_Buffer_Clear=20042
,P_Send_Anode_NG_Code_Flag=20043
,P_Send_Cathode_NG_Code_Flag=20044
,P_Anode_Vision_NG_To_PLC_Flag=20045
,P_Cathode_Vision_NG_To_PLC_Flag=20046
,P_Status_Clear_Sheet_Maint_Check=20047
,P_Single_Run_Start_Flag=20048
,P_Single_Run_Control_State_Machine=20049
,P_Single_Run_Control_Status=20050
,P_Single_Run_Execute_Bit=20051
,P_User_Dry_Run_Mode=20052
,P_Single_Run_State_Machine=20053
,P_Single_Run_Status=20054
,P_Single_Run_Unit=20055
,P_Single_Run_Evade_Pos_RTN=20056
,P_Single_Run_Evade_Pos_Check_RTN=20057
,P_Single_Run_Pos_Rtn1=20058
,P_Single_Run_Pos_Rtn2=20059
,P_Single_Run_Motion_Ready_RTN=20060
,P_Single_Run_Execution_Interlock_RTN=20061
,P_Single_Run_Coord_Activate_RTN=20062
,P_Single_Run_Coord_Activate_Check_RTN=20063
,P_Single_Run_Select_Run_Mode_RTN=20064
,P_Single_Run_Execution_Run_RTN=20065
,P_Single_Run_Motion_Ready_State_Machine=20066
,P_Coord_1=20067
,P_Coord_2=20068
,P_Coord_3=20069
,P_Coord_4=20070
,P_Final_Roll_Z_Motion_Flag=20071
,P_Final_Roll_Z_Motion_State_Machine=20072
,P_Main_Z_Motion_Flag=20073
,P_Main_Z_Motion_State_Machine=20074
,P_Single_Run_Mode_Flag=20075
,P_Cathode_AT_Motion_Flag=20076
,P_Cathode_Align_Motion_State_Machine=20077
,P_Anode_AT_Motion_Flag=20078
,P_Anode_Align_Motion_State_Machine=20079
,P_Sheet_Paper_Motion_Flag=20080
,P_Sheet_Paper_Motion_State_Machine=20081
,P_Cathode_NG_PNP_T_Motion_Flag=20082
,P_Cathode_NG_PNP_T_Motion_State_Machine=20083
,P_Cathode_NG_PNP_Z_Motion_Flag=20084
,P_Cathode_NG_PNP_Z_Motion_State_Machine=20085
,P_Anode_NG_PNP_T_Motion_Flag=20086
,P_Anode_NG_PNP_T_Motion_State_Machine=20087
,P_Anode_NG_PNP_Z_Motion_Flag=20088
,P_Anode_NG_PNP_Z_Motion_State_Machine=20089
,P_1st_UND_X_Motion_Flag=20090
,P_1st_UND_X_Motion_State_Machine=20091
,P_1st_UND_Z_Motion_Flag=20092
,P_1st_UND_Z_Motion_State_Machine=20093
,P_1st_UND_T_Motion_Flag=20094
,P_1st_UND_T_Motion_State_Machine=20095
,P_Cathode_Run_Command_Flag=20096
,P_Anode_Run_Command_Flag=20097
,P_NG_PNP_Uint_Motion_Flag=20098
,P_NG_PNP_Uint_State_Machine=20099
,P_NG_PNP_Motion_Cnt=20100
,P_Single_Run_Timer=20111
,P_Single_Run_Align_Timer=20112
,P_Single_Run_Align_Timer2=20113
,P_Single_Run_Finall_Roll_Z_Timer=20114
,P_Single_RuN_MAIN_Z_Timer=20115
,P_Single_Run_Sheet_Paper_Timer=20116
,P_Single_Run_Debug_SM=20117
,P_Error_Monitoring_Count_1=20118
,P_Error_Monitoring_Count_2=20119
,P_Error_Monitoring_Count_3=20120
,P_Error_Monitoring_Count_4=20121
,P_Error_Monitoring_Count_5=20122
,P_Old_Single_Run_Mode_Flag=20123
,P_Old_Current_Mode=20124
,P_Single_Run_Timebase_Off_RTN=20125
,P_Single_Run_Stop_State_Machine=20126
,P_Single_Run_Stop_Status=20127
,P_Single_Run_Stop_Timer=20128
,P_Single_Run_Stop_Init_RTN=20129
,P_Single_Run_Stop_Btn_Chk=20130
,P_Single_Run_Stop_Command=20131
,P_Motor_Ready_Poa_Inpos_200um=20132
,P_Ecat_Parameter_Write_Flag=20133
,P_Ecat_Parameter_Read_Flag=20134
,P_Ecat_Each_Parameter_Write_Flag=20135
,P_Ecat_Slave_Idx=20136
,P_Ec_Num=20137
,P_Ecat_Read_Motor_Num=20138
,P_Ecat_Write_Motor_Num=20139
,P_Ecat_Parameter_Write_State_Machine=20140
,P_Ecat_Parameter_Read_State_Machine=20141
,P_Ecat_Each_Parameter_Write_State_Machine=20142
,P_Ecat_Write_Status=20263
,P_Ecat_Read_Status=20264
,P_Ecat_Each_Write_Status=20265
,P_Align_Plus_Blow_Test=20826
,P_System_Setting_Flag=20827
,P_Ecat_Setting_Flag=20828
,P_Ecat_Activation_State_Machine=20829
,P_PLC31_Ecat_Retry_Cnt=20830
,P_Ecat_Connect_Result=20831
,P_Ecat_Slave_Error=20832
,P_PWM_AbsPhasePosOffset_Change_State_Machine=20833
,P_AbsPhasePosOffset_Change_Complete=20834
,P_PWM_AbsPhasing_Fail=20835
,P_PWM_AbsPhasing_Complete=20836
,P_Whole_Stacking_Tack_Time=20837
,P_Whole_Stacking_Tack_Time_Check=20838
,P_Whole_Stacking_Tack_Timer_Check_Flag=20839
,P_Whole_Stacking_Timer_Shift_Status_Machine=20840
,P_Whole_Stacking_TackTime_Array0=20841
,P_Whole_Stacking_TackTime_Array1=20842
,P_Whole_Stacking_TackTime_Array2=20843
,P_Whole_Stacking_TackTime_Array3=20844
,P_Whole_Stacking_TackTime_Array4=20845
,P_Whole_Stacking_TackTime_Array5=20846
,P_Whole_Stacking_TackTime_Array6=20847
,P_Whole_Stacking_TackTime_Array7=20848
,P_Whole_Stacking_TackTime_Array8=20849
,P_Whole_Stacking_TackTime_Array9=20850
,P_Whole_Stacking_TackTime_Array10=20851
,P_First_Stacking_Start=20852
,P_Last_Stacking_Complete=20853
,P_Stacking_Tack_Time=20854
,P_Stacking_Tack_Time_Check=20855
,P_Stacking_Tack_Timer_Check_Flag=20856
,P_Stacking_Timer_Shift_Status_Machine=20857
,P_Cathode_to_Anode_FR_Tack_Time_Check=20858
,P_Anode_to_Cathode_FR_Tack_Time_Check=20859
,P_Cathode_to_Anode_FR_Tack_Time_Start=20860
,P_Anode_to_Cathode_FR_Tack_Time_Start=20861
,P_Cathode_to_Anode_FR_Tack_Time_Complete=20862
,P_Anode_to_Cathode_FR_Tack_Time_Complete=20863
,P_Cathode_to_Anode_FR_Time=20864
,P_Anode_to_Cathode_FR_Time=20865
,P_Cathode_to_Anode_FR_Tack_Timer_Check_Flag=20866
,P_Anode_to_Cathode_FR_Tack_Timer_Check_Flag=20867
,P_Anode_Align_Table_Time=20868
,P_Anode_Align_Table_Tack_Time_Check=20869
,P_Anode_Align_Table_Tack_Timer_Check_Flag=20870
,P_Anode_Align_Table_Timer_Shift_Status_Machine=20871
,P_Anode_Align_Tack_Time_Start=20872
,P_Anode_Align_Tack_Time_Complete=20873
,P_Cathode_Align_Table_Time=20874
,P_Cathode_Align_Table_Tack_Time_Check=20875
,P_Cathode_Align_Table_Tack_Timer_Check_Flag=20876
,P_Cathode_Align_Table_Timer_Shift_Status_Machine=20877
,P_Cathode_Align_Tack_Time_Start=20878
,P_Cathode_Align_Tack_Time_Complete=20879
,P_Anode_1th_Tack_Time_Start=20880
,P_Anode_1th_Tack_Time_Complete=20881
,P_Anode_1th_Time=20882
,P_Anode_1th_Tack_Time_Check=20883
,P_Anode_1th_Tack_Timer_Check_Flag=20884
,P_Anode_1th_Timer_Shift_Status_Machine=20885
,P_Cathode_1th_Tack_Time_Start=20886
,P_Cathode_1th_Tack_Time_Complete=20887
,P_Cathode_1th_Time=20888
,P_Cathode_1th_Tack_Time_Check=20889
,P_Cathode_1th_Tack_Timer_Check_Flag=20890
,P_Cathode_1th_Timer_Shift_Status_Machine=20891
,P_Anode_2th_Tack_Time_Start=20892
,P_Anode_2th_Tack_Time_Complete=20893
,P_Anode_2th_Time=20894
,P_Anode_2th_Tack_Time_Check=20895
,P_Anode_2th_Tack_Timer_Check_Flag=20896
,P_Anode_2th_Timer_Shift_Status_Machine=20897
,P_Cathode_2th_Tack_Time_Start=20898
,P_Cathode_2th_Tack_Time_Complete=20899
,P_Cathode_2th_Time=20900
,P_Cathode_2th_Tack_Time_Check=20901
,P_Cathode_2th_Tack_Timer_Check_Flag=20902
,P_Cathode_2th_Timer_Shift_Status_Machine=20903
,P_Anode_1th_NG_Tack_Time_Start=20904
,P_Anode_1th_NG_Tack_Time_Complete=20905
,P_Anode_1th_NG_Time=20906
,P_Anode_1th_NG_Tack_Time_Check=20907
,P_Anode_1th_NG_Tack_Timer_Check_Flag=20908
,P_Anode_1th_NG_Timer_Shift_Status_Machine=20909
,P_Cathode_1th_NG_Tack_Time_Start=20910
,P_Cathode_1th_NG_Tack_Time_Complete=20911
,P_Cathode_1th_NG_Time=20912
,P_Cathode_1th_NG_Tack_Time_Check=20913
,P_Cathode_1th_NG_Tack_Timer_Check_Flag=20914
,P_Cathode_1th_NG_Timer_Shift_Status_Machine=20915
,P_Anode_Clamp_Tack_Time_Start=20916
,P_Anode_Clamp_Tack_Time_Complete=20917
,P_Anode_Clamp_Time=20918
,P_Anode_Clamp_Tack_Time_Check=20919
,P_Anode_Clamp_Tack_Timer_Check_Flag=20920
,P_Anode_Clamp_Timer_Shift_Status_Machine=20921
,P_Cathode_Clamp_Tack_Time_Start=20922
,P_Cathode_Clamp_Tack_Time_Complete=20923
,P_Cathode_Clamp_Time=20924
,P_Cathode_Clamp_Tack_Time_Check=20925
,P_Cathode_Clamp_Tack_Timer_Check_Flag=20926
,P_Cathode_Clamp_Timer_Shift_Status_Machine=20927
,P_Final_Roll_X_Timer_Shift_Status_Machine=20928
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array0=20929
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array1=20930
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array2=20931
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array3=20932
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array4=20933
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array5=20934
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array6=20935
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array7=20936
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array8=20937
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array9=20938
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array10=20939
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array0=20940
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array1=20941
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array2=20942
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array3=20943
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array4=20944
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array5=20945
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array6=20946
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array7=20947
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array8=20948
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array9=20949
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array10=20950
,P_MCC_Anode_Align_NG_Count=21005
,P_MCC_Cathode_Align_NG_Count=21006
,P_MCC_Anode_Retry_NG_Count=21007
,P_MCC_Cathode_Retry_NG_Count=21008
,P_Discharge_Hold_Timer=21021
,P_Discharge_Hold_Time=21022
,P_AN_1st_Z_Zero_Angle=21023
,P_AN_1st_Z_Zero_Length=21024
,P_Anode_1st_PNP_Z_Crank_Zero_Pos=21025
,P_Anode_1st_PNP_Z_Crank_real_Move_Pos=21026
,P_Anode_1st_PNP_Z_Crank_radian=21027
,P_Anode_1st_PNP_Z_Acos_denominator=21028
,P_Anode_1st_PNP_Z_Acos_numerator=21029
,P_Anode_1st_PNP_Z_Crank_Angle=21030
,P_Anode_1st_PNP_Z_Real_Move_Pos=21031
,P_Anode_1st_Fwd_Bwd_Rise=21032
,P_CA_1st_Z_Zero_Angle=21033
,P_CA_1st_Z_Zero_Length=21034
,P_Cathode_1st_PNP_Z_Crank_Zero_Pos=21035
,P_Cathode_1st_PNP_Z_Crank_real_Move_Pos=21036
,P_Cathode_1st_PNP_Z_Crank_radian=21037
,P_Cathode_1st_PNP_Z_Acos_denominator=21038
,P_Cathode_1st_PNP_Z_Acos_numerator=21039
,P_Cathode_1st_PNP_Z_Crank_Angle=21040
,P_Cathode_1st_PNP_Z_Real_Move_Pos=21041
,P_Cathode_1st_Fwd_Bwd_Rise=21042
,P_AN_2nd_Z_Zero_Angle=21043
,P_AN_2nd_Z_Zero_Length=21044
,P_Anode_2nd_PNP_Z_Crank_Zero_Pos=21045
,P_Anode_2nd_PNP_Z_Crank_real_Move_Pos=21046
,P_Anode_2nd_PNP_Z_Crank_radian=21047
,P_Anode_2nd_PNP_Z_Acos_denominator=21048
,P_Anode_2nd_PNP_Z_Acos_numerator=21049
,P_Anode_2nd_PNP_Z_Crank_Angle=21050
,P_Anode_2nd_PNP_Z_Real_Move_Pos=21051
,P_Anode_2nd_Fwd_Bwd_Rise=21052
,P_CA_2nd_Z_Zero_Angle=21053
,P_CA_2nd_Z_Zero_Length=21054
,P_Cathode_2nd_PNP_Z_Crank_Zero_Pos=21055
,P_Cathode_2nd_PNP_Z_Crank_real_Move_Pos=21056
,P_Cathode_2nd_PNP_Z_Crank_radian=21057
,P_Cathode_2nd_PNP_Z_Acos_denominator=21058
,P_Cathode_2nd_PNP_Z_Acos_numerator=21059
,P_Cathode_2nd_PNP_Z_Crank_Angle=21060
,P_Cathode_2nd_PNP_Z_Real_Move_Pos=21061
,P_Cathode_2nd_Fwd_Bwd_Rise=21062
,P_Old_Recipe_Anode_1st_PNP_Z_Ready_Up=21063
,P_Old_Recipe_Anode_1st_PNP_Z_Belt_Up=21064
,P_Old_Recipe_Anode_1st_PNP_Z_Belt_Down=21065
,P_Old_Recipe_Anode_1st_PNP_Z_Align_Up=21066
,P_Old_Recipe_Anode_1st_PNP_Z_Align_Down=21067
,P_Old_Recipe_Cathode_1st_PNP_Z_Ready_Up=21068
,P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Up=21069
,P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Down=21070
,P_Old_Recipe_Cathode_1st_PNP_Z_Align_Up=21071
,P_Old_Recipe_Cathode_1st_PNP_Z_Align_Down=21072
,P_Old_Recipe_Anode_2nd_PNP_Z_Align_Up=21073
,P_Old_Recipe_Anode_2nd_PNP_Z_Align_Down=21074
,P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Up=21075
,P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Down=21076
,P_Old_Recipe_Anode_2nd_PNP_Z_Ready_Up=21077
,P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Up=21078
,P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Down=21079
,P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Up=21080
,P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Down=21081
,P_Old_Recipe_Cathode_2nd_PNP_Z_Ready_Up=21082
,P_PLC19_All_Home_Status=21083
,P_PLC19_All_Home_Module_Status=21084
,P_PLC19_All_Home_State_Machine=21085
,P_PLC19_All_Home_Seq_Index=21086
,P_PLC19_All_Home_Self_Index=21087
,P_PLC19_All_Home_Set_Mode_Return=21088
,P_PLC19_All_Home_Timer=21089
,P_PLC19_All_Home_Tact_Time=21110
,P_All_Home_Module_Error=21111
,P_Act_ALL_Home_Time_Out_Time=21112
,P_Act_Hold_Time_Out_Time=21328
,P_First_PNP_T_Wait_Status=21364
,P_First_PNP_Z_Wait_Status=21365
,P_First_PNP_Picker_T_Turn_Status=21366
,P_First_PNP_T_Wait_To_Belt_Status=21367
,P_First_PNP_Z_Wait_To_Belt_Status=21368
,P_First_PNP_T_Align_To_Belt_Status=21369
,P_First_PNP_Z_Align_To_Belt_Status=21370
,P_First_PNP_Z_Belt_Down_Status=21371
,P_First_PNP_Z_Belt_Up_Status=21372
,P_First_PNP_T_Wait_To_Align_Status=21373
,P_First_PNP_Z_Wait_To_Align_Status=21374
,P_First_PNP_T_Belt_To_Align_Status=21375
,P_First_PNP_Z_Belt_To_Align_Status=21376
,P_First_PNP_Z_Align_Down_Status=21377
,P_First_PNP_Z_Align_Up_Status=21378
,P_First_PNP_Vac_On_Status=21379
,P_First_PNP_Blow_On_Status=21380
,P_Second_PNP_T_Align_To_Stack_Status=21381
,P_Second_PNP_Z_Align_To_Stack_Status=21382
,P_Second_PNP_T_Stack_To_Align_Status=21383
,P_Second_PNP_Z_Stack_To_Align_Status=21384
,P_Second_PNP_Z_Align_Down_Status=21385
,P_Second_PNP_Z_Align_Up_Status=21386
,P_Second_PNP_Vac_On_Status=21387
,P_Second_PNP_Blow_On_Status=21388
,P_NG_PNP_NG_Bos_Status=21389
,P_NG_PNP_Align_Status=21390
,P_NG_PNP_Align_Down_Status=21391
,P_NG_PNP_Align_Up_Status=21392
,P_NG_PNP_Vac_On_Status=21393
,P_NG_PNP_Blow_On_Status=21394
,P_Hold_1st_PNP_Position=21395
,P_Hold_Module_Error=21396
,P_Act_Execute_Time_Out_Time=21457
,P_Execute_Module_Error=21470
,P_Execute_First_Sepa_Total_Tact_Time=21471
,P_Current_JR_Thickness_mm=21472
,P_Current_Jelly_Roll_Thinckness_mm_Send_Enable_Flag=21473
,P_Stack_Table_NG_Flag=21474
,P_Suspend_Discharge_Cell_Out_Restart=21475
,P_Jelly_Roll_OK_Count=21476
,P_Jelly_Roll_NG_Count=21477
,P_Jelly_Roll_Total_Count=21478
,P_Jelly_Roll_ID=21479
,P_Jelly_Roll_Prod_Count=21480
,P_Jelly_Roll_Recipe_Count=21481
,P_Current_Cell_Memory_Jelly_Roll=21482
,P_Real_Stacking_Host_ID_Count=21483
,P_VISION_PLC10_Anode_Align_Start=21484
,P_VISION_PLC10_Cathode_Align_Start=21485
,P_Stack_Table_NG_Count=21486
,P_Stack_PMAC_NG_Code=21487
,P_Stack_Vision_NG_Code_IN_Timer=21488
,P_Discharge_Waiting_Flag=21489
,P_ARC_Flag=21490
,P_Discharge_Queue_Complete_Flag=21491
,P_Shared_Discharge_Cmd=21492
,P_Shared_Discharge_State_Machine=21493
,P_Discharge_Dont_Stop_Point_Flag=21494
,P_1st_Discharge_State=21495
,P_Discharge_DIO_Trg=21496
,P_Data_Parsing_Flag=21497
,P_Memory_Discharge_Data=21498
,P_Prev_Sepa_Stack_Completed_Flag=21499
,P_First_Sepa_Mode_Status=21500
,P_First_Sepa_Mode_Flag=21501
,P_Discharge_Unloader_Handover_Timer=21502
,P_Discharge_Unloader_Handover_Time=21503
,P_B_1st_to_3rd_Discharge_cmd=21504
,P_B_1st_to_3rd_Discharge_State_Machine=21505
,P_3rd_Discharge_Status=21506
,P_Execute_First_Sepa_Mode_Cmd=21567
,P_Execute_First_Sepa_Mode_Status=21568
,P_Execute_First_Sepa_Mode_Module_Status=21569
,P_Execute_First_Sepa_Mode_State_Machine=21570
,P_Execute_First_Sepa_Mode_Seq_Index=21571
,P_Execute_First_Sepa_Mode_Self_Index=21572
,P_Execute_First_Sepa_Mode_Debug_Edge=21573
,P_Execute_First_Sepa_Mode_Timer=21604
,P_Execute_First_Sepa_Mode_Tact_Time=21625
,P_Execute_1st_Sepa_Status=21626
,P_Suspend_Discharge_Cmd=21627
,P_Suspend_Discharge_Status=21628
,P_Suspend_Discharge_State_Machine=21629
,P_Suspend_Discharge_Seq_Index=21630
,P_Suspend_Discharge_Self_Index=21631
,P_Suspend_Discharge_Timer=21722
,P_Suspend_Discharge_Tact_Time=21743
,P_Suspend_Discharge_1st_Unloader_JR_Grip=21744
,P_Suspend_ARC_Cmd=21745
,P_Suspend_ARC_Status=21746
,P_Suspend_ARC_State_Machine=21747
,P_Suspend_ARC_Seq_Index=21748
,P_Suspend_ARC_Self_Index=21749
,P_Suspend_ARC_Manual_Occur_Flag=21750
,P_Suspend_ARC_Timer=21841
,P_Suspend_ARC_Tact_Time=21862
,P_Suspend_Anode_1TR_Cell_Supply_Cmd=21863
,P_Suspend_Anode_1TR_Cell_Supply_Status=21864
,P_Suspend_Anode_1TR_Cell_Supply_State_Machine=21865
,P_Suspend_Anode_1TR_Cell_Supply_Seq_Index=21866
,P_Suspend_Anode_1TR_Cell_Supply_Self_Index=21867
,P_Suspend_Anode_1TR_Cell_Supply_Module_Status=21868
,P_Suspend_Anode_1TR_Cell_Supply_Timer=21959
,P_Suspend_Anode_1TR_Cell_Supply_Tact_Time=21980
,P_Hold_Exist_Insp_Cmd=21981
,P_Hold_Exist_Insp_Status=21982
,P_Hold_Exist_Insp_Module_Status=21983
,P_Hold_Exist_Insp_State_Machine=21984
,P_Hold_Exist_Insp_Seq_Index=21985
,P_Hold_Exist_Insp_Self_Index=21986
,P_Hold_Exist_Insp_Debug_Edge=21987
,P_Hold_Exist_Insp_Timer=22018
,P_Hold_Exist_Insp_Tact_Time=22039
,P_Hold_Remove_NG_PNP_Cmd=22040
,P_Hold_Remove_NG_PNP_Status=22041
,P_Hold_Remove_NG_PNP_Module_Status=22042
,P_Hold_Remove_NG_PNP_State_Machine=22043
,P_Hold_Remove_NG_PNP_Seq_Index=22044
,P_Hold_Remove_NG_PNP_Self_Index=22045
,P_Hold_Remove_NG_PNP_Debug_Edge=22046
,P_Hold_Remove_NG_PNP_Timer=22077
,P_Hold_Remove_NG_PNP_Tact_Time=22098
,P_PLC01_Hold_Remove_NG_PNP_Sub_Flag=22099
,P_PLC01_Hold_Remove_NG_PNP_Sub_State_Machine=22100
,P_PLC01_Hold_Remove_NG_PNP_Sub_Status=22101
,P_Hold_Remove_Align_Cmd=22102
,P_Hold_Remove_Align_Status=22103
,P_Hold_Remove_Align_Module_Status=22104
,P_Hold_Remove_Align_State_Machine=22105
,P_Hold_Remove_Align_Seq_Index=22106
,P_Hold_Remove_Align_Self_Index=22107
,P_Hold_Remove_Align_Debug_Edge=22108
,P_Hold_Remove_Align_Timer=22139
,P_Hold_Remove_Align_Tact_Time=22160
,P_PLC01_Hold_Remove_Align_Sub_Flag=22161
,P_PLC01_Hold_Remove_Align_Sub_State_Machine=22162
,P_PLC01_Hold_Remove_Align_Sub_Status=22163
,P_Hold_Remove_2TR_Cmd=22164
,P_Hold_Remove_2TR_Status=22165
,P_Hold_Remove_2TR_Module_Status=22166
,P_Hold_Remove_2TR_State_Machine=22167
,P_Hold_Remove_2TR_Seq_Index=22168
,P_Hold_Remove_2TR_Self_Index=22169
,P_Hold_Remove_2TR_Debug_Edge=22170
,P_Hold_Remove_2TR_Timer=22201
,P_Hold_Remove_2TR_Tact_Time=22222
,P_Hold_Supply_1TR_Cmd=22223
,P_Hold_Supply_1TR_Status=22224
,P_Hold_Supply_1TR_Module_Status=22225
,P_Hold_Supply_1TR_State_Machine=22226
,P_Hold_Supply_1TR_Seq_Index=22227
,P_Hold_Supply_1TR_Self_Index=22228
,P_Hold_Supply_1TR_Debug_Edge=22229
,P_Hold_Supply_1TR_Timer=22260
,P_Hold_Supply_1TR_Tact_Time=22281
,P_PLC01_Hold_Supply_1TR_Memory_RTN=22282
,P_PLC01_Hold_Supply_1TR_Judge_Flag=22283
,P_PLC01_Hold_Supply_1TR_Judge_State_Machine=22284
,P_PLC01_Hold_Supply_1TR_Judge_Status=22285
,P_Plate_1TR_Supply_Module_Judge_Bit=22286
,P_Hold_Supply_Align_Cmd=22287
,P_Hold_Supply_Align_Status=22288
,P_Hold_Supply_Align_Module_Status=22289
,P_Hold_Supply_Align_State_Machine=22290
,P_Hold_Supply_Align_Seq_Index=22291
,P_Hold_Supply_Align_Self_Index=22292
,P_Hold_Supply_Align_Debug_Edge=22293
,P_Hold_Supply_Align_Timer=22324
,P_Hold_Supply_Align_Tact_Time=22345
,P_Hold_Supply_2TR_Cmd=22346
,P_Hold_Supply_2TR_Status=22347
,P_Hold_Supply_2TR_Module_Status=22348
,P_Hold_Supply_2TR_State_Machine=22349
,P_Hold_Supply_2TR_Seq_Index=22350
,P_Hold_Supply_2TR_Self_Index=22351
,P_Hold_Supply_2TR_Debug_Edge=22352
,P_Hold_Supply_2TR_Timer=22383
,P_Hold_Supply_2TR_Tact_Time=22404
,P_Hold_Semi_Run_Pos_Move_Cmd=22405
,P_Hold_Semi_Run_Pos_Move_Status=22406
,P_Hold_Semi_Run_Pos_Move_Module_Status=22407
,P_Hold_Semi_Run_Pos_Move_State_Machine=22408
,P_Hold_Semi_Run_Pos_Move_Seq_Index=22409
,P_Hold_Semi_Run_Pos_Move_Self_Index=22410
,P_Hold_Semi_Run_Pos_Move_Debug_Edge=22411
,P_Hold_Semi_Run_Pos_Move_Timer=22442
,P_Hold_Semi_Run_Pos_Move_Tact_Time=22463
,P_Act_Suspend_Time_Out_Time=22662
,P_Test_Sungmin_Flag=22729
,P_Suspend_Discharge_Module_Status=23588
,P_Suspend_Discharge_To_Execute_Flag=23589
,P_Suspend_Discharge_Complete_Flag=23590
,P_First_Unloader_Stack_Up_Status=23591
,P_First_Unloader_Stack_FWD_Status=23592
,P_First_Unloader_Grip_Cell_Status=23593
,P_First_Unloader_Stack_BWD_Wait_Status=23594
,P_First_Unloader_Stack_BWD_Status=23595
,P_First_Unloader_Stack_Down_Status=23596
,P_First_Unloader_Avoid_Status=23597
,P_First_Unloader_Turn_Status=23598
,P_First_Unloader_Handover_Status=23599
,P_Cathode_Clamp_OFF_Status=23600
,P_Final_Roll_Discharge_Status=23601
,P_Final_Roll_Stack_Pos_Status=23602
,P_Final_Roll_Stack_Up_Pos_Status=23603
,P_Main_Z_Init_Pos_Status=23604
,P_Sheet_Paper_BWD_Status=23605
,P_Discharge_Vision_DIO_RTN=23606
,P_Discharge_Sub_RTN=23607
,P_Discharge_NG_Code_Report_RTN=23608
,P_Individual_RTN=23609
,P_Suspend_Discharge_Last_Run_Bit=23610
,P_Suspend_Discharge_JR_Result_RTN=23611
,P_ARC_Buffer_Jog_Speed=23612
,P_Selected_Spool_Number=23613
,P_ARC_Home_Check_RTN=23614
,P_Suspend_ARC_Module_Status=23615
,P_Not_Selected_Spool_Radius=23616
,P_Not_Selected_Spool_Circumference=23617
,P_Passive_D_One_Degree_AD_Value=23643
,P_After_ARC_Rotate_Distance=23644
,P_Stack_Vision_NG_Code_Time_Over=23645
,P_Suspend_Discharge_Resume_Flag=23646
,P_Suspend_Discharge_Resume_Complete=23647
,P_Suspend_Discharge_Pause_Flag=23648
,P_Flag_Stack_Work_Host_ID=23659
,P_First_Sepa_Stack_Align_OK_PMAC_Flag=23660
,P_Sepa_Run_Completed_Status_Machine=23661
,P_Discharge_Debug_Edge=23662
,P_Discharge_Sepa_Cutter_Time_Out_State_Machine=23673
,P_Old_Suspend_Discharge_Seq_Index=23674
,P_Discharge_Debug_Index_1=23675
,P_Discharge_Debug_Index_2=23676
,P_Discharge_Debug_Index_3=23677
,P_Discharge_Debug_Index_4=23678
,P_ARC_Debug_Edge=23679
,P_Old_Suspend_ARC_Seq_Index=23690
,P_ARC_Debug_Index_1=23691
,P_ARC_Debug_Index_2=23692
,P_ARC_Debug_Index_3=23693
,P_ARC_Debug_Index_4=23694
,P_Suspend_Cutter_Heating_Time=23697
,P_Suspend_Cutter_Heating_Timer=23698
,P_An_1TR_Supply_Debug_Edge=23699
,P_Old_Suspend_An_1TR_Supply_Seq_Index=23710
,P_An_1TR_Supply_Debug_Index_1=23711
,P_An_1TR_Supply_Debug_Index_2=23712
,P_An_1TR_Supply_Debug_Index_3=23713
,P_An_1TR_Supply_Debug_Index_4=23714
,P_Suspend_Supply_Index=23715
,P_Suspend_Supply_Index_2nd=23716
,P_Suspend_Supply_Pause_Flag=23725
,P_Suspend_Supply_Resume_Flag=23726
,P_Supply_Module_Status=23727
,P_Suspend_Anode_1TR_Supply_Complete_Flag=23728
,P_Suspend_Discharge_Module_Error=23729
,P_Suspend_ARC_Module_Error=23730
,P_Suspend_1st_Supply_Error=23731
,P_Discharge_Seq_Data=23732
,P_Suspend_Discharging_Popup_Flag=23733
,P_Suspend_Discharge_FR_Unclamp_Error_Popup_Flag=23734
,P_Suspend_Discharge_Cathode_Align_Retry_Cal_Error_Popup_Flag=23735
,P_Suspend_Discharge_Anode_Align_Retry_Cal_Error_Popup_Flag=23736
,P_Suspend_Discharge_FR_Discharge_Pos_Error_Popup_Flag=23737
,P_Suspend_Discharge_1st_Unloader_Grip_OFF_Error_Popup_Flag=23738
,P_Suspend_Discharge_1st_Unloader_Up_Error_Popup_Flag=23739
,P_Suspend_Discharge_1st_Unloader_FWD_Error_Popup_Flag=23740
,P_Suspend_Discharge_FR_Clamp_Error_Popup_Flag=23741
,P_Suspend_Discharge_Sepa_Cutter_Heating_Error_Popup_Flag=23742
,P_Suspend_Discharge_1st_Unloader_Grip_Cell_Pos_Error_Popup_Flag=23743
,P_Suspend_Discharge_1st_Unloader_Grip_ON_Error_Popup_Flag=23744
,P_Suspend_Discharge_Sheet_Paper_BWD_Error_Popup_Flag=23745
,P_Suspend_Discharge_Cathode_Clamp_OFF_Error_Popup_Flag=23746
,P_Suspend_Discharge_Sepa_Cutter_FWD_Error_Popup_Flag=23747
,P_Suspend_Discharge_Sheet_Paper_Vacuum_ON_Error_Popup_Flag=23748
,P_Suspend_Discharge_Sepa_Cutter_BWD_Error_Popup_Flag=23749
,P_Suspend_Discharge_1st_Unloader_BWD_Wait_Pos_Error_Popup_Flag=23750
,P_Suspend_Discharge_1st_Unloader_BWD_Error_Popup_Flag=23751
,P_Suspend_Discharge_1st_Unloader_Stack_Down_Error_Popup_Flag=23752
,P_Suspend_Discharge_FR_Stack_Pos_Error_Popup_Flag=23753
,P_Suspend_Discharge_After_Action_Init_Error_Popup_Flag=23754
,P_Suspend_Discharge_1st_Unloader_Avoid_Pos_Error_Popup_Flag=23755
,P_Suspend_Discharge_1st_2nd_Unloader_Handover_Chk_Error_Popup_Flag=23756
,P_Suspend_Discharge_1st_Unloader_Handover_Pos_Error_Popup_Flag=23757
,P_Suspend_Discharge_2nd_3rd_Unloader_Grip_Request_Error_Popup_Flag=23758
,P_Suspend_Discharge_1st_Unloader_Wait_Pos_Error_Popup_Flag=23759
,P_Suspend_ARC_Manual_ARC_Active_Popup_Flag=23760
,P_Suspend_ARC_Auto_ARC_Active_Popup_Flag=23761
,P_Suspend_ARC_Pre_Act_Popup_Flag=23762
,P_Suspend_ARC_Dancer_Close_Popup_Flag=23763
,P_Suspend_ARC_Use_Plate_FWD_Popup_Flag=23764
,P_Suspend_ARC_Replace_Plate_Blow_ON_Popup_Flag=23765
,P_Suspend_ARC_Use_Plate_Clamp_Popup_Flag=23766
,P_Suspend_ARC_Use_Plate_Cutter_FWD_Popup_Flag=23767
,P_Suspend_ARC_Use_Plate_Cutter_BWD_Popup_Flag=23768
,P_Suspend_ARC_Use_Plate_Unclamp_Popup_Flag=23769
,P_Suspend_ARC_Use_Plate_BWD_Popup_Flag=23770
,P_Suspend_ARC_Replace_Plate_Blow_OFF_Popup_Flag=23771
,P_Suspend_ARC_Dancer_Open_Popup_Flag=23772
,P_Suspend_ARC_Spool_Change_Popup_Flag=23773
,P_Suspend_ARC_Post_Act_Popup_Flag=23774
,P_Suspend_ARC_Previous_Spool_Remain_Winding_Popup_Flag=23775
,P_Suspend_Discharge_First_Address=23776
,P_Suspend_ARC_First_Address=23777
,P_Status_Stop_Ready_Pos_Move=23778
,P_Cycle_Stop_Stauts=23779
,P_Cycle_Stop_Status_Machine=23780
,P_Cycle_Stop_Flag=23781
,P_Speed_Origin_rtn=23782
,P_Speed_rtn=23783
,P_NG_PNP_Z_Move_rtn=23784
,P_NG_PNP_Z_Move_Check_rtn=23785
,P_NG_PNP_T_Move_rtn=23786
,P_NG_PNP_T_Move_Check_rtn=23787
,P_2nd_Z_Move_rtn=23788
,P_2nd_Z_Move_Check_rtn=23789
,P_2nd_T_Move_rtn=23790
,P_2nd_T_Move_Check_rtn=23791
,P_Stack_Judgement_Memory=23792
,P_Stop_Cycle_Stop_Move_Status=23793
,P_STOP_Initial_Process_Status=23794
,P_Stopping_CycleStop_Init_Flag=23795
,P_Sepa_Timing=23796
,P_Old_Trigger_PLC0=23797
,P_Mode_Command=23798
,P_Current_Mode=23799
,P_Mode_Command_Buffer=23820
,P_Mode_Command_Wait_Count=23821
,P_Old_Mode_Command=23822
,P_Anode_NG_Unit_Status=26823
,P_Cathode_NG_Unit_Status=26824
,P_ParsingRtn=26825
,P_CurPosData=26826
,P_Hold_MNTR_Supply_1st=26827
,P_TimeOutNumb=26828
,P_PosRtn=26829
,P_MotionRtn=26830
,P_CmdData=26831
,P_Interval=26832
,P_Cont_Ret=26833
,P_Cur_Idx=26834
,P_NextID=26835
,P_Cur_Size=26836
,P_Hold_Exist_Insp=26837
,P_Hold_Remove_NG_PNP=26838
,P_Hold_Remove_Align=26839
,P_Hold_Remove_2TR=26840
,P_Hold_Supply_1TR=26841
,P_Hold_Supply_Align=26842
,P_Hold_Supply_2TR=26843
,P_Hold_Semi_Run=26844
,P_Hold_NG_PNP_Remove=180
,P_Hold_Remove_2nd=182
,P_Hold_Supply_1st=183
,P_Hold_Supply_2nd=185
,P_Hold_Data_process=186
,P_Hold_Semi_Run_Enable_Pos=187
,P_Hold_Existence_Insp=188
,P_Hold_1st_Belt_Move=189
,P_Hold_Motion=190
,P_Hold_Data_process_State_Machine=26845
,P_Hold_Align_Remove_State_Machine=26846
,P_Hold_2nd_Remove_State_Machine=26847
,P_Hold_Supply_1st_State_Machine=26848
,P_Hold_Supply_2nd_State_Machine=26849
,P_Hold_Existence_Insp_State_Machine=26850
,P_Hold_NG_PNP_Remove_State_Machine=26851
,P_Hold_Data_Process_Complete=26852
,P_Hold_Semi_Run_Enable_Pos_State_Machine=26853
,P_HOLD_Existence_Insp_Queue_State_Machine=26854
,P_Hold_Stop_Existence_Insp_STEP=26855
,P_SubMaster_Status_Err=26856
,P_Data_Process_Rtn=26857
,P_Hold_Set_Trigger=26858
,P_Hold_Get_Trigger=26859
,P_Anode_2nd_Data=26860
,P_Anode_Align_Data=26861
,P_Hold_Remove_Step=26862
,P_HList_Head_Idx=26863
,P_Hold_Next_ID=26864
,P_Hold_Data_Value=26885
,P_Comb_Bitwise=26886
,P_Target_Cmd=26887
,P_Temp_Bit=26888
,P_Get_ErrorCode=26889
,P_Rtn_Code=26890
,P_Complete_Hold_Bit=26891
,P_HoldMtion_Flag=26892
,P_Ret_BitWise=26893
,P_NotEnough_GetSpace=26894
,P_NotEnough_SetSpace=26895
,P_Check_SetSpace=26896
,P_Hold_Get_Data=26897
,P_Err_NextID_Flag=26898
,P_Elec_Bit=26899
,P_MotionData=26900
,P_Cur_PosX1=26916
,P_Cur_PosZ1=26917
,P_Cur_PosX2=26918
,P_Cur_PosZ2=26919
,P_Dest_PosX=26920
,P_Dest_PosZ=26921
,P_FailToParse=26922
,P_CurTrigger=26923
,P_TimeOutTrigger=26924
,P_CalcTime=26925
,P_Cycle_Count=26926
,P_MotionTimeOutFlag=26927
,P_Set_Data=26928
,P_Rtn=26929
,P_CurPosTestBit=26930
,P_Hold_Anode_Pause_CHK=26931
,P_Hold_Cathode_Pause_CHK=26932
,P_Surface_Complete_To_Hold=26933
,P_Hold_Pause_Trg=26954
,P_From_Staring_Flag=26955
,P_Hold_Existence_Insp_Enqueue_Flag=26956
,P_Hold_Rtn=26957
,P_Debug_Existence_Insp_STEP=26958
,P_Hold_Align_Sheet_CHK=26959
,P_Hold_Cathode_Exception_Empty_Flag=26960
,P_Hold_Anode_Exception_Empty_Flag=26961
,P_HOLD_Hold_Process_State_Machine=26962
,P_Hold_Stop_Sheet_Process_STEP=26963
,P_Hold_Debug_Sheet_Process_STEP=26964
,P_Hold_Stop_Point=26965
,P_Hold_CHK=26966
,P_Hold_Test=26967
,P_Anode_1st_Motion_Complete=26968
,P_Anode_2nd_Motion_Complete=26969
,P_Anode_NG_PNP_Motion_Complete=26970
,P_Cathode_1st_Motion_Complete=26971
,P_Cathode_2nd_Motion_Complete=26972
,P_Cathode_NG_PNP_Motion_Complete=26973
,P_Anode_1st_Picker_Motion_Complete=26974
,P_Cathode_1st_Picker_Motion_Complete=26975
,P_individual_return=26976
,P_individual_return2=26977
,P_HoldCurPosBit1=26978
,P_HoldCurPosBit2=26979
,P_Parsing_Status=26980
,P_Sel_Obj=26981
,P_Sel_Elec=26982
,P_Error=26983
,P_Vision_FirstSepa_Complete=26984
,P_NG_PNP_Turn_TM=26985
,P_NG_PNP_Turn_TS=26986
,P_NG_PNP_Turn_TA=26987
,P_NG_PNP_Up_TM=26988
,P_NG_PNP_Up_TS=26989
,P_NG_PNP_Up_TA=26990
,P_NG_PNP_Down_TM=26991
,P_NG_PNP_Down_TS=26992
,P_NG_PNP_Down_TA=26993
,P_NG_PNP_Vac_Time=26994
,P_NG_PNP_Blow_Time=26995
,P_Slow_NG_Mode_Btn=26996
,P_HOLD_Memory_Tower_Offset=26997
,P_Hold_Pause_Use=26998
,P_Hold_Motion_Err_Chk=27019
,P_Hold_Motion_TimeOut=27035
,P_Hold_Data_OK=27036
,P_VISION_TRG_PLC4_AnodeSurface_Ins_Shoot=27037
,P_VISION_TRG_PLC4_CathodeSurface_Ins_Shoot=27038
,P_Memory_Tower_Test=27039
,P_Temp_Run_Mode=27040
,P_Data_Idx=27041
,P_Get_Data_Idx=27042
,P_HOLD_Data_Err_Queue=27043
,P_HOLD_Data_Err_State_Machine=27044
,P_HOLD_Err_Set_Data=27045
,P_HOLD_Err_Save=27046
,P_Sepa_Run_Completed_Flag=27047
,P_Log_Data_Y=27981
,P_Log_Data_M=27982
,P_Log_Data_D=27983
,P_Log_Data_H=27984
,P_Log_Data_m=27985
,P_Log_Data_s=27986
,P_MNTR_End_Index=27987
,P_BG_CPLC_Running_MNTR=50
,P_RTI_CPLC_Running_MNTR=51
,P_Log_Start_Flag=170
,P_Log_Document_Remove_Flag=171
,P_Sepa_ID_Change_Flag=172
,P_USB_Register=173
,P_Cur_Line_Check=175
,P_Cur_Line_Check_Init=176
,P_Hold_Pass=27998
,P_PLC01_Total_Step_Flag=28014
,P_PLC02_Total_Step_Flag=28015
,P_PLC014_Total_Step_Flag=28016
,P_PLC02_Total_Step_Flag2=28017
,P_Vac_Pass=28018
,P_Vision_Pass_Exisitence=28019
,P_Vision_Pass_Empty=28020
,P_Vision_Pass_FirstSepa=28021
,P_Vision_Pass_Stack_Inspection=28022
,P_ULD_Home_Pass=28023
,P_Clamp_Cell_Down_Use=28024
,P_FR_Clamp_Use_Test=28025
,P_Door_Interlock_Use_Flag=28026
,P_Vacuum_Door_Clear_Use=28027
,P_Align_Test_Pos=28028
,P_PLC02_Exe_Module_First_Sepa_Step_Flag=28124
,P_PLC02_Sus_Module_Discharge_Step_Flag=28125
,P_PLC02_Sus_Module_ARC_Step_Flag=28126
,P_PLC02_Sus_Module_1TR_Supply_Step_Flag=28127
,P_PLC02_HOLD_Module_Insp_Step_Flag=28128
,P_PLC02_HOLD_Module_Remove_NGPNP_Step_Flag=28129
,P_PLC02_HOLD_Module_Remove_Align_Step_Flag=28130
,P_PLC02_HOLD_Module_Remove_2TR_Step_Flag=28131
,P_PLC02_HOLD_Module_Supply_1TR_Step_Flag=28132
,P_PLC02_HOLD_Module_Supply_Align_Step_Flag=28133
,P_PLC02_HOLD_Module_Supply_2TR_Step_Flag=28134
,P_PLC02_HOLD_Module_SemiRun_Pos_Step_Flag=28135
,P_PLC14_STOP_Module_Cycle_Stop_Step_Flag=28136
,P_PLC02_Discharge_MNTR=28137
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
,P_Anode_Vision_MNTR=28138
,P_Cathode_Vision_MNTR=28139
,P_Error_Index_Number=28145
,P_ECAT_MNTR_Bit=28146
,P_Local_MNTR_Bit=28147
,P_Clamp_Motion_VER1=28148
,P_CA_DR_Ta=28149
,P_CA_DR_Ts=28150
,P_CA_DR_Tm=28151
,P_CA_DR_Td=28152
,P_CA_DR_Tsd=28153
,P_AN_DR_Ta=28154
,P_AN_DR_Ts=28155
,P_AN_DR_Tm=28156
,P_AN_DR_Td=28157
,P_AN_DR_Tsd=28158
,P_First_Sepa_1st_Driving_Move=28159
,P_AN_Cam_Total_Time=28160
,P_CA_Cam_Total_Time=28161
,P_Dry_Run_BTN=28162
,P_Home_Angle_Offset_change_Bit=28163
,P_InterLock_Motor_Num=28164
,P_Recipe_Move_IL_Loop=28165
,P_Z_Var=28166};
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
,P_MNTR_PLC0_Task_Time=8878
,P_MNTR_PLC1_Task_Time=8881
,P_MNTR_PLC2_Task_Time=8884
,P_MNTR_PLC3_Task_Time=8887
,P_MNTR_PLC4_Task_Time=8890
,P_MNTR_PLC5_Task_Time=8893
,P_MNTR_PLC6_Task_Time=8896
,P_MNTR_PLC7_Task_Time=8899
,P_MNTR_PLC8_Task_Time=8902
,P_MNTR_PLC9_Task_Time=8905
,P_MNTR_PLC10_Task_Time=8908
,P_MNTR_PLC11_Task_Time=8911
,P_MNTR_PLC12_Task_Time=8914
,P_MNTR_PLC13_Task_Time=8917
,P_MNTR_PLC14_Task_Time=8920
,P_MNTR_PLC15_Task_Time=8923
,P_MNTR_PLC16_Task_Time=8926
,P_MNTR_PLC17_Task_Time=8929
,P_MNTR_PLC18_Task_Time=8932
,P_MNTR_PLC19_Task_Time=8935
,P_MNTR_PLC20_Task_Time=8938
,P_MNTR_PLC21_Task_Time=8941
,P_MNTR_PLC22_Task_Time=8944
,P_MNTR_PLC23_Task_Time=8947
,P_MNTR_PLC24_Task_Time=8950
,P_MNTR_PLC25_Task_Time=8953
,P_MNTR_PLC26_Task_Time=8956
,P_MNTR_PLC27_Task_Time=8959
,P_MNTR_PLC28_Task_Time=8962
,P_MNTR_PLC29_Task_Time=8965
,P_MNTR_PLC30_Task_Time=8968
,P_Vision_Result=8974
,P_Vision_Result_Get_First_Cycle=8978
,P_Init_Result=8982
,P_Tension_FF=9077
,P_FR_AI_Value=9085
,P_Dequeue_Log=9120
,P_Motor_Current_Pos=9153
,P_Axis_Scale_Value=9203
,P_Except_Return_Array=9253
,P_Hold_Memory=9353
,P_Suspend_Memory=9358
,P_Execute_Memory=9363
,P_Stop_Memory=9368
,P_CircularQueue_Command_array=9389
,P_Recipe_1st_MotorNo=9423
,P_Recipe_2nd_MotorNo=9473
,P_Recipe_3rd_MotorNo=9523
,P_Recipe_4th_MotorNo=9573
,P_Recipe_5th_MotorNo=9623
,P_Recipe_6th_MotorNo=9673
,P_Recipe_M01_POS=9751
,P_Recipe_M02_POS=9762
,P_Recipe_M03_POS=9773
,P_Recipe_M04_POS=9784
,P_Recipe_M05_POS=9795
,P_Recipe_M06_POS=9806
,P_Recipe_M07_POS=9817
,P_Recipe_M08_POS=9828
,P_Recipe_M09_POS=9839
,P_Recipe_M10_POS=9850
,P_Recipe_M11_POS=9861
,P_Recipe_M12_POS=9872
,P_Recipe_M13_POS=9883
,P_Recipe_M14_POS=9894
,P_Recipe_M15_POS=9905
,P_Recipe_M16_POS=9916
,P_Recipe_M17_POS=9927
,P_Recipe_M18_POS=9938
,P_Recipe_M19_POS=9949
,P_Recipe_M20_POS=9960
,P_Recipe_M21_POS=9971
,P_Recipe_M22_POS=9982
,P_Recipe_M23_POS=9993
,P_Recipe_M24_POS=10004
,P_Recipe_M25_POS=10015
,P_Recipe_M26_POS=10026
,P_Recipe_M27_POS=10037
,P_Recipe_M28_POS=10048
,P_Recipe_M29_POS=10059
,P_Recipe_M30_POS=10070
,P_Recipe_M31_POS=10081
,P_Recipe_M32_POS=10092
,P_Recipe_M33_POS=10103
,P_Recipe_M34_POS=10114
,P_Recipe_M35_POS=10125
,P_Recipe_M36_POS=10136
,P_Recipe_M37_POS=10147
,P_Recipe_M38_POS=10158
,P_Recipe_M39_POS=10169
,P_Recipe_M40_POS=10180
,P_Recipe_M41_POS=10191
,P_Recipe_M42_POS=10202
,P_Recipe_M43_POS=10213
,P_Recipe_M44_POS=10224
,P_Recipe_M45_POS=10235
,P_Recipe_M46_POS=10246
,P_Recipe_M47_POS=10257
,P_Recipe_M48_POS=10268
,P_Recipe_M49_POS=10279
,P_Recipe_M50_POS=10290
,P_Error_X_Axis_Packml=10307
,P_Error_X_Axis_Dequeue=10313
,P_Error_X_Axis_Num=10319
,P_Memory_Tower_Err_Pos_X_Save=10325
,P_Error_Y_Axis_Packml=10331
,P_Error_Y_Axis_Dequeue=10337
,P_Error_Y_Axis_Num=10343
,P_Memory_Tower_Err_Pos_Y_Save=10349
,P_Error_Z_Axis_Packml=10355
,P_Error_Z_Axis_Dequeue=10361
,P_Error_Z_Axis_Num=10367
,P_Memory_Tower_Err_Pos_Z_Save=10373
,P_Error_ZZ_Axis_Packml=10379
,P_Error_ZZ_Axis_Dequeue=10385
,P_Error_ZZ_Axis_Num=10391
,P_Memory_Tower_Err_Pos_ZZ_Save=10397
,P_1st_PNP_FWD_Abort_Offset=10510
,P_1st_PNP_BWD_Abort_Offset=10600
,P_2nd_PNP_FWD_Abort_Offset=10690
,P_2nd_PNP_BWD_Abort_Offset=10780
,P_Align_Zero_Move_Start_Flag=10932
,P_Stop_Sub_Master_Motion_Program_Flag=10943
,P_Stop_Slave_Motion_Program_Flag=10963
,P_Stop_Motor_Status=10983
,P_Stop_Coord_Status=11031
,P_Stop_Save_RTN=11068
,P_Stop_Motor_Pos=11074
,P_Old_P_Anode_TR1_Master_Motion_Trigger=11131
,P_Old_P_Cathode_TR1_Master_Motion_Trigger=11147
,P_Anode_TR1_Old_Mode=11163
,P_Cathode_TR1_Old_Mode=11179
,P_Older_Than_P_Anode_TR1_Old_Mode=11195
,P_Older_Than_P_Cathode_TR1_Old_Mode=11211
,P_Older_Than_P_Sequence_Old_P_Anode_TR1_Current_Mode_Trigger=11227
,P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Current_Mode_Trigger=11243
,P_Old_P_Anode_TR1_Mode_Command=11259
,P_Old_P_Cathode_TR1_Mode_Command=11275
,P_Older_Than_P_Old_P_Anode_TR1_Mode_Command=11291
,P_Older_Than_P_Old_P_Cathode_TR1_Mode_Command=11307
,P_Older_Than_P_Sequence_Old_P_Anode_TR1_Mode_Command_Trigger=11323
,P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Mode_Command_Trigger=11339
,P_Old_P_Anode_TR1_PMAC_Status=11355
,P_Old_P_Cathode_TR1_PMAC_Status=11371
,P_Older_Than_P_Old_P_Anode_TR1_PMAC_Status=11387
,P_Older_Than_P_Old_P_Cathode_TR1_PMAC_Status=11403
,P_Old_P_Slave1_Motion_Command=11419
,P_Old_P_Slave10_Motion_Command=11435
,P_Old_Slave1_P_SubMaster_Sub_Mode_Command=11451
,P_Old_Slave10_P_SubMaster_Sub_Mode_Command=11467
,P_Sequence_Old_P_Current_Mode_Trigger=11483
,P_Sequence_Old_Mode=11499
,P_Sequence_Old_P_Mode_Command=11515
,P_Sequence_Old_P_Mode_Command_Trigger=11531
,P_SubMaster_Sub_Old_Mode=11547
,P_SubMaster_Sub_Old_Command=11563
,P_SubMaster_Sub_Mode_Command=11579
,P_SubMaster_Sub_Old_Trigger=11595
,P_InterLock_No3_Array=11611
,P_Old_InterLock_No3_Array=11627
,P_Mode_Err=11643
,P_Phasing_Err=11671
,P_Phasing_Err2=11676
,P_Cathode_Run_Mode_Type=11684
,P_Cathode_Run_Mode_Trigger=11704
,P_Anode_Run_Mode_Type=11725
,P_Anode_Run_Mode_Trigger=11745
,P_Stop_Origin_Save=11922
,P_Sheet_Err=12004
,P_Drivig_Cal_Save=12023
,P_PMAC_Status_Arr_Save1=12030
,P_HomePos_Save1=12035
,P_PMAC_Status_Arr_Save2=12040
,P_HomePos_Save2=12045
,P_PMAC_Status_Arr_Save3=12050
,P_HomePos_Save3=12055
,P_PMAC_Status_Arr_Save4=12060
,P_HomePos_Save4=12065
,P_HomePos_Err=12075
,P_Cutter_FWB_Heater_Current=12140
,P_Scan_Time=12194
,P_Read_Sector_TactTime=12302
,P_Write_Sector_TactTime=12308
,P_SV_AO_Reference_Value_Chanel=12331
,P_MSA_Run_Repeat_Num=12364
,P_Current_MSA_Run_Num=12369
,P_PV_AO_Value_Chanel=12702
,P_Interlock_Messege=12713
,P_Current_Homming_Status=12766
,P_Home_Execute_Type=12816
,P_Interval_Read_Time=12869
,P_Interval_Write_Time=12875
,P_Sub_Master_Motion_Program_Flag=12916
,P_Slave_Motion_Program_Flag=12936
,P_OLD_Jog_Speed_Motor=12957
,P_Command_Start=13013
,P_Command_Complete=13031
,P_Command_Reset=13049
,P_Command_Hold=13067
,P_Command_Unhold=13085
,P_Command_Suspend=13103
,P_Command_Unsuspend=13121
,P_Command_Clear=13139
,P_Command_Stop=13157
,P_Command_Abort=13175
,P_Command_Status_Complete=13193
,P_Command_Mask_Layer=13211
,P_Command_Process_Type=13229
,P_Sum_Ready_pos_Motor=13285
,P_Anode_Align_NG_Array=13410
,P_Cathode_Align_NG_Array=13430
,P_Anode_Surface_NG_Array=13450
,P_Cathode_Surface_NG_Array=13470
,P_Stack_NG_Array=13490
,P_Continuous_Call_Align_OK_Flag=13522
,P_Continuous_Call_Align_NG_Flag=13524
,P_Continuous_Call_Align_TimeOut_Flag=13526
,P_Continuous_Call_Surface_OK_Flag=13528
,P_Continuous_Call_Surface_NG_Flag=13530
,P_Continuous_Call_Surface_TimeOut_Flag=13532
,P_Continuous_Call_Stack_Flag=13534
,P_PLC12_Observser_MNTR=13546
,P_PLC12_Vacuum_MNTR=13551
,P_Vacuum_Check=13559
,P_PLC12_Blow_MNTR=13567
,P_Blow_Check=13575
,P_PLC12_Vacuum_1st_Cathode_Take_Time=13599
,P_PLC12_Vacuum_2nd_Cathode_Take_Time=13604
,P_PLC12_Vacuum_NG_Cathode_Take_Time=13609
,P_PLC12_Vacuum_Align_Cathode_Take_Time=13614
,P_PLC12_Vacuum_1st_Anode_Take_Time=13619
,P_PLC12_Vacuum_2nd_Anode_Take_Time=13624
,P_PLC12_Vacuum_NG_Anode_Take_Time=13629
,P_PLC12_Vacuum_Align_Anode_Take_Time=13634
,P_PLC12_Blow_1st_Cathode_Take_Time=13655
,P_PLC12_Blow_2nd_Cathode_Take_Time=13660
,P_PLC12_Blow_NG_Cathode_Take_Time=13665
,P_PLC12_Blow_Align_Cathode_Take_Time=13670
,P_PLC12_Blow_1st_Anode_Take_Time=13675
,P_PLC12_Blow_2nd_Anode_Take_Time=13680
,P_PLC12_Blow_NG_Anode_Take_Time=13685
,P_PLC12_Blow_Align_Anode_Take_Time=13690
,P_Status_arry=13697
,P_Queue_arry=13717
,P_Step_arry=13737
,P_Index_arry=13757
,P_PLC_Observser_MNTR=13784
,P_Test_Vacuum_Timer=13793
,P_Test_Blow_Timer=13801
,P_Vac_Test_Set_Time=13809
,P_Blow_Test_Set_Time=13817
,P_Zero_Angle=13880
,P_Zero_Length=13905
,P_Homeoffset_Change_Flag=13930
,P_Cal_Distance=13955
,P_Cal_Denominator=13960
,P_Cal_Numerator=13965
,P_Cal_Dif_Deg=13970
,P_Vac_Door_Open_Clear=13975
,P_Read_Timer_S=13989
,P_Write_Timer_S=13998
,P_Interval_Read_S=14007
,P_Interval_Write_S=14016
,P_UI_Jog_Vel_M=14025
,P_Old_X_Read_Count_S=14076
,P_X_BTN_Manual_1=14099
,P_X_BTN_Manual_2=14219
,P_X_BTN_Manual_3=14339
,P_Home_InterLock_M=14459
,P_Status_BTN_Manual_1=14509
,P_Status_BTN_Manual_2=14629
,P_Status_BTN_Manual_Interlock_1=14749
,P_Status_BTN_Manual_Interlock_2=14869
,P_Status_BTN_Manual_Interlock_3=14989
,P_Mode_Run_Enable_Flag=15109
,P_MNTR_PLC4_Vision_Result=15116
,P_PNP_Vac_Mode_Run_Enable_Flag=15317
,P_HCK_Step_MNTR=15324
,P_Axis_Home_Pos=15374
,P_Axis_Ready_Pos=15424
,P_PMAC_Homing_CHK=15474
,P_Home_Command=15525
,P_Old_BTN_Servo_On_Off_M=15579
,P_Peak_Load_Ratio_M=15612
,P_Chk_Current_Jog_Sel=15645
,P_Recipe_POS_Interock_Num_Bit=15679
,P_Recipe_VEL=15712
,P_Recipe_POS=15723
,P_BTN_Servo_On_Off_M=15734
,P_BTN_Home_M=15767
,P_BTN_Jog_Stop_M=15800
,P_BTN_Recipe_POS_RUN_M=15833
,P_Recipe_POS_Flag_M=15866
,P_BTN_Jog_INC_M=15899
,P_BTN_JOG_ABS_M=15932
,P_Unit_Command=15966
,P_Unit_State_Machine=16066
,P_Status_BTN_Manual_3=16166
,P_Chk_Current_BTN_Sel=16266
,P_Linear_Encoder_Pos_Check_Flag=16325
,P_Linear_Encoder_Pos=16330
,P_Status_Linear_Encoder_HomeZero=16335
,P_Command_Linear_Encoder_HomeZero=16340
,P_OLD_Home_Offset=16353
,P_PLC13_Cycle_Stop_Return_Array=16441
,P_Stopping_CycleStop_Act_State_Machine=16547
,P_Module_Cycle_Stop_Act_State_Machine_Array=16567
,P_Module_Cycle_Stop_Act_Complete_Bit=16587
,P_Module_Cycle_Stop_Act_Command_Array=16607
,P_OLD_Module_Cycle_Stop_Act_Command_Array=16627
,P_Buffer_Seqdata_CycleStop_Array=16647
,P_Tact_Time_Timer=16684
,P_Tack_Time_Save_Time=16724
,P_Tact_Time_Stack_Array=16768
,P_Tact_Time_Discharge_Array=16778
,P_Tact_Time_1st_Unloader_Array=16788
,P_Tact_Time_Sepa_ARC_Array=16798
,P_Tact_Time_Final_Roll_Array=16808
,P_Tact_Time_Cathode_1st_PNP_Array=16818
,P_Tact_Time_Cathode_Align_Array=16828
,P_Tact_Time_Cathode_2nd_PNP_Array=16838
,P_Tact_Time_Cathode_Clamp_Array=16848
,P_Tact_Time_Anode_1st_PNP_Array=16858
,P_Tact_Time_Anode_Align_Array=16868
,P_Tact_Time_Anode_2nd_PNP_Array=16878
,P_Tact_Time_Anode_Clamp_Array=16888
,P_Tact_Time_Cathode_1st_PNP_Vac_Array=16898
,P_Tact_Time_Cathode_Align_PNP_Vac_Array=16908
,P_Tact_Time_Cathode_2nd_PNP_Vac_Array=16918
,P_Tact_Time_Anode_1st_PNP_Vac_Array=16928
,P_Tact_Time_Anode_Align_PNP_Vac_Array=16938
,P_Tact_Time_Anode_2nd_PNP_Vac_Array=16948
,P_Tact_Time_Check=17002
,P_Old_Tact_Time_Check=17042
,P_Tact_Time_Head_Address=17082
,P_EPC_MNTR_VAR=17139
,P_Home_Check_Arry=17162
,P_PWM_Phasing_Start=17214
,P_PWM_Status=17219
,P_PWM_State_Machine=17224
,P_AH_Seq_arr=17229
,P_DD_M_Home_ABS_Pos=17244
,P_AH_Indvi_rtn=17249
,P_Home_Check_Arry1=17302
,P_PV_EPC_Camera_Pos=17462
,P_VISION_MSA_Status_Prod_Sequence=17482
,P_MSA_Cmd=17506
,P_Align_Take_Off_Cmd=17537
,P_Align_Take_Off_Status_Prod_Sequence=17554
,P_Old_Upper_Sensor=17623
,P_Edge_Upper_Sensor=17631
,P_Old_Lower_Sensor=17639
,P_Edge_Lower_Sensor=17647
,P_Edge_NP_BTN=17655
,P_UI_Unit_Status=17657
,P_Motor_Unit_Status=17667
,P_Current_Homming_Status_To_PLC=17717
,P_AO_Module_Arr=17805
,P_AO_Range_Set_Value=17810
,P_Force_BTN_M_Variable_Save=17843
,P_ABS_Phasing_Data=18243
,P_ABS_Home_Offset_Data=18248
,P_Servo_Gain_Kp=18257
,P_Servo_Gain_Kvfb=18287
,P_Servo_Gain_Kvff=18317
,P_Servo_Gain_Ki=18347
,P_Servo_Gain_SwZvInt=18377
,P_Servo_Gain_Kaff=18407
,P_Alarm_Arr=18438
,P_Alarm_Occur_Index_Flag=18539
,P_Alarm_Log=18550
,P_First_Alarm_Log=18650
,P_Alarm_duplicate_Check_Arr=18682
,P_Old_Drive_Alarm=19352
,P_Limit_PosData=19408
,P_Collision_Risk_Motor=19435
,P_P_IL_Normal_Pos_Offset=19442
,P_M_IL_Normal_Pos_Offset=19492
,P_P_IL_Upper_Pos_Offset=19542
,P_M_IL_Upper_Pos_Offset=19592
,P_P_IL_Align_Pos_Offset=19642
,P_M_IL_Align_Pos_Offset=19692
,P_P_IL_Stack_Pos_Offset=19742
,P_M_IL_Stack_Pos_Offset=19792
,P_Ca_2nd_T_Plus_IL_Offset=19846
,P_Ca_2nd_T_Minus_IL_Offset=19849
,P_Ca_2nd_Z_Plus_IL_Offset=19852
,P_Ca_2nd_Z_Minus_IL_Offset=19854
,P_An_2nd_T_Plus_IL_Offset=19856
,P_An_2nd_T_Minus_IL_Offset=19859
,P_An_2nd_Z_Minus_IL_Offset=19862
,P_FR_X_Plus_IL_Offset=19866
,P_FR_X_Minus_IL_Offset=19868
,P_Ca_NG_PNP_Plus_IL_Offset=19871
,P_Ca_NG_PNP_Minus_IL_Offset=19875
,P_An_NG_PNP_Plus_IL_Offset=19879
,P_An_NG_PNP_Minus_IL_Offset=19883
,P_Unloader_X_Plus_IL_Offset=19887
,P_Unloader_X_Minus_IL_Offset=19891
,P_Unloader_Z_Plus_IL_Offset=19895
,P_Unloader_Z_Minus_IL_Offset=19898
,P_IL_In_Offset=19901
,P_IL_Home_Chk_Motor_Num=19928
,P_NG_PNP_Motion_arr=20101
,P_Ecat_Read_MNTR=20143
,P_Ecat_Write_MNTR=20171
,P_Ecat_Save_MNTR=20199
,P_Ecat_Error_MNTR=20215
,P_Ecat_Read_Error_MNTR=20231
,P_Ecat_Each_Write_Error_MNTR=20247
,P_Pn000=20266
,P_Pn001=20286
,P_Pn00B=20306
,P_Pn100=20326
,P_Pn101=20346
,P_Pn102=20366
,P_Pn103=20386
,P_Pn123=20406
,P_Pn140=20426
,P_Pn141=20446
,P_Pn145=20466
,P_Pn146=20486
,P_Pn160=20506
,P_Pn161=20526
,P_Pn163=20546
,P_Pn170=20566
,P_Pn401=20586
,P_Pn408=20606
,P_Pn409=20626
,P_Pn40A=20646
,P_Pn40C=20666
,P_Pn40D=20686
,P_Pn416=20706
,P_Pn417=20726
,P_Pn511=20746
,P_Pn520=20766
,P_PnB02_Numerator=20786
,P_PnB02_Denominator=20806
,P_Pneumatic_Pressure_Unit_Tack_Time_Chk_Timer=20951
,P_Pneumatic_Pressure_Unit_Tack_Time=20978
,P_Discharge_Tact_Time_Arr=21009
,P_PLC19_All_Home_Tact_Time_Array=21090
,P_Act_ALL_Home_Time_Out=21113
,P_Act_Hold_Complete_Bit=21153
,P_Module_Act_Hold_Command_Array=21188
,P_OLD_Module_Act_Hold_Command_Array=21223
,P_Module_Act_Hold_State_Machine_Array=21258
,P_Act_Hold_Old_Time=21293
,P_Act_Hold_Time_Out=21329
,P_Act_Execute_Complete_Bit=21397
,P_Module_Act_Execute_Command_Array=21409
,P_OLD_Module_Act_Execute_Command_Array=21421
,P_Module_Act_Execute_State_Machine_Array=21433
,P_Act_Execute_Old_Time=21445
,P_Act_Execute_Time_Out=21458
,P_Buffer_Mode_Module_Status_Sequence=21507
,P_EXECUTE_Status_Prod_Sequence=21537
,P_Buffer_Seqdata_Execute_First_Sepa_Mode_Array=21574
,P_Execute_First_Sepa_Mode_Tact_Time_Array=21605
,P_Discharge_Seq_InterLock_Delay_Time=21632
,P_Discharge_Seq_InterLock_Flag=21662
,P_Buffer_Seqdata_Discharge_Array=21692
,P_Suspend_Discharge_Tact_Time_Array=21723
,P_ARC_Seq_InterLock_Delay_Time=21751
,P_ARC_Seq_InterLock_Flag=21781
,P_Buffer_Seqdata_ARC_Array=21811
,P_Suspend_ARC_Tact_Time_Array=21842
,P_Anode_1TR_Cell_Supply_Seq_InterLock_Delay_Time=21869
,P_Anode_1TR_Cell_Supply_Seq_InterLock_Flag=21899
,P_Buffer_Seqdata_Anode_1TR_Cell_Supply_Array=21929
,P_Suspend_Anode_1TR_Cell_Supply_Tact_Time_Array=21960
,P_Buffer_Seqdata_Hold_Exist_Insp_Array=21988
,P_Hold_Exist_Insp_Tact_Time_Array=22019
,P_Buffer_Seqdata_Hold_Remove_NG_PNP_Array=22047
,P_Hold_Remove_NG_PNP_Tact_Time_Array=22078
,P_Buffer_Seqdata_Hold_Remove_Align_Array=22109
,P_Hold_Remove_Align_Tact_Time_Array=22140
,P_Buffer_Seqdata_Hold_Remove_2TR_Array=22171
,P_Hold_Remove_2TR_Tact_Time_Array=22202
,P_Buffer_Seqdata_Hold_Supply_1TR_Array=22230
,P_Hold_Supply_1TR_Tact_Time_Array=22261
,P_Buffer_Seqdata_Hold_Supply_Align_Array=22294
,P_Hold_Supply_Align_Tact_Time_Array=22325
,P_Buffer_Seqdata_Hold_Supply_2TR_Array=22353
,P_Hold_Supply_2TR_Tact_Time_Array=22384
,P_Buffer_Seqdata_Hold_Semi_Run_Pos_Move_Array=22412
,P_Hold_Semi_Run_Pos_Move_Tact_Time_Array=22443
,P_Act_Complete_Bit=22464
,P_Act_Old_Time=22530
,P_Act_Delay_Time=22596
,P_Act_Time_Out=22663
,P_Discharge_Possibility_Bit=22730
,P_HOLD_Exist_Possibility_Bit=22796
,P_HOLD_NG_Remove_Possibility_Bit=22862
,P_HOLD_Align_Remove_Possibility_Bit=22928
,P_HOLD_2TR_Remove_Possibility_Bit=22994
,P_HOLD_1TR_Supply_Possibility_Bit=23060
,P_HOLD_Align_Supply_Possibility_Bit=23126
,P_HOLD_2TR_Supply_Possibility_Bit=23192
,P_HOLD_Semi_Run_Pos_Possibility_Bit=23258
,P_Module_Act_Command_Array=23324
,P_OLD_Module_Act_Command_Array=23390
,P_Module_Act_State_Machine_Array=23456
,P_Module_Act_State_Machine_Error_Array=23522
,P_Sensor_To_Sepa_Curr_Distance_mm=23618
,P_Suspend_Monitor_=23649
,P_Suspend_Discharge_Debug_Address=23663
,P_Suspend_Discharge_Debug_Value=23668
,P_Suspend_ARC_Debug_Address=23680
,P_Suspend_ARC_Debug_Value=23685
,P_ARC_Ready_Flag=23695
,P_Suspend_An_1TR_Supply_Debug_Address=23700
,P_Suspend_An_1TR_Supply_Debug_Value=23705
,P_Anode_Suspend_Supply_Complete=23717
,P_MOde_Num=23800
,P_Command_Depth=23805
,P_In_Position=23810
,P_Last_Cycle_Command=23815
,P_Slave1_Anode_Run_Motion_Array=23823
,P_Slave2_Anode_Run_Motion_Array=23923
,P_Slave3_Anode_Run_Motion_Array=24023
,P_Slave4_Anode_Run_Motion_Array=24123
,P_Slave5_Anode_Run_Motion_Array=24223
,P_Slave6_Anode_Run_Motion_Array=24323
,P_Slave7_Anode_Run_Motion_Array=24423
,P_Slave8_Anode_Run_Motion_Array=24523
,P_Slave9_Anode_Run_Motion_Array=24623
,P_Slave10_Anode_Run_Motion_Array=24723
,P_Slave15_Anode_Run_Motion_Array=24823
,P_Slave16_Anode_Run_Motion_Array=24923
,P_Slave17_Anode_Run_Motion_Array=25023
,P_Slave18_Anode_Run_Motion_Array=25123
,P_Slave19_Anode_Run_Motion_Array=25223
,P_Slave1_Cathode_Run_Motion_Array=25323
,P_Slave2_Cathode_Run_Motion_Array=25423
,P_Slave3_Cathode_Run_Motion_Array=25523
,P_Slave4_Cathode_Run_Motion_Array=25623
,P_Slave5_Cathode_Run_Motion_Array=25723
,P_Slave15_Cathode_Run_Motion_Array=25823
,P_Slave6_Cathode_Run_Motion_Array=25923
,P_Slave7_Cathode_Run_Motion_Array=26023
,P_Slave8_Cathode_Run_Motion_Array=26123
,P_Slave9_Cathode_Run_Motion_Array=26223
,P_Slave10_Cathode_Run_Motion_Array=26323
,P_Slave16_Cathode_Run_Motion_Array=26423
,P_Slave17_Cathode_Run_Motion_Array=26523
,P_Slave18_Cathode_Run_Motion_Array=26623
,P_Slave19_Cathode_Run_Motion_Array=26723
,P_HCmd_List=26865
,P_DataList=26901
,P_Hold_Data_Err=26906
,P_Hold_Motion_Arr=26934
,P_Hold_Err_MNTR=26999
,P_Hold_Err_Data_Save=27003
,P_Hold_Err_Action_Data_Save=27011
,P_Hold_Memory_Tower_Err_Pos=27020
,P_Buffer_Seqdata_MSA_Array=27048
,P_Buffer_Seqdata_Align_Take_Off_Array=27098
,P_VISION_MSA_Align_Module_Complete_Bit=27148
,P_Module_Manual_MSA_Act_Command_Array=27248
,P_OLD_Module_Manual_MSA_Act_Command_Array=27348
,P_Module_MSA_Act_State_Machine_Array=27448
,P_VISION_MSA_Seq_Stopping_Point=27548
,P_Align_Take_Off_Module_Complete_Bit=27581
,P_Module_Manual_Align_Take_Off_Act_Command_Array=27681
,P_OLD_Module_Manual_Align_Take_Off_Act_Command_Array=27781
,P_Module_Align_Take_Off_Act_State_Machine_Array=27881
,P_Buffer_Judge_Trg=27988
,P_PLC01_Queue_MNTR=27999
,P_PLC01_Exe_Is_Ena_Step_Flag=28029
,P_PLC01_Exe_Fist_Sepa_Step_Flag=28039
,P_PLC01_Exe_Prod_Step_Flag=28049
,P_PLC01_HOLD_Insp_Step_Flag=28054
,P_PLC01_HOLD_Main_Step_Flag=28064
,P_PLC01_Sus_Discharge_Step_Flag=28079
,P_PLC01_Sus_ARC_Step_Flag=28089
,P_PLC01_STOP_Init_Step_Flag=28099
,P_PLC01_STOP_Cycle_ST_Step_Flag=28109
,P_Vision_MNTR=28140
,P_No1_Recipe_Pos_IL=28167
,P_No2_Recipe_Pos_IL=28220
,P_No3_Recipe_Pos_IL=28273
,P_No4_Recipe_Pos_IL=28326
,P_No5_Recipe_Pos_IL=28379
,P_No6_Recipe_Pos_IL=28432
,P_No7_Recipe_Pos_IL=28485
,P_No8_Recipe_Pos_IL=28538
,P_No9_Recipe_Pos_IL=28591
,P_No10_Recipe_Pos_IL=28644
,P_Recipe_POS_Interock_M=28697};
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
#define P_Slave7_Move_X_Clamp_On_1st 8744
#define P_Slave7_Move_X_Clamp_On_2nd 8745
#define P_Slave7_Move_X_Clamp_On_3rd 8746
#define P_Slave7_Move_X_Clamp_On_4th 8747
#define P_Slave7_Move_X_Clamp_Off_1st 8748
#define P_Slave7_Move_X_Clamp_Off_2nd 8749
#define P_Slave7_Move_X_Clamp_Off_3rd 8750
#define P_Slave7_Move_Z_Clamp_On_1st 8751
#define P_Slave7_Move_Z_Clamp_On_2nd 8752
#define P_Slave7_Move_Z_Clamp_On_3rd 8753
#define P_Slave7_Move_Z_Clamp_On_4th 8754
#define P_Slave7_Move_Z_Clamp_Off_1st 8755
#define P_Slave7_Move_Z_Clamp_Off_2nd 8756
#define P_Slave7_Move_Z_Clamp_Off_3rd 8757
#define P_Slave7_Move_Z_Down 8758
#define P_Slave8_Move_X_Align_To_Stack_1st 8759
#define P_Slave8_Move_X_Align_To_Stack_2nd 8760
#define P_Slave8_Move_X_Stack_To_Align_1st 8761
#define P_Slave8_Move_X_Stack_To_Align_2nd 8762
#define P_Slave8_Move_X_Stack_To_Align_3rd 8763
#define P_Slave8_Move_Z_Align_To_Stack_1st 8764
#define P_Slave8_Move_Z_Align_To_Stack_2nd 8765
#define P_Slave8_Move_Z_Stack_To_Align_1st 8766
#define P_Slave8_Move_Z_Stack_To_Align_2nd 8767
#define P_Slave8_Move_Z_Stack_To_Align_3rd 8768
#define P_Slave8_Move_Z_Align_Up 8769
#define P_Slave8_Move_Z_Align_Down 8770
#define P_Slave8_Move_Z_Stack_Up 8771
#define P_Slave8_Move_Z_Stack_Down 8772
#define P_Slave10_Move_X_Belt_Align 8773
#define P_Slave10_Move_X_Align_Belt 8774
#define P_Slave10_Move_X_Belt_NG 8775
#define P_Slave10_Move_X_NG_Belt 8776
#define P_Slave10_Move_X_Align_NG 8777
#define P_Slave10_Move_Z_Belt_Down 8778
#define P_Slave10_Move_Z_Belt_Up 8779
#define P_Slave10_Move_X_NG_Align 8780
#define P_Slave10_Move_Z_Align_Down 8781
#define P_Slave10_Move_Z_Align_Up 8782
#define P_Slave10_Move_Z_NG_Down 8783
#define P_Slave10_Move_Z_NG_Up 8784
#define P_Slave1_Offset_X_Align 8785
#define P_Slave1_Offset_X_Belt 8786
#define P_Slave1_Offset_X_NG 8787
#define P_Slave1_Offset_Z_Belt 8788
#define P_Slave1_Offset_Z_Align 8789
#define P_Slave1_Offset_Z_NG 8790
#define P_Slave1_Offset_Z_Up 8791
#define P_Slave3_Offset_X_Stack 8792
#define P_Slave3_Offset_X_Align 8793
#define P_Slave3_Offset_Z_Stack 8794
#define P_Slave3_Offset_Z_Align 8795
#define P_Slave3_Offset_Z_Align_Up 8796
#define P_Slave3_Offset_Z_Align_Down 8797
#define P_Slave3_Offset_Z_Stack_Up 8798
#define P_Slave3_Offset_Z_Stack_Down 8799
#define P_Slave3_Offset_Z_Wait_Pos 8800
#define P_Slave4_Offset_X_Clamp_On 8801
#define P_Slave4_Offset_X_Clamp_Off 8802
#define P_Slave4_Offset_Z_Clamp_On 8803
#define P_Slave4_Offset_Z_Clamp_Off 8804
#define P_Slave5_Offset_X_Anode_Move_1st 8805
#define P_Slave5_Offset_X_Anode_Move_2nd 8806
#define P_Slave5_Offset_X_Cathode_Move_1st 8807
#define P_Slave5_Offset_X_Cathode_Move_2nd 8808
#define P_Slave5_Offset_X_Sepa_1st 8809
#define P_Slave5_Offset_X_Sepa_2nd 8810
#define P_Slave5_Offset_X_Sepa_3rd 8811
#define P_Slave5_Offset_X_Sepa_4th 8812
#define P_Slave5_Offset_X_Sepa_5th 8813
#define P_Slave5_Offset_Z_Sepa_1st 8814
#define P_Slave5_Offset_Z_Sepa_2nd 8815
#define P_Slave5_Offset_Z_Sepa_3rd 8816
#define P_Slave5_Offset_Z_Sepa_4th 8817
#define P_Slave5_Offset_Z_Sepa_5th 8818
#define P_Slave6_Offset_X_For_Sepa_Mode 8819
#define P_Slave6_Offset_Z_Wait_Pos 8820
#define P_Slave7_Offset_X_Clamp_On 8821
#define P_Slave7_Offset_X_Clamp_Off 8822
#define P_Slave7_Offset_Z_Clamp_On 8823
#define P_Slave7_Offset_Z_Clamp_Off 8824
#define P_Slave8_Offset_X_Stack 8825
#define P_Slave8_Offset_X_Align 8826
#define P_Slave8_Offset_Z_Stack 8827
#define P_Slave8_Offset_Z_Align 8828
#define P_Slave8_Offset_Z_Align_Up 8829
#define P_Slave8_Offset_Z_Align_Down 8830
#define P_Slave8_Offset_Z_Stack_Up 8831
#define P_Slave8_Offset_Z_Stack_Down 8832
#define P_Slave8_Offset_Z_Wait_Pos 8833
#define P_Slave10_Offset_X_Align 8834
#define P_Slave10_Offset_X_Belt 8835
#define P_Slave10_Offset_X_NG 8836
#define P_Slave10_Offset_Z_Belt 8837
#define P_Slave10_Offset_Z_Align 8838
#define P_Slave10_Offset_Z_NG 8839
#define P_Slave10_Offset_Z_Up 8840
#define P_Slave1_Target_Z_CV_Blower_On_Pos 8841
#define P_Slave1_Target_Z_CV_Blower_Off_Pos 8842
#define P_Slave10_Target_Z_CV_Blower_On_Pos 8843
#define P_Slave10_Target_Z_CV_Blower_Off_Pos 8844
#define P_Anode_CV_Blower_On_Flag 8845
#define P_Anode_CV_Blower_Off_Flag 8846
#define P_Cathode_CV_Blower_On_Flag 8847
#define P_Cathode_CV_Blower_Off_Flag 8848
#define P_Select_RingBlow_Off_Use 8849
#define P_2nd_PNP_Stack_Down_Pos 8850
#define P_2nd_PNP_Stack_Up_Pos 8851
#define P_Anode_Clamp_Down_MNTR 8852
#define P_Cathode_Clamp_Down_MNTR 8853
#define P_Clamp_1st_Vector_Y 8854
#define P_Clamp_1st_Vector_Z 8855
#define P_Clamp_1st_Vector_Vel 8856
#define P_Clamp_2nd_Vector_Y 8857
#define P_Clamp_2nd_Vector_Z 8858
#define P_Clamp_2nd_Vector_Vel 8859
#define P_Clamp_2nd_TM_Time 8860
#define P_FR_Ta 8861
#define P_FR_Ts 8862
#define P_FR_Tm 8863
#define P_Master_Motion_Heartbit_Flag 8864
#define P_Master_Heartbit_Trigger 8865
#define P_Parity_Heartbit_Bit 8866
#define P_Master_Heartbit_Move 8867
#define P_Force_Stop_Flag 8868
#define P_Execute_DryRun_Stop_Timer 8869
#define P_DryRun_Timer 8870
#define P_Dryrun_Operating_Time 8871
#define P_Anode_Align_Vac_Err_On 8872
#define P_Cathode_Align_Vac_Err_On 8873
#define P_Anode_1ST_TR_Vac_Err_On 8874
#define P_Anode_2ND_TR_Vac_Err_On 8875
#define P_Cathode_1ST_TR_Vac_Err_On 8876
#define P_Cathode_2ND_TR_Vac_Err_On 8877
#define P_MNTR_PLC0_Task_Time 8878
#define P_MNTR_PLC0_Task_Max_Time 8880
#define P_MNTR_PLC1_Task_Time 8881
#define P_MNTR_PLC1_Task_Max_Time 8883
#define P_MNTR_PLC2_Task_Time 8884
#define P_MNTR_PLC2_Task_Max_Time 8886
#define P_MNTR_PLC3_Task_Time 8887
#define P_MNTR_PLC3_Task_Max_Time 8889
#define P_MNTR_PLC4_Task_Time 8890
#define P_MNTR_PLC4_Task_Max_Time 8892
#define P_MNTR_PLC5_Task_Time 8893
#define P_MNTR_PLC5_Task_Max_Time 8895
#define P_MNTR_PLC6_Task_Time 8896
#define P_MNTR_PLC6_Task_Max_Time 8898
#define P_MNTR_PLC7_Task_Time 8899
#define P_MNTR_PLC7_Task_Max_Time 8901
#define P_MNTR_PLC8_Task_Time 8902
#define P_MNTR_PLC8_Task_Max_Time 8904
#define P_MNTR_PLC9_Task_Time 8905
#define P_MNTR_PLC9_Task_Max_Time 8907
#define P_MNTR_PLC10_Task_Time 8908
#define P_MNTR_PLC10_Task_Max_Time 8910
#define P_MNTR_PLC11_Task_Time 8911
#define P_MNTR_PLC11_Task_Max_Time 8913
#define P_MNTR_PLC12_Task_Time 8914
#define P_MNTR_PLC12_Task_Max_Time 8916
#define P_MNTR_PLC13_Task_Time 8917
#define P_MNTR_PLC13_Task_Max_Time 8919
#define P_MNTR_PLC14_Task_Time 8920
#define P_MNTR_PLC14_Task_Max_Time 8922
#define P_MNTR_PLC15_Task_Time 8923
#define P_MNTR_PLC15_Task_Max_Time 8925
#define P_MNTR_PLC16_Task_Time 8926
#define P_MNTR_PLC16_Task_Max_Time 8928
#define P_MNTR_PLC17_Task_Time 8929
#define P_MNTR_PLC17_Task_Max_Time 8931
#define P_MNTR_PLC18_Task_Time 8932
#define P_MNTR_PLC18_Task_Max_Time 8934
#define P_MNTR_PLC19_Task_Time 8935
#define P_MNTR_PLC19_Task_Max_Time 8937
#define P_MNTR_PLC20_Task_Time 8938
#define P_MNTR_PLC20_Task_Max_Time 8940
#define P_MNTR_PLC21_Task_Time 8941
#define P_MNTR_PLC21_Task_Max_Time 8943
#define P_MNTR_PLC22_Task_Time 8944
#define P_MNTR_PLC22_Task_Max_Time 8946
#define P_MNTR_PLC23_Task_Time 8947
#define P_MNTR_PLC23_Task_Max_Time 8949
#define P_MNTR_PLC24_Task_Time 8950
#define P_MNTR_PLC24_Task_Max_Time 8952
#define P_MNTR_PLC25_Task_Time 8953
#define P_MNTR_PLC25_Task_Max_Time 8955
#define P_MNTR_PLC26_Task_Time 8956
#define P_MNTR_PLC26_Task_Max_Time 8958
#define P_MNTR_PLC27_Task_Time 8959
#define P_MNTR_PLC27_Task_Max_Time 8961
#define P_MNTR_PLC28_Task_Time 8962
#define P_MNTR_PLC28_Task_Max_Time 8964
#define P_MNTR_PLC29_Task_Time 8965
#define P_MNTR_PLC29_Task_Max_Time 8967
#define P_MNTR_PLC30_Task_Time 8968
#define P_MNTR_PLC30_Task_Max_Time 8970
#define P_Coord_Shutdown_Status_log 8971
#define P_In_Pos_Trg 8972
#define P_Position_Calc_Status 8973
#define P_Vision_Result 8974
#define P_Vision_Result_Get_First_Cycle 8978
#define P_Init_Result 8982
#define P_PNP_Pos 8988
#define P_Execute_Manage_Mode 8989
#define P_Align_NG_Tack_Flag 8990
#define P_2th_Ng_Front_Vision_Pos 8991
#define P_Anode_Align_OK_Flag 8992
#define P_Anode_Align_NG_Flag 8993
#define P_Cathode_Align_OK_Flag 8994
#define P_Cathode_Align_NG_Flag 8995
#define P_Stack_Table_OK_Flag 8996
#define P_Anode_Retry_OK_Flag 8997
#define P_Anode_Retry_NG_Flag 8998
#define P_Cathode_Retry_OK_Flag 8999
#define P_Cathode_Retry_NG_Flag 9000
#define P_Func_Anode_2TR_Avoid_X_Value 9001
#define P_Func_Cathode_2TR_Avoid_X_Value 9002
#define P_Anode_Surf_Insp_Trigger 9003
#define P_Cathode_Surf_Insp_Trigger 9004
#define P_CMD_Cathode_Vision_Tigger 9005
#define P_CMD_Anode_Vision_Tigger 9006
#define P_CMD_Stack_Table_Vision_Trigger 9007
#define P_CMD_Cathode_Empty_Table_Vision 9008
#define P_CMD_Anode_Empty_Table_Vision 9009
#define P_CMD_Cathode_Existence_Vision 9010
#define P_CMD_Anode_Existence_Vision 9011
#define P_Align_Manager_Error_Cnt 9012
#define P_Surf_Manager_Error_Cnt 9013
#define P_Retry_Manager_Error_Cnt 9014
#define P_Stack_Manager_Error_Cnt 9015
#define P_Existence_Manager_Error_Cnt 9016
#define P_Where_To_Occur_Error_Retry_Status 9017
#define P_Which_Retry_Insp_Type 9018
#define P_Where_To_Occur_Error_Align_Status 9019
#define P_Which_Align_Insp_Type 9020
#define P_Where_To_Occur_Error_Surf_Status 9021
#define P_Which_Surf_Insp_Type 9022
#define P_Where_To_Occur_Error_Existence_Status 9023
#define P_Which_Existence_Insp_Type 9024
#define P_Where_To_Occur_Error_Stack_Status 9025
#define P_Vision_Clamping_Flag 9026
#define P_Exist_Insp_Total_Time 9027
#define P_Exist_Insp_Trg_Time 9028
#define P_Stack_Insp_Total_Time 9029
#define P_Stack_Trg_Time 9030
#define P_Surf_Insp_Total_Time 9031
#define P_Retry_Insp_Total_Time 9032
#define P_Surf_TimeOut_Cnt 9033
#define P_Align_TimeOut_Cnt 9034
#define P_Retry_TimeOut_Cnt 9035
#define P_Stack_TimeOut_Cnt 9036
#define P_Align_Insp_Total_Time 9037
#define P_Align_Trg_Time 9038
#define P_Aligning_Time 9039
#define P_Cathode_Empty_Table_Vision_Flag 9040
#define P_Anode_Empty_Table_Vision_Flag 9041
#define M_Cathode_Belt_MNTR 8351
#define M_Cathode_1st_MNTR 8352
#define M_Cathode_Align_MNTR 8353
#define M_Cathode_2nd_MNTR 8354
#define M_Anode_Belt_MNTR 8355
#define M_Anode_1st_MNTR 8356
#define M_Anode_Align_MNTR 8357
#define M_Anode_2nd_MNTR 8358
#define P_Selected_Surf_Insp_Type 9042
#define P_Selected_Align_Insp_Type 9043
#define P_Selected_Retry_Insp_Type 9044
#define P_Selected_Exist_Insp_Type 9045
#define P_VISION_RECIPE_PLC4_Surface_TrgOff 9046
#define P_VISION_RECIPE_PLC4_Surface_Ins_Time 9047
#define P_CMD_Cathode_Vision_Retry 9048
#define P_CMD_Anode_Vision_Retry 9049
#define P_Prev_Align_Manager_Status 9050
#define P_Prev_Surf_Manager_Status 9051
#define P_Prev_Exist_Manager_Status 9052
#define P_Prev_Selected_Align_Type 9053
#define P_Prev_Selected_Surf_Type 9054
#define P_Prev_Selected_Exist_Type 9055
#define P_Status_Align_Vision_Manager 9056
#define P_Status_Surface_Vision_Manager 9057
#define P_Status_Sheet_Existence_Vision_Manager 9058
#define P_Status_Stack_Vision_Manager 9059
#define P_Status_Retry_Vision_Manager 9060
#define P_Vision_All_Status_Manager_Init_Flag 9061
#define P_Cycle_Stop_Command 9062
#define P_Surface_Inspection_Complete_Error 9063
#define P_Switching_From_Cathode_To_Anode_Flag 9064
#define P_Switching_From_Anode_To_Cathode_Flag 9065
#define P_Switching_Mode_Complete_Flag 9066
#define P_Surf_Cathode_Error_Count 9067
#define P_Surf_Anode_Error_Count 9068
#define P_First_Anode_Sheet_Supply_Flag 9069
#define P_First_Cathode_Sheet_Supply_Flag 9070
#define P_Set_Cathode_Align_Pos_Zero 9071
#define P_Set_Anode_Align_Pos_Zero 9072
#define P_Cathode_Cur_Mode 9073
#define P_Anode_Cur_Mode 9074
#define M_X_Vision_Stack_Align_Ok 4228
#define M_X_Vision_Stack_Align_Ng 4227
#define M_Y_PLC_EPCAlignMode_Complete_Return 5195
#define M_Y_Vision_Stack_EPC_Align_Vision_Trigger 5234
#define P_AN_to_CA_DR_Trig 9075
#define P_CA_to_AN_DR_Trig 9076
#define P_Tension_FF 9077
#define P_Sepa_CompDac_Value 9079
#define P_FR_Move_Command 9080
#define P_FF_Enable 9081
#define P_Anode_Run_FR_Move_Check_AI 9082
#define P_Cathode_Run_FR_Move_Check_AI 9083
#define P_FR_Move_Check_AI_OffSet 9084
#define P_FR_AI_Value 9085
#define P_Aver_FR_AI_Value 9090
#define P_Process_Function_Command 9091
#define P_HOLD_Existence_Insp_State_Machine 9092
#define P_Execute_IsEnable_State_Machine 9093
#define P_EXECUTE_FUNC_Ready_STEP 9094
#define P_Execute_First_Sepa_Ontable_State_Machine 9095
#define P_Execute_Prod_Manage_State_Machine 9096
#define P_Execute_Enqueue_State_Machine 9097
#define P_STOP_Initial_Process_STEP 9098
#define P_STOP_Cylce_Stop_STEP 9099
#define P_Stop_CycleStop_Position 9100
#define P_Upcount_NextStep 9101
#define P_SUSPEND_FUNC_JR_Discharge_STEP 9102
#define P_SUSPEND_FUNC_ARC_STEP 9103
#define P_Suspend_ARC_Complete_Flag 9104
#define P_EXECUTE_FUNC_Debug_On_Sepa_STEP 9105
#define P_QueueCommand_Occurs 9106
#define P_EXECUTE_STEP 9107
#define P_SUSPEND_STEP 9108
#define P_HOLD_STEP 9109
#define P_STOP_STEP 9110
#define P_EXECUTE_Error_STEP 9111
#define P_SUSPEND_Error_STEP 9112
#define P_HOLD_Error_STEP 9113
#define P_STOP_Error_STEP 9114
#define P_Queue_Enqueue_Command 9115
#define P_Queue_Enqueue_return 9116
#define P_Queue_Dequeue_Command 9117
#define P_Queue_Dequeue_return 9118
#define P_Queue_Peek_Command 9119
#define P_Dequeue_Log 9120
#define P_Dummy_Dequeue 9140
#define P_Queue_Command_Status 9141
#define P_Queue_Process_Command 9142
#define P_Queue_Process_Status 9143
#define P_Coord_Test 9144
#define P_Coord_Test3 9145
#define P_Coord_Test2 9146
#define P_Coord_Motion_Prog_Down_Entering_Bit 9147
#define P_PMAC_Coord_Status_Bit 9148
#define P_Coord_Down_Check_Bit 9149
#define P_PMAC_Coord_Down_Inspection_Flag 9150
#define P_PMAC_Coord_Down_Num 9151
#define P_PMAC_Coord_Error_Status 9152
#define P_Motor_Current_Pos 9153
#define P_Axis_Scale_Value 9203
#define P_Except_Return_Array 9253
#define P_Hold_Memory 9353
#define P_Suspend_Memory 9358
#define P_Execute_Memory 9363
#define P_Stop_Memory 9368
#define P_PLC01_Process_Function_Enter_Flag 9373
#define P_PLC01_SubMotion_Active 9374
#define P_PLC01_SlaveMotion_Active 9375
#define P_EXECUTE_Isenable_MNTR 9376
#define P_EXECUTE_IsEnable_Firt_Stacking_Flag 9377
#define P_PLC01_Execute_Retry_Sepa_Mode_Count 9378
#define P_SUSPEND_MNTR 9379
#define P_SUSPEND_MNTR_2 9380
#define P_Execute_Last_Run_Flag 9381
#define P_Suspend_ARC_Request_Flag 9382
#define P_Hold_Queue_Exist_Insp_MNTR 9383
#define P_CirQueue_Status_Value 9384
#define P_Debug_CirQueue_Status 9385
#define P_Front_Index 9386
#define P_Rear_Index 9387
#define P_Index_Max 9388
#define P_CircularQueue_Command_array 9389
#define P_CirQueue_Length 9400
#define P_Queue_Full 9401
#define P_Queue_Empty 9402
#define P_Queue_PeekEmpty 9403
#define P_Self_items 9404
#define P_Hold_Pause_Need_Flag 9405
#define P_Pause_Ready_Flag 9406
#define P_Pause_Running_Flag 9407
#define P_Resume_Ready_Flag 9408
#define P_Resume_Start_Flag 9409
#define P_Hold_Resume_Need_Flag 9410
#define M_Y_A_Site_Heart_Bit 5014
#define M_X_PLC_Anode_Sheet_Ready2 4010
#define M_X_PLC_Cathode_Sheet_Ready2 4011
#define M_X_B_Site_Heart_Bit 4014
#define P_Stack_Heart_Bit_Timer 9411
#define P_Stack_Heart_Bit_Calc 9412
#define P_Stack_Heart_Bit_Sync_State_Machine 9413
#define P_Pause_Anode_MNTR_Min_Trigger 9414
#define P_Pause_Anode_MNTR_Max_Trigger 9415
#define P_Pause_Cathode_MNTR_Min_Trigger 9416
#define P_Pause_Cathode_MNTR_Max_Trigger 9417
#define P_Pause_Protect_Variable 9418
#define P_Resume_Protect_Variable 9419
#define P_Sepa_Mode_Opposite_Resume_Free 9420
#define P_Sepa_To_Normal_Mode_Sync_Flag 9421
#define P_Sepa_To_Normal_Mode_Sync_Err_Avoid 9422
#define P_Recipe_1st_MotorNo 9423
#define P_Recipe_2nd_MotorNo 9473
#define P_Recipe_3rd_MotorNo 9523
#define P_Recipe_4th_MotorNo 9573
#define P_Recipe_5th_MotorNo 9623
#define P_Recipe_6th_MotorNo 9673
#define P_X_Axis_Num 9723
#define P_Y_Axis_Num 9724
#define P_Z_Axis_Num 9725
#define P_ZZ_Axis_Num 9726
#define P_X_Unit 9727
#define P_Y_Unit 9728
#define P_Z_Unit 9729
#define P_ZZ_Unit 9730
#define P_Pos_Memory_Bit_Save 9731
#define P_Total_Unit_Bit 9732
#define P_Total_Unit_Pos 9733
#define P_Anode_1st_Unit_Status 9734
#define P_Anode_2nd_Unit_Status 9735
#define P_Anode_CLP_Unit_Status 9736
#define P_FinalRoll_Unit_Status 9737
#define P_StackTable_Unit_Status 9738
#define P_Cathode_CLP_Unit_Status 9739
#define P_Cathode_2nd_Unit_Status 9740
#define P_Cathode_1st_Unit_Status 9741
#define P_1st_Unloader_Unit_Status 9742
#define P_Cathode_NG_PNP_Status 9743
#define P_Anode_NG_PNP_Status 9744
#define P_Unit_integrated_Status 9745
#define P_Unit_Status_Update_Flag 9746
#define P_Memory_Tower_Search_Flag 9747
#define P_MemTow_integrated_return 9748
#define P_Error_STMS_Memory_Tower_Status 9749
#define P_STMS_Memory_Tower_Status 9750
#define P_Recipe_M01_POS 9751
#define P_Recipe_M02_POS 9762
#define P_Recipe_M03_POS 9773
#define P_Recipe_M04_POS 9784
#define P_Recipe_M05_POS 9795
#define P_Recipe_M06_POS 9806
#define P_Recipe_M07_POS 9817
#define P_Recipe_M08_POS 9828
#define P_Recipe_M09_POS 9839
#define P_Recipe_M10_POS 9850
#define P_Recipe_M11_POS 9861
#define P_Recipe_M12_POS 9872
#define P_Recipe_M13_POS 9883
#define P_Recipe_M14_POS 9894
#define P_Recipe_M15_POS 9905
#define P_Recipe_M16_POS 9916
#define P_Recipe_M17_POS 9927
#define P_Recipe_M18_POS 9938
#define P_Recipe_M19_POS 9949
#define P_Recipe_M20_POS 9960
#define P_Recipe_M21_POS 9971
#define P_Recipe_M22_POS 9982
#define P_Recipe_M23_POS 9993
#define P_Recipe_M24_POS 10004
#define P_Recipe_M25_POS 10015
#define P_Recipe_M26_POS 10026
#define P_Recipe_M27_POS 10037
#define P_Recipe_M28_POS 10048
#define P_Recipe_M29_POS 10059
#define P_Recipe_M30_POS 10070
#define P_Recipe_M31_POS 10081
#define P_Recipe_M32_POS 10092
#define P_Recipe_M33_POS 10103
#define P_Recipe_M34_POS 10114
#define P_Recipe_M35_POS 10125
#define P_Recipe_M36_POS 10136
#define P_Recipe_M37_POS 10147
#define P_Recipe_M38_POS 10158
#define P_Recipe_M39_POS 10169
#define P_Recipe_M40_POS 10180
#define P_Recipe_M41_POS 10191
#define P_Recipe_M42_POS 10202
#define P_Recipe_M43_POS 10213
#define P_Recipe_M44_POS 10224
#define P_Recipe_M45_POS 10235
#define P_Recipe_M46_POS 10246
#define P_Recipe_M47_POS 10257
#define P_Recipe_M48_POS 10268
#define P_Recipe_M49_POS 10279
#define P_Recipe_M50_POS 10290
#define P_Memory_Tower_X_Err_Flag 10301
#define P_Memory_Tower_Y_Err_Flag 10302
#define P_Memory_Tower_Z_Err_Flag 10303
#define P_Memory_Tower_ZZ_Err_Flag 10304
#define P_CA_Clamp_Cell_Down_Pos 10305
#define P_AN_Clamp_Cell_Down_Pos 10306
#define P_Error_X_Axis_Packml 10307
#define P_Error_X_Axis_Dequeue 10313
#define P_Error_X_Axis_Num 10319
#define P_Memory_Tower_Err_Pos_X_Save 10325
#define P_Error_Y_Axis_Packml 10331
#define P_Error_Y_Axis_Dequeue 10337
#define P_Error_Y_Axis_Num 10343
#define P_Memory_Tower_Err_Pos_Y_Save 10349
#define P_Error_Z_Axis_Packml 10355
#define P_Error_Z_Axis_Dequeue 10361
#define P_Error_Z_Axis_Num 10367
#define P_Memory_Tower_Err_Pos_Z_Save 10373
#define P_Error_ZZ_Axis_Packml 10379
#define P_Error_ZZ_Axis_Dequeue 10385
#define P_Error_ZZ_Axis_Num 10391
#define P_Memory_Tower_Err_Pos_ZZ_Save 10397
#define P_PNP_Abort_Use_Bit 10403
#define P_PNP_Abort_Use_Total_Bit 10404
#define P_C_1st_PNP_FWD_Abort_Use_Bit 10405
#define P_C_1st_PNP_BWD_Abort_Use_Bit 10406
#define P_C_2nd_PNP_FWD_Abort_Use_Bit 10407
#define P_C_2nd_PNP_BWD_Abort_Use_Bit 10408
#define P_A_1st_PNP_FWD_Abort_Use_Bit 10409
#define P_A_1st_PNP_BWD_Abort_Use_Bit 10410
#define P_A_2nd_PNP_FWD_Abort_Use_Bit 10411
#define P_A_2nd_PNP_BWD_Abort_Use_Bit 10412
#define P_Single_Motor_Control_Bit 10413
#define P_C_1st_PNP_FWD_Abort_Calc_Bit 10414
#define P_C_1st_PNP_BWD_Abort_Calc_Bit 10415
#define P_C_2nd_PNP_FWD_Abort_Calc_Bit 10416
#define P_C_2nd_PNP_BWD_Abort_Calc_Bit 10417
#define P_A_1st_PNP_FWD_Abort_Calc_Bit 10418
#define P_A_1st_PNP_BWD_Abort_Calc_Bit 10419
#define P_A_2nd_PNP_FWD_Abort_Calc_Bit 10420
#define P_A_2nd_PNP_BWD_Abort_Calc_Bit 10421
#define P_C_1st_PNP_FWD_Cur_Pos 10422
#define P_C_1st_PNP_FWD_Cur_Vel 10423
#define P_C_1st_PNP_BWD_Cur_Pos 10424
#define P_C_1st_PNP_BWD_Cur_Vel 10425
#define P_C_2nd_PNP_FWD_Cur_Pos 10426
#define P_C_2nd_PNP_FWD_Cur_Vel 10427
#define P_C_2nd_PNP_BWD_Cur_Pos 10428
#define P_C_2nd_PNP_BWD_Cur_Vel 10429
#define P_A_1st_PNP_FWD_Cur_Pos 10430
#define P_A_1st_PNP_FWD_Cur_Vel 10431
#define P_A_1st_PNP_BWD_Cur_Pos 10432
#define P_A_1st_PNP_BWD_Cur_Vel 10433
#define P_A_2nd_PNP_FWD_Cur_Pos 10434
#define P_A_2nd_PNP_FWD_Cur_Vel 10435
#define P_A_2nd_PNP_BWD_Cur_Pos 10436
#define P_A_2nd_PNP_BWD_Cur_Vel 10437
#define P_C_1st_PNP_FWD_Limit_Pos 10438
#define P_C_1st_PNP_BWD_Limit_Pos 10439
#define P_C_2nd_PNP_FWD_Limit_Pos 10440
#define P_C_2nd_PNP_BWD_Limit_Pos 10441
#define P_A_1st_PNP_FWD_Limit_Pos 10442
#define P_A_1st_PNP_BWD_Limit_Pos 10443
#define P_A_2nd_PNP_FWD_Limit_Pos 10444
#define P_A_2nd_PNP_BWD_Limit_Pos 10445
#define P_C_1st_PNP_FWD_Max_Limit_Pos 10446
#define P_C_1st_PNP_BWD_Max_Limit_Pos 10447
#define P_C_2nd_PNP_FWD_Max_Limit_Pos 10448
#define P_C_2nd_PNP_BWD_Max_Limit_Pos 10449
#define P_A_1st_PNP_FWD_Max_Limit_Pos 10450
#define P_A_1st_PNP_BWD_Max_Limit_Pos 10451
#define P_A_2nd_PNP_FWD_Max_Limit_Pos 10452
#define P_A_2nd_PNP_BWD_Max_Limit_Pos 10453
#define P_C_1st_PNP_FWD_Remain_Stroke 10454
#define P_C_1st_PNP_BWD_Remain_Stroke 10455
#define P_C_2nd_PNP_FWD_Remain_Stroke 10456
#define P_C_2nd_PNP_BWD_Remain_Stroke 10457
#define P_A_1st_PNP_FWD_Remain_Stroke 10458
#define P_A_1st_PNP_BWD_Remain_Stroke 10459
#define P_A_2nd_PNP_FWD_Remain_Stroke 10460
#define P_A_2nd_PNP_BWD_Remain_Stroke 10461
#define P_C_1st_PNP_FWD_Stroke_Time 10462
#define P_C_1st_PNP_BWD_Stroke_Time 10463
#define P_C_2nd_PNP_FWD_Stroke_Time 10464
#define P_C_2nd_PNP_BWD_Stroke_Time 10465
#define P_A_1st_PNP_FWD_Stroke_Time 10466
#define P_A_1st_PNP_BWD_Stroke_Time 10467
#define P_A_2nd_PNP_FWD_Stroke_Time 10468
#define P_A_2nd_PNP_BWD_Stroke_Time 10469
#define P_C_1st_PNP_FWD_Max_Speed 10470
#define P_C_1st_PNP_BWD_Max_Speed 10471
#define P_C_2nd_PNP_FWD_Max_Speed 10472
#define P_C_2nd_PNP_BWD_Max_Speed 10473
#define P_A_1st_PNP_FWD_Max_Speed 10474
#define P_A_1st_PNP_BWD_Max_Speed 10475
#define P_A_2nd_PNP_FWD_Max_Speed 10476
#define P_A_2nd_PNP_BWD_Max_Speed 10477
#define P_C_1st_PNP_FWD_ACC_Dis 10478
#define P_C_1st_PNP_BWD_ACC_Dis 10479
#define P_C_2nd_PNP_FWD_ACC_Dis 10480
#define P_C_2nd_PNP_BWD_ACC_Dis 10481
#define P_A_1st_PNP_FWD_ACC_Dis 10482
#define P_A_1st_PNP_BWD_ACC_Dis 10483
#define P_A_2nd_PNP_FWD_ACC_Dis 10484
#define P_A_2nd_PNP_BWD_ACC_Dis 10485
#define P_C_1st_PNP_FWD_AbortTa 10486
#define P_C_1st_PNP_FWD_AbortTs 10487
#define P_C_1st_PNP_BWD_AbortTa 10488
#define P_C_1st_PNP_BWD_AbortTs 10489
#define P_C_2nd_PNP_FWD_AbortTa 10490
#define P_C_2nd_PNP_FWD_AbortTs 10491
#define P_C_2nd_PNP_BWD_AbortTa 10492
#define P_C_2nd_PNP_BWD_AbortTs 10493
#define P_A_1st_PNP_FWD_AbortTa 10494
#define P_A_1st_PNP_FWD_AbortTs 10495
#define P_A_1st_PNP_BWD_AbortTa 10496
#define P_A_1st_PNP_BWD_AbortTs 10497
#define P_A_2nd_PNP_FWD_AbortTa 10498
#define P_A_2nd_PNP_FWD_AbortTs 10499
#define P_A_2nd_PNP_BWD_AbortTa 10500
#define P_A_2nd_PNP_BWD_AbortTs 10501
#define P_C_1st_PNP_FWD_Abort_Dec_Offset 10502
#define P_C_1st_PNP_BWD_Abort_Dec_Offset 10503
#define P_C_2nd_PNP_FWD_Abort_Dec_Offset 10504
#define P_C_2nd_PNP_BWD_Abort_Dec_Offset 10505
#define P_A_1st_PNP_FWD_Abort_Dec_Offset 10506
#define P_A_1st_PNP_BWD_Abort_Dec_Offset 10507
#define P_A_2nd_PNP_FWD_Abort_Dec_Offset 10508
#define P_A_2nd_PNP_BWD_Abort_Dec_Offset 10509
#define P_1st_PNP_FWD_Abort_Offset 10510
#define P_1st_PNP_BWD_Abort_Offset 10600
#define P_2nd_PNP_FWD_Abort_Offset 10690
#define P_2nd_PNP_BWD_Abort_Offset 10780
#define P_Abort_Init_Value 10870
#define P_C_1st_PNP_FWD_AbortTa_Buffer 10871
#define P_C_1st_PNP_FWD_AbortTs_Buffer 10872
#define P_C_1st_PNP_BWD_AbortTa_Buffer 10873
#define P_C_1st_PNP_BWD_AbortTs_Buffer 10874
#define P_C_2nd_PNP_FWD_AbortTa_Buffer 10875
#define P_C_2nd_PNP_FWD_AbortTs_Buffer 10876
#define P_C_2nd_PNP_BWD_AbortTa_Buffer 10877
#define P_C_2nd_PNP_BWD_AbortTs_Buffer 10878
#define P_A_1st_PNP_FWD_AbortTa_Buffer 10879
#define P_A_1st_PNP_FWD_AbortTs_Buffer 10880
#define P_A_1st_PNP_BWD_AbortTa_Buffer 10881
#define P_A_1st_PNP_BWD_AbortTs_Buffer 10882
#define P_A_2nd_PNP_FWD_AbortTa_Buffer 10883
#define P_A_2nd_PNP_FWD_AbortTs_Buffer 10884
#define P_A_2nd_PNP_BWD_AbortTa_Buffer 10885
#define P_A_2nd_PNP_BWD_AbortTs_Buffer 10886
#define P_C_1st_PNP_FWD_Restore_Bit 10887
#define P_C_1st_PNP_BWD_Restore_Bit 10888
#define P_C_2nd_PNP_FWD_Restore_Bit 10889
#define P_C_2nd_PNP_BWD_Restore_Bit 10890
#define P_A_1st_PNP_FWD_Restore_Bit 10891
#define P_A_1st_PNP_BWD_Restore_Bit 10892
#define P_A_2nd_PNP_FWD_Restore_Bit 10893
#define P_A_2nd_PNP_BWD_Restore_Bit 10894
#define P_Align_Inspection_Time 10895
#define P_Front_Inspection_Time 10896
#define P_Stack_Inspection_Time 10897
#define P_Existence_Inspection_Time 10898
#define P_EmptyTable_Inspection_Time 10899
#define P_FirstSepa_Inspection_Time 10900
#define P_Vision_Anode_Sepa_Mode_Stack_Command 10901
#define P_Vision_Cathode_Sepa_Mode_Stack_Command 10902
#define P_Cathode_Sepa_Mode_Timer 10903
#define P_Anode_Sepa_Mode_Timer 10904
#define P_Vision_Pass 10905
#define P_FirstSepa_Ret 10906
#define P_Vision_Align_Command 10907
#define P_Vision_Surface_Command 10908
#define P_Vision_Stack_Command 10909
#define P_Vision_Existence_Command 10910
#define P_Vision_EmptyTable_Command 10911
#define P_Vision_FirstSepa_Command 10912
#define P_Selected_Align_Inspection_Unit 10913
#define P_Selected_Surface_Inspection_Unit 10914
#define P_Selected_Stack_Inspection_Unit 10915
#define P_Selected_Existence_Inspection_Unit 10916
#define P_Selected_EmptyTable_Inspection_Unit 10917
#define P_Set_Cathode_Align_Zero_Pos 10918
#define P_Set_Anode_Align_Zero_Pos 10919
#define P_Vision_Align_State_Machine 10920
#define P_Vision_Surface_State_Machine 10921
#define P_Vision_Stack_State_Machine 10922
#define P_Vision_Existence_State_Machine 10923
#define P_Vision_EmptyTable_State_Machine 10924
#define P_Vision_FirstSepa_State_Machine 10925
#define P_Vision_Align_Status 10926
#define P_Vision_Surface_Status 10927
#define P_Vision_Stack_Status 10928
#define P_Vision_Existence_Status 10929
#define P_Vision_EmptyTable_Status 10930
#define P_Vision_FirstSepa_Status 10931
#define P_Align_Zero_Move_Start_Flag 10932
#define P_Cathode_Align_Table_Move 10934
#define P_Anode_Align_Table_Move 10935
#define P_Vision_Anode_Cell_Existence 10936
#define P_Vision_Cathode_Cell_Existence 10937
#define P_Align_Sheet_CHK 10938
#define P_Anode_NG_Code 10939
#define P_Cathode_NG_Code 10940
#define P_Stack_NG_Code 10941
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
#define P_Stop_Debug_Flag 10942
#define P_Stop_Sub_Master_Motion_Program_Flag 10943
#define P_Stop_Slave_Motion_Program_Flag 10963
#define P_Stop_Motor_Status 10983
#define P_Stop_Coord_Status 11031
#define P_Stop_Status_Check_Address 11065
#define P_Stop_Status_Save_Address 11066
#define P_Stop_Check_RTN 11067
#define P_Stop_Save_RTN 11068
#define P_Old_Total_Unit_Bit 11072
#define P_Memory_Tower_Dec_Result 11073
#define P_Stop_Motor_Pos 11074
#define P_PNP_Move_Timer 11083
#define P_PNP_Move_Delay_Time 11084
#define P_Stop_Memory_Pos_RTN 11085
#define P_Slave1_Motion_Command 11086
#define P_Slave2_Motion_Command 11087
#define P_Slave3_Motion_Command 11088
#define P_Slave4_Motion_Command 11089
#define P_Slave5_Motion_Command 11090
#define P_Slave6_Motion_Command 11091
#define P_Slave7_Motion_Command 11092
#define P_Slave8_Motion_Command 11093
#define P_Slave9_Motion_Command 11094
#define P_Slave10_Motion_Command 11095
#define P_Slave11_Motion_Command 11096
#define P_Slave12_Motion_Command 11097
#define P_Slave13_Motion_Command 11098
#define P_Slave14_Motion_Command 11099
#define P_Slave15_Motion_Command 11100
#define P_Slave16_Motion_Command 11101
#define P_Slave17_Motion_Command 11102
#define P_Slave18_Motion_Command 11103
#define P_Slave19_Motion_Command 11104
#define P_Slave20_Motion_Command 11105
#define P_PNP_90_Deg_TM 11106
#define P_PNP_90_Deg_TA 11107
#define P_PNP_90_Deg_TS 11108
#define P_PNP_Ready_TM 11109
#define P_PNP_Ready_TA 11110
#define P_PNP_Ready_TS 11111
#define P_PNP_45_Deg_TM 11112
#define P_PNP_45_Deg_TA 11113
#define P_PNP_45_Deg_TS 11114
#define P_Unloader_TM_Test 11115
#define P_Unloader_TA_Test 11116
#define P_PROG_21_Program_Ver 2781
#define P_PROG_23_Program_Ver 2783
#define P_PROG_24_Program_Ver 2784
#define P_PROG_25_Program_Ver 2785
#define P_PROG_26_Program_Ver 2786
#define P_PROG_27_Program_Ver 2787
#define P_PROG_28_Program_Ver 2788
#define P_PROG_30_Program_Ver 2790
#define P_Master_Motion_Trigger 11117
#define P_Parity_Bit 11118
#define P_Master_Move 11119
#define P_Master_TA 11120
#define P_Master_TS 11121
#define P_Master_TM 11122
#define P_Anode_Count 11123
#define P_Cathode_Count 11124
#define P_Anode_Thickness 11125
#define P_Cathode_Thickness 11126
#define P_Sepa_Thickness 11127
#define P_Anode_Thickness_PLC 11128
#define P_Cathode_Thickness_PLC 11129
#define P_Sepa_Thickness_PLC 11130
#define P_Old_P_Anode_TR1_Master_Motion_Trigger 11131
#define P_Old_P_Cathode_TR1_Master_Motion_Trigger 11147
#define P_Anode_TR1_Old_Mode 11163
#define P_Cathode_TR1_Old_Mode 11179
#define P_Older_Than_P_Anode_TR1_Old_Mode 11195
#define P_Older_Than_P_Cathode_TR1_Old_Mode 11211
#define P_Older_Than_P_Sequence_Old_P_Anode_TR1_Current_Mode_Trigger 11227
#define P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Current_Mode_Trigger 11243
#define P_Old_P_Anode_TR1_Mode_Command 11259
#define P_Old_P_Cathode_TR1_Mode_Command 11275
#define P_Older_Than_P_Old_P_Anode_TR1_Mode_Command 11291
#define P_Older_Than_P_Old_P_Cathode_TR1_Mode_Command 11307
#define P_Older_Than_P_Sequence_Old_P_Anode_TR1_Mode_Command_Trigger 11323
#define P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Mode_Command_Trigger 11339
#define P_Old_P_Anode_TR1_PMAC_Status 11355
#define P_Old_P_Cathode_TR1_PMAC_Status 11371
#define P_Older_Than_P_Old_P_Anode_TR1_PMAC_Status 11387
#define P_Older_Than_P_Old_P_Cathode_TR1_PMAC_Status 11403
#define P_Old_P_Slave1_Motion_Command 11419
#define P_Old_P_Slave10_Motion_Command 11435
#define P_Old_Slave1_P_SubMaster_Sub_Mode_Command 11451
#define P_Old_Slave10_P_SubMaster_Sub_Mode_Command 11467
#define P_Sequence_Old_P_Current_Mode_Trigger 11483
#define P_Sequence_Old_Mode 11499
#define P_Sequence_Old_P_Mode_Command 11515
#define P_Sequence_Old_P_Mode_Command_Trigger 11531
#define P_SubMaster_Sub_Old_Mode 11547
#define P_SubMaster_Sub_Old_Command 11563
#define P_SubMaster_Sub_Mode_Command 11579
#define P_SubMaster_Sub_Old_Trigger 11595
#define P_InterLock_No3_Array 11611
#define P_Old_InterLock_No3_Array 11627
#define P_Mode_Err 11643
#define P_Spool_Enable 11648
#define P_Cathode_1St_Flow_Chart_Bit_Flag 11649
#define P_Cathode_AT_Flow_Chart_Bit_Flag 11650
#define P_Cathode_2nd_Flow_Chart_Bit_Flag 11651
#define P_Anode_Clamp_Flow_Chart_Bit_Flag 11652
#define P_Final_Roll_Flow_Chart_Bit_Flag 11653
#define P_Stack_Table_Flow_Chart_Bit_Flag 11654
#define P_Cathode_Clamp_Flow_Chart_Bit_Flag 11655
#define P_Anode_2nd_Flow_Chart_Bit_Flag 11656
#define P_Anode_AT_Flow_Chart_Bit_Flag 11657
#define P_Anode_1St_Flow_Chart_Bit_Flag 11658
#define P_Sepa_Unwinder_Flow_Chart_Bit_Flag 11659
#define P_Slave5_Target_Z_For_Cutting 11660
#define P_Slave31_Motion_Command 11661
#define P_Pause_Err_Process 11662
#define P_Pause_Err_Timer 11663
#define P_Pause_Err_Count 11664
#define P_Pause_Err_Use 11665
#define P_Pause_Err_Use2 11666
#define P_Anode_Pause_Signal_Err 11667
#define P_Cathode_Pause_Signal_Err 11668
#define P_Anode_Pause_Err 11669
#define P_Anode_Pause_Err_Count 11670
#define P_Phasing_Err 11671
#define P_Phasing_Err2 11676
#define P_Execute_Wait_Mode_Memory_Tower 11681
#define P_Execute_Vac_MNTR 11682
#define P_Old_Cathode_Cur_Mode 11683
#define P_Cathode_Run_Mode_Type 11684
#define P_Cathode_Run_Mode_Trigger 11704
#define P_Old_Anode_Cur_Mode 11724
#define P_Anode_Run_Mode_Type 11725
#define P_Anode_Run_Mode_Trigger 11745
#define P_Anode_1TR_T_Belt_To_Align 11765
#define P_Anode_1TR_T_Align_To_Belt 11766
#define P_Anode_1TR_T_Ready_Pos 11767
#define P_Anode_1TR_T_Ready_To_Align 11768
#define P_Anode_1TR_T_Ready_To_Belt 11769
#define P_Anode_Picker_Turn 11770
#define P_Anode_2TR_T_Align_To_Stack 11771
#define P_Anode_2TR_T_Stack_To_Align 11772
#define P_Anode_Clamp_Off 11773
#define P_Anode_Clamp_On 11774
#define P_Anode_Clamp_Down 11775
#define P_FR_Anode_Motion 11776
#define P_FR_Cathode_Motion 11777
#define P_Stack_Table_Down 11778
#define P_Cathode_Clamp_On 11779
#define P_Cathode_Clamp_Off 11780
#define P_Cathode_Clamp_Down 11781
#define P_Cathode_2TR_T_Align_To_Stack 11782
#define P_Cathode_2TR_T_Stack_To_Align 11783
#define P_Cathode_Picker_Turn 11784
#define P_Cathode_1TR_T_Belt_To_Align 11785
#define P_Cathode_1TR_T_Align_To_Belt 11786
#define P_Cathode_1TR_T_Ready_Pos 11787
#define P_Cathode_1TR_T_Ready_To_Align 11788
#define P_Cathode_1TR_T_Ready_To_Belt 11789
#define P_Anode_1TR_Z_Belt_To_Align 11790
#define P_Anode_1TR_Z_Align_To_Belt 11791
#define P_Anode_1TR_Z_Align_Down 11792
#define P_Anode_1TR_Z_Align_UP 11793
#define P_Anode_1TR_Z_Belt_Down 11794
#define P_Anode_1TR_Z_Belt_UP 11795
#define P_Anode_1TR_Z_Ready 11796
#define P_Anode_1TR_Z_Align_Blow 11797
#define P_Anode_1TR_Z_Belt_Vac 11798
#define P_Cathode_1TR_Z_Belt_To_Align 11799
#define P_Cathode_1TR_Z_Align_To_Belt 11800
#define P_Cathode_1TR_Z_Align_Down 11801
#define P_Cathode_1TR_Z_Align_UP 11802
#define P_Cathode_1TR_Z_Belt_Down 11803
#define P_Cathode_1TR_Z_Belt_UP 11804
#define P_Cathode_1TR_Z_Ready 11805
#define P_Cathode_1TR_Z_Align_Blow 11806
#define P_Cathode_1TR_Z_Belt_Vac 11807
#define P_Anode_2TR_Align_To_Stack 11808
#define P_Anode_2TR_Stack_To_Align 11809
#define P_Anode_2TR_Stack_Down 11810
#define P_Anode_2TR_Stack_UP 11811
#define P_Anode_2TR_Align_Down 11812
#define P_Anode_2TR_Align_UP 11813
#define P_Anode_2TR_Align_Vac 11814
#define P_Anode_2TR_Stack_Blow 11815
#define P_Anode_2TR_Stack_Sepa_Blow 11816
#define P_FR_Last_Run_Motion 11817
#define P_Servo_Dancer_Ready_Pos 11818
#define P_Servo_Dancer_Ready_Offset 11819
#define P_Servo_Dancer_Test 11820
#define P_Align_Start_IO_Judgment 11821
#define P_Driving_Clamp2 11822
#define P_Driving_Clamp 11823
#define P_MSA_Timer 11824
#define P_SM_Cathode_Stack_MSA 11825
#define P_SM_Anode_Stack_MSA 11826
#define P_SM_Cathode_Align_MSA 11827
#define P_SM_Anode_Align_MSA 11828
#define P_MSA_Interlock 11829
#define P_Anode_MSA_Final_Roll_Pos_Check 11830
#define P_Anode_MSA_2nd_PNP_Pos_Check 11831
#define P_Anode_MSA_1nd_PNP_Pos_Check 11832
#define P_MSA_Err_Save_CA_Stack_MSA 11833
#define P_MSA_Err_Save_AN_Stack_MSA 11834
#define P_MSA_Err_Save_CA_Align_MSA 11835
#define P_MSA_Err_Save_AN_Align_MSA 11836
#define P_MSA_BTN_Err 11837
#define P_Anode_Algin_MSA_RTN 11838
#define P_Anode_Algin_MSA_RTN2 11839
#define P_Cathode_Algin_MSA_RTN 11840
#define P_Cathode_Stack_MSA_RTN 11841
#define P_Anode_Stack_MSA_RTN 11842
#define P_Anode_Align_MSA_Count 11843
#define P_Cathode_Align_MSA_Count 11844
#define P_Anode_Stack_MSA_Count 11845
#define P_Cathode_Stack_MSA_Count 11846
#define P_Cathode_Align_Stop_Blocked 11847
#define P_Anode_Align_Stop_Blocked 11848
#define P_Cathode_Stack_Stop_Blocked 11849
#define P_Anode_Stack_Stop_Blocked 11850
#define P_Anode_Align_MSA_Execute_Timer 11851
#define P_Cathode_Align_MSA_Execute_Timer 11852
#define P_Anode_Stack_MSA_Execute_Timer 11853
#define P_Cathode_Stack_MSA_Execute_Timer 11854
#define P_Anode_Align_Interlock_Blocked 11855
#define P_Cathode_Align_Interlock_Blocked 11856
#define P_Anode_Stack_Interlock_Blocked 11857
#define P_Cathode_Stack_Interlock_Blocked 11858
#define P_Anode_1TR_T_Align_POS 11859
#define P_Anode_1TR_T_Belt_POS 11860
#define P_Anode_1TR_T_Ready_POS 11861
#define P_Anode_2TR_T_Align_POS 11862
#define P_Anode_2TR_T_Stack_POS 11863
#define P_Cathode_2TR_T_Align_POS 11864
#define P_Cathode_2TR_T_Stack_POS 11865
#define P_Cathode_1TR_T_Align_POS 11866
#define P_Cathode_1TR_T_Belt_POS 11867
#define P_Cathode_1TR_T_Ready_POS 11868
#define P_Seq_Abort 11869
#define P_Blocked_Abort 11870
#define P_Abort_Flag 11871
#define P_Opposite_Lane_1ST_TR_Safe_Pos 11872
#define P_Opposite_Lane_P_PMAC_Status 11873
#define P_Opposite_Lane_OFF_Not_Start 11874
#define P_Pause_Alarm_Blocked 11875
#define P_Old_Alarm_Arr 11876
#define P_Cycle_Stop_Delay_Time 11877
#define P_Cycle_Stop_Offset 11878
#define P_Opposite_Lane_Abort_Alram_Flag 11879
#define P_Cathode_Clmap_Y1_Ready_Pos 11880
#define P_Cathode_Clmap_Y1_Clamp_Pos 11881
#define P_Anode_Clmap_Y1_Ready_Pos 11882
#define P_Anode_Clmap_Y1_Clamp_Pos 11883
#define P_Cathode_Clmap_Y2_Ready_Pos 11884
#define P_Cathode_Clmap_Y2_Clamp_Pos 11885
#define P_Anode_Clmap_Y2_Ready_Pos 11886
#define P_Anode_Clmap_Y2_Clamp_Pos 11887
#define P_Cathode_Clamp_Z2_Ready_Pos 11888
#define P_Cathode_Clamp_Z2_Clamp_Pos 11889
#define P_Anode_Clamp_Z2_Ready_Pos 11890
#define P_Anode_Clamp_Z2_Clamp_Pos 11891
#define P_Cathode_Clamp_Z1_Ready_Pos 11892
#define P_Cathode_Clamp_Z1_Clamp_Pos 11893
#define P_Anode_Clamp_Z1_Ready_Pos 11894
#define P_Anode_Clamp_Z1_Clamp_Pos 11895
#define P_Cathode_Clamp_Z2_Cell_Down 11896
#define P_Anode_Clamp_Z2_Cell_Down 11897
#define P_Cathode_Clamp_Z1_Cell_Down 11898
#define P_Anode_Clamp_Z1_Cell_Down 11899
#define P_Single_Run_Pass 11900
#define P_Cathode_2nd_PNP_Sepa_Blow 11901
#define P_Cathode_2nd_PNP_Align_Blow 11902
#define P_Cathode_2nd_PNP_Stack_Blow 11903
#define P_Cathode_2nd_PNP_Align_Vac 11904
#define P_Cathode_2nd_PNP_Align_Up_Motion 11905
#define P_Cathode_2nd_PNP_Align_Down_Motion 11906
#define P_Cathode_2nd_PNP_Stack_Up_Motion 11907
#define P_Cathode_2nd_PNP_Stack_Down_Motion 11908
#define P_Cathode_2nd_PNP_Stack_To_Align_Motion 11909
#define P_Cathode_2nd_PNP_Align_To_Stack_Motion 11910
#define P_Door_Open_Stop_Count 11911
#define P_Buf_Stack_NG_Flag 11912
#define P_Stop_1st_PNP_Move 11913
#define P_Seq_Abort_Timer 11914
#define P_Sync_Test 11915
#define P_Dry_Pause_Flag 11916
#define P_Dry_Run_Pasue_Timer 11917
#define P_Resume_Stop_Blocked 11918
#define P_Discharge_Wait 11919
#define P_Command_Run_Flag 11920
#define P_Stop_Cmd_Origin 11921
#define P_Stop_Origin_Save 11922
#define P_Old_M_Y_Sepa_Cutter_SSR_On 11937
#define P_Sepa_Cutter_SSR_Off_Time 11938
#define P_Sepa_Cutter_SSR_Off 11939
#define P_Sepa_Cutter_SSR_Off_Timer 11940
#define P_Starting_Pause_IO_Flag 11941
#define P_PLC03_Seq_Pause_Start_Flag 11942
#define P_PLC03_Seq_Pause_Start_State_Machine 11943
#define P_PLC03_Seq_Pause_Start_Status 11944
#define P_ARC_NP_Push_BTN 11945
#define P_ARC_UI_Push_BTN 11946
#define P_M_Manual_ARC_BTN 11947
#define P_Two_Btn_Active_Flag 11948
#define P_Two_Btn_Interlock_Time 11949
#define P_NP_Unwinder_Active_Hold 11950
#define P_MAX_KGF 11951
#define P_KGF_TO_DAC_RATIO 11952
#define P_Dac_Out_Value 11953
#define P_Recipe_Dancer_input_kgf 11954
#define P_Cathode_NG_PNP_Vel_Zero_Set 11955
#define P_Anode_NG_PNP_Vel_Zero_Set 11956
#define P_Anode_Run_DR 11957
#define P_Cathode_Run_DR 11958
#define P_1st_UND_Grip_Time 11959
#define P_1st_UND_Grip_Time_offset 11960
#define P_1st_UND_Grip_Time_offset2 11961
#define P_First_Sepa_Driving_Use 11962
#define P_First_Sepa_Driving_Timing 11963
#define P_Unloader_Safe_rtn 11964
#define P_Final_Start 11965
#define P_Driving_Start 11966
#define P_Starting_Pause_IO_OFF_Flag 11967
#define P_individual_Hold_return 11968
#define P_individual_Hold_return2 11969
#define P_Tension_Ready_Pass 11970
#define P_Discharge_cal_rtn 11971
#define P_Old_Tact_Current_Mode 11972
#define P_Sheet_Clear 11973
#define P_Anode_Clamp_On_Time2 11974
#define P_Anode_Clamp_On_Time 11975
#define P_Cathode_Clamp_On_Time 11976
#define P_Cathode_Clamp_On_Time2 11977
#define P_Offset 11978
#define P_Man_C 11979
#define P_NG_Box_Stop_Use 11980
#define P_SlewTime 11981
#define P_Old_SlewTime 11982
#define P_Resume_MNTR1 11983
#define P_Resume_MNTR2 11984
#define P_Resume_MNTR3 11985
#define P_Resume_MNTR4 11986
#define P_Resume_MNTR5 11987
#define P_Resume_MNTR6 11988
#define P_Resume_MNTR7 11989
#define P_Resume_MNTR8 11990
#define P_Resume_MNTR9 11991
#define P_Resume_MNTR10 11992
#define P_Resume_MNTR11 11993
#define P_Resume_MNTR12 11994
#define P_old_P_Anode_Count 11995
#define P_Sheet_Paper_BWD_Count 11996
#define P_Stop_CHK 11997
#define P_Seq_Pause 11998
#define P_Seq_Pause2 11999
#define P_MSA_TimeBase_Rtn 12000
#define P_Old_Vison_Read_EPC_Camera_Move_Request 12001
#define P_First_Sepa_Time_Out_Count 12002
#define P_Align_Retry_Cal_RTN 12003
#define P_Sheet_Err 12004
#define P_Driving_Cal 12020
#define P_Driving_End_Pos 12021
#define P_Driving_Start_Pos 12022
#define P_Drivig_Cal_Save 12023
#define P_Anode_Align_Blow 12028
#define P_Cathode_Align_Blow 12029
#define P_PMAC_Status_Arr_Save1 12030
#define P_HomePos_Save1 12035
#define P_PMAC_Status_Arr_Save2 12040
#define P_HomePos_Save2 12045
#define P_PMAC_Status_Arr_Save3 12050
#define P_HomePos_Save3 12055
#define P_PMAC_Status_Arr_Save4 12060
#define P_HomePos_Save4 12065
#define P_Home_Pos_Err_Cnt1 12070
#define P_Home_Pos_Err_Cnt2 12071
#define P_Home_Pos_Err_Cnt3 12072
#define P_Home_Pos_Err_Cnt4 12073
#define P_Align_Inspection_Delay 12074
#define P_HomePos_Err 12075
#define P_Anode_Sheet_Test 12080
#define P_Cathode_Sheet_Test 12081
#define P_Anode_Sheet_Interlock_Timing 12082
#define P_Cathode_Sheet_Interlock_Timing 12083
#define P_Discharge_Err_MNTR 12084
#define P_Arc_Err_MNTR 12085
#define P_Abort_Cnt 12086
#define P_EMO_Cnt 12087
#define P_Dry_Run_Inspection 12088
#define P_Servo_ON_MNTR1 12089
#define P_Servo_ON_MNTR2 12090
#define P_Servo_ON_MNTR3 12091
#define P_Servo_ON_MNTR4 12092
#define P_Servo_ON_MNTR5 12093
#define P_Servo_ON_MNTR6 12094
#define P_Servo_ON_MNTR7 12095
#define P_Servo_ON_MNTR8 12096
#define P_Servo_ON_MNTR9 12097
#define P_Servo_ON_MNTR10 12098
#define P_Servo_ON_MNTR11 12099
#define P_Servo_ON_MNTR12 12100
#define P_Servo_ON_MNTR13 12101
#define P_Servo_ON_MNTR14 12102
#define P_Servo_ON_MNTR15 12103
#define P_Servo_ON_MNTR16 12104
#define P_Servo_ON_MNTR17 12105
#define P_Servo_ON_MNTR18 12106
#define P_Servo_ON_MNTR19 12107
#define P_Servo_ON_MNTR20 12108
#define P_Servo_ON_MNTR21 12109
#define P_Servo_ON_MNTR22 12110
#define P_Servo_ON_MNTR23 12111
#define P_Servo_ON_MNTR24 12112
#define P_Servo_ON_MNTR25 12113
#define P_Servo_ON_MNTR26 12114
#define P_Servo_ON_MNTR27 12115
#define P_Servo_ON_MNTR28 12116
#define P_Servo_ON_MNTR29 12117
#define P_Servo_ON_MNTR30 12118
#define P_X_IO_WinMess_Connect_BTN 12119
#define P_Ecat_ReConnetion_State_Machine 12120
#define P_Ecat_Reconnection_Timer 12121
#define P_Y_Ecat_Reconnecting 12122
#define P_Y_Ecat_ReConnection_Fail 12123
#define P_Y_Ecat_ReConnection_Complete 12124
#define P_X_Ecat_Reconnection_BTN 12125
#define P_X_PLC_Setup_Mode_Check 12126
#define P_Interlock_On_Off_Flag 12127
#define P_X_Old_MC_Reconnect_BTN_Signal 12128
#define P_BTN_1st_ULD_Data_Clear 12129
#define P_Old_BTN_1st_ULD_Data_Clear 12130
#define P_Old_M_Y_1st_Unloader_UnGrip_Sol 12131
#define P_Sepa_Cutter_Heat_Meter 12132
#define P_Sepa_Cutter_Heating_Timer 12133
#define P_Middle_Skip_Off_Flag 12134
#define P_Stop_MNTR1 12135
#define P_Stop_MNTR2 12136
#define P_Sheet_Pos_Offset 12137
#define P_Stopping_Wait_Time 12138
#define P_Stopping_Test_Timer 12139
#define P_Cutter_FWB_Heater_Current 12140
#define P_1st_ULD_OK_Lamp 12150
#define P_1st_ULD_NG_Lamp 12151
#define P_1st_ULD_Sample_QC_Lamp 12152
#define P_Proceed_Execute_Flag 12153
#define P_Continuous_Call_Stack_NG_Flag 12154
#define P_Continuous_Call_Stack_OK_Flag 12155
#define P_Cathode_Picker_Home_Pos 12156
#define P_Anode_Picker_Home_Pos 12157
#define P_FR_Sheet_Paper_Home_Chk 12158
#define P_Align_TimeOut1 12159
#define P_Align_TimeOut2 12160
#define P_Align_TimeOut3 12161
#define P_Align_TimeOut4 12162
#define P_Align_TimeOut5 12163
#define P_Align_TimeOut6 12164
#define P_Anode_Align_OK 12165
#define P_Cathode_Align_OK 12166
#define P_Anode_Align_NG 12167
#define P_Cathode_Align_NG 12168
#define P_Anode_Align_TimeOut 12169
#define P_Cathode_Align_TimeOut 12170
#define P_Anode_Surf_OK 12171
#define P_Cathode_Surf_OK 12172
#define P_Anode_Surf_NG 12173
#define P_Cathode_Surf_NG 12174
#define P_Anode_Surf_TimeOut 12175
#define P_Cathode_Surf_TimeOut 12176
#define P_Surf_TimeOut1 12177
#define P_Surf_TimeOut2 12178
#define P_Surf_TimeOut3 12179
#define P_Surf_TimeOut4 12180
#define P_Surf_TimeOut5 12181
#define P_Surf_TimeOut6 12182
#define P_Anode_Stack_TimeOut 12183
#define P_Cathode_Stack_TimeOut 12184
#define P_Anode_Stack_OK 12185
#define P_Cathode_Stack_OK 12186
#define P_Anode_Stack_NG 12187
#define P_Cathode_Stack_NG 12188
#define P_Stack_TimeOut1 12189
#define P_Stack_TimeOut2 12190
#define P_Stack_TimeOut3 12191
#define P_Align_Move_Err 12192
#define P_Ecat_Test 12193
#define P_Scan_Time 12194
#define P_Scan_Aver 12196
#define P_Scan_MAX 12197
#define P_Cathode_1TR_Picker_T_Belt_POS 12198
#define P_Cathode_1TR_Picker_T_Align_POS 12199
#define P_Anode_1TR_Picker_T_Belt_POS 12200
#define P_Anode_1TR_Picker_T_Align_POS 12201
#define P_1TR_Picker_T_Align_POS 12202
#define P_AVRG_Lower_Sepa_Thickness_mm 12203
#define P_AVRG_Upper_Sepa_Thickness_mm 12204
#define P_PLC06_Upper_Curr_Unwinder_Thickness_mm 12205
#define P_PLC06_Lower_Curr_Unwinder_Thickness_mm 12206
#define P_Upper_Curr_Spool_Radius 12207
#define P_Lower_Curr_Spool_Radius 12208
#define P_PLC06_Curr_Upper_Distance_mm 12209
#define P_PLC06_Curr_Lower_Distance_mm 12210
#define P_Upper_Sepa_Min_Distance_mm 12211
#define P_Lower_Sepa_Min_Distance_mm 12212
#define P_PLC06_Sepa_Change_Set 12213
#define P_Upper_Sepa_To_Sensor_Min_Dis 12214
#define P_Upper_Sepa_To_Sensor_Max_Dis 12215
#define P_Upper_Sensor_To_Unwinder_Core_Dis 12216
#define P_Upper_Sensor_Min_AD 12217
#define P_Upper_Sensor_Max_AD 12218
#define P_Lower_Sepa_To_Sensor_Min_Dis 12219
#define P_Lower_Sepa_To_Sensor_Max_Dis 12220
#define P_Lower_Sensor_To_Unwinder_Core_Dis 12221
#define P_Lower_Sensor_Min_AD 12222
#define P_Lower_Sensor_Max_AD 12223
#define M_AI_Upper_Sepa_Sensing 372
#define M_AI_Lower_Sepa_Sensing 373
#define P_Status_NP_BTN_Lower_Unwinder 12224
#define P_Status_NP_BTN_Upper_Unwinder 12225
#define P_Driving_CamTable_Scale_Change_Flag 12226
#define P_FR_Driving_Diameter 12227
#define P_FR_Driving_Floating_Point 12228
#define P_FR_Driving_Reward 12229
#define P_Unwinder_Master_Following_Use_Flag 12230
#define P_Unwinder_Master_Following_On 12231
#define P_Old_Master_Following_Start 12232
#define P_Unwinder_Master_Following_Scale 12233
#define P_Unwinder_Jog_Use_Flag 12234
#define P_Old_Jog_Start 12235
#define P_Unwinder_Jog_Total_Time 12236
#define P_Unwinder_Ta 12237
#define P_Unwinder_Ts 12238
#define P_Unwinder_Tm 12239
#define P_Unwinder_1mm_Deg 12240
#define P_Unwinder_Jog_Pos 12241
#define P_Unwinder_Jog_Cnt 12242
#define P_PLC06_Frist_Flag 12243
#define P_Sepa_AI 12244
#define P_PLC06_Reel_Upper_Change_Flag 12245
#define P_PLC06_Reel_Lower_Change_Flag 12246
#define P_Spool_Ready_Enable_Flag 12247
#define P_Spool_Lack_Flag 12248
#define P_Sepa_DR_Start_Flag 12249
#define P_cdTime_Tact_Sec 12250
#define P_Master_Tact_Sec 12251
#define P_Prev_Err_Pos 12252
#define P_Cur_Arc_Rad 12253
#define P_Cur_Arc_Deg 12254
#define P_Spool_Velocity 12255
#define P_Lin_Prop_Vel 12256
#define P_Err_Pos 12257
#define P_Lin_Deriv_Vel 12258
#define P_Lin_Dacer_Kd 12259
#define P_Lin_Dacer_Kp 12260
#define P_Running_CDTimer 12261
#define P_Unwinder_Jog_Ta 12262
#define P_Unwinder_Jog_Ts 12263
#define P_Unwinder_Vel_Test_Time 12264
#define P_Set_Interval_Time 12265
#define P_PLC06_Upper_Sepa_AI_Timer 12266
#define P_PLC06_Upper_Sepa_AI_Data 12267
#define P_PLC06_Upper_Sepa_AI_Cnt 12268
#define P_PLC06_Upper_AVRG_Sensor_Data 12269
#define P_PLC06_Lower_Sepa_AI_Timer 12270
#define P_PLC06_Lower_Sepa_AI_Data 12271
#define P_PLC06_Lower_Sepa_AI_Cnt 12272
#define P_PLC06_Lower_AVRG_Sensor_Data 12273
#define P_PLC06_Sepa_Upper_Thickness_Timer 12274
#define P_PLC06_Sepa_Upper_Thickness_Data 12275
#define P_PLC06_Sepa_Upper_Thickness_Cnt 12276
#define P_PLC06_Sepa_Lower_Thickness_Timer 12277
#define P_PLC06_Sepa_Lower_Thickness_Data 12278
#define P_PLC06_Sepa_Lower_Thickness_Cnt 12279
#define P_Sepa_Thickness_Chk_Timer 12280
#define P_Spool_Length 12281
#define P_Cascade_Sf_Driving_Value 12282
#define P_Cascade_Sf_None_Driving_Value 12283
#define P_Sepa_Min_Value_Cal_Cmd 12284
#define P_Total_Sepa_Need_Length 12285
#define P_Alpa 12286
#define P_Sepa_Num_of_Turns 12287
#define P_Sepa_Turn_Num 12288
#define P_Accumulate_Value 12289
#define P_Sharft_to_Sepa_Core_mm 12290
#define P_Sepa_Cal_Circum 12291
#define P_Sepa_Min_Need_Thickness 12292
#define P_Sepa_Min_Thickness_Cmd 12293
#define P_Sepa_Accumulate_Cmd 12294
#define P_Sepa_Required_Amount 12295
#define P_Sepa_Current_Thickness 12296
#define P_Sepa_Initial_Tickness 12297
#define P_Sepa_Required_Update_Timer 12298
#define M_PLC_HeartBit_Flag 4223
#define M_X_BTN_Press_Jog_Left_From_PLC 4160
#define M_X_BTN_Press_Jog_Right_From_PLC 4107
#define P_TEST_EPC_Interlock_Auto 12299
#define P_TEST_EPC_Interlock_Manual 12300
#define P_Discharge_Total_Tact 12301
#define P_Read_Sector_TactTime 12302
#define P_Write_Sector_TactTime 12308
#define P_PLC15_Sub_Function_Dryrun_Active_Flag 12314
#define P_Sepa_Rotation_Sequence_Run_Trigger_Cnt 12315
#define P_Sepa_Mode_Sepa_Recipe_Count 12316
#define P_Discharged_After_End_Trigger 12317
#define P_Unloader_1st_Grip_Delay 12318
#define P_Separate_Cutter_Heating_Limit_Value 12319
#define P_Separate_Cutting_Current 12320
#define P_Separate_Cutter_Change_Cycle 12321
#define P_X_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger 12322
#define P_X_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger 12323
#define P_X_Cathode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger 12324
#define P_X_Anode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger 12325
#define P_X_Stack_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger 12326
#define P_Interlock_Messege_Confirmed 12327
#define P_X_MC_Communication_HeartBit 12328
#define P_SV_Cathode_Count 12329
#define P_SV_Anode_Count 12330
#define P_SV_AO_Reference_Value_Chanel 12331
#define P_SV_Cathode_Reference_Thickness 12334
#define P_SV_Anode_Reference_Thickness 12335
#define P_SV_Stack_Table_Damper_Cathode 12336
#define P_SV_Stack_Table_Damper_Anode 12337
#define P_SV_Sepa_Reference_Thickness 12338
#define P_SV_Jelly_Roll_Width 12339
#define P_Cathode_Align_Continuous_NG_Recipe 12340
#define P_Anode_Align_Continuous_NG_Recipe 12341
#define P_Stack_Vision_Continuous_NG_Recipe 12342
#define P_PLC_Recipe_EPC_Sepa_Count 12343
#define P_PLC_Recipe_Revise_Sepa 12344
#define P_X_PLC_to_PMAC_Correction_Value 12345
#define P_Anode_Align_Continuous_NG_Check_range 12346
#define P_Cathode_Align_Continuous_NG_Check_range 12347
#define P_Stack_Align_Continuous_NG_Check_range 12348
#define P_Cathode_Surface_Continuous_NG_Recipe 12349
#define P_Anode_Surface_Continuous_NG_Recipe 12350
#define P_Cathode_Surface_Continuous_NG_Check_range 12351
#define P_Anode_Surface_Continuous_NG_Check_range 12352
#define P_Servo_Dancer_Alarm_Maximum_Angle_Value 12353
#define P_Servo_Dancer_Alarm_Minimum_Angle_Value 12354
#define P_Current_Selected_Spool_Rev_Counts_Init_Read 12355
#define P_Spool_ARC_Distance_mm 12356
#define P_ARC_Upper_Request_Sepa_Thickness_mm 12357
#define P_ARC_Lower_Request_Sepa_Thickness_mm 12358
#define P_Selected_Spool_Arc_Set_Rev_Counts_Value 12359
#define P_Set_Cnt_FR_Moving_Sepa_ARC 12360
#define P_Current_Selected_Spool_Rev_Counts 12361
#define P_AI_Cathode_Clamp_Damper 12362
#define P_AI_Anode_Clamp_Damper 12363
#define P_MSA_Run_Repeat_Num 12364
#define P_Current_MSA_Run_Num 12369
#define P_Select_Sheet_Value 12374
#define P_BTN_Config_Setup_Mode_Select 12375
#define P_Sepa_Thickness_Max_Value 12376
#define P_AI_Cathode_Clamp_Damper_Zero_Mpa_Analog_Value 12377
#define P_AI_Anode_Clamp_Damper_Zero_Mpa_Analog_Value 12378
#define P_Accumulated_Movement_MM_Unit_Cathode_1ST_pnp 12379
#define P_Accumulated_Movement_MM_Unit_Anode_1ST_pnp 12380
#define P_Accumulated_Movement_MM_Unit_Cathode_2nd_pnp 12381
#define P_Accumulated_Movement_MM_Unit_Anode_2nd_pnp 12382
#define P_AI_Anode_Clamp_Damper_Mpa 12383
#define P_AI_Cathode_Clamp_Damper_Mpa 12384
#define P_Current_Whole_Stack_Jelly_Roll_Thinckness_mm 12385
#define P_Upper_Sepa_Current_Thickness_um 12386
#define P_Lower_Sepa_Current_Thickness_um 12387
#define P_Spool_Rotate_Distance 12388
#define Spool_Diameter 12389
#define P_Current_FR_Moving_Cnt_To_PlC 12390
#define P_MES_APC_Select_Btn 12391
#define P_AO_Anode_Clamp_Damper 12392
#define P_AO_Cathode_Clamp_Damper 12393
#define P_Sepa_Length 12394
#define P_Minus_Limit_Detect_Popup_Flag 12395
#define P_Plus_Limit_Detect_Popup_Flag 12396
#define P_Fatal_Fe_Limit_Detect_Popup_Flag 12397
#define P_Emergency_Alarm_Popup_Flag 12398
#define P_SepaArcing_Popup_Flag 12399
#define P_Y_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger 12400
#define P_Y_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger 12401
#define P_Y_Cathode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger 12402
#define P_Y_Anode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger 12403
#define P_Y_Stack_Align_Calibration_twisted_Cycle_Stop_Request_Trigger 12404
#define P_Current_Selected_Sheet_Value 12405
#define P_Status_Config_Mode_Select 12406
#define P_Sepa_Thickness_Jig_Value 12407
#define P_PV_Stack_Table_Damper_Cathode 12408
#define P_PV_Stack_Table_Damper_Anode 12409
#define P_Discharge_Standby_Pos_Tack_Time 12410
#define P_Discharge_FR_MainZ_Pos_Tack_Time 12411
#define P_Discharge_Unloader_Go_Pos_Tack_Time 12412
#define P_Discharge_SubZ_Down_Pos_Tack_Time 12413
#define P_Discharge_Unloader_Cutting_Pos_Tack_Time 12414
#define P_Discharge_FR_Clamp_ON_Complete_Tack_Time 12415
#define P_Discharge_Cutting_Complete_Tack_Time 12416
#define P_Discharge_Motion_PG_Active_Starting_Tack_Time 12417
#define P_Discharge_Motion_PG_Active_Complete_Tack_Time 12418
#define P_Discharge_Sepa_First_Complete_Tack_Time 12419
#define P_Discharge_Complete_Tack_Time 12420
#define P_Discharge_Total_Tack_Time 12421
#define P_Anode_Clamp_TackTime_Array0 12422
#define P_Anode_Clamp_TackTime_Array1 12423
#define P_Anode_Clamp_TackTime_Array2 12424
#define P_Anode_Clamp_TackTime_Array3 12425
#define P_Anode_Clamp_TackTime_Array4 12426
#define P_Anode_Clamp_TackTime_Array5 12427
#define P_Anode_Clamp_TackTime_Array6 12428
#define P_Anode_Clamp_TackTime_Array7 12429
#define P_Anode_Clamp_TackTime_Array8 12430
#define P_Anode_Clamp_TackTime_Array9 12431
#define P_Anode_Clamp_TackTime_Array10 12432
#define P_Stacking_TackTime_Array0 12433
#define P_Stacking_TackTime_Array1 12434
#define P_Stacking_TackTime_Array2 12435
#define P_Stacking_TackTime_Array3 12436
#define P_Stacking_TackTime_Array4 12437
#define P_Stacking_TackTime_Array5 12438
#define P_Stacking_TackTime_Array6 12439
#define P_Stacking_TackTime_Array7 12440
#define P_Stacking_TackTime_Array8 12441
#define P_Stacking_TackTime_Array9 12442
#define P_Stacking_TackTime_Array10 12443
#define P_Cathode_Clamp_TackTime_Array0 12444
#define P_Cathode_Clamp_TackTime_Array1 12445
#define P_Cathode_Clamp_TackTime_Array2 12446
#define P_Cathode_Clamp_TackTime_Array3 12447
#define P_Cathode_Clamp_TackTime_Array4 12448
#define P_Cathode_Clamp_TackTime_Array5 12449
#define P_Cathode_Clamp_TackTime_Array6 12450
#define P_Cathode_Clamp_TackTime_Array7 12451
#define P_Cathode_Clamp_TackTime_Array8 12452
#define P_Cathode_Clamp_TackTime_Array9 12453
#define P_Cathode_Clamp_TackTime_Array10 12454
#define P_JellyRoll_Out_TackTime_Array0 12455
#define P_JellyRoll_Out_TackTime_Array1 12456
#define P_JellyRoll_Out_TackTime_Array2 12457
#define P_JellyRoll_Out_TackTime_Array3 12458
#define P_JellyRoll_Out_TackTime_Array4 12459
#define P_JellyRoll_Out_TackTime_Array5 12460
#define P_JellyRoll_Out_TackTime_Array6 12461
#define P_JellyRoll_Out_TackTime_Array7 12462
#define P_JellyRoll_Out_TackTime_Array8 12463
#define P_JellyRoll_Out_TackTime_Array9 12464
#define P_JellyRoll_Out_TackTime_Array10 12465
#define P_Anode_1th_TackTime_Array0 12466
#define P_Anode_1th_TackTime_Array1 12467
#define P_Anode_1th_TackTime_Array2 12468
#define P_Anode_1th_TackTime_Array3 12469
#define P_Anode_1th_TackTime_Array4 12470
#define P_Anode_1th_TackTime_Array5 12471
#define P_Anode_1th_TackTime_Array6 12472
#define P_Anode_1th_TackTime_Array7 12473
#define P_Anode_1th_TackTime_Array8 12474
#define P_Anode_1th_TackTime_Array9 12475
#define P_Anode_1th_TackTime_Array10 12476
#define P_Cathode_1th_TackTime_Array0 12477
#define P_Cathode_1th_TackTime_Array1 12478
#define P_Cathode_1th_TackTime_Array2 12479
#define P_Cathode_1th_TackTime_Array3 12480
#define P_Cathode_1th_TackTime_Array4 12481
#define P_Cathode_1th_TackTime_Array5 12482
#define P_Cathode_1th_TackTime_Array6 12483
#define P_Cathode_1th_TackTime_Array7 12484
#define P_Cathode_1th_TackTime_Array8 12485
#define P_Cathode_1th_TackTime_Array9 12486
#define P_Cathode_1th_TackTime_Array10 12487
#define P_Anode_2th_TackTime_Array0 12488
#define P_Anode_2th_TackTime_Array1 12489
#define P_Anode_2th_TackTime_Array2 12490
#define P_Anode_2th_TackTime_Array3 12491
#define P_Anode_2th_TackTime_Array4 12492
#define P_Anode_2th_TackTime_Array5 12493
#define P_Anode_2th_TackTime_Array6 12494
#define P_Anode_2th_TackTime_Array7 12495
#define P_Anode_2th_TackTime_Array8 12496
#define P_Anode_2th_TackTime_Array9 12497
#define P_Anode_2th_TackTime_Array10 12498
#define P_Cathode_2th_TackTime_Array0 12499
#define P_Cathode_2th_TackTime_Array1 12500
#define P_Cathode_2th_TackTime_Array2 12501
#define P_Cathode_2th_TackTime_Array3 12502
#define P_Cathode_2th_TackTime_Array4 12503
#define P_Cathode_2th_TackTime_Array5 12504
#define P_Cathode_2th_TackTime_Array6 12505
#define P_Cathode_2th_TackTime_Array7 12506
#define P_Cathode_2th_TackTime_Array8 12507
#define P_Cathode_2th_TackTime_Array9 12508
#define P_Cathode_2th_TackTime_Array10 12509
#define P_Anode_Align_Table_TackTime_Array0 12510
#define P_Anode_Align_Table_TackTime_Array1 12511
#define P_Anode_Align_Table_TackTime_Array2 12512
#define P_Anode_Align_Table_TackTime_Array3 12513
#define P_Anode_Align_Table_TackTime_Array4 12514
#define P_Anode_Align_Table_TackTime_Array5 12515
#define P_Anode_Align_Table_TackTime_Array6 12516
#define P_Anode_Align_Table_TackTime_Array7 12517
#define P_Anode_Align_Table_TackTime_Array8 12518
#define P_Anode_Align_Table_TackTime_Array9 12519
#define P_Anode_Align_Table_TackTime_Array10 12520
#define P_Cathode_Align_Table_TackTime_Array0 12521
#define P_Cathode_Align_Table_TackTime_Array1 12522
#define P_Cathode_Align_Table_TackTime_Array2 12523
#define P_Cathode_Align_Table_TackTime_Array3 12524
#define P_Cathode_Align_Table_TackTime_Array4 12525
#define P_Cathode_Align_Table_TackTime_Array5 12526
#define P_Cathode_Align_Table_TackTime_Array6 12527
#define P_Cathode_Align_Table_TackTime_Array7 12528
#define P_Cathode_Align_Table_TackTime_Array8 12529
#define P_Cathode_Align_Table_TackTime_Array9 12530
#define P_Cathode_Align_Table_TackTime_Array10 12531
#define P_Anode_NG_PNP_TackTime_Array0 12532
#define P_Anode_NG_PNP_TackTime_Array1 12533
#define P_Anode_NG_PNP_TackTime_Array2 12534
#define P_Anode_NG_PNP_TackTime_Array3 12535
#define P_Anode_NG_PNP_TackTime_Array4 12536
#define P_Anode_NG_PNP_TackTime_Array5 12537
#define P_Anode_NG_PNP_TackTime_Array6 12538
#define P_Anode_NG_PNP_TackTime_Array7 12539
#define P_Anode_NG_PNP_TackTime_Array8 12540
#define P_Anode_NG_PNP_TackTime_Array9 12541
#define P_Anode_NG_PNP_TackTime_Array10 12542
#define P_Cathode_NG_PNP_TackTime_Array0 12543
#define P_Cathode_NG_PNP_TackTime_Array1 12544
#define P_Cathode_NG_PNP_TackTime_Array2 12545
#define P_Cathode_NG_PNP_TackTime_Array3 12546
#define P_Cathode_NG_PNP_TackTime_Array4 12547
#define P_Cathode_NG_PNP_TackTime_Array5 12548
#define P_Cathode_NG_PNP_TackTime_Array6 12549
#define P_Cathode_NG_PNP_TackTime_Array7 12550
#define P_Cathode_NG_PNP_TackTime_Array8 12551
#define P_Cathode_NG_PNP_TackTime_Array9 12552
#define P_Cathode_NG_PNP_TackTime_Array10 12553
#define P_Sepa_Unwinder_TackTime_Array0 12554
#define P_Sepa_Unwinder_TackTime_Array1 12555
#define P_Sepa_Unwinder_TackTime_Array2 12556
#define P_Sepa_Unwinder_TackTime_Array3 12557
#define P_Sepa_Unwinder_TackTime_Array4 12558
#define P_Sepa_Unwinder_TackTime_Array5 12559
#define P_Sepa_Unwinder_TackTime_Array6 12560
#define P_Sepa_Unwinder_TackTime_Array7 12561
#define P_Sepa_Unwinder_TackTime_Array8 12562
#define P_Sepa_Unwinder_TackTime_Array9 12563
#define P_Sepa_Unwinder_TackTime_Array10 12564
#define P_Sepa_Unwinder_TackTime_Array11 12565
#define P_1st_Unloader_TackTime_Array0 12566
#define P_1st_Unloader_TackTime_Array1 12567
#define P_1st_Unloader_TackTime_Array2 12568
#define P_1st_Unloader_TackTime_Array3 12569
#define P_1st_Unloader_TackTime_Array4 12570
#define P_1st_Unloader_TackTime_Array5 12571
#define P_1st_Unloader_TackTime_Array6 12572
#define P_1st_Unloader_TackTime_Array7 12573
#define P_1st_Unloader_TackTime_Array8 12574
#define P_1st_Unloader_TackTime_Array9 12575
#define P_1st_Unloader_TackTime_Array10 12576
#define P_Cathode_1st_Vacuum_TackTime_Array1 12577
#define P_Cathode_1st_Vacuum_TackTime_Array2 12578
#define P_Cathode_1st_Vacuum_TackTime_Array3 12579
#define P_Cathode_1st_Vacuum_TackTime_Array4 12580
#define P_Cathode_1st_Vacuum_TackTime_Array5 12581
#define P_Cathode_1st_Vacuum_TackTime_Array6 12582
#define P_Cathode_1st_Vacuum_TackTime_Array7 12583
#define P_Cathode_1st_Vacuum_TackTime_Array8 12584
#define P_Cathode_1st_Vacuum_TackTime_Array9 12585
#define P_Cathode_1st_Vacuum_TackTime_Array10 12586
#define P_Cathode_Align_Vacuum_TackTime_Array1 12587
#define P_Cathode_Align_Vacuum_TackTime_Array2 12588
#define P_Cathode_Align_Vacuum_TackTime_Array3 12589
#define P_Cathode_Align_Vacuum_TackTime_Array4 12590
#define P_Cathode_Align_Vacuum_TackTime_Array5 12591
#define P_Cathode_Align_Vacuum_TackTime_Array6 12592
#define P_Cathode_Align_Vacuum_TackTime_Array7 12593
#define P_Cathode_Align_Vacuum_TackTime_Array8 12594
#define P_Cathode_Align_Vacuum_TackTime_Array9 12595
#define P_Cathode_Align_Vacuum_TackTime_Array10 12596
#define P_Cathode_2nd_Vacuum_TackTime_Array1 12597
#define P_Cathode_2nd_Vacuum_TackTime_Array2 12598
#define P_Cathode_2nd_Vacuum_TackTime_Array3 12599
#define P_Cathode_2nd_Vacuum_TackTime_Array4 12600
#define P_Cathode_2nd_Vacuum_TackTime_Array5 12601
#define P_Cathode_2nd_Vacuum_TackTime_Array6 12602
#define P_Cathode_2nd_Vacuum_TackTime_Array7 12603
#define P_Cathode_2nd_Vacuum_TackTime_Array8 12604
#define P_Cathode_2nd_Vacuum_TackTime_Array9 12605
#define P_Cathode_2nd_Vacuum_TackTime_Array10 12606
#define P_Anode_1st_Vacuum_TackTime_Array1 12607
#define P_Anode_1st_Vacuum_TackTime_Array2 12608
#define P_Anode_1st_Vacuum_TackTime_Array3 12609
#define P_Anode_1st_Vacuum_TackTime_Array4 12610
#define P_Anode_1st_Vacuum_TackTime_Array5 12611
#define P_Anode_1st_Vacuum_TackTime_Array6 12612
#define P_Anode_1st_Vacuum_TackTime_Array7 12613
#define P_Anode_1st_Vacuum_TackTime_Array8 12614
#define P_Anode_1st_Vacuum_TackTime_Array9 12615
#define P_Anode_1st_Vacuum_TackTime_Array10 12616
#define P_Anode_Align_Vacuum_TackTime_Array1 12617
#define P_Anode_Align_Vacuum_TackTime_Array2 12618
#define P_Anode_Align_Vacuum_TackTime_Array3 12619
#define P_Anode_Align_Vacuum_TackTime_Array4 12620
#define P_Anode_Align_Vacuum_TackTime_Array5 12621
#define P_Anode_Align_Vacuum_TackTime_Array6 12622
#define P_Anode_Align_Vacuum_TackTime_Array7 12623
#define P_Anode_Align_Vacuum_TackTime_Array8 12624
#define P_Anode_Align_Vacuum_TackTime_Array9 12625
#define P_Anode_Align_Vacuum_TackTime_Array10 12626
#define P_Anode_2nd_Vacuum_TackTime_Array1 12627
#define P_Anode_2nd_Vacuum_TackTime_Array2 12628
#define P_Anode_2nd_Vacuum_TackTime_Array3 12629
#define P_Anode_2nd_Vacuum_TackTime_Array4 12630
#define P_Anode_2nd_Vacuum_TackTime_Array5 12631
#define P_Anode_2nd_Vacuum_TackTime_Array6 12632
#define P_Anode_2nd_Vacuum_TackTime_Array7 12633
#define P_Anode_2nd_Vacuum_TackTime_Array8 12634
#define P_Anode_2nd_Vacuum_TackTime_Array9 12635
#define P_Anode_2nd_Vacuum_TackTime_Array10 12636
#define P_Final_Roll_TackTime_Array1 12637
#define P_Final_Roll_TackTime_Array2 12638
#define P_Final_Roll_TackTime_Array3 12639
#define P_Final_Roll_TackTime_Array4 12640
#define P_Final_Roll_TackTime_Array5 12641
#define P_Final_Roll_TackTime_Array6 12642
#define P_Final_Roll_TackTime_Array7 12643
#define P_Final_Roll_TackTime_Array8 12644
#define P_Final_Roll_TackTime_Array9 12645
#define P_Final_Roll_TackTime_Array10 12646
#define P_Sepa_ARC_TackTime_Array1 12647
#define P_Sepa_ARC_TackTime_Array2 12648
#define P_Sepa_ARC_TackTime_Array3 12649
#define P_Sepa_ARC_TackTime_Array4 12650
#define P_Sepa_ARC_TackTime_Array5 12651
#define P_Sepa_ARC_TackTime_Array6 12652
#define P_Sepa_ARC_TackTime_Array7 12653
#define P_Sepa_ARC_TackTime_Array8 12654
#define P_Sepa_ARC_TackTime_Array9 12655
#define P_Sepa_ARC_TackTime_Array10 12656
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array1 12657
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array2 12658
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array3 12659
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array4 12660
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array5 12661
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array6 12662
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array7 12663
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array8 12664
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array9 12665
#define P_Cathode_1st_PNP_Vac_Chk_TackTime_Array10 12666
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array1 12667
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array2 12668
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array3 12669
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array4 12670
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array5 12671
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array6 12672
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array7 12673
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array8 12674
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array9 12675
#define P_Anode_1st_PNP_Vac_Chk_TackTime_Array10 12676
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array1 12677
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array2 12678
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array3 12679
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array4 12680
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array5 12681
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array6 12682
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array7 12683
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array8 12684
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array9 12685
#define P_Cathode_2nd_PNP_Vac_Chk_TackTime_Array10 12686
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array1 12687
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array2 12688
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array3 12689
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array4 12690
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array5 12691
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array6 12692
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array7 12693
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array8 12694
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array9 12695
#define P_Anode_2nd_PNP_Vac_Chk_TackTime_Array10 12696
#define P_PACK_ML_Status_bit 12697
#define P_Whole_Stacking_TackTime_MES_Report_Flag 12698
#define P_JellyRoll_Out_TackTime_MES_Report_Flag 12699
#define P_PV_Cathode_Count 12700
#define P_PV_Anode_Count 12701
#define P_PV_AO_Value_Chanel 12702
#define P_PV_Cathode_NG_TR_NG_Count 12706
#define P_PV_Anode_NG_TR_NG_Count 12707
#define P_PV_Anode_Retry_NG_Count 12708
#define P_PV_Cathode_Retry_NG_Count 12709
#define P_PV_Align_INPUT_Count 12710
#define P_Unloader_Grip_Pressure 12711
#define P_Unloader_Heatmeter 12712
#define P_Interlock_Messege 12713
#define P_EPC_Y_StandBy 12763
#define P_SV_Read_Enable_Flag 12764
#define P_Spool_Rotate_Distance_mm 12765
#define P_Current_Homming_Status 12766
#define P_Home_Execute_Type 12816
#define P_Cathode_Clamp_Gantry 12866
#define P_Anode_Clamp_Gantry 12867
#define P_SV_Separator_Heting_Cutter_Change_Period 12868
#define P_Interval_Read_Time 12869
#define P_Interval_Write_Time 12875
#define P_Cathode_Picker_Cylinder_Count 12881
#define P_Anode_Picker_Cylinder_Count 12882
#define P_SV_Stack_Table_Cathode_Reference_Value 12883
#define P_SV_Stack_Table_Anode_Reference_Value 12884
#define P_CA_DR_Offset 12885
#define P_AN_DR_Offset 12886
#define P_First_DR_Offset 12887
#define P_Last_DR_Offset 12888
#define P_BTN_QC_Sample_Flag 12889
#define P_BTN_Loss_Sample_Flag 12890
#define P_MSA_Sample_Flag 12891
#define P_Sample_JR_Recipe_Count 12892
#define M_Sample_JR_Prod_Count 8359
#define M_Sample_Btn_Flag 8360
#define P_Ca_Clamp_Y_Move 12893
#define P_An_Clamp_Y_Move 12894
#define P_Stack_Table_JR_Exist_Flag 12895
#define P_Program_Monitoring_Lamp_Cell_Ready 12896
#define P_Program_Monitoring_Lamp_Ready_Pos 12897
#define P_Program_Monitoring_Lamp_Pause_Pos 12898
#define P_Program_Monitoring_Lamp_Motion_Run 12899
#define P_Program_Monitoring_Lamp_Cell_Remove 12900
#define P_Program_Monitoring_Lamp_Cell_Supply 12901
#define P_Program_Monitoring_Lamp_Sepa_Mode 12902
#define P_Program_Monitoring_Lamp_Semi_Run 12903
#define P_Program_Monitoring_Lamp_Stack_Mode 12904
#define P_Program_Monitoring_Lamp_Anode_Aling_NG 12905
#define P_Program_Monitoring_Lamp_Anode_Retry_NG 12906
#define P_Program_Monitoring_Lamp_Cathode_Align_NG 12907
#define P_Program_Monitoring_Lamp_Cathode_Retry_NG 12908
#define P_Program_Monitoring_Lamp_Last_Stack_Mode 12909
#define P_Program_Monitoring_Lamp_Jelly_Roll_OK 12910
#define P_Program_Monitoring_Lamp_Jelly_Roll_NG 12911
#define P_Program_Monitoring_Lamp_Jelly_Roll_Sepa 12912
#define P_Program_Monitoring_Lamp_Cell_Out_Pos 12913
#define P_Program_Monitoring_Lamp_Cell_Out_Mode 12914
#define P_Master_Motion_Program_Flag 12915
#define P_Sub_Master_Motion_Program_Flag 12916
#define P_Slave_Motion_Program_Flag 12936
#define P_Master_Motion_CycleStop_Flag 12956
#define P_OLD_Jog_Speed_Motor 12957
#define P_PLC_08_Program_Ver 13007
#define P_Old_PMAC_Commands 13008
#define P_Old_PMAC_Status 13009
#define P_Old_PMAC_Current_Mode 13010
#define P_Mode_Function_State_Machine 13011
#define P_PMAC_Commands 13012
#define P_Command_Start 13013
#define P_Command_Complete 13031
#define P_Command_Reset 13049
#define P_Command_Hold 13067
#define P_Command_Unhold 13085
#define P_Command_Suspend 13103
#define P_Command_Unsuspend 13121
#define P_Command_Clear 13139
#define P_Command_Stop 13157
#define P_Command_Abort 13175
#define P_Command_Status_Complete 13193
#define P_Command_Mask_Layer 13211
#define P_Command_Process_Type 13229
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
#define P_PMAC_Current_Mode 13247
#define P_PMAC_Status 13248
#define P_PMAC_Old_Mode 13249
#define P_Ready_Tack_Chk_Timer 13250
#define P_PLC09_Common_Command_Flag 13251
#define P_PLC09_Common_Command_Complete_Bit 13252
#define P_PLC09_Common_Execute_Flag 13253
#define P_PLC09_Common_Execute_Complete_Bit 13254
#define P_PLC09_Status 13255
#define P_PLC09_Libraries_Var 13256
#define P_Master_Motion_Program_ON_Flag 13257
#define P_Master_Motion_Program_ON_Complete_Bit 13258
#define P_Master_Motion_Program_OFF_Flag 13259
#define P_Master_Motion_Program_OFF_Complete_Bit 13260
#define P_Common_Function_Timbase_ON_Flag 13261
#define P_Common_Function_Timbase_ON_Complete_Bit 13262
#define P_Common_Function_Timbase_OFF_Flag 13263
#define P_Common_Function_Timbase_OFF_Complete_Bit 13264
#define P_Common_Function_Monitoring_Lamp_OFF_Flag 13265
#define P_Common_Function_Monitoring_Lamp_OFF_Complete_Bit 13266
#define P_Common_Function_Slave_Motion_Common_Init_Flag 13267
#define P_Common_Function_Slave_Motion_Common_Init_Complete_Bit 13268
#define P_Common_Function_OlD_Jog_Speed_Save_ON_Flag 13269
#define P_Common_Function_OlD_Jog_Speed_Save_ON_Complete_Bit 13270
#define P_Auto_Resetting_Sum_Ready_Pos_Check_Flag 13271
#define P_Auto_Resetting_Sum_Ready_Pos_Check_Complete_bit 13272
#define P_Manual_Resetting_Sum_Ready_Pos_Check_Flag 13273
#define P_Manual_Resetting_Sum_Ready_Pos_Check_Complete_bit 13274
#define P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Flag 13275
#define P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Complete_Bit 13276
#define P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Flag 13277
#define P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Complete_Bit 13278
#define P_Motion_Target_Position_Complete 13279
#define P_SM_Auto_Run_Layer_Management 13280
#define P_Buffer_Mode_Status_Sequence 13281
#define P_SM_Sub_Function_Pause 13282
#define P_PLC09_Resetting_Position_Check_State_Machine 13283
#define P_PLC09_Resetting_Position_Moving_State_Machine 13284
#define P_Sum_Ready_pos_Motor 13285
#define P_SM_Resetting_Pause_Position 13327
#define P_20per_Vac_Error_Cycle_Stop_Flag 13328
#define P_MNTR_PLC23_ARC_Complete 13329
#define P_FUNCTION_PLC13_Sepa_Trigger_Enable 13330
#define P_PLC_Recipe_PLC2_Revise_Sepa 13331
#define P_Auto_Semi_Init_Status 13332
#define P_Auto_Semi_Init_Chk_Bit 13333
#define P_Old_PLC_HeartBit_Flag 13334
#define P_PLC09_Init_Flag 13335
#define P_Check_IDLE_CF_Flag 13336
#define P_Check_EXECUTE_CF_Flag 13337
#define P_Check_COMPLETING_CF_Flag 13338
#define P_Check_COMPLETE_CF_Flag 13339
#define P_Check_HOLDING_CF_Flag 13340
#define P_Check_HOLD_CF_Flag 13341
#define P_Check_UNHOLDING_CF_Flag 13342
#define P_Check_SUSPENDING_CF_Flag 13343
#define P_Check_SUSPENDED_CF_Flag 13344
#define P_Check_UNSUSPENDING_CF_Flag 13345
#define P_Check_STOPPED_CF_Flag 13346
#define P_Check_ABORTED_CF_Flag 13347
#define P_Check_CLEARING_CF_Flag 13348
#define P_Check_IDLE_CF 13349
#define P_Check_EXECUTE_CF 13350
#define P_Check_COMPLETING_CF 13351
#define P_Check_COMPLETE_CF 13352
#define P_Check_HOLDING_CF 13353
#define P_Check_HOLD_CF 13354
#define P_Check_UNHOLDING_CF 13355
#define P_Check_SUSPENDING_CF 13356
#define P_Check_SUSPENDED_CF 13357
#define P_Check_UNSUSPENDING_CF 13358
#define P_Check_STOPPED_CF 13359
#define P_Check_ABORTED_CF 13360
#define P_Check_CLEARING_CF 13361
#define P_Check_STOPPING_CF 13362
#define P_Check_STARTING_CF 13363
#define P_Check_RESETTING_CF 13364
#define P_Check_STARTTING_CF 13365
#define P_Queue_Clear 13366
#define P_PLC09_Alarm_Test_Flag 13367
#define P_PLC09_Test_Temp 13368
#define P_PLC01_STOP_Queue_Complete_Flag 13369
#define P_PMAC_All_Home_Cmd 13370
#define P_PMAC_All_Home_Status 13371
#define P_PMAC_Master_Following_Use_Flag 13372
#define PnP_Belt_Waring_Pos 13373
#define P_Old_X_PLC_Sync_Heart_Bit 13374
#define P_Stack_Heart_Bit_Sync_Flag 13375
#define P_Stack_Heart_Bit_Sunc_Complete_Bit 13376
#define P_Resetting_Init_Module_RTN 13377
#define P_PLC09_MNTR 13378
#define P_Unloder_PNP_Home_IL_Pos 13379
#define P_ECAT_Slave_Err_Bit 13380
#define P_MC_Power_Down_Flag 13381
#define P_Old_MC_Power_Down_Flag 13382
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
#define P_Modbus_Delay_Timer 13383
#define P_Modbus_Connect_Status 13384
#define P_Modbus_Reconnect_MNTR 13385
#define P_Ecat_Reconn_Chk_Lamp 13386
#define P_MC_Reconn_Chk_Lamp 13387
#define P_Cathode_1st_Vac_Set_Time 13388
#define P_Cathode_2nd_Vac_Set_Time 13389
#define P_Cathode_Align_Vac_Set_Time 13390
#define P_Cathode_Align_Blow_Set_Time 13391
#define P_Anode_1st_Vac_Set_Time 13392
#define P_Anode_2nd_Vac_Set_Time 13393
#define P_Sepa_Consume_Mode_Thickness_rate 13394
#define P_Sepa_Anode_Recipe_Count 13395
#define P_Sepa_Cathode_Recipe_Count 13396
#define P_Discharge_Cathode_Recipe_Count 13397
#define P_Discharge_Anode_Recipe_Count 13398
#define P_Suspend_Discharge_Cathode_Counter 13399
#define P_Suspend_Discharge_Anode_Counter 13400
#define P_Suspend_Discharge_Waiting_Flag 13401
#define P_Com_ARC_Sepa_Consume_Mode_Flag 13402
#define P_Com_EPC_Sepa_Consume_Mode_Flag 13403
#define P_Com_User_Sepa_Consume_Mode_Flag 13404
#define P_Com_Dry_Mode_Flag 13405
#define P_SM_Recipe_Value_Management 13406
#define P_Sepa_Mode_Recipe_Count 13407
#define P_Sepa_Mode_EPC_Recipe_Count 13408
#define P_ARC_End_Sepa_Recipe_Count 13409
#define P_Anode_Align_NG_Array 13410
#define P_Cathode_Align_NG_Array 13430
#define P_Anode_Surface_NG_Array 13450
#define P_Cathode_Surface_NG_Array 13470
#define P_Stack_NG_Array 13490
#define P_Cathode_Align_Continuous_NG_Stop_Select 13510
#define P_Anode_Align_Continuous_NG_Stop_Select 13511
#define P_Stack_Vision_NG_Enable 13512
#define P_Cathode_Surface_Continuous_NG_Stop_Select 13513
#define P_Anode_Surface_Continuous_NG_Stop_Select 13514
#define P_Anode_Trigger_IO_Test_Vision_PLC_Loop 13515
#define P_Anode_Trigger_IO_Test_Motion_Loop 13516
#define P_Cathode_Trigger_IO_Test_Vision_PLC_Loop 13517
#define P_Cathode_Trigger_IO_Test_Motion_Loop 13518
#define P_Stack_Trigger_IO_Test_Vision_PLC_Loop 13519
#define P_Stack_Trigger_IO_Test_Motion_Loop 13520
#define P_PLC12_Continuous_Buffer_Reset_Flag 13521
#define P_Continuous_Call_Align_OK_Flag 13522
#define P_Continuous_Call_Align_NG_Flag 13524
#define P_Continuous_Call_Align_TimeOut_Flag 13526
#define P_Continuous_Call_Surface_OK_Flag 13528
#define P_Continuous_Call_Surface_NG_Flag 13530
#define P_Continuous_Call_Surface_TimeOut_Flag 13532
#define P_Continuous_Call_Stack_Flag 13534
#define P_PLC12_Anode_Sheet_Pick_Up_Flag 13537
#define P_PLC12_Cathode_Sheet_Pick_Up_Flag 13538
#define P_Hold_Anode_Sheet_Pick_Up_Flag 13539
#define P_Hold_Cathode_Sheet_Pick_Up_Flag 13540
#define P_Sheet_Interface_Complete_Pos 13541
#define P_Anode_Sheet_Interface_Complete_Pos 13542
#define P_Cathode_Sheet_Interface_Complete_Pos 13543
#define P_Anode_2nd_TR_Maint_Check 13544
#define P_Cathode_2nd_TR_Maint_Check 13545
#define P_PLC12_Observser_MNTR 13546
#define P_PLC12_Vacuum_MNTR 13551
#define P_Vacuum_Check 13559
#define P_PLC12_Blow_MNTR 13567
#define P_Blow_Check 13575
#define P_PLC12_Vacuum_1st_Cathode_MNTR_Timer 13583
#define P_PLC12_Vacuum_2nd_Cathode_MNTR_Timer 13584
#define P_PLC12_Vacuum_NG_Cathode_MNTR_Timer 13585
#define P_PLC12_Vacuum_Align_Cathode_MNTR_Timer 13586
#define P_PLC12_Vacuum_1st_Anode_MNTR_Timer 13587
#define P_PLC12_Vacuum_2nd_Anode_MNTR_Timer 13588
#define P_PLC12_Vacuum_NG_Anode_MNTR_Timer 13589
#define P_PLC12_Vacuum_Align_Anode_MNTR_Timer 13590
#define P_PLC12_Vacuum_1st_Cathode_Set_Time 13591
#define P_PLC12_Vacuum_2nd_Cathode_Set_Time 13592
#define P_PLC12_Vacuum_NG_Cathode_Set_Time 13593
#define P_PLC12_Vacuum_Align_Cathode_Set_Time 13594
#define P_PLC12_Vacuum_1st_Anode_Set_Time 13595
#define P_PLC12_Vacuum_2nd_Anode_Set_Time 13596
#define P_PLC12_Vacuum_NG_Anode_Set_Time 13597
#define P_PLC12_Vacuum_Align_Anode_Set_Time 13598
#define P_PLC12_Vacuum_1st_Cathode_Take_Time 13599
#define P_PLC12_Vacuum_2nd_Cathode_Take_Time 13604
#define P_PLC12_Vacuum_NG_Cathode_Take_Time 13609
#define P_PLC12_Vacuum_Align_Cathode_Take_Time 13614
#define P_PLC12_Vacuum_1st_Anode_Take_Time 13619
#define P_PLC12_Vacuum_2nd_Anode_Take_Time 13624
#define P_PLC12_Vacuum_NG_Anode_Take_Time 13629
#define P_PLC12_Vacuum_Align_Anode_Take_Time 13634
#define P_PLC12_Blow_1st_Cathode_MNTR_Timer 13639
#define P_PLC12_Blow_2nd_Cathode_MNTR_Timer 13640
#define P_PLC12_Blow_NG_Cathode_MNTR_Timer 13641
#define P_PLC12_Blow_Align_Cathode_MNTR_Timer 13642
#define P_PLC12_Blow_1st_Anode_MNTR_Timer 13643
#define P_PLC12_Blow_2nd_Anode_MNTR_Timer 13644
#define P_PLC12_Blow_NG_Anode_MNTR_Timer 13645
#define P_PLC12_Blow_Align_Anode_MNTR_Timer 13646
#define P_PLC12_Blow_1st_Cathode_Set_Time 13647
#define P_PLC12_Blow_2nd_Cathode_Set_Time 13648
#define P_PLC12_Blow_NG_Cathode_Set_Time 13649
#define P_PLC12_Blow_Align_Cathode_Set_Time 13650
#define P_PLC12_Blow_1st_Anode_Set_Time 13651
#define P_PLC12_Blow_2nd_Anode_Set_Time 13652
#define P_PLC12_Blow_NG_Anode_Set_Time 13653
#define P_PLC12_Blow_Align_Anode_Set_Time 13654
#define P_PLC12_Blow_1st_Cathode_Take_Time 13655
#define P_PLC12_Blow_2nd_Cathode_Take_Time 13660
#define P_PLC12_Blow_NG_Cathode_Take_Time 13665
#define P_PLC12_Blow_Align_Cathode_Take_Time 13670
#define P_PLC12_Blow_1st_Anode_Take_Time 13675
#define P_PLC12_Blow_2nd_Anode_Take_Time 13680
#define P_PLC12_Blow_NG_Anode_Take_Time 13685
#define P_PLC12_Blow_Align_Anode_Take_Time 13690
#define P_Vacuum_Reentry_Bit 13695
#define P_Blow_Reentry_Bit 13696
#define P_Status_arry 13697
#define P_Queue_arry 13717
#define P_Step_arry 13737
#define P_Index_arry 13757
#define P_top 13777
#define P_Queue_stack_top 13778
#define P_Step_stack_top 13779
#define P_Index_stack_top 13780
#define P_Status_stack_top 13781
#define NN_Step 13782
#define NN_Index 13783
#define P_PLC_Observser_MNTR 13784
#define P_PLC12_Frist 13789
#define P_SM_Auto_Run_Status_Management 13790
#define P_SM_Status_Main_Memory_Management 13791
#define P_SM_Cell_Memory_Management 13792
#define P_Test_Vacuum_Timer 13793
#define P_Test_Blow_Timer 13801
#define P_Vac_Test_Set_Time 13809
#define P_Blow_Test_Set_Time 13817
#define P_PLC12_Vacuum_Unit_Data 13825
#define P_PLC12_Blow_Unit_Data 13826
#define P_Stack_Algorithme_Cmd_Event_Status 13827
#define P_PLC12_vacuum_Event_Status 13828
#define P_PLC12_Blow_Event_status 13829
#define P_PLC12_vacuum_DIO_Observer_Status 13830
#define P_PLC12_Blow_DIO_Observer_Status 13831
#define P_Resetting_Vacuum_MNTR_State_Machine 13832
#define P_Heart_Bit_Time 13833
#define P_Dancer_Angle_Alarm_Timer_Flag 13834
#define P_Dancer_Angle_Alarm_Check_Timer 13835
#define P_BTN_LED_LAMP 13836
#define P_Old_BTN_LED_LAMP 13837
#define P_PLC_TO_PMAC_Work_Confirm_Operation_Cnt 13838
#define P_VISION_TO_PMAC_Work_Confirm_Operation_Ack_Cnt 13839
#define P_Ca_AT_Retry_Cal_Move_Complete 13840
#define P_An_AT_Retry_Cal_Move_Complete 13841
#define P_Ca_AT_Retry_Cal_Cnt 13842
#define P_An_AT_Retry_Cal_Cnt 13843
#define P_Ca_AT_Retry_Cal_Complete 13844
#define P_An_AT_Retry_Cal_Complete 13845
#define P_An_AT_Retry_Cal_Pass 13846
#define P_Ca_AT_Retry_Cal_Pass 13847
#define P_Ca_Picker_T_Turn_Cnt_Flag 13848
#define P_Ca_Picker_T_Turn_Cnt 13849
#define P_Ca_Picker_T_Home_Type 13850
#define P_An_Picker_T_Turn_Cnt_Flag 13851
#define P_An_Picker_T_Turn_Cnt 13852
#define P_An_Picker_T_Home_Type 13853
#define P_Flag_Vac_Status_Initialize 13854
#define P_SM_Vac_Initialize 13855
#define P_Flag_Anode_1st_Vac_OFF 13856
#define P_Flag_Anode_AT_Vac_OFF 13857
#define P_Flag_Anode_2nd_Vac_OFF 13858
#define P_Flag_Anode_NG_Vac_OFF 13859
#define P_Flag_Cathode_1st_Vac_OFF 13860
#define P_Flag_Cathode_AT_Vac_OFF 13861
#define P_Flag_Cathode_2nd_Vac_OFF 13862
#define P_Flag_Cathode_NG_Vac_OFF 13863
#define P_Flag_Anode_1st_Vac_Initial_Alarm 13864
#define P_Flag_Anode_AT_Vac_Initial_Alarm 13865
#define P_Flag_Anode_2nd_Vac_Initial_Alarm 13866
#define P_Flag_Anode_NG_Vac_Initial_Alarm 13867
#define P_Flag_Cathode_1st_Vac_Initial_Alarm 13868
#define P_Flag_Cathode_AT_Vac_Initial_Alarm 13869
#define P_Flag_Cathode_2nd_Vac_Initial_Alarm 13870
#define P_Flag_Cathode_NG_Vac_Initial_Alarm 13871
#define P_Middle_Discharge_Ignore_Total_Count 13872
#define P_Middle_Discharge_Ignore_Stack_Count 13873
#define P_Middle_Discharge_Ignore_ON_Signal 13874
#define P_Middle_Discharge_Ignore_OFF_Signal 13875
#define P_Middle_Discharge_Ignore_Cell_Count 13876
#define P_ARC_Middle_Discharge_Ignore_Vision_Check 13877
#define P_ARC_Middle_Discharge_Ignore_ON_Flag 13878
#define P_Middle_Discharge_Ignore_User_Sepa_Mode_Check 13879
#define P_Zero_Angle 13880
#define P_Zero_Length 13905
#define P_Homeoffset_Change_Flag 13930
#define P_Cal_Distance 13955
#define P_Cal_Denominator 13960
#define P_Cal_Numerator 13965
#define P_Cal_Dif_Deg 13970
#define P_Vac_Door_Open_Clear 13975
#define M_Touchprobefunction 8361
#define M_Touchprobestatus 8410
#define P_Flag_Sepa_Stack_Mode_CHK 13988
#define P_Read_Timer_S 13989
#define P_Write_Timer_S 13998
#define P_Interval_Read_S 14007
#define P_Interval_Write_S 14016
#define P_UI_Jog_Vel_M 14025
#define P_Initialize_Read_Excom_Variables_Flag 14075
#define P_Old_X_Read_Count_S 14076
#define P_Cathode_Clamp_MC_Cylinder_Count 14085
#define P_Cathode_Clamp_OP_Cylinder_Count 14086
#define P_Anode_Clamp_MC_Cylinder_Count 14087
#define P_Anode_Clamp_OP_Cylinder_Count 14088
#define P_Cathode_1ST_TR_Cylinder_Count 8003
#define P_Anode_1ST_TR_Cylinder_Count 8004
#define P_BTN_Cathode_Clamp_inside_Machine_Cylinder_Count_Clear 14089
#define P_BTN_Cathode_Clamp_Middle_Cylinder_Count_Clear 14090
#define P_BTN_Cathode_Clamp_outside_Machine_Cylinder_Count_Clear 14091
#define P_BTN_Anode_Clamp_inside_Machine_Cylinder_Count_Clear 14092
#define P_BTN_Anode_Clamp_Middle_Cylinder_Count_Clear 14093
#define P_BTN_Anode_Clamp_outside_Machine_Cylinder_Count_Clear 14094
#define P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear 14095
#define P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear_Old 14096
#define P_BTN_Anode_1ST_TR_Cylinder_Count_Clear 14097
#define P_BTN_Anode_1ST_TR_Cylinder_Count_Clear_Old 14098
#define P_X_BTN_Manual_1 14099
#define P_X_BTN_Manual_2 14219
#define P_X_BTN_Manual_3 14339
#define P_Home_InterLock_M 14459
#define P_Status_BTN_Manual_1 14509
#define P_Status_BTN_Manual_2 14629
#define P_Status_BTN_Manual_Interlock_1 14749
#define P_Status_BTN_Manual_Interlock_2 14869
#define P_Status_BTN_Manual_Interlock_3 14989
#define P_Mode_Run_Enable_Flag 15109
#define P_RECIPE_PLC27_Manual_Interval 15114
#define P_RECIPE_PLC27_Auto_Interval 15115
#define P_MNTR_PLC4_Vision_Result 15116
#define P_PNP_Vac_Mode_Run_Enable_Flag 15317
#define P_Recipe_Speed_Value 15322
#define P_Slave6_Target_X_For_Cell_Out 15323
#define P_HCK_Step_MNTR 15324
#define P_Axis_Home_Pos 15374
#define P_Axis_Ready_Pos 15424
#define P_PMAC_Homing_CHK 15474
#define P_Poistion_error 15524
#define P_Home_Command 15525
#define P_Recipe_Count_Num 15575
#define L_Motor_Status_Update_Interval 15576
#define L_Motor_Recipe_Update_Interval 15577
#define P_UI_Servo_On_Off 15578
#define P_Old_BTN_Servo_On_Off_M 15579
#define P_Peak_Load_Ratio_M 15612
#define P_Chk_Current_Jog_Sel 15645
#define P_Jog_Sel_Count 15678
#define P_Recipe_POS_Interock_Num_Bit 15679
#define P_Recipe_VEL 15712
#define P_Recipe_POS 15723
#define P_BTN_Servo_On_Off_M 15734
#define P_BTN_Home_M 15767
#define P_BTN_Jog_Stop_M 15800
#define P_BTN_Recipe_POS_RUN_M 15833
#define P_Recipe_POS_Flag_M 15866
#define P_BTN_Jog_INC_M 15899
#define P_BTN_JOG_ABS_M 15932
#define P_User_Jog_Distance 15965
#define P_Unit_Command 15966
#define P_Unit_State_Machine 16066
#define P_Status_BTN_Manual_3 16166
#define P_Chk_Current_BTN_Sel 16266
#define P_BTN_Sel_Count 16316
#define P_PC_BTN_No 16317
#define P_BTN_Interlock_Update_Interval 16318
#define P_Align_Table_Status_Update_Interval 16319
#define P_Jelly_Roll_Total_Count_Old 16320
#define P_Old_m4120 16321
#define P_Old_m4121 16322
#define P_Old_m4122 16323
#define P_Old_m4123 16324
#define P_Linear_Encoder_Pos_Check_Flag 16325
#define P_Linear_Encoder_Pos 16330
#define P_Status_Linear_Encoder_HomeZero 16335
#define P_Command_Linear_Encoder_HomeZero 16340
#define P_Flag_Linear_Enc_Homezero_Complete_M17 16345
#define P_Flag_Linear_Enc_Homezero_Complete_M18 16346
#define P_Flag_Linear_Enc_Homezero_Complete_M19 16347
#define P_Flag_Linear_Enc_Homezero_Complete_M20 16348
#define P_CMD_Linear_ENC_Homezero_M17 16349
#define P_CMD_Linear_ENC_Homezero_M18 16350
#define P_CMD_Linear_ENC_Homezero_M19 16351
#define P_CMD_Linear_ENC_Homezero_M20 16352
#define P_OLD_Home_Offset 16353
#define P_RECIPE_PLC27_Alltime_Interval 16383
#define P_Manual_Memory_Tower_Timer 16384
#define P_Memory_Tower_Interval 16385
#define P_PLC_14_Status_Cycle_Stop_Flag 16386
#define P_Cathode_AlignTable_Cleaning_Pos_Status_Machine 16387
#define P_Anode_AlignTable_Cleaning_Pos_Status_Machine 16388
#define P_Status_Cathode_AlignTable_Cleaning_Pos 16389
#define P_Status_Anode_AlignTable_Cleaning_Pos 16390
#define P_CMD_Cathode_AlignTable_Cleaning_Pos 16391
#define P_CMD_Anode_AlignTable_Cleaning_Pos 16392
#define P_Cathode_2nd_pnp_Cleaning_Mode_Pos 16393
#define P_Anode_2nd_pnp_Cleaning_Mode_Pos 16394
#define P_Interlock_Test 16395
#define P_PNP_Picker_T_Pos 16396
#define P_NG_PNP_Pos 16397
#define M_Old_X_BTN_Machine_READY 16398
#define M_Old_X_BTN_Machine_START 16399
#define M_Old_X_BTN_Machine_STOP 16400
#define M_Old_X_BTN_Machine_RESET 16401
#define M_Old_X_BTN_Machine_MODE 16402
#define P_BTN_Motor_Pos_Check_RTN 16403
#define P_BTN_Memory_Tower_Check_Bit 16404
#define P_PMAC_Status_IDLE_Motor_Not_Pos 16405
#define P_PMAC_Status_IDLE_Motor_Pos 16406
#define P_BTN_Motor_Pos_Check_Monitor 16407
#define P_PackML_Auto_Stop_Bit 16408
#define P_BTN_IDLE_Motor_Not_Pos 16409
#define M_X_BTN_Machine_Mode 16410
#define M_Old_X_BTN_Machine_Mode 16411
#define P_Lamp_Blinking_Timer 16412
#define P_BTN_Ready_Lamp 16413
#define P_BTN_Start_Lamp 16414
#define P_BTN_Stop_Lamp 16415
#define P_ARC_Name_Plate_Passive_Status 16416
#define P_ARC_Passive_Status 16417
#define P_NP_Spool_Number 16418
#define P_ARC_Page_On 16419
#define P_ARC_NP_Upper_Timer 16420
#define P_ARC_Upper_Ready 16421
#define P_ARC_NP_Upper_3rd_Step_Toggle_Variable 16422
#define P_ARC_NP_Upper_7th_Step_Variable 16423
#define P_ARC_NP_Upper_7th_Step_Edge_Variable 16424
#define P_ARC_NP_Upper_Rot_ReRot_Blinking_Bit 16425
#define P_ARC_NP_Lower_Timer 16426
#define P_ARC_Lower_Ready 16427
#define P_ARC_NP_Lower_3rd_Step_Toggle_Variable 16428
#define P_ARC_NP_Lower_7th_Step_Variable 16429
#define P_ARC_NP_Lower_7th_Step_Edge_Variable 16430
#define P_ARC_NP_Lower_Rot_ReRot_Blinking_Bit 16431
#define M_Old_X_ARC_NP_Ready 16432
#define M_Old_X_ARC_NP_Unwinder_Rotation 16433
#define M_Old_X_ARC_NP_Unwinder_Re_Rotation 16434
#define P_Status_Clear_Flag 16435
#define P_Status_Clear_RTN 16436
#define P_MSA_BTN_On 16437
#define P_Align_Take_Off_BTN_ON 16438
#define P_ARC_NP_Upper_Ready_Check_Bit 16439
#define P_ARC_NP_Lower_Ready_Check_Bit 16440
#define P_PLC13_Cycle_Stop_Return_Array 16441
#define P_Stopping_CycleStop_Status 16541
#define P_Stopping_CycleStop_Seq_Index 16542
#define P_Stopping_CycleStop_Precondition_Seq_Index 16543
#define P_Stopping_CycleStop_Module_Status 16544
#define P_Stopping_CycleStop_Cmd 16545
#define P_Stopping_CycleStop_State_Machine 16546
#define P_Stopping_CycleStop_Act_State_Machine 16547
#define P_Module_Cycle_Stop_Act_State_Machine_Array 16567
#define P_Module_Cycle_Stop_Act_Complete_Bit 16587
#define P_Module_Cycle_Stop_Act_Command_Array 16607
#define P_OLD_Module_Cycle_Stop_Act_Command_Array 16627
#define P_Buffer_Seqdata_CycleStop_Array 16647
#define P_Final_Roll_Cathode_Pos_Status 16667
#define P_Sheet_Paper_FWD_Pos_Status 16668
#define P_Final_Roll_Vision_Pos_Status 16669
#define P_Cathode_Clamp_ON_Status 16670
#define P_Anode_Clamp_ON_Status 16671
#define P_Anode_Clamp_OFF_Status 16672
#define P_Partition_Up_Flag 16673
#define P_Partition_Down_Flag 16674
#define P_Partition_Avoid_Flag 16675
#define P_Partition_Avoid_Z_Speed 16676
#define P_Partition_Avoid_X_Speed 16677
#define P_Partition_Avoid_T_Speed 16678
#define P_Partition_Avoid_2nd_T_Pos 16679
#define P_Partition_Step_Flag 16680
#define P_Partition_1st_Avoid_Offset 16681
#define P_Partition_Picker_Avoid_Offset 16682
#define P_Partition_Avoid_Check 16683
#define P_Tact_Time_Timer 16684
#define P_Tack_Time_Save_Time 16724
#define P_Anode_NG_PNP_Tact_Time_Start 16764
#define P_Cathode_NG_PNP_Tact_Time_Start 16765
#define P_Anode_NG_PNP_Tact_Time_End 16766
#define P_Cathode_NG_PNP_Tact_Time_End 16767
#define P_Tact_Time_Stack_Array 16768
#define P_Tact_Time_Discharge_Array 16778
#define P_Tact_Time_1st_Unloader_Array 16788
#define P_Tact_Time_Sepa_ARC_Array 16798
#define P_Tact_Time_Final_Roll_Array 16808
#define P_Tact_Time_Cathode_1st_PNP_Array 16818
#define P_Tact_Time_Cathode_Align_Array 16828
#define P_Tact_Time_Cathode_2nd_PNP_Array 16838
#define P_Tact_Time_Cathode_Clamp_Array 16848
#define P_Tact_Time_Anode_1st_PNP_Array 16858
#define P_Tact_Time_Anode_Align_Array 16868
#define P_Tact_Time_Anode_2nd_PNP_Array 16878
#define P_Tact_Time_Anode_Clamp_Array 16888
#define P_Tact_Time_Cathode_1st_PNP_Vac_Array 16898
#define P_Tact_Time_Cathode_Align_PNP_Vac_Array 16908
#define P_Tact_Time_Cathode_2nd_PNP_Vac_Array 16918
#define P_Tact_Time_Anode_1st_PNP_Vac_Array 16928
#define P_Tact_Time_Anode_Align_PNP_Vac_Array 16938
#define P_Tact_Time_Anode_2nd_PNP_Vac_Array 16948
#define P_Tact_Time_Final_Roller_Clamp 16958
#define P_Tact_Time_Final_Roller_Unclamp 16959
#define P_Tact_Time_Stack_Table_Down 16960
#define P_Tact_Time_Stack_Table_Up 16961
#define P_Tact_Time_Sepa_Cutting_Down 16962
#define P_Tact_Time_Sepa_Cutting_Up 16963
#define P_Tact_Time_ARC_Upper_Plate_Up 16964
#define P_Tact_Time_ARC_Upper_Plate_Down 16965
#define P_Tact_Time_ARC_Upper_Tilting_On 16966
#define P_Tact_Time_ARC_Upper_Tilting_Off 16967
#define P_Tact_Time_ARC_Upper_Cutter_Fwd 16968
#define P_Tact_Time_ARC_Upper_Cutter_Bwd 16969
#define P_Tact_Time_ARC_Upper_Clamp_On 16970
#define P_Tact_Time_ARC_Upper_Clamp_Off 16971
#define P_Tact_Time_ARC_Lower_Plate_Up 16972
#define P_Tact_Time_ARC_Lower_Plate_Down 16973
#define P_Tact_Time_ARC_Lower_Tilting_On 16974
#define P_Tact_Time_ARC_Lower_Tilting_Off 16975
#define P_Tact_Time_ARC_Lower_Cutter_Fwd 16976
#define P_Tact_Time_ARC_Lower_Cutter_Bwd 16977
#define P_Tact_Time_ARC_Lower_Clamp_On 16978
#define P_Tact_Time_ARC_Lower_Clamp_Off 16979
#define P_Tact_Time_Save_Final_Roller_Clamp_Time 16980
#define P_Tact_Time_Save_Final_Roller_Unclamp_Time 16981
#define P_Tact_Time_Save_Stack_Table_Down_Time 16982
#define P_Tact_Time_Save_Stack_Table_Up_Time 16983
#define P_Tact_Time_Save_Sepa_Cutting_Down_Time 16984
#define P_Tact_Time_Save_Sepa_Cutting_Up_Time 16985
#define P_Tact_Time_Save_ARC_Upper_Plate_Up_Time 16986
#define P_Tact_Time_Save_ARC_Upper_Plate_Down_Time 16987
#define P_Tact_Time_Save_ARC_Upper_Tilting_On_Time 16988
#define P_Tact_Time_Save_ARC_Upper_Tilting_Off_Time 16989
#define P_Tact_Time_Save_ARC_Upper_Cutter_Fwd_Time 16990
#define P_Tact_Time_Save_ARC_Upper_Cutter_Bwd_Time 16991
#define P_Tact_Time_Save_ARC_Upper_Clamp_On_Time 16992
#define P_Tact_Time_Save_ARC_Upper_Clamp_Off_Time 16993
#define P_Tact_Time_Save_ARC_Lower_Plate_Up_Time 16994
#define P_Tact_Time_Save_ARC_Lower_Plate_Down_Time 16995
#define P_Tact_Time_Save_ARC_Lower_Tilting_On_Time 16996
#define P_Tact_Time_Save_ARC_Lower_Tilting_Off_Time 16997
#define P_Tact_Time_Save_ARC_Lower_Cutter_Fwd_Time 16998
#define P_Tact_Time_Save_ARC_Lower_Cutter_Bwd_Time 16999
#define P_Tact_Time_Save_ARC_Lower_Clamp_On_Time 17000
#define P_Tact_Time_Save_ARC_Lower_Clamp_Off_Time 17001
#define P_Tact_Time_Check 17002
#define P_Old_Tact_Time_Check 17042
#define P_Tact_Time_Head_Address 17082
#define P_Tact_Time_Array_Init 17122
#define P_Last_Run_To_Discharge_Tact_Timer 17123
#define P_Last_Run_To_Discharge_Tact_Time 17124
#define P_Master_Trigger_Sync_Tact_Timer 17125
#define P_Master_Trigger_Sync_Tact_Time 17126
#define P_Vision_First_Sepa_Stack_Align_OK_PMAC_Flag 17127
#define P_PLC18_EPC_Retry_Mode_Time_Use_Flag 17128
#define P_PLC18_Vision_EPC_Correction_Request_Old 17129
#define P_PLC18_EPC_Moving_Flag 17130
#define P_PLC18_EPC_Moving_Status 17131
#define P_PLC18_EPC_Move_State_Machine 17132
#define P_PLC18_EPC_Move_Status 17133
#define P_PLC18_EPC_inspection_Time 17134
#define P_EPC_Insp_Time 17135
#define P_EPC_Correction_Time 17136
#define P_TEST_Max_EPC_Sensor_Value_um 17137
#define P_PLC18_EPC_Moving_Timer 17138
#define P_EPC_MNTR_VAR 17139
#define P_EPC_Axis_Target_Y 17149
#define P_Com_After_Sepa_Mode_Status 17150
#define P_PLC18_PLC_to_PMAC_Correction_Value 17151
#define P_PLC_EPC_Status 17152
#define P_EPC_Retry_Over_Alarm_Flag 17153
#define P_ARC_EPC_Vision_Value_Apply_Bit 17154
#define P_ARC_EPC_Vision_Value_Apply_Flag 17155
#define P_ARC_EPC_Vision_Value_Apply_State_Machine 17156
#define P_ARC_EPC_Vision_Value_Apply_Timer 17157
#define P_ARC_EPC_Vision_Value_Apply_Time 17158
#define P_AH_Home_Status 17159
#define P_Resetting_All_Home_Command 17160
#define P_Homing_Alarm_Time 17161
#define P_Home_Check_Arry 17162
#define P_All_Home_Stop_Cmd 17212
#define P_Home_First_Move 17213
#define P_PWM_Phasing_Start 17214
#define P_PWM_Status 17219
#define P_PWM_State_Machine 17224
#define P_AH_Seq_arr 17229
#define P_DD_M_Home_ABS_Pos 17244
#define P_AH_Indvi_rtn 17249
#define P_DD_M_Home_Pos_Flag 17300
#define P_WAIT_INDEX 17301
#define P_Home_Check_Arry1 17302
#define P_FR_Cmd_Check_Flag 17352
#define M_Ecat_Motor_State 8459
#define P_PV_Separator_Dancer_Pressure 17353
#define P_PV_Cathode_Clamp_Pressure 17354
#define P_PV_Anoode_Clamp_Pressure 17355
#define P_PV_Cathode_Final_Roller_X_Axis 17356
#define P_PV_Anode_Final_Roller_X_Axis 17357
#define P_PV_Cathode_Clamp_ON_Y1_Axis_Pos 17358
#define P_PV_Cathode_Clamp_ON_Y2_Axis_Pos 17359
#define P_PV_Cathode_Clamp_ON_Z1_Axis_Pos 17360
#define P_PV_Cathode_Clamp_ON_Z2_Axis_Pos 17361
#define P_PV_Anode_Clamp_ON_Y1_Axis_Pos 17362
#define P_PV_Anode_Clamp_ON_Y2_Axis_Pos 17363
#define P_PV_Anode_Clamp_ON_Z1_Axis_Pos 17364
#define P_PV_Anode_Clamp_ON_Z2_Axis_Pos 17365
#define P_PV_Cathode_2th_AT_T_Axis_Pos 17366
#define P_PV_Cathode_2th_ST_T_Axis_Pos 17367
#define P_PV_Cathode_2th_AT_Z_Axis_Pos 17368
#define P_PV_Cathode_2th_ST_Z_Axis_Pos 17369
#define P_PV_Anode_2th_AT_T_Axis_Pos 17370
#define P_PV_Anode_2th_ST_T_Axis_Pos 17371
#define P_PV_Anode_2th_AT_Z_Axis_Pos 17372
#define P_PV_Anode_2th_ST_Z_Axis_Pos 17373
#define P_PV_Cathode_1th_Ready_T_Axis_Pos 17374
#define P_PV_Cathode_1th_CV_T_Axis_Pos 17375
#define P_PV_Cathode_1th_AT_T_Axis_Pos 17376
#define P_PV_Cathode_1th_Ready_Z_Axis_Pos 17377
#define P_PV_Cathode_1th_CV_Z_Axis_Pos 17378
#define P_PV_Cathode_1th_AT_Z_Axis_Pos 17379
#define P_PV_Anode_1th_Ready_T_Axis_Pos 17380
#define P_PV_Anode_1th_CV_T_Axis_Pos 17381
#define P_PV_Anode_1th_AT_T_Axis_Pos 17382
#define P_PV_Anode_1th_Ready_Z_Axis_Pos 17383
#define P_PV_Anode_1th_CV_Z_Axis_Pos 17384
#define P_PV_Anode_1th_AT_Z_Axis_Pos 17385
#define P_PV_Cathode_NG_AT_T_Axis_Pos 17386
#define P_PV_Cathode_NG_Box_T_Axis_Pos 17387
#define P_PV_Anode_NG_AT_T_Axis_Pos 17388
#define P_PV_Anode_NG_Box_T_Axis_Pos 17389
#define P_SemiRun_Separator_Dancer_Pressure_Flag 17390
#define P_SemiRun_Cathode_Clamp_Pressure_Flag 17391
#define P_SemiRun_Anoode_Clamp_Pressure_Flag 17392
#define P_SemiRun_Cathode_Final_Roller_X_Axis_Flag 17393
#define P_SemiRun_Anode_Final_Roller_X_Axis_Flag 17394
#define P_SemiRun_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag 17395
#define P_SemiRun_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag 17396
#define P_SemiRun_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag 17397
#define P_SemiRun_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag 17398
#define P_SemiRun_Cathode_2th_AT_T_Axis_Pos_Flag 17399
#define P_SemiRun_Cathode_2th_ST_T_Axis_Pos_Flag 17400
#define P_SemiRun_Cathode_2th_AT_Z_Axis_Pos_Flag 17401
#define P_SemiRun_Cathode_2th_ST_Z_Axis_Pos_Flag 17402
#define P_SemiRun_Anode_2th_AT_T_Axis_Pos_Flag 17403
#define P_SemiRun_Anode_2th_ST_T_Axis_Pos_Flag 17404
#define P_SemiRun_Anode_2th_AT_Z_Axis_Pos_Flag 17405
#define P_SemiRun_Anode_2th_ST_Z_Axis_Pos_Flag 17406
#define P_SemiRun_Cathode_1th_Ready_T_Axis_Pos_Flag 17407
#define P_SemiRun_Cathode_1th_CV_T_Axis_Pos_Flag 17408
#define P_SemiRun_Cathode_1th_AT_T_Axis_Pos_Flag 17409
#define P_SemiRun_Cathode_1th_Ready_Z_Axis_Pos_Flag 17410
#define P_SemiRun_Cathode_1th_CV_Z_Axis_Pos_Flag 17411
#define P_SemiRun_Cathode_1th_AT_Z_Axis_Pos_Flag 17412
#define P_SemiRun_Anode_1th_Ready_T_Axis_Pos_Flag 17413
#define P_SemiRun_Anode_1th_CV_T_Axis_Pos_Flag 17414
#define P_SemiRun_Anode_1th_AT_T_Axis_Pos_Flag 17415
#define P_SemiRun_Anode_1th_Ready_Z_Axis_Pos_Flag 17416
#define P_SemiRun_Anode_1th_CV_Z_Axis_Pos_Flag 17417
#define P_SemiRun_Anode_1th_AT_Z_Axis_Pos_Flag 17418
#define P_SemiRun_Cathode_NG_AT_T_Axis_Pos_Flag 17419
#define P_SemiRun_Cathode_NG_Box_T_Axis_Pos_Flag 17420
#define P_SemiRun_Anode_NG_AT_T_Axis_Pos_Flag 17421
#define P_SemiRun_Anode_NG_Box_T_Axis_Pos_Flag 17422
#define P_Motion_Separator_Dancer_Pressure_Flag 17423
#define P_Motion_Cathode_Clamp_Pressure_Flag 17424
#define P_Motion_Anoode_Clamp_Pressure_Flag 17425
#define P_Motion_Cathode_Final_Roller_X_Axis_Flag 17426
#define P_Motion_Anode_Final_Roller_X_Axis_Flag 17427
#define P_Motion_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag 17428
#define P_Motion_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag 17429
#define P_Motion_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag 17430
#define P_Motion_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag 17431
#define P_Motion_Cathode_2th_AT_T_Axis_Pos_Flag 17432
#define P_Motion_Cathode_2th_ST_T_Axis_Pos_Flag 17433
#define P_Motion_Cathode_2th_AT_Z_Axis_Pos_Flag 17434
#define P_Motion_Cathode_2th_ST_Z_Axis_Pos_Flag 17435
#define P_Motion_Anode_2th_AT_T_Axis_Pos_Flag 17436
#define P_Motion_Anode_2th_ST_T_Axis_Pos_Flag 17437
#define P_Motion_Anode_2th_AT_Z_Axis_Pos_Flag 17438
#define P_Motion_Anode_2th_ST_Z_Axis_Pos_Flag 17439
#define P_Motion_Cathode_1th_Ready_T_Axis_Pos_Flag 17440
#define P_Motion_Cathode_1th_CV_T_Axis_Pos_Flag 17441
#define P_Motion_Cathode_1th_AT_T_Axis_Pos_Flag 17442
#define P_Motion_Cathode_1th_Ready_Z_Axis_Pos_Flag 17443
#define P_Motion_Cathode_1th_CV_Z_Axis_Pos_Flag 17444
#define P_Motion_Cathode_1th_AT_Z_Axis_Pos_Flag 17445
#define P_Motion_Anode_1th_Ready_T_Axis_Pos_Flag 17446
#define P_Motion_Anode_1th_CV_T_Axis_Pos_Flag 17447
#define P_Motion_Anode_1th_AT_T_Axis_Pos_Flag 17448
#define P_Motion_Anode_1th_Ready_Z_Axis_Pos_Flag 17449
#define P_Motion_Anode_1th_CV_Z_Axis_Pos_Flag 17450
#define P_Motion_Anode_1th_AT_Z_Axis_Pos_Flag 17451
#define P_Motion_Cathode_NG_AT_T_Axis_Pos_Flag 17452
#define P_Motion_Cathode_NG_Box_T_Axis_Pos_Flag 17453
#define P_Motion_Anode_NG_AT_T_Axis_Pos_Flag 17454
#define P_Motion_Anode_NG_Box_T_Axis_Pos_Flag 17455
#define P_Cathode_1PNP_Sacle_Value 17456
#define P_Cathode_2PNP_Sacle_Value 17457
#define P_Anode_1PNP_Sacle_Value 17458
#define P_Anode_2PNP_Sacle_Value 17459
#define P_PLC01_SemiRun_PV_Flag 17460
#define P_PV_EPC_Index 17461
#define P_PV_EPC_Camera_Pos 17462
#define P_BTN_MSA_Total_Value 17477
#define P_Vision_Align_Trigger_Timer 17478
#define P_Vision_Stack_Trigger_Timer 17479
#define P_MSA_Chk_Pos_Timer 17480
#define P_MSA_Chk_Pos_Time 17481
#define P_VISION_MSA_Status_Prod_Sequence 17482
#define P_VISION_MSA_Seq_Index 17502
#define P_VISION_MSA_Anode_Align_Bit_Pos 17503
#define P_VISION_MSA_Seq_PreCondition_Index 17504
#define P_MSA_CycleStop_Point_Check_Complete_RTN 17505
#define P_MSA_Cmd 17506
#define P_Current_Anode_Align_MSA_Run_Count 17511
#define P_Current_Cathode_Align_MSA_Run_Count 17512
#define P_Current_Anode_Stack_MSA_Run_Count 17513
#define P_Current_Cathode_Stack_MSA_Run_Count 17514
#define P_VISION_MSA_Align_Count_Chk_Flag 17515
#define P_VISION_MSA_Stack_Count_Chk_Flag 17516
#define P_VISION_MSA_pre_InterLock_Cmd 17517
#define P_VISION_MSA_pre_InterLock_Status 17518
#define P_VISION_MSA_pre_InterLock_Check_Assy_Bit 17519
#define P_VISION_MSA_pre_InterLock_Assy_Bit_Pos 17520
#define P_Vision_MSA_Interlock_Status 17521
#define P_VISION_MSA_MODE 17522
#define P_VISION_MSA_Status_Flag 17523
#define P_VISION_MSA_State_Machine 17524
#define P_VISION_MSA_Status 17525
#define P_VISION_MSA_Seq_Command_Occurs 17526
#define P_Vision_Align_Trigger_Time 17527
#define P_Anode_Align_MSA_Motion_Check 17528
#define P_Cathode_Align_MSA_Motion_Check 17529
#define P_Anode_Stack_MSA_Motion_Check 17530
#define P_Cathode_Stack_MSA_Motion_Check 17531
#define P_Anode_Align_MSA_Motion_ProgActive_Complete 17532
#define P_Cathode_Align_MSA_Motion_ProgActive_Complete 17533
#define P_Anode_Stack_MSA_Motion_ProgActive_Complete 17534
#define P_Cathode_Stack_MSA_Motion_ProgActive_Complete 17535
#define P_BTN_Align_Off_Total_Value 17536
#define P_Align_Take_Off_Cmd 17537
#define P_Align_Take_Off_Status 17540
#define P_Align_Take_Off_Mode 17541
#define P_Align_Take_Off_Status_Flag 17542
#define P_Align_Take_Off_State_Machine 17543
#define P_Align_Take_Off_Chk_Pos_Timer 17544
#define P_Align_Take_Off_Motor_Check_Complete 17545
#define P_Align_Take_Off_Speed_Return_Complete 17546
#define P_Align_Take_Off_Interlock_Status 17547
#define P_Align_Take_Off_pre_InterLock_Cmd 17548
#define P_Align_Take_Off_pre_InterLock_Status 17549
#define P_Align_Take_Off_pre_InterLock_Check_Assy_Bit 17550
#define P_Align_Take_Off_pre_InterLock_Assy_Bit_Pos 17551
#define P_Align_Take_Off_Seq_Index 17552
#define P_Align_Take_Off_Seq_PreCondition_Index 17553
#define P_Align_Take_Off_Status_Prod_Sequence 17554
#define P_Align_Take_Off_Stop_Signal 17574
#define P_Vision_Cal_Reset_Count 17575
#define P_2nd_PNP_Cleaning_Mode_Cmd 17576
#define P_2nd_PNP_Cleaning_Mode_Status 17577
#define P_2nd_PNP_Cleaning_Mode_Z_Jog_Speed 17578
#define P_2nd_PNP_Cleaning_Mode_X_Jog_Speed 17579
#define P_2nd_PNP_Cleaning_Mode_T_Jog_Speed 17580
#define P_2nd_PNP_Cleaning_Avoid_2nd_T_Pos 17581
#define P_PNP_Vac_Chk_Mode_Interlock 17582
#define P_Vac_Chk_Test 17583
#define P_Anode_1st_PNP_Vac_Chk_Mode_Blocked 17584
#define P_Cathode_1st_PNP_Vac_Chk_Mode_Blocked 17585
#define P_Anode_2nd_PNP_Vac_Chk_Mode_Blocked 17586
#define P_Cathode_2nd_PNP_Vac_Chk_Mode_Blocked 17587
#define P_SM_Anode_1st_PNP_Vac_Chk_Mode 17588
#define P_SM_Cathode_1st_PNP_Vac_Chk_Mode 17589
#define P_SM_Anode_2nd_PNP_Vac_Chk_Mode 17590
#define P_SM_Cathode_2nd_PNP_Vac_Chk_Mode 17591
#define P_Anode_1st_PNP_Vac_Chk_Execute_Timer 17592
#define P_Cathode_1st_PNP_Vac_Chk_Execute_Timer 17593
#define P_Anode_2nd_PNP_Vac_Chk_Execute_Timer 17594
#define P_Cathode_2nd_PNP_Vac_Chk_Execute_Timer 17595
#define P_Anode_1st_PNP_Vac_Check_Timer 17596
#define P_Cathode_1st_PNP_Vac_Check_Timer 17597
#define P_Anode_2nd_PNP_Vac_Check_Timer 17598
#define P_Cathode_2nd_PNP_Vac_Check_Timer 17599
#define P_Anode_1st_PNP_Vac_Chk_Status 17600
#define P_Cathode_1st_PNP_Vac_Chk_Status 17601
#define P_Anode_2nd_PNP_Vac_Chk_Status 17602
#define P_Cathode_2nd_PNP_Vac_Chk_Status 17603
#define P_Anode_1st_PNP_Vac_Chk_Mode_Stop_Blocked 17604
#define P_Cathode_1st_PNP_Vac_Chk_Mode_Stop_Blocked 17605
#define P_Anode_2nd_PNP_Vac_Chk_Mode_Stop_Blocked 17606
#define P_Cathode_2nd_PNP_Vac_Chk_Mode_Stop_Blocked 17607
#define P_Anode_1st_PnP_Vac_Chk_Mode_RTN 17608
#define P_Cathode_1st_PnP_Vac_Chk_Mode_RTN 17609
#define P_Anode_2nd_PnP_Vac_Chk_Mode_RTN 17610
#define P_Cathode_2nd_PnP_Vac_Chk_Mode_RTN 17611
#define P_PNP_Vac_Chk_Mode_TimeBase_Rtn 17612
#define P_PNP_Vac_Chk_Mode_Timer 17613
#define P_Anode_1st_PNP_Vac_Chk_Mode_Err 17614
#define P_Cathode_1st_PNP_Vac_Chk_Mode_Err 17615
#define P_Anode_2nd_PNP_Vac_Chk_Mode_Err 17616
#define P_Cathode_2nd_PNP_Vac_Chk_Mode_Err 17617
#define P_PNP_Vac_Chk_Mode_BTN_Err 17618
#define P_BTN_CA_1st_PNP_Vac_Chk_Mode 17619
#define P_BTN_AN_1st_PNP_Vac_Chk_Mode 17620
#define P_BTN_CA_2nd_PNP_Vac_Chk_Mode 17621
#define P_BTN_AN_2nd_PNP_Vac_Chk_Mode 17622
#define P_Old_Upper_Sensor 17623
#define P_Edge_Upper_Sensor 17631
#define P_Old_Lower_Sensor 17639
#define P_Edge_Lower_Sensor 17647
#define P_Edge_NP_BTN 17655
#define P_UI_Unit_Status 17657
#define P_Motor_Unit_Status 17667
#define P_Current_Homming_Status_To_PLC 17717
#define P_System_Cascading_ON_Cmd 17767
#define P_System_Cascading_OFF_Cmd 17768
#define P_System_Master_Following_ON_Cmd 17769
#define P_System_Master_Following_OFF_Cmd 17770
#define P_System_CamTable_ON_Cmd 17771
#define P_System_CamTable_OFF_Cmd 17772
#define P_System_Spool_Home_Ready_Pos_Cmd 17773
#define P_System_Cascading_ON_Status 17774
#define P_System_Cascading_OFF_Status 17775
#define P_System_Master_Following_ON_Status 17776
#define P_System_Master_Following_OFF_Status 17777
#define P_System_CamTable_ON_Status 17778
#define P_System_CamTable_OFF_Status 17779
#define P_System_Spool_Home_Ready_Pos_Status 17780
#define P_System_Cascading_ON_State_Machine 17781
#define P_System_Cascading_OFF_State_Machine 17782
#define P_System_Master_Follwing_ON_State_Machine 17783
#define P_System_Master_Follwing_OFF_State_Machine 17784
#define P_System_CamTable_ON_State_Machine 17785
#define P_System_CamTable_OFF_State_Machine 17786
#define P_System_Spool_Home_Ready_Pos_State_Machine 17787
#define P_System_Cascading_ON_Complete_Flag 17788
#define P_System_Cascading_OFF_Complete_Flag 17789
#define P_System_Master_Following_ON_Complete_Flag 17790
#define P_System_Master_Following_OFF_Complete_Flag 17791
#define P_System_CamTable_ON_Complete_Flag 17792
#define P_System_CamTable_OFF_Complete_Flag 17793
#define P_System_Spool_Home_Ready_Pos_Complete_Flag 17794
#define P_Servo_Dancer_Cascading_Off_Timer 17795
#define P_Servo_Dancer_Cascading_Set_Timer 17796
#define P_Dancer_Frist_Home_Ready_Pos_Timer 17797
#define P_Driving_Motor_Use_Flag 17798
#define P_Home_Spool_Unwinding 17799
#define P_OutValue 17800
#define P_Dancer_Out_Slew_Seq 17801
#define P_OutChangeValue 17802
#define P_Rot_OutValue 17803
#define P_OutChangeTime 17804
#define P_AO_Module_Arr 17805
#define P_AO_Range_Set_Value 17810
#define P_Regul_Max_kPa_Value 17815
#define P_Regul_Min_kPa_Value 17816
#define P_Regul_Max_AD 17817
#define P_Regul_Min_AD 17818
#define P_Current_Max_Value 17819
#define P_Current_Min_Value 17820
#define P_Current_Max_AD 17821
#define P_Current_Min_AD 17822
#define P_Sepa_Cal_Inclination 17823
#define P_Regul_Cal_Inclination 17824
#define P_Cutter_Heat_Amp_Data_Bit 17825
#define P_Cut_Heat_Amp_Value 17826
#define P_AI_Cathode_Clamp_Damper_AVG 17827
#define P_AI_Anode_Clamp_Damper_AVG 17828
#define P_Tension_Ready_Pos_Cmd 17829
#define P_Tension_Ready_State_Machine 17830
#define P_Tension_Ready_Pos_Status 17831
#define P_Dancer_Center_Pos 17832
#define P_Upper_Sepa_Cal_Inclination 17833
#define P_Lower_Sepa_Cal_Inclination 17834
#define P_Unwinder_Jogspeed 17835
#define P_Cascading_First_Out 17836
#define P_Dancer_Cur_Vdc 17837
#define P_Dancer_Cur_Torque 17838
#define P_Dancer_Cur_Newton 17839
#define P_Dancer_Cur_Kgf 17840
#define P_Board_IO_Count 17841
#define P_Force_BTN_Address_Clear_Count 17842
#define P_Force_BTN_M_Variable_Save 17843
#define P_Force_BTN_Condition_Count 18227
#define P_Old_Force_BTN_Mode 18228
#define P_Force_BTN_Address_Count 18229
#define P_Force_BTN_GPIO_Address_Count 18230
#define P_Force_BTN_Ecat_Address_Count 18231
#define P_Force_BTN_M_Variable_Save_Count 18232
#define P_Force_BTN_M_Variable_Start_Num 18233
#define P_Force_BTN_Normal_Mode_Status 18234
#define P_Force_BTN_Normal_Mode_State_Machine 18235
#define P_Force_BTN_Normal_Mode_Complete_Flag 18236
#define P_Force_BTN_Force_Mode_Timer 18237
#define P_Force_BTN_Force_Mode_Delay_Time 18238
#define P_Force_BTN_Force_Mode_Status 18239
#define P_Force_BTN_Force_Mode_State_Machine 18240
#define P_Force_BTN_Force_Mode_Complete_Flag 18241
#define P_Mem_Save_Error_Bit 18242
#define P_ABS_Phasing_Data 18243
#define P_ABS_Home_Offset_Data 18248
#define P_Servo_Gain_Save_Command 18253
#define P_Servo_Gain_Load_Command 18254
#define P_Servo_Gain_Save_Flag 18255
#define P_Servo_Gain_Load_Flag 18256
#define P_Servo_Gain_Kp 18257
#define P_Servo_Gain_Kvfb 18287
#define P_Servo_Gain_Kvff 18317
#define P_Servo_Gain_Ki 18347
#define P_Servo_Gain_SwZvInt 18377
#define P_Servo_Gain_Kaff 18407
#define P_Insert_Phase_Flag 18437
#define P_Alarm_Arr 18438
#define P_Alarm_Occur_Flag 18538
#define P_Alarm_Occur_Index_Flag 18539
#define P_Alarm_Wait_Time 18543
#define P_Alarm_Delay_Timer 18544
#define P_Compare_Priority 18545
#define P_Alarm_Report 18546
#define P_Alarm_Num 18547
#define P_Alarm_Index 18548
#define P_First_Alarm_Flag 18549
#define P_Alarm_Log 18550
#define P_First_Alarm_Log 18650
#define P_Servo_Alarm_Check 18680
#define P_Ecat_Servo_Alarm_Check 18681
#define P_Alarm_duplicate_Check_Arr 18682
#define P_Old_Drive_Alarm 19352
#define P_IL_ON_OFF_Flag 19402
#define P_IL_Coord_Robot 19403
#define P_IL_Robot_Bit 19404
#define P_IL_Outer_Status 19405
#define P_Robot_Unit_Serch_Flag 19406
#define P_IL_Home_Chk_Edge 19407
#define P_Limit_PosData 19408
#define P_IL_Sprint 19411
#define P_IL_length 19412
#define P_IL_Strcat 19413
#define P_IL_Popup_Motor 19414
#define P_IL_Motor_Page 19415
#define P_IL_Recipe_Bit 19416
#define P_Interlock_Popup_On_Flag 19417
#define P_Motor_Page 19418
#define M_Motor_BTN_Info 8509
#define P_OP_Side_Ca_PNP_Pos 19419
#define P_OP_Side_An_PNP_Pos 19420
#define P_OP_Side_PMAC_Cur_Mode 19421
#define P_Abs_Trans_Cur_Pos 19422
#define P_Minus_IL_Offset 19423
#define P_Plus_IL_Offset 19424
#define P_2nd_PNP_Arm_Radius 19425
#define P_IL_Enable_Flag 19426
#define P_Plus_Interlock_Bit 19427
#define P_Minus_Interlock_Bit 19428
#define UPPos 19429
#define Unloader_In_StackPos 19430
#define FR_AnodePos 19431
#define FR_CathodePos 19432
#define Before_In_Stack 19433
#define In_Stack 19434
#define P_Collision_Risk_Motor 19435
#define P_Minus_Collision_Risk_Motor 19437
#define P_IL_Clamp_Y 19438
#define P_IL_Clamp_Z 19439
#define P_IL_Clamp_Pos 19440
#define P_IL_Use_FR_Clamp_Pos 19441
#define P_P_IL_Normal_Pos_Offset 19442
#define P_M_IL_Normal_Pos_Offset 19492
#define P_P_IL_Upper_Pos_Offset 19542
#define P_M_IL_Upper_Pos_Offset 19592
#define P_P_IL_Align_Pos_Offset 19642
#define P_M_IL_Align_Pos_Offset 19692
#define P_P_IL_Stack_Pos_Offset 19742
#define P_M_IL_Stack_Pos_Offset 19792
#define P_Ca_1st_Plus_IL_Offset 19842
#define P_Ca_1st_Minus_IL_Offset 19843
#define P_An_1st_Plus_IL_Offset 19844
#define P_An_1st_Minus_IL_Offset 19845
#define P_Ca_2nd_T_Plus_IL_Offset 19846
#define P_Ca_2nd_T_Minus_IL_Offset 19849
#define P_Ca_2nd_Z_Plus_IL_Offset 19852
#define P_Ca_2nd_Z_Minus_IL_Offset 19854
#define P_An_2nd_T_Plus_IL_Offset 19856
#define P_An_2nd_T_Minus_IL_Offset 19859
#define P_An_2nd_Z_Minus_IL_Offset 19862
#define P_Z_Pos_Data 19864
#define P_Clamp_Z_Plus_IL_Offset 19865
#define P_FR_X_Plus_IL_Offset 19866
#define P_FR_X_Minus_IL_Offset 19868
#define P_FR_Z_Minus_IL_Offset 19870
#define P_Ca_NG_PNP_Plus_IL_Offset 19871
#define P_Ca_NG_PNP_Minus_IL_Offset 19875
#define P_An_NG_PNP_Plus_IL_Offset 19879
#define P_An_NG_PNP_Minus_IL_Offset 19883
#define P_Unloader_X_Plus_IL_Offset 19887
#define P_Unloader_X_Minus_IL_Offset 19891
#define P_Unloader_Z_Plus_IL_Offset 19895
#define P_Unloader_Z_Minus_IL_Offset 19898
#define P_IL_In_Offset 19901
#define P_X_PLC_InterLock 19926
#define P_IL_Home_Chk 19927
#define P_IL_Home_Chk_Motor_Num 19928
#define P_IL_Home_Chk_Motor_Update 19948
#define P_IL_Inside_Home_Chk_Complete 19949
#define P_IL_Outside_Home_Chk_Complete 19950
#define P_IL_Motor_Home_Chk_RTN 19951
#define P_IL_Function_Cnt 19952
#define P_IL_Function_Motor_Num 19953
#define P_Jog_Page_Flag 19954
#define P_Anode_1st_TR_Belt_Down_Flag 19955
#define P_Anode_1st_TR_Belt_Pick_Up_Flag 19956
#define P_Anode_1st_TR_Align_Down_Flag 19957
#define P_Anode_2nd_TR_Align_Pick_Up_Flag 19958
#define P_Anode_2nd_TR_Stack_Down_Flag 19959
#define P_Anode_NG_TR_Align_Pick_Up_Flag 19960
#define P_Anode_NG_TR_NG_Place_Down_Flag 19961
#define P_Anode_2nd_TR_Align_Down_Flag 19962
#define P_Anode_1st_TR_Align_Pick_Up_Flag 19963
#define P_Anode_1st_TR_Belt_Down_State_Machine 19964
#define P_Anode_1st_TR_Belt_Down_Status 19965
#define P_Anode_1st_TR_Belt_Pick_Up_State_Machine 19966
#define P_Anode_1st_TR_Belt_Pick_Up_Status 19967
#define P_Anode_1st_TR_Align_Down_State_Machine 19968
#define P_Anode_1st_TR_Align_Down_Status 19969
#define P_Anode_2nd_TR_Align_Pick_Up_State_Machine 19970
#define P_Anode_2nd_TR_Align_Pick_Up_Status 19971
#define P_Anode_2nd_TR_Stack_Down_State_Machine 19972
#define P_Anode_2nd_TR_Stack_Down_Status 19973
#define P_Anode_NG_TR_Align_Pick_Up_State_Machine 19974
#define P_Anode_NG_TR_Align_Pick_Up_Status 19975
#define P_Anode_NG_TR_NG_Place_Down_State_Machine 19976
#define P_Anode_NG_TR_NG_Place_Down_Status 19977
#define P_Anode_2nd_TR_Align_Down_State_Machine 19978
#define P_Anode_2nd_TR_Align_Down_Status 19979
#define P_Anode_1st_TR_Align_Pick_Up_State_Machine 19980
#define P_Anode_1st_TR_Align_Pick_Up_Status 19981
#define P_Cathode_1st_TR_Belt_Down_Flag 19982
#define P_Cathode_1st_TR_Belt_Pick_Up_Flag 19983
#define P_Cathode_1st_TR_Align_Down_Flag 19984
#define P_Cathode_2nd_TR_Align_Pick_Up_Flag 19985
#define P_Cathode_2nd_TR_Stack_Down_Flag 19986
#define P_Cathode_NG_TR_Align_Pick_Up_Flag 19987
#define P_Cathode_NG_TR_NG_Place_Down_Flag 19988
#define P_Cathode_2nd_TR_Align_Down_Flag 19989
#define P_Cathode_1st_TR_Align_Pick_Up_Flag 19990
#define P_Cathode_1st_TR_Belt_Down_State_Machine 19991
#define P_Cathode_1st_TR_Belt_Down_Status 19992
#define P_Cathode_1st_TR_Belt_Pick_Up_State_Machine 19993
#define P_Cathode_1st_TR_Belt_Pick_Up_Status 19994
#define P_Cathode_1st_TR_Align_Down_State_Machine 19995
#define P_Cathode_1st_TR_Align_Down_Status 19996
#define P_Cathode_2nd_TR_Align_Pick_Up_State_Machine 19997
#define P_Cathode_2nd_TR_Align_Pick_Up_Status 19998
#define P_Cathode_2nd_TR_Stack_Down_State_Machine 19999
#define P_Cathode_2nd_TR_Stack_Down_Status 20000
#define P_Cathode_NG_TR_Align_Pick_Up_State_Machine 20001
#define P_Cathode_NG_TR_Align_Pick_Up_Status 20002
#define P_Cathode_NG_TR_NG_Place_Down_State_Machine 20003
#define P_Cathode_NG_TR_NG_Place_Down_Status 20004
#define P_Cathode_2nd_TR_Align_Down_State_Machine 20005
#define P_Cathode_2nd_TR_Align_Down_Status 20006
#define P_Cathode_1st_TR_Align_Pick_Up_State_Machine 20007
#define P_Cathode_1st_TR_Align_Pick_Up_Status 20008
#define P_Old_Anode_Belt_ASCII 20009
#define P_Old_Cathode_Belt_ASCII 20010
#define P_Anode_Belt_ASCII 20011
#define P_Cathode_Belt_ASCII 20012
#define P_Check_Vac_Time 20013
#define P_Send_Anode_NG_Code_To_PLC 20014
#define P_Receive_Anode_NG_Code_From_PLC 20015
#define P_Send_Cathode_NG_Code_To_PLC 20016
#define P_Receive_Cathode_NG_Code_From_PLC 20017
#define P_Current_Cell_Memory_Anode_1P 20018
#define P_Current_Cell_Memory_Anode_AT 20019
#define P_Current_Cell_Memory_Anode_2P 20020
#define P_Current_Cell_Memory_Cathode_1P 20021
#define P_Current_Cell_Memory_Cathode_AT 20022
#define P_Current_Cell_Memory_Cathode_2P 20023
#define P_Current_Cell_Memory_Stack_Table 20024
#define P_Current_Cell_Memory_Cathode_NG_TR 20025
#define P_Current_Cell_Memory_Anode_NG_TR 20026
#define P_BTN_Anode_1st_TR_Buffer_Clear 20027
#define P_BTN_Anode_2nd_TR_Buffer_Clear 20028
#define P_BTN_Anode_Align_Buffer_Clear 20029
#define P_BTN_Anode_NG_TR_Buffer_Clear 20030
#define P_BTN_Cathode_1st_TR_Buffer_Clear 20031
#define P_BTN_Cathode_2nd_TR_Buffer_Clear 20032
#define P_BTN_Cathode_Align_Buffer_Clear 20033
#define P_BTN_Cathode_NG_TR_Buffer_Clear 20034
#define P_Old_BTN_Anode_1st_TR_Buffer_Clear 20035
#define P_Old_BTN_Anode_2nd_TR_Buffer_Clear 20036
#define P_Old_BTN_Anode_Align_Buffer_Clear 20037
#define P_Old_BTN_Anode_NG_TR_Buffer_Clear 20038
#define P_Old_BTN_Cathode_1st_TR_Buffer_Clear 20039
#define P_Old_BTN_Cathode_2nd_TR_Buffer_Clear 20040
#define P_Old_BTN_Cathode_Align_Buffer_Clear 20041
#define P_Old_BTN_Cathode_NG_TR_Buffer_Clear 20042
#define P_Send_Anode_NG_Code_Flag 20043
#define P_Send_Cathode_NG_Code_Flag 20044
#define P_Anode_Vision_NG_To_PLC_Flag 20045
#define P_Cathode_Vision_NG_To_PLC_Flag 20046
#define P_Status_Clear_Sheet_Maint_Check 20047
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
#define P_Single_Run_Start_Flag 20048
#define P_Single_Run_Control_State_Machine 20049
#define P_Single_Run_Control_Status 20050
#define P_Single_Run_Execute_Bit 20051
#define P_User_Dry_Run_Mode 20052
#define P_Single_Run_State_Machine 20053
#define P_Single_Run_Status 20054
#define P_Single_Run_Unit 20055
#define P_Single_Run_Evade_Pos_RTN 20056
#define P_Single_Run_Evade_Pos_Check_RTN 20057
#define P_Single_Run_Pos_Rtn1 20058
#define P_Single_Run_Pos_Rtn2 20059
#define P_Single_Run_Motion_Ready_RTN 20060
#define P_Single_Run_Execution_Interlock_RTN 20061
#define P_Single_Run_Coord_Activate_RTN 20062
#define P_Single_Run_Coord_Activate_Check_RTN 20063
#define P_Single_Run_Select_Run_Mode_RTN 20064
#define P_Single_Run_Execution_Run_RTN 20065
#define P_Single_Run_Motion_Ready_State_Machine 20066
#define P_Coord_1 20067
#define P_Coord_2 20068
#define P_Coord_3 20069
#define P_Coord_4 20070
#define P_Final_Roll_Z_Motion_Flag 20071
#define P_Final_Roll_Z_Motion_State_Machine 20072
#define P_Main_Z_Motion_Flag 20073
#define P_Main_Z_Motion_State_Machine 20074
#define P_Single_Run_Mode_Flag 20075
#define P_Cathode_AT_Motion_Flag 20076
#define P_Cathode_Align_Motion_State_Machine 20077
#define P_Anode_AT_Motion_Flag 20078
#define P_Anode_Align_Motion_State_Machine 20079
#define P_Sheet_Paper_Motion_Flag 20080
#define P_Sheet_Paper_Motion_State_Machine 20081
#define P_Cathode_NG_PNP_T_Motion_Flag 20082
#define P_Cathode_NG_PNP_T_Motion_State_Machine 20083
#define P_Cathode_NG_PNP_Z_Motion_Flag 20084
#define P_Cathode_NG_PNP_Z_Motion_State_Machine 20085
#define P_Anode_NG_PNP_T_Motion_Flag 20086
#define P_Anode_NG_PNP_T_Motion_State_Machine 20087
#define P_Anode_NG_PNP_Z_Motion_Flag 20088
#define P_Anode_NG_PNP_Z_Motion_State_Machine 20089
#define P_1st_UND_X_Motion_Flag 20090
#define P_1st_UND_X_Motion_State_Machine 20091
#define P_1st_UND_Z_Motion_Flag 20092
#define P_1st_UND_Z_Motion_State_Machine 20093
#define P_1st_UND_T_Motion_Flag 20094
#define P_1st_UND_T_Motion_State_Machine 20095
#define P_Cathode_Run_Command_Flag 20096
#define P_Anode_Run_Command_Flag 20097
#define P_NG_PNP_Uint_Motion_Flag 20098
#define P_NG_PNP_Uint_State_Machine 20099
#define P_NG_PNP_Motion_Cnt 20100
#define P_NG_PNP_Motion_arr 20101
#define P_Single_Run_Timer 20111
#define P_Single_Run_Align_Timer 20112
#define P_Single_Run_Align_Timer2 20113
#define P_Single_Run_Finall_Roll_Z_Timer 20114
#define P_Single_RuN_MAIN_Z_Timer 20115
#define P_Single_Run_Sheet_Paper_Timer 20116
#define P_Single_Run_Debug_SM 20117
#define P_Error_Monitoring_Count_1 20118
#define P_Error_Monitoring_Count_2 20119
#define P_Error_Monitoring_Count_3 20120
#define P_Error_Monitoring_Count_4 20121
#define P_Error_Monitoring_Count_5 20122
#define P_Old_Single_Run_Mode_Flag 20123
#define P_Old_Current_Mode 20124
#define P_Single_Run_Timebase_Off_RTN 20125
#define P_Single_Run_Stop_State_Machine 20126
#define P_Single_Run_Stop_Status 20127
#define P_Single_Run_Stop_Timer 20128
#define P_Single_Run_Stop_Init_RTN 20129
#define P_Single_Run_Stop_Btn_Chk 20130
#define P_Single_Run_Stop_Command 20131
#define P_Motor_Ready_Poa_Inpos_200um 20132
#define P_Ecat_Parameter_Write_Flag 20133
#define P_Ecat_Parameter_Read_Flag 20134
#define P_Ecat_Each_Parameter_Write_Flag 20135
#define P_Ecat_Slave_Idx 20136
#define P_Ec_Num 20137
#define P_Ecat_Read_Motor_Num 20138
#define P_Ecat_Write_Motor_Num 20139
#define P_Ecat_Parameter_Write_State_Machine 20140
#define P_Ecat_Parameter_Read_State_Machine 20141
#define P_Ecat_Each_Parameter_Write_State_Machine 20142
#define P_Ecat_Read_MNTR 20143
#define P_Ecat_Write_MNTR 20171
#define P_Ecat_Save_MNTR 20199
#define P_Ecat_Error_MNTR 20215
#define P_Ecat_Read_Error_MNTR 20231
#define P_Ecat_Each_Write_Error_MNTR 20247
#define P_Ecat_Write_Status 20263
#define P_Ecat_Read_Status 20264
#define P_Ecat_Each_Write_Status 20265
#define P_Pn000 20266
#define P_Pn001 20286
#define P_Pn00B 20306
#define P_Pn100 20326
#define P_Pn101 20346
#define P_Pn102 20366
#define P_Pn103 20386
#define P_Pn123 20406
#define P_Pn140 20426
#define P_Pn141 20446
#define P_Pn145 20466
#define P_Pn146 20486
#define P_Pn160 20506
#define P_Pn161 20526
#define P_Pn163 20546
#define P_Pn170 20566
#define P_Pn401 20586
#define P_Pn408 20606
#define P_Pn409 20626
#define P_Pn40A 20646
#define P_Pn40C 20666
#define P_Pn40D 20686
#define P_Pn416 20706
#define P_Pn417 20726
#define P_Pn511 20746
#define P_Pn520 20766
#define P_PnB02_Numerator 20786
#define P_PnB02_Denominator 20806
#define P_Align_Plus_Blow_Test 20826
#define P_System_Setting_Flag 20827
#define P_Ecat_Setting_Flag 20828
#define P_Ecat_Activation_State_Machine 20829
#define P_PLC31_Ecat_Retry_Cnt 20830
#define P_Ecat_Connect_Result 20831
#define P_Ecat_Slave_Error 20832
#define P_PWM_AbsPhasePosOffset_Change_State_Machine 20833
#define P_AbsPhasePosOffset_Change_Complete 20834
#define P_PWM_AbsPhasing_Fail 20835
#define P_PWM_AbsPhasing_Complete 20836
#define P_Whole_Stacking_Tack_Time 20837
#define P_Whole_Stacking_Tack_Time_Check 20838
#define P_Whole_Stacking_Tack_Timer_Check_Flag 20839
#define P_Whole_Stacking_Timer_Shift_Status_Machine 20840
#define P_Whole_Stacking_TackTime_Array0 20841
#define P_Whole_Stacking_TackTime_Array1 20842
#define P_Whole_Stacking_TackTime_Array2 20843
#define P_Whole_Stacking_TackTime_Array3 20844
#define P_Whole_Stacking_TackTime_Array4 20845
#define P_Whole_Stacking_TackTime_Array5 20846
#define P_Whole_Stacking_TackTime_Array6 20847
#define P_Whole_Stacking_TackTime_Array7 20848
#define P_Whole_Stacking_TackTime_Array8 20849
#define P_Whole_Stacking_TackTime_Array9 20850
#define P_Whole_Stacking_TackTime_Array10 20851
#define P_First_Stacking_Start 20852
#define P_Last_Stacking_Complete 20853
#define P_Stacking_Tack_Time 20854
#define P_Stacking_Tack_Time_Check 20855
#define P_Stacking_Tack_Timer_Check_Flag 20856
#define P_Stacking_Timer_Shift_Status_Machine 20857
#define P_Cathode_to_Anode_FR_Tack_Time_Check 20858
#define P_Anode_to_Cathode_FR_Tack_Time_Check 20859
#define P_Cathode_to_Anode_FR_Tack_Time_Start 20860
#define P_Anode_to_Cathode_FR_Tack_Time_Start 20861
#define P_Cathode_to_Anode_FR_Tack_Time_Complete 20862
#define P_Anode_to_Cathode_FR_Tack_Time_Complete 20863
#define P_Cathode_to_Anode_FR_Time 20864
#define P_Anode_to_Cathode_FR_Time 20865
#define P_Cathode_to_Anode_FR_Tack_Timer_Check_Flag 20866
#define P_Anode_to_Cathode_FR_Tack_Timer_Check_Flag 20867
#define P_Anode_Align_Table_Time 20868
#define P_Anode_Align_Table_Tack_Time_Check 20869
#define P_Anode_Align_Table_Tack_Timer_Check_Flag 20870
#define P_Anode_Align_Table_Timer_Shift_Status_Machine 20871
#define P_Anode_Align_Tack_Time_Start 20872
#define P_Anode_Align_Tack_Time_Complete 20873
#define P_Cathode_Align_Table_Time 20874
#define P_Cathode_Align_Table_Tack_Time_Check 20875
#define P_Cathode_Align_Table_Tack_Timer_Check_Flag 20876
#define P_Cathode_Align_Table_Timer_Shift_Status_Machine 20877
#define P_Cathode_Align_Tack_Time_Start 20878
#define P_Cathode_Align_Tack_Time_Complete 20879
#define P_Anode_1th_Tack_Time_Start 20880
#define P_Anode_1th_Tack_Time_Complete 20881
#define P_Anode_1th_Time 20882
#define P_Anode_1th_Tack_Time_Check 20883
#define P_Anode_1th_Tack_Timer_Check_Flag 20884
#define P_Anode_1th_Timer_Shift_Status_Machine 20885
#define P_Cathode_1th_Tack_Time_Start 20886
#define P_Cathode_1th_Tack_Time_Complete 20887
#define P_Cathode_1th_Time 20888
#define P_Cathode_1th_Tack_Time_Check 20889
#define P_Cathode_1th_Tack_Timer_Check_Flag 20890
#define P_Cathode_1th_Timer_Shift_Status_Machine 20891
#define P_Anode_2th_Tack_Time_Start 20892
#define P_Anode_2th_Tack_Time_Complete 20893
#define P_Anode_2th_Time 20894
#define P_Anode_2th_Tack_Time_Check 20895
#define P_Anode_2th_Tack_Timer_Check_Flag 20896
#define P_Anode_2th_Timer_Shift_Status_Machine 20897
#define P_Cathode_2th_Tack_Time_Start 20898
#define P_Cathode_2th_Tack_Time_Complete 20899
#define P_Cathode_2th_Time 20900
#define P_Cathode_2th_Tack_Time_Check 20901
#define P_Cathode_2th_Tack_Timer_Check_Flag 20902
#define P_Cathode_2th_Timer_Shift_Status_Machine 20903
#define P_Anode_1th_NG_Tack_Time_Start 20904
#define P_Anode_1th_NG_Tack_Time_Complete 20905
#define P_Anode_1th_NG_Time 20906
#define P_Anode_1th_NG_Tack_Time_Check 20907
#define P_Anode_1th_NG_Tack_Timer_Check_Flag 20908
#define P_Anode_1th_NG_Timer_Shift_Status_Machine 20909
#define P_Cathode_1th_NG_Tack_Time_Start 20910
#define P_Cathode_1th_NG_Tack_Time_Complete 20911
#define P_Cathode_1th_NG_Time 20912
#define P_Cathode_1th_NG_Tack_Time_Check 20913
#define P_Cathode_1th_NG_Tack_Timer_Check_Flag 20914
#define P_Cathode_1th_NG_Timer_Shift_Status_Machine 20915
#define P_Anode_Clamp_Tack_Time_Start 20916
#define P_Anode_Clamp_Tack_Time_Complete 20917
#define P_Anode_Clamp_Time 20918
#define P_Anode_Clamp_Tack_Time_Check 20919
#define P_Anode_Clamp_Tack_Timer_Check_Flag 20920
#define P_Anode_Clamp_Timer_Shift_Status_Machine 20921
#define P_Cathode_Clamp_Tack_Time_Start 20922
#define P_Cathode_Clamp_Tack_Time_Complete 20923
#define P_Cathode_Clamp_Time 20924
#define P_Cathode_Clamp_Tack_Time_Check 20925
#define P_Cathode_Clamp_Tack_Timer_Check_Flag 20926
#define P_Cathode_Clamp_Timer_Shift_Status_Machine 20927
#define P_Final_Roll_X_Timer_Shift_Status_Machine 20928
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array0 20929
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array1 20930
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array2 20931
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array3 20932
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array4 20933
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array5 20934
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array6 20935
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array7 20936
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array8 20937
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array9 20938
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array10 20939
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array0 20940
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array1 20941
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array2 20942
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array3 20943
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array4 20944
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array5 20945
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array6 20946
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array7 20947
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array8 20948
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array9 20949
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array10 20950
#define P_Pneumatic_Pressure_Unit_Tack_Time_Chk_Timer 20951
#define P_Pneumatic_Pressure_Unit_Tack_Time 20978
#define P_MCC_Anode_Align_NG_Count 21005
#define P_MCC_Cathode_Align_NG_Count 21006
#define P_MCC_Anode_Retry_NG_Count 21007
#define P_MCC_Cathode_Retry_NG_Count 21008
#define P_Discharge_Tact_Time_Arr 21009
#define P_Discharge_Hold_Timer 21021
#define P_Discharge_Hold_Time 21022
#define P_AN_1st_Z_Zero_Angle 21023
#define P_AN_1st_Z_Zero_Length 21024
#define P_Anode_1st_PNP_Z_Crank_Zero_Pos 21025
#define P_Anode_1st_PNP_Z_Crank_real_Move_Pos 21026
#define P_Anode_1st_PNP_Z_Crank_radian 21027
#define P_Anode_1st_PNP_Z_Acos_denominator 21028
#define P_Anode_1st_PNP_Z_Acos_numerator 21029
#define P_Anode_1st_PNP_Z_Crank_Angle 21030
#define P_Anode_1st_PNP_Z_Real_Move_Pos 21031
#define P_Anode_1st_Fwd_Bwd_Rise 21032
#define P_CA_1st_Z_Zero_Angle 21033
#define P_CA_1st_Z_Zero_Length 21034
#define P_Cathode_1st_PNP_Z_Crank_Zero_Pos 21035
#define P_Cathode_1st_PNP_Z_Crank_real_Move_Pos 21036
#define P_Cathode_1st_PNP_Z_Crank_radian 21037
#define P_Cathode_1st_PNP_Z_Acos_denominator 21038
#define P_Cathode_1st_PNP_Z_Acos_numerator 21039
#define P_Cathode_1st_PNP_Z_Crank_Angle 21040
#define P_Cathode_1st_PNP_Z_Real_Move_Pos 21041
#define P_Cathode_1st_Fwd_Bwd_Rise 21042
#define P_AN_2nd_Z_Zero_Angle 21043
#define P_AN_2nd_Z_Zero_Length 21044
#define P_Anode_2nd_PNP_Z_Crank_Zero_Pos 21045
#define P_Anode_2nd_PNP_Z_Crank_real_Move_Pos 21046
#define P_Anode_2nd_PNP_Z_Crank_radian 21047
#define P_Anode_2nd_PNP_Z_Acos_denominator 21048
#define P_Anode_2nd_PNP_Z_Acos_numerator 21049
#define P_Anode_2nd_PNP_Z_Crank_Angle 21050
#define P_Anode_2nd_PNP_Z_Real_Move_Pos 21051
#define P_Anode_2nd_Fwd_Bwd_Rise 21052
#define P_CA_2nd_Z_Zero_Angle 21053
#define P_CA_2nd_Z_Zero_Length 21054
#define P_Cathode_2nd_PNP_Z_Crank_Zero_Pos 21055
#define P_Cathode_2nd_PNP_Z_Crank_real_Move_Pos 21056
#define P_Cathode_2nd_PNP_Z_Crank_radian 21057
#define P_Cathode_2nd_PNP_Z_Acos_denominator 21058
#define P_Cathode_2nd_PNP_Z_Acos_numerator 21059
#define P_Cathode_2nd_PNP_Z_Crank_Angle 21060
#define P_Cathode_2nd_PNP_Z_Real_Move_Pos 21061
#define P_Cathode_2nd_Fwd_Bwd_Rise 21062
#define P_Old_Recipe_Anode_1st_PNP_Z_Ready_Up 21063
#define P_Old_Recipe_Anode_1st_PNP_Z_Belt_Up 21064
#define P_Old_Recipe_Anode_1st_PNP_Z_Belt_Down 21065
#define P_Old_Recipe_Anode_1st_PNP_Z_Align_Up 21066
#define P_Old_Recipe_Anode_1st_PNP_Z_Align_Down 21067
#define P_Old_Recipe_Cathode_1st_PNP_Z_Ready_Up 21068
#define P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Up 21069
#define P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Down 21070
#define P_Old_Recipe_Cathode_1st_PNP_Z_Align_Up 21071
#define P_Old_Recipe_Cathode_1st_PNP_Z_Align_Down 21072
#define P_Old_Recipe_Anode_2nd_PNP_Z_Align_Up 21073
#define P_Old_Recipe_Anode_2nd_PNP_Z_Align_Down 21074
#define P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Up 21075
#define P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Down 21076
#define P_Old_Recipe_Anode_2nd_PNP_Z_Ready_Up 21077
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Up 21078
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Down 21079
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Up 21080
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Down 21081
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Ready_Up 21082
#define P_PLC19_All_Home_Status 21083
#define P_PLC19_All_Home_Module_Status 21084
#define P_PLC19_All_Home_State_Machine 21085
#define P_PLC19_All_Home_Seq_Index 21086
#define P_PLC19_All_Home_Self_Index 21087
#define P_PLC19_All_Home_Set_Mode_Return 21088
#define P_PLC19_All_Home_Timer 21089
#define P_PLC19_All_Home_Tact_Time_Array 21090
#define P_PLC19_All_Home_Tact_Time 21110
#define P_All_Home_Module_Error 21111
#define P_Act_ALL_Home_Time_Out_Time 21112
#define P_Act_ALL_Home_Time_Out 21113
#define P_Act_Hold_Complete_Bit 21153
#define P_Module_Act_Hold_Command_Array 21188
#define P_OLD_Module_Act_Hold_Command_Array 21223
#define P_Module_Act_Hold_State_Machine_Array 21258
#define P_Act_Hold_Old_Time 21293
#define P_Act_Hold_Time_Out_Time 21328
#define P_Act_Hold_Time_Out 21329
#define P_First_PNP_T_Wait_Status 21364
#define P_First_PNP_Z_Wait_Status 21365
#define P_First_PNP_Picker_T_Turn_Status 21366
#define P_First_PNP_T_Wait_To_Belt_Status 21367
#define P_First_PNP_Z_Wait_To_Belt_Status 21368
#define P_First_PNP_T_Align_To_Belt_Status 21369
#define P_First_PNP_Z_Align_To_Belt_Status 21370
#define P_First_PNP_Z_Belt_Down_Status 21371
#define P_First_PNP_Z_Belt_Up_Status 21372
#define P_First_PNP_T_Wait_To_Align_Status 21373
#define P_First_PNP_Z_Wait_To_Align_Status 21374
#define P_First_PNP_T_Belt_To_Align_Status 21375
#define P_First_PNP_Z_Belt_To_Align_Status 21376
#define P_First_PNP_Z_Align_Down_Status 21377
#define P_First_PNP_Z_Align_Up_Status 21378
#define P_First_PNP_Vac_On_Status 21379
#define P_First_PNP_Blow_On_Status 21380
#define P_Second_PNP_T_Align_To_Stack_Status 21381
#define P_Second_PNP_Z_Align_To_Stack_Status 21382
#define P_Second_PNP_T_Stack_To_Align_Status 21383
#define P_Second_PNP_Z_Stack_To_Align_Status 21384
#define P_Second_PNP_Z_Align_Down_Status 21385
#define P_Second_PNP_Z_Align_Up_Status 21386
#define P_Second_PNP_Vac_On_Status 21387
#define P_Second_PNP_Blow_On_Status 21388
#define P_NG_PNP_NG_Bos_Status 21389
#define P_NG_PNP_Align_Status 21390
#define P_NG_PNP_Align_Down_Status 21391
#define P_NG_PNP_Align_Up_Status 21392
#define P_NG_PNP_Vac_On_Status 21393
#define P_NG_PNP_Blow_On_Status 21394
#define P_Hold_1st_PNP_Position 21395
#define P_Hold_Module_Error 21396
#define P_Act_Execute_Complete_Bit 21397
#define P_Module_Act_Execute_Command_Array 21409
#define P_OLD_Module_Act_Execute_Command_Array 21421
#define P_Module_Act_Execute_State_Machine_Array 21433
#define P_Act_Execute_Old_Time 21445
#define P_Act_Execute_Time_Out_Time 21457
#define P_Act_Execute_Time_Out 21458
#define P_Execute_Module_Error 21470
#define P_Execute_First_Sepa_Total_Tact_Time 21471
#define P_Current_JR_Thickness_mm 21472
#define P_Current_Jelly_Roll_Thinckness_mm_Send_Enable_Flag 21473
#define P_Stack_Table_NG_Flag 21474
#define P_Suspend_Discharge_Cell_Out_Restart 21475
#define P_Jelly_Roll_OK_Count 21476
#define P_Jelly_Roll_NG_Count 21477
#define P_Jelly_Roll_Total_Count 21478
#define P_Jelly_Roll_ID 21479
#define P_Jelly_Roll_Prod_Count 21480
#define P_Jelly_Roll_Recipe_Count 21481
#define P_Current_Cell_Memory_Jelly_Roll 21482
#define P_Real_Stacking_Host_ID_Count 21483
#define P_VISION_PLC10_Anode_Align_Start 21484
#define P_VISION_PLC10_Cathode_Align_Start 21485
#define P_Stack_Table_NG_Count 21486
#define P_Stack_PMAC_NG_Code 21487
#define P_Stack_Vision_NG_Code_IN_Timer 21488
#define P_Discharge_Waiting_Flag 21489
#define P_ARC_Flag 21490
#define P_Discharge_Queue_Complete_Flag 21491
#define P_Shared_Discharge_Cmd 21492
#define P_Shared_Discharge_State_Machine 21493
#define P_Discharge_Dont_Stop_Point_Flag 21494
#define P_1st_Discharge_State 21495
#define P_Discharge_DIO_Trg 21496
#define P_Data_Parsing_Flag 21497
#define P_Memory_Discharge_Data 21498
#define P_Prev_Sepa_Stack_Completed_Flag 21499
#define P_First_Sepa_Mode_Status 21500
#define P_First_Sepa_Mode_Flag 21501
#define P_Discharge_Unloader_Handover_Timer 21502
#define P_Discharge_Unloader_Handover_Time 21503
#define P_B_1st_to_3rd_Discharge_cmd 21504
#define P_B_1st_to_3rd_Discharge_State_Machine 21505
#define P_3rd_Discharge_Status 21506
#define P_Buffer_Mode_Module_Status_Sequence 21507
#define P_EXECUTE_Status_Prod_Sequence 21537
#define P_Execute_First_Sepa_Mode_Cmd 21567
#define P_Execute_First_Sepa_Mode_Status 21568
#define P_Execute_First_Sepa_Mode_Module_Status 21569
#define P_Execute_First_Sepa_Mode_State_Machine 21570
#define P_Execute_First_Sepa_Mode_Seq_Index 21571
#define P_Execute_First_Sepa_Mode_Self_Index 21572
#define P_Execute_First_Sepa_Mode_Debug_Edge 21573
#define P_Buffer_Seqdata_Execute_First_Sepa_Mode_Array 21574
#define P_Execute_First_Sepa_Mode_Timer 21604
#define P_Execute_First_Sepa_Mode_Tact_Time_Array 21605
#define P_Execute_First_Sepa_Mode_Tact_Time 21625
#define P_Execute_1st_Sepa_Status 21626
#define P_Suspend_Discharge_Cmd 21627
#define P_Suspend_Discharge_Status 21628
#define P_Suspend_Discharge_State_Machine 21629
#define P_Suspend_Discharge_Seq_Index 21630
#define P_Suspend_Discharge_Self_Index 21631
#define P_Discharge_Seq_InterLock_Delay_Time 21632
#define P_Discharge_Seq_InterLock_Flag 21662
#define P_Buffer_Seqdata_Discharge_Array 21692
#define P_Suspend_Discharge_Timer 21722
#define P_Suspend_Discharge_Tact_Time_Array 21723
#define P_Suspend_Discharge_Tact_Time 21743
#define P_Suspend_Discharge_1st_Unloader_JR_Grip 21744
#define P_Suspend_ARC_Cmd 21745
#define P_Suspend_ARC_Status 21746
#define P_Suspend_ARC_State_Machine 21747
#define P_Suspend_ARC_Seq_Index 21748
#define P_Suspend_ARC_Self_Index 21749
#define P_Suspend_ARC_Manual_Occur_Flag 21750
#define P_ARC_Seq_InterLock_Delay_Time 21751
#define P_ARC_Seq_InterLock_Flag 21781
#define P_Buffer_Seqdata_ARC_Array 21811
#define P_Suspend_ARC_Timer 21841
#define P_Suspend_ARC_Tact_Time_Array 21842
#define P_Suspend_ARC_Tact_Time 21862
#define P_Suspend_Anode_1TR_Cell_Supply_Cmd 21863
#define P_Suspend_Anode_1TR_Cell_Supply_Status 21864
#define P_Suspend_Anode_1TR_Cell_Supply_State_Machine 21865
#define P_Suspend_Anode_1TR_Cell_Supply_Seq_Index 21866
#define P_Suspend_Anode_1TR_Cell_Supply_Self_Index 21867
#define P_Suspend_Anode_1TR_Cell_Supply_Module_Status 21868
#define P_Anode_1TR_Cell_Supply_Seq_InterLock_Delay_Time 21869
#define P_Anode_1TR_Cell_Supply_Seq_InterLock_Flag 21899
#define P_Buffer_Seqdata_Anode_1TR_Cell_Supply_Array 21929
#define P_Suspend_Anode_1TR_Cell_Supply_Timer 21959
#define P_Suspend_Anode_1TR_Cell_Supply_Tact_Time_Array 21960
#define P_Suspend_Anode_1TR_Cell_Supply_Tact_Time 21980
#define P_Hold_Exist_Insp_Cmd 21981
#define P_Hold_Exist_Insp_Status 21982
#define P_Hold_Exist_Insp_Module_Status 21983
#define P_Hold_Exist_Insp_State_Machine 21984
#define P_Hold_Exist_Insp_Seq_Index 21985
#define P_Hold_Exist_Insp_Self_Index 21986
#define P_Hold_Exist_Insp_Debug_Edge 21987
#define P_Buffer_Seqdata_Hold_Exist_Insp_Array 21988
#define P_Hold_Exist_Insp_Timer 22018
#define P_Hold_Exist_Insp_Tact_Time_Array 22019
#define P_Hold_Exist_Insp_Tact_Time 22039
#define P_Hold_Remove_NG_PNP_Cmd 22040
#define P_Hold_Remove_NG_PNP_Status 22041
#define P_Hold_Remove_NG_PNP_Module_Status 22042
#define P_Hold_Remove_NG_PNP_State_Machine 22043
#define P_Hold_Remove_NG_PNP_Seq_Index 22044
#define P_Hold_Remove_NG_PNP_Self_Index 22045
#define P_Hold_Remove_NG_PNP_Debug_Edge 22046
#define P_Buffer_Seqdata_Hold_Remove_NG_PNP_Array 22047
#define P_Hold_Remove_NG_PNP_Timer 22077
#define P_Hold_Remove_NG_PNP_Tact_Time_Array 22078
#define P_Hold_Remove_NG_PNP_Tact_Time 22098
#define P_PLC01_Hold_Remove_NG_PNP_Sub_Flag 22099
#define P_PLC01_Hold_Remove_NG_PNP_Sub_State_Machine 22100
#define P_PLC01_Hold_Remove_NG_PNP_Sub_Status 22101
#define P_Hold_Remove_Align_Cmd 22102
#define P_Hold_Remove_Align_Status 22103
#define P_Hold_Remove_Align_Module_Status 22104
#define P_Hold_Remove_Align_State_Machine 22105
#define P_Hold_Remove_Align_Seq_Index 22106
#define P_Hold_Remove_Align_Self_Index 22107
#define P_Hold_Remove_Align_Debug_Edge 22108
#define P_Buffer_Seqdata_Hold_Remove_Align_Array 22109
#define P_Hold_Remove_Align_Timer 22139
#define P_Hold_Remove_Align_Tact_Time_Array 22140
#define P_Hold_Remove_Align_Tact_Time 22160
#define P_PLC01_Hold_Remove_Align_Sub_Flag 22161
#define P_PLC01_Hold_Remove_Align_Sub_State_Machine 22162
#define P_PLC01_Hold_Remove_Align_Sub_Status 22163
#define P_Hold_Remove_2TR_Cmd 22164
#define P_Hold_Remove_2TR_Status 22165
#define P_Hold_Remove_2TR_Module_Status 22166
#define P_Hold_Remove_2TR_State_Machine 22167
#define P_Hold_Remove_2TR_Seq_Index 22168
#define P_Hold_Remove_2TR_Self_Index 22169
#define P_Hold_Remove_2TR_Debug_Edge 22170
#define P_Buffer_Seqdata_Hold_Remove_2TR_Array 22171
#define P_Hold_Remove_2TR_Timer 22201
#define P_Hold_Remove_2TR_Tact_Time_Array 22202
#define P_Hold_Remove_2TR_Tact_Time 22222
#define P_Hold_Supply_1TR_Cmd 22223
#define P_Hold_Supply_1TR_Status 22224
#define P_Hold_Supply_1TR_Module_Status 22225
#define P_Hold_Supply_1TR_State_Machine 22226
#define P_Hold_Supply_1TR_Seq_Index 22227
#define P_Hold_Supply_1TR_Self_Index 22228
#define P_Hold_Supply_1TR_Debug_Edge 22229
#define P_Buffer_Seqdata_Hold_Supply_1TR_Array 22230
#define P_Hold_Supply_1TR_Timer 22260
#define P_Hold_Supply_1TR_Tact_Time_Array 22261
#define P_Hold_Supply_1TR_Tact_Time 22281
#define P_PLC01_Hold_Supply_1TR_Memory_RTN 22282
#define P_PLC01_Hold_Supply_1TR_Judge_Flag 22283
#define P_PLC01_Hold_Supply_1TR_Judge_State_Machine 22284
#define P_PLC01_Hold_Supply_1TR_Judge_Status 22285
#define P_Plate_1TR_Supply_Module_Judge_Bit 22286
#define P_Hold_Supply_Align_Cmd 22287
#define P_Hold_Supply_Align_Status 22288
#define P_Hold_Supply_Align_Module_Status 22289
#define P_Hold_Supply_Align_State_Machine 22290
#define P_Hold_Supply_Align_Seq_Index 22291
#define P_Hold_Supply_Align_Self_Index 22292
#define P_Hold_Supply_Align_Debug_Edge 22293
#define P_Buffer_Seqdata_Hold_Supply_Align_Array 22294
#define P_Hold_Supply_Align_Timer 22324
#define P_Hold_Supply_Align_Tact_Time_Array 22325
#define P_Hold_Supply_Align_Tact_Time 22345
#define P_Hold_Supply_2TR_Cmd 22346
#define P_Hold_Supply_2TR_Status 22347
#define P_Hold_Supply_2TR_Module_Status 22348
#define P_Hold_Supply_2TR_State_Machine 22349
#define P_Hold_Supply_2TR_Seq_Index 22350
#define P_Hold_Supply_2TR_Self_Index 22351
#define P_Hold_Supply_2TR_Debug_Edge 22352
#define P_Buffer_Seqdata_Hold_Supply_2TR_Array 22353
#define P_Hold_Supply_2TR_Timer 22383
#define P_Hold_Supply_2TR_Tact_Time_Array 22384
#define P_Hold_Supply_2TR_Tact_Time 22404
#define P_Hold_Semi_Run_Pos_Move_Cmd 22405
#define P_Hold_Semi_Run_Pos_Move_Status 22406
#define P_Hold_Semi_Run_Pos_Move_Module_Status 22407
#define P_Hold_Semi_Run_Pos_Move_State_Machine 22408
#define P_Hold_Semi_Run_Pos_Move_Seq_Index 22409
#define P_Hold_Semi_Run_Pos_Move_Self_Index 22410
#define P_Hold_Semi_Run_Pos_Move_Debug_Edge 22411
#define P_Buffer_Seqdata_Hold_Semi_Run_Pos_Move_Array 22412
#define P_Hold_Semi_Run_Pos_Move_Timer 22442
#define P_Hold_Semi_Run_Pos_Move_Tact_Time_Array 22443
#define P_Hold_Semi_Run_Pos_Move_Tact_Time 22463
#define P_Act_Complete_Bit 22464
#define P_Act_Old_Time 22530
#define P_Act_Delay_Time 22596
#define P_Act_Suspend_Time_Out_Time 22662
#define P_Act_Time_Out 22663
#define P_Test_Sungmin_Flag 22729
#define P_Discharge_Possibility_Bit 22730
#define P_HOLD_Exist_Possibility_Bit 22796
#define P_HOLD_NG_Remove_Possibility_Bit 22862
#define P_HOLD_Align_Remove_Possibility_Bit 22928
#define P_HOLD_2TR_Remove_Possibility_Bit 22994
#define P_HOLD_1TR_Supply_Possibility_Bit 23060
#define P_HOLD_Align_Supply_Possibility_Bit 23126
#define P_HOLD_2TR_Supply_Possibility_Bit 23192
#define P_HOLD_Semi_Run_Pos_Possibility_Bit 23258
#define P_Module_Act_Command_Array 23324
#define P_OLD_Module_Act_Command_Array 23390
#define P_Module_Act_State_Machine_Array 23456
#define P_Module_Act_State_Machine_Error_Array 23522
#define P_Suspend_Discharge_Module_Status 23588
#define P_Suspend_Discharge_To_Execute_Flag 23589
#define P_Suspend_Discharge_Complete_Flag 23590
#define P_First_Unloader_Stack_Up_Status 23591
#define P_First_Unloader_Stack_FWD_Status 23592
#define P_First_Unloader_Grip_Cell_Status 23593
#define P_First_Unloader_Stack_BWD_Wait_Status 23594
#define P_First_Unloader_Stack_BWD_Status 23595
#define P_First_Unloader_Stack_Down_Status 23596
#define P_First_Unloader_Avoid_Status 23597
#define P_First_Unloader_Turn_Status 23598
#define P_First_Unloader_Handover_Status 23599
#define P_Cathode_Clamp_OFF_Status 23600
#define P_Final_Roll_Discharge_Status 23601
#define P_Final_Roll_Stack_Pos_Status 23602
#define P_Final_Roll_Stack_Up_Pos_Status 23603
#define P_Main_Z_Init_Pos_Status 23604
#define P_Sheet_Paper_BWD_Status 23605
#define P_Discharge_Vision_DIO_RTN 23606
#define P_Discharge_Sub_RTN 23607
#define P_Discharge_NG_Code_Report_RTN 23608
#define P_Individual_RTN 23609
#define P_Suspend_Discharge_Last_Run_Bit 23610
#define P_Suspend_Discharge_JR_Result_RTN 23611
#define P_ARC_Buffer_Jog_Speed 23612
#define P_Selected_Spool_Number 23613
#define P_ARC_Home_Check_RTN 23614
#define P_Suspend_ARC_Module_Status 23615
#define P_Not_Selected_Spool_Radius 23616
#define P_Not_Selected_Spool_Circumference 23617
#define P_Sensor_To_Sepa_Curr_Distance_mm 23618
#define P_Passive_D_One_Degree_AD_Value 23643
#define P_After_ARC_Rotate_Distance 23644
#define P_Stack_Vision_NG_Code_Time_Over 23645
#define P_Suspend_Discharge_Resume_Flag 23646
#define P_Suspend_Discharge_Resume_Complete 23647
#define P_Suspend_Discharge_Pause_Flag 23648
#define P_Suspend_Monitor_ 23649
#define P_Flag_Stack_Work_Host_ID 23659
#define P_First_Sepa_Stack_Align_OK_PMAC_Flag 23660
#define P_Sepa_Run_Completed_Status_Machine 23661
#define P_Discharge_Debug_Edge 23662
#define P_Suspend_Discharge_Debug_Address 23663
#define P_Suspend_Discharge_Debug_Value 23668
#define P_Discharge_Sepa_Cutter_Time_Out_State_Machine 23673
#define P_Old_Suspend_Discharge_Seq_Index 23674
#define P_Discharge_Debug_Index_1 23675
#define P_Discharge_Debug_Index_2 23676
#define P_Discharge_Debug_Index_3 23677
#define P_Discharge_Debug_Index_4 23678
#define P_ARC_Debug_Edge 23679
#define P_Suspend_ARC_Debug_Address 23680
#define P_Suspend_ARC_Debug_Value 23685
#define P_Old_Suspend_ARC_Seq_Index 23690
#define P_ARC_Debug_Index_1 23691
#define P_ARC_Debug_Index_2 23692
#define P_ARC_Debug_Index_3 23693
#define P_ARC_Debug_Index_4 23694
#define P_ARC_Ready_Flag 23695
#define P_Suspend_Cutter_Heating_Time 23697
#define P_Suspend_Cutter_Heating_Timer 23698
#define P_An_1TR_Supply_Debug_Edge 23699
#define P_Suspend_An_1TR_Supply_Debug_Address 23700
#define P_Suspend_An_1TR_Supply_Debug_Value 23705
#define P_Old_Suspend_An_1TR_Supply_Seq_Index 23710
#define P_An_1TR_Supply_Debug_Index_1 23711
#define P_An_1TR_Supply_Debug_Index_2 23712
#define P_An_1TR_Supply_Debug_Index_3 23713
#define P_An_1TR_Supply_Debug_Index_4 23714
#define P_Suspend_Supply_Index 23715
#define P_Suspend_Supply_Index_2nd 23716
#define P_Anode_Suspend_Supply_Complete 23717
#define P_Suspend_Supply_Pause_Flag 23725
#define P_Suspend_Supply_Resume_Flag 23726
#define P_Supply_Module_Status 23727
#define P_Suspend_Anode_1TR_Supply_Complete_Flag 23728
#define P_Suspend_Discharge_Module_Error 23729
#define P_Suspend_ARC_Module_Error 23730
#define P_Suspend_1st_Supply_Error 23731
#define P_Discharge_Seq_Data 23732
#define P_Suspend_Discharging_Popup_Flag 23733
#define P_Suspend_Discharge_FR_Unclamp_Error_Popup_Flag 23734
#define P_Suspend_Discharge_Cathode_Align_Retry_Cal_Error_Popup_Flag 23735
#define P_Suspend_Discharge_Anode_Align_Retry_Cal_Error_Popup_Flag 23736
#define P_Suspend_Discharge_FR_Discharge_Pos_Error_Popup_Flag 23737
#define P_Suspend_Discharge_1st_Unloader_Grip_OFF_Error_Popup_Flag 23738
#define P_Suspend_Discharge_1st_Unloader_Up_Error_Popup_Flag 23739
#define P_Suspend_Discharge_1st_Unloader_FWD_Error_Popup_Flag 23740
#define P_Suspend_Discharge_FR_Clamp_Error_Popup_Flag 23741
#define P_Suspend_Discharge_Sepa_Cutter_Heating_Error_Popup_Flag 23742
#define P_Suspend_Discharge_1st_Unloader_Grip_Cell_Pos_Error_Popup_Flag 23743
#define P_Suspend_Discharge_1st_Unloader_Grip_ON_Error_Popup_Flag 23744
#define P_Suspend_Discharge_Sheet_Paper_BWD_Error_Popup_Flag 23745
#define P_Suspend_Discharge_Cathode_Clamp_OFF_Error_Popup_Flag 23746
#define P_Suspend_Discharge_Sepa_Cutter_FWD_Error_Popup_Flag 23747
#define P_Suspend_Discharge_Sheet_Paper_Vacuum_ON_Error_Popup_Flag 23748
#define P_Suspend_Discharge_Sepa_Cutter_BWD_Error_Popup_Flag 23749
#define P_Suspend_Discharge_1st_Unloader_BWD_Wait_Pos_Error_Popup_Flag 23750
#define P_Suspend_Discharge_1st_Unloader_BWD_Error_Popup_Flag 23751
#define P_Suspend_Discharge_1st_Unloader_Stack_Down_Error_Popup_Flag 23752
#define P_Suspend_Discharge_FR_Stack_Pos_Error_Popup_Flag 23753
#define P_Suspend_Discharge_After_Action_Init_Error_Popup_Flag 23754
#define P_Suspend_Discharge_1st_Unloader_Avoid_Pos_Error_Popup_Flag 23755
#define P_Suspend_Discharge_1st_2nd_Unloader_Handover_Chk_Error_Popup_Flag 23756
#define P_Suspend_Discharge_1st_Unloader_Handover_Pos_Error_Popup_Flag 23757
#define P_Suspend_Discharge_2nd_3rd_Unloader_Grip_Request_Error_Popup_Flag 23758
#define P_Suspend_Discharge_1st_Unloader_Wait_Pos_Error_Popup_Flag 23759
#define P_Suspend_ARC_Manual_ARC_Active_Popup_Flag 23760
#define P_Suspend_ARC_Auto_ARC_Active_Popup_Flag 23761
#define P_Suspend_ARC_Pre_Act_Popup_Flag 23762
#define P_Suspend_ARC_Dancer_Close_Popup_Flag 23763
#define P_Suspend_ARC_Use_Plate_FWD_Popup_Flag 23764
#define P_Suspend_ARC_Replace_Plate_Blow_ON_Popup_Flag 23765
#define P_Suspend_ARC_Use_Plate_Clamp_Popup_Flag 23766
#define P_Suspend_ARC_Use_Plate_Cutter_FWD_Popup_Flag 23767
#define P_Suspend_ARC_Use_Plate_Cutter_BWD_Popup_Flag 23768
#define P_Suspend_ARC_Use_Plate_Unclamp_Popup_Flag 23769
#define P_Suspend_ARC_Use_Plate_BWD_Popup_Flag 23770
#define P_Suspend_ARC_Replace_Plate_Blow_OFF_Popup_Flag 23771
#define P_Suspend_ARC_Dancer_Open_Popup_Flag 23772
#define P_Suspend_ARC_Spool_Change_Popup_Flag 23773
#define P_Suspend_ARC_Post_Act_Popup_Flag 23774
#define P_Suspend_ARC_Previous_Spool_Remain_Winding_Popup_Flag 23775
#define P_Suspend_Discharge_First_Address 23776
#define P_Suspend_ARC_First_Address 23777
#define P_Status_Stop_Ready_Pos_Move 23778
#define P_Cycle_Stop_Stauts 23779
#define P_Cycle_Stop_Status_Machine 23780
#define P_Cycle_Stop_Flag 23781
#define P_Speed_Origin_rtn 23782
#define P_Speed_rtn 23783
#define P_NG_PNP_Z_Move_rtn 23784
#define P_NG_PNP_Z_Move_Check_rtn 23785
#define P_NG_PNP_T_Move_rtn 23786
#define P_NG_PNP_T_Move_Check_rtn 23787
#define P_2nd_Z_Move_rtn 23788
#define P_2nd_Z_Move_Check_rtn 23789
#define P_2nd_T_Move_rtn 23790
#define P_2nd_T_Move_Check_rtn 23791
#define P_Stack_Judgement_Memory 23792
#define P_Stop_Cycle_Stop_Move_Status 23793
#define P_STOP_Initial_Process_Status 23794
#define P_Stopping_CycleStop_Init_Flag 23795
#define P_Sepa_Timing 23796
#define P_Old_Trigger_PLC0 23797
#define P_Mode_Command 23798
#define P_Current_Mode 23799
#define P_MOde_Num 23800
#define P_Command_Depth 23805
#define P_In_Position 23810
#define P_Last_Cycle_Command 23815
#define P_Mode_Command_Buffer 23820
#define P_Mode_Command_Wait_Count 23821
#define P_Old_Mode_Command 23822
#define P_Slave1_Anode_Run_Motion_Array 23823
#define P_Slave2_Anode_Run_Motion_Array 23923
#define P_Slave3_Anode_Run_Motion_Array 24023
#define P_Slave4_Anode_Run_Motion_Array 24123
#define P_Slave5_Anode_Run_Motion_Array 24223
#define P_Slave6_Anode_Run_Motion_Array 24323
#define P_Slave7_Anode_Run_Motion_Array 24423
#define P_Slave8_Anode_Run_Motion_Array 24523
#define P_Slave9_Anode_Run_Motion_Array 24623
#define P_Slave10_Anode_Run_Motion_Array 24723
#define P_Slave15_Anode_Run_Motion_Array 24823
#define P_Slave16_Anode_Run_Motion_Array 24923
#define P_Slave17_Anode_Run_Motion_Array 25023
#define P_Slave18_Anode_Run_Motion_Array 25123
#define P_Slave19_Anode_Run_Motion_Array 25223
#define P_Slave1_Cathode_Run_Motion_Array 25323
#define P_Slave2_Cathode_Run_Motion_Array 25423
#define P_Slave3_Cathode_Run_Motion_Array 25523
#define P_Slave4_Cathode_Run_Motion_Array 25623
#define P_Slave5_Cathode_Run_Motion_Array 25723
#define P_Slave15_Cathode_Run_Motion_Array 25823
#define P_Slave6_Cathode_Run_Motion_Array 25923
#define P_Slave7_Cathode_Run_Motion_Array 26023
#define P_Slave8_Cathode_Run_Motion_Array 26123
#define P_Slave9_Cathode_Run_Motion_Array 26223
#define P_Slave10_Cathode_Run_Motion_Array 26323
#define P_Slave16_Cathode_Run_Motion_Array 26423
#define P_Slave17_Cathode_Run_Motion_Array 26523
#define P_Slave18_Cathode_Run_Motion_Array 26623
#define P_Slave19_Cathode_Run_Motion_Array 26723
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
#define P_Anode_NG_Unit_Status 26823
#define P_Cathode_NG_Unit_Status 26824
#define P_ParsingRtn 26825
#define P_CurPosData 26826
#define P_Hold_MNTR_Supply_1st 26827
#define P_TimeOutNumb 26828
#define P_PosRtn 26829
#define P_MotionRtn 26830
#define P_CmdData 26831
#define P_Interval 26832
#define P_Cont_Ret 26833
#define P_Cur_Idx 26834
#define P_NextID 26835
#define P_Cur_Size 26836
#define P_Hold_Exist_Insp 26837
#define P_Hold_Remove_NG_PNP 26838
#define P_Hold_Remove_Align 26839
#define P_Hold_Remove_2TR 26840
#define P_Hold_Supply_1TR 26841
#define P_Hold_Supply_Align 26842
#define P_Hold_Supply_2TR 26843
#define P_Hold_Semi_Run 26844
#define P_Hold_NG_PNP_Remove 180
#define P_Hold_Remove_2nd 182
#define P_Hold_Supply_1st 183
#define P_Hold_Supply_2nd 185
#define P_Hold_Data_process 186
#define P_Hold_Semi_Run_Enable_Pos 187
#define P_Hold_Existence_Insp 188
#define P_Hold_1st_Belt_Move 189
#define P_Hold_Motion 190
#define P_Hold_Data_process_State_Machine 26845
#define P_Hold_Align_Remove_State_Machine 26846
#define P_Hold_2nd_Remove_State_Machine 26847
#define P_Hold_Supply_1st_State_Machine 26848
#define P_Hold_Supply_2nd_State_Machine 26849
#define P_Hold_Existence_Insp_State_Machine 26850
#define P_Hold_NG_PNP_Remove_State_Machine 26851
#define P_Hold_Data_Process_Complete 26852
#define P_Hold_Semi_Run_Enable_Pos_State_Machine 26853
#define P_HOLD_Existence_Insp_Queue_State_Machine 26854
#define P_Hold_Stop_Existence_Insp_STEP 26855
#define P_SubMaster_Status_Err 26856
#define P_Data_Process_Rtn 26857
#define P_Hold_Set_Trigger 26858
#define P_Hold_Get_Trigger 26859
#define P_Anode_2nd_Data 26860
#define P_Anode_Align_Data 26861
#define P_Hold_Remove_Step 26862
#define P_HList_Head_Idx 26863
#define P_Hold_Next_ID 26864
#define P_HCmd_List 26865
#define P_Hold_Data_Value 26885
#define P_Comb_Bitwise 26886
#define P_Target_Cmd 26887
#define P_Temp_Bit 26888
#define P_Get_ErrorCode 26889
#define P_Rtn_Code 26890
#define P_Complete_Hold_Bit 26891
#define P_HoldMtion_Flag 26892
#define P_Ret_BitWise 26893
#define P_NotEnough_GetSpace 26894
#define P_NotEnough_SetSpace 26895
#define P_Check_SetSpace 26896
#define P_Hold_Get_Data 26897
#define P_Err_NextID_Flag 26898
#define P_Elec_Bit 26899
#define P_MotionData 26900
#define P_DataList 26901
#define P_Hold_Data_Err 26906
#define P_Cur_PosX1 26916
#define P_Cur_PosZ1 26917
#define P_Cur_PosX2 26918
#define P_Cur_PosZ2 26919
#define P_Dest_PosX 26920
#define P_Dest_PosZ 26921
#define P_FailToParse 26922
#define P_CurTrigger 26923
#define P_TimeOutTrigger 26924
#define P_CalcTime 26925
#define P_Cycle_Count 26926
#define P_MotionTimeOutFlag 26927
#define P_Set_Data 26928
#define P_Rtn 26929
#define P_CurPosTestBit 26930
#define P_Hold_Anode_Pause_CHK 26931
#define P_Hold_Cathode_Pause_CHK 26932
#define P_Surface_Complete_To_Hold 26933
#define P_Hold_Motion_Arr 26934
#define P_Hold_Pause_Trg 26954
#define P_From_Staring_Flag 26955
#define P_Hold_Existence_Insp_Enqueue_Flag 26956
#define P_Hold_Rtn 26957
#define P_Debug_Existence_Insp_STEP 26958
#define P_Hold_Align_Sheet_CHK 26959
#define P_Hold_Cathode_Exception_Empty_Flag 26960
#define P_Hold_Anode_Exception_Empty_Flag 26961
#define P_HOLD_Hold_Process_State_Machine 26962
#define P_Hold_Stop_Sheet_Process_STEP 26963
#define P_Hold_Debug_Sheet_Process_STEP 26964
#define P_Hold_Stop_Point 26965
#define P_Hold_CHK 26966
#define P_Hold_Test 26967
#define P_Anode_1st_Motion_Complete 26968
#define P_Anode_2nd_Motion_Complete 26969
#define P_Anode_NG_PNP_Motion_Complete 26970
#define P_Cathode_1st_Motion_Complete 26971
#define P_Cathode_2nd_Motion_Complete 26972
#define P_Cathode_NG_PNP_Motion_Complete 26973
#define P_Anode_1st_Picker_Motion_Complete 26974
#define P_Cathode_1st_Picker_Motion_Complete 26975
#define P_individual_return 26976
#define P_individual_return2 26977
#define P_HoldCurPosBit1 26978
#define P_HoldCurPosBit2 26979
#define P_Parsing_Status 26980
#define P_Sel_Obj 26981
#define P_Sel_Elec 26982
#define P_Error 26983
#define P_Vision_FirstSepa_Complete 26984
#define P_NG_PNP_Turn_TM 26985
#define P_NG_PNP_Turn_TS 26986
#define P_NG_PNP_Turn_TA 26987
#define P_NG_PNP_Up_TM 26988
#define P_NG_PNP_Up_TS 26989
#define P_NG_PNP_Up_TA 26990
#define P_NG_PNP_Down_TM 26991
#define P_NG_PNP_Down_TS 26992
#define P_NG_PNP_Down_TA 26993
#define P_NG_PNP_Vac_Time 26994
#define P_NG_PNP_Blow_Time 26995
#define P_Slow_NG_Mode_Btn 26996
#define P_HOLD_Memory_Tower_Offset 26997
#define P_Hold_Pause_Use 26998
#define P_Hold_Err_MNTR 26999
#define P_Hold_Err_Data_Save 27003
#define P_Hold_Err_Action_Data_Save 27011
#define P_Hold_Motion_Err_Chk 27019
#define P_Hold_Memory_Tower_Err_Pos 27020
#define P_Hold_Motion_TimeOut 27035
#define P_Hold_Data_OK 27036
#define P_VISION_TRG_PLC4_AnodeSurface_Ins_Shoot 27037
#define P_VISION_TRG_PLC4_CathodeSurface_Ins_Shoot 27038
#define P_Memory_Tower_Test 27039
#define P_Temp_Run_Mode 27040
#define P_Data_Idx 27041
#define P_Get_Data_Idx 27042
#define P_HOLD_Data_Err_Queue 27043
#define P_HOLD_Data_Err_State_Machine 27044
#define P_HOLD_Err_Set_Data 27045
#define P_HOLD_Err_Save 27046
#define P_Sepa_Run_Completed_Flag 27047
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
#define P_Buffer_Seqdata_MSA_Array 27048
#define P_Buffer_Seqdata_Align_Take_Off_Array 27098
#define P_VISION_MSA_Align_Module_Complete_Bit 27148
#define P_Module_Manual_MSA_Act_Command_Array 27248
#define P_OLD_Module_Manual_MSA_Act_Command_Array 27348
#define P_Module_MSA_Act_State_Machine_Array 27448
#define P_VISION_MSA_Seq_Stopping_Point 27548
#define P_Align_Take_Off_Module_Complete_Bit 27581
#define P_Module_Manual_Align_Take_Off_Act_Command_Array 27681
#define P_OLD_Module_Manual_Align_Take_Off_Act_Command_Array 27781
#define P_Module_Align_Take_Off_Act_State_Machine_Array 27881
#define P_Log_Data_Y 27981
#define P_Log_Data_M 27982
#define P_Log_Data_D 27983
#define P_Log_Data_H 27984
#define P_Log_Data_m 27985
#define P_Log_Data_s 27986
#define P_MNTR_End_Index 27987
#define P_BG_CPLC_Running_MNTR 50
#define P_RTI_CPLC_Running_MNTR 51
#define P_Log_Start_Flag 170
#define P_Log_Document_Remove_Flag 171
#define P_Sepa_ID_Change_Flag 172
#define P_USB_Register 173
#define P_Cur_Line_Check 175
#define P_Cur_Line_Check_Init 176
#define P_Buffer_Judge_Trg 27988
#define P_Hold_Pass 27998
#define P_PLC01_Queue_MNTR 27999
#define P_PLC01_Total_Step_Flag 28014
#define P_PLC02_Total_Step_Flag 28015
#define P_PLC014_Total_Step_Flag 28016
#define P_PLC02_Total_Step_Flag2 28017
#define P_Vac_Pass 28018
#define P_Vision_Pass_Exisitence 28019
#define P_Vision_Pass_Empty 28020
#define P_Vision_Pass_FirstSepa 28021
#define P_Vision_Pass_Stack_Inspection 28022
#define P_ULD_Home_Pass 28023
#define P_Clamp_Cell_Down_Use 28024
#define P_FR_Clamp_Use_Test 28025
#define P_Door_Interlock_Use_Flag 28026
#define P_Vacuum_Door_Clear_Use 28027
#define P_Align_Test_Pos 28028
#define P_PLC01_Exe_Is_Ena_Step_Flag 28029
#define P_PLC01_Exe_Fist_Sepa_Step_Flag 28039
#define P_PLC01_Exe_Prod_Step_Flag 28049
#define P_PLC01_HOLD_Insp_Step_Flag 28054
#define P_PLC01_HOLD_Main_Step_Flag 28064
#define P_PLC01_Sus_Discharge_Step_Flag 28079
#define P_PLC01_Sus_ARC_Step_Flag 28089
#define P_PLC01_STOP_Init_Step_Flag 28099
#define P_PLC01_STOP_Cycle_ST_Step_Flag 28109
#define P_PLC02_Exe_Module_First_Sepa_Step_Flag 28124
#define P_PLC02_Sus_Module_Discharge_Step_Flag 28125
#define P_PLC02_Sus_Module_ARC_Step_Flag 28126
#define P_PLC02_Sus_Module_1TR_Supply_Step_Flag 28127
#define P_PLC02_HOLD_Module_Insp_Step_Flag 28128
#define P_PLC02_HOLD_Module_Remove_NGPNP_Step_Flag 28129
#define P_PLC02_HOLD_Module_Remove_Align_Step_Flag 28130
#define P_PLC02_HOLD_Module_Remove_2TR_Step_Flag 28131
#define P_PLC02_HOLD_Module_Supply_1TR_Step_Flag 28132
#define P_PLC02_HOLD_Module_Supply_Align_Step_Flag 28133
#define P_PLC02_HOLD_Module_Supply_2TR_Step_Flag 28134
#define P_PLC02_HOLD_Module_SemiRun_Pos_Step_Flag 28135
#define P_PLC14_STOP_Module_Cycle_Stop_Step_Flag 28136
#define P_PLC02_Discharge_MNTR 28137
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
#define P_Anode_Vision_MNTR 28138
#define P_Cathode_Vision_MNTR 28139
#define P_Vision_MNTR 28140
#define P_Error_Index_Number 28145
#define P_ECAT_MNTR_Bit 28146
#define P_Local_MNTR_Bit 28147
#define P_Clamp_Motion_VER1 28148
#define P_CA_DR_Ta 28149
#define P_CA_DR_Ts 28150
#define P_CA_DR_Tm 28151
#define P_CA_DR_Td 28152
#define P_CA_DR_Tsd 28153
#define P_AN_DR_Ta 28154
#define P_AN_DR_Ts 28155
#define P_AN_DR_Tm 28156
#define P_AN_DR_Td 28157
#define P_AN_DR_Tsd 28158
#define P_First_Sepa_1st_Driving_Move 28159
#define P_AN_Cam_Total_Time 28160
#define P_CA_Cam_Total_Time 28161
#define P_Dry_Run_BTN 28162
#define P_Home_Angle_Offset_change_Bit 28163
#define P_InterLock_Motor_Num 28164
#define P_Recipe_Move_IL_Loop 28165
#define P_Z_Var 28166
#define P_No1_Recipe_Pos_IL 28167
#define P_No2_Recipe_Pos_IL 28220
#define P_No3_Recipe_Pos_IL 28273
#define P_No4_Recipe_Pos_IL 28326
#define P_No5_Recipe_Pos_IL 28379
#define P_No6_Recipe_Pos_IL 28432
#define P_No7_Recipe_Pos_IL 28485
#define P_No8_Recipe_Pos_IL 28538
#define P_No9_Recipe_Pos_IL 28591
#define P_No10_Recipe_Pos_IL 28644
#define P_Recipe_POS_Interock_M 28697
#endif
#endif
#endif //_PP_PROJ_H_
