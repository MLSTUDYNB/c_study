#define _CRT_SECURE_NO_WARNINGS 1
/*请编写一个程序使其可以实现：统计3 × 4二维数组全体元素中正数、负数和零的个数。*/
/*请编写程序使其可以实现：将字符数组s2中的全部字符拷贝到字符数组s1中，不用strcpy函数，'\0'也要拷贝过去，'\0'后面的字符不拷贝。*/
#include <stdio.h>

int main()
{
	char s1[100], s2[100];
	gets(s2);
	int i = 0;
	while (s1[i] = s2[i])
		i++;
	printf("%s\n",s1);
	return 0;
}
//#include "stdio.h"
//#include "string.h"
//int main()
//{
//    char maxstr[20], str[3][20];
//    int i;
//    for (i = 0; i < 3; i++)
//        gets(str[i]);
//    if (strcmp(str[0], str[1]) > 0)
//        strcpy(maxstr, str[0]);
//    else
//        strcpy(maxstr, str[1]);
//    if (strcmp(str[2], maxstr) > 0)
//        strcpy(maxstr, str[2]);
//    printf("\nThe largest string is:%s\n", maxstr);
//    return(0);
//}

/*请编写程序使其可以实现：从键盘输入一个字符串，统计字母'a'出现的次数。*/
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char arr[100];
//    gets(arr);
//    int len = strlen(arr);
//    int i = 0,sum=0;
//    for (i=0;i<len;i++)
//    {
//        if (arr[i] == 'a')
//            sum++;
//    }
//    printf("字符a出现的次数=%d\n", sum);
//    return(0);
//}
//int main()
//{
//    int i = 0, k, ch;
//    int num[5] = { 0 };
//    char alpha[] = { 'a', 'e', 'i', 'o', 'u' }, in[80];
//    while ((in[i++] = getchar()) != '?')
//        ;
//    in[i] = '\0';
//        i = 0;
//    while (in[i]) {
//        for (k = 0; k < 5; k++)
//            if (in[i] == alpha[k]) {
//                num[k]++;
//                break;
//            }
//        i++;
//    }
//    for (k = 0; k < 5; k++)
//        if (num[k])
//            printf("%c%d", alpha[k], num[k]);
//    printf("\n");
//    return(0);
//}

//int main()
//{
//    int arr[3][4];
//    int i, j;
//    int a = 0, b = 0, c = 0;
//    for (i=0;i<3;i++)
//    {
//        for (j=0;j<4;j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (arr[i][j] > 0)
//                a++;
//            else if (arr[i][j] < 0)
//                b++;
//            else
//                c++;
//        }
//    }
//    printf("正数的个数=%d，负数的个数=%d，零的个数=%d\n", a, b, c);
//    return 0;
//}

/*有5个同学考了4门功课，编程输出每个同学的成绩表，并求每门课的平均分。*/
//int main()
//{
//    int arr[5][4];
//    int i,j,temp;
//    for (i=0;i<5;i++)
//    {
//        for (j=0;j<4;j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < 5; i++)
//    {
//        temp = 0;
//        for (j = 0; j < 4; j++)
//        {
//            temp += arr[i][j];
//            printf("%d ", arr[i][j]);
//        }
//        printf("平均分=%.2f\n",temp/4.0);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int i, j, n, temp, sum = 0;
//    int a[6][6];
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//        for (j = 0; j < n; j++)
//            a[i][j] = i * n + j;
//    for (i = 0; i < n; i++)
//        for (j = 0; j < n; j++)
//            printf("%d_ _", a[i][j]);
//    printf("\n");
//    for (i = 0; i < n; i++)
//        sum += a[i][n - i - 1];
//    printf("sum=%d\n", sum);
//    return(0);
//}
