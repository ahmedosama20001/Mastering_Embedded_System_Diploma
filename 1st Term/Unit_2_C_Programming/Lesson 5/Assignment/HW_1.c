/*
 ============================================================================
 Name        : HW_1.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_1 in C function, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int isPrime(int n);
int main()
{
	int a, b, i, f;
	printf("Enter two numbers (intervals): ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d", &a, &b);
	printf("Prime numbers between %d and %d are: ", a, b);
	for(i=a; i<=b; i++)
	{
		f = isPrime(i);
		if(f == 1)
			printf("%d ", i);
	}
	return 0;
}
int isPrime(int n)
{
	int i;
	for(i=2; i<=n/2; i++)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
