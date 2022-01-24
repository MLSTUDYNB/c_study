#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct student
{
	char name[20];
	float sroce[5];
	float aver;
};
void average(struct student stu[3], int n)
{
	int i, j;
	float sum;
	for (i = 0; i < 3; i++)
	{
		sum = 0.0;
		for (j = 0; j < 5; j++)
		{
			sum += stu[i].sroce[j];
		}
		stu[i].aver = sum / 5.0;
	}
}
int main()
{
	struct student stu[3];
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%s%f%f",stu[i].name, stu[i].sroce, stu[i].aver);
	}
	average(stu, 3);
	return 0;
}




//int main()
//{
//	int x = 1;
//	int y = 2;
//	int sum = add(x, y);
//	printf("%d\n", sum);
//	return 0;
//}