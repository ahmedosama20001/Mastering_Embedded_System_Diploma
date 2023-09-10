/*
 ============================================================================
 Name        : Question_7
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Midterm_1 @ C_Programming
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum(int n);
int main()
{
	printf("the sum of number from 1 to 100 = %d",sum(100));
	return 0;
}

int sum(int n)
{
	int x ;
	x = n;
	if (n!=0)
	{
		x+= sum(--n) ;
	}
	return x ;

}

