/*
 ============================================================================
 Name        : Linked_List.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "Linked_List.h"


struct Sstudent* gpFirstStudent = NULL;

void AddStudent()
{
	struct Sstudent* pNewStudent ;
	struct Sstudent* pLastStudent ;
	char temp_text[40];
	/* Check if the list is empty or not */
	if (gpFirstStudent == NULL) // if the list empty
	{
		/* create new record */
		pNewStudent = (struct Sstudent *) malloc (sizeof(struct Sstudent));

		/* Assign it to gpFirstStudent */
		gpFirstStudent = pNewStudent ;
	}

	else // if not empty
	{
		/* navigate until reach to the last record */
		pLastStudent = gpFirstStudent ;
		while(pLastStudent->PNextStudent)
		{
			pLastStudent = pLastStudent->PNextStudent ;
		}
		/* create new record */
		pNewStudent = (struct Sstudent *)malloc(sizeof(struct Sstudent));
		pLastStudent->PNextStudent = pNewStudent ;
	}
	/* Fill new record */
	DPRINTF("\n Enter the ID: ");
	gets(temp_text);
	pNewStudent->student.ID = atoi(temp_text);

	DPRINTF("\n Enter The Student Full Name: ");
	gets(pNewStudent->student.name);

	DPRINTF("\n Enter the Height: ");
	gets(temp_text);
	pNewStudent->student.height = atof(temp_text);

	/* Set the next pointer (new_student) null */
	pNewStudent->PNextStudent = NULL ;
}

int delete_student()
{
	char temp_text[40];
	unsigned int selected_ID ;

	/* Get the selected ID */
	DPRINTF("Enter the student ID to be deleted: ");
	gets(temp_text);
	selected_ID = atoi(temp_text);

	/* Check if the list is not empty */
	if(gpFirstStudent)
	{
		struct Sstudent* pSelectedStudent = gpFirstStudent;
		struct Sstudent* pPreviousStudent = NULL;

		/* Loop on all record */
		while(pSelectedStudent)
		{
			/* Compare each Node with the selected Id */
			if (pSelectedStudent->student.ID == selected_ID)
			{
				if(pPreviousStudent) // the first is not the selected one
				{
					pPreviousStudent->PNextStudent = pSelectedStudent->PNextStudent;
				}
				else // 1st student == ID
				{
					gpFirstStudent = pSelectedStudent->PNextStudent;
				}
				free(pSelectedStudent);
				return 1 ;
			}
			pPreviousStudent = pSelectedStudent ;
			pSelectedStudent = pSelectedStudent->PNextStudent ;
		}
	}
	DPRINTF("\n===* Cannot find the Student ID *===");
	return 0 ;
}

void view_students()
{
	struct Sstudent* pCurrentStudent = gpFirstStudent;
	int count = 0 ;
	if (gpFirstStudent == NULL)
	{
		DPRINTF("\n===* Empty List *===");
	}
	else
	{
		while(pCurrentStudent)
		{
			DPRINTF("\n Record number %d " , count+1);
			DPRINTF("\n\t ID : %d " , pCurrentStudent->student.ID);
			DPRINTF("\n\t Name : %s " , pCurrentStudent->student.name);
			DPRINTF("\n\t Height : %f " , pCurrentStudent->student.height);
			pCurrentStudent = pCurrentStudent->PNextStudent;
			count++;
		}
	}
}

void DeleteAll()
{
	struct Sstudent* pCurrentStudent = gpFirstStudent;
	if (gpFirstStudent == NULL)
	{
		DPRINTF("\n===* Empty List *===");
	}
	else
	{
		while(pCurrentStudent)
		{
			struct Sstudent* pTempStudent = pCurrentStudent;
			pCurrentStudent = pCurrentStudent->PNextStudent;
			free(pTempStudent);
		}
		gpFirstStudent = NULL ;
	}
}

int Get_student()
{
	char index[40];
	struct Sstudent* pCurrentStudent = gpFirstStudent;
	int count = 0 , student_num ;

	if (gpFirstStudent == NULL)
	{
		DPRINTF("\n===* Empty List *===");
	}
	else
	{
		DPRINTF("\nEnter the index :");
		gets(index);
		student_num = atoi(index);
		while(pCurrentStudent)
		{
			if(count == student_num)
			{
				DPRINTF("\n Record number %d " , count+1);
				DPRINTF("\n\t ID: %d " , pCurrentStudent->student.ID);
				DPRINTF("\n\t Name: %s " , pCurrentStudent->student.name);
				DPRINTF("\n\t Height: %f " , pCurrentStudent->student.height);
				return 1 ;
			}
			else
			{
				pCurrentStudent = pCurrentStudent->PNextStudent;
				count++;
			}
		}
	}
	DPRINTF("===* Invalid index *===");
	return 0 ;
}

void List_Lenght()
{
	struct Sstudent* pCurrentStudent = gpFirstStudent;
	int count = 0 ;
	if (gpFirstStudent == NULL)
	{
		DPRINTF("\n===* Empty List *===");
	}

	while (pCurrentStudent)
	{
		pCurrentStudent = pCurrentStudent->PNextStudent ;
		count++;
	}

	DPRINTF("\nList Length : %d",count);

}

void Get_middle()
{
	struct Sstudent* Fast_Ptr = gpFirstStudent;
	struct Sstudent* Slow_Ptr = gpFirstStudent;
	int count = 0 ;

	while (Fast_Ptr)
	{
		count++ ;
		Fast_Ptr = Fast_Ptr->PNextStudent;
		Fast_Ptr = Fast_Ptr->PNextStudent;
		Slow_Ptr = Slow_Ptr->PNextStudent;
	}
	DPRINTF("\n Record number %d " , count);
	DPRINTF("\n\t ID: %d " , Slow_Ptr->student.ID);
	DPRINTF("\n\t Name: %s " , Slow_Ptr->student.name);
	DPRINTF("\n\t Height: %f " , Slow_Ptr->student.height);
}

void Reverse()
{
	struct Sstudent* PNextStudent = NULL ;
	struct Sstudent* pPreviousStudent = NULL;
	struct Sstudent* pCurrentStudent = gpFirstStudent;

	while(pCurrentStudent)
	{
		PNextStudent = pCurrentStudent->PNextStudent;
		pCurrentStudent->PNextStudent = pPreviousStudent ;
		pPreviousStudent = pCurrentStudent ;
		pCurrentStudent = PNextStudent ;
	}
	gpFirstStudent = pPreviousStudent ;
	DPRINTF("===# The List is Reversed #===");
}

