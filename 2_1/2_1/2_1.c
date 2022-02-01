#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#define MAX 10
//int main()
//{
//	int arr[MAX]={0};
//	int n = 0,s=0;
//	for (n = 0; n < MAX-1; n++)
//	{
//		scanf("%d", &s);
//		arr[s]++;
//	}
//	for (n = 0; n < MAX; n++)
//	{
//		if (arr[n] != 0)
//			printf("%d ", n);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n, k, x, y, sum;
//    sum = 0;
//    scanf("%d%d", &n, &k);
//    x = n - k;
//    for (y = k + 1; y <= n; y++)
//    {
//        sum += x;
//        x--;
//    }
//   /* for (y = k; y <= n; y++)
//    {
//        for (x = k; x <=n; x++)
//        {
//            if (x < y)
//                sum++;
//            else if (x % y >= k)
//                sum++;
//        }
//
//    }*/
// /*       for (y = k; y <= n; y++)
//        {
//            for (x = k; x<y; x++)
//            {
//                sum++;
//            }
//            for (x = y; x <= n; x++)
//            {
//                if (x % y >= k)
//                sum++;
//            }*/
//        //}
//    printf("%d\n", sum);
//    return 0;
//}