#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//队列
//int main()
//{
//	int arr[30] = { 6,3,1,7,5,8,9,2,4 };
//	int head = 0;
//	int tail = 9;
//	while (head < tail)
//	{
//		printf("%d ", arr[head]);
//		head++;	
//		arr[tail] = arr[head];
//		head++;
//		tail++;
//	}
//	return 0;
//}
//用结构体的做法的做法
//struct queue
//{
//	int arr[200];
//	int head ;
//	int tail ;
//};
//int main()
//{
//	int n = 0,i=0;
//	struct queue q;
//	q.head = 0;
//	q.tail = 0;
//	scanf("%d", &i);
//	for (n = 0; n < i; n++)
//	{
//		scanf("%d", &q.arr[n]);
//		q.tail++;
//	}
//	while (q.head < q.tail)
//	{
//		printf("%d ", q.arr[q.head]);
//		q.head++;
//		q.arr[q.tail] = q.arr[q.head];
//		q.head++;
//		q.tail++;
//	}
//	return 0;
//}
//栈判断回文
//int main()
//{
//	char arr[101], brr[101];
//	int i = 0;
//	gets(arr);
//	int len = strlen(arr);
//	int mid = len / 2-1;
//	int top = mid;
//	for (i = 0; i <= mid; i++)
//	{
//		brr[i] = arr[i];
//	}
//	if (len % 2 != 0)
//		mid = mid + 2;
//	else
//		mid++;
//	for (i=mid; i < len; i++)
//	{
//		if (arr[i] != brr[top])
//			break;
//		top--;
//		
//	}
//	if (top == -1)
//	{
//		printf("YES\n");
//	}
//	else
//		printf("NO\n");
//	return 0;
//}
//int main()
//{
//	char arr[101], brr[101];
//	int i = 0, nest;
//	gets(arr);
//	int len = strlen(arr);
//	int mid = len / 2-1;
//	int top =0;
//	for (i = 0; i <= mid; i++)
//	{
//		brr[++top] = arr[i];
//	}
//	if (len % 2 == 0)
//		nest = mid + 1;
//	else
//		nest = mid + 2;
//	for (i=nest; i <= len-1; i++)
//	{
//		if (arr[i] != brr[top])
//			break;
//		top--;
//		
//	}
//	if (top == 0)
//	{
//		printf("YES\n");
//	}
//	else
//		printf("NO\n");
//	return 0;
//}