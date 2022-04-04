#define _CRT_SECURE_NO_WARNINGS 1

#include "contacts.h"

//Ѱ����
int find_people(char* name_x,const contacts* p)
{
	int i = 0;
	for (i=0;i<p->count;i++)
	{
		if (strcmp(name_x, p->human[i].name) == 0)
			return i;
	}
	return -1;
}

void init_contacts(contacts* p)
{
	p->count = 0;
	memset(p->human, 0, sizeof(p->human));
}
//�������Ա����䣬�绰����ַ
void print_contacts(const contacts* p)
{
	printf("%-15s%-5s%-5s%-15s%-30s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	int i = 0;
	for (i = 0; i < p->count; i++)
	{
		printf("%-15s%-5s%-5d%-15s%-30s\n", p->human[i].name, p->human[i].sex, p->human[i].age, p->human[i].tele, p->human[i].address);
	}
}

void add_contacts(contacts* p)
{
	if (p->count == human_max)
	{
		printf("ͨѶ¼����");
		return;
	}
	printf("�������˵�����->");
	scanf("%s", p->human[p->count].name);
	printf("�������˵��Ա�->");
	scanf("%s", p->human[p->count].sex);
	printf("�������˵�����->");
	scanf("%d", &p->human[p->count].age);
	printf("�������˵ĵ绰->");
	scanf("%s", p->human[p->count].tele);
	printf("�������˵ĵ�ַ->");
	scanf("%s", p->human[p->count].address);
	p->count++;
	printf("¼��ɹ�\n");
}

void find_contacts(const contacts* p)
{
	char name_x[name_max];
	printf("�������˵�����->");
	scanf("%s", name_x);
	int ret=find_people(name_x, p);
	if (ret == -1)
		printf("û�в��ҵ�����\n");
	else
	{
		printf("���ҵ�����\n");
		printf("%-15s%-5s%-5s%-15s%-30s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		printf("%-15s%-5s%-5d%-15s%-30s\n", p->human[ret].name, p->human[ret].sex, p->human[ret].age,
			p->human[ret].tele, p->human[ret].address);
	}
}

void delete_contacts(contacts* p)
{
	char name_x[name_max];
	printf("�������˵�����->");
	scanf("%s", name_x);
	int ret = find_people(name_x, p);
	if (ret == -1)
		printf("û�в��ҵ�����\n");
	else
	{
		int i;
		for (i = ret; i < p->count-1; i++)
		{
			p->human[i] = p->human[i + 1];
		}
		p->count--;
		printf("ɾ���ɹ�\n");
	}
}

void change_contacts(contacts* p)
{
	char name_x[name_max];
	printf("�������˵�����->");
	scanf("%s", name_x);
	int ret = find_people(name_x, p);
	if (ret == -1)
		printf("û�в��ҵ�����\n");
	else
	{
		printf("�������˵�����->");
		scanf("%s", p->human[ret].name);
		printf("�������˵��Ա�->");
		scanf("%s", p->human[ret].sex);
		printf("�������˵�����->");
		scanf("%d", &p->human[ret].age);
		printf("�������˵ĵ绰->");
		scanf("%s", p->human[ret].tele);
		printf("�������˵ĵ�ַ->");
		scanf("%s", p->human[ret].address);
		printf("�޸ĳɹ�\n");
	}
}

int cmp_name(const void* e1, const void* e2)
{
	return strcmp(((people*)e1)->name,  ((people*)e2)->name);
}

void sort_contacts(contacts* p)
{
	qsort(p->human, p->count, sizeof(p->human[0]), cmp_name);
	printf("����ɹ�\n");
}