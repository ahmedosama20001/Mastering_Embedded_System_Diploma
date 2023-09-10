/*
 ============================================================================
 Name        : lab_3.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Lab 3 in C Basics (Arrays) , Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a[3][3];
	int r , c ;
	float t[3][3];
	for (r=0 ; r<3 ; r++) //for row
	{
		for(c=0 ; c<3 ; c++) // for column
		{
			printf("enter the item (%d , %d) :" , r , c);
			fflush(stdin);
			fflush(stdout);
			scanf("%f", &a[r][c]);
		}
	}
	printf("the matrix is :\n");
	for (r=0 ; r<3 ; r++) //for row
	{
		for(c=0 ; c<3 ; c++) // for column
		{
			printf("%f\t" , a[r][c]);
		}
		printf("\n");
	}
	printf("the Transpose matrix is :\n");
	for (r=0 ; r<3 ; r++) //for row
	{
		for(c=0 ; c<3 ; c++) // for column
		{
			t[r][c]=a[c][r];
		}
	}
	for (r=0 ; r<3 ; r++) //for row
	{
		for(c=0 ; c<3 ; c++) // for column
		{
			printf("%f\t" , t[r][c]);
		}
		printf("\n");
	}
	return 0;
}



/*
        *****Output*****
		
enter the item (0 , 0) :1
enter the item (0 , 1) :2
enter the item (0 , 2) :3
enter the item (1 , 0) :4
enter the item (1 , 1) :5
enter the item (1 , 2) :6
enter the item (2 , 0) :7
enter the item (2 , 1) :8
enter the item (2 , 2) :9

the matrix is :

1.000000	2.000000	3.000000	
4.000000	5.000000	6.000000	
7.000000	8.000000	9.000000	
the Transpose matrix is :

1.000000	4.000000	7.000000	
2.000000	5.000000	8.000000	
3.000000	6.000000	9.000000	


---------------------

*/