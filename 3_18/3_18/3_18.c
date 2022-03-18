#define _CRT_SECURE_NO_WARNINGS 1
/*分别利用递归法和数组法求Fibonacci数列的前40项，比较两种方法的运行效率。
其中Fibonacci数列F(n)的定义为： F(0) = 0,F(1) = 1,F(n) = F(n − 1) + F(n − 2)。*/

//#include <stdio.h>
//
//int main()
//{
//	int arr[40];
//	arr[0] = 0;
//	arr[1] = 1;
//	int i = 0;
//	for (i=0;i<40;i++)
//	{
//		if (i > 1)
//			arr[i] = arr[i - 1] + arr[i - 2];
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int f(int n)
//{
//	if (n == 0)
//		return 0;
//	else if (n == 1)
//		return 1;
//	else
//		return f(n - 1) + f(n - 2);
//}
//int main()
//{
//	int i;
//	for (i=0;i<=40;i++)
//	{
//		printf("%d ",f(i));
//	}
//	return 0;
//}
//#include <stdio.h>
//void fun(void)
//{
//    int x = 0;
//    x++;
//    printf("%d   ", x);
//}
//void main(void)
//{
//    int i;
//    for (i = 1; i <= 3; i++)
//        fun();
//}
//#include <stdio.h>
//void fun(void)
//{
//    static int x = 0;
//    x++;
//    printf("%d   ", x);
//}
//void main(void)
//{
//    int i;
//    for (i = 1; i <= 3; i++)
//        fun();
//}
//#include <stdio.h>
//int x = 0;
//void fun(void)
//{
//    x++;
//    printf("%d   ", x);
//}
//void main(void)
//{
//    int i;
//    for (i = 1; i <= 3; i++)
//        fun();
//}
//#include <stdio.h>
//int x, y;
//void fun(void)
//{
//    int a = 15, b = 10;
//    int x;
//    x = a - b;
//    y = a + b;
//    printf("x = %d,y = %d\n", x, y);
//}
//void main(void)
//{
//    int a = 8, b = 4;
//    x = a + b;
//    y = a - b;
//    printf("x = %d,y = %d\n", x, y);
//    fun();
//    printf("x = %d,y = %d\n", x, y);
//}
//#include <stdio.h>
//int min(int x, int y);
//void main(void)
//{
//    extern int a, b;
//    printf("%d\n", min(a, b));
//}
//int min(int x, int y)
//{
//    if (x < y)
//        return x;
//    else
//        return y;
//}
//int a = 4, b = 5;
/*编写一个函数，求两个整数的最大公约数。要求把最大公约数设为全局变量，它的值不由函数返回。*/
#include <stdio.h>
int i;
void f(int n,int m,int* i)
{
	while (n%m)
	{
		*i = n % m;
		n = m;
		m = *i;
	}
	*i = m;
}
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	f(n,m,&i);
	printf("%d\n", i);
	return 0;
}