/*
 ============================================================================
 Name        : HW_2.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_2 in C function, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int fact (int n) ;
int main()
{
	int a ;
	printf("Enter an positive integer : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&a);
	fflush(stdin);
	fflush(stdout);
	printf("Factorial of %d = %d " , a , fact(a));
	return 0;
}
int fact (int n)
{
	if (n==0)
		return 1 ;

	else
		return n*fact(n-1);
}
