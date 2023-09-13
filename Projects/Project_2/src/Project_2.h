/*
 * Project_2.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: AHMED OSAMA
 */

#ifndef PROJECT_2_H_
#define PROJECT_2_H_

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#define DPRINTF(...)    {fflush(stdout);\
						fflush(stdin);\
						printf(__VA_ARGS__);\
						fflush(stdout);\
						fflush(stdin);}

/* User Configuration*/
/** Select the element type (uint8_t , uint26_t , uint32_t , ...) **/
#define element_type uint8_t

//element_type uart_buffer[width];

/* Student information */
typedef struct
{
	char First_name[50];
	char Last_name [50];
	int ID;
	float GPA ;
	int course_ID[50];
}Student_data_t;

/* FIFO data type */
typedef struct
{
	unsigned int length;
	unsigned int count ;
	Student_data_t* base ;
	Student_data_t* head;
	Student_data_t* tail ;
}FIFO_Buf_t;

typedef enum
{
	FIFO_no_error,
	FIFO_full,
	FIFO_empty,
	FIFO_Null
}FIFO_Buf_Status;



/* FIFO APIs */
FIFO_Buf_Status FIFO_init(FIFO_Buf_t* fifo , Student_data_t* buf , uint32_t length);
FIFO_Buf_Status FIFO_enqueue(FIFO_Buf_t* fifo , Student_data_t item);
FIFO_Buf_Status FIFO_dequeue(FIFO_Buf_t* fifo , Student_data_t* item);
FIFO_Buf_Status FIFO_IS_FULL(FIFO_Buf_t* fifo);
void FIFO_Print(FIFO_Buf_t* fifo);

/* -------------------------------------------------------- */

/*DATA BASE APIs */
FIFO_Buf_Status Add_Student_Manually(FIFO_Buf_t *fifo);
FIFO_Buf_Status Add_Student_From_File(FIFO_Buf_t *fifo);
FIFO_Buf_Status Find_Student_By_Roll(FIFO_Buf_t *fifo);
Student_data_t* Find_The_Roll(FIFO_Buf_t *fifo , int num_ID);
FIFO_Buf_Status Find_Student_By_First_Name(FIFO_Buf_t *fifo);
FIFO_Buf_Status Find_Student_By_Course_ID(FIFO_Buf_t *fifo);
FIFO_Buf_Status Total_Student_Number(FIFO_Buf_t *fifo);
FIFO_Buf_Status Delete_Student_By_Roll(FIFO_Buf_t *fifo);
FIFO_Buf_Status Update_Student_By_Roll(FIFO_Buf_t *fifo);
FIFO_Buf_Status Show_All_Students(FIFO_Buf_t *fifo);

#endif /* PROJECT_2_H_ */
