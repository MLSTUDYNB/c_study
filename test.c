#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void manu()
{
	printf("***********************************\n");
	printf("*******  玩游戏请输入数字1  *******\n");
	printf("*******  不玩游戏输入数字0  *******\n");
	printf("***********************************\n");
}
void game()
{
	char houduan[HANG][LIE] = { 0 };
	char yonghu[HANG][LIE] = { 0 };
	//初始化
	csh(houduan,'0');
	csh(yonghu,'*');
	//打印
	//dayin(houduan);
	dayin(yonghu);
	//布置地雷
	buzhi(houduan);
	//dayin(houduan);
	//扫雷
	saolei(houduan, yonghu);
}
int main()
{
	int a;
	manu();
	do
	{
		srand((unsigned)time(NULL));
		printf("请做出你的选择->");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			printf("不玩游戏，退出程序\n");
			break;
		default:
			printf("请输入正确的数字\n");
			break;
		}
	} while (a);
	return 0;
}
