#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void pd(char* s1,char* s2)
//{
//	static int m;
//	if (s1 == s2)
//		printf("相等\n");
//	else
//		printf("不相等\n");
//}
//int main()
//{
//	int m = 1;
//	char arr1[] = "abcef";
//	char arr2[] = "abcef";
//	pd(arr1,arr2);
//	char* p1 = "abcef";
//	char* p2 = "abcef";
//	pd(p1,p2);
//	return 0;
//}
int f(int a,int b)
{
	static int m, i = 2;
	i += m + 1;
	m = i + a + b;
	return m;
}
int main()
{
	int k = 4, m = 1, p;
	p = f(k,m);
	printf("%d ", p);
	p = f(k, m);
	printf("%d ", p);
	return 0;
}