#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//̨�����⣬������n��̨�ף�ÿ��ֻ����1������2�������ߵ���n��̨�׿��м����߷�������
//��1��̨�ף���1���߷�����2��̨�ף���2���߷���3��̨�ף���3���߷���4��̨�ף���5���߷����ú����ݹ����

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