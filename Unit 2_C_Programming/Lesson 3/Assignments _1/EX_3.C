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
	int num_1, num_2 , sum=0;
	printf("Enter two integers :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d" , &num_1  ,&num_2);
	sum= num_1 + num_2 ;
	printf("Sum : %d" , sum);
	return 0;
}
