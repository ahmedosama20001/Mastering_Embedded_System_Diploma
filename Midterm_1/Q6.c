/*
 ============================================================================
 Name        : Question_6
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Midterm_1 @ C_Programming
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int uniquenum(int a[], int n);
int main()
{
	int i, x ;
	printf("please enter size of array: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&i);
	int a[i];
	printf("please enter some numbers to find the unique(s): ");
	fflush(stdin);
	fflush(stdout);
	for(x=0 ; x<i ; x++)
	{
		scanf("%d",&a[x]);
	}
	printf("the unique(s) number(s) is : %d",uniquenum(a,i));
	return 0;
}

int uniquenum(int a[], int n)
{
	int t=0,j;
	for (j=0;j<n;j++)
		t^=a[j];
	return t;
}

