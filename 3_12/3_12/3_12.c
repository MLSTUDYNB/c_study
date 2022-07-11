#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <malloc.h>
#include <string.h>
//f(int arr[])
//{}
//f(int arr[3])
//{}
//f(int* arr)
//{}
//f1(int* arr1[])
//{}
//f1(int** arr1)
//{}
//f1(int* arr[3])
//{}
//
//int main()
//{
//	int arr[3] = { 1,2,3 };
//	int* arr1[3];
//	f(arr);
//	return 0;
//}
//int main()
//{
//	int n, m, r, c;
//	scanf("%d%d", &n, &m);
//	char* a = (char*)malloc(n * m);
//	
//	int i = 0;
//	for (i = 0; i < n * m; i++)
//	{
//		scanf("%c", a + i);
//	}
//	scanf("%d%d",  &r, &c);
//	char* b = (char*)malloc(r * c);
//	for (i = 0; i < n * m; i++)
//	{
//		scanf("%c", b + i);
//	}
//
//	return 0;
//}
//int main()
//{
//	char* a[100],*b[100];
//	int n, m, r, c;
//	scanf("%d%d", &n, &m);
//	int i = 0,j=0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", a[i]);
//	}
//	scanf("%d%d",  &r, &c);
//	for (i = 0; i < r; i++)
//	{
//		scanf("%s", b[i]);
//	}
//	for (j = 0; j < r; j++)
//	{
//		char* temp;
//		for (i = 0; i <n-1; i++)
//		{
//			temp= strstr(a[i], b[j]);//i+1为查找的第几行，返回值为地址
//			if (temp)
//			{
//				break;
//			}
//		}
//		
//		
//	}
//	return 0;
//}
//int main()
//{
//	char a[100][100], b[100][100];
//	int n, m, r, c;
//	scanf("%d%d", &n, &m);
//	int i = 0, j = 0,x=0,y=0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%c", a[i][j]);
//		}
//	}
//	scanf("%d%d", &r, &c);
//	for (x = 0; x < n; x++)
//	{
//		for (y = 0; y < m; y++)
//		{
//			scanf("%c", b[i][j]);
//		}
//	}
//	x = 0;
//	y = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (a[i][j] == b[x][y]&&x<n&&y<m)
//			{
//				y++;
//			}
//		}
//	}
//	return 0;
//}
f(int(*p)[2] )
{}
int main()
{
	int arr[2][2];
	f(arr);
	return 0;
}