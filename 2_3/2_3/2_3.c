#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	int b = 10;
//	int c = 0;
//	const int* x = &b;
//	int* const y = &b;
//	int const *z = &b;
//	*x = 1;
//	*z = 1;
//	*y = 1;
//	y = &c;
//	return 0;
//}
//#include <stdio.h>
//int findMaxConsecutiveOnes(int* nums, int numsSize) {
//    int i = 0, a = 0, b = 0, max, n;
//    int arr[numsSize];
//    for (i = 0; i < numsSize - 1; i++)
//    {
//        arr[i] = 0;
//        if (nums[i] == 1)
//        {
//            a++;
//            if (nums[i + 1] == 1)
//                a++;
//            else
//            {
//                arr[b++] = a;
//                a = 0;
//            }
//
//        }
//        else
//        {
//            arr[b++] = a;
//            a = 0;
//        }
//    }
//    arr[b] = a;
//    max = arr[0];
//    for (i = 0; i <= b; i++)
//    {
//        if (max < arr[i])
//            max = arr[i];
//    }
//    return max;
//}
//int main()
//{
//	char c = 'A';
//	if ('0' <= c <= '9') printf("YES");
//	else printf("NO");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	unsigned short x = 65530;
//	unsigned int y = x;
//	
//	return 0;
//}
#include<stdio.h>
int main()
{
	int n = 1001;
	int ans = 0;
	for (int i = 1; i <= n; ++i)
	{
		ans ^= i % 3;
	} 
	printf("%d", ans);
	return 0;
}
