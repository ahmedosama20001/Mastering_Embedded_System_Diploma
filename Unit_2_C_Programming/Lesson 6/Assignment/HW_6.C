/*
 ============================================================================
 Name        : ASSIGNMENT6.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_6 in C Struct, Ansi-style
 ============================================================================
 */
#include<stdio.h>
#include<string.h>

union UNUMjob
{
	char name[32];
	float salary;
	int worker_no;
}u;

struct Sjob1
{
	char name[32];
	float salary;
	int worker_no;
}s;
int main()
{
	printf("size of union =%d",sizeof(u));
	printf("\nsize of structure =%d",sizeof(s));
	return 0;
}


/*
***** output *****
size of union =32
size of structure =40
*/



