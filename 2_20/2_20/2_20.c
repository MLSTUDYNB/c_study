#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*调整数组使奇数全部都位于偶数前面。
题目：
输入一个整数数组，实现一个函数，
来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
所有偶数位于数组的后半部分。
*/
int arr[5] = { 1,2,3,4,5 };

void sort(int* arr,int n)
{
	int left= 0;
	int right= n - 1;
	while (left<right)
	{
		while (arr[left]%2!=0&& left < right)//找偶 zuo
		{
			left++;
		}
		while (arr[right]%2==0 && left < right)//找奇 you
		{
			right--;
		}
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
	}
}

void print(int* arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int n = sizeof(arr) / sizeof(arr[0]);
	print(arr, n);
	sort(arr, n);
	print(arr, n);
	return 0;
}
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水

//int main()
//{
//	int money = 20;
//	int k= 0;
//	int sum = 0;
//	while (money)
//	{
//		money--;
//		k++;
//		sum++;
//		if (k == 2)
//		{
//			k = 0;
//			money++;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//
//
//void fun(struct stu* p)
//{
//    printf("%s\n", (*p).name);
//    return;
//}
//
//
//int main()
//{
//    struct stu students[3] = { {9801,"zhang",20},
//                              {9802,"wang",19},
//                              {9803,"zhao",18}
//                             };
//    fun(students + 1);
//    return 0;
//}