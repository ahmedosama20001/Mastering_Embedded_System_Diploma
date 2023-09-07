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
int US_get_distance_random ( int l , int r , int count) ;

STATE_define(CA_waiting)
{
	/* State Name */
	CA_state_ID = CA_waiting ;

	/* State Action */
	CA_speed = 0 ; // DC Motor(CA_speed) = 0

	/* Event Check */
	// US_get_distance(CA_distance)

	CA_distance = US_get_distance_random(45 , 55 ,1);
	(CA_distance <= CA_thershold)? (CA_State = STATE(CA_waiting)) : (CA_State = STATE(CA_Driving));
	printf("CA_Waiting State : distance = %d Speed = %d \n",CA_distance , CA_speed);
}

STATE_define(CA_Driving)
{

	/* State Name */
	CA_state_ID = CA_Driving ;

	/* State Action */
	CA_speed = 30 ; // DC Motor(CA_speed) = 0

	/* Event Check */
	// US_get_distance(CA_distance)
	CA_distance = US_get_distance_random(45 , 55 ,1);
	(CA_distance <= CA_thershold)? (CA_State = STATE(CA_waiting)) : (CA_State = STATE(CA_Driving));
	printf("CA_Waiting State : distance = %d Speed = %d \n",CA_distance , CA_speed);
}

int US_get_distance_random ( int l , int r , int count)
{
	int i ;
	for (i=0 ; i<count ; i++)
	{
		int rand_num = (rand() % (r-l +1)) +l ;
		return rand_num ;
	}
}

