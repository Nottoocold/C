//
// Created by modua on 2022/6/13.
//
#include <stdio.h>
#include <assert.h>
//�ж��ǲ������� �Ƿ���1�����򷵻�2
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

//���ֲ���,���ҳɹ���������ֵ,����ʧ�ܷ���-1
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

//�򵥵ݹ�
void print(int a)
{
	if (a > 9)
	{
		print(a / 10);
	}
	printf("%d ", a % 10);
}

//���ַ������ȣ������� '\0'
unsigned int my_strlen(const char* arr)
{
	assert(arr != NULL);//����ָ�룬��ָ֤�����Ч��
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


//const ����ָ�� ������д��
//1.const Element* p  ��ʱconst���ε�ʱ*p��������ͨ��p���ı�*p��ֵ
//2.Element* const p  ��ʱ�����޸�*p ���ǲ����޸�p
//const �ͽ����Σ�
//int m = 10;
//int n = 1;
//int* const p = &m;
//p = &n;//err p: �ض���

//�����ַ���,��src��ָ�ռ�����ݿ�����dest��ָ�ռ�,���� '\0'
char* my_strcpy(char* dest,const char* src)//consr ��ֹ dest -> src
{
	//�жϲ��ǿ�ָ��
	/*if (dest != NULL && src != NULL)
	{
		while (*dest++ = *src++)
		{
			;
		}
	}*/
	char* ret = dest;
	assert(dest != NULL);//���ԣ�true��ִ�У�false�ᱨ������
	assert(src != NULL);
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

//ð������
void bubble_sort(int arr[], int length)
{
	int i;//��¼ð�����������
	int j;
	for (i = 0; i < length - 1; ++i)
	{
		int flag = 1;//�����������������������
		//ÿһ������
		for (j = 0; j < length - 1 - i; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;//��Ǳ�����������ݲ���ȫ����
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
