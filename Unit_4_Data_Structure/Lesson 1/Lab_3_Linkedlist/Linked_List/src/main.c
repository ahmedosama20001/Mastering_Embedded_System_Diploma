/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: AHMED OSAMA
 */


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "Linked_List.h"

int main()
{
	char temp_text[40];
	while(1)
	{
		DPRINTF("\n==========***==========");
		DPRINTF("\n ===# Choose from the following options #=== \n");
		DPRINTF("\n\t 1: Add Student ");
		DPRINTF("\n\t 2: Delete Student ");
		DPRINTF("\n\t 3: View Students ");
		DPRINTF("\n\t 4: Delete All ");
		DPRINTF("\n\t 5: Get Student");
		DPRINTF("\n\t 6: Length of List");
		DPRINTF("\n\t 7: Middle Student");
		DPRINTF("\n\t 8: Reverse");
		DPRINTF("\n ===# Enter your choice #=== ");

		gets(temp_text);
		DPRINTF("\n==========***==========");


		switch(atoi(temp_text))
		{
			case 1:
				AddStudent();
				break ;
			case 2:
				delete_student();
				break;
			case 3:
				view_students();
				break ;
			case 4:
				DeleteAll();
				break;
			case 5:
				Get_student();
				break;
			case 6:
				List_Lenght();
				break;
			case 7:
				Get_middle();
				break;
			case 8:
				Reverse();
				break;
			default:
				DPRINTF("===# Wrong Option #===\n");
				break ;
		}

	}
	return 0 ;
}
