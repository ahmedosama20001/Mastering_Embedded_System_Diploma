/*
 * Alarm_Actuator.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: AHMED OSAMA
 */
#include "driver.h"
#include "Alarm_Actuator.h"

void (*Alarm_Actuator_State)();

void Alarm_Actuator_init()
{
	/* Initiate Alarm_Actuator_init function */
	//printf("Alarm_Actuator_init");
}

void Alarm_Actuator_ON()
{
	Alarm_Actuator_State = STATE(alarm_ON);
}

void Alarm_Actuator_OFF()
{
	Alarm_Actuator_State = STATE(alarm_OFF);
}

STATE_define(alarm_ON)
{
	/* State name */
	alarm_state_ID = alarm_ON ;
	/* State Action */
	Set_Alarm_actuator(0) ;
}

STATE_define(alarm_OFF)
{
	/* State name */
	alarm_state_ID = alarm_OFF ;
	/* State Action */
	Set_Alarm_actuator(1) ;
}
