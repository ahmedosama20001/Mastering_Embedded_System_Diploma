/*
 * Project_2.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: AHMED OSAMA
 */

#include <stdio.h>
#include <stdlib.h>
#include "Project_2.h"

FILE *Student_Data ;


FIFO_Buf_Status FIFO_init(FIFO_Buf_t* fifo , Student_data_t* buf , uint32_t length)
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

FIFO_Buf_Status FIFO_enqueue(FIFO_Buf_t* fifo , Student_data_t item)
{
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_Null ;
	//  Check FIFO is FULL
	if(FIFO_IS_FULL(fifo)== FIFO_full)
		return FIFO_full ;
	*(fifo->head)= item ;
	fifo->count++;
	/* Circular FIFO */
	if(	fifo->head == (fifo->base +(fifo->length * sizeof(Student_data_t))))
		fifo->head = fifo->base ;
	else
		fifo->head++ ;
	return FIFO_no_error ;
}

FIFO_Buf_Status FIFO_dequeue(FIFO_Buf_t* fifo , Student_data_t* item)
{
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_Null ;
	/* Check FIFO is empty */
	if(fifo->count == 0)
		return FIFO_empty ;
	*item = *(fifo->tail) ;
	fifo->count-- ;
	if(	fifo->tail == (fifo->base +(fifo->length * sizeof(Student_data_t))))
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

/*---------------------------------------------------*/
FIFO_Buf_Status Add_Student_Manually(FIFO_Buf_t *fifo)
{
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_Null ;
	//  Check FIFO is FULL
	if(FIFO_IS_FULL(fifo)== FIFO_full)
		return FIFO_full ;
	Student_data_t New_Student ;
	char temp_text[50];
	int i , n ;

	DPRINTF("*\n----# Student information #----*\n");
	DPRINTF("Enter Student First name :\n")
	gets(New_Student.First_name);

	DPRINTF("Enter Student Last name :\n")
	gets(New_Student.Last_name);

	DPRINTF("Enter Student GPA :\n");
	gets(temp_text);
	New_Student.GPA = atof(temp_text);

	DPRINTF("Enter Student ID :\n ");
	gets(temp_text);
	New_Student.ID = atoi(temp_text);
	/* To check if ID is exist or not */
	if(Find_The_Roll(fifo , New_Student.ID)!= NULL)
	{
		DPRINTF("the ID already exist");
		return FIFO_Null ;
	}
	DPRINTF("Enter Number of courses :");
	scanf("%d" , &n);
	for(i=0 ;i<n ;i++)
	{
		DPRINTF("Enter course ID %d : \n",i+1);
		gets(temp_text);
		New_Student.course_ID[i] = atoi(temp_text);
	}
	if(FIFO_enqueue(fifo,New_Student)==FIFO_no_error)
		return FIFO_no_error;

	else
		return FIFO_Null;
}

FIFO_Buf_Status Find_Student_By_Roll(FIFO_Buf_t *fifo)
{
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_Null ;
	//  Check FIFO is FULL
	if(FIFO_IS_FULL(fifo)== FIFO_full)
		return FIFO_full ;

	int ID , i ;
	char temp_text[50];
	DPRINTF("\nEnter Student ID to search :");
	gets(temp_text);
	ID = atoi(temp_text);
	if(Find_The_Roll(fifo,ID) == NULL)
	{
		DPRINTF("\n=====# This ID not exist #=====");
		return FIFO_Null;
	}
	else
	{
		Student_data_t *STU_ID;
		STU_ID = Find_The_Roll(fifo,ID);
		DPRINTF("\nFirst Name Of Roll Number %d : %s",ID,STU_ID->First_name);
		DPRINTF("\nLast Name Of Roll Number %d : %s",ID,STU_ID->Last_name);
		DPRINTF("\nGPA Of Roll Number %d : %f",ID,STU_ID->GPA);
		DPRINTF("\nCourses Of Roll Number %d : ",ID);
		for(i=0; STU_ID->course_ID[i]!= NULL ;i++)
		{
			DPRINTF("%d ",STU_ID->course_ID[i]);
		}
	}
	return FIFO_no_error;
}

FIFO_Buf_Status Delete_Student_By_Roll(FIFO_Buf_t *fifo)
{
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_Null ;
	//  Check FIFO is FULL
	if(FIFO_IS_FULL(fifo)== FIFO_full)
		return FIFO_full ;
	int ID_num;
	Student_data_t *Student_ID ;
	char temp_text[50];
	DPRINTF("\nEnter Student ID That you Want Delete : \n");
	gets(temp_text);
	ID_num = atoi(temp_text);
	Student_ID = Find_The_Roll(fifo , ID_num);
	if(Student_ID == NULL)
	{
		DPRINTF("\n*====# This ID doesn't exist #====*");
		return FIFO_Null;
	}
	else
	{
		if(FIFO_dequeue(fifo , Student_ID) == FIFO_no_error)
		{
			DPRINTF("\n=====# ID Deleted successfully #=====");
			return FIFO_no_error ;
		}
		else
		{
			DPRINTF("\n=====# ID Deleted Failed #=====");
			return FIFO_Null ;
		}
	}
}

FIFO_Buf_Status Find_Student_By_Course_ID(FIFO_Buf_t *fifo)
{
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_Null ;
	//  Check FIFO is FULL
	if(FIFO_IS_FULL(fifo)== FIFO_full)
		return FIFO_full ;
	int i ,j, courses_ID , counter=0 ;
	char temp_text[50];
	Student_data_t *Student_ID = fifo->tail;
	DPRINTF("\nEnter Course ID :")
	gets(temp_text);
	courses_ID = atoi(temp_text);
	DPRINTF("\n====# Information about students in course number ( %d ) #====\n",courses_ID);
	for(i=0 ; i<fifo->count ; i++)
	{

		for(j=0 ; Student_ID->course_ID[j]!= NULL; j++)
		{
			if(courses_ID == Student_ID->course_ID[j])
			{
				DPRINTF("\nFirst Name: %s ",Student_ID->First_name);
				DPRINTF("\nLast Name: %s",Student_ID->Last_name);
				DPRINTF("\nRoll Number: %d",Student_ID->ID);
				DPRINTF("\nGPA: %f",Student_ID->GPA);
				DPRINTF("\n\t=====***=====\n");
				counter++;
			}
		}
		if((Student_ID + 1) == (fifo->base + fifo->length))
		{
			Student_ID = fifo->base;
		}
		else
		{
			Student_ID++;
		}
	}
	if(counter == 0)
	{
		DPRINTF("\n=====# No Students in this Course #=====");
		return FIFO_empty;
	}
	return FIFO_no_error;
}

FIFO_Buf_Status Total_Student_Number(FIFO_Buf_t *fifo)
{
	if (fifo->count == 0)
	{
		DPRINTF("=====# The Database is empty #=====");
		return FIFO_Null;
	}
	else
	{
		DPRINTF("\nThe Total Number of Student is : %d\n" ,fifo->count );
	}
	return FIFO_no_error;
}

FIFO_Buf_Status Update_Student_By_Roll(FIFO_Buf_t *fifo)
{
	/*if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_Null ;
	//  Check FIFO is FULL
	if(FIFO_IS_FULL(fifo)== FIFO_full)
		return FIFO_full ;*/
	if(fifo->count == 0)
	{
		DPRINTF("=====# The Database is empty #=====");
		return FIFO_Null;
	}
	Student_data_t *Student ;
	int ID , i  , courses_num;
	char temp_text[50] , choice[50];
	DPRINTF("\nEnter the Student ID Number that you want to update :\n ");
	gets(temp_text);
	ID = atoi(temp_text);
	Student = Find_The_Roll(fifo,ID);

	if(Student == NULL)
	{
		DPRINTF("\n===# This Student ID %d is not exist #===",ID);
		return FIFO_Null;
	}

	DPRINTF("=====## Choose the Data that you want to Update ##=====\n");
	DPRINTF("\t1- First name\n");
	DPRINTF("\t2- Last name\n");
	DPRINTF("\t3- GPA\n");
	DPRINTF("\t4- Courses ID's\n");
	DPRINTF("\nEnter choice :")

	gets(choice);
	switch(atoi(choice))
	{
	case 1:
		DPRINTF("Enter The New  First name:\n");
		gets(Student->First_name);
		DPRINTF("### UPDATED ###\n");
		break;
	case 2:
		DPRINTF("Enter The New  Last name:\n");
		gets(Student->Last_name);
		DPRINTF("### UPDATED ###\n");
		break;
	case 3:
		DPRINTF("Enter The New  GPA:\n");
		gets(temp_text);
		Student->GPA = atof(temp_text);
		DPRINTF("### UPDATED ###\n");
		break;
	case 4:
		DPRINTF("\nEnter The Number of Courses:\n");
		gets(temp_text);
		courses_num = atoi(temp_text);
		for(i=0 ; i<courses_num ; i++)
		{
			DPRINTF("Enter Student New Course Number %d:\n" , i+1);
			gets(temp_text);
			Student->course_ID[i] = atoi(temp_text);
		}
		DPRINTF("### UPDATED ###\n");
		break;
	}
	return FIFO_no_error ;
}

FIFO_Buf_Status Show_All_Students(FIFO_Buf_t *fifo)
{
	int i , j ;
	Student_data_t *Students_info = fifo->tail;
	if(fifo->count == 0)
	{
		DPRINTF("\n=====## The Database is empty ##=====");
		return FIFO_Null;
	}
	for(i=0 ; i<fifo->count ; i++)
	{
		DPRINTF("\n\nFirst Name : %s",Students_info->First_name);
		DPRINTF("\nLast Name : %s",Students_info->Last_name);
		DPRINTF("\nID Number : %d",Students_info->ID);
		DPRINTF("\nGPA : %f",Students_info->GPA);
		DPRINTF("\nCourses :  ");
		for(j=0 ; Students_info->course_ID[j] != NULL ; j++)
		{
			DPRINTF("\t%d" ,Students_info->course_ID[j] );
		}
		if((Students_info + 1 ) == (fifo->base + fifo->length))
		{
			Students_info=fifo->base;
		}
		else
		{
			Students_info++;
		}
	}
	return FIFO_no_error ;
}

FIFO_Buf_Status Find_Student_By_First_Name(FIFO_Buf_t *fifo)
{
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_Null ;
	//  Check FIFO is FULL
	if(FIFO_IS_FULL(fifo)== FIFO_full)
		return FIFO_full ;

	int i , counter=0 ;
	char temp_text[50];
	Student_data_t *Student_FN = fifo->tail ;
	DPRINTF("\nEnter Student First Name to find :")
	scanf("%s" ,temp_text);
	for(i=0 ; i<fifo->count ; i++)
	{
		if(!(strcmp(temp_text,Student_FN->First_name)))
		{

			DPRINTF("\nLast Name Of First Name %s : %s",Student_FN->First_name,Student_FN->Last_name);
			DPRINTF("\nRoll Number Of First Name %s : %d",Student_FN->First_name,Student_FN->ID);
			DPRINTF("\nGPA Of First Name %s : %f",Student_FN->First_name,Student_FN->GPA);
			DPRINTF("\nCourses ofFirst Name %s ",Student_FN->First_name);
			for(i=0 ; Student_FN->course_ID[i]!=NULL ; i++)
			{
				DPRINTF("%d",Student_FN->course_ID[i]);
			}
		}
		else
		{
			counter++;
		}

		if((Student_FN + 1) == (fifo->base + fifo->length))
		{
			Student_FN = fifo->base;
		}
		else
		{
			Student_FN++;
		}
	}
	if(counter == fifo->count)
	{
		DPRINTF("\n=====# No Students with this name #=====");
		return FIFO_empty;
	}
	return FIFO_no_error;

}

FIFO_Buf_Status Add_Student_From_File(FIFO_Buf_t *fifo)
{
	int i , course_num;
	Student_data_t New_Student;

	Student_Data = fopen("Student_Data.txt","r");

	if(Student_Data == NULL)
	{
		printf("\n====# Adding Data from file failed #==== \n");
		return FIFO_Null;
	}

	while(!feof(Student_Data))
	{
		fscanf(Student_Data, "%d", &New_Student.ID);


		if(Find_The_Roll (fifo, New_Student.ID)!=NULL)
		{
			printf("=====# The ID number %d is exist #===== \n",New_Student.ID);

			fscanf(Student_Data, "%*[^\n]");
			continue;
		}

		fscanf(Student_Data, "%s", New_Student.First_name);
		fscanf(Student_Data, "%s", New_Student.Last_name);
		fscanf(Student_Data, "%f", &New_Student.GPA);
		fscanf(Student_Data,"%d",&course_num);

		for (i = 0; i < course_num ; i++)
		{
			fscanf(Student_Data, "%d", &New_Student.course_ID[i]);
		}

		if((FIFO_enqueue(fifo, New_Student))== FIFO_no_error)
		{
			printf("\n=====# Added successfully #=====\n");
		}
		else
		{
			printf("\n=====# Added Failed #=====\n");
			return FIFO_Null;
		}
	}

	fclose(Student_Data);
	return FIFO_no_error;
}

Student_data_t* Find_The_Roll(FIFO_Buf_t *fifo , int num_ID)
{
	int i ;
	Student_data_t *CurrentStudent = fifo->tail ;
	for(i=0 ; i<fifo->count ; i++)
	{
		if(CurrentStudent->ID == num_ID)
		{
			DPRINTF(" Student ID Found Successfully\n ");
			return CurrentStudent;
		}
		if((CurrentStudent+1)== (fifo->base + fifo->length))
		{
			CurrentStudent = fifo->base;
		}
		else
		{
			CurrentStudent++;
		}
	}
	CurrentStudent = NULL ;
	return CurrentStudent;
}
