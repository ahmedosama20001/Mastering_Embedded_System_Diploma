/*
 ============================================================================
 Name        : unit4_Lesson2_US_v1.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include "state.h"
#include "US.h"

/* Variables*/
int US_distance = 0;

/*State Pointer to Function */
void (*US_State)();
int US_get_distance_random ( int l , int r , int count) ;

void US_init()
{
	/* init UltraSonic Driver */
	printf("US_init\n");
}


STATE_define(US_busy)
{
	/* State Name */
	US_state_ID = US_busy ;

	/* State Action */
	US_distance = US_get_distance_random(45 , 55 ,1);
	printf("US_Waiting State : distance = %d \n",US_distance);
	US_Set_distance(US_distance);
	US_State = STATE(US_busy);
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

