#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
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