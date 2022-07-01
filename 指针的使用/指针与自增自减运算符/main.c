#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[4]={1,2,3,4};
	int *p;
	int j;
	p=a;//将数组的首地址赋值给指针变量p
	j=*p++;//j=*p，p++，任何时候都是把后++去掉，然后看另外一个优先级是否比++高
	printf("a[0]=%d,j=%d,*p=%d\n",a[0],j,*p);//此时输出结果是112

	//p=a;
	//j=(*p)++;
	//printf("a[0]=%d,j=%d,*p=%d\n",a[0],j,*p);//此时输出结果是212

	p=a;//p指向数组a的首地址
	j=p[0]++;//p[0]就是*p，j=p[0],p[0]++,此时p[0]=a[0]=1+1=2
	printf("a[0]=%d,j=%d,*p=%d\n",a[0],j,*p);//212
	system("pause");
	return 0;
}