#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define name_max 15
#define sex_max 5
#define tele_max 12
#define address_max 30
#define human_max 1000

typedef struct people
{
	char name[name_max];
	char sex[sex_max];
	int age;
	char tele[tele_max];
	char address[address_max];
}people;

typedef struct contacts
{
	people human[human_max];
	int count;
}contacts;

enum select
{
	quit,
	add,
	find,
	delete,
	change,
	sort,
	print
};

//初始化
void init_contacts(contacts* p);

//显示
void print_contacts(const contacts* p);
//录入信息
void add_contacts(contacts* p);
//查找
void find_contacts(const contacts* p);
//删除
void delete_contacts(contacts* p);
//修改
void change_contacts(contacts* p);
//按名字排序
void sort_contacts(contacts* p);