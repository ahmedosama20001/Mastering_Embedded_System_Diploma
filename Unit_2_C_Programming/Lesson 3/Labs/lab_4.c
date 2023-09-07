/*
 ============================================================================
 Name        : lab_4.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Lab 4 in C Basics, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sum=0 ;
	for (int i =1 ; i < 100 ; i++)
	{
		sum = sum + i;
	}
	printf("sum of values between (1 and 99) is : %d" , sum);
	return 0;
}


/*
        *****Output*****
		
sum of values between (1 and 99) is : 4950

---------------------

*/
