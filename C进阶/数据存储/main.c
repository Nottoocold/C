/*
	���μ��壺	char  unsigned char  signed char
				short  ...
				int  ...
				long ...

	�����ͣ� float  double 
	�������ͣ����顢�ṹ�塢ö������enum����������union
	ָ�����ͣ�int* char* float* void* 
	�����ͣ�void


	�������ڴ����Բ�����ʽ�洢

	����ֽ������ݵĵ�λ���ݴ洢���ڴ�ߵ�ַ����

	С���ֽ������ݵĵ�λ���ݴ洢���ڴ�͵�ַ����
*/

#include <stdio.h>
#include <string.h>


int main()
{
	//��֤��ǰ�����Ǵ�˻���С��
	//int a = 1;
	//char* p = (char*)&a;
	//if (*p==1)
	//{
	//	printf("С��\n");
	//}
	//else
	//{
	//	printf("���\n");
	//}

	//char c = -1;
	//signed char d = -1;
	//unsigned char e = -1;
	//printf("%d %d %d \n", c, d, e);//-1 -1 255

	//char m = -128;//C���Ա�׼�в�û�й涨charĬ�����з��Ż����޷��ŵģ����Ǵ����������Ĭ��char���з��ŵ�

	//printf("%u\n", m);//��ӡʱҪ��������������������mԭ��������(signed char)
	//%u��ӡ�޷�������  &d��ӡ�з�������


	//unsigned i;
	//for (i = 9; i >= 0; i--)
	//{
	//	printf("%u\n", i);
	//}



	char a[1000] = { 0 };
	int i;
	for ( i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}

	printf("%d\n", strlen(a));

	return 0;
}
