#define _CRT_SECURE_NO_WARNINGS 1
//С������
//������2�У���1��Ϊһ������������ʾ��n��ͬѧ�������(n��100)��
//��2����n���ÿո��������������Ϊÿ��ͼ���ISBN��(����ͼ���ISBN����1~1000)��
//���Ҳ��2�У���1��Ϊһ��������k����ʾ��Ҫ����ٱ��顣��2��Ϊk���ÿո��
//������������Ϊ��С�������ź������Ҫ�����ͼ ���ISBN�š�
//#include <stdio.h>
//Ͱ����ķ���
//int main()
//{
//	int arr[1001], n, i, a;
//	int b = 0;
//	for (i = 0; i < 1001; i++)
//	{
//		arr[i] = 0;
//	}
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a);
//		arr[a] = 1;
//	}
//	for (i = 0; i < 1001; i++)
//	{
//		if (arr[i] == 1)
//			b++;
//	}
//	printf("%d\n", b);
//	for (i = 0; i < 1001; i++)
//	{
//		if (arr[i] == 1)
//		{
//			printf("%d ", i);
//		}
//		
//	}
//	printf("\n");
//	return 0;
//}
//ð������ķ���
//int main()
//{
//	int arr[101], n, i,a;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//����
//	for (i = 1; i < n; i++)
//	{
//		for (a = 0; a < n - i; a++)
//		{
//			if (arr[a] > arr[a + 1])
//			{
//				int temp = arr[a];
//				arr[a] = arr[a + 1];
//				arr[a + 1] =temp;
//			}
//		}
//	}
//	for (i = 0, a = 0; i < n; i++)
//	{
//		if (arr[i] != arr[i + 1])
//			a++;
//	}
//	printf("%d\n", a);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != arr[i + 1])
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}
//�������򡪡�quicksort

//int quicksort(int arr[101], int left, int right)
//{
//	int temp = left;
//	int i = left;
//	int j = right;
//	int t;
//	if (i > j)
//		return 0;
//	while (i < j)
//	{
//		
//		while (arr[j] >= arr[temp] && i < j)
//			j--;
//		while (arr[i] <= arr[temp] && i < j)
//			i++;
//		t = arr[i];
//		arr[i] = arr[j];
//		arr[j] = t;
//	}
//	t = arr[temp];
//	arr[temp] = arr[i];
//	arr[i] = t;
//	quicksort(arr,left, i-1);
//	quicksort( arr,j+1, right);
//	return 0;
//}
//int main()
//{
//	int arr[101],n, i,a;
//	
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int left = 0;
//	int right = n - 1;
//	quicksort( arr,left, right);
//	for (i = 0, a = 0; i < n; i++)
//	{
//		if (arr[i] != arr[i + 1])
//			a++;
//	}
//	printf("%d\n", a);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != arr[i + 1])
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}
