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

int main(void)
{
	float a[2][2] , b[2][2] , sum[2][2];
	int i ,j;
	printf("Enter the elements of 1st matrix : \n");
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<2 ; j++)
		{
			printf("enter a (%d , %d) :",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}

	printf("Enter the elements of 2nd matrix : \n");
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<2 ; j++)
		{
			printf("enter b (%d , %d) :" ,i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&b[i][j]);
		}
	}
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<2 ; j++)
		{
			sum[i][j] = a[i][j]+b[i][j];
		}
	}
	printf ("the sum of matrix :\n");
	for (i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<2 ; j++)
		{
			printf("%f\t" , sum[i][j]);
			if(j==1)
			{
				printf("\n");
			}

		}
	}

	return 0;
}
