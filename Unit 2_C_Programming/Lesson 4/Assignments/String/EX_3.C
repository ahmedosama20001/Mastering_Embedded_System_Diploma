/*
 ============================================================================
 Name        : ASSIGNMENT3.c
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
	int i=0 , j ;
	char s[100] , t ;
	printf("Enter the string : ");
	fflush(stdin);
	fflush(stdout);
	gets(s);
	j=strlen(s);
	while(i<(j-1))
	{
		t=s[i];
		s[i] = s[j-1];
		s[j-1] = t ;
		i++;
		j--;
	}
	printf("\nReverse string is : %s" , s);
	return 0;
}
