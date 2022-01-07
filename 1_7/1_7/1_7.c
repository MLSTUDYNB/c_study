#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p;
//	p = (int *)malloc(4);
//	*p = 10;
//	printf("%d\n", *p);
//	return 0;
//}
//int main()
//{
//	int left[101]={0}, right[101]={0};
//	int i, n,a,temp;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		if (i != n)
//			right[i] = i + 1;
//		else
//			right[i] = 0;
//	}
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &left[i]);
//	}
//	scanf("%d", &a);
//	temp = n + 1;
//	left[temp] = a;
//	i = 1;
//	while (i)
//	{
//		if (left[i] > left[temp])
//		{
//			right[temp] = right[i-1];
//			right[i-1] = temp;
//			break;
//		}
//		i = right[i];
//	}
//	i = 1;
//	while (i)
//	{
//		printf("%d ", left[i]);
//		i = right[i];
//	}
//	return 0;
//}
int main()
{
	int right[101], data[101];
	int i, n,t;
	int temp;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &data[i]);
	}
	temp = n;
	for (i = 1; i <= n; i++)
	{
		if (i !=n)
			right[i] = i + 1;
		else
			right[i] = 0;
	}
	temp++;
	
	scanf("%d", &data[temp]);
	t= 1;
	while (t!=0)
	{
		if (data[t] > data[temp])
		{
			right[temp] = right[t];
			right[t] = temp;
			break;
		}
		t= right[t];
	}
	t = 1;
	while (t!=0)
	{
		printf("%d ", data[t]);
		t = right[t];
	}
	return 0;
}