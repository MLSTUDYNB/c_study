#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////��������
//void quicksort(int* num, int L,int R)
//{
//	if (L>R)
//		return;
//	int left = L;
//	int right = R;
//	int tem = num[left],t;
//	while (left!=right)
//	{
//		while (num[right] >= tem && left < right)
//		{
//			right--;
//		}
//		while (num[left] <=tem && left <right)
//		{
//			left++;
//		}
//		if (left < right)//����
//		{
//			t = num[left];
//			num[left] = num[right];
//			num[right] = t;
//		}
//			
//	
//	}
//	
//	num[left] = num[L];
//	num[L] = tem;
//	quicksort(num, L, left-1);//��
//	quicksort(num, right+1, R);//��
//	return;
//}
//	
//void print(int* num,int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", num[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	//������Ҫ����ĸ���
//	int n,i;
//	scanf("%d", &n);
//	//��������
//	int num[200];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	int L = 0, R = n - 1;
//	//����
//	quicksort(num,L,R);
//	//��ӡ
//	print(num,n);
//	return 0;
//}
//
//#include <stdio.h>
//
//
//int a[101], n;//����ȫ�ֱ�����������������Ҫ����
//void quicksort(int left, int right)
//{
//	int i,t, temp;
//	int j;
//	if (left > right)
//		return;
//		temp = a[left];//temp�д�ľ��ǻ�׼��
//		i = left;
//		j = right;
//		while (i!=j)
//		{ 
//			while (a[j] >= temp && i < j)
//			{
//				j--;
//			}
//			while (a[i] <= temp && i < j)
//			{
//				i++;
//			}
//			if(i<j)//���ڱ�i���ڱ�jû������ʱ
//				{ t = a[i];
//				a[i] = a[j];
//				a[j] = t; 
//			}
//				//���ս���׼����λ
//		}
//		a[left] = a[i];
//		a[i] = temp;
//		quicksort(left, i - 1);//����������ߵ�,
//	quicksort(i + 1, right);//���������ұߵ�
//	return;
//}
//int main()
//{
//	int i, j;
////��������
//scanf("%d", &n);
//for (i = 1; i <= n; i++)
//scanf("%d", &a[i]);
//quicksort(1, n);//�����������
////��������Ľ��
//for (i = 1; i <= n; i++)
//printf("%d ", a[i]);
//return 0;
//}