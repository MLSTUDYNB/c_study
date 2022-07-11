#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//int f(char* crr, int c)
//{
//	int i = 0;
//	int sum = 0;
//	int p3 = 0;
//	while (crr[i] != '\0')
//	{
//		if (crr[i] - '0' == c)
//			sum++;
//		i++;
//	}
//	while (sum)
//	{
//		p3+=c*(int)pow(10, sum-1);
//		sum--;
//	}
//	return p3;
//}
//
//int main()
//{
//	int a, b,p1,p2;
//	char arr[100], brr[100];
//	scanf("%s%d%s%d", arr, &a, brr, &b);
//	p1=f(arr, a);
//	p2=f(brr, b);
//	printf("%d", p1 + p2);
//	return 0;
//}
//int main()
//{
//	int arr[10];
//	int n,max=0;
//	for (n = 0; n < 10; n++)
//	{
//		scanf("%d", &arr[n]);
//	}
//	//Ñ­»·²éÕÒ
//	n = 1;
//	while (n<=9)
//	{
//		if (arr[n] > 0)
//		{
//			max = n;
//			break;
//		}
//		n++;
//	}
//	//Êä³ö
//	printf("%d", max);
//	arr[max]--;
//	for (n = 0; n <= 9; n++)
//	{
//		while (arr[n])
//		{
//			printf("%d", n);
//			arr[n]--;
//		}
//		while (arr[n] != arr[max] && arr[max] != 0)
//		{
//			printf("%d", max);
//			arr[max]--;
//		}
//	}
//	return 0;
//}
typedef struct student
{
	char zheng[17];
	int set;
	int id;
}str;
int main()
{
	str arr[1000];
	int n, i, m, a,b;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s%d%d", &arr[i].zheng, &arr[i].set, &arr[i].id);
	}
	scanf("%d", &m);
	for (i = 0; i < m; i++)
	{
		scanf("%d", &a);
		for (b = 0; b < n; b++)
		{
			if (arr[b].set == a)
				printf("%s %d\n", arr[b].zheng, arr[b].id);
		}
	}
	return 0;
}