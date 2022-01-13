#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int n,i,x,y,z,max;
//	int arr[1001];
//	for (i = 0; i < 1001; i++)
//	{
//		arr[i] = 0;
//	}
//	scanf("%d", &n);
//	for (i=0;i<n;i++)
//	{
//		scanf("%d-%d%d", &x, &y, &z);
//		arr[x] += z;
//	}
//	max = arr[1];
//	y = 1;
//	for (i = 1; i < 1000; i++)
//	{
//		if (arr[i + 1] > max)
//		{
//			max = arr[i+1];
//			y = i+1;
//		}
//	}
//	printf("%d %d", y, max);
//	return 0;
//}
int main()
{
	char arr[1001];
	int brr[10],i;
	for (i = 0; i < 10; i++)
	{
		brr[i] = 0;
	}
	scanf("%s", arr);
	i = 0;
	while (arr[i] != '\0')
	{
		brr[arr[i] - '0']++;
		i++;
	}
	for (i = 0; i < 10; i++)
	{
		if (brr[i] > 0)
		{
			switch (i)
			{
			case 0:
				printf("0:%d", brr[i]);
				break;
			case 1:
				printf("1:%d", brr[i]);
				break;
			case 2:printf("2:%d", brr[i]);
				break;
			case 3:printf("3:%d", brr[i]);
				break;
			case 4:printf("4:%d", brr[i]);
				break;
			case 5:printf("5:%d", brr[i]);
				break;
			case 6:printf("6:%d", brr[i]);
				break;
			case 7:printf("7:%d", brr[i]);
				break;
			case 8:printf("8:%d", brr[i]);
				break;
			case 9:printf("9:%d", brr[i]);
				break;
			}
			printf("\n");
		}
	}
	
	return 0;
}