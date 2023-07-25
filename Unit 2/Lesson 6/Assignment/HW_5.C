/*
 ============================================================================
 Name        : ASSIGNMENT5.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_5 in C Struct, Ansi-style
 ============================================================================
 */
#include<stdio.h>
#include<string.h>
#define PI 3.1415
#define area(r) (PI*(r)*(r))

int main()
{
	int radius;
	float area ;
	printf("Enter the radius:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&radius);
	area = area(radius);
	printf("The area of circle = %.2f",area);
	return 0;
}






