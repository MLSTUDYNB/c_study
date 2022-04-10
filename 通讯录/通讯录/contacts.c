#define _CRT_SECURE_NO_WARNINGS 1

#include "contacts.h"

//寻找人
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

//void init_contacts(contacts* p)
//{
//	p->count = 0;
//	memset(p->human, 0, sizeof(p->human));
//}

//扩容
void enlarge(contacts* p)
{
	p->max += 3;
	people* temp=(people*)realloc(p->human,sizeof(people) * p->max);
	if (temp == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	p->human = temp;
	printf("扩容成功\n");
}

void add_store(contacts* p)
{
	FILE* s = fopen("通讯录.txt", "rb");
	if (s == NULL)
	{
		printf("文件信息读入出错%s", strerror(errno));
		return;
	}
	people temp;
	while (fread(&temp, sizeof(people), 1, s))
	{
		p->human[p->count] = temp;
		p->count++;
		if (p->count == p->max)
			enlarge(p);
	}
	fclose(s);
	s = NULL;
}

void init_contacts(contacts* p)
{
	p->human = (people*)malloc(sizeof(people) * 3);
	if (p->human == NULL)
	{
		printf("初始化失败%s", strerror(errno));
		return;
	}
	p->count = 0;
	p->max = 3;
	memset(p->human, 0, p->max*sizeof(p->human));
	add_store(p);
}
//姓名，性别，年龄，电话，地址
void print_contacts(const contacts* p)
{
	printf("%-15s%-5s%-5s%-15s%-30s\n", "姓名", "性别", "年龄", "电话", "地址");
	int i = 0;
	for (i = 0; i < p->count; i++)
	{
		printf("%-15s%-5s%-5d%-15s%-30s\n", p->human[i].name, p->human[i].sex, p->human[i].age, p->human[i].tele, p->human[i].address);
	}
}

void add_contacts(contacts* p)
{
	/*if (p->count == human_max)
	{
		printf("通讯录已满");
		return;
	}*/
	if (p->count == p->max)
	{
		enlarge(p);
	}
	printf("请输入人的姓名->");
	scanf("%s", p->human[p->count].name);
	printf("请输入人的性别->");
	scanf("%s", p->human[p->count].sex);
	printf("请输入人的年龄->");
	scanf("%d", &p->human[p->count].age);
	printf("请输入人的电话->");
	scanf("%s", p->human[p->count].tele);
	printf("请输入人的地址->");
	scanf("%s", p->human[p->count].address);
	p->count++;
	printf("录入成功\n");
}

void find_contacts(const contacts* p)
{
	char name_x[name_max];
	printf("请输入人的姓名->");
	scanf("%s", name_x);
	int ret=find_people(name_x, p);
	if (ret == -1)
		printf("没有查找到该人\n");
	else
	{
		printf("查找到该人\n");
		printf("%-15s%-5s%-5s%-15s%-30s\n", "姓名", "性别", "年龄", "电话", "地址");
		printf("%-15s%-5s%-5d%-15s%-30s\n", p->human[ret].name, p->human[ret].sex, p->human[ret].age,
			p->human[ret].tele, p->human[ret].address);
	}
}

void delete_contacts(contacts* p)
{
	char name_x[name_max];
	printf("请输入人的姓名->");
	scanf("%s", name_x);
	int ret = find_people(name_x, p);
	if (ret == -1)
		printf("没有查找到该人\n");
	else
	{
		int i;
		for (i = ret; i < p->count-1; i++)
		{
			p->human[i] = p->human[i + 1];
		}
		p->count--;
		printf("删除成功\n");
	}
}

void change_contacts(contacts* p)
{
	char name_x[name_max];
	printf("请输入人的姓名->");
	scanf("%s", name_x);
	int ret = find_people(name_x, p);
	if (ret == -1)
		printf("没有查找到该人\n");
	else
	{
		printf("请输入人的姓名->");
		scanf("%s", p->human[ret].name);
		printf("请输入人的性别->");
		scanf("%s", p->human[ret].sex);
		printf("请输入人的年龄->");
		scanf("%d", &p->human[ret].age);
		printf("请输入人的电话->");
		scanf("%s", p->human[ret].tele);
		printf("请输入人的地址->");
		scanf("%s", p->human[ret].address);
		printf("修改成功\n");
	}
}

int cmp_name(const void* e1, const void* e2)
{
	return strcmp(((people*)e1)->name,  ((people*)e2)->name);
}

void sort_contacts(contacts* p)
{
	qsort(p->human, p->count, sizeof(p->human[0]), cmp_name);
	printf("排序成功\n");
}

void store(const contacts* p)
{
	FILE* s = fopen("通讯录.txt", "wb");
	if (s == NULL)
	{
		printf("文件信息读入出错%s", strerror(errno));
		return;
	}
	int i = 0;
	for (i = 0; i < p->count; i++)
	{
		fwrite(p->human+i, sizeof(people), 1, s);
	}
	fclose(s);
	s = NULL;
}
