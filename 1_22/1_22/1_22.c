#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print(int* arr)
{
	int n;
	for (n = 0; n < 5; n++)
	{
		printf("%d ", arr[n]);
	}
}
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int brr[5] = { 6,7,8,9,0 };
	int temp, n;
	for (n = 0; n < 5; n++)
	{
		temp = arr[n];
		arr[n] = brr[n];
		brr[n] = temp;
	}
	print(arr);
	printf("\n");
	print(brr);
	return 0;
}
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。

//#include <stdio.h>
//void init(int* arr)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void reverse(int* arr)
//{
//	int left = 0;
//	int right = 9;
//	while (left <= right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//void print(int* arr)
//{
//	int n;
//	for (n = 0; n < 10; n++)
//	{
//		printf("%d ", arr[n]);
//	}
//}
//int main()
//{
//	int arr[10],n;
//	init(arr);
//	for (n = 0; n < 10; n++)
//	{
//		scanf("%d", &arr[n]);
//	}
//	reverse(arr);
//	print(arr);
//	return 0;
//}
//


//#include <stdio.h>
//#define YES 1
//#define NO 0
//void bubble_sort(int arr[])
//{
//	int a, b;
//	int count = NO;
//	for (a = 0; a < 9; a++)
//	{
//		for (b = 0; b < 9-a; b++)
//		{
//			if (arr[b] < arr[b + 1])
//			{
//				int temp = arr[b];
//				arr[b] = arr[b + 1];
//				arr[b + 1] = temp;
//				count = YES;
//			}
//		}
//		if (count == NO)
//			break;
//	}
//}
//int main()
//{
//	int arr[10];
//	int n;
//	for (n = 0; n < 10; n++)
//	{
//		scanf("%d", &arr[n]);
//	}
//	bubble_sort(arr);
//	for (n = 0; n < 10; n++)
//	{
//		printf("%d ", arr[n]);
//	}
//	return 0;
//}