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
	float num_1, num_2 , mul=0;
	printf("Enter two numbers :");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f" , &num_1  ,&num_2);
	mul= num_1 * num_2 ;
	printf("Product : %f" , mul);
	return 0;
}
