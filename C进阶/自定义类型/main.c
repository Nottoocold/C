#include <stdio.h>
#include <stddef.h>

//typedef struct Book//tag ��ʡ�ԣ����������ṹ��
//{
//	//��Ա����
//	char id[20];
//	char name[10];
//	int price;
//	struct Book* next;//�ṹ��������
//
//}Book/*b1, b2, b3�����б�, ��ȫ�ֱ���*/;

struct S
{
	int i;//char a
	char c;
	char a;//int i
};


//λ��,λ�εĳ�Ա��  int / unsigned int /signed int
//λ�� �ǲ���ƽ̨��
struct A
{
	//4���ֽ� - 32bit
	int _a : 2;// _aռ2��bitλ
	int _b : 4;
	int _c : 1;
	int _d : 6;
	//int _e : 20;
};

int main()
{
	//�ṹ��
	//struct Book b = { "123","C����",12,NULL };
	
	//struct S s = { 0 };
	//printf("%d\n", sizeof(s));//12 char int char
	//printf("%d\n", sizeof(s));//8  char char int

	//�ṹ���ڴ����
	//1.��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ��
	//2.�ӵڶ�����Ա�����������Ա����Ҫ���뵽 ĳ������(������) ���������ĵ�ַ��
	//3.������ = ������Ĭ�ϵ�һ�������� �� �ó�Ա��С�Ľ�Сֵ VS��Ĭ��Ϊ8
	//4.�ṹ����ռ�ռ��СΪ ���г�Ա������������������
	//5.���Ƕ���˽ṹ�壬��Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ��������С����������������(��Ƕ�׽ṹ��Ķ�����)��������


	//Ϊ����ֲ��ƽ̨ԭ��
	//Ϊ�˷ô������
	//�ÿռ任ʱ��
	//�����ý�С��Ա�ȷ�
	//�޸�Ĭ�϶�����  #pragma pack(2)
	//				 #pragma pack()

	//printf("%d\n", offsetof(struct S, i));//�õ���Ա��������ڽṹ����ʼλ�õ�ƫ����
	//printf("%d\n", offsetof(struct S, c));
	//printf("%d\n", offsetof(struct S, a));


	printf("%d\n", sizeof(struct A));//4
	return 0;
}