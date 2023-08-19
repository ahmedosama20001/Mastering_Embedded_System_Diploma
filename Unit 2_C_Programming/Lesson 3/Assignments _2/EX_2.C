/*
 ============================================================================
 Name        : EX_2.c
 Author      : Ahmed Osama
 Version     :
 Copyright   : Your copyright notice
 Description : HW_2 in C Basics , Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char v_chara ;
	    printf("enter an alphabet: ");
	    fflush(stdin);
	    fflush(stdout);
	    scanf("%c" , &v_chara);
	    if(v_chara=='a' || v_chara=='e'|| v_chara=='i' || v_chara == 'o' || v_chara == 'u')
	    {
	        printf("%c is vowel" , v_chara);
	    }

	    else
	    {
	    	printf("%c is a constant" , v_chara);

	    }
	return 0;
}
