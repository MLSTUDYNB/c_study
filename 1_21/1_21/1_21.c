#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a, b,sum;
//	scanf("%d%d", &a, &b);
//	sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
#define IN 1
#define OUT 0
int main()
{
	int c,word,sum;
	sum = 0;
	word = OUT;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
			sum++;
		else
			word = IN;

	}
	printf("%d\n", sum);
	return 0;
}