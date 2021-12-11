#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int panduan(int* arr,int c)//求每一个数组的最小值
{
	int a = 0;
	int b = arr[0];
	for (a = 1; a < c; a++)
	{
		if (arr[a] < b)//把最小的放在b中
		{
			b = arr[a];
		}
	}
	return b;
}
void print(int* arr,int c)//打印
{
	int a = 0;
	for (a = 0; a <c ; a++)
	{
		printf("%d ", arr[a]);
	}
}
int main()
{
	int n = 0;
	int arr[10];
	int brr[20];
	scanf("%d", &n);
	int i = 0;
	int a = 0;
	int m = 0;
	for (; i < n; i++)//输入次数
	{
		scanf("%d", &m);//每一行的数
		for (a = 0; a < m; a++)
		{
			scanf("%d", &arr[a]);
		}
		brr[i]=panduan(arr,m);//返回的最小值
	}
	int b=panduan(brr, n);//判断最小值中的最小值
	arr[0] = b;
	print(arr,m);//打印
	return 0;
}

