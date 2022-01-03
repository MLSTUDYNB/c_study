#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int arr[100], n;
//int quicksort(int left,int right)
//{
//	int temp = left;
//	int i = left;
//	int j = right - 1;
//	int t = 0;
//	if (i > j)
//		return 0;
//	while (i < j)
//	{
//		
//		while (arr[j] >= arr[temp]&&i<j)
//		{
//			j--;
//		}
//		while (arr[i] <= arr[temp] && i < j)
//		{
//			i++;
//		}
//		t = arr[i];
//		arr[i] = arr[j];
//		arr[j] = t;
//	}
//	t = arr[left];
//	arr[left] = arr[i];
//	arr[i] = t;
//	quicksort(left, i);//左
//	quicksort(j+1, right);//右
//	return 0;
//}
//int main()
//{
//	int left, right;
//	int a;
//	scanf("%d", &n);
//	for (a = 0; a < n; a++)
//	{
//		scanf("%d", &arr[a]);
//	}
//	left = 0;
//	right = n;
//	quicksort(left,right);
//	for (a = 0; a < n; a++)
//	{
//		printf("%d ", arr[a]);
//	}
//	printf("\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n, i, temp;
//	int sum = 0;
//	scanf("%d", &i);
//	temp = i;
//	sum += i;
//	for (n = 0; n < 3; n++)
//	{
//		scanf("%d", &i);
//		if (temp < i)
//			temp = i;
//		sum += i;
//	}
//	printf("最大值：%d\n", temp);
//	printf("平均值：%.2f\n", (float)sum / 4);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		sum += n % 10;
//		n =n/ 10;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b, c, d, e, f;
//	for (a = 1; a <= 6; a++)
//	{
//		for (b = 1; b <= 6&&a!=b; b++)
//		{
//			for (c = 1; c <= 6&&b!=c; c++)
//			{
//				for (d = 1; d <= 6&&c!=d; d++)
//				{
//					for (e = 1; e<= 6&&d!=e; e++)
//					{
//						for (f = 1; f <= 6&&e!=f; f++)
//						{
//							if (a + b + d == a + c + f && a + c + f == d + e + f&&d+c+f==12)
//							{
//								/*if (a == b || b == c || c == e || e == f)
//								{
//									break;
//								}*/
//								printf("  %d\n",a);
//								printf(" %d %d\n",b,c);
//								printf("%d %d %d\n",d,e,f);
//							}
//
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//