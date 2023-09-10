/*
 ============================================================================
 Name        : Question_2
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Midterm_1 @ C_Programming
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float sqr_root(float n);
int main()
{
	float x ;
	printf("please enter number to calculate it's square root: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&x);
	sqr_root(x);
	printf("\nthe Square root is = %f",sqr_root(x));
	return 0;
}

float sqr_root(float n)
{
	float i=0;
	float j=n/2;
	while (j != i)
	{
		i=j;
		j=(j + (n / j))/2;
	}
	return j;
}

