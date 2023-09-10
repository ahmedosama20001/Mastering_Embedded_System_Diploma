/*
 ============================================================================
 Name        : ASSIGNMENT7.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_5 in C Pointers, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct sdata
{
	char name[20];
	int id;
};

int main()
{
	struct sdata* emp[3];
	struct sdata emp1 = {"ahmed", 123};
	struct sdata emp2 = {"mohamed", 124};
	struct sdata emp3 = {"khalid", 125};
	emp[0] = &emp1;
	emp[1] = &emp2;
	emp[2] = &emp3;
	for (int i = 0; i < 3; i++)
	{
		printf("Name: %s, Id: %d\n", emp[i]->name, emp[i]->id);
	}
	return 0;
}
