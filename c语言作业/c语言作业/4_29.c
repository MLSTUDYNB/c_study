#define _CRT_SECURE_NO_WARNINGS 1
//用结构体指针变量作函数参数编程，计算一组学生的平均成绩和不及格人数。
#include <stdlib.h>
#include <assert.h>
#include <stdio.h> 
#include <string.h> 
struct ListNode {
    int val;
    struct ListNode* next;
}; 
struct ListNode* partition(struct ListNode* pHead, int x) {
    struct ListNode* head1, * head2, * tail1, * tail2;
    head1 = tail1 = head2 = tail2 = NULL;
    while (pHead)
    {
        if (pHead->val < x)
        {
            if (tail1 == NULL)
            {
                head1 = tail1 = pHead;
            }
            else
            {
                tail1->next = pHead;

                tail1 = tail1->next;
            }

        }
        else
        {
            if (tail2 == NULL)
            {
                head2 = tail2 = pHead;
            }
            else
            {
                tail2->next = pHead;
                tail2 = tail2->next;
            }
        }
        pHead = pHead->next;
    }
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;
    tail2->next = NULL;
    tail1->next = head2;

    struct ListNode* head = head1;
    return head;
}
int main()
{
    int i = 0;
    struct ListNode* a[10];
    for (i = 0; i < 3; i++)
    {
        a[i] = (struct ListNode*) malloc(sizeof(struct ListNode));
        assert(a[i]);

    }
    for (i = 0; i < 2; i++)
    {
        a[i]->next = a[i + 1];
    }
    a[i]->next = NULL;
    a[0]->val = 3;
    a[1]->val = 3;
    a[2]->val = 3;
    partition(*a,3);
	return 0;
}
//typedef struct student
//{
//	char name[20];
//	int grade;
//}std;
//double AverScores(std* arr,int n)
//{
//	int i;
//	double sum = 0.0;
//	for (i = 0; i < n; i++)
//	{
//		sum += arr[i].grade;
//	}
//	return sum / n;
//}
//
//int p(std* arr, int n)
//{
//	int i=0,ret=0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i].grade < 60)
//			ret++;
//	}
//	return ret;
//}
//int main()
//{
//	std people[5];
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%s%d", people[i].name, &people[i].grade);
//	}
//	
//	printf("平均成绩%lf\n不及格的人数%d\n", AverScores(people, 5),p(people,5));
//	return 0;
//}
//struct  exam
//{
//    long  num;
//    char  name[10];
//    char  sex;
//    float score;
//};
//void main()
//{
//    struct  exam  stud1, * p;
//    char  ch;
//    p = &stud1;
//    stud1.num = 200701;
//    strcpy(stud1.name, "wang");
//    ch = getchar();
//    stud1.sex = ch;
//    (*p).score = 543;
//    printf("%ld,%c,%f,%s", p->num, p->sex, p->score, p->name);
//}


 /*struct ListNode {
    int val;
    struct ListNode* next;
    
};
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* newhead, * tail, * cur;
    newhead = tail = cur = head;
    while (cur)
    {
        if (cur->val == val)
        {
            tail->next = cur->next;
            free(cur);
            cur = tail->next;
        }
        else
        {
            cur = cur->next;
            tail->next = cur;
            tail = tail->next;

        }
    }
    return newhead;
}
void f()
{
    int i = 0,n=0;
    struct ListNode* a[5];
    for (i = 0; i < 5; i++)
    {
        a[i] = (struct ListNode*)malloc(sizeof(struct ListNode));
        a[i]->val = i+1;
        if(n!=0)
        a[i-1]->next = a[i];
        n++;
    }
    a[i-1]->next = NULL;
    removeElements(*a,2);
}
int main()
{
    f();
    
	return 0;
}*/