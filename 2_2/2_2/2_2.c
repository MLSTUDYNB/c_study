#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int fun(int x)
{
	return (x == 1 )? 1 : (x + fun(x - 1));
}
int main()
{
	printf("%d\n", fun(10));
	return 0;
}
//int main()
//{
//	int i = 0;
//	for (i = 0; i || i++ < 5;)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//int dominantIndex(int* nums, int numsSize) {
//    if (numsSize == 1)
//        return 0;
//    else
//    {
//        int a = nums[0];//ด๓
//        int b = nums[1];//ะก
//        int n = 0,i=0;
//        if (a < b)
//        {
//            n = 1;
//            a = a ^ b;
//            b = a ^ b;
//            a = a ^ b;
//        }
//        for (i = 2; i < numsSize; i++)
//        {
//            if (nums[i] > a)
//            {
//                b = a;
//                a = nums[i];
//                n = i;
//            }
//            else if (nums[i] > b)
//            {
//                b = nums[i];
//            }
//        }
//        if ((a - b * 2) >= 0)
//            return n;
//        else
//            return -1;
//    }
//}
//int main()
//{
//    int arr[4], n = 4;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    printf("%d\n",dominantIndex(arr, n));
//	return 0;
//}