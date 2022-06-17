#include <stdlib.h>
#include <stdio.h>

typedef struct S
{
	int a;
	int arr[];//柔性数组,大小未知
	//malloc()动态分配数组大小，大小要
}s;


//函数栈帧，函数内部创建的变量类型都是在栈空间中，函数结束，随之释放
//堆空间，动态内存分配函数申请空间

int main()
{
	//malloc()
	//int* p = (int*)malloc(sizeof(int) * 10);
	//free(p);
	//p = NULL;//
	////calloc()
	//int* q = (int*)calloc(0, sizeof(int));
	//printf("%p\n", q);
	//free(q);
	//q = NULL;
	//printf("%p\n", q);
	s* p = (s*)malloc(sizeof(s) + sizeof(int) * 10);
	if (p != NULL)
	{
		p->a = 10;
		for (int i = 0; i < 10; i++)
		{
			p->arr[i] = i;
		}
	}

	//扩容
	s* ps = (s*)realloc(p, sizeof(s) + sizeof(int) * 10);
	if (ps != NULL)
	{
		p = ps;
	}
	//使用

	//释放
	free(p);
	p = NULL;

	return 0;
}
