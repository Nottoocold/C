#include "fun.h"

int print_num(int i)
{
	printf("number = %d\n",i);
	print_message_wucan();
	return 1;
}

void print_message(char *p)
{
	printf("this string is %s\n",p);
}

void print_message_wucan()
{
	printf("this is a message\n");
}