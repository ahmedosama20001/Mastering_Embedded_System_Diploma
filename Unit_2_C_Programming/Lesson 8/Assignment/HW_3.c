/*
 ============================================================================
 Name        : ASSIGNMENT7.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_3 in C Pointers, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	char revstr[100];
	char *ptrstr;
	char *ptrrev;
	int i = 0;
	printf("Input a string: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%s", str);
	ptrstr = str;
	ptrrev = revstr;
	while (*ptrstr)
	{
		ptrstr++;
		i++;
	}
	ptrstr--;
	while (i > 0)
	{
		*ptrrev = *ptrstr;
		ptrrev++;
		ptrstr--;
		i--;
	}

	*ptrrev = '\0';

	printf("Reversed string is: %s\n", revstr);

	return 0;
}
