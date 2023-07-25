/*
 ============================================================================
 Name        : ASSIGNMENT4.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_4 in C Struct, Ansi-style
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
	struct Sstudent x[10] ;
	int i ;
	printf("Enter information of students :\n");
	for(i=0 ; i<10 ; i++)
	{
		x[i].roll=i+1;
		printf("\nfor roll number %d\n" , x[i].roll);
		printf("Enter name :");
		fflush(stdin);
		fflush(stdout);
		scanf("%s",x[i].name);
		printf("Enter marks :");
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&x[i].marks);
	}
	printf("\n---***Displaying Information***---:\n\n");
	for(i=0;i<10;i++)
	{
		printf("information for roll number (%d):\n",i+1);
		printf("name: %s\n",x[i].name);
		printf("marks: %.2f\n",x[i].marks);
	}
	return 0;
}






