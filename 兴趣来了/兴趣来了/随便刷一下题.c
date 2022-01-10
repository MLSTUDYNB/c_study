
#include <stdio.h>
#include <stdio.h>

//int main()
//{
//	int long   a[11], b[11], c[11];
//	int n, i;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d%d%d", &a[i], &b[i], &c[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		if ((double)a[i]/2 + (double)b[i]/2 > (double)c[i]/2)
//		{
//			printf("Case #%d: true\n", i + 1);
//		}
//		else
//		{
//			printf("Case #%d: false\n", i + 1);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int m, n, a;
//	int i;
//	int b = 3;
//	int arr[100001];
//	arr[1] = 2;
//	arr[2] = 3;
//	scanf("%d%d", &m, &n);
//	for (i = 5; i < 99999; i = i + 2)
//	{
//		int c = (int)sqrt(i);
//		for (a = 2; a <= c; a++)
//		{
//			if (i % a == 0)
//				break;
//		}
//		if (a > c)
//		{
//			arr[b] = i;
//			b++;
//		}
//	}
//	i = 1;
//	a = n - m;
//	while (m <= n)
//	{
//		printf("%d", arr[m]);
//		if (i % 10 != 0 && i != a + 1)
//		{
//			printf(" ");
//		}
//		if (i % 10 == 0)
//		{
//			printf("\n");
//		}
//		m++;
//		i++;
//	}
//	return 0;
//}