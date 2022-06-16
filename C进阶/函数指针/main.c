#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int _ADD(int x, int y)
{
	return x + y;
}

int _SUB(int x, int y)
{
	return x - y;
}

int _MULTIPLY(int x, int y)
{
	return x * y;
}

int _EXECEPT(int x, int y)
{
	return x / y;
}
//int main()
//{
//	//指向函数的指针
//	//printf("%p\n", &_ADD);// 00 D7 13 57
//	//printf("%p\n", _ADD);// 00 D7 13 57
//	// 数组名  !=  &数组名  但是  函数名  ==  &函数名   很重要！！！
//	int (*p)(int, int) = _ADD;// 函数返回值类型  指针变量  (参数类型及个数)  
//	//printf("%p\n", p);
//
//	//函数指针的解引用就是在调用函数
//	//int sum = (*p)(1, 2);// * 没有实际意义，只是为了易于阅读  //***p 也是可以的
//	//int sum1 = p(1, 2);//p === _ADD
//	//printf("%d\n", sum);
//	//printf("%d\n", sum1);
//
//
//	//--------------------------------------------
//
//	//(*(void(*)())0)();// 将0强制类型转换 ( void(*)() )0 成函数指针类型再解引用  指向0地址的一个函数
//
//	//void(*fun(int, void(*)(int)))(int);
//	// fun 是函数名 参数是 int 和 void(*)(int)->函数指针   
//	// 返回值也是函数指针void(*)(int)，该函数指针指向一个参数是int，返回值是void的函数
//
//	//void(*)(int) fun(int, void(*)(int));//语法不支持这样书写
//
//	//简化书写易于阅读
//	typedef void(* pfun_t)(int);//相当于将void(*)(int) 函数指针类型重新定义为 pfun_t
//	pfun_t fun(int, pfun_t);
//
//
//
//	return 0;
//}
void meun()
{
	printf("模拟计算器\n");
	printf("1.加法\t2.减法\t3.乘法\t4.除法\n");
}

int main()
{
	//函数指针数组  存放函数指针的数组
	/*int (*pf1)(int, int) = _ADD;
	int (*pf2)(int, int) = _SUB;*/
	meun();
	//转移表
	int (*pfArr[5])(int, int) = { NULL,_ADD,_SUB,_MULTIPLY,_EXECEPT };// pfArr 就是函数指针数组
	//例子
	int input = 0;
	int x, y;
	int ret = 0;
	do
	{
		printf("请选择:\n");
		scanf("%d", &input);

		if (input >=1 && input<= 4)
		{
			printf("请输入两个操作数：\n");
			scanf("%d %d", &x, &y);
			int ret =(pfArr[input])(x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			break;
		}
		else
		{
			printf("请重新选择!");
		}
	} while (input);
	

	//指向 函数指针数组 的指针
	int (*(*p_fparr)[5])(int, int) = &pfArr;//指向的是一个含有5个元素的数组，每个数组元素的类型是 void(*)(int,int)
	

	return 0;
}
