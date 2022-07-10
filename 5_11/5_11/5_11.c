#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#define  PAI   3.1415926
//#define  MESSAGE1 "这是一个宏定义示例"
//#define  MESSAGE2 "请输入半径 "
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
//#define   S  4*PAI*R*R   /*宏定义S引用前面的宏名PAI、 R */
//#define   V  S*R/3       /*宏定义V引用前面的宏名S、R*/
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
//    scanf("%s", filename);         /*输入文件名，包括路径和扩展名*/
//    if ((fp = fopen(filename, "r")) == NULL) /*打开文件*/
//    {
//        printf("file open error.\n");       /*出错处理*/
//        exit(0);
//    }
//    while ((ch = fgetc(fp)) != EOF)        /*从文件中读字符*/
//        putchar(ch);                     /*显示从文件读入的字符*/
//    fclose(fp);                      /*关闭文件*/
//}
//#include "stdio.h"
//#include "string.h"
//main()
//{
//
//    FILE* fp1, * fp2;
//    char str[128];
//    if ((fp1 = fopen("D:\\t1.txt", "r")) == NULL)       /*以只读方式打开t1.txt*/
//    {
//        printf("Cannot open file.\n");
//        exit(0);
//    }
//    if ((fp2 = fopen("D:\\t2.txt", "w")) == NULL)      /*以只写方式打开t1.txt*/
//    {
//        printf("Cannot open file.\n");
//        exit(0);
//    }
//    while (fgets(str, 128, fp1) > 0)  /*从文件中读到的字符串长度大于0*/
//    {
//        fputs(str, fp2);                  /*从t1.txt读字符串并写入t2.txt*/
//        printf("%s", str);                /*在屏幕上显示读到的字符串*/
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
//    struct stu                              /*定义结构体*/
//    {
//        char name[10];
//        char num[9];
//        float score[2];
//    }student;
//    if ((fp1 = fopen("t1.txt", "wb")) == NULL)    /*以只写方式打开二进制文件*/
//    {
//        printf("Cannot open file.\n");
//        exit(0);
//    }
//    printf("input data:\n");
//    for (i = 0; i < 2; i++)
//    {
//        scanf("%s %s %f %f", student.name, student.num, &student.score[0],
//            &student.score[1]);                    /*输入一条记录*/
//        fwrite(&student, sizeof(student), 1, fp1);    /*成块写入文件*/
//    }
//    fclose(fp1);
//    if ((fp1 = fopen("t1.txt", "rb")) == NULL)     /*重新以二进制只写打开文件*/
//    {
//        printf("Cannot open file.\n");
//        exit(0);
//    }
//    printf("Output from file:\n");
//    for (i = 0; i < 2; i++)
//    {
//        fread(&student, sizeof(student), 1, fp1);   /*从文件成块读*/
//        printf("%s %s %7.2f %7.2f\n", student.name, student.num, student.score[0],
//            student.score[1]);                   /*显示到屏幕*/
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
//	printf("面积：%lf\n", area(a, b, c));
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