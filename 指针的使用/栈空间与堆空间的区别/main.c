#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* print_stack()
{
	char c[] = "stack is here";
	puts(c);
	return c;
}

char* print_malloc()
{
	char* a = (char*)malloc(30);
	strcpy(a,"malloc is here");
	puts(a);
	return a;
}

int main()
{
	char *p;
	p = print_stack();
	//puts(p);//������ָ��������ջ�ռ�ķ���ֵ����Ϊ����ջ�ռ�ĺ���ִ�н�����ͱ��ͷŸ�������������������ʹ����
	p = print_malloc();//���ڶѿռ��е������ں���ִ�н����󲻻ᱻ�ͷţ�ֻ��ִ��free()�Ż��ͷ�
	puts(p);//���Կ��Դ�ӡ����malloc is here
	system("pause");
	return 0;
}