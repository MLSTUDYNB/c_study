#define _CRT_SECURE_NO_WARNINGS 1
//1．编写一个求圆面积的函数Area，该函数有一个形式参数r，类型为float，返回值类型也为float。
//2．在主函数中输入一个圆的半径，调用Area函数求出该圆的面积并输出。
//#include <stdio.h>
//int sum(int n);
//void main(void)
//{
//    int a;
//    printf("请输入一个数：");
//    scanf("%d", &a);
//    printf("s=%d\n", sum(a));
//}
//int sum(int n)
//{
//    long s;
//    if (n == 1)
//        s = 1;
//    else
//        s = n + sum(n - 1);
//    return s;
//}

//5．编写一个函数prime，判断一个正整数是否是素数，
//如果是素数，函数返回1，否则返回0。在主函数中输入一个正整数，调用prime判断它是否是素数并输出。

//6、定义一个函数删除字符串s中字符ch，并用main()调用，测试数据是字符串"I love you"，删除字符’o’
//1．用递归法编写一个函数fac，求n！的值。
//2．编写一个函数fun，求p＝m!/n!(m-n)!的值，其中m与n为两个正整数，且要求m>n。
//#include <stdio.h>
//int fun(int m,int n)
//{
//	int sum = 1, i = m - n;
//	while (m)
//	{
//		sum *= m;
//		m--;
//	}
//	while (n)
//	{
//		sum /= n;
//		n--;
//	}
//	while (i)
//	{
//		sum /= i;
//		i--;
//	}
//	return sum;
//}
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	printf("%d\n",fun(m, n));
//	return 0;
//}
//#include <stdio.h>
//int fac(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n",fac(n));
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//void f(char s[],char ch)
//{
//	int i = 0;
//	while (s[i])
//	{
//		if (s[i] == ch)
//		{
//			strcpy(s + i, s + i + 1);
//		}
//		i++;
//	}
//}
//int main()
//{
//	char s[100],ch;
//	gets(s);
//	scanf("%c", &ch);
//	f(s,ch);
//	printf("%s\n", s);
//	return 0;
//}

//#include <stdio.h>
//int prime(int n)
//{
//	int i;
//	if (n == 1)
//		return 0;
//	for (i=2;i<n;i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret=prime(n);
//	if (ret == 1)
//		printf("%d是素数\n", n);
//	else
//		printf("%d不是素数\n",n);
//	return 0;
//}

//#include <stdio.h>
//float Area(float r)
//{
//	return 3.14 * r * r;
//}
//int main()
//{
//	int r;
//	scanf("%d", &r);
//	printf("%f\n", Area(r));
//	return 0;
//}



//#include <stdio.h>
//float Area(float r)
//{
//	return 3.14 * r * r;
//}
//int main()
//{
//	int r;
//	scanf("%d", &r);
//	printf("%f\n", Area(r));
//	return 0;
//}

//#include <stdio.h>
//void fun(int x, int y);
//void main(void)
//{
//    int a = 3, b = 4;
//    printf("main:a=%d,b=%d\n", a, b);
//    fun(a, b);
//    printf("main:a=%d,b=%d\n", a, b);
//}
//void fun(int x, int y)
//{
//    int t;
//    printf("fun:x=%d,y=%d\n", x, y);
//    x = 2 * x;
//    y = y / 2;
//    printf("fun:x=%d,y=%d\n", x, y);
//}
/*分别利用递归法和数组法求Fibonacci数列的前40项，比较两种方法的运行效率。
其中Fibonacci数列F(n)的定义为： F(0) = 0,F(1) = 1,F(n) = F(n − 1) + F(n − 2)。
0
1
1
2
3

*/
#include <stdio.h>
int f(int n)
{
	int ret=0;
	if (n == 1)
	{		
		return 1;
	}
	else if (n == 2)
	{
		return 1;
	}
	else
	{
		 ret = f(n - 1) + f(n - 2);
		 
	}
	printf("%d ", ret);
	return ret;
}
int main()
{
	int n=5;
	f(n);
	return 0;
}