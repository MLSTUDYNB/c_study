#define _CRT_SECURE_NO_WARNINGS 1
//小恒买书
//输入有2行，第1行为一个正整数，表示有n个同学参与调查(n≤100)。
//第2行有n个用空格隔开的正整数，为每本图书的ISBN号(假设图书的ISBN号在1~1000)。
//输出也是2行，第1行为一个正整数k，表示需要买多少本书。第2行为k个用空格隔
//开的正整数，为从小到大已排好序的需要购买的图 书的ISBN号。
//#include <stdio.h>
//桶排序的方法
//int main()
//{
//	int arr[1001], n, i, a;
//	int b = 0;
//	for (i = 0; i < 1001; i++)
//	{
//		arr[i] = 0;
//	}
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a);
//		arr[a] = 1;
//	}
//	for (i = 0; i < 1001; i++)
//	{
//		if (arr[i] == 1)
//			b++;
//	}
//	printf("%d\n", b);
//	for (i = 0; i < 1001; i++)
//	{
//		if (arr[i] == 1)
//		{
//			printf("%d ", i);
//		}
//		
//	}
//	printf("\n");
//	return 0;
//}
//冒泡排序的方法
//int main()
//{
//	int arr[101], n, i,a;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//排序
//	for (i = 1; i < n; i++)
//	{
//		for (a = 0; a < n - i; a++)
//		{
//			if (arr[a] > arr[a + 1])
//			{
//				int temp = arr[a];
//				arr[a] = arr[a + 1];
//				arr[a + 1] =temp;
//			}
//		}
//	}
//	for (i = 0, a = 0; i < n; i++)
//	{
//		if (arr[i] != arr[i + 1])
//			a++;
//	}
//	printf("%d\n", a);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != arr[i + 1])
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}
//快速排序——quicksort

//int quicksort(int arr[101], int left, int right)
//{
//	int temp = left;
//	int i = left;
//	int j = right;
//	int t;
//	if (i > j)
//		return 0;
//	while (i < j)
//	{
//		
//		while (arr[j] >= arr[temp] && i < j)
//			j--;
//		while (arr[i] <= arr[temp] && i < j)
//			i++;
//		t = arr[i];
//		arr[i] = arr[j];
//		arr[j] = t;
//	}
//	t = arr[temp];
//	arr[temp] = arr[i];
//	arr[i] = t;
//	quicksort(arr,left, i-1);
//	quicksort( arr,j+1, right);
//	return 0;
//}
//int main()
//{
//	int arr[101],n, i,a;
//	
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int left = 0;
//	int right = n - 1;
//	quicksort( arr,left, right);
//	for (i = 0, a = 0; i < n; i++)
//	{
//		if (arr[i] != arr[i + 1])
//			a++;
//	}
//	printf("%d\n", a);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != arr[i + 1])
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}
