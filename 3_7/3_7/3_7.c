#define _CRT_SECURE_NO_WARNINGS 1
/*ʵ��һ�����������������ַ����е�k���ַ���
���磺
ABCD����һ���ַ��õ�BCDA
ABCD���������ַ��õ�CDAB*/

/*��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
���д�����������ľ����в���ĳ�������Ƿ���ڡ�
Ҫ��ʱ�临�Ӷ�С��O(N);*///#include <string.h>
//int find(int (*arr)[4],int n,int* i,int* j)
//{
//	*i = 0;
//	*j = 3;
//	while (arr[*i][*j]<n)
//	{
//		(*i)++;
//	}
//	for (*j=3;*j>=0;(* j)--)
//	{
//		if (arr[*i][*j] == n)
//			return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[4][4] = {
//		{1,2,3,4},
//		{5,6,7,8},
//		{9,10,11,12},
//		{13,14,15,16}
//	};
//	int k;
//	int i = 4, j = 4;
//	scanf("%d", &k);
//	int ret=find(arr,k,&i,&j);
//	if (ret==1)
//	{
//		printf("�ҵ���\n");
//		printf("�±���%d %d\n", i, j);
//	}
//	else
//	{
//		printf("û���ҵ�\n");
//	}
//	return 0;
//}
//void left_str(char* str,int k)
//{
//	int len = strlen(str)-1;
//	while (k--)
//	{
//		int i = 0;
//		char temp = *str;
//		for (i = 0; i < len; i++)
//		{
//			*(str + i) = *(str + i + 1);
//		}
//		*(str + i ) = temp;
//	}
//}
//
//int main()
//{
//	char str[100];
//	int k;
//	gets(str);
//	scanf("%d", &k);
//	left_str(str,k);
//	printf(str);
//	return 0;
//}
//void left_str(char* str, int k)
//{
//	while (k)
//	{
//		char* temp = str;
//		char t = *str;
//		while (*temp)
//		{
//			*temp = *(temp + 1);
//			temp++;
//		}
//		*--temp = t;
//		k--;
//	}
//}
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
//#include <stdio.h>
//
//int main()
//{
//	int kill;
//	for(kill = 'a'; kill <= 'd';kill++)
//	{
//		if ((kill != 'a') + (kill == 'c') + (kill == 'd') + (kill != 'd') == 3)
//			printf("������%c\n", kill);
//	}
//	return 0;
//}
