#include <stdio.h>

int main()
{
	int temp[5] = { 1,2,3,4,5 };
	int(*p)[5] = &temp;
	bool flag = (*p) == temp;
	if (flag)
	{
		printf("%s", "*p与temp是等价的,即都存储的是数组首地址值");
	}
	int i;
	for (int i = 0; i < 5; i++)
	{
		printf("%d,%d,%d\n", *(*p + i),temp[i],*(temp+i));//即temp[i]
	}

	return 0;
}
