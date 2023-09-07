/*
 ============================================================================
 Name        : CA_unit4_lesson2_3_modules.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "US.h"
#include "DC.h"
#include "CA.h"


void setup()
{
	// init all the drivers
	// init IRQ..
	// init HAL US_Driver DC_Driver
	// init BLOCK
	DC_init();
	US_init();
	// Set States pointer for each Block
	CA_State = STATE(CA_waiting);
	US_State = STATE(US_busy);
	DC_State = STATE(DC_idle);
}

void main()
{
	volatile int d ;
	setup();
	while(1)
	{
		// call state for each block
		US_State();
		CA_State();
		DC_State();
		// delay
		for (d = 0; d < 1000; d++) ;
	}
}

