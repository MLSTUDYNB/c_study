#define _CRT_SECURE_NO_WARNINGS 1
//��10 �����������ֵ
//#include <stdio.h>
//int main()
//{
//	int max, n,i;
//	scanf("%d", &n);
//	max = n;
//	for (i = 0; i < 9; i++)
//	{
//		scanf("%d", &n);
//		if (max < n)
//			max = n;
//	}
//	printf("%d\n", max);
//	return 0;
//}
// ����Ļ�����9*9�˷��ھ���
#include <stdio.h>
int main()
{
	int a, b;
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("%d*%d=%-2d ", b, a, b * a);
		}
		printf("\n");
	}
	return 0;
}
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//#include <stdio.h>
//int main()
//{
//	int n = 1;
//	double sum = 0.0,i=1.0;
//	for (n = 1; n <= 100; n++)
//	{
//		sum += i / n;
//		i = -i;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9


//int main()
//{
//	int n = 1;
//	int count=0;
//	for (n = 1; n <= 100; n++)
//	{
//		if (n % 10 == 9 )
//		{
//			count++;
//		}
//		if(n>=10&&(n/10)%9==0)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//дһ�����룺��ӡ100~200֮�������
//#include <stdio.h>
//int main()
//{
//	int n = 0, i = 0;
//	for (n = 100; n <= 200; n++)
//	{
//		for (i = 2; i < n; i++)
//		{
//			if (n % i == 0)
//			{
//				break;
//			}
//		}
//		if (i == n)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}
//��ӡ1000�굽2000��֮�������
//#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//���������������������������Լ��
//���磺
//���룺20 40
//�����20
//#include <stdio.h>
//int main()
//{
//	int a, b,temp;
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	while (a%b)
//	{
//		temp = a % b;
//		a = b;
//		b = temp;
//	}
//	printf("%d", b);
//	return 0;
//}
//дһ�������ӡ1-100֮������3�ı���������
//#include <stdio.h>

//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//д���뽫�������������Ӵ�С�����
//
//���磺
//
//���룺2 3 1
//
//�����3 2 1
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		if (b > c)
//		{
//			printf("%d %d %d", a, b, c);
//		}
//		else
//		{
//			if (a > c)
//			{
//				printf("%d %d %d", a, c, b);
//			}
//			else
//			{
//				printf("%d %d %d",  c,a, b);
//			}
//		}
//	}
//	else//b>a
//	{
//		if (a > c)
//		{
//			printf("%d %d %d", b,a,  c);
//		}
//		else//c>a
//		{
//			if (b> c)
//			{
//				printf("%d %d %d", b, c,a );
//			}
//			else
//			{
//				printf("%d %d %d", c,b ,a );
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = getchar();
//	putchar(a);
//	return 0;
//}