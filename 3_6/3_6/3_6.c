#define _CRT_SECURE_NO_WARNINGS 1
/*����������֣����м��ֳ��������֣�
����1461 ���Բ�ֳɣ�1��461��,��14��61��,��146��1),
������в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number��
���磺
655 = 
6 * 55 +
65 * 5
1461 = 
1*461 + 
14*61 + 
146*1
n%10���һλ��   1ʣ��146   
n%10       6        14
n%10      4       1
��� 5λ���е����� Lily Number��*/
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int n;
//    for (n=10;n<100000;n++)
//    {
//        int sum = 0,i=1;
//        while (1)
//        {
//            sum+=(n % (int)pow(10,i)) * (n / (int)pow(10, i));
//            if (n / (int)pow(10, i) < 10)
//                break;
//            i++;
//        }
//        if (sum == n)
//            printf("%d ", n);
//    }
//    return 0;
//}
//int panduan()
//{
//    int i = 1;
//    return *(char*)&i;
//}
//int main()
//{
//    int ret=panduan();
//    if (ret == 1)
//        printf("С��\n");
//    else
//        printf("���\n");
//    return 0;
//}
//int main()
//{
//	char a = 0xb2;
//	short b = 0xb200;
//	int c = 0xb2000000;
//	if (a == 0xb2)
//		printf("a\n");
//	if (b == 0xb200)
//		printf("b\n");
//	if (c == 0xb2000000)
//		printf("c\n");
//	return 0;
//}
//int main()
//{
//	float i = 6.5;
//	return 0;
//}
#include <malloc.h>
//*
//* *
//*   *
//* * * *
//
//*
//* *
//*   *
//*     *
//* * * * *
//int main()
//{
//	int n;
//	while (~scanf("%d",&n))
//	{
//		char arr[20][20];
//		int i, j;
//		for (i=0;i<n;i++)
//		{
//			for (j=0;j<=i;j++)
//			{
//				arr[i][j] = '*';
//				if (i >= 2 && j >= 1 && i < n - 1 && j < n - 2&&j!=i)
//					arr[i][j] = ' ';
//				printf("%c ", arr[i][j]);
//			}
//			printf("\n");	
//		}
//	}
//	return 0;
//}
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);//��һ��
    int arr1[1000] = { 0 };
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);//�ڶ���
    }
    int arr2[1000] = { 0 };
    for (j = 0; j < m; j++)
    {
        scanf("%d", &arr2[j]);//������
    }
    i = 0;
    j = 0;
    while (i < n &&j < m)//��һ������������ʣ������ֱ���������
    {
        while (arr1[i] <= arr2[j]&& i < n && j < m)
        {
            printf("%d ", arr1[i]);
            i++;
        }
        while(arr1[i] >= arr2[j] && i < n && j < m)
        {
            printf("%d ", arr2[j]);
            j++;
        }
    }
    //if (i == n)
    //{
    //    for (; j < m; j++)
    //    {
    //        printf("%d ", arr2[j]);
    //    }
    //}
    //else
    //{
    //    for (; i < n; i++)
    //    {
    //        printf("%d ", arr1[i]);
    //    }
    //}

    return 0;
}