/*
 ============================================================================
 Name        : Question_8
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Midterm_1 @ C_Programming
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverse (int size,int a[],int b[]);
int main(void) {
	int a[100],b[100],i,size;
	printf ("Enter the size of an input array :");
	fflush (stdout );
	scanf("%d",&size);
	for (i=0;i<size;i++)
	{
		fflush (stdout);
		scanf ("%d", &a[i]);
	}
	reverse (size ,a,b);
}
void reverse (int size,int a[],int b[])
{
	int i,j;
	for (i=size-1 ,j=0;i>=0;i--,j++)
	{
		b[j]=a[i];}
	printf("the reverse of array is :");
	fflush(stdout);
	for (j=0;j<size;j++)
	{
		printf("  %d",b[j]);
		fflush (stdout);

	}
}

