#include <stdio.h>
#include <stddef.h>

//typedef struct Book//tag 可省略，则是匿名结构体
//{
//	//成员变量
//	char id[20];
//	char name[10];
//	int price;
//	struct Book* next;//结构体自引用
//
//}Book/*b1, b2, b3变量列表, 是全局变量*/;

struct S
{
	int i;//char a
	char c;
	char a;//int i
};


//位段,位段的成员是  int / unsigned int /signed int
//位段 是不跨平台的
struct A
{
	//4个字节 - 32bit
	int _a : 2;// _a占2个bit位
	int _b : 4;
	int _c : 1;
	int _d : 6;
	//int _e : 20;
};

int main()
{
	//结构体
	//struct Book b = { "123","C语言",12,NULL };
	
	//struct S s = { 0 };
	//printf("%d\n", sizeof(s));//12 char int char
	//printf("%d\n", sizeof(s));//8  char char int

	//结构体内存对齐
	//1.第一个成员在与结构体变量偏移量为0的地址处
	//2.从第二个成员往后的其他成员变量要对齐到 某个数字(对齐数) 的整数倍的地址处
	//3.对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值 VS中默认为8
	//4.结构体所占空间大小为 所有成员中最大对齐数的整数倍
	//5.如果嵌套了结构体，则嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所有最大对齐数(含嵌套结构体的对齐数)的整数倍


	//为了移植（平台原因）
	//为了访存更快速
	//拿空间换时间
	//可以让较小成员先放
	//修改默认对齐数  #pragma pack(2)
	//				 #pragma pack()

	//printf("%d\n", offsetof(struct S, i));//得到成员变量相较于结构体起始位置的偏移量
	//printf("%d\n", offsetof(struct S, c));
	//printf("%d\n", offsetof(struct S, a));


	printf("%d\n", sizeof(struct A));//4
	return 0;
}