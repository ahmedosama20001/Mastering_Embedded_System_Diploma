/*
 ============================================================================
 Name        : FIFO.h
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#ifndef FIFO_H_
#define FIFO_H_
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


/* User Configuration*/
/** Select the element type (uint8_t , uint26_t , uint32_t , ...) **/
#define element_type uint8_t
/** Create buffer **/
#define width 5
element_type uart_buffer[width];

/* FIFO data type */
typedef struct
{
	unsigned int length;
	unsigned int count ;
	element_type* base ;
	element_type* head;
	element_type* tail ;
}FIFO_Buf_t;

typedef enum
{
	FIFO_no_error,
	FIFO_full,
	FIFO_empty,
	FIFO_Null
}FIFO_Buf_Status;

/* FIFO APIs */
FIFO_Buf_Status FIFO_init(FIFO_Buf_t* fifo , element_type* buf , uint32_t length);
FIFO_Buf_Status FIFO_enqueue(FIFO_Buf_t* fifo , element_type item);
FIFO_Buf_Status FIFO_dequeue(FIFO_Buf_t* fifo , element_type* item);
FIFO_Buf_Status FIFO_IS_FULL(FIFO_Buf_t* fifo);
void FIFO_Print(FIFO_Buf_t* fifo);



#endif /* FIFO_H_ */
