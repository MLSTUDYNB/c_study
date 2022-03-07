#define _CRT_SECURE_NO_WARNINGS 1
/*实现一个函数，可以左旋字符串中的k个字符。
例如：
ABCD左旋一个字符得到BCDA
ABCD左旋两个字符得到CDAB*/

/*有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
请编写程序在这样的矩阵中查找某个数字是否存在。
要求：时间复杂度小于O(N);*///#include <string.h>
//int find(int (*arr)[4],int n,int* i,int* j)
//{
//	*i = 0;
//	*j = 3;
//	while (arr[*i][*j]<n)
//	{
//		(*i)++;
//	}
//	for (*j=3;*j>=0;(* j)--)
//	{
//		if (arr[*i][*j] == n)
//			return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[4][4] = {
//		{1,2,3,4},
//		{5,6,7,8},
//		{9,10,11,12},
//		{13,14,15,16}
//	};
//	int k;
//	int i = 4, j = 4;
//	scanf("%d", &k);
//	int ret=find(arr,k,&i,&j);
//	if (ret==1)
//	{
//		printf("找到了\n");
//		printf("下标是%d %d\n", i, j);
//	}
//	else
//	{
//		printf("没有找到\n");
//	}
//	return 0;
//}
//void left_str(char* str,int k)
//{
//	int len = strlen(str)-1;
//	while (k--)
//	{
//		int i = 0;
//		char temp = *str;
//		for (i = 0; i < len; i++)
//		{
//			*(str + i) = *(str + i + 1);
//		}
//		*(str + i ) = temp;
//	}
//}
//
//int main()
//{
//	char str[100];
//	int k;
//	gets(str);
//	scanf("%d", &k);
//	left_str(str,k);
//	printf(str);
//	return 0;
//}
//void left_str(char* str, int k)
//{
//	while (k)
//	{
//		char* temp = str;
//		char t = *str;
//		while (*temp)
//		{
//			*temp = *(temp + 1);
//			temp++;
//		}
//		*--temp = t;
//		k--;
//	}
//}
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//#include <stdio.h>
//
//int main()
//{
//	int kill;
//	for(kill = 'a'; kill <= 'd';kill++)
//	{
//		if ((kill != 'a') + (kill == 'c') + (kill == 'd') + (kill != 'd') == 3)
//			printf("凶手是%c\n", kill);
//	}
//	return 0;
//}
