/*
 * Alarm_Actuator.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: AHMED OSAMA
 */

#ifndef ALARM_ACTUATOR_H_
#define ALARM_ACTUATOR_H_


#include "state.h"

/* Define States */
enum
{
	alarm_ON,
	alarm_OFF
}alarm_state_ID;

/*State Pointer to Function Alarm_Actuator */
extern void (*Alarm_Actuator_State)();

void Alarm_Actuator_init();
void Alarm_Actuator_ON();
void Alarm_Actuator_OFF();

/* Declare States Function  */
STATE_define(alarm_ON);
STATE_define(alarm_OFF);

#endif /* ALARM_ACTUATOR_H_ */
