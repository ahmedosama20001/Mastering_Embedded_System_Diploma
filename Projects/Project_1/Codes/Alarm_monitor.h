/*
 * Alarm_monitor.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: AHMED OSAMA
 */

#ifndef ALARM_MONITOR_H_
#define ALARM_MONITOR_H_

#include "state.h"

/* Define States */
enum
{
	alarm_monitor_ON,
	alarm_monitor_OFF,
	alarm_monitor_waiting
}alarm_monitor_state_ID;

/*State Pointer to Function */
extern void (*Alarm_monitor_State)();

void High_Pressure_Detected();

/* Declare States Function Alarm_monitor */
STATE_define(alarm_monitor_ON);
STATE_define(alarm_monitor_OFF);
STATE_define(alarm_monitor_waiting);

#endif /* ALARM_MONITOR_H_ */
