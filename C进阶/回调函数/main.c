#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
	char name[10];
	int age;
}Stu;


char GetStrHead(char ch[])
{
	if (ch != NULL)
	{
		return ch[0];
	}
	return 0;
}

int Compare_int(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}

int Compare_struct(const void* s1, const void* s2)
{
	Stu* p1 = (Stu*)s1;
	Stu* p2 = (Stu*)s2;
	int i = p1->age - p2->age;
	if (!i)
	{
		return GetStrHead(p1->name) - GetStrHead(p2->name);
	}
	return i;
}


int main()
{
	//回调函数就是一个通过函数指针调用的函数。如果你把函数的指针(地址)作为参数传递给另一个函数，当这个指针被用来调用其所指的函数时，我们就说这是回调函数
	//回调函数不是由该函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或条件进行响应
	int arr[] = { 2,43,565,7,1,4,7,8,3,22,76 };
	int len = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, len, sizeof(arr[0]), Compare_int);

	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}

	//使用qsort排序结构体数据
	Stu s[] = { {"Tom",23},{"Marry",18},{"Jike",23},{"Cat",30},{"Lily",26} };
	int len1 = sizeof(s) / sizeof(s[0]);
	qsort(s, len1, sizeof(s[0]), Compare_struct);
	
	for (int i = 0; i < len1; i++)
	{
		printf("%s %d\n", s[i].name, s[i].age);
	}

	return 0;
}