#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define MAXK 10

my_function_1()
{
	int n;
	double a[11],p=0.0;
	for (n = 1; n <= 10; n++)
	{
		a[n] = n;
		p += a[n] * pow(1.1, n);
	}
}
my_function_2()
{
	int n;
	double a[11], p = 0.0;
	for (n = 10; n >= 1; n--)
	{
		a[n] = n;
		p+=a[n-1] + 1.1 * a[n];
	}
}
int main()
{
	clock_t start, stop;
	start = clock();
	my_function_1();
	stop = clock();
	printf("%lf\n", (stop - start) / CLK_TCK);
	return 0;
}
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
//#define IN 1
//#define OUT 0
//int main()
//{
//	int c,word,sum;
//	sum = 0;
//	word = OUT;
//	while ((c = getchar()) != EOF)
//	{
//		if (c == ' ' || c == '\t' || c == '\n')
//			sum++;
//		else
//			word = IN;
//
//	}
//	printf("%d\n", sum);
//	return 0;
//}