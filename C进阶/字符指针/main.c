#include <stdio.h>


int main()
{
	//char ch = 'm';
	//char* p = &ch;

	//char* s = "hello world";//s��ŵ����׵�ַ
	//*s = 'H';//�����ַ������ܸ���
	//printf("%c\n", *s);//h

	char str1[] = "hello";
	char str2[] = "hello";
	char* p1 = "hello";
	char* p2 = "hello";

	if (str1 == str2)
	{
		printf("str1 and str2 are same\n");
	}
	else
	{
		printf("str1 and str2 are not same\n");//
	}

	if (p1 == p2)
	{
		printf("p1 and p2 are same\n");//
	}
	else
	{
		printf("p1 and p2 are not same\n");
	}

	return 0;
}