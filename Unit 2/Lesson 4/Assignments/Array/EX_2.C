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

int main(void)
{
	int n , i ;
	float a[100]  , sum = 0.0 , avg;
	printf("Enter the numbers of data :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d" , &n);
	while(n>100)
	{
		printf("ERORR !!!\n enter number in range of (1 to 100)\n");
		printf("Enter the numbers of data :");
		fflush(stdin);
		fflush(stdout);
		scanf("%d" , &n);
	}
	for(i=0; i<n ; i++)
	{
		printf("%d. Enter number : " , i+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%f" , &a[i]);
		sum += a[i] ;
	}
	avg = sum / n ;
	printf("Average = %f" , avg);

	return 0;
}
