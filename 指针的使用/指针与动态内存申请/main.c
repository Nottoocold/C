#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int i;//代表申请的空间大小
	char *p;
	scanf("%d",&i);
	p =(char*)malloc(i);//申请空间的单位是字节，void* malloc(size_t size)函数返回的是无类型指针，在接收时需要强制转换成自己需要的类型
	strcpy(p,"malloc success");
	puts(p);
	free(p);//申请堆空间使用完之后需要释放，否则会在程序运行结束之后操作系统帮我们释放。p的值不会改变
	//释放后要把p的值赋为null，否则就把p称为野指针。
	system("pause");
	return 0;

}