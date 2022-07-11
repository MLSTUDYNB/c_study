#define _CRT_SECURE_NO_WARNINGS 1
/*把任意的数字，从中间拆分成两个数字，
比如1461 可以拆分成（1和461）,（14和61）,（146和1),
如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
例如：
655 = 
6 * 55 +
65 * 5
1461 = 
1*461 + 
14*61 + 
146*1
n%10最后一位数   1剩下146   
n%10       6        14
n%10      4       1
求出 5位数中的所有 Lily Number。*/
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int n;
//    for (n=10;n<100000;n++)
//    {
//        int sum = 0,i=1;
//        while (1)
//        {
//            sum+=(n % (int)pow(10,i)) * (n / (int)pow(10, i));
//            if (n / (int)pow(10, i) < 10)
//                break;
//            i++;
//        }
//        if (sum == n)
//            printf("%d ", n);
//    }
//    return 0;
//}
//int panduan()
//{
//    int i = 1;
//    return *(char*)&i;
//}
//int main()
//{
//    int ret=panduan();
//    if (ret == 1)
//        printf("小端\n");
//    else
//        printf("大端\n");
//    return 0;
//}
//int main()
//{
//	char a = 0xb2;
//	short b = 0xb200;
//	int c = 0xb2000000;
//	if (a == 0xb2)
//		printf("a\n");
//	if (b == 0xb200)
//		printf("b\n");
//	if (c == 0xb2000000)
//		printf("c\n");
//	return 0;
//}
//int main()
//{
//	float i = 6.5;
//	return 0;
//}
#include <malloc.h>
//*
//* *
//*   *
//* * * *
//
//*
//* *
//*   *
//*     *
//* * * * *
//int main()
//{
//	int n;
//	while (~scanf("%d",&n))
//	{
//		char arr[20][20];
//		int i, j;
//		for (i=0;i<n;i++)
//		{
//			for (j=0;j<=i;j++)
//			{
//				arr[i][j] = '*';
//				if (i >= 2 && j >= 1 && i < n - 1 && j < n - 2&&j!=i)
//					arr[i][j] = ' ';
//				printf("%c ", arr[i][j]);
//			}
//			printf("\n");	
//		}
//	}
//	return 0;
//}
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);//第一行
    int arr1[1000] = { 0 };
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);//第二行
    }
    int arr2[1000] = { 0 };
    for (j = 0; j < m; j++)
    {
        scanf("%d", &arr2[j]);//第三行
    }
    i = 0;
    j = 0;
    while (i < n &&j < m)//当一个数组遍历完后，剩下数组直接输出即可
    {
        while (arr1[i] <= arr2[j]&& i < n && j < m)
        {
            printf("%d ", arr1[i]);
            i++;
        }
        while(arr1[i] >= arr2[j] && i < n && j < m)
        {
            printf("%d ", arr2[j]);
            j++;
        }
    }
    //if (i == n)
    //{
    //    for (; j < m; j++)
    //    {
    //        printf("%d ", arr2[j]);
    //    }
    //}
    //else
    //{
    //    for (; i < n; i++)
    //    {
    //        printf("%d ", arr1[i]);
    //    }
    //}

    return 0;
}