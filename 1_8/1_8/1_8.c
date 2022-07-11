#define _CRT_SECURE_NO_WARNINGS 1
//1008 数组元素循环右移问题
#include <stdio.h>
int main()
{
    int arr[201];
    int m, n, i, t;
    scanf("%d%d", &m, &n);
    n %= m;
    for (i = 1; i <= m; i++)
    {
        scanf("%d", &arr[i]);
    }
    i = n;
    t = m - i;
    for (; n > 0; n--)
    {
        arr[m + n] = arr[m - n+1];
    }
    for (; i > 0; i--)
    {
        printf("%d ", arr[m + i]);
      
    }
    for (i = 1; i <= t; i++)
    {
        printf("%d", arr[i]);
        if(i<t)
            printf(" ");
    }
    return 0;
}
//int main()
//{
//	int k = 12;
//	char c = 'b';
//	do
//	{
//		switch (c++)
//		{
//		case 'a':k++;
//		case 'b':k--;
//		case 'c':k -= 2; break;
//		}	
//	} while (c!='c');
//	return 0;
//}
//int main()
//{
//	int arr[10], book[10];
//	int i = 0, a = 0;
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		book[i] = 0;
//	}
//		for (arr[1] = 1; arr[1] < 10; arr[1]++)
//		{
//			for (arr[2] = 1; arr[2] < 10; arr[2]++)
//			{
//				for (arr[3] = 1; arr[3] < 10; arr[3]++)
//				{
//					for (arr[4] = 1; arr[4] < 10; arr[4]++)
//					{
//						for (arr[5] = 1; arr[5] < 10; arr[5]++)
//						{
//							for (arr[6] = 1; arr[6] < 10; arr[6]++)
//							{
//								for (arr[7] = 1; arr[7] < 10; arr[7]++)
//								{
//									for (arr[8] = 1; arr[8] < 10; arr[8]++)
//									{
//										for (arr[9] = 1; arr[9] < 10; arr[9]++)
//										{
//											for (i = 1; i < 10; i++)
//											{
//												book[arr[i]] = 1;
//											}
//											for (i = 1; i < 10; i++)
//											{
//												sum += book[i];
//											}
//											if (sum == 9&&arr[1]*100+arr[2]*10+arr[3]+arr[4]*100+arr[5]*10+arr[6]==arr[7]*100+arr[8]*10+arr[9])
//											{
//												a++;
//												printf("%d%d%d+%d%d%d=%d%d%d\n", arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);
//											}
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//		printf("\n%d\n ", a / 2);
//	return 0;
//}
//#define m 11
//#define n 11
//int main()
//{
//	char a[20][21];
//	int i, n, m;
//	scanf("%d%d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", a[i]);
//	}
//	return 0;
//}