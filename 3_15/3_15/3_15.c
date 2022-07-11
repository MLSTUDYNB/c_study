#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student
{
	int age;
	char nume[20];
	int len;
}stu;
int cmp_stu_age(const void* a,const void* b)
{
	int aa = ((stu*)a)->age;
	int bb = ((stu*)b)->age;
	if (aa > bb)return 1;
	if (aa < bb)return -1;
	return 0;
}
int cmp_stu_nume(const void* a, const void* b)
{
	return strcmp(((stu*)a)->nume, ((stu*)b)->nume);
}
/*void qsort( void *ptr,
			size_t count,
			size_t size,
			int (*comp)(const void *, const void *) );*/
quick_sort()
{

}
void swap(char* e1,char* e2,int size)
{
	int i = 0;
	char temp;
	for (i=0;i<size;i++)
	{
		temp = *(e1 + i);
		*(e1 + i) = *(e2 + i);
		*(e2 + i) = temp;
	}
}
void my_qsort(void* ptr, int n, int size, int(*cmp)(const void* a, const void* b))
{
	void* temp = ptr;
	int i = 0;
	int j = n-1;
	if (i >= j)
		return;
	while (i<j)
	{
		while (cmp((char*)ptr + (i * size), (char*)ptr + (j * size)) >= 0&&i<j)
			i++;
		while (cmp((char*)ptr + (i * size), (char*)ptr + (j * size)) <= 0 && i < j)
			j--;
		//½»»»
		swap((char*)ptr + (i * size), (char*)ptr + (j * size),size);
	}
	swap((char*)ptr , (char*)ptr + (j * size), size);
	my_qsort(ptr,  i, size, cmp_stu_age);
	my_qsort((char*)ptr+i*size,  j,  size, cmp_stu_age);

}
//void my_qsort(void* ptr,int n,int size,int(*cmp)(const void*,const void*) )
//{
//	int i, j;
//	int count = 0;
//	for (i=0;i<n-1;i++)
//	{
//		for (j=0;j<n-1-i;j++)
//		{
//			if ((cmp((char*)ptr + j * size , (char*)ptr + (j + 1) * size)) > 0)
//			{
//				swap((char*)ptr + j * size, (char*)ptr + (j + 1) * size,size);
//				count = 1;
//			}
//		}
//		if (count == 0)
//			break;
//	}
//}
int main()
{
	stu people[3] = { {20,"maole",181},{32,"wngshaobi",162},{18,"aeivc",170}};
	my_qsort(people, sizeof(people) / sizeof(people[0]), sizeof(people[0]), cmp_stu_age);
	//qsort(people, sizeof(people) / sizeof(people[0]), sizeof(people[0]), cmp_stu_age);
	//qsort(people, sizeof(people) / sizeof(people[0]), sizeof(people[0]), cmp_stu_nume);
	return 0;
}

//void quick_sort(int* arr,int left,int right)
//{
//	int mid = arr[left];
//	int i = left;
//	int j = right;
//	if (i >= j)
//		return;
//	while (i<j)
//	{
//		
//		while (arr[j] >= mid && i < j)
//			j--;
//		while (arr[i] <= mid && i < j)
//			i++;
//		int temp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = temp;
//	}
//	
//	arr[left] = arr[i];
//	arr[i] = mid;
//	quick_sort(arr, left, i-1);
//	quick_sort(arr, j+1, right);
//
//}
//int main()
//{
//	int arr[] = { 2,88,5,8,6,4};
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	quick_sort(arr, left, right);
//	int i = 0;
//	for (i = 0; i <= right; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}