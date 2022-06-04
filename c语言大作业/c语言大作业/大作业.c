#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
//contacts
#define NAME 20
#define SEX 10
#define TELENUM 12
typedef struct people
{
	char name[NAME];
	char sex[SEX];
	int age;
	char tele_num[TELENUM];
}people;

typedef struct contacts
{
	people human;
	struct contacts* next;
}Contacts;

void menu()
{
	printf("*******************************************\n");
	printf("****************      0.退出   ************\n");
	printf("****            1.添加    2.删除       ****\n");
	printf("****            3.修改    4.查找       ****\n");
	printf("****            5.销毁    6.显示       ****\n");
	printf("*******************************************\n");
}

Contacts* ContactsInit()
{
	Contacts* p = (Contacts*)malloc(sizeof(Contacts));
	assert(p);
	p->next = NULL;
	FILE* doc = fopen("contacts.txt", "rb");
	if (doc == NULL)
		return p;

	Contacts* cur = (Contacts*)malloc(sizeof(Contacts));
	if (fread(cur, sizeof(Contacts), 1, doc))
	{
		p->next = cur;
		cur->next = NULL;
	}
	else
	{
		free(cur);
	}

	while (1)
	{
		Contacts* curnext = (Contacts*)malloc(sizeof(Contacts));
		
		if (fread(curnext, sizeof(Contacts), 1, doc))
		{
			cur->next=curnext;
			curnext->next = NULL;
		}
		else
		{
			free(curnext);
			break;
		}
		
	}
	fclose(doc);
	doc = NULL;

	return p;
}

Contacts* find(Contacts* p, char* Name)
{
	Contacts* cur = p->next;
	while (cur)
	{
		if (strcmp(cur->human.name, Name) == 0)
			return cur;
		cur = cur->next;
	}
	return NULL;
}



void ContactsFind(Contacts* p)
{
	char Name[NAME];
	printf("请输入要查找联系人的姓名；");
	scanf("%s", Name);

	Contacts* cur = find(p, Name);
	if (cur == NULL)
	{
		printf("没有查找到该联系人\n");
	}
	else
	{
		//输出该联系人的信息
		printf("%-20s%-10s%-10s%-20s\n", "姓名", "性别", "年龄", "电话号码");
		printf("%-20s%-10s%-10d%-20s\n", cur->human.name, cur->human.sex, cur->human.age, cur->human.tele_num);
	}
}
void ContactsAdd(Contacts* p)
{

	Contacts* newcontacts = (Contacts*)malloc(sizeof(Contacts));
	if (newcontacts == NULL)
		exit(-1);
	newcontacts->next = NULL;
	printf("请输入联系人的姓名：");
	scanf("%s", newcontacts->human.name);
	printf("请输入联系人的性别：");
	scanf("%s", newcontacts->human.sex);
	printf("请输入联系人的年龄：");
	scanf("%d", &(newcontacts->human.age));
	printf("请输入联系人的电话号码：");
	scanf("%s", newcontacts->human.tele_num);

	Contacts* cur = p;
	while (cur->next)
	{
		cur = cur->next;
	}
	cur->next = newcontacts;
	
}

void ContactsDelete(Contacts* p)
{
	char Name[NAME];
	printf("请输入要查找联系人的姓名；");
	scanf("%s", Name);
	Contacts* cur = find(p, Name);
	if (cur == NULL)
	{
		printf("没有查找到该联系人\n");
	}
	else
	{
		Contacts* curpro = p;
		while (cur != curpro->next)
		{
			curpro = curpro->next;
		}
		curpro->next = cur->next;
		free(cur);
		printf("该联系以删除\n");
	}
}
void ContactsChange(Contacts* p)
{
	char Name[NAME];
	printf("请输入需要修改的联系人的姓名；");
	scanf("%s", Name);
	Contacts* cur = find(p, Name);
	if (cur == NULL)
	{
		printf("没有该联系人，修改失败\n");
		return;
	}
	printf("请输入新的联系人的姓名；");
	scanf("%s", cur->human.name);
	printf("请输入新的联系人的性别；");
	scanf("%s", cur->human.sex);
	printf("请输入新的联系人的年龄；");
	scanf("%d", &(cur->human.age));
	printf("请输入新的联系人的电话号码；");
	scanf("%s", cur->human.tele_num);

	printf("修改成功\n");
}

void ContactsDestroy(Contacts* p)
{
	Contacts* cur = p->next;
	while (cur)
	{
		Contacts* curnext = cur->next;
		free(cur);
		p->next = curnext;
		cur = curnext;
	}
}
void ContactsPrint(Contacts* p)
{
	Contacts* cur = p->next;
	printf("%-20s%-10s%-10s%-20s\n", "姓名", "性别", "年龄", "电话号码");
	while (cur)
	{
		printf("%-20s%-10s%-10d%-20s\n", cur->human.name, cur->human.sex, cur->human.age, cur->human.tele_num);
		cur = cur->next;
	}
}

void load(Contacts* p)
{
	Contacts* cur = p->next;
	FILE* doc = fopen("contacts.txt", "wb");
	if(cur)
	while (fwrite(cur, sizeof(Contacts), 1, doc))
	{
		cur = cur->next;
		if (cur == NULL)
			break;
	}
	fclose(doc);
	doc = NULL;

}

int main()
{

	Contacts* phead = ContactsInit();
	int x;
	do
	{
		menu();
		printf("请做出你的选择->");
		scanf("%d", &x);
		switch (x)
		{
		case 0:
			load(phead);
			printf("退出系统\n");
			break;
		case 1:
			ContactsAdd(phead);
			break;
		case 2:
			ContactsDelete(phead);
			break;
		case 3:
			ContactsChange(phead);
			break;
		case 4:
			ContactsFind(phead);
			break;
		case 5:
			ContactsDestroy(phead);
			break;
		case 6:
			ContactsPrint(phead);
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}

	} while (x);
	return 0;
}