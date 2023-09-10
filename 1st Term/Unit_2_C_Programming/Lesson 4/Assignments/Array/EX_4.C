/*
 ============================================================================
 Name        : ASSIGNMENT4.c
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
	int a[100] , n , i ,loc ,x ;
	printf("Enter number of elements : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d" , &n);
	for(i=0 ; i<n ; i++)
	{
		scanf("%d" ,&a[i]);
	}
	printf("Enter the element to be inserted : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d" , &x);
	printf("Enter the location : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d" , &loc);
	for(i=n ; i>= loc ; i--)
	{
		a[i] = a[i-1];
	}
	n++ ;
	a[loc-1] = x;
	for(i=0 ; i<n ; i++)
	{
		printf("%d " , a[i]);
	}
	return 0;
}
