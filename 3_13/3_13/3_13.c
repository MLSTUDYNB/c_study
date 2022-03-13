#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//f(int* p)
//{}
//int main()
//{
//	int a = 0;
//	int* p = &a;
//	f(p);
//	return 0;
//}
//f(int** p1)
//{}
//int main()
//{
//	int a = 0;
//	int* p = &a;
//	int** p1 = &p;
//	f(p1);
//	return 0;
//}
//int add(int x,int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("%p\n",add);
//	printf("%p\n", &add);
//	/*int(*p)(int,int)=&add;
//	(*p)(1, 2);
//	p(1, 2);
//	add(1, 2);*/
//	return 0;
//}
/*
(*(void (*)())0)();
void (*signal(int , void(*)(int)))(int);
*/
//void f1()
//{}
//void f2()
//{}
//int main()
//{
//	void (*p[2])()={f1,f2};
//	void(*(*p1)[2])();
//	return 0;
//}
void f1()
{}
f(int a,void (*p)())
{
	p();
}
int main()
{
	int a;
	f(a, f1);
	return 0;
}