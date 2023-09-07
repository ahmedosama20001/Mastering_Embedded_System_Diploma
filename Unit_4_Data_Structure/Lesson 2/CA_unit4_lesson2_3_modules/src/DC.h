/*
 ============================================================================
 Name        : unit4_Lesson2_CA_v1.h
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#ifndef DC_H_
#define DC_H_

#include "state.h"
#include "stdio.h"
#include "stdlib.h"

/* Define States */
enum
{
	DC_idle,
	DC_busy
}DC_state_ID;

/* Declare States Function DC */
STATE_define(DC_idle);
STATE_define(DC_busy);

void DC_init();

/*State Pointer to Function */
extern void (*DC_State)();


#endif /* DC_H_ */
