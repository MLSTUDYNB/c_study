#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	unsigned int a = 0x1234; 
//	//00 00 12 34 
//	unsigned char b = *(unsigned char*)&a;
//	//
//	//unsigned char a = 200;
//	//unsigned char b = 100;
//	//unsigned char c = 0;
//	//c = a + b;
//	//printf(" %d %d", a + b, c);
//	return 0;
//}
//int main()
//{
//    char a[1000] = { 0 };//-128~127
//    int i = 0;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    //-1  -2  -3         
//    printf("%d", strlen(a));
//    return 0;
//}
int main()
{
	int arr[10][10] = { 0 };
	int i=0, j=0;
	for (i=0;i<10;i++)
	{
		arr[i][0] = 1;
		for (j=0;j<=i;j++)
		{
			if (i == j)
			{
				arr[i][j] = 1;
			}
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
