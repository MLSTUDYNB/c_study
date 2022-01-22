#define _CRT_SECURE_NO_WARNINGS 1 
#include "game.h"

void init(char board[ROW][COLUMNS])
{
	int a, b;
	for (a = 0; a < ROW; a++)
	{
		for (b = 0; b < COLUMNS; b++)
		{
			board[a][b] = ' ';
		}
	}
}

void print(char board[ROW][COLUMNS])
{
	int a, b;
	for (a = 0; a < ROW; a++)
	{
		for (b = 0; b < COLUMNS; b++)
		{
			printf(" %c ", board[a][b]);
			if (b < COLUMNS - 1)
				printf("|");
		}
		printf("\n");
		for (b = 0; b < COLUMNS; b++)
		{
			if(a<ROW-1)
			printf("----");
		}
		printf("\n");
	}
}

void play(char board[ROW][COLUMNS])
{
	printf("玩家请下棋的坐标->");
	int i, j;
	while (1)
	{
		scanf("%d%d", &i, &j);
		if (i > 0 && i <= 3 && j > 0 && j <= 3)
		{
			if (board[i-1][j-1] == ' ')
			{
				board[i-1][j-1] = '*';
				break;
			}
			else
			{
				printf("该位置已被覆盖，请重新输入");
			}
		}
		else
		{
			printf("坐标非法，请从新输入");
		}
	}
}

void AI(char board[ROW][COLUMNS])
{
	while (1)
	{
		int i = rand() % ROW;
		int j = rand() % COLUMNS;
			if (board[i][j ] == ' ')
			{
				board[i ][j ] = '#';
				break;
			}
	}
}

int dogfall(char board[ROW][COLUMNS])
{
	int a, b;
	for (a = 0; a < ROW; a++)
	{
		for (b = 0; b < COLUMNS; b++)
		{
			if (board[a][b] == ' ')
			{
				return 1;
			}
		}
	}
	return 0;
}

char judge(char board[ROW][COLUMNS])
{
	int a;
	for (a = 0; a < ROW; a++)
	{
		if (board[a][0] == board[a][1] && board[a][1] == board[a][2]&&board[a][0]!=' ')
		{
			return board[a][0];
		}
		if (board[0][a] == board[1][a] && board[2][a] == board[1][a] && board[1][a] != ' ')
		{
			return board[0][a];
		}
	}
	//还有两种情况
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ')
	{
		return board[0][2];
	}
	//平局
	if (dogfall(board) == 0)
	{
		return 'w';
	}
	else
	{
		return 'c';
	}
}