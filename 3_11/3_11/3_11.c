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
/*дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
���磺����s1 =AABCD��s2 = BCDAA������1
����s1=abcd��s2=ACBD������0.
AABCD����һ���ַ��õ�ABCDA
AABCD���������ַ��õ�BCDAA
AABCD����һ���ַ��õ�DAABC
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
//		printf("��ת�ַ����Եõ�\n");
//	}
//	else
//	{
//		printf("��ת�޷��õ�\n");
//	}
//	return 0;
//}
int main()
{

	return 0;
}