#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",  *(( * p)+i));
//	}
//	return 0;
//}
//char* my_strcpy(char* dest, const char* src);
//int main()
//{
//	char* (*pf)(char*, const char*);
//	char* (*pfArr[4])(char*, const char*);
//	return 0;
//}
//int pivotIndex(int* nums, int numsSize){
//	int i = 0,left=nums[0];
//	int j = numsSize - 1,right=nums[numsSize-1];
//	while (j - i > 2)
//	{
//		if (left < right)
//		{
//			left += nums[i+1];
//			i++;
//		}
//		else
//		{
//			right += nums[j-1] ;
//			j--;
//		}
//	}
//	if (left == right)
//		return (i + j) / 2;
//	else if (nums[i]+nums[i+1] == 0 || nums[j] + nums[j- 1] == 0)
//		return 0;
//	else
//		return -1;
//}
//int main()
//{
//	int arr[] = { 2,1,-1};
//	printf("%d\n",pivotIndex(arr, 3));
//	//char a = 0xb6;
//	////1011 0110
//	////1111 1111 1111 1111 1011 0110 0000 0000
//	//short b = 0xb600;
//	//int c = 0xb6000000;
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//	//printf("%d\n", c); 1111 1111 1111 1111 1011 0110 0000 0000
//	return 0;
//}
//int majorityElement(int* nums, int numsSize) {
//    int n = numsSize / 2;
//    int i, j;
//    int arr[1000] = { 0 };
//    for (i = 0; i < numsSize - 1; i++)
//    {
//        for (j = 0; j < numsSize - 1 - i; j++)
//        {
//            if (nums[j] < nums[j + 1])
//            {
//                int temp = nums[j];
//                nums[j + 1] = nums[j];
//                nums[j + 1] = temp;
//            }
//        }
//    }
//    j = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if (nums[i] == nums[i + 1])
//            arr[j]++;
//        else
//            j++;
//        if (arr[j] > n - 1)
//            return nums[i];
//    }
//    return;
//
//}
