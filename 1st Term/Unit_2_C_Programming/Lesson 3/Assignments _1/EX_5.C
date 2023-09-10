/*
 ============================================================================
 Name        : EX_5.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_5 in C Basics, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char x;
	printf("Enter a character :");
	fflush(stdin);
	fflush(stdout);
	scanf("%c" , &x);
	printf("ASCII value of %c = %d" , x , x);
	return 0;
}
