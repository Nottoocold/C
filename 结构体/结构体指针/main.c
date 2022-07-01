#include <stdio.h>
#include <stdlib.h>

//结构体的声明
struct student
{
	char name[10];
	int age;
	char sex;
	float score;
};

int main()
{
	struct student s[2]={"Tom",22,'m',99.5,"da",31,'f',32.3};
	struct student *p;//定义结构体指针
	p=s;//初始化
	printf("%s %d %c %5.2f\n",p->name,p->age,p->sex,p->score);//->结构体指针的运算符，用来访问结构体的成员
	p++;//偏移了sizeof(student)个字节  
	system("pause");

	return 0;
}