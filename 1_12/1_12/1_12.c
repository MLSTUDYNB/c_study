#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	float a = 1234;
	printf("%.01f",a);
	return 0;
}
//int main()
//{
//	int m, n,a;
//	unsigned long long i;
//	int b = 3;
//	int arr[10000];
//	arr[1] = 2;
//	arr[2] = 3;
//	scanf("%d%d", &m, &n);
//	for (i = 5; i < 100000; i=i+2)
//	{
//		int c = (int)sqrt(i);
//		for (a = 2; a <= c; a++)
//		{
//			if (i % a == 0)
//				break;
//		}
//		if (a > c)
//		{
//			arr[b] = i;
//			b++;
//		}
//	}
//	i = 1;
//	a = n - m;
//	while (m<=n)
//	{
//		printf("%d", arr[m]);
//		if (i % 10 != 0&&i!=a+1)
//		{
//			printf(" ");
//		}
//		if (i % 10 == 0)
//		{
//			printf("\n");
//		}
//		m++;
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int n, i, a, b;
//	int arr[10000];
//	arr[0] = 3;
//	b = 1;
//	scanf("%d", &n);
//	for (i = 5; i <= n; i = i + 2)
//	{
//		int c = sqrt(i);
//		for (a = 2; a <= c; a++)
//		{
//			if (i % a == 0)
//				break;
//		}
//		if (a > c)
//		{
//			arr[b++] = i;
//		}
//	}
//	i = 0;
//	while (b)
//	{
//		if (arr[b - 1] - arr[b - 2] == 2)
//		{
//			i++;
//		}
//		b--;
//	}
//	printf("%d", i);
//	return 0;
//}
//int main()
//{
//	char a[11], b[11], c[11];
//	//都先初始化为0
//	int n, i,m;
//	for (i = 0; i < 11; i++)
//	{
//		a[i] = '0';
//		b[i] = '0';
//		c[i] = '0';
//	}
//	int max = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s%s%s", a,b,c);
//		m = 0;
//		while (m!=11)
//		{
//			max += a[m] + b[m] - c[m] - '0';
//			m++;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (a[i] + b[i] > c[i])
//		{
//			printf("Case #%d: true\n",i+1);
//		}
//		else
//		{
//			printf("Case #%d: false\n",i+1);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr[81];
//	int n = 0;
//	while (1)
//	{
//		scanf("%c", &arr[n]);
//		if (arr[n] == '\0')
//			break;
//		n++;
//	}
//	printf("%s", arr);
//
//	return 0;
//}