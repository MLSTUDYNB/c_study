#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int x = 0 , n = 0;
	printf("喜欢按1，不喜欢按0\n");
	printf("女孩做出选择：");
	while ( n <= 10)
	{
		scanf("%d", &x);
		switch (x)
		{
		case 0:
			printf("小乐没有机会\n");
			break;
		case 1:
			printf("她们在一起了\n");
			break;
		default:
			printf("小乐还有机会\n");
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
//	printf("喜欢按1，不喜欢按0\n");
//	printf("女孩做出选择：");
//	while(1)
//	{
		//scanf("%d", &x);
		//switch (x)
		//{
		//case 0:
		//	printf("小乐没有机会\n");
		//	break;
		//case 1:
		//	printf("她们在一起了\n");
		//	break;
		//default:
		//	printf("小乐还有机会\n");
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
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	default:
//		printf("非法输入");
//		break;
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
	//int x;
	//printf("喜欢按1，不喜欢按0\n");
	//printf("女孩做出选择：");
	//scanf("%d", &x);
	//switch (x)
	//{
	//case 0:
	//	printf("小乐没有机会\n");
	//	break;
	//case 1:
	//	printf("她们在一起了\n");
	//	break;
	//default:
	//	printf("小乐还有机会\n");
	//	break;
	//}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int x;
//	printf("喜欢按1，不喜欢按0\n");
//	printf("女孩做出选择：");
//	scanf("%d", &x);
//	if (x == 1)
//	{
//		printf("她们在一起了\n");
//	}
//	else if(x==0)
//	{
//		printf("小乐没有机会\n");
//	}
//	else
//	{
//		printf("小乐还有机会\n");
//	}
//	return 0;
//}