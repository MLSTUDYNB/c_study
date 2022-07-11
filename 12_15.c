#define _CRT_SECURE_NO_WARNINGS 1
//键盘输入的两个数的大小关系
//#include <stdio.h>
//int main()
//{
//    int n, m;
//    while (~scanf("%d%d", &n, &m))
//    {
//        if (n > m)
//            printf("%d>%d\n", n, m);
//        else if (n == m)
//            printf("%d=%d\n", n, m);
//        else
//            printf("%d<%d\n", n, m);
//    }
//    return 0;
////依次输入一个学生的3科成绩，在屏幕上输出该学生的总成绩以及平均成绩
//#include <stdio.h>
//int main()
//{
//    float a, b, c;
//    scanf("%f%f%f", &a, &b, &c);
//    printf("%.2f %.2f", a + b + c, (a + b + c) / 3);
//    return 0;
//}
//将一个四位数，反向输出。
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n)
    {
        printf("%d", n % 10);
        n /= 10;
    }
    return 0;
}