#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("##########################################\n");
	printf("##############玩游戏按1###################\n");
	printf("#############不玩游戏按0##################\n");
	printf("##########################################\n");
}

void game()
{
	int ret;
	char board[ROW][COLUMNS] = { 0 };
	//初始化
	init(board);
	//打印棋盘
	while (1)
	{
		print(board);
		//玩家下棋
		play(board);
		system("cls");
		print(board);
		if ((ret=judge(board)) != 'c')
		{
			break;
		}
		//电脑下棋
		AI(board);
		system("cls");
		print(board);
		if ((ret = judge(board)) != 'c')
		{
			break;
		}
	}
	if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if (ret == '*')
	{
		printf("恭喜你胜利了\n");
	}
	else
	{
		printf("平局\n");
	}
	
}

int main()
{
	menu();
	srand((unsigned int )time(NULL));
	int n;
	do
	{
		printf("请做出你的选择\n");
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
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (n);
	return 0;
}