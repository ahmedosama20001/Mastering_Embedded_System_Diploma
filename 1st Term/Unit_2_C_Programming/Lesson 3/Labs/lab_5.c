/*
 ============================================================================
 Name        : lab_5.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Lab 4 in C Basics , Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num_of_stu , i ;
	float dgree , sum =0.0;
	printf("enter the number of the students : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &num_of_stu);
	for ( i = 1 ; i <= num_of_stu ; i++)
	{
		printf("Enter student (%d) dgree : " , i);
		fflush(stdin);
		fflush(stdout);
		scanf("%f", &dgree);
		sum += dgree;
	}
	printf("Average students degree is : %f" , sum/num_of_stu);
	return 0;
}


/*
        *****Output*****
		
enter the number of the students : 7
Enter student (1) dgree : 12
Enter student (2) dgree : 13
Enter student (3) dgree : 14
Enter student (4) dgree : 15
Enter student (5) dgree : 16
Enter student (6) dgree : 17
Enter student (7) dgree : 18
Average students degree is : 15.000000

---------------------

*/