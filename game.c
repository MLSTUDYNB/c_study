#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
int h,l;
void csh(char arr[hang][lie])
{
	for (h = 0; h < hang; h++)
	{
		for (l = 0; l < hang; l++)
		{
			arr[h][l] =' ';
		}
	}
}
void qipan(char arr[hang][lie])
{
	for (h = 0; h < hang; h++)
	{
		for (l = 0; l < hang; l++)
		{
			printf(" %c ", arr[h][l]);
			if (l < hang-1)
				printf("|");
		}
		printf("\n");
		if (h < hang - 1)
		{
			for (l = 0; l < hang; l++)
			{
				printf("---");
				if (l < hang - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}
void game()
{
	char arr[hang][lie] = { 0};
	csh(arr);//数组初始化
	qipan(arr);//初始化棋盘
	
}