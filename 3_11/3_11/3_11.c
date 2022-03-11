#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <time.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[][3] = { 1,2,3,4,5,6 };
//	printf("%d\n",sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n\n", sizeof(arr2[0]));
//
//	printf("%p\n", arr1);
//	printf("%p\n", arr1+1);
//	printf("%p\n", &arr1);
//	printf("%p\n\n", &arr1+1);
//
//	printf("%p\n", arr2);
//	printf("%p\n", arr2+1);
//	printf("%p\n", &arr2 + 1);
//	printf("%p\n", arr2[0]);
//	printf("%p\n", &arr2[0] + 1);
//	return 0;
//}
//int f(char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		while (*str == ' '&&*str!='\0')
//			str++;
//		while (*str!= ' ' &&* str != '\0')
//			str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[100];
//	gets(arr);
//	int count = f(arr);
//	printf("%d\n", count);
//	return 0;
//}
int main()
{
	int arr1[] = { 1,2,3 };
	int arr2[] = { 4,5,6 };
	int arr3[] = { 7,8,9 };
	int* p[] = { arr1,arr2,arr3 };
	int i = 0, j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
	return 0;
}