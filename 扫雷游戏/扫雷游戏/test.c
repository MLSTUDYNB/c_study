#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("##############################################\n");
	printf("##################��1 ����Ϸ##################\n");
	printf("#################��0������Ϸ##################\n");
	printf("##############################################\n");
}

void game()
{
	int s = NOLEI;
	char board[ROWS][COLS], show[ROWS][COLS];
	//��ʼ��
	init(board, ROWS, COLS, '0');
	
	init(show, ROWS, COLS, '*');
	//��ӡ����
	//print(show, ROW, COL);
	
	//����
	put(board, ROW, COL);
	print(board, ROW, COL);
	//print(board, ROW, COL);
	//ɨ��
	while (s>0)
	{
		print(show, ROW, COL);
		s=sweep_mine(board, show, ROW, COL);//ע��
		
	}
	if (s == 0)
	{
		printf("ɨ�׳ɹ�\n");
		//printf("��������ͼ\n");
		//print(board, ROW, COL);
	}
	else
	{
		printf("���������㱻ը����\n");
		//printf("��������ͼ\n");
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
		printf("������ѡ��->");
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
			printf("ѡ��������������");
			break;
		}
	} while (n);
	return 0;
}