#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#define  PAI   3.1415926
//#define  MESSAGE1 "����һ���궨��ʾ��"
//#define  MESSAGE2 "������뾶 "
//main()
//{
//	float S, R, L, V, T;
//	printf(MESSAGE1);
//	printf(" %s", MESSAGE2);
//	scanf("%f", &R);
//	L = 2 * PAI * R;
//	S = PAI * R * R;
//	T = 4 * S;
//	V = 4 / 3.0 * PAI * R * R * R;
//	printf("L=%10.3f\nS=10.3\nT= %10.3f\nV=%10.3f\n", L, S, T, V);
//}
//#define   R   5.8
//#define   PAI  3.14159
//#define   S  4*PAI*R*R   /*�궨��S����ǰ��ĺ���PAI�� R */
//#define   V  S*R/3       /*�궨��V����ǰ��ĺ���S��R*/
//main()
//{
//	printf("S = % 12.3f    V = % 12.3f\n", S, V);
//}
//#define MIN(a,b) (a<b)?a:b
//main()
//{
//	int x, y;
//	x = 10;
//	y = 20;
//	printf("the minimum is: %d\n", MIN(x, y));
//}

//int main()
//{
//	FILE* p = fopen("test.txt", "r");
//	char arr[100];
//	while(fgets(arr, 100, p))
//	printf("%s", arr);
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//# define    DEBUG   1
//void main()
//{
//	char SA[26];
//	int K, Count = 0;
//	for (K = 0; K < 26; K++)
//		SA[K] = 48 + K;
//	for (K = 0; K < 26; K++)
//		if (SA[K] > 57)Count++;
//#if  DEBUG 
//	printf("Count=%d\n", Count);
//#endif
//}
//#define Tap(x)  2*x+1
//main()
//{
//	int a = 6, k = 2, m = 1;
//	a += Tap(k + m);
//	printf("%d\n", a);
//}
//#include "stdio.h"
//main()
//{
//    FILE* fp;
//    char filename[20], ch;
//    printf("Enter filename:");
//    scanf("%s", filename);         /*�����ļ���������·������չ��*/
//    if ((fp = fopen(filename, "r")) == NULL) /*���ļ�*/
//    {
//        printf("file open error.\n");       /*������*/
//        exit(0);
//    }
//    while ((ch = fgetc(fp)) != EOF)        /*���ļ��ж��ַ�*/
//        putchar(ch);                     /*��ʾ���ļ�������ַ�*/
//    fclose(fp);                      /*�ر��ļ�*/
//}
//#include "stdio.h"
//#include "string.h"
//main()
//{
//
//    FILE* fp1, * fp2;
//    char str[128];
//    if ((fp1 = fopen("D:\\t1.txt", "r")) == NULL)       /*��ֻ����ʽ��t1.txt*/
//    {
//        printf("Cannot open file.\n");
//        exit(0);
//    }
//    if ((fp2 = fopen("D:\\t2.txt", "w")) == NULL)      /*��ֻд��ʽ��t1.txt*/
//    {
//        printf("Cannot open file.\n");
//        exit(0);
//    }
//    while (fgets(str, 128, fp1) > 0)  /*���ļ��ж������ַ������ȴ���0*/
//    {
//        fputs(str, fp2);                  /*��t1.txt���ַ�����д��t2.txt*/
//        printf("%s", str);                /*����Ļ����ʾ�������ַ���*/
//    }
//    fclose(fp1);
//    fclose(fp2);
//}
//#include "stdio.h"
//#include "stdlib.h"
//main()
//{
//    FILE* fp1;
//    int i;
//    struct stu                              /*����ṹ��*/
//    {
//        char name[10];
//        char num[9];
//        float score[2];
//    }student;
//    if ((fp1 = fopen("t1.txt", "wb")) == NULL)    /*��ֻд��ʽ�򿪶������ļ�*/
//    {
//        printf("Cannot open file.\n");
//        exit(0);
//    }
//    printf("input data:\n");
//    for (i = 0; i < 2; i++)
//    {
//        scanf("%s %s %f %f", student.name, student.num, &student.score[0],
//            &student.score[1]);                    /*����һ����¼*/
//        fwrite(&student, sizeof(student), 1, fp1);    /*�ɿ�д���ļ�*/
//    }
//    fclose(fp1);
//    if ((fp1 = fopen("t1.txt", "rb")) == NULL)     /*�����Զ�����ֻд���ļ�*/
//    {
//        printf("Cannot open file.\n");
//        exit(0);
//    }
//    printf("Output from file:\n");
//    for (i = 0; i < 2; i++)
//    {
//        fread(&student, sizeof(student), 1, fp1);   /*���ļ��ɿ��*/
//        printf("%s %s %7.2f %7.2f\n", student.name, student.num, student.score[0],
//            student.score[1]);                   /*��ʾ����Ļ*/
//    }
//    fclose(fp1);
//}
#include <stdio.h>
#include <math.h>
//#define s (a+b+c)/2
//#define area(a,b,c) sqrt((s)*(s-a)*(s-b)*(s-c))
//int main()
//{
//	double a, b, c;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	printf("�����%lf\n", area(a, b, c));
//	return 0;
//}

//void sort(int num[], int n)
//{
//
//}
//
//int main()
//{
//	sort(arr, 10);
//	FILE* p = fopen("c:\f1.txt", "r");
//	if (p == NULL)
//	{
//		exit(-1);
//	}
//	fwrite(arr, 4, 10, p);
//	fread(arr, 4, 10, p);
//	fprintf(p, "%d", arr);
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	float a = 9 %-3;
//	printf("%f\n", a);
//	return 0;
//}