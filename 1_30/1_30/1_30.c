#define _CRT_SECURE_NO_WARNINGS 1
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
// 
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//int main()
//{
//	int n,i;
//	for (n = 1; n <= 7; n++)
//	{
//		for (i =7- n; i>0; i--)
//		{
//			printf(" ");
//		}
//		for (i=1;i<=2*n-1;i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (n=6; n >= 1; n--)
//	{
//		for (i = 7 - n; i > 0; i--)
//		{
//			printf(" ");
//		}
//		for (i = 1; i <= 2 * n - 1; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <math.h>
//int main()
//{
//	int i, n,a,sum;
//	
//	for (i = 1; i < 100000; i++)
//	{
//		a = 0;
//		sum = 0;
//		n = i;
//		while (n)
//		{
//			sum++;
//			n /= 10;
//		}
//		n = i;
//		while (n)
//		{
//			a += (int)pow(n % 10, sum);
//			n /= 10;
//		}
//		if (a == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int n,i;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 0; i < 5; i++)
//	{
//		sum += n;
//		n = n * 10 + 2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
/*完全数（Perfect number），又称完美数或完备数，是一些特殊的自然数。
它所有的真因子（即除了自身以外的约数）的和（即因子函数），恰好等于它本身。
例如：28，它有约数1、2、4、7、14、28，除去它本身28外，其余5个数相加，1+2+4+7+14=28。
输入n，请输出n以内(含n)完全数的个数。
数据范围： 1 \le n \le 5 \times 10^{5} \1≤n≤5×10
5
本题输入含有多组样例。*/
//#include <stdio.h>
//int main()
//{
//	int n,i,a,sum,m;
//	while (~scanf("%d", &n))
//	{
//		sum = 0;
//		for (i = 1; i <= n; i++)
//		{
//			m = 0;
//			for (a = 1; a < i; a++)
//			{
//				if (i % a == 0)
//					m += a;
//			}
//			if (m == i)
//				sum++;
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[1000] = { 0 };
//	gets(arr);
//	int len = strlen(arr) - 1;
//	for (int i = len; i >= 0; i--)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[1000] = { 0 };
//	char ch;
//	int i = 0,n;
//	while ((ch=getchar())!='\n')
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//			arr[i] = ch;
//		else
//			arr[i] = ' ';
//		
//		i++;
//	}
//	for (n = i; n >= 0; n--)
//	{
//		if (arr[i] == ' ')
//			n--;
//		printf("%c", arr[n]);
//	}
//	return 0;
//}
#include <stdio.h>
#include <string.h>
void f1(char* arr, int n)
{
	int i = 0;
	for (i = 0; i <= n; i++)
	{
		if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z') || arr[i] == ' ')
		{
			;
		}
		else
		{
			arr[i++] = ' ';
		}
	}
}
void f2(char* arr, int n)
{
	int left = 0;
	int right = n;
	int temp;
	while (left <= right)
	{
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int main()
{
	char arr[1000] = { 0 };
	gets(arr);
	int len = strlen(arr) - 1;
	f1(arr, len);
	f2(arr, len);
	for (int i = 0; i <= len; i++)
	{
		if (arr[0]!=' '&&arr[len]!=' ')
			printf("%c", arr[i]);
	}
	return 0;
}