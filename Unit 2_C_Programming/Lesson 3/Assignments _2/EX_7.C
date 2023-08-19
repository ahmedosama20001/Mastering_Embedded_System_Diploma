/*
 ============================================================================
 Name        : EX_7.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_7 in C Basics, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num ,i,fact=1 ;
	    printf("enter an integer: ");
	    fflush(stdin);
	    fflush(stdout);
	    scanf("%d" , &num);
	    if(num==0)
	    {
	        printf("fact of 0 = 1 ");
	    }
	    else if(num<0)
	    {
	        printf("Error !!! factorial of negative number doesn't exist");
	    }
	    else
	    {
	        for(i=1 ; i<=num ; i++)
	        {
	            fact*=i;
	        }
	        printf("The fact of %d = %d" , num , fact);
	    }
	return 0;
}
