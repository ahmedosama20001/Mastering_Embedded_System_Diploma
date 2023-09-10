/*
 ============================================================================
 Name        : HW_4.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_4 in C function, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int power(int b , int e);
int main()
{
	int e ,b;
	printf("Enter base number : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &b);
	printf("Enter power number(positive integer) : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &e);
	printf("%d ^ %d = %d" , b , e , power(b,e));
	return 0;
}


int power(int b , int e)
{
	if (e!=0)
		return (b*power(b,e-1));
	else
		return 1 ;
}

