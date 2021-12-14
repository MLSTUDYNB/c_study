#define _CRT_SECURE_NO_WARNINGS 1
//打印1000-2000之间的闰年
//#include<stdio.h>
//int main()
//{
//	int day,a=0;
//	for (day = 1000; day <= 2000; day++)
//	{
//		if ((day % 4 == 0 && day % 100 != 0) || day % 400 == 0)
//		{
//			printf("%d ", day);
//			a++;
//		}
//	}
//	printf("\n%d\n", a);
//	return 0;
//}
//#include <stdio.h>
//int mian()
//{
//	int a, b, c, d, n;
//	scanf("%d", &n);
//	a = n % 1000;
//	b = n % 100 / 10;
//	c = n % 10 / 100;
//	d = n / 1000;
//	printf("%d%d%d%d", a, b, c, d);
//	return 0;
//}
//打印100-200之间的素数
//#include <stdio.h>
//int main()
//{
//	int a,c=0;
//	for (a = 101; a <= 200; a+=2)
//	{
//		int b=2;
//		for (; b < a/2; b++)
//		{
//			if (a%b == 0)
//				break;
//		}
//		if (b >=a / 2)
//		{
//			printf("%d ", a);
//			c++;
//		}
//	}
//	printf("\n %d\n ", c);
//	return 0;
//}
//输出1-100之间3的倍数的整数
//#include <stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//求两个整数的最大公约数
//#include <stdio.h>
//int main()
//{
//	int a,b;
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		int t;
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a > b)
//	{
//		while (a % b)注意此处是%不是/
//		{
//			a=b;
//			b = a % b;
//		}
//		printf("最大公约数=%d", b);
//	}
//	return 0;
//}
//让3个数从大到小的输出
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int n;
//		n = a;
//		a = b;
//		b = n;
//	}
//	if (a < c)
//	{
//		int n;
//		n = a;
//		a = c;
//		c = n;
//	}
//	if (b < c)
//	{
//		int n;
//		n = c;
//		c = b;
//		b = n;
//	}
//	printf("%d%d%d\n", a, b, c);
//	return 0;
//}
//方法2
//#include <stdio.h>
//int main()
//{
//	double a,b,c=0,d=0;
//	for (a = 1.0; a <= 100; a += 2)
//	{
//		c= (1 / a)+c;
//	}
//	for (b = 2.0; b <= 100; b += 2)
//	{
//		d=( -1 / b)+d;
//	}
//	printf("它们的结果=%lf", c+d);
//	return 0;
//}
//求1/1-1/2+1/3-1/4+1/5+......+1/99-1/100的和
//方法1
//#include <stdio.h>
//int main()
//{
//	int a ;
//	float b = 0.0,n=1.0;
//	for (a = 1; a <= 100; a++)
//	{
//		b = n/ a+b;
//		n = -n;
//		
//	}
//	printf("它们的和=%f\n", b);
//	return 0;
//}
//数9的个数
//数1-100之间的整数有多少个9
//#include <stdio.h>
//int main()
//{
//	int a,b=0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 10 == 9)
//			b++;
//		if (a % 10 == 0)
//			b++;
//	}
//	printf("9的个数=%d\n", b);
//	return 0;
//
//}
//在屏幕中输出9*9的乘法表
//#include <stdio.h>
//int main()
//{
//	int a,b;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			printf("%d * %d=%2d  ", a, b, a*b);//%2d是2位右对齐，%-2d表示2位左对其
//		}
//		printf("\n");
//	}
//	return 0;
//}
//编程实现逆序输出一个整数（不超过4位）.
//#include <stdio.h>
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a < 10000 && a >= 1000)
//	{
//		printf("%d%d%d%d\n", a % 10, a % 100 / 10, a % 1000 / 100, a / 1000);
//	}
//	else if (a >= 100)
//	{
//		printf("%d%d%d\n",a%10,a%100/10,a/100);
//	}
//	else if (a >= 10)
//	{
//		printf("%d%d\n",a%10,a/10);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int x;
//	
//	scanf("%d", &x);
//	if (x<0 && x>-5)
//	{
//		printf("y=%d", 2 * x * x * x);
//	}
//	if (x == 0)
//	{
//		printf("y=%d", x-1);
//	}
//	if (x < 10 && x>0)
//	{
//		printf("y=%lf",-2*pow(x,0.5));
//	}
//	return 0;
//}
//分别输入‘5’、‘D’、‘w’和‘！’后的输出结果是什么？
//#include <stdio.h>
//int main()
//{
//    char c;
//    scanf("%c", &c);
//    if (c >= '0' && c <= '9')
//        printf("0-9\n");
//    else if (c >= 'A' && c <= 'Z')
//        printf("A-Z\n");
//    else if (c >= 'a' && c <= 'z')
//        printf("a-z\n");
//    else
//        printf("other character\n");
//    return(0);
//}
/*从键盘上输入3个整数，用条件运算符计算三个数的最大值和最小值并输出，计算平均值并输出，平均值要求保留两位小数输出。
输出格式要求为：
最大值：  xx   。
最小值：  xx   。
平均值：  xx.yy 。
*/
//#include <stdio.h>
//int main()
//{
//	int a, b, c,max,min;
//	scanf("%d%d%d", &a, &b, &c);
//	float pj = (a + b + c) / 3;
//	max = (a > b && a > c ? a : (b > c ? b : c));
//	min = (a < b&& a < c ? a : (b < c ? b : c));
//	printf("最大值：%2d\n最小值：%2d\n平均值：%4.2f\n", max, min,pj);
//	return 0;
//}/*  ex7-1.c  */
#include <stdio.h>
void main()
{
	int k;
	scanf("%d", &k);
	printf("\n");
	switch (k)
	{
	case 1:printf("%d\n", k++);
	case 2:printf("%d\n", k++);
	case 3:printf("%d\n", k++);
	case 4:printf("%d\n", k++);
		break;
	default:printf("FULL!\n");
	}
}
