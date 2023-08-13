#include <stdio.h>

//int debug_enable =1 ;

//#define debug

/*#define debug
#ifdef debug
int debug_enable =1;
#else
int debug_enable =0;
#endif*/

#define DPrintf(debug_level,...) if (debug_level > 1)\
 	printf("@ Func :%s ,File : %s , Line : %d", __func__, __FILE__,__LINE__); \
 	printf(">> \t");\
	printf(__VA_ARGS__ ); 

void CAN_send()
{
	#ifdef debug
	DPrintf(3,"\n");
	#endif
}
void can_init()
{
	#ifdef debug
	DPrintf(3,"\n");
	#endif
}
int main()
{
	#ifdef debug
	DPrintf(3,"\n");
	#endif
	can_init();
	CAN_send();
	#ifdef debug
	DPrintf(3,"\n");
	#endif
	return 0;
}
