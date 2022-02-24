#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//main()
//{
//    int n[3], i, j, k;
//    for (i = 0; i < 3; i++)
//        n[i] = 0;
//    k = 2;
//    for (i = 0; i <= k; i++)
//        for (j = 0; j <= i; j++)
//            n[j] = n[i] + 1;
//    for (i = 0; i <= k; i++)
//        printf("%3d", n[i]);
//    printf("\n");
//}
//#include <stdio.h>
//main()
//{
//    int j, ch, a[8];
//    for (j = 0; j < 8; j++) a[j] = 0;
//    while ((ch = getchar()) != '\n')
//        if (ch >= '0' && ch <= '7') a[ch - '0']++;
//    for (j = 0; j < 8; j++)
//        printf("a[%d]=%d\n", j, a[j]);
//}
/*2、随机产生50个 0~100之间的整数，输入两个整数m和n （0 <= m < n < 50），
将m和n之间的整数按从小到大的顺序进行排序，并输出排序前和排序后的所有数据。
（srand(0); a[i]=rand%101）;*/
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//    srand((unsigned)time(NULL));
//    int arr[50],a,m,n;
//    int i=0, j=0;
//    scanf("%d%d", &m, &n);
//    for (a = 0; a < 50; a++)
//    {
//        arr[a] = rand() % 101;
//        if (arr[a] >= m && arr[a] <= n)
//            printf("%d ", arr[a]);
//    }
//    printf("\n");
//    for (i = 0; i < 49; i++)
//    {
//        for (j = 0; j < 49 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//
//    for (a = 0; a < 50; a++)
//    {
//        if (arr[a] >= m && arr[a] <= n)
//            printf("%d ", arr[a]);
//    }
//    return 0;
//}
/*3、在一个按值有序排列的数组中查找指定的元素。
假设数组有10个元素，按值由小到大有序，由键盘输入一个数x，然后在数组中查找x，
如果找到，输出相应元素的位置，
若找不到，输出提示信息“无此元素”。*/
#include <stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int x,i,j;
	scanf("%d", &x);
	i = 0;
	j = 9;
	while (i <= j)
	{
		int mid = i + (j - i) / 2;
		if (arr[mid] < x)
			i = mid + 1;
		else if (arr[mid] > x)
			j = mid - 1;
		else
		{
			printf("找到了，下标是%d\n", mid);
			return 0;
		}
	}
	printf("无此元素\n");
	return 0;
}
//for (i = 0; i < 10; i++)
//{
//	if (arr[i] == x)
//	{
//		printf("找到了，下标是%d\n", i);
//		break;
//	}
//}
//if (i == 10)
//	printf("无此元素\n");