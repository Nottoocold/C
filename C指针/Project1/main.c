#include "test.h"

//int* getP()
//{
//	int a = 10;
//	return &a;
//}
//
//int getStrLen(char* ch)
//{
//	char* start = ch;
//	char* end = ch;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}


typedef struct Student
{
	char name[10];
	short age;
	char tel[12];
}Stu;

typedef struct Sub
{
	Stu Student_sub;
	char sex[4];
}sub_stu;

void print_struct_(Stu* s)
{
	printf("%s\n", s->name);
	printf("%s\n", s->tel);
	printf("%d\n", s->age);
}

int main()
{
	char t[] = "abc de";
	int len = my_strlen(t);
	reverse_string(t, t+len-1);
	char* start = t;
	while (*start != '\0')
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse_string(start, end - 1);
		if (*end != '\0')
		{
			start = end + 1;
		}
		else
		{
			start = end;
		}
	}
	printf("%s\n", t);

	//char ch[20] = { 0 };
	//char* c =  gets(ch);
	//printf("%s\n", ch);
	//printf("%p\n", c);
	//Icm(3, 7);
	/*struct Student s1;
	struct Student s2;*/
	//Stu s1 = { "赵永超",22,"15802414902" };//定义的同时初始化
	//printf("%s\n", s1.name);
	//print_struct_(&s1);
	/*sub_stu s = { s1,"男" };
	print_struct_(&s);*/

	//printf("%s\n", s.Student_sub.name);
	//printf("%d\n", s.Student_sub.age);
	//printf("%s\n", s.Student_sub.tel);
	
	//栈区的默认使用：先使用高地址区，再使用低地址区，而数组下标是由低地址到高地址的，所以在使用指针遍历数组时，可能会导致越界造成死循环
	//int i = 0;
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//for (i = 0; i <= 12; i++)//越界访问
	//{
	//	printf("hello\n");
	//	arr[i] = 0;
	//}

	//char a[] = "*******";//[1,3,2,1,2,3,1,\0]
	//char b[] = "abc";//[9,9,9,\0]
	////[9,9,9,\0,2,3,1,\0]
	//printf("%s\n", my_strcpy(a, b));//[9,9,9,\0]

	return 0;

	//print(1313);
	//printf("\n");

	//int* p = getP();//返回局部变量或临时变量的地址: a //这个代码是有问题的,函数调用结束后，a变量地址空间就归还给系统了

	//printf("%d\n", *p);
	
	//数组名就是数组首元素地址（有两个例外
	//1. sizeof(数组名)  此时数组名表示整个数组
	//2. &数组名  此时数组名代表整个数组，取出的是整个数组的地址
	//int arr3[] = { 0, 1, 2 };
	//printf("%d\n", sizeof(arr3) / sizeof(arr3[0]));
	//printf("%p\n", arr3);// 首元素地址
	//printf("%p\n", arr3 + 1);// 首元素地址
	//printf("%p\n", &arr3[0]);// 首元素地址
	//printf("%p\n", &arr3[0] + 1);// 首元素地址
	//printf("%p\n", &arr3);// 数组地址
	//printf("%p\n", &arr3 + 1);// 偏移整个数组的字节数（12字节）


	//int num[10] = {1,2,3,4,5,6,7,8,9,10};
	//printf("%d\n",&num[9]-&num[0]);//9 指针-指针 得到元素个数
	//
	//printf("%d\n", getStrLen("abc"));//3


	//float nums[5];
	//float* p;
	//for (p = &nums[5]; p > &nums[0];)//从后面开始初始化，这是标准
	//{
	//	*--p = 0;
	//}


	//sizeof() 计算变量/类型所占内存空间的大小，返回的是 unsigned 当一个负数与返回值比较时，会先将这个负数转为 unsigned 再进行比较
	
	//指针数组--数组
	//int a = 11;
	//int b = 12;
	//int c = 123;
	//int* arr[3] = { &a,&b,&c };//arr数组名 int* 指明数组中存放指针变量
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("%d ", *(arr[i]));
	//}
	//数组指针--指针

}
