/*
 ============================================================================
 Name        : FIFO.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "FIFO.h"

FIFO_Buf_Status FIFO_init(FIFO_Buf_t* fifo , element_type* buf , uint32_t length)
{
	if(buf == NULL)
		return FIFO_Null ;

	fifo->base =buf ;
	fifo->head =buf ;
	fifo->tail =buf ;
	fifo->length =length ;
	fifo->count =0 ;
	return FIFO_no_error ;
}

FIFO_Buf_Status FIFO_enqueue(FIFO_Buf_t* fifo , element_type item)
{
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_Null ;
	//  Check FIFO is FULL
	if(FIFO_IS_FULL(fifo)== FIFO_full)
		return FIFO_full ;
	*(fifo->head)= item ;
	fifo->count++;
	/* Circular FIFO */
	if(	fifo->head == (fifo->base +(fifo->length * sizeof(element_type))))
		fifo->head = fifo->base ;
	else
		fifo->head++ ;
	return FIFO_no_error ;
}

FIFO_Buf_Status FIFO_dequeue(FIFO_Buf_t* fifo , element_type* item)
{
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_Null ;
	/* Check FIFO is empty */
	if(fifo->count == 0)
		return FIFO_empty ;
	*item = *(fifo->tail) ;
	fifo->count-- ;
	if(	fifo->tail == (fifo->base +(fifo->length * sizeof(element_type))))
		fifo->tail = fifo->base ;
	else
		fifo->tail++ ;

	return FIFO_no_error ;
}

FIFO_Buf_Status FIFO_IS_FULL(FIFO_Buf_t* fifo)
{
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_Null ;
	if(fifo->count == fifo->length)
		return FIFO_full ;
	return FIFO_no_error ;
}

void FIFO_Print(FIFO_Buf_t* fifo)
{
	element_type* temp ;
	int i ;
	if(fifo->count == 0)
		printf("FIFO is empty\n");
	else
	{
		temp = fifo->tail ;
		printf("\n======*FIFO_Print*======\n");
		for(i=0 ; i<fifo->count ; i++)
		{
			printf("\t %X \n" , *temp);
			temp++;
		}
		printf("=====####======\n");
	}

}

