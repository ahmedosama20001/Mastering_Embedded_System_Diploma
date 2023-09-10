/*
 ============================================================================
 Name        : ASSIGNMENT7.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_1 in C Pointers, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include<string.h>

int main()
{
	int m=29 , *ab;
	printf("address of m: %p\n",&m);
	printf("value of m : %d\n\n",m);

	ab=&m;
	printf("now ab is assigned with the address of m\n");
	printf("address of pointer ab :%p\n",ab);
	printf("content of pointer ab : %d\n\n",*ab);

	printf("the value of m assigned to 34 now\n");
	m=34;
	printf("address of pointer ab :%p\n",ab);
	printf("content of pointer ab : %d\n\n",*ab);

	printf("the pointer variable ab is assigned with the value 7 now\n");
	*ab=7;
	printf("address of m :%p\n",&m);
	printf("value of m : %d",m);

}
