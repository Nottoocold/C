#include <stdlib.h>
#include <stdio.h>

typedef struct S
{
	int a;
	int arr[];//��������,��Сδ֪
	//malloc()��̬���������С����СҪ
}s;


//����ջ֡�������ڲ������ı������Ͷ�����ջ�ռ��У�������������֮�ͷ�
//�ѿռ䣬��̬�ڴ���亯������ռ�

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
	printf("%d\n", sizeof(s));
	printf("%d\n", sizeof(s) + sizeof(int) * 10);
	s* p = (s*)malloc(sizeof(s) + sizeof(int) * 10);
	if (p != NULL)
	{
		p->a = 10;
		for (int i = 0; i < 10; i++)
		{
			p->arr[i] = i;
		}
	}

	//����
	printf("%d\n", sizeof(s));
	printf("%d\n", sizeof(s) + sizeof(int) * 20);
	s* ps = (s*)realloc(p, sizeof(s) + sizeof(int) * 20);
	if (ps != NULL)
	{
		p = ps;
		for (int i = 0; i < 20; i++)
		{
			p->arr[i] = i;
		}
	}
	//ʹ��
	
	//�ͷ�
	free(p);
	p = NULL;

	return 0;
}
