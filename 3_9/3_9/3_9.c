#define _CRT_SECURE_NO_WARNINGS 1
//*   *0
// * *1
//  *2
// * *1
//*   *0
//
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        int k,i,j,a;
//        i = 1;
//        j = n;
//       
//        for (k = 0; k < n; k++)
//        {  
//            a = 1;
//            if (i > j)
//            {
//                while (a < j)
//                {
//                    printf(" ");
//                    a++;
//                }
//            }
//            else
//            {
//                while (a < i)
//                {
//                    printf(" ");
//                    a++;
//                }
//            }
//            a = 1;
//            printf("*");
//            if (i > j)
//            {
//                while (a < i - j)
//                {
//                    printf(" ");
//                    a++;
//                }
//            }
//            else
//            {
//                while (a < j - i)
//                {
//                    printf(" ");
//                    a++;
//                }
//            }
//            if(i!=j)
//                printf("*");
//            i++;
//            j--;
//            printf("\n");
//        }
//    }
//    return 0;
//}
//int main()
//{
//	int n;
//	while (~scanf("%d",&n))
//	{
//		char arr[20][20];
//		int i = 0, j = 0;
//		for (i=0;i<n;i++)
//		{
//			for (j=0;j<n;j++)
//			{
//				if (i == j || i + j == n - 1)
//					arr[i][j] = '*';
//				else
//					arr[i][j] = ' ';
//				printf("%c", arr[i][j]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <malloc.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int* p = (int*)malloc(n * sizeof(int));
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", p + i);
//    }
//    int k = 0;
//    scanf("%d", &k);
//    for (i = 0; i < n; i++)
//    {
//        if ((*p + i) != k)
//            printf("%d ", *(p + i));
//    }
//    free(p);
//    p = NULL;
//    return 0;
//}
/*A选手说：B第二，我第三；
B选手说：我第二，E第四；
C选手说：我第一，D第二；
D选手说：C最后，我第三；
E选手说：我第四，A第一；*/
#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	for (a=1;a<=5;a++)
		for (b=1;b<=5;b++)
			for (c=1;c<=5;c++)
				for (d=1;d<=5;d++)
					for (e = 1; e <= 5; e++)
					{
						if ((b == 2) +( a == 3)==1 &&
							(b == 2) +( e == 4)==1 &&
							(c == 1) +( d == 2) ==1&&
							(c == 5) + (d == 3)==1 &&
							(e == 4) + (a == 1)==1 )
							if (a * b * c * d * e == 120)
								printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d\n", a, b, c, d, e);
					}
	return 0;
}