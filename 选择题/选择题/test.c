#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	char s[3][10], (*k)[3], * p;
//
//	p = s;
//	p = k;
//	p = s[0];
//	k = s;
//	//static char* s[] = { "black", "white", "pink", "violet" };
//	//char** ptr[] = { s + 3, s + 2, s + 1, s }, *** p;
//	//p = ptr;
//	//++p;
//	//printf("%s", **p + 1);
//	return 0;
//}
//int main()
//{
//	char* str[3] = { "stra", "strb", "strc" };
//	char* p = str[0];
//	int i = 0;
//	while (i < 3)
//	{
//		printf("%s ", p++);
//		i++;
//	}
//	return 0;
//}
//int main() {
//	int m[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int(*p)[4] = (int(*)[4])m;
//	printf("%d", p[1][2]);
//	return 0;
//int main()
//{
//	char p1[15] = "abcd", * p2 = "ABCD", str[50] = "xyz";
//	strcpy(str + 2, strcat(p1 + 2, p2 + 1));
//	printf("%s", str);
//	return 0;
//}
//char* f(char* str, char ch)
//{
//	char* it1 = str;
//	char* it2 = str;
//	while (*it2 != '\0')
//	{
//		while (*it2 == ch)
//		{
//			it2++;
//		} *
////			it1++ = *it2++;
////	} return str;
////}
//int main() {
//	//char arr[2][4];
//	//strcpy(arr[0], "you");
//	//strcpy(arr[1], "me");
//	//arr[0][3] = '&';
//	//printf("%s \n", arr);
//	//char a[10];
//	//strcpy(a, "abcdcccd");
//	//printf("%s", f(a, 'c'));
//	struct st
//	{
//		int* p;
//		int i;
//		char a;
//	};
//	int sz = sizeof(struct st);
//	return 0;
//}
//union D
//{
//	int d1;
//	float d2;
//}d;
//
//int main()
//{
//	printf("%p-%p-%p\n", &d,&(d.d1), &(d.d2));
//	//d.d1 = 10;
//	//printf("%f\n", d.d2);
//	d.d2 = 10;
//	printf("%d\n", d.d1);
//	return 0;
//}
//typedef struct List_t
//{
//	struct List_t* next;
//	struct List_t* prev;
//	char data[0];
//}list_t;
//int main()
//{
//	printf("%d", sizeof(list_t));
//	return 0;
//}

//void fut(int** s, int p[2][3])
//{
//	**s = p[1][1];
//} 
void fun(char* fname, char* st)
{
	FILE* myf;
	int i;
	myf = fopen(fname, "w");
	for (i = 0; i < strlen(st); i++) fputc(st[i], myf);
	fclose(myf);
}
int main()
{
	fun("test.txt", "new world");
	fun("test.txt", "hello,");
	//int a[2][3] = { 1,3,5,7,9,11 }, * p;
	//p = (int*)malloc(sizeof(int));
	//fut(&p, a);
	//printf("%d", *p);
	return 0;
}