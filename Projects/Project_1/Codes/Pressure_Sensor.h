/*
 * Pressure_Sensor.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: AHMED OSAMA
 */

#ifndef PRESSURE_SENSOR_H_
#define PRESSURE_SENSOR_H_

#include "state.h"

/* Define States */
enum
{
	Pressure_Sensor_waiting,
	Pressure_Sensor_Reading

}Pressure_Sensor_state_ID;

/*State Pointer to Function */
extern void (*Pressure_Sensor_State)();

void Pressure_Sensor_init();
void Set_Pressure_Value(int value);

/* Declare States Function Pressure_Sensor */
STATE_define(Pressure_Sensor_Reading);
STATE_define(Pressure_Sensor_waiting);

#endif /* PRESSURE_SENSOR_H_ */
