#define _CRT_SECURE_NO_WARNINGS 1

/*3．有5个学生的数据记录，每个记录包括学号、姓名和3门课的成绩，从键盘输入5个学生的数据，
要求输出3门课的总平均成绩，以及最高分的学生的数据（包括学号、姓名和3门课程成绩、平均分数）。
要求：用一个print函数输出10个学生数据；
用一个average函数求总平均分；
用max函数找出最高分学生的数据；总平均分和最高分的学生的数据都在主函数中输出。
*/

//#include <stdio.h>
//
//typedef struct student
//{
//	char id[15];
//	char name[15];
//	int grade1;
//	int grade2;
//	int grade3;
//}Stu;
//
//void print(Stu* p,int n)
//{
//	int i;
//	printf("打印学生的成绩：\n");
//	for (i = 0; i < n; i++)
//	{
//		printf("%s %s %d %d %d\n", (p + i)->id, (p + i)->name,(p+i)->grade1, (p + i)->grade2, (p + i)->grade3 );
//	}
//}
//
//double average(Stu* p, int n)
//{
//	int i;
//	double sum = 0.0;
//	for (i = 0; i < n; i++)
//	{
//		sum = sum + (p + i)->grade1 + (p + i)->grade2 + (p + i)->grade3;
//	}
//	return sum / n;
//}
//Stu* max(Stu* p, int n)
//{
//	int m,i, sum, max_sum;
//	i=m = sum = max_sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum = sum + (p + i)->grade1 + (p + i)->grade2 + (p + i)->grade3;
//		if (max_sum == 0)
//			max_sum = sum;
//		if (sum > max_sum)
//		{
//			max_sum = sum;
//			m = i;
//		}
//	}
//	return p + m;
//}
//int main()
//{
//	Stu people[10];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%s%s%d%d%d", people[i].id, people[i].name, &people[i].grade1, &people[i].grade2, &people[i].grade3);
//	}
//	print(people,10);
//	printf("总平均成绩%lf\n",average(people, 10));
//	Stu* nb = max(people, 10);
//	printf("成绩最高%s %s %d %d %d\n", nb->id, nb->name, nb->grade1, nb->grade2, nb->grade3);
//	return 0;
//}
//00000 a 20 30 40
//00001 b 80 90 40
//00002 c 54 63 72
//00003 d 42 61 32
//00004 e 20 46 72
//00005 f 65 94 73
//00006 q 32 64 93
//00007 w 64 31 86
//00008 s 68 12 75
//00009 p 63 98 16

/*4．编写职工工资管理程序，用结构体实现以下功能。
（1）建立职工工资表，其中含有职工工号、职工姓名、年龄、基本工资、业绩工资、应发工资、扣除保险费、扣除水电费和实发工资。
（2）计算每一个职工的应发工资和实发工资。
（3）打印职工工资表。
（4）将以上（2）、（3）两项功能分别用子函数实现，编写主函数，调用相应的子函数。
*/

#include <stdio.h>

typedef struct worker
{
	char id[20];
	char name[20];
	int age;
	int basic_money;
	int performance_money;

	int salary;

	int insurance;
	int w_e_money;

	int end_money;
}worker;
 
void print(worker* p, int n)
{
	int i;
	printf("%-20s %-20s %-10s %-10s %-10s %-10s %-10s %-10s %-10s\n",
		"职工工号","职工姓名","年龄","基本工资","业绩工资","应发工资","扣除保险费","扣除水电费","实发工资");
	for (i = 0; i < n; i++)
	{
		printf("%-20s %-20s %-10d %-10d %-10d %-10d %-10d %-10d %-10d\n",(p+i)->id, (p + i) ->name, (p + i) ->age,
			(p + i) ->basic_money, (p + i) ->performance_money, (p + i) ->salary, (p + i) ->insurance,
			(p + i) ->w_e_money, (p + i) ->end_money);
	}
}
void count(worker* p, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		(p + i)->salary = (p + i)->basic_money + (p + i)->performance_money;
		(p + i)->end_money = (p + i)->salary - (p + i)->insurance - (p + i)->w_e_money;
	}
}
int main()
{
	worker p[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		scanf("%s %s %d %d %d %d %d", p[i].id, p[i].name, &p[i].age,
			&p[i].basic_money, &p[i].performance_money, &p[i].insurance, &p[i].w_e_money);
	}
	count(p, 3);
	print(p, 3);
	return 0;
}
//232413 zhangsan 50 1515 2611 581 151
//143424 wangwu 20 5514 4896 1841 448
//423544 lisi 30 4864 4151 2121 211