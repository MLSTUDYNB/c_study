#define _CRT_SECURE_NO_WARNINGS 1

#include "contacts.h"
//¼�룬���ң�ɾ�������޸ģ���ʾ������
void menu()
{
	printf("############################################\n");
	printf("######          1.¼��  2.����     #########\n");
	printf("######          3.ɾ��  4.�޸�     #########\n");
	printf("######          5.����  6.��ʾ     #########\n");
	printf("###########         0.�˳�     #############\n");
	printf("############################################\n");
}

void test()
{
	int n;
	contacts con;
	//��ʼ��
	init_contacts(&con);
	do
	{
		menu();
		printf("��ѡ����Ĳ���->");
		scanf("%d", &n);
		switch (n)
		{
		case quit:
			store(&con);
			printf("�˳�����\n");
			free(con.human);
			con.human = NULL;
			break;
		case add://���
			add_contacts(&con);
			break;
		case find://����
			find_contacts(&con);
			break;
		case delete://ɾ��
			delete_contacts(&con);
			break;
		case change://�޸�
			change_contacts(&con);
			break;
		case sort://����
			sort_contacts(&con);
			break;
		case print://��ӡ
			print_contacts(&con);
			break;
		default:
			printf("�����Ƿ�,������ѡ��\n");
			break;
		}
	} while (n);
}

int main()
{
	test();
	return 0;
}