#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	/*int c = getchar() != EOF;*/
	int c=0;
	while (getchar()!=EOF)
	{
		++c;
	}
	printf("%d\n", c);
	/*float a;
	a = 5.0 / 9;
	printf("%12f", a);
	printf("\n************");*/
	return 0;
}