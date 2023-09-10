/*
 ============================================================================
 Name        : unit4_Lesson2_CA_v1.h
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#ifndef CA_H_
#define CA_H_

#include "state.h"
#include "stdio.h"
#include "stdlib.h"

/* Define States */
enum
{
	CA_waiting,
	CA_Driving
}CA_state_ID;

/* Declare States Function CA */
STATE_define(CA_waiting);
STATE_define(CA_Driving);

/*State Pointer to Function */
extern void (*CA_State)();


#endif /* CA_H_ */
