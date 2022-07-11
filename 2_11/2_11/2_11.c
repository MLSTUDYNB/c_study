#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//字符旋转
//int is_move(char* s1,char* s2,int len)
//{
//	int k = 0;
//	for (k = 0; k < len; k++)
//	{
//		if (*(s1 + k) == *(s2))
//		{
//			*(s1 + k + len) = '\0';
//			break;
//		}
//	}
//	if (k == len)
//		return 0;
//	else
//	{
//		if (strcmp(s1 + k, s2) == 0)
//			return k;
//		else
//			return 0;
//	}
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr[] = "abcdefabcdef";
//	char arr2[] = "defabc";
//	int len = strlen(arr1);
//	int ret=is_move(arr,arr2,len);
//	if (ret == 0)
//	{
//		printf("NO\n");
//	}
//	else
//	{
//		printf("YES\n");
//		printf("左旋了%d个单位\n", ret);
//	}
//	return 0;
//}
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp+3);
//	printf("%s\n", *cpp[-2]+3);
//	printf("%s\n", cpp[-1][-1]+1);
//	return 0;
//}
//void move(char* s,int n)
//{
//	int len = strlen(s);
//	int i = 0;
//	while (n--)
//	{
//		int temp = *s;
//		for (i = 0; i < len - 1; i++)
//		{
//			*(s + i) = *(s + i + 1);
//		}
//		*(s + len - 1) = temp;
//	}
//}

void move(char* s1,char* s2)
{
	while (s1 < s2)
	{
		int temp = *s1;
		*s1 = *s2;
		*s2 = temp;
		s1++;
		s2--;
	}
}
int main()
{
	char arr[] = "abcdef";
	int len = strlen(arr);
	int n = 2;
	move(arr,arr+n-1);
	move(arr+n, arr+len-1);
	move(arr, arr+len-1);
	printf("%s\n", arr);
	return 0;
}