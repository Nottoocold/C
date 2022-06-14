//
// Created by modua on 2022/6/13.
//
#include <stdio.h>
#include <assert.h>
//判断是不是素数 是返回1，否则返回2
int is_prime(int m)
{
	for (int i = 2; i < m; ++i)
	{
		if (m % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

//二分查找,查找成功返回索引值,查找失败返回-1
int binary_search(const int* arr, int value, int a_length)
{
	int left = 0;
	int right = a_length - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < value)
		{
			left = mid + 1;
		}
		else if (arr[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

//简单递归
void print(int a)
{
	if (a > 9)
	{
		print(a / 10);
	}
	printf("%d ", a % 10);
}

//求字符串长度，不包含 '\0'
unsigned int my_strlen(const char* arr)
{
	assert(arr != NULL);//断言指针，保证指针的有效性
	int len = 0;
	if (*arr != '\0')
	{
		len = my_strlen(arr + 1);
		//printf("%c ", *arr);
		len++;
	}
	return len;
}

char* reverse_string(char* start, char* end)
{
	if (start==NULL||end==NULL)
	{
		return NULL;
	}
	char* ret = start;
	char* left = start;
	char* right = end;
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
	return ret;

}


//const 修饰指针 的两种写法
//1.const Element* p  此时const修饰的时*p，即不能通过p来改变*p的值
//2.Element* const p  此时可以修改*p 但是不能修改p
//const 就近修饰？
//int m = 10;
//int n = 1;
//int* const p = &m;
//p = &n;//err p: 重定义

//拷贝字符串,将src所指空间的内容拷贝到dest所指空间,包括 '\0'
char* my_strcpy(char* dest,const char* src)//consr 防止 dest -> src
{
	//判断不是空指针
	/*if (dest != NULL && src != NULL)
	{
		while (*dest++ = *src++)
		{
			;
		}
	}*/
	char* ret = dest;
	assert(dest != NULL);//断言，true不执行，false会报出错误
	assert(src != NULL);
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

//冒泡排序
void bubble_sort(int arr[], int length)
{
	int i;//记录冒泡排序的趟数
	int j;
	for (i = 0; i < length - 1; ++i)
	{
		int flag = 1;//假设此躺排序的数据是有序的
		//每一趟排序
		for (j = 0; j < length - 1 - i; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;//标记本趟排序的数据不完全有序
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int getMax(int a, int b)
{
	return a > b ? a : b;
}

void Icm(int a, int b)
{
	int min = getMax(a, b);

	int e = min == a ? b : a;
	for (int i = 1; ; i++)
	{
		if (min * i % e == 0)
		{
			printf("%d\n", min * i);
			break;
		}
	}
}
