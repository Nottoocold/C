#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int i;//ȫ�ֱ���������ʼ����Ĭ��Ϊ0

void test(int** p)
{
	printf("%p\n", *p);//&a
	printf("%d\n", **p);//11
	
}

int main()
{
	//int a = 0x11223344;
	//char* p = (char*)&a;
	//*p = 0;
	//printf("%x\n", a);//��ʮ�����ƴ�ӡ 11223300
	//return 0;

	//i--;//-1
	////sizeof ���������ص���unsigned int ���ڱȽ�ʱ -1 �ᱻ�����޷���������
	//if (i > sizeof(i))//-1 > 4
	//{
	//	printf(">\n");//
	//}
	//else
	//{
	//	printf("<\n");
	//}
	/*int a;
	int n;
	scanf("%d %d", &a, &n);
	int i;
	int temp = 0;
	int sum = 0;
	for ( i = 0; i < n; i++)
	{
		temp = temp * 10 + a;
		sum += temp;
	}
	printf("a��ǰn��͵��� %d", sum);
	return 0;*/

	//����ָ�봫��
	int a = 11;
	printf("%p\n", &a);
	int* p = &a;//һ��ָ��
	int** pp = &p;//����ָ��
	test(pp);//&p

	int* arr[10] = { &a };
	test(arr);//arr��Ԫ��(int*)��ַ-->&(int*)

	return 0;
}
