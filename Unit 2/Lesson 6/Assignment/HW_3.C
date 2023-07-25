/*
 ============================================================================
 Name        : ASSIGNMENT3.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_3 in C Struct, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Scomplex
{
	float m_R;
	float m_I;
}x,y,sum;
struct Scomplex add(struct Scomplex n1 , struct Scomplex n2);
int main()
{
	printf("for 1st complex number:\n");
	printf("enter real and imaginary respectively: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",&x.m_R , &x.m_I);

	printf("\nfor 2nd complex number:\n");
	printf("enter real and imaginary respectively: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",&y.m_R , &y.m_I);
	sum = add(x,y);
	printf("Sum = %f + %f j",sum.m_R,sum.m_I);
	return 0 ;
}

struct Scomplex add(struct Scomplex n1 , struct Scomplex n2)
{
	struct Scomplex sum;
	sum.m_R = n1.m_R + n2.m_R;
	sum.m_I = n1.m_I + n2.m_I;
	return sum ;
}


