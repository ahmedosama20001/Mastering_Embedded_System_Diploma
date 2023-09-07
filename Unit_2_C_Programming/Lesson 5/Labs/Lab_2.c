/*
 ============================================================================
 Name        : Lab_2.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



int calcMin (int values[] , int n);
int main(void)
{
	int x[10] = {35,67,27,54,76,44,59,32,43,25};
	int y[5] = {28,71,67,83,62};
	int z [13] = {87,21,33,56,77,90,65,43,22,11,9,53,10};
	printf("the minimum of x , y , z is ( %d , %d , %d )" ,calcMin(x,10),calcMin(y,5),calcMin(z,13));
	return 0;
}

int calcMin (int values[] , int n)
{
	int i , minval = values[0];
	for(i=0 ; i<n ; i++)
	{
		if(values[i] < minval)
		{
			minval=values[i];
		}
	}
	return minval;
}



/*
        *****Output*****
		
the minimum of x , y , z is ( 25 , 28 , 9 ) 


---------------------

*/