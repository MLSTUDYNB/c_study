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

//��ʼ��
void init_contacts(contacts* p);

//��ʾ
void print_contacts(const contacts* p);
//¼����Ϣ
void add_contacts(contacts* p);
//����
void find_contacts(const contacts* p);
//ɾ��
void delete_contacts(contacts* p);
//�޸�
void change_contacts(contacts* p);
//����������
void sort_contacts(contacts* p);