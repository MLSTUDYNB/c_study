#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int panduan(int* arr,int c)//��ÿһ���������Сֵ
{
	int a = 0;
	int b = arr[0];
	for (a = 1; a < c; a++)
	{
		if (arr[a] < b)//����С�ķ���b��
		{
			b = arr[a];
		}
	}
	return b;
}
void print(int* arr,int c)//��ӡ
{
	int a = 0;
	for (a = 0; a <c ; a++)
	{
		printf("%d ", arr[a]);
	}
}
int main()
{
	int n = 0;
	int arr[10];
	int brr[20];
	scanf("%d", &n);
	int i = 0;
	int a = 0;
	int m = 0;
	for (; i < n; i++)//�������
	{
		scanf("%d", &m);//ÿһ�е���
		for (a = 0; a < m; a++)
		{
			scanf("%d", &arr[a]);
		}
		brr[i]=panduan(arr,m);//���ص���Сֵ
	}
	int b=panduan(brr, n);//�ж���Сֵ�е���Сֵ
	arr[0] = b;
	print(arr,m);//��ӡ
	return 0;
}

