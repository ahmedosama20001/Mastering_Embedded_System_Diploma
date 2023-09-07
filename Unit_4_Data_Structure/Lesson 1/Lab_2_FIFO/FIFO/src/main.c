/*
 ============================================================================
 Name        : main.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "FIFO.h"

void main()
{
	FIFO_Buf_t FIFO_UART ;
	element_type i , temp ;
	if(FIFO_init(&FIFO_UART,uart_buffer ,5)== FIFO_no_error)
		printf("FIFO init -------> Done\n");
	for(i=0 ; i<7 ; i++)
	{
		printf("FIFO Enqueue (%x) \n" ,i);
		if(FIFO_enqueue(&FIFO_UART , i)== FIFO_no_error)
			printf("\tFIFO enqueue -------> Done\n");
		else
			printf("\tFIFO enqueue -------> Failed\n");
	}
	FIFO_Print(&FIFO_UART);

	if(FIFO_dequeue(&FIFO_UART , &temp)== FIFO_no_error)
		printf("FIFO dequeue %x -------> Done\n",temp);
	if(FIFO_dequeue(&FIFO_UART , &temp)== FIFO_no_error)
		printf("FIFO dequeue %x -------> Done\n",temp);

	FIFO_Print(&FIFO_UART);
}
