#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
int h, l;
void csh(char arr[HANG][LIE])
{
	for (h = 0; h < HANG; h++)
	{
		for (l = 0; l < LIE; l++)
		{
			arr[h][l] = ' ';
		}
	}
}
void print(char arr[HANG][LIE])
{
	for (h = 0; h < HANG; h++)
	{
		for (l = 0; l < LIE; l++)
		{
			printf(" %c ", arr[h][l]);
			if (l < LIE - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (h < HANG - 1)
		{
			for (l = 0; l < LIE; l++)
			{
				printf("---");
				if (l < LIE - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
void playwj(char arr[HANG][LIE])
{
	printf("请玩家下棋，下棋盘的坐标\n");
	while (1)
	{
		scanf("%d%d", &h, &l);
		if (h > 0 && h <= HANG && l > 0 && l <= LIE)
		{
			if (arr[h-1][l-1]==' ')
			{
				arr[h-1][l-1] = '*';
				break;
			}
			else
			{
				printf("该位置已被覆盖\n");
			}
		}
		else
		{
			printf("请输入正确的组别坐标\n");
		}
	}
}
void playai(char arr[HANG][LIE])
{
	printf("电脑下棋#子棋如下\n");
	while (1)
	{
		h = rand() % HANG;
		l = rand() % LIE;
		if (arr[h][l] == ' ')
		{
			arr[h][l] = '#';
			break;
		}
	}
}
/* * 玩家赢
# 电脑赢
q 平局
c 游戏继续*/
char is_win(char arr[HANG][LIE])
{
	for (h = 0; h < HANG; h++)
	{
		if (arr[h][0] == arr[h][1] && arr[h][1] == arr[h][2] && arr[h][0] != ' ')
			return arr[h][0];
	}
	for (l = 0; l < LIE; l++)
	{
		if (arr[0][l] == arr[1][l] && arr[1][l] == arr[2][l]&&arr[0][l]!=' ')
			return arr[0][l];
	}
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]&&arr[0][0]!=' ')
		return arr[0][0];
	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]&&arr[0][2]!=' ')
		return arr[0][2];
	return is_full(arr);
}
char is_full(char arr[HANG][LIE])
{
	for (h = 0; h < HANG; h++)
	{
		for (l = 0; l < LIE; l++)
		{
			if (arr[h][l] == ' ')
				return 'c';
		}
	}
	return 'q';
}