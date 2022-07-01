#include <stdio.h>
#include <stdlib.h>
//结构体的声明
struct student
{
	char name[10];
	int age;
	char sex;
	float score;
	char className[20];
};//结构体声明结束后要加；

int main()
{
	//结构体所占空间需要对齐，提高cpu访问内存效率，下面的s大小是占44个字节
	struct student s={"Tom",22,'m',99.5,"NO.1cs"};//结构体定义及初始化
	printf("%s %d %c %5.2f %s\n",s.name,s.age,s.sex,s.score,s.className);
	struct student arr[2];//结构体数组的定义
	//对结构体数组进行初始化
	for(int i = 0;i<2;i++)
	{
		scanf("%s%d %c%f%s",arr[i].name,&arr[i].age,&arr[i].sex,&arr[i].score,arr[i].className);
	}
	for(int i = 0;i<2;i++)
	{
		printf("%s %d %c %5.2f %s\n",arr[i].name,arr[i].age,arr[i].sex,arr[i].score,arr[i].className);
	}
	system("pause");
	return 0;
}