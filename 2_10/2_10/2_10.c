#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <stdlib.h>
//void qsort( void *base, size_t num, size_t width, int ( *compare )(const void *elem1, const void *elem2 ) );

//int cmp_int(const void* e1, const void* e2)
//{
//	return (int)(*(int*)e1 - *(int*)e2);
//}
//
//int main()
//{
//	int arr[] = { 2,1,5,6,7,8,9,6,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

void swep(char* str1, char* str2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		int temp = *str1;
		*str1 = *str2;
		*str2 = temp;
		str1++;
		str2++;
	}
}

void my_qsort(void* str,int sz,int width,int(*cmp)(const void* e1, const void* e2))
{
	int i, j;
	for (i=0;i<sz-1;i++)
	{
		for (j=0;j<sz-1-i;j++)
		{
			if ((cmp((char*)str+j * width,(char*)str+(j+1)*width))>0)
			{
				swep((char*)str + j * width, (char*)str + (j + 1) * width,width);
			}
		}
	}
}

int cmp_int(const void* e1, const void* e2)
{
	return (int)(*(int*)e1 - *(int*)e2);
}

void print(int*arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void test1()
{
	int arr[] = { 2,4,5,6,9,5,3,1,2,4,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr,sz,sizeof(arr[0]),cmp_int);
	print(arr,sz);
}

struct student
{
	char nums[20];
	int age;
};

int cmp_st(const void* e1, const void* e2)
{
	return (int)(((struct student*)e1)->age - ((struct student*)e2)->age);
}

void test2()
{
	struct student a[3] = { { "maole",12 }, { "shaobing",15 }, { "taocheng",14 } };
	int sz = sizeof(a) / sizeof(a[0]);
	my_qsort(a, sz, sizeof(a[0]), cmp_st);
	
}

int main()
{
//	test1();
	test2();
	return 0;
}