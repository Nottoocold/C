#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* p;
	int i;
	char n;
	scanf("%d",&i);
	p = (char*)malloc(i);
	scanf("%c",&n);
	gets(p);
	puts(p);
	free(p);
	system("pause");
	return 0;
}