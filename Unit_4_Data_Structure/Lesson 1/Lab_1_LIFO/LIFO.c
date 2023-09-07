/*
 ============================================================================
 Name        : LIFO.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : LIFO Buffer
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "LIFO.h"


LIFO_Status LIFO_Add_item (LIFO_Buf_t* lifo_buf , unsigned int item)
{
	/* check LIFO if valid or not */
	if(!lifo_buf->base || !lifo_buf->head )
		return LIFO_Null ;

	/* check LIFO if full or not */
	//if(lifo_buf->head >= ((lifo_buf->base) + (lifo_buf->length * 4)))
	if(lifo_buf->count == lifo_buf->length)
		return LIFO_full;

	/* Add value */
	*(lifo_buf->head)= item ;
	lifo_buf->head++ ;
	lifo_buf->count++;

	return LIFO_no_error ;

}

LIFO_Status LIFO_get_item (LIFO_Buf_t* lifo_buf , unsigned int* item)
{
	/* check LIFO if valid or not */
	if(!lifo_buf->base || !lifo_buf->head )
		return LIFO_Null ;

	/* check LIFO if empty or not */
	if(lifo_buf->count == 0)
		return LIFO_empty ;

	/* Get value */
	lifo_buf->head-- ;
	*item = *(lifo_buf->head);
	lifo_buf->count--;
	return LIFO_no_error ;
}

LIFO_Status LIFO_init (LIFO_Buf_t* lifo_buf , unsigned int* buf , unsigned int length)
{
	if(buf == NULL)
		return LIFO_Null;

	lifo_buf->base =buf ;
	lifo_buf->head =buf ;
	lifo_buf->length =length ;
	lifo_buf->count =0 ;
	return LIFO_no_error ;
}
