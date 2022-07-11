#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "abcd\0eee@eee";
//	char brr[] = "@";
//	printf("%s\n", strtok(arr, brr));
//	printf("%s\n", strtok(NULL, brr));
//	return 0;
//}
// vvovooovovvovoovoovvvvovovvvov

//vvvovvv
//vvooooovvooooovvvvoovv

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char s[100];
//	char* str;
//	int sum = 1,ret=0;
//	scanf("%s", s);
//	for (str = strtok(s, "o"); str != NULL; str = strtok(NULL, "o"))
//	{
//		ret=(int)strlen(str);
//		if(ret!=0&&ret!=1)
//		sum *= (ret-1);
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "abcd.eee@eee";
//	char brr[] = "@.";
//	printf("%s\n", strtok(arr, brr));
//	printf("%s\n", strtok(NULL, brr));
//	printf("%s\n", strtok(NULL, brr));
//	return 0;
//}1,2,3,1,2,3,4,5,9,10
//void *memcpy( void *dest, const void *src, size_t count );
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//void* my_memcpy(void* dest, const void* src, int count)
//{
//	void* ret = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
void* my_memmove(void* dest, const void* src, int count)
{
	void* ret = dest;
	if (src < dest)
	{
		while (count--)
			*((char*)dest+count) = *((char*)src + count);
	}
	else
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	return ret;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int brr[10] = { 0 };
	//my_memcpy(arr, brr, 20);
	my_memmove(arr + 2, arr, 20);
	return 0;
}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	memset(arr, 0x11, 19);
//	
//	return 0;
//}
//int main()
//{
//	char* p = (char*)malloc(9999999999999);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcd.eee@eee";
//	char brr[] = "@.";
//	char* str = arr;
//	for (str = strtok(arr, brr); str != NULL; str = strtok(NULL, brr))
//	{
//		printf("%s\n", str);
//	}
//	return 0;
//}