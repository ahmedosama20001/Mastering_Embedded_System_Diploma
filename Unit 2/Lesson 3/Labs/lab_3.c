/*
 ============================================================================
 Name        : lab_3.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Lab 3 in C Basics, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num_1 , num_2 , minimum;
	 printf("enter two numbers");
	 fflush(stdin);
	 fflush(stdout);
	 scanf("%d %d"  , &num_1 , &num_2);
	 minimum = (num_1< num_2) ? num_1 : num_2;
	 printf("the minimum is : %d" , minimum);
	return 0;
}



/*
        *****Output*****
		
enter two numbers40
30
the minimum is : 30

---------------------

*/