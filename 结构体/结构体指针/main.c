#include <stdio.h>
#include <stdlib.h>

//�ṹ�������
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
	struct student *p;//����ṹ��ָ��
	p=s;//��ʼ��
	printf("%s %d %c %5.2f\n",p->name,p->age,p->sex,p->score);//->�ṹ��ָ�����������������ʽṹ��ĳ�Ա
	p++;//ƫ����sizeof(student)���ֽ�  
	system("pause");

	return 0;
}