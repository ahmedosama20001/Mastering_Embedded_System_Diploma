/*
 ============================================================================
 Name        : EX_7.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_7 in C Basics, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a , b ;
	printf("Enter value of a :");
	fflush(stdin);
	fflush(stdout);
	scanf("%f" , &a);
	printf("\nEnter value of b :");
	fflush(stdin);
	fflush(stdout);
	scanf("%f" , &b);
	// swapping
	a = a + b;
	b = a - b ;
	a = a - b ;
	printf("\nAfter swapping , value of a = %f \nAfter swapping , value of a = %f" , a , b);
	return 0;
}
