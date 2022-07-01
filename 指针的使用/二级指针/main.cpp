#include <stdio.h>

int main()
{
	char a = '1';
	char b = '2';
	char c = '3';
	char d = '4';
	char e = '5';
	char* books[5] = { &a,&b,&c,&d,&e};
	char** p;
	char** q[4];
	p = &books[4];

	q[0] = &books[0];
	q[1] = &books[1];
	q[2] = &books[2];
	q[3] = &books[3];

	printf("%c", *p);
	for (int i = 0; i < 4; i++)
	{
		printf("%c", *q[i]);
	}
	return 0;
}