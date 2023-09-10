/*
 ============================================================================
 Name        : unit4_Lesson2_US_v1.h
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#ifndef US_H_
#define US_H_

#include "state.h"
#include "stdio.h"
#include "stdlib.h"

/* Define States */
enum
{
	US_busy
}US_state_ID;

/* Declare States Function US */
STATE_define(US_busy);


void US_init();
/*State Pointer to Function */
extern void (*US_State)();


#endif /* US_H_ */
