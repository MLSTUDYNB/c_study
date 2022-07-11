#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//冒泡排序

//void print(int* cj)
//{
//	int n = 0;
//	for (n = 0; n < 5; n++)
//	{
//		printf("%d ", cj[n]);
//	}
//	printf("\n");
//}
//typedef struct student//结构体
//{
//	char nume[11];
//	char xuehao[11];
//	int cj;
//}stu;
//int main()
//{
//	//创建学生群体
//	stu sum[1000],tem;
//	//学生数
//	int n,i,a;
//	scanf("%d", &n);
//	//输入学生的信息
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %s %d", sum[i].nume, sum[i].xuehao, &sum[i].cj);
//	}
//	//排序
//	for (a = 0; a < n - 1; a++)//最大次数
//	{
//		int i;
//		int count = 0;
//		for (i = 0; i < n-1-a; i++)//一次排序
//		{
//			if (sum[i].cj < sum[i + 1].cj)
//			{
//				//交换
//				tem = sum[i];
//				sum[i] = sum[i + 1];
//				sum[i + 1] = tem;
//				count++;
//			}
//		}
//		if (0 == count)
//			break;
//	}
//	//打印
//	printf("%s %s\n", sum[0].nume, sum[0].xuehao);
//	printf("%s %s\n", sum[n-1].nume, sum[n-1].xuehao);
//	return 0;
//}
//桶排序
//int main()
//{
//	//创建用下标表示分数的数组以及初始化
//	int arr[11], n,cj;
//	for (n = 0; n < 11; n++)
//	{
//		arr[n] = 0;//所有的分数都没有人得
//	}
//	//输入分数，并把分数储存在相应的数组中
//	for (n = 0; n < 5; n++)
//	{
//		scanf("%d", &cj);
//		arr[cj]++;
//	}
//	//按照从小到大的顺序输出
//	for (n = 0; n < 11; n++)//所有的成绩
//	{
//		for (int a = 1; a <= arr[n]; a++)//大于等于1的个数都进行打印
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}
//1000个数的排列
//int main()
//{
//	int arr[1001], n,cj,i;
//	for (n = 0; n < 1001; n++)
//	{
//		arr[n] = 0;
//	}
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &cj);
//		arr[cj]++;
//	}
//	for (n = 0; n < 1001; n++)
//	{
//		for (i = 1; i <= arr[n]; i++)
//		{
//			printf("%d ", n);
//		}
//	}
//	printf("\n");
//	return 0;
//}
