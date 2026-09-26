
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
#define	P_Sepa_Test	pshm->P[8356]
#define	P_Cur_Equip_No	pshm->P[8357]
#define	M_X_ARC_NP_Plate_Select	pshm->P[2050]
#define	P_Home_Status(i)	pshm->P[(8358+i)%MAX_P]
#define	P_Status_PMAC_Alarm_Reset	pshm->P[5387]
#define	P_Driving_Circumference	pshm->P[8408]
#define	P_PLC06_Spool_Circumference	pshm->P[8409]
#define	P_Upper_Spool_Circumference	pshm->P[8410]
#define	P_Lower_Spool_Circumference	pshm->P[8411]
#define	P_CamTable_MAX_EA	pshm->P[8412]
#define	P_Cam_Move_Distanse	pshm->P[8413]
#define	P_Sepa_Driving_Diameter	pshm->P[8414]
#define	P_PI	pshm->P[8415]
#define	Sys_Kill_Manual_BG_C	pshm->P[7777]
#define	P_Max_Try_Reconnect_MC	pshm->P[8416]
#define	P_Cur_Try_Reconnect_MC	pshm->P[8417]
#define	P_Modbus_Connected_Flag	pshm->P[8418]
#define	P_Write_Modbus_HeartBeat	pshm->P[1500]
#define	P_Homing_Step_Monitor(i)	pshm->P[(8419+i)%MAX_P]
#define	P_231213_Test_Status(i)	pshm->P[(8469+i)%MAX_P]
#define	P_BTN_Sepa_Stack_Mode	pshm->P[8519]
#define	P_BTN_Dryrun_Mode	pshm->P[8520]
#define	P_X_Btn_Align_Table_Take_Off	pshm->P[8521]
#define	P_Align_Table_Take_Off_Flag	pshm->P[8522]
#define	P_Flag_AT_Take_Off_Home_Chk_Flag	pshm->P[8523]
#define	P_Align_Table_Take_Off_State_Machine	pshm->P[8524]
#define	P_Align_Table_Take_Off_Status	pshm->P[8525]
#define	P_AT_Take_Off_Jog_Speed	pshm->P[8526]
#define	P_2nd_Transfer_AT_Take_Off_Pos	pshm->P[8527]
#define	P_VISION_Initial_Pos_Cmd	pshm->P[8528]
#define	P_VISION_Cal_Pos_Cmd	pshm->P[8529]
#define	P_FR_Anode_Dritection_Pos_Cmd	pshm->P[8530]
#define	P_FR_Cahode_Dritection_Pos_Cmd	pshm->P[8531]
#define	P_Anode_AT_Resolution_Cal_Pos_Cmd	pshm->P[8532]
#define	P_Cathode_AT_Resolution_Cal_Pos_Cmd	pshm->P[8533]
#define	P_Vision_Initial_Pos_Status_Machine	pshm->P[8534]
#define	P_Vision_Cal_Pos_Status_Machine	pshm->P[8535]
#define	P_FR_Anode_Dritection_Pos_Status_Machine	pshm->P[8536]
#define	P_FR_Cahode_Dritection_Pos_Status_Machine	pshm->P[8537]
#define	P_Anode_AT_Resolution_Cal_Pos_Status_Machine	pshm->P[8538]
#define	P_Cathode_AT_Resolution_Cal_Pos_Status_Machine	pshm->P[8539]
#define	P_Status_Vision_Initial_Pos	pshm->P[8540]
#define	P_Status_Vision_Cal_Pos	pshm->P[8541]
#define	P_Status_FR_Anode_Dritection_Pos	pshm->P[8542]
#define	P_Status_FR_Cahode_Dritection_Pos	pshm->P[8543]
#define	P_Status_An_AT_Resolution_Cal_Pos	pshm->P[8544]
#define	P_Status_Ca_AT_Resolution_Cal_Pos	pshm->P[8545]
#define	P_CMD_Cleaning_Pos	pshm->P[8546]
#define	P_Cleaning_Pos_Status_Machine	pshm->P[8547]
#define	P_Status_Cleaning_Pos	pshm->P[8548]
#define	P_Push_Manual_ARC_Button	pshm->P[8549]
#define	P_Push_Cycle_Stop_Button	pshm->P[8550]
#define	P_BTN_Push_Cathode_MSA_Mode	pshm->P[8551]
#define	P_BTN_Push_Anode_MSA_Mode	pshm->P[8552]
#define	P_BTN_Push_Cathode_Align_MSA	pshm->P[8553]
#define	P_BTN_Push_Anode_Align_MSA	pshm->P[8554]
#define	P_Btn_Vision_Initial_Pos	pshm->P[8555]
#define	P_Btn_Vision_Cal_Pos	pshm->P[8556]
#define	P_Btn_Vision_Cal_Anode_Move	pshm->P[8557]
#define	P_Btn_Vision_Cal_Cathode_Move	pshm->P[8558]
#define	P_Btn_An_AT_Resolution_Cal_Pos	pshm->P[8559]
#define	P_Btn_Ca_AT_Resolution_Cal_Pos	pshm->P[8560]
#define	P_Btn_Cleaning_Mode_Pos	pshm->P[8561]
#define	P_BTN_Push_Align_Auto_Cal_Ready_Pos_Move(i)	pshm->P[(8562+i)%MAX_P]
#define	P_CMD_MSA_Run(i)	pshm->P[(8565+i)%MAX_P]
#define	P_AutoVisionCal_StMachine	pshm->P[8570]
#define	P_CMD_Cathode_Align_Complete	pshm->P[8571]
#define	P_CMD_Anode_Align_Complete	pshm->P[8572]
#define	P_CMD_Align_Auto_Cal_Ready_Pos_Move_Run(i)	pshm->P[(8573+i)%MAX_P]
#define	P_Align_Auto_Cal_Ready_Pos_Move_Run_State_Machine(i)	pshm->P[(8576+i)%MAX_P]
#define	P_Align_Auto_Cal_Ready_Pos_Move_Run_Status(i)	pshm->P[(8579+i)%MAX_P]
#define	P_Align_Auto_Cal_Ready_Pos_Move_Run_Complete(i)	pshm->P[(8582+i)%MAX_P]
#define	P_Cal_Ready_Pos_Move_TR_Z_Jog_Speed	pshm->P[8585]
#define	P_Cal_Ready_Pos_Move_TR_X_Jog_Speed	pshm->P[8586]
#define	P_CMD_Cell_Align(i)	pshm->P[(8587+i)%MAX_P]
#define	P_CMD_Cell_Stop(i)	pshm->P[(8597+i)%MAX_P]
#define	P_CMD_Cell_Reset(i)	pshm->P[(8607+i)%MAX_P]
#define	P_Anode_Clamp_Z1_Initial_Pos_mm	pshm->P[8617]
#define	P_Anode_Clamp_Z2_Initial_Pos_mm	pshm->P[8618]
#define	P_Cathode_Clamp_Z1_Initial_Pos_mm	pshm->P[8619]
#define	P_Cathode_Clamp_Z2_Initial_Pos_mm	pshm->P[8620]
#define	P_Stack_Table_Z_Initial_Pos_mm	pshm->P[8621]
#define	P_FR_Initial_Pos_mm	pshm->P[8622]
#define	P_Anode_Clamp_Z1_Cal_Pos_mm	pshm->P[8623]
#define	P_Anode_Clamp_Z2_Cal_Pos_mm	pshm->P[8624]
#define	P_Cathode_Clamp_Z1_Cal_Pos_mm	pshm->P[8625]
#define	P_Cathode_Clamp_Z2_Cal_Pos_mm	pshm->P[8626]
#define	P_Stack_Table_Z_Cal_Pos_mm	pshm->P[8627]
#define	P_FR_Cal_Pos_mm	pshm->P[8628]
#define	P_Anode_Clamp_Z1_Move_Speed	pshm->P[8629]
#define	P_Anode_Clamp_Z2_Move_Speed	pshm->P[8630]
#define	P_Cathode_Clamp_Z1_Move_Speed	pshm->P[8631]
#define	P_Cathode_Clamp_Z2_Move_Speed	pshm->P[8632]
#define	P_Stack_Table_Z_Move_Speed	pshm->P[8633]
#define	P_FR_Cal_Move_Speed	pshm->P[8634]
#define	P_Old_Anode_Clamp_Z1_Move_Speed	pshm->P[8635]
#define	P_Old_Anode_Clamp_Z2_Move_Speed	pshm->P[8636]
#define	P_Old_Cathode_Clamp_Z1_Move_Speed	pshm->P[8637]
#define	P_Old_Cathode_Clamp_Z2_Move_Speed	pshm->P[8638]
#define	P_Old_Stack_Table_Z_Move_Speed	pshm->P[8639]
#define	P_Old_FR_Cal_Move_Speed	pshm->P[8640]
#define	P_An_AT_Resolution_Anode_2th_Z_Pos_mm	pshm->P[8641]
#define	P_An_AT_Resolution_Anode_2th_T_Pos_mm	pshm->P[8642]
#define	P_An_AT_Resolution_Cathode_2th_Z_Pos_mm	pshm->P[8643]
#define	P_An_AT_Resolution_Cathode_2th_T_Pos_mm	pshm->P[8644]
#define	P_FR_AT_Resolution_Pos_mm	pshm->P[8645]
#define	P_Old_AT_Resolution_Anode_2th_Z_Pos_Move_Speed	pshm->P[8646]
#define	P_Old_AT_Resolution_Anode_2th_T_Pos_Move_Speed	pshm->P[8647]
#define	P_Old_AT_Resolution_Cathode_2th_Z_Pos_Move_Speed	pshm->P[8648]
#define	P_Old_AT_Resolution_Cathode_2th_T_Pos_Move_Speed	pshm->P[8649]
#define	P_Old_FR_AT_Resolution_Move_Speed	pshm->P[8650]
#define	P_Ca_AT_Resolution_Anode_2th_Z_Pos_mm	pshm->P[8651]
#define	P_Ca_AT_Resolution_Anode_2th_T_Pos_mm	pshm->P[8652]
#define	P_Ca_AT_Resolution_Cathode_2th_Z_Pos_mm	pshm->P[8653]
#define	P_Ca_AT_Resolution_Cathode_2th_T_Pos_mm	pshm->P[8654]
#define	P_AT_Resolution_Anode_2th_Z_Pos_Move_Speed	pshm->P[8655]
#define	P_AT_Resolution_Anode_2th_T_Pos_Move_Speed	pshm->P[8656]
#define	P_AT_Resolution_Cathode_2th_Z_Pos_Move_Speed	pshm->P[8657]
#define	P_AT_Resolution_Cathode_2th_T_Pos_Move_Speed	pshm->P[8658]
#define	P_FR_AT_Resolution_Move_Speed	pshm->P[8659]
#define	P_Anode_1th_MES_APC_Move_mm_PLC	pshm->P[8660]
#define	P_Cathode_1th_MES_APC_Move_mm_PLC	pshm->P[8661]
#define	P_Anode_1th_MES_APC_Move_mm_PMAC	pshm->P[8662]
#define	P_Cathode_1th_MES_APC_Move_mm_PMAC	pshm->P[8663]
#define	P_Anode_X_before_Comp_mm	pshm->P[8664]
#define	P_Cathode_X_before_Comp_mm	pshm->P[8665]
#define	P_Flag_Anode_1PNP_APC_Apply_Point	pshm->P[8666]
#define	P_Flag_Cathode_1PNP_APC_Apply_Point	pshm->P[8667]
#define	P_MES_APC_Active	pshm->P[8668]
#define	P_OLD_Slave1_Target_X_Belt_To_Align	pshm->P[8669]
#define	P_OLD_Slave10_Target_X_Belt_To_Align	pshm->P[8670]
#define	P_Anode_MES_X_Average_mm	pshm->P[8671]
#define	P_Cathode_MES_X_Average_mm	pshm->P[8672]
#define	P_Anode_X_Sum_Move_mm	pshm->P[8673]
#define	P_Anode_Align_Stage_TM	pshm->P[8674]
#define	P_Anode_Align_Stage_TS	pshm->P[8675]
#define	P_Anode_Align_Stage_TA	pshm->P[8676]
#define	P_Status_Anode_Prog	pshm->P[8677]
#define	P_Cathode_X_Sum_Move_mm	pshm->P[8678]
#define	P_X_Move_Recipe_Percent	pshm->P[8679]
#define	P_Cathode_Align_Stage_TM	pshm->P[8680]
#define	P_Cathode_Align_Stage_TS	pshm->P[8681]
#define	P_Cathode_Align_Stage_TA	pshm->P[8682]
#define	P_Status_Cathode_Prog	pshm->P[8683]
#define	P_Anode_Align_Move_Machine	pshm->P[8684]
#define	P_Cathode_Align_Move_Machine	pshm->P[8685]
#define	P_Stack_Table_Move_Machine	pshm->P[8686]
#define	P_Status_Anode_Align_Move	pshm->P[8687]
#define	P_Status_Cathode_Align_Move	pshm->P[8688]
#define	P_Status_Stack_Table_Move	pshm->P[8689]
#define	P_Anode_Align_Start_Bit	pshm->P[8690]
#define	P_Cathode_Align_Start_Bit	pshm->P[8691]
#define	P_Anode_Retry_Start_Bit	pshm->P[8692]
#define	P_Cathode_Retry_Start_Bit	pshm->P[8693]
#define	P_Vision_Spea_Run_Complete_Machine	pshm->P[8694]
#define	P_Vision_Sepa_Run_Complete_CMD	pshm->P[8695]
#define	P_Vision_Clamp_Complete_Machine	pshm->P[8696]
#define	P_Vision_Clamp_Complete_CMD	pshm->P[8697]
#define	P_PC_Jog_Motor_No	pshm->P[4301]
#define	P_PC_Jog_Speed	pshm->P[4254]
#define	P_Custom_Speed	pshm->P[4500]
#define	P_Jog_Position	pshm->P[4300]
#define	P_Jog_Work_Speed(i)	pshm->P[(8698+i)%MAX_P]
#define	P_Anode_Recipe_Count	pshm->P[8729]
#define	P_Cathode_Recipe_Count	pshm->P[8730]
#define	P_Recipe_Homing_Speed(i)	pshm->P[(8731+i)%MAX_P]
#define	P_Slave5_Target_Z_Wait_Pos	pshm->P[8780]
#define	P_Slave5_Target_Z_Start_Pos	pshm->P[8781]
#define	P_Sepa_First_Clamp_On_Up	pshm->P[8782]
#define	P_Slave6_Target_X_Wait_Pos	pshm->P[8783]
#define	P_Anode_1st_T_Belt_To_Align	pshm->P[8784]
#define	P_Anode_1st_T_Align_To_Belt	pshm->P[8785]
#define	P_Anode_1st_T_Ready	pshm->P[8786]
#define	P_Recipe_A_1st_Z_Belt_Down	pshm->P[8787]
#define	P_Recipe_A_1st_Z_Belt_Up	pshm->P[8788]
#define	P_Recipe_A_1st_Z_Align_Down	pshm->P[8789]
#define	P_Recipe_A_1st_Z_Align_Up	pshm->P[8790]
#define	P_Recipe_A_1st_Z_Ready_Up	pshm->P[8791]
#define	P_Recipe_A_1st_Z_Ready_Down	pshm->P[8792]
#define	P_Anode_1st_Z_Belt_Down	pshm->P[8793]
#define	P_Anode_1st_Z_Belt_Up	pshm->P[8794]
#define	P_Anode_1st_Z_Align_Down	pshm->P[8795]
#define	P_Anode_1st_Z_Align_Up	pshm->P[8796]
#define	P_Anode_1st_Z_Ready_Up	pshm->P[8797]
#define	P_Anode_1st_Z_Ready_Down	pshm->P[8798]
#define	P_Anode_2st_T_Align_To_Stack	pshm->P[8799]
#define	P_Anode_2st_T_Stack_To_Align	pshm->P[8800]
#define	P_Recipe_A_2st_Z_Align_Up	pshm->P[8801]
#define	P_Recipe_A_2st_Z_Align_Down	pshm->P[8802]
#define	P_Recipe_A_2st_Z_Stack_Up	pshm->P[8803]
#define	P_Recipe_A_2st_Z_Stack_Down	pshm->P[8804]
#define	P_Recipe_A_2st_Z_Ready_Up	pshm->P[8805]
#define	P_Recipe_A_2st_Z_Ready_Down	pshm->P[8806]
#define	P_Anode_2nd_Z_Align_Up	pshm->P[8807]
#define	P_Anode_2nd_Z_Align_Down	pshm->P[8808]
#define	P_Anode_2nd_Z_Stack_Up	pshm->P[8809]
#define	P_Anode_2nd_Z_Stack_Down	pshm->P[8810]
#define	P_Anode_2nd_Z_Ready_Up	pshm->P[8811]
#define	P_Anode_2st_Z_Ready_Down	pshm->P[8812]
#define	P_Anode_Clamp_Y1_On_1st	pshm->P[8813]
#define	P_Anode_Clamp_Y1_On_2nd	pshm->P[8814]
#define	P_Anode_Clamp_Y1_On_3rd	pshm->P[8815]
#define	P_Anode_Clamp_Y1_On_4th	pshm->P[8816]
#define	P_Anode_Clamp_Y1_Off_1st	pshm->P[8817]
#define	P_Anode_Clamp_Y1_Off_2nd	pshm->P[8818]
#define	P_Anode_Clamp_Y1_Off_3rd	pshm->P[8819]
#define	P_Anode_Clamp_Y2_On_1st	pshm->P[8820]
#define	P_Anode_Clamp_Y2_On_2nd	pshm->P[8821]
#define	P_Anode_Clamp_Y2_On_3rd	pshm->P[8822]
#define	P_Anode_Clamp_Y2_On_4th	pshm->P[8823]
#define	P_Anode_Clamp_Y2_Off_1st	pshm->P[8824]
#define	P_Anode_Clamp_Y2_Off_2nd	pshm->P[8825]
#define	P_Anode_Clamp_Y2_Off_3rd	pshm->P[8826]
#define	P_Anode_Clamp_Z1_On_1st	pshm->P[8827]
#define	P_Anode_Clamp_Z1_On_2nd	pshm->P[8828]
#define	P_Anode_Clamp_Z1_On_3rd	pshm->P[8829]
#define	P_Anode_Clamp_Z1_On_4th	pshm->P[8830]
#define	P_Anode_Clamp_Z1_Off_1st	pshm->P[8831]
#define	P_Anode_Clamp_Z1_Off_2nd	pshm->P[8832]
#define	P_Anode_Clamp_Z1_Off_3rd	pshm->P[8833]
#define	P_Anode_Clamp_Z1_Down	pshm->P[8834]
#define	P_Final_Roll_X_Sepa_1st	pshm->P[8835]
#define	P_Final_Roll_X_Sepa_2nd	pshm->P[8836]
#define	P_Final_Roll_X_Sepa_3rd	pshm->P[8837]
#define	P_Final_Roll_X_Sepa_4th	pshm->P[8838]
#define	P_Final_Roll_X_Sepa_5th	pshm->P[8839]
#define	P_Final_Roll_X_Anode_Move	pshm->P[8840]
#define	P_Final_Roll_X_Discharge	pshm->P[8841]
#define	P_Final_Roll_X_Cathode_Move	pshm->P[8842]
#define	P_Final_Roll_X_Run_Wait_Pos	pshm->P[8843]
#define	P_Final_Roll_Z_Ready_And_Cutting	pshm->P[8844]
#define	P_Final_Roll_Z_Run_Pos	pshm->P[8845]
#define	P_Final_Roll_Z_Sepa_3rd	pshm->P[8846]
#define	P_Final_Roll_Z_Sepa_4th	pshm->P[8847]
#define	P_Final_Roll_Z_Sepa_5th	pshm->P[8848]
#define	P_Stack_Table_Z_For_Sepa	pshm->P[8849]
#define	P_Stack_Table_Z_For_Run	pshm->P[8850]
#define	P_Stack_Table_Z_For_Init	pshm->P[8851]
#define	P_Cathode_Clamp_Y1_On_1st	pshm->P[8852]
#define	P_Cathode_Clamp_Y1_On_2nd	pshm->P[8853]
#define	P_Cathode_Clamp_Y1_On_3rd	pshm->P[8854]
#define	P_Cathode_Clamp_Y1_On_4th	pshm->P[8855]
#define	P_Cathode_Clamp_Y1_Off_1st	pshm->P[8856]
#define	P_Cathode_Clamp_Y1_Off_2nd	pshm->P[8857]
#define	P_Cathode_Clamp_Y1_Off_3rd	pshm->P[8858]
#define	P_Cathode_Clamp_Y2_On_1st	pshm->P[8859]
#define	P_Cathode_Clamp_Y2_On_2nd	pshm->P[8860]
#define	P_Cathode_Clamp_Y2_On_3rd	pshm->P[8861]
#define	P_Cathode_Clamp_Y2_On_4th	pshm->P[8862]
#define	P_Cathode_Clamp_Y2_Off_1st	pshm->P[8863]
#define	P_Cathode_Clamp_Y2_Off_2nd	pshm->P[8864]
#define	P_Cathode_Clamp_Y2_Off_3rd	pshm->P[8865]
#define	P_Cathode_Clamp_Z1_On_1st	pshm->P[8866]
#define	P_Cathode_Clamp_Z1_On_2nd	pshm->P[8867]
#define	P_Cathode_Clamp_Z1_On_3rd	pshm->P[8868]
#define	P_Cathode_Clamp_Z1_On_4th	pshm->P[8869]
#define	P_Cathode_Clamp_Z1_Off_1st	pshm->P[8870]
#define	P_Cathode_Clamp_Z1_Off_2nd	pshm->P[8871]
#define	P_Cathode_Clamp_Z1_Off_3rd	pshm->P[8872]
#define	P_Cathode_Clamp_Z1_Down	pshm->P[8873]
#define	P_Cathode_2st_T_Align_To_Stack	pshm->P[8874]
#define	P_Cathode_2st_T_Stack_To_Align	pshm->P[8875]
#define	P_Slave8_Target_X_Align_To_Stack_1st	pshm->P[8876]
#define	P_Slave8_Target_X_Align_To_Stack_2nd	pshm->P[8877]
#define	P_Slave8_Target_X_Stack_To_Align_1st	pshm->P[8878]
#define	P_Slave8_Target_X_Stack_To_Align_2nd	pshm->P[8879]
#define	P_Slave8_Target_X_Stack_To_Align_3rd	pshm->P[8880]
#define	P_Cathode_2nd_Z_Align_Up	pshm->P[8881]
#define	P_Cathode_2nd_Z_Align_Down	pshm->P[8882]
#define	P_Cathode_2nd_Z_Stack_Up	pshm->P[8883]
#define	P_Cathode_2nd_Z_Stack_Down	pshm->P[8884]
#define	P_Cathode_2nd_Z_Ready_Up	pshm->P[8885]
#define	P_Cathode_2st_Z_Ready_Down	pshm->P[8886]
#define	P_Recipe_C_2st_Z_Align_Up	pshm->P[8887]
#define	P_Recipe_C_2st_Z_Align_Down	pshm->P[8888]
#define	P_Recipe_C_2st_Z_Stack_Up	pshm->P[8889]
#define	P_Recipe_C_2st_Z_Stack_Down	pshm->P[8890]
#define	P_Recipe_C_2st_Z_Ready_Up	pshm->P[8891]
#define	P_Recipe_C_2st_Z_Ready_Down	pshm->P[8892]
#define	P_Cathode_1st_T_Belt_To_Align	pshm->P[8893]
#define	P_Cathode_1st_T_Align_To_Belt	pshm->P[8894]
#define	P_Cathode_1st_T_Ready	pshm->P[8895]
#define	P_Cathode_1st_Z_Belt_Down	pshm->P[8896]
#define	P_Cathode_1st_Z_Belt_Up	pshm->P[8897]
#define	P_Cathode_1st_Z_Align_Down	pshm->P[8898]
#define	P_Cathode_1st_Z_Align_Up	pshm->P[8899]
#define	P_Cathode_1st_Z_Ready_Up	pshm->P[8900]
#define	P_Cathode_1st_Z_Ready_Down	pshm->P[8901]
#define	P_Recipe_C_1st_Z_Belt_Down	pshm->P[8902]
#define	P_Recipe_C_1st_Z_Belt_Up	pshm->P[8903]
#define	P_Recipe_C_1st_Z_Align_Down	pshm->P[8904]
#define	P_Recipe_C_1st_Z_Align_Up	pshm->P[8905]
#define	P_Recipe_C_1st_Z_Ready_Up	pshm->P[8906]
#define	P_Recipe_C_1st_Z_Ready_Down	pshm->P[8907]
#define	P_1st_Sheet_Paper_X_FWD	pshm->P[8908]
#define	P_1st_Sheet_Paper_X_BWD	pshm->P[8909]
#define	P_Cathode_NG_T_NG_To_Align	pshm->P[8910]
#define	P_Cathode_NG_T_Align_To_NG	pshm->P[8911]
#define	P_Cathode_NG_Z_NG_Down	pshm->P[8912]
#define	P_Cathode_NG_Z_NG_Up	pshm->P[8913]
#define	P_Cathode_NG_Z_Align_Down	pshm->P[8914]
#define	P_Cathode_NG_Z_Align_Up	pshm->P[8915]
#define	P_Anode_NG_T_NG_To_Align	pshm->P[8916]
#define	P_Anode_NG_T_Align_To_NG	pshm->P[8917]
#define	P_Anode_NG_Z_NG_Down	pshm->P[8918]
#define	P_Anode_NG_Z_NG_Up	pshm->P[8919]
#define	P_Anode_NG_Z_Align_Down	pshm->P[8920]
#define	P_Anode_NG_Z_Align_Up	pshm->P[8921]
#define	P_1st_ULD_X_Stack	pshm->P[8922]
#define	P_1st_ULD_X_FWD	pshm->P[8923]
#define	P_1st_ULD_X_Init_Pos	pshm->P[8924]
#define	P_1st_ULD_X_Target_BWD	pshm->P[8925]
#define	P_1st_ULD_Z_Stack	pshm->P[8926]
#define	P_1st_ULD_Z_Cutting_For_Cell	pshm->P[8927]
#define	P_1st_ULD_Z_Discharge_For_Cell	pshm->P[8928]
#define	P_1st_ULD_Z_Target_Down	pshm->P[8929]
#define	P_1st_ULD_T_Wait	pshm->P[8930]
#define	P_1st_ULD_T_Avoid_Angle	pshm->P[8931]
#define	P_1st_ULD_T_90_Angle	pshm->P[8932]
#define	P_Slave1_Start_X_Belt	pshm->P[8933]
#define	P_Slave1_Start_X_Align	pshm->P[8934]
#define	P_Slave1_Start_X_NG	pshm->P[8935]
#define	P_Slave1_Start_Z_Up	pshm->P[8936]
#define	P_Slave1_Start_Z_Down_Belt	pshm->P[8937]
#define	P_Slave1_Start_Z_Down_Align	pshm->P[8938]
#define	P_Slave1_Start_Z_Down_NG	pshm->P[8939]
#define	P_Slave3_Start_X_Align	pshm->P[8940]
#define	P_Slave3_Start_X_Align_To_Stack	pshm->P[8941]
#define	P_Slave3_Start_X_Stack	pshm->P[8942]
#define	P_Slave3_Start_X_Stack_To_Align_2	pshm->P[8943]
#define	P_Slave3_Start_X_Stack_To_Align_3	pshm->P[8944]
#define	P_Slave3_Start_Z_Align_To_Stack_1	pshm->P[8945]
#define	P_Slave3_Start_Z_Align_To_Stack_2	pshm->P[8946]
#define	P_Slave3_Start_Z_Stack_To_Align_1	pshm->P[8947]
#define	P_Slave3_Start_Z_Stack_To_Align_2	pshm->P[8948]
#define	P_Slave3_Start_Z_Stack_To_Align_3	pshm->P[8949]
#define	P_Slave3_Start_Z_Align_Down	pshm->P[8950]
#define	P_Slave3_Start_Z_Align_Up	pshm->P[8951]
#define	P_Slave3_Start_Z_Stack_Down	pshm->P[8952]
#define	P_Slave3_Start_Z_Stack_Up	pshm->P[8953]
#define	P_Slave4_Start_X_Clamp_On_1st	pshm->P[8954]
#define	P_Slave4_Start_X_Clamp_On_2nd	pshm->P[8955]
#define	P_Slave4_Start_X_Clamp_On_3rd	pshm->P[8956]
#define	P_Slave4_Start_X_Clamp_On_4th	pshm->P[8957]
#define	P_Slave4_Start_X_Clamp_Off_1st	pshm->P[8958]
#define	P_Slave4_Start_X_Clamp_Off_2nd	pshm->P[8959]
#define	P_Slave4_Start_X_Clamp_Off_3rd	pshm->P[8960]
#define	P_Slave4_Start_Z_Clamp_On_1st	pshm->P[8961]
#define	P_Slave4_Start_Z_Clamp_On_2nd	pshm->P[8962]
#define	P_Slave4_Start_Z_Clamp_On_3rd	pshm->P[8963]
#define	P_Slave4_Start_Z_Clamp_On_4th	pshm->P[8964]
#define	P_Slave4_Start_Z_Clamp_Off_1st	pshm->P[8965]
#define	P_Slave4_Start_Z_Clamp_Off_2nd	pshm->P[8966]
#define	P_Slave4_Start_Z_Clamp_Off_3rd	pshm->P[8967]
#define	P_Slave4_Start_Z_Down	pshm->P[8968]
#define	P_Slave5_Start_X_Anode_Move_1st	pshm->P[8969]
#define	P_Slave5_Start_X_Anode_Move_2nd	pshm->P[8970]
#define	P_Slave5_Start_X_Cathode_Move_1st	pshm->P[8971]
#define	P_Slave5_Start_X_Cathode_Move_2nd	pshm->P[8972]
#define	P_Slave5_Start_X_Sepa_1st	pshm->P[8973]
#define	P_Slave5_Start_X_Sepa_2nd	pshm->P[8974]
#define	P_Slave5_Start_X_Sepa_3rd	pshm->P[8975]
#define	P_Slave5_Start_X_Sepa_4th	pshm->P[8976]
#define	P_Slave5_Start_X_Sepa_5th	pshm->P[8977]
#define	P_Slave5_Start_Z_Sepa_1st	pshm->P[8978]
#define	P_Slave5_Start_Z_Sepa_2nd	pshm->P[8979]
#define	P_Slave5_Start_Z_Sepa_3rd	pshm->P[8980]
#define	P_Slave5_Start_Z_Sepa_4th	pshm->P[8981]
#define	P_Slave5_Start_Z_Sepa_5th	pshm->P[8982]
#define	P_Slave6_Start_Z_Wait_Pos	pshm->P[8983]
#define	P_Slave6_Start_Z_For_Sepa_Mode	pshm->P[8984]
#define	P_Slave7_Start_X_Clamp_On_1st	pshm->P[8985]
#define	P_Slave7_Start_X_Clamp_On_2nd	pshm->P[8986]
#define	P_Slave7_Start_X_Clamp_On_3rd	pshm->P[8987]
#define	P_Slave7_Start_X_Clamp_On_4th	pshm->P[8988]
#define	P_Slave7_Start_X_Clamp_Off_1st	pshm->P[8989]
#define	P_Slave7_Start_X_Clamp_Off_2nd	pshm->P[8990]
#define	P_Slave7_Start_X_Clamp_Off_3rd	pshm->P[8991]
#define	P_Slave7_Start_Z_Clamp_On_1st	pshm->P[8992]
#define	P_Slave7_Start_Z_Clamp_On_2nd	pshm->P[8993]
#define	P_Slave7_Start_Z_Clamp_On_3rd	pshm->P[8994]
#define	P_Slave7_Start_Z_Clamp_On_4th	pshm->P[8995]
#define	P_Slave7_Start_Z_Clamp_Off_1st	pshm->P[8996]
#define	P_Slave7_Start_Z_Clamp_Off_2nd	pshm->P[8997]
#define	P_Slave7_Start_Z_Clamp_Off_3rd	pshm->P[8998]
#define	P_Slave7_Start_Z_Down	pshm->P[8999]
#define	P_Slave8_Start_X_Align	pshm->P[9000]
#define	P_Slave8_Start_X_Align_To_Stack	pshm->P[9001]
#define	P_Slave8_Start_X_Stack	pshm->P[9002]
#define	P_Slave8_Start_X_Stack_To_Align_2	pshm->P[9003]
#define	P_Slave8_Start_X_Stack_To_Align_3	pshm->P[9004]
#define	P_Slave8_Start_Z_Align_To_Stack_1	pshm->P[9005]
#define	P_Slave8_Start_Z_Align_To_Stack_2	pshm->P[9006]
#define	P_Slave8_Start_Z_Stack_To_Align_1	pshm->P[9007]
#define	P_Slave8_Start_Z_Stack_To_Align_2	pshm->P[9008]
#define	P_Slave8_Start_Z_Stack_To_Align_3	pshm->P[9009]
#define	P_Slave8_Start_Z_Align_Down	pshm->P[9010]
#define	P_Slave8_Start_Z_Align_Up	pshm->P[9011]
#define	P_Slave8_Start_Z_Stack_Down	pshm->P[9012]
#define	P_Slave8_Start_Z_Stack_Up	pshm->P[9013]
#define	P_Slave10_Start_X_Belt	pshm->P[9014]
#define	P_Slave10_Start_X_Align	pshm->P[9015]
#define	P_Slave10_Start_X_NG	pshm->P[9016]
#define	P_Slave10_Start_Z_Up	pshm->P[9017]
#define	P_Slave10_Start_Z_Down_Belt	pshm->P[9018]
#define	P_Slave10_Start_Z_Down_Align	pshm->P[9019]
#define	P_Slave10_Start_Z_Down_NG	pshm->P[9020]
#define	P_Slave1_Move_X_Belt_Align	pshm->P[9021]
#define	P_Slave1_Move_X_Align_Belt	pshm->P[9022]
#define	P_Slave1_Move_X_Belt_NG	pshm->P[9023]
#define	P_Slave1_Move_X_NG_Belt	pshm->P[9024]
#define	P_Slave1_Move_X_Align_NG	pshm->P[9025]
#define	P_Slave1_Move_Z_Belt_Down	pshm->P[9026]
#define	P_Slave1_Move_Z_Belt_Up	pshm->P[9027]
#define	P_Slave1_Move_X_NG_Align	pshm->P[9028]
#define	P_Slave1_Move_Z_Align_Down	pshm->P[9029]
#define	P_Slave1_Move_Z_Align_Up	pshm->P[9030]
#define	P_Slave1_Move_Z_NG_Down	pshm->P[9031]
#define	P_Slave1_Move_Z_NG_Up	pshm->P[9032]
#define	P_Slave3_Move_X_Align_To_Stack_1st	pshm->P[9033]
#define	P_Slave3_Move_X_Align_To_Stack_2nd	pshm->P[9034]
#define	P_Slave3_Move_X_Stack_To_Align_1st	pshm->P[9035]
#define	P_Slave3_Move_X_Stack_To_Align_2nd	pshm->P[9036]
#define	P_Slave3_Move_X_Stack_To_Align_3rd	pshm->P[9037]
#define	P_Slave3_Move_Z_Align_To_Stack_1st	pshm->P[9038]
#define	P_Slave3_Move_Z_Align_To_Stack_2nd	pshm->P[9039]
#define	P_Slave3_Move_Z_Stack_To_Align_1st	pshm->P[9040]
#define	P_Slave3_Move_Z_Stack_To_Align_2nd	pshm->P[9041]
#define	P_Slave3_Move_Z_Stack_To_Align_3rd	pshm->P[9042]
#define	P_Slave3_Move_Z_Align_Up	pshm->P[9043]
#define	P_Slave3_Move_Z_Align_Down	pshm->P[9044]
#define	P_Slave3_Move_Z_Stack_Up	pshm->P[9045]
#define	P_Slave3_Move_Z_Stack_Down	pshm->P[9046]
#define	P_Slave4_Move_X_Clamp_On_1st	pshm->P[9047]
#define	P_Slave4_Move_X_Clamp_On_2nd	pshm->P[9048]
#define	P_Slave4_Move_X_Clamp_On_3rd	pshm->P[9049]
#define	P_Slave4_Move_X_Clamp_On_4th	pshm->P[9050]
#define	P_Slave4_Move_X_Clamp_Off_1st	pshm->P[9051]
#define	P_Slave4_Move_X_Clamp_Off_2nd	pshm->P[9052]
#define	P_Slave4_Move_X_Clamp_Off_3rd	pshm->P[9053]
#define	P_Slave4_Move_Z_Clamp_On_1st	pshm->P[9054]
#define	P_Slave4_Move_Z_Clamp_On_2nd	pshm->P[9055]
#define	P_Slave4_Move_Z_Clamp_On_3rd	pshm->P[9056]
#define	P_Slave4_Move_Z_Clamp_On_4th	pshm->P[9057]
#define	P_Slave4_Move_Z_Clamp_Off_1st	pshm->P[9058]
#define	P_Slave4_Move_Z_Clamp_Off_2nd	pshm->P[9059]
#define	P_Slave4_Move_Z_Clamp_Off_3rd	pshm->P[9060]
#define	P_Slave4_Move_Z_Down	pshm->P[9061]
#define	P_Slave5_Move_X_Anode_Move_1st	pshm->P[9062]
#define	P_Slave5_Move_X_Anode_Move_2nd	pshm->P[9063]
#define	P_Slave5_Move_X_Cathode_Move_1st	pshm->P[9064]
#define	P_Slave5_Move_X_Cathode_Move_2nd	pshm->P[9065]
#define	P_Slave5_Move_X_Sepa_1st	pshm->P[9066]
#define	P_Slave5_Move_X_Sepa_2nd	pshm->P[9067]
#define	P_Slave5_Move_X_Sepa_3rd	pshm->P[9068]
#define	P_Slave5_Move_X_Sepa_4th	pshm->P[9069]
#define	P_Slave5_Move_X_Sepa_5th	pshm->P[9070]
#define	P_Slave5_Move_Z_Sepa_1st	pshm->P[9071]
#define	P_Slave5_Move_Z_Sepa_2nd	pshm->P[9072]
#define	P_Slave5_Move_Z_Sepa_3rd	pshm->P[9073]
#define	P_Slave5_Move_Z_Sepa_4th	pshm->P[9074]
#define	P_Slave5_Move_Z_Sepa_5th	pshm->P[9075]
#define	P_Slave6_Move_Z_For_Sepa_Mode	pshm->P[9076]
#define	P_Slave6_Move_Z_For_Run_Mode	pshm->P[9077]
#define	P_Slave7_Move_X_Clamp_On_1st	pshm->P[9078]
#define	P_Slave7_Move_X_Clamp_On_2nd	pshm->P[9079]
#define	P_Slave7_Move_X_Clamp_On_3rd	pshm->P[9080]
#define	P_Slave7_Move_X_Clamp_On_4th	pshm->P[9081]
#define	P_Slave7_Move_X_Clamp_Off_1st	pshm->P[9082]
#define	P_Slave7_Move_X_Clamp_Off_2nd	pshm->P[9083]
#define	P_Slave7_Move_X_Clamp_Off_3rd	pshm->P[9084]
#define	P_Slave7_Move_Z_Clamp_On_1st	pshm->P[9085]
#define	P_Slave7_Move_Z_Clamp_On_2nd	pshm->P[9086]
#define	P_Slave7_Move_Z_Clamp_On_3rd	pshm->P[9087]
#define	P_Slave7_Move_Z_Clamp_On_4th	pshm->P[9088]
#define	P_Slave7_Move_Z_Clamp_Off_1st	pshm->P[9089]
#define	P_Slave7_Move_Z_Clamp_Off_2nd	pshm->P[9090]
#define	P_Slave7_Move_Z_Clamp_Off_3rd	pshm->P[9091]
#define	P_Slave7_Move_Z_Down	pshm->P[9092]
#define	P_Slave8_Move_X_Align_To_Stack_1st	pshm->P[9093]
#define	P_Slave8_Move_X_Align_To_Stack_2nd	pshm->P[9094]
#define	P_Slave8_Move_X_Stack_To_Align_1st	pshm->P[9095]
#define	P_Slave8_Move_X_Stack_To_Align_2nd	pshm->P[9096]
#define	P_Slave8_Move_X_Stack_To_Align_3rd	pshm->P[9097]
#define	P_Slave8_Move_Z_Align_To_Stack_1st	pshm->P[9098]
#define	P_Slave8_Move_Z_Align_To_Stack_2nd	pshm->P[9099]
#define	P_Slave8_Move_Z_Stack_To_Align_1st	pshm->P[9100]
#define	P_Slave8_Move_Z_Stack_To_Align_2nd	pshm->P[9101]
#define	P_Slave8_Move_Z_Stack_To_Align_3rd	pshm->P[9102]
#define	P_Slave8_Move_Z_Align_Up	pshm->P[9103]
#define	P_Slave8_Move_Z_Align_Down	pshm->P[9104]
#define	P_Slave8_Move_Z_Stack_Up	pshm->P[9105]
#define	P_Slave8_Move_Z_Stack_Down	pshm->P[9106]
#define	P_Slave10_Move_X_Belt_Align	pshm->P[9107]
#define	P_Slave10_Move_X_Align_Belt	pshm->P[9108]
#define	P_Slave10_Move_X_Belt_NG	pshm->P[9109]
#define	P_Slave10_Move_X_NG_Belt	pshm->P[9110]
#define	P_Slave10_Move_X_Align_NG	pshm->P[9111]
#define	P_Slave10_Move_Z_Belt_Down	pshm->P[9112]
#define	P_Slave10_Move_Z_Belt_Up	pshm->P[9113]
#define	P_Slave10_Move_X_NG_Align	pshm->P[9114]
#define	P_Slave10_Move_Z_Align_Down	pshm->P[9115]
#define	P_Slave10_Move_Z_Align_Up	pshm->P[9116]
#define	P_Slave10_Move_Z_NG_Down	pshm->P[9117]
#define	P_Slave10_Move_Z_NG_Up	pshm->P[9118]
#define	P_Slave1_Offset_X_Align	pshm->P[9119]
#define	P_Slave1_Offset_X_Belt	pshm->P[9120]
#define	P_Slave1_Offset_X_NG	pshm->P[9121]
#define	P_Slave1_Offset_Z_Belt	pshm->P[9122]
#define	P_Slave1_Offset_Z_Align	pshm->P[9123]
#define	P_Slave1_Offset_Z_NG	pshm->P[9124]
#define	P_Slave1_Offset_Z_Up	pshm->P[9125]
#define	P_Slave3_Offset_X_Stack	pshm->P[9126]
#define	P_Slave3_Offset_X_Align	pshm->P[9127]
#define	P_Slave3_Offset_Z_Stack	pshm->P[9128]
#define	P_Slave3_Offset_Z_Align	pshm->P[9129]
#define	P_Slave3_Offset_Z_Align_Up	pshm->P[9130]
#define	P_Slave3_Offset_Z_Align_Down	pshm->P[9131]
#define	P_Slave3_Offset_Z_Stack_Up	pshm->P[9132]
#define	P_Slave3_Offset_Z_Stack_Down	pshm->P[9133]
#define	P_Slave3_Offset_Z_Wait_Pos	pshm->P[9134]
#define	P_Slave4_Offset_X_Clamp_On	pshm->P[9135]
#define	P_Slave4_Offset_X_Clamp_Off	pshm->P[9136]
#define	P_Slave4_Offset_Z_Clamp_On	pshm->P[9137]
#define	P_Slave4_Offset_Z_Clamp_Off	pshm->P[9138]
#define	P_Slave5_Offset_X_Anode_Move_1st	pshm->P[9139]
#define	P_Slave5_Offset_X_Anode_Move_2nd	pshm->P[9140]
#define	P_Slave5_Offset_X_Cathode_Move_1st	pshm->P[9141]
#define	P_Slave5_Offset_X_Cathode_Move_2nd	pshm->P[9142]
#define	P_Slave5_Offset_X_Sepa_1st	pshm->P[9143]
#define	P_Slave5_Offset_X_Sepa_2nd	pshm->P[9144]
#define	P_Slave5_Offset_X_Sepa_3rd	pshm->P[9145]
#define	P_Slave5_Offset_X_Sepa_4th	pshm->P[9146]
#define	P_Slave5_Offset_X_Sepa_5th	pshm->P[9147]
#define	P_Slave5_Offset_Z_Sepa_1st	pshm->P[9148]
#define	P_Slave5_Offset_Z_Sepa_2nd	pshm->P[9149]
#define	P_Slave5_Offset_Z_Sepa_3rd	pshm->P[9150]
#define	P_Slave5_Offset_Z_Sepa_4th	pshm->P[9151]
#define	P_Slave5_Offset_Z_Sepa_5th	pshm->P[9152]
#define	P_Slave6_Offset_X_For_Sepa_Mode	pshm->P[9153]
#define	P_Slave6_Offset_Z_Wait_Pos	pshm->P[9154]
#define	P_Slave7_Offset_X_Clamp_On	pshm->P[9155]
#define	P_Slave7_Offset_X_Clamp_Off	pshm->P[9156]
#define	P_Slave7_Offset_Z_Clamp_On	pshm->P[9157]
#define	P_Slave7_Offset_Z_Clamp_Off	pshm->P[9158]
#define	P_Slave8_Offset_X_Stack	pshm->P[9159]
#define	P_Slave8_Offset_X_Align	pshm->P[9160]
#define	P_Slave8_Offset_Z_Stack	pshm->P[9161]
#define	P_Slave8_Offset_Z_Align	pshm->P[9162]
#define	P_Slave8_Offset_Z_Align_Up	pshm->P[9163]
#define	P_Slave8_Offset_Z_Align_Down	pshm->P[9164]
#define	P_Slave8_Offset_Z_Stack_Up	pshm->P[9165]
#define	P_Slave8_Offset_Z_Stack_Down	pshm->P[9166]
#define	P_Slave8_Offset_Z_Wait_Pos	pshm->P[9167]
#define	P_Slave10_Offset_X_Align	pshm->P[9168]
#define	P_Slave10_Offset_X_Belt	pshm->P[9169]
#define	P_Slave10_Offset_X_NG	pshm->P[9170]
#define	P_Slave10_Offset_Z_Belt	pshm->P[9171]
#define	P_Slave10_Offset_Z_Align	pshm->P[9172]
#define	P_Slave10_Offset_Z_NG	pshm->P[9173]
#define	P_Slave10_Offset_Z_Up	pshm->P[9174]
#define	P_Slave1_Target_Z_CV_Blower_On_Pos	pshm->P[9175]
#define	P_Slave1_Target_Z_CV_Blower_Off_Pos	pshm->P[9176]
#define	P_Slave10_Target_Z_CV_Blower_On_Pos	pshm->P[9177]
#define	P_Slave10_Target_Z_CV_Blower_Off_Pos	pshm->P[9178]
#define	P_Anode_CV_Blower_On_Flag	pshm->P[9179]
#define	P_Anode_CV_Blower_Off_Flag	pshm->P[9180]
#define	P_Cathode_CV_Blower_On_Flag	pshm->P[9181]
#define	P_Cathode_CV_Blower_Off_Flag	pshm->P[9182]
#define	P_Select_RingBlow_Off_Use	pshm->P[9183]
#define	P_2nd_PNP_Stack_Down_Pos	pshm->P[9184]
#define	P_2nd_PNP_Stack_Up_Pos	pshm->P[9185]
#define	P_Anode_Clamp_Down_MNTR	pshm->P[9186]
#define	P_Cathode_Clamp_Down_MNTR	pshm->P[9187]
#define	P_Clamp_1st_Vector_Y	pshm->P[9188]
#define	P_Clamp_1st_Vector_Z	pshm->P[9189]
#define	P_Clamp_1st_Vector_Vel	pshm->P[9190]
#define	P_Clamp_2nd_Vector_Y	pshm->P[9191]
#define	P_Clamp_2nd_Vector_Z	pshm->P[9192]
#define	P_Clamp_2nd_Vector_Vel	pshm->P[9193]
#define	P_Clamp_2nd_TM_Time	pshm->P[9194]
#define	P_FR_Ta	pshm->P[9195]
#define	P_FR_Ts	pshm->P[9196]
#define	P_FR_Tm	pshm->P[9197]
#define	P_Master_Motion_Heartbit_Flag	pshm->P[9198]
#define	P_Master_Heartbit_Trigger	pshm->P[9199]
#define	P_Parity_Heartbit_Bit	pshm->P[9200]
#define	P_Master_Heartbit_Move	pshm->P[9201]
#define	P_Force_Stop_Flag	pshm->P[9202]
#define	P_Execute_DryRun_Stop_Timer	pshm->P[9203]
#define	P_DryRun_Timer	pshm->P[9204]
#define	P_Dryrun_Operating_Time	pshm->P[9205]
#define	P_Anode_Align_Vac_Err_On	pshm->P[9206]
#define	P_Cathode_Align_Vac_Err_On	pshm->P[9207]
#define	P_Anode_1ST_TR_Vac_Err_On	pshm->P[9208]
#define	P_Anode_2ND_TR_Vac_Err_On	pshm->P[9209]
#define	P_Cathode_1ST_TR_Vac_Err_On	pshm->P[9210]
#define	P_Cathode_2ND_TR_Vac_Err_On	pshm->P[9211]
#define	P_MNTR_PLC0_Task_Time(i)	pshm->P[(9212+i)%MAX_P]
#define	P_MNTR_PLC0_Task_Max_Time	pshm->P[9214]
#define	P_MNTR_PLC1_Task_Time(i)	pshm->P[(9215+i)%MAX_P]
#define	P_MNTR_PLC1_Task_Max_Time	pshm->P[9217]
#define	P_MNTR_PLC2_Task_Time(i)	pshm->P[(9218+i)%MAX_P]
#define	P_MNTR_PLC2_Task_Max_Time	pshm->P[9220]
#define	P_MNTR_PLC3_Task_Time(i)	pshm->P[(9221+i)%MAX_P]
#define	P_MNTR_PLC3_Task_Max_Time	pshm->P[9223]
#define	P_MNTR_PLC4_Task_Time(i)	pshm->P[(9224+i)%MAX_P]
#define	P_MNTR_PLC4_Task_Max_Time	pshm->P[9226]
#define	P_MNTR_PLC5_Task_Time(i)	pshm->P[(9227+i)%MAX_P]
#define	P_MNTR_PLC5_Task_Max_Time	pshm->P[9229]
#define	P_MNTR_PLC6_Task_Time(i)	pshm->P[(9230+i)%MAX_P]
#define	P_MNTR_PLC6_Task_Max_Time	pshm->P[9232]
#define	P_MNTR_PLC7_Task_Time(i)	pshm->P[(9233+i)%MAX_P]
#define	P_MNTR_PLC7_Task_Max_Time	pshm->P[9235]
#define	P_MNTR_PLC8_Task_Time(i)	pshm->P[(9236+i)%MAX_P]
#define	P_MNTR_PLC8_Task_Max_Time	pshm->P[9238]
#define	P_MNTR_PLC9_Task_Time(i)	pshm->P[(9239+i)%MAX_P]
#define	P_MNTR_PLC9_Task_Max_Time	pshm->P[9241]
#define	P_MNTR_PLC10_Task_Time(i)	pshm->P[(9242+i)%MAX_P]
#define	P_MNTR_PLC10_Task_Max_Time	pshm->P[9244]
#define	P_MNTR_PLC11_Task_Time(i)	pshm->P[(9245+i)%MAX_P]
#define	P_MNTR_PLC11_Task_Max_Time	pshm->P[9247]
#define	P_MNTR_PLC12_Task_Time(i)	pshm->P[(9248+i)%MAX_P]
#define	P_MNTR_PLC12_Task_Max_Time	pshm->P[9250]
#define	P_MNTR_PLC13_Task_Time(i)	pshm->P[(9251+i)%MAX_P]
#define	P_MNTR_PLC13_Task_Max_Time	pshm->P[9253]
#define	P_MNTR_PLC14_Task_Time(i)	pshm->P[(9254+i)%MAX_P]
#define	P_MNTR_PLC14_Task_Max_Time	pshm->P[9256]
#define	P_MNTR_PLC15_Task_Time(i)	pshm->P[(9257+i)%MAX_P]
#define	P_MNTR_PLC15_Task_Max_Time	pshm->P[9259]
#define	P_MNTR_PLC16_Task_Time(i)	pshm->P[(9260+i)%MAX_P]
#define	P_MNTR_PLC16_Task_Max_Time	pshm->P[9262]
#define	P_MNTR_PLC17_Task_Time(i)	pshm->P[(9263+i)%MAX_P]
#define	P_MNTR_PLC17_Task_Max_Time	pshm->P[9265]
#define	P_MNTR_PLC18_Task_Time(i)	pshm->P[(9266+i)%MAX_P]
#define	P_MNTR_PLC18_Task_Max_Time	pshm->P[9268]
#define	P_MNTR_PLC19_Task_Time(i)	pshm->P[(9269+i)%MAX_P]
#define	P_MNTR_PLC19_Task_Max_Time	pshm->P[9271]
#define	P_MNTR_PLC20_Task_Time(i)	pshm->P[(9272+i)%MAX_P]
#define	P_MNTR_PLC20_Task_Max_Time	pshm->P[9274]
#define	P_MNTR_PLC21_Task_Time(i)	pshm->P[(9275+i)%MAX_P]
#define	P_MNTR_PLC21_Task_Max_Time	pshm->P[9277]
#define	P_MNTR_PLC22_Task_Time(i)	pshm->P[(9278+i)%MAX_P]
#define	P_MNTR_PLC22_Task_Max_Time	pshm->P[9280]
#define	P_MNTR_PLC23_Task_Time(i)	pshm->P[(9281+i)%MAX_P]
#define	P_MNTR_PLC23_Task_Max_Time	pshm->P[9283]
#define	P_MNTR_PLC24_Task_Time(i)	pshm->P[(9284+i)%MAX_P]
#define	P_MNTR_PLC24_Task_Max_Time	pshm->P[9286]
#define	P_MNTR_PLC25_Task_Time(i)	pshm->P[(9287+i)%MAX_P]
#define	P_MNTR_PLC25_Task_Max_Time	pshm->P[9289]
#define	P_MNTR_PLC26_Task_Time(i)	pshm->P[(9290+i)%MAX_P]
#define	P_MNTR_PLC26_Task_Max_Time	pshm->P[9292]
#define	P_MNTR_PLC27_Task_Time(i)	pshm->P[(9293+i)%MAX_P]
#define	P_MNTR_PLC27_Task_Max_Time	pshm->P[9295]
#define	P_MNTR_PLC28_Task_Time(i)	pshm->P[(9296+i)%MAX_P]
#define	P_MNTR_PLC28_Task_Max_Time	pshm->P[9298]
#define	P_MNTR_PLC29_Task_Time(i)	pshm->P[(9299+i)%MAX_P]
#define	P_MNTR_PLC29_Task_Max_Time	pshm->P[9301]
#define	P_MNTR_PLC30_Task_Time(i)	pshm->P[(9302+i)%MAX_P]
#define	P_MNTR_PLC30_Task_Max_Time	pshm->P[9304]
#define	P_Coord_Shutdown_Status_log	pshm->P[9305]
#define	P_In_Pos_Trg	pshm->P[9306]
#define	P_Position_Calc_Status	pshm->P[9307]
#define	P_Vision_Result(i)	pshm->P[(9308+i)%MAX_P]
#define	P_Vision_Result_Get_First_Cycle(i)	pshm->P[(9312+i)%MAX_P]
#define	P_Init_Result(i)	pshm->P[(9316+i)%MAX_P]
#define	P_PNP_Pos	pshm->P[9322]
#define	P_Execute_Manage_Mode	pshm->P[9323]
#define	P_Align_NG_Tack_Flag	pshm->P[9324]
#define	P_2th_Ng_Front_Vision_Pos	pshm->P[9325]
#define	P_Anode_Align_OK_Flag	pshm->P[9326]
#define	P_Anode_Align_NG_Flag	pshm->P[9327]
#define	P_Cathode_Align_OK_Flag	pshm->P[9328]
#define	P_Cathode_Align_NG_Flag	pshm->P[9329]
#define	P_Stack_Table_OK_Flag	pshm->P[9330]
#define	P_Anode_Retry_OK_Flag	pshm->P[9331]
#define	P_Anode_Retry_NG_Flag	pshm->P[9332]
#define	P_Cathode_Retry_OK_Flag	pshm->P[9333]
#define	P_Cathode_Retry_NG_Flag	pshm->P[9334]
#define	P_Func_Anode_2TR_Avoid_X_Value	pshm->P[9335]
#define	P_Func_Cathode_2TR_Avoid_X_Value	pshm->P[9336]
#define	P_Anode_Surf_Insp_Trigger	pshm->P[9337]
#define	P_Cathode_Surf_Insp_Trigger	pshm->P[9338]
#define	P_CMD_Cathode_Vision_Tigger	pshm->P[9339]
#define	P_CMD_Anode_Vision_Tigger	pshm->P[9340]
#define	P_CMD_Stack_Table_Vision_Trigger	pshm->P[9341]
#define	P_CMD_Cathode_Empty_Table_Vision	pshm->P[9342]
#define	P_CMD_Anode_Empty_Table_Vision	pshm->P[9343]
#define	P_CMD_Cathode_Existence_Vision	pshm->P[9344]
#define	P_CMD_Anode_Existence_Vision	pshm->P[9345]
#define	P_Align_Manager_Error_Cnt	pshm->P[9346]
#define	P_Surf_Manager_Error_Cnt	pshm->P[9347]
#define	P_Retry_Manager_Error_Cnt	pshm->P[9348]
#define	P_Stack_Manager_Error_Cnt	pshm->P[9349]
#define	P_Existence_Manager_Error_Cnt	pshm->P[9350]
#define	P_Where_To_Occur_Error_Retry_Status	pshm->P[9351]
#define	P_Which_Retry_Insp_Type	pshm->P[9352]
#define	P_Where_To_Occur_Error_Align_Status	pshm->P[9353]
#define	P_Which_Align_Insp_Type	pshm->P[9354]
#define	P_Where_To_Occur_Error_Surf_Status	pshm->P[9355]
#define	P_Which_Surf_Insp_Type	pshm->P[9356]
#define	P_Where_To_Occur_Error_Existence_Status	pshm->P[9357]
#define	P_Which_Existence_Insp_Type	pshm->P[9358]
#define	P_Where_To_Occur_Error_Stack_Status	pshm->P[9359]
#define	P_Vision_Clamping_Flag	pshm->P[9360]
#define	P_Exist_Insp_Total_Time	pshm->P[9361]
#define	P_Exist_Insp_Trg_Time	pshm->P[9362]
#define	P_Stack_Insp_Total_Time	pshm->P[9363]
#define	P_Stack_Trg_Time	pshm->P[9364]
#define	P_Surf_Insp_Total_Time	pshm->P[9365]
#define	P_Retry_Insp_Total_Time	pshm->P[9366]
#define	P_Surf_TimeOut_Cnt	pshm->P[9367]
#define	P_Align_TimeOut_Cnt	pshm->P[9368]
#define	P_Retry_TimeOut_Cnt	pshm->P[9369]
#define	P_Stack_TimeOut_Cnt	pshm->P[9370]
#define	P_Align_Insp_Total_Time	pshm->P[9371]
#define	P_Align_Trg_Time	pshm->P[9372]
#define	P_Aligning_Time	pshm->P[9373]
#define	P_Cathode_Empty_Table_Vision_Flag	pshm->P[9374]
#define	P_Anode_Empty_Table_Vision_Flag	pshm->P[9375]
#define	P_Selected_Surf_Insp_Type	pshm->P[9376]
#define	P_Selected_Align_Insp_Type	pshm->P[9377]
#define	P_Selected_Retry_Insp_Type	pshm->P[9378]
#define	P_Selected_Exist_Insp_Type	pshm->P[9379]
#define	P_VISION_RECIPE_PLC4_Surface_TrgOff	pshm->P[9380]
#define	P_VISION_RECIPE_PLC4_Surface_Ins_Time	pshm->P[9381]
#define	P_CMD_Cathode_Vision_Retry	pshm->P[9382]
#define	P_CMD_Anode_Vision_Retry	pshm->P[9383]
#define	P_Prev_Align_Manager_Status	pshm->P[9384]
#define	P_Prev_Surf_Manager_Status	pshm->P[9385]
#define	P_Prev_Exist_Manager_Status	pshm->P[9386]
#define	P_Prev_Selected_Align_Type	pshm->P[9387]
#define	P_Prev_Selected_Surf_Type	pshm->P[9388]
#define	P_Prev_Selected_Exist_Type	pshm->P[9389]
#define	P_Status_Align_Vision_Manager	pshm->P[9390]
#define	P_Status_Surface_Vision_Manager	pshm->P[9391]
#define	P_Status_Sheet_Existence_Vision_Manager	pshm->P[9392]
#define	P_Status_Stack_Vision_Manager	pshm->P[9393]
#define	P_Status_Retry_Vision_Manager	pshm->P[9394]
#define	P_Vision_All_Status_Manager_Init_Flag	pshm->P[9395]
#define	P_Cycle_Stop_Command	pshm->P[9396]
#define	P_Surface_Inspection_Complete_Error	pshm->P[9397]
#define	P_Switching_From_Cathode_To_Anode_Flag	pshm->P[9398]
#define	P_Switching_From_Anode_To_Cathode_Flag	pshm->P[9399]
#define	P_Switching_Mode_Complete_Flag	pshm->P[9400]
#define	P_Surf_Cathode_Error_Count	pshm->P[9401]
#define	P_Surf_Anode_Error_Count	pshm->P[9402]
#define	P_First_Anode_Sheet_Supply_Flag	pshm->P[9403]
#define	P_First_Cathode_Sheet_Supply_Flag	pshm->P[9404]
#define	P_Set_Cathode_Align_Pos_Zero	pshm->P[9405]
#define	P_Set_Anode_Align_Pos_Zero	pshm->P[9406]
#define	P_Cathode_Cur_Mode	pshm->P[9407]
#define	P_Anode_Cur_Mode	pshm->P[9408]
#define	P_AN_to_CA_DR_Trig	pshm->P[9409]
#define	P_CA_to_AN_DR_Trig	pshm->P[9410]
#define	P_Tension_FF(i)	pshm->P[(9411+i)%MAX_P]
#define	P_Sepa_CompDac_Value	pshm->P[9413]
#define	P_FR_Move_Command	pshm->P[9414]
#define	P_FF_Enable	pshm->P[9415]
#define	P_Anode_Run_FR_Move_Check_AI	pshm->P[9416]
#define	P_Cathode_Run_FR_Move_Check_AI	pshm->P[9417]
#define	P_FR_Move_Check_AI_OffSet	pshm->P[9418]
#define	P_FR_AI_Value(i)	pshm->P[(9419+i)%MAX_P]
#define	P_Aver_FR_AI_Value	pshm->P[9424]
#define	P_Process_Function_Command	pshm->P[9425]
#define	P_HOLD_Existence_Insp_State_Machine	pshm->P[9426]
#define	P_Execute_IsEnable_State_Machine	pshm->P[9427]
#define	P_EXECUTE_FUNC_Ready_STEP	pshm->P[9428]
#define	P_Execute_First_Sepa_Ontable_State_Machine	pshm->P[9429]
#define	P_Execute_Prod_Manage_State_Machine	pshm->P[9430]
#define	P_Execute_Enqueue_State_Machine	pshm->P[9431]
#define	P_STOP_Initial_Process_STEP	pshm->P[9432]
#define	P_STOP_Cylce_Stop_STEP	pshm->P[9433]
#define	P_Stop_CycleStop_Position	pshm->P[9434]
#define	P_Upcount_NextStep	pshm->P[9435]
#define	P_SUSPEND_FUNC_JR_Discharge_STEP	pshm->P[9436]
#define	P_SUSPEND_FUNC_ARC_STEP	pshm->P[9437]
#define	P_Suspend_ARC_Complete_Flag	pshm->P[9438]
#define	P_EXECUTE_FUNC_Debug_On_Sepa_STEP	pshm->P[9439]
#define	P_QueueCommand_Occurs	pshm->P[9440]
#define	P_EXECUTE_STEP	pshm->P[9441]
#define	P_SUSPEND_STEP	pshm->P[9442]
#define	P_HOLD_STEP	pshm->P[9443]
#define	P_STOP_STEP	pshm->P[9444]
#define	P_EXECUTE_Error_STEP	pshm->P[9445]
#define	P_SUSPEND_Error_STEP	pshm->P[9446]
#define	P_HOLD_Error_STEP	pshm->P[9447]
#define	P_STOP_Error_STEP	pshm->P[9448]
#define	P_Queue_Enqueue_Command	pshm->P[9449]
#define	P_Queue_Enqueue_return	pshm->P[9450]
#define	P_Queue_Dequeue_Command	pshm->P[9451]
#define	P_Queue_Dequeue_return	pshm->P[9452]
#define	P_Queue_Peek_Command	pshm->P[9453]
#define	P_Dequeue_Log(i)	pshm->P[(9454+i)%MAX_P]
#define	P_Dummy_Dequeue	pshm->P[9474]
#define	P_Queue_Command_Status	pshm->P[9475]
#define	P_Queue_Process_Command	pshm->P[9476]
#define	P_Queue_Process_Status	pshm->P[9477]
#define	P_Coord_Test	pshm->P[9478]
#define	P_Coord_Test3	pshm->P[9479]
#define	P_Coord_Test2	pshm->P[9480]
#define	P_Coord_Motion_Prog_Down_Entering_Bit	pshm->P[9481]
#define	P_PMAC_Coord_Status_Bit	pshm->P[9482]
#define	P_Coord_Down_Check_Bit	pshm->P[9483]
#define	P_PMAC_Coord_Down_Inspection_Flag	pshm->P[9484]
#define	P_PMAC_Coord_Down_Num	pshm->P[9485]
#define	P_PMAC_Coord_Error_Status	pshm->P[9486]
#define	P_Motor_Current_Pos(i)	pshm->P[(9487+i)%MAX_P]
#define	P_Axis_Scale_Value(i)	pshm->P[(9537+i)%MAX_P]
#define	P_Except_Return_Array(i)	pshm->P[(9587+i)%MAX_P]
#define	P_Hold_Memory(i)	pshm->P[(9687+i)%MAX_P]
#define	P_Suspend_Memory(i)	pshm->P[(9692+i)%MAX_P]
#define	P_Execute_Memory(i)	pshm->P[(9697+i)%MAX_P]
#define	P_Stop_Memory(i)	pshm->P[(9702+i)%MAX_P]
#define	P_PLC01_Process_Function_Enter_Flag	pshm->P[9707]
#define	P_PLC01_SubMotion_Active	pshm->P[9708]
#define	P_PLC01_SlaveMotion_Active	pshm->P[9709]
#define	P_EXECUTE_Isenable_MNTR	pshm->P[9710]
#define	P_EXECUTE_IsEnable_Firt_Stacking_Flag	pshm->P[9711]
#define	P_PLC01_Execute_Retry_Sepa_Mode_Count	pshm->P[9712]
#define	P_SUSPEND_MNTR	pshm->P[9713]
#define	P_SUSPEND_MNTR_2	pshm->P[9714]
#define	P_Execute_Last_Run_Flag	pshm->P[9715]
#define	P_Suspend_ARC_Request_Flag	pshm->P[9716]
#define	P_Hold_Queue_Exist_Insp_MNTR	pshm->P[9717]
#define	P_CirQueue_Status_Value	pshm->P[9718]
#define	P_Debug_CirQueue_Status	pshm->P[9719]
#define	P_Front_Index	pshm->P[9720]
#define	P_Rear_Index	pshm->P[9721]
#define	P_Index_Max	pshm->P[9722]
#define	P_CircularQueue_Command_array(i)	pshm->P[(9723+i)%MAX_P]
#define	P_CirQueue_Length	pshm->P[9734]
#define	P_Queue_Full	pshm->P[9735]
#define	P_Queue_Empty	pshm->P[9736]
#define	P_Queue_PeekEmpty	pshm->P[9737]
#define	P_Self_items	pshm->P[9738]
#define	P_Hold_Pause_Need_Flag	pshm->P[9739]
#define	P_Pause_Ready_Flag	pshm->P[9740]
#define	P_Pause_Running_Flag	pshm->P[9741]
#define	P_Resume_Ready_Flag	pshm->P[9742]
#define	P_Resume_Start_Flag	pshm->P[9743]
#define	P_Hold_Resume_Need_Flag	pshm->P[9744]
#define	P_Stack_Heart_Bit_Timer	pshm->P[9745]
#define	P_Stack_Heart_Bit_Calc	pshm->P[9746]
#define	P_Stack_Heart_Bit_Sync_State_Machine	pshm->P[9747]
#define	P_Pause_Anode_MNTR_Min_Trigger	pshm->P[9748]
#define	P_Pause_Anode_MNTR_Max_Trigger	pshm->P[9749]
#define	P_Pause_Cathode_MNTR_Min_Trigger	pshm->P[9750]
#define	P_Pause_Cathode_MNTR_Max_Trigger	pshm->P[9751]
#define	P_Pause_Protect_Variable	pshm->P[9752]
#define	P_Resume_Protect_Variable	pshm->P[9753]
#define	P_Sepa_Mode_Opposite_Resume_Free	pshm->P[9754]
#define	P_Sepa_To_Normal_Mode_Sync_Flag	pshm->P[9755]
#define	P_Sepa_To_Normal_Mode_Sync_Err_Avoid	pshm->P[9756]
#define	P_Recipe_1st_MotorNo(i)	pshm->P[(9757+i)%MAX_P]
#define	P_Recipe_2nd_MotorNo(i)	pshm->P[(9807+i)%MAX_P]
#define	P_Recipe_3rd_MotorNo(i)	pshm->P[(9857+i)%MAX_P]
#define	P_Recipe_4th_MotorNo(i)	pshm->P[(9907+i)%MAX_P]
#define	P_Recipe_5th_MotorNo(i)	pshm->P[(9957+i)%MAX_P]
#define	P_Recipe_6th_MotorNo(i)	pshm->P[(10007+i)%MAX_P]
#define	P_X_Axis_Num	pshm->P[10057]
#define	P_Y_Axis_Num	pshm->P[10058]
#define	P_Z_Axis_Num	pshm->P[10059]
#define	P_ZZ_Axis_Num	pshm->P[10060]
#define	P_X_Unit	pshm->P[10061]
#define	P_Y_Unit	pshm->P[10062]
#define	P_Z_Unit	pshm->P[10063]
#define	P_ZZ_Unit	pshm->P[10064]
#define	P_Pos_Memory_Bit_Save	pshm->P[10065]
#define	P_Total_Unit_Bit	pshm->P[10066]
#define	P_Total_Unit_Pos	pshm->P[10067]
#define	P_Anode_1st_Unit_Status	pshm->P[10068]
#define	P_Anode_2nd_Unit_Status	pshm->P[10069]
#define	P_Anode_CLP_Unit_Status	pshm->P[10070]
#define	P_FinalRoll_Unit_Status	pshm->P[10071]
#define	P_StackTable_Unit_Status	pshm->P[10072]
#define	P_Cathode_CLP_Unit_Status	pshm->P[10073]
#define	P_Cathode_2nd_Unit_Status	pshm->P[10074]
#define	P_Cathode_1st_Unit_Status	pshm->P[10075]
#define	P_1st_Unloader_Unit_Status	pshm->P[10076]
#define	P_Cathode_NG_PNP_Status	pshm->P[10077]
#define	P_Anode_NG_PNP_Status	pshm->P[10078]
#define	P_Unit_integrated_Status	pshm->P[10079]
#define	P_Unit_Status_Update_Flag	pshm->P[10080]
#define	P_Memory_Tower_Search_Flag	pshm->P[10081]
#define	P_MemTow_integrated_return	pshm->P[10082]
#define	P_Error_STMS_Memory_Tower_Status	pshm->P[10083]
#define	P_STMS_Memory_Tower_Status	pshm->P[10084]
#define	P_Recipe_M01_POS(i)	pshm->P[(10085+i)%MAX_P]
#define	P_Recipe_M02_POS(i)	pshm->P[(10096+i)%MAX_P]
#define	P_Recipe_M03_POS(i)	pshm->P[(10107+i)%MAX_P]
#define	P_Recipe_M04_POS(i)	pshm->P[(10118+i)%MAX_P]
#define	P_Recipe_M05_POS(i)	pshm->P[(10129+i)%MAX_P]
#define	P_Recipe_M06_POS(i)	pshm->P[(10140+i)%MAX_P]
#define	P_Recipe_M07_POS(i)	pshm->P[(10151+i)%MAX_P]
#define	P_Recipe_M08_POS(i)	pshm->P[(10162+i)%MAX_P]
#define	P_Recipe_M09_POS(i)	pshm->P[(10173+i)%MAX_P]
#define	P_Recipe_M10_POS(i)	pshm->P[(10184+i)%MAX_P]
#define	P_Recipe_M11_POS(i)	pshm->P[(10195+i)%MAX_P]
#define	P_Recipe_M12_POS(i)	pshm->P[(10206+i)%MAX_P]
#define	P_Recipe_M13_POS(i)	pshm->P[(10217+i)%MAX_P]
#define	P_Recipe_M14_POS(i)	pshm->P[(10228+i)%MAX_P]
#define	P_Recipe_M15_POS(i)	pshm->P[(10239+i)%MAX_P]
#define	P_Recipe_M16_POS(i)	pshm->P[(10250+i)%MAX_P]
#define	P_Recipe_M17_POS(i)	pshm->P[(10261+i)%MAX_P]
#define	P_Recipe_M18_POS(i)	pshm->P[(10272+i)%MAX_P]
#define	P_Recipe_M19_POS(i)	pshm->P[(10283+i)%MAX_P]
#define	P_Recipe_M20_POS(i)	pshm->P[(10294+i)%MAX_P]
#define	P_Recipe_M21_POS(i)	pshm->P[(10305+i)%MAX_P]
#define	P_Recipe_M22_POS(i)	pshm->P[(10316+i)%MAX_P]
#define	P_Recipe_M23_POS(i)	pshm->P[(10327+i)%MAX_P]
#define	P_Recipe_M24_POS(i)	pshm->P[(10338+i)%MAX_P]
#define	P_Recipe_M25_POS(i)	pshm->P[(10349+i)%MAX_P]
#define	P_Recipe_M26_POS(i)	pshm->P[(10360+i)%MAX_P]
#define	P_Recipe_M27_POS(i)	pshm->P[(10371+i)%MAX_P]
#define	P_Recipe_M28_POS(i)	pshm->P[(10382+i)%MAX_P]
#define	P_Recipe_M29_POS(i)	pshm->P[(10393+i)%MAX_P]
#define	P_Recipe_M30_POS(i)	pshm->P[(10404+i)%MAX_P]
#define	P_Recipe_M31_POS(i)	pshm->P[(10415+i)%MAX_P]
#define	P_Recipe_M32_POS(i)	pshm->P[(10426+i)%MAX_P]
#define	P_Recipe_M33_POS(i)	pshm->P[(10437+i)%MAX_P]
#define	P_Recipe_M34_POS(i)	pshm->P[(10448+i)%MAX_P]
#define	P_Recipe_M35_POS(i)	pshm->P[(10459+i)%MAX_P]
#define	P_Recipe_M36_POS(i)	pshm->P[(10470+i)%MAX_P]
#define	P_Recipe_M37_POS(i)	pshm->P[(10481+i)%MAX_P]
#define	P_Recipe_M38_POS(i)	pshm->P[(10492+i)%MAX_P]
#define	P_Recipe_M39_POS(i)	pshm->P[(10503+i)%MAX_P]
#define	P_Recipe_M40_POS(i)	pshm->P[(10514+i)%MAX_P]
#define	P_Recipe_M41_POS(i)	pshm->P[(10525+i)%MAX_P]
#define	P_Recipe_M42_POS(i)	pshm->P[(10536+i)%MAX_P]
#define	P_Recipe_M43_POS(i)	pshm->P[(10547+i)%MAX_P]
#define	P_Recipe_M44_POS(i)	pshm->P[(10558+i)%MAX_P]
#define	P_Recipe_M45_POS(i)	pshm->P[(10569+i)%MAX_P]
#define	P_Recipe_M46_POS(i)	pshm->P[(10580+i)%MAX_P]
#define	P_Recipe_M47_POS(i)	pshm->P[(10591+i)%MAX_P]
#define	P_Recipe_M48_POS(i)	pshm->P[(10602+i)%MAX_P]
#define	P_Recipe_M49_POS(i)	pshm->P[(10613+i)%MAX_P]
#define	P_Recipe_M50_POS(i)	pshm->P[(10624+i)%MAX_P]
#define	P_Memory_Tower_X_Err_Flag	pshm->P[10635]
#define	P_Memory_Tower_Y_Err_Flag	pshm->P[10636]
#define	P_Memory_Tower_Z_Err_Flag	pshm->P[10637]
#define	P_Memory_Tower_ZZ_Err_Flag	pshm->P[10638]
#define	P_CA_Clamp_Cell_Down_Pos	pshm->P[10639]
#define	P_AN_Clamp_Cell_Down_Pos	pshm->P[10640]
#define	P_Error_X_Axis_Packml(i)	pshm->P[(10641+i)%MAX_P]
#define	P_Error_X_Axis_Dequeue(i)	pshm->P[(10647+i)%MAX_P]
#define	P_Error_X_Axis_Num(i)	pshm->P[(10653+i)%MAX_P]
#define	P_Memory_Tower_Err_Pos_X_Save(i)	pshm->P[(10659+i)%MAX_P]
#define	P_Error_Y_Axis_Packml(i)	pshm->P[(10665+i)%MAX_P]
#define	P_Error_Y_Axis_Dequeue(i)	pshm->P[(10671+i)%MAX_P]
#define	P_Error_Y_Axis_Num(i)	pshm->P[(10677+i)%MAX_P]
#define	P_Memory_Tower_Err_Pos_Y_Save(i)	pshm->P[(10683+i)%MAX_P]
#define	P_Error_Z_Axis_Packml(i)	pshm->P[(10689+i)%MAX_P]
#define	P_Error_Z_Axis_Dequeue(i)	pshm->P[(10695+i)%MAX_P]
#define	P_Error_Z_Axis_Num(i)	pshm->P[(10701+i)%MAX_P]
#define	P_Memory_Tower_Err_Pos_Z_Save(i)	pshm->P[(10707+i)%MAX_P]
#define	P_Error_ZZ_Axis_Packml(i)	pshm->P[(10713+i)%MAX_P]
#define	P_Error_ZZ_Axis_Dequeue(i)	pshm->P[(10719+i)%MAX_P]
#define	P_Error_ZZ_Axis_Num(i)	pshm->P[(10725+i)%MAX_P]
#define	P_Memory_Tower_Err_Pos_ZZ_Save(i)	pshm->P[(10731+i)%MAX_P]
#define	P_PNP_Abort_Use_Bit	pshm->P[10737]
#define	P_PNP_Abort_Use_Total_Bit	pshm->P[10738]
#define	P_C_1st_PNP_FWD_Abort_Use_Bit	pshm->P[10739]
#define	P_C_1st_PNP_BWD_Abort_Use_Bit	pshm->P[10740]
#define	P_C_2nd_PNP_FWD_Abort_Use_Bit	pshm->P[10741]
#define	P_C_2nd_PNP_BWD_Abort_Use_Bit	pshm->P[10742]
#define	P_A_1st_PNP_FWD_Abort_Use_Bit	pshm->P[10743]
#define	P_A_1st_PNP_BWD_Abort_Use_Bit	pshm->P[10744]
#define	P_A_2nd_PNP_FWD_Abort_Use_Bit	pshm->P[10745]
#define	P_A_2nd_PNP_BWD_Abort_Use_Bit	pshm->P[10746]
#define	P_Single_Motor_Control_Bit	pshm->P[10747]
#define	P_C_1st_PNP_FWD_Abort_Calc_Bit	pshm->P[10748]
#define	P_C_1st_PNP_BWD_Abort_Calc_Bit	pshm->P[10749]
#define	P_C_2nd_PNP_FWD_Abort_Calc_Bit	pshm->P[10750]
#define	P_C_2nd_PNP_BWD_Abort_Calc_Bit	pshm->P[10751]
#define	P_A_1st_PNP_FWD_Abort_Calc_Bit	pshm->P[10752]
#define	P_A_1st_PNP_BWD_Abort_Calc_Bit	pshm->P[10753]
#define	P_A_2nd_PNP_FWD_Abort_Calc_Bit	pshm->P[10754]
#define	P_A_2nd_PNP_BWD_Abort_Calc_Bit	pshm->P[10755]
#define	P_C_1st_PNP_FWD_Cur_Pos	pshm->P[10756]
#define	P_C_1st_PNP_FWD_Cur_Vel	pshm->P[10757]
#define	P_C_1st_PNP_BWD_Cur_Pos	pshm->P[10758]
#define	P_C_1st_PNP_BWD_Cur_Vel	pshm->P[10759]
#define	P_C_2nd_PNP_FWD_Cur_Pos	pshm->P[10760]
#define	P_C_2nd_PNP_FWD_Cur_Vel	pshm->P[10761]
#define	P_C_2nd_PNP_BWD_Cur_Pos	pshm->P[10762]
#define	P_C_2nd_PNP_BWD_Cur_Vel	pshm->P[10763]
#define	P_A_1st_PNP_FWD_Cur_Pos	pshm->P[10764]
#define	P_A_1st_PNP_FWD_Cur_Vel	pshm->P[10765]
#define	P_A_1st_PNP_BWD_Cur_Pos	pshm->P[10766]
#define	P_A_1st_PNP_BWD_Cur_Vel	pshm->P[10767]
#define	P_A_2nd_PNP_FWD_Cur_Pos	pshm->P[10768]
#define	P_A_2nd_PNP_FWD_Cur_Vel	pshm->P[10769]
#define	P_A_2nd_PNP_BWD_Cur_Pos	pshm->P[10770]
#define	P_A_2nd_PNP_BWD_Cur_Vel	pshm->P[10771]
#define	P_C_1st_PNP_FWD_Limit_Pos	pshm->P[10772]
#define	P_C_1st_PNP_BWD_Limit_Pos	pshm->P[10773]
#define	P_C_2nd_PNP_FWD_Limit_Pos	pshm->P[10774]
#define	P_C_2nd_PNP_BWD_Limit_Pos	pshm->P[10775]
#define	P_A_1st_PNP_FWD_Limit_Pos	pshm->P[10776]
#define	P_A_1st_PNP_BWD_Limit_Pos	pshm->P[10777]
#define	P_A_2nd_PNP_FWD_Limit_Pos	pshm->P[10778]
#define	P_A_2nd_PNP_BWD_Limit_Pos	pshm->P[10779]
#define	P_C_1st_PNP_FWD_Max_Limit_Pos	pshm->P[10780]
#define	P_C_1st_PNP_BWD_Max_Limit_Pos	pshm->P[10781]
#define	P_C_2nd_PNP_FWD_Max_Limit_Pos	pshm->P[10782]
#define	P_C_2nd_PNP_BWD_Max_Limit_Pos	pshm->P[10783]
#define	P_A_1st_PNP_FWD_Max_Limit_Pos	pshm->P[10784]
#define	P_A_1st_PNP_BWD_Max_Limit_Pos	pshm->P[10785]
#define	P_A_2nd_PNP_FWD_Max_Limit_Pos	pshm->P[10786]
#define	P_A_2nd_PNP_BWD_Max_Limit_Pos	pshm->P[10787]
#define	P_C_1st_PNP_FWD_Remain_Stroke	pshm->P[10788]
#define	P_C_1st_PNP_BWD_Remain_Stroke	pshm->P[10789]
#define	P_C_2nd_PNP_FWD_Remain_Stroke	pshm->P[10790]
#define	P_C_2nd_PNP_BWD_Remain_Stroke	pshm->P[10791]
#define	P_A_1st_PNP_FWD_Remain_Stroke	pshm->P[10792]
#define	P_A_1st_PNP_BWD_Remain_Stroke	pshm->P[10793]
#define	P_A_2nd_PNP_FWD_Remain_Stroke	pshm->P[10794]
#define	P_A_2nd_PNP_BWD_Remain_Stroke	pshm->P[10795]
#define	P_C_1st_PNP_FWD_Stroke_Time	pshm->P[10796]
#define	P_C_1st_PNP_BWD_Stroke_Time	pshm->P[10797]
#define	P_C_2nd_PNP_FWD_Stroke_Time	pshm->P[10798]
#define	P_C_2nd_PNP_BWD_Stroke_Time	pshm->P[10799]
#define	P_A_1st_PNP_FWD_Stroke_Time	pshm->P[10800]
#define	P_A_1st_PNP_BWD_Stroke_Time	pshm->P[10801]
#define	P_A_2nd_PNP_FWD_Stroke_Time	pshm->P[10802]
#define	P_A_2nd_PNP_BWD_Stroke_Time	pshm->P[10803]
#define	P_C_1st_PNP_FWD_Max_Speed	pshm->P[10804]
#define	P_C_1st_PNP_BWD_Max_Speed	pshm->P[10805]
#define	P_C_2nd_PNP_FWD_Max_Speed	pshm->P[10806]
#define	P_C_2nd_PNP_BWD_Max_Speed	pshm->P[10807]
#define	P_A_1st_PNP_FWD_Max_Speed	pshm->P[10808]
#define	P_A_1st_PNP_BWD_Max_Speed	pshm->P[10809]
#define	P_A_2nd_PNP_FWD_Max_Speed	pshm->P[10810]
#define	P_A_2nd_PNP_BWD_Max_Speed	pshm->P[10811]
#define	P_C_1st_PNP_FWD_ACC_Dis	pshm->P[10812]
#define	P_C_1st_PNP_BWD_ACC_Dis	pshm->P[10813]
#define	P_C_2nd_PNP_FWD_ACC_Dis	pshm->P[10814]
#define	P_C_2nd_PNP_BWD_ACC_Dis	pshm->P[10815]
#define	P_A_1st_PNP_FWD_ACC_Dis	pshm->P[10816]
#define	P_A_1st_PNP_BWD_ACC_Dis	pshm->P[10817]
#define	P_A_2nd_PNP_FWD_ACC_Dis	pshm->P[10818]
#define	P_A_2nd_PNP_BWD_ACC_Dis	pshm->P[10819]
#define	P_C_1st_PNP_FWD_AbortTa	pshm->P[10820]
#define	P_C_1st_PNP_FWD_AbortTs	pshm->P[10821]
#define	P_C_1st_PNP_BWD_AbortTa	pshm->P[10822]
#define	P_C_1st_PNP_BWD_AbortTs	pshm->P[10823]
#define	P_C_2nd_PNP_FWD_AbortTa	pshm->P[10824]
#define	P_C_2nd_PNP_FWD_AbortTs	pshm->P[10825]
#define	P_C_2nd_PNP_BWD_AbortTa	pshm->P[10826]
#define	P_C_2nd_PNP_BWD_AbortTs	pshm->P[10827]
#define	P_A_1st_PNP_FWD_AbortTa	pshm->P[10828]
#define	P_A_1st_PNP_FWD_AbortTs	pshm->P[10829]
#define	P_A_1st_PNP_BWD_AbortTa	pshm->P[10830]
#define	P_A_1st_PNP_BWD_AbortTs	pshm->P[10831]
#define	P_A_2nd_PNP_FWD_AbortTa	pshm->P[10832]
#define	P_A_2nd_PNP_FWD_AbortTs	pshm->P[10833]
#define	P_A_2nd_PNP_BWD_AbortTa	pshm->P[10834]
#define	P_A_2nd_PNP_BWD_AbortTs	pshm->P[10835]
#define	P_C_1st_PNP_FWD_Abort_Dec_Offset	pshm->P[10836]
#define	P_C_1st_PNP_BWD_Abort_Dec_Offset	pshm->P[10837]
#define	P_C_2nd_PNP_FWD_Abort_Dec_Offset	pshm->P[10838]
#define	P_C_2nd_PNP_BWD_Abort_Dec_Offset	pshm->P[10839]
#define	P_A_1st_PNP_FWD_Abort_Dec_Offset	pshm->P[10840]
#define	P_A_1st_PNP_BWD_Abort_Dec_Offset	pshm->P[10841]
#define	P_A_2nd_PNP_FWD_Abort_Dec_Offset	pshm->P[10842]
#define	P_A_2nd_PNP_BWD_Abort_Dec_Offset	pshm->P[10843]
#define	P_1st_PNP_FWD_Abort_Offset(i)	pshm->P[(10844+i)%MAX_P]
#define	P_1st_PNP_BWD_Abort_Offset(i)	pshm->P[(10934+i)%MAX_P]
#define	P_2nd_PNP_FWD_Abort_Offset(i)	pshm->P[(11024+i)%MAX_P]
#define	P_2nd_PNP_BWD_Abort_Offset(i)	pshm->P[(11114+i)%MAX_P]
#define	P_Abort_Init_Value	pshm->P[11204]
#define	P_C_1st_PNP_FWD_AbortTa_Buffer	pshm->P[11205]
#define	P_C_1st_PNP_FWD_AbortTs_Buffer	pshm->P[11206]
#define	P_C_1st_PNP_BWD_AbortTa_Buffer	pshm->P[11207]
#define	P_C_1st_PNP_BWD_AbortTs_Buffer	pshm->P[11208]
#define	P_C_2nd_PNP_FWD_AbortTa_Buffer	pshm->P[11209]
#define	P_C_2nd_PNP_FWD_AbortTs_Buffer	pshm->P[11210]
#define	P_C_2nd_PNP_BWD_AbortTa_Buffer	pshm->P[11211]
#define	P_C_2nd_PNP_BWD_AbortTs_Buffer	pshm->P[11212]
#define	P_A_1st_PNP_FWD_AbortTa_Buffer	pshm->P[11213]
#define	P_A_1st_PNP_FWD_AbortTs_Buffer	pshm->P[11214]
#define	P_A_1st_PNP_BWD_AbortTa_Buffer	pshm->P[11215]
#define	P_A_1st_PNP_BWD_AbortTs_Buffer	pshm->P[11216]
#define	P_A_2nd_PNP_FWD_AbortTa_Buffer	pshm->P[11217]
#define	P_A_2nd_PNP_FWD_AbortTs_Buffer	pshm->P[11218]
#define	P_A_2nd_PNP_BWD_AbortTa_Buffer	pshm->P[11219]
#define	P_A_2nd_PNP_BWD_AbortTs_Buffer	pshm->P[11220]
#define	P_C_1st_PNP_FWD_Restore_Bit	pshm->P[11221]
#define	P_C_1st_PNP_BWD_Restore_Bit	pshm->P[11222]
#define	P_C_2nd_PNP_FWD_Restore_Bit	pshm->P[11223]
#define	P_C_2nd_PNP_BWD_Restore_Bit	pshm->P[11224]
#define	P_A_1st_PNP_FWD_Restore_Bit	pshm->P[11225]
#define	P_A_1st_PNP_BWD_Restore_Bit	pshm->P[11226]
#define	P_A_2nd_PNP_FWD_Restore_Bit	pshm->P[11227]
#define	P_A_2nd_PNP_BWD_Restore_Bit	pshm->P[11228]
#define	P_Align_Inspection_Time	pshm->P[11229]
#define	P_Front_Inspection_Time	pshm->P[11230]
#define	P_Stack_Inspection_Time	pshm->P[11231]
#define	P_Existence_Inspection_Time	pshm->P[11232]
#define	P_EmptyTable_Inspection_Time	pshm->P[11233]
#define	P_FirstSepa_Inspection_Time	pshm->P[11234]
#define	P_Vision_Anode_Sepa_Mode_Stack_Command	pshm->P[11235]
#define	P_Vision_Cathode_Sepa_Mode_Stack_Command	pshm->P[11236]
#define	P_Cathode_Sepa_Mode_Timer	pshm->P[11237]
#define	P_Anode_Sepa_Mode_Timer	pshm->P[11238]
#define	P_Vision_Pass	pshm->P[11239]
#define	P_FirstSepa_Ret	pshm->P[11240]
#define	P_Vision_Align_Command	pshm->P[11241]
#define	P_Vision_Surface_Command	pshm->P[11242]
#define	P_Vision_Stack_Command	pshm->P[11243]
#define	P_Vision_Existence_Command	pshm->P[11244]
#define	P_Vision_EmptyTable_Command	pshm->P[11245]
#define	P_Vision_FirstSepa_Command	pshm->P[11246]
#define	P_Selected_Align_Inspection_Unit	pshm->P[11247]
#define	P_Selected_Surface_Inspection_Unit	pshm->P[11248]
#define	P_Selected_Stack_Inspection_Unit	pshm->P[11249]
#define	P_Selected_Existence_Inspection_Unit	pshm->P[11250]
#define	P_Selected_EmptyTable_Inspection_Unit	pshm->P[11251]
#define	P_Set_Cathode_Align_Zero_Pos	pshm->P[11252]
#define	P_Set_Anode_Align_Zero_Pos	pshm->P[11253]
#define	P_Vision_Align_State_Machine	pshm->P[11254]
#define	P_Vision_Surface_State_Machine	pshm->P[11255]
#define	P_Vision_Stack_State_Machine	pshm->P[11256]
#define	P_Vision_Existence_State_Machine	pshm->P[11257]
#define	P_Vision_EmptyTable_State_Machine	pshm->P[11258]
#define	P_Vision_FirstSepa_State_Machine	pshm->P[11259]
#define	P_Vision_Align_Status	pshm->P[11260]
#define	P_Vision_Surface_Status	pshm->P[11261]
#define	P_Vision_Stack_Status	pshm->P[11262]
#define	P_Vision_Existence_Status	pshm->P[11263]
#define	P_Vision_EmptyTable_Status	pshm->P[11264]
#define	P_Vision_FirstSepa_Status	pshm->P[11265]
#define	P_Align_Zero_Move_Start_Flag(i)	pshm->P[(11266+i)%MAX_P]
#define	P_Cathode_Align_Table_Move	pshm->P[11268]
#define	P_Anode_Align_Table_Move	pshm->P[11269]
#define	P_Vision_Anode_Cell_Existence	pshm->P[11270]
#define	P_Vision_Cathode_Cell_Existence	pshm->P[11271]
#define	P_Align_Sheet_CHK	pshm->P[11272]
#define	P_Anode_NG_Code	pshm->P[11273]
#define	P_Cathode_NG_Code	pshm->P[11274]
#define	P_Stack_NG_Code	pshm->P[11275]
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
#define	P_Stop_Debug_Flag	pshm->P[11276]
#define	P_Stop_Sub_Master_Motion_Program_Flag(i)	pshm->P[(11277+i)%MAX_P]
#define	P_Stop_Slave_Motion_Program_Flag(i)	pshm->P[(11297+i)%MAX_P]
#define	P_Stop_Motor_Status(i)	pshm->P[(11317+i)%MAX_P]
#define	P_Stop_Coord_Status(i)	pshm->P[(11365+i)%MAX_P]
#define	P_Stop_Status_Check_Address	pshm->P[11399]
#define	P_Stop_Status_Save_Address	pshm->P[11400]
#define	P_Stop_Check_RTN	pshm->P[11401]
#define	P_Stop_Save_RTN(i)	pshm->P[(11402+i)%MAX_P]
#define	P_Old_Total_Unit_Bit	pshm->P[11406]
#define	P_Memory_Tower_Dec_Result	pshm->P[11407]
#define	P_Stop_Motor_Pos(i)	pshm->P[(11408+i)%MAX_P]
#define	P_PNP_Move_Timer	pshm->P[11417]
#define	P_PNP_Move_Delay_Time	pshm->P[11418]
#define	P_Stop_Memory_Pos_RTN	pshm->P[11419]
#define	P_Slave1_Motion_Command	pshm->P[11420]
#define	P_Slave2_Motion_Command	pshm->P[11421]
#define	P_Slave3_Motion_Command	pshm->P[11422]
#define	P_Slave4_Motion_Command	pshm->P[11423]
#define	P_Slave5_Motion_Command	pshm->P[11424]
#define	P_Slave6_Motion_Command	pshm->P[11425]
#define	P_Slave7_Motion_Command	pshm->P[11426]
#define	P_Slave8_Motion_Command	pshm->P[11427]
#define	P_Slave9_Motion_Command	pshm->P[11428]
#define	P_Slave10_Motion_Command	pshm->P[11429]
#define	P_Slave11_Motion_Command	pshm->P[11430]
#define	P_Slave12_Motion_Command	pshm->P[11431]
#define	P_Slave13_Motion_Command	pshm->P[11432]
#define	P_Slave14_Motion_Command	pshm->P[11433]
#define	P_Slave15_Motion_Command	pshm->P[11434]
#define	P_Slave16_Motion_Command	pshm->P[11435]
#define	P_Slave17_Motion_Command	pshm->P[11436]
#define	P_Slave18_Motion_Command	pshm->P[11437]
#define	P_Slave19_Motion_Command	pshm->P[11438]
#define	P_Slave20_Motion_Command	pshm->P[11439]
#define	P_PNP_90_Deg_TM	pshm->P[11440]
#define	P_PNP_90_Deg_TA	pshm->P[11441]
#define	P_PNP_90_Deg_TS	pshm->P[11442]
#define	P_PNP_Ready_TM	pshm->P[11443]
#define	P_PNP_Ready_TA	pshm->P[11444]
#define	P_PNP_Ready_TS	pshm->P[11445]
#define	P_PNP_45_Deg_TM	pshm->P[11446]
#define	P_PNP_45_Deg_TA	pshm->P[11447]
#define	P_PNP_45_Deg_TS	pshm->P[11448]
#define	P_PROG_21_Program_Ver	pshm->P[2781]
#define	P_PROG_23_Program_Ver	pshm->P[2783]
#define	P_PROG_24_Program_Ver	pshm->P[2784]
#define	P_PROG_25_Program_Ver	pshm->P[2785]
#define	P_PROG_26_Program_Ver	pshm->P[2786]
#define	P_PROG_27_Program_Ver	pshm->P[2787]
#define	P_PROG_28_Program_Ver	pshm->P[2788]
#define	P_PROG_30_Program_Ver	pshm->P[2790]
#define	P_Master_Motion_Trigger	pshm->P[11449]
#define	P_Parity_Bit	pshm->P[11450]
#define	P_Master_Move	pshm->P[11451]
#define	P_Master_TA	pshm->P[11452]
#define	P_Master_TS	pshm->P[11453]
#define	P_Master_TM	pshm->P[11454]
#define	P_Anode_Count	pshm->P[11455]
#define	P_Cathode_Count	pshm->P[11456]
#define	P_Anode_Thickness	pshm->P[11457]
#define	P_Cathode_Thickness	pshm->P[11458]
#define	P_Sepa_Thickness	pshm->P[11459]
#define	P_Anode_Thickness_PLC	pshm->P[11460]
#define	P_Cathode_Thickness_PLC	pshm->P[11461]
#define	P_Sepa_Thickness_PLC	pshm->P[11462]
#define	P_Old_P_Anode_TR1_Master_Motion_Trigger(i)	pshm->P[(11463+i)%MAX_P]
#define	P_Old_P_Cathode_TR1_Master_Motion_Trigger(i)	pshm->P[(11479+i)%MAX_P]
#define	P_Anode_TR1_Old_Mode(i)	pshm->P[(11495+i)%MAX_P]
#define	P_Cathode_TR1_Old_Mode(i)	pshm->P[(11511+i)%MAX_P]
#define	P_Older_Than_P_Anode_TR1_Old_Mode(i)	pshm->P[(11527+i)%MAX_P]
#define	P_Older_Than_P_Cathode_TR1_Old_Mode(i)	pshm->P[(11543+i)%MAX_P]
#define	P_Older_Than_P_Sequence_Old_P_Anode_TR1_Current_Mode_Trigger(i)	pshm->P[(11559+i)%MAX_P]
#define	P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Current_Mode_Trigger(i)	pshm->P[(11575+i)%MAX_P]
#define	P_Old_P_Anode_TR1_Mode_Command(i)	pshm->P[(11591+i)%MAX_P]
#define	P_Old_P_Cathode_TR1_Mode_Command(i)	pshm->P[(11607+i)%MAX_P]
#define	P_Older_Than_P_Old_P_Anode_TR1_Mode_Command(i)	pshm->P[(11623+i)%MAX_P]
#define	P_Older_Than_P_Old_P_Cathode_TR1_Mode_Command(i)	pshm->P[(11639+i)%MAX_P]
#define	P_Older_Than_P_Sequence_Old_P_Anode_TR1_Mode_Command_Trigger(i)	pshm->P[(11655+i)%MAX_P]
#define	P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Mode_Command_Trigger(i)	pshm->P[(11671+i)%MAX_P]
#define	P_Old_P_Anode_TR1_PMAC_Status(i)	pshm->P[(11687+i)%MAX_P]
#define	P_Old_P_Cathode_TR1_PMAC_Status(i)	pshm->P[(11703+i)%MAX_P]
#define	P_Older_Than_P_Old_P_Anode_TR1_PMAC_Status(i)	pshm->P[(11719+i)%MAX_P]
#define	P_Older_Than_P_Old_P_Cathode_TR1_PMAC_Status(i)	pshm->P[(11735+i)%MAX_P]
#define	P_Old_P_Slave1_Motion_Command(i)	pshm->P[(11751+i)%MAX_P]
#define	P_Old_P_Slave10_Motion_Command(i)	pshm->P[(11767+i)%MAX_P]
#define	P_Old_Slave1_P_SubMaster_Sub_Mode_Command(i)	pshm->P[(11783+i)%MAX_P]
#define	P_Old_Slave10_P_SubMaster_Sub_Mode_Command(i)	pshm->P[(11799+i)%MAX_P]
#define	P_Sequence_Old_P_Current_Mode_Trigger(i)	pshm->P[(11815+i)%MAX_P]
#define	P_Sequence_Old_Mode(i)	pshm->P[(11831+i)%MAX_P]
#define	P_Sequence_Old_P_Mode_Command(i)	pshm->P[(11847+i)%MAX_P]
#define	P_Sequence_Old_P_Mode_Command_Trigger(i)	pshm->P[(11863+i)%MAX_P]
#define	P_SubMaster_Sub_Old_Mode(i)	pshm->P[(11879+i)%MAX_P]
#define	P_SubMaster_Sub_Old_Command(i)	pshm->P[(11895+i)%MAX_P]
#define	P_SubMaster_Sub_Mode_Command(i)	pshm->P[(11911+i)%MAX_P]
#define	P_SubMaster_Sub_Old_Trigger(i)	pshm->P[(11927+i)%MAX_P]
#define	P_InterLock_No3_Array(i)	pshm->P[(11943+i)%MAX_P]
#define	P_Old_InterLock_No3_Array(i)	pshm->P[(11959+i)%MAX_P]
#define	P_Mode_Err(i)	pshm->P[(11975+i)%MAX_P]
#define	P_Spool_Enable	pshm->P[11980]
#define	P_Cathode_1St_Flow_Chart_Bit_Flag	pshm->P[11981]
#define	P_Cathode_AT_Flow_Chart_Bit_Flag	pshm->P[11982]
#define	P_Cathode_2nd_Flow_Chart_Bit_Flag	pshm->P[11983]
#define	P_Anode_Clamp_Flow_Chart_Bit_Flag	pshm->P[11984]
#define	P_Final_Roll_Flow_Chart_Bit_Flag	pshm->P[11985]
#define	P_Stack_Table_Flow_Chart_Bit_Flag	pshm->P[11986]
#define	P_Cathode_Clamp_Flow_Chart_Bit_Flag	pshm->P[11987]
#define	P_Anode_2nd_Flow_Chart_Bit_Flag	pshm->P[11988]
#define	P_Anode_AT_Flow_Chart_Bit_Flag	pshm->P[11989]
#define	P_Anode_1St_Flow_Chart_Bit_Flag	pshm->P[11990]
#define	P_Sepa_Unwinder_Flow_Chart_Bit_Flag	pshm->P[11991]
#define	P_Slave5_Target_Z_For_Cutting	pshm->P[11992]
#define	P_Slave31_Motion_Command	pshm->P[11993]
#define	P_Pause_Err_Process	pshm->P[11994]
#define	P_Pause_Err_Timer	pshm->P[11995]
#define	P_Pause_Err_Count	pshm->P[11996]
#define	P_Pause_Err_Use	pshm->P[11997]
#define	P_Pause_Err_Use2	pshm->P[11998]
#define	P_Anode_Pause_Signal_Err	pshm->P[11999]
#define	P_Cathode_Pause_Signal_Err	pshm->P[12000]
#define	P_Anode_Pause_Err	pshm->P[12001]
#define	P_Anode_Pause_Err_Count	pshm->P[12002]
#define	P_Phasing_Err(i)	pshm->P[(12003+i)%MAX_P]
#define	P_Phasing_Err2(i)	pshm->P[(12008+i)%MAX_P]
#define	P_Execute_Wait_Mode_Memory_Tower	pshm->P[12013]
#define	P_Execute_Vac_MNTR	pshm->P[12014]
#define	P_Old_Cathode_Cur_Mode	pshm->P[12015]
#define	P_Cathode_Run_Mode_Type(i)	pshm->P[(12016+i)%MAX_P]
#define	P_Cathode_Run_Mode_Trigger(i)	pshm->P[(12036+i)%MAX_P]
#define	P_Old_Anode_Cur_Mode	pshm->P[12056]
#define	P_Anode_Run_Mode_Type(i)	pshm->P[(12057+i)%MAX_P]
#define	P_Anode_Run_Mode_Trigger(i)	pshm->P[(12077+i)%MAX_P]
#define	P_Anode_1TR_T_Belt_To_Align	pshm->P[12097]
#define	P_Anode_1TR_T_Align_To_Belt	pshm->P[12098]
#define	P_Anode_1TR_T_Ready_Pos	pshm->P[12099]
#define	P_Anode_1TR_T_Ready_To_Align	pshm->P[12100]
#define	P_Anode_1TR_T_Ready_To_Belt	pshm->P[12101]
#define	P_Anode_Picker_Turn	pshm->P[12102]
#define	P_Anode_2TR_T_Align_To_Stack	pshm->P[12103]
#define	P_Anode_2TR_T_Stack_To_Align	pshm->P[12104]
#define	P_Anode_Clamp_Off	pshm->P[12105]
#define	P_Anode_Clamp_On	pshm->P[12106]
#define	P_Anode_Clamp_Down	pshm->P[12107]
#define	P_FR_Anode_Motion	pshm->P[12108]
#define	P_FR_Cathode_Motion	pshm->P[12109]
#define	P_Stack_Table_Down	pshm->P[12110]
#define	P_Cathode_Clamp_On	pshm->P[12111]
#define	P_Cathode_Clamp_Off	pshm->P[12112]
#define	P_Cathode_Clamp_Down	pshm->P[12113]
#define	P_Cathode_2TR_T_Align_To_Stack	pshm->P[12114]
#define	P_Cathode_2TR_T_Stack_To_Align	pshm->P[12115]
#define	P_Cathode_Picker_Turn	pshm->P[12116]
#define	P_Cathode_1TR_T_Belt_To_Align	pshm->P[12117]
#define	P_Cathode_1TR_T_Align_To_Belt	pshm->P[12118]
#define	P_Cathode_1TR_T_Ready_Pos	pshm->P[12119]
#define	P_Cathode_1TR_T_Ready_To_Align	pshm->P[12120]
#define	P_Cathode_1TR_T_Ready_To_Belt	pshm->P[12121]
#define	P_Anode_1TR_Z_Belt_To_Align	pshm->P[12122]
#define	P_Anode_1TR_Z_Align_To_Belt	pshm->P[12123]
#define	P_Anode_1TR_Z_Align_Down	pshm->P[12124]
#define	P_Anode_1TR_Z_Align_UP	pshm->P[12125]
#define	P_Anode_1TR_Z_Belt_Down	pshm->P[12126]
#define	P_Anode_1TR_Z_Belt_UP	pshm->P[12127]
#define	P_Anode_1TR_Z_Ready	pshm->P[12128]
#define	P_Anode_1TR_Z_Align_Blow	pshm->P[12129]
#define	P_Anode_1TR_Z_Belt_Vac	pshm->P[12130]
#define	P_Cathode_1TR_Z_Belt_To_Align	pshm->P[12131]
#define	P_Cathode_1TR_Z_Align_To_Belt	pshm->P[12132]
#define	P_Cathode_1TR_Z_Align_Down	pshm->P[12133]
#define	P_Cathode_1TR_Z_Align_UP	pshm->P[12134]
#define	P_Cathode_1TR_Z_Belt_Down	pshm->P[12135]
#define	P_Cathode_1TR_Z_Belt_UP	pshm->P[12136]
#define	P_Cathode_1TR_Z_Ready	pshm->P[12137]
#define	P_Cathode_1TR_Z_Align_Blow	pshm->P[12138]
#define	P_Cathode_1TR_Z_Belt_Vac	pshm->P[12139]
#define	P_Anode_2TR_Align_To_Stack	pshm->P[12140]
#define	P_Anode_2TR_Stack_To_Align	pshm->P[12141]
#define	P_Anode_2TR_Stack_Down	pshm->P[12142]
#define	P_Anode_2TR_Stack_UP	pshm->P[12143]
#define	P_Anode_2TR_Align_Down	pshm->P[12144]
#define	P_Anode_2TR_Align_UP	pshm->P[12145]
#define	P_Anode_2TR_Align_Vac	pshm->P[12146]
#define	P_Anode_2TR_Stack_Blow	pshm->P[12147]
#define	P_Anode_2TR_Stack_Sepa_Blow	pshm->P[12148]
#define	P_FR_Last_Run_Motion	pshm->P[12149]
#define	P_Servo_Dancer_Ready_Pos	pshm->P[12150]
#define	P_Servo_Dancer_Ready_Offset	pshm->P[12151]
#define	P_Servo_Dancer_Test	pshm->P[12152]
#define	P_Align_Start_IO_Judgment	pshm->P[12153]
#define	P_Driving_Clamp2	pshm->P[12154]
#define	P_Driving_Clamp	pshm->P[12155]
#define	P_MSA_Timer	pshm->P[12156]
#define	P_SM_Cathode_Stack_MSA	pshm->P[12157]
#define	P_SM_Anode_Stack_MSA	pshm->P[12158]
#define	P_SM_Cathode_Align_MSA	pshm->P[12159]
#define	P_SM_Anode_Align_MSA	pshm->P[12160]
#define	P_MSA_Interlock	pshm->P[12161]
#define	P_Anode_MSA_Final_Roll_Pos_Check	pshm->P[12162]
#define	P_Anode_MSA_2nd_PNP_Pos_Check	pshm->P[12163]
#define	P_Anode_MSA_1nd_PNP_Pos_Check	pshm->P[12164]
#define	P_MSA_Err_Save_CA_Stack_MSA	pshm->P[12165]
#define	P_MSA_Err_Save_AN_Stack_MSA	pshm->P[12166]
#define	P_MSA_Err_Save_CA_Align_MSA	pshm->P[12167]
#define	P_MSA_Err_Save_AN_Align_MSA	pshm->P[12168]
#define	P_MSA_BTN_Err	pshm->P[12169]
#define	P_Anode_Algin_MSA_RTN	pshm->P[12170]
#define	P_Anode_Algin_MSA_RTN2	pshm->P[12171]
#define	P_Cathode_Algin_MSA_RTN	pshm->P[12172]
#define	P_Cathode_Stack_MSA_RTN	pshm->P[12173]
#define	P_Anode_Stack_MSA_RTN	pshm->P[12174]
#define	P_Anode_Align_MSA_Count	pshm->P[12175]
#define	P_Cathode_Align_MSA_Count	pshm->P[12176]
#define	P_Anode_Stack_MSA_Count	pshm->P[12177]
#define	P_Cathode_Stack_MSA_Count	pshm->P[12178]
#define	P_Cathode_Align_Stop_Blocked	pshm->P[12179]
#define	P_Anode_Align_Stop_Blocked	pshm->P[12180]
#define	P_Cathode_Stack_Stop_Blocked	pshm->P[12181]
#define	P_Anode_Stack_Stop_Blocked	pshm->P[12182]
#define	P_Anode_Align_MSA_Execute_Timer	pshm->P[12183]
#define	P_Cathode_Align_MSA_Execute_Timer	pshm->P[12184]
#define	P_Anode_Stack_MSA_Execute_Timer	pshm->P[12185]
#define	P_Cathode_Stack_MSA_Execute_Timer	pshm->P[12186]
#define	P_Anode_Align_Interlock_Blocked	pshm->P[12187]
#define	P_Cathode_Align_Interlock_Blocked	pshm->P[12188]
#define	P_Anode_Stack_Interlock_Blocked	pshm->P[12189]
#define	P_Cathode_Stack_Interlock_Blocked	pshm->P[12190]
#define	P_Anode_1TR_T_Align_POS	pshm->P[12191]
#define	P_Anode_1TR_T_Belt_POS	pshm->P[12192]
#define	P_Anode_1TR_T_Ready_POS	pshm->P[12193]
#define	P_Anode_2TR_T_Align_POS	pshm->P[12194]
#define	P_Anode_2TR_T_Stack_POS	pshm->P[12195]
#define	P_Cathode_2TR_T_Align_POS	pshm->P[12196]
#define	P_Cathode_2TR_T_Stack_POS	pshm->P[12197]
#define	P_Cathode_1TR_T_Align_POS	pshm->P[12198]
#define	P_Cathode_1TR_T_Belt_POS	pshm->P[12199]
#define	P_Cathode_1TR_T_Ready_POS	pshm->P[12200]
#define	P_Seq_Abort	pshm->P[12201]
#define	P_Blocked_Abort	pshm->P[12202]
#define	P_Abort_Flag	pshm->P[12203]
#define	P_Opposite_Lane_1ST_TR_Safe_Pos	pshm->P[12204]
#define	P_Opposite_Lane_P_PMAC_Status	pshm->P[12205]
#define	P_Opposite_Lane_OFF_Not_Start	pshm->P[12206]
#define	P_Pause_Alarm_Blocked	pshm->P[12207]
#define	P_Old_Alarm_Arr	pshm->P[12208]
#define	P_Cycle_Stop_Delay_Time	pshm->P[12209]
#define	P_Cycle_Stop_Offset	pshm->P[12210]
#define	P_Opposite_Lane_Abort_Alram_Flag	pshm->P[12211]
#define	P_Cathode_Clmap_Y1_Ready_Pos	pshm->P[12212]
#define	P_Cathode_Clmap_Y1_Clamp_Pos	pshm->P[12213]
#define	P_Anode_Clmap_Y1_Ready_Pos	pshm->P[12214]
#define	P_Anode_Clmap_Y1_Clamp_Pos	pshm->P[12215]
#define	P_Cathode_Clmap_Y2_Ready_Pos	pshm->P[12216]
#define	P_Cathode_Clmap_Y2_Clamp_Pos	pshm->P[12217]
#define	P_Anode_Clmap_Y2_Ready_Pos	pshm->P[12218]
#define	P_Anode_Clmap_Y2_Clamp_Pos	pshm->P[12219]
#define	P_Cathode_Clamp_Z2_Ready_Pos	pshm->P[12220]
#define	P_Cathode_Clamp_Z2_Clamp_Pos	pshm->P[12221]
#define	P_Anode_Clamp_Z2_Ready_Pos	pshm->P[12222]
#define	P_Anode_Clamp_Z2_Clamp_Pos	pshm->P[12223]
#define	P_Cathode_Clamp_Z1_Ready_Pos	pshm->P[12224]
#define	P_Cathode_Clamp_Z1_Clamp_Pos	pshm->P[12225]
#define	P_Anode_Clamp_Z1_Ready_Pos	pshm->P[12226]
#define	P_Anode_Clamp_Z1_Clamp_Pos	pshm->P[12227]
#define	P_Cathode_Clamp_Z2_Cell_Down	pshm->P[12228]
#define	P_Anode_Clamp_Z2_Cell_Down	pshm->P[12229]
#define	P_Cathode_Clamp_Z1_Cell_Down	pshm->P[12230]
#define	P_Anode_Clamp_Z1_Cell_Down	pshm->P[12231]
#define	P_Single_Run_Pass	pshm->P[12232]
#define	P_Cathode_2nd_PNP_Sepa_Blow	pshm->P[12233]
#define	P_Cathode_2nd_PNP_Align_Blow	pshm->P[12234]
#define	P_Cathode_2nd_PNP_Stack_Blow	pshm->P[12235]
#define	P_Cathode_2nd_PNP_Align_Vac	pshm->P[12236]
#define	P_Cathode_2nd_PNP_Align_Up_Motion	pshm->P[12237]
#define	P_Cathode_2nd_PNP_Align_Down_Motion	pshm->P[12238]
#define	P_Cathode_2nd_PNP_Stack_Up_Motion	pshm->P[12239]
#define	P_Cathode_2nd_PNP_Stack_Down_Motion	pshm->P[12240]
#define	P_Cathode_2nd_PNP_Stack_To_Align_Motion	pshm->P[12241]
#define	P_Cathode_2nd_PNP_Align_To_Stack_Motion	pshm->P[12242]
#define	P_Door_Open_Stop_Count	pshm->P[12243]
#define	P_Buf_Stack_NG_Flag	pshm->P[12244]
#define	P_Stop_1st_PNP_Move	pshm->P[12245]
#define	P_Seq_Abort_Timer	pshm->P[12246]
#define	P_Sync_Test	pshm->P[12247]
#define	P_Dry_Pause_Flag	pshm->P[12248]
#define	P_Dry_Run_Pasue_Timer	pshm->P[12249]
#define	P_Resume_Stop_Blocked	pshm->P[12250]
#define	P_Discharge_Wait	pshm->P[12251]
#define	P_Command_Run_Flag	pshm->P[12252]
#define	P_Stop_Cmd_Origin	pshm->P[12253]
#define	P_Stop_Origin_Save(i)	pshm->P[(12254+i)%MAX_P]
#define	P_Old_M_Y_Sepa_Cutter_SSR_On	pshm->P[12269]
#define	P_Sepa_Cutter_SSR_Off_Time	pshm->P[12270]
#define	P_Sepa_Cutter_SSR_Off	pshm->P[12271]
#define	P_Sepa_Cutter_SSR_Off_Timer	pshm->P[12272]
#define	P_Starting_Pause_IO_Flag	pshm->P[12273]
#define	P_PLC03_Seq_Pause_Start_Flag	pshm->P[12274]
#define	P_PLC03_Seq_Pause_Start_State_Machine	pshm->P[12275]
#define	P_PLC03_Seq_Pause_Start_Status	pshm->P[12276]
#define	P_ARC_NP_Push_BTN	pshm->P[12277]
#define	P_ARC_UI_Push_BTN	pshm->P[12278]
#define	P_M_Manual_ARC_BTN	pshm->P[12279]
#define	P_Two_Btn_Active_Flag	pshm->P[12280]
#define	P_Two_Btn_Interlock_Time	pshm->P[12281]
#define	P_NP_Unwinder_Active_Hold	pshm->P[12282]
#define	P_MAX_KGF	pshm->P[12283]
#define	P_KGF_TO_DAC_RATIO	pshm->P[12284]
#define	P_Dac_Out_Value	pshm->P[12285]
#define	P_Recipe_Dancer_input_kgf	pshm->P[12286]
#define	P_Cathode_NG_PNP_Vel_Zero_Set	pshm->P[12287]
#define	P_Anode_NG_PNP_Vel_Zero_Set	pshm->P[12288]
#define	P_Anode_Run_DR	pshm->P[12289]
#define	P_Cathode_Run_DR	pshm->P[12290]
#define	P_1st_UND_Grip_Time	pshm->P[12291]
#define	P_1st_UND_Grip_Time_offset	pshm->P[12292]
#define	P_1st_UND_Grip_Time_offset2	pshm->P[12293]
#define	P_First_Sepa_Driving_Use	pshm->P[12294]
#define	P_First_Sepa_Driving_Timing	pshm->P[12295]
#define	P_Unloader_Safe_rtn	pshm->P[12296]
#define	P_Final_Start	pshm->P[12297]
#define	P_Driving_Start	pshm->P[12298]
#define	P_Starting_Pause_IO_OFF_Flag	pshm->P[12299]
#define	P_individual_Hold_return	pshm->P[12300]
#define	P_individual_Hold_return2	pshm->P[12301]
#define	P_Tension_Ready_Pass	pshm->P[12302]
#define	P_Discharge_cal_rtn	pshm->P[12303]
#define	P_Old_Tact_Current_Mode	pshm->P[12304]
#define	P_Sheet_Clear	pshm->P[12305]
#define	P_Anode_Clamp_On_Time2	pshm->P[12306]
#define	P_Anode_Clamp_On_Time	pshm->P[12307]
#define	P_Cathode_Clamp_On_Time	pshm->P[12308]
#define	P_Cathode_Clamp_On_Time2	pshm->P[12309]
#define	P_Offset	pshm->P[12310]
#define	P_Man_C	pshm->P[12311]
#define	P_NG_Box_Stop_Use	pshm->P[12312]
#define	P_SlewTime	pshm->P[12313]
#define	P_Old_SlewTime	pshm->P[12314]
#define	P_Resume_MNTR1	pshm->P[12315]
#define	P_Resume_MNTR2	pshm->P[12316]
#define	P_Resume_MNTR3	pshm->P[12317]
#define	P_Resume_MNTR4	pshm->P[12318]
#define	P_Resume_MNTR5	pshm->P[12319]
#define	P_Resume_MNTR6	pshm->P[12320]
#define	P_Resume_MNTR7	pshm->P[12321]
#define	P_Resume_MNTR8	pshm->P[12322]
#define	P_Resume_MNTR9	pshm->P[12323]
#define	P_Resume_MNTR10	pshm->P[12324]
#define	P_Resume_MNTR11	pshm->P[12325]
#define	P_Resume_MNTR12	pshm->P[12326]
#define	P_old_P_Anode_Count	pshm->P[12327]
#define	P_Sheet_Paper_BWD_Count	pshm->P[12328]
#define	P_Stop_CHK	pshm->P[12329]
#define	P_Seq_Pause	pshm->P[12330]
#define	P_Seq_Pause2	pshm->P[12331]
#define	P_MSA_TimeBase_Rtn	pshm->P[12332]
#define	P_Old_Vison_Read_EPC_Camera_Move_Request	pshm->P[12333]
#define	P_First_Sepa_Time_Out_Count	pshm->P[12334]
#define	P_Align_Retry_Cal_RTN	pshm->P[12335]
#define	P_Sheet_Err(i)	pshm->P[(12336+i)%MAX_P]
#define	P_Driving_Cal	pshm->P[12352]
#define	P_Driving_End_Pos	pshm->P[12353]
#define	P_Driving_Start_Pos	pshm->P[12354]
#define	P_Drivig_Cal_Save(i)	pshm->P[(12355+i)%MAX_P]
#define	P_Anode_Align_Blow	pshm->P[12360]
#define	P_Cathode_Align_Blow	pshm->P[12361]
#define	P_PMAC_Status_Arr_Save1(i)	pshm->P[(12362+i)%MAX_P]
#define	P_HomePos_Save1(i)	pshm->P[(12367+i)%MAX_P]
#define	P_PMAC_Status_Arr_Save2(i)	pshm->P[(12372+i)%MAX_P]
#define	P_HomePos_Save2(i)	pshm->P[(12377+i)%MAX_P]
#define	P_PMAC_Status_Arr_Save3(i)	pshm->P[(12382+i)%MAX_P]
#define	P_HomePos_Save3(i)	pshm->P[(12387+i)%MAX_P]
#define	P_PMAC_Status_Arr_Save4(i)	pshm->P[(12392+i)%MAX_P]
#define	P_HomePos_Save4(i)	pshm->P[(12397+i)%MAX_P]
#define	P_Home_Pos_Err_Cnt1	pshm->P[12402]
#define	P_Home_Pos_Err_Cnt2	pshm->P[12403]
#define	P_Home_Pos_Err_Cnt3	pshm->P[12404]
#define	P_Home_Pos_Err_Cnt4	pshm->P[12405]
#define	P_Align_Inspection_Delay	pshm->P[12406]
#define	P_HomePos_Err(i)	pshm->P[(12407+i)%MAX_P]
#define	P_Anode_Sheet_Test	pshm->P[12412]
#define	P_Cathode_Sheet_Test	pshm->P[12413]
#define	P_Anode_Sheet_Interlock_Timing	pshm->P[12414]
#define	P_Cathode_Sheet_Interlock_Timing	pshm->P[12415]
#define	P_Discharge_Err_MNTR	pshm->P[12416]
#define	P_Arc_Err_MNTR	pshm->P[12417]
#define	P_Abort_Cnt	pshm->P[12418]
#define	P_EMO_Cnt	pshm->P[12419]
#define	P_Dry_Run_Inspection	pshm->P[12420]
#define	P_Servo_ON_MNTR1	pshm->P[12421]
#define	P_Servo_ON_MNTR2	pshm->P[12422]
#define	P_Servo_ON_MNTR3	pshm->P[12423]
#define	P_Servo_ON_MNTR4	pshm->P[12424]
#define	P_Servo_ON_MNTR5	pshm->P[12425]
#define	P_Servo_ON_MNTR6	pshm->P[12426]
#define	P_Servo_ON_MNTR7	pshm->P[12427]
#define	P_Servo_ON_MNTR8	pshm->P[12428]
#define	P_Servo_ON_MNTR9	pshm->P[12429]
#define	P_Servo_ON_MNTR10	pshm->P[12430]
#define	P_Servo_ON_MNTR11	pshm->P[12431]
#define	P_Servo_ON_MNTR12	pshm->P[12432]
#define	P_Servo_ON_MNTR13	pshm->P[12433]
#define	P_Servo_ON_MNTR14	pshm->P[12434]
#define	P_Servo_ON_MNTR15	pshm->P[12435]
#define	P_Servo_ON_MNTR16	pshm->P[12436]
#define	P_Servo_ON_MNTR17	pshm->P[12437]
#define	P_Servo_ON_MNTR18	pshm->P[12438]
#define	P_Servo_ON_MNTR19	pshm->P[12439]
#define	P_Servo_ON_MNTR20	pshm->P[12440]
#define	P_Servo_ON_MNTR21	pshm->P[12441]
#define	P_Servo_ON_MNTR22	pshm->P[12442]
#define	P_Servo_ON_MNTR23	pshm->P[12443]
#define	P_Servo_ON_MNTR24	pshm->P[12444]
#define	P_Servo_ON_MNTR25	pshm->P[12445]
#define	P_Servo_ON_MNTR26	pshm->P[12446]
#define	P_Servo_ON_MNTR27	pshm->P[12447]
#define	P_Servo_ON_MNTR28	pshm->P[12448]
#define	P_Servo_ON_MNTR29	pshm->P[12449]
#define	P_Servo_ON_MNTR30	pshm->P[12450]
#define	P_X_IO_WinMess_Connect_BTN	pshm->P[12451]
#define	P_Ecat_ReConnetion_State_Machine	pshm->P[12452]
#define	P_Ecat_Reconnection_Timer	pshm->P[12453]
#define	P_Y_Ecat_Reconnecting	pshm->P[12454]
#define	P_Y_Ecat_ReConnection_Fail	pshm->P[12455]
#define	P_Y_Ecat_ReConnection_Complete	pshm->P[12456]
#define	P_X_Ecat_Reconnection_BTN	pshm->P[12457]
#define	P_X_Interlock_Enable_BTN	pshm->P[12458]
#define	P_X_Old_MC_Reconnect_BTN_Signal	pshm->P[12459]
#define	P_BTN_1st_ULD_Data_Clear	pshm->P[12460]
#define	P_Old_BTN_1st_ULD_Data_Clear	pshm->P[12461]
#define	P_Old_M_Y_1st_Unloader_UnGrip_Sol	pshm->P[12462]
#define	P_Sepa_Cutter_Heat_Meter	pshm->P[12463]
#define	P_Sepa_Cutter_Heating_Timer	pshm->P[12464]
#define	P_Middle_Skip_Off_Flag	pshm->P[12465]
#define	P_Stop_MNTR1	pshm->P[12466]
#define	P_Stop_MNTR2	pshm->P[12467]
#define	P_Sheet_Pos_Offset	pshm->P[12468]
#define	P_Stopping_Wait_Time	pshm->P[12469]
#define	P_Stopping_Test_Timer	pshm->P[12470]
#define	P_Cutter_FWB_Heater_Current(i)	pshm->P[(12471+i)%MAX_P]
#define	P_1st_ULD_OK_Lamp	pshm->P[12481]
#define	P_1st_ULD_NG_Lamp	pshm->P[12482]
#define	P_1st_ULD_Sample_QC_Lamp	pshm->P[12483]
#define	P_Proceed_Execute_Flag	pshm->P[12484]
#define	P_Continuous_Call_Stack_NG_Flag	pshm->P[12485]
#define	P_Continuous_Call_Stack_OK_Flag	pshm->P[12486]
#define	P_Cathode_Picker_Home_Pos	pshm->P[12487]
#define	P_Anode_Picker_Home_Pos	pshm->P[12488]
#define	P_FR_Sheet_Paper_Home_Chk	pshm->P[12489]
#define	P_Align_TimeOut1	pshm->P[12490]
#define	P_Align_TimeOut2	pshm->P[12491]
#define	P_Align_TimeOut3	pshm->P[12492]
#define	P_Align_TimeOut4	pshm->P[12493]
#define	P_Align_TimeOut5	pshm->P[12494]
#define	P_Align_TimeOut6	pshm->P[12495]
#define	P_Anode_Align_OK	pshm->P[12496]
#define	P_Cathode_Align_OK	pshm->P[12497]
#define	P_Anode_Align_NG	pshm->P[12498]
#define	P_Cathode_Align_NG	pshm->P[12499]
#define	P_Anode_Align_TimeOut	pshm->P[12500]
#define	P_Cathode_Align_TimeOut	pshm->P[12501]
#define	P_Anode_Surf_OK	pshm->P[12502]
#define	P_Cathode_Surf_OK	pshm->P[12503]
#define	P_Anode_Surf_NG	pshm->P[12504]
#define	P_Cathode_Surf_NG	pshm->P[12505]
#define	P_Anode_Surf_TimeOut	pshm->P[12506]
#define	P_Cathode_Surf_TimeOut	pshm->P[12507]
#define	P_Surf_TimeOut1	pshm->P[12508]
#define	P_Surf_TimeOut2	pshm->P[12509]
#define	P_Surf_TimeOut3	pshm->P[12510]
#define	P_Surf_TimeOut4	pshm->P[12511]
#define	P_Surf_TimeOut5	pshm->P[12512]
#define	P_Surf_TimeOut6	pshm->P[12513]
#define	P_Anode_Stack_TimeOut	pshm->P[12514]
#define	P_Cathode_Stack_TimeOut	pshm->P[12515]
#define	P_Anode_Stack_OK	pshm->P[12516]
#define	P_Cathode_Stack_OK	pshm->P[12517]
#define	P_Anode_Stack_NG	pshm->P[12518]
#define	P_Cathode_Stack_NG	pshm->P[12519]
#define	P_Stack_TimeOut1	pshm->P[12520]
#define	P_Stack_TimeOut2	pshm->P[12521]
#define	P_Stack_TimeOut3	pshm->P[12522]
#define	P_Align_Move_Err	pshm->P[12523]
#define	P_Ecat_Test	pshm->P[12524]
#define	P_Scan_Time(i)	pshm->P[(12525+i)%MAX_P]
#define	P_Scan_Aver	pshm->P[12527]
#define	P_Scan_MAX	pshm->P[12528]
#define	P_Cathode_1TR_Picker_T_Belt_POS	pshm->P[12529]
#define	P_Cathode_1TR_Picker_T_Align_POS	pshm->P[12530]
#define	P_Anode_1TR_Picker_T_Belt_POS	pshm->P[12531]
#define	P_Anode_1TR_Picker_T_Align_POS	pshm->P[12532]
#define	P_1TR_Picker_T_Align_POS	pshm->P[12533]
#define	P_AVRG_Lower_Sepa_Thickness_mm	pshm->P[12534]
#define	P_AVRG_Upper_Sepa_Thickness_mm	pshm->P[12535]
#define	P_PLC06_Upper_Curr_Unwinder_Thickness_mm	pshm->P[12536]
#define	P_PLC06_Lower_Curr_Unwinder_Thickness_mm	pshm->P[12537]
#define	P_Upper_Curr_Spool_Radius	pshm->P[12538]
#define	P_Lower_Curr_Spool_Radius	pshm->P[12539]
#define	P_PLC06_Curr_Upper_Distance_mm	pshm->P[12540]
#define	P_PLC06_Curr_Lower_Distance_mm	pshm->P[12541]
#define	P_Upper_Sepa_Min_Distance_mm	pshm->P[12542]
#define	P_Lower_Sepa_Min_Distance_mm	pshm->P[12543]
#define	P_PLC06_Sepa_Change_Set	pshm->P[12544]
#define	P_Upper_Sepa_To_Sensor_Min_Dis	pshm->P[12545]
#define	P_Upper_Sepa_To_Sensor_Max_Dis	pshm->P[12546]
#define	P_Upper_Sensor_To_Unwinder_Core_Dis	pshm->P[12547]
#define	P_Upper_Sensor_Min_AD	pshm->P[12548]
#define	P_Upper_Sensor_Max_AD	pshm->P[12549]
#define	P_Lower_Sepa_To_Sensor_Min_Dis	pshm->P[12550]
#define	P_Lower_Sepa_To_Sensor_Max_Dis	pshm->P[12551]
#define	P_Lower_Sensor_To_Unwinder_Core_Dis	pshm->P[12552]
#define	P_Lower_Sensor_Min_AD	pshm->P[12553]
#define	P_Lower_Sensor_Max_AD	pshm->P[12554]
#define	M_AI_Upper_Sepa_Sensing	pshm->P[372]
#define	M_AI_Lower_Sepa_Sensing	pshm->P[373]
#define	P_Status_NP_BTN_Lower_Unwinder	pshm->P[12555]
#define	P_Status_NP_BTN_Upper_Unwinder	pshm->P[12556]
#define	P_Driving_CamTable_Scale_Change_Flag	pshm->P[12557]
#define	P_FR_Driving_Diameter	pshm->P[12558]
#define	P_FR_Driving_Floating_Point	pshm->P[12559]
#define	P_FR_Driving_Reward	pshm->P[12560]
#define	P_Unwinder_Master_Following_Use_Flag	pshm->P[12561]
#define	P_Unwinder_Master_Following_On	pshm->P[12562]
#define	P_Old_Master_Following_Start	pshm->P[12563]
#define	P_Unwinder_Master_Following_Scale	pshm->P[12564]
#define	P_Unwinder_Jog_Use_Flag	pshm->P[12565]
#define	P_Old_Jog_Start	pshm->P[12566]
#define	P_Unwinder_Jog_Total_Time	pshm->P[12567]
#define	P_Unwinder_Ta	pshm->P[12568]
#define	P_Unwinder_Ts	pshm->P[12569]
#define	P_Unwinder_Tm	pshm->P[12570]
#define	P_Unwinder_1mm_Deg	pshm->P[12571]
#define	P_Unwinder_Jog_Pos	pshm->P[12572]
#define	P_Unwinder_Jog_Cnt	pshm->P[12573]
#define	P_PLC06_Frist_Flag	pshm->P[12574]
#define	P_Sepa_AI	pshm->P[12575]
#define	P_PLC06_Reel_Upper_Change_Flag	pshm->P[12576]
#define	P_PLC06_Reel_Lower_Change_Flag	pshm->P[12577]
#define	P_Spool_Ready_Enable_Flag	pshm->P[12578]
#define	P_Spool_Lack_Flag	pshm->P[12579]
#define	P_Sepa_DR_Start_Flag	pshm->P[12580]
#define	P_cdTime_Tact_Sec	pshm->P[12581]
#define	P_Master_Tact_Sec	pshm->P[12582]
#define	P_Prev_Err_Pos	pshm->P[12583]
#define	P_Cur_Arc_Rad	pshm->P[12584]
#define	P_Cur_Arc_Deg	pshm->P[12585]
#define	P_Spool_Velocity	pshm->P[12586]
#define	P_Lin_Prop_Vel	pshm->P[12587]
#define	P_Err_Pos	pshm->P[12588]
#define	P_Lin_Deriv_Vel	pshm->P[12589]
#define	P_Lin_Dacer_Kd	pshm->P[12590]
#define	P_Lin_Dacer_Kp	pshm->P[12591]
#define	P_Running_CDTimer	pshm->P[12592]
#define	P_Unwinder_Jog_Ta	pshm->P[12593]
#define	P_Unwinder_Jog_Ts	pshm->P[12594]
#define	P_Unwinder_Vel_Test_Time	pshm->P[12595]
#define	P_Set_Interval_Time	pshm->P[12596]
#define	P_PLC06_Upper_Sepa_AI_Timer	pshm->P[12597]
#define	P_PLC06_Upper_Sepa_AI_Data	pshm->P[12598]
#define	P_PLC06_Upper_Sepa_AI_Cnt	pshm->P[12599]
#define	P_PLC06_Upper_AVRG_Sensor_Data	pshm->P[12600]
#define	P_PLC06_Lower_Sepa_AI_Timer	pshm->P[12601]
#define	P_PLC06_Lower_Sepa_AI_Data	pshm->P[12602]
#define	P_PLC06_Lower_Sepa_AI_Cnt	pshm->P[12603]
#define	P_PLC06_Lower_AVRG_Sensor_Data	pshm->P[12604]
#define	P_PLC06_Sepa_Upper_Thickness_Timer	pshm->P[12605]
#define	P_PLC06_Sepa_Upper_Thickness_Data	pshm->P[12606]
#define	P_PLC06_Sepa_Upper_Thickness_Cnt	pshm->P[12607]
#define	P_PLC06_Sepa_Lower_Thickness_Timer	pshm->P[12608]
#define	P_PLC06_Sepa_Lower_Thickness_Data	pshm->P[12609]
#define	P_PLC06_Sepa_Lower_Thickness_Cnt	pshm->P[12610]
#define	P_Sepa_Thickness_Chk_Timer	pshm->P[12611]
#define	P_Spool_Length	pshm->P[12612]
#define	P_Cascade_Sf_Driving_Value	pshm->P[12613]
#define	P_Cascade_Sf_None_Driving_Value	pshm->P[12614]
#define	P_Sepa_Min_Value_Cal_Cmd	pshm->P[12615]
#define	P_Total_Sepa_Need_Length	pshm->P[12616]
#define	P_Alpa	pshm->P[12617]
#define	P_Sepa_Num_of_Turns	pshm->P[12618]
#define	P_Sepa_Turn_Num	pshm->P[12619]
#define	P_Accumulate_Value	pshm->P[12620]
#define	P_Sharft_to_Sepa_Core_mm	pshm->P[12621]
#define	P_Sepa_Cal_Circum	pshm->P[12622]
#define	P_Sepa_Min_Need_Thickness	pshm->P[12623]
#define	P_Sepa_Min_Thickness_Cmd	pshm->P[12624]
#define	P_Sepa_Accumulate_Cmd	pshm->P[12625]
#define	P_Sepa_Required_Amount	pshm->P[12626]
#define	P_Sepa_Current_Thickness	pshm->P[12627]
#define	P_Sepa_Initial_Tickness	pshm->P[12628]
#define	P_Sepa_Required_Update_Timer	pshm->P[12629]
#define	P_TEST_EPC_Interlock_Auto	pshm->P[12630]
#define	P_TEST_EPC_Interlock_Manual	pshm->P[12631]
#define	P_Discharge_Total_Tact	pshm->P[12632]
#define	P_Read_Sector_TactTime(i)	pshm->P[(12633+i)%MAX_P]
#define	P_Write_Sector_TactTime(i)	pshm->P[(12639+i)%MAX_P]
#define	P_PLC15_Sub_Function_Dryrun_Active_Flag	pshm->P[12645]
#define	P_Sepa_Rotation_Sequence_Run_Trigger_Cnt	pshm->P[12646]
#define	P_Sepa_Mode_Sepa_Recipe_Count	pshm->P[12647]
#define	P_Discharged_After_End_Trigger	pshm->P[12648]
#define	P_Unloader_1st_Grip_Delay	pshm->P[12649]
#define	P_Separate_Cutter_Heating_Limit_Value	pshm->P[12650]
#define	P_Separate_Cutting_Current	pshm->P[12651]
#define	P_Separate_Cutter_Change_Cycle	pshm->P[12652]
#define	P_X_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12653]
#define	P_X_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12654]
#define	P_X_Cathode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12655]
#define	P_X_Anode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12656]
#define	P_X_Stack_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger	pshm->P[12657]
#define	P_Interlock_Messege_Confirmed	pshm->P[12658]
#define	P_X_MC_Communication_HeartBit	pshm->P[12659]
#define	P_SV_Cathode_Count	pshm->P[12660]
#define	P_SV_Anode_Count	pshm->P[12661]
#define	P_SV_AO_Reference_Value_Chanel(i)	pshm->P[(12662+i)%MAX_P]
#define	P_SV_Cathode_Reference_Thickness	pshm->P[12665]
#define	P_SV_Anode_Reference_Thickness	pshm->P[12666]
#define	P_SV_Stack_Table_Damper_Cathode	pshm->P[12667]
#define	P_SV_Stack_Table_Damper_Anode	pshm->P[12668]
#define	P_SV_Sepa_Reference_Thickness	pshm->P[12669]
#define	P_SV_Jelly_Roll_Width	pshm->P[12670]
#define	P_Cathode_Align_Continuous_NG_Recipe	pshm->P[12671]
#define	P_Anode_Align_Continuous_NG_Recipe	pshm->P[12672]
#define	P_Stack_Vision_Continuous_NG_Recipe	pshm->P[12673]
#define	P_PLC_Recipe_EPC_Sepa_Count	pshm->P[12674]
#define	P_PLC_Recipe_Revise_Sepa	pshm->P[12675]
#define	P_X_PLC_to_PMAC_Correction_Value	pshm->P[12676]
#define	P_Anode_Align_Continuous_NG_Check_range	pshm->P[12677]
#define	P_Cathode_Align_Continuous_NG_Check_range	pshm->P[12678]
#define	P_Stack_Align_Continuous_NG_Check_range	pshm->P[12679]
#define	P_Cathode_Surface_Continuous_NG_Recipe	pshm->P[12680]
#define	P_Anode_Surface_Continuous_NG_Recipe	pshm->P[12681]
#define	P_Cathode_Surface_Continuous_NG_Check_range	pshm->P[12682]
#define	P_Anode_Surface_Continuous_NG_Check_range	pshm->P[12683]
#define	P_Servo_Dancer_Alarm_Maximum_Angle_Value	pshm->P[12684]
#define	P_Servo_Dancer_Alarm_Minimum_Angle_Value	pshm->P[12685]
#define	P_Current_Selected_Spool_Rev_Counts_Init_Read	pshm->P[12686]
#define	P_Spool_ARC_Distance_mm	pshm->P[12687]
#define	P_ARC_Upper_Request_Sepa_Thickness_mm	pshm->P[12688]
#define	P_ARC_Lower_Request_Sepa_Thickness_mm	pshm->P[12689]
#define	P_Selected_Spool_Arc_Set_Rev_Counts_Value	pshm->P[12690]
#define	P_Set_Cnt_FR_Moving_Sepa_ARC	pshm->P[12691]
#define	P_Current_Selected_Spool_Rev_Counts	pshm->P[12692]
#define	P_AI_Cathode_Clamp_Damper	pshm->P[12693]
#define	P_AI_Anode_Clamp_Damper	pshm->P[12694]
#define	P_MSA_Run_Repeat_Num(i)	pshm->P[(12695+i)%MAX_P]
#define	P_Current_MSA_Run_Num(i)	pshm->P[(12700+i)%MAX_P]
#define	P_Select_Sheet_Value	pshm->P[12705]
#define	P_BTN_Config_Setup_Mode_Select	pshm->P[12706]
#define	P_Sepa_Thickness_Max_Value	pshm->P[12707]
#define	P_AI_Cathode_Clamp_Damper_Zero_Mpa_Analog_Value	pshm->P[12708]
#define	P_AI_Anode_Clamp_Damper_Zero_Mpa_Analog_Value	pshm->P[12709]
#define	P_Accumulated_Movement_MM_Unit_Cathode_1ST_pnp	pshm->P[12710]
#define	P_Accumulated_Movement_MM_Unit_Anode_1ST_pnp	pshm->P[12711]
#define	P_Accumulated_Movement_MM_Unit_Cathode_2nd_pnp	pshm->P[12712]
#define	P_Accumulated_Movement_MM_Unit_Anode_2nd_pnp	pshm->P[12713]
#define	P_AI_Anode_Clamp_Damper_Mpa	pshm->P[12714]
#define	P_AI_Cathode_Clamp_Damper_Mpa	pshm->P[12715]
#define	P_Current_Whole_Stack_Jelly_Roll_Thinckness_mm	pshm->P[12716]
#define	P_Upper_Sepa_Current_Thickness_um	pshm->P[12717]
#define	P_Lower_Sepa_Current_Thickness_um	pshm->P[12718]
#define	P_Spool_Rotate_Distance	pshm->P[12719]
#define	Spool_Diameter	pshm->P[12720]
#define	P_Current_FR_Moving_Cnt_To_PlC	pshm->P[12721]
#define	P_MES_APC_Select_Btn	pshm->P[12722]
#define	P_AO_Anode_Clamp_Damper	pshm->P[12723]
#define	P_AO_Cathode_Clamp_Damper	pshm->P[12724]
#define	P_Sepa_Length	pshm->P[12725]
#define	P_Minus_Limit_Detect_Popup_Flag	pshm->P[12726]
#define	P_Plus_Limit_Detect_Popup_Flag	pshm->P[12727]
#define	P_Fatal_Fe_Limit_Detect_Popup_Flag	pshm->P[12728]
#define	P_Emergency_Alarm_Popup_Flag	pshm->P[12729]
#define	P_SepaArcing_Popup_Flag	pshm->P[12730]
#define	P_Y_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger	pshm->P[12731]
#define	P_Y_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger	pshm->P[12732]
#define	P_Y_Cathode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger	pshm->P[12733]
#define	P_Y_Anode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger	pshm->P[12734]
#define	P_Y_Stack_Align_Calibration_twisted_Cycle_Stop_Request_Trigger	pshm->P[12735]
#define	P_Current_Selected_Sheet_Value	pshm->P[12736]
#define	P_Status_Config_Mode_Select	pshm->P[12737]
#define	P_Sepa_Thickness_Jig_Value	pshm->P[12738]
#define	P_PV_Stack_Table_Damper_Cathode	pshm->P[12739]
#define	P_PV_Stack_Table_Damper_Anode	pshm->P[12740]
#define	P_Discharge_Standby_Pos_Tack_Time	pshm->P[12741]
#define	P_Discharge_FR_MainZ_Pos_Tack_Time	pshm->P[12742]
#define	P_Discharge_Unloader_Go_Pos_Tack_Time	pshm->P[12743]
#define	P_Discharge_SubZ_Down_Pos_Tack_Time	pshm->P[12744]
#define	P_Discharge_Unloader_Cutting_Pos_Tack_Time	pshm->P[12745]
#define	P_Discharge_FR_Clamp_ON_Complete_Tack_Time	pshm->P[12746]
#define	P_Discharge_Cutting_Complete_Tack_Time	pshm->P[12747]
#define	P_Discharge_Motion_PG_Active_Starting_Tack_Time	pshm->P[12748]
#define	P_Discharge_Motion_PG_Active_Complete_Tack_Time	pshm->P[12749]
#define	P_Discharge_Sepa_First_Complete_Tack_Time	pshm->P[12750]
#define	P_Discharge_Complete_Tack_Time	pshm->P[12751]
#define	P_Discharge_Total_Tack_Time	pshm->P[12752]
#define	P_Anode_Clamp_TackTime_Array0	pshm->P[12753]
#define	P_Anode_Clamp_TackTime_Array1	pshm->P[12754]
#define	P_Anode_Clamp_TackTime_Array2	pshm->P[12755]
#define	P_Anode_Clamp_TackTime_Array3	pshm->P[12756]
#define	P_Anode_Clamp_TackTime_Array4	pshm->P[12757]
#define	P_Anode_Clamp_TackTime_Array5	pshm->P[12758]
#define	P_Anode_Clamp_TackTime_Array6	pshm->P[12759]
#define	P_Anode_Clamp_TackTime_Array7	pshm->P[12760]
#define	P_Anode_Clamp_TackTime_Array8	pshm->P[12761]
#define	P_Anode_Clamp_TackTime_Array9	pshm->P[12762]
#define	P_Anode_Clamp_TackTime_Array10	pshm->P[12763]
#define	P_Stacking_TackTime_Array0	pshm->P[12764]
#define	P_Stacking_TackTime_Array1	pshm->P[12765]
#define	P_Stacking_TackTime_Array2	pshm->P[12766]
#define	P_Stacking_TackTime_Array3	pshm->P[12767]
#define	P_Stacking_TackTime_Array4	pshm->P[12768]
#define	P_Stacking_TackTime_Array5	pshm->P[12769]
#define	P_Stacking_TackTime_Array6	pshm->P[12770]
#define	P_Stacking_TackTime_Array7	pshm->P[12771]
#define	P_Stacking_TackTime_Array8	pshm->P[12772]
#define	P_Stacking_TackTime_Array9	pshm->P[12773]
#define	P_Stacking_TackTime_Array10	pshm->P[12774]
#define	P_Cathode_Clamp_TackTime_Array0	pshm->P[12775]
#define	P_Cathode_Clamp_TackTime_Array1	pshm->P[12776]
#define	P_Cathode_Clamp_TackTime_Array2	pshm->P[12777]
#define	P_Cathode_Clamp_TackTime_Array3	pshm->P[12778]
#define	P_Cathode_Clamp_TackTime_Array4	pshm->P[12779]
#define	P_Cathode_Clamp_TackTime_Array5	pshm->P[12780]
#define	P_Cathode_Clamp_TackTime_Array6	pshm->P[12781]
#define	P_Cathode_Clamp_TackTime_Array7	pshm->P[12782]
#define	P_Cathode_Clamp_TackTime_Array8	pshm->P[12783]
#define	P_Cathode_Clamp_TackTime_Array9	pshm->P[12784]
#define	P_Cathode_Clamp_TackTime_Array10	pshm->P[12785]
#define	P_JellyRoll_Out_TackTime_Array0	pshm->P[12786]
#define	P_JellyRoll_Out_TackTime_Array1	pshm->P[12787]
#define	P_JellyRoll_Out_TackTime_Array2	pshm->P[12788]
#define	P_JellyRoll_Out_TackTime_Array3	pshm->P[12789]
#define	P_JellyRoll_Out_TackTime_Array4	pshm->P[12790]
#define	P_JellyRoll_Out_TackTime_Array5	pshm->P[12791]
#define	P_JellyRoll_Out_TackTime_Array6	pshm->P[12792]
#define	P_JellyRoll_Out_TackTime_Array7	pshm->P[12793]
#define	P_JellyRoll_Out_TackTime_Array8	pshm->P[12794]
#define	P_JellyRoll_Out_TackTime_Array9	pshm->P[12795]
#define	P_JellyRoll_Out_TackTime_Array10	pshm->P[12796]
#define	P_Anode_1th_TackTime_Array0	pshm->P[12797]
#define	P_Anode_1th_TackTime_Array1	pshm->P[12798]
#define	P_Anode_1th_TackTime_Array2	pshm->P[12799]
#define	P_Anode_1th_TackTime_Array3	pshm->P[12800]
#define	P_Anode_1th_TackTime_Array4	pshm->P[12801]
#define	P_Anode_1th_TackTime_Array5	pshm->P[12802]
#define	P_Anode_1th_TackTime_Array6	pshm->P[12803]
#define	P_Anode_1th_TackTime_Array7	pshm->P[12804]
#define	P_Anode_1th_TackTime_Array8	pshm->P[12805]
#define	P_Anode_1th_TackTime_Array9	pshm->P[12806]
#define	P_Anode_1th_TackTime_Array10	pshm->P[12807]
#define	P_Cathode_1th_TackTime_Array0	pshm->P[12808]
#define	P_Cathode_1th_TackTime_Array1	pshm->P[12809]
#define	P_Cathode_1th_TackTime_Array2	pshm->P[12810]
#define	P_Cathode_1th_TackTime_Array3	pshm->P[12811]
#define	P_Cathode_1th_TackTime_Array4	pshm->P[12812]
#define	P_Cathode_1th_TackTime_Array5	pshm->P[12813]
#define	P_Cathode_1th_TackTime_Array6	pshm->P[12814]
#define	P_Cathode_1th_TackTime_Array7	pshm->P[12815]
#define	P_Cathode_1th_TackTime_Array8	pshm->P[12816]
#define	P_Cathode_1th_TackTime_Array9	pshm->P[12817]
#define	P_Cathode_1th_TackTime_Array10	pshm->P[12818]
#define	P_Anode_2th_TackTime_Array0	pshm->P[12819]
#define	P_Anode_2th_TackTime_Array1	pshm->P[12820]
#define	P_Anode_2th_TackTime_Array2	pshm->P[12821]
#define	P_Anode_2th_TackTime_Array3	pshm->P[12822]
#define	P_Anode_2th_TackTime_Array4	pshm->P[12823]
#define	P_Anode_2th_TackTime_Array5	pshm->P[12824]
#define	P_Anode_2th_TackTime_Array6	pshm->P[12825]
#define	P_Anode_2th_TackTime_Array7	pshm->P[12826]
#define	P_Anode_2th_TackTime_Array8	pshm->P[12827]
#define	P_Anode_2th_TackTime_Array9	pshm->P[12828]
#define	P_Anode_2th_TackTime_Array10	pshm->P[12829]
#define	P_Cathode_2th_TackTime_Array0	pshm->P[12830]
#define	P_Cathode_2th_TackTime_Array1	pshm->P[12831]
#define	P_Cathode_2th_TackTime_Array2	pshm->P[12832]
#define	P_Cathode_2th_TackTime_Array3	pshm->P[12833]
#define	P_Cathode_2th_TackTime_Array4	pshm->P[12834]
#define	P_Cathode_2th_TackTime_Array5	pshm->P[12835]
#define	P_Cathode_2th_TackTime_Array6	pshm->P[12836]
#define	P_Cathode_2th_TackTime_Array7	pshm->P[12837]
#define	P_Cathode_2th_TackTime_Array8	pshm->P[12838]
#define	P_Cathode_2th_TackTime_Array9	pshm->P[12839]
#define	P_Cathode_2th_TackTime_Array10	pshm->P[12840]
#define	P_Anode_Align_Table_TackTime_Array0	pshm->P[12841]
#define	P_Anode_Align_Table_TackTime_Array1	pshm->P[12842]
#define	P_Anode_Align_Table_TackTime_Array2	pshm->P[12843]
#define	P_Anode_Align_Table_TackTime_Array3	pshm->P[12844]
#define	P_Anode_Align_Table_TackTime_Array4	pshm->P[12845]
#define	P_Anode_Align_Table_TackTime_Array5	pshm->P[12846]
#define	P_Anode_Align_Table_TackTime_Array6	pshm->P[12847]
#define	P_Anode_Align_Table_TackTime_Array7	pshm->P[12848]
#define	P_Anode_Align_Table_TackTime_Array8	pshm->P[12849]
#define	P_Anode_Align_Table_TackTime_Array9	pshm->P[12850]
#define	P_Anode_Align_Table_TackTime_Array10	pshm->P[12851]
#define	P_Cathode_Align_Table_TackTime_Array0	pshm->P[12852]
#define	P_Cathode_Align_Table_TackTime_Array1	pshm->P[12853]
#define	P_Cathode_Align_Table_TackTime_Array2	pshm->P[12854]
#define	P_Cathode_Align_Table_TackTime_Array3	pshm->P[12855]
#define	P_Cathode_Align_Table_TackTime_Array4	pshm->P[12856]
#define	P_Cathode_Align_Table_TackTime_Array5	pshm->P[12857]
#define	P_Cathode_Align_Table_TackTime_Array6	pshm->P[12858]
#define	P_Cathode_Align_Table_TackTime_Array7	pshm->P[12859]
#define	P_Cathode_Align_Table_TackTime_Array8	pshm->P[12860]
#define	P_Cathode_Align_Table_TackTime_Array9	pshm->P[12861]
#define	P_Cathode_Align_Table_TackTime_Array10	pshm->P[12862]
#define	P_Anode_NG_PNP_TackTime_Array0	pshm->P[12863]
#define	P_Anode_NG_PNP_TackTime_Array1	pshm->P[12864]
#define	P_Anode_NG_PNP_TackTime_Array2	pshm->P[12865]
#define	P_Anode_NG_PNP_TackTime_Array3	pshm->P[12866]
#define	P_Anode_NG_PNP_TackTime_Array4	pshm->P[12867]
#define	P_Anode_NG_PNP_TackTime_Array5	pshm->P[12868]
#define	P_Anode_NG_PNP_TackTime_Array6	pshm->P[12869]
#define	P_Anode_NG_PNP_TackTime_Array7	pshm->P[12870]
#define	P_Anode_NG_PNP_TackTime_Array8	pshm->P[12871]
#define	P_Anode_NG_PNP_TackTime_Array9	pshm->P[12872]
#define	P_Anode_NG_PNP_TackTime_Array10	pshm->P[12873]
#define	P_Cathode_NG_PNP_TackTime_Array0	pshm->P[12874]
#define	P_Cathode_NG_PNP_TackTime_Array1	pshm->P[12875]
#define	P_Cathode_NG_PNP_TackTime_Array2	pshm->P[12876]
#define	P_Cathode_NG_PNP_TackTime_Array3	pshm->P[12877]
#define	P_Cathode_NG_PNP_TackTime_Array4	pshm->P[12878]
#define	P_Cathode_NG_PNP_TackTime_Array5	pshm->P[12879]
#define	P_Cathode_NG_PNP_TackTime_Array6	pshm->P[12880]
#define	P_Cathode_NG_PNP_TackTime_Array7	pshm->P[12881]
#define	P_Cathode_NG_PNP_TackTime_Array8	pshm->P[12882]
#define	P_Cathode_NG_PNP_TackTime_Array9	pshm->P[12883]
#define	P_Cathode_NG_PNP_TackTime_Array10	pshm->P[12884]
#define	P_Sepa_Unwinder_TackTime_Array0	pshm->P[12885]
#define	P_Sepa_Unwinder_TackTime_Array1	pshm->P[12886]
#define	P_Sepa_Unwinder_TackTime_Array2	pshm->P[12887]
#define	P_Sepa_Unwinder_TackTime_Array3	pshm->P[12888]
#define	P_Sepa_Unwinder_TackTime_Array4	pshm->P[12889]
#define	P_Sepa_Unwinder_TackTime_Array5	pshm->P[12890]
#define	P_Sepa_Unwinder_TackTime_Array6	pshm->P[12891]
#define	P_Sepa_Unwinder_TackTime_Array7	pshm->P[12892]
#define	P_Sepa_Unwinder_TackTime_Array8	pshm->P[12893]
#define	P_Sepa_Unwinder_TackTime_Array9	pshm->P[12894]
#define	P_Sepa_Unwinder_TackTime_Array10	pshm->P[12895]
#define	P_Sepa_Unwinder_TackTime_Array11	pshm->P[12896]
#define	P_1st_Unloader_TackTime_Array0	pshm->P[12897]
#define	P_1st_Unloader_TackTime_Array1	pshm->P[12898]
#define	P_1st_Unloader_TackTime_Array2	pshm->P[12899]
#define	P_1st_Unloader_TackTime_Array3	pshm->P[12900]
#define	P_1st_Unloader_TackTime_Array4	pshm->P[12901]
#define	P_1st_Unloader_TackTime_Array5	pshm->P[12902]
#define	P_1st_Unloader_TackTime_Array6	pshm->P[12903]
#define	P_1st_Unloader_TackTime_Array7	pshm->P[12904]
#define	P_1st_Unloader_TackTime_Array8	pshm->P[12905]
#define	P_1st_Unloader_TackTime_Array9	pshm->P[12906]
#define	P_1st_Unloader_TackTime_Array10	pshm->P[12907]
#define	P_Cathode_1st_Vacuum_TackTime_Array1	pshm->P[12908]
#define	P_Cathode_1st_Vacuum_TackTime_Array2	pshm->P[12909]
#define	P_Cathode_1st_Vacuum_TackTime_Array3	pshm->P[12910]
#define	P_Cathode_1st_Vacuum_TackTime_Array4	pshm->P[12911]
#define	P_Cathode_1st_Vacuum_TackTime_Array5	pshm->P[12912]
#define	P_Cathode_1st_Vacuum_TackTime_Array6	pshm->P[12913]
#define	P_Cathode_1st_Vacuum_TackTime_Array7	pshm->P[12914]
#define	P_Cathode_1st_Vacuum_TackTime_Array8	pshm->P[12915]
#define	P_Cathode_1st_Vacuum_TackTime_Array9	pshm->P[12916]
#define	P_Cathode_1st_Vacuum_TackTime_Array10	pshm->P[12917]
#define	P_Cathode_Align_Vacuum_TackTime_Array1	pshm->P[12918]
#define	P_Cathode_Align_Vacuum_TackTime_Array2	pshm->P[12919]
#define	P_Cathode_Align_Vacuum_TackTime_Array3	pshm->P[12920]
#define	P_Cathode_Align_Vacuum_TackTime_Array4	pshm->P[12921]
#define	P_Cathode_Align_Vacuum_TackTime_Array5	pshm->P[12922]
#define	P_Cathode_Align_Vacuum_TackTime_Array6	pshm->P[12923]
#define	P_Cathode_Align_Vacuum_TackTime_Array7	pshm->P[12924]
#define	P_Cathode_Align_Vacuum_TackTime_Array8	pshm->P[12925]
#define	P_Cathode_Align_Vacuum_TackTime_Array9	pshm->P[12926]
#define	P_Cathode_Align_Vacuum_TackTime_Array10	pshm->P[12927]
#define	P_Cathode_2nd_Vacuum_TackTime_Array1	pshm->P[12928]
#define	P_Cathode_2nd_Vacuum_TackTime_Array2	pshm->P[12929]
#define	P_Cathode_2nd_Vacuum_TackTime_Array3	pshm->P[12930]
#define	P_Cathode_2nd_Vacuum_TackTime_Array4	pshm->P[12931]
#define	P_Cathode_2nd_Vacuum_TackTime_Array5	pshm->P[12932]
#define	P_Cathode_2nd_Vacuum_TackTime_Array6	pshm->P[12933]
#define	P_Cathode_2nd_Vacuum_TackTime_Array7	pshm->P[12934]
#define	P_Cathode_2nd_Vacuum_TackTime_Array8	pshm->P[12935]
#define	P_Cathode_2nd_Vacuum_TackTime_Array9	pshm->P[12936]
#define	P_Cathode_2nd_Vacuum_TackTime_Array10	pshm->P[12937]
#define	P_Anode_1st_Vacuum_TackTime_Array1	pshm->P[12938]
#define	P_Anode_1st_Vacuum_TackTime_Array2	pshm->P[12939]
#define	P_Anode_1st_Vacuum_TackTime_Array3	pshm->P[12940]
#define	P_Anode_1st_Vacuum_TackTime_Array4	pshm->P[12941]
#define	P_Anode_1st_Vacuum_TackTime_Array5	pshm->P[12942]
#define	P_Anode_1st_Vacuum_TackTime_Array6	pshm->P[12943]
#define	P_Anode_1st_Vacuum_TackTime_Array7	pshm->P[12944]
#define	P_Anode_1st_Vacuum_TackTime_Array8	pshm->P[12945]
#define	P_Anode_1st_Vacuum_TackTime_Array9	pshm->P[12946]
#define	P_Anode_1st_Vacuum_TackTime_Array10	pshm->P[12947]
#define	P_Anode_Align_Vacuum_TackTime_Array1	pshm->P[12948]
#define	P_Anode_Align_Vacuum_TackTime_Array2	pshm->P[12949]
#define	P_Anode_Align_Vacuum_TackTime_Array3	pshm->P[12950]
#define	P_Anode_Align_Vacuum_TackTime_Array4	pshm->P[12951]
#define	P_Anode_Align_Vacuum_TackTime_Array5	pshm->P[12952]
#define	P_Anode_Align_Vacuum_TackTime_Array6	pshm->P[12953]
#define	P_Anode_Align_Vacuum_TackTime_Array7	pshm->P[12954]
#define	P_Anode_Align_Vacuum_TackTime_Array8	pshm->P[12955]
#define	P_Anode_Align_Vacuum_TackTime_Array9	pshm->P[12956]
#define	P_Anode_Align_Vacuum_TackTime_Array10	pshm->P[12957]
#define	P_Anode_2nd_Vacuum_TackTime_Array1	pshm->P[12958]
#define	P_Anode_2nd_Vacuum_TackTime_Array2	pshm->P[12959]
#define	P_Anode_2nd_Vacuum_TackTime_Array3	pshm->P[12960]
#define	P_Anode_2nd_Vacuum_TackTime_Array4	pshm->P[12961]
#define	P_Anode_2nd_Vacuum_TackTime_Array5	pshm->P[12962]
#define	P_Anode_2nd_Vacuum_TackTime_Array6	pshm->P[12963]
#define	P_Anode_2nd_Vacuum_TackTime_Array7	pshm->P[12964]
#define	P_Anode_2nd_Vacuum_TackTime_Array8	pshm->P[12965]
#define	P_Anode_2nd_Vacuum_TackTime_Array9	pshm->P[12966]
#define	P_Anode_2nd_Vacuum_TackTime_Array10	pshm->P[12967]
#define	P_Final_Roll_TackTime_Array1	pshm->P[12968]
#define	P_Final_Roll_TackTime_Array2	pshm->P[12969]
#define	P_Final_Roll_TackTime_Array3	pshm->P[12970]
#define	P_Final_Roll_TackTime_Array4	pshm->P[12971]
#define	P_Final_Roll_TackTime_Array5	pshm->P[12972]
#define	P_Final_Roll_TackTime_Array6	pshm->P[12973]
#define	P_Final_Roll_TackTime_Array7	pshm->P[12974]
#define	P_Final_Roll_TackTime_Array8	pshm->P[12975]
#define	P_Final_Roll_TackTime_Array9	pshm->P[12976]
#define	P_Final_Roll_TackTime_Array10	pshm->P[12977]
#define	P_Sepa_ARC_TackTime_Array1	pshm->P[12978]
#define	P_Sepa_ARC_TackTime_Array2	pshm->P[12979]
#define	P_Sepa_ARC_TackTime_Array3	pshm->P[12980]
#define	P_Sepa_ARC_TackTime_Array4	pshm->P[12981]
#define	P_Sepa_ARC_TackTime_Array5	pshm->P[12982]
#define	P_Sepa_ARC_TackTime_Array6	pshm->P[12983]
#define	P_Sepa_ARC_TackTime_Array7	pshm->P[12984]
#define	P_Sepa_ARC_TackTime_Array8	pshm->P[12985]
#define	P_Sepa_ARC_TackTime_Array9	pshm->P[12986]
#define	P_Sepa_ARC_TackTime_Array10	pshm->P[12987]
#define	P_PACK_ML_Status_bit	pshm->P[12988]
#define	P_Whole_Stacking_TackTime_MES_Report_Flag	pshm->P[12989]
#define	P_JellyRoll_Out_TackTime_MES_Report_Flag	pshm->P[12990]
#define	P_PV_Cathode_Count	pshm->P[12991]
#define	P_PV_Anode_Count	pshm->P[12992]
#define	P_PV_AO_Value_Chanel(i)	pshm->P[(12993+i)%MAX_P]
#define	P_PV_Cathode_NG_TR_NG_Count	pshm->P[12997]
#define	P_PV_Anode_NG_TR_NG_Count	pshm->P[12998]
#define	P_PV_Anode_Retry_NG_Count	pshm->P[12999]
#define	P_PV_Cathode_Retry_NG_Count	pshm->P[13000]
#define	P_PV_Align_INPUT_Count	pshm->P[13001]
#define	P_Unloader_Grip_Pressure	pshm->P[13002]
#define	P_Unloader_Heatmeter	pshm->P[13003]
#define	P_Project_Ver_A	pshm->P[13004]
#define	P_Project_Ver_B	pshm->P[13005]
#define	P_Project_Ver_C	pshm->P[13006]
#define	P_Project_Ver_D	pshm->P[13007]
#define	P_Interlock_Messege(i)	pshm->P[(13008+i)%MAX_P]
#define	P_EPC_Y_StandBy	pshm->P[13058]
#define	P_SV_Read_Enable_Flag	pshm->P[13059]
#define	P_Spool_Rotate_Distance_mm	pshm->P[13060]
#define	P_Current_Homming_Status(i)	pshm->P[(13061+i)%MAX_P]
#define	P_Home_Execute_Type(i)	pshm->P[(13111+i)%MAX_P]
#define	P_Cathode_Clamp_Gantry	pshm->P[13161]
#define	P_Anode_Clamp_Gantry	pshm->P[13162]
#define	P_SV_Separator_Heting_Cutter_Change_Period	pshm->P[13163]
#define	P_Interval_Read_Time(i)	pshm->P[(13164+i)%MAX_P]
#define	P_Interval_Write_Time(i)	pshm->P[(13170+i)%MAX_P]
#define	P_Cathode_Picker_Cylinder_Count	pshm->P[13176]
#define	P_Anode_Picker_Cylinder_Count	pshm->P[13177]
#define	P_SV_Stack_Table_Cathode_Reference_Value	pshm->P[13178]
#define	P_SV_Stack_Table_Anode_Reference_Value	pshm->P[13179]
#define	P_CA_DR_Offset	pshm->P[13180]
#define	P_AN_DR_Offset	pshm->P[13181]
#define	P_First_DR_Offset	pshm->P[13182]
#define	P_Last_DR_Offset	pshm->P[13183]
#define	P_BTN_QC_Sample_Flag	pshm->P[13184]
#define	P_BTN_Loss_Sample_Flag	pshm->P[13185]
#define	P_MSA_Sample_Flag	pshm->P[13186]
#define	P_Sample_JR_Recipe_Count	pshm->P[13187]
#define	P_Ca_Clamp_Y_Move	pshm->P[13188]
#define	P_An_Clamp_Y_Move	pshm->P[13189]
#define	P_Stack_Table_JR_Exist_Flag	pshm->P[13190]
#define	P_Program_Monitoring_Lamp_Cell_Ready	pshm->P[13191]
#define	P_Program_Monitoring_Lamp_Ready_Pos	pshm->P[13192]
#define	P_Program_Monitoring_Lamp_Pause_Pos	pshm->P[13193]
#define	P_Program_Monitoring_Lamp_Motion_Run	pshm->P[13194]
#define	P_Program_Monitoring_Lamp_Cell_Remove	pshm->P[13195]
#define	P_Program_Monitoring_Lamp_Cell_Supply	pshm->P[13196]
#define	P_Program_Monitoring_Lamp_Sepa_Mode	pshm->P[13197]
#define	P_Program_Monitoring_Lamp_Semi_Run	pshm->P[13198]
#define	P_Program_Monitoring_Lamp_Stack_Mode	pshm->P[13199]
#define	P_Program_Monitoring_Lamp_Anode_Aling_NG	pshm->P[13200]
#define	P_Program_Monitoring_Lamp_Anode_Retry_NG	pshm->P[13201]
#define	P_Program_Monitoring_Lamp_Cathode_Align_NG	pshm->P[13202]
#define	P_Program_Monitoring_Lamp_Cathode_Retry_NG	pshm->P[13203]
#define	P_Program_Monitoring_Lamp_Last_Stack_Mode	pshm->P[13204]
#define	P_Program_Monitoring_Lamp_Jelly_Roll_OK	pshm->P[13205]
#define	P_Program_Monitoring_Lamp_Jelly_Roll_NG	pshm->P[13206]
#define	P_Program_Monitoring_Lamp_Jelly_Roll_Sepa	pshm->P[13207]
#define	P_Program_Monitoring_Lamp_Cell_Out_Pos	pshm->P[13208]
#define	P_Program_Monitoring_Lamp_Cell_Out_Mode	pshm->P[13209]
#define	P_Master_Motion_Program_Flag	pshm->P[13210]
#define	P_Sub_Master_Motion_Program_Flag(i)	pshm->P[(13211+i)%MAX_P]
#define	P_Slave_Motion_Program_Flag(i)	pshm->P[(13231+i)%MAX_P]
#define	P_Master_Motion_CycleStop_Flag	pshm->P[13251]
#define	P_OLD_Jog_Speed_Motor(i)	pshm->P[(13252+i)%MAX_P]
#define	P_PLC_08_Program_Ver	pshm->P[13302]
#define	P_Old_PMAC_Commands	pshm->P[13303]
#define	P_Old_PMAC_Status	pshm->P[13304]
#define	P_Old_PMAC_Current_Mode	pshm->P[13305]
#define	P_Mode_Function_State_Machine	pshm->P[13306]
#define	P_PMAC_Commands	pshm->P[13307]
#define	P_Command_Start(i)	pshm->P[(13308+i)%MAX_P]
#define	P_Command_Complete(i)	pshm->P[(13326+i)%MAX_P]
#define	P_Command_Reset(i)	pshm->P[(13344+i)%MAX_P]
#define	P_Command_Hold(i)	pshm->P[(13362+i)%MAX_P]
#define	P_Command_Unhold(i)	pshm->P[(13380+i)%MAX_P]
#define	P_Command_Suspend(i)	pshm->P[(13398+i)%MAX_P]
#define	P_Command_Unsuspend(i)	pshm->P[(13416+i)%MAX_P]
#define	P_Command_Clear(i)	pshm->P[(13434+i)%MAX_P]
#define	P_Command_Stop(i)	pshm->P[(13452+i)%MAX_P]
#define	P_Command_Abort(i)	pshm->P[(13470+i)%MAX_P]
#define	P_Command_Status_Complete(i)	pshm->P[(13488+i)%MAX_P]
#define	P_Command_Mask_Layer(i)	pshm->P[(13506+i)%MAX_P]
#define	P_Command_Process_Type(i)	pshm->P[(13524+i)%MAX_P]
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
#define	P_PMAC_Current_Mode	pshm->P[13542]
#define	P_PMAC_Status	pshm->P[13543]
#define	P_PMAC_Old_Mode	pshm->P[13544]
#define	P_Ready_Tack_Chk_Timer	pshm->P[13545]
#define	P_PLC09_Common_Command_Flag	pshm->P[13546]
#define	P_PLC09_Common_Command_Complete_Bit	pshm->P[13547]
#define	P_PLC09_Common_Execute_Flag	pshm->P[13548]
#define	P_PLC09_Common_Execute_Complete_Bit	pshm->P[13549]
#define	P_PLC09_Status	pshm->P[13550]
#define	P_PLC09_Libraries_Var	pshm->P[13551]
#define	P_Master_Motion_Program_ON_Flag	pshm->P[13552]
#define	P_Master_Motion_Program_ON_Complete_Bit	pshm->P[13553]
#define	P_Master_Motion_Program_OFF_Flag	pshm->P[13554]
#define	P_Master_Motion_Program_OFF_Complete_Bit	pshm->P[13555]
#define	P_Common_Function_Timbase_ON_Flag	pshm->P[13556]
#define	P_Common_Function_Timbase_ON_Complete_Bit	pshm->P[13557]
#define	P_Common_Function_Timbase_OFF_Flag	pshm->P[13558]
#define	P_Common_Function_Timbase_OFF_Complete_Bit	pshm->P[13559]
#define	P_Common_Function_Monitoring_Lamp_OFF_Flag	pshm->P[13560]
#define	P_Common_Function_Monitoring_Lamp_OFF_Complete_Bit	pshm->P[13561]
#define	P_Common_Function_Slave_Motion_Common_Init_Flag	pshm->P[13562]
#define	P_Common_Function_Slave_Motion_Common_Init_Complete_Bit	pshm->P[13563]
#define	P_Common_Function_OlD_Jog_Speed_Save_ON_Flag	pshm->P[13564]
#define	P_Common_Function_OlD_Jog_Speed_Save_ON_Complete_Bit	pshm->P[13565]
#define	P_Auto_Resetting_Sum_Ready_Pos_Check_Flag	pshm->P[13566]
#define	P_Auto_Resetting_Sum_Ready_Pos_Check_Complete_bit	pshm->P[13567]
#define	P_Manual_Resetting_Sum_Ready_Pos_Check_Flag	pshm->P[13568]
#define	P_Manual_Resetting_Sum_Ready_Pos_Check_Complete_bit	pshm->P[13569]
#define	P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Flag	pshm->P[13570]
#define	P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Complete_Bit	pshm->P[13571]
#define	P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Flag	pshm->P[13572]
#define	P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Complete_Bit	pshm->P[13573]
#define	P_Motion_Target_Position_Complete	pshm->P[13574]
#define	P_SM_Auto_Run_Layer_Management	pshm->P[13575]
#define	P_Buffer_Mode_Status_Sequence	pshm->P[13576]
#define	P_SM_Sub_Function_Pause	pshm->P[13577]
#define	P_PLC09_Resetting_Position_Check_State_Machine	pshm->P[13578]
#define	P_PLC09_Resetting_Position_Moving_State_Machine	pshm->P[13579]
#define	P_Sum_Ready_pos_Motor(i)	pshm->P[(13580+i)%MAX_P]
#define	P_SM_Resetting_Pause_Position	pshm->P[13622]
#define	P_20per_Vac_Error_Cycle_Stop_Flag	pshm->P[13623]
#define	P_MNTR_PLC23_ARC_Complete	pshm->P[13624]
#define	P_FUNCTION_PLC13_Sepa_Trigger_Enable	pshm->P[13625]
#define	P_PLC_Recipe_PLC2_Revise_Sepa	pshm->P[13626]
#define	P_Auto_Semi_Init_Status	pshm->P[13627]
#define	P_Auto_Semi_Init_Chk_Bit	pshm->P[13628]
#define	P_Old_PLC_HeartBit_Flag	pshm->P[13629]
#define	P_PLC09_Init_Flag	pshm->P[13630]
#define	P_Check_IDLE_CF_Flag	pshm->P[13631]
#define	P_Check_EXECUTE_CF_Flag	pshm->P[13632]
#define	P_Check_COMPLETING_CF_Flag	pshm->P[13633]
#define	P_Check_COMPLETE_CF_Flag	pshm->P[13634]
#define	P_Check_HOLDING_CF_Flag	pshm->P[13635]
#define	P_Check_HOLD_CF_Flag	pshm->P[13636]
#define	P_Check_UNHOLDING_CF_Flag	pshm->P[13637]
#define	P_Check_SUSPENDING_CF_Flag	pshm->P[13638]
#define	P_Check_SUSPENDED_CF_Flag	pshm->P[13639]
#define	P_Check_UNSUSPENDING_CF_Flag	pshm->P[13640]
#define	P_Check_STOPPED_CF_Flag	pshm->P[13641]
#define	P_Check_ABORTED_CF_Flag	pshm->P[13642]
#define	P_Check_CLEARING_CF_Flag	pshm->P[13643]
#define	P_Check_IDLE_CF	pshm->P[13644]
#define	P_Check_EXECUTE_CF	pshm->P[13645]
#define	P_Check_COMPLETING_CF	pshm->P[13646]
#define	P_Check_COMPLETE_CF	pshm->P[13647]
#define	P_Check_HOLDING_CF	pshm->P[13648]
#define	P_Check_HOLD_CF	pshm->P[13649]
#define	P_Check_UNHOLDING_CF	pshm->P[13650]
#define	P_Check_SUSPENDING_CF	pshm->P[13651]
#define	P_Check_SUSPENDED_CF	pshm->P[13652]
#define	P_Check_UNSUSPENDING_CF	pshm->P[13653]
#define	P_Check_STOPPED_CF	pshm->P[13654]
#define	P_Check_ABORTED_CF	pshm->P[13655]
#define	P_Check_CLEARING_CF	pshm->P[13656]
#define	P_Check_STOPPING_CF	pshm->P[13657]
#define	P_Check_STARTING_CF	pshm->P[13658]
#define	P_Check_RESETTING_CF	pshm->P[13659]
#define	P_Check_STARTTING_CF	pshm->P[13660]
#define	P_Queue_Clear	pshm->P[13661]
#define	P_PLC09_Alarm_Test_Flag	pshm->P[13662]
#define	P_PLC09_Test_Temp	pshm->P[13663]
#define	P_PLC01_STOP_Queue_Complete_Flag	pshm->P[13664]
#define	P_PMAC_All_Home_Cmd	pshm->P[13665]
#define	P_PMAC_All_Home_Status	pshm->P[13666]
#define	P_PMAC_Master_Following_Use_Flag	pshm->P[13667]
#define	PnP_Belt_Waring_Pos	pshm->P[13668]
#define	P_Old_X_PLC_Sync_Heart_Bit	pshm->P[13669]
#define	P_Stack_Heart_Bit_Sync_Flag	pshm->P[13670]
#define	P_Stack_Heart_Bit_Sunc_Complete_Bit	pshm->P[13671]
#define	P_Resetting_Init_Module_RTN	pshm->P[13672]
#define	P_PLC09_MNTR	pshm->P[13673]
#define	P_Unloder_PNP_Home_IL_Pos	pshm->P[13674]
#define	P_ECAT_Slave_Err_Bit	pshm->P[13675]
#define	P_MC_Power_Down_Flag	pshm->P[13676]
#define	P_Old_MC_Power_Down_Flag	pshm->P[13677]
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
#define	P_Modbus_Delay_Timer	pshm->P[13678]
#define	P_Modbus_Connect_Status	pshm->P[13679]
#define	P_Modbus_Reconnect_MNTR	pshm->P[13680]
#define	P_Ecat_Reconn_Chk_Lamp	pshm->P[13681]
#define	P_MC_Reconn_Chk_Lamp	pshm->P[13682]
#define	P_Cathode_1st_Vac_Set_Time	pshm->P[13683]
#define	P_Cathode_2nd_Vac_Set_Time	pshm->P[13684]
#define	P_Cathode_Align_Vac_Set_Time	pshm->P[13685]
#define	P_Cathode_Align_Blow_Set_Time	pshm->P[13686]
#define	P_Anode_1st_Vac_Set_Time	pshm->P[13687]
#define	P_Anode_2nd_Vac_Set_Time	pshm->P[13688]
#define	P_Sepa_Consume_Mode_Thickness_rate	pshm->P[13689]
#define	P_Sepa_Anode_Recipe_Count	pshm->P[13690]
#define	P_Sepa_Cathode_Recipe_Count	pshm->P[13691]
#define	P_Discharge_Cathode_Recipe_Count	pshm->P[13692]
#define	P_Discharge_Anode_Recipe_Count	pshm->P[13693]
#define	P_Suspend_Discharge_Cathode_Counter	pshm->P[13694]
#define	P_Suspend_Discharge_Anode_Counter	pshm->P[13695]
#define	P_Suspend_Discharge_Waiting_Flag	pshm->P[13696]
#define	P_Com_ARC_Sepa_Consume_Mode_Flag	pshm->P[13697]
#define	P_Com_EPC_Sepa_Consume_Mode_Flag	pshm->P[13698]
#define	P_Com_User_Sepa_Consume_Mode_Flag	pshm->P[13699]
#define	P_Com_Dry_Mode_Flag	pshm->P[13700]
#define	P_SM_Recipe_Value_Management	pshm->P[13701]
#define	P_Sepa_Mode_Recipe_Count	pshm->P[13702]
#define	P_Sepa_Mode_EPC_Recipe_Count	pshm->P[13703]
#define	P_ARC_End_Sepa_Recipe_Count	pshm->P[13704]
#define	P_Anode_Align_NG_Array(i)	pshm->P[(13705+i)%MAX_P]
#define	P_Cathode_Align_NG_Array(i)	pshm->P[(13725+i)%MAX_P]
#define	P_Anode_Surface_NG_Array(i)	pshm->P[(13745+i)%MAX_P]
#define	P_Cathode_Surface_NG_Array(i)	pshm->P[(13765+i)%MAX_P]
#define	P_Stack_NG_Array(i)	pshm->P[(13785+i)%MAX_P]
#define	P_Cathode_Align_Continuous_NG_Stop_Select	pshm->P[13805]
#define	P_Anode_Align_Continuous_NG_Stop_Select	pshm->P[13806]
#define	P_Stack_Vision_NG_Enable	pshm->P[13807]
#define	P_Cathode_Surface_Continuous_NG_Stop_Select	pshm->P[13808]
#define	P_Anode_Surface_Continuous_NG_Stop_Select	pshm->P[13809]
#define	P_Anode_Trigger_IO_Test_Vision_PLC_Loop	pshm->P[13810]
#define	P_Anode_Trigger_IO_Test_Motion_Loop	pshm->P[13811]
#define	P_Cathode_Trigger_IO_Test_Vision_PLC_Loop	pshm->P[13812]
#define	P_Cathode_Trigger_IO_Test_Motion_Loop	pshm->P[13813]
#define	P_Stack_Trigger_IO_Test_Vision_PLC_Loop	pshm->P[13814]
#define	P_Stack_Trigger_IO_Test_Motion_Loop	pshm->P[13815]
#define	P_PLC12_Continuous_Buffer_Reset_Flag	pshm->P[13816]
#define	P_Continuous_Call_Align_OK_Flag(i)	pshm->P[(13817+i)%MAX_P]
#define	P_Continuous_Call_Align_NG_Flag(i)	pshm->P[(13819+i)%MAX_P]
#define	P_Continuous_Call_Align_TimeOut_Flag(i)	pshm->P[(13821+i)%MAX_P]
#define	P_Continuous_Call_Surface_OK_Flag(i)	pshm->P[(13823+i)%MAX_P]
#define	P_Continuous_Call_Surface_NG_Flag(i)	pshm->P[(13825+i)%MAX_P]
#define	P_Continuous_Call_Surface_TimeOut_Flag(i)	pshm->P[(13827+i)%MAX_P]
#define	P_Continuous_Call_Stack_Flag(i)	pshm->P[(13829+i)%MAX_P]
#define	P_PLC12_Anode_Sheet_Pick_Up_Flag	pshm->P[13832]
#define	P_PLC12_Cathode_Sheet_Pick_Up_Flag	pshm->P[13833]
#define	P_Hold_Anode_Sheet_Pick_Up_Flag	pshm->P[13834]
#define	P_Hold_Cathode_Sheet_Pick_Up_Flag	pshm->P[13835]
#define	P_Sheet_Interface_Complete_Pos	pshm->P[13836]
#define	P_Anode_Sheet_Interface_Complete_Pos	pshm->P[13837]
#define	P_Cathode_Sheet_Interface_Complete_Pos	pshm->P[13838]
#define	P_Anode_2nd_TR_Maint_Check	pshm->P[13839]
#define	P_Cathode_2nd_TR_Maint_Check	pshm->P[13840]
#define	P_PLC12_Observser_MNTR(i)	pshm->P[(13841+i)%MAX_P]
#define	P_PLC12_Vacuum_MNTR(i)	pshm->P[(13846+i)%MAX_P]
#define	P_Vacuum_Check(i)	pshm->P[(13854+i)%MAX_P]
#define	P_PLC12_Blow_MNTR(i)	pshm->P[(13862+i)%MAX_P]
#define	P_Blow_Check(i)	pshm->P[(13870+i)%MAX_P]
#define	P_PLC12_Vacuum_1st_Cathode_MNTR_Timer	pshm->P[13878]
#define	P_PLC12_Vacuum_2nd_Cathode_MNTR_Timer	pshm->P[13879]
#define	P_PLC12_Vacuum_NG_Cathode_MNTR_Timer	pshm->P[13880]
#define	P_PLC12_Vacuum_Align_Cathode_MNTR_Timer	pshm->P[13881]
#define	P_PLC12_Vacuum_1st_Anode_MNTR_Timer	pshm->P[13882]
#define	P_PLC12_Vacuum_2nd_Anode_MNTR_Timer	pshm->P[13883]
#define	P_PLC12_Vacuum_NG_Anode_MNTR_Timer	pshm->P[13884]
#define	P_PLC12_Vacuum_Align_Anode_MNTR_Timer	pshm->P[13885]
#define	P_PLC12_Vacuum_1st_Cathode_Set_Time	pshm->P[13886]
#define	P_PLC12_Vacuum_2nd_Cathode_Set_Time	pshm->P[13887]
#define	P_PLC12_Vacuum_NG_Cathode_Set_Time	pshm->P[13888]
#define	P_PLC12_Vacuum_Align_Cathode_Set_Time	pshm->P[13889]
#define	P_PLC12_Vacuum_1st_Anode_Set_Time	pshm->P[13890]
#define	P_PLC12_Vacuum_2nd_Anode_Set_Time	pshm->P[13891]
#define	P_PLC12_Vacuum_NG_Anode_Set_Time	pshm->P[13892]
#define	P_PLC12_Vacuum_Align_Anode_Set_Time	pshm->P[13893]
#define	P_PLC12_Vacuum_1st_Cathode_Take_Time(i)	pshm->P[(13894+i)%MAX_P]
#define	P_PLC12_Vacuum_2nd_Cathode_Take_Time(i)	pshm->P[(13899+i)%MAX_P]
#define	P_PLC12_Vacuum_NG_Cathode_Take_Time(i)	pshm->P[(13904+i)%MAX_P]
#define	P_PLC12_Vacuum_Align_Cathode_Take_Time(i)	pshm->P[(13909+i)%MAX_P]
#define	P_PLC12_Vacuum_1st_Anode_Take_Time(i)	pshm->P[(13914+i)%MAX_P]
#define	P_PLC12_Vacuum_2nd_Anode_Take_Time(i)	pshm->P[(13919+i)%MAX_P]
#define	P_PLC12_Vacuum_NG_Anode_Take_Time(i)	pshm->P[(13924+i)%MAX_P]
#define	P_PLC12_Vacuum_Align_Anode_Take_Time(i)	pshm->P[(13929+i)%MAX_P]
#define	P_PLC12_Blow_1st_Cathode_MNTR_Timer	pshm->P[13934]
#define	P_PLC12_Blow_2nd_Cathode_MNTR_Timer	pshm->P[13935]
#define	P_PLC12_Blow_NG_Cathode_MNTR_Timer	pshm->P[13936]
#define	P_PLC12_Blow_Align_Cathode_MNTR_Timer	pshm->P[13937]
#define	P_PLC12_Blow_1st_Anode_MNTR_Timer	pshm->P[13938]
#define	P_PLC12_Blow_2nd_Anode_MNTR_Timer	pshm->P[13939]
#define	P_PLC12_Blow_NG_Anode_MNTR_Timer	pshm->P[13940]
#define	P_PLC12_Blow_Align_Anode_MNTR_Timer	pshm->P[13941]
#define	P_PLC12_Blow_1st_Cathode_Set_Time	pshm->P[13942]
#define	P_PLC12_Blow_2nd_Cathode_Set_Time	pshm->P[13943]
#define	P_PLC12_Blow_NG_Cathode_Set_Time	pshm->P[13944]
#define	P_PLC12_Blow_Align_Cathode_Set_Time	pshm->P[13945]
#define	P_PLC12_Blow_1st_Anode_Set_Time	pshm->P[13946]
#define	P_PLC12_Blow_2nd_Anode_Set_Time	pshm->P[13947]
#define	P_PLC12_Blow_NG_Anode_Set_Time	pshm->P[13948]
#define	P_PLC12_Blow_Align_Anode_Set_Time	pshm->P[13949]
#define	P_PLC12_Blow_1st_Cathode_Take_Time(i)	pshm->P[(13950+i)%MAX_P]
#define	P_PLC12_Blow_2nd_Cathode_Take_Time(i)	pshm->P[(13955+i)%MAX_P]
#define	P_PLC12_Blow_NG_Cathode_Take_Time(i)	pshm->P[(13960+i)%MAX_P]
#define	P_PLC12_Blow_Align_Cathode_Take_Time(i)	pshm->P[(13965+i)%MAX_P]
#define	P_PLC12_Blow_1st_Anode_Take_Time(i)	pshm->P[(13970+i)%MAX_P]
#define	P_PLC12_Blow_2nd_Anode_Take_Time(i)	pshm->P[(13975+i)%MAX_P]
#define	P_PLC12_Blow_NG_Anode_Take_Time(i)	pshm->P[(13980+i)%MAX_P]
#define	P_PLC12_Blow_Align_Anode_Take_Time(i)	pshm->P[(13985+i)%MAX_P]
#define	P_Vacuum_Reentry_Bit	pshm->P[13990]
#define	P_Blow_Reentry_Bit	pshm->P[13991]
#define	P_Status_arry(i)	pshm->P[(13992+i)%MAX_P]
#define	P_Queue_arry(i)	pshm->P[(14012+i)%MAX_P]
#define	P_Step_arry(i)	pshm->P[(14032+i)%MAX_P]
#define	P_Index_arry(i)	pshm->P[(14052+i)%MAX_P]
#define	P_top	pshm->P[14072]
#define	P_Queue_stack_top	pshm->P[14073]
#define	P_Step_stack_top	pshm->P[14074]
#define	P_Index_stack_top	pshm->P[14075]
#define	P_Status_stack_top	pshm->P[14076]
#define	NN_Step	pshm->P[14077]
#define	NN_Index	pshm->P[14078]
#define	P_PLC_Observser_MNTR(i)	pshm->P[(14079+i)%MAX_P]
#define	P_PLC12_Frist	pshm->P[14084]
#define	P_SM_Auto_Run_Status_Management	pshm->P[14085]
#define	P_SM_Status_Main_Memory_Management	pshm->P[14086]
#define	P_SM_Cell_Memory_Management	pshm->P[14087]
#define	P_Test_Vacuum_Timer(i)	pshm->P[(14088+i)%MAX_P]
#define	P_Test_Blow_Timer(i)	pshm->P[(14096+i)%MAX_P]
#define	P_Vac_Test_Set_Time(i)	pshm->P[(14104+i)%MAX_P]
#define	P_Blow_Test_Set_Time(i)	pshm->P[(14112+i)%MAX_P]
#define	P_PLC12_Vacuum_Unit_Data	pshm->P[14120]
#define	P_PLC12_Blow_Unit_Data	pshm->P[14121]
#define	P_Stack_Algorithme_Cmd_Event_Status	pshm->P[14122]
#define	P_PLC12_vacuum_Event_Status	pshm->P[14123]
#define	P_PLC12_Blow_Event_status	pshm->P[14124]
#define	P_PLC12_vacuum_DIO_Observer_Status	pshm->P[14125]
#define	P_PLC12_Blow_DIO_Observer_Status	pshm->P[14126]
#define	P_Resetting_Vacuum_MNTR_State_Machine	pshm->P[14127]
#define	P_Heart_Bit_Time	pshm->P[14128]
#define	P_Dancer_Angle_Alarm_Timer_Flag	pshm->P[14129]
#define	P_Dancer_Angle_Alarm_Check_Timer	pshm->P[14130]
#define	P_BTN_LED_LAMP	pshm->P[14131]
#define	P_Old_BTN_LED_LAMP	pshm->P[14132]
#define	P_PLC_TO_PMAC_Work_Confirm_Operation_Cnt	pshm->P[14133]
#define	P_VISION_TO_PMAC_Work_Confirm_Operation_Ack_Cnt	pshm->P[14134]
#define	P_Ca_AT_Retry_Cal_Move_Complete	pshm->P[14135]
#define	P_An_AT_Retry_Cal_Move_Complete	pshm->P[14136]
#define	P_Ca_AT_Retry_Cal_Cnt	pshm->P[14137]
#define	P_An_AT_Retry_Cal_Cnt	pshm->P[14138]
#define	P_Ca_AT_Retry_Cal_Complete	pshm->P[14139]
#define	P_An_AT_Retry_Cal_Complete	pshm->P[14140]
#define	P_An_AT_Retry_Cal_Pass	pshm->P[14141]
#define	P_Ca_AT_Retry_Cal_Pass	pshm->P[14142]
#define	P_Ca_Picker_T_Turn_Cnt_Flag	pshm->P[14143]
#define	P_Ca_Picker_T_Turn_Cnt	pshm->P[14144]
#define	P_Ca_Picker_T_Home_Type	pshm->P[14145]
#define	P_An_Picker_T_Turn_Cnt_Flag	pshm->P[14146]
#define	P_An_Picker_T_Turn_Cnt	pshm->P[14147]
#define	P_An_Picker_T_Home_Type	pshm->P[14148]
#define	P_Flag_Vac_Status_Initialize	pshm->P[14149]
#define	P_SM_Vac_Initialize	pshm->P[14150]
#define	P_Flag_Anode_1st_Vac_OFF	pshm->P[14151]
#define	P_Flag_Anode_AT_Vac_OFF	pshm->P[14152]
#define	P_Flag_Anode_2nd_Vac_OFF	pshm->P[14153]
#define	P_Flag_Anode_NG_Vac_OFF	pshm->P[14154]
#define	P_Flag_Cathode_1st_Vac_OFF	pshm->P[14155]
#define	P_Flag_Cathode_AT_Vac_OFF	pshm->P[14156]
#define	P_Flag_Cathode_2nd_Vac_OFF	pshm->P[14157]
#define	P_Flag_Cathode_NG_Vac_OFF	pshm->P[14158]
#define	P_Flag_Anode_1st_Vac_Initial_Alarm	pshm->P[14159]
#define	P_Flag_Anode_AT_Vac_Initial_Alarm	pshm->P[14160]
#define	P_Flag_Anode_2nd_Vac_Initial_Alarm	pshm->P[14161]
#define	P_Flag_Anode_NG_Vac_Initial_Alarm	pshm->P[14162]
#define	P_Flag_Cathode_1st_Vac_Initial_Alarm	pshm->P[14163]
#define	P_Flag_Cathode_AT_Vac_Initial_Alarm	pshm->P[14164]
#define	P_Flag_Cathode_2nd_Vac_Initial_Alarm	pshm->P[14165]
#define	P_Flag_Cathode_NG_Vac_Initial_Alarm	pshm->P[14166]
#define	P_Middle_Discharge_Ignore_Total_Count	pshm->P[14167]
#define	P_Middle_Discharge_Ignore_Stack_Count	pshm->P[14168]
#define	P_Middle_Discharge_Ignore_ON_Signal	pshm->P[14169]
#define	P_Middle_Discharge_Ignore_OFF_Signal	pshm->P[14170]
#define	P_Middle_Discharge_Ignore_Cell_Count	pshm->P[14171]
#define	P_ARC_Middle_Discharge_Ignore_Vision_Check	pshm->P[14172]
#define	P_ARC_Middle_Discharge_Ignore_ON_Flag	pshm->P[14173]
#define	P_Middle_Discharge_Ignore_User_Sepa_Mode_Check	pshm->P[14174]
#define	P_Zero_Angle(i)	pshm->P[(14175+i)%MAX_P]
#define	P_Zero_Length(i)	pshm->P[(14200+i)%MAX_P]
#define	P_Homeoffset_Change_Flag(i)	pshm->P[(14225+i)%MAX_P]
#define	P_Cal_Distance(i)	pshm->P[(14250+i)%MAX_P]
#define	P_Cal_Denominator(i)	pshm->P[(14255+i)%MAX_P]
#define	P_Cal_Numerator(i)	pshm->P[(14260+i)%MAX_P]
#define	P_Cal_Dif_Deg(i)	pshm->P[(14265+i)%MAX_P]
#define	P_Flag_Sepa_Stack_Mode_CHK	pshm->P[14270]
#define	P_Read_Timer_S(i)	pshm->P[(14271+i)%MAX_P]
#define	P_Write_Timer_S(i)	pshm->P[(14280+i)%MAX_P]
#define	P_Interval_Read_S(i)	pshm->P[(14289+i)%MAX_P]
#define	P_Interval_Write_S(i)	pshm->P[(14298+i)%MAX_P]
#define	P_UI_Jog_Vel_M(i)	pshm->P[(14307+i)%MAX_P]
#define	P_Initialize_Read_Excom_Variables_Flag	pshm->P[14357]
#define	P_Old_X_Read_Count_S(i)	pshm->P[(14358+i)%MAX_P]
#define	P_Cathode_Clamp_MC_Cylinder_Count	pshm->P[14367]
#define	P_Cathode_Clamp_OP_Cylinder_Count	pshm->P[14368]
#define	P_Anode_Clamp_MC_Cylinder_Count	pshm->P[14369]
#define	P_Anode_Clamp_OP_Cylinder_Count	pshm->P[14370]
#define	P_Cathode_1ST_TR_Cylinder_Count	pshm->P[8003]
#define	P_Anode_1ST_TR_Cylinder_Count	pshm->P[8004]
#define	P_BTN_Cathode_Clamp_inside_Machine_Cylinder_Count_Clear	pshm->P[14371]
#define	P_BTN_Cathode_Clamp_Middle_Cylinder_Count_Clear	pshm->P[14372]
#define	P_BTN_Cathode_Clamp_outside_Machine_Cylinder_Count_Clear	pshm->P[14373]
#define	P_BTN_Anode_Clamp_inside_Machine_Cylinder_Count_Clear	pshm->P[14374]
#define	P_BTN_Anode_Clamp_Middle_Cylinder_Count_Clear	pshm->P[14375]
#define	P_BTN_Anode_Clamp_outside_Machine_Cylinder_Count_Clear	pshm->P[14376]
#define	P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear	pshm->P[14377]
#define	P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear_Old	pshm->P[14378]
#define	P_BTN_Anode_1ST_TR_Cylinder_Count_Clear	pshm->P[14379]
#define	P_BTN_Anode_1ST_TR_Cylinder_Count_Clear_Old	pshm->P[14380]
#define	P_X_BTN_Manual_1(i)	pshm->P[(14381+i)%MAX_P]
#define	P_X_BTN_Manual_2(i)	pshm->P[(14501+i)%MAX_P]
#define	P_X_BTN_Manual_3(i)	pshm->P[(14621+i)%MAX_P]
#define	P_Home_InterLock_M(i)	pshm->P[(14741+i)%MAX_P]
#define	P_Status_BTN_Manual_1(i)	pshm->P[(14791+i)%MAX_P]
#define	P_Status_BTN_Manual_2(i)	pshm->P[(14911+i)%MAX_P]
#define	P_Status_BTN_Manual_Interlock_1(i)	pshm->P[(15031+i)%MAX_P]
#define	P_Status_BTN_Manual_Interlock_2(i)	pshm->P[(15151+i)%MAX_P]
#define	P_Status_BTN_Manual_Interlock_3(i)	pshm->P[(15271+i)%MAX_P]
#define	P_Mode_Run_Enable_Flag(i)	pshm->P[(15391+i)%MAX_P]
#define	P_RECIPE_PLC27_Manual_Interval	pshm->P[15396]
#define	P_RECIPE_PLC27_Auto_Interval	pshm->P[15397]
#define	P_MNTR_PLC4_Vision_Result(i)	pshm->P[(15398+i)%MAX_P]
#define	P_Recipe_Speed_Value	pshm->P[15599]
#define	P_Slave6_Target_X_For_Cell_Out	pshm->P[15600]
#define	P_HCK_Step_MNTR(i)	pshm->P[(15601+i)%MAX_P]
#define	P_Axis_Home_Pos(i)	pshm->P[(15651+i)%MAX_P]
#define	P_Axis_Ready_Pos(i)	pshm->P[(15701+i)%MAX_P]
#define	P_PMAC_Homing_CHK(i)	pshm->P[(15751+i)%MAX_P]
#define	P_Poistion_error	pshm->P[15801]
#define	P_Home_Command(i)	pshm->P[(15802+i)%MAX_P]
#define	P_Recipe_Count_Num	pshm->P[15852]
#define	L_Motor_Status_Update_Interval	pshm->P[15853]
#define	L_Motor_Recipe_Update_Interval	pshm->P[15854]
#define	P_UI_Servo_On_Off	pshm->P[15855]
#define	P_Old_BTN_Servo_On_Off_M(i)	pshm->P[(15856+i)%MAX_P]
#define	P_Peak_Load_Ratio_M(i)	pshm->P[(15889+i)%MAX_P]
#define	P_Chk_Current_Jog_Sel(i)	pshm->P[(15922+i)%MAX_P]
#define	P_Jog_Sel_Count	pshm->P[15955]
#define	P_Recipe_POS_Interock_Num_Bit(i)	pshm->P[(15956+i)%MAX_P]
#define	P_Recipe_VEL(i)	pshm->P[(15989+i)%MAX_P]
#define	P_Recipe_POS(i)	pshm->P[(16000+i)%MAX_P]
#define	P_BTN_Servo_On_Off_M(i)	pshm->P[(16011+i)%MAX_P]
#define	P_BTN_Home_M(i)	pshm->P[(16044+i)%MAX_P]
#define	P_BTN_Jog_Stop_M(i)	pshm->P[(16077+i)%MAX_P]
#define	P_BTN_Recipe_POS_RUN_M(i)	pshm->P[(16110+i)%MAX_P]
#define	P_Recipe_POS_Flag_M(i)	pshm->P[(16143+i)%MAX_P]
#define	P_BTN_Jog_INC_M(i)	pshm->P[(16176+i)%MAX_P]
#define	P_BTN_JOG_ABS_M(i)	pshm->P[(16209+i)%MAX_P]
#define	P_User_Jog_Distance	pshm->P[16242]
#define	P_Unit_Command(i)	pshm->P[(16243+i)%MAX_P]
#define	P_Unit_State_Machine(i)	pshm->P[(16343+i)%MAX_P]
#define	P_Status_BTN_Manual_3(i)	pshm->P[(16443+i)%MAX_P]
#define	P_Chk_Current_BTN_Sel(i)	pshm->P[(16543+i)%MAX_P]
#define	P_BTN_Sel_Count	pshm->P[16593]
#define	P_PC_BTN_No	pshm->P[16594]
#define	P_BTN_Interlock_Update_Interval	pshm->P[16595]
#define	P_Align_Table_Status_Update_Interval	pshm->P[16596]
#define	P_Jelly_Roll_Total_Count_Old	pshm->P[16597]
#define	P_Old_m4120	pshm->P[16598]
#define	P_Old_m4121	pshm->P[16599]
#define	P_Old_m4122	pshm->P[16600]
#define	P_Old_m4123	pshm->P[16601]
#define	P_Linear_Encoder_Pos_Check_Flag(i)	pshm->P[(16602+i)%MAX_P]
#define	P_Linear_Encoder_Pos(i)	pshm->P[(16607+i)%MAX_P]
#define	P_Status_Linear_Encoder_HomeZero(i)	pshm->P[(16612+i)%MAX_P]
#define	P_Command_Linear_Encoder_HomeZero(i)	pshm->P[(16617+i)%MAX_P]
#define	P_Flag_Linear_Enc_Homezero_Complete_M17	pshm->P[16622]
#define	P_Flag_Linear_Enc_Homezero_Complete_M18	pshm->P[16623]
#define	P_Flag_Linear_Enc_Homezero_Complete_M19	pshm->P[16624]
#define	P_Flag_Linear_Enc_Homezero_Complete_M20	pshm->P[16625]
#define	P_CMD_Linear_ENC_Homezero_M17	pshm->P[16626]
#define	P_CMD_Linear_ENC_Homezero_M18	pshm->P[16627]
#define	P_CMD_Linear_ENC_Homezero_M19	pshm->P[16628]
#define	P_CMD_Linear_ENC_Homezero_M20	pshm->P[16629]
#define	P_OLD_Home_Offset(i)	pshm->P[(16630+i)%MAX_P]
#define	P_RECIPE_PLC27_Alltime_Interval	pshm->P[16660]
#define	P_Manual_Memory_Tower_Timer	pshm->P[16661]
#define	P_Memory_Tower_Interval	pshm->P[16662]
#define	P_PLC_14_Status_Cycle_Stop_Flag	pshm->P[16663]
#define	P_Cathode_AlignTable_Cleaning_Pos_Status_Machine	pshm->P[16664]
#define	P_Anode_AlignTable_Cleaning_Pos_Status_Machine	pshm->P[16665]
#define	P_Status_Cathode_AlignTable_Cleaning_Pos	pshm->P[16666]
#define	P_Status_Anode_AlignTable_Cleaning_Pos	pshm->P[16667]
#define	P_CMD_Cathode_AlignTable_Cleaning_Pos	pshm->P[16668]
#define	P_CMD_Anode_AlignTable_Cleaning_Pos	pshm->P[16669]
#define	P_Cathode_2nd_pnp_Cleaning_Mode_Pos	pshm->P[16670]
#define	P_Anode_2nd_pnp_Cleaning_Mode_Pos	pshm->P[16671]
#define	P_Interlock_Test	pshm->P[16672]
#define	P_PNP_Picker_T_Pos	pshm->P[16673]
#define	P_NG_PNP_Pos	pshm->P[16674]
#define	M_Old_X_BTN_Machine_READY	pshm->P[16675]
#define	M_Old_X_BTN_Machine_START	pshm->P[16676]
#define	M_Old_X_BTN_Machine_STOP	pshm->P[16677]
#define	M_Old_X_BTN_Machine_RESET	pshm->P[16678]
#define	M_Old_X_BTN_Machine_MODE	pshm->P[16679]
#define	P_BTN_Motor_Pos_Check_RTN	pshm->P[16680]
#define	P_BTN_Memory_Tower_Check_Bit	pshm->P[16681]
#define	P_PMAC_Status_IDLE_Motor_Not_Pos	pshm->P[16682]
#define	P_PMAC_Status_IDLE_Motor_Pos	pshm->P[16683]
#define	P_BTN_Motor_Pos_Check_Monitor	pshm->P[16684]
#define	P_PackML_Auto_Stop_Bit	pshm->P[16685]
#define	P_BTN_IDLE_Motor_Not_Pos	pshm->P[16686]
#define	M_X_BTN_Machine_Mode	pshm->P[16687]
#define	M_Old_X_BTN_Machine_Mode	pshm->P[16688]
#define	P_Lamp_Blinking_Timer	pshm->P[16689]
#define	P_BTN_Ready_Lamp	pshm->P[16690]
#define	P_BTN_Start_Lamp	pshm->P[16691]
#define	P_BTN_Stop_Lamp	pshm->P[16692]
#define	P_ARC_Name_Plate_Passive_Status	pshm->P[16693]
#define	P_ARC_Passive_Status	pshm->P[16694]
#define	P_NP_Spool_Number	pshm->P[16695]
#define	P_ARC_Page_On	pshm->P[16696]
#define	P_ARC_NP_Upper_Timer	pshm->P[16697]
#define	P_ARC_Upper_Ready	pshm->P[16698]
#define	P_ARC_NP_Upper_3rd_Step_Toggle_Variable	pshm->P[16699]
#define	P_ARC_NP_Upper_7th_Step_Variable	pshm->P[16700]
#define	P_ARC_NP_Upper_7th_Step_Edge_Variable	pshm->P[16701]
#define	P_ARC_NP_Upper_Rot_ReRot_Blinking_Bit	pshm->P[16702]
#define	P_ARC_NP_Lower_Timer	pshm->P[16703]
#define	P_ARC_Lower_Ready	pshm->P[16704]
#define	P_ARC_NP_Lower_3rd_Step_Toggle_Variable	pshm->P[16705]
#define	P_ARC_NP_Lower_7th_Step_Variable	pshm->P[16706]
#define	P_ARC_NP_Lower_7th_Step_Edge_Variable	pshm->P[16707]
#define	P_ARC_NP_Lower_Rot_ReRot_Blinking_Bit	pshm->P[16708]
#define	M_Old_X_ARC_NP_Ready	pshm->P[16709]
#define	M_Old_X_ARC_NP_Unwinder_Rotation	pshm->P[16710]
#define	M_Old_X_ARC_NP_Unwinder_Re_Rotation	pshm->P[16711]
#define	P_Status_Clear_Flag	pshm->P[16712]
#define	P_Status_Clear_RTN	pshm->P[16713]
#define	P_MSA_BTN_On	pshm->P[16714]
#define	P_Align_Take_Off_BTN_ON	pshm->P[16715]
#define	P_ARC_NP_Upper_Ready_Check_Bit	pshm->P[16716]
#define	P_ARC_NP_Lower_Ready_Check_Bit	pshm->P[16717]
#define	P_PLC13_Cycle_Stop_Return_Array(i)	pshm->P[(16718+i)%MAX_P]
#define	P_Stopping_CycleStop_Status	pshm->P[16818]
#define	P_Stopping_CycleStop_Seq_Index	pshm->P[16819]
#define	P_Stopping_CycleStop_Precondition_Seq_Index	pshm->P[16820]
#define	P_Stopping_CycleStop_Module_Status	pshm->P[16821]
#define	P_Stopping_CycleStop_Cmd	pshm->P[16822]
#define	P_Stopping_CycleStop_State_Machine	pshm->P[16823]
#define	P_Stopping_CycleStop_Act_State_Machine(i)	pshm->P[(16824+i)%MAX_P]
#define	P_Module_Cycle_Stop_Act_State_Machine_Array(i)	pshm->P[(16844+i)%MAX_P]
#define	P_Module_Cycle_Stop_Act_Complete_Bit(i)	pshm->P[(16864+i)%MAX_P]
#define	P_Module_Cycle_Stop_Act_Command_Array(i)	pshm->P[(16884+i)%MAX_P]
#define	P_OLD_Module_Cycle_Stop_Act_Command_Array(i)	pshm->P[(16904+i)%MAX_P]
#define	P_Buffer_Seqdata_CycleStop_Array(i)	pshm->P[(16924+i)%MAX_P]
#define	P_Final_Roll_Cathode_Pos_Status	pshm->P[16944]
#define	P_Sheet_Paper_FWD_Pos_Status	pshm->P[16945]
#define	P_Final_Roll_Vision_Pos_Status	pshm->P[16946]
#define	P_Cathode_Clamp_ON_Status	pshm->P[16947]
#define	P_Anode_Clamp_ON_Status	pshm->P[16948]
#define	P_Anode_Clamp_OFF_Status	pshm->P[16949]
#define	P_Partition_Up_Flag	pshm->P[16950]
#define	P_Partition_Down_Flag	pshm->P[16951]
#define	P_Partition_Avoid_Flag	pshm->P[16952]
#define	P_Partition_Avoid_Z_Speed	pshm->P[16953]
#define	P_Partition_Avoid_X_Speed	pshm->P[16954]
#define	P_Partition_Avoid_T_Speed	pshm->P[16955]
#define	P_Partition_Avoid_2nd_T_Pos	pshm->P[16956]
#define	P_Partition_Step_Flag	pshm->P[16957]
#define	P_Tact_Time_Timer(i)	pshm->P[(16958+i)%MAX_P]
#define	P_Tack_Time_Save_Time(i)	pshm->P[(16998+i)%MAX_P]
#define	P_Anode_NG_PNP_Tact_Time_Start	pshm->P[17038]
#define	P_Cathode_NG_PNP_Tact_Time_Start	pshm->P[17039]
#define	P_Anode_NG_PNP_Tact_Time_End	pshm->P[17040]
#define	P_Cathode_NG_PNP_Tact_Time_End	pshm->P[17041]
#define	P_Tact_Time_Stack_Array(i)	pshm->P[(17042+i)%MAX_P]
#define	P_Tact_Time_Discharge_Array(i)	pshm->P[(17052+i)%MAX_P]
#define	P_Tact_Time_1st_Unloader_Array(i)	pshm->P[(17062+i)%MAX_P]
#define	P_Tact_Time_Sepa_ARC_Array(i)	pshm->P[(17072+i)%MAX_P]
#define	P_Tact_Time_Final_Roll_Array(i)	pshm->P[(17082+i)%MAX_P]
#define	P_Tact_Time_Cathode_1st_PNP_Array(i)	pshm->P[(17092+i)%MAX_P]
#define	P_Tact_Time_Cathode_Align_Array(i)	pshm->P[(17102+i)%MAX_P]
#define	P_Tact_Time_Cathode_2nd_PNP_Array(i)	pshm->P[(17112+i)%MAX_P]
#define	P_Tact_Time_Cathode_Clamp_Array(i)	pshm->P[(17122+i)%MAX_P]
#define	P_Tact_Time_Anode_1st_PNP_Array(i)	pshm->P[(17132+i)%MAX_P]
#define	P_Tact_Time_Anode_Align_Array(i)	pshm->P[(17142+i)%MAX_P]
#define	P_Tact_Time_Anode_2nd_PNP_Array(i)	pshm->P[(17152+i)%MAX_P]
#define	P_Tact_Time_Anode_Clamp_Array(i)	pshm->P[(17162+i)%MAX_P]
#define	P_Tact_Time_Cathode_1st_PNP_Vac_Array(i)	pshm->P[(17172+i)%MAX_P]
#define	P_Tact_Time_Cathode_Align_PNP_Vac_Array(i)	pshm->P[(17182+i)%MAX_P]
#define	P_Tact_Time_Cathode_2nd_PNP_Vac_Array(i)	pshm->P[(17192+i)%MAX_P]
#define	P_Tact_Time_Anode_1st_PNP_Vac_Array(i)	pshm->P[(17202+i)%MAX_P]
#define	P_Tact_Time_Anode_Align_PNP_Vac_Array(i)	pshm->P[(17212+i)%MAX_P]
#define	P_Tact_Time_Anode_2nd_PNP_Vac_Array(i)	pshm->P[(17222+i)%MAX_P]
#define	P_Tact_Time_Final_Roller_Clamp	pshm->P[17232]
#define	P_Tact_Time_Final_Roller_Unclamp	pshm->P[17233]
#define	P_Tact_Time_Stack_Table_Down	pshm->P[17234]
#define	P_Tact_Time_Stack_Table_Up	pshm->P[17235]
#define	P_Tact_Time_Sepa_Cutting_Down	pshm->P[17236]
#define	P_Tact_Time_Sepa_Cutting_Up	pshm->P[17237]
#define	P_Tact_Time_ARC_Upper_Plate_Up	pshm->P[17238]
#define	P_Tact_Time_ARC_Upper_Plate_Down	pshm->P[17239]
#define	P_Tact_Time_ARC_Upper_Tilting_On	pshm->P[17240]
#define	P_Tact_Time_ARC_Upper_Tilting_Off	pshm->P[17241]
#define	P_Tact_Time_ARC_Upper_Cutter_Fwd	pshm->P[17242]
#define	P_Tact_Time_ARC_Upper_Cutter_Bwd	pshm->P[17243]
#define	P_Tact_Time_ARC_Upper_Clamp_On	pshm->P[17244]
#define	P_Tact_Time_ARC_Upper_Clamp_Off	pshm->P[17245]
#define	P_Tact_Time_ARC_Lower_Plate_Up	pshm->P[17246]
#define	P_Tact_Time_ARC_Lower_Plate_Down	pshm->P[17247]
#define	P_Tact_Time_ARC_Lower_Tilting_On	pshm->P[17248]
#define	P_Tact_Time_ARC_Lower_Tilting_Off	pshm->P[17249]
#define	P_Tact_Time_ARC_Lower_Cutter_Fwd	pshm->P[17250]
#define	P_Tact_Time_ARC_Lower_Cutter_Bwd	pshm->P[17251]
#define	P_Tact_Time_ARC_Lower_Clamp_On	pshm->P[17252]
#define	P_Tact_Time_ARC_Lower_Clamp_Off	pshm->P[17253]
#define	P_Tact_Time_Save_Final_Roller_Clamp_Time	pshm->P[17254]
#define	P_Tact_Time_Save_Final_Roller_Unclamp_Time	pshm->P[17255]
#define	P_Tact_Time_Save_Stack_Table_Down_Time	pshm->P[17256]
#define	P_Tact_Time_Save_Stack_Table_Up_Time	pshm->P[17257]
#define	P_Tact_Time_Save_Sepa_Cutting_Down_Time	pshm->P[17258]
#define	P_Tact_Time_Save_Sepa_Cutting_Up_Time	pshm->P[17259]
#define	P_Tact_Time_Save_ARC_Upper_Plate_Up_Time	pshm->P[17260]
#define	P_Tact_Time_Save_ARC_Upper_Plate_Down_Time	pshm->P[17261]
#define	P_Tact_Time_Save_ARC_Upper_Tilting_On_Time	pshm->P[17262]
#define	P_Tact_Time_Save_ARC_Upper_Tilting_Off_Time	pshm->P[17263]
#define	P_Tact_Time_Save_ARC_Upper_Cutter_Fwd_Time	pshm->P[17264]
#define	P_Tact_Time_Save_ARC_Upper_Cutter_Bwd_Time	pshm->P[17265]
#define	P_Tact_Time_Save_ARC_Upper_Clamp_On_Time	pshm->P[17266]
#define	P_Tact_Time_Save_ARC_Upper_Clamp_Off_Time	pshm->P[17267]
#define	P_Tact_Time_Save_ARC_Lower_Plate_Up_Time	pshm->P[17268]
#define	P_Tact_Time_Save_ARC_Lower_Plate_Down_Time	pshm->P[17269]
#define	P_Tact_Time_Save_ARC_Lower_Tilting_On_Time	pshm->P[17270]
#define	P_Tact_Time_Save_ARC_Lower_Tilting_Off_Time	pshm->P[17271]
#define	P_Tact_Time_Save_ARC_Lower_Cutter_Fwd_Time	pshm->P[17272]
#define	P_Tact_Time_Save_ARC_Lower_Cutter_Bwd_Time	pshm->P[17273]
#define	P_Tact_Time_Save_ARC_Lower_Clamp_On_Time	pshm->P[17274]
#define	P_Tact_Time_Save_ARC_Lower_Clamp_Off_Time	pshm->P[17275]
#define	P_Tact_Time_Check(i)	pshm->P[(17276+i)%MAX_P]
#define	P_Old_Tact_Time_Check(i)	pshm->P[(17316+i)%MAX_P]
#define	P_Tact_Time_Head_Address(i)	pshm->P[(17356+i)%MAX_P]
#define	P_Tact_Time_Array_Init	pshm->P[17396]
#define	P_Last_Run_To_Discharge_Tact_Timer	pshm->P[17397]
#define	P_Last_Run_To_Discharge_Tact_Time	pshm->P[17398]
#define	P_Master_Trigger_Sync_Tact_Timer	pshm->P[17399]
#define	P_Master_Trigger_Sync_Tact_Time	pshm->P[17400]
#define	P_Vision_First_Sepa_Stack_Align_OK_PMAC_Flag	pshm->P[17401]
#define	P_PLC18_EPC_Retry_Mode_Time_Use_Flag	pshm->P[17402]
#define	P_PLC18_Vision_EPC_Correction_Request_Old	pshm->P[17403]
#define	P_PLC18_EPC_Moving_Flag	pshm->P[17404]
#define	P_PLC18_EPC_Moving_Status	pshm->P[17405]
#define	P_PLC18_EPC_Move_State_Machine	pshm->P[17406]
#define	P_PLC18_EPC_Move_Status	pshm->P[17407]
#define	P_PLC18_EPC_inspection_Time	pshm->P[17408]
#define	P_EPC_Insp_Time	pshm->P[17409]
#define	P_EPC_Correction_Time	pshm->P[17410]
#define	P_TEST_Max_EPC_Sensor_Value_um	pshm->P[17411]
#define	P_PLC18_EPC_Moving_Timer	pshm->P[17412]
#define	P_EPC_MNTR_VAR(i)	pshm->P[(17413+i)%MAX_P]
#define	P_EPC_Axis_Target_Y	pshm->P[17423]
#define	P_Com_After_Sepa_Mode_Status	pshm->P[17424]
#define	P_PLC18_PLC_to_PMAC_Correction_Value	pshm->P[17425]
#define	P_PLC_EPC_Status	pshm->P[17426]
#define	P_EPC_Retry_Over_Alarm_Flag	pshm->P[17427]
#define	P_ARC_EPC_Vision_Value_Apply_Bit	pshm->P[17428]
#define	P_ARC_EPC_Vision_Value_Apply_Flag	pshm->P[17429]
#define	P_ARC_EPC_Vision_Value_Apply_State_Machine	pshm->P[17430]
#define	P_ARC_EPC_Vision_Value_Apply_Timer	pshm->P[17431]
#define	P_ARC_EPC_Vision_Value_Apply_Time	pshm->P[17432]
#define	P_AH_Home_Status	pshm->P[17433]
#define	P_Resetting_All_Home_Command	pshm->P[17434]
#define	P_PnP_Init_Pos	pshm->P[17435]
#define	P_NG_PnP_Warning_Pos	pshm->P[17436]
#define	P_PnP_Stack_Pos	pshm->P[17437]
#define	P_PnP_Align_Pos	pshm->P[17438]
#define	P_Down_Pos	pshm->P[17439]
#define	P_Homing_Alarm_Time	pshm->P[17440]
#define	P_Home_Check_Arry(i)	pshm->P[(17441+i)%MAX_P]
#define	P_All_Home_Stop_Cmd	pshm->P[17491]
#define	P_Home_First_Move	pshm->P[17492]
#define	P_Test_HomeComplete(i)	pshm->P[(17493+i)%MAX_P]
#define	P_Test_Motor_Ready_Pos(i)	pshm->P[(17543+i)%MAX_P]
#define	P_PWM_Phasing_Start(i)	pshm->P[(17593+i)%MAX_P]
#define	P_PWM_Status(i)	pshm->P[(17598+i)%MAX_P]
#define	P_PWM_State_Machine(i)	pshm->P[(17603+i)%MAX_P]
#define	P_PWM_Old_time(i)	pshm->P[(17608+i)%MAX_P]
#define	P_AH_Seq_arr(i)	pshm->P[(17613+i)%MAX_P]
#define	P_Indiv_AH_Cmd(i)	pshm->P[(17628+i)%MAX_P]
#define	P_Indiv_AH_Status(i)	pshm->P[(17643+i)%MAX_P]
#define	P_Indiv_Avoid_Cmd(i)	pshm->P[(17658+i)%MAX_P]
#define	P_AH_CA_1st_Rtn	pshm->P[17673]
#define	P_AH_CA_1st_Act_Rtn	pshm->P[17674]
#define	P_AH_AN_1st_Rtn	pshm->P[17675]
#define	P_AH_AN_1st_Act_Rtn	pshm->P[17676]
#define	P_AH_CA_2nd_Rtn	pshm->P[17677]
#define	P_AH_CA_2nd_Act_Rtn	pshm->P[17678]
#define	P_AH_AN_2nd_Rtn	pshm->P[17679]
#define	P_AH_AN_2nd_Act_Rtn	pshm->P[17680]
#define	P_AH_CA_NG_Rtn	pshm->P[17681]
#define	P_AH_CA_NG_Act_Rtn	pshm->P[17682]
#define	P_AH_AN_NG_Rtn	pshm->P[17683]
#define	P_AH_AN_NG_Act_Rtn	pshm->P[17684]
#define	P_CA_1st_SM	pshm->P[17685]
#define	P_AN_1st_SM	pshm->P[17686]
#define	P_CA_2nd_SM	pshm->P[17687]
#define	P_AN_2nd_SM	pshm->P[17688]
#define	P_CA_NG_SM	pshm->P[17689]
#define	P_AN_NG_SM	pshm->P[17690]
#define	P_Unloader_Crush_Pos	pshm->P[17691]
#define	P_DD_Motor_45Deg	pshm->P[17692]
#define	P_DD_M_Home_ABS_Pos(i)	pshm->P[(17693+i)%MAX_P]
#define	P_AH_Indvi_rtn(i)	pshm->P[(17698+i)%MAX_P]
#define	P_DD_M_Home_Pos_Flag	pshm->P[17749]
#define	P_WAIT_INDEX	pshm->P[17750]
#define	P_Home_Check_Arry1(i)	pshm->P[(17751+i)%MAX_P]
#define	P_FR_Cmd_Check_Flag	pshm->P[17801]
#define	P_PV_Separator_Dancer_Pressure	pshm->P[17802]
#define	P_PV_Cathode_Clamp_Pressure	pshm->P[17803]
#define	P_PV_Anoode_Clamp_Pressure	pshm->P[17804]
#define	P_PV_Cathode_Final_Roller_X_Axis	pshm->P[17805]
#define	P_PV_Anode_Final_Roller_X_Axis	pshm->P[17806]
#define	P_PV_Cathode_Clamp_ON_Y1_Axis_Pos	pshm->P[17807]
#define	P_PV_Cathode_Clamp_ON_Y2_Axis_Pos	pshm->P[17808]
#define	P_PV_Cathode_Clamp_ON_Z1_Axis_Pos	pshm->P[17809]
#define	P_PV_Cathode_Clamp_ON_Z2_Axis_Pos	pshm->P[17810]
#define	P_PV_Anode_Clamp_ON_Y1_Axis_Pos	pshm->P[17811]
#define	P_PV_Anode_Clamp_ON_Y2_Axis_Pos	pshm->P[17812]
#define	P_PV_Anode_Clamp_ON_Z1_Axis_Pos	pshm->P[17813]
#define	P_PV_Anode_Clamp_ON_Z2_Axis_Pos	pshm->P[17814]
#define	P_PV_Cathode_2th_AT_T_Axis_Pos	pshm->P[17815]
#define	P_PV_Cathode_2th_ST_T_Axis_Pos	pshm->P[17816]
#define	P_PV_Cathode_2th_AT_Z_Axis_Pos	pshm->P[17817]
#define	P_PV_Cathode_2th_ST_Z_Axis_Pos	pshm->P[17818]
#define	P_PV_Anode_2th_AT_T_Axis_Pos	pshm->P[17819]
#define	P_PV_Anode_2th_ST_T_Axis_Pos	pshm->P[17820]
#define	P_PV_Anode_2th_AT_Z_Axis_Pos	pshm->P[17821]
#define	P_PV_Anode_2th_ST_Z_Axis_Pos	pshm->P[17822]
#define	P_PV_Cathode_1th_Ready_T_Axis_Pos	pshm->P[17823]
#define	P_PV_Cathode_1th_CV_T_Axis_Pos	pshm->P[17824]
#define	P_PV_Cathode_1th_AT_T_Axis_Pos	pshm->P[17825]
#define	P_PV_Cathode_1th_Ready_Z_Axis_Pos	pshm->P[17826]
#define	P_PV_Cathode_1th_CV_Z_Axis_Pos	pshm->P[17827]
#define	P_PV_Cathode_1th_AT_Z_Axis_Pos	pshm->P[17828]
#define	P_PV_Anode_1th_Ready_T_Axis_Pos	pshm->P[17829]
#define	P_PV_Anode_1th_CV_T_Axis_Pos	pshm->P[17830]
#define	P_PV_Anode_1th_AT_T_Axis_Pos	pshm->P[17831]
#define	P_PV_Anode_1th_Ready_Z_Axis_Pos	pshm->P[17832]
#define	P_PV_Anode_1th_CV_Z_Axis_Pos	pshm->P[17833]
#define	P_PV_Anode_1th_AT_Z_Axis_Pos	pshm->P[17834]
#define	P_PV_Cathode_NG_AT_T_Axis_Pos	pshm->P[17835]
#define	P_PV_Cathode_NG_Box_T_Axis_Pos	pshm->P[17836]
#define	P_PV_Anode_NG_AT_T_Axis_Pos	pshm->P[17837]
#define	P_PV_Anode_NG_Box_T_Axis_Pos	pshm->P[17838]
#define	P_SemiRun_Separator_Dancer_Pressure_Flag	pshm->P[17839]
#define	P_SemiRun_Cathode_Clamp_Pressure_Flag	pshm->P[17840]
#define	P_SemiRun_Anoode_Clamp_Pressure_Flag	pshm->P[17841]
#define	P_SemiRun_Cathode_Final_Roller_X_Axis_Flag	pshm->P[17842]
#define	P_SemiRun_Anode_Final_Roller_X_Axis_Flag	pshm->P[17843]
#define	P_SemiRun_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag	pshm->P[17844]
#define	P_SemiRun_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag	pshm->P[17845]
#define	P_SemiRun_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag	pshm->P[17846]
#define	P_SemiRun_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag	pshm->P[17847]
#define	P_SemiRun_Cathode_2th_AT_T_Axis_Pos_Flag	pshm->P[17848]
#define	P_SemiRun_Cathode_2th_ST_T_Axis_Pos_Flag	pshm->P[17849]
#define	P_SemiRun_Cathode_2th_AT_Z_Axis_Pos_Flag	pshm->P[17850]
#define	P_SemiRun_Cathode_2th_ST_Z_Axis_Pos_Flag	pshm->P[17851]
#define	P_SemiRun_Anode_2th_AT_T_Axis_Pos_Flag	pshm->P[17852]
#define	P_SemiRun_Anode_2th_ST_T_Axis_Pos_Flag	pshm->P[17853]
#define	P_SemiRun_Anode_2th_AT_Z_Axis_Pos_Flag	pshm->P[17854]
#define	P_SemiRun_Anode_2th_ST_Z_Axis_Pos_Flag	pshm->P[17855]
#define	P_SemiRun_Cathode_1th_Ready_T_Axis_Pos_Flag	pshm->P[17856]
#define	P_SemiRun_Cathode_1th_CV_T_Axis_Pos_Flag	pshm->P[17857]
#define	P_SemiRun_Cathode_1th_AT_T_Axis_Pos_Flag	pshm->P[17858]
#define	P_SemiRun_Cathode_1th_Ready_Z_Axis_Pos_Flag	pshm->P[17859]
#define	P_SemiRun_Cathode_1th_CV_Z_Axis_Pos_Flag	pshm->P[17860]
#define	P_SemiRun_Cathode_1th_AT_Z_Axis_Pos_Flag	pshm->P[17861]
#define	P_SemiRun_Anode_1th_Ready_T_Axis_Pos_Flag	pshm->P[17862]
#define	P_SemiRun_Anode_1th_CV_T_Axis_Pos_Flag	pshm->P[17863]
#define	P_SemiRun_Anode_1th_AT_T_Axis_Pos_Flag	pshm->P[17864]
#define	P_SemiRun_Anode_1th_Ready_Z_Axis_Pos_Flag	pshm->P[17865]
#define	P_SemiRun_Anode_1th_CV_Z_Axis_Pos_Flag	pshm->P[17866]
#define	P_SemiRun_Anode_1th_AT_Z_Axis_Pos_Flag	pshm->P[17867]
#define	P_SemiRun_Cathode_NG_AT_T_Axis_Pos_Flag	pshm->P[17868]
#define	P_SemiRun_Cathode_NG_Box_T_Axis_Pos_Flag	pshm->P[17869]
#define	P_SemiRun_Anode_NG_AT_T_Axis_Pos_Flag	pshm->P[17870]
#define	P_SemiRun_Anode_NG_Box_T_Axis_Pos_Flag	pshm->P[17871]
#define	P_Motion_Separator_Dancer_Pressure_Flag	pshm->P[17872]
#define	P_Motion_Cathode_Clamp_Pressure_Flag	pshm->P[17873]
#define	P_Motion_Anoode_Clamp_Pressure_Flag	pshm->P[17874]
#define	P_Motion_Cathode_Final_Roller_X_Axis_Flag	pshm->P[17875]
#define	P_Motion_Anode_Final_Roller_X_Axis_Flag	pshm->P[17876]
#define	P_Motion_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag	pshm->P[17877]
#define	P_Motion_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag	pshm->P[17878]
#define	P_Motion_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag	pshm->P[17879]
#define	P_Motion_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag	pshm->P[17880]
#define	P_Motion_Cathode_2th_AT_T_Axis_Pos_Flag	pshm->P[17881]
#define	P_Motion_Cathode_2th_ST_T_Axis_Pos_Flag	pshm->P[17882]
#define	P_Motion_Cathode_2th_AT_Z_Axis_Pos_Flag	pshm->P[17883]
#define	P_Motion_Cathode_2th_ST_Z_Axis_Pos_Flag	pshm->P[17884]
#define	P_Motion_Anode_2th_AT_T_Axis_Pos_Flag	pshm->P[17885]
#define	P_Motion_Anode_2th_ST_T_Axis_Pos_Flag	pshm->P[17886]
#define	P_Motion_Anode_2th_AT_Z_Axis_Pos_Flag	pshm->P[17887]
#define	P_Motion_Anode_2th_ST_Z_Axis_Pos_Flag	pshm->P[17888]
#define	P_Motion_Cathode_1th_Ready_T_Axis_Pos_Flag	pshm->P[17889]
#define	P_Motion_Cathode_1th_CV_T_Axis_Pos_Flag	pshm->P[17890]
#define	P_Motion_Cathode_1th_AT_T_Axis_Pos_Flag	pshm->P[17891]
#define	P_Motion_Cathode_1th_Ready_Z_Axis_Pos_Flag	pshm->P[17892]
#define	P_Motion_Cathode_1th_CV_Z_Axis_Pos_Flag	pshm->P[17893]
#define	P_Motion_Cathode_1th_AT_Z_Axis_Pos_Flag	pshm->P[17894]
#define	P_Motion_Anode_1th_Ready_T_Axis_Pos_Flag	pshm->P[17895]
#define	P_Motion_Anode_1th_CV_T_Axis_Pos_Flag	pshm->P[17896]
#define	P_Motion_Anode_1th_AT_T_Axis_Pos_Flag	pshm->P[17897]
#define	P_Motion_Anode_1th_Ready_Z_Axis_Pos_Flag	pshm->P[17898]
#define	P_Motion_Anode_1th_CV_Z_Axis_Pos_Flag	pshm->P[17899]
#define	P_Motion_Anode_1th_AT_Z_Axis_Pos_Flag	pshm->P[17900]
#define	P_Motion_Cathode_NG_AT_T_Axis_Pos_Flag	pshm->P[17901]
#define	P_Motion_Cathode_NG_Box_T_Axis_Pos_Flag	pshm->P[17902]
#define	P_Motion_Anode_NG_AT_T_Axis_Pos_Flag	pshm->P[17903]
#define	P_Motion_Anode_NG_Box_T_Axis_Pos_Flag	pshm->P[17904]
#define	P_Cathode_1PNP_Sacle_Value	pshm->P[17905]
#define	P_Cathode_2PNP_Sacle_Value	pshm->P[17906]
#define	P_Anode_1PNP_Sacle_Value	pshm->P[17907]
#define	P_Anode_2PNP_Sacle_Value	pshm->P[17908]
#define	P_PLC01_SemiRun_PV_Flag	pshm->P[17909]
#define	P_PV_EPC_Index	pshm->P[17910]
#define	P_PV_EPC_Camera_Pos(i)	pshm->P[(17911+i)%MAX_P]
#define	P_BTN_MSA_Total_Value	pshm->P[17926]
#define	P_Vision_Align_Trigger_Timer	pshm->P[17927]
#define	P_Vision_Stack_Trigger_Timer	pshm->P[17928]
#define	P_MSA_Chk_Pos_Timer	pshm->P[17929]
#define	P_MSA_Chk_Pos_Time	pshm->P[17930]
#define	P_VISION_MSA_Status_Prod_Sequence(i)	pshm->P[(17931+i)%MAX_P]
#define	P_VISION_MSA_Seq_Index	pshm->P[17951]
#define	P_VISION_MSA_Anode_Align_Bit_Pos	pshm->P[17952]
#define	P_VISION_MSA_Seq_PreCondition_Index	pshm->P[17953]
#define	P_MSA_CycleStop_Point_Check_Complete_RTN	pshm->P[17954]
#define	P_MSA_Cmd(i)	pshm->P[(17955+i)%MAX_P]
#define	P_Current_Anode_Align_MSA_Run_Count	pshm->P[17960]
#define	P_Current_Cathode_Align_MSA_Run_Count	pshm->P[17961]
#define	P_Current_Anode_Stack_MSA_Run_Count	pshm->P[17962]
#define	P_Current_Cathode_Stack_MSA_Run_Count	pshm->P[17963]
#define	P_VISION_MSA_Align_Count_Chk_Flag	pshm->P[17964]
#define	P_VISION_MSA_Stack_Count_Chk_Flag	pshm->P[17965]
#define	P_VISION_MSA_pre_InterLock_Cmd	pshm->P[17966]
#define	P_VISION_MSA_pre_InterLock_Status	pshm->P[17967]
#define	P_VISION_MSA_pre_InterLock_Check_Assy_Bit	pshm->P[17968]
#define	P_VISION_MSA_pre_InterLock_Assy_Bit_Pos	pshm->P[17969]
#define	P_Vision_MSA_Interlock_Status	pshm->P[17970]
#define	P_VISION_MSA_MODE	pshm->P[17971]
#define	P_VISION_MSA_Status_Flag	pshm->P[17972]
#define	P_VISION_MSA_State_Machine	pshm->P[17973]
#define	P_VISION_MSA_Status	pshm->P[17974]
#define	P_VISION_MSA_Seq_Command_Occurs	pshm->P[17975]
#define	P_Vision_Align_Trigger_Time	pshm->P[17976]
#define	P_Anode_Align_MSA_Motion_Check	pshm->P[17977]
#define	P_Cathode_Align_MSA_Motion_Check	pshm->P[17978]
#define	P_Anode_Stack_MSA_Motion_Check	pshm->P[17979]
#define	P_Cathode_Stack_MSA_Motion_Check	pshm->P[17980]
#define	P_Anode_Align_MSA_Motion_ProgActive_Complete	pshm->P[17981]
#define	P_Cathode_Align_MSA_Motion_ProgActive_Complete	pshm->P[17982]
#define	P_Anode_Stack_MSA_Motion_ProgActive_Complete	pshm->P[17983]
#define	P_Cathode_Stack_MSA_Motion_ProgActive_Complete	pshm->P[17984]
#define	P_BTN_Align_Off_Total_Value	pshm->P[17985]
#define	P_Align_Take_Off_Cmd(i)	pshm->P[(17986+i)%MAX_P]
#define	P_Align_Take_Off_Status	pshm->P[17989]
#define	P_Align_Take_Off_Mode	pshm->P[17990]
#define	P_Align_Take_Off_Status_Flag	pshm->P[17991]
#define	P_Align_Take_Off_State_Machine	pshm->P[17992]
#define	P_Align_Take_Off_Chk_Pos_Timer	pshm->P[17993]
#define	P_Align_Take_Off_Motor_Check_Complete	pshm->P[17994]
#define	P_Align_Take_Off_Speed_Return_Complete	pshm->P[17995]
#define	P_Align_Take_Off_Interlock_Status	pshm->P[17996]
#define	P_Align_Take_Off_pre_InterLock_Cmd	pshm->P[17997]
#define	P_Align_Take_Off_pre_InterLock_Status	pshm->P[17998]
#define	P_Align_Take_Off_pre_InterLock_Check_Assy_Bit	pshm->P[17999]
#define	P_Align_Take_Off_pre_InterLock_Assy_Bit_Pos	pshm->P[18000]
#define	P_Align_Take_Off_Seq_Index	pshm->P[18001]
#define	P_Align_Take_Off_Seq_PreCondition_Index	pshm->P[18002]
#define	P_Align_Take_Off_Status_Prod_Sequence(i)	pshm->P[(18003+i)%MAX_P]
#define	P_Align_Take_Off_Stop_Signal	pshm->P[18023]
#define	P_Vision_Cal_Reset_Count	pshm->P[18024]
#define	P_2nd_PNP_Cleaning_Mode_Cmd	pshm->P[18025]
#define	P_2nd_PNP_Cleaning_Mode_Status	pshm->P[18026]
#define	P_2nd_PNP_Cleaning_Mode_Z_Jog_Speed	pshm->P[18027]
#define	P_2nd_PNP_Cleaning_Mode_X_Jog_Speed	pshm->P[18028]
#define	P_2nd_PNP_Cleaning_Mode_T_Jog_Speed	pshm->P[18029]
#define	P_2nd_PNP_Cleaning_Avoid_2nd_T_Pos	pshm->P[18030]
#define	P_Old_Upper_Sensor(i)	pshm->P[(18031+i)%MAX_P]
#define	P_Edge_Upper_Sensor(i)	pshm->P[(18039+i)%MAX_P]
#define	P_Old_Lower_Sensor(i)	pshm->P[(18047+i)%MAX_P]
#define	P_Edge_Lower_Sensor(i)	pshm->P[(18055+i)%MAX_P]
#define	P_Edge_NP_BTN(i)	pshm->P[(18063+i)%MAX_P]
#define	P_UI_Unit_Status(i)	pshm->P[(18065+i)%MAX_P]
#define	P_Motor_Unit_Status(i)	pshm->P[(18075+i)%MAX_P]
#define	P_Current_Homming_Status_To_PLC(i)	pshm->P[(18125+i)%MAX_P]
#define	P_System_Cascading_ON_Cmd	pshm->P[18175]
#define	P_System_Cascading_OFF_Cmd	pshm->P[18176]
#define	P_System_Master_Following_ON_Cmd	pshm->P[18177]
#define	P_System_Master_Following_OFF_Cmd	pshm->P[18178]
#define	P_System_CamTable_ON_Cmd	pshm->P[18179]
#define	P_System_CamTable_OFF_Cmd	pshm->P[18180]
#define	P_System_Spool_Home_Ready_Pos_Cmd	pshm->P[18181]
#define	P_System_Cascading_ON_Status	pshm->P[18182]
#define	P_System_Cascading_OFF_Status	pshm->P[18183]
#define	P_System_Master_Following_ON_Status	pshm->P[18184]
#define	P_System_Master_Following_OFF_Status	pshm->P[18185]
#define	P_System_CamTable_ON_Status	pshm->P[18186]
#define	P_System_CamTable_OFF_Status	pshm->P[18187]
#define	P_System_Spool_Home_Ready_Pos_Status	pshm->P[18188]
#define	P_System_Cascading_ON_State_Machine	pshm->P[18189]
#define	P_System_Cascading_OFF_State_Machine	pshm->P[18190]
#define	P_System_Master_Follwing_ON_State_Machine	pshm->P[18191]
#define	P_System_Master_Follwing_OFF_State_Machine	pshm->P[18192]
#define	P_System_CamTable_ON_State_Machine	pshm->P[18193]
#define	P_System_CamTable_OFF_State_Machine	pshm->P[18194]
#define	P_System_Spool_Home_Ready_Pos_State_Machine	pshm->P[18195]
#define	P_System_Cascading_ON_Complete_Flag	pshm->P[18196]
#define	P_System_Cascading_OFF_Complete_Flag	pshm->P[18197]
#define	P_System_Master_Following_ON_Complete_Flag	pshm->P[18198]
#define	P_System_Master_Following_OFF_Complete_Flag	pshm->P[18199]
#define	P_System_CamTable_ON_Complete_Flag	pshm->P[18200]
#define	P_System_CamTable_OFF_Complete_Flag	pshm->P[18201]
#define	P_System_Spool_Home_Ready_Pos_Complete_Flag	pshm->P[18202]
#define	P_Servo_Dancer_Cascading_Off_Timer	pshm->P[18203]
#define	P_Servo_Dancer_Cascading_Set_Timer	pshm->P[18204]
#define	P_Dancer_Frist_Home_Ready_Pos_Timer	pshm->P[18205]
#define	P_Driving_Motor_Use_Flag	pshm->P[18206]
#define	P_Home_Spool_Unwinding	pshm->P[18207]
#define	P_OutValue	pshm->P[18208]
#define	P_Dancer_Out_Slew_Seq	pshm->P[18209]
#define	P_OutChangeValue	pshm->P[18210]
#define	P_Rot_OutValue	pshm->P[18211]
#define	P_OutChangeTime	pshm->P[18212]
#define	P_AO_Module_Arr(i)	pshm->P[(18213+i)%MAX_P]
#define	P_AO_Range_Set_Value(i)	pshm->P[(18218+i)%MAX_P]
#define	P_Regul_Max_kPa_Value	pshm->P[18223]
#define	P_Regul_Min_kPa_Value	pshm->P[18224]
#define	P_Regul_Max_AD	pshm->P[18225]
#define	P_Regul_Min_AD	pshm->P[18226]
#define	P_Current_Max_Value	pshm->P[18227]
#define	P_Current_Min_Value	pshm->P[18228]
#define	P_Current_Max_AD	pshm->P[18229]
#define	P_Current_Min_AD	pshm->P[18230]
#define	P_Sepa_Cal_Inclination	pshm->P[18231]
#define	P_Regul_Cal_Inclination	pshm->P[18232]
#define	P_Cutter_Heat_Amp_Data_Bit	pshm->P[18233]
#define	P_Cut_Heat_Amp_Value	pshm->P[18234]
#define	P_AI_Cathode_Clamp_Damper_AVG	pshm->P[18235]
#define	P_AI_Anode_Clamp_Damper_AVG	pshm->P[18236]
#define	P_Tension_Ready_Pos_Cmd	pshm->P[18237]
#define	P_Tension_Ready_State_Machine	pshm->P[18238]
#define	P_Tension_Ready_Pos_Status	pshm->P[18239]
#define	P_Dancer_Center_Pos	pshm->P[18240]
#define	P_Upper_Sepa_Cal_Inclination	pshm->P[18241]
#define	P_Lower_Sepa_Cal_Inclination	pshm->P[18242]
#define	P_Unwinder_Jogspeed	pshm->P[18243]
#define	P_Cascading_First_Out	pshm->P[18244]
#define	P_Dancer_Cur_Vdc	pshm->P[18245]
#define	P_Dancer_Cur_Torque	pshm->P[18246]
#define	P_Dancer_Cur_Newton	pshm->P[18247]
#define	P_Dancer_Cur_Kgf	pshm->P[18248]
#define	P_Board_IO_Count	pshm->P[18249]
#define	P_Force_BTN_Address_Clear_Count	pshm->P[18250]
#define	P_Force_BTN_M_Variable_Save(i)	pshm->P[(18251+i)%MAX_P]
#define	P_Force_BTN_Condition_Count	pshm->P[18635]
#define	P_Old_Force_BTN_Mode	pshm->P[18636]
#define	P_Force_BTN_Address_Count	pshm->P[18637]
#define	P_Force_BTN_GPIO_Address_Count	pshm->P[18638]
#define	P_Force_BTN_Ecat_Address_Count	pshm->P[18639]
#define	P_Force_BTN_M_Variable_Save_Count	pshm->P[18640]
#define	P_Force_BTN_M_Variable_Start_Num	pshm->P[18641]
#define	P_Force_BTN_Normal_Mode_Status	pshm->P[18642]
#define	P_Force_BTN_Normal_Mode_State_Machine	pshm->P[18643]
#define	P_Force_BTN_Normal_Mode_Complete_Flag	pshm->P[18644]
#define	P_Force_BTN_Force_Mode_Timer	pshm->P[18645]
#define	P_Force_BTN_Force_Mode_Delay_Time	pshm->P[18646]
#define	P_Force_BTN_Force_Mode_Status	pshm->P[18647]
#define	P_Force_BTN_Force_Mode_State_Machine	pshm->P[18648]
#define	P_Force_BTN_Force_Mode_Complete_Flag	pshm->P[18649]
#define	P_Mem_Save_Error_Bit	pshm->P[18650]
#define	P_ABS_Phasing_Data(i)	pshm->P[(18651+i)%MAX_P]
#define	P_ABS_Home_Offset_Data(i)	pshm->P[(18656+i)%MAX_P]
#define	P_Servo_Gain_Save_Command	pshm->P[18661]
#define	P_Servo_Gain_Load_Command	pshm->P[18662]
#define	P_Servo_Gain_Save_Flag	pshm->P[18663]
#define	P_Servo_Gain_Load_Flag	pshm->P[18664]
#define	P_Servo_Gain_Kp(i)	pshm->P[(18665+i)%MAX_P]
#define	P_Servo_Gain_Kvfb(i)	pshm->P[(18695+i)%MAX_P]
#define	P_Servo_Gain_Kvff(i)	pshm->P[(18725+i)%MAX_P]
#define	P_Servo_Gain_Ki(i)	pshm->P[(18755+i)%MAX_P]
#define	P_Servo_Gain_SwZvInt(i)	pshm->P[(18785+i)%MAX_P]
#define	P_Servo_Gain_Kaff(i)	pshm->P[(18815+i)%MAX_P]
#define	P_Insert_Phase_Flag	pshm->P[18845]
#define	P_Alarm_Arr(i)	pshm->P[(18846+i)%MAX_P]
#define	P_Alarm_Occur_Flag	pshm->P[18946]
#define	P_Alarm_Occur_Index_Flag(i)	pshm->P[(18947+i)%MAX_P]
#define	P_Alarm_Wait_Time	pshm->P[18951]
#define	P_Alarm_Delay_Timer	pshm->P[18952]
#define	P_Compare_Priority	pshm->P[18953]
#define	P_Alarm_Report	pshm->P[18954]
#define	P_Alarm_Num	pshm->P[18955]
#define	P_Alarm_Index	pshm->P[18956]
#define	P_First_Alarm_Flag	pshm->P[18957]
#define	P_Alarm_Log(i)	pshm->P[(18958+i)%MAX_P]
#define	P_First_Alarm_Log(i)	pshm->P[(19058+i)%MAX_P]
#define	P_Servo_Alarm_Check	pshm->P[19088]
#define	P_Ecat_Servo_Alarm_Check	pshm->P[19089]
#define	P_Alarm_duplicate_Check_Arr(i)	pshm->P[(19090+i)%MAX_P]
#define	P_Old_Drive_Alarm(i)	pshm->P[(19760+i)%MAX_P]
#define	P_IL_ON_OFF_Flag	pshm->P[19810]
#define	P_IL_Coord_Robot	pshm->P[19811]
#define	P_IL_Robot_Bit	pshm->P[19812]
#define	P_IL_Outer_Status	pshm->P[19813]
#define	P_Robot_Unit_Serch_Flag	pshm->P[19814]
#define	P_Limit_PosData(i)	pshm->P[(19815+i)%MAX_P]
#define	P_IL_Sprint	pshm->P[19818]
#define	P_IL_length	pshm->P[19819]
#define	P_IL_Strcat	pshm->P[19820]
#define	P_IL_Popup_Motor	pshm->P[19821]
#define	P_IL_Motor_Page	pshm->P[19822]
#define	P_IL_Recipe_Bit	pshm->P[19823]
#define	P_Interlock_Popup_On_Flag	pshm->P[19824]
#define	P_Motor_Page	pshm->P[19825]
#define	P_OP_Side_Ca_PNP_Pos	pshm->P[19826]
#define	P_OP_Side_An_PNP_Pos	pshm->P[19827]
#define	P_OP_Side_PMAC_Cur_Mode	pshm->P[19828]
#define	P_Abs_Trans_Cur_Pos	pshm->P[19829]
#define	P_Minus_IL_Offset	pshm->P[19830]
#define	P_Plus_IL_Offset	pshm->P[19831]
#define	P_2nd_PNP_Arm_Radius	pshm->P[19832]
#define	P_IL_Enable_Flag	pshm->P[19833]
#define	P_Plus_Interlock_Bit	pshm->P[19834]
#define	P_Minus_Interlock_Bit	pshm->P[19835]
#define	UPPos	pshm->P[19836]
#define	Unloader_In_StackPos	pshm->P[19837]
#define	FR_AnodePos	pshm->P[19838]
#define	FR_CathodePos	pshm->P[19839]
#define	Before_In_Stack	pshm->P[19840]
#define	In_Stack	pshm->P[19841]
#define	P_Collision_Risk_Motor(i)	pshm->P[(19842+i)%MAX_P]
#define	P_Minus_Collision_Risk_Motor	pshm->P[19844]
#define	P_IL_Clamp_Y	pshm->P[19845]
#define	P_IL_Clamp_Z	pshm->P[19846]
#define	P_IL_Clamp_Pos	pshm->P[19847]
#define	P_IL_Use_FR_Clamp_Pos	pshm->P[19848]
#define	P_P_IL_Normal_Pos_Offset(i)	pshm->P[(19849+i)%MAX_P]
#define	P_M_IL_Normal_Pos_Offset(i)	pshm->P[(19899+i)%MAX_P]
#define	P_P_IL_Upper_Pos_Offset(i)	pshm->P[(19949+i)%MAX_P]
#define	P_M_IL_Upper_Pos_Offset(i)	pshm->P[(19999+i)%MAX_P]
#define	P_P_IL_Align_Pos_Offset(i)	pshm->P[(20049+i)%MAX_P]
#define	P_M_IL_Align_Pos_Offset(i)	pshm->P[(20099+i)%MAX_P]
#define	P_P_IL_Stack_Pos_Offset(i)	pshm->P[(20149+i)%MAX_P]
#define	P_M_IL_Stack_Pos_Offset(i)	pshm->P[(20199+i)%MAX_P]
#define	P_Ca_1st_Plus_IL_Offset	pshm->P[20249]
#define	P_Ca_1st_Minus_IL_Offset	pshm->P[20250]
#define	P_An_1st_Plus_IL_Offset	pshm->P[20251]
#define	P_An_1st_Minus_IL_Offset	pshm->P[20252]
#define	P_Ca_2nd_T_Plus_IL_Offset(i)	pshm->P[(20253+i)%MAX_P]
#define	P_Ca_2nd_T_Minus_IL_Offset(i)	pshm->P[(20256+i)%MAX_P]
#define	P_Ca_2nd_Z_Plus_IL_Offset(i)	pshm->P[(20259+i)%MAX_P]
#define	P_Ca_2nd_Z_Minus_IL_Offset(i)	pshm->P[(20261+i)%MAX_P]
#define	P_An_2nd_T_Plus_IL_Offset(i)	pshm->P[(20263+i)%MAX_P]
#define	P_An_2nd_T_Minus_IL_Offset(i)	pshm->P[(20266+i)%MAX_P]
#define	P_An_2nd_Z_Minus_IL_Offset(i)	pshm->P[(20269+i)%MAX_P]
#define	P_Z_Pos_Data	pshm->P[20271]
#define	P_Clamp_Z_Plus_IL_Offset	pshm->P[20272]
#define	P_FR_X_Plus_IL_Offset(i)	pshm->P[(20273+i)%MAX_P]
#define	P_FR_X_Minus_IL_Offset(i)	pshm->P[(20275+i)%MAX_P]
#define	P_FR_Z_Minus_IL_Offset	pshm->P[20277]
#define	P_Ca_NG_PNP_Plus_IL_Offset(i)	pshm->P[(20278+i)%MAX_P]
#define	P_Ca_NG_PNP_Minus_IL_Offset(i)	pshm->P[(20282+i)%MAX_P]
#define	P_An_NG_PNP_Plus_IL_Offset(i)	pshm->P[(20286+i)%MAX_P]
#define	P_An_NG_PNP_Minus_IL_Offset(i)	pshm->P[(20290+i)%MAX_P]
#define	P_Unloader_X_Plus_IL_Offset(i)	pshm->P[(20294+i)%MAX_P]
#define	P_Unloader_X_Minus_IL_Offset(i)	pshm->P[(20298+i)%MAX_P]
#define	P_Unloader_Z_Plus_IL_Offset(i)	pshm->P[(20302+i)%MAX_P]
#define	P_Unloader_Z_Minus_IL_Offset(i)	pshm->P[(20305+i)%MAX_P]
#define	P_IL_In_Offset(i)	pshm->P[(20308+i)%MAX_P]
#define	P_X_PLC_InterLock	pshm->P[20333]
#define	P_IL_Home_Chk	pshm->P[20334]
#define	P_IL_Home_Chk_Motor_Num(i)	pshm->P[(20335+i)%MAX_P]
#define	P_IL_Home_Chk_Motor_Update	pshm->P[20355]
#define	P_IL_Inside_Home_Chk_Complete	pshm->P[20356]
#define	P_IL_Outside_Home_Chk_Complete	pshm->P[20357]
#define	P_IL_Motor_Home_Chk_RTN	pshm->P[20358]
#define	P_IL_Function_Cnt	pshm->P[20359]
#define	P_IL_Function_Motor_Num	pshm->P[20360]
#define	P_Anode_1st_TR_Belt_Down_Flag	pshm->P[20361]
#define	P_Anode_1st_TR_Belt_Pick_Up_Flag	pshm->P[20362]
#define	P_Anode_1st_TR_Align_Down_Flag	pshm->P[20363]
#define	P_Anode_2nd_TR_Align_Pick_Up_Flag	pshm->P[20364]
#define	P_Anode_2nd_TR_Stack_Down_Flag	pshm->P[20365]
#define	P_Anode_NG_TR_Align_Pick_Up_Flag	pshm->P[20366]
#define	P_Anode_NG_TR_NG_Place_Down_Flag	pshm->P[20367]
#define	P_Anode_2nd_TR_Align_Down_Flag	pshm->P[20368]
#define	P_Anode_1st_TR_Align_Pick_Up_Flag	pshm->P[20369]
#define	P_Anode_1st_TR_Belt_Down_State_Machine	pshm->P[20370]
#define	P_Anode_1st_TR_Belt_Down_Status	pshm->P[20371]
#define	P_Anode_1st_TR_Belt_Pick_Up_State_Machine	pshm->P[20372]
#define	P_Anode_1st_TR_Belt_Pick_Up_Status	pshm->P[20373]
#define	P_Anode_1st_TR_Align_Down_State_Machine	pshm->P[20374]
#define	P_Anode_1st_TR_Align_Down_Status	pshm->P[20375]
#define	P_Anode_2nd_TR_Align_Pick_Up_State_Machine	pshm->P[20376]
#define	P_Anode_2nd_TR_Align_Pick_Up_Status	pshm->P[20377]
#define	P_Anode_2nd_TR_Stack_Down_State_Machine	pshm->P[20378]
#define	P_Anode_2nd_TR_Stack_Down_Status	pshm->P[20379]
#define	P_Anode_NG_TR_Align_Pick_Up_State_Machine	pshm->P[20380]
#define	P_Anode_NG_TR_Align_Pick_Up_Status	pshm->P[20381]
#define	P_Anode_NG_TR_NG_Place_Down_State_Machine	pshm->P[20382]
#define	P_Anode_NG_TR_NG_Place_Down_Status	pshm->P[20383]
#define	P_Anode_2nd_TR_Align_Down_State_Machine	pshm->P[20384]
#define	P_Anode_2nd_TR_Align_Down_Status	pshm->P[20385]
#define	P_Anode_1st_TR_Align_Pick_Up_State_Machine	pshm->P[20386]
#define	P_Anode_1st_TR_Align_Pick_Up_Status	pshm->P[20387]
#define	P_Cathode_1st_TR_Belt_Down_Flag	pshm->P[20388]
#define	P_Cathode_1st_TR_Belt_Pick_Up_Flag	pshm->P[20389]
#define	P_Cathode_1st_TR_Align_Down_Flag	pshm->P[20390]
#define	P_Cathode_2nd_TR_Align_Pick_Up_Flag	pshm->P[20391]
#define	P_Cathode_2nd_TR_Stack_Down_Flag	pshm->P[20392]
#define	P_Cathode_NG_TR_Align_Pick_Up_Flag	pshm->P[20393]
#define	P_Cathode_NG_TR_NG_Place_Down_Flag	pshm->P[20394]
#define	P_Cathode_2nd_TR_Align_Down_Flag	pshm->P[20395]
#define	P_Cathode_1st_TR_Align_Pick_Up_Flag	pshm->P[20396]
#define	P_Cathode_1st_TR_Belt_Down_State_Machine	pshm->P[20397]
#define	P_Cathode_1st_TR_Belt_Down_Status	pshm->P[20398]
#define	P_Cathode_1st_TR_Belt_Pick_Up_State_Machine	pshm->P[20399]
#define	P_Cathode_1st_TR_Belt_Pick_Up_Status	pshm->P[20400]
#define	P_Cathode_1st_TR_Align_Down_State_Machine	pshm->P[20401]
#define	P_Cathode_1st_TR_Align_Down_Status	pshm->P[20402]
#define	P_Cathode_2nd_TR_Align_Pick_Up_State_Machine	pshm->P[20403]
#define	P_Cathode_2nd_TR_Align_Pick_Up_Status	pshm->P[20404]
#define	P_Cathode_2nd_TR_Stack_Down_State_Machine	pshm->P[20405]
#define	P_Cathode_2nd_TR_Stack_Down_Status	pshm->P[20406]
#define	P_Cathode_NG_TR_Align_Pick_Up_State_Machine	pshm->P[20407]
#define	P_Cathode_NG_TR_Align_Pick_Up_Status	pshm->P[20408]
#define	P_Cathode_NG_TR_NG_Place_Down_State_Machine	pshm->P[20409]
#define	P_Cathode_NG_TR_NG_Place_Down_Status	pshm->P[20410]
#define	P_Cathode_2nd_TR_Align_Down_State_Machine	pshm->P[20411]
#define	P_Cathode_2nd_TR_Align_Down_Status	pshm->P[20412]
#define	P_Cathode_1st_TR_Align_Pick_Up_State_Machine	pshm->P[20413]
#define	P_Cathode_1st_TR_Align_Pick_Up_Status	pshm->P[20414]
#define	P_Old_Anode_Belt_ASCII	pshm->P[20415]
#define	P_Old_Cathode_Belt_ASCII	pshm->P[20416]
#define	P_Anode_Belt_ASCII	pshm->P[20417]
#define	P_Cathode_Belt_ASCII	pshm->P[20418]
#define	P_Check_Vac_Time	pshm->P[20419]
#define	P_Send_Anode_NG_Code_To_PLC	pshm->P[20420]
#define	P_Receive_Anode_NG_Code_From_PLC	pshm->P[20421]
#define	P_Send_Cathode_NG_Code_To_PLC	pshm->P[20422]
#define	P_Receive_Cathode_NG_Code_From_PLC	pshm->P[20423]
#define	P_Current_Cell_Memory_Anode_1P	pshm->P[20424]
#define	P_Current_Cell_Memory_Anode_AT	pshm->P[20425]
#define	P_Current_Cell_Memory_Anode_2P	pshm->P[20426]
#define	P_Current_Cell_Memory_Cathode_1P	pshm->P[20427]
#define	P_Current_Cell_Memory_Cathode_AT	pshm->P[20428]
#define	P_Current_Cell_Memory_Cathode_2P	pshm->P[20429]
#define	P_Current_Cell_Memory_Stack_Table	pshm->P[20430]
#define	P_Current_Cell_Memory_Cathode_NG_TR	pshm->P[20431]
#define	P_Current_Cell_Memory_Anode_NG_TR	pshm->P[20432]
#define	P_BTN_Anode_1st_TR_Buffer_Clear	pshm->P[20433]
#define	P_BTN_Anode_2nd_TR_Buffer_Clear	pshm->P[20434]
#define	P_BTN_Anode_Align_Buffer_Clear	pshm->P[20435]
#define	P_BTN_Anode_NG_TR_Buffer_Clear	pshm->P[20436]
#define	P_BTN_Cathode_1st_TR_Buffer_Clear	pshm->P[20437]
#define	P_BTN_Cathode_2nd_TR_Buffer_Clear	pshm->P[20438]
#define	P_BTN_Cathode_Align_Buffer_Clear	pshm->P[20439]
#define	P_BTN_Cathode_NG_TR_Buffer_Clear	pshm->P[20440]
#define	P_Old_BTN_Anode_1st_TR_Buffer_Clear	pshm->P[20441]
#define	P_Old_BTN_Anode_2nd_TR_Buffer_Clear	pshm->P[20442]
#define	P_Old_BTN_Anode_Align_Buffer_Clear	pshm->P[20443]
#define	P_Old_BTN_Anode_NG_TR_Buffer_Clear	pshm->P[20444]
#define	P_Old_BTN_Cathode_1st_TR_Buffer_Clear	pshm->P[20445]
#define	P_Old_BTN_Cathode_2nd_TR_Buffer_Clear	pshm->P[20446]
#define	P_Old_BTN_Cathode_Align_Buffer_Clear	pshm->P[20447]
#define	P_Old_BTN_Cathode_NG_TR_Buffer_Clear	pshm->P[20448]
#define	P_Send_Anode_NG_Code_Flag	pshm->P[20449]
#define	P_Send_Cathode_NG_Code_Flag	pshm->P[20450]
#define	P_Anode_Vision_NG_To_PLC_Flag	pshm->P[20451]
#define	P_Cathode_Vision_NG_To_PLC_Flag	pshm->P[20452]
#define	P_Status_Clear_Sheet_Maint_Check	pshm->P[20453]
#define	P_Single_Run_Start_Flag	pshm->P[20454]
#define	P_Single_Run_Control_State_Machine	pshm->P[20455]
#define	P_Single_Run_Control_Status	pshm->P[20456]
#define	P_Single_Run_Execute_Bit	pshm->P[20457]
#define	P_User_Dry_Run_Mode	pshm->P[20458]
#define	P_Single_Run_State_Machine	pshm->P[20459]
#define	P_Single_Run_Status	pshm->P[20460]
#define	P_Single_Run_Unit	pshm->P[20461]
#define	P_Single_Run_Evade_Pos_RTN	pshm->P[20462]
#define	P_Single_Run_Evade_Pos_Check_RTN	pshm->P[20463]
#define	P_Single_Run_Pos_Rtn1	pshm->P[20464]
#define	P_Single_Run_Pos_Rtn2	pshm->P[20465]
#define	P_Single_Run_Motion_Ready_RTN	pshm->P[20466]
#define	P_Single_Run_Execution_Interlock_RTN	pshm->P[20467]
#define	P_Single_Run_Coord_Activate_RTN	pshm->P[20468]
#define	P_Single_Run_Coord_Activate_Check_RTN	pshm->P[20469]
#define	P_Single_Run_Select_Run_Mode_RTN	pshm->P[20470]
#define	P_Single_Run_Execution_Run_RTN	pshm->P[20471]
#define	P_Single_Run_Motion_Ready_State_Machine	pshm->P[20472]
#define	P_Coord_1	pshm->P[20473]
#define	P_Coord_2	pshm->P[20474]
#define	P_Coord_3	pshm->P[20475]
#define	P_Coord_4	pshm->P[20476]
#define	P_Final_Roll_Z_Motion_Flag	pshm->P[20477]
#define	P_Final_Roll_Z_Motion_State_Machine	pshm->P[20478]
#define	P_Main_Z_Motion_Flag	pshm->P[20479]
#define	P_Main_Z_Motion_State_Machine	pshm->P[20480]
#define	P_Single_Run_Mode_Flag	pshm->P[20481]
#define	P_Cathode_AT_Motion_Flag	pshm->P[20482]
#define	P_Cathode_Align_Motion_State_Machine	pshm->P[20483]
#define	P_Anode_AT_Motion_Flag	pshm->P[20484]
#define	P_Anode_Align_Motion_State_Machine	pshm->P[20485]
#define	P_Sheet_Paper_Motion_Flag	pshm->P[20486]
#define	P_Sheet_Paper_Motion_State_Machine	pshm->P[20487]
#define	P_Cathode_NG_PNP_T_Motion_Flag	pshm->P[20488]
#define	P_Cathode_NG_PNP_T_Motion_State_Machine	pshm->P[20489]
#define	P_Cathode_NG_PNP_Z_Motion_Flag	pshm->P[20490]
#define	P_Cathode_NG_PNP_Z_Motion_State_Machine	pshm->P[20491]
#define	P_Anode_NG_PNP_T_Motion_Flag	pshm->P[20492]
#define	P_Anode_NG_PNP_T_Motion_State_Machine	pshm->P[20493]
#define	P_Anode_NG_PNP_Z_Motion_Flag	pshm->P[20494]
#define	P_Anode_NG_PNP_Z_Motion_State_Machine	pshm->P[20495]
#define	P_1st_UND_X_Motion_Flag	pshm->P[20496]
#define	P_1st_UND_X_Motion_State_Machine	pshm->P[20497]
#define	P_1st_UND_Z_Motion_Flag	pshm->P[20498]
#define	P_1st_UND_Z_Motion_State_Machine	pshm->P[20499]
#define	P_1st_UND_T_Motion_Flag	pshm->P[20500]
#define	P_1st_UND_T_Motion_State_Machine	pshm->P[20501]
#define	P_Cathode_Run_Command_Flag	pshm->P[20502]
#define	P_Anode_Run_Command_Flag	pshm->P[20503]
#define	P_NG_PNP_Uint_Motion_Flag	pshm->P[20504]
#define	P_NG_PNP_Uint_State_Machine	pshm->P[20505]
#define	P_NG_PNP_Motion_Cnt	pshm->P[20506]
#define	P_NG_PNP_Motion_arr(i)	pshm->P[(20507+i)%MAX_P]
#define	P_Single_Run_Timer	pshm->P[20517]
#define	P_Single_Run_Align_Timer	pshm->P[20518]
#define	P_Single_Run_Align_Timer2	pshm->P[20519]
#define	P_Single_Run_Finall_Roll_Z_Timer	pshm->P[20520]
#define	P_Single_RuN_MAIN_Z_Timer	pshm->P[20521]
#define	P_Single_Run_Sheet_Paper_Timer	pshm->P[20522]
#define	P_Single_Run_Debug_SM	pshm->P[20523]
#define	P_Error_Monitoring_Count_1	pshm->P[20524]
#define	P_Error_Monitoring_Count_2	pshm->P[20525]
#define	P_Error_Monitoring_Count_3	pshm->P[20526]
#define	P_Error_Monitoring_Count_4	pshm->P[20527]
#define	P_Error_Monitoring_Count_5	pshm->P[20528]
#define	P_Old_Single_Run_Mode_Flag	pshm->P[20529]
#define	P_Old_Current_Mode	pshm->P[20530]
#define	P_Single_Run_Timebase_Off_RTN	pshm->P[20531]
#define	P_Single_Run_Stop_State_Machine	pshm->P[20532]
#define	P_Single_Run_Stop_Status	pshm->P[20533]
#define	P_Single_Run_Stop_Timer	pshm->P[20534]
#define	P_Single_Run_Stop_Init_RTN	pshm->P[20535]
#define	P_Single_Run_Stop_Btn_Chk	pshm->P[20536]
#define	P_Single_Run_Stop_Command	pshm->P[20537]
#define	P_Motor_Ready_Poa_Inpos_200um	pshm->P[20538]
#define	P_Ecat_Parameter_Write_Flag	pshm->P[20539]
#define	P_Ecat_Parameter_Read_Flag	pshm->P[20540]
#define	P_Ecat_Each_Parameter_Write_Flag	pshm->P[20541]
#define	P_Ecat_Slave_Idx	pshm->P[20542]
#define	P_Ec_Num	pshm->P[20543]
#define	P_Ecat_Read_Motor_Num	pshm->P[20544]
#define	P_Ecat_Write_Motor_Num	pshm->P[20545]
#define	P_Ecat_Parameter_Write_State_Machine	pshm->P[20546]
#define	P_Ecat_Parameter_Read_State_Machine	pshm->P[20547]
#define	P_Ecat_Each_Parameter_Write_State_Machine	pshm->P[20548]
#define	P_Ecat_Read_MNTR(i)	pshm->P[(20549+i)%MAX_P]
#define	P_Ecat_Write_MNTR(i)	pshm->P[(20577+i)%MAX_P]
#define	P_Ecat_Save_MNTR(i)	pshm->P[(20605+i)%MAX_P]
#define	P_Ecat_Error_MNTR(i)	pshm->P[(20621+i)%MAX_P]
#define	P_Ecat_Read_Error_MNTR(i)	pshm->P[(20637+i)%MAX_P]
#define	P_Ecat_Each_Write_Error_MNTR(i)	pshm->P[(20653+i)%MAX_P]
#define	P_Ecat_Write_Status	pshm->P[20669]
#define	P_Ecat_Read_Status	pshm->P[20670]
#define	P_Ecat_Each_Write_Status	pshm->P[20671]
#define	P_Pn000(i)	pshm->P[(20672+i)%MAX_P]
#define	P_Pn001(i)	pshm->P[(20692+i)%MAX_P]
#define	P_Pn00B(i)	pshm->P[(20712+i)%MAX_P]
#define	P_Pn100(i)	pshm->P[(20732+i)%MAX_P]
#define	P_Pn101(i)	pshm->P[(20752+i)%MAX_P]
#define	P_Pn102(i)	pshm->P[(20772+i)%MAX_P]
#define	P_Pn103(i)	pshm->P[(20792+i)%MAX_P]
#define	P_Pn123(i)	pshm->P[(20812+i)%MAX_P]
#define	P_Pn140(i)	pshm->P[(20832+i)%MAX_P]
#define	P_Pn141(i)	pshm->P[(20852+i)%MAX_P]
#define	P_Pn145(i)	pshm->P[(20872+i)%MAX_P]
#define	P_Pn146(i)	pshm->P[(20892+i)%MAX_P]
#define	P_Pn160(i)	pshm->P[(20912+i)%MAX_P]
#define	P_Pn161(i)	pshm->P[(20932+i)%MAX_P]
#define	P_Pn163(i)	pshm->P[(20952+i)%MAX_P]
#define	P_Pn170(i)	pshm->P[(20972+i)%MAX_P]
#define	P_Pn401(i)	pshm->P[(20992+i)%MAX_P]
#define	P_Pn408(i)	pshm->P[(21012+i)%MAX_P]
#define	P_Pn409(i)	pshm->P[(21032+i)%MAX_P]
#define	P_Pn40A(i)	pshm->P[(21052+i)%MAX_P]
#define	P_Pn40C(i)	pshm->P[(21072+i)%MAX_P]
#define	P_Pn40D(i)	pshm->P[(21092+i)%MAX_P]
#define	P_Pn416(i)	pshm->P[(21112+i)%MAX_P]
#define	P_Pn417(i)	pshm->P[(21132+i)%MAX_P]
#define	P_Pn511(i)	pshm->P[(21152+i)%MAX_P]
#define	P_Pn520(i)	pshm->P[(21172+i)%MAX_P]
#define	P_PnB02_Numerator(i)	pshm->P[(21192+i)%MAX_P]
#define	P_PnB02_Denominator(i)	pshm->P[(21212+i)%MAX_P]
#define	P_Align_Plus_Blow_Test	pshm->P[21232]
#define	P_System_Setting_Flag	pshm->P[21233]
#define	P_Ecat_Setting_Flag	pshm->P[21234]
#define	P_Ecat_Activation_State_Machine	pshm->P[21235]
#define	P_PLC31_Ecat_Retry_Cnt	pshm->P[21236]
#define	P_Ecat_Connect_Result	pshm->P[21237]
#define	P_Ecat_Slave_Error	pshm->P[21238]
#define	P_PWM_AbsPhasePosOffset_Change_State_Machine	pshm->P[21239]
#define	P_AbsPhasePosOffset_Change_Complete	pshm->P[21240]
#define	P_PWM_AbsPhasing_Fail	pshm->P[21241]
#define	P_PWM_AbsPhasing_Complete	pshm->P[21242]
#define	P_Whole_Stacking_Tack_Time	pshm->P[21243]
#define	P_Whole_Stacking_Tack_Time_Check	pshm->P[21244]
#define	P_Whole_Stacking_Tack_Timer_Check_Flag	pshm->P[21245]
#define	P_Whole_Stacking_Timer_Shift_Status_Machine	pshm->P[21246]
#define	P_Whole_Stacking_TackTime_Array0	pshm->P[21247]
#define	P_Whole_Stacking_TackTime_Array1	pshm->P[21248]
#define	P_Whole_Stacking_TackTime_Array2	pshm->P[21249]
#define	P_Whole_Stacking_TackTime_Array3	pshm->P[21250]
#define	P_Whole_Stacking_TackTime_Array4	pshm->P[21251]
#define	P_Whole_Stacking_TackTime_Array5	pshm->P[21252]
#define	P_Whole_Stacking_TackTime_Array6	pshm->P[21253]
#define	P_Whole_Stacking_TackTime_Array7	pshm->P[21254]
#define	P_Whole_Stacking_TackTime_Array8	pshm->P[21255]
#define	P_Whole_Stacking_TackTime_Array9	pshm->P[21256]
#define	P_Whole_Stacking_TackTime_Array10	pshm->P[21257]
#define	P_First_Stacking_Start	pshm->P[21258]
#define	P_Last_Stacking_Complete	pshm->P[21259]
#define	P_Stacking_Tack_Time	pshm->P[21260]
#define	P_Stacking_Tack_Time_Check	pshm->P[21261]
#define	P_Stacking_Tack_Timer_Check_Flag	pshm->P[21262]
#define	P_Stacking_Timer_Shift_Status_Machine	pshm->P[21263]
#define	P_Cathode_to_Anode_FR_Tack_Time_Check	pshm->P[21264]
#define	P_Anode_to_Cathode_FR_Tack_Time_Check	pshm->P[21265]
#define	P_Cathode_to_Anode_FR_Tack_Time_Start	pshm->P[21266]
#define	P_Anode_to_Cathode_FR_Tack_Time_Start	pshm->P[21267]
#define	P_Cathode_to_Anode_FR_Tack_Time_Complete	pshm->P[21268]
#define	P_Anode_to_Cathode_FR_Tack_Time_Complete	pshm->P[21269]
#define	P_Cathode_to_Anode_FR_Time	pshm->P[21270]
#define	P_Anode_to_Cathode_FR_Time	pshm->P[21271]
#define	P_Cathode_to_Anode_FR_Tack_Timer_Check_Flag	pshm->P[21272]
#define	P_Anode_to_Cathode_FR_Tack_Timer_Check_Flag	pshm->P[21273]
#define	P_Anode_Align_Table_Time	pshm->P[21274]
#define	P_Anode_Align_Table_Tack_Time_Check	pshm->P[21275]
#define	P_Anode_Align_Table_Tack_Timer_Check_Flag	pshm->P[21276]
#define	P_Anode_Align_Table_Timer_Shift_Status_Machine	pshm->P[21277]
#define	P_Anode_Align_Tack_Time_Start	pshm->P[21278]
#define	P_Anode_Align_Tack_Time_Complete	pshm->P[21279]
#define	P_Cathode_Align_Table_Time	pshm->P[21280]
#define	P_Cathode_Align_Table_Tack_Time_Check	pshm->P[21281]
#define	P_Cathode_Align_Table_Tack_Timer_Check_Flag	pshm->P[21282]
#define	P_Cathode_Align_Table_Timer_Shift_Status_Machine	pshm->P[21283]
#define	P_Cathode_Align_Tack_Time_Start	pshm->P[21284]
#define	P_Cathode_Align_Tack_Time_Complete	pshm->P[21285]
#define	P_Anode_1th_Tack_Time_Start	pshm->P[21286]
#define	P_Anode_1th_Tack_Time_Complete	pshm->P[21287]
#define	P_Anode_1th_Time	pshm->P[21288]
#define	P_Anode_1th_Tack_Time_Check	pshm->P[21289]
#define	P_Anode_1th_Tack_Timer_Check_Flag	pshm->P[21290]
#define	P_Anode_1th_Timer_Shift_Status_Machine	pshm->P[21291]
#define	P_Cathode_1th_Tack_Time_Start	pshm->P[21292]
#define	P_Cathode_1th_Tack_Time_Complete	pshm->P[21293]
#define	P_Cathode_1th_Time	pshm->P[21294]
#define	P_Cathode_1th_Tack_Time_Check	pshm->P[21295]
#define	P_Cathode_1th_Tack_Timer_Check_Flag	pshm->P[21296]
#define	P_Cathode_1th_Timer_Shift_Status_Machine	pshm->P[21297]
#define	P_Anode_2th_Tack_Time_Start	pshm->P[21298]
#define	P_Anode_2th_Tack_Time_Complete	pshm->P[21299]
#define	P_Anode_2th_Time	pshm->P[21300]
#define	P_Anode_2th_Tack_Time_Check	pshm->P[21301]
#define	P_Anode_2th_Tack_Timer_Check_Flag	pshm->P[21302]
#define	P_Anode_2th_Timer_Shift_Status_Machine	pshm->P[21303]
#define	P_Cathode_2th_Tack_Time_Start	pshm->P[21304]
#define	P_Cathode_2th_Tack_Time_Complete	pshm->P[21305]
#define	P_Cathode_2th_Time	pshm->P[21306]
#define	P_Cathode_2th_Tack_Time_Check	pshm->P[21307]
#define	P_Cathode_2th_Tack_Timer_Check_Flag	pshm->P[21308]
#define	P_Cathode_2th_Timer_Shift_Status_Machine	pshm->P[21309]
#define	P_Anode_1th_NG_Tack_Time_Start	pshm->P[21310]
#define	P_Anode_1th_NG_Tack_Time_Complete	pshm->P[21311]
#define	P_Anode_1th_NG_Time	pshm->P[21312]
#define	P_Anode_1th_NG_Tack_Time_Check	pshm->P[21313]
#define	P_Anode_1th_NG_Tack_Timer_Check_Flag	pshm->P[21314]
#define	P_Anode_1th_NG_Timer_Shift_Status_Machine	pshm->P[21315]
#define	P_Cathode_1th_NG_Tack_Time_Start	pshm->P[21316]
#define	P_Cathode_1th_NG_Tack_Time_Complete	pshm->P[21317]
#define	P_Cathode_1th_NG_Time	pshm->P[21318]
#define	P_Cathode_1th_NG_Tack_Time_Check	pshm->P[21319]
#define	P_Cathode_1th_NG_Tack_Timer_Check_Flag	pshm->P[21320]
#define	P_Cathode_1th_NG_Timer_Shift_Status_Machine	pshm->P[21321]
#define	P_Anode_Clamp_Tack_Time_Start	pshm->P[21322]
#define	P_Anode_Clamp_Tack_Time_Complete	pshm->P[21323]
#define	P_Anode_Clamp_Time	pshm->P[21324]
#define	P_Anode_Clamp_Tack_Time_Check	pshm->P[21325]
#define	P_Anode_Clamp_Tack_Timer_Check_Flag	pshm->P[21326]
#define	P_Anode_Clamp_Timer_Shift_Status_Machine	pshm->P[21327]
#define	P_Cathode_Clamp_Tack_Time_Start	pshm->P[21328]
#define	P_Cathode_Clamp_Tack_Time_Complete	pshm->P[21329]
#define	P_Cathode_Clamp_Time	pshm->P[21330]
#define	P_Cathode_Clamp_Tack_Time_Check	pshm->P[21331]
#define	P_Cathode_Clamp_Tack_Timer_Check_Flag	pshm->P[21332]
#define	P_Cathode_Clamp_Timer_Shift_Status_Machine	pshm->P[21333]
#define	P_Final_Roll_X_Timer_Shift_Status_Machine	pshm->P[21334]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array0	pshm->P[21335]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array1	pshm->P[21336]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array2	pshm->P[21337]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array3	pshm->P[21338]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array4	pshm->P[21339]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array5	pshm->P[21340]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array6	pshm->P[21341]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array7	pshm->P[21342]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array8	pshm->P[21343]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array9	pshm->P[21344]
#define	P_Final_Roll_X_Cathode_to_Anode_TackTime_Array10	pshm->P[21345]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array0	pshm->P[21346]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array1	pshm->P[21347]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array2	pshm->P[21348]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array3	pshm->P[21349]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array4	pshm->P[21350]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array5	pshm->P[21351]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array6	pshm->P[21352]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array7	pshm->P[21353]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array8	pshm->P[21354]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array9	pshm->P[21355]
#define	P_Final_Roll_X_Anode_to_Cathode_TackTime_Array10	pshm->P[21356]
#define	P_Pneumatic_Pressure_Unit_Tack_Time_Chk_Timer(i)	pshm->P[(21357+i)%MAX_P]
#define	P_Pneumatic_Pressure_Unit_Tack_Time(i)	pshm->P[(21384+i)%MAX_P]
#define	P_MCC_Anode_Align_NG_Count	pshm->P[21411]
#define	P_MCC_Cathode_Align_NG_Count	pshm->P[21412]
#define	P_MCC_Anode_Retry_NG_Count	pshm->P[21413]
#define	P_MCC_Cathode_Retry_NG_Count	pshm->P[21414]
#define	P_Discharge_Tact_Time_Arr(i)	pshm->P[(21415+i)%MAX_P]
#define	P_Discharge_Hold_Timer	pshm->P[21427]
#define	P_Discharge_Hold_Time	pshm->P[21428]
#define	P_AN_1st_Z_Zero_Angle	pshm->P[21429]
#define	P_AN_1st_Z_Zero_Length	pshm->P[21430]
#define	P_Anode_1st_PNP_Z_Crank_Zero_Pos	pshm->P[21431]
#define	P_Anode_1st_PNP_Z_Crank_real_Move_Pos	pshm->P[21432]
#define	P_Anode_1st_PNP_Z_Crank_radian	pshm->P[21433]
#define	P_Anode_1st_PNP_Z_Acos_denominator	pshm->P[21434]
#define	P_Anode_1st_PNP_Z_Acos_numerator	pshm->P[21435]
#define	P_Anode_1st_PNP_Z_Crank_Angle	pshm->P[21436]
#define	P_Anode_1st_PNP_Z_Real_Move_Pos	pshm->P[21437]
#define	P_Anode_1st_Fwd_Bwd_Rise	pshm->P[21438]
#define	P_CA_1st_Z_Zero_Angle	pshm->P[21439]
#define	P_CA_1st_Z_Zero_Length	pshm->P[21440]
#define	P_Cathode_1st_PNP_Z_Crank_Zero_Pos	pshm->P[21441]
#define	P_Cathode_1st_PNP_Z_Crank_real_Move_Pos	pshm->P[21442]
#define	P_Cathode_1st_PNP_Z_Crank_radian	pshm->P[21443]
#define	P_Cathode_1st_PNP_Z_Acos_denominator	pshm->P[21444]
#define	P_Cathode_1st_PNP_Z_Acos_numerator	pshm->P[21445]
#define	P_Cathode_1st_PNP_Z_Crank_Angle	pshm->P[21446]
#define	P_Cathode_1st_PNP_Z_Real_Move_Pos	pshm->P[21447]
#define	P_Cathode_1st_Fwd_Bwd_Rise	pshm->P[21448]
#define	P_AN_2nd_Z_Zero_Angle	pshm->P[21449]
#define	P_AN_2nd_Z_Zero_Length	pshm->P[21450]
#define	P_Anode_2nd_PNP_Z_Crank_Zero_Pos	pshm->P[21451]
#define	P_Anode_2nd_PNP_Z_Crank_real_Move_Pos	pshm->P[21452]
#define	P_Anode_2nd_PNP_Z_Crank_radian	pshm->P[21453]
#define	P_Anode_2nd_PNP_Z_Acos_denominator	pshm->P[21454]
#define	P_Anode_2nd_PNP_Z_Acos_numerator	pshm->P[21455]
#define	P_Anode_2nd_PNP_Z_Crank_Angle	pshm->P[21456]
#define	P_Anode_2nd_PNP_Z_Real_Move_Pos	pshm->P[21457]
#define	P_Anode_2nd_Fwd_Bwd_Rise	pshm->P[21458]
#define	P_CA_2nd_Z_Zero_Angle	pshm->P[21459]
#define	P_CA_2nd_Z_Zero_Length	pshm->P[21460]
#define	P_Cathode_2nd_PNP_Z_Crank_Zero_Pos	pshm->P[21461]
#define	P_Cathode_2nd_PNP_Z_Crank_real_Move_Pos	pshm->P[21462]
#define	P_Cathode_2nd_PNP_Z_Crank_radian	pshm->P[21463]
#define	P_Cathode_2nd_PNP_Z_Acos_denominator	pshm->P[21464]
#define	P_Cathode_2nd_PNP_Z_Acos_numerator	pshm->P[21465]
#define	P_Cathode_2nd_PNP_Z_Crank_Angle	pshm->P[21466]
#define	P_Cathode_2nd_PNP_Z_Real_Move_Pos	pshm->P[21467]
#define	P_Cathode_2nd_Fwd_Bwd_Rise	pshm->P[21468]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Ready_Up	pshm->P[21469]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Belt_Up	pshm->P[21470]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Belt_Down	pshm->P[21471]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Align_Up	pshm->P[21472]
#define	P_Old_Recipe_Anode_1st_PNP_Z_Align_Down	pshm->P[21473]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Ready_Up	pshm->P[21474]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Up	pshm->P[21475]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Down	pshm->P[21476]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Align_Up	pshm->P[21477]
#define	P_Old_Recipe_Cathode_1st_PNP_Z_Align_Down	pshm->P[21478]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Align_Up	pshm->P[21479]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Align_Down	pshm->P[21480]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Up	pshm->P[21481]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Down	pshm->P[21482]
#define	P_Old_Recipe_Anode_2nd_PNP_Z_Ready_Up	pshm->P[21483]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Up	pshm->P[21484]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Down	pshm->P[21485]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Up	pshm->P[21486]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Down	pshm->P[21487]
#define	P_Old_Recipe_Cathode_2nd_PNP_Z_Ready_Up	pshm->P[21488]
#define	P_PLC19_All_Home_Cmd	pshm->P[21489]
#define	P_PLC19_All_Home_Status	pshm->P[21490]
#define	P_PLC19_All_Home_Module_Status	pshm->P[21491]
#define	P_PLC19_All_Home_State_Machine	pshm->P[21492]
#define	P_PLC19_All_Home_Seq_Index	pshm->P[21493]
#define	P_PLC19_All_Home_Self_Index	pshm->P[21494]
#define	P_PLC19_All_Home_Debug_Edge	pshm->P[21495]
#define	P_PLC19_All_Home_Set_Mode_Return	pshm->P[21496]
#define	P_Buffer_Seqdata_All_Home_Array(i)	pshm->P[(21497+i)%MAX_P]
#define	P_PLC19_All_Home_Timer	pshm->P[21527]
#define	P_PLC19_All_Home_Tact_Time_Array(i)	pshm->P[(21528+i)%MAX_P]
#define	P_PLC19_All_Home_Tact_Time	pshm->P[21548]
#define	P_All_Home_Module_Error	pshm->P[21549]
#define	P_Act_All_Home_Complete_Bit(i)	pshm->P[(21550+i)%MAX_P]
#define	P_Module_Act_All_Home_Command_Array(i)	pshm->P[(21590+i)%MAX_P]
#define	P_OLD_Module_Act_All_Home_Command_Array(i)	pshm->P[(21630+i)%MAX_P]
#define	P_Module_Act_All_Home_State_Machine_Array(i)	pshm->P[(21670+i)%MAX_P]
#define	P_Act_All_Home_Old_Time(i)	pshm->P[(21710+i)%MAX_P]
#define	P_Act_ALL_Home_Time_Out_Time	pshm->P[21750]
#define	P_Act_ALL_Home_Time_Out(i)	pshm->P[(21751+i)%MAX_P]
#define	P_Act_Hold_Complete_Bit(i)	pshm->P[(21791+i)%MAX_P]
#define	P_Module_Act_Hold_Command_Array(i)	pshm->P[(21826+i)%MAX_P]
#define	P_OLD_Module_Act_Hold_Command_Array(i)	pshm->P[(21861+i)%MAX_P]
#define	P_Module_Act_Hold_State_Machine_Array(i)	pshm->P[(21896+i)%MAX_P]
#define	P_Act_Hold_Old_Time(i)	pshm->P[(21931+i)%MAX_P]
#define	P_Act_Hold_Time_Out_Time	pshm->P[21966]
#define	P_Act_Hold_Time_Out(i)	pshm->P[(21967+i)%MAX_P]
#define	P_First_PNP_T_Wait_Status	pshm->P[22002]
#define	P_First_PNP_Z_Wait_Status	pshm->P[22003]
#define	P_First_PNP_Picker_T_Turn_Status	pshm->P[22004]
#define	P_First_PNP_T_Wait_To_Belt_Status	pshm->P[22005]
#define	P_First_PNP_Z_Wait_To_Belt_Status	pshm->P[22006]
#define	P_First_PNP_T_Align_To_Belt_Status	pshm->P[22007]
#define	P_First_PNP_Z_Align_To_Belt_Status	pshm->P[22008]
#define	P_First_PNP_Z_Belt_Down_Status	pshm->P[22009]
#define	P_First_PNP_Z_Belt_Up_Status	pshm->P[22010]
#define	P_First_PNP_T_Wait_To_Align_Status	pshm->P[22011]
#define	P_First_PNP_Z_Wait_To_Align_Status	pshm->P[22012]
#define	P_First_PNP_T_Belt_To_Align_Status	pshm->P[22013]
#define	P_First_PNP_Z_Belt_To_Align_Status	pshm->P[22014]
#define	P_First_PNP_Z_Align_Down_Status	pshm->P[22015]
#define	P_First_PNP_Z_Align_Up_Status	pshm->P[22016]
#define	P_First_PNP_Vac_On_Status	pshm->P[22017]
#define	P_First_PNP_Blow_On_Status	pshm->P[22018]
#define	P_Second_PNP_T_Align_To_Stack_Status	pshm->P[22019]
#define	P_Second_PNP_Z_Align_To_Stack_Status	pshm->P[22020]
#define	P_Second_PNP_T_Stack_To_Align_Status	pshm->P[22021]
#define	P_Second_PNP_Z_Stack_To_Align_Status	pshm->P[22022]
#define	P_Second_PNP_Z_Align_Down_Status	pshm->P[22023]
#define	P_Second_PNP_Z_Align_Up_Status	pshm->P[22024]
#define	P_Second_PNP_Vac_On_Status	pshm->P[22025]
#define	P_Second_PNP_Blow_On_Status	pshm->P[22026]
#define	P_NG_PNP_NG_Bos_Status	pshm->P[22027]
#define	P_NG_PNP_Align_Status	pshm->P[22028]
#define	P_NG_PNP_Align_Down_Status	pshm->P[22029]
#define	P_NG_PNP_Align_Up_Status	pshm->P[22030]
#define	P_NG_PNP_Vac_On_Status	pshm->P[22031]
#define	P_NG_PNP_Blow_On_Status	pshm->P[22032]
#define	P_Hold_1st_PNP_Position	pshm->P[22033]
#define	P_Hold_Module_Error	pshm->P[22034]
#define	P_Act_Execute_Complete_Bit(i)	pshm->P[(22035+i)%MAX_P]
#define	P_Module_Act_Execute_Command_Array(i)	pshm->P[(22047+i)%MAX_P]
#define	P_OLD_Module_Act_Execute_Command_Array(i)	pshm->P[(22059+i)%MAX_P]
#define	P_Module_Act_Execute_State_Machine_Array(i)	pshm->P[(22071+i)%MAX_P]
#define	P_Act_Execute_Old_Time(i)	pshm->P[(22083+i)%MAX_P]
#define	P_Act_Execute_Time_Out_Time	pshm->P[22095]
#define	P_Act_Execute_Time_Out(i)	pshm->P[(22096+i)%MAX_P]
#define	P_Execute_Module_Error	pshm->P[22108]
#define	P_Execute_First_Sepa_Total_Tact_Time	pshm->P[22109]
#define	P_Current_JR_Thickness_mm	pshm->P[22110]
#define	P_Current_Jelly_Roll_Thinckness_mm_Send_Enable_Flag	pshm->P[22111]
#define	P_Stack_Table_NG_Flag	pshm->P[22112]
#define	P_Suspend_Discharge_Cell_Out_Restart	pshm->P[22113]
#define	P_Jelly_Roll_OK_Count	pshm->P[22114]
#define	P_Jelly_Roll_NG_Count	pshm->P[22115]
#define	P_Jelly_Roll_Total_Count	pshm->P[22116]
#define	P_Jelly_Roll_ID	pshm->P[22117]
#define	P_Jelly_Roll_Prod_Count	pshm->P[22118]
#define	P_Jelly_Roll_Recipe_Count	pshm->P[22119]
#define	P_Current_Cell_Memory_Jelly_Roll	pshm->P[22120]
#define	P_Real_Stacking_Host_ID_Count	pshm->P[22121]
#define	P_VISION_PLC10_Anode_Align_Start	pshm->P[22122]
#define	P_VISION_PLC10_Cathode_Align_Start	pshm->P[22123]
#define	P_Stack_Table_NG_Count	pshm->P[22124]
#define	P_Stack_PMAC_NG_Code	pshm->P[22125]
#define	P_Stack_Vision_NG_Code_IN_Timer	pshm->P[22126]
#define	P_Discharge_Waiting_Flag	pshm->P[22127]
#define	P_ARC_Flag	pshm->P[22128]
#define	P_Discharge_Queue_Complete_Flag	pshm->P[22129]
#define	P_Shared_Discharge_Cmd	pshm->P[22130]
#define	P_Shared_Discharge_State_Machine	pshm->P[22131]
#define	P_Discharge_Dont_Stop_Point_Flag	pshm->P[22132]
#define	P_1st_Discharge_State	pshm->P[22133]
#define	P_Discharge_DIO_Trg	pshm->P[22134]
#define	P_Data_Parsing_Flag	pshm->P[22135]
#define	P_Memory_Discharge_Data	pshm->P[22136]
#define	P_Prev_Sepa_Stack_Completed_Flag	pshm->P[22137]
#define	P_First_Sepa_Mode_Status	pshm->P[22138]
#define	P_First_Sepa_Mode_Flag	pshm->P[22139]
#define	P_Discharge_Unloader_Handover_Timer	pshm->P[22140]
#define	P_Discharge_Unloader_Handover_Time	pshm->P[22141]
#define	P_B_1st_to_3rd_Discharge_cmd	pshm->P[22142]
#define	P_B_1st_to_3rd_Discharge_State_Machine	pshm->P[22143]
#define	P_3rd_Discharge_Status	pshm->P[22144]
#define	P_Buffer_Mode_Module_Status_Sequence(i)	pshm->P[(22145+i)%MAX_P]
#define	P_EXECUTE_Status_Prod_Sequence(i)	pshm->P[(22175+i)%MAX_P]
#define	P_Execute_First_Sepa_Mode_Cmd	pshm->P[22205]
#define	P_Execute_First_Sepa_Mode_Status	pshm->P[22206]
#define	P_Execute_First_Sepa_Mode_Module_Status	pshm->P[22207]
#define	P_Execute_First_Sepa_Mode_State_Machine	pshm->P[22208]
#define	P_Execute_First_Sepa_Mode_Seq_Index	pshm->P[22209]
#define	P_Execute_First_Sepa_Mode_Self_Index	pshm->P[22210]
#define	P_Execute_First_Sepa_Mode_Debug_Edge	pshm->P[22211]
#define	P_Buffer_Seqdata_Execute_First_Sepa_Mode_Array(i)	pshm->P[(22212+i)%MAX_P]
#define	P_Execute_First_Sepa_Mode_Timer	pshm->P[22242]
#define	P_Execute_First_Sepa_Mode_Tact_Time_Array(i)	pshm->P[(22243+i)%MAX_P]
#define	P_Execute_First_Sepa_Mode_Tact_Time	pshm->P[22263]
#define	P_Execute_1st_Sepa_Status	pshm->P[22264]
#define	P_Suspend_Discharge_Cmd	pshm->P[22265]
#define	P_Suspend_Discharge_Status	pshm->P[22266]
#define	P_Suspend_Discharge_State_Machine	pshm->P[22267]
#define	P_Suspend_Discharge_Seq_Index	pshm->P[22268]
#define	P_Suspend_Discharge_Self_Index	pshm->P[22269]
#define	P_Discharge_Seq_InterLock_Delay_Time(i)	pshm->P[(22270+i)%MAX_P]
#define	P_Discharge_Seq_InterLock_Flag(i)	pshm->P[(22300+i)%MAX_P]
#define	P_Buffer_Seqdata_Discharge_Array(i)	pshm->P[(22330+i)%MAX_P]
#define	P_Suspend_Discharge_Timer	pshm->P[22360]
#define	P_Suspend_Discharge_Tact_Time_Array(i)	pshm->P[(22361+i)%MAX_P]
#define	P_Suspend_Discharge_Tact_Time	pshm->P[22381]
#define	P_Suspend_Discharge_1st_Unloader_JR_Grip	pshm->P[22382]
#define	P_Suspend_ARC_Cmd	pshm->P[22383]
#define	P_Suspend_ARC_Status	pshm->P[22384]
#define	P_Suspend_ARC_State_Machine	pshm->P[22385]
#define	P_Suspend_ARC_Seq_Index	pshm->P[22386]
#define	P_Suspend_ARC_Self_Index	pshm->P[22387]
#define	P_Suspend_ARC_Manual_Occur_Flag	pshm->P[22388]
#define	P_ARC_Seq_InterLock_Delay_Time(i)	pshm->P[(22389+i)%MAX_P]
#define	P_ARC_Seq_InterLock_Flag(i)	pshm->P[(22419+i)%MAX_P]
#define	P_Buffer_Seqdata_ARC_Array(i)	pshm->P[(22449+i)%MAX_P]
#define	P_Suspend_ARC_Timer	pshm->P[22479]
#define	P_Suspend_ARC_Tact_Time_Array(i)	pshm->P[(22480+i)%MAX_P]
#define	P_Suspend_ARC_Tact_Time	pshm->P[22500]
#define	P_Suspend_Anode_1TR_Cell_Supply_Cmd	pshm->P[22501]
#define	P_Suspend_Anode_1TR_Cell_Supply_Status	pshm->P[22502]
#define	P_Suspend_Anode_1TR_Cell_Supply_State_Machine	pshm->P[22503]
#define	P_Suspend_Anode_1TR_Cell_Supply_Seq_Index	pshm->P[22504]
#define	P_Suspend_Anode_1TR_Cell_Supply_Self_Index	pshm->P[22505]
#define	P_Suspend_Anode_1TR_Cell_Supply_Module_Status	pshm->P[22506]
#define	P_Anode_1TR_Cell_Supply_Seq_InterLock_Delay_Time(i)	pshm->P[(22507+i)%MAX_P]
#define	P_Anode_1TR_Cell_Supply_Seq_InterLock_Flag(i)	pshm->P[(22537+i)%MAX_P]
#define	P_Buffer_Seqdata_Anode_1TR_Cell_Supply_Array(i)	pshm->P[(22567+i)%MAX_P]
#define	P_Suspend_Anode_1TR_Cell_Supply_Timer	pshm->P[22597]
#define	P_Suspend_Anode_1TR_Cell_Supply_Tact_Time_Array(i)	pshm->P[(22598+i)%MAX_P]
#define	P_Suspend_Anode_1TR_Cell_Supply_Tact_Time	pshm->P[22618]
#define	P_Hold_Exist_Insp_Cmd	pshm->P[22619]
#define	P_Hold_Exist_Insp_Status	pshm->P[22620]
#define	P_Hold_Exist_Insp_Module_Status	pshm->P[22621]
#define	P_Hold_Exist_Insp_State_Machine	pshm->P[22622]
#define	P_Hold_Exist_Insp_Seq_Index	pshm->P[22623]
#define	P_Hold_Exist_Insp_Self_Index	pshm->P[22624]
#define	P_Hold_Exist_Insp_Debug_Edge	pshm->P[22625]
#define	P_Buffer_Seqdata_Hold_Exist_Insp_Array(i)	pshm->P[(22626+i)%MAX_P]
#define	P_Hold_Exist_Insp_Timer	pshm->P[22656]
#define	P_Hold_Exist_Insp_Tact_Time_Array(i)	pshm->P[(22657+i)%MAX_P]
#define	P_Hold_Exist_Insp_Tact_Time	pshm->P[22677]
#define	P_Hold_Remove_NG_PNP_Cmd	pshm->P[22678]
#define	P_Hold_Remove_NG_PNP_Status	pshm->P[22679]
#define	P_Hold_Remove_NG_PNP_Module_Status	pshm->P[22680]
#define	P_Hold_Remove_NG_PNP_State_Machine	pshm->P[22681]
#define	P_Hold_Remove_NG_PNP_Seq_Index	pshm->P[22682]
#define	P_Hold_Remove_NG_PNP_Self_Index	pshm->P[22683]
#define	P_Hold_Remove_NG_PNP_Debug_Edge	pshm->P[22684]
#define	P_Buffer_Seqdata_Hold_Remove_NG_PNP_Array(i)	pshm->P[(22685+i)%MAX_P]
#define	P_Hold_Remove_NG_PNP_Timer	pshm->P[22715]
#define	P_Hold_Remove_NG_PNP_Tact_Time_Array(i)	pshm->P[(22716+i)%MAX_P]
#define	P_Hold_Remove_NG_PNP_Tact_Time	pshm->P[22736]
#define	P_PLC01_Hold_Remove_NG_PNP_Sub_Flag	pshm->P[22737]
#define	P_PLC01_Hold_Remove_NG_PNP_Sub_State_Machine	pshm->P[22738]
#define	P_PLC01_Hold_Remove_NG_PNP_Sub_Status	pshm->P[22739]
#define	P_Hold_Remove_Align_Cmd	pshm->P[22740]
#define	P_Hold_Remove_Align_Status	pshm->P[22741]
#define	P_Hold_Remove_Align_Module_Status	pshm->P[22742]
#define	P_Hold_Remove_Align_State_Machine	pshm->P[22743]
#define	P_Hold_Remove_Align_Seq_Index	pshm->P[22744]
#define	P_Hold_Remove_Align_Self_Index	pshm->P[22745]
#define	P_Hold_Remove_Align_Debug_Edge	pshm->P[22746]
#define	P_Buffer_Seqdata_Hold_Remove_Align_Array(i)	pshm->P[(22747+i)%MAX_P]
#define	P_Hold_Remove_Align_Timer	pshm->P[22777]
#define	P_Hold_Remove_Align_Tact_Time_Array(i)	pshm->P[(22778+i)%MAX_P]
#define	P_Hold_Remove_Align_Tact_Time	pshm->P[22798]
#define	P_PLC01_Hold_Remove_Align_Sub_Flag	pshm->P[22799]
#define	P_PLC01_Hold_Remove_Align_Sub_State_Machine	pshm->P[22800]
#define	P_PLC01_Hold_Remove_Align_Sub_Status	pshm->P[22801]
#define	P_Hold_Remove_2TR_Cmd	pshm->P[22802]
#define	P_Hold_Remove_2TR_Status	pshm->P[22803]
#define	P_Hold_Remove_2TR_Module_Status	pshm->P[22804]
#define	P_Hold_Remove_2TR_State_Machine	pshm->P[22805]
#define	P_Hold_Remove_2TR_Seq_Index	pshm->P[22806]
#define	P_Hold_Remove_2TR_Self_Index	pshm->P[22807]
#define	P_Hold_Remove_2TR_Debug_Edge	pshm->P[22808]
#define	P_Buffer_Seqdata_Hold_Remove_2TR_Array(i)	pshm->P[(22809+i)%MAX_P]
#define	P_Hold_Remove_2TR_Timer	pshm->P[22839]
#define	P_Hold_Remove_2TR_Tact_Time_Array(i)	pshm->P[(22840+i)%MAX_P]
#define	P_Hold_Remove_2TR_Tact_Time	pshm->P[22860]
#define	P_Hold_Supply_1TR_Cmd	pshm->P[22861]
#define	P_Hold_Supply_1TR_Status	pshm->P[22862]
#define	P_Hold_Supply_1TR_Module_Status	pshm->P[22863]
#define	P_Hold_Supply_1TR_State_Machine	pshm->P[22864]
#define	P_Hold_Supply_1TR_Seq_Index	pshm->P[22865]
#define	P_Hold_Supply_1TR_Self_Index	pshm->P[22866]
#define	P_Hold_Supply_1TR_Debug_Edge	pshm->P[22867]
#define	P_Buffer_Seqdata_Hold_Supply_1TR_Array(i)	pshm->P[(22868+i)%MAX_P]
#define	P_Hold_Supply_1TR_Timer	pshm->P[22898]
#define	P_Hold_Supply_1TR_Tact_Time_Array(i)	pshm->P[(22899+i)%MAX_P]
#define	P_Hold_Supply_1TR_Tact_Time	pshm->P[22919]
#define	P_PLC01_Hold_Supply_1TR_Memory_RTN	pshm->P[22920]
#define	P_PLC01_Hold_Supply_1TR_Judge_Flag	pshm->P[22921]
#define	P_PLC01_Hold_Supply_1TR_Judge_State_Machine	pshm->P[22922]
#define	P_PLC01_Hold_Supply_1TR_Judge_Status	pshm->P[22923]
#define	P_Plate_1TR_Supply_Module_Judge_Bit	pshm->P[22924]
#define	P_Hold_Supply_Align_Cmd	pshm->P[22925]
#define	P_Hold_Supply_Align_Status	pshm->P[22926]
#define	P_Hold_Supply_Align_Module_Status	pshm->P[22927]
#define	P_Hold_Supply_Align_State_Machine	pshm->P[22928]
#define	P_Hold_Supply_Align_Seq_Index	pshm->P[22929]
#define	P_Hold_Supply_Align_Self_Index	pshm->P[22930]
#define	P_Hold_Supply_Align_Debug_Edge	pshm->P[22931]
#define	P_Buffer_Seqdata_Hold_Supply_Align_Array(i)	pshm->P[(22932+i)%MAX_P]
#define	P_Hold_Supply_Align_Timer	pshm->P[22962]
#define	P_Hold_Supply_Align_Tact_Time_Array(i)	pshm->P[(22963+i)%MAX_P]
#define	P_Hold_Supply_Align_Tact_Time	pshm->P[22983]
#define	P_Hold_Supply_2TR_Cmd	pshm->P[22984]
#define	P_Hold_Supply_2TR_Status	pshm->P[22985]
#define	P_Hold_Supply_2TR_Module_Status	pshm->P[22986]
#define	P_Hold_Supply_2TR_State_Machine	pshm->P[22987]
#define	P_Hold_Supply_2TR_Seq_Index	pshm->P[22988]
#define	P_Hold_Supply_2TR_Self_Index	pshm->P[22989]
#define	P_Hold_Supply_2TR_Debug_Edge	pshm->P[22990]
#define	P_Buffer_Seqdata_Hold_Supply_2TR_Array(i)	pshm->P[(22991+i)%MAX_P]
#define	P_Hold_Supply_2TR_Timer	pshm->P[23021]
#define	P_Hold_Supply_2TR_Tact_Time_Array(i)	pshm->P[(23022+i)%MAX_P]
#define	P_Hold_Supply_2TR_Tact_Time	pshm->P[23042]
#define	P_Hold_Semi_Run_Pos_Move_Cmd	pshm->P[23043]
#define	P_Hold_Semi_Run_Pos_Move_Status	pshm->P[23044]
#define	P_Hold_Semi_Run_Pos_Move_Module_Status	pshm->P[23045]
#define	P_Hold_Semi_Run_Pos_Move_State_Machine	pshm->P[23046]
#define	P_Hold_Semi_Run_Pos_Move_Seq_Index	pshm->P[23047]
#define	P_Hold_Semi_Run_Pos_Move_Self_Index	pshm->P[23048]
#define	P_Hold_Semi_Run_Pos_Move_Debug_Edge	pshm->P[23049]
#define	P_Buffer_Seqdata_Hold_Semi_Run_Pos_Move_Array(i)	pshm->P[(23050+i)%MAX_P]
#define	P_Hold_Semi_Run_Pos_Move_Timer	pshm->P[23080]
#define	P_Hold_Semi_Run_Pos_Move_Tact_Time_Array(i)	pshm->P[(23081+i)%MAX_P]
#define	P_Hold_Semi_Run_Pos_Move_Tact_Time	pshm->P[23101]
#define	P_Act_Complete_Bit(i)	pshm->P[(23102+i)%MAX_P]
#define	P_Act_Old_Time(i)	pshm->P[(23168+i)%MAX_P]
#define	P_Act_Delay_Time(i)	pshm->P[(23234+i)%MAX_P]
#define	P_Act_Suspend_Time_Out_Time	pshm->P[23300]
#define	P_Act_Time_Out(i)	pshm->P[(23301+i)%MAX_P]
#define	P_Test_Sungmin_Flag	pshm->P[23367]
#define	P_Discharge_Possibility_Bit(i)	pshm->P[(23368+i)%MAX_P]
#define	P_HOLD_Exist_Possibility_Bit(i)	pshm->P[(23434+i)%MAX_P]
#define	P_HOLD_NG_Remove_Possibility_Bit(i)	pshm->P[(23500+i)%MAX_P]
#define	P_HOLD_Align_Remove_Possibility_Bit(i)	pshm->P[(23566+i)%MAX_P]
#define	P_HOLD_2TR_Remove_Possibility_Bit(i)	pshm->P[(23632+i)%MAX_P]
#define	P_HOLD_1TR_Supply_Possibility_Bit(i)	pshm->P[(23698+i)%MAX_P]
#define	P_HOLD_Align_Supply_Possibility_Bit(i)	pshm->P[(23764+i)%MAX_P]
#define	P_HOLD_2TR_Supply_Possibility_Bit(i)	pshm->P[(23830+i)%MAX_P]
#define	P_HOLD_Semi_Run_Pos_Possibility_Bit(i)	pshm->P[(23896+i)%MAX_P]
#define	P_Module_Act_Command_Array(i)	pshm->P[(23962+i)%MAX_P]
#define	P_OLD_Module_Act_Command_Array(i)	pshm->P[(24028+i)%MAX_P]
#define	P_Module_Act_State_Machine_Array(i)	pshm->P[(24094+i)%MAX_P]
#define	P_Module_Act_State_Machine_Error_Array(i)	pshm->P[(24160+i)%MAX_P]
#define	P_Suspend_Discharge_Module_Status	pshm->P[24226]
#define	P_Suspend_Discharge_To_Execute_Flag	pshm->P[24227]
#define	P_Suspend_Discharge_Complete_Flag	pshm->P[24228]
#define	P_First_Unloader_Stack_Up_Status	pshm->P[24229]
#define	P_First_Unloader_Stack_FWD_Status	pshm->P[24230]
#define	P_First_Unloader_Grip_Cell_Status	pshm->P[24231]
#define	P_First_Unloader_Stack_BWD_Wait_Status	pshm->P[24232]
#define	P_First_Unloader_Stack_BWD_Status	pshm->P[24233]
#define	P_First_Unloader_Stack_Down_Status	pshm->P[24234]
#define	P_First_Unloader_Avoid_Status	pshm->P[24235]
#define	P_First_Unloader_Turn_Status	pshm->P[24236]
#define	P_First_Unloader_Handover_Status	pshm->P[24237]
#define	P_Cathode_Clamp_OFF_Status	pshm->P[24238]
#define	P_Final_Roll_Discharge_Status	pshm->P[24239]
#define	P_Final_Roll_Stack_Pos_Status	pshm->P[24240]
#define	P_Final_Roll_Stack_Up_Pos_Status	pshm->P[24241]
#define	P_Main_Z_Init_Pos_Status	pshm->P[24242]
#define	P_Sheet_Paper_BWD_Status	pshm->P[24243]
#define	P_Discharge_Vision_DIO_RTN	pshm->P[24244]
#define	P_Discharge_Sub_RTN	pshm->P[24245]
#define	P_Discharge_NG_Code_Report_RTN	pshm->P[24246]
#define	P_Individual_RTN	pshm->P[24247]
#define	P_Suspend_Discharge_Last_Run_Bit	pshm->P[24248]
#define	P_Suspend_Discharge_JR_Result_RTN	pshm->P[24249]
#define	P_ARC_Buffer_Jog_Speed	pshm->P[24250]
#define	P_Selected_Spool_Number	pshm->P[24251]
#define	P_ARC_Home_Check_RTN	pshm->P[24252]
#define	P_Suspend_ARC_Module_Status	pshm->P[24253]
#define	P_Not_Selected_Spool_Radius	pshm->P[24254]
#define	P_Not_Selected_Spool_Circumference	pshm->P[24255]
#define	P_Sensor_To_Sepa_Curr_Distance_mm(i)	pshm->P[(24256+i)%MAX_P]
#define	P_Passive_D_One_Degree_AD_Value	pshm->P[24281]
#define	P_After_ARC_Rotate_Distance	pshm->P[24282]
#define	P_Stack_Vision_NG_Code_Time_Over	pshm->P[24283]
#define	P_Suspend_Discharge_Resume_Flag	pshm->P[24284]
#define	P_Suspend_Discharge_Resume_Complete	pshm->P[24285]
#define	P_Suspend_Discharge_Pause_Flag	pshm->P[24286]
#define	P_Suspend_Monitor_(i)	pshm->P[(24287+i)%MAX_P]
#define	P_Flag_Stack_Work_Host_ID	pshm->P[24297]
#define	P_First_Sepa_Stack_Align_OK_PMAC_Flag	pshm->P[24298]
#define	P_Sepa_Run_Completed_Status_Machine	pshm->P[24299]
#define	P_Discharge_Debug_Edge	pshm->P[24300]
#define	P_Suspend_Discharge_Debug_Address(i)	pshm->P[(24301+i)%MAX_P]
#define	P_Suspend_Discharge_Debug_Value(i)	pshm->P[(24306+i)%MAX_P]
#define	P_Discharge_Sepa_Cutter_Time_Out_State_Machine	pshm->P[24311]
#define	P_Old_Suspend_Discharge_Seq_Index	pshm->P[24312]
#define	P_Discharge_Debug_Index_1	pshm->P[24313]
#define	P_Discharge_Debug_Index_2	pshm->P[24314]
#define	P_Discharge_Debug_Index_3	pshm->P[24315]
#define	P_Discharge_Debug_Index_4	pshm->P[24316]
#define	P_ARC_Debug_Edge	pshm->P[24317]
#define	P_Suspend_ARC_Debug_Address(i)	pshm->P[(24318+i)%MAX_P]
#define	P_Suspend_ARC_Debug_Value(i)	pshm->P[(24323+i)%MAX_P]
#define	P_Old_Suspend_ARC_Seq_Index	pshm->P[24328]
#define	P_ARC_Debug_Index_1	pshm->P[24329]
#define	P_ARC_Debug_Index_2	pshm->P[24330]
#define	P_ARC_Debug_Index_3	pshm->P[24331]
#define	P_ARC_Debug_Index_4	pshm->P[24332]
#define	P_ARC_Ready_Flag(i)	pshm->P[(24333+i)%MAX_P]
#define	P_Suspend_Cutter_Heating_Time	pshm->P[24335]
#define	P_Suspend_Cutter_Heating_Timer	pshm->P[24336]
#define	P_An_1TR_Supply_Debug_Edge	pshm->P[24337]
#define	P_Suspend_An_1TR_Supply_Debug_Address(i)	pshm->P[(24338+i)%MAX_P]
#define	P_Suspend_An_1TR_Supply_Debug_Value(i)	pshm->P[(24343+i)%MAX_P]
#define	P_Old_Suspend_An_1TR_Supply_Seq_Index	pshm->P[24348]
#define	P_An_1TR_Supply_Debug_Index_1	pshm->P[24349]
#define	P_An_1TR_Supply_Debug_Index_2	pshm->P[24350]
#define	P_An_1TR_Supply_Debug_Index_3	pshm->P[24351]
#define	P_An_1TR_Supply_Debug_Index_4	pshm->P[24352]
#define	P_Suspend_Supply_Index	pshm->P[24353]
#define	P_Suspend_Supply_Index_2nd	pshm->P[24354]
#define	P_Anode_Suspend_Supply_Complete(i)	pshm->P[(24355+i)%MAX_P]
#define	P_Suspend_Supply_Pause_Flag	pshm->P[24363]
#define	P_Suspend_Supply_Resume_Flag	pshm->P[24364]
#define	P_Supply_Module_Status	pshm->P[24365]
#define	P_Suspend_Anode_1TR_Supply_Complete_Flag	pshm->P[24366]
#define	P_Suspend_Discharge_Module_Error	pshm->P[24367]
#define	P_Suspend_ARC_Module_Error	pshm->P[24368]
#define	P_Suspend_1st_Supply_Error	pshm->P[24369]
#define	P_Discharge_Seq_Data	pshm->P[24370]
#define	P_Suspend_Discharging_Popup_Flag	pshm->P[24371]
#define	P_Suspend_Discharge_FR_Unclamp_Error_Popup_Flag	pshm->P[24372]
#define	P_Suspend_Discharge_Cathode_Align_Retry_Cal_Error_Popup_Flag	pshm->P[24373]
#define	P_Suspend_Discharge_Anode_Align_Retry_Cal_Error_Popup_Flag	pshm->P[24374]
#define	P_Suspend_Discharge_FR_Discharge_Pos_Error_Popup_Flag	pshm->P[24375]
#define	P_Suspend_Discharge_1st_Unloader_Grip_OFF_Error_Popup_Flag	pshm->P[24376]
#define	P_Suspend_Discharge_1st_Unloader_Up_Error_Popup_Flag	pshm->P[24377]
#define	P_Suspend_Discharge_1st_Unloader_FWD_Error_Popup_Flag	pshm->P[24378]
#define	P_Suspend_Discharge_FR_Clamp_Error_Popup_Flag	pshm->P[24379]
#define	P_Suspend_Discharge_Sepa_Cutter_Heating_Error_Popup_Flag	pshm->P[24380]
#define	P_Suspend_Discharge_1st_Unloader_Grip_Cell_Pos_Error_Popup_Flag	pshm->P[24381]
#define	P_Suspend_Discharge_1st_Unloader_Grip_ON_Error_Popup_Flag	pshm->P[24382]
#define	P_Suspend_Discharge_Sheet_Paper_BWD_Error_Popup_Flag	pshm->P[24383]
#define	P_Suspend_Discharge_Cathode_Clamp_OFF_Error_Popup_Flag	pshm->P[24384]
#define	P_Suspend_Discharge_Sepa_Cutter_FWD_Error_Popup_Flag	pshm->P[24385]
#define	P_Suspend_Discharge_Sheet_Paper_Vacuum_ON_Error_Popup_Flag	pshm->P[24386]
#define	P_Suspend_Discharge_Sepa_Cutter_BWD_Error_Popup_Flag	pshm->P[24387]
#define	P_Suspend_Discharge_1st_Unloader_BWD_Wait_Pos_Error_Popup_Flag	pshm->P[24388]
#define	P_Suspend_Discharge_1st_Unloader_BWD_Error_Popup_Flag	pshm->P[24389]
#define	P_Suspend_Discharge_1st_Unloader_Stack_Down_Error_Popup_Flag	pshm->P[24390]
#define	P_Suspend_Discharge_FR_Stack_Pos_Error_Popup_Flag	pshm->P[24391]
#define	P_Suspend_Discharge_After_Action_Init_Error_Popup_Flag	pshm->P[24392]
#define	P_Suspend_Discharge_1st_Unloader_Avoid_Pos_Error_Popup_Flag	pshm->P[24393]
#define	P_Suspend_Discharge_1st_2nd_Unloader_Handover_Chk_Error_Popup_Flag	pshm->P[24394]
#define	P_Suspend_Discharge_1st_Unloader_Handover_Pos_Error_Popup_Flag	pshm->P[24395]
#define	P_Suspend_Discharge_2nd_3rd_Unloader_Grip_Request_Error_Popup_Flag	pshm->P[24396]
#define	P_Suspend_Discharge_1st_Unloader_Wait_Pos_Error_Popup_Flag	pshm->P[24397]
#define	P_Suspend_ARC_Manual_ARC_Active_Popup_Flag	pshm->P[24398]
#define	P_Suspend_ARC_Auto_ARC_Active_Popup_Flag	pshm->P[24399]
#define	P_Suspend_ARC_Pre_Act_Popup_Flag	pshm->P[24400]
#define	P_Suspend_ARC_Dancer_Close_Popup_Flag	pshm->P[24401]
#define	P_Suspend_ARC_Use_Plate_FWD_Popup_Flag	pshm->P[24402]
#define	P_Suspend_ARC_Replace_Plate_Blow_ON_Popup_Flag	pshm->P[24403]
#define	P_Suspend_ARC_Use_Plate_Clamp_Popup_Flag	pshm->P[24404]
#define	P_Suspend_ARC_Use_Plate_Cutter_FWD_Popup_Flag	pshm->P[24405]
#define	P_Suspend_ARC_Use_Plate_Cutter_BWD_Popup_Flag	pshm->P[24406]
#define	P_Suspend_ARC_Use_Plate_Unclamp_Popup_Flag	pshm->P[24407]
#define	P_Suspend_ARC_Use_Plate_BWD_Popup_Flag	pshm->P[24408]
#define	P_Suspend_ARC_Replace_Plate_Blow_OFF_Popup_Flag	pshm->P[24409]
#define	P_Suspend_ARC_Dancer_Open_Popup_Flag	pshm->P[24410]
#define	P_Suspend_ARC_Spool_Change_Popup_Flag	pshm->P[24411]
#define	P_Suspend_ARC_Post_Act_Popup_Flag	pshm->P[24412]
#define	P_Suspend_ARC_Previous_Spool_Remain_Winding_Popup_Flag	pshm->P[24413]
#define	P_Suspend_Discharge_First_Address	pshm->P[24414]
#define	P_Suspend_ARC_First_Address	pshm->P[24415]
#define	P_Status_Stop_Ready_Pos_Move	pshm->P[24416]
#define	P_Cycle_Stop_Stauts	pshm->P[24417]
#define	P_Cycle_Stop_Status_Machine	pshm->P[24418]
#define	P_Cycle_Stop_Flag	pshm->P[24419]
#define	P_Speed_Origin_rtn	pshm->P[24420]
#define	P_Speed_rtn	pshm->P[24421]
#define	P_NG_PNP_Z_Move_rtn	pshm->P[24422]
#define	P_NG_PNP_Z_Move_Check_rtn	pshm->P[24423]
#define	P_NG_PNP_T_Move_rtn	pshm->P[24424]
#define	P_NG_PNP_T_Move_Check_rtn	pshm->P[24425]
#define	P_2nd_Z_Move_rtn	pshm->P[24426]
#define	P_2nd_Z_Move_Check_rtn	pshm->P[24427]
#define	P_2nd_T_Move_rtn	pshm->P[24428]
#define	P_2nd_T_Move_Check_rtn	pshm->P[24429]
#define	P_Stack_Judgement_Memory	pshm->P[24430]
#define	P_Stop_Cycle_Stop_Move_Status	pshm->P[24431]
#define	P_STOP_Initial_Process_Status	pshm->P[24432]
#define	P_Stopping_CycleStop_Init_Flag	pshm->P[24433]
#define	P_Sepa_Timing	pshm->P[24434]
#define	P_Old_Trigger_PLC0	pshm->P[24435]
#define	P_Mode_Command	pshm->P[24436]
#define	P_Current_Mode	pshm->P[24437]
#define	P_MOde_Num(i)	pshm->P[(24438+i)%MAX_P]
#define	P_Command_Depth(i)	pshm->P[(24443+i)%MAX_P]
#define	P_In_Position(i)	pshm->P[(24448+i)%MAX_P]
#define	P_Last_Cycle_Command(i)	pshm->P[(24453+i)%MAX_P]
#define	P_Mode_Command_Buffer	pshm->P[24458]
#define	P_Mode_Command_Wait_Count	pshm->P[24459]
#define	P_Old_Mode_Command	pshm->P[24460]
#define	P_Slave1_Anode_Run_Motion_Array(i)	pshm->P[(24461+i)%MAX_P]
#define	P_Slave2_Anode_Run_Motion_Array(i)	pshm->P[(24561+i)%MAX_P]
#define	P_Slave3_Anode_Run_Motion_Array(i)	pshm->P[(24661+i)%MAX_P]
#define	P_Slave4_Anode_Run_Motion_Array(i)	pshm->P[(24761+i)%MAX_P]
#define	P_Slave5_Anode_Run_Motion_Array(i)	pshm->P[(24861+i)%MAX_P]
#define	P_Slave6_Anode_Run_Motion_Array(i)	pshm->P[(24961+i)%MAX_P]
#define	P_Slave7_Anode_Run_Motion_Array(i)	pshm->P[(25061+i)%MAX_P]
#define	P_Slave8_Anode_Run_Motion_Array(i)	pshm->P[(25161+i)%MAX_P]
#define	P_Slave9_Anode_Run_Motion_Array(i)	pshm->P[(25261+i)%MAX_P]
#define	P_Slave10_Anode_Run_Motion_Array(i)	pshm->P[(25361+i)%MAX_P]
#define	P_Slave15_Anode_Run_Motion_Array(i)	pshm->P[(25461+i)%MAX_P]
#define	P_Slave16_Anode_Run_Motion_Array(i)	pshm->P[(25561+i)%MAX_P]
#define	P_Slave17_Anode_Run_Motion_Array(i)	pshm->P[(25661+i)%MAX_P]
#define	P_Slave18_Anode_Run_Motion_Array(i)	pshm->P[(25761+i)%MAX_P]
#define	P_Slave19_Anode_Run_Motion_Array(i)	pshm->P[(25861+i)%MAX_P]
#define	P_Slave1_Cathode_Run_Motion_Array(i)	pshm->P[(25961+i)%MAX_P]
#define	P_Slave2_Cathode_Run_Motion_Array(i)	pshm->P[(26061+i)%MAX_P]
#define	P_Slave3_Cathode_Run_Motion_Array(i)	pshm->P[(26161+i)%MAX_P]
#define	P_Slave4_Cathode_Run_Motion_Array(i)	pshm->P[(26261+i)%MAX_P]
#define	P_Slave5_Cathode_Run_Motion_Array(i)	pshm->P[(26361+i)%MAX_P]
#define	P_Slave15_Cathode_Run_Motion_Array(i)	pshm->P[(26461+i)%MAX_P]
#define	P_Slave6_Cathode_Run_Motion_Array(i)	pshm->P[(26561+i)%MAX_P]
#define	P_Slave7_Cathode_Run_Motion_Array(i)	pshm->P[(26661+i)%MAX_P]
#define	P_Slave8_Cathode_Run_Motion_Array(i)	pshm->P[(26761+i)%MAX_P]
#define	P_Slave9_Cathode_Run_Motion_Array(i)	pshm->P[(26861+i)%MAX_P]
#define	P_Slave10_Cathode_Run_Motion_Array(i)	pshm->P[(26961+i)%MAX_P]
#define	P_Slave16_Cathode_Run_Motion_Array(i)	pshm->P[(27061+i)%MAX_P]
#define	P_Slave17_Cathode_Run_Motion_Array(i)	pshm->P[(27161+i)%MAX_P]
#define	P_Slave18_Cathode_Run_Motion_Array(i)	pshm->P[(27261+i)%MAX_P]
#define	P_Slave19_Cathode_Run_Motion_Array(i)	pshm->P[(27361+i)%MAX_P]
#define	P_Anode_NG_Unit_Status	pshm->P[27461]
#define	P_Cathode_NG_Unit_Status	pshm->P[27462]
#define	P_ParsingRtn	pshm->P[27463]
#define	P_CurPosData	pshm->P[27464]
#define	P_Hold_MNTR_Supply_1st	pshm->P[27465]
#define	P_TimeOutNumb	pshm->P[27466]
#define	P_PosRtn	pshm->P[27467]
#define	P_MotionRtn	pshm->P[27468]
#define	P_CmdData	pshm->P[27469]
#define	P_Interval	pshm->P[27470]
#define	P_Cont_Ret	pshm->P[27471]
#define	P_Cur_Idx	pshm->P[27472]
#define	P_NextID	pshm->P[27473]
#define	P_Cur_Size	pshm->P[27474]
#define	P_Hold_Exist_Insp	pshm->P[27475]
#define	P_Hold_Remove_NG_PNP	pshm->P[27476]
#define	P_Hold_Remove_Align	pshm->P[27477]
#define	P_Hold_Remove_2TR	pshm->P[27478]
#define	P_Hold_Supply_1TR	pshm->P[27479]
#define	P_Hold_Supply_Align	pshm->P[27480]
#define	P_Hold_Supply_2TR	pshm->P[27481]
#define	P_Hold_Semi_Run	pshm->P[27482]
#define	P_Hold_NG_PNP_Remove	pshm->P[180]
#define	P_Hold_Remove_2nd	pshm->P[182]
#define	P_Hold_Supply_1st	pshm->P[183]
#define	P_Hold_Supply_2nd	pshm->P[185]
#define	P_Hold_Data_process	pshm->P[186]
#define	P_Hold_Semi_Run_Enable_Pos	pshm->P[187]
#define	P_Hold_Existence_Insp	pshm->P[188]
#define	P_Hold_1st_Belt_Move	pshm->P[189]
#define	P_Hold_Motion	pshm->P[190]
#define	P_Hold_Data_process_State_Machine	pshm->P[27483]
#define	P_Hold_Align_Remove_State_Machine	pshm->P[27484]
#define	P_Hold_2nd_Remove_State_Machine	pshm->P[27485]
#define	P_Hold_Supply_1st_State_Machine	pshm->P[27486]
#define	P_Hold_Supply_2nd_State_Machine	pshm->P[27487]
#define	P_Hold_Existence_Insp_State_Machine	pshm->P[27488]
#define	P_Hold_NG_PNP_Remove_State_Machine	pshm->P[27489]
#define	P_Hold_Data_Process_Complete	pshm->P[27490]
#define	P_Hold_Semi_Run_Enable_Pos_State_Machine	pshm->P[27491]
#define	P_HOLD_Existence_Insp_Queue_State_Machine	pshm->P[27492]
#define	P_Hold_Stop_Existence_Insp_STEP	pshm->P[27493]
#define	P_SubMaster_Status_Err	pshm->P[27494]
#define	P_Data_Process_Rtn	pshm->P[27495]
#define	P_Hold_Set_Trigger	pshm->P[27496]
#define	P_Hold_Get_Trigger	pshm->P[27497]
#define	P_Anode_2nd_Data	pshm->P[27498]
#define	P_Anode_Align_Data	pshm->P[27499]
#define	P_Hold_Remove_Step	pshm->P[27500]
#define	P_HList_Head_Idx	pshm->P[27501]
#define	P_Hold_Next_ID	pshm->P[27502]
#define	P_HCmd_List(i)	pshm->P[(27503+i)%MAX_P]
#define	P_Hold_Data_Value	pshm->P[27523]
#define	P_Comb_Bitwise	pshm->P[27524]
#define	P_Target_Cmd	pshm->P[27525]
#define	P_Temp_Bit	pshm->P[27526]
#define	P_Get_ErrorCode	pshm->P[27527]
#define	P_Rtn_Code	pshm->P[27528]
#define	P_Complete_Hold_Bit	pshm->P[27529]
#define	P_HoldMtion_Flag	pshm->P[27530]
#define	P_Ret_BitWise	pshm->P[27531]
#define	P_NotEnough_GetSpace	pshm->P[27532]
#define	P_NotEnough_SetSpace	pshm->P[27533]
#define	P_Check_SetSpace	pshm->P[27534]
#define	P_Hold_Get_Data	pshm->P[27535]
#define	P_Err_NextID_Flag	pshm->P[27536]
#define	P_Elec_Bit	pshm->P[27537]
#define	P_MotionData	pshm->P[27538]
#define	P_DataList(i)	pshm->P[(27539+i)%MAX_P]
#define	P_Hold_Data_Err(i)	pshm->P[(27544+i)%MAX_P]
#define	P_Cur_PosX1	pshm->P[27554]
#define	P_Cur_PosZ1	pshm->P[27555]
#define	P_Cur_PosX2	pshm->P[27556]
#define	P_Cur_PosZ2	pshm->P[27557]
#define	P_Dest_PosX	pshm->P[27558]
#define	P_Dest_PosZ	pshm->P[27559]
#define	P_FailToParse	pshm->P[27560]
#define	P_CurTrigger	pshm->P[27561]
#define	P_TimeOutTrigger	pshm->P[27562]
#define	P_CalcTime	pshm->P[27563]
#define	P_Cycle_Count	pshm->P[27564]
#define	P_MotionTimeOutFlag	pshm->P[27565]
#define	P_Set_Data	pshm->P[27566]
#define	P_Rtn	pshm->P[27567]
#define	P_CurPosTestBit	pshm->P[27568]
#define	P_Hold_Anode_Pause_CHK	pshm->P[27569]
#define	P_Hold_Cathode_Pause_CHK	pshm->P[27570]
#define	P_Surface_Complete_To_Hold	pshm->P[27571]
#define	P_Hold_Motion_Arr(i)	pshm->P[(27572+i)%MAX_P]
#define	P_Hold_Pause_Trg	pshm->P[27592]
#define	P_From_Staring_Flag	pshm->P[27593]
#define	P_Hold_Existence_Insp_Enqueue_Flag	pshm->P[27594]
#define	P_Hold_Rtn	pshm->P[27595]
#define	P_Debug_Existence_Insp_STEP	pshm->P[27596]
#define	P_Hold_Align_Sheet_CHK	pshm->P[27597]
#define	P_Hold_Cathode_Exception_Empty_Flag	pshm->P[27598]
#define	P_Hold_Anode_Exception_Empty_Flag	pshm->P[27599]
#define	P_HOLD_Hold_Process_State_Machine	pshm->P[27600]
#define	P_Hold_Stop_Sheet_Process_STEP	pshm->P[27601]
#define	P_Hold_Debug_Sheet_Process_STEP	pshm->P[27602]
#define	P_Hold_Stop_Point	pshm->P[27603]
#define	P_Hold_CHK	pshm->P[27604]
#define	P_Hold_Test	pshm->P[27605]
#define	P_Anode_1st_Motion_Complete	pshm->P[27606]
#define	P_Anode_2nd_Motion_Complete	pshm->P[27607]
#define	P_Anode_NG_PNP_Motion_Complete	pshm->P[27608]
#define	P_Cathode_1st_Motion_Complete	pshm->P[27609]
#define	P_Cathode_2nd_Motion_Complete	pshm->P[27610]
#define	P_Cathode_NG_PNP_Motion_Complete	pshm->P[27611]
#define	P_Anode_1st_Picker_Motion_Complete	pshm->P[27612]
#define	P_Cathode_1st_Picker_Motion_Complete	pshm->P[27613]
#define	P_individual_return	pshm->P[27614]
#define	P_individual_return2	pshm->P[27615]
#define	P_HoldCurPosBit1	pshm->P[27616]
#define	P_HoldCurPosBit2	pshm->P[27617]
#define	P_Parsing_Status	pshm->P[27618]
#define	P_Sel_Obj	pshm->P[27619]
#define	P_Sel_Elec	pshm->P[27620]
#define	P_Error	pshm->P[27621]
#define	P_Vision_FirstSepa_Complete	pshm->P[27622]
#define	P_NG_PNP_Turn_TM	pshm->P[27623]
#define	P_NG_PNP_Turn_TS	pshm->P[27624]
#define	P_NG_PNP_Turn_TA	pshm->P[27625]
#define	P_NG_PNP_Up_TM	pshm->P[27626]
#define	P_NG_PNP_Up_TS	pshm->P[27627]
#define	P_NG_PNP_Up_TA	pshm->P[27628]
#define	P_NG_PNP_Down_TM	pshm->P[27629]
#define	P_NG_PNP_Down_TS	pshm->P[27630]
#define	P_NG_PNP_Down_TA	pshm->P[27631]
#define	P_NG_PNP_Vac_Time	pshm->P[27632]
#define	P_NG_PNP_Blow_Time	pshm->P[27633]
#define	P_Slow_NG_Mode_Btn	pshm->P[27634]
#define	P_HOLD_Memory_Tower_Offset	pshm->P[27635]
#define	P_Hold_Pause_Use	pshm->P[27636]
#define	P_Hold_Err_MNTR(i)	pshm->P[(27637+i)%MAX_P]
#define	P_Hold_Err_Data_Save(i)	pshm->P[(27641+i)%MAX_P]
#define	P_Hold_Err_Action_Data_Save(i)	pshm->P[(27649+i)%MAX_P]
#define	P_Hold_Motion_Err_Chk	pshm->P[27657]
#define	P_Hold_Memory_Tower_Err_Pos(i)	pshm->P[(27658+i)%MAX_P]
#define	P_Hold_Motion_TimeOut	pshm->P[27673]
#define	P_Hold_Data_OK	pshm->P[27674]
#define	P_VISION_TRG_PLC4_AnodeSurface_Ins_Shoot	pshm->P[27675]
#define	P_VISION_TRG_PLC4_CathodeSurface_Ins_Shoot	pshm->P[27676]
#define	P_Memory_Tower_Test	pshm->P[27677]
#define	P_Temp_Run_Mode	pshm->P[27678]
#define	P_Data_Idx	pshm->P[27679]
#define	P_Get_Data_Idx	pshm->P[27680]
#define	P_HOLD_Data_Err_Queue	pshm->P[27681]
#define	P_HOLD_Data_Err_State_Machine	pshm->P[27682]
#define	P_HOLD_Err_Set_Data	pshm->P[27683]
#define	P_HOLD_Err_Save	pshm->P[27684]
#define	P_Sepa_Run_Completed_Flag	pshm->P[27685]
#define	P_Buffer_Seqdata_MSA_Array(i)	pshm->P[(27686+i)%MAX_P]
#define	P_Buffer_Seqdata_Align_Take_Off_Array(i)	pshm->P[(27736+i)%MAX_P]
#define	P_VISION_MSA_Align_Module_Complete_Bit(i)	pshm->P[(27786+i)%MAX_P]
#define	P_Module_Manual_MSA_Act_Command_Array(i)	pshm->P[(27886+i)%MAX_P]
#define	P_OLD_Module_Manual_MSA_Act_Command_Array(i)	pshm->P[(27986+i)%MAX_P]
#define	P_Module_MSA_Act_State_Machine_Array(i)	pshm->P[(28086+i)%MAX_P]
#define	P_VISION_MSA_Seq_Stopping_Point(i)	pshm->P[(28186+i)%MAX_P]
#define	P_Align_Take_Off_Module_Complete_Bit(i)	pshm->P[(28219+i)%MAX_P]
#define	P_Module_Manual_Align_Take_Off_Act_Command_Array(i)	pshm->P[(28319+i)%MAX_P]
#define	P_OLD_Module_Manual_Align_Take_Off_Act_Command_Array(i)	pshm->P[(28419+i)%MAX_P]
#define	P_Module_Align_Take_Off_Act_State_Machine_Array(i)	pshm->P[(28519+i)%MAX_P]
#define	P_Log_Data_Y	pshm->P[28619]
#define	P_Log_Data_M	pshm->P[28620]
#define	P_Log_Data_D	pshm->P[28621]
#define	P_Log_Data_H	pshm->P[28622]
#define	P_Log_Data_m	pshm->P[28623]
#define	P_Log_Data_s	pshm->P[28624]
#define	P_MNTR_End_Index	pshm->P[28625]
#define	P_BG_CPLC_Running_MNTR	pshm->P[50]
#define	P_RTI_CPLC_Running_MNTR	pshm->P[51]
#define	P_Log_Start_Flag	pshm->P[170]
#define	P_Log_Document_Remove_Flag	pshm->P[171]
#define	P_Sepa_ID_Change_Flag	pshm->P[172]
#define	P_USB_Register	pshm->P[173]
#define	P_Cur_Line_Check	pshm->P[175]
#define	P_Cur_Line_Check_Init	pshm->P[176]
#define	P_Buffer_Judge_Trg(i)	pshm->P[(28626+i)%MAX_P]
#define	P_Hold_Pass	pshm->P[28636]
#define	P_PLC01_Queue_MNTR(i)	pshm->P[(28637+i)%MAX_P]
#define	P_PLC01_Total_Step_Flag	pshm->P[28652]
#define	P_PLC02_Total_Step_Flag	pshm->P[28653]
#define	P_PLC014_Total_Step_Flag	pshm->P[28654]
#define	P_PLC02_Total_Step_Flag2	pshm->P[28655]
#define	P_Vac_Pass	pshm->P[28656]
#define	P_Vision_Pass_Exisitence	pshm->P[28657]
#define	P_Vision_Pass_Empty	pshm->P[28658]
#define	P_Vision_Pass_FirstSepa	pshm->P[28659]
#define	P_Vision_Pass_Stack_Inspection	pshm->P[28660]
#define	P_ULD_Home_Pass	pshm->P[28661]
#define	P_Clamp_Cell_Down_Use	pshm->P[28662]
#define	P_FR_Clamp_Use_Test	pshm->P[28663]
#define	P_Door_Interlock_Use_Flag	pshm->P[28664]
#define	P_PLC01_Exe_Is_Ena_Step_Flag(i)	pshm->P[(28665+i)%MAX_P]
#define	P_PLC01_Exe_Fist_Sepa_Step_Flag(i)	pshm->P[(28675+i)%MAX_P]
#define	P_PLC01_Exe_Prod_Step_Flag(i)	pshm->P[(28685+i)%MAX_P]
#define	P_PLC01_HOLD_Insp_Step_Flag(i)	pshm->P[(28690+i)%MAX_P]
#define	P_PLC01_HOLD_Main_Step_Flag(i)	pshm->P[(28700+i)%MAX_P]
#define	P_PLC01_Sus_Discharge_Step_Flag(i)	pshm->P[(28715+i)%MAX_P]
#define	P_PLC01_Sus_ARC_Step_Flag(i)	pshm->P[(28725+i)%MAX_P]
#define	P_PLC01_STOP_Init_Step_Flag(i)	pshm->P[(28735+i)%MAX_P]
#define	P_PLC01_STOP_Cycle_ST_Step_Flag(i)	pshm->P[(28745+i)%MAX_P]
#define	P_PLC02_Exe_Module_First_Sepa_Step_Flag	pshm->P[28760]
#define	P_PLC02_Sus_Module_Discharge_Step_Flag	pshm->P[28761]
#define	P_PLC02_Sus_Module_ARC_Step_Flag	pshm->P[28762]
#define	P_PLC02_Sus_Module_1TR_Supply_Step_Flag	pshm->P[28763]
#define	P_PLC02_HOLD_Module_Insp_Step_Flag	pshm->P[28764]
#define	P_PLC02_HOLD_Module_Remove_NGPNP_Step_Flag	pshm->P[28765]
#define	P_PLC02_HOLD_Module_Remove_Align_Step_Flag	pshm->P[28766]
#define	P_PLC02_HOLD_Module_Remove_2TR_Step_Flag	pshm->P[28767]
#define	P_PLC02_HOLD_Module_Supply_1TR_Step_Flag	pshm->P[28768]
#define	P_PLC02_HOLD_Module_Supply_Align_Step_Flag	pshm->P[28769]
#define	P_PLC02_HOLD_Module_Supply_2TR_Step_Flag	pshm->P[28770]
#define	P_PLC02_HOLD_Module_SemiRun_Pos_Step_Flag	pshm->P[28771]
#define	P_PLC14_STOP_Module_Cycle_Stop_Step_Flag	pshm->P[28772]
#define	P_PLC02_Discharge_MNTR	pshm->P[28773]
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
#define	P_Error_Index_Number	pshm->P[28774]
#define	P_ECAT_MNTR_Bit	pshm->P[28775]
#define	P_Local_MNTR_Bit	pshm->P[28776]
#define	P_Clamp_Motion_VER1	pshm->P[28777]
#define	P_CA_DR_Ta	pshm->P[28778]
#define	P_CA_DR_Ts	pshm->P[28779]
#define	P_CA_DR_Tm	pshm->P[28780]
#define	P_CA_DR_Td	pshm->P[28781]
#define	P_CA_DR_Tsd	pshm->P[28782]
#define	P_AN_DR_Ta	pshm->P[28783]
#define	P_AN_DR_Ts	pshm->P[28784]
#define	P_AN_DR_Tm	pshm->P[28785]
#define	P_AN_DR_Td	pshm->P[28786]
#define	P_AN_DR_Tsd	pshm->P[28787]
#define	P_First_Sepa_1st_Driving_Move	pshm->P[28788]
#define	P_AN_Cam_Total_Time	pshm->P[28789]
#define	P_CA_Cam_Total_Time	pshm->P[28790]
#define	P_Dry_Run_BTN	pshm->P[28791]
#define	P_Home_Angle_Offset_change_Bit	pshm->P[28792]
#define	P_Z_Var	pshm->P[28793]
#define	P_No1_Recipe_Pos_IL(i)	pshm->P[(28794+i)%MAX_P]
#define	P_No2_Recipe_Pos_IL(i)	pshm->P[(28847+i)%MAX_P]
#define	P_No3_Recipe_Pos_IL(i)	pshm->P[(28900+i)%MAX_P]
#define	P_No4_Recipe_Pos_IL(i)	pshm->P[(28953+i)%MAX_P]
#define	P_No5_Recipe_Pos_IL(i)	pshm->P[(29006+i)%MAX_P]
#define	P_No6_Recipe_Pos_IL(i)	pshm->P[(29059+i)%MAX_P]
#define	P_No7_Recipe_Pos_IL(i)	pshm->P[(29112+i)%MAX_P]
#define	P_No8_Recipe_Pos_IL(i)	pshm->P[(29165+i)%MAX_P]
#define	P_No9_Recipe_Pos_IL(i)	pshm->P[(29218+i)%MAX_P]
#define	P_No10_Recipe_Pos_IL(i)	pshm->P[(29271+i)%MAX_P]
#define	P_Recipe_POS_Interock_M(i)	pshm->P[(29324+i)%MAX_P]
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
,P_Sepa_Test=8356
,P_Cur_Equip_No=8357
,M_X_ARC_NP_Plate_Select=2050
,P_Status_PMAC_Alarm_Reset=5387
,P_Driving_Circumference=8408
,P_PLC06_Spool_Circumference=8409
,P_Upper_Spool_Circumference=8410
,P_Lower_Spool_Circumference=8411
,P_CamTable_MAX_EA=8412
,P_Cam_Move_Distanse=8413
,P_Sepa_Driving_Diameter=8414
,P_PI=8415
,Sys_Kill_Manual_BG_C=7777
,P_Max_Try_Reconnect_MC=8416
,P_Cur_Try_Reconnect_MC=8417
,P_Modbus_Connected_Flag=8418
,P_Write_Modbus_HeartBeat=1500
,P_BTN_Sepa_Stack_Mode=8519
,P_BTN_Dryrun_Mode=8520
,P_X_Btn_Align_Table_Take_Off=8521
,P_Align_Table_Take_Off_Flag=8522
,P_Flag_AT_Take_Off_Home_Chk_Flag=8523
,P_Align_Table_Take_Off_State_Machine=8524
,P_Align_Table_Take_Off_Status=8525
,P_AT_Take_Off_Jog_Speed=8526
,P_2nd_Transfer_AT_Take_Off_Pos=8527
,P_VISION_Initial_Pos_Cmd=8528
,P_VISION_Cal_Pos_Cmd=8529
,P_FR_Anode_Dritection_Pos_Cmd=8530
,P_FR_Cahode_Dritection_Pos_Cmd=8531
,P_Anode_AT_Resolution_Cal_Pos_Cmd=8532
,P_Cathode_AT_Resolution_Cal_Pos_Cmd=8533
,P_Vision_Initial_Pos_Status_Machine=8534
,P_Vision_Cal_Pos_Status_Machine=8535
,P_FR_Anode_Dritection_Pos_Status_Machine=8536
,P_FR_Cahode_Dritection_Pos_Status_Machine=8537
,P_Anode_AT_Resolution_Cal_Pos_Status_Machine=8538
,P_Cathode_AT_Resolution_Cal_Pos_Status_Machine=8539
,P_Status_Vision_Initial_Pos=8540
,P_Status_Vision_Cal_Pos=8541
,P_Status_FR_Anode_Dritection_Pos=8542
,P_Status_FR_Cahode_Dritection_Pos=8543
,P_Status_An_AT_Resolution_Cal_Pos=8544
,P_Status_Ca_AT_Resolution_Cal_Pos=8545
,P_CMD_Cleaning_Pos=8546
,P_Cleaning_Pos_Status_Machine=8547
,P_Status_Cleaning_Pos=8548
,P_Push_Manual_ARC_Button=8549
,P_Push_Cycle_Stop_Button=8550
,P_BTN_Push_Cathode_MSA_Mode=8551
,P_BTN_Push_Anode_MSA_Mode=8552
,P_BTN_Push_Cathode_Align_MSA=8553
,P_BTN_Push_Anode_Align_MSA=8554
,P_Btn_Vision_Initial_Pos=8555
,P_Btn_Vision_Cal_Pos=8556
,P_Btn_Vision_Cal_Anode_Move=8557
,P_Btn_Vision_Cal_Cathode_Move=8558
,P_Btn_An_AT_Resolution_Cal_Pos=8559
,P_Btn_Ca_AT_Resolution_Cal_Pos=8560
,P_Btn_Cleaning_Mode_Pos=8561
,P_AutoVisionCal_StMachine=8570
,P_CMD_Cathode_Align_Complete=8571
,P_CMD_Anode_Align_Complete=8572
,P_Cal_Ready_Pos_Move_TR_Z_Jog_Speed=8585
,P_Cal_Ready_Pos_Move_TR_X_Jog_Speed=8586
,P_Anode_Clamp_Z1_Initial_Pos_mm=8617
,P_Anode_Clamp_Z2_Initial_Pos_mm=8618
,P_Cathode_Clamp_Z1_Initial_Pos_mm=8619
,P_Cathode_Clamp_Z2_Initial_Pos_mm=8620
,P_Stack_Table_Z_Initial_Pos_mm=8621
,P_FR_Initial_Pos_mm=8622
,P_Anode_Clamp_Z1_Cal_Pos_mm=8623
,P_Anode_Clamp_Z2_Cal_Pos_mm=8624
,P_Cathode_Clamp_Z1_Cal_Pos_mm=8625
,P_Cathode_Clamp_Z2_Cal_Pos_mm=8626
,P_Stack_Table_Z_Cal_Pos_mm=8627
,P_FR_Cal_Pos_mm=8628
,P_Anode_Clamp_Z1_Move_Speed=8629
,P_Anode_Clamp_Z2_Move_Speed=8630
,P_Cathode_Clamp_Z1_Move_Speed=8631
,P_Cathode_Clamp_Z2_Move_Speed=8632
,P_Stack_Table_Z_Move_Speed=8633
,P_FR_Cal_Move_Speed=8634
,P_Old_Anode_Clamp_Z1_Move_Speed=8635
,P_Old_Anode_Clamp_Z2_Move_Speed=8636
,P_Old_Cathode_Clamp_Z1_Move_Speed=8637
,P_Old_Cathode_Clamp_Z2_Move_Speed=8638
,P_Old_Stack_Table_Z_Move_Speed=8639
,P_Old_FR_Cal_Move_Speed=8640
,P_An_AT_Resolution_Anode_2th_Z_Pos_mm=8641
,P_An_AT_Resolution_Anode_2th_T_Pos_mm=8642
,P_An_AT_Resolution_Cathode_2th_Z_Pos_mm=8643
,P_An_AT_Resolution_Cathode_2th_T_Pos_mm=8644
,P_FR_AT_Resolution_Pos_mm=8645
,P_Old_AT_Resolution_Anode_2th_Z_Pos_Move_Speed=8646
,P_Old_AT_Resolution_Anode_2th_T_Pos_Move_Speed=8647
,P_Old_AT_Resolution_Cathode_2th_Z_Pos_Move_Speed=8648
,P_Old_AT_Resolution_Cathode_2th_T_Pos_Move_Speed=8649
,P_Old_FR_AT_Resolution_Move_Speed=8650
,P_Ca_AT_Resolution_Anode_2th_Z_Pos_mm=8651
,P_Ca_AT_Resolution_Anode_2th_T_Pos_mm=8652
,P_Ca_AT_Resolution_Cathode_2th_Z_Pos_mm=8653
,P_Ca_AT_Resolution_Cathode_2th_T_Pos_mm=8654
,P_AT_Resolution_Anode_2th_Z_Pos_Move_Speed=8655
,P_AT_Resolution_Anode_2th_T_Pos_Move_Speed=8656
,P_AT_Resolution_Cathode_2th_Z_Pos_Move_Speed=8657
,P_AT_Resolution_Cathode_2th_T_Pos_Move_Speed=8658
,P_FR_AT_Resolution_Move_Speed=8659
,P_Anode_1th_MES_APC_Move_mm_PLC=8660
,P_Cathode_1th_MES_APC_Move_mm_PLC=8661
,P_Anode_1th_MES_APC_Move_mm_PMAC=8662
,P_Cathode_1th_MES_APC_Move_mm_PMAC=8663
,P_Anode_X_before_Comp_mm=8664
,P_Cathode_X_before_Comp_mm=8665
,P_Flag_Anode_1PNP_APC_Apply_Point=8666
,P_Flag_Cathode_1PNP_APC_Apply_Point=8667
,P_MES_APC_Active=8668
,P_OLD_Slave1_Target_X_Belt_To_Align=8669
,P_OLD_Slave10_Target_X_Belt_To_Align=8670
,P_Anode_MES_X_Average_mm=8671
,P_Cathode_MES_X_Average_mm=8672
,P_Anode_X_Sum_Move_mm=8673
,P_Anode_Align_Stage_TM=8674
,P_Anode_Align_Stage_TS=8675
,P_Anode_Align_Stage_TA=8676
,P_Status_Anode_Prog=8677
,P_Cathode_X_Sum_Move_mm=8678
,P_X_Move_Recipe_Percent=8679
,P_Cathode_Align_Stage_TM=8680
,P_Cathode_Align_Stage_TS=8681
,P_Cathode_Align_Stage_TA=8682
,P_Status_Cathode_Prog=8683
,P_Anode_Align_Move_Machine=8684
,P_Cathode_Align_Move_Machine=8685
,P_Stack_Table_Move_Machine=8686
,P_Status_Anode_Align_Move=8687
,P_Status_Cathode_Align_Move=8688
,P_Status_Stack_Table_Move=8689
,P_Anode_Align_Start_Bit=8690
,P_Cathode_Align_Start_Bit=8691
,P_Anode_Retry_Start_Bit=8692
,P_Cathode_Retry_Start_Bit=8693
,P_Vision_Spea_Run_Complete_Machine=8694
,P_Vision_Sepa_Run_Complete_CMD=8695
,P_Vision_Clamp_Complete_Machine=8696
,P_Vision_Clamp_Complete_CMD=8697
,P_PC_Jog_Motor_No=4301
,P_PC_Jog_Speed=4254
,P_Custom_Speed=4500
,P_Jog_Position=4300
,P_Anode_Recipe_Count=8729
,P_Cathode_Recipe_Count=8730
,P_Slave5_Target_Z_Wait_Pos=8780
,P_Slave5_Target_Z_Start_Pos=8781
,P_Sepa_First_Clamp_On_Up=8782
,P_Slave6_Target_X_Wait_Pos=8783
,P_Anode_1st_T_Belt_To_Align=8784
,P_Anode_1st_T_Align_To_Belt=8785
,P_Anode_1st_T_Ready=8786
,P_Recipe_A_1st_Z_Belt_Down=8787
,P_Recipe_A_1st_Z_Belt_Up=8788
,P_Recipe_A_1st_Z_Align_Down=8789
,P_Recipe_A_1st_Z_Align_Up=8790
,P_Recipe_A_1st_Z_Ready_Up=8791
,P_Recipe_A_1st_Z_Ready_Down=8792
,P_Anode_1st_Z_Belt_Down=8793
,P_Anode_1st_Z_Belt_Up=8794
,P_Anode_1st_Z_Align_Down=8795
,P_Anode_1st_Z_Align_Up=8796
,P_Anode_1st_Z_Ready_Up=8797
,P_Anode_1st_Z_Ready_Down=8798
,P_Anode_2st_T_Align_To_Stack=8799
,P_Anode_2st_T_Stack_To_Align=8800
,P_Recipe_A_2st_Z_Align_Up=8801
,P_Recipe_A_2st_Z_Align_Down=8802
,P_Recipe_A_2st_Z_Stack_Up=8803
,P_Recipe_A_2st_Z_Stack_Down=8804
,P_Recipe_A_2st_Z_Ready_Up=8805
,P_Recipe_A_2st_Z_Ready_Down=8806
,P_Anode_2nd_Z_Align_Up=8807
,P_Anode_2nd_Z_Align_Down=8808
,P_Anode_2nd_Z_Stack_Up=8809
,P_Anode_2nd_Z_Stack_Down=8810
,P_Anode_2nd_Z_Ready_Up=8811
,P_Anode_2st_Z_Ready_Down=8812
,P_Anode_Clamp_Y1_On_1st=8813
,P_Anode_Clamp_Y1_On_2nd=8814
,P_Anode_Clamp_Y1_On_3rd=8815
,P_Anode_Clamp_Y1_On_4th=8816
,P_Anode_Clamp_Y1_Off_1st=8817
,P_Anode_Clamp_Y1_Off_2nd=8818
,P_Anode_Clamp_Y1_Off_3rd=8819
,P_Anode_Clamp_Y2_On_1st=8820
,P_Anode_Clamp_Y2_On_2nd=8821
,P_Anode_Clamp_Y2_On_3rd=8822
,P_Anode_Clamp_Y2_On_4th=8823
,P_Anode_Clamp_Y2_Off_1st=8824
,P_Anode_Clamp_Y2_Off_2nd=8825
,P_Anode_Clamp_Y2_Off_3rd=8826
,P_Anode_Clamp_Z1_On_1st=8827
,P_Anode_Clamp_Z1_On_2nd=8828
,P_Anode_Clamp_Z1_On_3rd=8829
,P_Anode_Clamp_Z1_On_4th=8830
,P_Anode_Clamp_Z1_Off_1st=8831
,P_Anode_Clamp_Z1_Off_2nd=8832
,P_Anode_Clamp_Z1_Off_3rd=8833
,P_Anode_Clamp_Z1_Down=8834
,P_Final_Roll_X_Sepa_1st=8835
,P_Final_Roll_X_Sepa_2nd=8836
,P_Final_Roll_X_Sepa_3rd=8837
,P_Final_Roll_X_Sepa_4th=8838
,P_Final_Roll_X_Sepa_5th=8839
,P_Final_Roll_X_Anode_Move=8840
,P_Final_Roll_X_Discharge=8841
,P_Final_Roll_X_Cathode_Move=8842
,P_Final_Roll_X_Run_Wait_Pos=8843
,P_Final_Roll_Z_Ready_And_Cutting=8844
,P_Final_Roll_Z_Run_Pos=8845
,P_Final_Roll_Z_Sepa_3rd=8846
,P_Final_Roll_Z_Sepa_4th=8847
,P_Final_Roll_Z_Sepa_5th=8848
,P_Stack_Table_Z_For_Sepa=8849
,P_Stack_Table_Z_For_Run=8850
,P_Stack_Table_Z_For_Init=8851
,P_Cathode_Clamp_Y1_On_1st=8852
,P_Cathode_Clamp_Y1_On_2nd=8853
,P_Cathode_Clamp_Y1_On_3rd=8854
,P_Cathode_Clamp_Y1_On_4th=8855
,P_Cathode_Clamp_Y1_Off_1st=8856
,P_Cathode_Clamp_Y1_Off_2nd=8857
,P_Cathode_Clamp_Y1_Off_3rd=8858
,P_Cathode_Clamp_Y2_On_1st=8859
,P_Cathode_Clamp_Y2_On_2nd=8860
,P_Cathode_Clamp_Y2_On_3rd=8861
,P_Cathode_Clamp_Y2_On_4th=8862
,P_Cathode_Clamp_Y2_Off_1st=8863
,P_Cathode_Clamp_Y2_Off_2nd=8864
,P_Cathode_Clamp_Y2_Off_3rd=8865
,P_Cathode_Clamp_Z1_On_1st=8866
,P_Cathode_Clamp_Z1_On_2nd=8867
,P_Cathode_Clamp_Z1_On_3rd=8868
,P_Cathode_Clamp_Z1_On_4th=8869
,P_Cathode_Clamp_Z1_Off_1st=8870
,P_Cathode_Clamp_Z1_Off_2nd=8871
,P_Cathode_Clamp_Z1_Off_3rd=8872
,P_Cathode_Clamp_Z1_Down=8873
,P_Cathode_2st_T_Align_To_Stack=8874
,P_Cathode_2st_T_Stack_To_Align=8875
,P_Slave8_Target_X_Align_To_Stack_1st=8876
,P_Slave8_Target_X_Align_To_Stack_2nd=8877
,P_Slave8_Target_X_Stack_To_Align_1st=8878
,P_Slave8_Target_X_Stack_To_Align_2nd=8879
,P_Slave8_Target_X_Stack_To_Align_3rd=8880
,P_Cathode_2nd_Z_Align_Up=8881
,P_Cathode_2nd_Z_Align_Down=8882
,P_Cathode_2nd_Z_Stack_Up=8883
,P_Cathode_2nd_Z_Stack_Down=8884
,P_Cathode_2nd_Z_Ready_Up=8885
,P_Cathode_2st_Z_Ready_Down=8886
,P_Recipe_C_2st_Z_Align_Up=8887
,P_Recipe_C_2st_Z_Align_Down=8888
,P_Recipe_C_2st_Z_Stack_Up=8889
,P_Recipe_C_2st_Z_Stack_Down=8890
,P_Recipe_C_2st_Z_Ready_Up=8891
,P_Recipe_C_2st_Z_Ready_Down=8892
,P_Cathode_1st_T_Belt_To_Align=8893
,P_Cathode_1st_T_Align_To_Belt=8894
,P_Cathode_1st_T_Ready=8895
,P_Cathode_1st_Z_Belt_Down=8896
,P_Cathode_1st_Z_Belt_Up=8897
,P_Cathode_1st_Z_Align_Down=8898
,P_Cathode_1st_Z_Align_Up=8899
,P_Cathode_1st_Z_Ready_Up=8900
,P_Cathode_1st_Z_Ready_Down=8901
,P_Recipe_C_1st_Z_Belt_Down=8902
,P_Recipe_C_1st_Z_Belt_Up=8903
,P_Recipe_C_1st_Z_Align_Down=8904
,P_Recipe_C_1st_Z_Align_Up=8905
,P_Recipe_C_1st_Z_Ready_Up=8906
,P_Recipe_C_1st_Z_Ready_Down=8907
,P_1st_Sheet_Paper_X_FWD=8908
,P_1st_Sheet_Paper_X_BWD=8909
,P_Cathode_NG_T_NG_To_Align=8910
,P_Cathode_NG_T_Align_To_NG=8911
,P_Cathode_NG_Z_NG_Down=8912
,P_Cathode_NG_Z_NG_Up=8913
,P_Cathode_NG_Z_Align_Down=8914
,P_Cathode_NG_Z_Align_Up=8915
,P_Anode_NG_T_NG_To_Align=8916
,P_Anode_NG_T_Align_To_NG=8917
,P_Anode_NG_Z_NG_Down=8918
,P_Anode_NG_Z_NG_Up=8919
,P_Anode_NG_Z_Align_Down=8920
,P_Anode_NG_Z_Align_Up=8921
,P_1st_ULD_X_Stack=8922
,P_1st_ULD_X_FWD=8923
,P_1st_ULD_X_Init_Pos=8924
,P_1st_ULD_X_Target_BWD=8925
,P_1st_ULD_Z_Stack=8926
,P_1st_ULD_Z_Cutting_For_Cell=8927
,P_1st_ULD_Z_Discharge_For_Cell=8928
,P_1st_ULD_Z_Target_Down=8929
,P_1st_ULD_T_Wait=8930
,P_1st_ULD_T_Avoid_Angle=8931
,P_1st_ULD_T_90_Angle=8932
,P_Slave1_Start_X_Belt=8933
,P_Slave1_Start_X_Align=8934
,P_Slave1_Start_X_NG=8935
,P_Slave1_Start_Z_Up=8936
,P_Slave1_Start_Z_Down_Belt=8937
,P_Slave1_Start_Z_Down_Align=8938
,P_Slave1_Start_Z_Down_NG=8939
,P_Slave3_Start_X_Align=8940
,P_Slave3_Start_X_Align_To_Stack=8941
,P_Slave3_Start_X_Stack=8942
,P_Slave3_Start_X_Stack_To_Align_2=8943
,P_Slave3_Start_X_Stack_To_Align_3=8944
,P_Slave3_Start_Z_Align_To_Stack_1=8945
,P_Slave3_Start_Z_Align_To_Stack_2=8946
,P_Slave3_Start_Z_Stack_To_Align_1=8947
,P_Slave3_Start_Z_Stack_To_Align_2=8948
,P_Slave3_Start_Z_Stack_To_Align_3=8949
,P_Slave3_Start_Z_Align_Down=8950
,P_Slave3_Start_Z_Align_Up=8951
,P_Slave3_Start_Z_Stack_Down=8952
,P_Slave3_Start_Z_Stack_Up=8953
,P_Slave4_Start_X_Clamp_On_1st=8954
,P_Slave4_Start_X_Clamp_On_2nd=8955
,P_Slave4_Start_X_Clamp_On_3rd=8956
,P_Slave4_Start_X_Clamp_On_4th=8957
,P_Slave4_Start_X_Clamp_Off_1st=8958
,P_Slave4_Start_X_Clamp_Off_2nd=8959
,P_Slave4_Start_X_Clamp_Off_3rd=8960
,P_Slave4_Start_Z_Clamp_On_1st=8961
,P_Slave4_Start_Z_Clamp_On_2nd=8962
,P_Slave4_Start_Z_Clamp_On_3rd=8963
,P_Slave4_Start_Z_Clamp_On_4th=8964
,P_Slave4_Start_Z_Clamp_Off_1st=8965
,P_Slave4_Start_Z_Clamp_Off_2nd=8966
,P_Slave4_Start_Z_Clamp_Off_3rd=8967
,P_Slave4_Start_Z_Down=8968
,P_Slave5_Start_X_Anode_Move_1st=8969
,P_Slave5_Start_X_Anode_Move_2nd=8970
,P_Slave5_Start_X_Cathode_Move_1st=8971
,P_Slave5_Start_X_Cathode_Move_2nd=8972
,P_Slave5_Start_X_Sepa_1st=8973
,P_Slave5_Start_X_Sepa_2nd=8974
,P_Slave5_Start_X_Sepa_3rd=8975
,P_Slave5_Start_X_Sepa_4th=8976
,P_Slave5_Start_X_Sepa_5th=8977
,P_Slave5_Start_Z_Sepa_1st=8978
,P_Slave5_Start_Z_Sepa_2nd=8979
,P_Slave5_Start_Z_Sepa_3rd=8980
,P_Slave5_Start_Z_Sepa_4th=8981
,P_Slave5_Start_Z_Sepa_5th=8982
,P_Slave6_Start_Z_Wait_Pos=8983
,P_Slave6_Start_Z_For_Sepa_Mode=8984
,P_Slave7_Start_X_Clamp_On_1st=8985
,P_Slave7_Start_X_Clamp_On_2nd=8986
,P_Slave7_Start_X_Clamp_On_3rd=8987
,P_Slave7_Start_X_Clamp_On_4th=8988
,P_Slave7_Start_X_Clamp_Off_1st=8989
,P_Slave7_Start_X_Clamp_Off_2nd=8990
,P_Slave7_Start_X_Clamp_Off_3rd=8991
,P_Slave7_Start_Z_Clamp_On_1st=8992
,P_Slave7_Start_Z_Clamp_On_2nd=8993
,P_Slave7_Start_Z_Clamp_On_3rd=8994
,P_Slave7_Start_Z_Clamp_On_4th=8995
,P_Slave7_Start_Z_Clamp_Off_1st=8996
,P_Slave7_Start_Z_Clamp_Off_2nd=8997
,P_Slave7_Start_Z_Clamp_Off_3rd=8998
,P_Slave7_Start_Z_Down=8999
,P_Slave8_Start_X_Align=9000
,P_Slave8_Start_X_Align_To_Stack=9001
,P_Slave8_Start_X_Stack=9002
,P_Slave8_Start_X_Stack_To_Align_2=9003
,P_Slave8_Start_X_Stack_To_Align_3=9004
,P_Slave8_Start_Z_Align_To_Stack_1=9005
,P_Slave8_Start_Z_Align_To_Stack_2=9006
,P_Slave8_Start_Z_Stack_To_Align_1=9007
,P_Slave8_Start_Z_Stack_To_Align_2=9008
,P_Slave8_Start_Z_Stack_To_Align_3=9009
,P_Slave8_Start_Z_Align_Down=9010
,P_Slave8_Start_Z_Align_Up=9011
,P_Slave8_Start_Z_Stack_Down=9012
,P_Slave8_Start_Z_Stack_Up=9013
,P_Slave10_Start_X_Belt=9014
,P_Slave10_Start_X_Align=9015
,P_Slave10_Start_X_NG=9016
,P_Slave10_Start_Z_Up=9017
,P_Slave10_Start_Z_Down_Belt=9018
,P_Slave10_Start_Z_Down_Align=9019
,P_Slave10_Start_Z_Down_NG=9020
,P_Slave1_Move_X_Belt_Align=9021
,P_Slave1_Move_X_Align_Belt=9022
,P_Slave1_Move_X_Belt_NG=9023
,P_Slave1_Move_X_NG_Belt=9024
,P_Slave1_Move_X_Align_NG=9025
,P_Slave1_Move_Z_Belt_Down=9026
,P_Slave1_Move_Z_Belt_Up=9027
,P_Slave1_Move_X_NG_Align=9028
,P_Slave1_Move_Z_Align_Down=9029
,P_Slave1_Move_Z_Align_Up=9030
,P_Slave1_Move_Z_NG_Down=9031
,P_Slave1_Move_Z_NG_Up=9032
,P_Slave3_Move_X_Align_To_Stack_1st=9033
,P_Slave3_Move_X_Align_To_Stack_2nd=9034
,P_Slave3_Move_X_Stack_To_Align_1st=9035
,P_Slave3_Move_X_Stack_To_Align_2nd=9036
,P_Slave3_Move_X_Stack_To_Align_3rd=9037
,P_Slave3_Move_Z_Align_To_Stack_1st=9038
,P_Slave3_Move_Z_Align_To_Stack_2nd=9039
,P_Slave3_Move_Z_Stack_To_Align_1st=9040
,P_Slave3_Move_Z_Stack_To_Align_2nd=9041
,P_Slave3_Move_Z_Stack_To_Align_3rd=9042
,P_Slave3_Move_Z_Align_Up=9043
,P_Slave3_Move_Z_Align_Down=9044
,P_Slave3_Move_Z_Stack_Up=9045
,P_Slave3_Move_Z_Stack_Down=9046
,P_Slave4_Move_X_Clamp_On_1st=9047
,P_Slave4_Move_X_Clamp_On_2nd=9048
,P_Slave4_Move_X_Clamp_On_3rd=9049
,P_Slave4_Move_X_Clamp_On_4th=9050
,P_Slave4_Move_X_Clamp_Off_1st=9051
,P_Slave4_Move_X_Clamp_Off_2nd=9052
,P_Slave4_Move_X_Clamp_Off_3rd=9053
,P_Slave4_Move_Z_Clamp_On_1st=9054
,P_Slave4_Move_Z_Clamp_On_2nd=9055
,P_Slave4_Move_Z_Clamp_On_3rd=9056
,P_Slave4_Move_Z_Clamp_On_4th=9057
,P_Slave4_Move_Z_Clamp_Off_1st=9058
,P_Slave4_Move_Z_Clamp_Off_2nd=9059
,P_Slave4_Move_Z_Clamp_Off_3rd=9060
,P_Slave4_Move_Z_Down=9061
,P_Slave5_Move_X_Anode_Move_1st=9062
,P_Slave5_Move_X_Anode_Move_2nd=9063
,P_Slave5_Move_X_Cathode_Move_1st=9064
,P_Slave5_Move_X_Cathode_Move_2nd=9065
,P_Slave5_Move_X_Sepa_1st=9066
,P_Slave5_Move_X_Sepa_2nd=9067
,P_Slave5_Move_X_Sepa_3rd=9068
,P_Slave5_Move_X_Sepa_4th=9069
,P_Slave5_Move_X_Sepa_5th=9070
,P_Slave5_Move_Z_Sepa_1st=9071
,P_Slave5_Move_Z_Sepa_2nd=9072
,P_Slave5_Move_Z_Sepa_3rd=9073
,P_Slave5_Move_Z_Sepa_4th=9074
,P_Slave5_Move_Z_Sepa_5th=9075
,P_Slave6_Move_Z_For_Sepa_Mode=9076
,P_Slave6_Move_Z_For_Run_Mode=9077
,P_Slave7_Move_X_Clamp_On_1st=9078
,P_Slave7_Move_X_Clamp_On_2nd=9079
,P_Slave7_Move_X_Clamp_On_3rd=9080
,P_Slave7_Move_X_Clamp_On_4th=9081
,P_Slave7_Move_X_Clamp_Off_1st=9082
,P_Slave7_Move_X_Clamp_Off_2nd=9083
,P_Slave7_Move_X_Clamp_Off_3rd=9084
,P_Slave7_Move_Z_Clamp_On_1st=9085
,P_Slave7_Move_Z_Clamp_On_2nd=9086
,P_Slave7_Move_Z_Clamp_On_3rd=9087
,P_Slave7_Move_Z_Clamp_On_4th=9088
,P_Slave7_Move_Z_Clamp_Off_1st=9089
,P_Slave7_Move_Z_Clamp_Off_2nd=9090
,P_Slave7_Move_Z_Clamp_Off_3rd=9091
,P_Slave7_Move_Z_Down=9092
,P_Slave8_Move_X_Align_To_Stack_1st=9093
,P_Slave8_Move_X_Align_To_Stack_2nd=9094
,P_Slave8_Move_X_Stack_To_Align_1st=9095
,P_Slave8_Move_X_Stack_To_Align_2nd=9096
,P_Slave8_Move_X_Stack_To_Align_3rd=9097
,P_Slave8_Move_Z_Align_To_Stack_1st=9098
,P_Slave8_Move_Z_Align_To_Stack_2nd=9099
,P_Slave8_Move_Z_Stack_To_Align_1st=9100
,P_Slave8_Move_Z_Stack_To_Align_2nd=9101
,P_Slave8_Move_Z_Stack_To_Align_3rd=9102
,P_Slave8_Move_Z_Align_Up=9103
,P_Slave8_Move_Z_Align_Down=9104
,P_Slave8_Move_Z_Stack_Up=9105
,P_Slave8_Move_Z_Stack_Down=9106
,P_Slave10_Move_X_Belt_Align=9107
,P_Slave10_Move_X_Align_Belt=9108
,P_Slave10_Move_X_Belt_NG=9109
,P_Slave10_Move_X_NG_Belt=9110
,P_Slave10_Move_X_Align_NG=9111
,P_Slave10_Move_Z_Belt_Down=9112
,P_Slave10_Move_Z_Belt_Up=9113
,P_Slave10_Move_X_NG_Align=9114
,P_Slave10_Move_Z_Align_Down=9115
,P_Slave10_Move_Z_Align_Up=9116
,P_Slave10_Move_Z_NG_Down=9117
,P_Slave10_Move_Z_NG_Up=9118
,P_Slave1_Offset_X_Align=9119
,P_Slave1_Offset_X_Belt=9120
,P_Slave1_Offset_X_NG=9121
,P_Slave1_Offset_Z_Belt=9122
,P_Slave1_Offset_Z_Align=9123
,P_Slave1_Offset_Z_NG=9124
,P_Slave1_Offset_Z_Up=9125
,P_Slave3_Offset_X_Stack=9126
,P_Slave3_Offset_X_Align=9127
,P_Slave3_Offset_Z_Stack=9128
,P_Slave3_Offset_Z_Align=9129
,P_Slave3_Offset_Z_Align_Up=9130
,P_Slave3_Offset_Z_Align_Down=9131
,P_Slave3_Offset_Z_Stack_Up=9132
,P_Slave3_Offset_Z_Stack_Down=9133
,P_Slave3_Offset_Z_Wait_Pos=9134
,P_Slave4_Offset_X_Clamp_On=9135
,P_Slave4_Offset_X_Clamp_Off=9136
,P_Slave4_Offset_Z_Clamp_On=9137
,P_Slave4_Offset_Z_Clamp_Off=9138
,P_Slave5_Offset_X_Anode_Move_1st=9139
,P_Slave5_Offset_X_Anode_Move_2nd=9140
,P_Slave5_Offset_X_Cathode_Move_1st=9141
,P_Slave5_Offset_X_Cathode_Move_2nd=9142
,P_Slave5_Offset_X_Sepa_1st=9143
,P_Slave5_Offset_X_Sepa_2nd=9144
,P_Slave5_Offset_X_Sepa_3rd=9145
,P_Slave5_Offset_X_Sepa_4th=9146
,P_Slave5_Offset_X_Sepa_5th=9147
,P_Slave5_Offset_Z_Sepa_1st=9148
,P_Slave5_Offset_Z_Sepa_2nd=9149
,P_Slave5_Offset_Z_Sepa_3rd=9150
,P_Slave5_Offset_Z_Sepa_4th=9151
,P_Slave5_Offset_Z_Sepa_5th=9152
,P_Slave6_Offset_X_For_Sepa_Mode=9153
,P_Slave6_Offset_Z_Wait_Pos=9154
,P_Slave7_Offset_X_Clamp_On=9155
,P_Slave7_Offset_X_Clamp_Off=9156
,P_Slave7_Offset_Z_Clamp_On=9157
,P_Slave7_Offset_Z_Clamp_Off=9158
,P_Slave8_Offset_X_Stack=9159
,P_Slave8_Offset_X_Align=9160
,P_Slave8_Offset_Z_Stack=9161
,P_Slave8_Offset_Z_Align=9162
,P_Slave8_Offset_Z_Align_Up=9163
,P_Slave8_Offset_Z_Align_Down=9164
,P_Slave8_Offset_Z_Stack_Up=9165
,P_Slave8_Offset_Z_Stack_Down=9166
,P_Slave8_Offset_Z_Wait_Pos=9167
,P_Slave10_Offset_X_Align=9168
,P_Slave10_Offset_X_Belt=9169
,P_Slave10_Offset_X_NG=9170
,P_Slave10_Offset_Z_Belt=9171
,P_Slave10_Offset_Z_Align=9172
,P_Slave10_Offset_Z_NG=9173
,P_Slave10_Offset_Z_Up=9174
,P_Slave1_Target_Z_CV_Blower_On_Pos=9175
,P_Slave1_Target_Z_CV_Blower_Off_Pos=9176
,P_Slave10_Target_Z_CV_Blower_On_Pos=9177
,P_Slave10_Target_Z_CV_Blower_Off_Pos=9178
,P_Anode_CV_Blower_On_Flag=9179
,P_Anode_CV_Blower_Off_Flag=9180
,P_Cathode_CV_Blower_On_Flag=9181
,P_Cathode_CV_Blower_Off_Flag=9182
,P_Select_RingBlow_Off_Use=9183
,P_2nd_PNP_Stack_Down_Pos=9184
,P_2nd_PNP_Stack_Up_Pos=9185
,P_Anode_Clamp_Down_MNTR=9186
,P_Cathode_Clamp_Down_MNTR=9187
,P_Clamp_1st_Vector_Y=9188
,P_Clamp_1st_Vector_Z=9189
,P_Clamp_1st_Vector_Vel=9190
,P_Clamp_2nd_Vector_Y=9191
,P_Clamp_2nd_Vector_Z=9192
,P_Clamp_2nd_Vector_Vel=9193
,P_Clamp_2nd_TM_Time=9194
,P_FR_Ta=9195
,P_FR_Ts=9196
,P_FR_Tm=9197
,P_Master_Motion_Heartbit_Flag=9198
,P_Master_Heartbit_Trigger=9199
,P_Parity_Heartbit_Bit=9200
,P_Master_Heartbit_Move=9201
,P_Force_Stop_Flag=9202
,P_Execute_DryRun_Stop_Timer=9203
,P_DryRun_Timer=9204
,P_Dryrun_Operating_Time=9205
,P_Anode_Align_Vac_Err_On=9206
,P_Cathode_Align_Vac_Err_On=9207
,P_Anode_1ST_TR_Vac_Err_On=9208
,P_Anode_2ND_TR_Vac_Err_On=9209
,P_Cathode_1ST_TR_Vac_Err_On=9210
,P_Cathode_2ND_TR_Vac_Err_On=9211
,P_MNTR_PLC0_Task_Max_Time=9214
,P_MNTR_PLC1_Task_Max_Time=9217
,P_MNTR_PLC2_Task_Max_Time=9220
,P_MNTR_PLC3_Task_Max_Time=9223
,P_MNTR_PLC4_Task_Max_Time=9226
,P_MNTR_PLC5_Task_Max_Time=9229
,P_MNTR_PLC6_Task_Max_Time=9232
,P_MNTR_PLC7_Task_Max_Time=9235
,P_MNTR_PLC8_Task_Max_Time=9238
,P_MNTR_PLC9_Task_Max_Time=9241
,P_MNTR_PLC10_Task_Max_Time=9244
,P_MNTR_PLC11_Task_Max_Time=9247
,P_MNTR_PLC12_Task_Max_Time=9250
,P_MNTR_PLC13_Task_Max_Time=9253
,P_MNTR_PLC14_Task_Max_Time=9256
,P_MNTR_PLC15_Task_Max_Time=9259
,P_MNTR_PLC16_Task_Max_Time=9262
,P_MNTR_PLC17_Task_Max_Time=9265
,P_MNTR_PLC18_Task_Max_Time=9268
,P_MNTR_PLC19_Task_Max_Time=9271
,P_MNTR_PLC20_Task_Max_Time=9274
,P_MNTR_PLC21_Task_Max_Time=9277
,P_MNTR_PLC22_Task_Max_Time=9280
,P_MNTR_PLC23_Task_Max_Time=9283
,P_MNTR_PLC24_Task_Max_Time=9286
,P_MNTR_PLC25_Task_Max_Time=9289
,P_MNTR_PLC26_Task_Max_Time=9292
,P_MNTR_PLC27_Task_Max_Time=9295
,P_MNTR_PLC28_Task_Max_Time=9298
,P_MNTR_PLC29_Task_Max_Time=9301
,P_MNTR_PLC30_Task_Max_Time=9304
,P_Coord_Shutdown_Status_log=9305
,P_In_Pos_Trg=9306
,P_Position_Calc_Status=9307
,P_PNP_Pos=9322
,P_Execute_Manage_Mode=9323
,P_Align_NG_Tack_Flag=9324
,P_2th_Ng_Front_Vision_Pos=9325
,P_Anode_Align_OK_Flag=9326
,P_Anode_Align_NG_Flag=9327
,P_Cathode_Align_OK_Flag=9328
,P_Cathode_Align_NG_Flag=9329
,P_Stack_Table_OK_Flag=9330
,P_Anode_Retry_OK_Flag=9331
,P_Anode_Retry_NG_Flag=9332
,P_Cathode_Retry_OK_Flag=9333
,P_Cathode_Retry_NG_Flag=9334
,P_Func_Anode_2TR_Avoid_X_Value=9335
,P_Func_Cathode_2TR_Avoid_X_Value=9336
,P_Anode_Surf_Insp_Trigger=9337
,P_Cathode_Surf_Insp_Trigger=9338
,P_CMD_Cathode_Vision_Tigger=9339
,P_CMD_Anode_Vision_Tigger=9340
,P_CMD_Stack_Table_Vision_Trigger=9341
,P_CMD_Cathode_Empty_Table_Vision=9342
,P_CMD_Anode_Empty_Table_Vision=9343
,P_CMD_Cathode_Existence_Vision=9344
,P_CMD_Anode_Existence_Vision=9345
,P_Align_Manager_Error_Cnt=9346
,P_Surf_Manager_Error_Cnt=9347
,P_Retry_Manager_Error_Cnt=9348
,P_Stack_Manager_Error_Cnt=9349
,P_Existence_Manager_Error_Cnt=9350
,P_Where_To_Occur_Error_Retry_Status=9351
,P_Which_Retry_Insp_Type=9352
,P_Where_To_Occur_Error_Align_Status=9353
,P_Which_Align_Insp_Type=9354
,P_Where_To_Occur_Error_Surf_Status=9355
,P_Which_Surf_Insp_Type=9356
,P_Where_To_Occur_Error_Existence_Status=9357
,P_Which_Existence_Insp_Type=9358
,P_Where_To_Occur_Error_Stack_Status=9359
,P_Vision_Clamping_Flag=9360
,P_Exist_Insp_Total_Time=9361
,P_Exist_Insp_Trg_Time=9362
,P_Stack_Insp_Total_Time=9363
,P_Stack_Trg_Time=9364
,P_Surf_Insp_Total_Time=9365
,P_Retry_Insp_Total_Time=9366
,P_Surf_TimeOut_Cnt=9367
,P_Align_TimeOut_Cnt=9368
,P_Retry_TimeOut_Cnt=9369
,P_Stack_TimeOut_Cnt=9370
,P_Align_Insp_Total_Time=9371
,P_Align_Trg_Time=9372
,P_Aligning_Time=9373
,P_Cathode_Empty_Table_Vision_Flag=9374
,P_Anode_Empty_Table_Vision_Flag=9375
,P_Selected_Surf_Insp_Type=9376
,P_Selected_Align_Insp_Type=9377
,P_Selected_Retry_Insp_Type=9378
,P_Selected_Exist_Insp_Type=9379
,P_VISION_RECIPE_PLC4_Surface_TrgOff=9380
,P_VISION_RECIPE_PLC4_Surface_Ins_Time=9381
,P_CMD_Cathode_Vision_Retry=9382
,P_CMD_Anode_Vision_Retry=9383
,P_Prev_Align_Manager_Status=9384
,P_Prev_Surf_Manager_Status=9385
,P_Prev_Exist_Manager_Status=9386
,P_Prev_Selected_Align_Type=9387
,P_Prev_Selected_Surf_Type=9388
,P_Prev_Selected_Exist_Type=9389
,P_Status_Align_Vision_Manager=9390
,P_Status_Surface_Vision_Manager=9391
,P_Status_Sheet_Existence_Vision_Manager=9392
,P_Status_Stack_Vision_Manager=9393
,P_Status_Retry_Vision_Manager=9394
,P_Vision_All_Status_Manager_Init_Flag=9395
,P_Cycle_Stop_Command=9396
,P_Surface_Inspection_Complete_Error=9397
,P_Switching_From_Cathode_To_Anode_Flag=9398
,P_Switching_From_Anode_To_Cathode_Flag=9399
,P_Switching_Mode_Complete_Flag=9400
,P_Surf_Cathode_Error_Count=9401
,P_Surf_Anode_Error_Count=9402
,P_First_Anode_Sheet_Supply_Flag=9403
,P_First_Cathode_Sheet_Supply_Flag=9404
,P_Set_Cathode_Align_Pos_Zero=9405
,P_Set_Anode_Align_Pos_Zero=9406
,P_Cathode_Cur_Mode=9407
,P_Anode_Cur_Mode=9408
,P_AN_to_CA_DR_Trig=9409
,P_CA_to_AN_DR_Trig=9410
,P_Sepa_CompDac_Value=9413
,P_FR_Move_Command=9414
,P_FF_Enable=9415
,P_Anode_Run_FR_Move_Check_AI=9416
,P_Cathode_Run_FR_Move_Check_AI=9417
,P_FR_Move_Check_AI_OffSet=9418
,P_Aver_FR_AI_Value=9424
,P_Process_Function_Command=9425
,P_HOLD_Existence_Insp_State_Machine=9426
,P_Execute_IsEnable_State_Machine=9427
,P_EXECUTE_FUNC_Ready_STEP=9428
,P_Execute_First_Sepa_Ontable_State_Machine=9429
,P_Execute_Prod_Manage_State_Machine=9430
,P_Execute_Enqueue_State_Machine=9431
,P_STOP_Initial_Process_STEP=9432
,P_STOP_Cylce_Stop_STEP=9433
,P_Stop_CycleStop_Position=9434
,P_Upcount_NextStep=9435
,P_SUSPEND_FUNC_JR_Discharge_STEP=9436
,P_SUSPEND_FUNC_ARC_STEP=9437
,P_Suspend_ARC_Complete_Flag=9438
,P_EXECUTE_FUNC_Debug_On_Sepa_STEP=9439
,P_QueueCommand_Occurs=9440
,P_EXECUTE_STEP=9441
,P_SUSPEND_STEP=9442
,P_HOLD_STEP=9443
,P_STOP_STEP=9444
,P_EXECUTE_Error_STEP=9445
,P_SUSPEND_Error_STEP=9446
,P_HOLD_Error_STEP=9447
,P_STOP_Error_STEP=9448
,P_Queue_Enqueue_Command=9449
,P_Queue_Enqueue_return=9450
,P_Queue_Dequeue_Command=9451
,P_Queue_Dequeue_return=9452
,P_Queue_Peek_Command=9453
,P_Dummy_Dequeue=9474
,P_Queue_Command_Status=9475
,P_Queue_Process_Command=9476
,P_Queue_Process_Status=9477
,P_Coord_Test=9478
,P_Coord_Test3=9479
,P_Coord_Test2=9480
,P_Coord_Motion_Prog_Down_Entering_Bit=9481
,P_PMAC_Coord_Status_Bit=9482
,P_Coord_Down_Check_Bit=9483
,P_PMAC_Coord_Down_Inspection_Flag=9484
,P_PMAC_Coord_Down_Num=9485
,P_PMAC_Coord_Error_Status=9486
,P_PLC01_Process_Function_Enter_Flag=9707
,P_PLC01_SubMotion_Active=9708
,P_PLC01_SlaveMotion_Active=9709
,P_EXECUTE_Isenable_MNTR=9710
,P_EXECUTE_IsEnable_Firt_Stacking_Flag=9711
,P_PLC01_Execute_Retry_Sepa_Mode_Count=9712
,P_SUSPEND_MNTR=9713
,P_SUSPEND_MNTR_2=9714
,P_Execute_Last_Run_Flag=9715
,P_Suspend_ARC_Request_Flag=9716
,P_Hold_Queue_Exist_Insp_MNTR=9717
,P_CirQueue_Status_Value=9718
,P_Debug_CirQueue_Status=9719
,P_Front_Index=9720
,P_Rear_Index=9721
,P_Index_Max=9722
,P_CirQueue_Length=9734
,P_Queue_Full=9735
,P_Queue_Empty=9736
,P_Queue_PeekEmpty=9737
,P_Self_items=9738
,P_Hold_Pause_Need_Flag=9739
,P_Pause_Ready_Flag=9740
,P_Pause_Running_Flag=9741
,P_Resume_Ready_Flag=9742
,P_Resume_Start_Flag=9743
,P_Hold_Resume_Need_Flag=9744
,P_Stack_Heart_Bit_Timer=9745
,P_Stack_Heart_Bit_Calc=9746
,P_Stack_Heart_Bit_Sync_State_Machine=9747
,P_Pause_Anode_MNTR_Min_Trigger=9748
,P_Pause_Anode_MNTR_Max_Trigger=9749
,P_Pause_Cathode_MNTR_Min_Trigger=9750
,P_Pause_Cathode_MNTR_Max_Trigger=9751
,P_Pause_Protect_Variable=9752
,P_Resume_Protect_Variable=9753
,P_Sepa_Mode_Opposite_Resume_Free=9754
,P_Sepa_To_Normal_Mode_Sync_Flag=9755
,P_Sepa_To_Normal_Mode_Sync_Err_Avoid=9756
,P_X_Axis_Num=10057
,P_Y_Axis_Num=10058
,P_Z_Axis_Num=10059
,P_ZZ_Axis_Num=10060
,P_X_Unit=10061
,P_Y_Unit=10062
,P_Z_Unit=10063
,P_ZZ_Unit=10064
,P_Pos_Memory_Bit_Save=10065
,P_Total_Unit_Bit=10066
,P_Total_Unit_Pos=10067
,P_Anode_1st_Unit_Status=10068
,P_Anode_2nd_Unit_Status=10069
,P_Anode_CLP_Unit_Status=10070
,P_FinalRoll_Unit_Status=10071
,P_StackTable_Unit_Status=10072
,P_Cathode_CLP_Unit_Status=10073
,P_Cathode_2nd_Unit_Status=10074
,P_Cathode_1st_Unit_Status=10075
,P_1st_Unloader_Unit_Status=10076
,P_Cathode_NG_PNP_Status=10077
,P_Anode_NG_PNP_Status=10078
,P_Unit_integrated_Status=10079
,P_Unit_Status_Update_Flag=10080
,P_Memory_Tower_Search_Flag=10081
,P_MemTow_integrated_return=10082
,P_Error_STMS_Memory_Tower_Status=10083
,P_STMS_Memory_Tower_Status=10084
,P_Memory_Tower_X_Err_Flag=10635
,P_Memory_Tower_Y_Err_Flag=10636
,P_Memory_Tower_Z_Err_Flag=10637
,P_Memory_Tower_ZZ_Err_Flag=10638
,P_CA_Clamp_Cell_Down_Pos=10639
,P_AN_Clamp_Cell_Down_Pos=10640
,P_PNP_Abort_Use_Bit=10737
,P_PNP_Abort_Use_Total_Bit=10738
,P_C_1st_PNP_FWD_Abort_Use_Bit=10739
,P_C_1st_PNP_BWD_Abort_Use_Bit=10740
,P_C_2nd_PNP_FWD_Abort_Use_Bit=10741
,P_C_2nd_PNP_BWD_Abort_Use_Bit=10742
,P_A_1st_PNP_FWD_Abort_Use_Bit=10743
,P_A_1st_PNP_BWD_Abort_Use_Bit=10744
,P_A_2nd_PNP_FWD_Abort_Use_Bit=10745
,P_A_2nd_PNP_BWD_Abort_Use_Bit=10746
,P_Single_Motor_Control_Bit=10747
,P_C_1st_PNP_FWD_Abort_Calc_Bit=10748
,P_C_1st_PNP_BWD_Abort_Calc_Bit=10749
,P_C_2nd_PNP_FWD_Abort_Calc_Bit=10750
,P_C_2nd_PNP_BWD_Abort_Calc_Bit=10751
,P_A_1st_PNP_FWD_Abort_Calc_Bit=10752
,P_A_1st_PNP_BWD_Abort_Calc_Bit=10753
,P_A_2nd_PNP_FWD_Abort_Calc_Bit=10754
,P_A_2nd_PNP_BWD_Abort_Calc_Bit=10755
,P_C_1st_PNP_FWD_Cur_Pos=10756
,P_C_1st_PNP_FWD_Cur_Vel=10757
,P_C_1st_PNP_BWD_Cur_Pos=10758
,P_C_1st_PNP_BWD_Cur_Vel=10759
,P_C_2nd_PNP_FWD_Cur_Pos=10760
,P_C_2nd_PNP_FWD_Cur_Vel=10761
,P_C_2nd_PNP_BWD_Cur_Pos=10762
,P_C_2nd_PNP_BWD_Cur_Vel=10763
,P_A_1st_PNP_FWD_Cur_Pos=10764
,P_A_1st_PNP_FWD_Cur_Vel=10765
,P_A_1st_PNP_BWD_Cur_Pos=10766
,P_A_1st_PNP_BWD_Cur_Vel=10767
,P_A_2nd_PNP_FWD_Cur_Pos=10768
,P_A_2nd_PNP_FWD_Cur_Vel=10769
,P_A_2nd_PNP_BWD_Cur_Pos=10770
,P_A_2nd_PNP_BWD_Cur_Vel=10771
,P_C_1st_PNP_FWD_Limit_Pos=10772
,P_C_1st_PNP_BWD_Limit_Pos=10773
,P_C_2nd_PNP_FWD_Limit_Pos=10774
,P_C_2nd_PNP_BWD_Limit_Pos=10775
,P_A_1st_PNP_FWD_Limit_Pos=10776
,P_A_1st_PNP_BWD_Limit_Pos=10777
,P_A_2nd_PNP_FWD_Limit_Pos=10778
,P_A_2nd_PNP_BWD_Limit_Pos=10779
,P_C_1st_PNP_FWD_Max_Limit_Pos=10780
,P_C_1st_PNP_BWD_Max_Limit_Pos=10781
,P_C_2nd_PNP_FWD_Max_Limit_Pos=10782
,P_C_2nd_PNP_BWD_Max_Limit_Pos=10783
,P_A_1st_PNP_FWD_Max_Limit_Pos=10784
,P_A_1st_PNP_BWD_Max_Limit_Pos=10785
,P_A_2nd_PNP_FWD_Max_Limit_Pos=10786
,P_A_2nd_PNP_BWD_Max_Limit_Pos=10787
,P_C_1st_PNP_FWD_Remain_Stroke=10788
,P_C_1st_PNP_BWD_Remain_Stroke=10789
,P_C_2nd_PNP_FWD_Remain_Stroke=10790
,P_C_2nd_PNP_BWD_Remain_Stroke=10791
,P_A_1st_PNP_FWD_Remain_Stroke=10792
,P_A_1st_PNP_BWD_Remain_Stroke=10793
,P_A_2nd_PNP_FWD_Remain_Stroke=10794
,P_A_2nd_PNP_BWD_Remain_Stroke=10795
,P_C_1st_PNP_FWD_Stroke_Time=10796
,P_C_1st_PNP_BWD_Stroke_Time=10797
,P_C_2nd_PNP_FWD_Stroke_Time=10798
,P_C_2nd_PNP_BWD_Stroke_Time=10799
,P_A_1st_PNP_FWD_Stroke_Time=10800
,P_A_1st_PNP_BWD_Stroke_Time=10801
,P_A_2nd_PNP_FWD_Stroke_Time=10802
,P_A_2nd_PNP_BWD_Stroke_Time=10803
,P_C_1st_PNP_FWD_Max_Speed=10804
,P_C_1st_PNP_BWD_Max_Speed=10805
,P_C_2nd_PNP_FWD_Max_Speed=10806
,P_C_2nd_PNP_BWD_Max_Speed=10807
,P_A_1st_PNP_FWD_Max_Speed=10808
,P_A_1st_PNP_BWD_Max_Speed=10809
,P_A_2nd_PNP_FWD_Max_Speed=10810
,P_A_2nd_PNP_BWD_Max_Speed=10811
,P_C_1st_PNP_FWD_ACC_Dis=10812
,P_C_1st_PNP_BWD_ACC_Dis=10813
,P_C_2nd_PNP_FWD_ACC_Dis=10814
,P_C_2nd_PNP_BWD_ACC_Dis=10815
,P_A_1st_PNP_FWD_ACC_Dis=10816
,P_A_1st_PNP_BWD_ACC_Dis=10817
,P_A_2nd_PNP_FWD_ACC_Dis=10818
,P_A_2nd_PNP_BWD_ACC_Dis=10819
,P_C_1st_PNP_FWD_AbortTa=10820
,P_C_1st_PNP_FWD_AbortTs=10821
,P_C_1st_PNP_BWD_AbortTa=10822
,P_C_1st_PNP_BWD_AbortTs=10823
,P_C_2nd_PNP_FWD_AbortTa=10824
,P_C_2nd_PNP_FWD_AbortTs=10825
,P_C_2nd_PNP_BWD_AbortTa=10826
,P_C_2nd_PNP_BWD_AbortTs=10827
,P_A_1st_PNP_FWD_AbortTa=10828
,P_A_1st_PNP_FWD_AbortTs=10829
,P_A_1st_PNP_BWD_AbortTa=10830
,P_A_1st_PNP_BWD_AbortTs=10831
,P_A_2nd_PNP_FWD_AbortTa=10832
,P_A_2nd_PNP_FWD_AbortTs=10833
,P_A_2nd_PNP_BWD_AbortTa=10834
,P_A_2nd_PNP_BWD_AbortTs=10835
,P_C_1st_PNP_FWD_Abort_Dec_Offset=10836
,P_C_1st_PNP_BWD_Abort_Dec_Offset=10837
,P_C_2nd_PNP_FWD_Abort_Dec_Offset=10838
,P_C_2nd_PNP_BWD_Abort_Dec_Offset=10839
,P_A_1st_PNP_FWD_Abort_Dec_Offset=10840
,P_A_1st_PNP_BWD_Abort_Dec_Offset=10841
,P_A_2nd_PNP_FWD_Abort_Dec_Offset=10842
,P_A_2nd_PNP_BWD_Abort_Dec_Offset=10843
,P_Abort_Init_Value=11204
,P_C_1st_PNP_FWD_AbortTa_Buffer=11205
,P_C_1st_PNP_FWD_AbortTs_Buffer=11206
,P_C_1st_PNP_BWD_AbortTa_Buffer=11207
,P_C_1st_PNP_BWD_AbortTs_Buffer=11208
,P_C_2nd_PNP_FWD_AbortTa_Buffer=11209
,P_C_2nd_PNP_FWD_AbortTs_Buffer=11210
,P_C_2nd_PNP_BWD_AbortTa_Buffer=11211
,P_C_2nd_PNP_BWD_AbortTs_Buffer=11212
,P_A_1st_PNP_FWD_AbortTa_Buffer=11213
,P_A_1st_PNP_FWD_AbortTs_Buffer=11214
,P_A_1st_PNP_BWD_AbortTa_Buffer=11215
,P_A_1st_PNP_BWD_AbortTs_Buffer=11216
,P_A_2nd_PNP_FWD_AbortTa_Buffer=11217
,P_A_2nd_PNP_FWD_AbortTs_Buffer=11218
,P_A_2nd_PNP_BWD_AbortTa_Buffer=11219
,P_A_2nd_PNP_BWD_AbortTs_Buffer=11220
,P_C_1st_PNP_FWD_Restore_Bit=11221
,P_C_1st_PNP_BWD_Restore_Bit=11222
,P_C_2nd_PNP_FWD_Restore_Bit=11223
,P_C_2nd_PNP_BWD_Restore_Bit=11224
,P_A_1st_PNP_FWD_Restore_Bit=11225
,P_A_1st_PNP_BWD_Restore_Bit=11226
,P_A_2nd_PNP_FWD_Restore_Bit=11227
,P_A_2nd_PNP_BWD_Restore_Bit=11228
,P_Align_Inspection_Time=11229
,P_Front_Inspection_Time=11230
,P_Stack_Inspection_Time=11231
,P_Existence_Inspection_Time=11232
,P_EmptyTable_Inspection_Time=11233
,P_FirstSepa_Inspection_Time=11234
,P_Vision_Anode_Sepa_Mode_Stack_Command=11235
,P_Vision_Cathode_Sepa_Mode_Stack_Command=11236
,P_Cathode_Sepa_Mode_Timer=11237
,P_Anode_Sepa_Mode_Timer=11238
,P_Vision_Pass=11239
,P_FirstSepa_Ret=11240
,P_Vision_Align_Command=11241
,P_Vision_Surface_Command=11242
,P_Vision_Stack_Command=11243
,P_Vision_Existence_Command=11244
,P_Vision_EmptyTable_Command=11245
,P_Vision_FirstSepa_Command=11246
,P_Selected_Align_Inspection_Unit=11247
,P_Selected_Surface_Inspection_Unit=11248
,P_Selected_Stack_Inspection_Unit=11249
,P_Selected_Existence_Inspection_Unit=11250
,P_Selected_EmptyTable_Inspection_Unit=11251
,P_Set_Cathode_Align_Zero_Pos=11252
,P_Set_Anode_Align_Zero_Pos=11253
,P_Vision_Align_State_Machine=11254
,P_Vision_Surface_State_Machine=11255
,P_Vision_Stack_State_Machine=11256
,P_Vision_Existence_State_Machine=11257
,P_Vision_EmptyTable_State_Machine=11258
,P_Vision_FirstSepa_State_Machine=11259
,P_Vision_Align_Status=11260
,P_Vision_Surface_Status=11261
,P_Vision_Stack_Status=11262
,P_Vision_Existence_Status=11263
,P_Vision_EmptyTable_Status=11264
,P_Vision_FirstSepa_Status=11265
,P_Cathode_Align_Table_Move=11268
,P_Anode_Align_Table_Move=11269
,P_Vision_Anode_Cell_Existence=11270
,P_Vision_Cathode_Cell_Existence=11271
,P_Align_Sheet_CHK=11272
,P_Anode_NG_Code=11273
,P_Cathode_NG_Code=11274
,P_Stack_NG_Code=11275
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
,P_Stop_Debug_Flag=11276
,P_Stop_Status_Check_Address=11399
,P_Stop_Status_Save_Address=11400
,P_Stop_Check_RTN=11401
,P_Old_Total_Unit_Bit=11406
,P_Memory_Tower_Dec_Result=11407
,P_PNP_Move_Timer=11417
,P_PNP_Move_Delay_Time=11418
,P_Stop_Memory_Pos_RTN=11419
,P_Slave1_Motion_Command=11420
,P_Slave2_Motion_Command=11421
,P_Slave3_Motion_Command=11422
,P_Slave4_Motion_Command=11423
,P_Slave5_Motion_Command=11424
,P_Slave6_Motion_Command=11425
,P_Slave7_Motion_Command=11426
,P_Slave8_Motion_Command=11427
,P_Slave9_Motion_Command=11428
,P_Slave10_Motion_Command=11429
,P_Slave11_Motion_Command=11430
,P_Slave12_Motion_Command=11431
,P_Slave13_Motion_Command=11432
,P_Slave14_Motion_Command=11433
,P_Slave15_Motion_Command=11434
,P_Slave16_Motion_Command=11435
,P_Slave17_Motion_Command=11436
,P_Slave18_Motion_Command=11437
,P_Slave19_Motion_Command=11438
,P_Slave20_Motion_Command=11439
,P_PNP_90_Deg_TM=11440
,P_PNP_90_Deg_TA=11441
,P_PNP_90_Deg_TS=11442
,P_PNP_Ready_TM=11443
,P_PNP_Ready_TA=11444
,P_PNP_Ready_TS=11445
,P_PNP_45_Deg_TM=11446
,P_PNP_45_Deg_TA=11447
,P_PNP_45_Deg_TS=11448
,P_PROG_21_Program_Ver=2781
,P_PROG_23_Program_Ver=2783
,P_PROG_24_Program_Ver=2784
,P_PROG_25_Program_Ver=2785
,P_PROG_26_Program_Ver=2786
,P_PROG_27_Program_Ver=2787
,P_PROG_28_Program_Ver=2788
,P_PROG_30_Program_Ver=2790
,P_Master_Motion_Trigger=11449
,P_Parity_Bit=11450
,P_Master_Move=11451
,P_Master_TA=11452
,P_Master_TS=11453
,P_Master_TM=11454
,P_Anode_Count=11455
,P_Cathode_Count=11456
,P_Anode_Thickness=11457
,P_Cathode_Thickness=11458
,P_Sepa_Thickness=11459
,P_Anode_Thickness_PLC=11460
,P_Cathode_Thickness_PLC=11461
,P_Sepa_Thickness_PLC=11462
,P_Spool_Enable=11980
,P_Cathode_1St_Flow_Chart_Bit_Flag=11981
,P_Cathode_AT_Flow_Chart_Bit_Flag=11982
,P_Cathode_2nd_Flow_Chart_Bit_Flag=11983
,P_Anode_Clamp_Flow_Chart_Bit_Flag=11984
,P_Final_Roll_Flow_Chart_Bit_Flag=11985
,P_Stack_Table_Flow_Chart_Bit_Flag=11986
,P_Cathode_Clamp_Flow_Chart_Bit_Flag=11987
,P_Anode_2nd_Flow_Chart_Bit_Flag=11988
,P_Anode_AT_Flow_Chart_Bit_Flag=11989
,P_Anode_1St_Flow_Chart_Bit_Flag=11990
,P_Sepa_Unwinder_Flow_Chart_Bit_Flag=11991
,P_Slave5_Target_Z_For_Cutting=11992
,P_Slave31_Motion_Command=11993
,P_Pause_Err_Process=11994
,P_Pause_Err_Timer=11995
,P_Pause_Err_Count=11996
,P_Pause_Err_Use=11997
,P_Pause_Err_Use2=11998
,P_Anode_Pause_Signal_Err=11999
,P_Cathode_Pause_Signal_Err=12000
,P_Anode_Pause_Err=12001
,P_Anode_Pause_Err_Count=12002
,P_Execute_Wait_Mode_Memory_Tower=12013
,P_Execute_Vac_MNTR=12014
,P_Old_Cathode_Cur_Mode=12015
,P_Old_Anode_Cur_Mode=12056
,P_Anode_1TR_T_Belt_To_Align=12097
,P_Anode_1TR_T_Align_To_Belt=12098
,P_Anode_1TR_T_Ready_Pos=12099
,P_Anode_1TR_T_Ready_To_Align=12100
,P_Anode_1TR_T_Ready_To_Belt=12101
,P_Anode_Picker_Turn=12102
,P_Anode_2TR_T_Align_To_Stack=12103
,P_Anode_2TR_T_Stack_To_Align=12104
,P_Anode_Clamp_Off=12105
,P_Anode_Clamp_On=12106
,P_Anode_Clamp_Down=12107
,P_FR_Anode_Motion=12108
,P_FR_Cathode_Motion=12109
,P_Stack_Table_Down=12110
,P_Cathode_Clamp_On=12111
,P_Cathode_Clamp_Off=12112
,P_Cathode_Clamp_Down=12113
,P_Cathode_2TR_T_Align_To_Stack=12114
,P_Cathode_2TR_T_Stack_To_Align=12115
,P_Cathode_Picker_Turn=12116
,P_Cathode_1TR_T_Belt_To_Align=12117
,P_Cathode_1TR_T_Align_To_Belt=12118
,P_Cathode_1TR_T_Ready_Pos=12119
,P_Cathode_1TR_T_Ready_To_Align=12120
,P_Cathode_1TR_T_Ready_To_Belt=12121
,P_Anode_1TR_Z_Belt_To_Align=12122
,P_Anode_1TR_Z_Align_To_Belt=12123
,P_Anode_1TR_Z_Align_Down=12124
,P_Anode_1TR_Z_Align_UP=12125
,P_Anode_1TR_Z_Belt_Down=12126
,P_Anode_1TR_Z_Belt_UP=12127
,P_Anode_1TR_Z_Ready=12128
,P_Anode_1TR_Z_Align_Blow=12129
,P_Anode_1TR_Z_Belt_Vac=12130
,P_Cathode_1TR_Z_Belt_To_Align=12131
,P_Cathode_1TR_Z_Align_To_Belt=12132
,P_Cathode_1TR_Z_Align_Down=12133
,P_Cathode_1TR_Z_Align_UP=12134
,P_Cathode_1TR_Z_Belt_Down=12135
,P_Cathode_1TR_Z_Belt_UP=12136
,P_Cathode_1TR_Z_Ready=12137
,P_Cathode_1TR_Z_Align_Blow=12138
,P_Cathode_1TR_Z_Belt_Vac=12139
,P_Anode_2TR_Align_To_Stack=12140
,P_Anode_2TR_Stack_To_Align=12141
,P_Anode_2TR_Stack_Down=12142
,P_Anode_2TR_Stack_UP=12143
,P_Anode_2TR_Align_Down=12144
,P_Anode_2TR_Align_UP=12145
,P_Anode_2TR_Align_Vac=12146
,P_Anode_2TR_Stack_Blow=12147
,P_Anode_2TR_Stack_Sepa_Blow=12148
,P_FR_Last_Run_Motion=12149
,P_Servo_Dancer_Ready_Pos=12150
,P_Servo_Dancer_Ready_Offset=12151
,P_Servo_Dancer_Test=12152
,P_Align_Start_IO_Judgment=12153
,P_Driving_Clamp2=12154
,P_Driving_Clamp=12155
,P_MSA_Timer=12156
,P_SM_Cathode_Stack_MSA=12157
,P_SM_Anode_Stack_MSA=12158
,P_SM_Cathode_Align_MSA=12159
,P_SM_Anode_Align_MSA=12160
,P_MSA_Interlock=12161
,P_Anode_MSA_Final_Roll_Pos_Check=12162
,P_Anode_MSA_2nd_PNP_Pos_Check=12163
,P_Anode_MSA_1nd_PNP_Pos_Check=12164
,P_MSA_Err_Save_CA_Stack_MSA=12165
,P_MSA_Err_Save_AN_Stack_MSA=12166
,P_MSA_Err_Save_CA_Align_MSA=12167
,P_MSA_Err_Save_AN_Align_MSA=12168
,P_MSA_BTN_Err=12169
,P_Anode_Algin_MSA_RTN=12170
,P_Anode_Algin_MSA_RTN2=12171
,P_Cathode_Algin_MSA_RTN=12172
,P_Cathode_Stack_MSA_RTN=12173
,P_Anode_Stack_MSA_RTN=12174
,P_Anode_Align_MSA_Count=12175
,P_Cathode_Align_MSA_Count=12176
,P_Anode_Stack_MSA_Count=12177
,P_Cathode_Stack_MSA_Count=12178
,P_Cathode_Align_Stop_Blocked=12179
,P_Anode_Align_Stop_Blocked=12180
,P_Cathode_Stack_Stop_Blocked=12181
,P_Anode_Stack_Stop_Blocked=12182
,P_Anode_Align_MSA_Execute_Timer=12183
,P_Cathode_Align_MSA_Execute_Timer=12184
,P_Anode_Stack_MSA_Execute_Timer=12185
,P_Cathode_Stack_MSA_Execute_Timer=12186
,P_Anode_Align_Interlock_Blocked=12187
,P_Cathode_Align_Interlock_Blocked=12188
,P_Anode_Stack_Interlock_Blocked=12189
,P_Cathode_Stack_Interlock_Blocked=12190
,P_Anode_1TR_T_Align_POS=12191
,P_Anode_1TR_T_Belt_POS=12192
,P_Anode_1TR_T_Ready_POS=12193
,P_Anode_2TR_T_Align_POS=12194
,P_Anode_2TR_T_Stack_POS=12195
,P_Cathode_2TR_T_Align_POS=12196
,P_Cathode_2TR_T_Stack_POS=12197
,P_Cathode_1TR_T_Align_POS=12198
,P_Cathode_1TR_T_Belt_POS=12199
,P_Cathode_1TR_T_Ready_POS=12200
,P_Seq_Abort=12201
,P_Blocked_Abort=12202
,P_Abort_Flag=12203
,P_Opposite_Lane_1ST_TR_Safe_Pos=12204
,P_Opposite_Lane_P_PMAC_Status=12205
,P_Opposite_Lane_OFF_Not_Start=12206
,P_Pause_Alarm_Blocked=12207
,P_Old_Alarm_Arr=12208
,P_Cycle_Stop_Delay_Time=12209
,P_Cycle_Stop_Offset=12210
,P_Opposite_Lane_Abort_Alram_Flag=12211
,P_Cathode_Clmap_Y1_Ready_Pos=12212
,P_Cathode_Clmap_Y1_Clamp_Pos=12213
,P_Anode_Clmap_Y1_Ready_Pos=12214
,P_Anode_Clmap_Y1_Clamp_Pos=12215
,P_Cathode_Clmap_Y2_Ready_Pos=12216
,P_Cathode_Clmap_Y2_Clamp_Pos=12217
,P_Anode_Clmap_Y2_Ready_Pos=12218
,P_Anode_Clmap_Y2_Clamp_Pos=12219
,P_Cathode_Clamp_Z2_Ready_Pos=12220
,P_Cathode_Clamp_Z2_Clamp_Pos=12221
,P_Anode_Clamp_Z2_Ready_Pos=12222
,P_Anode_Clamp_Z2_Clamp_Pos=12223
,P_Cathode_Clamp_Z1_Ready_Pos=12224
,P_Cathode_Clamp_Z1_Clamp_Pos=12225
,P_Anode_Clamp_Z1_Ready_Pos=12226
,P_Anode_Clamp_Z1_Clamp_Pos=12227
,P_Cathode_Clamp_Z2_Cell_Down=12228
,P_Anode_Clamp_Z2_Cell_Down=12229
,P_Cathode_Clamp_Z1_Cell_Down=12230
,P_Anode_Clamp_Z1_Cell_Down=12231
,P_Single_Run_Pass=12232
,P_Cathode_2nd_PNP_Sepa_Blow=12233
,P_Cathode_2nd_PNP_Align_Blow=12234
,P_Cathode_2nd_PNP_Stack_Blow=12235
,P_Cathode_2nd_PNP_Align_Vac=12236
,P_Cathode_2nd_PNP_Align_Up_Motion=12237
,P_Cathode_2nd_PNP_Align_Down_Motion=12238
,P_Cathode_2nd_PNP_Stack_Up_Motion=12239
,P_Cathode_2nd_PNP_Stack_Down_Motion=12240
,P_Cathode_2nd_PNP_Stack_To_Align_Motion=12241
,P_Cathode_2nd_PNP_Align_To_Stack_Motion=12242
,P_Door_Open_Stop_Count=12243
,P_Buf_Stack_NG_Flag=12244
,P_Stop_1st_PNP_Move=12245
,P_Seq_Abort_Timer=12246
,P_Sync_Test=12247
,P_Dry_Pause_Flag=12248
,P_Dry_Run_Pasue_Timer=12249
,P_Resume_Stop_Blocked=12250
,P_Discharge_Wait=12251
,P_Command_Run_Flag=12252
,P_Stop_Cmd_Origin=12253
,P_Old_M_Y_Sepa_Cutter_SSR_On=12269
,P_Sepa_Cutter_SSR_Off_Time=12270
,P_Sepa_Cutter_SSR_Off=12271
,P_Sepa_Cutter_SSR_Off_Timer=12272
,P_Starting_Pause_IO_Flag=12273
,P_PLC03_Seq_Pause_Start_Flag=12274
,P_PLC03_Seq_Pause_Start_State_Machine=12275
,P_PLC03_Seq_Pause_Start_Status=12276
,P_ARC_NP_Push_BTN=12277
,P_ARC_UI_Push_BTN=12278
,P_M_Manual_ARC_BTN=12279
,P_Two_Btn_Active_Flag=12280
,P_Two_Btn_Interlock_Time=12281
,P_NP_Unwinder_Active_Hold=12282
,P_MAX_KGF=12283
,P_KGF_TO_DAC_RATIO=12284
,P_Dac_Out_Value=12285
,P_Recipe_Dancer_input_kgf=12286
,P_Cathode_NG_PNP_Vel_Zero_Set=12287
,P_Anode_NG_PNP_Vel_Zero_Set=12288
,P_Anode_Run_DR=12289
,P_Cathode_Run_DR=12290
,P_1st_UND_Grip_Time=12291
,P_1st_UND_Grip_Time_offset=12292
,P_1st_UND_Grip_Time_offset2=12293
,P_First_Sepa_Driving_Use=12294
,P_First_Sepa_Driving_Timing=12295
,P_Unloader_Safe_rtn=12296
,P_Final_Start=12297
,P_Driving_Start=12298
,P_Starting_Pause_IO_OFF_Flag=12299
,P_individual_Hold_return=12300
,P_individual_Hold_return2=12301
,P_Tension_Ready_Pass=12302
,P_Discharge_cal_rtn=12303
,P_Old_Tact_Current_Mode=12304
,P_Sheet_Clear=12305
,P_Anode_Clamp_On_Time2=12306
,P_Anode_Clamp_On_Time=12307
,P_Cathode_Clamp_On_Time=12308
,P_Cathode_Clamp_On_Time2=12309
,P_Offset=12310
,P_Man_C=12311
,P_NG_Box_Stop_Use=12312
,P_SlewTime=12313
,P_Old_SlewTime=12314
,P_Resume_MNTR1=12315
,P_Resume_MNTR2=12316
,P_Resume_MNTR3=12317
,P_Resume_MNTR4=12318
,P_Resume_MNTR5=12319
,P_Resume_MNTR6=12320
,P_Resume_MNTR7=12321
,P_Resume_MNTR8=12322
,P_Resume_MNTR9=12323
,P_Resume_MNTR10=12324
,P_Resume_MNTR11=12325
,P_Resume_MNTR12=12326
,P_old_P_Anode_Count=12327
,P_Sheet_Paper_BWD_Count=12328
,P_Stop_CHK=12329
,P_Seq_Pause=12330
,P_Seq_Pause2=12331
,P_MSA_TimeBase_Rtn=12332
,P_Old_Vison_Read_EPC_Camera_Move_Request=12333
,P_First_Sepa_Time_Out_Count=12334
,P_Align_Retry_Cal_RTN=12335
,P_Driving_Cal=12352
,P_Driving_End_Pos=12353
,P_Driving_Start_Pos=12354
,P_Anode_Align_Blow=12360
,P_Cathode_Align_Blow=12361
,P_Home_Pos_Err_Cnt1=12402
,P_Home_Pos_Err_Cnt2=12403
,P_Home_Pos_Err_Cnt3=12404
,P_Home_Pos_Err_Cnt4=12405
,P_Align_Inspection_Delay=12406
,P_Anode_Sheet_Test=12412
,P_Cathode_Sheet_Test=12413
,P_Anode_Sheet_Interlock_Timing=12414
,P_Cathode_Sheet_Interlock_Timing=12415
,P_Discharge_Err_MNTR=12416
,P_Arc_Err_MNTR=12417
,P_Abort_Cnt=12418
,P_EMO_Cnt=12419
,P_Dry_Run_Inspection=12420
,P_Servo_ON_MNTR1=12421
,P_Servo_ON_MNTR2=12422
,P_Servo_ON_MNTR3=12423
,P_Servo_ON_MNTR4=12424
,P_Servo_ON_MNTR5=12425
,P_Servo_ON_MNTR6=12426
,P_Servo_ON_MNTR7=12427
,P_Servo_ON_MNTR8=12428
,P_Servo_ON_MNTR9=12429
,P_Servo_ON_MNTR10=12430
,P_Servo_ON_MNTR11=12431
,P_Servo_ON_MNTR12=12432
,P_Servo_ON_MNTR13=12433
,P_Servo_ON_MNTR14=12434
,P_Servo_ON_MNTR15=12435
,P_Servo_ON_MNTR16=12436
,P_Servo_ON_MNTR17=12437
,P_Servo_ON_MNTR18=12438
,P_Servo_ON_MNTR19=12439
,P_Servo_ON_MNTR20=12440
,P_Servo_ON_MNTR21=12441
,P_Servo_ON_MNTR22=12442
,P_Servo_ON_MNTR23=12443
,P_Servo_ON_MNTR24=12444
,P_Servo_ON_MNTR25=12445
,P_Servo_ON_MNTR26=12446
,P_Servo_ON_MNTR27=12447
,P_Servo_ON_MNTR28=12448
,P_Servo_ON_MNTR29=12449
,P_Servo_ON_MNTR30=12450
,P_X_IO_WinMess_Connect_BTN=12451
,P_Ecat_ReConnetion_State_Machine=12452
,P_Ecat_Reconnection_Timer=12453
,P_Y_Ecat_Reconnecting=12454
,P_Y_Ecat_ReConnection_Fail=12455
,P_Y_Ecat_ReConnection_Complete=12456
,P_X_Ecat_Reconnection_BTN=12457
,P_X_Interlock_Enable_BTN=12458
,P_X_Old_MC_Reconnect_BTN_Signal=12459
,P_BTN_1st_ULD_Data_Clear=12460
,P_Old_BTN_1st_ULD_Data_Clear=12461
,P_Old_M_Y_1st_Unloader_UnGrip_Sol=12462
,P_Sepa_Cutter_Heat_Meter=12463
,P_Sepa_Cutter_Heating_Timer=12464
,P_Middle_Skip_Off_Flag=12465
,P_Stop_MNTR1=12466
,P_Stop_MNTR2=12467
,P_Sheet_Pos_Offset=12468
,P_Stopping_Wait_Time=12469
,P_Stopping_Test_Timer=12470
,P_1st_ULD_OK_Lamp=12481
,P_1st_ULD_NG_Lamp=12482
,P_1st_ULD_Sample_QC_Lamp=12483
,P_Proceed_Execute_Flag=12484
,P_Continuous_Call_Stack_NG_Flag=12485
,P_Continuous_Call_Stack_OK_Flag=12486
,P_Cathode_Picker_Home_Pos=12487
,P_Anode_Picker_Home_Pos=12488
,P_FR_Sheet_Paper_Home_Chk=12489
,P_Align_TimeOut1=12490
,P_Align_TimeOut2=12491
,P_Align_TimeOut3=12492
,P_Align_TimeOut4=12493
,P_Align_TimeOut5=12494
,P_Align_TimeOut6=12495
,P_Anode_Align_OK=12496
,P_Cathode_Align_OK=12497
,P_Anode_Align_NG=12498
,P_Cathode_Align_NG=12499
,P_Anode_Align_TimeOut=12500
,P_Cathode_Align_TimeOut=12501
,P_Anode_Surf_OK=12502
,P_Cathode_Surf_OK=12503
,P_Anode_Surf_NG=12504
,P_Cathode_Surf_NG=12505
,P_Anode_Surf_TimeOut=12506
,P_Cathode_Surf_TimeOut=12507
,P_Surf_TimeOut1=12508
,P_Surf_TimeOut2=12509
,P_Surf_TimeOut3=12510
,P_Surf_TimeOut4=12511
,P_Surf_TimeOut5=12512
,P_Surf_TimeOut6=12513
,P_Anode_Stack_TimeOut=12514
,P_Cathode_Stack_TimeOut=12515
,P_Anode_Stack_OK=12516
,P_Cathode_Stack_OK=12517
,P_Anode_Stack_NG=12518
,P_Cathode_Stack_NG=12519
,P_Stack_TimeOut1=12520
,P_Stack_TimeOut2=12521
,P_Stack_TimeOut3=12522
,P_Align_Move_Err=12523
,P_Ecat_Test=12524
,P_Scan_Aver=12527
,P_Scan_MAX=12528
,P_Cathode_1TR_Picker_T_Belt_POS=12529
,P_Cathode_1TR_Picker_T_Align_POS=12530
,P_Anode_1TR_Picker_T_Belt_POS=12531
,P_Anode_1TR_Picker_T_Align_POS=12532
,P_1TR_Picker_T_Align_POS=12533
,P_AVRG_Lower_Sepa_Thickness_mm=12534
,P_AVRG_Upper_Sepa_Thickness_mm=12535
,P_PLC06_Upper_Curr_Unwinder_Thickness_mm=12536
,P_PLC06_Lower_Curr_Unwinder_Thickness_mm=12537
,P_Upper_Curr_Spool_Radius=12538
,P_Lower_Curr_Spool_Radius=12539
,P_PLC06_Curr_Upper_Distance_mm=12540
,P_PLC06_Curr_Lower_Distance_mm=12541
,P_Upper_Sepa_Min_Distance_mm=12542
,P_Lower_Sepa_Min_Distance_mm=12543
,P_PLC06_Sepa_Change_Set=12544
,P_Upper_Sepa_To_Sensor_Min_Dis=12545
,P_Upper_Sepa_To_Sensor_Max_Dis=12546
,P_Upper_Sensor_To_Unwinder_Core_Dis=12547
,P_Upper_Sensor_Min_AD=12548
,P_Upper_Sensor_Max_AD=12549
,P_Lower_Sepa_To_Sensor_Min_Dis=12550
,P_Lower_Sepa_To_Sensor_Max_Dis=12551
,P_Lower_Sensor_To_Unwinder_Core_Dis=12552
,P_Lower_Sensor_Min_AD=12553
,P_Lower_Sensor_Max_AD=12554
,M_AI_Upper_Sepa_Sensing=372
,M_AI_Lower_Sepa_Sensing=373
,P_Status_NP_BTN_Lower_Unwinder=12555
,P_Status_NP_BTN_Upper_Unwinder=12556
,P_Driving_CamTable_Scale_Change_Flag=12557
,P_FR_Driving_Diameter=12558
,P_FR_Driving_Floating_Point=12559
,P_FR_Driving_Reward=12560
,P_Unwinder_Master_Following_Use_Flag=12561
,P_Unwinder_Master_Following_On=12562
,P_Old_Master_Following_Start=12563
,P_Unwinder_Master_Following_Scale=12564
,P_Unwinder_Jog_Use_Flag=12565
,P_Old_Jog_Start=12566
,P_Unwinder_Jog_Total_Time=12567
,P_Unwinder_Ta=12568
,P_Unwinder_Ts=12569
,P_Unwinder_Tm=12570
,P_Unwinder_1mm_Deg=12571
,P_Unwinder_Jog_Pos=12572
,P_Unwinder_Jog_Cnt=12573
,P_PLC06_Frist_Flag=12574
,P_Sepa_AI=12575
,P_PLC06_Reel_Upper_Change_Flag=12576
,P_PLC06_Reel_Lower_Change_Flag=12577
,P_Spool_Ready_Enable_Flag=12578
,P_Spool_Lack_Flag=12579
,P_Sepa_DR_Start_Flag=12580
,P_cdTime_Tact_Sec=12581
,P_Master_Tact_Sec=12582
,P_Prev_Err_Pos=12583
,P_Cur_Arc_Rad=12584
,P_Cur_Arc_Deg=12585
,P_Spool_Velocity=12586
,P_Lin_Prop_Vel=12587
,P_Err_Pos=12588
,P_Lin_Deriv_Vel=12589
,P_Lin_Dacer_Kd=12590
,P_Lin_Dacer_Kp=12591
,P_Running_CDTimer=12592
,P_Unwinder_Jog_Ta=12593
,P_Unwinder_Jog_Ts=12594
,P_Unwinder_Vel_Test_Time=12595
,P_Set_Interval_Time=12596
,P_PLC06_Upper_Sepa_AI_Timer=12597
,P_PLC06_Upper_Sepa_AI_Data=12598
,P_PLC06_Upper_Sepa_AI_Cnt=12599
,P_PLC06_Upper_AVRG_Sensor_Data=12600
,P_PLC06_Lower_Sepa_AI_Timer=12601
,P_PLC06_Lower_Sepa_AI_Data=12602
,P_PLC06_Lower_Sepa_AI_Cnt=12603
,P_PLC06_Lower_AVRG_Sensor_Data=12604
,P_PLC06_Sepa_Upper_Thickness_Timer=12605
,P_PLC06_Sepa_Upper_Thickness_Data=12606
,P_PLC06_Sepa_Upper_Thickness_Cnt=12607
,P_PLC06_Sepa_Lower_Thickness_Timer=12608
,P_PLC06_Sepa_Lower_Thickness_Data=12609
,P_PLC06_Sepa_Lower_Thickness_Cnt=12610
,P_Sepa_Thickness_Chk_Timer=12611
,P_Spool_Length=12612
,P_Cascade_Sf_Driving_Value=12613
,P_Cascade_Sf_None_Driving_Value=12614
,P_Sepa_Min_Value_Cal_Cmd=12615
,P_Total_Sepa_Need_Length=12616
,P_Alpa=12617
,P_Sepa_Num_of_Turns=12618
,P_Sepa_Turn_Num=12619
,P_Accumulate_Value=12620
,P_Sharft_to_Sepa_Core_mm=12621
,P_Sepa_Cal_Circum=12622
,P_Sepa_Min_Need_Thickness=12623
,P_Sepa_Min_Thickness_Cmd=12624
,P_Sepa_Accumulate_Cmd=12625
,P_Sepa_Required_Amount=12626
,P_Sepa_Current_Thickness=12627
,P_Sepa_Initial_Tickness=12628
,P_Sepa_Required_Update_Timer=12629
,P_TEST_EPC_Interlock_Auto=12630
,P_TEST_EPC_Interlock_Manual=12631
,P_Discharge_Total_Tact=12632
,P_PLC15_Sub_Function_Dryrun_Active_Flag=12645
,P_Sepa_Rotation_Sequence_Run_Trigger_Cnt=12646
,P_Sepa_Mode_Sepa_Recipe_Count=12647
,P_Discharged_After_End_Trigger=12648
,P_Unloader_1st_Grip_Delay=12649
,P_Separate_Cutter_Heating_Limit_Value=12650
,P_Separate_Cutting_Current=12651
,P_Separate_Cutter_Change_Cycle=12652
,P_X_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger=12653
,P_X_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger=12654
,P_X_Cathode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger=12655
,P_X_Anode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger=12656
,P_X_Stack_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger=12657
,P_Interlock_Messege_Confirmed=12658
,P_X_MC_Communication_HeartBit=12659
,P_SV_Cathode_Count=12660
,P_SV_Anode_Count=12661
,P_SV_Cathode_Reference_Thickness=12665
,P_SV_Anode_Reference_Thickness=12666
,P_SV_Stack_Table_Damper_Cathode=12667
,P_SV_Stack_Table_Damper_Anode=12668
,P_SV_Sepa_Reference_Thickness=12669
,P_SV_Jelly_Roll_Width=12670
,P_Cathode_Align_Continuous_NG_Recipe=12671
,P_Anode_Align_Continuous_NG_Recipe=12672
,P_Stack_Vision_Continuous_NG_Recipe=12673
,P_PLC_Recipe_EPC_Sepa_Count=12674
,P_PLC_Recipe_Revise_Sepa=12675
,P_X_PLC_to_PMAC_Correction_Value=12676
,P_Anode_Align_Continuous_NG_Check_range=12677
,P_Cathode_Align_Continuous_NG_Check_range=12678
,P_Stack_Align_Continuous_NG_Check_range=12679
,P_Cathode_Surface_Continuous_NG_Recipe=12680
,P_Anode_Surface_Continuous_NG_Recipe=12681
,P_Cathode_Surface_Continuous_NG_Check_range=12682
,P_Anode_Surface_Continuous_NG_Check_range=12683
,P_Servo_Dancer_Alarm_Maximum_Angle_Value=12684
,P_Servo_Dancer_Alarm_Minimum_Angle_Value=12685
,P_Current_Selected_Spool_Rev_Counts_Init_Read=12686
,P_Spool_ARC_Distance_mm=12687
,P_ARC_Upper_Request_Sepa_Thickness_mm=12688
,P_ARC_Lower_Request_Sepa_Thickness_mm=12689
,P_Selected_Spool_Arc_Set_Rev_Counts_Value=12690
,P_Set_Cnt_FR_Moving_Sepa_ARC=12691
,P_Current_Selected_Spool_Rev_Counts=12692
,P_AI_Cathode_Clamp_Damper=12693
,P_AI_Anode_Clamp_Damper=12694
,P_Select_Sheet_Value=12705
,P_BTN_Config_Setup_Mode_Select=12706
,P_Sepa_Thickness_Max_Value=12707
,P_AI_Cathode_Clamp_Damper_Zero_Mpa_Analog_Value=12708
,P_AI_Anode_Clamp_Damper_Zero_Mpa_Analog_Value=12709
,P_Accumulated_Movement_MM_Unit_Cathode_1ST_pnp=12710
,P_Accumulated_Movement_MM_Unit_Anode_1ST_pnp=12711
,P_Accumulated_Movement_MM_Unit_Cathode_2nd_pnp=12712
,P_Accumulated_Movement_MM_Unit_Anode_2nd_pnp=12713
,P_AI_Anode_Clamp_Damper_Mpa=12714
,P_AI_Cathode_Clamp_Damper_Mpa=12715
,P_Current_Whole_Stack_Jelly_Roll_Thinckness_mm=12716
,P_Upper_Sepa_Current_Thickness_um=12717
,P_Lower_Sepa_Current_Thickness_um=12718
,P_Spool_Rotate_Distance=12719
,Spool_Diameter=12720
,P_Current_FR_Moving_Cnt_To_PlC=12721
,P_MES_APC_Select_Btn=12722
,P_AO_Anode_Clamp_Damper=12723
,P_AO_Cathode_Clamp_Damper=12724
,P_Sepa_Length=12725
,P_Minus_Limit_Detect_Popup_Flag=12726
,P_Plus_Limit_Detect_Popup_Flag=12727
,P_Fatal_Fe_Limit_Detect_Popup_Flag=12728
,P_Emergency_Alarm_Popup_Flag=12729
,P_SepaArcing_Popup_Flag=12730
,P_Y_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger=12731
,P_Y_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger=12732
,P_Y_Cathode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger=12733
,P_Y_Anode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger=12734
,P_Y_Stack_Align_Calibration_twisted_Cycle_Stop_Request_Trigger=12735
,P_Current_Selected_Sheet_Value=12736
,P_Status_Config_Mode_Select=12737
,P_Sepa_Thickness_Jig_Value=12738
,P_PV_Stack_Table_Damper_Cathode=12739
,P_PV_Stack_Table_Damper_Anode=12740
,P_Discharge_Standby_Pos_Tack_Time=12741
,P_Discharge_FR_MainZ_Pos_Tack_Time=12742
,P_Discharge_Unloader_Go_Pos_Tack_Time=12743
,P_Discharge_SubZ_Down_Pos_Tack_Time=12744
,P_Discharge_Unloader_Cutting_Pos_Tack_Time=12745
,P_Discharge_FR_Clamp_ON_Complete_Tack_Time=12746
,P_Discharge_Cutting_Complete_Tack_Time=12747
,P_Discharge_Motion_PG_Active_Starting_Tack_Time=12748
,P_Discharge_Motion_PG_Active_Complete_Tack_Time=12749
,P_Discharge_Sepa_First_Complete_Tack_Time=12750
,P_Discharge_Complete_Tack_Time=12751
,P_Discharge_Total_Tack_Time=12752
,P_Anode_Clamp_TackTime_Array0=12753
,P_Anode_Clamp_TackTime_Array1=12754
,P_Anode_Clamp_TackTime_Array2=12755
,P_Anode_Clamp_TackTime_Array3=12756
,P_Anode_Clamp_TackTime_Array4=12757
,P_Anode_Clamp_TackTime_Array5=12758
,P_Anode_Clamp_TackTime_Array6=12759
,P_Anode_Clamp_TackTime_Array7=12760
,P_Anode_Clamp_TackTime_Array8=12761
,P_Anode_Clamp_TackTime_Array9=12762
,P_Anode_Clamp_TackTime_Array10=12763
,P_Stacking_TackTime_Array0=12764
,P_Stacking_TackTime_Array1=12765
,P_Stacking_TackTime_Array2=12766
,P_Stacking_TackTime_Array3=12767
,P_Stacking_TackTime_Array4=12768
,P_Stacking_TackTime_Array5=12769
,P_Stacking_TackTime_Array6=12770
,P_Stacking_TackTime_Array7=12771
,P_Stacking_TackTime_Array8=12772
,P_Stacking_TackTime_Array9=12773
,P_Stacking_TackTime_Array10=12774
,P_Cathode_Clamp_TackTime_Array0=12775
,P_Cathode_Clamp_TackTime_Array1=12776
,P_Cathode_Clamp_TackTime_Array2=12777
,P_Cathode_Clamp_TackTime_Array3=12778
,P_Cathode_Clamp_TackTime_Array4=12779
,P_Cathode_Clamp_TackTime_Array5=12780
,P_Cathode_Clamp_TackTime_Array6=12781
,P_Cathode_Clamp_TackTime_Array7=12782
,P_Cathode_Clamp_TackTime_Array8=12783
,P_Cathode_Clamp_TackTime_Array9=12784
,P_Cathode_Clamp_TackTime_Array10=12785
,P_JellyRoll_Out_TackTime_Array0=12786
,P_JellyRoll_Out_TackTime_Array1=12787
,P_JellyRoll_Out_TackTime_Array2=12788
,P_JellyRoll_Out_TackTime_Array3=12789
,P_JellyRoll_Out_TackTime_Array4=12790
,P_JellyRoll_Out_TackTime_Array5=12791
,P_JellyRoll_Out_TackTime_Array6=12792
,P_JellyRoll_Out_TackTime_Array7=12793
,P_JellyRoll_Out_TackTime_Array8=12794
,P_JellyRoll_Out_TackTime_Array9=12795
,P_JellyRoll_Out_TackTime_Array10=12796
,P_Anode_1th_TackTime_Array0=12797
,P_Anode_1th_TackTime_Array1=12798
,P_Anode_1th_TackTime_Array2=12799
,P_Anode_1th_TackTime_Array3=12800
,P_Anode_1th_TackTime_Array4=12801
,P_Anode_1th_TackTime_Array5=12802
,P_Anode_1th_TackTime_Array6=12803
,P_Anode_1th_TackTime_Array7=12804
,P_Anode_1th_TackTime_Array8=12805
,P_Anode_1th_TackTime_Array9=12806
,P_Anode_1th_TackTime_Array10=12807
,P_Cathode_1th_TackTime_Array0=12808
,P_Cathode_1th_TackTime_Array1=12809
,P_Cathode_1th_TackTime_Array2=12810
,P_Cathode_1th_TackTime_Array3=12811
,P_Cathode_1th_TackTime_Array4=12812
,P_Cathode_1th_TackTime_Array5=12813
,P_Cathode_1th_TackTime_Array6=12814
,P_Cathode_1th_TackTime_Array7=12815
,P_Cathode_1th_TackTime_Array8=12816
,P_Cathode_1th_TackTime_Array9=12817
,P_Cathode_1th_TackTime_Array10=12818
,P_Anode_2th_TackTime_Array0=12819
,P_Anode_2th_TackTime_Array1=12820
,P_Anode_2th_TackTime_Array2=12821
,P_Anode_2th_TackTime_Array3=12822
,P_Anode_2th_TackTime_Array4=12823
,P_Anode_2th_TackTime_Array5=12824
,P_Anode_2th_TackTime_Array6=12825
,P_Anode_2th_TackTime_Array7=12826
,P_Anode_2th_TackTime_Array8=12827
,P_Anode_2th_TackTime_Array9=12828
,P_Anode_2th_TackTime_Array10=12829
,P_Cathode_2th_TackTime_Array0=12830
,P_Cathode_2th_TackTime_Array1=12831
,P_Cathode_2th_TackTime_Array2=12832
,P_Cathode_2th_TackTime_Array3=12833
,P_Cathode_2th_TackTime_Array4=12834
,P_Cathode_2th_TackTime_Array5=12835
,P_Cathode_2th_TackTime_Array6=12836
,P_Cathode_2th_TackTime_Array7=12837
,P_Cathode_2th_TackTime_Array8=12838
,P_Cathode_2th_TackTime_Array9=12839
,P_Cathode_2th_TackTime_Array10=12840
,P_Anode_Align_Table_TackTime_Array0=12841
,P_Anode_Align_Table_TackTime_Array1=12842
,P_Anode_Align_Table_TackTime_Array2=12843
,P_Anode_Align_Table_TackTime_Array3=12844
,P_Anode_Align_Table_TackTime_Array4=12845
,P_Anode_Align_Table_TackTime_Array5=12846
,P_Anode_Align_Table_TackTime_Array6=12847
,P_Anode_Align_Table_TackTime_Array7=12848
,P_Anode_Align_Table_TackTime_Array8=12849
,P_Anode_Align_Table_TackTime_Array9=12850
,P_Anode_Align_Table_TackTime_Array10=12851
,P_Cathode_Align_Table_TackTime_Array0=12852
,P_Cathode_Align_Table_TackTime_Array1=12853
,P_Cathode_Align_Table_TackTime_Array2=12854
,P_Cathode_Align_Table_TackTime_Array3=12855
,P_Cathode_Align_Table_TackTime_Array4=12856
,P_Cathode_Align_Table_TackTime_Array5=12857
,P_Cathode_Align_Table_TackTime_Array6=12858
,P_Cathode_Align_Table_TackTime_Array7=12859
,P_Cathode_Align_Table_TackTime_Array8=12860
,P_Cathode_Align_Table_TackTime_Array9=12861
,P_Cathode_Align_Table_TackTime_Array10=12862
,P_Anode_NG_PNP_TackTime_Array0=12863
,P_Anode_NG_PNP_TackTime_Array1=12864
,P_Anode_NG_PNP_TackTime_Array2=12865
,P_Anode_NG_PNP_TackTime_Array3=12866
,P_Anode_NG_PNP_TackTime_Array4=12867
,P_Anode_NG_PNP_TackTime_Array5=12868
,P_Anode_NG_PNP_TackTime_Array6=12869
,P_Anode_NG_PNP_TackTime_Array7=12870
,P_Anode_NG_PNP_TackTime_Array8=12871
,P_Anode_NG_PNP_TackTime_Array9=12872
,P_Anode_NG_PNP_TackTime_Array10=12873
,P_Cathode_NG_PNP_TackTime_Array0=12874
,P_Cathode_NG_PNP_TackTime_Array1=12875
,P_Cathode_NG_PNP_TackTime_Array2=12876
,P_Cathode_NG_PNP_TackTime_Array3=12877
,P_Cathode_NG_PNP_TackTime_Array4=12878
,P_Cathode_NG_PNP_TackTime_Array5=12879
,P_Cathode_NG_PNP_TackTime_Array6=12880
,P_Cathode_NG_PNP_TackTime_Array7=12881
,P_Cathode_NG_PNP_TackTime_Array8=12882
,P_Cathode_NG_PNP_TackTime_Array9=12883
,P_Cathode_NG_PNP_TackTime_Array10=12884
,P_Sepa_Unwinder_TackTime_Array0=12885
,P_Sepa_Unwinder_TackTime_Array1=12886
,P_Sepa_Unwinder_TackTime_Array2=12887
,P_Sepa_Unwinder_TackTime_Array3=12888
,P_Sepa_Unwinder_TackTime_Array4=12889
,P_Sepa_Unwinder_TackTime_Array5=12890
,P_Sepa_Unwinder_TackTime_Array6=12891
,P_Sepa_Unwinder_TackTime_Array7=12892
,P_Sepa_Unwinder_TackTime_Array8=12893
,P_Sepa_Unwinder_TackTime_Array9=12894
,P_Sepa_Unwinder_TackTime_Array10=12895
,P_Sepa_Unwinder_TackTime_Array11=12896
,P_1st_Unloader_TackTime_Array0=12897
,P_1st_Unloader_TackTime_Array1=12898
,P_1st_Unloader_TackTime_Array2=12899
,P_1st_Unloader_TackTime_Array3=12900
,P_1st_Unloader_TackTime_Array4=12901
,P_1st_Unloader_TackTime_Array5=12902
,P_1st_Unloader_TackTime_Array6=12903
,P_1st_Unloader_TackTime_Array7=12904
,P_1st_Unloader_TackTime_Array8=12905
,P_1st_Unloader_TackTime_Array9=12906
,P_1st_Unloader_TackTime_Array10=12907
,P_Cathode_1st_Vacuum_TackTime_Array1=12908
,P_Cathode_1st_Vacuum_TackTime_Array2=12909
,P_Cathode_1st_Vacuum_TackTime_Array3=12910
,P_Cathode_1st_Vacuum_TackTime_Array4=12911
,P_Cathode_1st_Vacuum_TackTime_Array5=12912
,P_Cathode_1st_Vacuum_TackTime_Array6=12913
,P_Cathode_1st_Vacuum_TackTime_Array7=12914
,P_Cathode_1st_Vacuum_TackTime_Array8=12915
,P_Cathode_1st_Vacuum_TackTime_Array9=12916
,P_Cathode_1st_Vacuum_TackTime_Array10=12917
,P_Cathode_Align_Vacuum_TackTime_Array1=12918
,P_Cathode_Align_Vacuum_TackTime_Array2=12919
,P_Cathode_Align_Vacuum_TackTime_Array3=12920
,P_Cathode_Align_Vacuum_TackTime_Array4=12921
,P_Cathode_Align_Vacuum_TackTime_Array5=12922
,P_Cathode_Align_Vacuum_TackTime_Array6=12923
,P_Cathode_Align_Vacuum_TackTime_Array7=12924
,P_Cathode_Align_Vacuum_TackTime_Array8=12925
,P_Cathode_Align_Vacuum_TackTime_Array9=12926
,P_Cathode_Align_Vacuum_TackTime_Array10=12927
,P_Cathode_2nd_Vacuum_TackTime_Array1=12928
,P_Cathode_2nd_Vacuum_TackTime_Array2=12929
,P_Cathode_2nd_Vacuum_TackTime_Array3=12930
,P_Cathode_2nd_Vacuum_TackTime_Array4=12931
,P_Cathode_2nd_Vacuum_TackTime_Array5=12932
,P_Cathode_2nd_Vacuum_TackTime_Array6=12933
,P_Cathode_2nd_Vacuum_TackTime_Array7=12934
,P_Cathode_2nd_Vacuum_TackTime_Array8=12935
,P_Cathode_2nd_Vacuum_TackTime_Array9=12936
,P_Cathode_2nd_Vacuum_TackTime_Array10=12937
,P_Anode_1st_Vacuum_TackTime_Array1=12938
,P_Anode_1st_Vacuum_TackTime_Array2=12939
,P_Anode_1st_Vacuum_TackTime_Array3=12940
,P_Anode_1st_Vacuum_TackTime_Array4=12941
,P_Anode_1st_Vacuum_TackTime_Array5=12942
,P_Anode_1st_Vacuum_TackTime_Array6=12943
,P_Anode_1st_Vacuum_TackTime_Array7=12944
,P_Anode_1st_Vacuum_TackTime_Array8=12945
,P_Anode_1st_Vacuum_TackTime_Array9=12946
,P_Anode_1st_Vacuum_TackTime_Array10=12947
,P_Anode_Align_Vacuum_TackTime_Array1=12948
,P_Anode_Align_Vacuum_TackTime_Array2=12949
,P_Anode_Align_Vacuum_TackTime_Array3=12950
,P_Anode_Align_Vacuum_TackTime_Array4=12951
,P_Anode_Align_Vacuum_TackTime_Array5=12952
,P_Anode_Align_Vacuum_TackTime_Array6=12953
,P_Anode_Align_Vacuum_TackTime_Array7=12954
,P_Anode_Align_Vacuum_TackTime_Array8=12955
,P_Anode_Align_Vacuum_TackTime_Array9=12956
,P_Anode_Align_Vacuum_TackTime_Array10=12957
,P_Anode_2nd_Vacuum_TackTime_Array1=12958
,P_Anode_2nd_Vacuum_TackTime_Array2=12959
,P_Anode_2nd_Vacuum_TackTime_Array3=12960
,P_Anode_2nd_Vacuum_TackTime_Array4=12961
,P_Anode_2nd_Vacuum_TackTime_Array5=12962
,P_Anode_2nd_Vacuum_TackTime_Array6=12963
,P_Anode_2nd_Vacuum_TackTime_Array7=12964
,P_Anode_2nd_Vacuum_TackTime_Array8=12965
,P_Anode_2nd_Vacuum_TackTime_Array9=12966
,P_Anode_2nd_Vacuum_TackTime_Array10=12967
,P_Final_Roll_TackTime_Array1=12968
,P_Final_Roll_TackTime_Array2=12969
,P_Final_Roll_TackTime_Array3=12970
,P_Final_Roll_TackTime_Array4=12971
,P_Final_Roll_TackTime_Array5=12972
,P_Final_Roll_TackTime_Array6=12973
,P_Final_Roll_TackTime_Array7=12974
,P_Final_Roll_TackTime_Array8=12975
,P_Final_Roll_TackTime_Array9=12976
,P_Final_Roll_TackTime_Array10=12977
,P_Sepa_ARC_TackTime_Array1=12978
,P_Sepa_ARC_TackTime_Array2=12979
,P_Sepa_ARC_TackTime_Array3=12980
,P_Sepa_ARC_TackTime_Array4=12981
,P_Sepa_ARC_TackTime_Array5=12982
,P_Sepa_ARC_TackTime_Array6=12983
,P_Sepa_ARC_TackTime_Array7=12984
,P_Sepa_ARC_TackTime_Array8=12985
,P_Sepa_ARC_TackTime_Array9=12986
,P_Sepa_ARC_TackTime_Array10=12987
,P_PACK_ML_Status_bit=12988
,P_Whole_Stacking_TackTime_MES_Report_Flag=12989
,P_JellyRoll_Out_TackTime_MES_Report_Flag=12990
,P_PV_Cathode_Count=12991
,P_PV_Anode_Count=12992
,P_PV_Cathode_NG_TR_NG_Count=12997
,P_PV_Anode_NG_TR_NG_Count=12998
,P_PV_Anode_Retry_NG_Count=12999
,P_PV_Cathode_Retry_NG_Count=13000
,P_PV_Align_INPUT_Count=13001
,P_Unloader_Grip_Pressure=13002
,P_Unloader_Heatmeter=13003
,P_Project_Ver_A=13004
,P_Project_Ver_B=13005
,P_Project_Ver_C=13006
,P_Project_Ver_D=13007
,P_EPC_Y_StandBy=13058
,P_SV_Read_Enable_Flag=13059
,P_Spool_Rotate_Distance_mm=13060
,P_Cathode_Clamp_Gantry=13161
,P_Anode_Clamp_Gantry=13162
,P_SV_Separator_Heting_Cutter_Change_Period=13163
,P_Cathode_Picker_Cylinder_Count=13176
,P_Anode_Picker_Cylinder_Count=13177
,P_SV_Stack_Table_Cathode_Reference_Value=13178
,P_SV_Stack_Table_Anode_Reference_Value=13179
,P_CA_DR_Offset=13180
,P_AN_DR_Offset=13181
,P_First_DR_Offset=13182
,P_Last_DR_Offset=13183
,P_BTN_QC_Sample_Flag=13184
,P_BTN_Loss_Sample_Flag=13185
,P_MSA_Sample_Flag=13186
,P_Sample_JR_Recipe_Count=13187
,P_Ca_Clamp_Y_Move=13188
,P_An_Clamp_Y_Move=13189
,P_Stack_Table_JR_Exist_Flag=13190
,P_Program_Monitoring_Lamp_Cell_Ready=13191
,P_Program_Monitoring_Lamp_Ready_Pos=13192
,P_Program_Monitoring_Lamp_Pause_Pos=13193
,P_Program_Monitoring_Lamp_Motion_Run=13194
,P_Program_Monitoring_Lamp_Cell_Remove=13195
,P_Program_Monitoring_Lamp_Cell_Supply=13196
,P_Program_Monitoring_Lamp_Sepa_Mode=13197
,P_Program_Monitoring_Lamp_Semi_Run=13198
,P_Program_Monitoring_Lamp_Stack_Mode=13199
,P_Program_Monitoring_Lamp_Anode_Aling_NG=13200
,P_Program_Monitoring_Lamp_Anode_Retry_NG=13201
,P_Program_Monitoring_Lamp_Cathode_Align_NG=13202
,P_Program_Monitoring_Lamp_Cathode_Retry_NG=13203
,P_Program_Monitoring_Lamp_Last_Stack_Mode=13204
,P_Program_Monitoring_Lamp_Jelly_Roll_OK=13205
,P_Program_Monitoring_Lamp_Jelly_Roll_NG=13206
,P_Program_Monitoring_Lamp_Jelly_Roll_Sepa=13207
,P_Program_Monitoring_Lamp_Cell_Out_Pos=13208
,P_Program_Monitoring_Lamp_Cell_Out_Mode=13209
,P_Master_Motion_Program_Flag=13210
,P_Master_Motion_CycleStop_Flag=13251
,P_PLC_08_Program_Ver=13302
,P_Old_PMAC_Commands=13303
,P_Old_PMAC_Status=13304
,P_Old_PMAC_Current_Mode=13305
,P_Mode_Function_State_Machine=13306
,P_PMAC_Commands=13307
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
,P_PMAC_Current_Mode=13542
,P_PMAC_Status=13543
,P_PMAC_Old_Mode=13544
,P_Ready_Tack_Chk_Timer=13545
,P_PLC09_Common_Command_Flag=13546
,P_PLC09_Common_Command_Complete_Bit=13547
,P_PLC09_Common_Execute_Flag=13548
,P_PLC09_Common_Execute_Complete_Bit=13549
,P_PLC09_Status=13550
,P_PLC09_Libraries_Var=13551
,P_Master_Motion_Program_ON_Flag=13552
,P_Master_Motion_Program_ON_Complete_Bit=13553
,P_Master_Motion_Program_OFF_Flag=13554
,P_Master_Motion_Program_OFF_Complete_Bit=13555
,P_Common_Function_Timbase_ON_Flag=13556
,P_Common_Function_Timbase_ON_Complete_Bit=13557
,P_Common_Function_Timbase_OFF_Flag=13558
,P_Common_Function_Timbase_OFF_Complete_Bit=13559
,P_Common_Function_Monitoring_Lamp_OFF_Flag=13560
,P_Common_Function_Monitoring_Lamp_OFF_Complete_Bit=13561
,P_Common_Function_Slave_Motion_Common_Init_Flag=13562
,P_Common_Function_Slave_Motion_Common_Init_Complete_Bit=13563
,P_Common_Function_OlD_Jog_Speed_Save_ON_Flag=13564
,P_Common_Function_OlD_Jog_Speed_Save_ON_Complete_Bit=13565
,P_Auto_Resetting_Sum_Ready_Pos_Check_Flag=13566
,P_Auto_Resetting_Sum_Ready_Pos_Check_Complete_bit=13567
,P_Manual_Resetting_Sum_Ready_Pos_Check_Flag=13568
,P_Manual_Resetting_Sum_Ready_Pos_Check_Complete_bit=13569
,P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Flag=13570
,P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Complete_Bit=13571
,P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Flag=13572
,P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Complete_Bit=13573
,P_Motion_Target_Position_Complete=13574
,P_SM_Auto_Run_Layer_Management=13575
,P_Buffer_Mode_Status_Sequence=13576
,P_SM_Sub_Function_Pause=13577
,P_PLC09_Resetting_Position_Check_State_Machine=13578
,P_PLC09_Resetting_Position_Moving_State_Machine=13579
,P_SM_Resetting_Pause_Position=13622
,P_20per_Vac_Error_Cycle_Stop_Flag=13623
,P_MNTR_PLC23_ARC_Complete=13624
,P_FUNCTION_PLC13_Sepa_Trigger_Enable=13625
,P_PLC_Recipe_PLC2_Revise_Sepa=13626
,P_Auto_Semi_Init_Status=13627
,P_Auto_Semi_Init_Chk_Bit=13628
,P_Old_PLC_HeartBit_Flag=13629
,P_PLC09_Init_Flag=13630
,P_Check_IDLE_CF_Flag=13631
,P_Check_EXECUTE_CF_Flag=13632
,P_Check_COMPLETING_CF_Flag=13633
,P_Check_COMPLETE_CF_Flag=13634
,P_Check_HOLDING_CF_Flag=13635
,P_Check_HOLD_CF_Flag=13636
,P_Check_UNHOLDING_CF_Flag=13637
,P_Check_SUSPENDING_CF_Flag=13638
,P_Check_SUSPENDED_CF_Flag=13639
,P_Check_UNSUSPENDING_CF_Flag=13640
,P_Check_STOPPED_CF_Flag=13641
,P_Check_ABORTED_CF_Flag=13642
,P_Check_CLEARING_CF_Flag=13643
,P_Check_IDLE_CF=13644
,P_Check_EXECUTE_CF=13645
,P_Check_COMPLETING_CF=13646
,P_Check_COMPLETE_CF=13647
,P_Check_HOLDING_CF=13648
,P_Check_HOLD_CF=13649
,P_Check_UNHOLDING_CF=13650
,P_Check_SUSPENDING_CF=13651
,P_Check_SUSPENDED_CF=13652
,P_Check_UNSUSPENDING_CF=13653
,P_Check_STOPPED_CF=13654
,P_Check_ABORTED_CF=13655
,P_Check_CLEARING_CF=13656
,P_Check_STOPPING_CF=13657
,P_Check_STARTING_CF=13658
,P_Check_RESETTING_CF=13659
,P_Check_STARTTING_CF=13660
,P_Queue_Clear=13661
,P_PLC09_Alarm_Test_Flag=13662
,P_PLC09_Test_Temp=13663
,P_PLC01_STOP_Queue_Complete_Flag=13664
,P_PMAC_All_Home_Cmd=13665
,P_PMAC_All_Home_Status=13666
,P_PMAC_Master_Following_Use_Flag=13667
,PnP_Belt_Waring_Pos=13668
,P_Old_X_PLC_Sync_Heart_Bit=13669
,P_Stack_Heart_Bit_Sync_Flag=13670
,P_Stack_Heart_Bit_Sunc_Complete_Bit=13671
,P_Resetting_Init_Module_RTN=13672
,P_PLC09_MNTR=13673
,P_Unloder_PNP_Home_IL_Pos=13674
,P_ECAT_Slave_Err_Bit=13675
,P_MC_Power_Down_Flag=13676
,P_Old_MC_Power_Down_Flag=13677
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
,P_Modbus_Delay_Timer=13678
,P_Modbus_Connect_Status=13679
,P_Modbus_Reconnect_MNTR=13680
,P_Ecat_Reconn_Chk_Lamp=13681
,P_MC_Reconn_Chk_Lamp=13682
,P_Cathode_1st_Vac_Set_Time=13683
,P_Cathode_2nd_Vac_Set_Time=13684
,P_Cathode_Align_Vac_Set_Time=13685
,P_Cathode_Align_Blow_Set_Time=13686
,P_Anode_1st_Vac_Set_Time=13687
,P_Anode_2nd_Vac_Set_Time=13688
,P_Sepa_Consume_Mode_Thickness_rate=13689
,P_Sepa_Anode_Recipe_Count=13690
,P_Sepa_Cathode_Recipe_Count=13691
,P_Discharge_Cathode_Recipe_Count=13692
,P_Discharge_Anode_Recipe_Count=13693
,P_Suspend_Discharge_Cathode_Counter=13694
,P_Suspend_Discharge_Anode_Counter=13695
,P_Suspend_Discharge_Waiting_Flag=13696
,P_Com_ARC_Sepa_Consume_Mode_Flag=13697
,P_Com_EPC_Sepa_Consume_Mode_Flag=13698
,P_Com_User_Sepa_Consume_Mode_Flag=13699
,P_Com_Dry_Mode_Flag=13700
,P_SM_Recipe_Value_Management=13701
,P_Sepa_Mode_Recipe_Count=13702
,P_Sepa_Mode_EPC_Recipe_Count=13703
,P_ARC_End_Sepa_Recipe_Count=13704
,P_Cathode_Align_Continuous_NG_Stop_Select=13805
,P_Anode_Align_Continuous_NG_Stop_Select=13806
,P_Stack_Vision_NG_Enable=13807
,P_Cathode_Surface_Continuous_NG_Stop_Select=13808
,P_Anode_Surface_Continuous_NG_Stop_Select=13809
,P_Anode_Trigger_IO_Test_Vision_PLC_Loop=13810
,P_Anode_Trigger_IO_Test_Motion_Loop=13811
,P_Cathode_Trigger_IO_Test_Vision_PLC_Loop=13812
,P_Cathode_Trigger_IO_Test_Motion_Loop=13813
,P_Stack_Trigger_IO_Test_Vision_PLC_Loop=13814
,P_Stack_Trigger_IO_Test_Motion_Loop=13815
,P_PLC12_Continuous_Buffer_Reset_Flag=13816
,P_PLC12_Anode_Sheet_Pick_Up_Flag=13832
,P_PLC12_Cathode_Sheet_Pick_Up_Flag=13833
,P_Hold_Anode_Sheet_Pick_Up_Flag=13834
,P_Hold_Cathode_Sheet_Pick_Up_Flag=13835
,P_Sheet_Interface_Complete_Pos=13836
,P_Anode_Sheet_Interface_Complete_Pos=13837
,P_Cathode_Sheet_Interface_Complete_Pos=13838
,P_Anode_2nd_TR_Maint_Check=13839
,P_Cathode_2nd_TR_Maint_Check=13840
,P_PLC12_Vacuum_1st_Cathode_MNTR_Timer=13878
,P_PLC12_Vacuum_2nd_Cathode_MNTR_Timer=13879
,P_PLC12_Vacuum_NG_Cathode_MNTR_Timer=13880
,P_PLC12_Vacuum_Align_Cathode_MNTR_Timer=13881
,P_PLC12_Vacuum_1st_Anode_MNTR_Timer=13882
,P_PLC12_Vacuum_2nd_Anode_MNTR_Timer=13883
,P_PLC12_Vacuum_NG_Anode_MNTR_Timer=13884
,P_PLC12_Vacuum_Align_Anode_MNTR_Timer=13885
,P_PLC12_Vacuum_1st_Cathode_Set_Time=13886
,P_PLC12_Vacuum_2nd_Cathode_Set_Time=13887
,P_PLC12_Vacuum_NG_Cathode_Set_Time=13888
,P_PLC12_Vacuum_Align_Cathode_Set_Time=13889
,P_PLC12_Vacuum_1st_Anode_Set_Time=13890
,P_PLC12_Vacuum_2nd_Anode_Set_Time=13891
,P_PLC12_Vacuum_NG_Anode_Set_Time=13892
,P_PLC12_Vacuum_Align_Anode_Set_Time=13893
,P_PLC12_Blow_1st_Cathode_MNTR_Timer=13934
,P_PLC12_Blow_2nd_Cathode_MNTR_Timer=13935
,P_PLC12_Blow_NG_Cathode_MNTR_Timer=13936
,P_PLC12_Blow_Align_Cathode_MNTR_Timer=13937
,P_PLC12_Blow_1st_Anode_MNTR_Timer=13938
,P_PLC12_Blow_2nd_Anode_MNTR_Timer=13939
,P_PLC12_Blow_NG_Anode_MNTR_Timer=13940
,P_PLC12_Blow_Align_Anode_MNTR_Timer=13941
,P_PLC12_Blow_1st_Cathode_Set_Time=13942
,P_PLC12_Blow_2nd_Cathode_Set_Time=13943
,P_PLC12_Blow_NG_Cathode_Set_Time=13944
,P_PLC12_Blow_Align_Cathode_Set_Time=13945
,P_PLC12_Blow_1st_Anode_Set_Time=13946
,P_PLC12_Blow_2nd_Anode_Set_Time=13947
,P_PLC12_Blow_NG_Anode_Set_Time=13948
,P_PLC12_Blow_Align_Anode_Set_Time=13949
,P_Vacuum_Reentry_Bit=13990
,P_Blow_Reentry_Bit=13991
,P_top=14072
,P_Queue_stack_top=14073
,P_Step_stack_top=14074
,P_Index_stack_top=14075
,P_Status_stack_top=14076
,NN_Step=14077
,NN_Index=14078
,P_PLC12_Frist=14084
,P_SM_Auto_Run_Status_Management=14085
,P_SM_Status_Main_Memory_Management=14086
,P_SM_Cell_Memory_Management=14087
,P_PLC12_Vacuum_Unit_Data=14120
,P_PLC12_Blow_Unit_Data=14121
,P_Stack_Algorithme_Cmd_Event_Status=14122
,P_PLC12_vacuum_Event_Status=14123
,P_PLC12_Blow_Event_status=14124
,P_PLC12_vacuum_DIO_Observer_Status=14125
,P_PLC12_Blow_DIO_Observer_Status=14126
,P_Resetting_Vacuum_MNTR_State_Machine=14127
,P_Heart_Bit_Time=14128
,P_Dancer_Angle_Alarm_Timer_Flag=14129
,P_Dancer_Angle_Alarm_Check_Timer=14130
,P_BTN_LED_LAMP=14131
,P_Old_BTN_LED_LAMP=14132
,P_PLC_TO_PMAC_Work_Confirm_Operation_Cnt=14133
,P_VISION_TO_PMAC_Work_Confirm_Operation_Ack_Cnt=14134
,P_Ca_AT_Retry_Cal_Move_Complete=14135
,P_An_AT_Retry_Cal_Move_Complete=14136
,P_Ca_AT_Retry_Cal_Cnt=14137
,P_An_AT_Retry_Cal_Cnt=14138
,P_Ca_AT_Retry_Cal_Complete=14139
,P_An_AT_Retry_Cal_Complete=14140
,P_An_AT_Retry_Cal_Pass=14141
,P_Ca_AT_Retry_Cal_Pass=14142
,P_Ca_Picker_T_Turn_Cnt_Flag=14143
,P_Ca_Picker_T_Turn_Cnt=14144
,P_Ca_Picker_T_Home_Type=14145
,P_An_Picker_T_Turn_Cnt_Flag=14146
,P_An_Picker_T_Turn_Cnt=14147
,P_An_Picker_T_Home_Type=14148
,P_Flag_Vac_Status_Initialize=14149
,P_SM_Vac_Initialize=14150
,P_Flag_Anode_1st_Vac_OFF=14151
,P_Flag_Anode_AT_Vac_OFF=14152
,P_Flag_Anode_2nd_Vac_OFF=14153
,P_Flag_Anode_NG_Vac_OFF=14154
,P_Flag_Cathode_1st_Vac_OFF=14155
,P_Flag_Cathode_AT_Vac_OFF=14156
,P_Flag_Cathode_2nd_Vac_OFF=14157
,P_Flag_Cathode_NG_Vac_OFF=14158
,P_Flag_Anode_1st_Vac_Initial_Alarm=14159
,P_Flag_Anode_AT_Vac_Initial_Alarm=14160
,P_Flag_Anode_2nd_Vac_Initial_Alarm=14161
,P_Flag_Anode_NG_Vac_Initial_Alarm=14162
,P_Flag_Cathode_1st_Vac_Initial_Alarm=14163
,P_Flag_Cathode_AT_Vac_Initial_Alarm=14164
,P_Flag_Cathode_2nd_Vac_Initial_Alarm=14165
,P_Flag_Cathode_NG_Vac_Initial_Alarm=14166
,P_Middle_Discharge_Ignore_Total_Count=14167
,P_Middle_Discharge_Ignore_Stack_Count=14168
,P_Middle_Discharge_Ignore_ON_Signal=14169
,P_Middle_Discharge_Ignore_OFF_Signal=14170
,P_Middle_Discharge_Ignore_Cell_Count=14171
,P_ARC_Middle_Discharge_Ignore_Vision_Check=14172
,P_ARC_Middle_Discharge_Ignore_ON_Flag=14173
,P_Middle_Discharge_Ignore_User_Sepa_Mode_Check=14174
,P_Flag_Sepa_Stack_Mode_CHK=14270
,P_Initialize_Read_Excom_Variables_Flag=14357
,P_Cathode_Clamp_MC_Cylinder_Count=14367
,P_Cathode_Clamp_OP_Cylinder_Count=14368
,P_Anode_Clamp_MC_Cylinder_Count=14369
,P_Anode_Clamp_OP_Cylinder_Count=14370
,P_Cathode_1ST_TR_Cylinder_Count=8003
,P_Anode_1ST_TR_Cylinder_Count=8004
,P_BTN_Cathode_Clamp_inside_Machine_Cylinder_Count_Clear=14371
,P_BTN_Cathode_Clamp_Middle_Cylinder_Count_Clear=14372
,P_BTN_Cathode_Clamp_outside_Machine_Cylinder_Count_Clear=14373
,P_BTN_Anode_Clamp_inside_Machine_Cylinder_Count_Clear=14374
,P_BTN_Anode_Clamp_Middle_Cylinder_Count_Clear=14375
,P_BTN_Anode_Clamp_outside_Machine_Cylinder_Count_Clear=14376
,P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear=14377
,P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear_Old=14378
,P_BTN_Anode_1ST_TR_Cylinder_Count_Clear=14379
,P_BTN_Anode_1ST_TR_Cylinder_Count_Clear_Old=14380
,P_RECIPE_PLC27_Manual_Interval=15396
,P_RECIPE_PLC27_Auto_Interval=15397
,P_Recipe_Speed_Value=15599
,P_Slave6_Target_X_For_Cell_Out=15600
,P_Poistion_error=15801
,P_Recipe_Count_Num=15852
,L_Motor_Status_Update_Interval=15853
,L_Motor_Recipe_Update_Interval=15854
,P_UI_Servo_On_Off=15855
,P_Jog_Sel_Count=15955
,P_User_Jog_Distance=16242
,P_BTN_Sel_Count=16593
,P_PC_BTN_No=16594
,P_BTN_Interlock_Update_Interval=16595
,P_Align_Table_Status_Update_Interval=16596
,P_Jelly_Roll_Total_Count_Old=16597
,P_Old_m4120=16598
,P_Old_m4121=16599
,P_Old_m4122=16600
,P_Old_m4123=16601
,P_Flag_Linear_Enc_Homezero_Complete_M17=16622
,P_Flag_Linear_Enc_Homezero_Complete_M18=16623
,P_Flag_Linear_Enc_Homezero_Complete_M19=16624
,P_Flag_Linear_Enc_Homezero_Complete_M20=16625
,P_CMD_Linear_ENC_Homezero_M17=16626
,P_CMD_Linear_ENC_Homezero_M18=16627
,P_CMD_Linear_ENC_Homezero_M19=16628
,P_CMD_Linear_ENC_Homezero_M20=16629
,P_RECIPE_PLC27_Alltime_Interval=16660
,P_Manual_Memory_Tower_Timer=16661
,P_Memory_Tower_Interval=16662
,P_PLC_14_Status_Cycle_Stop_Flag=16663
,P_Cathode_AlignTable_Cleaning_Pos_Status_Machine=16664
,P_Anode_AlignTable_Cleaning_Pos_Status_Machine=16665
,P_Status_Cathode_AlignTable_Cleaning_Pos=16666
,P_Status_Anode_AlignTable_Cleaning_Pos=16667
,P_CMD_Cathode_AlignTable_Cleaning_Pos=16668
,P_CMD_Anode_AlignTable_Cleaning_Pos=16669
,P_Cathode_2nd_pnp_Cleaning_Mode_Pos=16670
,P_Anode_2nd_pnp_Cleaning_Mode_Pos=16671
,P_Interlock_Test=16672
,P_PNP_Picker_T_Pos=16673
,P_NG_PNP_Pos=16674
,M_Old_X_BTN_Machine_READY=16675
,M_Old_X_BTN_Machine_START=16676
,M_Old_X_BTN_Machine_STOP=16677
,M_Old_X_BTN_Machine_RESET=16678
,M_Old_X_BTN_Machine_MODE=16679
,P_BTN_Motor_Pos_Check_RTN=16680
,P_BTN_Memory_Tower_Check_Bit=16681
,P_PMAC_Status_IDLE_Motor_Not_Pos=16682
,P_PMAC_Status_IDLE_Motor_Pos=16683
,P_BTN_Motor_Pos_Check_Monitor=16684
,P_PackML_Auto_Stop_Bit=16685
,P_BTN_IDLE_Motor_Not_Pos=16686
,M_X_BTN_Machine_Mode=16687
,M_Old_X_BTN_Machine_Mode=16688
,P_Lamp_Blinking_Timer=16689
,P_BTN_Ready_Lamp=16690
,P_BTN_Start_Lamp=16691
,P_BTN_Stop_Lamp=16692
,P_ARC_Name_Plate_Passive_Status=16693
,P_ARC_Passive_Status=16694
,P_NP_Spool_Number=16695
,P_ARC_Page_On=16696
,P_ARC_NP_Upper_Timer=16697
,P_ARC_Upper_Ready=16698
,P_ARC_NP_Upper_3rd_Step_Toggle_Variable=16699
,P_ARC_NP_Upper_7th_Step_Variable=16700
,P_ARC_NP_Upper_7th_Step_Edge_Variable=16701
,P_ARC_NP_Upper_Rot_ReRot_Blinking_Bit=16702
,P_ARC_NP_Lower_Timer=16703
,P_ARC_Lower_Ready=16704
,P_ARC_NP_Lower_3rd_Step_Toggle_Variable=16705
,P_ARC_NP_Lower_7th_Step_Variable=16706
,P_ARC_NP_Lower_7th_Step_Edge_Variable=16707
,P_ARC_NP_Lower_Rot_ReRot_Blinking_Bit=16708
,M_Old_X_ARC_NP_Ready=16709
,M_Old_X_ARC_NP_Unwinder_Rotation=16710
,M_Old_X_ARC_NP_Unwinder_Re_Rotation=16711
,P_Status_Clear_Flag=16712
,P_Status_Clear_RTN=16713
,P_MSA_BTN_On=16714
,P_Align_Take_Off_BTN_ON=16715
,P_ARC_NP_Upper_Ready_Check_Bit=16716
,P_ARC_NP_Lower_Ready_Check_Bit=16717
,P_Stopping_CycleStop_Status=16818
,P_Stopping_CycleStop_Seq_Index=16819
,P_Stopping_CycleStop_Precondition_Seq_Index=16820
,P_Stopping_CycleStop_Module_Status=16821
,P_Stopping_CycleStop_Cmd=16822
,P_Stopping_CycleStop_State_Machine=16823
,P_Final_Roll_Cathode_Pos_Status=16944
,P_Sheet_Paper_FWD_Pos_Status=16945
,P_Final_Roll_Vision_Pos_Status=16946
,P_Cathode_Clamp_ON_Status=16947
,P_Anode_Clamp_ON_Status=16948
,P_Anode_Clamp_OFF_Status=16949
,P_Partition_Up_Flag=16950
,P_Partition_Down_Flag=16951
,P_Partition_Avoid_Flag=16952
,P_Partition_Avoid_Z_Speed=16953
,P_Partition_Avoid_X_Speed=16954
,P_Partition_Avoid_T_Speed=16955
,P_Partition_Avoid_2nd_T_Pos=16956
,P_Partition_Step_Flag=16957
,P_Anode_NG_PNP_Tact_Time_Start=17038
,P_Cathode_NG_PNP_Tact_Time_Start=17039
,P_Anode_NG_PNP_Tact_Time_End=17040
,P_Cathode_NG_PNP_Tact_Time_End=17041
,P_Tact_Time_Final_Roller_Clamp=17232
,P_Tact_Time_Final_Roller_Unclamp=17233
,P_Tact_Time_Stack_Table_Down=17234
,P_Tact_Time_Stack_Table_Up=17235
,P_Tact_Time_Sepa_Cutting_Down=17236
,P_Tact_Time_Sepa_Cutting_Up=17237
,P_Tact_Time_ARC_Upper_Plate_Up=17238
,P_Tact_Time_ARC_Upper_Plate_Down=17239
,P_Tact_Time_ARC_Upper_Tilting_On=17240
,P_Tact_Time_ARC_Upper_Tilting_Off=17241
,P_Tact_Time_ARC_Upper_Cutter_Fwd=17242
,P_Tact_Time_ARC_Upper_Cutter_Bwd=17243
,P_Tact_Time_ARC_Upper_Clamp_On=17244
,P_Tact_Time_ARC_Upper_Clamp_Off=17245
,P_Tact_Time_ARC_Lower_Plate_Up=17246
,P_Tact_Time_ARC_Lower_Plate_Down=17247
,P_Tact_Time_ARC_Lower_Tilting_On=17248
,P_Tact_Time_ARC_Lower_Tilting_Off=17249
,P_Tact_Time_ARC_Lower_Cutter_Fwd=17250
,P_Tact_Time_ARC_Lower_Cutter_Bwd=17251
,P_Tact_Time_ARC_Lower_Clamp_On=17252
,P_Tact_Time_ARC_Lower_Clamp_Off=17253
,P_Tact_Time_Save_Final_Roller_Clamp_Time=17254
,P_Tact_Time_Save_Final_Roller_Unclamp_Time=17255
,P_Tact_Time_Save_Stack_Table_Down_Time=17256
,P_Tact_Time_Save_Stack_Table_Up_Time=17257
,P_Tact_Time_Save_Sepa_Cutting_Down_Time=17258
,P_Tact_Time_Save_Sepa_Cutting_Up_Time=17259
,P_Tact_Time_Save_ARC_Upper_Plate_Up_Time=17260
,P_Tact_Time_Save_ARC_Upper_Plate_Down_Time=17261
,P_Tact_Time_Save_ARC_Upper_Tilting_On_Time=17262
,P_Tact_Time_Save_ARC_Upper_Tilting_Off_Time=17263
,P_Tact_Time_Save_ARC_Upper_Cutter_Fwd_Time=17264
,P_Tact_Time_Save_ARC_Upper_Cutter_Bwd_Time=17265
,P_Tact_Time_Save_ARC_Upper_Clamp_On_Time=17266
,P_Tact_Time_Save_ARC_Upper_Clamp_Off_Time=17267
,P_Tact_Time_Save_ARC_Lower_Plate_Up_Time=17268
,P_Tact_Time_Save_ARC_Lower_Plate_Down_Time=17269
,P_Tact_Time_Save_ARC_Lower_Tilting_On_Time=17270
,P_Tact_Time_Save_ARC_Lower_Tilting_Off_Time=17271
,P_Tact_Time_Save_ARC_Lower_Cutter_Fwd_Time=17272
,P_Tact_Time_Save_ARC_Lower_Cutter_Bwd_Time=17273
,P_Tact_Time_Save_ARC_Lower_Clamp_On_Time=17274
,P_Tact_Time_Save_ARC_Lower_Clamp_Off_Time=17275
,P_Tact_Time_Array_Init=17396
,P_Last_Run_To_Discharge_Tact_Timer=17397
,P_Last_Run_To_Discharge_Tact_Time=17398
,P_Master_Trigger_Sync_Tact_Timer=17399
,P_Master_Trigger_Sync_Tact_Time=17400
,P_Vision_First_Sepa_Stack_Align_OK_PMAC_Flag=17401
,P_PLC18_EPC_Retry_Mode_Time_Use_Flag=17402
,P_PLC18_Vision_EPC_Correction_Request_Old=17403
,P_PLC18_EPC_Moving_Flag=17404
,P_PLC18_EPC_Moving_Status=17405
,P_PLC18_EPC_Move_State_Machine=17406
,P_PLC18_EPC_Move_Status=17407
,P_PLC18_EPC_inspection_Time=17408
,P_EPC_Insp_Time=17409
,P_EPC_Correction_Time=17410
,P_TEST_Max_EPC_Sensor_Value_um=17411
,P_PLC18_EPC_Moving_Timer=17412
,P_EPC_Axis_Target_Y=17423
,P_Com_After_Sepa_Mode_Status=17424
,P_PLC18_PLC_to_PMAC_Correction_Value=17425
,P_PLC_EPC_Status=17426
,P_EPC_Retry_Over_Alarm_Flag=17427
,P_ARC_EPC_Vision_Value_Apply_Bit=17428
,P_ARC_EPC_Vision_Value_Apply_Flag=17429
,P_ARC_EPC_Vision_Value_Apply_State_Machine=17430
,P_ARC_EPC_Vision_Value_Apply_Timer=17431
,P_ARC_EPC_Vision_Value_Apply_Time=17432
,P_AH_Home_Status=17433
,P_Resetting_All_Home_Command=17434
,P_PnP_Init_Pos=17435
,P_NG_PnP_Warning_Pos=17436
,P_PnP_Stack_Pos=17437
,P_PnP_Align_Pos=17438
,P_Down_Pos=17439
,P_Homing_Alarm_Time=17440
,P_All_Home_Stop_Cmd=17491
,P_Home_First_Move=17492
,P_AH_CA_1st_Rtn=17673
,P_AH_CA_1st_Act_Rtn=17674
,P_AH_AN_1st_Rtn=17675
,P_AH_AN_1st_Act_Rtn=17676
,P_AH_CA_2nd_Rtn=17677
,P_AH_CA_2nd_Act_Rtn=17678
,P_AH_AN_2nd_Rtn=17679
,P_AH_AN_2nd_Act_Rtn=17680
,P_AH_CA_NG_Rtn=17681
,P_AH_CA_NG_Act_Rtn=17682
,P_AH_AN_NG_Rtn=17683
,P_AH_AN_NG_Act_Rtn=17684
,P_CA_1st_SM=17685
,P_AN_1st_SM=17686
,P_CA_2nd_SM=17687
,P_AN_2nd_SM=17688
,P_CA_NG_SM=17689
,P_AN_NG_SM=17690
,P_Unloader_Crush_Pos=17691
,P_DD_Motor_45Deg=17692
,P_DD_M_Home_Pos_Flag=17749
,P_WAIT_INDEX=17750
,P_FR_Cmd_Check_Flag=17801
,P_PV_Separator_Dancer_Pressure=17802
,P_PV_Cathode_Clamp_Pressure=17803
,P_PV_Anoode_Clamp_Pressure=17804
,P_PV_Cathode_Final_Roller_X_Axis=17805
,P_PV_Anode_Final_Roller_X_Axis=17806
,P_PV_Cathode_Clamp_ON_Y1_Axis_Pos=17807
,P_PV_Cathode_Clamp_ON_Y2_Axis_Pos=17808
,P_PV_Cathode_Clamp_ON_Z1_Axis_Pos=17809
,P_PV_Cathode_Clamp_ON_Z2_Axis_Pos=17810
,P_PV_Anode_Clamp_ON_Y1_Axis_Pos=17811
,P_PV_Anode_Clamp_ON_Y2_Axis_Pos=17812
,P_PV_Anode_Clamp_ON_Z1_Axis_Pos=17813
,P_PV_Anode_Clamp_ON_Z2_Axis_Pos=17814
,P_PV_Cathode_2th_AT_T_Axis_Pos=17815
,P_PV_Cathode_2th_ST_T_Axis_Pos=17816
,P_PV_Cathode_2th_AT_Z_Axis_Pos=17817
,P_PV_Cathode_2th_ST_Z_Axis_Pos=17818
,P_PV_Anode_2th_AT_T_Axis_Pos=17819
,P_PV_Anode_2th_ST_T_Axis_Pos=17820
,P_PV_Anode_2th_AT_Z_Axis_Pos=17821
,P_PV_Anode_2th_ST_Z_Axis_Pos=17822
,P_PV_Cathode_1th_Ready_T_Axis_Pos=17823
,P_PV_Cathode_1th_CV_T_Axis_Pos=17824
,P_PV_Cathode_1th_AT_T_Axis_Pos=17825
,P_PV_Cathode_1th_Ready_Z_Axis_Pos=17826
,P_PV_Cathode_1th_CV_Z_Axis_Pos=17827
,P_PV_Cathode_1th_AT_Z_Axis_Pos=17828
,P_PV_Anode_1th_Ready_T_Axis_Pos=17829
,P_PV_Anode_1th_CV_T_Axis_Pos=17830
,P_PV_Anode_1th_AT_T_Axis_Pos=17831
,P_PV_Anode_1th_Ready_Z_Axis_Pos=17832
,P_PV_Anode_1th_CV_Z_Axis_Pos=17833
,P_PV_Anode_1th_AT_Z_Axis_Pos=17834
,P_PV_Cathode_NG_AT_T_Axis_Pos=17835
,P_PV_Cathode_NG_Box_T_Axis_Pos=17836
,P_PV_Anode_NG_AT_T_Axis_Pos=17837
,P_PV_Anode_NG_Box_T_Axis_Pos=17838
,P_SemiRun_Separator_Dancer_Pressure_Flag=17839
,P_SemiRun_Cathode_Clamp_Pressure_Flag=17840
,P_SemiRun_Anoode_Clamp_Pressure_Flag=17841
,P_SemiRun_Cathode_Final_Roller_X_Axis_Flag=17842
,P_SemiRun_Anode_Final_Roller_X_Axis_Flag=17843
,P_SemiRun_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag=17844
,P_SemiRun_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag=17845
,P_SemiRun_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag=17846
,P_SemiRun_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag=17847
,P_SemiRun_Cathode_2th_AT_T_Axis_Pos_Flag=17848
,P_SemiRun_Cathode_2th_ST_T_Axis_Pos_Flag=17849
,P_SemiRun_Cathode_2th_AT_Z_Axis_Pos_Flag=17850
,P_SemiRun_Cathode_2th_ST_Z_Axis_Pos_Flag=17851
,P_SemiRun_Anode_2th_AT_T_Axis_Pos_Flag=17852
,P_SemiRun_Anode_2th_ST_T_Axis_Pos_Flag=17853
,P_SemiRun_Anode_2th_AT_Z_Axis_Pos_Flag=17854
,P_SemiRun_Anode_2th_ST_Z_Axis_Pos_Flag=17855
,P_SemiRun_Cathode_1th_Ready_T_Axis_Pos_Flag=17856
,P_SemiRun_Cathode_1th_CV_T_Axis_Pos_Flag=17857
,P_SemiRun_Cathode_1th_AT_T_Axis_Pos_Flag=17858
,P_SemiRun_Cathode_1th_Ready_Z_Axis_Pos_Flag=17859
,P_SemiRun_Cathode_1th_CV_Z_Axis_Pos_Flag=17860
,P_SemiRun_Cathode_1th_AT_Z_Axis_Pos_Flag=17861
,P_SemiRun_Anode_1th_Ready_T_Axis_Pos_Flag=17862
,P_SemiRun_Anode_1th_CV_T_Axis_Pos_Flag=17863
,P_SemiRun_Anode_1th_AT_T_Axis_Pos_Flag=17864
,P_SemiRun_Anode_1th_Ready_Z_Axis_Pos_Flag=17865
,P_SemiRun_Anode_1th_CV_Z_Axis_Pos_Flag=17866
,P_SemiRun_Anode_1th_AT_Z_Axis_Pos_Flag=17867
,P_SemiRun_Cathode_NG_AT_T_Axis_Pos_Flag=17868
,P_SemiRun_Cathode_NG_Box_T_Axis_Pos_Flag=17869
,P_SemiRun_Anode_NG_AT_T_Axis_Pos_Flag=17870
,P_SemiRun_Anode_NG_Box_T_Axis_Pos_Flag=17871
,P_Motion_Separator_Dancer_Pressure_Flag=17872
,P_Motion_Cathode_Clamp_Pressure_Flag=17873
,P_Motion_Anoode_Clamp_Pressure_Flag=17874
,P_Motion_Cathode_Final_Roller_X_Axis_Flag=17875
,P_Motion_Anode_Final_Roller_X_Axis_Flag=17876
,P_Motion_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag=17877
,P_Motion_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag=17878
,P_Motion_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag=17879
,P_Motion_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag=17880
,P_Motion_Cathode_2th_AT_T_Axis_Pos_Flag=17881
,P_Motion_Cathode_2th_ST_T_Axis_Pos_Flag=17882
,P_Motion_Cathode_2th_AT_Z_Axis_Pos_Flag=17883
,P_Motion_Cathode_2th_ST_Z_Axis_Pos_Flag=17884
,P_Motion_Anode_2th_AT_T_Axis_Pos_Flag=17885
,P_Motion_Anode_2th_ST_T_Axis_Pos_Flag=17886
,P_Motion_Anode_2th_AT_Z_Axis_Pos_Flag=17887
,P_Motion_Anode_2th_ST_Z_Axis_Pos_Flag=17888
,P_Motion_Cathode_1th_Ready_T_Axis_Pos_Flag=17889
,P_Motion_Cathode_1th_CV_T_Axis_Pos_Flag=17890
,P_Motion_Cathode_1th_AT_T_Axis_Pos_Flag=17891
,P_Motion_Cathode_1th_Ready_Z_Axis_Pos_Flag=17892
,P_Motion_Cathode_1th_CV_Z_Axis_Pos_Flag=17893
,P_Motion_Cathode_1th_AT_Z_Axis_Pos_Flag=17894
,P_Motion_Anode_1th_Ready_T_Axis_Pos_Flag=17895
,P_Motion_Anode_1th_CV_T_Axis_Pos_Flag=17896
,P_Motion_Anode_1th_AT_T_Axis_Pos_Flag=17897
,P_Motion_Anode_1th_Ready_Z_Axis_Pos_Flag=17898
,P_Motion_Anode_1th_CV_Z_Axis_Pos_Flag=17899
,P_Motion_Anode_1th_AT_Z_Axis_Pos_Flag=17900
,P_Motion_Cathode_NG_AT_T_Axis_Pos_Flag=17901
,P_Motion_Cathode_NG_Box_T_Axis_Pos_Flag=17902
,P_Motion_Anode_NG_AT_T_Axis_Pos_Flag=17903
,P_Motion_Anode_NG_Box_T_Axis_Pos_Flag=17904
,P_Cathode_1PNP_Sacle_Value=17905
,P_Cathode_2PNP_Sacle_Value=17906
,P_Anode_1PNP_Sacle_Value=17907
,P_Anode_2PNP_Sacle_Value=17908
,P_PLC01_SemiRun_PV_Flag=17909
,P_PV_EPC_Index=17910
,P_BTN_MSA_Total_Value=17926
,P_Vision_Align_Trigger_Timer=17927
,P_Vision_Stack_Trigger_Timer=17928
,P_MSA_Chk_Pos_Timer=17929
,P_MSA_Chk_Pos_Time=17930
,P_VISION_MSA_Seq_Index=17951
,P_VISION_MSA_Anode_Align_Bit_Pos=17952
,P_VISION_MSA_Seq_PreCondition_Index=17953
,P_MSA_CycleStop_Point_Check_Complete_RTN=17954
,P_Current_Anode_Align_MSA_Run_Count=17960
,P_Current_Cathode_Align_MSA_Run_Count=17961
,P_Current_Anode_Stack_MSA_Run_Count=17962
,P_Current_Cathode_Stack_MSA_Run_Count=17963
,P_VISION_MSA_Align_Count_Chk_Flag=17964
,P_VISION_MSA_Stack_Count_Chk_Flag=17965
,P_VISION_MSA_pre_InterLock_Cmd=17966
,P_VISION_MSA_pre_InterLock_Status=17967
,P_VISION_MSA_pre_InterLock_Check_Assy_Bit=17968
,P_VISION_MSA_pre_InterLock_Assy_Bit_Pos=17969
,P_Vision_MSA_Interlock_Status=17970
,P_VISION_MSA_MODE=17971
,P_VISION_MSA_Status_Flag=17972
,P_VISION_MSA_State_Machine=17973
,P_VISION_MSA_Status=17974
,P_VISION_MSA_Seq_Command_Occurs=17975
,P_Vision_Align_Trigger_Time=17976
,P_Anode_Align_MSA_Motion_Check=17977
,P_Cathode_Align_MSA_Motion_Check=17978
,P_Anode_Stack_MSA_Motion_Check=17979
,P_Cathode_Stack_MSA_Motion_Check=17980
,P_Anode_Align_MSA_Motion_ProgActive_Complete=17981
,P_Cathode_Align_MSA_Motion_ProgActive_Complete=17982
,P_Anode_Stack_MSA_Motion_ProgActive_Complete=17983
,P_Cathode_Stack_MSA_Motion_ProgActive_Complete=17984
,P_BTN_Align_Off_Total_Value=17985
,P_Align_Take_Off_Status=17989
,P_Align_Take_Off_Mode=17990
,P_Align_Take_Off_Status_Flag=17991
,P_Align_Take_Off_State_Machine=17992
,P_Align_Take_Off_Chk_Pos_Timer=17993
,P_Align_Take_Off_Motor_Check_Complete=17994
,P_Align_Take_Off_Speed_Return_Complete=17995
,P_Align_Take_Off_Interlock_Status=17996
,P_Align_Take_Off_pre_InterLock_Cmd=17997
,P_Align_Take_Off_pre_InterLock_Status=17998
,P_Align_Take_Off_pre_InterLock_Check_Assy_Bit=17999
,P_Align_Take_Off_pre_InterLock_Assy_Bit_Pos=18000
,P_Align_Take_Off_Seq_Index=18001
,P_Align_Take_Off_Seq_PreCondition_Index=18002
,P_Align_Take_Off_Stop_Signal=18023
,P_Vision_Cal_Reset_Count=18024
,P_2nd_PNP_Cleaning_Mode_Cmd=18025
,P_2nd_PNP_Cleaning_Mode_Status=18026
,P_2nd_PNP_Cleaning_Mode_Z_Jog_Speed=18027
,P_2nd_PNP_Cleaning_Mode_X_Jog_Speed=18028
,P_2nd_PNP_Cleaning_Mode_T_Jog_Speed=18029
,P_2nd_PNP_Cleaning_Avoid_2nd_T_Pos=18030
,P_System_Cascading_ON_Cmd=18175
,P_System_Cascading_OFF_Cmd=18176
,P_System_Master_Following_ON_Cmd=18177
,P_System_Master_Following_OFF_Cmd=18178
,P_System_CamTable_ON_Cmd=18179
,P_System_CamTable_OFF_Cmd=18180
,P_System_Spool_Home_Ready_Pos_Cmd=18181
,P_System_Cascading_ON_Status=18182
,P_System_Cascading_OFF_Status=18183
,P_System_Master_Following_ON_Status=18184
,P_System_Master_Following_OFF_Status=18185
,P_System_CamTable_ON_Status=18186
,P_System_CamTable_OFF_Status=18187
,P_System_Spool_Home_Ready_Pos_Status=18188
,P_System_Cascading_ON_State_Machine=18189
,P_System_Cascading_OFF_State_Machine=18190
,P_System_Master_Follwing_ON_State_Machine=18191
,P_System_Master_Follwing_OFF_State_Machine=18192
,P_System_CamTable_ON_State_Machine=18193
,P_System_CamTable_OFF_State_Machine=18194
,P_System_Spool_Home_Ready_Pos_State_Machine=18195
,P_System_Cascading_ON_Complete_Flag=18196
,P_System_Cascading_OFF_Complete_Flag=18197
,P_System_Master_Following_ON_Complete_Flag=18198
,P_System_Master_Following_OFF_Complete_Flag=18199
,P_System_CamTable_ON_Complete_Flag=18200
,P_System_CamTable_OFF_Complete_Flag=18201
,P_System_Spool_Home_Ready_Pos_Complete_Flag=18202
,P_Servo_Dancer_Cascading_Off_Timer=18203
,P_Servo_Dancer_Cascading_Set_Timer=18204
,P_Dancer_Frist_Home_Ready_Pos_Timer=18205
,P_Driving_Motor_Use_Flag=18206
,P_Home_Spool_Unwinding=18207
,P_OutValue=18208
,P_Dancer_Out_Slew_Seq=18209
,P_OutChangeValue=18210
,P_Rot_OutValue=18211
,P_OutChangeTime=18212
,P_Regul_Max_kPa_Value=18223
,P_Regul_Min_kPa_Value=18224
,P_Regul_Max_AD=18225
,P_Regul_Min_AD=18226
,P_Current_Max_Value=18227
,P_Current_Min_Value=18228
,P_Current_Max_AD=18229
,P_Current_Min_AD=18230
,P_Sepa_Cal_Inclination=18231
,P_Regul_Cal_Inclination=18232
,P_Cutter_Heat_Amp_Data_Bit=18233
,P_Cut_Heat_Amp_Value=18234
,P_AI_Cathode_Clamp_Damper_AVG=18235
,P_AI_Anode_Clamp_Damper_AVG=18236
,P_Tension_Ready_Pos_Cmd=18237
,P_Tension_Ready_State_Machine=18238
,P_Tension_Ready_Pos_Status=18239
,P_Dancer_Center_Pos=18240
,P_Upper_Sepa_Cal_Inclination=18241
,P_Lower_Sepa_Cal_Inclination=18242
,P_Unwinder_Jogspeed=18243
,P_Cascading_First_Out=18244
,P_Dancer_Cur_Vdc=18245
,P_Dancer_Cur_Torque=18246
,P_Dancer_Cur_Newton=18247
,P_Dancer_Cur_Kgf=18248
,P_Board_IO_Count=18249
,P_Force_BTN_Address_Clear_Count=18250
,P_Force_BTN_Condition_Count=18635
,P_Old_Force_BTN_Mode=18636
,P_Force_BTN_Address_Count=18637
,P_Force_BTN_GPIO_Address_Count=18638
,P_Force_BTN_Ecat_Address_Count=18639
,P_Force_BTN_M_Variable_Save_Count=18640
,P_Force_BTN_M_Variable_Start_Num=18641
,P_Force_BTN_Normal_Mode_Status=18642
,P_Force_BTN_Normal_Mode_State_Machine=18643
,P_Force_BTN_Normal_Mode_Complete_Flag=18644
,P_Force_BTN_Force_Mode_Timer=18645
,P_Force_BTN_Force_Mode_Delay_Time=18646
,P_Force_BTN_Force_Mode_Status=18647
,P_Force_BTN_Force_Mode_State_Machine=18648
,P_Force_BTN_Force_Mode_Complete_Flag=18649
,P_Mem_Save_Error_Bit=18650
,P_Servo_Gain_Save_Command=18661
,P_Servo_Gain_Load_Command=18662
,P_Servo_Gain_Save_Flag=18663
,P_Servo_Gain_Load_Flag=18664
,P_Insert_Phase_Flag=18845
,P_Alarm_Occur_Flag=18946
,P_Alarm_Wait_Time=18951
,P_Alarm_Delay_Timer=18952
,P_Compare_Priority=18953
,P_Alarm_Report=18954
,P_Alarm_Num=18955
,P_Alarm_Index=18956
,P_First_Alarm_Flag=18957
,P_Servo_Alarm_Check=19088
,P_Ecat_Servo_Alarm_Check=19089
,P_IL_ON_OFF_Flag=19810
,P_IL_Coord_Robot=19811
,P_IL_Robot_Bit=19812
,P_IL_Outer_Status=19813
,P_Robot_Unit_Serch_Flag=19814
,P_IL_Sprint=19818
,P_IL_length=19819
,P_IL_Strcat=19820
,P_IL_Popup_Motor=19821
,P_IL_Motor_Page=19822
,P_IL_Recipe_Bit=19823
,P_Interlock_Popup_On_Flag=19824
,P_Motor_Page=19825
,P_OP_Side_Ca_PNP_Pos=19826
,P_OP_Side_An_PNP_Pos=19827
,P_OP_Side_PMAC_Cur_Mode=19828
,P_Abs_Trans_Cur_Pos=19829
,P_Minus_IL_Offset=19830
,P_Plus_IL_Offset=19831
,P_2nd_PNP_Arm_Radius=19832
,P_IL_Enable_Flag=19833
,P_Plus_Interlock_Bit=19834
,P_Minus_Interlock_Bit=19835
,UPPos=19836
,Unloader_In_StackPos=19837
,FR_AnodePos=19838
,FR_CathodePos=19839
,Before_In_Stack=19840
,In_Stack=19841
,P_Minus_Collision_Risk_Motor=19844
,P_IL_Clamp_Y=19845
,P_IL_Clamp_Z=19846
,P_IL_Clamp_Pos=19847
,P_IL_Use_FR_Clamp_Pos=19848
,P_Ca_1st_Plus_IL_Offset=20249
,P_Ca_1st_Minus_IL_Offset=20250
,P_An_1st_Plus_IL_Offset=20251
,P_An_1st_Minus_IL_Offset=20252
,P_Z_Pos_Data=20271
,P_Clamp_Z_Plus_IL_Offset=20272
,P_FR_Z_Minus_IL_Offset=20277
,P_X_PLC_InterLock=20333
,P_IL_Home_Chk=20334
,P_IL_Home_Chk_Motor_Update=20355
,P_IL_Inside_Home_Chk_Complete=20356
,P_IL_Outside_Home_Chk_Complete=20357
,P_IL_Motor_Home_Chk_RTN=20358
,P_IL_Function_Cnt=20359
,P_IL_Function_Motor_Num=20360
,P_Anode_1st_TR_Belt_Down_Flag=20361
,P_Anode_1st_TR_Belt_Pick_Up_Flag=20362
,P_Anode_1st_TR_Align_Down_Flag=20363
,P_Anode_2nd_TR_Align_Pick_Up_Flag=20364
,P_Anode_2nd_TR_Stack_Down_Flag=20365
,P_Anode_NG_TR_Align_Pick_Up_Flag=20366
,P_Anode_NG_TR_NG_Place_Down_Flag=20367
,P_Anode_2nd_TR_Align_Down_Flag=20368
,P_Anode_1st_TR_Align_Pick_Up_Flag=20369
,P_Anode_1st_TR_Belt_Down_State_Machine=20370
,P_Anode_1st_TR_Belt_Down_Status=20371
,P_Anode_1st_TR_Belt_Pick_Up_State_Machine=20372
,P_Anode_1st_TR_Belt_Pick_Up_Status=20373
,P_Anode_1st_TR_Align_Down_State_Machine=20374
,P_Anode_1st_TR_Align_Down_Status=20375
,P_Anode_2nd_TR_Align_Pick_Up_State_Machine=20376
,P_Anode_2nd_TR_Align_Pick_Up_Status=20377
,P_Anode_2nd_TR_Stack_Down_State_Machine=20378
,P_Anode_2nd_TR_Stack_Down_Status=20379
,P_Anode_NG_TR_Align_Pick_Up_State_Machine=20380
,P_Anode_NG_TR_Align_Pick_Up_Status=20381
,P_Anode_NG_TR_NG_Place_Down_State_Machine=20382
,P_Anode_NG_TR_NG_Place_Down_Status=20383
,P_Anode_2nd_TR_Align_Down_State_Machine=20384
,P_Anode_2nd_TR_Align_Down_Status=20385
,P_Anode_1st_TR_Align_Pick_Up_State_Machine=20386
,P_Anode_1st_TR_Align_Pick_Up_Status=20387
,P_Cathode_1st_TR_Belt_Down_Flag=20388
,P_Cathode_1st_TR_Belt_Pick_Up_Flag=20389
,P_Cathode_1st_TR_Align_Down_Flag=20390
,P_Cathode_2nd_TR_Align_Pick_Up_Flag=20391
,P_Cathode_2nd_TR_Stack_Down_Flag=20392
,P_Cathode_NG_TR_Align_Pick_Up_Flag=20393
,P_Cathode_NG_TR_NG_Place_Down_Flag=20394
,P_Cathode_2nd_TR_Align_Down_Flag=20395
,P_Cathode_1st_TR_Align_Pick_Up_Flag=20396
,P_Cathode_1st_TR_Belt_Down_State_Machine=20397
,P_Cathode_1st_TR_Belt_Down_Status=20398
,P_Cathode_1st_TR_Belt_Pick_Up_State_Machine=20399
,P_Cathode_1st_TR_Belt_Pick_Up_Status=20400
,P_Cathode_1st_TR_Align_Down_State_Machine=20401
,P_Cathode_1st_TR_Align_Down_Status=20402
,P_Cathode_2nd_TR_Align_Pick_Up_State_Machine=20403
,P_Cathode_2nd_TR_Align_Pick_Up_Status=20404
,P_Cathode_2nd_TR_Stack_Down_State_Machine=20405
,P_Cathode_2nd_TR_Stack_Down_Status=20406
,P_Cathode_NG_TR_Align_Pick_Up_State_Machine=20407
,P_Cathode_NG_TR_Align_Pick_Up_Status=20408
,P_Cathode_NG_TR_NG_Place_Down_State_Machine=20409
,P_Cathode_NG_TR_NG_Place_Down_Status=20410
,P_Cathode_2nd_TR_Align_Down_State_Machine=20411
,P_Cathode_2nd_TR_Align_Down_Status=20412
,P_Cathode_1st_TR_Align_Pick_Up_State_Machine=20413
,P_Cathode_1st_TR_Align_Pick_Up_Status=20414
,P_Old_Anode_Belt_ASCII=20415
,P_Old_Cathode_Belt_ASCII=20416
,P_Anode_Belt_ASCII=20417
,P_Cathode_Belt_ASCII=20418
,P_Check_Vac_Time=20419
,P_Send_Anode_NG_Code_To_PLC=20420
,P_Receive_Anode_NG_Code_From_PLC=20421
,P_Send_Cathode_NG_Code_To_PLC=20422
,P_Receive_Cathode_NG_Code_From_PLC=20423
,P_Current_Cell_Memory_Anode_1P=20424
,P_Current_Cell_Memory_Anode_AT=20425
,P_Current_Cell_Memory_Anode_2P=20426
,P_Current_Cell_Memory_Cathode_1P=20427
,P_Current_Cell_Memory_Cathode_AT=20428
,P_Current_Cell_Memory_Cathode_2P=20429
,P_Current_Cell_Memory_Stack_Table=20430
,P_Current_Cell_Memory_Cathode_NG_TR=20431
,P_Current_Cell_Memory_Anode_NG_TR=20432
,P_BTN_Anode_1st_TR_Buffer_Clear=20433
,P_BTN_Anode_2nd_TR_Buffer_Clear=20434
,P_BTN_Anode_Align_Buffer_Clear=20435
,P_BTN_Anode_NG_TR_Buffer_Clear=20436
,P_BTN_Cathode_1st_TR_Buffer_Clear=20437
,P_BTN_Cathode_2nd_TR_Buffer_Clear=20438
,P_BTN_Cathode_Align_Buffer_Clear=20439
,P_BTN_Cathode_NG_TR_Buffer_Clear=20440
,P_Old_BTN_Anode_1st_TR_Buffer_Clear=20441
,P_Old_BTN_Anode_2nd_TR_Buffer_Clear=20442
,P_Old_BTN_Anode_Align_Buffer_Clear=20443
,P_Old_BTN_Anode_NG_TR_Buffer_Clear=20444
,P_Old_BTN_Cathode_1st_TR_Buffer_Clear=20445
,P_Old_BTN_Cathode_2nd_TR_Buffer_Clear=20446
,P_Old_BTN_Cathode_Align_Buffer_Clear=20447
,P_Old_BTN_Cathode_NG_TR_Buffer_Clear=20448
,P_Send_Anode_NG_Code_Flag=20449
,P_Send_Cathode_NG_Code_Flag=20450
,P_Anode_Vision_NG_To_PLC_Flag=20451
,P_Cathode_Vision_NG_To_PLC_Flag=20452
,P_Status_Clear_Sheet_Maint_Check=20453
,P_Single_Run_Start_Flag=20454
,P_Single_Run_Control_State_Machine=20455
,P_Single_Run_Control_Status=20456
,P_Single_Run_Execute_Bit=20457
,P_User_Dry_Run_Mode=20458
,P_Single_Run_State_Machine=20459
,P_Single_Run_Status=20460
,P_Single_Run_Unit=20461
,P_Single_Run_Evade_Pos_RTN=20462
,P_Single_Run_Evade_Pos_Check_RTN=20463
,P_Single_Run_Pos_Rtn1=20464
,P_Single_Run_Pos_Rtn2=20465
,P_Single_Run_Motion_Ready_RTN=20466
,P_Single_Run_Execution_Interlock_RTN=20467
,P_Single_Run_Coord_Activate_RTN=20468
,P_Single_Run_Coord_Activate_Check_RTN=20469
,P_Single_Run_Select_Run_Mode_RTN=20470
,P_Single_Run_Execution_Run_RTN=20471
,P_Single_Run_Motion_Ready_State_Machine=20472
,P_Coord_1=20473
,P_Coord_2=20474
,P_Coord_3=20475
,P_Coord_4=20476
,P_Final_Roll_Z_Motion_Flag=20477
,P_Final_Roll_Z_Motion_State_Machine=20478
,P_Main_Z_Motion_Flag=20479
,P_Main_Z_Motion_State_Machine=20480
,P_Single_Run_Mode_Flag=20481
,P_Cathode_AT_Motion_Flag=20482
,P_Cathode_Align_Motion_State_Machine=20483
,P_Anode_AT_Motion_Flag=20484
,P_Anode_Align_Motion_State_Machine=20485
,P_Sheet_Paper_Motion_Flag=20486
,P_Sheet_Paper_Motion_State_Machine=20487
,P_Cathode_NG_PNP_T_Motion_Flag=20488
,P_Cathode_NG_PNP_T_Motion_State_Machine=20489
,P_Cathode_NG_PNP_Z_Motion_Flag=20490
,P_Cathode_NG_PNP_Z_Motion_State_Machine=20491
,P_Anode_NG_PNP_T_Motion_Flag=20492
,P_Anode_NG_PNP_T_Motion_State_Machine=20493
,P_Anode_NG_PNP_Z_Motion_Flag=20494
,P_Anode_NG_PNP_Z_Motion_State_Machine=20495
,P_1st_UND_X_Motion_Flag=20496
,P_1st_UND_X_Motion_State_Machine=20497
,P_1st_UND_Z_Motion_Flag=20498
,P_1st_UND_Z_Motion_State_Machine=20499
,P_1st_UND_T_Motion_Flag=20500
,P_1st_UND_T_Motion_State_Machine=20501
,P_Cathode_Run_Command_Flag=20502
,P_Anode_Run_Command_Flag=20503
,P_NG_PNP_Uint_Motion_Flag=20504
,P_NG_PNP_Uint_State_Machine=20505
,P_NG_PNP_Motion_Cnt=20506
,P_Single_Run_Timer=20517
,P_Single_Run_Align_Timer=20518
,P_Single_Run_Align_Timer2=20519
,P_Single_Run_Finall_Roll_Z_Timer=20520
,P_Single_RuN_MAIN_Z_Timer=20521
,P_Single_Run_Sheet_Paper_Timer=20522
,P_Single_Run_Debug_SM=20523
,P_Error_Monitoring_Count_1=20524
,P_Error_Monitoring_Count_2=20525
,P_Error_Monitoring_Count_3=20526
,P_Error_Monitoring_Count_4=20527
,P_Error_Monitoring_Count_5=20528
,P_Old_Single_Run_Mode_Flag=20529
,P_Old_Current_Mode=20530
,P_Single_Run_Timebase_Off_RTN=20531
,P_Single_Run_Stop_State_Machine=20532
,P_Single_Run_Stop_Status=20533
,P_Single_Run_Stop_Timer=20534
,P_Single_Run_Stop_Init_RTN=20535
,P_Single_Run_Stop_Btn_Chk=20536
,P_Single_Run_Stop_Command=20537
,P_Motor_Ready_Poa_Inpos_200um=20538
,P_Ecat_Parameter_Write_Flag=20539
,P_Ecat_Parameter_Read_Flag=20540
,P_Ecat_Each_Parameter_Write_Flag=20541
,P_Ecat_Slave_Idx=20542
,P_Ec_Num=20543
,P_Ecat_Read_Motor_Num=20544
,P_Ecat_Write_Motor_Num=20545
,P_Ecat_Parameter_Write_State_Machine=20546
,P_Ecat_Parameter_Read_State_Machine=20547
,P_Ecat_Each_Parameter_Write_State_Machine=20548
,P_Ecat_Write_Status=20669
,P_Ecat_Read_Status=20670
,P_Ecat_Each_Write_Status=20671
,P_Align_Plus_Blow_Test=21232
,P_System_Setting_Flag=21233
,P_Ecat_Setting_Flag=21234
,P_Ecat_Activation_State_Machine=21235
,P_PLC31_Ecat_Retry_Cnt=21236
,P_Ecat_Connect_Result=21237
,P_Ecat_Slave_Error=21238
,P_PWM_AbsPhasePosOffset_Change_State_Machine=21239
,P_AbsPhasePosOffset_Change_Complete=21240
,P_PWM_AbsPhasing_Fail=21241
,P_PWM_AbsPhasing_Complete=21242
,P_Whole_Stacking_Tack_Time=21243
,P_Whole_Stacking_Tack_Time_Check=21244
,P_Whole_Stacking_Tack_Timer_Check_Flag=21245
,P_Whole_Stacking_Timer_Shift_Status_Machine=21246
,P_Whole_Stacking_TackTime_Array0=21247
,P_Whole_Stacking_TackTime_Array1=21248
,P_Whole_Stacking_TackTime_Array2=21249
,P_Whole_Stacking_TackTime_Array3=21250
,P_Whole_Stacking_TackTime_Array4=21251
,P_Whole_Stacking_TackTime_Array5=21252
,P_Whole_Stacking_TackTime_Array6=21253
,P_Whole_Stacking_TackTime_Array7=21254
,P_Whole_Stacking_TackTime_Array8=21255
,P_Whole_Stacking_TackTime_Array9=21256
,P_Whole_Stacking_TackTime_Array10=21257
,P_First_Stacking_Start=21258
,P_Last_Stacking_Complete=21259
,P_Stacking_Tack_Time=21260
,P_Stacking_Tack_Time_Check=21261
,P_Stacking_Tack_Timer_Check_Flag=21262
,P_Stacking_Timer_Shift_Status_Machine=21263
,P_Cathode_to_Anode_FR_Tack_Time_Check=21264
,P_Anode_to_Cathode_FR_Tack_Time_Check=21265
,P_Cathode_to_Anode_FR_Tack_Time_Start=21266
,P_Anode_to_Cathode_FR_Tack_Time_Start=21267
,P_Cathode_to_Anode_FR_Tack_Time_Complete=21268
,P_Anode_to_Cathode_FR_Tack_Time_Complete=21269
,P_Cathode_to_Anode_FR_Time=21270
,P_Anode_to_Cathode_FR_Time=21271
,P_Cathode_to_Anode_FR_Tack_Timer_Check_Flag=21272
,P_Anode_to_Cathode_FR_Tack_Timer_Check_Flag=21273
,P_Anode_Align_Table_Time=21274
,P_Anode_Align_Table_Tack_Time_Check=21275
,P_Anode_Align_Table_Tack_Timer_Check_Flag=21276
,P_Anode_Align_Table_Timer_Shift_Status_Machine=21277
,P_Anode_Align_Tack_Time_Start=21278
,P_Anode_Align_Tack_Time_Complete=21279
,P_Cathode_Align_Table_Time=21280
,P_Cathode_Align_Table_Tack_Time_Check=21281
,P_Cathode_Align_Table_Tack_Timer_Check_Flag=21282
,P_Cathode_Align_Table_Timer_Shift_Status_Machine=21283
,P_Cathode_Align_Tack_Time_Start=21284
,P_Cathode_Align_Tack_Time_Complete=21285
,P_Anode_1th_Tack_Time_Start=21286
,P_Anode_1th_Tack_Time_Complete=21287
,P_Anode_1th_Time=21288
,P_Anode_1th_Tack_Time_Check=21289
,P_Anode_1th_Tack_Timer_Check_Flag=21290
,P_Anode_1th_Timer_Shift_Status_Machine=21291
,P_Cathode_1th_Tack_Time_Start=21292
,P_Cathode_1th_Tack_Time_Complete=21293
,P_Cathode_1th_Time=21294
,P_Cathode_1th_Tack_Time_Check=21295
,P_Cathode_1th_Tack_Timer_Check_Flag=21296
,P_Cathode_1th_Timer_Shift_Status_Machine=21297
,P_Anode_2th_Tack_Time_Start=21298
,P_Anode_2th_Tack_Time_Complete=21299
,P_Anode_2th_Time=21300
,P_Anode_2th_Tack_Time_Check=21301
,P_Anode_2th_Tack_Timer_Check_Flag=21302
,P_Anode_2th_Timer_Shift_Status_Machine=21303
,P_Cathode_2th_Tack_Time_Start=21304
,P_Cathode_2th_Tack_Time_Complete=21305
,P_Cathode_2th_Time=21306
,P_Cathode_2th_Tack_Time_Check=21307
,P_Cathode_2th_Tack_Timer_Check_Flag=21308
,P_Cathode_2th_Timer_Shift_Status_Machine=21309
,P_Anode_1th_NG_Tack_Time_Start=21310
,P_Anode_1th_NG_Tack_Time_Complete=21311
,P_Anode_1th_NG_Time=21312
,P_Anode_1th_NG_Tack_Time_Check=21313
,P_Anode_1th_NG_Tack_Timer_Check_Flag=21314
,P_Anode_1th_NG_Timer_Shift_Status_Machine=21315
,P_Cathode_1th_NG_Tack_Time_Start=21316
,P_Cathode_1th_NG_Tack_Time_Complete=21317
,P_Cathode_1th_NG_Time=21318
,P_Cathode_1th_NG_Tack_Time_Check=21319
,P_Cathode_1th_NG_Tack_Timer_Check_Flag=21320
,P_Cathode_1th_NG_Timer_Shift_Status_Machine=21321
,P_Anode_Clamp_Tack_Time_Start=21322
,P_Anode_Clamp_Tack_Time_Complete=21323
,P_Anode_Clamp_Time=21324
,P_Anode_Clamp_Tack_Time_Check=21325
,P_Anode_Clamp_Tack_Timer_Check_Flag=21326
,P_Anode_Clamp_Timer_Shift_Status_Machine=21327
,P_Cathode_Clamp_Tack_Time_Start=21328
,P_Cathode_Clamp_Tack_Time_Complete=21329
,P_Cathode_Clamp_Time=21330
,P_Cathode_Clamp_Tack_Time_Check=21331
,P_Cathode_Clamp_Tack_Timer_Check_Flag=21332
,P_Cathode_Clamp_Timer_Shift_Status_Machine=21333
,P_Final_Roll_X_Timer_Shift_Status_Machine=21334
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array0=21335
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array1=21336
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array2=21337
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array3=21338
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array4=21339
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array5=21340
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array6=21341
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array7=21342
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array8=21343
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array9=21344
,P_Final_Roll_X_Cathode_to_Anode_TackTime_Array10=21345
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array0=21346
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array1=21347
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array2=21348
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array3=21349
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array4=21350
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array5=21351
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array6=21352
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array7=21353
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array8=21354
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array9=21355
,P_Final_Roll_X_Anode_to_Cathode_TackTime_Array10=21356
,P_MCC_Anode_Align_NG_Count=21411
,P_MCC_Cathode_Align_NG_Count=21412
,P_MCC_Anode_Retry_NG_Count=21413
,P_MCC_Cathode_Retry_NG_Count=21414
,P_Discharge_Hold_Timer=21427
,P_Discharge_Hold_Time=21428
,P_AN_1st_Z_Zero_Angle=21429
,P_AN_1st_Z_Zero_Length=21430
,P_Anode_1st_PNP_Z_Crank_Zero_Pos=21431
,P_Anode_1st_PNP_Z_Crank_real_Move_Pos=21432
,P_Anode_1st_PNP_Z_Crank_radian=21433
,P_Anode_1st_PNP_Z_Acos_denominator=21434
,P_Anode_1st_PNP_Z_Acos_numerator=21435
,P_Anode_1st_PNP_Z_Crank_Angle=21436
,P_Anode_1st_PNP_Z_Real_Move_Pos=21437
,P_Anode_1st_Fwd_Bwd_Rise=21438
,P_CA_1st_Z_Zero_Angle=21439
,P_CA_1st_Z_Zero_Length=21440
,P_Cathode_1st_PNP_Z_Crank_Zero_Pos=21441
,P_Cathode_1st_PNP_Z_Crank_real_Move_Pos=21442
,P_Cathode_1st_PNP_Z_Crank_radian=21443
,P_Cathode_1st_PNP_Z_Acos_denominator=21444
,P_Cathode_1st_PNP_Z_Acos_numerator=21445
,P_Cathode_1st_PNP_Z_Crank_Angle=21446
,P_Cathode_1st_PNP_Z_Real_Move_Pos=21447
,P_Cathode_1st_Fwd_Bwd_Rise=21448
,P_AN_2nd_Z_Zero_Angle=21449
,P_AN_2nd_Z_Zero_Length=21450
,P_Anode_2nd_PNP_Z_Crank_Zero_Pos=21451
,P_Anode_2nd_PNP_Z_Crank_real_Move_Pos=21452
,P_Anode_2nd_PNP_Z_Crank_radian=21453
,P_Anode_2nd_PNP_Z_Acos_denominator=21454
,P_Anode_2nd_PNP_Z_Acos_numerator=21455
,P_Anode_2nd_PNP_Z_Crank_Angle=21456
,P_Anode_2nd_PNP_Z_Real_Move_Pos=21457
,P_Anode_2nd_Fwd_Bwd_Rise=21458
,P_CA_2nd_Z_Zero_Angle=21459
,P_CA_2nd_Z_Zero_Length=21460
,P_Cathode_2nd_PNP_Z_Crank_Zero_Pos=21461
,P_Cathode_2nd_PNP_Z_Crank_real_Move_Pos=21462
,P_Cathode_2nd_PNP_Z_Crank_radian=21463
,P_Cathode_2nd_PNP_Z_Acos_denominator=21464
,P_Cathode_2nd_PNP_Z_Acos_numerator=21465
,P_Cathode_2nd_PNP_Z_Crank_Angle=21466
,P_Cathode_2nd_PNP_Z_Real_Move_Pos=21467
,P_Cathode_2nd_Fwd_Bwd_Rise=21468
,P_Old_Recipe_Anode_1st_PNP_Z_Ready_Up=21469
,P_Old_Recipe_Anode_1st_PNP_Z_Belt_Up=21470
,P_Old_Recipe_Anode_1st_PNP_Z_Belt_Down=21471
,P_Old_Recipe_Anode_1st_PNP_Z_Align_Up=21472
,P_Old_Recipe_Anode_1st_PNP_Z_Align_Down=21473
,P_Old_Recipe_Cathode_1st_PNP_Z_Ready_Up=21474
,P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Up=21475
,P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Down=21476
,P_Old_Recipe_Cathode_1st_PNP_Z_Align_Up=21477
,P_Old_Recipe_Cathode_1st_PNP_Z_Align_Down=21478
,P_Old_Recipe_Anode_2nd_PNP_Z_Align_Up=21479
,P_Old_Recipe_Anode_2nd_PNP_Z_Align_Down=21480
,P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Up=21481
,P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Down=21482
,P_Old_Recipe_Anode_2nd_PNP_Z_Ready_Up=21483
,P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Up=21484
,P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Down=21485
,P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Up=21486
,P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Down=21487
,P_Old_Recipe_Cathode_2nd_PNP_Z_Ready_Up=21488
,P_PLC19_All_Home_Cmd=21489
,P_PLC19_All_Home_Status=21490
,P_PLC19_All_Home_Module_Status=21491
,P_PLC19_All_Home_State_Machine=21492
,P_PLC19_All_Home_Seq_Index=21493
,P_PLC19_All_Home_Self_Index=21494
,P_PLC19_All_Home_Debug_Edge=21495
,P_PLC19_All_Home_Set_Mode_Return=21496
,P_PLC19_All_Home_Timer=21527
,P_PLC19_All_Home_Tact_Time=21548
,P_All_Home_Module_Error=21549
,P_Act_ALL_Home_Time_Out_Time=21750
,P_Act_Hold_Time_Out_Time=21966
,P_First_PNP_T_Wait_Status=22002
,P_First_PNP_Z_Wait_Status=22003
,P_First_PNP_Picker_T_Turn_Status=22004
,P_First_PNP_T_Wait_To_Belt_Status=22005
,P_First_PNP_Z_Wait_To_Belt_Status=22006
,P_First_PNP_T_Align_To_Belt_Status=22007
,P_First_PNP_Z_Align_To_Belt_Status=22008
,P_First_PNP_Z_Belt_Down_Status=22009
,P_First_PNP_Z_Belt_Up_Status=22010
,P_First_PNP_T_Wait_To_Align_Status=22011
,P_First_PNP_Z_Wait_To_Align_Status=22012
,P_First_PNP_T_Belt_To_Align_Status=22013
,P_First_PNP_Z_Belt_To_Align_Status=22014
,P_First_PNP_Z_Align_Down_Status=22015
,P_First_PNP_Z_Align_Up_Status=22016
,P_First_PNP_Vac_On_Status=22017
,P_First_PNP_Blow_On_Status=22018
,P_Second_PNP_T_Align_To_Stack_Status=22019
,P_Second_PNP_Z_Align_To_Stack_Status=22020
,P_Second_PNP_T_Stack_To_Align_Status=22021
,P_Second_PNP_Z_Stack_To_Align_Status=22022
,P_Second_PNP_Z_Align_Down_Status=22023
,P_Second_PNP_Z_Align_Up_Status=22024
,P_Second_PNP_Vac_On_Status=22025
,P_Second_PNP_Blow_On_Status=22026
,P_NG_PNP_NG_Bos_Status=22027
,P_NG_PNP_Align_Status=22028
,P_NG_PNP_Align_Down_Status=22029
,P_NG_PNP_Align_Up_Status=22030
,P_NG_PNP_Vac_On_Status=22031
,P_NG_PNP_Blow_On_Status=22032
,P_Hold_1st_PNP_Position=22033
,P_Hold_Module_Error=22034
,P_Act_Execute_Time_Out_Time=22095
,P_Execute_Module_Error=22108
,P_Execute_First_Sepa_Total_Tact_Time=22109
,P_Current_JR_Thickness_mm=22110
,P_Current_Jelly_Roll_Thinckness_mm_Send_Enable_Flag=22111
,P_Stack_Table_NG_Flag=22112
,P_Suspend_Discharge_Cell_Out_Restart=22113
,P_Jelly_Roll_OK_Count=22114
,P_Jelly_Roll_NG_Count=22115
,P_Jelly_Roll_Total_Count=22116
,P_Jelly_Roll_ID=22117
,P_Jelly_Roll_Prod_Count=22118
,P_Jelly_Roll_Recipe_Count=22119
,P_Current_Cell_Memory_Jelly_Roll=22120
,P_Real_Stacking_Host_ID_Count=22121
,P_VISION_PLC10_Anode_Align_Start=22122
,P_VISION_PLC10_Cathode_Align_Start=22123
,P_Stack_Table_NG_Count=22124
,P_Stack_PMAC_NG_Code=22125
,P_Stack_Vision_NG_Code_IN_Timer=22126
,P_Discharge_Waiting_Flag=22127
,P_ARC_Flag=22128
,P_Discharge_Queue_Complete_Flag=22129
,P_Shared_Discharge_Cmd=22130
,P_Shared_Discharge_State_Machine=22131
,P_Discharge_Dont_Stop_Point_Flag=22132
,P_1st_Discharge_State=22133
,P_Discharge_DIO_Trg=22134
,P_Data_Parsing_Flag=22135
,P_Memory_Discharge_Data=22136
,P_Prev_Sepa_Stack_Completed_Flag=22137
,P_First_Sepa_Mode_Status=22138
,P_First_Sepa_Mode_Flag=22139
,P_Discharge_Unloader_Handover_Timer=22140
,P_Discharge_Unloader_Handover_Time=22141
,P_B_1st_to_3rd_Discharge_cmd=22142
,P_B_1st_to_3rd_Discharge_State_Machine=22143
,P_3rd_Discharge_Status=22144
,P_Execute_First_Sepa_Mode_Cmd=22205
,P_Execute_First_Sepa_Mode_Status=22206
,P_Execute_First_Sepa_Mode_Module_Status=22207
,P_Execute_First_Sepa_Mode_State_Machine=22208
,P_Execute_First_Sepa_Mode_Seq_Index=22209
,P_Execute_First_Sepa_Mode_Self_Index=22210
,P_Execute_First_Sepa_Mode_Debug_Edge=22211
,P_Execute_First_Sepa_Mode_Timer=22242
,P_Execute_First_Sepa_Mode_Tact_Time=22263
,P_Execute_1st_Sepa_Status=22264
,P_Suspend_Discharge_Cmd=22265
,P_Suspend_Discharge_Status=22266
,P_Suspend_Discharge_State_Machine=22267
,P_Suspend_Discharge_Seq_Index=22268
,P_Suspend_Discharge_Self_Index=22269
,P_Suspend_Discharge_Timer=22360
,P_Suspend_Discharge_Tact_Time=22381
,P_Suspend_Discharge_1st_Unloader_JR_Grip=22382
,P_Suspend_ARC_Cmd=22383
,P_Suspend_ARC_Status=22384
,P_Suspend_ARC_State_Machine=22385
,P_Suspend_ARC_Seq_Index=22386
,P_Suspend_ARC_Self_Index=22387
,P_Suspend_ARC_Manual_Occur_Flag=22388
,P_Suspend_ARC_Timer=22479
,P_Suspend_ARC_Tact_Time=22500
,P_Suspend_Anode_1TR_Cell_Supply_Cmd=22501
,P_Suspend_Anode_1TR_Cell_Supply_Status=22502
,P_Suspend_Anode_1TR_Cell_Supply_State_Machine=22503
,P_Suspend_Anode_1TR_Cell_Supply_Seq_Index=22504
,P_Suspend_Anode_1TR_Cell_Supply_Self_Index=22505
,P_Suspend_Anode_1TR_Cell_Supply_Module_Status=22506
,P_Suspend_Anode_1TR_Cell_Supply_Timer=22597
,P_Suspend_Anode_1TR_Cell_Supply_Tact_Time=22618
,P_Hold_Exist_Insp_Cmd=22619
,P_Hold_Exist_Insp_Status=22620
,P_Hold_Exist_Insp_Module_Status=22621
,P_Hold_Exist_Insp_State_Machine=22622
,P_Hold_Exist_Insp_Seq_Index=22623
,P_Hold_Exist_Insp_Self_Index=22624
,P_Hold_Exist_Insp_Debug_Edge=22625
,P_Hold_Exist_Insp_Timer=22656
,P_Hold_Exist_Insp_Tact_Time=22677
,P_Hold_Remove_NG_PNP_Cmd=22678
,P_Hold_Remove_NG_PNP_Status=22679
,P_Hold_Remove_NG_PNP_Module_Status=22680
,P_Hold_Remove_NG_PNP_State_Machine=22681
,P_Hold_Remove_NG_PNP_Seq_Index=22682
,P_Hold_Remove_NG_PNP_Self_Index=22683
,P_Hold_Remove_NG_PNP_Debug_Edge=22684
,P_Hold_Remove_NG_PNP_Timer=22715
,P_Hold_Remove_NG_PNP_Tact_Time=22736
,P_PLC01_Hold_Remove_NG_PNP_Sub_Flag=22737
,P_PLC01_Hold_Remove_NG_PNP_Sub_State_Machine=22738
,P_PLC01_Hold_Remove_NG_PNP_Sub_Status=22739
,P_Hold_Remove_Align_Cmd=22740
,P_Hold_Remove_Align_Status=22741
,P_Hold_Remove_Align_Module_Status=22742
,P_Hold_Remove_Align_State_Machine=22743
,P_Hold_Remove_Align_Seq_Index=22744
,P_Hold_Remove_Align_Self_Index=22745
,P_Hold_Remove_Align_Debug_Edge=22746
,P_Hold_Remove_Align_Timer=22777
,P_Hold_Remove_Align_Tact_Time=22798
,P_PLC01_Hold_Remove_Align_Sub_Flag=22799
,P_PLC01_Hold_Remove_Align_Sub_State_Machine=22800
,P_PLC01_Hold_Remove_Align_Sub_Status=22801
,P_Hold_Remove_2TR_Cmd=22802
,P_Hold_Remove_2TR_Status=22803
,P_Hold_Remove_2TR_Module_Status=22804
,P_Hold_Remove_2TR_State_Machine=22805
,P_Hold_Remove_2TR_Seq_Index=22806
,P_Hold_Remove_2TR_Self_Index=22807
,P_Hold_Remove_2TR_Debug_Edge=22808
,P_Hold_Remove_2TR_Timer=22839
,P_Hold_Remove_2TR_Tact_Time=22860
,P_Hold_Supply_1TR_Cmd=22861
,P_Hold_Supply_1TR_Status=22862
,P_Hold_Supply_1TR_Module_Status=22863
,P_Hold_Supply_1TR_State_Machine=22864
,P_Hold_Supply_1TR_Seq_Index=22865
,P_Hold_Supply_1TR_Self_Index=22866
,P_Hold_Supply_1TR_Debug_Edge=22867
,P_Hold_Supply_1TR_Timer=22898
,P_Hold_Supply_1TR_Tact_Time=22919
,P_PLC01_Hold_Supply_1TR_Memory_RTN=22920
,P_PLC01_Hold_Supply_1TR_Judge_Flag=22921
,P_PLC01_Hold_Supply_1TR_Judge_State_Machine=22922
,P_PLC01_Hold_Supply_1TR_Judge_Status=22923
,P_Plate_1TR_Supply_Module_Judge_Bit=22924
,P_Hold_Supply_Align_Cmd=22925
,P_Hold_Supply_Align_Status=22926
,P_Hold_Supply_Align_Module_Status=22927
,P_Hold_Supply_Align_State_Machine=22928
,P_Hold_Supply_Align_Seq_Index=22929
,P_Hold_Supply_Align_Self_Index=22930
,P_Hold_Supply_Align_Debug_Edge=22931
,P_Hold_Supply_Align_Timer=22962
,P_Hold_Supply_Align_Tact_Time=22983
,P_Hold_Supply_2TR_Cmd=22984
,P_Hold_Supply_2TR_Status=22985
,P_Hold_Supply_2TR_Module_Status=22986
,P_Hold_Supply_2TR_State_Machine=22987
,P_Hold_Supply_2TR_Seq_Index=22988
,P_Hold_Supply_2TR_Self_Index=22989
,P_Hold_Supply_2TR_Debug_Edge=22990
,P_Hold_Supply_2TR_Timer=23021
,P_Hold_Supply_2TR_Tact_Time=23042
,P_Hold_Semi_Run_Pos_Move_Cmd=23043
,P_Hold_Semi_Run_Pos_Move_Status=23044
,P_Hold_Semi_Run_Pos_Move_Module_Status=23045
,P_Hold_Semi_Run_Pos_Move_State_Machine=23046
,P_Hold_Semi_Run_Pos_Move_Seq_Index=23047
,P_Hold_Semi_Run_Pos_Move_Self_Index=23048
,P_Hold_Semi_Run_Pos_Move_Debug_Edge=23049
,P_Hold_Semi_Run_Pos_Move_Timer=23080
,P_Hold_Semi_Run_Pos_Move_Tact_Time=23101
,P_Act_Suspend_Time_Out_Time=23300
,P_Test_Sungmin_Flag=23367
,P_Suspend_Discharge_Module_Status=24226
,P_Suspend_Discharge_To_Execute_Flag=24227
,P_Suspend_Discharge_Complete_Flag=24228
,P_First_Unloader_Stack_Up_Status=24229
,P_First_Unloader_Stack_FWD_Status=24230
,P_First_Unloader_Grip_Cell_Status=24231
,P_First_Unloader_Stack_BWD_Wait_Status=24232
,P_First_Unloader_Stack_BWD_Status=24233
,P_First_Unloader_Stack_Down_Status=24234
,P_First_Unloader_Avoid_Status=24235
,P_First_Unloader_Turn_Status=24236
,P_First_Unloader_Handover_Status=24237
,P_Cathode_Clamp_OFF_Status=24238
,P_Final_Roll_Discharge_Status=24239
,P_Final_Roll_Stack_Pos_Status=24240
,P_Final_Roll_Stack_Up_Pos_Status=24241
,P_Main_Z_Init_Pos_Status=24242
,P_Sheet_Paper_BWD_Status=24243
,P_Discharge_Vision_DIO_RTN=24244
,P_Discharge_Sub_RTN=24245
,P_Discharge_NG_Code_Report_RTN=24246
,P_Individual_RTN=24247
,P_Suspend_Discharge_Last_Run_Bit=24248
,P_Suspend_Discharge_JR_Result_RTN=24249
,P_ARC_Buffer_Jog_Speed=24250
,P_Selected_Spool_Number=24251
,P_ARC_Home_Check_RTN=24252
,P_Suspend_ARC_Module_Status=24253
,P_Not_Selected_Spool_Radius=24254
,P_Not_Selected_Spool_Circumference=24255
,P_Passive_D_One_Degree_AD_Value=24281
,P_After_ARC_Rotate_Distance=24282
,P_Stack_Vision_NG_Code_Time_Over=24283
,P_Suspend_Discharge_Resume_Flag=24284
,P_Suspend_Discharge_Resume_Complete=24285
,P_Suspend_Discharge_Pause_Flag=24286
,P_Flag_Stack_Work_Host_ID=24297
,P_First_Sepa_Stack_Align_OK_PMAC_Flag=24298
,P_Sepa_Run_Completed_Status_Machine=24299
,P_Discharge_Debug_Edge=24300
,P_Discharge_Sepa_Cutter_Time_Out_State_Machine=24311
,P_Old_Suspend_Discharge_Seq_Index=24312
,P_Discharge_Debug_Index_1=24313
,P_Discharge_Debug_Index_2=24314
,P_Discharge_Debug_Index_3=24315
,P_Discharge_Debug_Index_4=24316
,P_ARC_Debug_Edge=24317
,P_Old_Suspend_ARC_Seq_Index=24328
,P_ARC_Debug_Index_1=24329
,P_ARC_Debug_Index_2=24330
,P_ARC_Debug_Index_3=24331
,P_ARC_Debug_Index_4=24332
,P_Suspend_Cutter_Heating_Time=24335
,P_Suspend_Cutter_Heating_Timer=24336
,P_An_1TR_Supply_Debug_Edge=24337
,P_Old_Suspend_An_1TR_Supply_Seq_Index=24348
,P_An_1TR_Supply_Debug_Index_1=24349
,P_An_1TR_Supply_Debug_Index_2=24350
,P_An_1TR_Supply_Debug_Index_3=24351
,P_An_1TR_Supply_Debug_Index_4=24352
,P_Suspend_Supply_Index=24353
,P_Suspend_Supply_Index_2nd=24354
,P_Suspend_Supply_Pause_Flag=24363
,P_Suspend_Supply_Resume_Flag=24364
,P_Supply_Module_Status=24365
,P_Suspend_Anode_1TR_Supply_Complete_Flag=24366
,P_Suspend_Discharge_Module_Error=24367
,P_Suspend_ARC_Module_Error=24368
,P_Suspend_1st_Supply_Error=24369
,P_Discharge_Seq_Data=24370
,P_Suspend_Discharging_Popup_Flag=24371
,P_Suspend_Discharge_FR_Unclamp_Error_Popup_Flag=24372
,P_Suspend_Discharge_Cathode_Align_Retry_Cal_Error_Popup_Flag=24373
,P_Suspend_Discharge_Anode_Align_Retry_Cal_Error_Popup_Flag=24374
,P_Suspend_Discharge_FR_Discharge_Pos_Error_Popup_Flag=24375
,P_Suspend_Discharge_1st_Unloader_Grip_OFF_Error_Popup_Flag=24376
,P_Suspend_Discharge_1st_Unloader_Up_Error_Popup_Flag=24377
,P_Suspend_Discharge_1st_Unloader_FWD_Error_Popup_Flag=24378
,P_Suspend_Discharge_FR_Clamp_Error_Popup_Flag=24379
,P_Suspend_Discharge_Sepa_Cutter_Heating_Error_Popup_Flag=24380
,P_Suspend_Discharge_1st_Unloader_Grip_Cell_Pos_Error_Popup_Flag=24381
,P_Suspend_Discharge_1st_Unloader_Grip_ON_Error_Popup_Flag=24382
,P_Suspend_Discharge_Sheet_Paper_BWD_Error_Popup_Flag=24383
,P_Suspend_Discharge_Cathode_Clamp_OFF_Error_Popup_Flag=24384
,P_Suspend_Discharge_Sepa_Cutter_FWD_Error_Popup_Flag=24385
,P_Suspend_Discharge_Sheet_Paper_Vacuum_ON_Error_Popup_Flag=24386
,P_Suspend_Discharge_Sepa_Cutter_BWD_Error_Popup_Flag=24387
,P_Suspend_Discharge_1st_Unloader_BWD_Wait_Pos_Error_Popup_Flag=24388
,P_Suspend_Discharge_1st_Unloader_BWD_Error_Popup_Flag=24389
,P_Suspend_Discharge_1st_Unloader_Stack_Down_Error_Popup_Flag=24390
,P_Suspend_Discharge_FR_Stack_Pos_Error_Popup_Flag=24391
,P_Suspend_Discharge_After_Action_Init_Error_Popup_Flag=24392
,P_Suspend_Discharge_1st_Unloader_Avoid_Pos_Error_Popup_Flag=24393
,P_Suspend_Discharge_1st_2nd_Unloader_Handover_Chk_Error_Popup_Flag=24394
,P_Suspend_Discharge_1st_Unloader_Handover_Pos_Error_Popup_Flag=24395
,P_Suspend_Discharge_2nd_3rd_Unloader_Grip_Request_Error_Popup_Flag=24396
,P_Suspend_Discharge_1st_Unloader_Wait_Pos_Error_Popup_Flag=24397
,P_Suspend_ARC_Manual_ARC_Active_Popup_Flag=24398
,P_Suspend_ARC_Auto_ARC_Active_Popup_Flag=24399
,P_Suspend_ARC_Pre_Act_Popup_Flag=24400
,P_Suspend_ARC_Dancer_Close_Popup_Flag=24401
,P_Suspend_ARC_Use_Plate_FWD_Popup_Flag=24402
,P_Suspend_ARC_Replace_Plate_Blow_ON_Popup_Flag=24403
,P_Suspend_ARC_Use_Plate_Clamp_Popup_Flag=24404
,P_Suspend_ARC_Use_Plate_Cutter_FWD_Popup_Flag=24405
,P_Suspend_ARC_Use_Plate_Cutter_BWD_Popup_Flag=24406
,P_Suspend_ARC_Use_Plate_Unclamp_Popup_Flag=24407
,P_Suspend_ARC_Use_Plate_BWD_Popup_Flag=24408
,P_Suspend_ARC_Replace_Plate_Blow_OFF_Popup_Flag=24409
,P_Suspend_ARC_Dancer_Open_Popup_Flag=24410
,P_Suspend_ARC_Spool_Change_Popup_Flag=24411
,P_Suspend_ARC_Post_Act_Popup_Flag=24412
,P_Suspend_ARC_Previous_Spool_Remain_Winding_Popup_Flag=24413
,P_Suspend_Discharge_First_Address=24414
,P_Suspend_ARC_First_Address=24415
,P_Status_Stop_Ready_Pos_Move=24416
,P_Cycle_Stop_Stauts=24417
,P_Cycle_Stop_Status_Machine=24418
,P_Cycle_Stop_Flag=24419
,P_Speed_Origin_rtn=24420
,P_Speed_rtn=24421
,P_NG_PNP_Z_Move_rtn=24422
,P_NG_PNP_Z_Move_Check_rtn=24423
,P_NG_PNP_T_Move_rtn=24424
,P_NG_PNP_T_Move_Check_rtn=24425
,P_2nd_Z_Move_rtn=24426
,P_2nd_Z_Move_Check_rtn=24427
,P_2nd_T_Move_rtn=24428
,P_2nd_T_Move_Check_rtn=24429
,P_Stack_Judgement_Memory=24430
,P_Stop_Cycle_Stop_Move_Status=24431
,P_STOP_Initial_Process_Status=24432
,P_Stopping_CycleStop_Init_Flag=24433
,P_Sepa_Timing=24434
,P_Old_Trigger_PLC0=24435
,P_Mode_Command=24436
,P_Current_Mode=24437
,P_Mode_Command_Buffer=24458
,P_Mode_Command_Wait_Count=24459
,P_Old_Mode_Command=24460
,P_Anode_NG_Unit_Status=27461
,P_Cathode_NG_Unit_Status=27462
,P_ParsingRtn=27463
,P_CurPosData=27464
,P_Hold_MNTR_Supply_1st=27465
,P_TimeOutNumb=27466
,P_PosRtn=27467
,P_MotionRtn=27468
,P_CmdData=27469
,P_Interval=27470
,P_Cont_Ret=27471
,P_Cur_Idx=27472
,P_NextID=27473
,P_Cur_Size=27474
,P_Hold_Exist_Insp=27475
,P_Hold_Remove_NG_PNP=27476
,P_Hold_Remove_Align=27477
,P_Hold_Remove_2TR=27478
,P_Hold_Supply_1TR=27479
,P_Hold_Supply_Align=27480
,P_Hold_Supply_2TR=27481
,P_Hold_Semi_Run=27482
,P_Hold_NG_PNP_Remove=180
,P_Hold_Remove_2nd=182
,P_Hold_Supply_1st=183
,P_Hold_Supply_2nd=185
,P_Hold_Data_process=186
,P_Hold_Semi_Run_Enable_Pos=187
,P_Hold_Existence_Insp=188
,P_Hold_1st_Belt_Move=189
,P_Hold_Motion=190
,P_Hold_Data_process_State_Machine=27483
,P_Hold_Align_Remove_State_Machine=27484
,P_Hold_2nd_Remove_State_Machine=27485
,P_Hold_Supply_1st_State_Machine=27486
,P_Hold_Supply_2nd_State_Machine=27487
,P_Hold_Existence_Insp_State_Machine=27488
,P_Hold_NG_PNP_Remove_State_Machine=27489
,P_Hold_Data_Process_Complete=27490
,P_Hold_Semi_Run_Enable_Pos_State_Machine=27491
,P_HOLD_Existence_Insp_Queue_State_Machine=27492
,P_Hold_Stop_Existence_Insp_STEP=27493
,P_SubMaster_Status_Err=27494
,P_Data_Process_Rtn=27495
,P_Hold_Set_Trigger=27496
,P_Hold_Get_Trigger=27497
,P_Anode_2nd_Data=27498
,P_Anode_Align_Data=27499
,P_Hold_Remove_Step=27500
,P_HList_Head_Idx=27501
,P_Hold_Next_ID=27502
,P_Hold_Data_Value=27523
,P_Comb_Bitwise=27524
,P_Target_Cmd=27525
,P_Temp_Bit=27526
,P_Get_ErrorCode=27527
,P_Rtn_Code=27528
,P_Complete_Hold_Bit=27529
,P_HoldMtion_Flag=27530
,P_Ret_BitWise=27531
,P_NotEnough_GetSpace=27532
,P_NotEnough_SetSpace=27533
,P_Check_SetSpace=27534
,P_Hold_Get_Data=27535
,P_Err_NextID_Flag=27536
,P_Elec_Bit=27537
,P_MotionData=27538
,P_Cur_PosX1=27554
,P_Cur_PosZ1=27555
,P_Cur_PosX2=27556
,P_Cur_PosZ2=27557
,P_Dest_PosX=27558
,P_Dest_PosZ=27559
,P_FailToParse=27560
,P_CurTrigger=27561
,P_TimeOutTrigger=27562
,P_CalcTime=27563
,P_Cycle_Count=27564
,P_MotionTimeOutFlag=27565
,P_Set_Data=27566
,P_Rtn=27567
,P_CurPosTestBit=27568
,P_Hold_Anode_Pause_CHK=27569
,P_Hold_Cathode_Pause_CHK=27570
,P_Surface_Complete_To_Hold=27571
,P_Hold_Pause_Trg=27592
,P_From_Staring_Flag=27593
,P_Hold_Existence_Insp_Enqueue_Flag=27594
,P_Hold_Rtn=27595
,P_Debug_Existence_Insp_STEP=27596
,P_Hold_Align_Sheet_CHK=27597
,P_Hold_Cathode_Exception_Empty_Flag=27598
,P_Hold_Anode_Exception_Empty_Flag=27599
,P_HOLD_Hold_Process_State_Machine=27600
,P_Hold_Stop_Sheet_Process_STEP=27601
,P_Hold_Debug_Sheet_Process_STEP=27602
,P_Hold_Stop_Point=27603
,P_Hold_CHK=27604
,P_Hold_Test=27605
,P_Anode_1st_Motion_Complete=27606
,P_Anode_2nd_Motion_Complete=27607
,P_Anode_NG_PNP_Motion_Complete=27608
,P_Cathode_1st_Motion_Complete=27609
,P_Cathode_2nd_Motion_Complete=27610
,P_Cathode_NG_PNP_Motion_Complete=27611
,P_Anode_1st_Picker_Motion_Complete=27612
,P_Cathode_1st_Picker_Motion_Complete=27613
,P_individual_return=27614
,P_individual_return2=27615
,P_HoldCurPosBit1=27616
,P_HoldCurPosBit2=27617
,P_Parsing_Status=27618
,P_Sel_Obj=27619
,P_Sel_Elec=27620
,P_Error=27621
,P_Vision_FirstSepa_Complete=27622
,P_NG_PNP_Turn_TM=27623
,P_NG_PNP_Turn_TS=27624
,P_NG_PNP_Turn_TA=27625
,P_NG_PNP_Up_TM=27626
,P_NG_PNP_Up_TS=27627
,P_NG_PNP_Up_TA=27628
,P_NG_PNP_Down_TM=27629
,P_NG_PNP_Down_TS=27630
,P_NG_PNP_Down_TA=27631
,P_NG_PNP_Vac_Time=27632
,P_NG_PNP_Blow_Time=27633
,P_Slow_NG_Mode_Btn=27634
,P_HOLD_Memory_Tower_Offset=27635
,P_Hold_Pause_Use=27636
,P_Hold_Motion_Err_Chk=27657
,P_Hold_Motion_TimeOut=27673
,P_Hold_Data_OK=27674
,P_VISION_TRG_PLC4_AnodeSurface_Ins_Shoot=27675
,P_VISION_TRG_PLC4_CathodeSurface_Ins_Shoot=27676
,P_Memory_Tower_Test=27677
,P_Temp_Run_Mode=27678
,P_Data_Idx=27679
,P_Get_Data_Idx=27680
,P_HOLD_Data_Err_Queue=27681
,P_HOLD_Data_Err_State_Machine=27682
,P_HOLD_Err_Set_Data=27683
,P_HOLD_Err_Save=27684
,P_Sepa_Run_Completed_Flag=27685
,P_Log_Data_Y=28619
,P_Log_Data_M=28620
,P_Log_Data_D=28621
,P_Log_Data_H=28622
,P_Log_Data_m=28623
,P_Log_Data_s=28624
,P_MNTR_End_Index=28625
,P_BG_CPLC_Running_MNTR=50
,P_RTI_CPLC_Running_MNTR=51
,P_Log_Start_Flag=170
,P_Log_Document_Remove_Flag=171
,P_Sepa_ID_Change_Flag=172
,P_USB_Register=173
,P_Cur_Line_Check=175
,P_Cur_Line_Check_Init=176
,P_Hold_Pass=28636
,P_PLC01_Total_Step_Flag=28652
,P_PLC02_Total_Step_Flag=28653
,P_PLC014_Total_Step_Flag=28654
,P_PLC02_Total_Step_Flag2=28655
,P_Vac_Pass=28656
,P_Vision_Pass_Exisitence=28657
,P_Vision_Pass_Empty=28658
,P_Vision_Pass_FirstSepa=28659
,P_Vision_Pass_Stack_Inspection=28660
,P_ULD_Home_Pass=28661
,P_Clamp_Cell_Down_Use=28662
,P_FR_Clamp_Use_Test=28663
,P_Door_Interlock_Use_Flag=28664
,P_PLC02_Exe_Module_First_Sepa_Step_Flag=28760
,P_PLC02_Sus_Module_Discharge_Step_Flag=28761
,P_PLC02_Sus_Module_ARC_Step_Flag=28762
,P_PLC02_Sus_Module_1TR_Supply_Step_Flag=28763
,P_PLC02_HOLD_Module_Insp_Step_Flag=28764
,P_PLC02_HOLD_Module_Remove_NGPNP_Step_Flag=28765
,P_PLC02_HOLD_Module_Remove_Align_Step_Flag=28766
,P_PLC02_HOLD_Module_Remove_2TR_Step_Flag=28767
,P_PLC02_HOLD_Module_Supply_1TR_Step_Flag=28768
,P_PLC02_HOLD_Module_Supply_Align_Step_Flag=28769
,P_PLC02_HOLD_Module_Supply_2TR_Step_Flag=28770
,P_PLC02_HOLD_Module_SemiRun_Pos_Step_Flag=28771
,P_PLC14_STOP_Module_Cycle_Stop_Step_Flag=28772
,P_PLC02_Discharge_MNTR=28773
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
,P_Error_Index_Number=28774
,P_ECAT_MNTR_Bit=28775
,P_Local_MNTR_Bit=28776
,P_Clamp_Motion_VER1=28777
,P_CA_DR_Ta=28778
,P_CA_DR_Ts=28779
,P_CA_DR_Tm=28780
,P_CA_DR_Td=28781
,P_CA_DR_Tsd=28782
,P_AN_DR_Ta=28783
,P_AN_DR_Ts=28784
,P_AN_DR_Tm=28785
,P_AN_DR_Td=28786
,P_AN_DR_Tsd=28787
,P_First_Sepa_1st_Driving_Move=28788
,P_AN_Cam_Total_Time=28789
,P_CA_Cam_Total_Time=28790
,P_Dry_Run_BTN=28791
,P_Home_Angle_Offset_change_Bit=28792
,P_Z_Var=28793};
enum globalParray {_globalParray_=-1
,P_Ca_1st_PNP_ABSPhasing_Pos=8196
,P_An_1st_PNP_ABSPhasing_Pos=8236
,P_Ca_2nd_PNP_ABSPhasing_Pos=8276
,P_An_2nd_PNP_ABSPhasing_Pos=8316
,P_Home_Status=8358
,P_Homing_Step_Monitor=8419
,P_231213_Test_Status=8469
,P_BTN_Push_Align_Auto_Cal_Ready_Pos_Move=8562
,P_CMD_MSA_Run=8565
,P_CMD_Align_Auto_Cal_Ready_Pos_Move_Run=8573
,P_Align_Auto_Cal_Ready_Pos_Move_Run_State_Machine=8576
,P_Align_Auto_Cal_Ready_Pos_Move_Run_Status=8579
,P_Align_Auto_Cal_Ready_Pos_Move_Run_Complete=8582
,P_CMD_Cell_Align=8587
,P_CMD_Cell_Stop=8597
,P_CMD_Cell_Reset=8607
,P_Jog_Work_Speed=8698
,P_Recipe_Homing_Speed=8731
,P_MNTR_PLC0_Task_Time=9212
,P_MNTR_PLC1_Task_Time=9215
,P_MNTR_PLC2_Task_Time=9218
,P_MNTR_PLC3_Task_Time=9221
,P_MNTR_PLC4_Task_Time=9224
,P_MNTR_PLC5_Task_Time=9227
,P_MNTR_PLC6_Task_Time=9230
,P_MNTR_PLC7_Task_Time=9233
,P_MNTR_PLC8_Task_Time=9236
,P_MNTR_PLC9_Task_Time=9239
,P_MNTR_PLC10_Task_Time=9242
,P_MNTR_PLC11_Task_Time=9245
,P_MNTR_PLC12_Task_Time=9248
,P_MNTR_PLC13_Task_Time=9251
,P_MNTR_PLC14_Task_Time=9254
,P_MNTR_PLC15_Task_Time=9257
,P_MNTR_PLC16_Task_Time=9260
,P_MNTR_PLC17_Task_Time=9263
,P_MNTR_PLC18_Task_Time=9266
,P_MNTR_PLC19_Task_Time=9269
,P_MNTR_PLC20_Task_Time=9272
,P_MNTR_PLC21_Task_Time=9275
,P_MNTR_PLC22_Task_Time=9278
,P_MNTR_PLC23_Task_Time=9281
,P_MNTR_PLC24_Task_Time=9284
,P_MNTR_PLC25_Task_Time=9287
,P_MNTR_PLC26_Task_Time=9290
,P_MNTR_PLC27_Task_Time=9293
,P_MNTR_PLC28_Task_Time=9296
,P_MNTR_PLC29_Task_Time=9299
,P_MNTR_PLC30_Task_Time=9302
,P_Vision_Result=9308
,P_Vision_Result_Get_First_Cycle=9312
,P_Init_Result=9316
,P_Tension_FF=9411
,P_FR_AI_Value=9419
,P_Dequeue_Log=9454
,P_Motor_Current_Pos=9487
,P_Axis_Scale_Value=9537
,P_Except_Return_Array=9587
,P_Hold_Memory=9687
,P_Suspend_Memory=9692
,P_Execute_Memory=9697
,P_Stop_Memory=9702
,P_CircularQueue_Command_array=9723
,P_Recipe_1st_MotorNo=9757
,P_Recipe_2nd_MotorNo=9807
,P_Recipe_3rd_MotorNo=9857
,P_Recipe_4th_MotorNo=9907
,P_Recipe_5th_MotorNo=9957
,P_Recipe_6th_MotorNo=10007
,P_Recipe_M01_POS=10085
,P_Recipe_M02_POS=10096
,P_Recipe_M03_POS=10107
,P_Recipe_M04_POS=10118
,P_Recipe_M05_POS=10129
,P_Recipe_M06_POS=10140
,P_Recipe_M07_POS=10151
,P_Recipe_M08_POS=10162
,P_Recipe_M09_POS=10173
,P_Recipe_M10_POS=10184
,P_Recipe_M11_POS=10195
,P_Recipe_M12_POS=10206
,P_Recipe_M13_POS=10217
,P_Recipe_M14_POS=10228
,P_Recipe_M15_POS=10239
,P_Recipe_M16_POS=10250
,P_Recipe_M17_POS=10261
,P_Recipe_M18_POS=10272
,P_Recipe_M19_POS=10283
,P_Recipe_M20_POS=10294
,P_Recipe_M21_POS=10305
,P_Recipe_M22_POS=10316
,P_Recipe_M23_POS=10327
,P_Recipe_M24_POS=10338
,P_Recipe_M25_POS=10349
,P_Recipe_M26_POS=10360
,P_Recipe_M27_POS=10371
,P_Recipe_M28_POS=10382
,P_Recipe_M29_POS=10393
,P_Recipe_M30_POS=10404
,P_Recipe_M31_POS=10415
,P_Recipe_M32_POS=10426
,P_Recipe_M33_POS=10437
,P_Recipe_M34_POS=10448
,P_Recipe_M35_POS=10459
,P_Recipe_M36_POS=10470
,P_Recipe_M37_POS=10481
,P_Recipe_M38_POS=10492
,P_Recipe_M39_POS=10503
,P_Recipe_M40_POS=10514
,P_Recipe_M41_POS=10525
,P_Recipe_M42_POS=10536
,P_Recipe_M43_POS=10547
,P_Recipe_M44_POS=10558
,P_Recipe_M45_POS=10569
,P_Recipe_M46_POS=10580
,P_Recipe_M47_POS=10591
,P_Recipe_M48_POS=10602
,P_Recipe_M49_POS=10613
,P_Recipe_M50_POS=10624
,P_Error_X_Axis_Packml=10641
,P_Error_X_Axis_Dequeue=10647
,P_Error_X_Axis_Num=10653
,P_Memory_Tower_Err_Pos_X_Save=10659
,P_Error_Y_Axis_Packml=10665
,P_Error_Y_Axis_Dequeue=10671
,P_Error_Y_Axis_Num=10677
,P_Memory_Tower_Err_Pos_Y_Save=10683
,P_Error_Z_Axis_Packml=10689
,P_Error_Z_Axis_Dequeue=10695
,P_Error_Z_Axis_Num=10701
,P_Memory_Tower_Err_Pos_Z_Save=10707
,P_Error_ZZ_Axis_Packml=10713
,P_Error_ZZ_Axis_Dequeue=10719
,P_Error_ZZ_Axis_Num=10725
,P_Memory_Tower_Err_Pos_ZZ_Save=10731
,P_1st_PNP_FWD_Abort_Offset=10844
,P_1st_PNP_BWD_Abort_Offset=10934
,P_2nd_PNP_FWD_Abort_Offset=11024
,P_2nd_PNP_BWD_Abort_Offset=11114
,P_Align_Zero_Move_Start_Flag=11266
,P_Stop_Sub_Master_Motion_Program_Flag=11277
,P_Stop_Slave_Motion_Program_Flag=11297
,P_Stop_Motor_Status=11317
,P_Stop_Coord_Status=11365
,P_Stop_Save_RTN=11402
,P_Stop_Motor_Pos=11408
,P_Old_P_Anode_TR1_Master_Motion_Trigger=11463
,P_Old_P_Cathode_TR1_Master_Motion_Trigger=11479
,P_Anode_TR1_Old_Mode=11495
,P_Cathode_TR1_Old_Mode=11511
,P_Older_Than_P_Anode_TR1_Old_Mode=11527
,P_Older_Than_P_Cathode_TR1_Old_Mode=11543
,P_Older_Than_P_Sequence_Old_P_Anode_TR1_Current_Mode_Trigger=11559
,P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Current_Mode_Trigger=11575
,P_Old_P_Anode_TR1_Mode_Command=11591
,P_Old_P_Cathode_TR1_Mode_Command=11607
,P_Older_Than_P_Old_P_Anode_TR1_Mode_Command=11623
,P_Older_Than_P_Old_P_Cathode_TR1_Mode_Command=11639
,P_Older_Than_P_Sequence_Old_P_Anode_TR1_Mode_Command_Trigger=11655
,P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Mode_Command_Trigger=11671
,P_Old_P_Anode_TR1_PMAC_Status=11687
,P_Old_P_Cathode_TR1_PMAC_Status=11703
,P_Older_Than_P_Old_P_Anode_TR1_PMAC_Status=11719
,P_Older_Than_P_Old_P_Cathode_TR1_PMAC_Status=11735
,P_Old_P_Slave1_Motion_Command=11751
,P_Old_P_Slave10_Motion_Command=11767
,P_Old_Slave1_P_SubMaster_Sub_Mode_Command=11783
,P_Old_Slave10_P_SubMaster_Sub_Mode_Command=11799
,P_Sequence_Old_P_Current_Mode_Trigger=11815
,P_Sequence_Old_Mode=11831
,P_Sequence_Old_P_Mode_Command=11847
,P_Sequence_Old_P_Mode_Command_Trigger=11863
,P_SubMaster_Sub_Old_Mode=11879
,P_SubMaster_Sub_Old_Command=11895
,P_SubMaster_Sub_Mode_Command=11911
,P_SubMaster_Sub_Old_Trigger=11927
,P_InterLock_No3_Array=11943
,P_Old_InterLock_No3_Array=11959
,P_Mode_Err=11975
,P_Phasing_Err=12003
,P_Phasing_Err2=12008
,P_Cathode_Run_Mode_Type=12016
,P_Cathode_Run_Mode_Trigger=12036
,P_Anode_Run_Mode_Type=12057
,P_Anode_Run_Mode_Trigger=12077
,P_Stop_Origin_Save=12254
,P_Sheet_Err=12336
,P_Drivig_Cal_Save=12355
,P_PMAC_Status_Arr_Save1=12362
,P_HomePos_Save1=12367
,P_PMAC_Status_Arr_Save2=12372
,P_HomePos_Save2=12377
,P_PMAC_Status_Arr_Save3=12382
,P_HomePos_Save3=12387
,P_PMAC_Status_Arr_Save4=12392
,P_HomePos_Save4=12397
,P_HomePos_Err=12407
,P_Cutter_FWB_Heater_Current=12471
,P_Scan_Time=12525
,P_Read_Sector_TactTime=12633
,P_Write_Sector_TactTime=12639
,P_SV_AO_Reference_Value_Chanel=12662
,P_MSA_Run_Repeat_Num=12695
,P_Current_MSA_Run_Num=12700
,P_PV_AO_Value_Chanel=12993
,P_Interlock_Messege=13008
,P_Current_Homming_Status=13061
,P_Home_Execute_Type=13111
,P_Interval_Read_Time=13164
,P_Interval_Write_Time=13170
,P_Sub_Master_Motion_Program_Flag=13211
,P_Slave_Motion_Program_Flag=13231
,P_OLD_Jog_Speed_Motor=13252
,P_Command_Start=13308
,P_Command_Complete=13326
,P_Command_Reset=13344
,P_Command_Hold=13362
,P_Command_Unhold=13380
,P_Command_Suspend=13398
,P_Command_Unsuspend=13416
,P_Command_Clear=13434
,P_Command_Stop=13452
,P_Command_Abort=13470
,P_Command_Status_Complete=13488
,P_Command_Mask_Layer=13506
,P_Command_Process_Type=13524
,P_Sum_Ready_pos_Motor=13580
,P_Anode_Align_NG_Array=13705
,P_Cathode_Align_NG_Array=13725
,P_Anode_Surface_NG_Array=13745
,P_Cathode_Surface_NG_Array=13765
,P_Stack_NG_Array=13785
,P_Continuous_Call_Align_OK_Flag=13817
,P_Continuous_Call_Align_NG_Flag=13819
,P_Continuous_Call_Align_TimeOut_Flag=13821
,P_Continuous_Call_Surface_OK_Flag=13823
,P_Continuous_Call_Surface_NG_Flag=13825
,P_Continuous_Call_Surface_TimeOut_Flag=13827
,P_Continuous_Call_Stack_Flag=13829
,P_PLC12_Observser_MNTR=13841
,P_PLC12_Vacuum_MNTR=13846
,P_Vacuum_Check=13854
,P_PLC12_Blow_MNTR=13862
,P_Blow_Check=13870
,P_PLC12_Vacuum_1st_Cathode_Take_Time=13894
,P_PLC12_Vacuum_2nd_Cathode_Take_Time=13899
,P_PLC12_Vacuum_NG_Cathode_Take_Time=13904
,P_PLC12_Vacuum_Align_Cathode_Take_Time=13909
,P_PLC12_Vacuum_1st_Anode_Take_Time=13914
,P_PLC12_Vacuum_2nd_Anode_Take_Time=13919
,P_PLC12_Vacuum_NG_Anode_Take_Time=13924
,P_PLC12_Vacuum_Align_Anode_Take_Time=13929
,P_PLC12_Blow_1st_Cathode_Take_Time=13950
,P_PLC12_Blow_2nd_Cathode_Take_Time=13955
,P_PLC12_Blow_NG_Cathode_Take_Time=13960
,P_PLC12_Blow_Align_Cathode_Take_Time=13965
,P_PLC12_Blow_1st_Anode_Take_Time=13970
,P_PLC12_Blow_2nd_Anode_Take_Time=13975
,P_PLC12_Blow_NG_Anode_Take_Time=13980
,P_PLC12_Blow_Align_Anode_Take_Time=13985
,P_Status_arry=13992
,P_Queue_arry=14012
,P_Step_arry=14032
,P_Index_arry=14052
,P_PLC_Observser_MNTR=14079
,P_Test_Vacuum_Timer=14088
,P_Test_Blow_Timer=14096
,P_Vac_Test_Set_Time=14104
,P_Blow_Test_Set_Time=14112
,P_Zero_Angle=14175
,P_Zero_Length=14200
,P_Homeoffset_Change_Flag=14225
,P_Cal_Distance=14250
,P_Cal_Denominator=14255
,P_Cal_Numerator=14260
,P_Cal_Dif_Deg=14265
,P_Read_Timer_S=14271
,P_Write_Timer_S=14280
,P_Interval_Read_S=14289
,P_Interval_Write_S=14298
,P_UI_Jog_Vel_M=14307
,P_Old_X_Read_Count_S=14358
,P_X_BTN_Manual_1=14381
,P_X_BTN_Manual_2=14501
,P_X_BTN_Manual_3=14621
,P_Home_InterLock_M=14741
,P_Status_BTN_Manual_1=14791
,P_Status_BTN_Manual_2=14911
,P_Status_BTN_Manual_Interlock_1=15031
,P_Status_BTN_Manual_Interlock_2=15151
,P_Status_BTN_Manual_Interlock_3=15271
,P_Mode_Run_Enable_Flag=15391
,P_MNTR_PLC4_Vision_Result=15398
,P_HCK_Step_MNTR=15601
,P_Axis_Home_Pos=15651
,P_Axis_Ready_Pos=15701
,P_PMAC_Homing_CHK=15751
,P_Home_Command=15802
,P_Old_BTN_Servo_On_Off_M=15856
,P_Peak_Load_Ratio_M=15889
,P_Chk_Current_Jog_Sel=15922
,P_Recipe_POS_Interock_Num_Bit=15956
,P_Recipe_VEL=15989
,P_Recipe_POS=16000
,P_BTN_Servo_On_Off_M=16011
,P_BTN_Home_M=16044
,P_BTN_Jog_Stop_M=16077
,P_BTN_Recipe_POS_RUN_M=16110
,P_Recipe_POS_Flag_M=16143
,P_BTN_Jog_INC_M=16176
,P_BTN_JOG_ABS_M=16209
,P_Unit_Command=16243
,P_Unit_State_Machine=16343
,P_Status_BTN_Manual_3=16443
,P_Chk_Current_BTN_Sel=16543
,P_Linear_Encoder_Pos_Check_Flag=16602
,P_Linear_Encoder_Pos=16607
,P_Status_Linear_Encoder_HomeZero=16612
,P_Command_Linear_Encoder_HomeZero=16617
,P_OLD_Home_Offset=16630
,P_PLC13_Cycle_Stop_Return_Array=16718
,P_Stopping_CycleStop_Act_State_Machine=16824
,P_Module_Cycle_Stop_Act_State_Machine_Array=16844
,P_Module_Cycle_Stop_Act_Complete_Bit=16864
,P_Module_Cycle_Stop_Act_Command_Array=16884
,P_OLD_Module_Cycle_Stop_Act_Command_Array=16904
,P_Buffer_Seqdata_CycleStop_Array=16924
,P_Tact_Time_Timer=16958
,P_Tack_Time_Save_Time=16998
,P_Tact_Time_Stack_Array=17042
,P_Tact_Time_Discharge_Array=17052
,P_Tact_Time_1st_Unloader_Array=17062
,P_Tact_Time_Sepa_ARC_Array=17072
,P_Tact_Time_Final_Roll_Array=17082
,P_Tact_Time_Cathode_1st_PNP_Array=17092
,P_Tact_Time_Cathode_Align_Array=17102
,P_Tact_Time_Cathode_2nd_PNP_Array=17112
,P_Tact_Time_Cathode_Clamp_Array=17122
,P_Tact_Time_Anode_1st_PNP_Array=17132
,P_Tact_Time_Anode_Align_Array=17142
,P_Tact_Time_Anode_2nd_PNP_Array=17152
,P_Tact_Time_Anode_Clamp_Array=17162
,P_Tact_Time_Cathode_1st_PNP_Vac_Array=17172
,P_Tact_Time_Cathode_Align_PNP_Vac_Array=17182
,P_Tact_Time_Cathode_2nd_PNP_Vac_Array=17192
,P_Tact_Time_Anode_1st_PNP_Vac_Array=17202
,P_Tact_Time_Anode_Align_PNP_Vac_Array=17212
,P_Tact_Time_Anode_2nd_PNP_Vac_Array=17222
,P_Tact_Time_Check=17276
,P_Old_Tact_Time_Check=17316
,P_Tact_Time_Head_Address=17356
,P_EPC_MNTR_VAR=17413
,P_Home_Check_Arry=17441
,P_Test_HomeComplete=17493
,P_Test_Motor_Ready_Pos=17543
,P_PWM_Phasing_Start=17593
,P_PWM_Status=17598
,P_PWM_State_Machine=17603
,P_PWM_Old_time=17608
,P_AH_Seq_arr=17613
,P_Indiv_AH_Cmd=17628
,P_Indiv_AH_Status=17643
,P_Indiv_Avoid_Cmd=17658
,P_DD_M_Home_ABS_Pos=17693
,P_AH_Indvi_rtn=17698
,P_Home_Check_Arry1=17751
,P_PV_EPC_Camera_Pos=17911
,P_VISION_MSA_Status_Prod_Sequence=17931
,P_MSA_Cmd=17955
,P_Align_Take_Off_Cmd=17986
,P_Align_Take_Off_Status_Prod_Sequence=18003
,P_Old_Upper_Sensor=18031
,P_Edge_Upper_Sensor=18039
,P_Old_Lower_Sensor=18047
,P_Edge_Lower_Sensor=18055
,P_Edge_NP_BTN=18063
,P_UI_Unit_Status=18065
,P_Motor_Unit_Status=18075
,P_Current_Homming_Status_To_PLC=18125
,P_AO_Module_Arr=18213
,P_AO_Range_Set_Value=18218
,P_Force_BTN_M_Variable_Save=18251
,P_ABS_Phasing_Data=18651
,P_ABS_Home_Offset_Data=18656
,P_Servo_Gain_Kp=18665
,P_Servo_Gain_Kvfb=18695
,P_Servo_Gain_Kvff=18725
,P_Servo_Gain_Ki=18755
,P_Servo_Gain_SwZvInt=18785
,P_Servo_Gain_Kaff=18815
,P_Alarm_Arr=18846
,P_Alarm_Occur_Index_Flag=18947
,P_Alarm_Log=18958
,P_First_Alarm_Log=19058
,P_Alarm_duplicate_Check_Arr=19090
,P_Old_Drive_Alarm=19760
,P_Limit_PosData=19815
,P_Collision_Risk_Motor=19842
,P_P_IL_Normal_Pos_Offset=19849
,P_M_IL_Normal_Pos_Offset=19899
,P_P_IL_Upper_Pos_Offset=19949
,P_M_IL_Upper_Pos_Offset=19999
,P_P_IL_Align_Pos_Offset=20049
,P_M_IL_Align_Pos_Offset=20099
,P_P_IL_Stack_Pos_Offset=20149
,P_M_IL_Stack_Pos_Offset=20199
,P_Ca_2nd_T_Plus_IL_Offset=20253
,P_Ca_2nd_T_Minus_IL_Offset=20256
,P_Ca_2nd_Z_Plus_IL_Offset=20259
,P_Ca_2nd_Z_Minus_IL_Offset=20261
,P_An_2nd_T_Plus_IL_Offset=20263
,P_An_2nd_T_Minus_IL_Offset=20266
,P_An_2nd_Z_Minus_IL_Offset=20269
,P_FR_X_Plus_IL_Offset=20273
,P_FR_X_Minus_IL_Offset=20275
,P_Ca_NG_PNP_Plus_IL_Offset=20278
,P_Ca_NG_PNP_Minus_IL_Offset=20282
,P_An_NG_PNP_Plus_IL_Offset=20286
,P_An_NG_PNP_Minus_IL_Offset=20290
,P_Unloader_X_Plus_IL_Offset=20294
,P_Unloader_X_Minus_IL_Offset=20298
,P_Unloader_Z_Plus_IL_Offset=20302
,P_Unloader_Z_Minus_IL_Offset=20305
,P_IL_In_Offset=20308
,P_IL_Home_Chk_Motor_Num=20335
,P_NG_PNP_Motion_arr=20507
,P_Ecat_Read_MNTR=20549
,P_Ecat_Write_MNTR=20577
,P_Ecat_Save_MNTR=20605
,P_Ecat_Error_MNTR=20621
,P_Ecat_Read_Error_MNTR=20637
,P_Ecat_Each_Write_Error_MNTR=20653
,P_Pn000=20672
,P_Pn001=20692
,P_Pn00B=20712
,P_Pn100=20732
,P_Pn101=20752
,P_Pn102=20772
,P_Pn103=20792
,P_Pn123=20812
,P_Pn140=20832
,P_Pn141=20852
,P_Pn145=20872
,P_Pn146=20892
,P_Pn160=20912
,P_Pn161=20932
,P_Pn163=20952
,P_Pn170=20972
,P_Pn401=20992
,P_Pn408=21012
,P_Pn409=21032
,P_Pn40A=21052
,P_Pn40C=21072
,P_Pn40D=21092
,P_Pn416=21112
,P_Pn417=21132
,P_Pn511=21152
,P_Pn520=21172
,P_PnB02_Numerator=21192
,P_PnB02_Denominator=21212
,P_Pneumatic_Pressure_Unit_Tack_Time_Chk_Timer=21357
,P_Pneumatic_Pressure_Unit_Tack_Time=21384
,P_Discharge_Tact_Time_Arr=21415
,P_Buffer_Seqdata_All_Home_Array=21497
,P_PLC19_All_Home_Tact_Time_Array=21528
,P_Act_All_Home_Complete_Bit=21550
,P_Module_Act_All_Home_Command_Array=21590
,P_OLD_Module_Act_All_Home_Command_Array=21630
,P_Module_Act_All_Home_State_Machine_Array=21670
,P_Act_All_Home_Old_Time=21710
,P_Act_ALL_Home_Time_Out=21751
,P_Act_Hold_Complete_Bit=21791
,P_Module_Act_Hold_Command_Array=21826
,P_OLD_Module_Act_Hold_Command_Array=21861
,P_Module_Act_Hold_State_Machine_Array=21896
,P_Act_Hold_Old_Time=21931
,P_Act_Hold_Time_Out=21967
,P_Act_Execute_Complete_Bit=22035
,P_Module_Act_Execute_Command_Array=22047
,P_OLD_Module_Act_Execute_Command_Array=22059
,P_Module_Act_Execute_State_Machine_Array=22071
,P_Act_Execute_Old_Time=22083
,P_Act_Execute_Time_Out=22096
,P_Buffer_Mode_Module_Status_Sequence=22145
,P_EXECUTE_Status_Prod_Sequence=22175
,P_Buffer_Seqdata_Execute_First_Sepa_Mode_Array=22212
,P_Execute_First_Sepa_Mode_Tact_Time_Array=22243
,P_Discharge_Seq_InterLock_Delay_Time=22270
,P_Discharge_Seq_InterLock_Flag=22300
,P_Buffer_Seqdata_Discharge_Array=22330
,P_Suspend_Discharge_Tact_Time_Array=22361
,P_ARC_Seq_InterLock_Delay_Time=22389
,P_ARC_Seq_InterLock_Flag=22419
,P_Buffer_Seqdata_ARC_Array=22449
,P_Suspend_ARC_Tact_Time_Array=22480
,P_Anode_1TR_Cell_Supply_Seq_InterLock_Delay_Time=22507
,P_Anode_1TR_Cell_Supply_Seq_InterLock_Flag=22537
,P_Buffer_Seqdata_Anode_1TR_Cell_Supply_Array=22567
,P_Suspend_Anode_1TR_Cell_Supply_Tact_Time_Array=22598
,P_Buffer_Seqdata_Hold_Exist_Insp_Array=22626
,P_Hold_Exist_Insp_Tact_Time_Array=22657
,P_Buffer_Seqdata_Hold_Remove_NG_PNP_Array=22685
,P_Hold_Remove_NG_PNP_Tact_Time_Array=22716
,P_Buffer_Seqdata_Hold_Remove_Align_Array=22747
,P_Hold_Remove_Align_Tact_Time_Array=22778
,P_Buffer_Seqdata_Hold_Remove_2TR_Array=22809
,P_Hold_Remove_2TR_Tact_Time_Array=22840
,P_Buffer_Seqdata_Hold_Supply_1TR_Array=22868
,P_Hold_Supply_1TR_Tact_Time_Array=22899
,P_Buffer_Seqdata_Hold_Supply_Align_Array=22932
,P_Hold_Supply_Align_Tact_Time_Array=22963
,P_Buffer_Seqdata_Hold_Supply_2TR_Array=22991
,P_Hold_Supply_2TR_Tact_Time_Array=23022
,P_Buffer_Seqdata_Hold_Semi_Run_Pos_Move_Array=23050
,P_Hold_Semi_Run_Pos_Move_Tact_Time_Array=23081
,P_Act_Complete_Bit=23102
,P_Act_Old_Time=23168
,P_Act_Delay_Time=23234
,P_Act_Time_Out=23301
,P_Discharge_Possibility_Bit=23368
,P_HOLD_Exist_Possibility_Bit=23434
,P_HOLD_NG_Remove_Possibility_Bit=23500
,P_HOLD_Align_Remove_Possibility_Bit=23566
,P_HOLD_2TR_Remove_Possibility_Bit=23632
,P_HOLD_1TR_Supply_Possibility_Bit=23698
,P_HOLD_Align_Supply_Possibility_Bit=23764
,P_HOLD_2TR_Supply_Possibility_Bit=23830
,P_HOLD_Semi_Run_Pos_Possibility_Bit=23896
,P_Module_Act_Command_Array=23962
,P_OLD_Module_Act_Command_Array=24028
,P_Module_Act_State_Machine_Array=24094
,P_Module_Act_State_Machine_Error_Array=24160
,P_Sensor_To_Sepa_Curr_Distance_mm=24256
,P_Suspend_Monitor_=24287
,P_Suspend_Discharge_Debug_Address=24301
,P_Suspend_Discharge_Debug_Value=24306
,P_Suspend_ARC_Debug_Address=24318
,P_Suspend_ARC_Debug_Value=24323
,P_ARC_Ready_Flag=24333
,P_Suspend_An_1TR_Supply_Debug_Address=24338
,P_Suspend_An_1TR_Supply_Debug_Value=24343
,P_Anode_Suspend_Supply_Complete=24355
,P_MOde_Num=24438
,P_Command_Depth=24443
,P_In_Position=24448
,P_Last_Cycle_Command=24453
,P_Slave1_Anode_Run_Motion_Array=24461
,P_Slave2_Anode_Run_Motion_Array=24561
,P_Slave3_Anode_Run_Motion_Array=24661
,P_Slave4_Anode_Run_Motion_Array=24761
,P_Slave5_Anode_Run_Motion_Array=24861
,P_Slave6_Anode_Run_Motion_Array=24961
,P_Slave7_Anode_Run_Motion_Array=25061
,P_Slave8_Anode_Run_Motion_Array=25161
,P_Slave9_Anode_Run_Motion_Array=25261
,P_Slave10_Anode_Run_Motion_Array=25361
,P_Slave15_Anode_Run_Motion_Array=25461
,P_Slave16_Anode_Run_Motion_Array=25561
,P_Slave17_Anode_Run_Motion_Array=25661
,P_Slave18_Anode_Run_Motion_Array=25761
,P_Slave19_Anode_Run_Motion_Array=25861
,P_Slave1_Cathode_Run_Motion_Array=25961
,P_Slave2_Cathode_Run_Motion_Array=26061
,P_Slave3_Cathode_Run_Motion_Array=26161
,P_Slave4_Cathode_Run_Motion_Array=26261
,P_Slave5_Cathode_Run_Motion_Array=26361
,P_Slave15_Cathode_Run_Motion_Array=26461
,P_Slave6_Cathode_Run_Motion_Array=26561
,P_Slave7_Cathode_Run_Motion_Array=26661
,P_Slave8_Cathode_Run_Motion_Array=26761
,P_Slave9_Cathode_Run_Motion_Array=26861
,P_Slave10_Cathode_Run_Motion_Array=26961
,P_Slave16_Cathode_Run_Motion_Array=27061
,P_Slave17_Cathode_Run_Motion_Array=27161
,P_Slave18_Cathode_Run_Motion_Array=27261
,P_Slave19_Cathode_Run_Motion_Array=27361
,P_HCmd_List=27503
,P_DataList=27539
,P_Hold_Data_Err=27544
,P_Hold_Motion_Arr=27572
,P_Hold_Err_MNTR=27637
,P_Hold_Err_Data_Save=27641
,P_Hold_Err_Action_Data_Save=27649
,P_Hold_Memory_Tower_Err_Pos=27658
,P_Buffer_Seqdata_MSA_Array=27686
,P_Buffer_Seqdata_Align_Take_Off_Array=27736
,P_VISION_MSA_Align_Module_Complete_Bit=27786
,P_Module_Manual_MSA_Act_Command_Array=27886
,P_OLD_Module_Manual_MSA_Act_Command_Array=27986
,P_Module_MSA_Act_State_Machine_Array=28086
,P_VISION_MSA_Seq_Stopping_Point=28186
,P_Align_Take_Off_Module_Complete_Bit=28219
,P_Module_Manual_Align_Take_Off_Act_Command_Array=28319
,P_OLD_Module_Manual_Align_Take_Off_Act_Command_Array=28419
,P_Module_Align_Take_Off_Act_State_Machine_Array=28519
,P_Buffer_Judge_Trg=28626
,P_PLC01_Queue_MNTR=28637
,P_PLC01_Exe_Is_Ena_Step_Flag=28665
,P_PLC01_Exe_Fist_Sepa_Step_Flag=28675
,P_PLC01_Exe_Prod_Step_Flag=28685
,P_PLC01_HOLD_Insp_Step_Flag=28690
,P_PLC01_HOLD_Main_Step_Flag=28700
,P_PLC01_Sus_Discharge_Step_Flag=28715
,P_PLC01_Sus_ARC_Step_Flag=28725
,P_PLC01_STOP_Init_Step_Flag=28735
,P_PLC01_STOP_Cycle_ST_Step_Flag=28745
,P_No1_Recipe_Pos_IL=28794
,P_No2_Recipe_Pos_IL=28847
,P_No3_Recipe_Pos_IL=28900
,P_No4_Recipe_Pos_IL=28953
,P_No5_Recipe_Pos_IL=29006
,P_No6_Recipe_Pos_IL=29059
,P_No7_Recipe_Pos_IL=29112
,P_No8_Recipe_Pos_IL=29165
,P_No9_Recipe_Pos_IL=29218
,P_No10_Recipe_Pos_IL=29271
,P_Recipe_POS_Interock_M=29324};
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
#define P_Sepa_Test 8356
#define P_Cur_Equip_No 8357
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
#define P_Home_Status 8358
#define P_Status_PMAC_Alarm_Reset 5387
#define M_Ecat_Load_Ratio 8192
#define P_Driving_Circumference 8408
#define P_PLC06_Spool_Circumference 8409
#define P_Upper_Spool_Circumference 8410
#define P_Lower_Spool_Circumference 8411
#define P_CamTable_MAX_EA 8412
#define P_Cam_Move_Distanse 8413
#define P_Sepa_Driving_Diameter 8414
#define P_PI 8415
#define M_Read_Sector_Scan_Complete 8242
#define M_Write_Sector_Scan_Complete 8251
#define M_Read_Sector_Scan_Cmd 8260
#define M_Write_Sector_Scan_Cmd 8269
#define M_Read_Sector_Scan_Time 8278
#define M_Write_Sector_Scan_Time 8287
#define Sys_Kill_Manual_BG_C 7777
#define P_Max_Try_Reconnect_MC 8416
#define P_Cur_Try_Reconnect_MC 8417
#define P_Modbus_Connected_Flag 8418
#define P_Write_Modbus_HeartBeat 1500
#define M_Sys_Time 8296
#define P_Homing_Step_Monitor 8419
#define M_Gate3_MinusLimit 8297
#define M_Gate3_HomeLimit 8324
#define P_231213_Test_Status 8469
#define P_BTN_Sepa_Stack_Mode 8519
#define P_BTN_Dryrun_Mode 8520
#define P_X_Btn_Align_Table_Take_Off 8521
#define P_Align_Table_Take_Off_Flag 8522
#define P_Flag_AT_Take_Off_Home_Chk_Flag 8523
#define P_Align_Table_Take_Off_State_Machine 8524
#define P_Align_Table_Take_Off_Status 8525
#define P_AT_Take_Off_Jog_Speed 8526
#define P_2nd_Transfer_AT_Take_Off_Pos 8527
#define P_VISION_Initial_Pos_Cmd 8528
#define P_VISION_Cal_Pos_Cmd 8529
#define P_FR_Anode_Dritection_Pos_Cmd 8530
#define P_FR_Cahode_Dritection_Pos_Cmd 8531
#define P_Anode_AT_Resolution_Cal_Pos_Cmd 8532
#define P_Cathode_AT_Resolution_Cal_Pos_Cmd 8533
#define P_Vision_Initial_Pos_Status_Machine 8534
#define P_Vision_Cal_Pos_Status_Machine 8535
#define P_FR_Anode_Dritection_Pos_Status_Machine 8536
#define P_FR_Cahode_Dritection_Pos_Status_Machine 8537
#define P_Anode_AT_Resolution_Cal_Pos_Status_Machine 8538
#define P_Cathode_AT_Resolution_Cal_Pos_Status_Machine 8539
#define P_Status_Vision_Initial_Pos 8540
#define P_Status_Vision_Cal_Pos 8541
#define P_Status_FR_Anode_Dritection_Pos 8542
#define P_Status_FR_Cahode_Dritection_Pos 8543
#define P_Status_An_AT_Resolution_Cal_Pos 8544
#define P_Status_Ca_AT_Resolution_Cal_Pos 8545
#define P_CMD_Cleaning_Pos 8546
#define P_Cleaning_Pos_Status_Machine 8547
#define P_Status_Cleaning_Pos 8548
#define P_Push_Manual_ARC_Button 8549
#define P_Push_Cycle_Stop_Button 8550
#define P_BTN_Push_Cathode_MSA_Mode 8551
#define P_BTN_Push_Anode_MSA_Mode 8552
#define P_BTN_Push_Cathode_Align_MSA 8553
#define P_BTN_Push_Anode_Align_MSA 8554
#define P_Btn_Vision_Initial_Pos 8555
#define P_Btn_Vision_Cal_Pos 8556
#define P_Btn_Vision_Cal_Anode_Move 8557
#define P_Btn_Vision_Cal_Cathode_Move 8558
#define P_Btn_An_AT_Resolution_Cal_Pos 8559
#define P_Btn_Ca_AT_Resolution_Cal_Pos 8560
#define P_Btn_Cleaning_Mode_Pos 8561
#define P_BTN_Push_Align_Auto_Cal_Ready_Pos_Move 8562
#define P_CMD_MSA_Run 8565
#define P_AutoVisionCal_StMachine 8570
#define P_CMD_Cathode_Align_Complete 8571
#define P_CMD_Anode_Align_Complete 8572
#define P_CMD_Align_Auto_Cal_Ready_Pos_Move_Run 8573
#define P_Align_Auto_Cal_Ready_Pos_Move_Run_State_Machine 8576
#define P_Align_Auto_Cal_Ready_Pos_Move_Run_Status 8579
#define P_Align_Auto_Cal_Ready_Pos_Move_Run_Complete 8582
#define P_Cal_Ready_Pos_Move_TR_Z_Jog_Speed 8585
#define P_Cal_Ready_Pos_Move_TR_X_Jog_Speed 8586
#define P_CMD_Cell_Align 8587
#define P_CMD_Cell_Stop 8597
#define P_CMD_Cell_Reset 8607
#define P_Anode_Clamp_Z1_Initial_Pos_mm 8617
#define P_Anode_Clamp_Z2_Initial_Pos_mm 8618
#define P_Cathode_Clamp_Z1_Initial_Pos_mm 8619
#define P_Cathode_Clamp_Z2_Initial_Pos_mm 8620
#define P_Stack_Table_Z_Initial_Pos_mm 8621
#define P_FR_Initial_Pos_mm 8622
#define P_Anode_Clamp_Z1_Cal_Pos_mm 8623
#define P_Anode_Clamp_Z2_Cal_Pos_mm 8624
#define P_Cathode_Clamp_Z1_Cal_Pos_mm 8625
#define P_Cathode_Clamp_Z2_Cal_Pos_mm 8626
#define P_Stack_Table_Z_Cal_Pos_mm 8627
#define P_FR_Cal_Pos_mm 8628
#define P_Anode_Clamp_Z1_Move_Speed 8629
#define P_Anode_Clamp_Z2_Move_Speed 8630
#define P_Cathode_Clamp_Z1_Move_Speed 8631
#define P_Cathode_Clamp_Z2_Move_Speed 8632
#define P_Stack_Table_Z_Move_Speed 8633
#define P_FR_Cal_Move_Speed 8634
#define P_Old_Anode_Clamp_Z1_Move_Speed 8635
#define P_Old_Anode_Clamp_Z2_Move_Speed 8636
#define P_Old_Cathode_Clamp_Z1_Move_Speed 8637
#define P_Old_Cathode_Clamp_Z2_Move_Speed 8638
#define P_Old_Stack_Table_Z_Move_Speed 8639
#define P_Old_FR_Cal_Move_Speed 8640
#define P_An_AT_Resolution_Anode_2th_Z_Pos_mm 8641
#define P_An_AT_Resolution_Anode_2th_T_Pos_mm 8642
#define P_An_AT_Resolution_Cathode_2th_Z_Pos_mm 8643
#define P_An_AT_Resolution_Cathode_2th_T_Pos_mm 8644
#define P_FR_AT_Resolution_Pos_mm 8645
#define P_Old_AT_Resolution_Anode_2th_Z_Pos_Move_Speed 8646
#define P_Old_AT_Resolution_Anode_2th_T_Pos_Move_Speed 8647
#define P_Old_AT_Resolution_Cathode_2th_Z_Pos_Move_Speed 8648
#define P_Old_AT_Resolution_Cathode_2th_T_Pos_Move_Speed 8649
#define P_Old_FR_AT_Resolution_Move_Speed 8650
#define P_Ca_AT_Resolution_Anode_2th_Z_Pos_mm 8651
#define P_Ca_AT_Resolution_Anode_2th_T_Pos_mm 8652
#define P_Ca_AT_Resolution_Cathode_2th_Z_Pos_mm 8653
#define P_Ca_AT_Resolution_Cathode_2th_T_Pos_mm 8654
#define P_AT_Resolution_Anode_2th_Z_Pos_Move_Speed 8655
#define P_AT_Resolution_Anode_2th_T_Pos_Move_Speed 8656
#define P_AT_Resolution_Cathode_2th_Z_Pos_Move_Speed 8657
#define P_AT_Resolution_Cathode_2th_T_Pos_Move_Speed 8658
#define P_FR_AT_Resolution_Move_Speed 8659
#define P_Anode_1th_MES_APC_Move_mm_PLC 8660
#define P_Cathode_1th_MES_APC_Move_mm_PLC 8661
#define P_Anode_1th_MES_APC_Move_mm_PMAC 8662
#define P_Cathode_1th_MES_APC_Move_mm_PMAC 8663
#define P_Anode_X_before_Comp_mm 8664
#define P_Cathode_X_before_Comp_mm 8665
#define P_Flag_Anode_1PNP_APC_Apply_Point 8666
#define P_Flag_Cathode_1PNP_APC_Apply_Point 8667
#define P_MES_APC_Active 8668
#define P_OLD_Slave1_Target_X_Belt_To_Align 8669
#define P_OLD_Slave10_Target_X_Belt_To_Align 8670
#define P_Anode_MES_X_Average_mm 8671
#define P_Cathode_MES_X_Average_mm 8672
#define P_Anode_X_Sum_Move_mm 8673
#define P_Anode_Align_Stage_TM 8674
#define P_Anode_Align_Stage_TS 8675
#define P_Anode_Align_Stage_TA 8676
#define P_Status_Anode_Prog 8677
#define P_Cathode_X_Sum_Move_mm 8678
#define P_X_Move_Recipe_Percent 8679
#define P_Cathode_Align_Stage_TM 8680
#define P_Cathode_Align_Stage_TS 8681
#define P_Cathode_Align_Stage_TA 8682
#define P_Status_Cathode_Prog 8683
#define P_Anode_Align_Move_Machine 8684
#define P_Cathode_Align_Move_Machine 8685
#define P_Stack_Table_Move_Machine 8686
#define P_Status_Anode_Align_Move 8687
#define P_Status_Cathode_Align_Move 8688
#define P_Status_Stack_Table_Move 8689
#define P_Anode_Align_Start_Bit 8690
#define P_Cathode_Align_Start_Bit 8691
#define P_Anode_Retry_Start_Bit 8692
#define P_Cathode_Retry_Start_Bit 8693
#define P_Vision_Spea_Run_Complete_Machine 8694
#define P_Vision_Sepa_Run_Complete_CMD 8695
#define P_Vision_Clamp_Complete_Machine 8696
#define P_Vision_Clamp_Complete_CMD 8697
#define P_PC_Jog_Motor_No 4301
#define P_PC_Jog_Speed 4254
#define P_Custom_Speed 4500
#define P_Jog_Position 4300
#define P_Jog_Work_Speed 8698
#define P_Anode_Recipe_Count 8729
#define P_Cathode_Recipe_Count 8730
#define P_Recipe_Homing_Speed 8731
#define P_Slave5_Target_Z_Wait_Pos 8780
#define P_Slave5_Target_Z_Start_Pos 8781
#define P_Sepa_First_Clamp_On_Up 8782
#define P_Slave6_Target_X_Wait_Pos 8783
#define P_Anode_1st_T_Belt_To_Align 8784
#define P_Anode_1st_T_Align_To_Belt 8785
#define P_Anode_1st_T_Ready 8786
#define P_Recipe_A_1st_Z_Belt_Down 8787
#define P_Recipe_A_1st_Z_Belt_Up 8788
#define P_Recipe_A_1st_Z_Align_Down 8789
#define P_Recipe_A_1st_Z_Align_Up 8790
#define P_Recipe_A_1st_Z_Ready_Up 8791
#define P_Recipe_A_1st_Z_Ready_Down 8792
#define P_Anode_1st_Z_Belt_Down 8793
#define P_Anode_1st_Z_Belt_Up 8794
#define P_Anode_1st_Z_Align_Down 8795
#define P_Anode_1st_Z_Align_Up 8796
#define P_Anode_1st_Z_Ready_Up 8797
#define P_Anode_1st_Z_Ready_Down 8798
#define P_Anode_2st_T_Align_To_Stack 8799
#define P_Anode_2st_T_Stack_To_Align 8800
#define P_Recipe_A_2st_Z_Align_Up 8801
#define P_Recipe_A_2st_Z_Align_Down 8802
#define P_Recipe_A_2st_Z_Stack_Up 8803
#define P_Recipe_A_2st_Z_Stack_Down 8804
#define P_Recipe_A_2st_Z_Ready_Up 8805
#define P_Recipe_A_2st_Z_Ready_Down 8806
#define P_Anode_2nd_Z_Align_Up 8807
#define P_Anode_2nd_Z_Align_Down 8808
#define P_Anode_2nd_Z_Stack_Up 8809
#define P_Anode_2nd_Z_Stack_Down 8810
#define P_Anode_2nd_Z_Ready_Up 8811
#define P_Anode_2st_Z_Ready_Down 8812
#define P_Anode_Clamp_Y1_On_1st 8813
#define P_Anode_Clamp_Y1_On_2nd 8814
#define P_Anode_Clamp_Y1_On_3rd 8815
#define P_Anode_Clamp_Y1_On_4th 8816
#define P_Anode_Clamp_Y1_Off_1st 8817
#define P_Anode_Clamp_Y1_Off_2nd 8818
#define P_Anode_Clamp_Y1_Off_3rd 8819
#define P_Anode_Clamp_Y2_On_1st 8820
#define P_Anode_Clamp_Y2_On_2nd 8821
#define P_Anode_Clamp_Y2_On_3rd 8822
#define P_Anode_Clamp_Y2_On_4th 8823
#define P_Anode_Clamp_Y2_Off_1st 8824
#define P_Anode_Clamp_Y2_Off_2nd 8825
#define P_Anode_Clamp_Y2_Off_3rd 8826
#define P_Anode_Clamp_Z1_On_1st 8827
#define P_Anode_Clamp_Z1_On_2nd 8828
#define P_Anode_Clamp_Z1_On_3rd 8829
#define P_Anode_Clamp_Z1_On_4th 8830
#define P_Anode_Clamp_Z1_Off_1st 8831
#define P_Anode_Clamp_Z1_Off_2nd 8832
#define P_Anode_Clamp_Z1_Off_3rd 8833
#define P_Anode_Clamp_Z1_Down 8834
#define P_Final_Roll_X_Sepa_1st 8835
#define P_Final_Roll_X_Sepa_2nd 8836
#define P_Final_Roll_X_Sepa_3rd 8837
#define P_Final_Roll_X_Sepa_4th 8838
#define P_Final_Roll_X_Sepa_5th 8839
#define P_Final_Roll_X_Anode_Move 8840
#define P_Final_Roll_X_Discharge 8841
#define P_Final_Roll_X_Cathode_Move 8842
#define P_Final_Roll_X_Run_Wait_Pos 8843
#define P_Final_Roll_Z_Ready_And_Cutting 8844
#define P_Final_Roll_Z_Run_Pos 8845
#define P_Final_Roll_Z_Sepa_3rd 8846
#define P_Final_Roll_Z_Sepa_4th 8847
#define P_Final_Roll_Z_Sepa_5th 8848
#define P_Stack_Table_Z_For_Sepa 8849
#define P_Stack_Table_Z_For_Run 8850
#define P_Stack_Table_Z_For_Init 8851
#define P_Cathode_Clamp_Y1_On_1st 8852
#define P_Cathode_Clamp_Y1_On_2nd 8853
#define P_Cathode_Clamp_Y1_On_3rd 8854
#define P_Cathode_Clamp_Y1_On_4th 8855
#define P_Cathode_Clamp_Y1_Off_1st 8856
#define P_Cathode_Clamp_Y1_Off_2nd 8857
#define P_Cathode_Clamp_Y1_Off_3rd 8858
#define P_Cathode_Clamp_Y2_On_1st 8859
#define P_Cathode_Clamp_Y2_On_2nd 8860
#define P_Cathode_Clamp_Y2_On_3rd 8861
#define P_Cathode_Clamp_Y2_On_4th 8862
#define P_Cathode_Clamp_Y2_Off_1st 8863
#define P_Cathode_Clamp_Y2_Off_2nd 8864
#define P_Cathode_Clamp_Y2_Off_3rd 8865
#define P_Cathode_Clamp_Z1_On_1st 8866
#define P_Cathode_Clamp_Z1_On_2nd 8867
#define P_Cathode_Clamp_Z1_On_3rd 8868
#define P_Cathode_Clamp_Z1_On_4th 8869
#define P_Cathode_Clamp_Z1_Off_1st 8870
#define P_Cathode_Clamp_Z1_Off_2nd 8871
#define P_Cathode_Clamp_Z1_Off_3rd 8872
#define P_Cathode_Clamp_Z1_Down 8873
#define P_Cathode_2st_T_Align_To_Stack 8874
#define P_Cathode_2st_T_Stack_To_Align 8875
#define P_Slave8_Target_X_Align_To_Stack_1st 8876
#define P_Slave8_Target_X_Align_To_Stack_2nd 8877
#define P_Slave8_Target_X_Stack_To_Align_1st 8878
#define P_Slave8_Target_X_Stack_To_Align_2nd 8879
#define P_Slave8_Target_X_Stack_To_Align_3rd 8880
#define P_Cathode_2nd_Z_Align_Up 8881
#define P_Cathode_2nd_Z_Align_Down 8882
#define P_Cathode_2nd_Z_Stack_Up 8883
#define P_Cathode_2nd_Z_Stack_Down 8884
#define P_Cathode_2nd_Z_Ready_Up 8885
#define P_Cathode_2st_Z_Ready_Down 8886
#define P_Recipe_C_2st_Z_Align_Up 8887
#define P_Recipe_C_2st_Z_Align_Down 8888
#define P_Recipe_C_2st_Z_Stack_Up 8889
#define P_Recipe_C_2st_Z_Stack_Down 8890
#define P_Recipe_C_2st_Z_Ready_Up 8891
#define P_Recipe_C_2st_Z_Ready_Down 8892
#define P_Cathode_1st_T_Belt_To_Align 8893
#define P_Cathode_1st_T_Align_To_Belt 8894
#define P_Cathode_1st_T_Ready 8895
#define P_Cathode_1st_Z_Belt_Down 8896
#define P_Cathode_1st_Z_Belt_Up 8897
#define P_Cathode_1st_Z_Align_Down 8898
#define P_Cathode_1st_Z_Align_Up 8899
#define P_Cathode_1st_Z_Ready_Up 8900
#define P_Cathode_1st_Z_Ready_Down 8901
#define P_Recipe_C_1st_Z_Belt_Down 8902
#define P_Recipe_C_1st_Z_Belt_Up 8903
#define P_Recipe_C_1st_Z_Align_Down 8904
#define P_Recipe_C_1st_Z_Align_Up 8905
#define P_Recipe_C_1st_Z_Ready_Up 8906
#define P_Recipe_C_1st_Z_Ready_Down 8907
#define P_1st_Sheet_Paper_X_FWD 8908
#define P_1st_Sheet_Paper_X_BWD 8909
#define P_Cathode_NG_T_NG_To_Align 8910
#define P_Cathode_NG_T_Align_To_NG 8911
#define P_Cathode_NG_Z_NG_Down 8912
#define P_Cathode_NG_Z_NG_Up 8913
#define P_Cathode_NG_Z_Align_Down 8914
#define P_Cathode_NG_Z_Align_Up 8915
#define P_Anode_NG_T_NG_To_Align 8916
#define P_Anode_NG_T_Align_To_NG 8917
#define P_Anode_NG_Z_NG_Down 8918
#define P_Anode_NG_Z_NG_Up 8919
#define P_Anode_NG_Z_Align_Down 8920
#define P_Anode_NG_Z_Align_Up 8921
#define P_1st_ULD_X_Stack 8922
#define P_1st_ULD_X_FWD 8923
#define P_1st_ULD_X_Init_Pos 8924
#define P_1st_ULD_X_Target_BWD 8925
#define P_1st_ULD_Z_Stack 8926
#define P_1st_ULD_Z_Cutting_For_Cell 8927
#define P_1st_ULD_Z_Discharge_For_Cell 8928
#define P_1st_ULD_Z_Target_Down 8929
#define P_1st_ULD_T_Wait 8930
#define P_1st_ULD_T_Avoid_Angle 8931
#define P_1st_ULD_T_90_Angle 8932
#define P_Slave1_Start_X_Belt 8933
#define P_Slave1_Start_X_Align 8934
#define P_Slave1_Start_X_NG 8935
#define P_Slave1_Start_Z_Up 8936
#define P_Slave1_Start_Z_Down_Belt 8937
#define P_Slave1_Start_Z_Down_Align 8938
#define P_Slave1_Start_Z_Down_NG 8939
#define P_Slave3_Start_X_Align 8940
#define P_Slave3_Start_X_Align_To_Stack 8941
#define P_Slave3_Start_X_Stack 8942
#define P_Slave3_Start_X_Stack_To_Align_2 8943
#define P_Slave3_Start_X_Stack_To_Align_3 8944
#define P_Slave3_Start_Z_Align_To_Stack_1 8945
#define P_Slave3_Start_Z_Align_To_Stack_2 8946
#define P_Slave3_Start_Z_Stack_To_Align_1 8947
#define P_Slave3_Start_Z_Stack_To_Align_2 8948
#define P_Slave3_Start_Z_Stack_To_Align_3 8949
#define P_Slave3_Start_Z_Align_Down 8950
#define P_Slave3_Start_Z_Align_Up 8951
#define P_Slave3_Start_Z_Stack_Down 8952
#define P_Slave3_Start_Z_Stack_Up 8953
#define P_Slave4_Start_X_Clamp_On_1st 8954
#define P_Slave4_Start_X_Clamp_On_2nd 8955
#define P_Slave4_Start_X_Clamp_On_3rd 8956
#define P_Slave4_Start_X_Clamp_On_4th 8957
#define P_Slave4_Start_X_Clamp_Off_1st 8958
#define P_Slave4_Start_X_Clamp_Off_2nd 8959
#define P_Slave4_Start_X_Clamp_Off_3rd 8960
#define P_Slave4_Start_Z_Clamp_On_1st 8961
#define P_Slave4_Start_Z_Clamp_On_2nd 8962
#define P_Slave4_Start_Z_Clamp_On_3rd 8963
#define P_Slave4_Start_Z_Clamp_On_4th 8964
#define P_Slave4_Start_Z_Clamp_Off_1st 8965
#define P_Slave4_Start_Z_Clamp_Off_2nd 8966
#define P_Slave4_Start_Z_Clamp_Off_3rd 8967
#define P_Slave4_Start_Z_Down 8968
#define P_Slave5_Start_X_Anode_Move_1st 8969
#define P_Slave5_Start_X_Anode_Move_2nd 8970
#define P_Slave5_Start_X_Cathode_Move_1st 8971
#define P_Slave5_Start_X_Cathode_Move_2nd 8972
#define P_Slave5_Start_X_Sepa_1st 8973
#define P_Slave5_Start_X_Sepa_2nd 8974
#define P_Slave5_Start_X_Sepa_3rd 8975
#define P_Slave5_Start_X_Sepa_4th 8976
#define P_Slave5_Start_X_Sepa_5th 8977
#define P_Slave5_Start_Z_Sepa_1st 8978
#define P_Slave5_Start_Z_Sepa_2nd 8979
#define P_Slave5_Start_Z_Sepa_3rd 8980
#define P_Slave5_Start_Z_Sepa_4th 8981
#define P_Slave5_Start_Z_Sepa_5th 8982
#define P_Slave6_Start_Z_Wait_Pos 8983
#define P_Slave6_Start_Z_For_Sepa_Mode 8984
#define P_Slave7_Start_X_Clamp_On_1st 8985
#define P_Slave7_Start_X_Clamp_On_2nd 8986
#define P_Slave7_Start_X_Clamp_On_3rd 8987
#define P_Slave7_Start_X_Clamp_On_4th 8988
#define P_Slave7_Start_X_Clamp_Off_1st 8989
#define P_Slave7_Start_X_Clamp_Off_2nd 8990
#define P_Slave7_Start_X_Clamp_Off_3rd 8991
#define P_Slave7_Start_Z_Clamp_On_1st 8992
#define P_Slave7_Start_Z_Clamp_On_2nd 8993
#define P_Slave7_Start_Z_Clamp_On_3rd 8994
#define P_Slave7_Start_Z_Clamp_On_4th 8995
#define P_Slave7_Start_Z_Clamp_Off_1st 8996
#define P_Slave7_Start_Z_Clamp_Off_2nd 8997
#define P_Slave7_Start_Z_Clamp_Off_3rd 8998
#define P_Slave7_Start_Z_Down 8999
#define P_Slave8_Start_X_Align 9000
#define P_Slave8_Start_X_Align_To_Stack 9001
#define P_Slave8_Start_X_Stack 9002
#define P_Slave8_Start_X_Stack_To_Align_2 9003
#define P_Slave8_Start_X_Stack_To_Align_3 9004
#define P_Slave8_Start_Z_Align_To_Stack_1 9005
#define P_Slave8_Start_Z_Align_To_Stack_2 9006
#define P_Slave8_Start_Z_Stack_To_Align_1 9007
#define P_Slave8_Start_Z_Stack_To_Align_2 9008
#define P_Slave8_Start_Z_Stack_To_Align_3 9009
#define P_Slave8_Start_Z_Align_Down 9010
#define P_Slave8_Start_Z_Align_Up 9011
#define P_Slave8_Start_Z_Stack_Down 9012
#define P_Slave8_Start_Z_Stack_Up 9013
#define P_Slave10_Start_X_Belt 9014
#define P_Slave10_Start_X_Align 9015
#define P_Slave10_Start_X_NG 9016
#define P_Slave10_Start_Z_Up 9017
#define P_Slave10_Start_Z_Down_Belt 9018
#define P_Slave10_Start_Z_Down_Align 9019
#define P_Slave10_Start_Z_Down_NG 9020
#define P_Slave1_Move_X_Belt_Align 9021
#define P_Slave1_Move_X_Align_Belt 9022
#define P_Slave1_Move_X_Belt_NG 9023
#define P_Slave1_Move_X_NG_Belt 9024
#define P_Slave1_Move_X_Align_NG 9025
#define P_Slave1_Move_Z_Belt_Down 9026
#define P_Slave1_Move_Z_Belt_Up 9027
#define P_Slave1_Move_X_NG_Align 9028
#define P_Slave1_Move_Z_Align_Down 9029
#define P_Slave1_Move_Z_Align_Up 9030
#define P_Slave1_Move_Z_NG_Down 9031
#define P_Slave1_Move_Z_NG_Up 9032
#define P_Slave3_Move_X_Align_To_Stack_1st 9033
#define P_Slave3_Move_X_Align_To_Stack_2nd 9034
#define P_Slave3_Move_X_Stack_To_Align_1st 9035
#define P_Slave3_Move_X_Stack_To_Align_2nd 9036
#define P_Slave3_Move_X_Stack_To_Align_3rd 9037
#define P_Slave3_Move_Z_Align_To_Stack_1st 9038
#define P_Slave3_Move_Z_Align_To_Stack_2nd 9039
#define P_Slave3_Move_Z_Stack_To_Align_1st 9040
#define P_Slave3_Move_Z_Stack_To_Align_2nd 9041
#define P_Slave3_Move_Z_Stack_To_Align_3rd 9042
#define P_Slave3_Move_Z_Align_Up 9043
#define P_Slave3_Move_Z_Align_Down 9044
#define P_Slave3_Move_Z_Stack_Up 9045
#define P_Slave3_Move_Z_Stack_Down 9046
#define P_Slave4_Move_X_Clamp_On_1st 9047
#define P_Slave4_Move_X_Clamp_On_2nd 9048
#define P_Slave4_Move_X_Clamp_On_3rd 9049
#define P_Slave4_Move_X_Clamp_On_4th 9050
#define P_Slave4_Move_X_Clamp_Off_1st 9051
#define P_Slave4_Move_X_Clamp_Off_2nd 9052
#define P_Slave4_Move_X_Clamp_Off_3rd 9053
#define P_Slave4_Move_Z_Clamp_On_1st 9054
#define P_Slave4_Move_Z_Clamp_On_2nd 9055
#define P_Slave4_Move_Z_Clamp_On_3rd 9056
#define P_Slave4_Move_Z_Clamp_On_4th 9057
#define P_Slave4_Move_Z_Clamp_Off_1st 9058
#define P_Slave4_Move_Z_Clamp_Off_2nd 9059
#define P_Slave4_Move_Z_Clamp_Off_3rd 9060
#define P_Slave4_Move_Z_Down 9061
#define P_Slave5_Move_X_Anode_Move_1st 9062
#define P_Slave5_Move_X_Anode_Move_2nd 9063
#define P_Slave5_Move_X_Cathode_Move_1st 9064
#define P_Slave5_Move_X_Cathode_Move_2nd 9065
#define P_Slave5_Move_X_Sepa_1st 9066
#define P_Slave5_Move_X_Sepa_2nd 9067
#define P_Slave5_Move_X_Sepa_3rd 9068
#define P_Slave5_Move_X_Sepa_4th 9069
#define P_Slave5_Move_X_Sepa_5th 9070
#define P_Slave5_Move_Z_Sepa_1st 9071
#define P_Slave5_Move_Z_Sepa_2nd 9072
#define P_Slave5_Move_Z_Sepa_3rd 9073
#define P_Slave5_Move_Z_Sepa_4th 9074
#define P_Slave5_Move_Z_Sepa_5th 9075
#define P_Slave6_Move_Z_For_Sepa_Mode 9076
#define P_Slave6_Move_Z_For_Run_Mode 9077
#define P_Slave7_Move_X_Clamp_On_1st 9078
#define P_Slave7_Move_X_Clamp_On_2nd 9079
#define P_Slave7_Move_X_Clamp_On_3rd 9080
#define P_Slave7_Move_X_Clamp_On_4th 9081
#define P_Slave7_Move_X_Clamp_Off_1st 9082
#define P_Slave7_Move_X_Clamp_Off_2nd 9083
#define P_Slave7_Move_X_Clamp_Off_3rd 9084
#define P_Slave7_Move_Z_Clamp_On_1st 9085
#define P_Slave7_Move_Z_Clamp_On_2nd 9086
#define P_Slave7_Move_Z_Clamp_On_3rd 9087
#define P_Slave7_Move_Z_Clamp_On_4th 9088
#define P_Slave7_Move_Z_Clamp_Off_1st 9089
#define P_Slave7_Move_Z_Clamp_Off_2nd 9090
#define P_Slave7_Move_Z_Clamp_Off_3rd 9091
#define P_Slave7_Move_Z_Down 9092
#define P_Slave8_Move_X_Align_To_Stack_1st 9093
#define P_Slave8_Move_X_Align_To_Stack_2nd 9094
#define P_Slave8_Move_X_Stack_To_Align_1st 9095
#define P_Slave8_Move_X_Stack_To_Align_2nd 9096
#define P_Slave8_Move_X_Stack_To_Align_3rd 9097
#define P_Slave8_Move_Z_Align_To_Stack_1st 9098
#define P_Slave8_Move_Z_Align_To_Stack_2nd 9099
#define P_Slave8_Move_Z_Stack_To_Align_1st 9100
#define P_Slave8_Move_Z_Stack_To_Align_2nd 9101
#define P_Slave8_Move_Z_Stack_To_Align_3rd 9102
#define P_Slave8_Move_Z_Align_Up 9103
#define P_Slave8_Move_Z_Align_Down 9104
#define P_Slave8_Move_Z_Stack_Up 9105
#define P_Slave8_Move_Z_Stack_Down 9106
#define P_Slave10_Move_X_Belt_Align 9107
#define P_Slave10_Move_X_Align_Belt 9108
#define P_Slave10_Move_X_Belt_NG 9109
#define P_Slave10_Move_X_NG_Belt 9110
#define P_Slave10_Move_X_Align_NG 9111
#define P_Slave10_Move_Z_Belt_Down 9112
#define P_Slave10_Move_Z_Belt_Up 9113
#define P_Slave10_Move_X_NG_Align 9114
#define P_Slave10_Move_Z_Align_Down 9115
#define P_Slave10_Move_Z_Align_Up 9116
#define P_Slave10_Move_Z_NG_Down 9117
#define P_Slave10_Move_Z_NG_Up 9118
#define P_Slave1_Offset_X_Align 9119
#define P_Slave1_Offset_X_Belt 9120
#define P_Slave1_Offset_X_NG 9121
#define P_Slave1_Offset_Z_Belt 9122
#define P_Slave1_Offset_Z_Align 9123
#define P_Slave1_Offset_Z_NG 9124
#define P_Slave1_Offset_Z_Up 9125
#define P_Slave3_Offset_X_Stack 9126
#define P_Slave3_Offset_X_Align 9127
#define P_Slave3_Offset_Z_Stack 9128
#define P_Slave3_Offset_Z_Align 9129
#define P_Slave3_Offset_Z_Align_Up 9130
#define P_Slave3_Offset_Z_Align_Down 9131
#define P_Slave3_Offset_Z_Stack_Up 9132
#define P_Slave3_Offset_Z_Stack_Down 9133
#define P_Slave3_Offset_Z_Wait_Pos 9134
#define P_Slave4_Offset_X_Clamp_On 9135
#define P_Slave4_Offset_X_Clamp_Off 9136
#define P_Slave4_Offset_Z_Clamp_On 9137
#define P_Slave4_Offset_Z_Clamp_Off 9138
#define P_Slave5_Offset_X_Anode_Move_1st 9139
#define P_Slave5_Offset_X_Anode_Move_2nd 9140
#define P_Slave5_Offset_X_Cathode_Move_1st 9141
#define P_Slave5_Offset_X_Cathode_Move_2nd 9142
#define P_Slave5_Offset_X_Sepa_1st 9143
#define P_Slave5_Offset_X_Sepa_2nd 9144
#define P_Slave5_Offset_X_Sepa_3rd 9145
#define P_Slave5_Offset_X_Sepa_4th 9146
#define P_Slave5_Offset_X_Sepa_5th 9147
#define P_Slave5_Offset_Z_Sepa_1st 9148
#define P_Slave5_Offset_Z_Sepa_2nd 9149
#define P_Slave5_Offset_Z_Sepa_3rd 9150
#define P_Slave5_Offset_Z_Sepa_4th 9151
#define P_Slave5_Offset_Z_Sepa_5th 9152
#define P_Slave6_Offset_X_For_Sepa_Mode 9153
#define P_Slave6_Offset_Z_Wait_Pos 9154
#define P_Slave7_Offset_X_Clamp_On 9155
#define P_Slave7_Offset_X_Clamp_Off 9156
#define P_Slave7_Offset_Z_Clamp_On 9157
#define P_Slave7_Offset_Z_Clamp_Off 9158
#define P_Slave8_Offset_X_Stack 9159
#define P_Slave8_Offset_X_Align 9160
#define P_Slave8_Offset_Z_Stack 9161
#define P_Slave8_Offset_Z_Align 9162
#define P_Slave8_Offset_Z_Align_Up 9163
#define P_Slave8_Offset_Z_Align_Down 9164
#define P_Slave8_Offset_Z_Stack_Up 9165
#define P_Slave8_Offset_Z_Stack_Down 9166
#define P_Slave8_Offset_Z_Wait_Pos 9167
#define P_Slave10_Offset_X_Align 9168
#define P_Slave10_Offset_X_Belt 9169
#define P_Slave10_Offset_X_NG 9170
#define P_Slave10_Offset_Z_Belt 9171
#define P_Slave10_Offset_Z_Align 9172
#define P_Slave10_Offset_Z_NG 9173
#define P_Slave10_Offset_Z_Up 9174
#define P_Slave1_Target_Z_CV_Blower_On_Pos 9175
#define P_Slave1_Target_Z_CV_Blower_Off_Pos 9176
#define P_Slave10_Target_Z_CV_Blower_On_Pos 9177
#define P_Slave10_Target_Z_CV_Blower_Off_Pos 9178
#define P_Anode_CV_Blower_On_Flag 9179
#define P_Anode_CV_Blower_Off_Flag 9180
#define P_Cathode_CV_Blower_On_Flag 9181
#define P_Cathode_CV_Blower_Off_Flag 9182
#define P_Select_RingBlow_Off_Use 9183
#define P_2nd_PNP_Stack_Down_Pos 9184
#define P_2nd_PNP_Stack_Up_Pos 9185
#define P_Anode_Clamp_Down_MNTR 9186
#define P_Cathode_Clamp_Down_MNTR 9187
#define P_Clamp_1st_Vector_Y 9188
#define P_Clamp_1st_Vector_Z 9189
#define P_Clamp_1st_Vector_Vel 9190
#define P_Clamp_2nd_Vector_Y 9191
#define P_Clamp_2nd_Vector_Z 9192
#define P_Clamp_2nd_Vector_Vel 9193
#define P_Clamp_2nd_TM_Time 9194
#define P_FR_Ta 9195
#define P_FR_Ts 9196
#define P_FR_Tm 9197
#define P_Master_Motion_Heartbit_Flag 9198
#define P_Master_Heartbit_Trigger 9199
#define P_Parity_Heartbit_Bit 9200
#define P_Master_Heartbit_Move 9201
#define P_Force_Stop_Flag 9202
#define P_Execute_DryRun_Stop_Timer 9203
#define P_DryRun_Timer 9204
#define P_Dryrun_Operating_Time 9205
#define P_Anode_Align_Vac_Err_On 9206
#define P_Cathode_Align_Vac_Err_On 9207
#define P_Anode_1ST_TR_Vac_Err_On 9208
#define P_Anode_2ND_TR_Vac_Err_On 9209
#define P_Cathode_1ST_TR_Vac_Err_On 9210
#define P_Cathode_2ND_TR_Vac_Err_On 9211
#define P_MNTR_PLC0_Task_Time 9212
#define P_MNTR_PLC0_Task_Max_Time 9214
#define P_MNTR_PLC1_Task_Time 9215
#define P_MNTR_PLC1_Task_Max_Time 9217
#define P_MNTR_PLC2_Task_Time 9218
#define P_MNTR_PLC2_Task_Max_Time 9220
#define P_MNTR_PLC3_Task_Time 9221
#define P_MNTR_PLC3_Task_Max_Time 9223
#define P_MNTR_PLC4_Task_Time 9224
#define P_MNTR_PLC4_Task_Max_Time 9226
#define P_MNTR_PLC5_Task_Time 9227
#define P_MNTR_PLC5_Task_Max_Time 9229
#define P_MNTR_PLC6_Task_Time 9230
#define P_MNTR_PLC6_Task_Max_Time 9232
#define P_MNTR_PLC7_Task_Time 9233
#define P_MNTR_PLC7_Task_Max_Time 9235
#define P_MNTR_PLC8_Task_Time 9236
#define P_MNTR_PLC8_Task_Max_Time 9238
#define P_MNTR_PLC9_Task_Time 9239
#define P_MNTR_PLC9_Task_Max_Time 9241
#define P_MNTR_PLC10_Task_Time 9242
#define P_MNTR_PLC10_Task_Max_Time 9244
#define P_MNTR_PLC11_Task_Time 9245
#define P_MNTR_PLC11_Task_Max_Time 9247
#define P_MNTR_PLC12_Task_Time 9248
#define P_MNTR_PLC12_Task_Max_Time 9250
#define P_MNTR_PLC13_Task_Time 9251
#define P_MNTR_PLC13_Task_Max_Time 9253
#define P_MNTR_PLC14_Task_Time 9254
#define P_MNTR_PLC14_Task_Max_Time 9256
#define P_MNTR_PLC15_Task_Time 9257
#define P_MNTR_PLC15_Task_Max_Time 9259
#define P_MNTR_PLC16_Task_Time 9260
#define P_MNTR_PLC16_Task_Max_Time 9262
#define P_MNTR_PLC17_Task_Time 9263
#define P_MNTR_PLC17_Task_Max_Time 9265
#define P_MNTR_PLC18_Task_Time 9266
#define P_MNTR_PLC18_Task_Max_Time 9268
#define P_MNTR_PLC19_Task_Time 9269
#define P_MNTR_PLC19_Task_Max_Time 9271
#define P_MNTR_PLC20_Task_Time 9272
#define P_MNTR_PLC20_Task_Max_Time 9274
#define P_MNTR_PLC21_Task_Time 9275
#define P_MNTR_PLC21_Task_Max_Time 9277
#define P_MNTR_PLC22_Task_Time 9278
#define P_MNTR_PLC22_Task_Max_Time 9280
#define P_MNTR_PLC23_Task_Time 9281
#define P_MNTR_PLC23_Task_Max_Time 9283
#define P_MNTR_PLC24_Task_Time 9284
#define P_MNTR_PLC24_Task_Max_Time 9286
#define P_MNTR_PLC25_Task_Time 9287
#define P_MNTR_PLC25_Task_Max_Time 9289
#define P_MNTR_PLC26_Task_Time 9290
#define P_MNTR_PLC26_Task_Max_Time 9292
#define P_MNTR_PLC27_Task_Time 9293
#define P_MNTR_PLC27_Task_Max_Time 9295
#define P_MNTR_PLC28_Task_Time 9296
#define P_MNTR_PLC28_Task_Max_Time 9298
#define P_MNTR_PLC29_Task_Time 9299
#define P_MNTR_PLC29_Task_Max_Time 9301
#define P_MNTR_PLC30_Task_Time 9302
#define P_MNTR_PLC30_Task_Max_Time 9304
#define P_Coord_Shutdown_Status_log 9305
#define P_In_Pos_Trg 9306
#define P_Position_Calc_Status 9307
#define P_Vision_Result 9308
#define P_Vision_Result_Get_First_Cycle 9312
#define P_Init_Result 9316
#define P_PNP_Pos 9322
#define P_Execute_Manage_Mode 9323
#define P_Align_NG_Tack_Flag 9324
#define P_2th_Ng_Front_Vision_Pos 9325
#define P_Anode_Align_OK_Flag 9326
#define P_Anode_Align_NG_Flag 9327
#define P_Cathode_Align_OK_Flag 9328
#define P_Cathode_Align_NG_Flag 9329
#define P_Stack_Table_OK_Flag 9330
#define P_Anode_Retry_OK_Flag 9331
#define P_Anode_Retry_NG_Flag 9332
#define P_Cathode_Retry_OK_Flag 9333
#define P_Cathode_Retry_NG_Flag 9334
#define P_Func_Anode_2TR_Avoid_X_Value 9335
#define P_Func_Cathode_2TR_Avoid_X_Value 9336
#define P_Anode_Surf_Insp_Trigger 9337
#define P_Cathode_Surf_Insp_Trigger 9338
#define P_CMD_Cathode_Vision_Tigger 9339
#define P_CMD_Anode_Vision_Tigger 9340
#define P_CMD_Stack_Table_Vision_Trigger 9341
#define P_CMD_Cathode_Empty_Table_Vision 9342
#define P_CMD_Anode_Empty_Table_Vision 9343
#define P_CMD_Cathode_Existence_Vision 9344
#define P_CMD_Anode_Existence_Vision 9345
#define P_Align_Manager_Error_Cnt 9346
#define P_Surf_Manager_Error_Cnt 9347
#define P_Retry_Manager_Error_Cnt 9348
#define P_Stack_Manager_Error_Cnt 9349
#define P_Existence_Manager_Error_Cnt 9350
#define P_Where_To_Occur_Error_Retry_Status 9351
#define P_Which_Retry_Insp_Type 9352
#define P_Where_To_Occur_Error_Align_Status 9353
#define P_Which_Align_Insp_Type 9354
#define P_Where_To_Occur_Error_Surf_Status 9355
#define P_Which_Surf_Insp_Type 9356
#define P_Where_To_Occur_Error_Existence_Status 9357
#define P_Which_Existence_Insp_Type 9358
#define P_Where_To_Occur_Error_Stack_Status 9359
#define P_Vision_Clamping_Flag 9360
#define P_Exist_Insp_Total_Time 9361
#define P_Exist_Insp_Trg_Time 9362
#define P_Stack_Insp_Total_Time 9363
#define P_Stack_Trg_Time 9364
#define P_Surf_Insp_Total_Time 9365
#define P_Retry_Insp_Total_Time 9366
#define P_Surf_TimeOut_Cnt 9367
#define P_Align_TimeOut_Cnt 9368
#define P_Retry_TimeOut_Cnt 9369
#define P_Stack_TimeOut_Cnt 9370
#define P_Align_Insp_Total_Time 9371
#define P_Align_Trg_Time 9372
#define P_Aligning_Time 9373
#define P_Cathode_Empty_Table_Vision_Flag 9374
#define P_Anode_Empty_Table_Vision_Flag 9375
#define M_Cathode_Belt_MNTR 8351
#define M_Cathode_1st_MNTR 8352
#define M_Cathode_Align_MNTR 8353
#define M_Cathode_2nd_MNTR 8354
#define M_Anode_Belt_MNTR 8355
#define M_Anode_1st_MNTR 8356
#define M_Anode_Align_MNTR 8357
#define M_Anode_2nd_MNTR 8358
#define P_Selected_Surf_Insp_Type 9376
#define P_Selected_Align_Insp_Type 9377
#define P_Selected_Retry_Insp_Type 9378
#define P_Selected_Exist_Insp_Type 9379
#define P_VISION_RECIPE_PLC4_Surface_TrgOff 9380
#define P_VISION_RECIPE_PLC4_Surface_Ins_Time 9381
#define P_CMD_Cathode_Vision_Retry 9382
#define P_CMD_Anode_Vision_Retry 9383
#define P_Prev_Align_Manager_Status 9384
#define P_Prev_Surf_Manager_Status 9385
#define P_Prev_Exist_Manager_Status 9386
#define P_Prev_Selected_Align_Type 9387
#define P_Prev_Selected_Surf_Type 9388
#define P_Prev_Selected_Exist_Type 9389
#define P_Status_Align_Vision_Manager 9390
#define P_Status_Surface_Vision_Manager 9391
#define P_Status_Sheet_Existence_Vision_Manager 9392
#define P_Status_Stack_Vision_Manager 9393
#define P_Status_Retry_Vision_Manager 9394
#define P_Vision_All_Status_Manager_Init_Flag 9395
#define P_Cycle_Stop_Command 9396
#define P_Surface_Inspection_Complete_Error 9397
#define P_Switching_From_Cathode_To_Anode_Flag 9398
#define P_Switching_From_Anode_To_Cathode_Flag 9399
#define P_Switching_Mode_Complete_Flag 9400
#define P_Surf_Cathode_Error_Count 9401
#define P_Surf_Anode_Error_Count 9402
#define P_First_Anode_Sheet_Supply_Flag 9403
#define P_First_Cathode_Sheet_Supply_Flag 9404
#define P_Set_Cathode_Align_Pos_Zero 9405
#define P_Set_Anode_Align_Pos_Zero 9406
#define P_Cathode_Cur_Mode 9407
#define P_Anode_Cur_Mode 9408
#define M_X_Vision_Stack_Align_Ok 4228
#define M_X_Vision_Stack_Align_Ng 4227
#define M_Y_PLC_EPCAlignMode_Complete_Return 5195
#define M_Y_Vision_Stack_EPC_Align_Vision_Trigger 5234
#define P_AN_to_CA_DR_Trig 9409
#define P_CA_to_AN_DR_Trig 9410
#define P_Tension_FF 9411
#define P_Sepa_CompDac_Value 9413
#define P_FR_Move_Command 9414
#define P_FF_Enable 9415
#define P_Anode_Run_FR_Move_Check_AI 9416
#define P_Cathode_Run_FR_Move_Check_AI 9417
#define P_FR_Move_Check_AI_OffSet 9418
#define P_FR_AI_Value 9419
#define P_Aver_FR_AI_Value 9424
#define P_Process_Function_Command 9425
#define P_HOLD_Existence_Insp_State_Machine 9426
#define P_Execute_IsEnable_State_Machine 9427
#define P_EXECUTE_FUNC_Ready_STEP 9428
#define P_Execute_First_Sepa_Ontable_State_Machine 9429
#define P_Execute_Prod_Manage_State_Machine 9430
#define P_Execute_Enqueue_State_Machine 9431
#define P_STOP_Initial_Process_STEP 9432
#define P_STOP_Cylce_Stop_STEP 9433
#define P_Stop_CycleStop_Position 9434
#define P_Upcount_NextStep 9435
#define P_SUSPEND_FUNC_JR_Discharge_STEP 9436
#define P_SUSPEND_FUNC_ARC_STEP 9437
#define P_Suspend_ARC_Complete_Flag 9438
#define P_EXECUTE_FUNC_Debug_On_Sepa_STEP 9439
#define P_QueueCommand_Occurs 9440
#define P_EXECUTE_STEP 9441
#define P_SUSPEND_STEP 9442
#define P_HOLD_STEP 9443
#define P_STOP_STEP 9444
#define P_EXECUTE_Error_STEP 9445
#define P_SUSPEND_Error_STEP 9446
#define P_HOLD_Error_STEP 9447
#define P_STOP_Error_STEP 9448
#define P_Queue_Enqueue_Command 9449
#define P_Queue_Enqueue_return 9450
#define P_Queue_Dequeue_Command 9451
#define P_Queue_Dequeue_return 9452
#define P_Queue_Peek_Command 9453
#define P_Dequeue_Log 9454
#define P_Dummy_Dequeue 9474
#define P_Queue_Command_Status 9475
#define P_Queue_Process_Command 9476
#define P_Queue_Process_Status 9477
#define P_Coord_Test 9478
#define P_Coord_Test3 9479
#define P_Coord_Test2 9480
#define P_Coord_Motion_Prog_Down_Entering_Bit 9481
#define P_PMAC_Coord_Status_Bit 9482
#define P_Coord_Down_Check_Bit 9483
#define P_PMAC_Coord_Down_Inspection_Flag 9484
#define P_PMAC_Coord_Down_Num 9485
#define P_PMAC_Coord_Error_Status 9486
#define P_Motor_Current_Pos 9487
#define P_Axis_Scale_Value 9537
#define P_Except_Return_Array 9587
#define P_Hold_Memory 9687
#define P_Suspend_Memory 9692
#define P_Execute_Memory 9697
#define P_Stop_Memory 9702
#define P_PLC01_Process_Function_Enter_Flag 9707
#define P_PLC01_SubMotion_Active 9708
#define P_PLC01_SlaveMotion_Active 9709
#define P_EXECUTE_Isenable_MNTR 9710
#define P_EXECUTE_IsEnable_Firt_Stacking_Flag 9711
#define P_PLC01_Execute_Retry_Sepa_Mode_Count 9712
#define P_SUSPEND_MNTR 9713
#define P_SUSPEND_MNTR_2 9714
#define P_Execute_Last_Run_Flag 9715
#define P_Suspend_ARC_Request_Flag 9716
#define P_Hold_Queue_Exist_Insp_MNTR 9717
#define P_CirQueue_Status_Value 9718
#define P_Debug_CirQueue_Status 9719
#define P_Front_Index 9720
#define P_Rear_Index 9721
#define P_Index_Max 9722
#define P_CircularQueue_Command_array 9723
#define P_CirQueue_Length 9734
#define P_Queue_Full 9735
#define P_Queue_Empty 9736
#define P_Queue_PeekEmpty 9737
#define P_Self_items 9738
#define P_Hold_Pause_Need_Flag 9739
#define P_Pause_Ready_Flag 9740
#define P_Pause_Running_Flag 9741
#define P_Resume_Ready_Flag 9742
#define P_Resume_Start_Flag 9743
#define P_Hold_Resume_Need_Flag 9744
#define M_Y_A_Site_Heart_Bit 5014
#define M_X_PLC_Anode_Sheet_Ready2 4010
#define M_X_PLC_Cathode_Sheet_Ready2 4011
#define M_X_B_Site_Heart_Bit 4014
#define P_Stack_Heart_Bit_Timer 9745
#define P_Stack_Heart_Bit_Calc 9746
#define P_Stack_Heart_Bit_Sync_State_Machine 9747
#define P_Pause_Anode_MNTR_Min_Trigger 9748
#define P_Pause_Anode_MNTR_Max_Trigger 9749
#define P_Pause_Cathode_MNTR_Min_Trigger 9750
#define P_Pause_Cathode_MNTR_Max_Trigger 9751
#define P_Pause_Protect_Variable 9752
#define P_Resume_Protect_Variable 9753
#define P_Sepa_Mode_Opposite_Resume_Free 9754
#define P_Sepa_To_Normal_Mode_Sync_Flag 9755
#define P_Sepa_To_Normal_Mode_Sync_Err_Avoid 9756
#define P_Recipe_1st_MotorNo 9757
#define P_Recipe_2nd_MotorNo 9807
#define P_Recipe_3rd_MotorNo 9857
#define P_Recipe_4th_MotorNo 9907
#define P_Recipe_5th_MotorNo 9957
#define P_Recipe_6th_MotorNo 10007
#define P_X_Axis_Num 10057
#define P_Y_Axis_Num 10058
#define P_Z_Axis_Num 10059
#define P_ZZ_Axis_Num 10060
#define P_X_Unit 10061
#define P_Y_Unit 10062
#define P_Z_Unit 10063
#define P_ZZ_Unit 10064
#define P_Pos_Memory_Bit_Save 10065
#define P_Total_Unit_Bit 10066
#define P_Total_Unit_Pos 10067
#define P_Anode_1st_Unit_Status 10068
#define P_Anode_2nd_Unit_Status 10069
#define P_Anode_CLP_Unit_Status 10070
#define P_FinalRoll_Unit_Status 10071
#define P_StackTable_Unit_Status 10072
#define P_Cathode_CLP_Unit_Status 10073
#define P_Cathode_2nd_Unit_Status 10074
#define P_Cathode_1st_Unit_Status 10075
#define P_1st_Unloader_Unit_Status 10076
#define P_Cathode_NG_PNP_Status 10077
#define P_Anode_NG_PNP_Status 10078
#define P_Unit_integrated_Status 10079
#define P_Unit_Status_Update_Flag 10080
#define P_Memory_Tower_Search_Flag 10081
#define P_MemTow_integrated_return 10082
#define P_Error_STMS_Memory_Tower_Status 10083
#define P_STMS_Memory_Tower_Status 10084
#define P_Recipe_M01_POS 10085
#define P_Recipe_M02_POS 10096
#define P_Recipe_M03_POS 10107
#define P_Recipe_M04_POS 10118
#define P_Recipe_M05_POS 10129
#define P_Recipe_M06_POS 10140
#define P_Recipe_M07_POS 10151
#define P_Recipe_M08_POS 10162
#define P_Recipe_M09_POS 10173
#define P_Recipe_M10_POS 10184
#define P_Recipe_M11_POS 10195
#define P_Recipe_M12_POS 10206
#define P_Recipe_M13_POS 10217
#define P_Recipe_M14_POS 10228
#define P_Recipe_M15_POS 10239
#define P_Recipe_M16_POS 10250
#define P_Recipe_M17_POS 10261
#define P_Recipe_M18_POS 10272
#define P_Recipe_M19_POS 10283
#define P_Recipe_M20_POS 10294
#define P_Recipe_M21_POS 10305
#define P_Recipe_M22_POS 10316
#define P_Recipe_M23_POS 10327
#define P_Recipe_M24_POS 10338
#define P_Recipe_M25_POS 10349
#define P_Recipe_M26_POS 10360
#define P_Recipe_M27_POS 10371
#define P_Recipe_M28_POS 10382
#define P_Recipe_M29_POS 10393
#define P_Recipe_M30_POS 10404
#define P_Recipe_M31_POS 10415
#define P_Recipe_M32_POS 10426
#define P_Recipe_M33_POS 10437
#define P_Recipe_M34_POS 10448
#define P_Recipe_M35_POS 10459
#define P_Recipe_M36_POS 10470
#define P_Recipe_M37_POS 10481
#define P_Recipe_M38_POS 10492
#define P_Recipe_M39_POS 10503
#define P_Recipe_M40_POS 10514
#define P_Recipe_M41_POS 10525
#define P_Recipe_M42_POS 10536
#define P_Recipe_M43_POS 10547
#define P_Recipe_M44_POS 10558
#define P_Recipe_M45_POS 10569
#define P_Recipe_M46_POS 10580
#define P_Recipe_M47_POS 10591
#define P_Recipe_M48_POS 10602
#define P_Recipe_M49_POS 10613
#define P_Recipe_M50_POS 10624
#define P_Memory_Tower_X_Err_Flag 10635
#define P_Memory_Tower_Y_Err_Flag 10636
#define P_Memory_Tower_Z_Err_Flag 10637
#define P_Memory_Tower_ZZ_Err_Flag 10638
#define P_CA_Clamp_Cell_Down_Pos 10639
#define P_AN_Clamp_Cell_Down_Pos 10640
#define P_Error_X_Axis_Packml 10641
#define P_Error_X_Axis_Dequeue 10647
#define P_Error_X_Axis_Num 10653
#define P_Memory_Tower_Err_Pos_X_Save 10659
#define P_Error_Y_Axis_Packml 10665
#define P_Error_Y_Axis_Dequeue 10671
#define P_Error_Y_Axis_Num 10677
#define P_Memory_Tower_Err_Pos_Y_Save 10683
#define P_Error_Z_Axis_Packml 10689
#define P_Error_Z_Axis_Dequeue 10695
#define P_Error_Z_Axis_Num 10701
#define P_Memory_Tower_Err_Pos_Z_Save 10707
#define P_Error_ZZ_Axis_Packml 10713
#define P_Error_ZZ_Axis_Dequeue 10719
#define P_Error_ZZ_Axis_Num 10725
#define P_Memory_Tower_Err_Pos_ZZ_Save 10731
#define P_PNP_Abort_Use_Bit 10737
#define P_PNP_Abort_Use_Total_Bit 10738
#define P_C_1st_PNP_FWD_Abort_Use_Bit 10739
#define P_C_1st_PNP_BWD_Abort_Use_Bit 10740
#define P_C_2nd_PNP_FWD_Abort_Use_Bit 10741
#define P_C_2nd_PNP_BWD_Abort_Use_Bit 10742
#define P_A_1st_PNP_FWD_Abort_Use_Bit 10743
#define P_A_1st_PNP_BWD_Abort_Use_Bit 10744
#define P_A_2nd_PNP_FWD_Abort_Use_Bit 10745
#define P_A_2nd_PNP_BWD_Abort_Use_Bit 10746
#define P_Single_Motor_Control_Bit 10747
#define P_C_1st_PNP_FWD_Abort_Calc_Bit 10748
#define P_C_1st_PNP_BWD_Abort_Calc_Bit 10749
#define P_C_2nd_PNP_FWD_Abort_Calc_Bit 10750
#define P_C_2nd_PNP_BWD_Abort_Calc_Bit 10751
#define P_A_1st_PNP_FWD_Abort_Calc_Bit 10752
#define P_A_1st_PNP_BWD_Abort_Calc_Bit 10753
#define P_A_2nd_PNP_FWD_Abort_Calc_Bit 10754
#define P_A_2nd_PNP_BWD_Abort_Calc_Bit 10755
#define P_C_1st_PNP_FWD_Cur_Pos 10756
#define P_C_1st_PNP_FWD_Cur_Vel 10757
#define P_C_1st_PNP_BWD_Cur_Pos 10758
#define P_C_1st_PNP_BWD_Cur_Vel 10759
#define P_C_2nd_PNP_FWD_Cur_Pos 10760
#define P_C_2nd_PNP_FWD_Cur_Vel 10761
#define P_C_2nd_PNP_BWD_Cur_Pos 10762
#define P_C_2nd_PNP_BWD_Cur_Vel 10763
#define P_A_1st_PNP_FWD_Cur_Pos 10764
#define P_A_1st_PNP_FWD_Cur_Vel 10765
#define P_A_1st_PNP_BWD_Cur_Pos 10766
#define P_A_1st_PNP_BWD_Cur_Vel 10767
#define P_A_2nd_PNP_FWD_Cur_Pos 10768
#define P_A_2nd_PNP_FWD_Cur_Vel 10769
#define P_A_2nd_PNP_BWD_Cur_Pos 10770
#define P_A_2nd_PNP_BWD_Cur_Vel 10771
#define P_C_1st_PNP_FWD_Limit_Pos 10772
#define P_C_1st_PNP_BWD_Limit_Pos 10773
#define P_C_2nd_PNP_FWD_Limit_Pos 10774
#define P_C_2nd_PNP_BWD_Limit_Pos 10775
#define P_A_1st_PNP_FWD_Limit_Pos 10776
#define P_A_1st_PNP_BWD_Limit_Pos 10777
#define P_A_2nd_PNP_FWD_Limit_Pos 10778
#define P_A_2nd_PNP_BWD_Limit_Pos 10779
#define P_C_1st_PNP_FWD_Max_Limit_Pos 10780
#define P_C_1st_PNP_BWD_Max_Limit_Pos 10781
#define P_C_2nd_PNP_FWD_Max_Limit_Pos 10782
#define P_C_2nd_PNP_BWD_Max_Limit_Pos 10783
#define P_A_1st_PNP_FWD_Max_Limit_Pos 10784
#define P_A_1st_PNP_BWD_Max_Limit_Pos 10785
#define P_A_2nd_PNP_FWD_Max_Limit_Pos 10786
#define P_A_2nd_PNP_BWD_Max_Limit_Pos 10787
#define P_C_1st_PNP_FWD_Remain_Stroke 10788
#define P_C_1st_PNP_BWD_Remain_Stroke 10789
#define P_C_2nd_PNP_FWD_Remain_Stroke 10790
#define P_C_2nd_PNP_BWD_Remain_Stroke 10791
#define P_A_1st_PNP_FWD_Remain_Stroke 10792
#define P_A_1st_PNP_BWD_Remain_Stroke 10793
#define P_A_2nd_PNP_FWD_Remain_Stroke 10794
#define P_A_2nd_PNP_BWD_Remain_Stroke 10795
#define P_C_1st_PNP_FWD_Stroke_Time 10796
#define P_C_1st_PNP_BWD_Stroke_Time 10797
#define P_C_2nd_PNP_FWD_Stroke_Time 10798
#define P_C_2nd_PNP_BWD_Stroke_Time 10799
#define P_A_1st_PNP_FWD_Stroke_Time 10800
#define P_A_1st_PNP_BWD_Stroke_Time 10801
#define P_A_2nd_PNP_FWD_Stroke_Time 10802
#define P_A_2nd_PNP_BWD_Stroke_Time 10803
#define P_C_1st_PNP_FWD_Max_Speed 10804
#define P_C_1st_PNP_BWD_Max_Speed 10805
#define P_C_2nd_PNP_FWD_Max_Speed 10806
#define P_C_2nd_PNP_BWD_Max_Speed 10807
#define P_A_1st_PNP_FWD_Max_Speed 10808
#define P_A_1st_PNP_BWD_Max_Speed 10809
#define P_A_2nd_PNP_FWD_Max_Speed 10810
#define P_A_2nd_PNP_BWD_Max_Speed 10811
#define P_C_1st_PNP_FWD_ACC_Dis 10812
#define P_C_1st_PNP_BWD_ACC_Dis 10813
#define P_C_2nd_PNP_FWD_ACC_Dis 10814
#define P_C_2nd_PNP_BWD_ACC_Dis 10815
#define P_A_1st_PNP_FWD_ACC_Dis 10816
#define P_A_1st_PNP_BWD_ACC_Dis 10817
#define P_A_2nd_PNP_FWD_ACC_Dis 10818
#define P_A_2nd_PNP_BWD_ACC_Dis 10819
#define P_C_1st_PNP_FWD_AbortTa 10820
#define P_C_1st_PNP_FWD_AbortTs 10821
#define P_C_1st_PNP_BWD_AbortTa 10822
#define P_C_1st_PNP_BWD_AbortTs 10823
#define P_C_2nd_PNP_FWD_AbortTa 10824
#define P_C_2nd_PNP_FWD_AbortTs 10825
#define P_C_2nd_PNP_BWD_AbortTa 10826
#define P_C_2nd_PNP_BWD_AbortTs 10827
#define P_A_1st_PNP_FWD_AbortTa 10828
#define P_A_1st_PNP_FWD_AbortTs 10829
#define P_A_1st_PNP_BWD_AbortTa 10830
#define P_A_1st_PNP_BWD_AbortTs 10831
#define P_A_2nd_PNP_FWD_AbortTa 10832
#define P_A_2nd_PNP_FWD_AbortTs 10833
#define P_A_2nd_PNP_BWD_AbortTa 10834
#define P_A_2nd_PNP_BWD_AbortTs 10835
#define P_C_1st_PNP_FWD_Abort_Dec_Offset 10836
#define P_C_1st_PNP_BWD_Abort_Dec_Offset 10837
#define P_C_2nd_PNP_FWD_Abort_Dec_Offset 10838
#define P_C_2nd_PNP_BWD_Abort_Dec_Offset 10839
#define P_A_1st_PNP_FWD_Abort_Dec_Offset 10840
#define P_A_1st_PNP_BWD_Abort_Dec_Offset 10841
#define P_A_2nd_PNP_FWD_Abort_Dec_Offset 10842
#define P_A_2nd_PNP_BWD_Abort_Dec_Offset 10843
#define P_1st_PNP_FWD_Abort_Offset 10844
#define P_1st_PNP_BWD_Abort_Offset 10934
#define P_2nd_PNP_FWD_Abort_Offset 11024
#define P_2nd_PNP_BWD_Abort_Offset 11114
#define P_Abort_Init_Value 11204
#define P_C_1st_PNP_FWD_AbortTa_Buffer 11205
#define P_C_1st_PNP_FWD_AbortTs_Buffer 11206
#define P_C_1st_PNP_BWD_AbortTa_Buffer 11207
#define P_C_1st_PNP_BWD_AbortTs_Buffer 11208
#define P_C_2nd_PNP_FWD_AbortTa_Buffer 11209
#define P_C_2nd_PNP_FWD_AbortTs_Buffer 11210
#define P_C_2nd_PNP_BWD_AbortTa_Buffer 11211
#define P_C_2nd_PNP_BWD_AbortTs_Buffer 11212
#define P_A_1st_PNP_FWD_AbortTa_Buffer 11213
#define P_A_1st_PNP_FWD_AbortTs_Buffer 11214
#define P_A_1st_PNP_BWD_AbortTa_Buffer 11215
#define P_A_1st_PNP_BWD_AbortTs_Buffer 11216
#define P_A_2nd_PNP_FWD_AbortTa_Buffer 11217
#define P_A_2nd_PNP_FWD_AbortTs_Buffer 11218
#define P_A_2nd_PNP_BWD_AbortTa_Buffer 11219
#define P_A_2nd_PNP_BWD_AbortTs_Buffer 11220
#define P_C_1st_PNP_FWD_Restore_Bit 11221
#define P_C_1st_PNP_BWD_Restore_Bit 11222
#define P_C_2nd_PNP_FWD_Restore_Bit 11223
#define P_C_2nd_PNP_BWD_Restore_Bit 11224
#define P_A_1st_PNP_FWD_Restore_Bit 11225
#define P_A_1st_PNP_BWD_Restore_Bit 11226
#define P_A_2nd_PNP_FWD_Restore_Bit 11227
#define P_A_2nd_PNP_BWD_Restore_Bit 11228
#define P_Align_Inspection_Time 11229
#define P_Front_Inspection_Time 11230
#define P_Stack_Inspection_Time 11231
#define P_Existence_Inspection_Time 11232
#define P_EmptyTable_Inspection_Time 11233
#define P_FirstSepa_Inspection_Time 11234
#define P_Vision_Anode_Sepa_Mode_Stack_Command 11235
#define P_Vision_Cathode_Sepa_Mode_Stack_Command 11236
#define P_Cathode_Sepa_Mode_Timer 11237
#define P_Anode_Sepa_Mode_Timer 11238
#define P_Vision_Pass 11239
#define P_FirstSepa_Ret 11240
#define P_Vision_Align_Command 11241
#define P_Vision_Surface_Command 11242
#define P_Vision_Stack_Command 11243
#define P_Vision_Existence_Command 11244
#define P_Vision_EmptyTable_Command 11245
#define P_Vision_FirstSepa_Command 11246
#define P_Selected_Align_Inspection_Unit 11247
#define P_Selected_Surface_Inspection_Unit 11248
#define P_Selected_Stack_Inspection_Unit 11249
#define P_Selected_Existence_Inspection_Unit 11250
#define P_Selected_EmptyTable_Inspection_Unit 11251
#define P_Set_Cathode_Align_Zero_Pos 11252
#define P_Set_Anode_Align_Zero_Pos 11253
#define P_Vision_Align_State_Machine 11254
#define P_Vision_Surface_State_Machine 11255
#define P_Vision_Stack_State_Machine 11256
#define P_Vision_Existence_State_Machine 11257
#define P_Vision_EmptyTable_State_Machine 11258
#define P_Vision_FirstSepa_State_Machine 11259
#define P_Vision_Align_Status 11260
#define P_Vision_Surface_Status 11261
#define P_Vision_Stack_Status 11262
#define P_Vision_Existence_Status 11263
#define P_Vision_EmptyTable_Status 11264
#define P_Vision_FirstSepa_Status 11265
#define P_Align_Zero_Move_Start_Flag 11266
#define P_Cathode_Align_Table_Move 11268
#define P_Anode_Align_Table_Move 11269
#define P_Vision_Anode_Cell_Existence 11270
#define P_Vision_Cathode_Cell_Existence 11271
#define P_Align_Sheet_CHK 11272
#define P_Anode_NG_Code 11273
#define P_Cathode_NG_Code 11274
#define P_Stack_NG_Code 11275
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
#define P_Stop_Debug_Flag 11276
#define P_Stop_Sub_Master_Motion_Program_Flag 11277
#define P_Stop_Slave_Motion_Program_Flag 11297
#define P_Stop_Motor_Status 11317
#define P_Stop_Coord_Status 11365
#define P_Stop_Status_Check_Address 11399
#define P_Stop_Status_Save_Address 11400
#define P_Stop_Check_RTN 11401
#define P_Stop_Save_RTN 11402
#define P_Old_Total_Unit_Bit 11406
#define P_Memory_Tower_Dec_Result 11407
#define P_Stop_Motor_Pos 11408
#define P_PNP_Move_Timer 11417
#define P_PNP_Move_Delay_Time 11418
#define P_Stop_Memory_Pos_RTN 11419
#define P_Slave1_Motion_Command 11420
#define P_Slave2_Motion_Command 11421
#define P_Slave3_Motion_Command 11422
#define P_Slave4_Motion_Command 11423
#define P_Slave5_Motion_Command 11424
#define P_Slave6_Motion_Command 11425
#define P_Slave7_Motion_Command 11426
#define P_Slave8_Motion_Command 11427
#define P_Slave9_Motion_Command 11428
#define P_Slave10_Motion_Command 11429
#define P_Slave11_Motion_Command 11430
#define P_Slave12_Motion_Command 11431
#define P_Slave13_Motion_Command 11432
#define P_Slave14_Motion_Command 11433
#define P_Slave15_Motion_Command 11434
#define P_Slave16_Motion_Command 11435
#define P_Slave17_Motion_Command 11436
#define P_Slave18_Motion_Command 11437
#define P_Slave19_Motion_Command 11438
#define P_Slave20_Motion_Command 11439
#define P_PNP_90_Deg_TM 11440
#define P_PNP_90_Deg_TA 11441
#define P_PNP_90_Deg_TS 11442
#define P_PNP_Ready_TM 11443
#define P_PNP_Ready_TA 11444
#define P_PNP_Ready_TS 11445
#define P_PNP_45_Deg_TM 11446
#define P_PNP_45_Deg_TA 11447
#define P_PNP_45_Deg_TS 11448
#define P_PROG_21_Program_Ver 2781
#define P_PROG_23_Program_Ver 2783
#define P_PROG_24_Program_Ver 2784
#define P_PROG_25_Program_Ver 2785
#define P_PROG_26_Program_Ver 2786
#define P_PROG_27_Program_Ver 2787
#define P_PROG_28_Program_Ver 2788
#define P_PROG_30_Program_Ver 2790
#define P_Master_Motion_Trigger 11449
#define P_Parity_Bit 11450
#define P_Master_Move 11451
#define P_Master_TA 11452
#define P_Master_TS 11453
#define P_Master_TM 11454
#define P_Anode_Count 11455
#define P_Cathode_Count 11456
#define P_Anode_Thickness 11457
#define P_Cathode_Thickness 11458
#define P_Sepa_Thickness 11459
#define P_Anode_Thickness_PLC 11460
#define P_Cathode_Thickness_PLC 11461
#define P_Sepa_Thickness_PLC 11462
#define P_Old_P_Anode_TR1_Master_Motion_Trigger 11463
#define P_Old_P_Cathode_TR1_Master_Motion_Trigger 11479
#define P_Anode_TR1_Old_Mode 11495
#define P_Cathode_TR1_Old_Mode 11511
#define P_Older_Than_P_Anode_TR1_Old_Mode 11527
#define P_Older_Than_P_Cathode_TR1_Old_Mode 11543
#define P_Older_Than_P_Sequence_Old_P_Anode_TR1_Current_Mode_Trigger 11559
#define P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Current_Mode_Trigger 11575
#define P_Old_P_Anode_TR1_Mode_Command 11591
#define P_Old_P_Cathode_TR1_Mode_Command 11607
#define P_Older_Than_P_Old_P_Anode_TR1_Mode_Command 11623
#define P_Older_Than_P_Old_P_Cathode_TR1_Mode_Command 11639
#define P_Older_Than_P_Sequence_Old_P_Anode_TR1_Mode_Command_Trigger 11655
#define P_Older_Than_P_Sequence_Old_P_Cathode_TR1_Mode_Command_Trigger 11671
#define P_Old_P_Anode_TR1_PMAC_Status 11687
#define P_Old_P_Cathode_TR1_PMAC_Status 11703
#define P_Older_Than_P_Old_P_Anode_TR1_PMAC_Status 11719
#define P_Older_Than_P_Old_P_Cathode_TR1_PMAC_Status 11735
#define P_Old_P_Slave1_Motion_Command 11751
#define P_Old_P_Slave10_Motion_Command 11767
#define P_Old_Slave1_P_SubMaster_Sub_Mode_Command 11783
#define P_Old_Slave10_P_SubMaster_Sub_Mode_Command 11799
#define P_Sequence_Old_P_Current_Mode_Trigger 11815
#define P_Sequence_Old_Mode 11831
#define P_Sequence_Old_P_Mode_Command 11847
#define P_Sequence_Old_P_Mode_Command_Trigger 11863
#define P_SubMaster_Sub_Old_Mode 11879
#define P_SubMaster_Sub_Old_Command 11895
#define P_SubMaster_Sub_Mode_Command 11911
#define P_SubMaster_Sub_Old_Trigger 11927
#define P_InterLock_No3_Array 11943
#define P_Old_InterLock_No3_Array 11959
#define P_Mode_Err 11975
#define P_Spool_Enable 11980
#define P_Cathode_1St_Flow_Chart_Bit_Flag 11981
#define P_Cathode_AT_Flow_Chart_Bit_Flag 11982
#define P_Cathode_2nd_Flow_Chart_Bit_Flag 11983
#define P_Anode_Clamp_Flow_Chart_Bit_Flag 11984
#define P_Final_Roll_Flow_Chart_Bit_Flag 11985
#define P_Stack_Table_Flow_Chart_Bit_Flag 11986
#define P_Cathode_Clamp_Flow_Chart_Bit_Flag 11987
#define P_Anode_2nd_Flow_Chart_Bit_Flag 11988
#define P_Anode_AT_Flow_Chart_Bit_Flag 11989
#define P_Anode_1St_Flow_Chart_Bit_Flag 11990
#define P_Sepa_Unwinder_Flow_Chart_Bit_Flag 11991
#define P_Slave5_Target_Z_For_Cutting 11992
#define P_Slave31_Motion_Command 11993
#define P_Pause_Err_Process 11994
#define P_Pause_Err_Timer 11995
#define P_Pause_Err_Count 11996
#define P_Pause_Err_Use 11997
#define P_Pause_Err_Use2 11998
#define P_Anode_Pause_Signal_Err 11999
#define P_Cathode_Pause_Signal_Err 12000
#define P_Anode_Pause_Err 12001
#define P_Anode_Pause_Err_Count 12002
#define P_Phasing_Err 12003
#define P_Phasing_Err2 12008
#define P_Execute_Wait_Mode_Memory_Tower 12013
#define P_Execute_Vac_MNTR 12014
#define P_Old_Cathode_Cur_Mode 12015
#define P_Cathode_Run_Mode_Type 12016
#define P_Cathode_Run_Mode_Trigger 12036
#define P_Old_Anode_Cur_Mode 12056
#define P_Anode_Run_Mode_Type 12057
#define P_Anode_Run_Mode_Trigger 12077
#define P_Anode_1TR_T_Belt_To_Align 12097
#define P_Anode_1TR_T_Align_To_Belt 12098
#define P_Anode_1TR_T_Ready_Pos 12099
#define P_Anode_1TR_T_Ready_To_Align 12100
#define P_Anode_1TR_T_Ready_To_Belt 12101
#define P_Anode_Picker_Turn 12102
#define P_Anode_2TR_T_Align_To_Stack 12103
#define P_Anode_2TR_T_Stack_To_Align 12104
#define P_Anode_Clamp_Off 12105
#define P_Anode_Clamp_On 12106
#define P_Anode_Clamp_Down 12107
#define P_FR_Anode_Motion 12108
#define P_FR_Cathode_Motion 12109
#define P_Stack_Table_Down 12110
#define P_Cathode_Clamp_On 12111
#define P_Cathode_Clamp_Off 12112
#define P_Cathode_Clamp_Down 12113
#define P_Cathode_2TR_T_Align_To_Stack 12114
#define P_Cathode_2TR_T_Stack_To_Align 12115
#define P_Cathode_Picker_Turn 12116
#define P_Cathode_1TR_T_Belt_To_Align 12117
#define P_Cathode_1TR_T_Align_To_Belt 12118
#define P_Cathode_1TR_T_Ready_Pos 12119
#define P_Cathode_1TR_T_Ready_To_Align 12120
#define P_Cathode_1TR_T_Ready_To_Belt 12121
#define P_Anode_1TR_Z_Belt_To_Align 12122
#define P_Anode_1TR_Z_Align_To_Belt 12123
#define P_Anode_1TR_Z_Align_Down 12124
#define P_Anode_1TR_Z_Align_UP 12125
#define P_Anode_1TR_Z_Belt_Down 12126
#define P_Anode_1TR_Z_Belt_UP 12127
#define P_Anode_1TR_Z_Ready 12128
#define P_Anode_1TR_Z_Align_Blow 12129
#define P_Anode_1TR_Z_Belt_Vac 12130
#define P_Cathode_1TR_Z_Belt_To_Align 12131
#define P_Cathode_1TR_Z_Align_To_Belt 12132
#define P_Cathode_1TR_Z_Align_Down 12133
#define P_Cathode_1TR_Z_Align_UP 12134
#define P_Cathode_1TR_Z_Belt_Down 12135
#define P_Cathode_1TR_Z_Belt_UP 12136
#define P_Cathode_1TR_Z_Ready 12137
#define P_Cathode_1TR_Z_Align_Blow 12138
#define P_Cathode_1TR_Z_Belt_Vac 12139
#define P_Anode_2TR_Align_To_Stack 12140
#define P_Anode_2TR_Stack_To_Align 12141
#define P_Anode_2TR_Stack_Down 12142
#define P_Anode_2TR_Stack_UP 12143
#define P_Anode_2TR_Align_Down 12144
#define P_Anode_2TR_Align_UP 12145
#define P_Anode_2TR_Align_Vac 12146
#define P_Anode_2TR_Stack_Blow 12147
#define P_Anode_2TR_Stack_Sepa_Blow 12148
#define P_FR_Last_Run_Motion 12149
#define P_Servo_Dancer_Ready_Pos 12150
#define P_Servo_Dancer_Ready_Offset 12151
#define P_Servo_Dancer_Test 12152
#define P_Align_Start_IO_Judgment 12153
#define P_Driving_Clamp2 12154
#define P_Driving_Clamp 12155
#define P_MSA_Timer 12156
#define P_SM_Cathode_Stack_MSA 12157
#define P_SM_Anode_Stack_MSA 12158
#define P_SM_Cathode_Align_MSA 12159
#define P_SM_Anode_Align_MSA 12160
#define P_MSA_Interlock 12161
#define P_Anode_MSA_Final_Roll_Pos_Check 12162
#define P_Anode_MSA_2nd_PNP_Pos_Check 12163
#define P_Anode_MSA_1nd_PNP_Pos_Check 12164
#define P_MSA_Err_Save_CA_Stack_MSA 12165
#define P_MSA_Err_Save_AN_Stack_MSA 12166
#define P_MSA_Err_Save_CA_Align_MSA 12167
#define P_MSA_Err_Save_AN_Align_MSA 12168
#define P_MSA_BTN_Err 12169
#define P_Anode_Algin_MSA_RTN 12170
#define P_Anode_Algin_MSA_RTN2 12171
#define P_Cathode_Algin_MSA_RTN 12172
#define P_Cathode_Stack_MSA_RTN 12173
#define P_Anode_Stack_MSA_RTN 12174
#define P_Anode_Align_MSA_Count 12175
#define P_Cathode_Align_MSA_Count 12176
#define P_Anode_Stack_MSA_Count 12177
#define P_Cathode_Stack_MSA_Count 12178
#define P_Cathode_Align_Stop_Blocked 12179
#define P_Anode_Align_Stop_Blocked 12180
#define P_Cathode_Stack_Stop_Blocked 12181
#define P_Anode_Stack_Stop_Blocked 12182
#define P_Anode_Align_MSA_Execute_Timer 12183
#define P_Cathode_Align_MSA_Execute_Timer 12184
#define P_Anode_Stack_MSA_Execute_Timer 12185
#define P_Cathode_Stack_MSA_Execute_Timer 12186
#define P_Anode_Align_Interlock_Blocked 12187
#define P_Cathode_Align_Interlock_Blocked 12188
#define P_Anode_Stack_Interlock_Blocked 12189
#define P_Cathode_Stack_Interlock_Blocked 12190
#define P_Anode_1TR_T_Align_POS 12191
#define P_Anode_1TR_T_Belt_POS 12192
#define P_Anode_1TR_T_Ready_POS 12193
#define P_Anode_2TR_T_Align_POS 12194
#define P_Anode_2TR_T_Stack_POS 12195
#define P_Cathode_2TR_T_Align_POS 12196
#define P_Cathode_2TR_T_Stack_POS 12197
#define P_Cathode_1TR_T_Align_POS 12198
#define P_Cathode_1TR_T_Belt_POS 12199
#define P_Cathode_1TR_T_Ready_POS 12200
#define P_Seq_Abort 12201
#define P_Blocked_Abort 12202
#define P_Abort_Flag 12203
#define P_Opposite_Lane_1ST_TR_Safe_Pos 12204
#define P_Opposite_Lane_P_PMAC_Status 12205
#define P_Opposite_Lane_OFF_Not_Start 12206
#define P_Pause_Alarm_Blocked 12207
#define P_Old_Alarm_Arr 12208
#define P_Cycle_Stop_Delay_Time 12209
#define P_Cycle_Stop_Offset 12210
#define P_Opposite_Lane_Abort_Alram_Flag 12211
#define P_Cathode_Clmap_Y1_Ready_Pos 12212
#define P_Cathode_Clmap_Y1_Clamp_Pos 12213
#define P_Anode_Clmap_Y1_Ready_Pos 12214
#define P_Anode_Clmap_Y1_Clamp_Pos 12215
#define P_Cathode_Clmap_Y2_Ready_Pos 12216
#define P_Cathode_Clmap_Y2_Clamp_Pos 12217
#define P_Anode_Clmap_Y2_Ready_Pos 12218
#define P_Anode_Clmap_Y2_Clamp_Pos 12219
#define P_Cathode_Clamp_Z2_Ready_Pos 12220
#define P_Cathode_Clamp_Z2_Clamp_Pos 12221
#define P_Anode_Clamp_Z2_Ready_Pos 12222
#define P_Anode_Clamp_Z2_Clamp_Pos 12223
#define P_Cathode_Clamp_Z1_Ready_Pos 12224
#define P_Cathode_Clamp_Z1_Clamp_Pos 12225
#define P_Anode_Clamp_Z1_Ready_Pos 12226
#define P_Anode_Clamp_Z1_Clamp_Pos 12227
#define P_Cathode_Clamp_Z2_Cell_Down 12228
#define P_Anode_Clamp_Z2_Cell_Down 12229
#define P_Cathode_Clamp_Z1_Cell_Down 12230
#define P_Anode_Clamp_Z1_Cell_Down 12231
#define P_Single_Run_Pass 12232
#define P_Cathode_2nd_PNP_Sepa_Blow 12233
#define P_Cathode_2nd_PNP_Align_Blow 12234
#define P_Cathode_2nd_PNP_Stack_Blow 12235
#define P_Cathode_2nd_PNP_Align_Vac 12236
#define P_Cathode_2nd_PNP_Align_Up_Motion 12237
#define P_Cathode_2nd_PNP_Align_Down_Motion 12238
#define P_Cathode_2nd_PNP_Stack_Up_Motion 12239
#define P_Cathode_2nd_PNP_Stack_Down_Motion 12240
#define P_Cathode_2nd_PNP_Stack_To_Align_Motion 12241
#define P_Cathode_2nd_PNP_Align_To_Stack_Motion 12242
#define P_Door_Open_Stop_Count 12243
#define P_Buf_Stack_NG_Flag 12244
#define P_Stop_1st_PNP_Move 12245
#define P_Seq_Abort_Timer 12246
#define P_Sync_Test 12247
#define P_Dry_Pause_Flag 12248
#define P_Dry_Run_Pasue_Timer 12249
#define P_Resume_Stop_Blocked 12250
#define P_Discharge_Wait 12251
#define P_Command_Run_Flag 12252
#define P_Stop_Cmd_Origin 12253
#define P_Stop_Origin_Save 12254
#define P_Old_M_Y_Sepa_Cutter_SSR_On 12269
#define P_Sepa_Cutter_SSR_Off_Time 12270
#define P_Sepa_Cutter_SSR_Off 12271
#define P_Sepa_Cutter_SSR_Off_Timer 12272
#define P_Starting_Pause_IO_Flag 12273
#define P_PLC03_Seq_Pause_Start_Flag 12274
#define P_PLC03_Seq_Pause_Start_State_Machine 12275
#define P_PLC03_Seq_Pause_Start_Status 12276
#define P_ARC_NP_Push_BTN 12277
#define P_ARC_UI_Push_BTN 12278
#define P_M_Manual_ARC_BTN 12279
#define P_Two_Btn_Active_Flag 12280
#define P_Two_Btn_Interlock_Time 12281
#define P_NP_Unwinder_Active_Hold 12282
#define P_MAX_KGF 12283
#define P_KGF_TO_DAC_RATIO 12284
#define P_Dac_Out_Value 12285
#define P_Recipe_Dancer_input_kgf 12286
#define P_Cathode_NG_PNP_Vel_Zero_Set 12287
#define P_Anode_NG_PNP_Vel_Zero_Set 12288
#define P_Anode_Run_DR 12289
#define P_Cathode_Run_DR 12290
#define P_1st_UND_Grip_Time 12291
#define P_1st_UND_Grip_Time_offset 12292
#define P_1st_UND_Grip_Time_offset2 12293
#define P_First_Sepa_Driving_Use 12294
#define P_First_Sepa_Driving_Timing 12295
#define P_Unloader_Safe_rtn 12296
#define P_Final_Start 12297
#define P_Driving_Start 12298
#define P_Starting_Pause_IO_OFF_Flag 12299
#define P_individual_Hold_return 12300
#define P_individual_Hold_return2 12301
#define P_Tension_Ready_Pass 12302
#define P_Discharge_cal_rtn 12303
#define P_Old_Tact_Current_Mode 12304
#define P_Sheet_Clear 12305
#define P_Anode_Clamp_On_Time2 12306
#define P_Anode_Clamp_On_Time 12307
#define P_Cathode_Clamp_On_Time 12308
#define P_Cathode_Clamp_On_Time2 12309
#define P_Offset 12310
#define P_Man_C 12311
#define P_NG_Box_Stop_Use 12312
#define P_SlewTime 12313
#define P_Old_SlewTime 12314
#define P_Resume_MNTR1 12315
#define P_Resume_MNTR2 12316
#define P_Resume_MNTR3 12317
#define P_Resume_MNTR4 12318
#define P_Resume_MNTR5 12319
#define P_Resume_MNTR6 12320
#define P_Resume_MNTR7 12321
#define P_Resume_MNTR8 12322
#define P_Resume_MNTR9 12323
#define P_Resume_MNTR10 12324
#define P_Resume_MNTR11 12325
#define P_Resume_MNTR12 12326
#define P_old_P_Anode_Count 12327
#define P_Sheet_Paper_BWD_Count 12328
#define P_Stop_CHK 12329
#define P_Seq_Pause 12330
#define P_Seq_Pause2 12331
#define P_MSA_TimeBase_Rtn 12332
#define P_Old_Vison_Read_EPC_Camera_Move_Request 12333
#define P_First_Sepa_Time_Out_Count 12334
#define P_Align_Retry_Cal_RTN 12335
#define P_Sheet_Err 12336
#define P_Driving_Cal 12352
#define P_Driving_End_Pos 12353
#define P_Driving_Start_Pos 12354
#define P_Drivig_Cal_Save 12355
#define P_Anode_Align_Blow 12360
#define P_Cathode_Align_Blow 12361
#define P_PMAC_Status_Arr_Save1 12362
#define P_HomePos_Save1 12367
#define P_PMAC_Status_Arr_Save2 12372
#define P_HomePos_Save2 12377
#define P_PMAC_Status_Arr_Save3 12382
#define P_HomePos_Save3 12387
#define P_PMAC_Status_Arr_Save4 12392
#define P_HomePos_Save4 12397
#define P_Home_Pos_Err_Cnt1 12402
#define P_Home_Pos_Err_Cnt2 12403
#define P_Home_Pos_Err_Cnt3 12404
#define P_Home_Pos_Err_Cnt4 12405
#define P_Align_Inspection_Delay 12406
#define P_HomePos_Err 12407
#define P_Anode_Sheet_Test 12412
#define P_Cathode_Sheet_Test 12413
#define P_Anode_Sheet_Interlock_Timing 12414
#define P_Cathode_Sheet_Interlock_Timing 12415
#define P_Discharge_Err_MNTR 12416
#define P_Arc_Err_MNTR 12417
#define P_Abort_Cnt 12418
#define P_EMO_Cnt 12419
#define P_Dry_Run_Inspection 12420
#define P_Servo_ON_MNTR1 12421
#define P_Servo_ON_MNTR2 12422
#define P_Servo_ON_MNTR3 12423
#define P_Servo_ON_MNTR4 12424
#define P_Servo_ON_MNTR5 12425
#define P_Servo_ON_MNTR6 12426
#define P_Servo_ON_MNTR7 12427
#define P_Servo_ON_MNTR8 12428
#define P_Servo_ON_MNTR9 12429
#define P_Servo_ON_MNTR10 12430
#define P_Servo_ON_MNTR11 12431
#define P_Servo_ON_MNTR12 12432
#define P_Servo_ON_MNTR13 12433
#define P_Servo_ON_MNTR14 12434
#define P_Servo_ON_MNTR15 12435
#define P_Servo_ON_MNTR16 12436
#define P_Servo_ON_MNTR17 12437
#define P_Servo_ON_MNTR18 12438
#define P_Servo_ON_MNTR19 12439
#define P_Servo_ON_MNTR20 12440
#define P_Servo_ON_MNTR21 12441
#define P_Servo_ON_MNTR22 12442
#define P_Servo_ON_MNTR23 12443
#define P_Servo_ON_MNTR24 12444
#define P_Servo_ON_MNTR25 12445
#define P_Servo_ON_MNTR26 12446
#define P_Servo_ON_MNTR27 12447
#define P_Servo_ON_MNTR28 12448
#define P_Servo_ON_MNTR29 12449
#define P_Servo_ON_MNTR30 12450
#define P_X_IO_WinMess_Connect_BTN 12451
#define P_Ecat_ReConnetion_State_Machine 12452
#define P_Ecat_Reconnection_Timer 12453
#define P_Y_Ecat_Reconnecting 12454
#define P_Y_Ecat_ReConnection_Fail 12455
#define P_Y_Ecat_ReConnection_Complete 12456
#define P_X_Ecat_Reconnection_BTN 12457
#define P_X_Interlock_Enable_BTN 12458
#define P_X_Old_MC_Reconnect_BTN_Signal 12459
#define P_BTN_1st_ULD_Data_Clear 12460
#define P_Old_BTN_1st_ULD_Data_Clear 12461
#define P_Old_M_Y_1st_Unloader_UnGrip_Sol 12462
#define P_Sepa_Cutter_Heat_Meter 12463
#define P_Sepa_Cutter_Heating_Timer 12464
#define P_Middle_Skip_Off_Flag 12465
#define P_Stop_MNTR1 12466
#define P_Stop_MNTR2 12467
#define P_Sheet_Pos_Offset 12468
#define P_Stopping_Wait_Time 12469
#define P_Stopping_Test_Timer 12470
#define P_Cutter_FWB_Heater_Current 12471
#define P_1st_ULD_OK_Lamp 12481
#define P_1st_ULD_NG_Lamp 12482
#define P_1st_ULD_Sample_QC_Lamp 12483
#define P_Proceed_Execute_Flag 12484
#define P_Continuous_Call_Stack_NG_Flag 12485
#define P_Continuous_Call_Stack_OK_Flag 12486
#define P_Cathode_Picker_Home_Pos 12487
#define P_Anode_Picker_Home_Pos 12488
#define P_FR_Sheet_Paper_Home_Chk 12489
#define P_Align_TimeOut1 12490
#define P_Align_TimeOut2 12491
#define P_Align_TimeOut3 12492
#define P_Align_TimeOut4 12493
#define P_Align_TimeOut5 12494
#define P_Align_TimeOut6 12495
#define P_Anode_Align_OK 12496
#define P_Cathode_Align_OK 12497
#define P_Anode_Align_NG 12498
#define P_Cathode_Align_NG 12499
#define P_Anode_Align_TimeOut 12500
#define P_Cathode_Align_TimeOut 12501
#define P_Anode_Surf_OK 12502
#define P_Cathode_Surf_OK 12503
#define P_Anode_Surf_NG 12504
#define P_Cathode_Surf_NG 12505
#define P_Anode_Surf_TimeOut 12506
#define P_Cathode_Surf_TimeOut 12507
#define P_Surf_TimeOut1 12508
#define P_Surf_TimeOut2 12509
#define P_Surf_TimeOut3 12510
#define P_Surf_TimeOut4 12511
#define P_Surf_TimeOut5 12512
#define P_Surf_TimeOut6 12513
#define P_Anode_Stack_TimeOut 12514
#define P_Cathode_Stack_TimeOut 12515
#define P_Anode_Stack_OK 12516
#define P_Cathode_Stack_OK 12517
#define P_Anode_Stack_NG 12518
#define P_Cathode_Stack_NG 12519
#define P_Stack_TimeOut1 12520
#define P_Stack_TimeOut2 12521
#define P_Stack_TimeOut3 12522
#define P_Align_Move_Err 12523
#define P_Ecat_Test 12524
#define P_Scan_Time 12525
#define P_Scan_Aver 12527
#define P_Scan_MAX 12528
#define P_Cathode_1TR_Picker_T_Belt_POS 12529
#define P_Cathode_1TR_Picker_T_Align_POS 12530
#define P_Anode_1TR_Picker_T_Belt_POS 12531
#define P_Anode_1TR_Picker_T_Align_POS 12532
#define P_1TR_Picker_T_Align_POS 12533
#define P_AVRG_Lower_Sepa_Thickness_mm 12534
#define P_AVRG_Upper_Sepa_Thickness_mm 12535
#define P_PLC06_Upper_Curr_Unwinder_Thickness_mm 12536
#define P_PLC06_Lower_Curr_Unwinder_Thickness_mm 12537
#define P_Upper_Curr_Spool_Radius 12538
#define P_Lower_Curr_Spool_Radius 12539
#define P_PLC06_Curr_Upper_Distance_mm 12540
#define P_PLC06_Curr_Lower_Distance_mm 12541
#define P_Upper_Sepa_Min_Distance_mm 12542
#define P_Lower_Sepa_Min_Distance_mm 12543
#define P_PLC06_Sepa_Change_Set 12544
#define P_Upper_Sepa_To_Sensor_Min_Dis 12545
#define P_Upper_Sepa_To_Sensor_Max_Dis 12546
#define P_Upper_Sensor_To_Unwinder_Core_Dis 12547
#define P_Upper_Sensor_Min_AD 12548
#define P_Upper_Sensor_Max_AD 12549
#define P_Lower_Sepa_To_Sensor_Min_Dis 12550
#define P_Lower_Sepa_To_Sensor_Max_Dis 12551
#define P_Lower_Sensor_To_Unwinder_Core_Dis 12552
#define P_Lower_Sensor_Min_AD 12553
#define P_Lower_Sensor_Max_AD 12554
#define M_AI_Upper_Sepa_Sensing 372
#define M_AI_Lower_Sepa_Sensing 373
#define P_Status_NP_BTN_Lower_Unwinder 12555
#define P_Status_NP_BTN_Upper_Unwinder 12556
#define P_Driving_CamTable_Scale_Change_Flag 12557
#define P_FR_Driving_Diameter 12558
#define P_FR_Driving_Floating_Point 12559
#define P_FR_Driving_Reward 12560
#define P_Unwinder_Master_Following_Use_Flag 12561
#define P_Unwinder_Master_Following_On 12562
#define P_Old_Master_Following_Start 12563
#define P_Unwinder_Master_Following_Scale 12564
#define P_Unwinder_Jog_Use_Flag 12565
#define P_Old_Jog_Start 12566
#define P_Unwinder_Jog_Total_Time 12567
#define P_Unwinder_Ta 12568
#define P_Unwinder_Ts 12569
#define P_Unwinder_Tm 12570
#define P_Unwinder_1mm_Deg 12571
#define P_Unwinder_Jog_Pos 12572
#define P_Unwinder_Jog_Cnt 12573
#define P_PLC06_Frist_Flag 12574
#define P_Sepa_AI 12575
#define P_PLC06_Reel_Upper_Change_Flag 12576
#define P_PLC06_Reel_Lower_Change_Flag 12577
#define P_Spool_Ready_Enable_Flag 12578
#define P_Spool_Lack_Flag 12579
#define P_Sepa_DR_Start_Flag 12580
#define P_cdTime_Tact_Sec 12581
#define P_Master_Tact_Sec 12582
#define P_Prev_Err_Pos 12583
#define P_Cur_Arc_Rad 12584
#define P_Cur_Arc_Deg 12585
#define P_Spool_Velocity 12586
#define P_Lin_Prop_Vel 12587
#define P_Err_Pos 12588
#define P_Lin_Deriv_Vel 12589
#define P_Lin_Dacer_Kd 12590
#define P_Lin_Dacer_Kp 12591
#define P_Running_CDTimer 12592
#define P_Unwinder_Jog_Ta 12593
#define P_Unwinder_Jog_Ts 12594
#define P_Unwinder_Vel_Test_Time 12595
#define P_Set_Interval_Time 12596
#define P_PLC06_Upper_Sepa_AI_Timer 12597
#define P_PLC06_Upper_Sepa_AI_Data 12598
#define P_PLC06_Upper_Sepa_AI_Cnt 12599
#define P_PLC06_Upper_AVRG_Sensor_Data 12600
#define P_PLC06_Lower_Sepa_AI_Timer 12601
#define P_PLC06_Lower_Sepa_AI_Data 12602
#define P_PLC06_Lower_Sepa_AI_Cnt 12603
#define P_PLC06_Lower_AVRG_Sensor_Data 12604
#define P_PLC06_Sepa_Upper_Thickness_Timer 12605
#define P_PLC06_Sepa_Upper_Thickness_Data 12606
#define P_PLC06_Sepa_Upper_Thickness_Cnt 12607
#define P_PLC06_Sepa_Lower_Thickness_Timer 12608
#define P_PLC06_Sepa_Lower_Thickness_Data 12609
#define P_PLC06_Sepa_Lower_Thickness_Cnt 12610
#define P_Sepa_Thickness_Chk_Timer 12611
#define P_Spool_Length 12612
#define P_Cascade_Sf_Driving_Value 12613
#define P_Cascade_Sf_None_Driving_Value 12614
#define P_Sepa_Min_Value_Cal_Cmd 12615
#define P_Total_Sepa_Need_Length 12616
#define P_Alpa 12617
#define P_Sepa_Num_of_Turns 12618
#define P_Sepa_Turn_Num 12619
#define P_Accumulate_Value 12620
#define P_Sharft_to_Sepa_Core_mm 12621
#define P_Sepa_Cal_Circum 12622
#define P_Sepa_Min_Need_Thickness 12623
#define P_Sepa_Min_Thickness_Cmd 12624
#define P_Sepa_Accumulate_Cmd 12625
#define P_Sepa_Required_Amount 12626
#define P_Sepa_Current_Thickness 12627
#define P_Sepa_Initial_Tickness 12628
#define P_Sepa_Required_Update_Timer 12629
#define M_PLC_HeartBit_Flag 4223
#define M_X_BTN_Press_Jog_Left_From_PLC 4160
#define M_X_BTN_Press_Jog_Right_From_PLC 4107
#define P_TEST_EPC_Interlock_Auto 12630
#define P_TEST_EPC_Interlock_Manual 12631
#define P_Discharge_Total_Tact 12632
#define P_Read_Sector_TactTime 12633
#define P_Write_Sector_TactTime 12639
#define P_PLC15_Sub_Function_Dryrun_Active_Flag 12645
#define P_Sepa_Rotation_Sequence_Run_Trigger_Cnt 12646
#define P_Sepa_Mode_Sepa_Recipe_Count 12647
#define P_Discharged_After_End_Trigger 12648
#define P_Unloader_1st_Grip_Delay 12649
#define P_Separate_Cutter_Heating_Limit_Value 12650
#define P_Separate_Cutting_Current 12651
#define P_Separate_Cutter_Change_Cycle 12652
#define P_X_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger 12653
#define P_X_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Receive_Complete_Trigger 12654
#define P_X_Cathode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger 12655
#define P_X_Anode_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger 12656
#define P_X_Stack_Align_Calibration_twisted_Cycle_Stop_Receive_Complete_Trigger 12657
#define P_Interlock_Messege_Confirmed 12658
#define P_X_MC_Communication_HeartBit 12659
#define P_SV_Cathode_Count 12660
#define P_SV_Anode_Count 12661
#define P_SV_AO_Reference_Value_Chanel 12662
#define P_SV_Cathode_Reference_Thickness 12665
#define P_SV_Anode_Reference_Thickness 12666
#define P_SV_Stack_Table_Damper_Cathode 12667
#define P_SV_Stack_Table_Damper_Anode 12668
#define P_SV_Sepa_Reference_Thickness 12669
#define P_SV_Jelly_Roll_Width 12670
#define P_Cathode_Align_Continuous_NG_Recipe 12671
#define P_Anode_Align_Continuous_NG_Recipe 12672
#define P_Stack_Vision_Continuous_NG_Recipe 12673
#define P_PLC_Recipe_EPC_Sepa_Count 12674
#define P_PLC_Recipe_Revise_Sepa 12675
#define P_X_PLC_to_PMAC_Correction_Value 12676
#define P_Anode_Align_Continuous_NG_Check_range 12677
#define P_Cathode_Align_Continuous_NG_Check_range 12678
#define P_Stack_Align_Continuous_NG_Check_range 12679
#define P_Cathode_Surface_Continuous_NG_Recipe 12680
#define P_Anode_Surface_Continuous_NG_Recipe 12681
#define P_Cathode_Surface_Continuous_NG_Check_range 12682
#define P_Anode_Surface_Continuous_NG_Check_range 12683
#define P_Servo_Dancer_Alarm_Maximum_Angle_Value 12684
#define P_Servo_Dancer_Alarm_Minimum_Angle_Value 12685
#define P_Current_Selected_Spool_Rev_Counts_Init_Read 12686
#define P_Spool_ARC_Distance_mm 12687
#define P_ARC_Upper_Request_Sepa_Thickness_mm 12688
#define P_ARC_Lower_Request_Sepa_Thickness_mm 12689
#define P_Selected_Spool_Arc_Set_Rev_Counts_Value 12690
#define P_Set_Cnt_FR_Moving_Sepa_ARC 12691
#define P_Current_Selected_Spool_Rev_Counts 12692
#define P_AI_Cathode_Clamp_Damper 12693
#define P_AI_Anode_Clamp_Damper 12694
#define P_MSA_Run_Repeat_Num 12695
#define P_Current_MSA_Run_Num 12700
#define P_Select_Sheet_Value 12705
#define P_BTN_Config_Setup_Mode_Select 12706
#define P_Sepa_Thickness_Max_Value 12707
#define P_AI_Cathode_Clamp_Damper_Zero_Mpa_Analog_Value 12708
#define P_AI_Anode_Clamp_Damper_Zero_Mpa_Analog_Value 12709
#define P_Accumulated_Movement_MM_Unit_Cathode_1ST_pnp 12710
#define P_Accumulated_Movement_MM_Unit_Anode_1ST_pnp 12711
#define P_Accumulated_Movement_MM_Unit_Cathode_2nd_pnp 12712
#define P_Accumulated_Movement_MM_Unit_Anode_2nd_pnp 12713
#define P_AI_Anode_Clamp_Damper_Mpa 12714
#define P_AI_Cathode_Clamp_Damper_Mpa 12715
#define P_Current_Whole_Stack_Jelly_Roll_Thinckness_mm 12716
#define P_Upper_Sepa_Current_Thickness_um 12717
#define P_Lower_Sepa_Current_Thickness_um 12718
#define P_Spool_Rotate_Distance 12719
#define Spool_Diameter 12720
#define P_Current_FR_Moving_Cnt_To_PlC 12721
#define P_MES_APC_Select_Btn 12722
#define P_AO_Anode_Clamp_Damper 12723
#define P_AO_Cathode_Clamp_Damper 12724
#define P_Sepa_Length 12725
#define P_Minus_Limit_Detect_Popup_Flag 12726
#define P_Plus_Limit_Detect_Popup_Flag 12727
#define P_Fatal_Fe_Limit_Detect_Popup_Flag 12728
#define P_Emergency_Alarm_Popup_Flag 12729
#define P_SepaArcing_Popup_Flag 12730
#define P_Y_Cathode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger 12731
#define P_Y_Anode_Sheet_Tab_Retry_inspection_Continuos_Ng_Cycle_Stop_Request_Trigger 12732
#define P_Y_Cathode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger 12733
#define P_Y_Anode_Align_Calibration_twisted_Cycle_Stop_Request_Trigger 12734
#define P_Y_Stack_Align_Calibration_twisted_Cycle_Stop_Request_Trigger 12735
#define P_Current_Selected_Sheet_Value 12736
#define P_Status_Config_Mode_Select 12737
#define P_Sepa_Thickness_Jig_Value 12738
#define P_PV_Stack_Table_Damper_Cathode 12739
#define P_PV_Stack_Table_Damper_Anode 12740
#define P_Discharge_Standby_Pos_Tack_Time 12741
#define P_Discharge_FR_MainZ_Pos_Tack_Time 12742
#define P_Discharge_Unloader_Go_Pos_Tack_Time 12743
#define P_Discharge_SubZ_Down_Pos_Tack_Time 12744
#define P_Discharge_Unloader_Cutting_Pos_Tack_Time 12745
#define P_Discharge_FR_Clamp_ON_Complete_Tack_Time 12746
#define P_Discharge_Cutting_Complete_Tack_Time 12747
#define P_Discharge_Motion_PG_Active_Starting_Tack_Time 12748
#define P_Discharge_Motion_PG_Active_Complete_Tack_Time 12749
#define P_Discharge_Sepa_First_Complete_Tack_Time 12750
#define P_Discharge_Complete_Tack_Time 12751
#define P_Discharge_Total_Tack_Time 12752
#define P_Anode_Clamp_TackTime_Array0 12753
#define P_Anode_Clamp_TackTime_Array1 12754
#define P_Anode_Clamp_TackTime_Array2 12755
#define P_Anode_Clamp_TackTime_Array3 12756
#define P_Anode_Clamp_TackTime_Array4 12757
#define P_Anode_Clamp_TackTime_Array5 12758
#define P_Anode_Clamp_TackTime_Array6 12759
#define P_Anode_Clamp_TackTime_Array7 12760
#define P_Anode_Clamp_TackTime_Array8 12761
#define P_Anode_Clamp_TackTime_Array9 12762
#define P_Anode_Clamp_TackTime_Array10 12763
#define P_Stacking_TackTime_Array0 12764
#define P_Stacking_TackTime_Array1 12765
#define P_Stacking_TackTime_Array2 12766
#define P_Stacking_TackTime_Array3 12767
#define P_Stacking_TackTime_Array4 12768
#define P_Stacking_TackTime_Array5 12769
#define P_Stacking_TackTime_Array6 12770
#define P_Stacking_TackTime_Array7 12771
#define P_Stacking_TackTime_Array8 12772
#define P_Stacking_TackTime_Array9 12773
#define P_Stacking_TackTime_Array10 12774
#define P_Cathode_Clamp_TackTime_Array0 12775
#define P_Cathode_Clamp_TackTime_Array1 12776
#define P_Cathode_Clamp_TackTime_Array2 12777
#define P_Cathode_Clamp_TackTime_Array3 12778
#define P_Cathode_Clamp_TackTime_Array4 12779
#define P_Cathode_Clamp_TackTime_Array5 12780
#define P_Cathode_Clamp_TackTime_Array6 12781
#define P_Cathode_Clamp_TackTime_Array7 12782
#define P_Cathode_Clamp_TackTime_Array8 12783
#define P_Cathode_Clamp_TackTime_Array9 12784
#define P_Cathode_Clamp_TackTime_Array10 12785
#define P_JellyRoll_Out_TackTime_Array0 12786
#define P_JellyRoll_Out_TackTime_Array1 12787
#define P_JellyRoll_Out_TackTime_Array2 12788
#define P_JellyRoll_Out_TackTime_Array3 12789
#define P_JellyRoll_Out_TackTime_Array4 12790
#define P_JellyRoll_Out_TackTime_Array5 12791
#define P_JellyRoll_Out_TackTime_Array6 12792
#define P_JellyRoll_Out_TackTime_Array7 12793
#define P_JellyRoll_Out_TackTime_Array8 12794
#define P_JellyRoll_Out_TackTime_Array9 12795
#define P_JellyRoll_Out_TackTime_Array10 12796
#define P_Anode_1th_TackTime_Array0 12797
#define P_Anode_1th_TackTime_Array1 12798
#define P_Anode_1th_TackTime_Array2 12799
#define P_Anode_1th_TackTime_Array3 12800
#define P_Anode_1th_TackTime_Array4 12801
#define P_Anode_1th_TackTime_Array5 12802
#define P_Anode_1th_TackTime_Array6 12803
#define P_Anode_1th_TackTime_Array7 12804
#define P_Anode_1th_TackTime_Array8 12805
#define P_Anode_1th_TackTime_Array9 12806
#define P_Anode_1th_TackTime_Array10 12807
#define P_Cathode_1th_TackTime_Array0 12808
#define P_Cathode_1th_TackTime_Array1 12809
#define P_Cathode_1th_TackTime_Array2 12810
#define P_Cathode_1th_TackTime_Array3 12811
#define P_Cathode_1th_TackTime_Array4 12812
#define P_Cathode_1th_TackTime_Array5 12813
#define P_Cathode_1th_TackTime_Array6 12814
#define P_Cathode_1th_TackTime_Array7 12815
#define P_Cathode_1th_TackTime_Array8 12816
#define P_Cathode_1th_TackTime_Array9 12817
#define P_Cathode_1th_TackTime_Array10 12818
#define P_Anode_2th_TackTime_Array0 12819
#define P_Anode_2th_TackTime_Array1 12820
#define P_Anode_2th_TackTime_Array2 12821
#define P_Anode_2th_TackTime_Array3 12822
#define P_Anode_2th_TackTime_Array4 12823
#define P_Anode_2th_TackTime_Array5 12824
#define P_Anode_2th_TackTime_Array6 12825
#define P_Anode_2th_TackTime_Array7 12826
#define P_Anode_2th_TackTime_Array8 12827
#define P_Anode_2th_TackTime_Array9 12828
#define P_Anode_2th_TackTime_Array10 12829
#define P_Cathode_2th_TackTime_Array0 12830
#define P_Cathode_2th_TackTime_Array1 12831
#define P_Cathode_2th_TackTime_Array2 12832
#define P_Cathode_2th_TackTime_Array3 12833
#define P_Cathode_2th_TackTime_Array4 12834
#define P_Cathode_2th_TackTime_Array5 12835
#define P_Cathode_2th_TackTime_Array6 12836
#define P_Cathode_2th_TackTime_Array7 12837
#define P_Cathode_2th_TackTime_Array8 12838
#define P_Cathode_2th_TackTime_Array9 12839
#define P_Cathode_2th_TackTime_Array10 12840
#define P_Anode_Align_Table_TackTime_Array0 12841
#define P_Anode_Align_Table_TackTime_Array1 12842
#define P_Anode_Align_Table_TackTime_Array2 12843
#define P_Anode_Align_Table_TackTime_Array3 12844
#define P_Anode_Align_Table_TackTime_Array4 12845
#define P_Anode_Align_Table_TackTime_Array5 12846
#define P_Anode_Align_Table_TackTime_Array6 12847
#define P_Anode_Align_Table_TackTime_Array7 12848
#define P_Anode_Align_Table_TackTime_Array8 12849
#define P_Anode_Align_Table_TackTime_Array9 12850
#define P_Anode_Align_Table_TackTime_Array10 12851
#define P_Cathode_Align_Table_TackTime_Array0 12852
#define P_Cathode_Align_Table_TackTime_Array1 12853
#define P_Cathode_Align_Table_TackTime_Array2 12854
#define P_Cathode_Align_Table_TackTime_Array3 12855
#define P_Cathode_Align_Table_TackTime_Array4 12856
#define P_Cathode_Align_Table_TackTime_Array5 12857
#define P_Cathode_Align_Table_TackTime_Array6 12858
#define P_Cathode_Align_Table_TackTime_Array7 12859
#define P_Cathode_Align_Table_TackTime_Array8 12860
#define P_Cathode_Align_Table_TackTime_Array9 12861
#define P_Cathode_Align_Table_TackTime_Array10 12862
#define P_Anode_NG_PNP_TackTime_Array0 12863
#define P_Anode_NG_PNP_TackTime_Array1 12864
#define P_Anode_NG_PNP_TackTime_Array2 12865
#define P_Anode_NG_PNP_TackTime_Array3 12866
#define P_Anode_NG_PNP_TackTime_Array4 12867
#define P_Anode_NG_PNP_TackTime_Array5 12868
#define P_Anode_NG_PNP_TackTime_Array6 12869
#define P_Anode_NG_PNP_TackTime_Array7 12870
#define P_Anode_NG_PNP_TackTime_Array8 12871
#define P_Anode_NG_PNP_TackTime_Array9 12872
#define P_Anode_NG_PNP_TackTime_Array10 12873
#define P_Cathode_NG_PNP_TackTime_Array0 12874
#define P_Cathode_NG_PNP_TackTime_Array1 12875
#define P_Cathode_NG_PNP_TackTime_Array2 12876
#define P_Cathode_NG_PNP_TackTime_Array3 12877
#define P_Cathode_NG_PNP_TackTime_Array4 12878
#define P_Cathode_NG_PNP_TackTime_Array5 12879
#define P_Cathode_NG_PNP_TackTime_Array6 12880
#define P_Cathode_NG_PNP_TackTime_Array7 12881
#define P_Cathode_NG_PNP_TackTime_Array8 12882
#define P_Cathode_NG_PNP_TackTime_Array9 12883
#define P_Cathode_NG_PNP_TackTime_Array10 12884
#define P_Sepa_Unwinder_TackTime_Array0 12885
#define P_Sepa_Unwinder_TackTime_Array1 12886
#define P_Sepa_Unwinder_TackTime_Array2 12887
#define P_Sepa_Unwinder_TackTime_Array3 12888
#define P_Sepa_Unwinder_TackTime_Array4 12889
#define P_Sepa_Unwinder_TackTime_Array5 12890
#define P_Sepa_Unwinder_TackTime_Array6 12891
#define P_Sepa_Unwinder_TackTime_Array7 12892
#define P_Sepa_Unwinder_TackTime_Array8 12893
#define P_Sepa_Unwinder_TackTime_Array9 12894
#define P_Sepa_Unwinder_TackTime_Array10 12895
#define P_Sepa_Unwinder_TackTime_Array11 12896
#define P_1st_Unloader_TackTime_Array0 12897
#define P_1st_Unloader_TackTime_Array1 12898
#define P_1st_Unloader_TackTime_Array2 12899
#define P_1st_Unloader_TackTime_Array3 12900
#define P_1st_Unloader_TackTime_Array4 12901
#define P_1st_Unloader_TackTime_Array5 12902
#define P_1st_Unloader_TackTime_Array6 12903
#define P_1st_Unloader_TackTime_Array7 12904
#define P_1st_Unloader_TackTime_Array8 12905
#define P_1st_Unloader_TackTime_Array9 12906
#define P_1st_Unloader_TackTime_Array10 12907
#define P_Cathode_1st_Vacuum_TackTime_Array1 12908
#define P_Cathode_1st_Vacuum_TackTime_Array2 12909
#define P_Cathode_1st_Vacuum_TackTime_Array3 12910
#define P_Cathode_1st_Vacuum_TackTime_Array4 12911
#define P_Cathode_1st_Vacuum_TackTime_Array5 12912
#define P_Cathode_1st_Vacuum_TackTime_Array6 12913
#define P_Cathode_1st_Vacuum_TackTime_Array7 12914
#define P_Cathode_1st_Vacuum_TackTime_Array8 12915
#define P_Cathode_1st_Vacuum_TackTime_Array9 12916
#define P_Cathode_1st_Vacuum_TackTime_Array10 12917
#define P_Cathode_Align_Vacuum_TackTime_Array1 12918
#define P_Cathode_Align_Vacuum_TackTime_Array2 12919
#define P_Cathode_Align_Vacuum_TackTime_Array3 12920
#define P_Cathode_Align_Vacuum_TackTime_Array4 12921
#define P_Cathode_Align_Vacuum_TackTime_Array5 12922
#define P_Cathode_Align_Vacuum_TackTime_Array6 12923
#define P_Cathode_Align_Vacuum_TackTime_Array7 12924
#define P_Cathode_Align_Vacuum_TackTime_Array8 12925
#define P_Cathode_Align_Vacuum_TackTime_Array9 12926
#define P_Cathode_Align_Vacuum_TackTime_Array10 12927
#define P_Cathode_2nd_Vacuum_TackTime_Array1 12928
#define P_Cathode_2nd_Vacuum_TackTime_Array2 12929
#define P_Cathode_2nd_Vacuum_TackTime_Array3 12930
#define P_Cathode_2nd_Vacuum_TackTime_Array4 12931
#define P_Cathode_2nd_Vacuum_TackTime_Array5 12932
#define P_Cathode_2nd_Vacuum_TackTime_Array6 12933
#define P_Cathode_2nd_Vacuum_TackTime_Array7 12934
#define P_Cathode_2nd_Vacuum_TackTime_Array8 12935
#define P_Cathode_2nd_Vacuum_TackTime_Array9 12936
#define P_Cathode_2nd_Vacuum_TackTime_Array10 12937
#define P_Anode_1st_Vacuum_TackTime_Array1 12938
#define P_Anode_1st_Vacuum_TackTime_Array2 12939
#define P_Anode_1st_Vacuum_TackTime_Array3 12940
#define P_Anode_1st_Vacuum_TackTime_Array4 12941
#define P_Anode_1st_Vacuum_TackTime_Array5 12942
#define P_Anode_1st_Vacuum_TackTime_Array6 12943
#define P_Anode_1st_Vacuum_TackTime_Array7 12944
#define P_Anode_1st_Vacuum_TackTime_Array8 12945
#define P_Anode_1st_Vacuum_TackTime_Array9 12946
#define P_Anode_1st_Vacuum_TackTime_Array10 12947
#define P_Anode_Align_Vacuum_TackTime_Array1 12948
#define P_Anode_Align_Vacuum_TackTime_Array2 12949
#define P_Anode_Align_Vacuum_TackTime_Array3 12950
#define P_Anode_Align_Vacuum_TackTime_Array4 12951
#define P_Anode_Align_Vacuum_TackTime_Array5 12952
#define P_Anode_Align_Vacuum_TackTime_Array6 12953
#define P_Anode_Align_Vacuum_TackTime_Array7 12954
#define P_Anode_Align_Vacuum_TackTime_Array8 12955
#define P_Anode_Align_Vacuum_TackTime_Array9 12956
#define P_Anode_Align_Vacuum_TackTime_Array10 12957
#define P_Anode_2nd_Vacuum_TackTime_Array1 12958
#define P_Anode_2nd_Vacuum_TackTime_Array2 12959
#define P_Anode_2nd_Vacuum_TackTime_Array3 12960
#define P_Anode_2nd_Vacuum_TackTime_Array4 12961
#define P_Anode_2nd_Vacuum_TackTime_Array5 12962
#define P_Anode_2nd_Vacuum_TackTime_Array6 12963
#define P_Anode_2nd_Vacuum_TackTime_Array7 12964
#define P_Anode_2nd_Vacuum_TackTime_Array8 12965
#define P_Anode_2nd_Vacuum_TackTime_Array9 12966
#define P_Anode_2nd_Vacuum_TackTime_Array10 12967
#define P_Final_Roll_TackTime_Array1 12968
#define P_Final_Roll_TackTime_Array2 12969
#define P_Final_Roll_TackTime_Array3 12970
#define P_Final_Roll_TackTime_Array4 12971
#define P_Final_Roll_TackTime_Array5 12972
#define P_Final_Roll_TackTime_Array6 12973
#define P_Final_Roll_TackTime_Array7 12974
#define P_Final_Roll_TackTime_Array8 12975
#define P_Final_Roll_TackTime_Array9 12976
#define P_Final_Roll_TackTime_Array10 12977
#define P_Sepa_ARC_TackTime_Array1 12978
#define P_Sepa_ARC_TackTime_Array2 12979
#define P_Sepa_ARC_TackTime_Array3 12980
#define P_Sepa_ARC_TackTime_Array4 12981
#define P_Sepa_ARC_TackTime_Array5 12982
#define P_Sepa_ARC_TackTime_Array6 12983
#define P_Sepa_ARC_TackTime_Array7 12984
#define P_Sepa_ARC_TackTime_Array8 12985
#define P_Sepa_ARC_TackTime_Array9 12986
#define P_Sepa_ARC_TackTime_Array10 12987
#define P_PACK_ML_Status_bit 12988
#define P_Whole_Stacking_TackTime_MES_Report_Flag 12989
#define P_JellyRoll_Out_TackTime_MES_Report_Flag 12990
#define P_PV_Cathode_Count 12991
#define P_PV_Anode_Count 12992
#define P_PV_AO_Value_Chanel 12993
#define P_PV_Cathode_NG_TR_NG_Count 12997
#define P_PV_Anode_NG_TR_NG_Count 12998
#define P_PV_Anode_Retry_NG_Count 12999
#define P_PV_Cathode_Retry_NG_Count 13000
#define P_PV_Align_INPUT_Count 13001
#define P_Unloader_Grip_Pressure 13002
#define P_Unloader_Heatmeter 13003
#define P_Project_Ver_A 13004
#define P_Project_Ver_B 13005
#define P_Project_Ver_C 13006
#define P_Project_Ver_D 13007
#define P_Interlock_Messege 13008
#define P_EPC_Y_StandBy 13058
#define P_SV_Read_Enable_Flag 13059
#define P_Spool_Rotate_Distance_mm 13060
#define P_Current_Homming_Status 13061
#define P_Home_Execute_Type 13111
#define P_Cathode_Clamp_Gantry 13161
#define P_Anode_Clamp_Gantry 13162
#define P_SV_Separator_Heting_Cutter_Change_Period 13163
#define P_Interval_Read_Time 13164
#define P_Interval_Write_Time 13170
#define P_Cathode_Picker_Cylinder_Count 13176
#define P_Anode_Picker_Cylinder_Count 13177
#define P_SV_Stack_Table_Cathode_Reference_Value 13178
#define P_SV_Stack_Table_Anode_Reference_Value 13179
#define P_CA_DR_Offset 13180
#define P_AN_DR_Offset 13181
#define P_First_DR_Offset 13182
#define P_Last_DR_Offset 13183
#define P_BTN_QC_Sample_Flag 13184
#define P_BTN_Loss_Sample_Flag 13185
#define P_MSA_Sample_Flag 13186
#define P_Sample_JR_Recipe_Count 13187
#define M_Sample_JR_Prod_Count 8359
#define M_Sample_Btn_Flag 8360
#define P_Ca_Clamp_Y_Move 13188
#define P_An_Clamp_Y_Move 13189
#define P_Stack_Table_JR_Exist_Flag 13190
#define P_Program_Monitoring_Lamp_Cell_Ready 13191
#define P_Program_Monitoring_Lamp_Ready_Pos 13192
#define P_Program_Monitoring_Lamp_Pause_Pos 13193
#define P_Program_Monitoring_Lamp_Motion_Run 13194
#define P_Program_Monitoring_Lamp_Cell_Remove 13195
#define P_Program_Monitoring_Lamp_Cell_Supply 13196
#define P_Program_Monitoring_Lamp_Sepa_Mode 13197
#define P_Program_Monitoring_Lamp_Semi_Run 13198
#define P_Program_Monitoring_Lamp_Stack_Mode 13199
#define P_Program_Monitoring_Lamp_Anode_Aling_NG 13200
#define P_Program_Monitoring_Lamp_Anode_Retry_NG 13201
#define P_Program_Monitoring_Lamp_Cathode_Align_NG 13202
#define P_Program_Monitoring_Lamp_Cathode_Retry_NG 13203
#define P_Program_Monitoring_Lamp_Last_Stack_Mode 13204
#define P_Program_Monitoring_Lamp_Jelly_Roll_OK 13205
#define P_Program_Monitoring_Lamp_Jelly_Roll_NG 13206
#define P_Program_Monitoring_Lamp_Jelly_Roll_Sepa 13207
#define P_Program_Monitoring_Lamp_Cell_Out_Pos 13208
#define P_Program_Monitoring_Lamp_Cell_Out_Mode 13209
#define P_Master_Motion_Program_Flag 13210
#define P_Sub_Master_Motion_Program_Flag 13211
#define P_Slave_Motion_Program_Flag 13231
#define P_Master_Motion_CycleStop_Flag 13251
#define P_OLD_Jog_Speed_Motor 13252
#define P_PLC_08_Program_Ver 13302
#define P_Old_PMAC_Commands 13303
#define P_Old_PMAC_Status 13304
#define P_Old_PMAC_Current_Mode 13305
#define P_Mode_Function_State_Machine 13306
#define P_PMAC_Commands 13307
#define P_Command_Start 13308
#define P_Command_Complete 13326
#define P_Command_Reset 13344
#define P_Command_Hold 13362
#define P_Command_Unhold 13380
#define P_Command_Suspend 13398
#define P_Command_Unsuspend 13416
#define P_Command_Clear 13434
#define P_Command_Stop 13452
#define P_Command_Abort 13470
#define P_Command_Status_Complete 13488
#define P_Command_Mask_Layer 13506
#define P_Command_Process_Type 13524
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
#define P_PMAC_Current_Mode 13542
#define P_PMAC_Status 13543
#define P_PMAC_Old_Mode 13544
#define P_Ready_Tack_Chk_Timer 13545
#define P_PLC09_Common_Command_Flag 13546
#define P_PLC09_Common_Command_Complete_Bit 13547
#define P_PLC09_Common_Execute_Flag 13548
#define P_PLC09_Common_Execute_Complete_Bit 13549
#define P_PLC09_Status 13550
#define P_PLC09_Libraries_Var 13551
#define P_Master_Motion_Program_ON_Flag 13552
#define P_Master_Motion_Program_ON_Complete_Bit 13553
#define P_Master_Motion_Program_OFF_Flag 13554
#define P_Master_Motion_Program_OFF_Complete_Bit 13555
#define P_Common_Function_Timbase_ON_Flag 13556
#define P_Common_Function_Timbase_ON_Complete_Bit 13557
#define P_Common_Function_Timbase_OFF_Flag 13558
#define P_Common_Function_Timbase_OFF_Complete_Bit 13559
#define P_Common_Function_Monitoring_Lamp_OFF_Flag 13560
#define P_Common_Function_Monitoring_Lamp_OFF_Complete_Bit 13561
#define P_Common_Function_Slave_Motion_Common_Init_Flag 13562
#define P_Common_Function_Slave_Motion_Common_Init_Complete_Bit 13563
#define P_Common_Function_OlD_Jog_Speed_Save_ON_Flag 13564
#define P_Common_Function_OlD_Jog_Speed_Save_ON_Complete_Bit 13565
#define P_Auto_Resetting_Sum_Ready_Pos_Check_Flag 13566
#define P_Auto_Resetting_Sum_Ready_Pos_Check_Complete_bit 13567
#define P_Manual_Resetting_Sum_Ready_Pos_Check_Flag 13568
#define P_Manual_Resetting_Sum_Ready_Pos_Check_Complete_bit 13569
#define P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Flag 13570
#define P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_1TR_Complete_Bit 13571
#define P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Flag 13572
#define P_Manual_Pause_Resetting_Sum_Ready_Pos_Check_2TR_Complete_Bit 13573
#define P_Motion_Target_Position_Complete 13574
#define P_SM_Auto_Run_Layer_Management 13575
#define P_Buffer_Mode_Status_Sequence 13576
#define P_SM_Sub_Function_Pause 13577
#define P_PLC09_Resetting_Position_Check_State_Machine 13578
#define P_PLC09_Resetting_Position_Moving_State_Machine 13579
#define P_Sum_Ready_pos_Motor 13580
#define P_SM_Resetting_Pause_Position 13622
#define P_20per_Vac_Error_Cycle_Stop_Flag 13623
#define P_MNTR_PLC23_ARC_Complete 13624
#define P_FUNCTION_PLC13_Sepa_Trigger_Enable 13625
#define P_PLC_Recipe_PLC2_Revise_Sepa 13626
#define P_Auto_Semi_Init_Status 13627
#define P_Auto_Semi_Init_Chk_Bit 13628
#define P_Old_PLC_HeartBit_Flag 13629
#define P_PLC09_Init_Flag 13630
#define P_Check_IDLE_CF_Flag 13631
#define P_Check_EXECUTE_CF_Flag 13632
#define P_Check_COMPLETING_CF_Flag 13633
#define P_Check_COMPLETE_CF_Flag 13634
#define P_Check_HOLDING_CF_Flag 13635
#define P_Check_HOLD_CF_Flag 13636
#define P_Check_UNHOLDING_CF_Flag 13637
#define P_Check_SUSPENDING_CF_Flag 13638
#define P_Check_SUSPENDED_CF_Flag 13639
#define P_Check_UNSUSPENDING_CF_Flag 13640
#define P_Check_STOPPED_CF_Flag 13641
#define P_Check_ABORTED_CF_Flag 13642
#define P_Check_CLEARING_CF_Flag 13643
#define P_Check_IDLE_CF 13644
#define P_Check_EXECUTE_CF 13645
#define P_Check_COMPLETING_CF 13646
#define P_Check_COMPLETE_CF 13647
#define P_Check_HOLDING_CF 13648
#define P_Check_HOLD_CF 13649
#define P_Check_UNHOLDING_CF 13650
#define P_Check_SUSPENDING_CF 13651
#define P_Check_SUSPENDED_CF 13652
#define P_Check_UNSUSPENDING_CF 13653
#define P_Check_STOPPED_CF 13654
#define P_Check_ABORTED_CF 13655
#define P_Check_CLEARING_CF 13656
#define P_Check_STOPPING_CF 13657
#define P_Check_STARTING_CF 13658
#define P_Check_RESETTING_CF 13659
#define P_Check_STARTTING_CF 13660
#define P_Queue_Clear 13661
#define P_PLC09_Alarm_Test_Flag 13662
#define P_PLC09_Test_Temp 13663
#define P_PLC01_STOP_Queue_Complete_Flag 13664
#define P_PMAC_All_Home_Cmd 13665
#define P_PMAC_All_Home_Status 13666
#define P_PMAC_Master_Following_Use_Flag 13667
#define PnP_Belt_Waring_Pos 13668
#define P_Old_X_PLC_Sync_Heart_Bit 13669
#define P_Stack_Heart_Bit_Sync_Flag 13670
#define P_Stack_Heart_Bit_Sunc_Complete_Bit 13671
#define P_Resetting_Init_Module_RTN 13672
#define P_PLC09_MNTR 13673
#define P_Unloder_PNP_Home_IL_Pos 13674
#define P_ECAT_Slave_Err_Bit 13675
#define P_MC_Power_Down_Flag 13676
#define P_Old_MC_Power_Down_Flag 13677
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
#define P_Modbus_Delay_Timer 13678
#define P_Modbus_Connect_Status 13679
#define P_Modbus_Reconnect_MNTR 13680
#define P_Ecat_Reconn_Chk_Lamp 13681
#define P_MC_Reconn_Chk_Lamp 13682
#define P_Cathode_1st_Vac_Set_Time 13683
#define P_Cathode_2nd_Vac_Set_Time 13684
#define P_Cathode_Align_Vac_Set_Time 13685
#define P_Cathode_Align_Blow_Set_Time 13686
#define P_Anode_1st_Vac_Set_Time 13687
#define P_Anode_2nd_Vac_Set_Time 13688
#define P_Sepa_Consume_Mode_Thickness_rate 13689
#define P_Sepa_Anode_Recipe_Count 13690
#define P_Sepa_Cathode_Recipe_Count 13691
#define P_Discharge_Cathode_Recipe_Count 13692
#define P_Discharge_Anode_Recipe_Count 13693
#define P_Suspend_Discharge_Cathode_Counter 13694
#define P_Suspend_Discharge_Anode_Counter 13695
#define P_Suspend_Discharge_Waiting_Flag 13696
#define P_Com_ARC_Sepa_Consume_Mode_Flag 13697
#define P_Com_EPC_Sepa_Consume_Mode_Flag 13698
#define P_Com_User_Sepa_Consume_Mode_Flag 13699
#define P_Com_Dry_Mode_Flag 13700
#define P_SM_Recipe_Value_Management 13701
#define P_Sepa_Mode_Recipe_Count 13702
#define P_Sepa_Mode_EPC_Recipe_Count 13703
#define P_ARC_End_Sepa_Recipe_Count 13704
#define P_Anode_Align_NG_Array 13705
#define P_Cathode_Align_NG_Array 13725
#define P_Anode_Surface_NG_Array 13745
#define P_Cathode_Surface_NG_Array 13765
#define P_Stack_NG_Array 13785
#define P_Cathode_Align_Continuous_NG_Stop_Select 13805
#define P_Anode_Align_Continuous_NG_Stop_Select 13806
#define P_Stack_Vision_NG_Enable 13807
#define P_Cathode_Surface_Continuous_NG_Stop_Select 13808
#define P_Anode_Surface_Continuous_NG_Stop_Select 13809
#define P_Anode_Trigger_IO_Test_Vision_PLC_Loop 13810
#define P_Anode_Trigger_IO_Test_Motion_Loop 13811
#define P_Cathode_Trigger_IO_Test_Vision_PLC_Loop 13812
#define P_Cathode_Trigger_IO_Test_Motion_Loop 13813
#define P_Stack_Trigger_IO_Test_Vision_PLC_Loop 13814
#define P_Stack_Trigger_IO_Test_Motion_Loop 13815
#define P_PLC12_Continuous_Buffer_Reset_Flag 13816
#define P_Continuous_Call_Align_OK_Flag 13817
#define P_Continuous_Call_Align_NG_Flag 13819
#define P_Continuous_Call_Align_TimeOut_Flag 13821
#define P_Continuous_Call_Surface_OK_Flag 13823
#define P_Continuous_Call_Surface_NG_Flag 13825
#define P_Continuous_Call_Surface_TimeOut_Flag 13827
#define P_Continuous_Call_Stack_Flag 13829
#define P_PLC12_Anode_Sheet_Pick_Up_Flag 13832
#define P_PLC12_Cathode_Sheet_Pick_Up_Flag 13833
#define P_Hold_Anode_Sheet_Pick_Up_Flag 13834
#define P_Hold_Cathode_Sheet_Pick_Up_Flag 13835
#define P_Sheet_Interface_Complete_Pos 13836
#define P_Anode_Sheet_Interface_Complete_Pos 13837
#define P_Cathode_Sheet_Interface_Complete_Pos 13838
#define P_Anode_2nd_TR_Maint_Check 13839
#define P_Cathode_2nd_TR_Maint_Check 13840
#define P_PLC12_Observser_MNTR 13841
#define P_PLC12_Vacuum_MNTR 13846
#define P_Vacuum_Check 13854
#define P_PLC12_Blow_MNTR 13862
#define P_Blow_Check 13870
#define P_PLC12_Vacuum_1st_Cathode_MNTR_Timer 13878
#define P_PLC12_Vacuum_2nd_Cathode_MNTR_Timer 13879
#define P_PLC12_Vacuum_NG_Cathode_MNTR_Timer 13880
#define P_PLC12_Vacuum_Align_Cathode_MNTR_Timer 13881
#define P_PLC12_Vacuum_1st_Anode_MNTR_Timer 13882
#define P_PLC12_Vacuum_2nd_Anode_MNTR_Timer 13883
#define P_PLC12_Vacuum_NG_Anode_MNTR_Timer 13884
#define P_PLC12_Vacuum_Align_Anode_MNTR_Timer 13885
#define P_PLC12_Vacuum_1st_Cathode_Set_Time 13886
#define P_PLC12_Vacuum_2nd_Cathode_Set_Time 13887
#define P_PLC12_Vacuum_NG_Cathode_Set_Time 13888
#define P_PLC12_Vacuum_Align_Cathode_Set_Time 13889
#define P_PLC12_Vacuum_1st_Anode_Set_Time 13890
#define P_PLC12_Vacuum_2nd_Anode_Set_Time 13891
#define P_PLC12_Vacuum_NG_Anode_Set_Time 13892
#define P_PLC12_Vacuum_Align_Anode_Set_Time 13893
#define P_PLC12_Vacuum_1st_Cathode_Take_Time 13894
#define P_PLC12_Vacuum_2nd_Cathode_Take_Time 13899
#define P_PLC12_Vacuum_NG_Cathode_Take_Time 13904
#define P_PLC12_Vacuum_Align_Cathode_Take_Time 13909
#define P_PLC12_Vacuum_1st_Anode_Take_Time 13914
#define P_PLC12_Vacuum_2nd_Anode_Take_Time 13919
#define P_PLC12_Vacuum_NG_Anode_Take_Time 13924
#define P_PLC12_Vacuum_Align_Anode_Take_Time 13929
#define P_PLC12_Blow_1st_Cathode_MNTR_Timer 13934
#define P_PLC12_Blow_2nd_Cathode_MNTR_Timer 13935
#define P_PLC12_Blow_NG_Cathode_MNTR_Timer 13936
#define P_PLC12_Blow_Align_Cathode_MNTR_Timer 13937
#define P_PLC12_Blow_1st_Anode_MNTR_Timer 13938
#define P_PLC12_Blow_2nd_Anode_MNTR_Timer 13939
#define P_PLC12_Blow_NG_Anode_MNTR_Timer 13940
#define P_PLC12_Blow_Align_Anode_MNTR_Timer 13941
#define P_PLC12_Blow_1st_Cathode_Set_Time 13942
#define P_PLC12_Blow_2nd_Cathode_Set_Time 13943
#define P_PLC12_Blow_NG_Cathode_Set_Time 13944
#define P_PLC12_Blow_Align_Cathode_Set_Time 13945
#define P_PLC12_Blow_1st_Anode_Set_Time 13946
#define P_PLC12_Blow_2nd_Anode_Set_Time 13947
#define P_PLC12_Blow_NG_Anode_Set_Time 13948
#define P_PLC12_Blow_Align_Anode_Set_Time 13949
#define P_PLC12_Blow_1st_Cathode_Take_Time 13950
#define P_PLC12_Blow_2nd_Cathode_Take_Time 13955
#define P_PLC12_Blow_NG_Cathode_Take_Time 13960
#define P_PLC12_Blow_Align_Cathode_Take_Time 13965
#define P_PLC12_Blow_1st_Anode_Take_Time 13970
#define P_PLC12_Blow_2nd_Anode_Take_Time 13975
#define P_PLC12_Blow_NG_Anode_Take_Time 13980
#define P_PLC12_Blow_Align_Anode_Take_Time 13985
#define P_Vacuum_Reentry_Bit 13990
#define P_Blow_Reentry_Bit 13991
#define P_Status_arry 13992
#define P_Queue_arry 14012
#define P_Step_arry 14032
#define P_Index_arry 14052
#define P_top 14072
#define P_Queue_stack_top 14073
#define P_Step_stack_top 14074
#define P_Index_stack_top 14075
#define P_Status_stack_top 14076
#define NN_Step 14077
#define NN_Index 14078
#define P_PLC_Observser_MNTR 14079
#define P_PLC12_Frist 14084
#define P_SM_Auto_Run_Status_Management 14085
#define P_SM_Status_Main_Memory_Management 14086
#define P_SM_Cell_Memory_Management 14087
#define P_Test_Vacuum_Timer 14088
#define P_Test_Blow_Timer 14096
#define P_Vac_Test_Set_Time 14104
#define P_Blow_Test_Set_Time 14112
#define P_PLC12_Vacuum_Unit_Data 14120
#define P_PLC12_Blow_Unit_Data 14121
#define P_Stack_Algorithme_Cmd_Event_Status 14122
#define P_PLC12_vacuum_Event_Status 14123
#define P_PLC12_Blow_Event_status 14124
#define P_PLC12_vacuum_DIO_Observer_Status 14125
#define P_PLC12_Blow_DIO_Observer_Status 14126
#define P_Resetting_Vacuum_MNTR_State_Machine 14127
#define P_Heart_Bit_Time 14128
#define P_Dancer_Angle_Alarm_Timer_Flag 14129
#define P_Dancer_Angle_Alarm_Check_Timer 14130
#define P_BTN_LED_LAMP 14131
#define P_Old_BTN_LED_LAMP 14132
#define P_PLC_TO_PMAC_Work_Confirm_Operation_Cnt 14133
#define P_VISION_TO_PMAC_Work_Confirm_Operation_Ack_Cnt 14134
#define P_Ca_AT_Retry_Cal_Move_Complete 14135
#define P_An_AT_Retry_Cal_Move_Complete 14136
#define P_Ca_AT_Retry_Cal_Cnt 14137
#define P_An_AT_Retry_Cal_Cnt 14138
#define P_Ca_AT_Retry_Cal_Complete 14139
#define P_An_AT_Retry_Cal_Complete 14140
#define P_An_AT_Retry_Cal_Pass 14141
#define P_Ca_AT_Retry_Cal_Pass 14142
#define P_Ca_Picker_T_Turn_Cnt_Flag 14143
#define P_Ca_Picker_T_Turn_Cnt 14144
#define P_Ca_Picker_T_Home_Type 14145
#define P_An_Picker_T_Turn_Cnt_Flag 14146
#define P_An_Picker_T_Turn_Cnt 14147
#define P_An_Picker_T_Home_Type 14148
#define P_Flag_Vac_Status_Initialize 14149
#define P_SM_Vac_Initialize 14150
#define P_Flag_Anode_1st_Vac_OFF 14151
#define P_Flag_Anode_AT_Vac_OFF 14152
#define P_Flag_Anode_2nd_Vac_OFF 14153
#define P_Flag_Anode_NG_Vac_OFF 14154
#define P_Flag_Cathode_1st_Vac_OFF 14155
#define P_Flag_Cathode_AT_Vac_OFF 14156
#define P_Flag_Cathode_2nd_Vac_OFF 14157
#define P_Flag_Cathode_NG_Vac_OFF 14158
#define P_Flag_Anode_1st_Vac_Initial_Alarm 14159
#define P_Flag_Anode_AT_Vac_Initial_Alarm 14160
#define P_Flag_Anode_2nd_Vac_Initial_Alarm 14161
#define P_Flag_Anode_NG_Vac_Initial_Alarm 14162
#define P_Flag_Cathode_1st_Vac_Initial_Alarm 14163
#define P_Flag_Cathode_AT_Vac_Initial_Alarm 14164
#define P_Flag_Cathode_2nd_Vac_Initial_Alarm 14165
#define P_Flag_Cathode_NG_Vac_Initial_Alarm 14166
#define P_Middle_Discharge_Ignore_Total_Count 14167
#define P_Middle_Discharge_Ignore_Stack_Count 14168
#define P_Middle_Discharge_Ignore_ON_Signal 14169
#define P_Middle_Discharge_Ignore_OFF_Signal 14170
#define P_Middle_Discharge_Ignore_Cell_Count 14171
#define P_ARC_Middle_Discharge_Ignore_Vision_Check 14172
#define P_ARC_Middle_Discharge_Ignore_ON_Flag 14173
#define P_Middle_Discharge_Ignore_User_Sepa_Mode_Check 14174
#define P_Zero_Angle 14175
#define P_Zero_Length 14200
#define P_Homeoffset_Change_Flag 14225
#define P_Cal_Distance 14250
#define P_Cal_Denominator 14255
#define P_Cal_Numerator 14260
#define P_Cal_Dif_Deg 14265
#define M_Touchprobefunction 8361
#define M_Touchprobestatus 8410
#define P_Flag_Sepa_Stack_Mode_CHK 14270
#define P_Read_Timer_S 14271
#define P_Write_Timer_S 14280
#define P_Interval_Read_S 14289
#define P_Interval_Write_S 14298
#define P_UI_Jog_Vel_M 14307
#define P_Initialize_Read_Excom_Variables_Flag 14357
#define P_Old_X_Read_Count_S 14358
#define P_Cathode_Clamp_MC_Cylinder_Count 14367
#define P_Cathode_Clamp_OP_Cylinder_Count 14368
#define P_Anode_Clamp_MC_Cylinder_Count 14369
#define P_Anode_Clamp_OP_Cylinder_Count 14370
#define P_Cathode_1ST_TR_Cylinder_Count 8003
#define P_Anode_1ST_TR_Cylinder_Count 8004
#define P_BTN_Cathode_Clamp_inside_Machine_Cylinder_Count_Clear 14371
#define P_BTN_Cathode_Clamp_Middle_Cylinder_Count_Clear 14372
#define P_BTN_Cathode_Clamp_outside_Machine_Cylinder_Count_Clear 14373
#define P_BTN_Anode_Clamp_inside_Machine_Cylinder_Count_Clear 14374
#define P_BTN_Anode_Clamp_Middle_Cylinder_Count_Clear 14375
#define P_BTN_Anode_Clamp_outside_Machine_Cylinder_Count_Clear 14376
#define P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear 14377
#define P_BTN_Cathode_1ST_TR_Cylinder_Count_Clear_Old 14378
#define P_BTN_Anode_1ST_TR_Cylinder_Count_Clear 14379
#define P_BTN_Anode_1ST_TR_Cylinder_Count_Clear_Old 14380
#define P_X_BTN_Manual_1 14381
#define P_X_BTN_Manual_2 14501
#define P_X_BTN_Manual_3 14621
#define P_Home_InterLock_M 14741
#define P_Status_BTN_Manual_1 14791
#define P_Status_BTN_Manual_2 14911
#define P_Status_BTN_Manual_Interlock_1 15031
#define P_Status_BTN_Manual_Interlock_2 15151
#define P_Status_BTN_Manual_Interlock_3 15271
#define P_Mode_Run_Enable_Flag 15391
#define P_RECIPE_PLC27_Manual_Interval 15396
#define P_RECIPE_PLC27_Auto_Interval 15397
#define P_MNTR_PLC4_Vision_Result 15398
#define P_Recipe_Speed_Value 15599
#define P_Slave6_Target_X_For_Cell_Out 15600
#define P_HCK_Step_MNTR 15601
#define P_Axis_Home_Pos 15651
#define P_Axis_Ready_Pos 15701
#define P_PMAC_Homing_CHK 15751
#define P_Poistion_error 15801
#define P_Home_Command 15802
#define P_Recipe_Count_Num 15852
#define L_Motor_Status_Update_Interval 15853
#define L_Motor_Recipe_Update_Interval 15854
#define P_UI_Servo_On_Off 15855
#define P_Old_BTN_Servo_On_Off_M 15856
#define P_Peak_Load_Ratio_M 15889
#define P_Chk_Current_Jog_Sel 15922
#define P_Jog_Sel_Count 15955
#define P_Recipe_POS_Interock_Num_Bit 15956
#define P_Recipe_VEL 15989
#define P_Recipe_POS 16000
#define P_BTN_Servo_On_Off_M 16011
#define P_BTN_Home_M 16044
#define P_BTN_Jog_Stop_M 16077
#define P_BTN_Recipe_POS_RUN_M 16110
#define P_Recipe_POS_Flag_M 16143
#define P_BTN_Jog_INC_M 16176
#define P_BTN_JOG_ABS_M 16209
#define P_User_Jog_Distance 16242
#define P_Unit_Command 16243
#define P_Unit_State_Machine 16343
#define P_Status_BTN_Manual_3 16443
#define P_Chk_Current_BTN_Sel 16543
#define P_BTN_Sel_Count 16593
#define P_PC_BTN_No 16594
#define P_BTN_Interlock_Update_Interval 16595
#define P_Align_Table_Status_Update_Interval 16596
#define P_Jelly_Roll_Total_Count_Old 16597
#define P_Old_m4120 16598
#define P_Old_m4121 16599
#define P_Old_m4122 16600
#define P_Old_m4123 16601
#define P_Linear_Encoder_Pos_Check_Flag 16602
#define P_Linear_Encoder_Pos 16607
#define P_Status_Linear_Encoder_HomeZero 16612
#define P_Command_Linear_Encoder_HomeZero 16617
#define P_Flag_Linear_Enc_Homezero_Complete_M17 16622
#define P_Flag_Linear_Enc_Homezero_Complete_M18 16623
#define P_Flag_Linear_Enc_Homezero_Complete_M19 16624
#define P_Flag_Linear_Enc_Homezero_Complete_M20 16625
#define P_CMD_Linear_ENC_Homezero_M17 16626
#define P_CMD_Linear_ENC_Homezero_M18 16627
#define P_CMD_Linear_ENC_Homezero_M19 16628
#define P_CMD_Linear_ENC_Homezero_M20 16629
#define P_OLD_Home_Offset 16630
#define P_RECIPE_PLC27_Alltime_Interval 16660
#define P_Manual_Memory_Tower_Timer 16661
#define P_Memory_Tower_Interval 16662
#define P_PLC_14_Status_Cycle_Stop_Flag 16663
#define P_Cathode_AlignTable_Cleaning_Pos_Status_Machine 16664
#define P_Anode_AlignTable_Cleaning_Pos_Status_Machine 16665
#define P_Status_Cathode_AlignTable_Cleaning_Pos 16666
#define P_Status_Anode_AlignTable_Cleaning_Pos 16667
#define P_CMD_Cathode_AlignTable_Cleaning_Pos 16668
#define P_CMD_Anode_AlignTable_Cleaning_Pos 16669
#define P_Cathode_2nd_pnp_Cleaning_Mode_Pos 16670
#define P_Anode_2nd_pnp_Cleaning_Mode_Pos 16671
#define P_Interlock_Test 16672
#define P_PNP_Picker_T_Pos 16673
#define P_NG_PNP_Pos 16674
#define M_Old_X_BTN_Machine_READY 16675
#define M_Old_X_BTN_Machine_START 16676
#define M_Old_X_BTN_Machine_STOP 16677
#define M_Old_X_BTN_Machine_RESET 16678
#define M_Old_X_BTN_Machine_MODE 16679
#define P_BTN_Motor_Pos_Check_RTN 16680
#define P_BTN_Memory_Tower_Check_Bit 16681
#define P_PMAC_Status_IDLE_Motor_Not_Pos 16682
#define P_PMAC_Status_IDLE_Motor_Pos 16683
#define P_BTN_Motor_Pos_Check_Monitor 16684
#define P_PackML_Auto_Stop_Bit 16685
#define P_BTN_IDLE_Motor_Not_Pos 16686
#define M_X_BTN_Machine_Mode 16687
#define M_Old_X_BTN_Machine_Mode 16688
#define P_Lamp_Blinking_Timer 16689
#define P_BTN_Ready_Lamp 16690
#define P_BTN_Start_Lamp 16691
#define P_BTN_Stop_Lamp 16692
#define P_ARC_Name_Plate_Passive_Status 16693
#define P_ARC_Passive_Status 16694
#define P_NP_Spool_Number 16695
#define P_ARC_Page_On 16696
#define P_ARC_NP_Upper_Timer 16697
#define P_ARC_Upper_Ready 16698
#define P_ARC_NP_Upper_3rd_Step_Toggle_Variable 16699
#define P_ARC_NP_Upper_7th_Step_Variable 16700
#define P_ARC_NP_Upper_7th_Step_Edge_Variable 16701
#define P_ARC_NP_Upper_Rot_ReRot_Blinking_Bit 16702
#define P_ARC_NP_Lower_Timer 16703
#define P_ARC_Lower_Ready 16704
#define P_ARC_NP_Lower_3rd_Step_Toggle_Variable 16705
#define P_ARC_NP_Lower_7th_Step_Variable 16706
#define P_ARC_NP_Lower_7th_Step_Edge_Variable 16707
#define P_ARC_NP_Lower_Rot_ReRot_Blinking_Bit 16708
#define M_Old_X_ARC_NP_Ready 16709
#define M_Old_X_ARC_NP_Unwinder_Rotation 16710
#define M_Old_X_ARC_NP_Unwinder_Re_Rotation 16711
#define P_Status_Clear_Flag 16712
#define P_Status_Clear_RTN 16713
#define P_MSA_BTN_On 16714
#define P_Align_Take_Off_BTN_ON 16715
#define P_ARC_NP_Upper_Ready_Check_Bit 16716
#define P_ARC_NP_Lower_Ready_Check_Bit 16717
#define P_PLC13_Cycle_Stop_Return_Array 16718
#define P_Stopping_CycleStop_Status 16818
#define P_Stopping_CycleStop_Seq_Index 16819
#define P_Stopping_CycleStop_Precondition_Seq_Index 16820
#define P_Stopping_CycleStop_Module_Status 16821
#define P_Stopping_CycleStop_Cmd 16822
#define P_Stopping_CycleStop_State_Machine 16823
#define P_Stopping_CycleStop_Act_State_Machine 16824
#define P_Module_Cycle_Stop_Act_State_Machine_Array 16844
#define P_Module_Cycle_Stop_Act_Complete_Bit 16864
#define P_Module_Cycle_Stop_Act_Command_Array 16884
#define P_OLD_Module_Cycle_Stop_Act_Command_Array 16904
#define P_Buffer_Seqdata_CycleStop_Array 16924
#define P_Final_Roll_Cathode_Pos_Status 16944
#define P_Sheet_Paper_FWD_Pos_Status 16945
#define P_Final_Roll_Vision_Pos_Status 16946
#define P_Cathode_Clamp_ON_Status 16947
#define P_Anode_Clamp_ON_Status 16948
#define P_Anode_Clamp_OFF_Status 16949
#define P_Partition_Up_Flag 16950
#define P_Partition_Down_Flag 16951
#define P_Partition_Avoid_Flag 16952
#define P_Partition_Avoid_Z_Speed 16953
#define P_Partition_Avoid_X_Speed 16954
#define P_Partition_Avoid_T_Speed 16955
#define P_Partition_Avoid_2nd_T_Pos 16956
#define P_Partition_Step_Flag 16957
#define P_Tact_Time_Timer 16958
#define P_Tack_Time_Save_Time 16998
#define P_Anode_NG_PNP_Tact_Time_Start 17038
#define P_Cathode_NG_PNP_Tact_Time_Start 17039
#define P_Anode_NG_PNP_Tact_Time_End 17040
#define P_Cathode_NG_PNP_Tact_Time_End 17041
#define P_Tact_Time_Stack_Array 17042
#define P_Tact_Time_Discharge_Array 17052
#define P_Tact_Time_1st_Unloader_Array 17062
#define P_Tact_Time_Sepa_ARC_Array 17072
#define P_Tact_Time_Final_Roll_Array 17082
#define P_Tact_Time_Cathode_1st_PNP_Array 17092
#define P_Tact_Time_Cathode_Align_Array 17102
#define P_Tact_Time_Cathode_2nd_PNP_Array 17112
#define P_Tact_Time_Cathode_Clamp_Array 17122
#define P_Tact_Time_Anode_1st_PNP_Array 17132
#define P_Tact_Time_Anode_Align_Array 17142
#define P_Tact_Time_Anode_2nd_PNP_Array 17152
#define P_Tact_Time_Anode_Clamp_Array 17162
#define P_Tact_Time_Cathode_1st_PNP_Vac_Array 17172
#define P_Tact_Time_Cathode_Align_PNP_Vac_Array 17182
#define P_Tact_Time_Cathode_2nd_PNP_Vac_Array 17192
#define P_Tact_Time_Anode_1st_PNP_Vac_Array 17202
#define P_Tact_Time_Anode_Align_PNP_Vac_Array 17212
#define P_Tact_Time_Anode_2nd_PNP_Vac_Array 17222
#define P_Tact_Time_Final_Roller_Clamp 17232
#define P_Tact_Time_Final_Roller_Unclamp 17233
#define P_Tact_Time_Stack_Table_Down 17234
#define P_Tact_Time_Stack_Table_Up 17235
#define P_Tact_Time_Sepa_Cutting_Down 17236
#define P_Tact_Time_Sepa_Cutting_Up 17237
#define P_Tact_Time_ARC_Upper_Plate_Up 17238
#define P_Tact_Time_ARC_Upper_Plate_Down 17239
#define P_Tact_Time_ARC_Upper_Tilting_On 17240
#define P_Tact_Time_ARC_Upper_Tilting_Off 17241
#define P_Tact_Time_ARC_Upper_Cutter_Fwd 17242
#define P_Tact_Time_ARC_Upper_Cutter_Bwd 17243
#define P_Tact_Time_ARC_Upper_Clamp_On 17244
#define P_Tact_Time_ARC_Upper_Clamp_Off 17245
#define P_Tact_Time_ARC_Lower_Plate_Up 17246
#define P_Tact_Time_ARC_Lower_Plate_Down 17247
#define P_Tact_Time_ARC_Lower_Tilting_On 17248
#define P_Tact_Time_ARC_Lower_Tilting_Off 17249
#define P_Tact_Time_ARC_Lower_Cutter_Fwd 17250
#define P_Tact_Time_ARC_Lower_Cutter_Bwd 17251
#define P_Tact_Time_ARC_Lower_Clamp_On 17252
#define P_Tact_Time_ARC_Lower_Clamp_Off 17253
#define P_Tact_Time_Save_Final_Roller_Clamp_Time 17254
#define P_Tact_Time_Save_Final_Roller_Unclamp_Time 17255
#define P_Tact_Time_Save_Stack_Table_Down_Time 17256
#define P_Tact_Time_Save_Stack_Table_Up_Time 17257
#define P_Tact_Time_Save_Sepa_Cutting_Down_Time 17258
#define P_Tact_Time_Save_Sepa_Cutting_Up_Time 17259
#define P_Tact_Time_Save_ARC_Upper_Plate_Up_Time 17260
#define P_Tact_Time_Save_ARC_Upper_Plate_Down_Time 17261
#define P_Tact_Time_Save_ARC_Upper_Tilting_On_Time 17262
#define P_Tact_Time_Save_ARC_Upper_Tilting_Off_Time 17263
#define P_Tact_Time_Save_ARC_Upper_Cutter_Fwd_Time 17264
#define P_Tact_Time_Save_ARC_Upper_Cutter_Bwd_Time 17265
#define P_Tact_Time_Save_ARC_Upper_Clamp_On_Time 17266
#define P_Tact_Time_Save_ARC_Upper_Clamp_Off_Time 17267
#define P_Tact_Time_Save_ARC_Lower_Plate_Up_Time 17268
#define P_Tact_Time_Save_ARC_Lower_Plate_Down_Time 17269
#define P_Tact_Time_Save_ARC_Lower_Tilting_On_Time 17270
#define P_Tact_Time_Save_ARC_Lower_Tilting_Off_Time 17271
#define P_Tact_Time_Save_ARC_Lower_Cutter_Fwd_Time 17272
#define P_Tact_Time_Save_ARC_Lower_Cutter_Bwd_Time 17273
#define P_Tact_Time_Save_ARC_Lower_Clamp_On_Time 17274
#define P_Tact_Time_Save_ARC_Lower_Clamp_Off_Time 17275
#define P_Tact_Time_Check 17276
#define P_Old_Tact_Time_Check 17316
#define P_Tact_Time_Head_Address 17356
#define P_Tact_Time_Array_Init 17396
#define P_Last_Run_To_Discharge_Tact_Timer 17397
#define P_Last_Run_To_Discharge_Tact_Time 17398
#define P_Master_Trigger_Sync_Tact_Timer 17399
#define P_Master_Trigger_Sync_Tact_Time 17400
#define P_Vision_First_Sepa_Stack_Align_OK_PMAC_Flag 17401
#define P_PLC18_EPC_Retry_Mode_Time_Use_Flag 17402
#define P_PLC18_Vision_EPC_Correction_Request_Old 17403
#define P_PLC18_EPC_Moving_Flag 17404
#define P_PLC18_EPC_Moving_Status 17405
#define P_PLC18_EPC_Move_State_Machine 17406
#define P_PLC18_EPC_Move_Status 17407
#define P_PLC18_EPC_inspection_Time 17408
#define P_EPC_Insp_Time 17409
#define P_EPC_Correction_Time 17410
#define P_TEST_Max_EPC_Sensor_Value_um 17411
#define P_PLC18_EPC_Moving_Timer 17412
#define P_EPC_MNTR_VAR 17413
#define P_EPC_Axis_Target_Y 17423
#define P_Com_After_Sepa_Mode_Status 17424
#define P_PLC18_PLC_to_PMAC_Correction_Value 17425
#define P_PLC_EPC_Status 17426
#define P_EPC_Retry_Over_Alarm_Flag 17427
#define P_ARC_EPC_Vision_Value_Apply_Bit 17428
#define P_ARC_EPC_Vision_Value_Apply_Flag 17429
#define P_ARC_EPC_Vision_Value_Apply_State_Machine 17430
#define P_ARC_EPC_Vision_Value_Apply_Timer 17431
#define P_ARC_EPC_Vision_Value_Apply_Time 17432
#define P_AH_Home_Status 17433
#define P_Resetting_All_Home_Command 17434
#define P_PnP_Init_Pos 17435
#define P_NG_PnP_Warning_Pos 17436
#define P_PnP_Stack_Pos 17437
#define P_PnP_Align_Pos 17438
#define P_Down_Pos 17439
#define P_Homing_Alarm_Time 17440
#define P_Home_Check_Arry 17441
#define P_All_Home_Stop_Cmd 17491
#define P_Home_First_Move 17492
#define P_Test_HomeComplete 17493
#define P_Test_Motor_Ready_Pos 17543
#define P_PWM_Phasing_Start 17593
#define P_PWM_Status 17598
#define P_PWM_State_Machine 17603
#define P_PWM_Old_time 17608
#define P_AH_Seq_arr 17613
#define P_Indiv_AH_Cmd 17628
#define P_Indiv_AH_Status 17643
#define P_Indiv_Avoid_Cmd 17658
#define P_AH_CA_1st_Rtn 17673
#define P_AH_CA_1st_Act_Rtn 17674
#define P_AH_AN_1st_Rtn 17675
#define P_AH_AN_1st_Act_Rtn 17676
#define P_AH_CA_2nd_Rtn 17677
#define P_AH_CA_2nd_Act_Rtn 17678
#define P_AH_AN_2nd_Rtn 17679
#define P_AH_AN_2nd_Act_Rtn 17680
#define P_AH_CA_NG_Rtn 17681
#define P_AH_CA_NG_Act_Rtn 17682
#define P_AH_AN_NG_Rtn 17683
#define P_AH_AN_NG_Act_Rtn 17684
#define P_CA_1st_SM 17685
#define P_AN_1st_SM 17686
#define P_CA_2nd_SM 17687
#define P_AN_2nd_SM 17688
#define P_CA_NG_SM 17689
#define P_AN_NG_SM 17690
#define P_Unloader_Crush_Pos 17691
#define P_DD_Motor_45Deg 17692
#define P_DD_M_Home_ABS_Pos 17693
#define P_AH_Indvi_rtn 17698
#define P_DD_M_Home_Pos_Flag 17749
#define P_WAIT_INDEX 17750
#define P_Home_Check_Arry1 17751
#define P_FR_Cmd_Check_Flag 17801
#define M_Ecat_Motor_State 8459
#define P_PV_Separator_Dancer_Pressure 17802
#define P_PV_Cathode_Clamp_Pressure 17803
#define P_PV_Anoode_Clamp_Pressure 17804
#define P_PV_Cathode_Final_Roller_X_Axis 17805
#define P_PV_Anode_Final_Roller_X_Axis 17806
#define P_PV_Cathode_Clamp_ON_Y1_Axis_Pos 17807
#define P_PV_Cathode_Clamp_ON_Y2_Axis_Pos 17808
#define P_PV_Cathode_Clamp_ON_Z1_Axis_Pos 17809
#define P_PV_Cathode_Clamp_ON_Z2_Axis_Pos 17810
#define P_PV_Anode_Clamp_ON_Y1_Axis_Pos 17811
#define P_PV_Anode_Clamp_ON_Y2_Axis_Pos 17812
#define P_PV_Anode_Clamp_ON_Z1_Axis_Pos 17813
#define P_PV_Anode_Clamp_ON_Z2_Axis_Pos 17814
#define P_PV_Cathode_2th_AT_T_Axis_Pos 17815
#define P_PV_Cathode_2th_ST_T_Axis_Pos 17816
#define P_PV_Cathode_2th_AT_Z_Axis_Pos 17817
#define P_PV_Cathode_2th_ST_Z_Axis_Pos 17818
#define P_PV_Anode_2th_AT_T_Axis_Pos 17819
#define P_PV_Anode_2th_ST_T_Axis_Pos 17820
#define P_PV_Anode_2th_AT_Z_Axis_Pos 17821
#define P_PV_Anode_2th_ST_Z_Axis_Pos 17822
#define P_PV_Cathode_1th_Ready_T_Axis_Pos 17823
#define P_PV_Cathode_1th_CV_T_Axis_Pos 17824
#define P_PV_Cathode_1th_AT_T_Axis_Pos 17825
#define P_PV_Cathode_1th_Ready_Z_Axis_Pos 17826
#define P_PV_Cathode_1th_CV_Z_Axis_Pos 17827
#define P_PV_Cathode_1th_AT_Z_Axis_Pos 17828
#define P_PV_Anode_1th_Ready_T_Axis_Pos 17829
#define P_PV_Anode_1th_CV_T_Axis_Pos 17830
#define P_PV_Anode_1th_AT_T_Axis_Pos 17831
#define P_PV_Anode_1th_Ready_Z_Axis_Pos 17832
#define P_PV_Anode_1th_CV_Z_Axis_Pos 17833
#define P_PV_Anode_1th_AT_Z_Axis_Pos 17834
#define P_PV_Cathode_NG_AT_T_Axis_Pos 17835
#define P_PV_Cathode_NG_Box_T_Axis_Pos 17836
#define P_PV_Anode_NG_AT_T_Axis_Pos 17837
#define P_PV_Anode_NG_Box_T_Axis_Pos 17838
#define P_SemiRun_Separator_Dancer_Pressure_Flag 17839
#define P_SemiRun_Cathode_Clamp_Pressure_Flag 17840
#define P_SemiRun_Anoode_Clamp_Pressure_Flag 17841
#define P_SemiRun_Cathode_Final_Roller_X_Axis_Flag 17842
#define P_SemiRun_Anode_Final_Roller_X_Axis_Flag 17843
#define P_SemiRun_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag 17844
#define P_SemiRun_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag 17845
#define P_SemiRun_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag 17846
#define P_SemiRun_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag 17847
#define P_SemiRun_Cathode_2th_AT_T_Axis_Pos_Flag 17848
#define P_SemiRun_Cathode_2th_ST_T_Axis_Pos_Flag 17849
#define P_SemiRun_Cathode_2th_AT_Z_Axis_Pos_Flag 17850
#define P_SemiRun_Cathode_2th_ST_Z_Axis_Pos_Flag 17851
#define P_SemiRun_Anode_2th_AT_T_Axis_Pos_Flag 17852
#define P_SemiRun_Anode_2th_ST_T_Axis_Pos_Flag 17853
#define P_SemiRun_Anode_2th_AT_Z_Axis_Pos_Flag 17854
#define P_SemiRun_Anode_2th_ST_Z_Axis_Pos_Flag 17855
#define P_SemiRun_Cathode_1th_Ready_T_Axis_Pos_Flag 17856
#define P_SemiRun_Cathode_1th_CV_T_Axis_Pos_Flag 17857
#define P_SemiRun_Cathode_1th_AT_T_Axis_Pos_Flag 17858
#define P_SemiRun_Cathode_1th_Ready_Z_Axis_Pos_Flag 17859
#define P_SemiRun_Cathode_1th_CV_Z_Axis_Pos_Flag 17860
#define P_SemiRun_Cathode_1th_AT_Z_Axis_Pos_Flag 17861
#define P_SemiRun_Anode_1th_Ready_T_Axis_Pos_Flag 17862
#define P_SemiRun_Anode_1th_CV_T_Axis_Pos_Flag 17863
#define P_SemiRun_Anode_1th_AT_T_Axis_Pos_Flag 17864
#define P_SemiRun_Anode_1th_Ready_Z_Axis_Pos_Flag 17865
#define P_SemiRun_Anode_1th_CV_Z_Axis_Pos_Flag 17866
#define P_SemiRun_Anode_1th_AT_Z_Axis_Pos_Flag 17867
#define P_SemiRun_Cathode_NG_AT_T_Axis_Pos_Flag 17868
#define P_SemiRun_Cathode_NG_Box_T_Axis_Pos_Flag 17869
#define P_SemiRun_Anode_NG_AT_T_Axis_Pos_Flag 17870
#define P_SemiRun_Anode_NG_Box_T_Axis_Pos_Flag 17871
#define P_Motion_Separator_Dancer_Pressure_Flag 17872
#define P_Motion_Cathode_Clamp_Pressure_Flag 17873
#define P_Motion_Anoode_Clamp_Pressure_Flag 17874
#define P_Motion_Cathode_Final_Roller_X_Axis_Flag 17875
#define P_Motion_Anode_Final_Roller_X_Axis_Flag 17876
#define P_Motion_Cathode_Clamp_ON_Y1_Z1_Axis_Pos_Flag 17877
#define P_Motion_Cathode_Clamp_ON_Y2_Z2_Axis_Pos_Flag 17878
#define P_Motion_Anode_Clamp_ON_Y1_Z1_Axis_Pos_Flag 17879
#define P_Motion_Anode_Clamp_ON_Y2_Z2_Axis_Pos_Flag 17880
#define P_Motion_Cathode_2th_AT_T_Axis_Pos_Flag 17881
#define P_Motion_Cathode_2th_ST_T_Axis_Pos_Flag 17882
#define P_Motion_Cathode_2th_AT_Z_Axis_Pos_Flag 17883
#define P_Motion_Cathode_2th_ST_Z_Axis_Pos_Flag 17884
#define P_Motion_Anode_2th_AT_T_Axis_Pos_Flag 17885
#define P_Motion_Anode_2th_ST_T_Axis_Pos_Flag 17886
#define P_Motion_Anode_2th_AT_Z_Axis_Pos_Flag 17887
#define P_Motion_Anode_2th_ST_Z_Axis_Pos_Flag 17888
#define P_Motion_Cathode_1th_Ready_T_Axis_Pos_Flag 17889
#define P_Motion_Cathode_1th_CV_T_Axis_Pos_Flag 17890
#define P_Motion_Cathode_1th_AT_T_Axis_Pos_Flag 17891
#define P_Motion_Cathode_1th_Ready_Z_Axis_Pos_Flag 17892
#define P_Motion_Cathode_1th_CV_Z_Axis_Pos_Flag 17893
#define P_Motion_Cathode_1th_AT_Z_Axis_Pos_Flag 17894
#define P_Motion_Anode_1th_Ready_T_Axis_Pos_Flag 17895
#define P_Motion_Anode_1th_CV_T_Axis_Pos_Flag 17896
#define P_Motion_Anode_1th_AT_T_Axis_Pos_Flag 17897
#define P_Motion_Anode_1th_Ready_Z_Axis_Pos_Flag 17898
#define P_Motion_Anode_1th_CV_Z_Axis_Pos_Flag 17899
#define P_Motion_Anode_1th_AT_Z_Axis_Pos_Flag 17900
#define P_Motion_Cathode_NG_AT_T_Axis_Pos_Flag 17901
#define P_Motion_Cathode_NG_Box_T_Axis_Pos_Flag 17902
#define P_Motion_Anode_NG_AT_T_Axis_Pos_Flag 17903
#define P_Motion_Anode_NG_Box_T_Axis_Pos_Flag 17904
#define P_Cathode_1PNP_Sacle_Value 17905
#define P_Cathode_2PNP_Sacle_Value 17906
#define P_Anode_1PNP_Sacle_Value 17907
#define P_Anode_2PNP_Sacle_Value 17908
#define P_PLC01_SemiRun_PV_Flag 17909
#define P_PV_EPC_Index 17910
#define P_PV_EPC_Camera_Pos 17911
#define P_BTN_MSA_Total_Value 17926
#define P_Vision_Align_Trigger_Timer 17927
#define P_Vision_Stack_Trigger_Timer 17928
#define P_MSA_Chk_Pos_Timer 17929
#define P_MSA_Chk_Pos_Time 17930
#define P_VISION_MSA_Status_Prod_Sequence 17931
#define P_VISION_MSA_Seq_Index 17951
#define P_VISION_MSA_Anode_Align_Bit_Pos 17952
#define P_VISION_MSA_Seq_PreCondition_Index 17953
#define P_MSA_CycleStop_Point_Check_Complete_RTN 17954
#define P_MSA_Cmd 17955
#define P_Current_Anode_Align_MSA_Run_Count 17960
#define P_Current_Cathode_Align_MSA_Run_Count 17961
#define P_Current_Anode_Stack_MSA_Run_Count 17962
#define P_Current_Cathode_Stack_MSA_Run_Count 17963
#define P_VISION_MSA_Align_Count_Chk_Flag 17964
#define P_VISION_MSA_Stack_Count_Chk_Flag 17965
#define P_VISION_MSA_pre_InterLock_Cmd 17966
#define P_VISION_MSA_pre_InterLock_Status 17967
#define P_VISION_MSA_pre_InterLock_Check_Assy_Bit 17968
#define P_VISION_MSA_pre_InterLock_Assy_Bit_Pos 17969
#define P_Vision_MSA_Interlock_Status 17970
#define P_VISION_MSA_MODE 17971
#define P_VISION_MSA_Status_Flag 17972
#define P_VISION_MSA_State_Machine 17973
#define P_VISION_MSA_Status 17974
#define P_VISION_MSA_Seq_Command_Occurs 17975
#define P_Vision_Align_Trigger_Time 17976
#define P_Anode_Align_MSA_Motion_Check 17977
#define P_Cathode_Align_MSA_Motion_Check 17978
#define P_Anode_Stack_MSA_Motion_Check 17979
#define P_Cathode_Stack_MSA_Motion_Check 17980
#define P_Anode_Align_MSA_Motion_ProgActive_Complete 17981
#define P_Cathode_Align_MSA_Motion_ProgActive_Complete 17982
#define P_Anode_Stack_MSA_Motion_ProgActive_Complete 17983
#define P_Cathode_Stack_MSA_Motion_ProgActive_Complete 17984
#define P_BTN_Align_Off_Total_Value 17985
#define P_Align_Take_Off_Cmd 17986
#define P_Align_Take_Off_Status 17989
#define P_Align_Take_Off_Mode 17990
#define P_Align_Take_Off_Status_Flag 17991
#define P_Align_Take_Off_State_Machine 17992
#define P_Align_Take_Off_Chk_Pos_Timer 17993
#define P_Align_Take_Off_Motor_Check_Complete 17994
#define P_Align_Take_Off_Speed_Return_Complete 17995
#define P_Align_Take_Off_Interlock_Status 17996
#define P_Align_Take_Off_pre_InterLock_Cmd 17997
#define P_Align_Take_Off_pre_InterLock_Status 17998
#define P_Align_Take_Off_pre_InterLock_Check_Assy_Bit 17999
#define P_Align_Take_Off_pre_InterLock_Assy_Bit_Pos 18000
#define P_Align_Take_Off_Seq_Index 18001
#define P_Align_Take_Off_Seq_PreCondition_Index 18002
#define P_Align_Take_Off_Status_Prod_Sequence 18003
#define P_Align_Take_Off_Stop_Signal 18023
#define P_Vision_Cal_Reset_Count 18024
#define P_2nd_PNP_Cleaning_Mode_Cmd 18025
#define P_2nd_PNP_Cleaning_Mode_Status 18026
#define P_2nd_PNP_Cleaning_Mode_Z_Jog_Speed 18027
#define P_2nd_PNP_Cleaning_Mode_X_Jog_Speed 18028
#define P_2nd_PNP_Cleaning_Mode_T_Jog_Speed 18029
#define P_2nd_PNP_Cleaning_Avoid_2nd_T_Pos 18030
#define P_Old_Upper_Sensor 18031
#define P_Edge_Upper_Sensor 18039
#define P_Old_Lower_Sensor 18047
#define P_Edge_Lower_Sensor 18055
#define P_Edge_NP_BTN 18063
#define P_UI_Unit_Status 18065
#define P_Motor_Unit_Status 18075
#define P_Current_Homming_Status_To_PLC 18125
#define P_System_Cascading_ON_Cmd 18175
#define P_System_Cascading_OFF_Cmd 18176
#define P_System_Master_Following_ON_Cmd 18177
#define P_System_Master_Following_OFF_Cmd 18178
#define P_System_CamTable_ON_Cmd 18179
#define P_System_CamTable_OFF_Cmd 18180
#define P_System_Spool_Home_Ready_Pos_Cmd 18181
#define P_System_Cascading_ON_Status 18182
#define P_System_Cascading_OFF_Status 18183
#define P_System_Master_Following_ON_Status 18184
#define P_System_Master_Following_OFF_Status 18185
#define P_System_CamTable_ON_Status 18186
#define P_System_CamTable_OFF_Status 18187
#define P_System_Spool_Home_Ready_Pos_Status 18188
#define P_System_Cascading_ON_State_Machine 18189
#define P_System_Cascading_OFF_State_Machine 18190
#define P_System_Master_Follwing_ON_State_Machine 18191
#define P_System_Master_Follwing_OFF_State_Machine 18192
#define P_System_CamTable_ON_State_Machine 18193
#define P_System_CamTable_OFF_State_Machine 18194
#define P_System_Spool_Home_Ready_Pos_State_Machine 18195
#define P_System_Cascading_ON_Complete_Flag 18196
#define P_System_Cascading_OFF_Complete_Flag 18197
#define P_System_Master_Following_ON_Complete_Flag 18198
#define P_System_Master_Following_OFF_Complete_Flag 18199
#define P_System_CamTable_ON_Complete_Flag 18200
#define P_System_CamTable_OFF_Complete_Flag 18201
#define P_System_Spool_Home_Ready_Pos_Complete_Flag 18202
#define P_Servo_Dancer_Cascading_Off_Timer 18203
#define P_Servo_Dancer_Cascading_Set_Timer 18204
#define P_Dancer_Frist_Home_Ready_Pos_Timer 18205
#define P_Driving_Motor_Use_Flag 18206
#define P_Home_Spool_Unwinding 18207
#define P_OutValue 18208
#define P_Dancer_Out_Slew_Seq 18209
#define P_OutChangeValue 18210
#define P_Rot_OutValue 18211
#define P_OutChangeTime 18212
#define P_AO_Module_Arr 18213
#define P_AO_Range_Set_Value 18218
#define P_Regul_Max_kPa_Value 18223
#define P_Regul_Min_kPa_Value 18224
#define P_Regul_Max_AD 18225
#define P_Regul_Min_AD 18226
#define P_Current_Max_Value 18227
#define P_Current_Min_Value 18228
#define P_Current_Max_AD 18229
#define P_Current_Min_AD 18230
#define P_Sepa_Cal_Inclination 18231
#define P_Regul_Cal_Inclination 18232
#define P_Cutter_Heat_Amp_Data_Bit 18233
#define P_Cut_Heat_Amp_Value 18234
#define P_AI_Cathode_Clamp_Damper_AVG 18235
#define P_AI_Anode_Clamp_Damper_AVG 18236
#define P_Tension_Ready_Pos_Cmd 18237
#define P_Tension_Ready_State_Machine 18238
#define P_Tension_Ready_Pos_Status 18239
#define P_Dancer_Center_Pos 18240
#define P_Upper_Sepa_Cal_Inclination 18241
#define P_Lower_Sepa_Cal_Inclination 18242
#define P_Unwinder_Jogspeed 18243
#define P_Cascading_First_Out 18244
#define P_Dancer_Cur_Vdc 18245
#define P_Dancer_Cur_Torque 18246
#define P_Dancer_Cur_Newton 18247
#define P_Dancer_Cur_Kgf 18248
#define P_Board_IO_Count 18249
#define P_Force_BTN_Address_Clear_Count 18250
#define P_Force_BTN_M_Variable_Save 18251
#define P_Force_BTN_Condition_Count 18635
#define P_Old_Force_BTN_Mode 18636
#define P_Force_BTN_Address_Count 18637
#define P_Force_BTN_GPIO_Address_Count 18638
#define P_Force_BTN_Ecat_Address_Count 18639
#define P_Force_BTN_M_Variable_Save_Count 18640
#define P_Force_BTN_M_Variable_Start_Num 18641
#define P_Force_BTN_Normal_Mode_Status 18642
#define P_Force_BTN_Normal_Mode_State_Machine 18643
#define P_Force_BTN_Normal_Mode_Complete_Flag 18644
#define P_Force_BTN_Force_Mode_Timer 18645
#define P_Force_BTN_Force_Mode_Delay_Time 18646
#define P_Force_BTN_Force_Mode_Status 18647
#define P_Force_BTN_Force_Mode_State_Machine 18648
#define P_Force_BTN_Force_Mode_Complete_Flag 18649
#define P_Mem_Save_Error_Bit 18650
#define P_ABS_Phasing_Data 18651
#define P_ABS_Home_Offset_Data 18656
#define P_Servo_Gain_Save_Command 18661
#define P_Servo_Gain_Load_Command 18662
#define P_Servo_Gain_Save_Flag 18663
#define P_Servo_Gain_Load_Flag 18664
#define P_Servo_Gain_Kp 18665
#define P_Servo_Gain_Kvfb 18695
#define P_Servo_Gain_Kvff 18725
#define P_Servo_Gain_Ki 18755
#define P_Servo_Gain_SwZvInt 18785
#define P_Servo_Gain_Kaff 18815
#define P_Insert_Phase_Flag 18845
#define P_Alarm_Arr 18846
#define P_Alarm_Occur_Flag 18946
#define P_Alarm_Occur_Index_Flag 18947
#define P_Alarm_Wait_Time 18951
#define P_Alarm_Delay_Timer 18952
#define P_Compare_Priority 18953
#define P_Alarm_Report 18954
#define P_Alarm_Num 18955
#define P_Alarm_Index 18956
#define P_First_Alarm_Flag 18957
#define P_Alarm_Log 18958
#define P_First_Alarm_Log 19058
#define P_Servo_Alarm_Check 19088
#define P_Ecat_Servo_Alarm_Check 19089
#define P_Alarm_duplicate_Check_Arr 19090
#define P_Old_Drive_Alarm 19760
#define P_IL_ON_OFF_Flag 19810
#define P_IL_Coord_Robot 19811
#define P_IL_Robot_Bit 19812
#define P_IL_Outer_Status 19813
#define P_Robot_Unit_Serch_Flag 19814
#define P_Limit_PosData 19815
#define P_IL_Sprint 19818
#define P_IL_length 19819
#define P_IL_Strcat 19820
#define P_IL_Popup_Motor 19821
#define P_IL_Motor_Page 19822
#define P_IL_Recipe_Bit 19823
#define P_Interlock_Popup_On_Flag 19824
#define P_Motor_Page 19825
#define M_Motor_BTN_Info 8509
#define P_OP_Side_Ca_PNP_Pos 19826
#define P_OP_Side_An_PNP_Pos 19827
#define P_OP_Side_PMAC_Cur_Mode 19828
#define P_Abs_Trans_Cur_Pos 19829
#define P_Minus_IL_Offset 19830
#define P_Plus_IL_Offset 19831
#define P_2nd_PNP_Arm_Radius 19832
#define P_IL_Enable_Flag 19833
#define P_Plus_Interlock_Bit 19834
#define P_Minus_Interlock_Bit 19835
#define UPPos 19836
#define Unloader_In_StackPos 19837
#define FR_AnodePos 19838
#define FR_CathodePos 19839
#define Before_In_Stack 19840
#define In_Stack 19841
#define P_Collision_Risk_Motor 19842
#define P_Minus_Collision_Risk_Motor 19844
#define P_IL_Clamp_Y 19845
#define P_IL_Clamp_Z 19846
#define P_IL_Clamp_Pos 19847
#define P_IL_Use_FR_Clamp_Pos 19848
#define P_P_IL_Normal_Pos_Offset 19849
#define P_M_IL_Normal_Pos_Offset 19899
#define P_P_IL_Upper_Pos_Offset 19949
#define P_M_IL_Upper_Pos_Offset 19999
#define P_P_IL_Align_Pos_Offset 20049
#define P_M_IL_Align_Pos_Offset 20099
#define P_P_IL_Stack_Pos_Offset 20149
#define P_M_IL_Stack_Pos_Offset 20199
#define P_Ca_1st_Plus_IL_Offset 20249
#define P_Ca_1st_Minus_IL_Offset 20250
#define P_An_1st_Plus_IL_Offset 20251
#define P_An_1st_Minus_IL_Offset 20252
#define P_Ca_2nd_T_Plus_IL_Offset 20253
#define P_Ca_2nd_T_Minus_IL_Offset 20256
#define P_Ca_2nd_Z_Plus_IL_Offset 20259
#define P_Ca_2nd_Z_Minus_IL_Offset 20261
#define P_An_2nd_T_Plus_IL_Offset 20263
#define P_An_2nd_T_Minus_IL_Offset 20266
#define P_An_2nd_Z_Minus_IL_Offset 20269
#define P_Z_Pos_Data 20271
#define P_Clamp_Z_Plus_IL_Offset 20272
#define P_FR_X_Plus_IL_Offset 20273
#define P_FR_X_Minus_IL_Offset 20275
#define P_FR_Z_Minus_IL_Offset 20277
#define P_Ca_NG_PNP_Plus_IL_Offset 20278
#define P_Ca_NG_PNP_Minus_IL_Offset 20282
#define P_An_NG_PNP_Plus_IL_Offset 20286
#define P_An_NG_PNP_Minus_IL_Offset 20290
#define P_Unloader_X_Plus_IL_Offset 20294
#define P_Unloader_X_Minus_IL_Offset 20298
#define P_Unloader_Z_Plus_IL_Offset 20302
#define P_Unloader_Z_Minus_IL_Offset 20305
#define P_IL_In_Offset 20308
#define P_X_PLC_InterLock 20333
#define P_IL_Home_Chk 20334
#define P_IL_Home_Chk_Motor_Num 20335
#define P_IL_Home_Chk_Motor_Update 20355
#define P_IL_Inside_Home_Chk_Complete 20356
#define P_IL_Outside_Home_Chk_Complete 20357
#define P_IL_Motor_Home_Chk_RTN 20358
#define P_IL_Function_Cnt 20359
#define P_IL_Function_Motor_Num 20360
#define P_Anode_1st_TR_Belt_Down_Flag 20361
#define P_Anode_1st_TR_Belt_Pick_Up_Flag 20362
#define P_Anode_1st_TR_Align_Down_Flag 20363
#define P_Anode_2nd_TR_Align_Pick_Up_Flag 20364
#define P_Anode_2nd_TR_Stack_Down_Flag 20365
#define P_Anode_NG_TR_Align_Pick_Up_Flag 20366
#define P_Anode_NG_TR_NG_Place_Down_Flag 20367
#define P_Anode_2nd_TR_Align_Down_Flag 20368
#define P_Anode_1st_TR_Align_Pick_Up_Flag 20369
#define P_Anode_1st_TR_Belt_Down_State_Machine 20370
#define P_Anode_1st_TR_Belt_Down_Status 20371
#define P_Anode_1st_TR_Belt_Pick_Up_State_Machine 20372
#define P_Anode_1st_TR_Belt_Pick_Up_Status 20373
#define P_Anode_1st_TR_Align_Down_State_Machine 20374
#define P_Anode_1st_TR_Align_Down_Status 20375
#define P_Anode_2nd_TR_Align_Pick_Up_State_Machine 20376
#define P_Anode_2nd_TR_Align_Pick_Up_Status 20377
#define P_Anode_2nd_TR_Stack_Down_State_Machine 20378
#define P_Anode_2nd_TR_Stack_Down_Status 20379
#define P_Anode_NG_TR_Align_Pick_Up_State_Machine 20380
#define P_Anode_NG_TR_Align_Pick_Up_Status 20381
#define P_Anode_NG_TR_NG_Place_Down_State_Machine 20382
#define P_Anode_NG_TR_NG_Place_Down_Status 20383
#define P_Anode_2nd_TR_Align_Down_State_Machine 20384
#define P_Anode_2nd_TR_Align_Down_Status 20385
#define P_Anode_1st_TR_Align_Pick_Up_State_Machine 20386
#define P_Anode_1st_TR_Align_Pick_Up_Status 20387
#define P_Cathode_1st_TR_Belt_Down_Flag 20388
#define P_Cathode_1st_TR_Belt_Pick_Up_Flag 20389
#define P_Cathode_1st_TR_Align_Down_Flag 20390
#define P_Cathode_2nd_TR_Align_Pick_Up_Flag 20391
#define P_Cathode_2nd_TR_Stack_Down_Flag 20392
#define P_Cathode_NG_TR_Align_Pick_Up_Flag 20393
#define P_Cathode_NG_TR_NG_Place_Down_Flag 20394
#define P_Cathode_2nd_TR_Align_Down_Flag 20395
#define P_Cathode_1st_TR_Align_Pick_Up_Flag 20396
#define P_Cathode_1st_TR_Belt_Down_State_Machine 20397
#define P_Cathode_1st_TR_Belt_Down_Status 20398
#define P_Cathode_1st_TR_Belt_Pick_Up_State_Machine 20399
#define P_Cathode_1st_TR_Belt_Pick_Up_Status 20400
#define P_Cathode_1st_TR_Align_Down_State_Machine 20401
#define P_Cathode_1st_TR_Align_Down_Status 20402
#define P_Cathode_2nd_TR_Align_Pick_Up_State_Machine 20403
#define P_Cathode_2nd_TR_Align_Pick_Up_Status 20404
#define P_Cathode_2nd_TR_Stack_Down_State_Machine 20405
#define P_Cathode_2nd_TR_Stack_Down_Status 20406
#define P_Cathode_NG_TR_Align_Pick_Up_State_Machine 20407
#define P_Cathode_NG_TR_Align_Pick_Up_Status 20408
#define P_Cathode_NG_TR_NG_Place_Down_State_Machine 20409
#define P_Cathode_NG_TR_NG_Place_Down_Status 20410
#define P_Cathode_2nd_TR_Align_Down_State_Machine 20411
#define P_Cathode_2nd_TR_Align_Down_Status 20412
#define P_Cathode_1st_TR_Align_Pick_Up_State_Machine 20413
#define P_Cathode_1st_TR_Align_Pick_Up_Status 20414
#define P_Old_Anode_Belt_ASCII 20415
#define P_Old_Cathode_Belt_ASCII 20416
#define P_Anode_Belt_ASCII 20417
#define P_Cathode_Belt_ASCII 20418
#define P_Check_Vac_Time 20419
#define P_Send_Anode_NG_Code_To_PLC 20420
#define P_Receive_Anode_NG_Code_From_PLC 20421
#define P_Send_Cathode_NG_Code_To_PLC 20422
#define P_Receive_Cathode_NG_Code_From_PLC 20423
#define P_Current_Cell_Memory_Anode_1P 20424
#define P_Current_Cell_Memory_Anode_AT 20425
#define P_Current_Cell_Memory_Anode_2P 20426
#define P_Current_Cell_Memory_Cathode_1P 20427
#define P_Current_Cell_Memory_Cathode_AT 20428
#define P_Current_Cell_Memory_Cathode_2P 20429
#define P_Current_Cell_Memory_Stack_Table 20430
#define P_Current_Cell_Memory_Cathode_NG_TR 20431
#define P_Current_Cell_Memory_Anode_NG_TR 20432
#define P_BTN_Anode_1st_TR_Buffer_Clear 20433
#define P_BTN_Anode_2nd_TR_Buffer_Clear 20434
#define P_BTN_Anode_Align_Buffer_Clear 20435
#define P_BTN_Anode_NG_TR_Buffer_Clear 20436
#define P_BTN_Cathode_1st_TR_Buffer_Clear 20437
#define P_BTN_Cathode_2nd_TR_Buffer_Clear 20438
#define P_BTN_Cathode_Align_Buffer_Clear 20439
#define P_BTN_Cathode_NG_TR_Buffer_Clear 20440
#define P_Old_BTN_Anode_1st_TR_Buffer_Clear 20441
#define P_Old_BTN_Anode_2nd_TR_Buffer_Clear 20442
#define P_Old_BTN_Anode_Align_Buffer_Clear 20443
#define P_Old_BTN_Anode_NG_TR_Buffer_Clear 20444
#define P_Old_BTN_Cathode_1st_TR_Buffer_Clear 20445
#define P_Old_BTN_Cathode_2nd_TR_Buffer_Clear 20446
#define P_Old_BTN_Cathode_Align_Buffer_Clear 20447
#define P_Old_BTN_Cathode_NG_TR_Buffer_Clear 20448
#define P_Send_Anode_NG_Code_Flag 20449
#define P_Send_Cathode_NG_Code_Flag 20450
#define P_Anode_Vision_NG_To_PLC_Flag 20451
#define P_Cathode_Vision_NG_To_PLC_Flag 20452
#define P_Status_Clear_Sheet_Maint_Check 20453
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
#define P_Single_Run_Start_Flag 20454
#define P_Single_Run_Control_State_Machine 20455
#define P_Single_Run_Control_Status 20456
#define P_Single_Run_Execute_Bit 20457
#define P_User_Dry_Run_Mode 20458
#define P_Single_Run_State_Machine 20459
#define P_Single_Run_Status 20460
#define P_Single_Run_Unit 20461
#define P_Single_Run_Evade_Pos_RTN 20462
#define P_Single_Run_Evade_Pos_Check_RTN 20463
#define P_Single_Run_Pos_Rtn1 20464
#define P_Single_Run_Pos_Rtn2 20465
#define P_Single_Run_Motion_Ready_RTN 20466
#define P_Single_Run_Execution_Interlock_RTN 20467
#define P_Single_Run_Coord_Activate_RTN 20468
#define P_Single_Run_Coord_Activate_Check_RTN 20469
#define P_Single_Run_Select_Run_Mode_RTN 20470
#define P_Single_Run_Execution_Run_RTN 20471
#define P_Single_Run_Motion_Ready_State_Machine 20472
#define P_Coord_1 20473
#define P_Coord_2 20474
#define P_Coord_3 20475
#define P_Coord_4 20476
#define P_Final_Roll_Z_Motion_Flag 20477
#define P_Final_Roll_Z_Motion_State_Machine 20478
#define P_Main_Z_Motion_Flag 20479
#define P_Main_Z_Motion_State_Machine 20480
#define P_Single_Run_Mode_Flag 20481
#define P_Cathode_AT_Motion_Flag 20482
#define P_Cathode_Align_Motion_State_Machine 20483
#define P_Anode_AT_Motion_Flag 20484
#define P_Anode_Align_Motion_State_Machine 20485
#define P_Sheet_Paper_Motion_Flag 20486
#define P_Sheet_Paper_Motion_State_Machine 20487
#define P_Cathode_NG_PNP_T_Motion_Flag 20488
#define P_Cathode_NG_PNP_T_Motion_State_Machine 20489
#define P_Cathode_NG_PNP_Z_Motion_Flag 20490
#define P_Cathode_NG_PNP_Z_Motion_State_Machine 20491
#define P_Anode_NG_PNP_T_Motion_Flag 20492
#define P_Anode_NG_PNP_T_Motion_State_Machine 20493
#define P_Anode_NG_PNP_Z_Motion_Flag 20494
#define P_Anode_NG_PNP_Z_Motion_State_Machine 20495
#define P_1st_UND_X_Motion_Flag 20496
#define P_1st_UND_X_Motion_State_Machine 20497
#define P_1st_UND_Z_Motion_Flag 20498
#define P_1st_UND_Z_Motion_State_Machine 20499
#define P_1st_UND_T_Motion_Flag 20500
#define P_1st_UND_T_Motion_State_Machine 20501
#define P_Cathode_Run_Command_Flag 20502
#define P_Anode_Run_Command_Flag 20503
#define P_NG_PNP_Uint_Motion_Flag 20504
#define P_NG_PNP_Uint_State_Machine 20505
#define P_NG_PNP_Motion_Cnt 20506
#define P_NG_PNP_Motion_arr 20507
#define P_Single_Run_Timer 20517
#define P_Single_Run_Align_Timer 20518
#define P_Single_Run_Align_Timer2 20519
#define P_Single_Run_Finall_Roll_Z_Timer 20520
#define P_Single_RuN_MAIN_Z_Timer 20521
#define P_Single_Run_Sheet_Paper_Timer 20522
#define P_Single_Run_Debug_SM 20523
#define P_Error_Monitoring_Count_1 20524
#define P_Error_Monitoring_Count_2 20525
#define P_Error_Monitoring_Count_3 20526
#define P_Error_Monitoring_Count_4 20527
#define P_Error_Monitoring_Count_5 20528
#define P_Old_Single_Run_Mode_Flag 20529
#define P_Old_Current_Mode 20530
#define P_Single_Run_Timebase_Off_RTN 20531
#define P_Single_Run_Stop_State_Machine 20532
#define P_Single_Run_Stop_Status 20533
#define P_Single_Run_Stop_Timer 20534
#define P_Single_Run_Stop_Init_RTN 20535
#define P_Single_Run_Stop_Btn_Chk 20536
#define P_Single_Run_Stop_Command 20537
#define P_Motor_Ready_Poa_Inpos_200um 20538
#define P_Ecat_Parameter_Write_Flag 20539
#define P_Ecat_Parameter_Read_Flag 20540
#define P_Ecat_Each_Parameter_Write_Flag 20541
#define P_Ecat_Slave_Idx 20542
#define P_Ec_Num 20543
#define P_Ecat_Read_Motor_Num 20544
#define P_Ecat_Write_Motor_Num 20545
#define P_Ecat_Parameter_Write_State_Machine 20546
#define P_Ecat_Parameter_Read_State_Machine 20547
#define P_Ecat_Each_Parameter_Write_State_Machine 20548
#define P_Ecat_Read_MNTR 20549
#define P_Ecat_Write_MNTR 20577
#define P_Ecat_Save_MNTR 20605
#define P_Ecat_Error_MNTR 20621
#define P_Ecat_Read_Error_MNTR 20637
#define P_Ecat_Each_Write_Error_MNTR 20653
#define P_Ecat_Write_Status 20669
#define P_Ecat_Read_Status 20670
#define P_Ecat_Each_Write_Status 20671
#define P_Pn000 20672
#define P_Pn001 20692
#define P_Pn00B 20712
#define P_Pn100 20732
#define P_Pn101 20752
#define P_Pn102 20772
#define P_Pn103 20792
#define P_Pn123 20812
#define P_Pn140 20832
#define P_Pn141 20852
#define P_Pn145 20872
#define P_Pn146 20892
#define P_Pn160 20912
#define P_Pn161 20932
#define P_Pn163 20952
#define P_Pn170 20972
#define P_Pn401 20992
#define P_Pn408 21012
#define P_Pn409 21032
#define P_Pn40A 21052
#define P_Pn40C 21072
#define P_Pn40D 21092
#define P_Pn416 21112
#define P_Pn417 21132
#define P_Pn511 21152
#define P_Pn520 21172
#define P_PnB02_Numerator 21192
#define P_PnB02_Denominator 21212
#define P_Align_Plus_Blow_Test 21232
#define P_System_Setting_Flag 21233
#define P_Ecat_Setting_Flag 21234
#define P_Ecat_Activation_State_Machine 21235
#define P_PLC31_Ecat_Retry_Cnt 21236
#define P_Ecat_Connect_Result 21237
#define P_Ecat_Slave_Error 21238
#define P_PWM_AbsPhasePosOffset_Change_State_Machine 21239
#define P_AbsPhasePosOffset_Change_Complete 21240
#define P_PWM_AbsPhasing_Fail 21241
#define P_PWM_AbsPhasing_Complete 21242
#define P_Whole_Stacking_Tack_Time 21243
#define P_Whole_Stacking_Tack_Time_Check 21244
#define P_Whole_Stacking_Tack_Timer_Check_Flag 21245
#define P_Whole_Stacking_Timer_Shift_Status_Machine 21246
#define P_Whole_Stacking_TackTime_Array0 21247
#define P_Whole_Stacking_TackTime_Array1 21248
#define P_Whole_Stacking_TackTime_Array2 21249
#define P_Whole_Stacking_TackTime_Array3 21250
#define P_Whole_Stacking_TackTime_Array4 21251
#define P_Whole_Stacking_TackTime_Array5 21252
#define P_Whole_Stacking_TackTime_Array6 21253
#define P_Whole_Stacking_TackTime_Array7 21254
#define P_Whole_Stacking_TackTime_Array8 21255
#define P_Whole_Stacking_TackTime_Array9 21256
#define P_Whole_Stacking_TackTime_Array10 21257
#define P_First_Stacking_Start 21258
#define P_Last_Stacking_Complete 21259
#define P_Stacking_Tack_Time 21260
#define P_Stacking_Tack_Time_Check 21261
#define P_Stacking_Tack_Timer_Check_Flag 21262
#define P_Stacking_Timer_Shift_Status_Machine 21263
#define P_Cathode_to_Anode_FR_Tack_Time_Check 21264
#define P_Anode_to_Cathode_FR_Tack_Time_Check 21265
#define P_Cathode_to_Anode_FR_Tack_Time_Start 21266
#define P_Anode_to_Cathode_FR_Tack_Time_Start 21267
#define P_Cathode_to_Anode_FR_Tack_Time_Complete 21268
#define P_Anode_to_Cathode_FR_Tack_Time_Complete 21269
#define P_Cathode_to_Anode_FR_Time 21270
#define P_Anode_to_Cathode_FR_Time 21271
#define P_Cathode_to_Anode_FR_Tack_Timer_Check_Flag 21272
#define P_Anode_to_Cathode_FR_Tack_Timer_Check_Flag 21273
#define P_Anode_Align_Table_Time 21274
#define P_Anode_Align_Table_Tack_Time_Check 21275
#define P_Anode_Align_Table_Tack_Timer_Check_Flag 21276
#define P_Anode_Align_Table_Timer_Shift_Status_Machine 21277
#define P_Anode_Align_Tack_Time_Start 21278
#define P_Anode_Align_Tack_Time_Complete 21279
#define P_Cathode_Align_Table_Time 21280
#define P_Cathode_Align_Table_Tack_Time_Check 21281
#define P_Cathode_Align_Table_Tack_Timer_Check_Flag 21282
#define P_Cathode_Align_Table_Timer_Shift_Status_Machine 21283
#define P_Cathode_Align_Tack_Time_Start 21284
#define P_Cathode_Align_Tack_Time_Complete 21285
#define P_Anode_1th_Tack_Time_Start 21286
#define P_Anode_1th_Tack_Time_Complete 21287
#define P_Anode_1th_Time 21288
#define P_Anode_1th_Tack_Time_Check 21289
#define P_Anode_1th_Tack_Timer_Check_Flag 21290
#define P_Anode_1th_Timer_Shift_Status_Machine 21291
#define P_Cathode_1th_Tack_Time_Start 21292
#define P_Cathode_1th_Tack_Time_Complete 21293
#define P_Cathode_1th_Time 21294
#define P_Cathode_1th_Tack_Time_Check 21295
#define P_Cathode_1th_Tack_Timer_Check_Flag 21296
#define P_Cathode_1th_Timer_Shift_Status_Machine 21297
#define P_Anode_2th_Tack_Time_Start 21298
#define P_Anode_2th_Tack_Time_Complete 21299
#define P_Anode_2th_Time 21300
#define P_Anode_2th_Tack_Time_Check 21301
#define P_Anode_2th_Tack_Timer_Check_Flag 21302
#define P_Anode_2th_Timer_Shift_Status_Machine 21303
#define P_Cathode_2th_Tack_Time_Start 21304
#define P_Cathode_2th_Tack_Time_Complete 21305
#define P_Cathode_2th_Time 21306
#define P_Cathode_2th_Tack_Time_Check 21307
#define P_Cathode_2th_Tack_Timer_Check_Flag 21308
#define P_Cathode_2th_Timer_Shift_Status_Machine 21309
#define P_Anode_1th_NG_Tack_Time_Start 21310
#define P_Anode_1th_NG_Tack_Time_Complete 21311
#define P_Anode_1th_NG_Time 21312
#define P_Anode_1th_NG_Tack_Time_Check 21313
#define P_Anode_1th_NG_Tack_Timer_Check_Flag 21314
#define P_Anode_1th_NG_Timer_Shift_Status_Machine 21315
#define P_Cathode_1th_NG_Tack_Time_Start 21316
#define P_Cathode_1th_NG_Tack_Time_Complete 21317
#define P_Cathode_1th_NG_Time 21318
#define P_Cathode_1th_NG_Tack_Time_Check 21319
#define P_Cathode_1th_NG_Tack_Timer_Check_Flag 21320
#define P_Cathode_1th_NG_Timer_Shift_Status_Machine 21321
#define P_Anode_Clamp_Tack_Time_Start 21322
#define P_Anode_Clamp_Tack_Time_Complete 21323
#define P_Anode_Clamp_Time 21324
#define P_Anode_Clamp_Tack_Time_Check 21325
#define P_Anode_Clamp_Tack_Timer_Check_Flag 21326
#define P_Anode_Clamp_Timer_Shift_Status_Machine 21327
#define P_Cathode_Clamp_Tack_Time_Start 21328
#define P_Cathode_Clamp_Tack_Time_Complete 21329
#define P_Cathode_Clamp_Time 21330
#define P_Cathode_Clamp_Tack_Time_Check 21331
#define P_Cathode_Clamp_Tack_Timer_Check_Flag 21332
#define P_Cathode_Clamp_Timer_Shift_Status_Machine 21333
#define P_Final_Roll_X_Timer_Shift_Status_Machine 21334
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array0 21335
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array1 21336
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array2 21337
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array3 21338
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array4 21339
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array5 21340
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array6 21341
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array7 21342
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array8 21343
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array9 21344
#define P_Final_Roll_X_Cathode_to_Anode_TackTime_Array10 21345
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array0 21346
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array1 21347
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array2 21348
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array3 21349
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array4 21350
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array5 21351
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array6 21352
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array7 21353
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array8 21354
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array9 21355
#define P_Final_Roll_X_Anode_to_Cathode_TackTime_Array10 21356
#define P_Pneumatic_Pressure_Unit_Tack_Time_Chk_Timer 21357
#define P_Pneumatic_Pressure_Unit_Tack_Time 21384
#define P_MCC_Anode_Align_NG_Count 21411
#define P_MCC_Cathode_Align_NG_Count 21412
#define P_MCC_Anode_Retry_NG_Count 21413
#define P_MCC_Cathode_Retry_NG_Count 21414
#define P_Discharge_Tact_Time_Arr 21415
#define P_Discharge_Hold_Timer 21427
#define P_Discharge_Hold_Time 21428
#define P_AN_1st_Z_Zero_Angle 21429
#define P_AN_1st_Z_Zero_Length 21430
#define P_Anode_1st_PNP_Z_Crank_Zero_Pos 21431
#define P_Anode_1st_PNP_Z_Crank_real_Move_Pos 21432
#define P_Anode_1st_PNP_Z_Crank_radian 21433
#define P_Anode_1st_PNP_Z_Acos_denominator 21434
#define P_Anode_1st_PNP_Z_Acos_numerator 21435
#define P_Anode_1st_PNP_Z_Crank_Angle 21436
#define P_Anode_1st_PNP_Z_Real_Move_Pos 21437
#define P_Anode_1st_Fwd_Bwd_Rise 21438
#define P_CA_1st_Z_Zero_Angle 21439
#define P_CA_1st_Z_Zero_Length 21440
#define P_Cathode_1st_PNP_Z_Crank_Zero_Pos 21441
#define P_Cathode_1st_PNP_Z_Crank_real_Move_Pos 21442
#define P_Cathode_1st_PNP_Z_Crank_radian 21443
#define P_Cathode_1st_PNP_Z_Acos_denominator 21444
#define P_Cathode_1st_PNP_Z_Acos_numerator 21445
#define P_Cathode_1st_PNP_Z_Crank_Angle 21446
#define P_Cathode_1st_PNP_Z_Real_Move_Pos 21447
#define P_Cathode_1st_Fwd_Bwd_Rise 21448
#define P_AN_2nd_Z_Zero_Angle 21449
#define P_AN_2nd_Z_Zero_Length 21450
#define P_Anode_2nd_PNP_Z_Crank_Zero_Pos 21451
#define P_Anode_2nd_PNP_Z_Crank_real_Move_Pos 21452
#define P_Anode_2nd_PNP_Z_Crank_radian 21453
#define P_Anode_2nd_PNP_Z_Acos_denominator 21454
#define P_Anode_2nd_PNP_Z_Acos_numerator 21455
#define P_Anode_2nd_PNP_Z_Crank_Angle 21456
#define P_Anode_2nd_PNP_Z_Real_Move_Pos 21457
#define P_Anode_2nd_Fwd_Bwd_Rise 21458
#define P_CA_2nd_Z_Zero_Angle 21459
#define P_CA_2nd_Z_Zero_Length 21460
#define P_Cathode_2nd_PNP_Z_Crank_Zero_Pos 21461
#define P_Cathode_2nd_PNP_Z_Crank_real_Move_Pos 21462
#define P_Cathode_2nd_PNP_Z_Crank_radian 21463
#define P_Cathode_2nd_PNP_Z_Acos_denominator 21464
#define P_Cathode_2nd_PNP_Z_Acos_numerator 21465
#define P_Cathode_2nd_PNP_Z_Crank_Angle 21466
#define P_Cathode_2nd_PNP_Z_Real_Move_Pos 21467
#define P_Cathode_2nd_Fwd_Bwd_Rise 21468
#define P_Old_Recipe_Anode_1st_PNP_Z_Ready_Up 21469
#define P_Old_Recipe_Anode_1st_PNP_Z_Belt_Up 21470
#define P_Old_Recipe_Anode_1st_PNP_Z_Belt_Down 21471
#define P_Old_Recipe_Anode_1st_PNP_Z_Align_Up 21472
#define P_Old_Recipe_Anode_1st_PNP_Z_Align_Down 21473
#define P_Old_Recipe_Cathode_1st_PNP_Z_Ready_Up 21474
#define P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Up 21475
#define P_Old_Recipe_Cathode_1st_PNP_Z_Belt_Down 21476
#define P_Old_Recipe_Cathode_1st_PNP_Z_Align_Up 21477
#define P_Old_Recipe_Cathode_1st_PNP_Z_Align_Down 21478
#define P_Old_Recipe_Anode_2nd_PNP_Z_Align_Up 21479
#define P_Old_Recipe_Anode_2nd_PNP_Z_Align_Down 21480
#define P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Up 21481
#define P_Old_Recipe_Anode_2nd_PNP_Z_Stack_Down 21482
#define P_Old_Recipe_Anode_2nd_PNP_Z_Ready_Up 21483
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Up 21484
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Align_Down 21485
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Up 21486
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Stack_Down 21487
#define P_Old_Recipe_Cathode_2nd_PNP_Z_Ready_Up 21488
#define P_PLC19_All_Home_Cmd 21489
#define P_PLC19_All_Home_Status 21490
#define P_PLC19_All_Home_Module_Status 21491
#define P_PLC19_All_Home_State_Machine 21492
#define P_PLC19_All_Home_Seq_Index 21493
#define P_PLC19_All_Home_Self_Index 21494
#define P_PLC19_All_Home_Debug_Edge 21495
#define P_PLC19_All_Home_Set_Mode_Return 21496
#define P_Buffer_Seqdata_All_Home_Array 21497
#define P_PLC19_All_Home_Timer 21527
#define P_PLC19_All_Home_Tact_Time_Array 21528
#define P_PLC19_All_Home_Tact_Time 21548
#define P_All_Home_Module_Error 21549
#define P_Act_All_Home_Complete_Bit 21550
#define P_Module_Act_All_Home_Command_Array 21590
#define P_OLD_Module_Act_All_Home_Command_Array 21630
#define P_Module_Act_All_Home_State_Machine_Array 21670
#define P_Act_All_Home_Old_Time 21710
#define P_Act_ALL_Home_Time_Out_Time 21750
#define P_Act_ALL_Home_Time_Out 21751
#define P_Act_Hold_Complete_Bit 21791
#define P_Module_Act_Hold_Command_Array 21826
#define P_OLD_Module_Act_Hold_Command_Array 21861
#define P_Module_Act_Hold_State_Machine_Array 21896
#define P_Act_Hold_Old_Time 21931
#define P_Act_Hold_Time_Out_Time 21966
#define P_Act_Hold_Time_Out 21967
#define P_First_PNP_T_Wait_Status 22002
#define P_First_PNP_Z_Wait_Status 22003
#define P_First_PNP_Picker_T_Turn_Status 22004
#define P_First_PNP_T_Wait_To_Belt_Status 22005
#define P_First_PNP_Z_Wait_To_Belt_Status 22006
#define P_First_PNP_T_Align_To_Belt_Status 22007
#define P_First_PNP_Z_Align_To_Belt_Status 22008
#define P_First_PNP_Z_Belt_Down_Status 22009
#define P_First_PNP_Z_Belt_Up_Status 22010
#define P_First_PNP_T_Wait_To_Align_Status 22011
#define P_First_PNP_Z_Wait_To_Align_Status 22012
#define P_First_PNP_T_Belt_To_Align_Status 22013
#define P_First_PNP_Z_Belt_To_Align_Status 22014
#define P_First_PNP_Z_Align_Down_Status 22015
#define P_First_PNP_Z_Align_Up_Status 22016
#define P_First_PNP_Vac_On_Status 22017
#define P_First_PNP_Blow_On_Status 22018
#define P_Second_PNP_T_Align_To_Stack_Status 22019
#define P_Second_PNP_Z_Align_To_Stack_Status 22020
#define P_Second_PNP_T_Stack_To_Align_Status 22021
#define P_Second_PNP_Z_Stack_To_Align_Status 22022
#define P_Second_PNP_Z_Align_Down_Status 22023
#define P_Second_PNP_Z_Align_Up_Status 22024
#define P_Second_PNP_Vac_On_Status 22025
#define P_Second_PNP_Blow_On_Status 22026
#define P_NG_PNP_NG_Bos_Status 22027
#define P_NG_PNP_Align_Status 22028
#define P_NG_PNP_Align_Down_Status 22029
#define P_NG_PNP_Align_Up_Status 22030
#define P_NG_PNP_Vac_On_Status 22031
#define P_NG_PNP_Blow_On_Status 22032
#define P_Hold_1st_PNP_Position 22033
#define P_Hold_Module_Error 22034
#define P_Act_Execute_Complete_Bit 22035
#define P_Module_Act_Execute_Command_Array 22047
#define P_OLD_Module_Act_Execute_Command_Array 22059
#define P_Module_Act_Execute_State_Machine_Array 22071
#define P_Act_Execute_Old_Time 22083
#define P_Act_Execute_Time_Out_Time 22095
#define P_Act_Execute_Time_Out 22096
#define P_Execute_Module_Error 22108
#define P_Execute_First_Sepa_Total_Tact_Time 22109
#define P_Current_JR_Thickness_mm 22110
#define P_Current_Jelly_Roll_Thinckness_mm_Send_Enable_Flag 22111
#define P_Stack_Table_NG_Flag 22112
#define P_Suspend_Discharge_Cell_Out_Restart 22113
#define P_Jelly_Roll_OK_Count 22114
#define P_Jelly_Roll_NG_Count 22115
#define P_Jelly_Roll_Total_Count 22116
#define P_Jelly_Roll_ID 22117
#define P_Jelly_Roll_Prod_Count 22118
#define P_Jelly_Roll_Recipe_Count 22119
#define P_Current_Cell_Memory_Jelly_Roll 22120
#define P_Real_Stacking_Host_ID_Count 22121
#define P_VISION_PLC10_Anode_Align_Start 22122
#define P_VISION_PLC10_Cathode_Align_Start 22123
#define P_Stack_Table_NG_Count 22124
#define P_Stack_PMAC_NG_Code 22125
#define P_Stack_Vision_NG_Code_IN_Timer 22126
#define P_Discharge_Waiting_Flag 22127
#define P_ARC_Flag 22128
#define P_Discharge_Queue_Complete_Flag 22129
#define P_Shared_Discharge_Cmd 22130
#define P_Shared_Discharge_State_Machine 22131
#define P_Discharge_Dont_Stop_Point_Flag 22132
#define P_1st_Discharge_State 22133
#define P_Discharge_DIO_Trg 22134
#define P_Data_Parsing_Flag 22135
#define P_Memory_Discharge_Data 22136
#define P_Prev_Sepa_Stack_Completed_Flag 22137
#define P_First_Sepa_Mode_Status 22138
#define P_First_Sepa_Mode_Flag 22139
#define P_Discharge_Unloader_Handover_Timer 22140
#define P_Discharge_Unloader_Handover_Time 22141
#define P_B_1st_to_3rd_Discharge_cmd 22142
#define P_B_1st_to_3rd_Discharge_State_Machine 22143
#define P_3rd_Discharge_Status 22144
#define P_Buffer_Mode_Module_Status_Sequence 22145
#define P_EXECUTE_Status_Prod_Sequence 22175
#define P_Execute_First_Sepa_Mode_Cmd 22205
#define P_Execute_First_Sepa_Mode_Status 22206
#define P_Execute_First_Sepa_Mode_Module_Status 22207
#define P_Execute_First_Sepa_Mode_State_Machine 22208
#define P_Execute_First_Sepa_Mode_Seq_Index 22209
#define P_Execute_First_Sepa_Mode_Self_Index 22210
#define P_Execute_First_Sepa_Mode_Debug_Edge 22211
#define P_Buffer_Seqdata_Execute_First_Sepa_Mode_Array 22212
#define P_Execute_First_Sepa_Mode_Timer 22242
#define P_Execute_First_Sepa_Mode_Tact_Time_Array 22243
#define P_Execute_First_Sepa_Mode_Tact_Time 22263
#define P_Execute_1st_Sepa_Status 22264
#define P_Suspend_Discharge_Cmd 22265
#define P_Suspend_Discharge_Status 22266
#define P_Suspend_Discharge_State_Machine 22267
#define P_Suspend_Discharge_Seq_Index 22268
#define P_Suspend_Discharge_Self_Index 22269
#define P_Discharge_Seq_InterLock_Delay_Time 22270
#define P_Discharge_Seq_InterLock_Flag 22300
#define P_Buffer_Seqdata_Discharge_Array 22330
#define P_Suspend_Discharge_Timer 22360
#define P_Suspend_Discharge_Tact_Time_Array 22361
#define P_Suspend_Discharge_Tact_Time 22381
#define P_Suspend_Discharge_1st_Unloader_JR_Grip 22382
#define P_Suspend_ARC_Cmd 22383
#define P_Suspend_ARC_Status 22384
#define P_Suspend_ARC_State_Machine 22385
#define P_Suspend_ARC_Seq_Index 22386
#define P_Suspend_ARC_Self_Index 22387
#define P_Suspend_ARC_Manual_Occur_Flag 22388
#define P_ARC_Seq_InterLock_Delay_Time 22389
#define P_ARC_Seq_InterLock_Flag 22419
#define P_Buffer_Seqdata_ARC_Array 22449
#define P_Suspend_ARC_Timer 22479
#define P_Suspend_ARC_Tact_Time_Array 22480
#define P_Suspend_ARC_Tact_Time 22500
#define P_Suspend_Anode_1TR_Cell_Supply_Cmd 22501
#define P_Suspend_Anode_1TR_Cell_Supply_Status 22502
#define P_Suspend_Anode_1TR_Cell_Supply_State_Machine 22503
#define P_Suspend_Anode_1TR_Cell_Supply_Seq_Index 22504
#define P_Suspend_Anode_1TR_Cell_Supply_Self_Index 22505
#define P_Suspend_Anode_1TR_Cell_Supply_Module_Status 22506
#define P_Anode_1TR_Cell_Supply_Seq_InterLock_Delay_Time 22507
#define P_Anode_1TR_Cell_Supply_Seq_InterLock_Flag 22537
#define P_Buffer_Seqdata_Anode_1TR_Cell_Supply_Array 22567
#define P_Suspend_Anode_1TR_Cell_Supply_Timer 22597
#define P_Suspend_Anode_1TR_Cell_Supply_Tact_Time_Array 22598
#define P_Suspend_Anode_1TR_Cell_Supply_Tact_Time 22618
#define P_Hold_Exist_Insp_Cmd 22619
#define P_Hold_Exist_Insp_Status 22620
#define P_Hold_Exist_Insp_Module_Status 22621
#define P_Hold_Exist_Insp_State_Machine 22622
#define P_Hold_Exist_Insp_Seq_Index 22623
#define P_Hold_Exist_Insp_Self_Index 22624
#define P_Hold_Exist_Insp_Debug_Edge 22625
#define P_Buffer_Seqdata_Hold_Exist_Insp_Array 22626
#define P_Hold_Exist_Insp_Timer 22656
#define P_Hold_Exist_Insp_Tact_Time_Array 22657
#define P_Hold_Exist_Insp_Tact_Time 22677
#define P_Hold_Remove_NG_PNP_Cmd 22678
#define P_Hold_Remove_NG_PNP_Status 22679
#define P_Hold_Remove_NG_PNP_Module_Status 22680
#define P_Hold_Remove_NG_PNP_State_Machine 22681
#define P_Hold_Remove_NG_PNP_Seq_Index 22682
#define P_Hold_Remove_NG_PNP_Self_Index 22683
#define P_Hold_Remove_NG_PNP_Debug_Edge 22684
#define P_Buffer_Seqdata_Hold_Remove_NG_PNP_Array 22685
#define P_Hold_Remove_NG_PNP_Timer 22715
#define P_Hold_Remove_NG_PNP_Tact_Time_Array 22716
#define P_Hold_Remove_NG_PNP_Tact_Time 22736
#define P_PLC01_Hold_Remove_NG_PNP_Sub_Flag 22737
#define P_PLC01_Hold_Remove_NG_PNP_Sub_State_Machine 22738
#define P_PLC01_Hold_Remove_NG_PNP_Sub_Status 22739
#define P_Hold_Remove_Align_Cmd 22740
#define P_Hold_Remove_Align_Status 22741
#define P_Hold_Remove_Align_Module_Status 22742
#define P_Hold_Remove_Align_State_Machine 22743
#define P_Hold_Remove_Align_Seq_Index 22744
#define P_Hold_Remove_Align_Self_Index 22745
#define P_Hold_Remove_Align_Debug_Edge 22746
#define P_Buffer_Seqdata_Hold_Remove_Align_Array 22747
#define P_Hold_Remove_Align_Timer 22777
#define P_Hold_Remove_Align_Tact_Time_Array 22778
#define P_Hold_Remove_Align_Tact_Time 22798
#define P_PLC01_Hold_Remove_Align_Sub_Flag 22799
#define P_PLC01_Hold_Remove_Align_Sub_State_Machine 22800
#define P_PLC01_Hold_Remove_Align_Sub_Status 22801
#define P_Hold_Remove_2TR_Cmd 22802
#define P_Hold_Remove_2TR_Status 22803
#define P_Hold_Remove_2TR_Module_Status 22804
#define P_Hold_Remove_2TR_State_Machine 22805
#define P_Hold_Remove_2TR_Seq_Index 22806
#define P_Hold_Remove_2TR_Self_Index 22807
#define P_Hold_Remove_2TR_Debug_Edge 22808
#define P_Buffer_Seqdata_Hold_Remove_2TR_Array 22809
#define P_Hold_Remove_2TR_Timer 22839
#define P_Hold_Remove_2TR_Tact_Time_Array 22840
#define P_Hold_Remove_2TR_Tact_Time 22860
#define P_Hold_Supply_1TR_Cmd 22861
#define P_Hold_Supply_1TR_Status 22862
#define P_Hold_Supply_1TR_Module_Status 22863
#define P_Hold_Supply_1TR_State_Machine 22864
#define P_Hold_Supply_1TR_Seq_Index 22865
#define P_Hold_Supply_1TR_Self_Index 22866
#define P_Hold_Supply_1TR_Debug_Edge 22867
#define P_Buffer_Seqdata_Hold_Supply_1TR_Array 22868
#define P_Hold_Supply_1TR_Timer 22898
#define P_Hold_Supply_1TR_Tact_Time_Array 22899
#define P_Hold_Supply_1TR_Tact_Time 22919
#define P_PLC01_Hold_Supply_1TR_Memory_RTN 22920
#define P_PLC01_Hold_Supply_1TR_Judge_Flag 22921
#define P_PLC01_Hold_Supply_1TR_Judge_State_Machine 22922
#define P_PLC01_Hold_Supply_1TR_Judge_Status 22923
#define P_Plate_1TR_Supply_Module_Judge_Bit 22924
#define P_Hold_Supply_Align_Cmd 22925
#define P_Hold_Supply_Align_Status 22926
#define P_Hold_Supply_Align_Module_Status 22927
#define P_Hold_Supply_Align_State_Machine 22928
#define P_Hold_Supply_Align_Seq_Index 22929
#define P_Hold_Supply_Align_Self_Index 22930
#define P_Hold_Supply_Align_Debug_Edge 22931
#define P_Buffer_Seqdata_Hold_Supply_Align_Array 22932
#define P_Hold_Supply_Align_Timer 22962
#define P_Hold_Supply_Align_Tact_Time_Array 22963
#define P_Hold_Supply_Align_Tact_Time 22983
#define P_Hold_Supply_2TR_Cmd 22984
#define P_Hold_Supply_2TR_Status 22985
#define P_Hold_Supply_2TR_Module_Status 22986
#define P_Hold_Supply_2TR_State_Machine 22987
#define P_Hold_Supply_2TR_Seq_Index 22988
#define P_Hold_Supply_2TR_Self_Index 22989
#define P_Hold_Supply_2TR_Debug_Edge 22990
#define P_Buffer_Seqdata_Hold_Supply_2TR_Array 22991
#define P_Hold_Supply_2TR_Timer 23021
#define P_Hold_Supply_2TR_Tact_Time_Array 23022
#define P_Hold_Supply_2TR_Tact_Time 23042
#define P_Hold_Semi_Run_Pos_Move_Cmd 23043
#define P_Hold_Semi_Run_Pos_Move_Status 23044
#define P_Hold_Semi_Run_Pos_Move_Module_Status 23045
#define P_Hold_Semi_Run_Pos_Move_State_Machine 23046
#define P_Hold_Semi_Run_Pos_Move_Seq_Index 23047
#define P_Hold_Semi_Run_Pos_Move_Self_Index 23048
#define P_Hold_Semi_Run_Pos_Move_Debug_Edge 23049
#define P_Buffer_Seqdata_Hold_Semi_Run_Pos_Move_Array 23050
#define P_Hold_Semi_Run_Pos_Move_Timer 23080
#define P_Hold_Semi_Run_Pos_Move_Tact_Time_Array 23081
#define P_Hold_Semi_Run_Pos_Move_Tact_Time 23101
#define P_Act_Complete_Bit 23102
#define P_Act_Old_Time 23168
#define P_Act_Delay_Time 23234
#define P_Act_Suspend_Time_Out_Time 23300
#define P_Act_Time_Out 23301
#define P_Test_Sungmin_Flag 23367
#define P_Discharge_Possibility_Bit 23368
#define P_HOLD_Exist_Possibility_Bit 23434
#define P_HOLD_NG_Remove_Possibility_Bit 23500
#define P_HOLD_Align_Remove_Possibility_Bit 23566
#define P_HOLD_2TR_Remove_Possibility_Bit 23632
#define P_HOLD_1TR_Supply_Possibility_Bit 23698
#define P_HOLD_Align_Supply_Possibility_Bit 23764
#define P_HOLD_2TR_Supply_Possibility_Bit 23830
#define P_HOLD_Semi_Run_Pos_Possibility_Bit 23896
#define P_Module_Act_Command_Array 23962
#define P_OLD_Module_Act_Command_Array 24028
#define P_Module_Act_State_Machine_Array 24094
#define P_Module_Act_State_Machine_Error_Array 24160
#define P_Suspend_Discharge_Module_Status 24226
#define P_Suspend_Discharge_To_Execute_Flag 24227
#define P_Suspend_Discharge_Complete_Flag 24228
#define P_First_Unloader_Stack_Up_Status 24229
#define P_First_Unloader_Stack_FWD_Status 24230
#define P_First_Unloader_Grip_Cell_Status 24231
#define P_First_Unloader_Stack_BWD_Wait_Status 24232
#define P_First_Unloader_Stack_BWD_Status 24233
#define P_First_Unloader_Stack_Down_Status 24234
#define P_First_Unloader_Avoid_Status 24235
#define P_First_Unloader_Turn_Status 24236
#define P_First_Unloader_Handover_Status 24237
#define P_Cathode_Clamp_OFF_Status 24238
#define P_Final_Roll_Discharge_Status 24239
#define P_Final_Roll_Stack_Pos_Status 24240
#define P_Final_Roll_Stack_Up_Pos_Status 24241
#define P_Main_Z_Init_Pos_Status 24242
#define P_Sheet_Paper_BWD_Status 24243
#define P_Discharge_Vision_DIO_RTN 24244
#define P_Discharge_Sub_RTN 24245
#define P_Discharge_NG_Code_Report_RTN 24246
#define P_Individual_RTN 24247
#define P_Suspend_Discharge_Last_Run_Bit 24248
#define P_Suspend_Discharge_JR_Result_RTN 24249
#define P_ARC_Buffer_Jog_Speed 24250
#define P_Selected_Spool_Number 24251
#define P_ARC_Home_Check_RTN 24252
#define P_Suspend_ARC_Module_Status 24253
#define P_Not_Selected_Spool_Radius 24254
#define P_Not_Selected_Spool_Circumference 24255
#define P_Sensor_To_Sepa_Curr_Distance_mm 24256
#define P_Passive_D_One_Degree_AD_Value 24281
#define P_After_ARC_Rotate_Distance 24282
#define P_Stack_Vision_NG_Code_Time_Over 24283
#define P_Suspend_Discharge_Resume_Flag 24284
#define P_Suspend_Discharge_Resume_Complete 24285
#define P_Suspend_Discharge_Pause_Flag 24286
#define P_Suspend_Monitor_ 24287
#define P_Flag_Stack_Work_Host_ID 24297
#define P_First_Sepa_Stack_Align_OK_PMAC_Flag 24298
#define P_Sepa_Run_Completed_Status_Machine 24299
#define P_Discharge_Debug_Edge 24300
#define P_Suspend_Discharge_Debug_Address 24301
#define P_Suspend_Discharge_Debug_Value 24306
#define P_Discharge_Sepa_Cutter_Time_Out_State_Machine 24311
#define P_Old_Suspend_Discharge_Seq_Index 24312
#define P_Discharge_Debug_Index_1 24313
#define P_Discharge_Debug_Index_2 24314
#define P_Discharge_Debug_Index_3 24315
#define P_Discharge_Debug_Index_4 24316
#define P_ARC_Debug_Edge 24317
#define P_Suspend_ARC_Debug_Address 24318
#define P_Suspend_ARC_Debug_Value 24323
#define P_Old_Suspend_ARC_Seq_Index 24328
#define P_ARC_Debug_Index_1 24329
#define P_ARC_Debug_Index_2 24330
#define P_ARC_Debug_Index_3 24331
#define P_ARC_Debug_Index_4 24332
#define P_ARC_Ready_Flag 24333
#define P_Suspend_Cutter_Heating_Time 24335
#define P_Suspend_Cutter_Heating_Timer 24336
#define P_An_1TR_Supply_Debug_Edge 24337
#define P_Suspend_An_1TR_Supply_Debug_Address 24338
#define P_Suspend_An_1TR_Supply_Debug_Value 24343
#define P_Old_Suspend_An_1TR_Supply_Seq_Index 24348
#define P_An_1TR_Supply_Debug_Index_1 24349
#define P_An_1TR_Supply_Debug_Index_2 24350
#define P_An_1TR_Supply_Debug_Index_3 24351
#define P_An_1TR_Supply_Debug_Index_4 24352
#define P_Suspend_Supply_Index 24353
#define P_Suspend_Supply_Index_2nd 24354
#define P_Anode_Suspend_Supply_Complete 24355
#define P_Suspend_Supply_Pause_Flag 24363
#define P_Suspend_Supply_Resume_Flag 24364
#define P_Supply_Module_Status 24365
#define P_Suspend_Anode_1TR_Supply_Complete_Flag 24366
#define P_Suspend_Discharge_Module_Error 24367
#define P_Suspend_ARC_Module_Error 24368
#define P_Suspend_1st_Supply_Error 24369
#define P_Discharge_Seq_Data 24370
#define P_Suspend_Discharging_Popup_Flag 24371
#define P_Suspend_Discharge_FR_Unclamp_Error_Popup_Flag 24372
#define P_Suspend_Discharge_Cathode_Align_Retry_Cal_Error_Popup_Flag 24373
#define P_Suspend_Discharge_Anode_Align_Retry_Cal_Error_Popup_Flag 24374
#define P_Suspend_Discharge_FR_Discharge_Pos_Error_Popup_Flag 24375
#define P_Suspend_Discharge_1st_Unloader_Grip_OFF_Error_Popup_Flag 24376
#define P_Suspend_Discharge_1st_Unloader_Up_Error_Popup_Flag 24377
#define P_Suspend_Discharge_1st_Unloader_FWD_Error_Popup_Flag 24378
#define P_Suspend_Discharge_FR_Clamp_Error_Popup_Flag 24379
#define P_Suspend_Discharge_Sepa_Cutter_Heating_Error_Popup_Flag 24380
#define P_Suspend_Discharge_1st_Unloader_Grip_Cell_Pos_Error_Popup_Flag 24381
#define P_Suspend_Discharge_1st_Unloader_Grip_ON_Error_Popup_Flag 24382
#define P_Suspend_Discharge_Sheet_Paper_BWD_Error_Popup_Flag 24383
#define P_Suspend_Discharge_Cathode_Clamp_OFF_Error_Popup_Flag 24384
#define P_Suspend_Discharge_Sepa_Cutter_FWD_Error_Popup_Flag 24385
#define P_Suspend_Discharge_Sheet_Paper_Vacuum_ON_Error_Popup_Flag 24386
#define P_Suspend_Discharge_Sepa_Cutter_BWD_Error_Popup_Flag 24387
#define P_Suspend_Discharge_1st_Unloader_BWD_Wait_Pos_Error_Popup_Flag 24388
#define P_Suspend_Discharge_1st_Unloader_BWD_Error_Popup_Flag 24389
#define P_Suspend_Discharge_1st_Unloader_Stack_Down_Error_Popup_Flag 24390
#define P_Suspend_Discharge_FR_Stack_Pos_Error_Popup_Flag 24391
#define P_Suspend_Discharge_After_Action_Init_Error_Popup_Flag 24392
#define P_Suspend_Discharge_1st_Unloader_Avoid_Pos_Error_Popup_Flag 24393
#define P_Suspend_Discharge_1st_2nd_Unloader_Handover_Chk_Error_Popup_Flag 24394
#define P_Suspend_Discharge_1st_Unloader_Handover_Pos_Error_Popup_Flag 24395
#define P_Suspend_Discharge_2nd_3rd_Unloader_Grip_Request_Error_Popup_Flag 24396
#define P_Suspend_Discharge_1st_Unloader_Wait_Pos_Error_Popup_Flag 24397
#define P_Suspend_ARC_Manual_ARC_Active_Popup_Flag 24398
#define P_Suspend_ARC_Auto_ARC_Active_Popup_Flag 24399
#define P_Suspend_ARC_Pre_Act_Popup_Flag 24400
#define P_Suspend_ARC_Dancer_Close_Popup_Flag 24401
#define P_Suspend_ARC_Use_Plate_FWD_Popup_Flag 24402
#define P_Suspend_ARC_Replace_Plate_Blow_ON_Popup_Flag 24403
#define P_Suspend_ARC_Use_Plate_Clamp_Popup_Flag 24404
#define P_Suspend_ARC_Use_Plate_Cutter_FWD_Popup_Flag 24405
#define P_Suspend_ARC_Use_Plate_Cutter_BWD_Popup_Flag 24406
#define P_Suspend_ARC_Use_Plate_Unclamp_Popup_Flag 24407
#define P_Suspend_ARC_Use_Plate_BWD_Popup_Flag 24408
#define P_Suspend_ARC_Replace_Plate_Blow_OFF_Popup_Flag 24409
#define P_Suspend_ARC_Dancer_Open_Popup_Flag 24410
#define P_Suspend_ARC_Spool_Change_Popup_Flag 24411
#define P_Suspend_ARC_Post_Act_Popup_Flag 24412
#define P_Suspend_ARC_Previous_Spool_Remain_Winding_Popup_Flag 24413
#define P_Suspend_Discharge_First_Address 24414
#define P_Suspend_ARC_First_Address 24415
#define P_Status_Stop_Ready_Pos_Move 24416
#define P_Cycle_Stop_Stauts 24417
#define P_Cycle_Stop_Status_Machine 24418
#define P_Cycle_Stop_Flag 24419
#define P_Speed_Origin_rtn 24420
#define P_Speed_rtn 24421
#define P_NG_PNP_Z_Move_rtn 24422
#define P_NG_PNP_Z_Move_Check_rtn 24423
#define P_NG_PNP_T_Move_rtn 24424
#define P_NG_PNP_T_Move_Check_rtn 24425
#define P_2nd_Z_Move_rtn 24426
#define P_2nd_Z_Move_Check_rtn 24427
#define P_2nd_T_Move_rtn 24428
#define P_2nd_T_Move_Check_rtn 24429
#define P_Stack_Judgement_Memory 24430
#define P_Stop_Cycle_Stop_Move_Status 24431
#define P_STOP_Initial_Process_Status 24432
#define P_Stopping_CycleStop_Init_Flag 24433
#define P_Sepa_Timing 24434
#define P_Old_Trigger_PLC0 24435
#define P_Mode_Command 24436
#define P_Current_Mode 24437
#define P_MOde_Num 24438
#define P_Command_Depth 24443
#define P_In_Position 24448
#define P_Last_Cycle_Command 24453
#define P_Mode_Command_Buffer 24458
#define P_Mode_Command_Wait_Count 24459
#define P_Old_Mode_Command 24460
#define P_Slave1_Anode_Run_Motion_Array 24461
#define P_Slave2_Anode_Run_Motion_Array 24561
#define P_Slave3_Anode_Run_Motion_Array 24661
#define P_Slave4_Anode_Run_Motion_Array 24761
#define P_Slave5_Anode_Run_Motion_Array 24861
#define P_Slave6_Anode_Run_Motion_Array 24961
#define P_Slave7_Anode_Run_Motion_Array 25061
#define P_Slave8_Anode_Run_Motion_Array 25161
#define P_Slave9_Anode_Run_Motion_Array 25261
#define P_Slave10_Anode_Run_Motion_Array 25361
#define P_Slave15_Anode_Run_Motion_Array 25461
#define P_Slave16_Anode_Run_Motion_Array 25561
#define P_Slave17_Anode_Run_Motion_Array 25661
#define P_Slave18_Anode_Run_Motion_Array 25761
#define P_Slave19_Anode_Run_Motion_Array 25861
#define P_Slave1_Cathode_Run_Motion_Array 25961
#define P_Slave2_Cathode_Run_Motion_Array 26061
#define P_Slave3_Cathode_Run_Motion_Array 26161
#define P_Slave4_Cathode_Run_Motion_Array 26261
#define P_Slave5_Cathode_Run_Motion_Array 26361
#define P_Slave15_Cathode_Run_Motion_Array 26461
#define P_Slave6_Cathode_Run_Motion_Array 26561
#define P_Slave7_Cathode_Run_Motion_Array 26661
#define P_Slave8_Cathode_Run_Motion_Array 26761
#define P_Slave9_Cathode_Run_Motion_Array 26861
#define P_Slave10_Cathode_Run_Motion_Array 26961
#define P_Slave16_Cathode_Run_Motion_Array 27061
#define P_Slave17_Cathode_Run_Motion_Array 27161
#define P_Slave18_Cathode_Run_Motion_Array 27261
#define P_Slave19_Cathode_Run_Motion_Array 27361
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
#define P_Anode_NG_Unit_Status 27461
#define P_Cathode_NG_Unit_Status 27462
#define P_ParsingRtn 27463
#define P_CurPosData 27464
#define P_Hold_MNTR_Supply_1st 27465
#define P_TimeOutNumb 27466
#define P_PosRtn 27467
#define P_MotionRtn 27468
#define P_CmdData 27469
#define P_Interval 27470
#define P_Cont_Ret 27471
#define P_Cur_Idx 27472
#define P_NextID 27473
#define P_Cur_Size 27474
#define P_Hold_Exist_Insp 27475
#define P_Hold_Remove_NG_PNP 27476
#define P_Hold_Remove_Align 27477
#define P_Hold_Remove_2TR 27478
#define P_Hold_Supply_1TR 27479
#define P_Hold_Supply_Align 27480
#define P_Hold_Supply_2TR 27481
#define P_Hold_Semi_Run 27482
#define P_Hold_NG_PNP_Remove 180
#define P_Hold_Remove_2nd 182
#define P_Hold_Supply_1st 183
#define P_Hold_Supply_2nd 185
#define P_Hold_Data_process 186
#define P_Hold_Semi_Run_Enable_Pos 187
#define P_Hold_Existence_Insp 188
#define P_Hold_1st_Belt_Move 189
#define P_Hold_Motion 190
#define P_Hold_Data_process_State_Machine 27483
#define P_Hold_Align_Remove_State_Machine 27484
#define P_Hold_2nd_Remove_State_Machine 27485
#define P_Hold_Supply_1st_State_Machine 27486
#define P_Hold_Supply_2nd_State_Machine 27487
#define P_Hold_Existence_Insp_State_Machine 27488
#define P_Hold_NG_PNP_Remove_State_Machine 27489
#define P_Hold_Data_Process_Complete 27490
#define P_Hold_Semi_Run_Enable_Pos_State_Machine 27491
#define P_HOLD_Existence_Insp_Queue_State_Machine 27492
#define P_Hold_Stop_Existence_Insp_STEP 27493
#define P_SubMaster_Status_Err 27494
#define P_Data_Process_Rtn 27495
#define P_Hold_Set_Trigger 27496
#define P_Hold_Get_Trigger 27497
#define P_Anode_2nd_Data 27498
#define P_Anode_Align_Data 27499
#define P_Hold_Remove_Step 27500
#define P_HList_Head_Idx 27501
#define P_Hold_Next_ID 27502
#define P_HCmd_List 27503
#define P_Hold_Data_Value 27523
#define P_Comb_Bitwise 27524
#define P_Target_Cmd 27525
#define P_Temp_Bit 27526
#define P_Get_ErrorCode 27527
#define P_Rtn_Code 27528
#define P_Complete_Hold_Bit 27529
#define P_HoldMtion_Flag 27530
#define P_Ret_BitWise 27531
#define P_NotEnough_GetSpace 27532
#define P_NotEnough_SetSpace 27533
#define P_Check_SetSpace 27534
#define P_Hold_Get_Data 27535
#define P_Err_NextID_Flag 27536
#define P_Elec_Bit 27537
#define P_MotionData 27538
#define P_DataList 27539
#define P_Hold_Data_Err 27544
#define P_Cur_PosX1 27554
#define P_Cur_PosZ1 27555
#define P_Cur_PosX2 27556
#define P_Cur_PosZ2 27557
#define P_Dest_PosX 27558
#define P_Dest_PosZ 27559
#define P_FailToParse 27560
#define P_CurTrigger 27561
#define P_TimeOutTrigger 27562
#define P_CalcTime 27563
#define P_Cycle_Count 27564
#define P_MotionTimeOutFlag 27565
#define P_Set_Data 27566
#define P_Rtn 27567
#define P_CurPosTestBit 27568
#define P_Hold_Anode_Pause_CHK 27569
#define P_Hold_Cathode_Pause_CHK 27570
#define P_Surface_Complete_To_Hold 27571
#define P_Hold_Motion_Arr 27572
#define P_Hold_Pause_Trg 27592
#define P_From_Staring_Flag 27593
#define P_Hold_Existence_Insp_Enqueue_Flag 27594
#define P_Hold_Rtn 27595
#define P_Debug_Existence_Insp_STEP 27596
#define P_Hold_Align_Sheet_CHK 27597
#define P_Hold_Cathode_Exception_Empty_Flag 27598
#define P_Hold_Anode_Exception_Empty_Flag 27599
#define P_HOLD_Hold_Process_State_Machine 27600
#define P_Hold_Stop_Sheet_Process_STEP 27601
#define P_Hold_Debug_Sheet_Process_STEP 27602
#define P_Hold_Stop_Point 27603
#define P_Hold_CHK 27604
#define P_Hold_Test 27605
#define P_Anode_1st_Motion_Complete 27606
#define P_Anode_2nd_Motion_Complete 27607
#define P_Anode_NG_PNP_Motion_Complete 27608
#define P_Cathode_1st_Motion_Complete 27609
#define P_Cathode_2nd_Motion_Complete 27610
#define P_Cathode_NG_PNP_Motion_Complete 27611
#define P_Anode_1st_Picker_Motion_Complete 27612
#define P_Cathode_1st_Picker_Motion_Complete 27613
#define P_individual_return 27614
#define P_individual_return2 27615
#define P_HoldCurPosBit1 27616
#define P_HoldCurPosBit2 27617
#define P_Parsing_Status 27618
#define P_Sel_Obj 27619
#define P_Sel_Elec 27620
#define P_Error 27621
#define P_Vision_FirstSepa_Complete 27622
#define P_NG_PNP_Turn_TM 27623
#define P_NG_PNP_Turn_TS 27624
#define P_NG_PNP_Turn_TA 27625
#define P_NG_PNP_Up_TM 27626
#define P_NG_PNP_Up_TS 27627
#define P_NG_PNP_Up_TA 27628
#define P_NG_PNP_Down_TM 27629
#define P_NG_PNP_Down_TS 27630
#define P_NG_PNP_Down_TA 27631
#define P_NG_PNP_Vac_Time 27632
#define P_NG_PNP_Blow_Time 27633
#define P_Slow_NG_Mode_Btn 27634
#define P_HOLD_Memory_Tower_Offset 27635
#define P_Hold_Pause_Use 27636
#define P_Hold_Err_MNTR 27637
#define P_Hold_Err_Data_Save 27641
#define P_Hold_Err_Action_Data_Save 27649
#define P_Hold_Motion_Err_Chk 27657
#define P_Hold_Memory_Tower_Err_Pos 27658
#define P_Hold_Motion_TimeOut 27673
#define P_Hold_Data_OK 27674
#define P_VISION_TRG_PLC4_AnodeSurface_Ins_Shoot 27675
#define P_VISION_TRG_PLC4_CathodeSurface_Ins_Shoot 27676
#define P_Memory_Tower_Test 27677
#define P_Temp_Run_Mode 27678
#define P_Data_Idx 27679
#define P_Get_Data_Idx 27680
#define P_HOLD_Data_Err_Queue 27681
#define P_HOLD_Data_Err_State_Machine 27682
#define P_HOLD_Err_Set_Data 27683
#define P_HOLD_Err_Save 27684
#define P_Sepa_Run_Completed_Flag 27685
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
#define P_Buffer_Seqdata_MSA_Array 27686
#define P_Buffer_Seqdata_Align_Take_Off_Array 27736
#define P_VISION_MSA_Align_Module_Complete_Bit 27786
#define P_Module_Manual_MSA_Act_Command_Array 27886
#define P_OLD_Module_Manual_MSA_Act_Command_Array 27986
#define P_Module_MSA_Act_State_Machine_Array 28086
#define P_VISION_MSA_Seq_Stopping_Point 28186
#define P_Align_Take_Off_Module_Complete_Bit 28219
#define P_Module_Manual_Align_Take_Off_Act_Command_Array 28319
#define P_OLD_Module_Manual_Align_Take_Off_Act_Command_Array 28419
#define P_Module_Align_Take_Off_Act_State_Machine_Array 28519
#define P_Log_Data_Y 28619
#define P_Log_Data_M 28620
#define P_Log_Data_D 28621
#define P_Log_Data_H 28622
#define P_Log_Data_m 28623
#define P_Log_Data_s 28624
#define P_MNTR_End_Index 28625
#define P_BG_CPLC_Running_MNTR 50
#define P_RTI_CPLC_Running_MNTR 51
#define P_Log_Start_Flag 170
#define P_Log_Document_Remove_Flag 171
#define P_Sepa_ID_Change_Flag 172
#define P_USB_Register 173
#define P_Cur_Line_Check 175
#define P_Cur_Line_Check_Init 176
#define P_Buffer_Judge_Trg 28626
#define P_Hold_Pass 28636
#define P_PLC01_Queue_MNTR 28637
#define P_PLC01_Total_Step_Flag 28652
#define P_PLC02_Total_Step_Flag 28653
#define P_PLC014_Total_Step_Flag 28654
#define P_PLC02_Total_Step_Flag2 28655
#define P_Vac_Pass 28656
#define P_Vision_Pass_Exisitence 28657
#define P_Vision_Pass_Empty 28658
#define P_Vision_Pass_FirstSepa 28659
#define P_Vision_Pass_Stack_Inspection 28660
#define P_ULD_Home_Pass 28661
#define P_Clamp_Cell_Down_Use 28662
#define P_FR_Clamp_Use_Test 28663
#define P_Door_Interlock_Use_Flag 28664
#define P_PLC01_Exe_Is_Ena_Step_Flag 28665
#define P_PLC01_Exe_Fist_Sepa_Step_Flag 28675
#define P_PLC01_Exe_Prod_Step_Flag 28685
#define P_PLC01_HOLD_Insp_Step_Flag 28690
#define P_PLC01_HOLD_Main_Step_Flag 28700
#define P_PLC01_Sus_Discharge_Step_Flag 28715
#define P_PLC01_Sus_ARC_Step_Flag 28725
#define P_PLC01_STOP_Init_Step_Flag 28735
#define P_PLC01_STOP_Cycle_ST_Step_Flag 28745
#define P_PLC02_Exe_Module_First_Sepa_Step_Flag 28760
#define P_PLC02_Sus_Module_Discharge_Step_Flag 28761
#define P_PLC02_Sus_Module_ARC_Step_Flag 28762
#define P_PLC02_Sus_Module_1TR_Supply_Step_Flag 28763
#define P_PLC02_HOLD_Module_Insp_Step_Flag 28764
#define P_PLC02_HOLD_Module_Remove_NGPNP_Step_Flag 28765
#define P_PLC02_HOLD_Module_Remove_Align_Step_Flag 28766
#define P_PLC02_HOLD_Module_Remove_2TR_Step_Flag 28767
#define P_PLC02_HOLD_Module_Supply_1TR_Step_Flag 28768
#define P_PLC02_HOLD_Module_Supply_Align_Step_Flag 28769
#define P_PLC02_HOLD_Module_Supply_2TR_Step_Flag 28770
#define P_PLC02_HOLD_Module_SemiRun_Pos_Step_Flag 28771
#define P_PLC14_STOP_Module_Cycle_Stop_Step_Flag 28772
#define P_PLC02_Discharge_MNTR 28773
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
#define P_Error_Index_Number 28774
#define P_ECAT_MNTR_Bit 28775
#define P_Local_MNTR_Bit 28776
#define P_Clamp_Motion_VER1 28777
#define P_CA_DR_Ta 28778
#define P_CA_DR_Ts 28779
#define P_CA_DR_Tm 28780
#define P_CA_DR_Td 28781
#define P_CA_DR_Tsd 28782
#define P_AN_DR_Ta 28783
#define P_AN_DR_Ts 28784
#define P_AN_DR_Tm 28785
#define P_AN_DR_Td 28786
#define P_AN_DR_Tsd 28787
#define P_First_Sepa_1st_Driving_Move 28788
#define P_AN_Cam_Total_Time 28789
#define P_CA_Cam_Total_Time 28790
#define P_Dry_Run_BTN 28791
#define P_Home_Angle_Offset_change_Bit 28792
#define P_Z_Var 28793
#define P_No1_Recipe_Pos_IL 28794
#define P_No2_Recipe_Pos_IL 28847
#define P_No3_Recipe_Pos_IL 28900
#define P_No4_Recipe_Pos_IL 28953
#define P_No5_Recipe_Pos_IL 29006
#define P_No6_Recipe_Pos_IL 29059
#define P_No7_Recipe_Pos_IL 29112
#define P_No8_Recipe_Pos_IL 29165
#define P_No9_Recipe_Pos_IL 29218
#define P_No10_Recipe_Pos_IL 29271
#define P_Recipe_POS_Interock_M 29324
#endif
#endif
#endif //_PP_PROJ_H_
