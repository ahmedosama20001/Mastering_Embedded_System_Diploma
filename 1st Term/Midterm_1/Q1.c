/*
 ============================================================================
 Name        : Question_1
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Midterm_1 @ C_Programming
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int digit_sum(int n);
int main()
{
	int x ;
	printf("please enter number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	digit_sum(x);
	printf("\nthe sum of digits is = %d",digit_sum(x));
}

int digit_sum(int n)
{
	if (n == 0)
	{
		return 0;
	}
	return (n % 10) + digit_sum(n / 10);
}

