#include"uart.h"
unsigned char string_buffer[100] = "learn-in-depth : ahmed osama";
unsigned char const string_buffer2[100] = "learn-in-depth : ahmed osama";
unsigned char const string_buffer3[100] = "learn-in-depth : ahmed osama";
unsigned char const string_buffer4[100] = "learn-in-depth : ahmed osama";
void main()
{
	Uart_Send__string(string_buffer);
}