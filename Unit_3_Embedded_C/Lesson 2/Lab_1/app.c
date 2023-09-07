#include"uart.h"
unsigned char string_buffer[100] = "learn-in-dept : ahmed osama";
unsigned char const string_buffer2[100] = "learn-in-depth : ahmed osama";
void main()
{
	Uart_Send__string(string_buffer);
}