#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

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

//ʵ��һ�������������������������ݡ�
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


//ʵ�ֺ����ж�year�ǲ������ꡣ
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
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}

/*ʵ��һ���������ж�һ�����ǲ���������

��������ʵ�ֵĺ�����ӡ100��200֮���������

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
//}; //����sizeof(s) + sizeof(i) + sizeof(c)
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

/*����
������������ڣ���������һ��ĵڼ��졣
��֤���Ϊ4λ�������ںϷ���
���ף�ʱ�临�Ӷȣ����ռ临�Ӷȣ�
����������
����һ�У�ÿ�пո�ָ�ֱ����꣬�£���

���������
�������һ��ĵڼ���
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