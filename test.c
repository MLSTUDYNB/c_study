#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void caidan()
{
	printf("************************************\n");
	printf("*** 玩游戏输入1 ***不玩游戏输入0 ***\n");
	printf("************************************\n");
}
void game()
{
	char arr[HANG][LIE] = { 0 };
	csh(arr);//初始化
	print(arr);//打印
	char ret;
	while (1)
	{
		playwj(arr);//玩家下棋
		print(arr);//打印
		//判断输赢
		system("cls");
		ret=is_win(arr);
		if (ret != 'c')
		{
			break;
		}
		playai(arr);//电脑下棋
		print(arr);//打印
		//判断输赢
		ret=is_win(arr);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void jiemian()
{
	char arr[HANG][LIE] = { 0 };
	int a = 0;
	do
	{	
		printf("请选择是否玩游戏->");
		srand((unsigned)time(NULL));
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			printf("开始玩游戏\n");
			game();
			break;
		case 0:
			printf("不玩游戏，退出程序\n");
			break;
		default:
			printf("输入错误，请输入0或1\n");
		}
	} while (a);
}
int main()
{
	caidan();//选择菜单
	jiemian();//游戏界面
	return 0;
}