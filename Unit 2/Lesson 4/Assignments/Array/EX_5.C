/*
 ============================================================================
 Name        : ASSIGNMENT5.c
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
	int a[100] , n , i ,x ;
	printf("Enter number of elements : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d" , &n);
	for(i=0 ; i<n ; i++)
	{
		scanf("%d" ,&a[i]);
	}

	printf("Enter the element to be searched : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d" , &x);
	i=0 ;
	while(i<n && x != a[i])
	{
		i++ ;
	}
	if(i < n)
	{
		printf("number found at the location = %d" , i+1);
	}
	else
	{
		printf("number not found");
	}

	return 0;
}
