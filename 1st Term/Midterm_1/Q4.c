/*
 ============================================================================
 Name        : Question_4
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Midterm_1 @ C_Programming
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int rev_num(int n);
int main()
{
	int x;
	printf("please enter number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	printf("the reverse number is : %d",rev_num(x));
	return 0;
}

int rev_num(int n)
{
	int rem, rev = 0;

	while (n > 0)
	{
		rem = n %10;
		rev = rev *10+ rem;
		n = n /10;
	}
	return rev;
}

