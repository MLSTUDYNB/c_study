#define _CRT_SECURE_NO_WARNINGS 1

#include "contacts.h"
//录入，查找，删除，，修改，显示，排序
void menu()
{
	printf("############################################\n");
	printf("######          1.录入  2.查找     #########\n");
	printf("######          3.删除  4.修改     #########\n");
	printf("######          5.排序  6.显示     #########\n");
	printf("###########         0.退出     #############\n");
	printf("############################################\n");
}

void test()
{
	int n;
	contacts con;
	//初始化
	init_contacts(&con);
	do
	{
		menu();
		printf("请选择你的操作->");
		scanf("%d", &n);
		switch (n)
		{
		case quit:
			store(&con);
			printf("退出程序\n");
			free(con.human);
			con.human = NULL;
			break;
		case add://添加
			add_contacts(&con);
			break;
		case find://查找
			find_contacts(&con);
			break;
		case delete://删除
			delete_contacts(&con);
			break;
		case change://修改
			change_contacts(&con);
			break;
		case sort://排序
			sort_contacts(&con);
			break;
		case print://打印
			print_contacts(&con);
			break;
		default:
			printf("操作非法,请重新选择\n");
			break;
		}
	} while (n);
}

int main()
{
	test();
	return 0;
}