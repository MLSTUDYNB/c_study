#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int add(int x,int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("****		��ѡ��			   ****\n");
//	printf("**** 1.��			2.�� **********\n");
//	printf("**** 3.��           4.�� **********\n");
//	printf("************* 0�˳� ***************\n");
//}
//int main()
//{
//	
//	int n;
//	int a, b,ret;
//	do
//	{
//		menu();
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 0:
//			printf("�˳�����\n");
//			break;
//		case 1:
//			printf("����������������>");
//			scanf("%d%d", &a, &b);
//			ret=add(a, b);
//			printf("���Ϊ%d\n", ret);
//			break;
//		case 2:
//				printf("����������������>");
//				scanf("%d%d", &a, &b);
//				ret = sub(a, b);
//				printf("���Ϊ%d\n", ret);
//				break;
//		case 3:
//			printf("����������������>");
//			scanf("%d%d", &a, &b);
//			ret = mul(a, b);
//			printf("���Ϊ%d\n", ret);
//			break;
//		case 4:
//			printf("����������������>");
//			scanf("%d%d", &a, &b);
//			ret = div(a, b);
//			printf("���Ϊ%d\n", ret);
//			break;
//		default:
//			printf("ѡ����������ѡ��\n");
//			break;
//		}
//
//	} while (n);
//	return 0;
//}
//#include <stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("****		��ѡ��			   ****\n");
//	printf("**** 1.��			2.�� **********\n");
//	printf("**** 3.��           4.�� **********\n");
//	printf("************* 0�˳� ***************\n");
//}
//f(int (*p)(int, int))
//{
//	int a, b;
//	printf("����������������>");
//	scanf("%d%d", &a, &b);
//	printf("���Ϊ%d\n", p(a, b));
//}
//enum counter
//{
//	zero,
//	add_,
//	sub_,
//	mul_,
//	div_
//};
//int main()
//{
//
//	int n;
//	do
//	{
//		menu();
//		scanf("%d", &n);
//		switch (n)
//		{
//		case zero:
//			printf("�˳�����\n");
//			break;
//		case add_:
//			f(add);
//			break;
//		case sub_:
//			f(sub);
//			break;
//		case mul_:
//			f(mul);
//			break;
//		case div_:
//			f(div);
//			break;
//		default:
//			printf("ѡ����������ѡ��\n");
//			break;
//		}
//
//	} while (n);
//	return 0;
//}
#include <stdio.h>
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("****		��ѡ��			   ****\n");
	printf("**** 1.��			2.�� **********\n");
	printf("**** 3.��           4.�� **********\n");
	printf("************* 0�˳� ***************\n");
}
f(int (*p)(int, int))
{
	int a, b;
	printf("����������������>");
	scanf("%d%d", &a, &b);
	printf("���Ϊ%d\n", p(a, b));
}
int main()
{

	int n;
	int (*gather[5])(int, int) = { 0,add,sub,mul,div };
	do
	{
		menu();
		scanf("%d", &n);
		if (n == 0)
		{
			printf("�˳�����\n");
		}
		else if (n > 0 && n < 5)
		{
			f(gather[n]);
		}
		else
		{
			printf("ѡ����������ѡ��\n");
		}
	} while (n);
	return 0;
}