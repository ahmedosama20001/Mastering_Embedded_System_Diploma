/*
 ============================================================================
 Name        : ASSIGNMENT1.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_1 in C Struct, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include<string.h>
struct Sstudent
{
	char name[100];
	int roll ;
	float marks;
};

int main()
{
	struct Sstudent x ;
	printf("Enter information of students :\n\n");
	printf("Enter name :");
	fflush(stdin);
	fflush(stdout);
	scanf("%s",x.name);
	printf("Enter roll number :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x.roll);
	printf("Enter marks :");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&x.marks);
	printf("\nDisplaying Information :\n");
	printf("name: %s\n",x.name);
	printf("roll number: %d\n" ,x.roll);
	printf("marks: %.2f\n",x.marks);
	return 0;
}






