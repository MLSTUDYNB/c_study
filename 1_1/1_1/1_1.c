#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ð������

//void print(int* cj)
//{
//	int n = 0;
//	for (n = 0; n < 5; n++)
//	{
//		printf("%d ", cj[n]);
//	}
//	printf("\n");
//}
//typedef struct student//�ṹ��
//{
//	char nume[11];
//	char xuehao[11];
//	int cj;
//}stu;
//int main()
//{
//	//����ѧ��Ⱥ��
//	stu sum[1000],tem;
//	//ѧ����
//	int n,i,a;
//	scanf("%d", &n);
//	//����ѧ������Ϣ
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %s %d", sum[i].nume, sum[i].xuehao, &sum[i].cj);
//	}
//	//����
//	for (a = 0; a < n - 1; a++)//������
//	{
//		int i;
//		int count = 0;
//		for (i = 0; i < n-1-a; i++)//һ������
//		{
//			if (sum[i].cj < sum[i + 1].cj)
//			{
//				//����
//				tem = sum[i];
//				sum[i] = sum[i + 1];
//				sum[i + 1] = tem;
//				count++;
//			}
//		}
//		if (0 == count)
//			break;
//	}
//	//��ӡ
//	printf("%s %s\n", sum[0].nume, sum[0].xuehao);
//	printf("%s %s\n", sum[n-1].nume, sum[n-1].xuehao);
//	return 0;
//}
//Ͱ����
//int main()
//{
//	//�������±��ʾ�����������Լ���ʼ��
//	int arr[11], n,cj;
//	for (n = 0; n < 11; n++)
//	{
//		arr[n] = 0;//���еķ�����û���˵�
//	}
//	//������������ѷ�����������Ӧ��������
//	for (n = 0; n < 5; n++)
//	{
//		scanf("%d", &cj);
//		arr[cj]++;
//	}
//	//���մ�С�����˳�����
//	for (n = 0; n < 11; n++)//���еĳɼ�
//	{
//		for (int a = 1; a <= arr[n]; a++)//���ڵ���1�ĸ��������д�ӡ
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}
//1000����������
//int main()
//{
//	int arr[1001], n,cj,i;
//	for (n = 0; n < 1001; n++)
//	{
//		arr[n] = 0;
//	}
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &cj);
//		arr[cj]++;
//	}
//	for (n = 0; n < 1001; n++)
//	{
//		for (i = 1; i <= arr[n]; i++)
//		{
//			printf("%d ", n);
//		}
//	}
//	printf("\n");
//	return 0;
//}
