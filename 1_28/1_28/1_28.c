#define _CRT_SECURE_NO_WARNINGS 1
/*
1. ����ֻ���ɴ�д��ĸ��Сд��ĸ�����ֹ��ɣ�s

2. ���벻�������ֿ�ͷ��s

3. ���������ٳ��ִ�д��ĸ��Сд��ĸ�������������ַ������е����֣�s

4. ���볤������Ϊ8             s
*/
#include <stdio.h>
int main()
{
	int n,i,arr[100]={0};char ch;
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		int sum = 1, a = 0, b = 0, c = 0;
		scanf("%c", &ch);
		if (ch >= '1' && ch <= '9')
			arr[i] = 0;
		else{
			while ((ch = getchar()) != '\n'){
				if (ch >= 'A' && ch <= 'Z'){
					sum++;
					a = 1;
					continue;
				}
				else if (ch >= 'a' && ch <= 'z'){
					sum++;
					b = 1;
					continue;
				}
				else if (ch >= '1' && ch <= '9'){
					sum++;
					c = 1;
					continue;
				}
				else
					break;
			}
			if (ch == '\n' && sum >= 8 && a + b + c >= 2)
				arr[i] = 1;
			else
				arr[i] = 0;
		}
	}
	for (i = 0; i < n; i++){
		if (arr[i] == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
//#include <stdio.h>
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int arr[2000] = { 0 }, sum1 = 0, a = 0;
//		double sum2 = 0.0;
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//			if (arr[i] < 0)
//				sum1++;
//			if (arr[i] > 0)
//			{
//				sum2 += arr[i];
//				a++;
//			}
//		}
//		printf("%d %.1lf", sum1, sum2 / a);
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", (3 * n + 1) * n / 2);
//	return 0;
//}
//#include <stdio.h>
//int i;
//int main()
//{
//    i--;//-1
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    //int a = ++i;
//    //int b = ++i;
//    //int c = ++i;
//    int ret = (++i) + (++i) + (++i);
//    //int ret = a+b+c;
//
//    printf("ret = %d\n", ret);
//    return 0;
//}