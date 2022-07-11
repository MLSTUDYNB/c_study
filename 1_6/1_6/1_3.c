#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define N 6
struct quece
{
	int date[1000];
	int head;
	int tail;
};
struct stuct
{
	int date[10];
	int top;
};
void getbook(struct quece* q3,int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &q3->date[i]);
		q3->tail++;
	}
}
void putbook(struct quece* q3, struct stuct* s ,int* book,int n)
{
	int t = 0;
	t = q3->date[q3->head];
	if (book[t] == 1)
	{
		//收牌
		book[t] = 0;
		q3->date[q3->tail] = t;
		q3->head++;
		q3->tail++;
		while (t!=s->date[s->top])
		{
			q3->date[q3->tail] = s->date[s->top];
			book[s->date[s->top]] = 0;
			s->date[s->top] = 0;
			s->top--;
			q3->tail++;
		}
		q3->date[q3->tail] = s->date[s->top];
		book[s->date[s->top]] = 0;
		s->date[s->top] = 0;
		s->top--;
		q3->tail++;
	}
	else
	{
		q3->head++;
		s->top++;
		s->date[s->top] =t;
		book[t] = 1;
	}
	
}
int main()
{
	struct quece q1, q2;
	struct stuct s;
	int book[10];
	int i;
	//一系列初始化
	q1.head = 0; q1.tail = 0;
	q2.head = 0; q2.tail = 0;
	s.top = 0;
	for (i = 0; i < 10; i++)
	{
		book[i] = 0;
	}
	//两个人获得牌
	getbook(&q1,N);
	getbook(&q2, N);
	while (q1.head<q1.tail&& q2.head < q2.tail)
	{
		//出牌
		putbook(&q1,&s,book, N);
		putbook(&q2,&s,book, N);
	}
	//判断
	if (q1.head == q1.tail)
	{
		printf("q2胜利\n");
		printf("q2手中的牌：");
		for (i = q2.head-1; i < q2.tail; i++)
		{
			printf("%d ", q2.date[i]);
		}
		printf("\n桌面上的牌为：");
		for (i = 1; i < s.top; i++)
		{
			printf("%d ", s.date[i]);
		}
		printf("\n");
	}
	else
	{
		printf("q1胜利\n");
		printf("q1手中的牌：");
		for (i = q1.head-1; i < q1.tail; i++)
		{
			printf("%d ", q1.date[i]);
		}
		printf("\n桌面上的牌为：");
		for (i = 1; i < s.top; i++)
		{
			printf("%d ", s.date[i]);
		}
		printf("\n");
	}
	return 0;
}
//#include <stdio.h>
//struct queue
//{
//	int data[1000];
//	int head;
//	int tail;
//};
//struct stack
//{
//	int data[10];
//	int top;
//};
//int main()
//{
//	struct queue q1, q2;
//	struct stack s;
//	int book[10];
//	int i, t;
//	q1.head = 1; q1.tail = 1;
//	q2.head = 1; q2.tail = 1;
//	s.top = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		book[i] = 0;
//	}
//	for (i = 1; i <= 6; i++)
//	{
//		scanf("%d", &q1.data[q1.tail]);
//		q1.tail++;
//	}
//	for (i = 1; i <= 6; i++)
//	{
//		scanf("%d", &q2.data[q2.tail]);
//		q2.tail++;
//	}
//	while (q1.head < q1.tail && q2.head < q2.tail)
//	{
//		t = q1.data[q1.head];
//		if (book[t] == 0)
//		{
//			q1.head++;
//			s.top++;
//			s.data[s.top] = t;
//			book[t] = 1;
//
//		}
//		else
//		{
//			q1.head++;
//			q1.data[q1.tail] = t;
//			q1.tail++;
//			while (s.data[s.top] != t)
//			{
//				book[s.data[s.top]] = 0;
//				q1.data[q1.tail] = s.data[s.top];
//				q1.tail++;
//				s.top--;
//			}
//			book[s.data[s.top]] = 0;
//			q1.data[q1.tail] = s.data[s.top];
//			q1.tail++;
//			s.top--;
//		}
//		if (q1.head == q1.tail)
//			break;
//		t = q2.data[q2.head];
//		if (book[t] == 0)
//		{
//			q2.head++;
//			s.top++;
//			s.data[s.top] = t;
//			book[t] = 1;
//		}
//		else
//		{
//			q2.head++;
//			q2.data[q2.tail] = t;
//			q2.tail++;
//			while (s.data[s.top] != t)
//			{
//				book[s.data[s. top]] = 0;
//				q2.data[q2.tail] = s.data[s.top];
//				q2.tail++;
//				s.top--;
//			}
//			book[s.data[s.top]] = 0;
//			q2.data[q2.tail] = s.data[s.top];
//			q2.tail++;
//			s.top--;
//		}
//	}
//	if (q2.head == q2.tail)
//	{
//		printf("小哼win\n");
//		printf("小哼当前手中的牌是");
//		for (i = q1.head; i <= q1.tail - 1; i++)
//		{
//			;
//		}
//	}
//	return 0;
//}