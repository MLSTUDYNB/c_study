#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#define ADD(x,y) x+y
//#define Mul(x,y) ++x*++y
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = f;
//	printf("%d", Mul(a + b, b + c));
//	return 0;
//}
//
//#define f 3
//#define a 10
//void foo();
//int main()
//{
//	printf("%d..", a);
//	foo();
//	printf("%d", a);
//	return 0;
//} void foo() {
//#undef a
//#define a 50
//}
//#define N 2
//#define M N + 1
//#define NUM (M + 1) * M / 2//(2+1+1)*2+1/2
//int main()
//{
//	printf("%d\n", NUM);
//	return 0;
//}
//int i;
//void prt()
//{
//	for (i = 5; i < 8; i++)
//		printf("%c", '*');
//	printf("\t");
//}
//print(char* s)
//{
//	if (*s)
//	{
//		print(++s);
//		printf("%c", *s);
//	}
//}
//int main()
//{
	//for (i = 5; i <= 8; i++)
	//	prt();
	//return 0;
//	char ch[80] = "123abcdEFG*&";
//	int j;
//	puts(ch);
//	for (j = 0; ch[j] != '\0'; j++)
//		if (ch[j] >= 'A' && ch[j] <= 'Z')
//			ch[j] = ch[j] + 'e' - 'E';
//	puts(ch);
//	return 0;
//}

//char str[] = "Geneius";
//print(str);
//return 0;
//} 
#include <stdio.h>
//
//
//int solution(int m, int n) {
//    int result = 0;
//    for (int i = 1; i <= m; i++)
//    {
//        int x = i;
//        while (x)
//        {
//            int a = x % 10;
//            if (a == n)
//                result++;
//            x /= 10;
//        }
//    }
//
//
//    return result;
//}
//
//
//int main() {
//
//    int m;
//    int n;
//    scanf("%d", &m);
//    scanf("%d", &n);
//
//    int result = solution(m, n);
//
//    printf("%d", result);
//
//    return 0;
//}
#include <stdio.h>
#include <string.h>

int MaxSum(int* arr, int size)
{
    int current = arr[0];
    int max = current;

    for (int i = 0; i < size; i++)
    {
        if (current < 0)
            current = 0;
        current += arr[i];
        if (current > max)
            max = current;
    }
    return max;
}

int main(void)
{
    char x[40], y[40];
    


    int a1[6] = { 5, 6 ,- 3, 8 ,- 9, 2 };
    int a2[6] = { 1 ,- 12 ,20 ,0 ,- 3 ,-5 };
    int a3[6] = { -9 ,- 7, - 3 ,6 ,7, -1 };

    int max1, max2, max3;
    max1 = MaxSum(a1, 6);
    max2 = MaxSum(a2, 6);
    max3 = MaxSum(a3, 6);
    printf("%d\n", max1);
    printf("%d\n", max2);
    printf("%d\n", max3);
}
//#include <stdio.h>
//#include <stdlib.h>
//int MaxSum(int* arr, int size)
//{
//    int current = arr[0];
//    int max = current;
//
//    for (int i = 1; i < size; i++)
//    {
//        if (current < 0)
//            current = 0;
//        current += arr[i];
//        if (current > max)
//            max = current;
//    }
//    return max;
//}
//
//
//int solution(int m, int n, int** arr) {
//    int result = 0;
//
//    for (int i = 0; i < m; i++)
//    {
//        result += MaxSum(*arr+i, n);
//    }
//
//    return result;
//}
//
//
//int main() {
//
//    int m;
//    int n;
//    scanf("%d", &m);
//    scanf("%d", &n);
//
//    int** arr;
//
//    arr = (int**)malloc(m * sizeof(int*));
//
//    for (int i = 0; i < m; i++) {
//        arr[i] = (int*)malloc(n * sizeof(int));
//    }
//
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//
//    int result = solution(m, n, arr);
//
//    printf("%d", result);
//
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int current = 0;
//int max = 0;
//int MaxSum(int* arr, int size)
//{
//
//    for (int i = 0; i < size; i++)
//    {
//        if (current < 0)
//            current = 0;
//        current += arr[i];
//        if (current > max)
//            max = current;
//    }
//    return max;
//}
//
//
//int solution(int m, int n, int** arr) {
//    int result = 0;
//    current = **arr;
//    for (int i = 0; i < m; i++)
//    {
//        result = MaxSum(*(arr + i), n);
//        
//    }
//
//    return result;
//}
//
//
//int main() {
//
//    int m;
//    int n;
//    scanf("%d", &m);
//    scanf("%d", &n);
//
//    int** arr;
//
//    arr = (int**)malloc(m * sizeof(int*));
//
//    for (int i = 0; i < m; i++) {
//        arr[i] = (int*)malloc(n * sizeof(int));
//    }
//
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//
//    int result = solution(m, n, arr);
//
//    printf("%d", result);
//
////    return 0;
//#include <stdio.h>
//#include <stdlib.h>
//int MAx;
//int MaxSum(int* arr, int size)
//{
//    int current = arr[0];
//    int max = current;
//
//    for (int i = 0; i < size; i++)
//    {
//        if (current < 0)
//            current = 0;
//        current += arr[i];
//        if (current > max)
//            max = current;
//    }
//    return max;
//}
//
//void solution(int n, int* arr) {
//
//    int i, j;
//    int a = -1, b = -1;
//    int sum = 0;
//    for (i = 0; i < n; i++)
//    {
//        a = i;
//        sum = 0;
//        for (j = i; j < n; j++)
//        {
//            sum += arr[j];
//            if (sum == MAx)
//            {
//                b = j;
//                break;
//            }
//        }
//        if (b == j)
//            break;
//    }
//    printf("%d %d", a, b);
//
//}
//
//
//int main() {
//
//    int n;
//    scanf("%d", &n);
//
//
//    int* arr;
//    arr = (int*)malloc(n * sizeof(int));
//
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    MAx = MaxSum(arr, n);
//    solution(n, arr);
//
//    return 0;
//}