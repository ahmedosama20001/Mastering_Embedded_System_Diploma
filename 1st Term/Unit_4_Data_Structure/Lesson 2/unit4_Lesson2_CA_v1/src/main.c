/*
 ============================================================================
 Name        : main.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include "CA.h"


void setup()
{
	// init all the drivers
	// init IRQ..
	// init HAL US_Driver DC_Driver
	// init BLOCK
	// Set States pointer for each Block
	CA_State = STATE(CA_waiting);
}

void main()
{
	volatile int d ;
	setup();
	while(1)
	{
		// call state for each block
		CA_State() ;
		// delay
		for (d = 0; d < 1000; d++) ;
	}
}
