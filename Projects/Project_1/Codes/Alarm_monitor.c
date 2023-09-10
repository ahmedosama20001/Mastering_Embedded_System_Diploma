/*
 * Alarm_monitor.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: AHMED OSAMA
 */

#include "driver.h"
#include "Alarm_Actuator.h"
#include "Alarm_monitor.h"

int Timer = 60 ;

void High_Pressure_Detected()
{
	Alarm_monitor_State = STATE(alarm_monitor_ON) ;
}

void (*Alarm_monitor_State)();

STATE_define(alarm_monitor_ON)
{
	/* State name */
	alarm_monitor_state_ID = alarm_monitor_ON ;
	/* State Action */
	Alarm_Actuator_ON();
	Alarm_monitor_State = STATE(alarm_monitor_waiting);
}

STATE_define(alarm_monitor_OFF)
{
	/* State name */
	alarm_monitor_state_ID = alarm_monitor_OFF ;
	/* State Action */
	Alarm_Actuator_OFF();
	Alarm_monitor_State = STATE(alarm_monitor_OFF);
}

STATE_define(alarm_monitor_waiting)
{
	/* State name */
	alarm_monitor_state_ID = alarm_monitor_waiting ;
	/* State Action */
	Delay(Timer);
	Alarm_monitor_State = STATE(alarm_monitor_OFF);
}
