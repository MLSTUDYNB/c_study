#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[101],brr[101];
	int n, i,a,b;
	scanf("%d", &n);
	for (i = 0; i < 101; i++)//数组初始化
	{
		arr[i] = 0;
		brr[i] = 0;
	}
	
	for (i=0;i<n;i++)//输入
	{
		scanf("%d", &arr[i]);
	}
	
	for (i = 0; i < n; i++)//开始一个一个判断
	{
		a = arr[i];
		
		if (a == 0)
		{
			continue;
		}
		while (a!=1)
		{
			if (a % 2 == 0)
			{
				a /= 2;
				for (b = 0; b < n; b++)//发现相等就把数标记为0
				{
					if (arr[b] == a)
					{
						arr[b] = 0;
					}
				}
			}
			else
			{
				a = 3 * a + 1;
				for (b = 0; b < n; b++)//发现相等就把数标记为0
				{
					if (arr[b] == a)
					{
						arr[b] = 0;
					}
				}
			}
		}
		
	}
	b = 0;
	for (i = 0; i < n; i++)//统计有多少个不为0的数
	{
		brr[arr[i]] = 1;
		if (arr[i] != 0)
			b++;
	}
	for (i = 100; i > 0; i--)//输出
	{
		if (brr[i] ==1)
		{
			printf("%d", i);
			if (b > 1)
			{
				printf(" ");
				b--;
			}
		}
	}
	//for (a = 0; a < n - 1; a++)//冒泡排序
	//{
	//	for (b = 0; b < n - a - 1; b++)
	//	{
	//		if (arr[b] < arr[b + 1])
	//		{
	//			arr[b] = arr[b] ^ arr[b + 1];
	//			arr[b + 1] = arr[b] ^ arr[b + 1];
	//			arr[b] = arr[b] ^ arr[b + 1];
	//		}
	//	}
	//}
	
	
	return 0;
}
//#include<stdio.h>
//int main() {
//    int k, n;
//    int num[10000] = { 0 };
//    scanf("%d", &k);
//    int v[k];
//    for (int i = 0; i < k; i++) {
//        scanf("%d", &n);
//        v[i] = n;
//        if (num[n] == 0) {
//            while (n != 1) {
//                if (n % 2 == 0) {
//                    n = n / 2;
//                }
//                else {
//                    n = (3 * n + 1) / 2;
//                }
//                if (num[n] == 1) break;
//                num[n] = 1;
//            }
//        }
//    }
//    int mid;
//    for (int i = 0; i < k - 1; i++) {
//        for (int j = i + 1; j < k; j++) {
//            if (v[j] > v[i]) {
//                mid = v[j];
//                v[j] = v[i];
//                v[i] = mid;
//            }
//        }
//    }
//    int flag = 0;
//    for (int i = 0; i < k; i++) {
//        if (num[v[i]] == 0) {
//            if (flag == 1) printf(" ");
//            printf("%d", v[i]);
//            flag = 1;
//        }
//    }
//    return 0;
//}