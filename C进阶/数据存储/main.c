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



	/*char a[1000] = { 0 };
	int i;
	for ( i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}

	printf("%d\n", strlen(a));*/


	//int a = 9;
	//float* pF = (float*) & a;
	//printf("a value is %d\n", a);//9
	//printf("*pF value is %f\n", *pF);//  0.000000
	//*pF = 9.0;
	//printf("a value is %d\n", a);// 1091567616
	//printf("*pF value is %f\n", *pF);//9.0

	/*
		IEEE754 �涨������һ�������Ƹ�����v���Ա�ʾ�����µ���ʽ��
				��-1��^S		* M *			2^E
				  ����λ  1=<��Ч����<2     ָ��λ
				s = 0 / 1
				float M = 23bit  E = 8bit
				double M = 52bit  E = 11bit


		���ڸ��������ڴ���ȡ��ʱ����Ϊ���������
											1��E��ȫΪ0��ȫΪ1   ��ֵ = E-127
											2��ȫΪ0		E = 1-127  M����ǰ�油��ԭ����1 ���ǻ�ԭΪ 0.xxxxxx...  ��ʾ-+0 �� ���޽ӽ���0����  ��Ϊָ�����ַǳ�С
											3��ȫΪ1    �����ЧλȫΪ0����ʾ���������
	*/

	float f = 5.5f;//0 1000 0001 0110 0000 0000 0000 0000 000 --> 40 b0 00 00


	return 0;
}
