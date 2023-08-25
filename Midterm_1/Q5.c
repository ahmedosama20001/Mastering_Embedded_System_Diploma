/*
 ============================================================================
 Name        : Question_5
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Midterm_1 @ C_Programming
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int countones(int n);
int main()
{
	int x;
	printf("please enter number to count its number of ones: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	printf("the number ones is: %d " , countones(x));
	return 0;
}

int countones(int n)
{
	int count=0 ;
	for(;n!=0;n >>= 1)
	{
		if((n&1)== 1)
		{
			count++;
		}
	}
	return count;
}

