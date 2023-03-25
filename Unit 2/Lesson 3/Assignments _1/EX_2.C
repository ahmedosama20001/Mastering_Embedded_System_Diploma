/*
 ============================================================================
 Name        : EX_2.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_2 in C Basics, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	printf("Enter an integer :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d" , &num);
	printf("you entered : %d" , num);
	return 0;
}
