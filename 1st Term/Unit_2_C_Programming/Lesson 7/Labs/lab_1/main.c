#include <stdio.h>
#include <time.h>

void main()
{
	clock_t t;
	t = clock();
	int num1 , num2 , sum;
	printf("enter the 1st number : \n");
	num1 =1;
	printf("enter the 2nd number : \n");
	num2 = 2;
	sum = num1 + num2;
	printf("sum of two value is %d\n" , sum);
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("fun() took %f seconds to execute\n", time_taken);
	
}