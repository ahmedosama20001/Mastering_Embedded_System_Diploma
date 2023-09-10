/*
 ============================================================================
 Name        : lab_2.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Lab 2 in C Basics (Arrays) , Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float x[] = {5,16,22,3.5,15};
	float y ;
	int i ;
	for(i=0 ; i<5 ; i++)
	{
		y = 5*x[i] *x[i] + 3 *x[i] + 2 ;
		printf("y=(%f) = %f \n" , x[i] ,y);
	}
	return 0;
}



/*
        *****Output*****
		
y=(5.000000) = 142.000000 
y=(16.000000) = 1330.000000 
y=(22.000000) = 2488.000000 
y=(3.500000) = 73.750000 
y=(15.000000) = 1172.000000 


---------------------

*/