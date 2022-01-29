#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdio.h>
void f(char* arr,int n)
{
    int left = 0;
    int right = n;
    while (left<=right)
    {
        int temp = *(arr + left);
        *(arr + left) = *(arr + right);
        *(arr + right) = temp;
        left++;
        right--;
    }
}
int main()
{
    char arr[10001] = { 0 };
    gets(arr);
    int len = strlen(arr) - 1;
    f(arr,len);
    for (int i = 0; i <= len; i++)
    {
        printf("%c", arr[i]);
    }
    return 0;
}
//#include <stdio.h>
//int main()
//{
//    char arr[10001]={0};
//    int i = 0,sum=0;
//    while ((arr[i]=getchar())!='\n')
//    {
//        i++;
//        sum++;
//    }
//    for (i = sum-1; i>=0; i--)
//    {
//        printf("%c", arr[i]);
//    }
//    return 0;
//}
/*
写一个函数打印arr数组的内容，不使用数组下标，使用指针。
arr是一个整形一维数组。
*/
//#include <stdio.h>
//int main()
//{
//    int arr[5] = { 1,2,3,4,5 };
//    int n;
//    for (n = 0; n < 5; n++)
//    {
//        printf("%d ", *(arr + n));
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//    //unsigned long pulArray[] = { 6,7,8,9,10 };
//    //unsigned long* pulPtr;
//    //pulPtr = pulArray;
//    //*(pulPtr + 3) += 3;
//    //printf(“ % d, % d\n”, *pulPtr, *(pulPtr + 3));6 12
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);//0 0 3 4 5
//    }
//    return 0;
//}
//#include <string.h>
//void quicksort(char* arr, int i, int j)
//{
//	if (i > j)return;
//	int left = i,right = j;
//	char mid = arr[left];
//	while (left < right){
//		while (arr[right] >= mid && left < right)
//			right--;
//		while (arr[left] <= mid && left < right)
//			left++;
//		char temp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = temp;
//	}
//	arr[i] = arr[left];arr[left] = mid;
//	quicksort(arr, i, left - 1);quicksort(arr, right + 1, j);
//}
//main()
//{
//	char arr[501];
//	scanf("%s", arr);
//	int j = strlen(arr) - 1,i = 0;
//	quicksort(arr, i, j);j = 0;
//	while (arr[i] != '\0'){
//		if (arr[i] != arr[i + 1])
//			j++;
//		i++;
//	}printf("%d\n", j);
//}

/*
输入描述：
Lily使用的图片包括"A"到"Z"、"a"到"z"、"0"到"9"。输入字母或数字个数不超过1024。
输出描述：
Lily的所有图片按照从小到大的顺序输出
*/
//#include <stdio.h> 
//#include <string.h>
//void quicksort(char* arr,int i,int j)
//{
//	if (i > j)return ;
//	int left = i,right = j;
//	char mid = arr[left];
//	while (left < right){
//		while (arr[right] >= mid&& left < right)
//			right--;
//		while (arr[left] <= mid&& left < right)
//			left++;
//		char temp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = temp;
//	}
//	arr[i] = arr[left];
//	arr[left] = mid;
//	quicksort(arr, i, left-1);
//	quicksort(arr, right+1, j);
//}
//int main()
//{
//	char arr[1001];
//	while (~scanf("%s", arr)){
//		int j = strlen(arr) - 1, i = 0;
//		quicksort(arr, i, j);
//		while (arr[i] != '\0'){
//			printf("%c", arr[i]);
//			i++;
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a,&b);
//	printf("a=%d,b=%d\n",a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//int NumberOf1(int n) 
//{
//	int b = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		b++;
//	}
//	//int  b, i;
//	//b = 0;
//	//for (i = 0; i < 32; i++)
//	//{
//	//	if (((n >> i) & 1) == 1)
//	//		b++;
//	//}
//	return b;
//}
//int main()
//{
//	int a, b;
//	scanf("%d", &a);
//	b = NumberOf1(a);
//	printf("%d\n", b);
//	return 0;
//}
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//#include <stdio.h>
//int main()
//{
//	int n,i;
//	scanf("%d", &n);
//	printf("奇数位>");
//	for (i = 31; i >=0; i--)
//	{
//		if (i % 2 == 0)
//			printf("%d", (n >> i) & 1);
//	}
//	printf("\n偶数位>"); 
//	for (i = 31; i >= 0; i--)
//	{
//		if (i % 2 == 1)
//			printf("%d", (n >> i) & 1);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b,i;
//	scanf("%d%d", &a, &b);
//	a = a ^ b;
//	b = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((a >> i) & 1 == 1)
//			b++;
//	}
//	printf("%d\n", b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//6
//	b = ++c, c++, ++a, a++;//c=8,a=8 b=7
//	b += a++ + c;//16+7=23,a9
//	printf("a = %d b = %d c = %d\n:", a, b, c);//9,23,8
//	return 0;
//}