#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	double arr[1000], brr[1000];
	int m, i, a, b;
	double n;
		
	double crr[1000];
	double max;
	
	scanf("%d%lf", &m, &n);
	for (i = 0; i < m; i++)
	{
		scanf("%lf", &arr[i]);
	}
	for (i = 0; i < m; i++)
	{
		scanf("%lf",&brr[i]);
		crr[i] = brr[i] / arr[i];
	}
	for (a = 0; a < m-1;a++)
	{
		for (b = 0; b < m-1-a; b++)
		{
			if (crr[b] < crr[b + 1])
			{
				max = crr[b];
				crr[b] = crr[b + 1];
				crr[b + 1] = max;
				max = arr[b];
				arr[b] = arr[b + 1];
				arr[b + 1] = max;
				max= brr[b];
				brr[b] = brr[b + 1];
				brr[b + 1] = max;
			}
		}
	}
	max= 0.0;
	if (n <= arr[0])
	{
		printf("%.2lf", crr[0] * n);
	}
	else
	{
		for (i=0;n > 0;i++)
		{
			n -= arr[i];
		}
		for (a = 0; a < i-1; a++)
		{
			max += brr[a];
		}
		printf("%.2lf", max + (n + arr[i-1]) * crr[a]);
	}
	return 0;
}