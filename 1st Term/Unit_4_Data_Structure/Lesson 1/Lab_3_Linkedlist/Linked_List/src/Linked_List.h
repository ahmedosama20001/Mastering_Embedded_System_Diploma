/*
 * Linked_List.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: AHMED OSAMA
 */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_


#define DPRINTF(...)  		{fflush(stdout);\
		fflush(stdin);\
		printf(__VA_ARGS__);\
		fflush(stdout);\
		fflush(stdin);}


/* effective data */
struct Sdata
{
	int ID ;
	char name[40];
	float height ;
};

/* Linked List node */
struct Sstudent
{
	struct Sdata student;
	struct Sstudent* PNextStudent ;
};

/* APIs */
void AddStudent();
int delete_student();
void view_students();
void DeleteAll();
int Get_student();
void List_Lenght();
void Get_middle();
void Reverse();


#endif /* LINKED_LIST_H_ */
