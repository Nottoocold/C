#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int _ADD(int x, int y)
{
	return x + y;
}

int _SUB(int x, int y)
{
	return x - y;
}

int _MULTIPLY(int x, int y)
{
	return x * y;
}

int _EXECEPT(int x, int y)
{
	return x / y;
}
//int main()
//{
//	//ָ������ָ��
//	//printf("%p\n", &_ADD);// 00 D7 13 57
//	//printf("%p\n", _ADD);// 00 D7 13 57
//	// ������  !=  &������  ����  ������  ==  &������   ����Ҫ������
//	int (*p)(int, int) = _ADD;// ��������ֵ����  ָ�����  (�������ͼ�����)  
//	//printf("%p\n", p);
//
//	//����ָ��Ľ����þ����ڵ��ú���
//	//int sum = (*p)(1, 2);// * û��ʵ�����壬ֻ��Ϊ�������Ķ�  //***p Ҳ�ǿ��Ե�
//	//int sum1 = p(1, 2);//p === _ADD
//	//printf("%d\n", sum);
//	//printf("%d\n", sum1);
//
//
//	//--------------------------------------------
//
//	//(*(void(*)())0)();// ��0ǿ������ת�� ( void(*)() )0 �ɺ���ָ�������ٽ�����  ָ��0��ַ��һ������
//
//	//void(*fun(int, void(*)(int)))(int);
//	// fun �Ǻ����� ������ int �� void(*)(int)->����ָ��   
//	// ����ֵҲ�Ǻ���ָ��void(*)(int)���ú���ָ��ָ��һ��������int������ֵ��void�ĺ���
//
//	//void(*)(int) fun(int, void(*)(int));//�﷨��֧��������д
//
//	//����д�����Ķ�
//	typedef void(* pfun_t)(int);//�൱�ڽ�void(*)(int) ����ָ���������¶���Ϊ pfun_t
//	pfun_t fun(int, pfun_t);
//
//
//
//	return 0;
//}
void meun()
{
	printf("ģ�������\n");
	printf("1.�ӷ�\t2.����\t3.�˷�\t4.����\n");
}

int main()
{
	//����ָ������  ��ź���ָ�������
	/*int (*pf1)(int, int) = _ADD;
	int (*pf2)(int, int) = _SUB;*/
	meun();
	//ת�Ʊ�
	int (*pfArr[5])(int, int) = { NULL,_ADD,_SUB,_MULTIPLY,_EXECEPT };// pfArr ���Ǻ���ָ������
	//����
	int input = 0;
	int x, y;
	int ret = 0;
	do
	{
		printf("��ѡ��:\n");
		scanf("%d", &input);

		if (input >=1 && input<= 4)
		{
			printf("������������������\n");
			scanf("%d %d", &x, &y);
			int ret =(pfArr[input])(x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			break;
		}
		else
		{
			printf("������ѡ��!");
		}
	} while (input);
	

	//ָ�� ����ָ������ ��ָ��
	int (*(*p_fparr)[5])(int, int) = &pfArr;//ָ�����һ������5��Ԫ�ص����飬ÿ������Ԫ�ص������� void(*)(int,int)
	

	return 0;
}
