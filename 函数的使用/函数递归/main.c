#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//台阶问题，假如有n个台阶，每次只能有1步或者2步，问走到第n个台阶可有几种走法。例如
//有1个台阶，有1种走法；有2个台阶，有2种走法；3个台阶，有3种走法；4个台阶，有5种走法，用函数递归求解

int step(int n)
{
	if(n==1||n==2)
		return n;
	return step(n-1)+step(n-2);
}

int main()
{
	int i;
	scanf("%d",&i);
	printf("%d\n",step(i));
	system("pause");
	return 0;
}