#define _CRT_SECURE_NO_WARNINGS 1
//#include <assert.h>
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//    printf("%d\n", atoi("-   210"));
//    printf("%d\n", atoi("01-2"));
//    printf("%d\n", atoi("jjj20sgvagrk"));         // �޿ɽ��е�ת��
//    printf("%d\n", atoi("k21-47"));   // UB ���� int ��Χ��
//}

//int my_atoi(const char* temp)
//{
//	int sum = 0;
//	int a = 1;
//	int b = 1;
//	while (*temp)
//	{
//		//��ʼʱ�ų�+ - �Ϳո�
//		while (*temp == ' ')
//		{
//			temp++;
//		}
//		if (*temp == '-' && a == 1)
//		{
//			b = -1;
//	
//			temp++;
//		}
//		else if (*temp == '+' && a == 1)
//		{
//			b = 1;
//
//			temp++;
//		}
//		
//		//�ҵ������ַ�
//		while (*temp >= '0' && *temp <= '9')
//		{
//			if (a == 0)
//			{
//				sum *= 10;
//			}
//			sum += *temp - '0';
//			a = 0;
//			temp++;
//		}
//		//�˴�һ�����������ַ�
//		break;
//	}
//	return b * sum;
//}
//int main()
//{
//	printf("%d\n", my_atoi("-12 junk"));
//	printf("%d\n", my_atoi("0"));
//	printf("%d\n", my_atoi("ju-naer23asgvagrk"));         // �޿ɽ��е�ת��
//	printf("%d\n", my_atoi("0k21-47.48364"));   // UB ���� int ��Χ��
//
//	return 0;
//}

//int my_atoi(const char* str)
//{
//    assert(str);
//
//    char* pos1;//���ڼ�¼���ֵ����λ
//    char* pos2;//���ڼ�¼���ֵ����λ��pos2-pos1����������ֵ�λ��
//    while (
//        (*str == ' ' ||
//            ((*str) < '0') ||
//            ((*str) > '9')
//            ) && *str != '\0'
//        )
//    {
//        str++;
//    }
//    if (*str == '\0')//�������str����ת���򷵻�0
//    {
//        return 0;
//    }
//    pos1 = str;
//    char* star = str;//��ʱ��str��star��ָ���һ�������ַ�
//    while (*str >= '0' && *str <= '9')
//    {
//        str++;
//    }
//    pos2 = str - 1;//��ʱָ�����һλ��
//    int len = pos2 - pos1 + 1;//�������ֵ�λ��
//    int* pc = (int*)malloc(len * sizeof(int));
//    int i = 1;//��������ʹ�1��ʼ�����ɣ�0��λ�ò�Ҫ�ˣ���ϰ��
//    while ((*star) >= '0' && (*star) <= '9')
//    {
//        pc[i] = *star - 48;
//        star++;
//        i++;
//    }
//    //��������pc�д�ŵ������е����֣�len��ŵ������ֵ�λ�������ھͰ�����ת������
//    int num = 0;
//    int ten = 1;
//    for (int j = len; j > 0; j--)
//    {
//        num += pc[j] * ten;
//        ten *= 10;
//    }
//    if (*(pos1 - 1) == '-')
//    {
//        return -num;
//    }
//    return num;
//}
//
//int main(void)
//{
    //printf("%d\n", my_atoi(" -123junk"));
    //printf("%d\n", my_atoi("0"));
    //printf("%d\n", my_atoi("ju-naer23asgvagrk"));         // �޿ɽ��е�ת��
    //printf("%d\n", my_atoi("k21-47.48364"));   // UB ���� int ��Χ��
//
//    return 0;
//}
//int my_atoi(const char* str)
//{
//	int ret = 0;//��¼����ֵ
//	int i = 0;//��¼�ǿ��ַ���һ��λ��
//	int j = 0;//j����¼���ǵ�һ�������ַ����һ���±�
//	if (isspace(str[i]))
//	{
//		i++;
//	}
//	if (str[i] == '+' || str[i] == '-' || (str[i] > '0' && str[i] < '9'))//��һ�ڶ�������ϲ�����
//	{
//		j = i;//�ҵ���һ�������ַ���һ���±�
//		if (str[i] == '+' || str[i] == '-')//��һ�����
//		{
//			j++;//����+,-
//			while (str[j] >= '0' && str[j] <= '9')
//			{
//				ret = ret * 10 + str[j] - '0';
//				j++;
//			}
//		}
//		while (str[j] >= '0' && str[j] <= '9')
//		{
//			ret = ret * 10 + str[j] - '0';
//			j++;
//		}
//		if (str[i] == '-')
//			return -ret;
//		else
//			return ret;
//	}
//	return 0;
//}
//int main()
//{
//	        // �޿ɽ��е�ת��
//	printf("%d\n", my_atoi("k21-47.48364"));   // UB ���� int ��Χ��
//	return 0;
//
//}
//#include <stdio.h>
//main()
//{
//    int a, b;
//    int* p1, * p2;
//    p1 = &a;
//    p2 = &b;
//    a = 10;
//    *p2 = *p1 + 5;
//    printf("a = %d,b = %d\n", a, b);
//    printf("a = %d,b = %d\n", a, b);
//}
//#include <stdio.h>
//main()
//{
//    int a, b, t;
//    int* pa, * pb;
//    pa = &a;
//    pb = &b;
//    printf("input a,b:\n");
//    scanf("%d,%d", pa, pb);
//    t = *pa;
//    *pa = *pb;
//    *pb = t;
//    printf("a = %d,b = %d\n", a, b);
//    printf("*pa = %d,*pb = %d\n", *pa, *pb);
//}

