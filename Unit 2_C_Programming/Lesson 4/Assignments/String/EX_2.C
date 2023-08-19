/*
 ============================================================================
 Name        : ASSIGNMENT2.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char s[1000]  ;
	int counter = 0 , i ;
	printf("Enter a string : ");
	fflush(stdin);
	fflush(stdout);
	gets(s);
	for(i=0 ;s[i] != '\0'; i++)
	{
			counter ++ ;
	}
	printf("Length of string : %d " , counter);

	return 0;
}


/* ***** if we use strlen *****
	char s[1000]  ;
	int len ;
	printf("Enter a string : ");
	fflush(stdin);
	fflush(stdout);
	gets(s);
	len = strlen(s);
	printf("length of string = %d",len);
*/
