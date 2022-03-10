#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <malloc.h>
//int* f(int* a,int* b)
//{
//	int c = 0;
//	c = *a + *b;
//	return &c;
//
//}
//
//int main()
//{
//	int a = 10, b = 20;
//	int* p=f(&a, &b);
//	printf("%d\n", *p);
//	return 0;
//}
//int main()
//{
//	int* p = (int*)malloc(4 * sizeof(int));
//	int i = 0;
//	if (p != NULL)
//	{
//		for (i = 0; i < 4; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int p=*(arr + 4);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int* p1 = arr;
//	int* p2 = arr + 4;
//	printf("%d\n", p2 - p1);
//	return 0;
//}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8 };
	int* p;
	for (p=arr;p<=&arr[7];p++)
	{
		;
	}
	for (p = &arr[7]; p >= arr; p--)
	{
		;
	}
	return 0;
}