//#include <stdio.h>
//main()
//{
//    int a, b;
//    int* pa, * pb, * pt;
//    pa = &a;
//    pb = &b;
//    printf("input a,b:\n");
//    scanf("%d,%d", pa, pb);
//    *pt = *pa;
//    *pa = *pb;
//    *pb = *pt;
//    printf("a = %d,b = %d\n", a, b);
//    printf("*pa = %d,*pb = %d\n", *pa, *pb);
//}
//
//#include <stdio.h>
//void fun2(int* x, int* y)
//{
//    int t;
//    t = *x;
//    *x = *y;
//    *y = t;
//}
//void fun1(int* pa, int* pb, int* pc)
//{
//    if (*pa < *pb)fun2(pa,pb);
//    if (*pa < *pc)fun2(pa,pc);
//    if (*pb < *pc)fun2(pb,pc);
//}
//main()
//{
//    int a, b, c;
//    printf("input a,b,c:\n");
//
//    scanf("%d%d%d", &a, &b, &c);
//
//    fun1(&a, &b, &c);
//    printf("a = %d,b = %d,c = %d\n",a,b,c);
//}
//#include <stdio.h>
//void f(int* a,int* b,int* c)
//{
//    int temp;
//    if (*a > *b)
//    {
//        temp = *a;
//        *a = *b;
//        *b = temp;
//    }
//    if (*a > *c)
//    {
//        temp = *a;
//        *a = *c;
//        *c = temp;
//    }
//    if (*b > *c)
//    {
//        temp = *b;
//        *b = *c;
//        *c = temp;
//    }
//    
//}
//int main()
//{
//    int a, b, c;
//    scanf("%d%d%d", &a, &b, &c);
//    f(&a,&b,&c);
//    printf("%d %d %d\n", a, b, c);
//    return 0;
//}
//�������3�����������10���������֮���Լ������ĳ˻���
//#include <stdio.h>
//int f1(int* a, int* b, int* c)
//{
//    return (*a % 10) + (*b % 10) + (*c % 10);
//}
//int f2(int* a, int* b, int* c)
//{
//    return (*a % 10) * (*b % 10) * (*c % 10);
//}
//int main()
//{
//    int a, b, c;
//    scanf("%d%d%d", &a, &b, &c);
//    
//    printf("%d \n%d \n", f1(&a, &b, &c),f2(&a, &b, &c));
//    return 0;
//}
//#include <stdio.h>
//main()
//{
//    int i, a[10];
//    int* p;
//    for (p = a; p < a + 10; p++)
//        scanf("%d", p);
//    for (p = a, i = 0; i < 10; i++)
//        printf("a[%d] = %d\n", i, *p);
//}
//#include <stdio.h>
//main()
//{
//    int i, j, a[3][4];
//    int* p[3] = { a[0],a[1],a[2] };
//    for (i = 0; i < 3; i++)
//        for (j = 0; j < 4; j++)
//            scanf("%d", p[i] + j);
//    for (i = 0; i < 3; i++)
//        for (j = 0; j < 4; j++)
//            printf("%d", *(p[i] + j));
//    printf("\n");
//}
//#include <stdio.h>
//main()
//{
//    int a;
//    int* p = &a;
//    int** pp = &p;
//    printf("input a:\n");
//    scanf("%d", &a);
//    printf("a = %d\n", a);
//    printf("*p = %d\n", *p);
//    printf("**pp = %d\n", **pp);
//}
//#include <stdio.h>
//void main()
//{
//    int* search(int(*p)[4], int n);
//    int score[][4] = { {67,87,50,75},{55,77,91,86},{88,69,78,82} };
//    int* p, i, m;
//    printf("Enter the number:");
//    scanf("%d", &m);
//    printf("The scores of the No%d are:\n", m);
//    p = search(score, m);
//    for (i = 0; i < 4; i++)
//        printf("%5d\t", *(p + i));
//    printf("\n");
//}
//int* search(int(*p)[4], int n) /*���巵��ֵΪָ��ĺ���search*/
//{
//    int* pt;
//    pt = *(p + n);
//    return pt;
//}
//#include <stdio.h>
//struct str {
//    int len;
//    char s[0];
//};
//
//struct foo {
//    struct str* a;
//};
//
//int main(int argc, char** argv) {
//    struct foo f = { 0 };
//    if (f.a->s) {
//        printf(f.a->s);
//    }
//    return 0;
//}