/*
 * main_Algorithm.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: AHMED OSAMA
 */

#include "main_Algorithm.h"
#include "driver.h"
#include "Alarm_monitor.h"

void (*main_Algorithm_State)();

int pressure = 0 ;
int threshold =20 ;

void Set_Pressure_Value(int value)
{
	if (value > threshold )
	{
		main_Algorithm_State = STATE(High_Pressure);
	}
	else
	{
		main_Algorithm_State = STATE(Low_Pressure);
	}
}

STATE_define(Low_Pressure)
{
	/* State name */
	main_algorithm_state_ID = Low_Pressure ;
	/*  State Action */
	pressure = getPressureVal();
	Set_Pressure_Value(pressure);
}

STATE_define(High_Pressure)
{
	/* State name */
	main_algorithm_state_ID = High_Pressure ;
	/*  State Action */
	High_Pressure_Detected();
	pressure = getPressureVal();
	Set_Pressure_Value(pressure);
}


