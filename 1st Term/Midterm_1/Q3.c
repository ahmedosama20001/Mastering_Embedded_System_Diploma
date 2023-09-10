/*
 ============================================================================
 Name        : Question_3
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Midterm_1 @ C_Programming
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void prime_num(int n1 , int n2);
int main()
{
	int x ,y ;
	printf("please enter two numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d",&x , &y);
	prime_num(x,y);
	return 0;
}

void prime_num(int n1 , int n2)
{

	int i , j , flag=0;
	printf("\nthe prime numbers between %d and %d are :",n1,n2);
	for(i=n1+1;i<n2;i++)
	{
		flag=0;
		for(j=2;j<=i/2;++j)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("%d ",i);
	}

}

