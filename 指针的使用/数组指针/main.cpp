#include <stdio.h>

int main()
{
	int temp[5] = { 1,2,3,4,5 };
	int(*p)[5] = &temp;
	bool flag = (*p) == temp;
	if (flag)
	{
		printf("%s", "*p��temp�ǵȼ۵�,�����洢���������׵�ֵַ");
	}
	int i;
	for (int i = 0; i < 5; i++)
	{
		printf("%d,%d,%d\n", *(*p + i),temp[i],*(temp+i));//��temp[i]
	}

	return 0;
}
