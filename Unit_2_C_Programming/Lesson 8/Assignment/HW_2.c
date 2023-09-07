/*
 ============================================================================
 Name        : ASSIGNMENT7.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_2 in C Pointers, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include<string.h>

int main()
{
	/*
	 
	  ***another code***
	printf("The Alphabets are :\n");
	char* ptr;
	char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	ptr = alphabets;
	while (*ptr != '\0')
	{
		printf("%c ", *ptr);
		ptr++;
	}
	printf("\n");
	 */
	int i;
	char* ptr;
	char alphabets[27];
	ptr = alphabets;
	for(i=0 ; i<26 ; i++)
	{
		*ptr=i+'A';
		ptr++;
	}
	ptr = alphabets;
	printf("The Alphabets are :\n");
	for(i=0 ; i<26 ; i++)
	{
		printf("%c  ",*ptr);
		ptr++;
	}
	printf("\n\n");
	return 0;
}
