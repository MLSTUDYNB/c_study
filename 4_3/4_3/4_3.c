#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	struct S1
	{
		char c1;
		int i;
		char c2;
	};
	printf("%d\n", sizeof(struct S1));

	struct S2
	{
		char c1;
		char c2;
		int i;
	};
	printf("%d\n", sizeof(struct S2));

	struct S3
	{
		double d;
		char c;
		int i;
	};
	printf("%d\n", sizeof(struct S3));

	struct S4
	{
		char c1;
		struct S3 s3;
		double d;
	};
	printf("%d\n", sizeof(struct S4));
	return 0;
}
//struct student
//{
//	char name[20];
//	int age;
//}a={"zhangshan",20}, b={"wuanwu",18};
//struct student c={"hh",0};
//int main()
//{
//	struct student d={"sb",88};
//	return 0;
//}
//typedef struct
//{
//	int a;
//	char b;
//}x;
//int main()
//{
//	x c;
//	c.a = 10;
//	c.b=20;
//	return 0;
//}
//typedef struct node
//{
//	int x;
//	struct node* p;
//}node;
//typedef struct node
//{
//	int x;
//	node* p;
//}node;
//struct
//{
//	int a;
//	char b;
//}x;
//struct
//{
//	int a;
//	char b;
//} * p;
//int main()
//{
//	p = &x;
//	return 0;
//}