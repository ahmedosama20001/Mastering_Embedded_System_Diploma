/*
 ============================================================================
 Name        : EX_4.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_4 in C Basics, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float num ;
	printf("Enter a number  : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&num);
	if(num>0)
	{
		printf("%f is positive" , num);
	}
	else if(num == 0)
	{
		printf("you entered zero" , num);
	}
	else
	{
		printf("%f is negative" , num);
	}
	return 0;
}
