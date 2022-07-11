#define _CRT_SECURE_NO_WARNINGS 1
//递归和分别实现求第n个斐波那契数
//#include <stdio.h>
////非递归
//int nume(int n)
//{
//	int a = 1;//1
//	int b = 1;//2
//	int c = 1;//3
//	while (n>2)
//	{
//		a = b;
//		b = c;
//		c = a + b;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", nume(n));
//	return 0;
//}
//

////递归写法
//int nume(int n)
//{
//	if (n > 2)
//	{
//		return nume(n - 1) + nume(n - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n",nume(n));
//	return 0;
//}


//编写一个函数实现n的k次方，使用递归实现。
//#include <stdio.h>
//
//int my_pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * my_pow(n, k - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n, k;
//	scanf("%d%d", &n, &k);
//	printf("%d\n",my_pow(n, k));
//	return 0;
//}




/*写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19

输入：1729，输出：19*/
//#include <stdio.h>
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	unsigned int n;
//	scanf("%d", &n);
//	printf("%d\n", DigitSum(n));
//	return 0;
//}
/*编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列，不是逆序打印。
要求：不能使用C函数库中的字符串操作函数。
比如
char arr[] = "abcdef";
逆序之后数组的内容变成：fedcba*/
#include <stdio.h>
#include <string.h>
int my_strlen(char* arr)
{
	if (*arr != '\0')
	{
		return 1 + my_strlen(arr + 1);
	}
	else
	{
		return 0;
	}
}

//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//
//	*(arr + len - 1) = tmp;
//}

void reverse_string(char* arr)
{
	int len = my_strlen(arr);
	char temp = *arr;
	*arr = *(arr + len - 1);
	*(arr + len - 1) = '\0';
	if (my_strlen(arr+1) >= 2)
	{
		reverse_string(arr+1);
	}
	*(arr + len  - 1) = temp;
}


int main()
{
	char arr[20];
	scanf("%s", arr);
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}

//非递归实现strlen
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdft";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}
//递归实现strlen

//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdft";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//非递归实现求n的阶乘（不考虑溢出的问题）

//int factorial(int n)
//{
//	int i = 1,sum=1;
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", factorial(n));
//	return 0;
//}

//递归求n的阶乘（不考虑溢出的问题）

//int factorial(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * factorial(n - 1);
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n",factorial(n));
//	return 0;
//}
//


//递归方式实现打印一个整数的每一位
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}