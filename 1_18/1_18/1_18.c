#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。

void print(int n)
{
	int a,b;
	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("%d*%d=%-3d  ", b, a, a * b);
		}
		printf("\n");
	}

}
int main()
{
	int n;
	scanf("%d", &n);
	print(n);
	return 0;
}

//实现一个函数来交换两个整数的内容。
//void judge(int* a,int* b)
//{
//	int i;
//	i = *a;
//	*a = *b;
//	*b = i;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	judge(&a,&b);
//	printf("%d %d\n", a, b);
//	return 0;
//}


//实现函数判断year是不是润年。
//int is_leap_year(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	if (is_leap_year(year) == 1)
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//	return 0;
//}

/*实现一个函数，判断一个数是不是素数。

利用上面实现的函数打印100到200之间的素数。

*/

//#include <math.h>
//
//int judge(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int n = 0;
//	for (n = 100; n <= 200; n++)
//	{
//		if (judge(n))
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}
//int f(int n)
//{
//	static int i = 1;
//	if (n >= 5)
//		return n;
//	n = n + i;
//	i++;
//	return f(n);
//}
//struct X
//{	short s; 
//	int i;
//	char c;
//}; //等于sizeof(s) + sizeof(i) + sizeof(c)
//int main()
//{
//	//int n = 1;
//	struct X p;
//	char a[14]; 
//	a = "Hello, world!";
//	printf("%d\n", sizeof(p));
//	return 0;
//}
//#include <string.h>
//
//int main()
//{
//	char s[] = "\\123456\123456\t";
//	printf("%d\n", strlen(s));
//	return 0;
//}

/*描述
根据输入的日期，计算是这一年的第几天。
保证年份为4位数且日期合法。
进阶：时间复杂度：，空间复杂度：
输入描述：
输入一行，每行空格分割，分别是年，月，日

输出描述：
输出是这一年的第几天
*/
//#include <stdio.h>
//
//int main()
//{
//	int year, month, day;
//	scanf("%d%d%d", &year, &month, &day);
//
//	return 0;
//}
//#define INT_PTR int*
//typedef int* int_ptr;
//
//int main()
//{
//	INT_PTR a, b;
//	int_ptr c, d;
//	int p = 10;
//	 a= &p;
//	 c = &p;
//	return 0;
//}
//int x = 5, y = 7;
//void swap()
//{
//	int z;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int x = 3, y = 8;
//	int y[5 + 3] = { 0,1,2,3,4,5,6 ,7};
//	swap();
//	printf("%d,%d\n",x, y);
//	return 0;
//}