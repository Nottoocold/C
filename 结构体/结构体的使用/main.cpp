#include <stdio.h>
#include <stdlib.h>
//�ṹ�������
struct student
{
	char name[10];
	int age;
	char sex;
	float score;
	char className[20];
};//�ṹ������������Ҫ�ӣ�

int main()
{
	//�ṹ����ռ�ռ���Ҫ���룬���cpu�����ڴ�Ч�ʣ������s��С��ռ44���ֽ�
	struct student s={"Tom",22,'m',99.5,"NO.1cs"};//�ṹ�嶨�弰��ʼ��
	printf("%s %d %c %5.2f %s\n",s.name,s.age,s.sex,s.score,s.className);
	struct student arr[2];//�ṹ������Ķ���
	//�Խṹ��������г�ʼ��
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