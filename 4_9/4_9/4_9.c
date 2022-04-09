#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//struct s
//{
//	int i;
//	int* arr;
//};
//int main()
//{
//	struct s* p = (struct s*)malloc(sizeof(struct s));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	p->i = 6;
//	p->arr = (int*)malloc(5 * sizeof(int));
//	free(p->arr);
//	p->arr = NULL;
//	free(p);
//	p = NULL;
//	return 0;
//}
//struct s
//{
//	int i;
//	int arr[];
//	//int arr[0];
//};
//
//int main()
//{
//	struct s* p = (struct s*)malloc(sizeof(struct s) +20 );
//	p->i = 6;
//	int n;
//	for (n = 0; n < 5; n++)
//	{
//		p->arr[n] = n;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//char* f()
//{
//	char* p = (char*)malloc(10);
//	return p;
//}
//int main()
//{
//	char* ret = f();
//	return 0;
//}
//int main()
//{
//	char* p = (char*)malloc(10 * sizeof(char));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	free(p);
//	free(p);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}


	//char* str = (char*)realloc(p, 20 * sizeof(char));
	//if (str == NULL)
	//{
	//	printtf("%s\n", strerror(errno));
	//	return 0;
	//}
	//p = str;
//	free(p);
//	p = NULL;
//	free(p);
//	return 0;
//}
//int main()
//{
//	char* p = (char*)malloc(10 * sizeof(char));
//	if (p == NULL)
//	{
//		printtf("%s\n", strerror(errno));
//		return 0;
//	}
//	char* str = (char*)realloc(p, 20 * sizeof(char));
//	if (str == NULL)
//	{
//		printtf("%s\n", strerror(errno));
//		return 0;
//	}
//	p = str;
//	free(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	int* p = (int*)calloc(5, sizeof(int));;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	char* p = (char*)malloc(10 * sizeof(char));
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	char* arr = p;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*arr++ = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//struct stu
//{
//	int arr[10];
//	int num;
//}s={{1,2,3,4},10};
//void print1(struct stu s)
//{
//	printf("%d\n", s.num);
//}
//void print2(struct stu* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s);
//	print2(&s);
//	return 0;
//}