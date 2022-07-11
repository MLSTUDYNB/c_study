#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int my_strlen(char* arr)
//{
//	if (*arr == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(arr + 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret=my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}
int find(int(*a)[3],int k,int* hang,int* lie)
{
	int x = 0;
	int y = *lie - 1;
	while (x<=2&&y>=0)
	{
		if (*(*(a + x) + y) < k)
			x++;
		else if (*(*(a + x) + y) > k)
			y--;
		else
		{
			*hang = x;
			*lie = y;
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 7;
	int hang = 3;
	int lie = 3;
	int ret=find(arr, k,&hang,&lie);
	if (ret == 1)
	{
		printf("找到了\n");
		printf("它的坐标是（%d,%d）\n", hang, lie);
	}
	else
		printf("找不到\n");
	return 0;
}