/*
 ============================================================================
 Name        : lab_2.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Lab 2 in C Basics , Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num_1 , num_2 , num_3;
	printf("enter three values : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d %d",&num_1,&num_2,&num_3);
	if (num_1 > num_2)
	{
		if(num_1 > num_3)
		{
			printf("the largest value is : %d " , num_1);
		}
		else
		{
			printf("the largest value is : %d" , num_3);
		}
	}
	else
	{
		if(num_2 > num_3)
		{
			printf("the largest value is : %d" , num_2);
		}
		else
		{
			printf("the largest value is : %d" , num_3);
		}
	}
	return 0;
}



/*
        *****Output*****
		
enter three values : 1
2
3
the largest value is : 3

---------------------

*/