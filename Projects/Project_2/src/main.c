/*
 ============================================================================
 Name        : Project_2.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "Project_2.h"
#define width 50
Student_data_t uart_buffer[width];
/** Create buffer **/


int main(void)
{
	FIFO_Buf_t FIFO_UART ;
	if(FIFO_init(&FIFO_UART,uart_buffer ,50)== FIFO_no_error)
		DPRINTF("FIFO init -------> Done\n");
	char temp_text[50];
	while(1)
	{
		DPRINTF("\n==========***==========***==========");
		DPRINTF("\n ===# Choose from the following options #=== \n");
		DPRINTF("\n\t1:=# Add Student Manually #=");
		DPRINTF("\n\t2:=# Delete Student #=");
		DPRINTF("\n\t3:=# Search With Roll Number #=");
		DPRINTF("\n\t4:=# Search With First Name #=");
		DPRINTF("\n\t5:=# Search With Courses #=");
		DPRINTF("\n\t6:=# Count Students #=");
		DPRINTF("\n\t7:=# Update Student #=");
		DPRINTF("\n\t8:=# Add_From_File #=");
		DPRINTF("\n\t9:=# Show All Students");
		DPRINTF("\nEnter an Option : ");
		gets(temp_text);
		DPRINTF("\n==========***==========***==========");
		switch(atoi(temp_text))
		{
		case 1:
			Add_Student_Manually(&FIFO_UART);
			break;
		case 2:
			Delete_Student_By_Roll(&FIFO_UART);
			break;
		case 3:
			Find_Student_By_Roll(&FIFO_UART);
			break;
		case 4:
			Find_Student_By_First_Name(&FIFO_UART);
			break;
		case 5:
			Find_Student_By_Course_ID(&FIFO_UART);
			break;
		case 6:
			Total_Student_Number(&FIFO_UART);
			break;
		case 7:
			Update_Student_By_Roll(&FIFO_UART);
			break;
		case 8:
			Add_Student_From_File(&FIFO_UART);
			break;
		case 9:
			Show_All_Students(&FIFO_UART);
			break;
		default:
			DPRINTF("\n=====!!! wrong option !!!=====");
			break;
		}
	}
	return 0;
}
