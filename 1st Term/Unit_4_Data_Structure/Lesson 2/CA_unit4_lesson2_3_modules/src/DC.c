/*
 ============================================================================
 Name        : unit4_Lesson2_DC_v1.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include "state.h"
#include "DC.h"

/* Variables*/
int DC_speed = 0 ;


/*State Pointer to Function */
void (*DC_State)();

void DC_init()
{
	/* init PWM */
	printf("DC_init\n");
}

void DC_motor (int s)
{
	DC_speed = s;
	DC_State = STATE(DC_busy);
	printf("CA -----speed = %d -----> DC\n" , DC_speed);

}


STATE_define(DC_idle)
{
	/* State Name */
	DC_state_ID = DC_idle ;

	/* State Action */
	// Call PWM to make speed = DC_speed

	printf("DC_idle State : Speed = %d \n", DC_speed);
}

STATE_define(DC_busy)
{

	/* State Name */
	DC_state_ID = DC_busy ;

	/* State Action */
	// Call PWM to make speed = DC_speed

	DC_State = STATE(DC_idle);
	printf("DC_busy State :  Speed = %d \n", DC_speed);
}

