#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void yemian()
{
	printf("*****************************\n");
	printf("** ����Ϸ����1 **��������0***\n");
	printf("*****************************\n");
}
caidan()
{
	int a;
	do
	{
		printf("��������");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();//��Ϸ��ʵ��
			break;
		case 0:
			printf("�˳�������Ϸ����\n");
			break;
		default:
			printf("�����������������\n");
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