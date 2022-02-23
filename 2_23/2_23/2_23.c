#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
void f(int* arr)
{
	int st = sizeof(arr) / sizeof(arr[0]);
}
int main()
{

	int arr[5] = { 1,2,3 ,4 };
	f(arr);
	return 0;
}
	//int i, j;
	//for(i=0;i<2;i++)
	//{
	//	for (j=0;j<2;j++)
	//	{
	//		printf("%d ", arr[i][j]);
	//	}
	//	printf("\n");
	//}
	//int arr2[2][2] = { {1,2},{3 ,4} };
	//int arr3[2][2] = { {1},{2,3 } };
	//int arr4[][2] = { 1,2,3 ,4};
	//int arr5[2][] = { 1,2,3,4 };
	//int arr6[2][2] = { 1 };

	//int arr[5] = { 1,2 };
	//int i = 0;
	//for (i = 0; i < 6; i++)
	//{
	//	arr[i] = i;
	//}
	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	
//}

			
//int main()
//{
//	//float f = 31.14;
//	//int num = f;//隐式转换，会有精度丢失
//
//	int arr[5] = {1,2};
//	int i = 3;
//	float b = 3.1;
//	/*for (i = 0; i < 5; i++)
//	{
//		arr[i] = i;
//	}*/
//	if (b > i)
//		printf("haha\n");
//	else
//		printf("jeje\n");
//	return 0;
//}