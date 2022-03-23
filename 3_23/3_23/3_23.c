#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr[] = "abcdefabcdef";
//	char brr[] = "haha";
//	strncpy(arr, brr,6);
//	return 0;
//}
//int main()
//{
//	char arr[20] = "abcdef\0abcdef";
//	char brr[] = "haha";
//	strncat(arr, brr, 6);
//	return 0;
//}
//int main()
//{
//	char arr[20] = "abcdefabcdef";
//	char brr[] = "haha";
//	printf("%d\n",strncmp(arr, brr, 3));
//	return 0;
//}
int f(int n)
{
	int count = 0;
	
	while (n!=1)
	{
		if (n % 2 == 0)//ż
		{
			n /= 2;
			count++;
		}
		else
		{
			n = (3 * n + 1) / 2;
			count++;
		}
	}
	return count;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", f(n));
	return 0;
}