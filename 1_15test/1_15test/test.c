#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int x = 0 , n = 0;
	printf("ϲ����1����ϲ����0\n");
	printf("Ů������ѡ��");
	while ( n <= 10)
	{
		scanf("%d", &x);
		switch (x)
		{
		case 0:
			printf("С��û�л���\n");
			break;
		case 1:
			printf("������һ����\n");
			break;
		default:
			printf("С�ֻ��л���\n");
			break;
		}
		if (x == 1)
		{
			break;
		}
		if (n == 5)
		{
			continue;
		}
		n++;
	}
	return 0;
}
//int main()
//{
//	int x = 0 , n = 0;
//	printf("ϲ����1����ϲ����0\n");
//	printf("Ů������ѡ��");
//	while(1)
//	{
		//scanf("%d", &x);
		//switch (x)
		//{
		//case 0:
		//	printf("С��û�л���\n");
		//	break;
		//case 1:
		//	printf("������һ����\n");
		//	break;
		//default:
		//	printf("С�ֻ��л���\n");
		//	break;
		//}
		//if (x == 1)
		//{
		//	break;
		//}
//		if
//		n++;
//
//	}
//	return 0;
//}
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��");
//		break;
//	default:
//		printf("�Ƿ�����");
//		break;
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
	//int x;
	//printf("ϲ����1����ϲ����0\n");
	//printf("Ů������ѡ��");
	//scanf("%d", &x);
	//switch (x)
	//{
	//case 0:
	//	printf("С��û�л���\n");
	//	break;
	//case 1:
	//	printf("������һ����\n");
	//	break;
	//default:
	//	printf("С�ֻ��л���\n");
	//	break;
	//}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int x;
//	printf("ϲ����1����ϲ����0\n");
//	printf("Ů������ѡ��");
//	scanf("%d", &x);
//	if (x == 1)
//	{
//		printf("������һ����\n");
//	}
//	else if(x==0)
//	{
//		printf("С��û�л���\n");
//	}
//	else
//	{
//		printf("С�ֻ��л���\n");
//	}
//	return 0;
//}