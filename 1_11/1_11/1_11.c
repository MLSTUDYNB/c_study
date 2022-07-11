#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//typedef struct student
//{
//	int id;
//	char people[10];
//	int cj;
//}str;
//int main()
//{
//	str arr[10000];
//	int n,i,a,b;
//	int max;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d%s%d", &arr[i].id, &arr[i].people, &arr[i].cj);
//
//	}
//	for (a=0;a<n;a++)
//	{
//		for (b=0;b<n;b++)
//		{
//			if (arr[a].id == arr[b].id&&a!=b&& arr[a].id != 0)
//			{
//				arr[a].cj=arr[a].cj + arr[b].cj;
//				arr[b].id = 0;
//			}
//		}
//	}
//	max = arr[0].cj;
//	a = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i].cj < arr[i + 1].cj)
//		{
//			max = arr[i+1].cj;
//			a = i + 1;
//		}
//	}
//	printf("%d %d", arr[a].id, max);
//	return 0;
//}
//int main()
//{
//	int arr[100],brr[100];
//	int x, y, n,i,cj;
//	int max;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d-%d%d", &x, &y, &cj);
//		arr[i] = x;
//		brr[i] = cj;
//	}
//	for (x=0;x<n;x++)
//	{
//		for (y=0;y<n;y++)
//		{
//			if (arr[x] == arr[y]&&x!=y&& arr[x] != 0)
//			{
//				brr[y] = brr[x] + brr[y];
//				arr[y]= 0;
//			}
//		}
//	}
//	max = brr[0];
//	y = 0;
//	for (x = 0; x < n; x++)
//	{
//		if (brr[x] < brr[x + 1])
//		{
//			max = brr[x + 1];
//			y = x + 1;
//		}
//	}
//	printf("%d %d", arr[y], max);
//	return 0;
//}
int main()
{
	int n, i,a,b;
	int arr[5000];
	arr[0] = 3;
	b = 1;
	scanf("%d", &n);
	for (i = 5; i <= n; i=i+2)
	{
		int c = sqrt(i);
		for (a = 2; a <=c; a++)
		{
			if (i % a == 0)
				break;
		}
		if (a > c)
		{
			arr[b++] = i;
		}
	}
	i = 0;
	while (b)
	{
		if (arr[b - 1] - arr[b - 2] == 2)
		{
			i++;
		}
		b--;
	}
	printf("%d", i);
	return 0;
}