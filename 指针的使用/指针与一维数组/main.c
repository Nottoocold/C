#include <stdio.h>
#include <stdlib.h>

void change(char *c)//һά����Ĵ���ʵ����������Ϊָ���
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