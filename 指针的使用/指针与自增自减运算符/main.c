#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[4]={1,2,3,4};
	int *p;
	int j;
	p=a;//��������׵�ַ��ֵ��ָ�����p
	j=*p++;//j=*p��p++���κ�ʱ���ǰѺ�++ȥ����Ȼ������һ�����ȼ��Ƿ��++��
	printf("a[0]=%d,j=%d,*p=%d\n",a[0],j,*p);//��ʱ��������112

	//p=a;
	//j=(*p)++;
	//printf("a[0]=%d,j=%d,*p=%d\n",a[0],j,*p);//��ʱ��������212

	p=a;//pָ������a���׵�ַ
	j=p[0]++;//p[0]����*p��j=p[0],p[0]++,��ʱp[0]=a[0]=1+1=2
	printf("a[0]=%d,j=%d,*p=%d\n",a[0],j,*p);//212
	system("pause");
	return 0;
}