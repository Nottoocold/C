/*
	整形家族：	char  unsigned char  signed char
				short  ...
				int  ...
				long ...

	浮点型： float  double 
	构造类型：数组、结构体、枚举类型enum、联合类型union
	指针类型：int* char* float* void* 
	空类型：void


	整数在内存中以补码形式存储

	大端字节序：数据的低位数据存储在内存高地址区域

	小端字节序：数据的低位数据存储在内存低地址区域
*/

#include <stdio.h>
#include <string.h>


int main()
{
	//验证当前机器是大端还是小端
	//int a = 1;
	//char* p = (char*)&a;
	//if (*p==1)
	//{
	//	printf("小端\n");
	//}
	//else
	//{
	//	printf("大端\n");
	//}

	//char c = -1;
	//signed char d = -1;
	//unsigned char e = -1;
	//printf("%d %d %d \n", c, d, e);//-1 -1 255

	//char m = -128;//C语言标准中并没有规定char默认是有符号还是无符号的，但是大多数编译器默认char是有符号的

	//printf("%u\n", m);//打印时要考虑整形提升，提升看m原来的类型(signed char)
	//%u打印无符号整数  &d打印有符号整数


	//unsigned i;
	//for (i = 9; i >= 0; i--)
	//{
	//	printf("%u\n", i);
	//}



	char a[1000] = { 0 };
	int i;
	for ( i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}

	printf("%d\n", strlen(a));

	return 0;
}
