/*
 ============================================================================
 Name        : EX_3.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_3 in C Basics, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float num_1 , num_2 , num_3 ;
	printf("Enter three numbers : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f %f",&num_1 , &num_2 , &num_3);
	if(num_1>num_2 && num_1>num_3)
	{
		printf("Largest number = %f" , num_1);
	}
	else if(num_2>num_1 && num_2>num_3)
	{
		printf("Largest number = %f" , num_2);
	}
	else
	{
		printf("Largest number = %f" , num_3);
	}
	return 0;
}
