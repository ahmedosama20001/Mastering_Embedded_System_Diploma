/*
 ============================================================================
 Name        : EX_8.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_8 in C Basics, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char operator ;
	float num_1 , num_2 , operation = 0 ;
	printf("Enter operator either (+) or (-) or (*) or (/) : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&operator);
	printf("Enter two operands :  ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",&num_1 , &num_2);
	switch(operator)
	{
	case('+'):
			operation = num_1 + num_2 ;
			printf("%f + %f = %f", num_1 , num_2 , operation);
			break;
	case('-'):
			operation = num_1 - num_2 ;
			printf("%f - %f = %f", num_1 , num_2 , operation);
			break;
	case('*'):
			operation = num_1 * num_2 ;
			printf("%f * %f = %f", num_1 , num_2 , operation);
			break;
	case('/'):
			operation = num_1 / num_2 ;
			printf("%f / %f = %f", num_1 , num_2 , operation);
			break;
	}
	return 0;
}
