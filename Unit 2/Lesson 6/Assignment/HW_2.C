/*
 ============================================================================
 Name        : ASSIGNMENT2.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_2 in C Struct, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include<string.h>
struct Sdistance
{
	int feet ;
	float inch;
}d1,d2,sum;

int main()
{
	printf("Enter information of 1st distance :\n");
	printf("Enter feet :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&d1.feet);
	printf("Enter inch :");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&d1.inch);
	printf("Enter information of 2st distance :\n");
	printf("Enter feet :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&d2.feet);
	printf("Enter inch :");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&d2.inch);
	sum.feet = d1.feet + d2.feet;
	sum.inch = d1.inch + d2.inch;
	if(sum.inch > 12.0)
	{
		sum.inch = sum.inch - 12.0;
		++sum.feet;
	}
	printf("\n sum of distances = %d' - %.1f\"",sum.feet , sum.inch);
	return 0;
}




