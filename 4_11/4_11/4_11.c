#define _CRT_SECURE_NO_WARNINGS 1
//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换。
//size_t offsetof( structName, memberName );
#include <stdio.h>
#include <stdlib.h>
//
//#define my_offsetof(structName,memberName) (size_t)&(((structName*)0)->memberName)
//struct s
//{
//	int a;
//	char b;
//}p;
//
//int main()
//{
//	printf("%d\n", my_offsetof(struct s, b));
//	return 0;
//}
//#define swap(n) ((n&0x55555555)<<1|(n&0xaaaaaaaa)>>1)
//int main()
//{ 
//	printf("%d\n", swap(5));
//	return 0;
//}
//struct
//{
//	char num[10];
//
//}info;
//
//int main()
//{
//	info.num = "abcd" ;
//	printf("%s\n", info.num);
//	return 0;
//}
//struct
//{
//	int a;
//	int b;
//}x;
//
//struct point
//{
//	int x;
//	int y;
//};
//struct point mak(int x, int y)
//{
//	struct point temp;
//
//	temp.x = x;
//	temp.y = y;
//}
//int main()
//{
//	//struct s z;
//	/*z = { 10,20 };*/
//	/*x = { 10,20 };*/
//	printf("%d\n", sizeof(long));
//	typedef struct
//	{
//		int a;
//		int b;
//	}x;
//	x y;
//	
//	return 0;
//}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int* a = (int*)malloc(n * sizeof(int));
	if (a == NULL)
	{
		return 0;
	}
	int cou = 0,i=0,j=0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", a + i);
	}
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			if (*(a + i) > *(a + j))
			{
				int temp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = temp;
				cou++;
			}
		}
	}
	printf("%d\n", cou);
	return 0;
}