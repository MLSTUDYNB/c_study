#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	int n;
//	int stop = 0;
//	scanf("%d", &n);
//	while (n != 1)
//	{
//		if (n % 2 == 0)
//		{
//			n /= 2;
//			stop++;
//		}
//		else
//		{
//			n = 3 * n + 1;
//			n /= 2;
//			stop++;
//		}
//	}
//	printf("%d", stop);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char brr[101];
//	int n = 0;
//	int sum = 0;
//	int arr[100];
//	scanf("%s", brr);
//	while (brr[n] != '\0')
//	{
//		sum += brr[n] - '0';
//		n++;
//	}
//	n = 0;
//	while (sum)
//	{
//		arr[n] = sum % 10;
//		sum /= 10;
//		n++;
//	}
//		do
//		{
//			switch (arr[n-1])
//			{
//			case 0:
//				printf("ling");
//				break;
//			case 1:
//				printf("yi");
//				break;
//			case 2:
//				printf("er");
//				break;
//			case 3:
//				printf("san");
//				break;
//			case 4:
//				printf("si");
//				break;
//			case 5:
//				printf("wu");
//				break;
//			case 6:
//				printf("liu");
//				break;
//			case 7:
//				printf("qi");
//				break;
//			case 8:
//				printf("ba");
//				break;
//			case 9:
//				printf("jiu");
//				break;
//			}
//			if (n > 1)
//				printf(" ");
//			n--;
//		} while (n);
//	return 0;
//}
int main()
{
	int n;
	int i = 0;
	int arr[4];
	scanf("%d", &n);
	while (n)
	{
		arr[++i] = n % 10;
		n /= 10;
	}
	do
	{
		n = 1;
		switch (i)
		{
		case 1:
			while (n<=arr[i])
			{
				printf("%d", n);
				n++;
			}
			break;
		case 2:
			while (arr[i])
			{
				printf("S");
				arr[i]--;
			}
			break;
		case 3:
			while (arr[i])
			{
				printf("B");
				arr[i]--;
			}
			break;
		}
		i--;
	} while (i);
	return 0;
}