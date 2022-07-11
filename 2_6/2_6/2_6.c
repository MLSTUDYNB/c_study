#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int fun(unsigned int x)
//{
//	int n = 0;
//	while (x + 1)
//	{
//		n++;
//		x = x | (x + 1);
//	} 
//	return n;
//}
//
//int main()
//{
//	printf("%d\n",fun(2014));
//	return 0;
//}
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int m =36,a=0,b=0;
//	while (m>3)
//	{
//		m -=6;
//		a = 3;
//		m += a;
//		b++;
//	}
//	printf("%d\n", b);
//	return 0;
//}
//int fun(char* s)
//{
//	char* t = s;
//	while (*t++);
//	return(t - s);
//}
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }, * p = a + 5, * q = NULL;
//	*q = *(p + 5);
//	printf("%d %d\n", *p, *q);
//	return 0;
//}
//int main()
//{
//	float a[3] = { 1.5,2.5,3.5 }, * pa = a; 
//	*(pa++) *= 3;
//	printf("%f\n", *pa);
//	//char arr[] = "abcdef";
//	//printf("%d\n",fun(arr));
//	return 0;
//}
//int main()
//{
//	int x = -1;
//	unsigned int y = 2;
//	if (x > y)
//	{
//		printf("x is greater");
//	}
//	else
//	{
//		printf("y is greater");
//	}
//	return 0;
//}
//void func()
//{
//	int k = 1 ^ (1 << 31 >> 31);
//	printf("%d\n", k);
//}
int main()
{
	char arr[10] = '5';
	int i = 1;
	sizeof(i++);
	printf("%d\n", i);
	return 0;
}