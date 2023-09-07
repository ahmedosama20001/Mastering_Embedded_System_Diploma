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
	char c ;
	printf("Enter a character  : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&c);
	if((c>='a' && c<= 'z') || (c>='A' && c<='Z'))
	{
		printf("%c is an alphabet" , c);
	}
	
	else
	{
		printf("%c is not an alphabet" , c);
	}
	return 0;
}
