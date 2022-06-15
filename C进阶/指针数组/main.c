#include <stdio.h>



void print(int(*p)[5], int row, int col)
{
	//参数一：数组指针(行指针)
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", *(*(p + i) + j));//行指针解引用[ *(p + i) ]得到列指针，列指针解引用  *(*(p + i) + j)  得到值
		}
		printf("\n");
	}

	
}


int main()
{
	//指针数组：存放指针的数组
	int* a[3];
	int* arr[3] = {&a};
	
	//数组指针：指向数组的指针
	int num[3];
	int (*parr)[3] = &num;


	//例子
	double* d[3];
	double* (*dp)[3] = &d;

	//例子
	int(*parr[10])[5];//parr首先是一个数组，数组中存放10个指针，而存放的每一个指针的类型是数组指针，每一个数组指针指向的是5个长度的整形数组


	int nums[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{5,6,4,2,7} };
	print(nums, 3, 5);

	return 0;
}