#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

int s = NOLEI;

void init(char board[ROWS][COLS], int rows,int cols,char x)
{
	int a, b;
	for (a = 0; a < rows; a++)
	{
		for (b = 0; b < cols; b++)
		{
			board[a][b] = x;
		}
	}
}

void print(char board[ROWS][COLS], int row, int col)
{
	int a, b;
	for (b = 0; b <= col; b++)
	{
		printf("%d ", b);
	}
	printf("\n");
	for (a = 1; a <= row; a++)
	{
		printf("%d ", a);
		for (b = 1; b <=col; b++)
		{
			printf("%c ", board[a][b]);
		}
		printf("\n");
	}
}

void put(char board[ROWS][COLS],int row, int col)
{
	int sum = MINE;
	while (sum)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			sum--;
		}
	}
}

int judge(char board[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int a = 0, b = 0, sum = 0;
	if (x <= 0 || y <= 0 || x > 9 || y > 9||board[x][y]=='q')
	{
		return s;
	}
	else if (board[x][y] == '1')
	{
		return -1;
	}
	else
	{
		a = x - 1;
		b = y - 1;
		for (a=x-1; a <= x + 1; a++)
		{
			for (b=y-1; b <= y + 1; b++)
			{
				if (board[a][b] == '1')
				{
					sum++;
				}
			}
		}
		if (sum != 0)
		{
			show[x][y] = '0' + sum;
			s--;
		}
		else
		{
			show[x][y] = ' ';
			for (a = x - 1; a <= x + 1&&a<=ROW&&a>0; a++)
			{
				for (b=y-1; b <= y + 1&&b<=COL&&b>0; b++)
				{
					show[a][b] = ' ';
					s--;
					board[x][y] = 'q';
					judge(board, show, a, b);
				}
			}
		}
	}
}

int sweep_mine(char board[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y;
	printf("请输入坐标->");
		scanf("%d%d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			s=judge(board, show, x, y);
		}
		else
		{
			printf("请输入正确的坐标->");
		}
		return s;
}