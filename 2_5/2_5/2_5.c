#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void print(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ",*(*(p+i)+j) );
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//	return 0;
//}
//1瓶汽水1元，2个空瓶可以换1个汽水，给20元，可以有多少汽水。
//int main()
//{
//	int money = 20;
//	int p = 0;
//	int k = 0;
//	while (money)
//	{
//		k++;
//		if (k == 2)
//		{
//			money++;
//			k = 0;
//		}
//		p++;
//		money--;
//	}
//	printf("%d\n", p);
//	return 0;
//}
//void move(int* arr)
//{
//	int left = 0;
//	int right = 9;
//	while (left < right)
//	{
//		while (arr[left] % 2 != 0&& left < right)
//		{
//			left++;
//		}
//		while (arr[right] % 2 == 0 && left < right)
//		{
//			right--;
//		}
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//	}
//}
//int main()
//{
//	int arr[10] = { 0,2,4,6,8,8,6,4,2,0 };//奇数---偶数
//	move(arr);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[9] = { 3 ,4, 6, 8, 5, 2, 9 ,7, 1 };
//	int i, j;
//	for (i = 0; i < 9 - 1; i++)
//	{
//		for (j = 0; j < 9 - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	unsigned char a=200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d ", a + b, c);
//	return 0;
//}
//int main()
//{
//	unsigned int a=0x1234;
//	unsigned char b = *(unsigned char*) & a;
//	printf("%d\n", b);
//	return 0;
//}
