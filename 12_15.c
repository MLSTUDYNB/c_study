#define _CRT_SECURE_NO_WARNINGS 1
//����������������Ĵ�С��ϵ
//#include <stdio.h>
//int main()
//{
//    int n, m;
//    while (~scanf("%d%d", &n, &m))
//    {
//        if (n > m)
//            printf("%d>%d\n", n, m);
//        else if (n == m)
//            printf("%d=%d\n", n, m);
//        else
//            printf("%d<%d\n", n, m);
//    }
//    return 0;
////��������һ��ѧ����3�Ƴɼ�������Ļ�������ѧ�����ܳɼ��Լ�ƽ���ɼ�
//#include <stdio.h>
//int main()
//{
//    float a, b, c;
//    scanf("%f%f%f", &a, &b, &c);
//    printf("%.2f %.2f", a + b + c, (a + b + c) / 3);
//    return 0;
//}
//��һ����λ�������������
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n)
    {
        printf("%d", n % 10);
        n /= 10;
    }
    return 0;
}