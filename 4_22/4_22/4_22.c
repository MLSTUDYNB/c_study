#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int c=0;
	c = add(a, b);
	printf("%d\n", c);
	return 0;
}
//#include <stdio.h>
//
//int main()
//{
//	int arr[100], n;
//	scanf("%d", &n);
//	int i = 0, j = n-1;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", arr + i);
//	}
//	int* p = arr;
//	i = 0;
//	int temp;
//	while (i < j)
//	{
//		temp = *(p + i);
//		*(p + i) = *(p + j);
//		*(p + j) = temp;
//		i++;
//		j--;
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}