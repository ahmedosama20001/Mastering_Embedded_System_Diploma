int fact(int a);
int main(void)
{
	printf("the factorial of (%d) = %d \n",10,fact(10));
	printf("the factorial of (%d) = %d \n",0,fact(0));
	printf("the factorial of (%d) = %d \n",5,fact(5));
	return 0;
}

int fact(int a)
{
	int f =1 ;
	for(;a>0;a--)
	{
		f*=a;
	}
	return f ;
}


/*
        *****Output*****
		
the factorial of (10) = 3628800 
the factorial of (0) = 1 
the factorial of (5) = 120


---------------------

*/