#include <stdio.h>



void print(int(*p)[5], int row, int col)
{
	//����һ������ָ��(��ָ��)
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", *(*(p + i) + j));//��ָ�������[ *(p + i) ]�õ���ָ�룬��ָ�������  *(*(p + i) + j)  �õ�ֵ
		}
		printf("\n");
	}

}


int main()
{
	//ָ�����飺���ָ�������
	int* a[3];
	int* arr[3] = { NULL };
	
	//����ָ�룺ָ�������ָ��
	int num[3] = { 0 };
	int (*parr)[3] = &num;

	//����
	double* d[3] = { NULL };
	double* const(*dp)[3] = &d;

	//����
	int(*par[10])[5];//parr������һ�����飬�����д��10��ָ�룬����ŵ�ÿһ��ָ�������������ָ�룬ÿһ������ָ��ָ�����5�����ȵ���������


	int nums[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{5,6,4,2,7} };
	print(nums, 3, 5);

	return 0;
}