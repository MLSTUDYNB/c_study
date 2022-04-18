#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void my_nextval(int* nextval, char* p, int n)
{
	int k = 0, j = 1, i = 0;
	nextval[0] = -1;
	nextval[1] = 0;
	while (j < n)
	{
		if (k == -1|| p[j] == p[k])
		{
			j++;
			k++;
			nextval[j] = k ;
			if (p[j] != p[k])
				nextval[j] = k;
			else
				nextval[j] = nextval[k];
			
		}
		else
		{
			k = nextval[k];
		}
	}
}
int main()
{
	char arr[] = "abcaabbcabcaabdab";
	int len = strlen(arr);
	int* nextval = (int*)malloc(len * sizeof(int));
	if (nextval == NULL)
	{
		exit(1);
	}
	my_nextval(nextval,arr, len);
	return 0;
}
//#define MAX 100
//#define PRINT printf("hahaha\n")
//int main()
//{
//#undef MAX
//	printf("%d\n", MAX);
//	PRINT;
//	//printf("%s %d %s %s\n", __FILE__, __LINE__, __DATE__, __TIME__);
//	return 0;
//}
//#define MAX(x,y) x>y?x:y
//int main()
//{
//	printf("%d\n", MAX(1, 3));
//	return 0;
//}

//#define add(x,y) x+y
//int mian()
//{
//	add(1,2+3);
//	return 0;
//}
//#define line(x,y) x##y
//int main()
//{
//	int ac = 20;
//	printf("%d\n", line(a, c));
//	return 0;
//}
//#define print(a) printf(#a" is %d\n",a)
//int main()
//{
//	int a = 6;
//	int b = 0;
//	print(a);
//#undef print
//	print(b);
//	return 0;
//}
//#define add(x,y) x+y
//#define A 
//int main()
//{
//#if defined(A)
//	printf("%d\n", add(1, 2));
//#endif
//
//#ifdef A
//	printf("%d\n", add(1, 2));
//#endif
//	return 0;
//}