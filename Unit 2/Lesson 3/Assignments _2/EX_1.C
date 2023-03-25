/*
 ============================================================================
 Name        : EX_1.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_1 in C Basics, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num ;
	printf("Enter an integer you want to check : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);
	if(num%2 == 1)
	{
		printf("%d is odd" , num);
	}
	else
	{
		printf("%d is even" , num);
	}
	return 0;
}
