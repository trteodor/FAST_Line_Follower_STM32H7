/*
 *  Created on: 10.10.2021
 *      Author: Teodor
 */

#ifndef HM10Commands_H_
#define HM10Commands_H_

#include "main.h"

/*Realization is awful but work ;) */
/* I know how do it better now, but it required time...*/

typedef enum
{
	//General App view
	DrivingStartCommand = 'I',
	DrivingStopCommand = 'U',
	/* @@@@@ @@@@ "Basic" Screen in Mobile App */
	StartSendActualPID_AndCalcMotor_Data =  'P',
	StopSendActualPID_AndCalcMotor_Data = 'O',
	SendActualPidSettings = '>',
	SetPid_Kp = '+',
	SetPid_Kd = '-',
	SetPid_Ki = '(',
	PID_KdProbeTime ='w', //setpidKdProbeTime
	SetBaseMotorSpeedValue = ')',
	/* @@@@@ @@@@ Commands for Save data to .txt file on Phone */
	ButtonMapState='q',
	SaveDataVal1 = 147,
	SaveDataVal2 = 134,
	StopSavingData = 146,
	/* @@@@@ @@@@ Sensor Screen in Mobile App */
	StartSendActualSensorData ='B',
	StopSendActualSensorData ='V',
	StopSendActualSensorDataAndSendActualErrorWeights ='~',
	/* Value from mobile App -  Weights of Error for each sensor */
	SensorErW_1 = '*',
	SensorErW_2 = '&',
	SensorErW_3 = '^',
	SensorErW_4 = '%',
	SensorErW_5 = '$',
	SensorErW_6 = '#',
	SensorErW_7 = '@',
	SensorErWMax = '!',
	/* Value from mobile App - when the line is detected*/
	S1_LineIsDetV = 167,
	S2_LineIsDetV = 'H',
	S3_LineIsDetV = 'Q',
	S4_LineIsDetV = 'W',
	S5_LineIsDetV = '?',
	S6_LineIsDetV = 'L',
	S7_LineIsDetV = 'T',
	S8_LineIsDetV = 'Y',
	/*@@@@@ @@@@  Mobile App Screen "Adv" */
	PrintActualDataFor_Adv_ScreenToM_App ='X',
	IrSensor ='j', //?
	LedMode ='J', //?
	TryDetectEndLineMark='g',
	ReservAdvScr ='h',


}HM10BleCommand_t;





/* Send to mobile app commands*/
#define PID_ActualValue "a"
#define LeftMotorSpeed "s"
#define RightMotorSpeed "d"
#define ActualPositionError "ERROR:"
#define PID_Ki_Sum "f"

#define PID_KpComm "l"
#define PID_KdComm "k"
#define BaseMotorSpeed_d "m"
#define PID_KdProbeTime_d "w"

//Labels to send when End Lap Mark Detected or Button Stop Clicked
#define Lap_TimeVar_d "f"
#define Av_SpeedVar_d "y"
#define DistanceVal_d "e"

/* Send Error Weights for each sensor to mobile App commands*/
#define S_LineErWToM_App_1 "*"
#define S_LineErWToM_App_2 "&"
#define S_LineErWToM_App_3 "^"
#define S_LineErWToM_App_4 "_"
#define S_LineErWToM_App_5 "$"
#define S_LineErWToM_App_6 "#"
#define S_LineErWToM_App_7 "@"
#define S_LineErWToM_App_Max "!"
/* Send actual value when the line is detected to mobile App*/
#define S_Line_1_DetectValueToMobileAPP "§"
#define S_Line_2_DetectValueToMobileAPP "H"
#define S_Line_3_DetectValueToMobileAPP "Q"
#define S_Line_4_DetectValueToMobileAPP "W"
#define S_Line_5_DetectValueToMobileAPP "?"
#define S_Line_6_DetectValueToMobileAPP "L"
#define S_Line_7_DetectValueToMobileAPP "T"
#define S_Line_8_DetectValueToMobileAPP "Y"
/* Actual line sensor data value*/
#define S_Line_1_Data_ToM_App_Comm "CZ1:"
#define S_Line_2_Data_ToM_App_Comm "CZ2:"
#define S_Line_3_Data_ToM_App_Comm "CZ3:"
#define S_Line_4_Data_ToM_App_Comm "CZ4:"
#define S_Line_5_Data_ToM_App_Comm "CZ5:"
#define S_Line_6_Data_ToM_App_Comm "CZ6:"
#define S_Line_7_Data_ToM_App_Comm "CZ7:"
#define S_Line_8_Data_ToM_App_Comm "CZ8:"
#define ActualPositionError_SS "ERROR:"
/* Screen Map to File*/
#define ButtonMapState_d "q"


/*@@@@@ @@@@  Mobile App Screen "Adv" (same as commands)*/
#define IrSensor_d "j" //?
#define LedMode_d "J" //?
#define TextBoxTryDetEndLineMark "g" //?
#define ReservAdvScr_d "h"

//UNUSED: totally now
// ` t





#endif /* HM10Commands_H_ */
