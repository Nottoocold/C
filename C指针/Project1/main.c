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
	//Stu s1 = { "������",22,"15802414902" };//�����ͬʱ��ʼ��
	//printf("%s\n", s1.name);
	//print_struct_(&s1);
	/*sub_stu s = { s1,"��" };
	print_struct_(&s);*/

	//printf("%s\n", s.Student_sub.name);
	//printf("%d\n", s.Student_sub.age);
	//printf("%s\n", s.Student_sub.tel);
	
	//ջ����Ĭ��ʹ�ã���ʹ�øߵ�ַ������ʹ�õ͵�ַ�����������±����ɵ͵�ַ���ߵ�ַ�ģ�������ʹ��ָ���������ʱ�����ܻᵼ��Խ�������ѭ��
	//int i = 0;
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//for (i = 0; i <= 12; i++)//Խ�����
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

	//int* p = getP();//���ؾֲ���������ʱ�����ĵ�ַ: a //����������������,�������ý�����a������ַ�ռ�͹黹��ϵͳ��

	//printf("%d\n", *p);
	
	//����������������Ԫ�ص�ַ������������
	//1. sizeof(������)  ��ʱ��������ʾ��������
	//2. &������  ��ʱ�����������������飬ȡ��������������ĵ�ַ
	//int arr3[] = { 0, 1, 2 };
	//printf("%d\n", sizeof(arr3) / sizeof(arr3[0]));
	//printf("%p\n", arr3);// ��Ԫ�ص�ַ
	//printf("%p\n", arr3 + 1);// ��Ԫ�ص�ַ
	//printf("%p\n", &arr3[0]);// ��Ԫ�ص�ַ
	//printf("%p\n", &arr3[0] + 1);// ��Ԫ�ص�ַ
	//printf("%p\n", &arr3);// �����ַ
	//printf("%p\n", &arr3 + 1);// ƫ������������ֽ�����12�ֽڣ�


	//int num[10] = {1,2,3,4,5,6,7,8,9,10};
	//printf("%d\n",&num[9]-&num[0]);//9 ָ��-ָ�� �õ�Ԫ�ظ���
	//
	//printf("%d\n", getStrLen("abc"));//3


	//float nums[5];
	//float* p;
	//for (p = &nums[5]; p > &nums[0];)//�Ӻ��濪ʼ��ʼ�������Ǳ�׼
	//{
	//	*--p = 0;
	//}


	//sizeof() �������/������ռ�ڴ�ռ�Ĵ�С�����ص��� unsigned ��һ�������뷵��ֵ�Ƚ�ʱ�����Ƚ��������תΪ unsigned �ٽ��бȽ�
	
	//ָ������--����
	//int a = 11;
	//int b = 12;
	//int c = 123;
	//int* arr[3] = { &a,&b,&c };//arr������ int* ָ�������д��ָ�����
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("%d ", *(arr[i]));
	//}
	//����ָ��--ָ��

}
