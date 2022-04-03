#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <assert.h>
char* A(const char* a, const char* b)
{
	assert(a && b);
	const char* s1 = a;
	const char* s2 = b;
	const char* c = a;
	while (*c)
	{
		s1 = c;
		s2 = b;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)c;
		}
		c++;
	}
	return NULL;
}
int main()
{
	char a[] = "superman";
	char b[] = "super";
	char* q = A(a, b);
	printf("%s", q);
	if (q == NULL)
	{
		printf("sorry");
	}
	return 0;
}
//int a[1000];
//void quicksort(int l, int r)
//{
//	if (l >= r)
//		return;
//	int x = a[(l + r) / 2], i = l - 1, j = r + 1;
//	while (i < j)
//	{
//		while (a[++i] < x);
//		while (a[--j] > x);
//		if (i < j)
//		{
//			int t;
//			t = a[i];
//			a[i] = a[j];
//			a[j] = t;
//		}
//	}
//	quicksort(l, j);
//	quicksort(j + 1, r);
//}
//int main()
//{
//	int n, s = 0;
//	scanf("%d", &n);
//	int k, w;
//	for (k = 0; k < n; k++)
//	{
//		scanf("%d", &a[k]);
//	}
//	quicksort(0, n - 1);
//	for (k = 0; k < n; k = k + 1 + s)
//	{
//		s = 0;
//		for (w = k; w < n; w++)
//		{
//			if (a[k] == a[w])
//				s++;
//			if (a[k] != a[w])
//				break;
//		}
//		if (s % 2 == 1)
//			printf("%d\n", a[k]);
//	}
//	return 0;
//}
//void f(char* p,int n)
//{
//	int i = 0;
//	int j = n;
//	char temp;
//	while (i < j)
//	{
//		temp = p[i];
//		p[i] = p[j];
//		p[j] = temp;
//		i++; j--;
//	}
//}
//int main()
//{
//	char arr[81];
//	gets(arr);
//	int n = strlen(arr)-1;
//	//Õû¸ö×Ö·û´®ÄæÐò
//	f(arr,n);
//	//Ã¿¸öµ¥´ÊÄæÐò
//	int i = 0,count=0;
//	for (i=0;i<=n+1;i++)
//	{
//		if (arr[i] == ' '||arr[i]=='\0')
//		{
//			f(arr + i - count, count - 1);
//			count = 0;
//		}
//		else
//			count++;
//			
//	}
//	printf(arr);
//	return 0;
//}