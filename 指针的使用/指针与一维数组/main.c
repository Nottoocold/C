#include <stdio.h>
#include <stdlib.h>

void change(char *c)//一维数组的传递实际上是弱化为指针的
{
	if(*(c+1)==c[1])
		printf("true\n");
	c[1]=c[1]-32;
}

int main()
{
	char a[6]="hello";
	change(a);
	printf("%s\n",a);
	system("pause");
	return 0;
}