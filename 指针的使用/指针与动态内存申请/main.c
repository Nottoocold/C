#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int i;//��������Ŀռ��С
	char *p;
	scanf("%d",&i);
	p =(char*)malloc(i);//����ռ�ĵ�λ���ֽڣ�void* malloc(size_t size)�������ص���������ָ�룬�ڽ���ʱ��Ҫǿ��ת�����Լ���Ҫ������
	strcpy(p,"malloc success");
	puts(p);
	free(p);//����ѿռ�ʹ����֮����Ҫ�ͷţ�������ڳ������н���֮�����ϵͳ�������ͷš�p��ֵ����ı�
	//�ͷź�Ҫ��p��ֵ��Ϊnull������Ͱ�p��ΪҰָ�롣
	system("pause");
	return 0;

}