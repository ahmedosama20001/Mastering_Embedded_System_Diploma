/*
 ============================================================================
 Name        : lab_1.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : Lab 1 in C Basics, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	char choice ;
	float r , pi = 3.14159 ; // radius and pi
	float area , cir ; // area and circumference
	printf("enter circle radius: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&r);
	printf("Enter your choice (a to print the area , c to print the circumference) : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &choice);
	if (choice == 'a')
	{
		area = pi * r * r;
		printf("the area is = %f" , area);
	}
	else if(choice == 'c')
	{
		cir = 2 * pi * r ;
		printf("the circumference is = %f ",cir);
	}
	else
	{
		printf("wrong choice !!!");
	}
	return 0;
}



/*
        *****Output*****
		
enter circle radius: 5
Enter your choice (a to print the area , c to print the circumference) : a
the area is = 78.539749

---------------------
enter circle radius: 5
Enter your choice (a to print the area , c to print the circumference) : c
the circumference is = 31.415901 

---------------------
enter circle radius: 5
Enter your choice (a to print the area , c to print the circumference) : d
wrong choice !!!

*/