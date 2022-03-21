#define _CRT_SECURE_NO_WARNINGS 1
//int strcmp( const char *string1, const char *string2 );


#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr[] = "axbscds";
//	char brr[] = "bcbcvchudcbv";
//	printf("%d\n", strcmp(arr, brr));
//	return 0;
//}
//int my_strcmp(const char* str1, const char* str2)
//{
//	while (*str1==*str2&&*str1&&*str2)
//	{
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//
//}
//int main()
//{
//	char arr[] = "axbscd";
//	char brr[] = "axb";
//	printf("%d\n", my_strcmp(arr, brr));
//	return 0;
//}
//没有完成的地方
//char *strstr( const char *string, const char *strCharSet );
char* my_strstr(const char* str1, const char* str2)
{
	const char* temp1 = str1;
	const char* temp2 = str2;
	if (*str2=='\0')
		return (char*)str1;
	while (*str2)
	{
		while (*str1 != *str2)
		{
			str1++;
			if (*str1 == '\0')
				return NULL;
		}
		//找到了
		temp1 = str1;
		while (*str1 == *str2)
		{
			str1++;
			str2++;
			if (*str2 == '\0')
				return (char*)temp1;
		}
		str2 = temp2;
		str1 = temp1 + 1;
	}
}
int main()
{
	char arr[20];
	char brr[10];
	scanf("%s%s", arr, brr);
	printf("%s\n", my_strstr(arr, brr));
	return 0;
}
//char *strcat( char *strDestination, const char *strSource );

//char* my_strcat(char* dest, const char* sou)
//{
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *sou++)
//		;
//	return ret;
//}
//int main()
//{
//	char arr[10] = "##########";
//	char brr[] = "nb";
//	printf("%s\n", my_strcat(arr, brr));
//	return 0;
//}