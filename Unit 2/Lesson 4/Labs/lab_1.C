/*
 ============================================================================
 Name        : lab_1.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Lab 1 in C Basics (Arrays) , Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	float degrees [10];
	for (i=0 ; i<10 ; i++)
	{
		printf("Enter student %d degree :",i+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%f", &degrees[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("\nStudent %d degree is : %f" , i+1 , degrees[i]);
	}
	return 0;
}



/*
        *****Output*****
		
Enter student 1 degree :10
Enter student 2 degree :9.5
Enter student 3 degree :9
Enter student 4 degree :8.5
Enter student 5 degree :8
Enter student 6 degree :7.5
Enter student 7 degree :7
Enter student 8 degree :6.5
Enter student 9 degree :6
Enter student 10 degree :5.5

Student 1 degree is : 10.000000
Student 2 degree is : 9.500000
Student 3 degree is : 9.000000
Student 4 degree is : 8.500000
Student 5 degree is : 8.000000
Student 6 degree is : 7.500000
Student 7 degree is : 7.000000
Student 8 degree is : 6.500000
Student 9 degree is : 6.000000
Student 10 degree is : 5.500000

---------------------

*/
