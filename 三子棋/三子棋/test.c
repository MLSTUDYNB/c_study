#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("##########################################\n");
	printf("##############����Ϸ��1###################\n");
	printf("#############������Ϸ��0##################\n");
	printf("##########################################\n");
}

void game()
{
	int ret;
	char board[ROW][COLUMNS] = { 0 };
	//��ʼ��
	init(board);
	//��ӡ����
	while (1)
	{
		print(board);
		//�������
		play(board);
		system("cls");
		print(board);
		if ((ret=judge(board)) != 'c')
		{
			break;
		}
		//��������
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
		printf("����Ӯ\n");
	}
	else if (ret == '*')
	{
		printf("��ϲ��ʤ����\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	
}

int main()
{
	menu();
	srand((unsigned int )time(NULL));
	int n;
	do
	{
		printf("���������ѡ��\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			printf("������Ϸ���˳�����\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (n);
	return 0;
}