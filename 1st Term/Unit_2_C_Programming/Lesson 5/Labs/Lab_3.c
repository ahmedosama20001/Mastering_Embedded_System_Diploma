
/*
 ============================================================================
 Name        : ASSIGNMENT1.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void printnumbers(int n)
{
	int i ,j ;
	for(i=0 ; i<=n ; i++)
	{
		for(j=0 ; j<=n-i ; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
int main(void)
{
	printnumbers(9);
	return 0;
}



/*
        *****Output*****
		
0 1 2 3 4 5 6 7 8 9 
0 1 2 3 4 5 6 7 8 
0 1 2 3 4 5 6 7 
0 1 2 3 4 5 6 
0 1 2 3 4 5 
0 1 2 3 4 
0 1 2 3 
0 1 2 
0 1 
0 
---------------------

*/