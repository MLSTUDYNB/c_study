#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*��������ʹ����ȫ����λ��ż��ǰ�档
��Ŀ��
����һ���������飬ʵ��һ��������
�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
����ż��λ������ĺ�벿�֡�
*/
int arr[5] = { 1,2,3,4,5 };

void sort(int* arr,int n)
{
	int left= 0;
	int right= n - 1;
	while (left<right)
	{
		while (arr[left]%2!=0&& left < right)//��ż zuo
		{
			left++;
		}
		while (arr[right]%2==0 && left < right)//���� you
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
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ

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