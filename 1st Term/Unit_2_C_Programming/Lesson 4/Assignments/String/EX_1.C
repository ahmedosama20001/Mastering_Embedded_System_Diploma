/*
 ============================================================================
 Name        : ASSIGNMENT1.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char s[1000]  , l  ;
	int counter=0 , i ;
	printf("Enter a string : ");
	fflush(stdin);
	fflush(stdout);
	gets(s);
	printf("Enter a character to find frequency : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c" , &l);
	for(i=0 ;s[i] != '\0'; i++)
	{
		if(l == s[i])
		{
			counter ++ ;
		}
	}
	printf("Frequency of %c = %d" , l , counter);

	return 0;
}
