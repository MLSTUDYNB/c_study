#define _CRT_SECURE_NO_WARNINGS 1
//char *strstr( const char *string, const char *strCharSet );
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
void my_next(int* next,int n,const char* p)
{
	int j = 1,k=0;
	next[0] = -1;
	next[1] = 0;
	while(j<n)
	{
		if (k == -1 || p[j] == p[k])
		{
			next[j + 1] = k + 1;
			j++;
		}
		else
		{
			k = next[k];
		}
	}
}
int kmp(const char* str1, const char* str2)
{
	int i = 0, j = 0;
	int len = (int)strlen(str2);
	int* next = (int*)malloc(len * sizeof(int));
	assert(next);
	my_next(next,len,str2);
	while (str2[j])
	{
		if(j==-1||str1[i] == str2[j])
		{
			i++;
			j++;
		}
		else
		{
			j = next[j];
		}
		if (str1[i] == '\0')
		{
			free(next);
			next = NULL;
			return -1;
		}
	}
	free(next);
	next = NULL;
	return i;
}
int main()
{
	char arr[] = "abaabcdabcab";
	char brr[] = "ef";
	printf("%d\n",kmp(arr, brr));
	return 0;
}