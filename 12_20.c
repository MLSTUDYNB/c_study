#define _CRT_SECURE_NO_WARNINGS 1
/*����
KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵ��߶�ͼ����

����������
�������룬һ��������1~100������ʾ�߶γ��ȣ�����*����������
���������
���ÿ�����룬���ռһ�У��á�*����ɵĶ�Ӧ���ȵ��߶Ρ�*/
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}
/*����
�Ӽ�������5���˵���ߣ��ף��������ǵ�ƽ����ߣ��ף���

����������
һ�У���������5����ߣ���Χ0.00~2.00�����ÿո�ָ���
���������
һ�У����ƽ����ߣ�������λС����*/
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    float h;
//    float sum = 0.0;
//    for (n = 0; n < 5; n++)
//    {
//        scanf("%f", &h);
//        sum += h;
//    }
//    printf("%.2f", sum / 5);
//    return 0;
//}
/*����
����һ���༶5��ѧ����5�Ƴɼ������5��ѧ����5�Ƴɼ����ܷ֡�

����������
���У�ÿ������һ��ѧ����5�Ƴɼ�����������ʾ����Χ0.0~100.0�����ÿո�ָ���
���������
���У���������˳��ÿ�����һ��ѧ����5�Ƴɼ����ܷ֣�С���㱣��1λ�����ÿո�ָ���*/
//#include <stdio.h>
//int main()
//{
//    int n, i;
//    float cj[5][5];
//    float a[5] = { 0 };
//    for (n = 0; n < 5; n++)
//    {
//        for (i = 0; i < 5; i++)
//        {
//            scanf("%f", &cj[n][i]);
//            a[n] += cj[n][i];
//        }
//    }
//    for (n = 0; n < 5; n++)
//    {
//        for (i = 0; i < 5; i++)
//        {
//            printf("%.1f ", cj[n][i]);
//        }
//        printf("%.1f\n", a[n]);
//    }
//    return 0;
//}
//#include <stdio.h>
//int max3(int a, int b, int c)
//{
//    if (a > b && a > c)
//        return a;
//    else if (b > a && b > c)
//        return b;
//    else
//        return c;
//}
//int main()
//{
//    int a, b, c;
//    scanf("%d%d%d", &a, &b, &c);
//    printf("%.2f", (float)max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c)));
//    return 0;
//}
//���ű��ʽ������
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int m = (a < b, a++, b > c, c++, b + c + a);
	printf("%d\n", m);
	return 0;
}