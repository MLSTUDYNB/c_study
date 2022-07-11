#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	
	int s = 1;
	do
	{
		printf("%d\n", s++);
	} while (s--);
	
	return 0;
}