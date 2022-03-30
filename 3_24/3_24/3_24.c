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
	char brr[] = "aaaaaaaad";
	printf("%d\n",kmp(arr, brr));
	return 0;
}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//cmp_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//print(struct stu* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s,%d,%lf\n", (p + i)->name, (p + i)->age, (p + i)->score);
//	}
//}
//test()
//{
//	struct stu arr[3] = { {"zhangshang",20,50.0},{"lisi",10,60.0},{"wangwu",30,70.0} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_name);
//	print(arr, sz);
//}
//int main()
//{
//	test();
//	return 0;
//}
//
