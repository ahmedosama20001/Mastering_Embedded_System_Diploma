/*
 * Pressure_Sensor.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: AHMED OSAMA
 */

#include "driver.h"
#include "Pressure_Sensor.h"
#include "main_Algorithm.h"

int Pressure_val = 0;
int sensor_Pull_time = 100 ;

void Pressure_Sensor_init()
{
	/* Initiate Pressure Sensor Function */
	//printf("init Pressure Sensor ");
}

void (*Pressure_Sensor_State)();

STATE_define(Pressure_Sensor_waiting)
{
	/* State name */
	Pressure_Sensor_state_ID = Pressure_Sensor_Reading ;
	/* State Action */
	Delay(sensor_Pull_time);
	Pressure_Sensor_State = STATE(Pressure_Sensor_Reading);
}

STATE_define(Pressure_Sensor_Reading)
{
	/* State name */
	Pressure_Sensor_state_ID = Pressure_Sensor_Reading;
	/* State Action */
	Pressure_val = getPressureVal();
	Set_Pressure_Value(Pressure_val);
	Pressure_Sensor_State = STATE(Pressure_Sensor_waiting);
}


