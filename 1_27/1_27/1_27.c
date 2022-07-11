#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
    int m, a, t;
    while (~scanf("%d", &m))
    {
        if ((int)pow(m, 3) % 2 == 0)
        {
            a = pow(m, 3) / m - 1;
            t = m / 2 - 1;
        }
        else
        {
            a = pow(m, 3) / m;
            t = m / 2;
        }
        while (t--)
            a -= 2;
        for (t = 0; t < m; t++)
        {
            printf("%d", a);
            if (t < m - 1)
                printf("+");
            else
                printf("\n");
            a += 2;
        }
    }
    return 0;
}
//#include <stdio.h>
//int main()
//{
//    int year, month, day, i;
//    int sum = 0;
//    scanf("%d%d%d", &year, &month, &day);
//    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//        i = 29;
//    else
//        i = 28;
//    while (--month)
//    {
//        switch (month)
//        {
//        case 1:case 3:case 5:case 7:case 8:case 10:case 12:sum += 31;break;
//        case 4:case 6:case 9:case 11:sum += 30;break;
//        default:sum += i;break;
//        }
//    }
//    printf("%d\n", sum + day);
//    return 0;
//}
//#include <math.h>
//
//int* printNumbers(int n, int* returnSize) {
//    // write code here
//    int i = 0;
//    for (i = 1; i < pow(10, n); i++)
//    {
//        *(returnSize + i) = i;
//    }
//    return returnSize;
//}
//
//int main()
//{
//    int n;
//    int  returnSize[1000];
//    scanf("%d", &n);
//    printNumbers(n, returnSize);
//    for (int i = 0; i <= n; i++)
//    {
//        printf("%d ", returnSize[i]);
//    }
//	return 0;
//}
//int main()
//{
//	int t = 0;
//	while (printf("*"))
//	{
//		t++;
//		if (t < 3)
//			break;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	printf("%d\n", (a += a -= a * a));
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int c = 0;
//	printf("%d\n", c = a + 2);
//	printf("%d\n", c);
//	return 0;
//}