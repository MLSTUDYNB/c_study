#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

//#include <string.h>
//int main()
//{	char arr1[] = "ml is cool";
//	char arr2[20] = "###################";
//	printf("%s\n", strcpy(arr2, arr1));
//	return 0;
//}
//char *strcpy( char *strDestination, const char *strSource );


//void my_strcpy(char* des,char* sor)
//{
//	while (*sor!='\0')
//	{
//		*des = *sor;
//		des++;
//		sor++;
//	}
//	*des = *sor;
//}
//char* my_strcpy(char* des, const char* sor)
//{
//	assert(des && sor);
//	char* ret = des;
//	while (*des++ = *sor++);
//	return ret;
//}
//int main()
//{
//	char arr1[] = "ml is cool";
//	char arr2[20] = "###################";
//	
//	printf("%s\n", my_strcpy(arr2, arr1));
//	return 0;
//}
//size_t strlen( const char *string );
//int my_strlen(const char* p)
//{
//	int ret = 0;
//	while (*p++)
//		ret++;
//	return ret;
//}
//size_t my_strlen(const char* str)
//{
//	const char* temp = str;
//	while (*++str);
//	return str - temp;
//}
int my_strlen(const char* str)
{
	if (*str)
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
int main()
{
	char arr[] = "ml is cool";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}