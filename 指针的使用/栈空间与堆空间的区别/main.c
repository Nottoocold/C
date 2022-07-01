#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* print_stack()
{
	char c[] = "stack is here";
	puts(c);
	return c;
}

char* print_malloc()
{
	char* a = (char*)malloc(30);
	strcpy(a,"malloc is here");
	puts(a);
	return a;
}

int main()
{
	char *p;
	p = print_stack();
	//puts(p);//不能用指针来接收栈空间的返回值，因为处于栈空间的函数执行结束后就被释放给了其他变量（函数）使用了
	p = print_malloc();//处于堆空间中的数组在函数执行结束后不会被释放，只有执行free()才会释放
	puts(p);//所以可以打印出来malloc is here
	system("pause");
	return 0;
}