#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
void my_next(int* next, int n, const char* p)
{
	int j = 2, k = 0;
	next[0] = -1;
	next[1] = 0;
	while (j < n)
	{
		if (k == -1 || p[j-1] == p[k])
		{
			next[j] = k + 1;
			j++;
			k++;
		}
		else
		{
			k = next[k];
		}
	}
}
//int kmp(const char* str1, const char* str2)
//{
//	int i = 0, j = 0;
//	int len = (int)strlen(str2);
//	int* next = (int*)malloc(len * sizeof(int));
//	assert(next);
//	my_next(next, len, str2);
//	while (str2[j])
//	{
//		if (j == -1 || str1[i] == str2[j])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			j = next[j];
//		}
//		if (str1[i] == '\0')
//		{
//			free(next);
//			next = NULL;
//			return -1;
//		}
//	}
//	free(next);
//	next = NULL;
//	return i;
//}
int main()
{
	char arr[] = "abaabcdabcab";
	char brr[] = "aaaaaaaad";
	int next[11];
	my_next(next, 10, brr);
	//printf("%d\n", kmp(arr, brr));
	return 0;
}