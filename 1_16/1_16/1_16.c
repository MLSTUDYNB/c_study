#define _CRT_SECURE_NO_WARNINGS 1
//猜数字游戏
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu()
{
	printf("#######你已进入猜数字游戏界面#######\n");
	printf("####################################\n");
	printf("##########play——————1#########\n");
	printf("######do not play——————0######\n");
	printf("####################################\n");
}

void game()
{
	srand((unsigned int)time(NULL));
	int a = rand()%100+1;
	int n;
	
	while (1)
	{
		scanf("%d", &n);
		
		if (n < a)
		{
			printf("猜小了\n");
			printf("请继续猜测->");
		}
		else if (n > a)
		{
			printf("猜大了\n");
			printf("请继续猜测->");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}

int main()
{
	//菜单
	menu();
	//选择
	int n;
	
	do
	{
		
		printf("请做出你的选择->");
		scanf("%d", &n);
		printf("你猜数字的范围在1—100之间\n请输入->");
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			printf("do not play game\n");
			break;
		default:
			printf("输入错误，请从新输入\n");
			break;
		}
	} while (n);
	return 0;
}
//编写代码在一个整形有序数组中查找具体的某个数
//int main()
//{
//	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
//	int k,mid;
//	int left = 0, right = 8;
//	scanf("%d", &k);
//	while (left<=right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标为：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//int main()
//{
//	//int a = 10;
//	//int b = (a = 10);
//	//printf("%d\n", b);
//	int k = 0, i = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;
//	}
//	return 0;
//}