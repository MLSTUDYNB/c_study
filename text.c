#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void yemian()
{
	printf("*****************************\n");
	printf("** 玩游戏输入1 **不玩输入0***\n");
	printf("*****************************\n");
}
caidan()
{
	int a;
	do
	{
		printf("输入数字");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			printf("开始游戏\n");
			game();//游戏的实现
			break;
		case 0:
			printf("退出程序，游戏结束\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (a);
}
int main()
{
	yemian();
	caidan();
	//system("cls");
	return 0;
}