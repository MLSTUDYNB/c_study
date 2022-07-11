#define _CRT_SECURE_NO_WARNINGS 1


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
//int main()
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 4,5,6 };
//	int arr3[] = { 7,8,9 };
//	int* p[] = { arr1,arr2,arr3 };
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
/*写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
例如：给定s1 =AABCD和s2 = BCDAA，返回1
给定s1=abcd和s2=ACBD，返回0.
AABCD左旋一个字符得到ABCDA
AABCD左旋两个字符得到BCDAA
AABCD右旋一个字符得到DAABC
*/
#include <stdio.h>
#include <string.h>
//struct st
//{
//	int a;
//	int arr[];
//};
//int main()
//{
//	struct st * p=(struct st*)malloc(sizeof(int)+40);
//	return 0;
//}
//int f(char* arr,char* brr)
//{
//	int ret = 0,i=0;
//	int len = strlen(arr);
//	for (ret = 1; ret < len; ret++)
//	{
//		if (strcmp(arr, brr) == 0)
//			return 1;
//		char temp = *arr;
//		for (i = 0; i < len-1; i++)
//		{
//			*(arr + i) = *(arr + i + 1);
//		}
//		*(arr + i) = temp;
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char brr[] = "cdefab";
//	int ret = f(arr, brr);
//	if (ret)
//	{
//		printf("旋转字符可以得到\n");
//	}
//	else
//	{
//		printf("旋转无法得到\n");
//	}
//	return 0;
//}
int main()
{

	return 0;
}