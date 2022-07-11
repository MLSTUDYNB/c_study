#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////快速排序
//void quicksort(int* num, int L,int R)
//{
//	if (L>R)
//		return;
//	int left = L;
//	int right = R;
//	int tem = num[left],t;
//	while (left!=right)
//	{
//		while (num[right] >= tem && left < right)
//		{
//			right--;
//		}
//		while (num[left] <=tem && left <right)
//		{
//			left++;
//		}
//		if (left < right)//交换
//		{
//			t = num[left];
//			num[left] = num[right];
//			num[right] = t;
//		}
//			
//	
//	}
//	
//	num[left] = num[L];
//	num[L] = tem;
//	quicksort(num, L, left-1);//左
//	quicksort(num, right+1, R);//右
//	return;
//}
//	
//void print(int* num,int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", num[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	//输入需要排序的个数
//	int n,i;
//	scanf("%d", &n);
//	//读入数字
//	int num[200];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	int L = 0, R = n - 1;
//	//排序
//	quicksort(num,L,R);
//	//打印
//	print(num,n);
//	return 0;
//}
//
//#include <stdio.h>
//
//
//int a[101], n;//定义全局变量，这两个变量需要在子
//void quicksort(int left, int right)
//{
//	int i,t, temp;
//	int j;
//	if (left > right)
//		return;
//		temp = a[left];//temp中存的就是基准数
//		i = left;
//		j = right;
//		while (i!=j)
//		{ 
//			while (a[j] >= temp && i < j)
//			{
//				j--;
//			}
//			while (a[i] <= temp && i < j)
//			{
//				i++;
//			}
//			if(i<j)//当哨兵i和哨兵j没有相遇时
//				{ t = a[i];
//				a[i] = a[j];
//				a[j] = t; 
//			}
//				//最终将基准数归位
//		}
//		a[left] = a[i];
//		a[i] = temp;
//		quicksort(left, i - 1);//继续处理左边的,
//	quicksort(i + 1, right);//继续处理右边的
//	return;
//}
//int main()
//{
//	int i, j;
////读入数据
//scanf("%d", &n);
//for (i = 1; i <= n; i++)
//scanf("%d", &a[i]);
//quicksort(1, n);//快速排序调用
////输出排序后的结果
//for (i = 1; i <= n; i++)
//printf("%d ", a[i]);
//return 0;
//}