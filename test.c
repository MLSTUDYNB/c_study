#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void caidan()
{
	printf("************************************\n");
	printf("*** ����Ϸ����1 ***������Ϸ����0 ***\n");
	printf("************************************\n");
}
void game()
{
	char arr[HANG][LIE] = { 0 };
	csh(arr);//��ʼ��
	print(arr);//��ӡ
	char ret;
	while (1)
	{
		playwj(arr);//�������
		print(arr);//��ӡ
		//�ж���Ӯ
		system("cls");
		ret=is_win(arr);
		if (ret != 'c')
		{
			break;
		}
		playai(arr);//��������
		print(arr);//��ӡ
		//�ж���Ӯ
		ret=is_win(arr);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void jiemian()
{
	char arr[HANG][LIE] = { 0 };
	int a = 0;
	do
	{	
		printf("��ѡ���Ƿ�����Ϸ->");
		srand((unsigned)time(NULL));
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			printf("��ʼ����Ϸ\n");
			game();
			break;
		case 0:
			printf("������Ϸ���˳�����\n");
			break;
		default:
			printf("�������������0��1\n");
		}
	} while (a);
}
int main()
{
	caidan();//ѡ��˵�
	jiemian();//��Ϸ����
	return 0;
}