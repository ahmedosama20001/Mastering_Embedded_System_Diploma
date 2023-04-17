/*
 ============================================================================
 Name        : ASSIGNMENT3.c
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
	int r ,c , j ,i ;
	int a[100][100] , t[100][100];
	printf("Enter the numbers of rows and column of the matrix :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d" ,&r,&c);
	printf("Enter elements of matrix : \n");
	for(i=0; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("Enter element a [%d][%d] : " , i+1 , j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%d" , &a[i][j]);
		}
	}

	printf("Entered matrix : \n");
	for(i=0; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("%d " , a[i][j]);
			if(j==c-1)
			{
				printf("\n\n");
			}
		}
	}


	for(i=0; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			t[j][i] = a[i][j];
		}
	}


	printf("Transpose of matrix : \n");
	for(i=0; i<c ; i++)
	{
		for(j=0 ; j<r ; j++)
		{
			printf("%d " , t[i][j]);
			if(j==r-1)
			{
				printf("\n\n");
			}
		}
	}



	return 0;
}
