/*
 ============================================================================
 Name        : HW_3.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_3 in C function, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void Reverse();
int main()
{
	printf("enter sentence: ");
	fflush(stdin);
	fflush(stdout);
	Reverse();
	return 0 ;
}

void Reverse()
{
	char s;
	scanf("%c",&s);
	if(s!='\n')
	{
		Reverse();
		printf("%c",s);
	}
}
