#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int i;//全局变量，不初始化，默认为0

void test(int** p)
{
	printf("%p\n", *p);//&a
	printf("%d\n", **p);//11
	
}

int main()
{
	//int a = 0x11223344;
	//char* p = (char*)&a;
	//*p = 0;
	//printf("%x\n", a);//以十六进制打印 11223300
	//return 0;

	//i--;//-1
	////sizeof 运算结果返回的是unsigned int ，在比较时 -1 会被当成无符号数处理
	//if (i > sizeof(i))//-1 > 4
	//{
	//	printf(">\n");//
	//}
	//else
	//{
	//	printf("<\n");
	//}
	/*int a;
	int n;
	scanf("%d %d", &a, &n);
	int i;
	int temp = 0;
	int sum = 0;
	for ( i = 0; i < n; i++)
	{
		temp = temp * 10 + a;
		sum += temp;
	}
	printf("a的前n项和等于 %d", sum);
	return 0;*/

	//二级指针传参
	int a = 11;
	printf("%p\n", &a);
	int* p = &a;//一级指针
	int** pp = &p;//二级指针
	test(pp);//&p

	int* arr[10] = { &a };
	test(arr);//arr首元素(int*)地址-->&(int*)

	return 0;
}
