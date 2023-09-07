/*
 ============================================================================
 Name        : EX_6.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_6 in C Basics, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a , b , temp=0.0;
	printf("Enter value of a :");
	fflush(stdin);
	fflush(stdout);
	scanf("%f" , &a);
	printf("\nEnter value of b :");
	fflush(stdin);
	fflush(stdout);
	scanf("%f" , &b);
	// swapping
	temp = a ;
	a = b ;
	b = temp ;
	printf("\nAfter swapping , value of a = %f \nAfter swapping , value of a = %f" , a , b);
	return 0;
}
