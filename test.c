#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void manu()
{
	printf("***********************************\n");
	printf("*******  ����Ϸ����������1  *******\n");
	printf("*******  ������Ϸ��������0  *******\n");
	printf("***********************************\n");
}
void game()
{
	char houduan[HANG][LIE] = { 0 };
	char yonghu[HANG][LIE] = { 0 };
	//��ʼ��
	csh(houduan,'0');
	csh(yonghu,'*');
	//��ӡ
	//dayin(houduan);
	dayin(yonghu);
	//���õ���
	buzhi(houduan);
	//dayin(houduan);
	//ɨ��
	saolei(houduan, yonghu);
}
int main()
{
	int a;
	manu();
	do
	{
		srand((unsigned)time(NULL));
		printf("���������ѡ��->");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			printf("������Ϸ���˳�����\n");
			break;
		default:
			printf("��������ȷ������\n");
			break;
		}
	} while (a);
	return 0;
}
