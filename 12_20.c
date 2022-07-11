#define _CRT_SECURE_NO_WARNINGS 1
/*描述
KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的线段图案。

输入描述：
多组输入，一个整数（1~100），表示线段长度，即“*”的数量。
输出描述：
针对每行输入，输出占一行，用“*”组成的对应长度的线段。*/
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}
/*描述
从键盘输入5个人的身高（米），求他们的平均身高（米）。

输入描述：
一行，连续输入5个身高（范围0.00~2.00），用空格分隔。
输出描述：
一行，输出平均身高，保留两位小数。*/
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    float h;
//    float sum = 0.0;
//    for (n = 0; n < 5; n++)
//    {
//        scanf("%f", &h);
//        sum += h;
//    }
//    printf("%.2f", sum / 5);
//    return 0;
//}
/*描述
输入一个班级5个学生各5科成绩，输出5个学生各5科成绩及总分。

输入描述：
五行，每行输入一个学生各5科成绩（浮点数表示，范围0.0~100.0），用空格分隔。
输出描述：
五行，按照输入顺序每行输出一个学生的5科成绩及总分（小数点保留1位），用空格分隔。*/
//#include <stdio.h>
//int main()
//{
//    int n, i;
//    float cj[5][5];
//    float a[5] = { 0 };
//    for (n = 0; n < 5; n++)
//    {
//        for (i = 0; i < 5; i++)
//        {
//            scanf("%f", &cj[n][i]);
//            a[n] += cj[n][i];
//        }
//    }
//    for (n = 0; n < 5; n++)
//    {
//        for (i = 0; i < 5; i++)
//        {
//            printf("%.1f ", cj[n][i]);
//        }
//        printf("%.1f\n", a[n]);
//    }
//    return 0;
//}
//#include <stdio.h>
//int max3(int a, int b, int c)
//{
//    if (a > b && a > c)
//        return a;
//    else if (b > a && b > c)
//        return b;
//    else
//        return c;
//}
//int main()
//{
//    int a, b, c;
//    scanf("%d%d%d", &a, &b, &c);
//    printf("%.2f", (float)max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c)));
//    return 0;
//}
//逗号表达式的运用
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int m = (a < b, a++, b > c, c++, b + c + a);
	printf("%d\n", m);
	return 0;
}