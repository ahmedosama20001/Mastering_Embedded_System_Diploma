/*
 ============================================================================
 Name        : EX_6.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_6 in C Basics, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n , sum=0 , i ;
	printf("Enter an integer  : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	for(i=0 ; i<=n ; i++)
	{
		sum+=i ;
	}
	printf("Sum = %d" , sum);
	return 0;
}
