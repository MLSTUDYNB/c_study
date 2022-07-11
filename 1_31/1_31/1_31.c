#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char arr[101];
	int n, i;
	while (~scanf("%s", arr))
	{
		scanf("%d", &n);
		for (i = 0; i < n; i++)
		{
			printf("%c", arr[i]);
		}
		printf("\n");
	}
	return 0;
}
//#include <stdio.h>
//
//int main()
//{
//	int n, i,a,b;
//	scanf("%d%d", &n,&a);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &b);
//		a ^= b;
//	}
//	printf("%d\n", a);
//	//for (i = 0; i < n; i++)
//	//{
//	//	if (n != i + 1)
//	//		arr[i+1] ^= arr[i];
//	//}
//	//printf("%d\n", arr[i - 1]);
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double n;
//	int m;
//	while (~scanf("%lf %d", &n, &m))
//	{
//		double sum = 0.0;
//		int i = 0;
//		for (i = 1; i <= m; i++)
//		{
//			sum += n;
//			n = sqrt(n);
//		}
//		printf("%.2lf\n", sum);
//	}
//	return 0;
//}
//#include <math.h>
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int man = 0;
//		int boy1 = 1;
//		int boy2 = 0;
//		int i = 0;
//		for (i = 1; i < n; i++)
//		{
//			man += boy2;
//			boy2 = boy1;
//			boy1 = man;
//		}
//		printf("%d\n", man + boy1 + boy2);
//	}
		//for (i = 1; i <= n; i++)
		//{
		//	boy = (int)pow(man, i);
		//	man = (int)pow(boy, i - 2);
		//}
		//printf("%d\n", boy + man);
		
		/*if (n >=3)
		{
			for (i = 3; i <= n; i++)
			{
				boy = pow(man, i-2);
				man = pow(boy, i - 4);
			}
			printf("%d\n", boy + man);
		}
		else
		{
			printf("1\n");
		}*/
//	return 0;
//}