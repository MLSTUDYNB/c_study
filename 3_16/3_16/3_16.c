#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <malloc.h>
//void f(int* p1,int* p2,int* p)
//{
//	p = (int*)malloc(sizeof(int));
//	*p = *p1 + (*p2++);
//}
//int main()
//{
//	int a[2] = { 1,2 }, b[2] = { 10,20 }, * s = a;
//	f(a, b, s);
//	return 0;
//}
int scmp(int x, int y)
{
    if (x > y)
        return 1;
    else if (x == y)
        return 0;
    else
        return -1;
}
int main()
{
    int i = 3;                  
    printf("%d\n", scmp(i++, i));
    printf("%d\n", scmp(++i, i));
    printf("%d\n", scmp(i, i++));
    printf("%d\n", scmp(i, ++i));
}
