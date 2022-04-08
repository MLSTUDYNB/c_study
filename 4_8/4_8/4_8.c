#define _CRT_SECURE_NO_WARNINGS 1
//利用指针实现将n个数按输入时次序的逆序排列（n不大于100）。
//#include <stdio.h>
//
//int main()
//{
//	int arr[100];
//	int n;
//	scanf("%d", &n);
//	int i=0, j=n-1,temp;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", arr + i);
//	}
//	int* p = arr;
//	i = 0;
//	while (i<j)
//	{
//		temp = *(p + i);
//		*(p + i) = *(p + j);
//		*(p + j) = temp;
//		i++; j--;
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//利用指针实现由键盘任意输入一串字符，判断该字符串是否是回文。
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[100];
//	scanf("%s", arr);
//	int len = strlen(arr);
//	int i = 0, j = len - 1;
//	char* p=arr;
//	while (i<j)
//	{
//		if(*(p + i) == *(p + j))
//		{
//			i++;
//			j--;
//		}
//		else
//		{
//			printf("不是回文\n");
//			return 0;
//		}
//	}
//	printf("是回文\n");
//	return 0;
//}
//
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr[100],ch;
//	scanf("%s %c", arr, &ch);
//	char* p = arr;
//	while (*p!=ch)
//	{
//		p++;
//	}
//	strcpy(p, p + 1);
//	printf("%s\n", arr);
//	return 0;
//}

//char* my_strncat(char* des,const char* sor,int n )
//{
//	char* ret = des;
//	while (*des)
//		des++;
//	while (n&&*sor)
//	{
//		*des++ = *sor++;
//		n--;
//	}
//	*des = '\0';
//	return ret;
//}
//char* my_strncpy(char* des, const char* sor, int n)
//{
//	char* ret = des;
//	while (n)
//	{
//		*des++ = *sor++;
//		n--;
//		if (*(sor - 1) == '\0')
//			break;
//	}
//
//	return ret;
//}
//int main()
//{
//	char arr[11] = "abcdef";
//	char brr[] = "cde";
//	//char* ret=my_strncat(arr, brr, 2);
//	char* ret = my_strncpy(arr, brr, 6);
//	//char* ret = strncpy(arr, brr, 3);
//	printf(ret);
//	return 0;
//}
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。

int main()
{

	return 0;
}