/*
 ============================================================================
 Name        : ASSIGNMENT7.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_4 in C Pointers, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main()
{
	int arr[15] ,i , n ;
	int *ptr;
	printf("input the number of elements to store in the array (max 15): ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	printf("input %d number of elements in the array :\n",n);
	ptr=&arr[0];
	for(i=0;i<n;i++)
	{
		printf("element- %d : ",i+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%d",ptr);
		ptr++;
	}
	ptr = &arr[n-1];
	printf("the elements of array in reverse order are :\n");
	for(i=n;i>0;i--)
	{
		printf("\nelements - %d : %d",i,*ptr);
		ptr--;
	}
	return 0;
}
