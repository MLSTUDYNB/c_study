#define _CRT_SECURE_NO_WARNINGS 1
//��������Ϸ
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu()
{
	printf("#######���ѽ����������Ϸ����#######\n");
	printf("####################################\n");
	printf("##########play������������1#########\n");
	printf("######do not play������������0######\n");
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
			printf("��С��\n");
			printf("������²�->");
		}
		else if (n > a)
		{
			printf("�´���\n");
			printf("������²�->");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}

int main()
{
	//�˵�
	menu();
	//ѡ��
	int n;
	
	do
	{
		
		printf("���������ѡ��->");
		scanf("%d", &n);
		printf("������ֵķ�Χ��1��100֮��\n������->");
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			printf("do not play game\n");
			break;
		default:
			printf("����������������\n");
			break;
		}
	} while (n);
	return 0;
}
//��д������һ���������������в��Ҿ����ĳ����
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
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
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