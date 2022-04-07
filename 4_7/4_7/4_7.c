#define _CRT_SECURE_NO_WARNINGS 1

//定义一个指针函数求任意n的平均值，并用main函数测试
//#include <stdio.h>
//int f(int sum,int n)
//{
//	return sum / n;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0, sum = 0,a;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a);
//		sum += a;
//	}
//	int (*p)(int,int)=&f;
//	printf("%d\n",p(sum, n));
//	return 0;
//}
//定义一个指针函数求字符串s中字符ch的个数，并用main函数测试
//#include <stdio.h>
//int f(char* arr, char ch)
//{
//	int count = 0;
//	while (*arr)
//	{
//		if (*arr == ch)
//			count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[100],ch;
//	gets(arr);
//	scanf("%c", &ch);
//	int(*p)(char*, char) = &f;
//	printf("%d\n",p(arr, ch));
//	return 0;
//}
//#include <stdio.h>
//main()
//{
//    int i, j;
//    float a[10], t;
//    float* p;
//    printf("input array a:\n");
//    for (p = a; p < a + 10; p++)
//        scanf("%f", p);
//    p = a;
//    for (i = 0; i < 9; i++)
//        for (j = i; j < 10; j++)
//            if (*(p + i) > *(p + j))
//            {
//                t = *(p + i);
//                *(p + i) = *(p + j);
//                *(p + j) = t;
//            }
//    for (p = a; p < a + 10; p++)
//        printf("a[%d] = %7.2f\n", p - a, *p);
//}
//利用指针实现2个字符串的连接。
//#include <stdio.h>
//int main()
//{
//	char arr[30] = "abc";
//	char brr[] = "cdef";
//	char* p1 = arr;
//	char* p2 = brr; 
//	while (*p1)
//		p1++;
//	while (*p1++ = *p2++);
//	printf("%s\n", arr);
//	return 0;
//}
#include <stdio.h>
int main()
{
	
	return 0;
}