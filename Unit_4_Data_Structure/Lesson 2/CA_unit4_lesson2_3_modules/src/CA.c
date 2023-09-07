/*
 ============================================================================
 Name        : unit4_Lesson2_CA_v1.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include "state.h"
#include "CA.h"

/* Variables*/
int CA_speed = 0 ;
int CA_distance = 0;
int CA_thershold = 50;

/*State Pointer to Function */
void (*CA_State)();


void US_Set_distance(int d)
{
	CA_distance = d ;
	(CA_distance <= CA_thershold)? (CA_State = STATE(CA_waiting)) : (CA_State = STATE(CA_Driving));
	printf("US -----distance = %d -----> CA\n" , CA_distance);

}

STATE_define(CA_waiting)
{
	/* State Name */
	CA_state_ID = CA_waiting ;
	printf("CA_Waiting State : distance = %d Speed = %d \n",CA_distance , CA_speed);

	/* State Action */
	CA_speed = 0 ; // DC Motor(CA_speed) = 0
	DC_motor (CA_speed);
}

STATE_define(CA_Driving)
{

	/* State Name */
	CA_state_ID = CA_Driving ;
	printf("CA_Waiting State : distance = %d Speed = %d \n",CA_distance , CA_speed);

	/* State Action */
	CA_speed = 30 ; // DC Motor(CA_speed) = 0
	DC_motor (CA_speed);
}

