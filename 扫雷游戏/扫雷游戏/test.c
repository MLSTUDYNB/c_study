#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("##############################################\n");
	printf("##################按1 玩游戏##################\n");
	printf("#################按0不玩游戏##################\n");
	printf("##############################################\n");
}

void game()
{
	int s = NOLEI;
	char board[ROWS][COLS], show[ROWS][COLS];
	//初始化
	init(board, ROWS, COLS, '0');
	
	init(show, ROWS, COLS, '*');
	//打印看看
	//print(show, ROW, COL);
	
	//布雷
	put(board, ROW, COL);
	print(board, ROW, COL);
	//print(board, ROW, COL);
	//扫雷
	while (s>0)
	{
		print(show, ROW, COL);
		s=sweep_mine(board, show, ROW, COL);//注意
		
	}
	if (s == 0)
	{
		printf("扫雷成功\n");
		//printf("下面是雷图\n");
		//print(board, ROW, COL);
	}
	else
	{
		printf("哈哈哈，你被炸死了\n");
		//printf("下面是雷图\n");
		//print(board, ROW, COL);
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int n;
	do
	{
		menu();
		printf("请做出选择->");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			printf("不玩游戏，退出程序\n");
			break;
		default:
			printf("选择错误，请从新输入");
			break;
		}
	} while (n);
	return 0;
}