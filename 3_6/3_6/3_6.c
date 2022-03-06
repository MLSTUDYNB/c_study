#define _CRT_SECURE_NO_WARNINGS 1
/*把任意的数字，从中间拆分成两个数字，
比如1461 可以拆分成（1和461）,（14和61）,（146和1),
如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
例如：
655 = 
6 * 55 +
65 * 5
1461 = 
1*461 + 
14*61 + 
146*1
n%10最后一位数   1剩下146   
n%10       6        14
n%10      4       1
求出 5位数中的所有 Lily Number。*/
#include <stdio.h>
#include <math.h>
//int main()
//{
//    int n;
//    for (n=10;n<100000;n++)
//    {
//        int sum = 0,i=1;
//        while (1)
//        {
//            sum+=(n % (int)pow(10,i)) * (n / (int)pow(10, i));
//            if (n / (int)pow(10, i) < 10)
//                break;
//            i++;
//        }
//        if (sum == n)
//            printf("%d ", n);
//    }
//    return 0;
//}
//int panduan()
//{
//    int i = 1;
//    return *(char*)&i;
//}
//int main()
//{
//    int ret=panduan();
//    if (ret == 1)
//        printf("小端\n");
//    else
//        printf("大端\n");
//    return 0;
//}
//int main()
//{
//	char a = 0xb2;
//	short b = 0xb200;
//	int c = 0xb2000000;
//	if (a == 0xb2)
//		printf("a\n");
//	if (b == 0xb200)
//		printf("b\n");
//	if (c == 0xb2000000)
//		printf("c\n");
//	return 0;
//}
int main()
{
	float i = 6.5;
	return 0;
}