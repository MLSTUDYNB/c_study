#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//main()
//{
//    int n[3], i, j, k;
//    for (i = 0; i < 3; i++)
//        n[i] = 0;
//    k = 2;
//    for (i = 0; i <= k; i++)
//        for (j = 0; j <= i; j++)
//            n[j] = n[i] + 1;
//    for (i = 0; i <= k; i++)
//        printf("%3d", n[i]);
//    printf("\n");
//}
//#include <stdio.h>
//main()
//{
//    int j, ch, a[8];
//    for (j = 0; j < 8; j++) a[j] = 0;
//    while ((ch = getchar()) != '\n')
//        if (ch >= '0' && ch <= '7') a[ch - '0']++;
//    for (j = 0; j < 8; j++)
//        printf("a[%d]=%d\n", j, a[j]);
//}
/*2���������50�� 0~100֮���������������������m��n ��0 <= m < n < 50����
��m��n֮�����������С�����˳��������򣬲��������ǰ���������������ݡ�
��srand(0); a[i]=rand%101��;*/
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//    srand((unsigned)time(NULL));
//    int arr[50],a,m,n;
//    int i=0, j=0;
//    scanf("%d%d", &m, &n);
//    for (a = 0; a < 50; a++)
//    {
//        arr[a] = rand() % 101;
//        if (arr[a] >= m && arr[a] <= n)
//            printf("%d ", arr[a]);
//    }
//    printf("\n");
//    for (i = 0; i < 49; i++)
//    {
//        for (j = 0; j < 49 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//
//    for (a = 0; a < 50; a++)
//    {
//        if (arr[a] >= m && arr[a] <= n)
//            printf("%d ", arr[a]);
//    }
//    return 0;
//}
/*3����һ����ֵ�������е������в���ָ����Ԫ�ء�
����������10��Ԫ�أ���ֵ��С���������ɼ�������һ����x��Ȼ���������в���x��
����ҵ��������ӦԪ�ص�λ�ã�
���Ҳ����������ʾ��Ϣ���޴�Ԫ�ء���*/
#include <stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int x,i,j;
	scanf("%d", &x);
	i = 0;
	j = 9;
	while (i <= j)
	{
		int mid = i + (j - i) / 2;
		if (arr[mid] < x)
			i = mid + 1;
		else if (arr[mid] > x)
			j = mid - 1;
		else
		{
			printf("�ҵ��ˣ��±���%d\n", mid);
			return 0;
		}
	}
	printf("�޴�Ԫ��\n");
	return 0;
}
//for (i = 0; i < 10; i++)
//{
//	if (arr[i] == x)
//	{
//		printf("�ҵ��ˣ��±���%d\n", i);
//		break;
//	}
//}
//if (i == 10)
//	printf("�޴�Ԫ��\n");