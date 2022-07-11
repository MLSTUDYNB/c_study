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
	printf("****************      0.�˳�   ************\n");
	printf("****            1.���    2.ɾ��       ****\n");
	printf("****            3.�޸�    4.����       ****\n");
	printf("****            5.����    6.��ʾ       ****\n");
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
	printf("������Ҫ������ϵ�˵�������");
	scanf("%s", Name);

	Contacts* cur = find(p, Name);
	if (cur == NULL)
	{
		printf("û�в��ҵ�����ϵ��\n");
	}
	else
	{
		//�������ϵ�˵���Ϣ
		printf("%-20s%-10s%-10s%-20s\n", "����", "�Ա�", "����", "�绰����");
		printf("%-20s%-10s%-10d%-20s\n", cur->human.name, cur->human.sex, cur->human.age, cur->human.tele_num);
	}
}
void ContactsAdd(Contacts* p)
{

	Contacts* newcontacts = (Contacts*)malloc(sizeof(Contacts));
	if (newcontacts == NULL)
		exit(-1);
	newcontacts->next = NULL;
	printf("��������ϵ�˵�������");
	scanf("%s", newcontacts->human.name);
	printf("��������ϵ�˵��Ա�");
	scanf("%s", newcontacts->human.sex);
	printf("��������ϵ�˵����䣺");
	scanf("%d", &(newcontacts->human.age));
	printf("��������ϵ�˵ĵ绰���룺");
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
	printf("������Ҫ������ϵ�˵�������");
	scanf("%s", Name);
	Contacts* cur = find(p, Name);
	if (cur == NULL)
	{
		printf("û�в��ҵ�����ϵ��\n");
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
		printf("����ϵ��ɾ��\n");
	}
}
void ContactsChange(Contacts* p)
{
	char Name[NAME];
	printf("��������Ҫ�޸ĵ���ϵ�˵�������");
	scanf("%s", Name);
	Contacts* cur = find(p, Name);
	if (cur == NULL)
	{
		printf("û�и���ϵ�ˣ��޸�ʧ��\n");
		return;
	}
	printf("�������µ���ϵ�˵�������");
	scanf("%s", cur->human.name);
	printf("�������µ���ϵ�˵��Ա�");
	scanf("%s", cur->human.sex);
	printf("�������µ���ϵ�˵����䣻");
	scanf("%d", &(cur->human.age));
	printf("�������µ���ϵ�˵ĵ绰���룻");
	scanf("%s", cur->human.tele_num);

	printf("�޸ĳɹ�\n");
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
	printf("%-20s%-10s%-10s%-20s\n", "����", "�Ա�", "����", "�绰����");
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
		printf("���������ѡ��->");
		scanf("%d", &x);
		switch (x)
		{
		case 0:
			load(phead);
			printf("�˳�ϵͳ\n");
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
			printf("ѡ�����������ѡ��\n");
			break;
		}

	} while (x);
	return 0;
}