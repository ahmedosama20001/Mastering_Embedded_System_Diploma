/*
 * main_Algorithm.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: AHMED OSAMA
 */

#ifndef MAIN_ALGORITHM_H_
#define MAIN_ALGORITHM_H_

#include "state.h"

/* Define States */
enum
{
	Low_Pressure,
	High_Pressure

}main_algorithm_state_ID;

/*State Pointer to Function */
extern void (*main_Algorithm_State)();

void Set_Pressure_Value(int value);

/* Declare States Function main_Algorithm */
STATE_define(Low_Pressure);
STATE_define(High_Pressure);



#endif /* MAIN_ALGORITHM_H_ */
