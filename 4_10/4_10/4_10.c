#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//void f(int* arr, int n)
//{
//	int i = 0,sum = 0,top = 0;
//	int single1 = 0,single2 = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum ^= arr[i];
//	}
//	for (i = 0; i < 32; i++)
//	{
//		if (((sum >> i) & 1 )== 1)
//			break;
//	}
//	top = i;
//	for (i = 0; i < n; i++)
//	{
//		if (((arr[i] >> top) & 1 )== 1)
//			single1 ^= arr[i];
//		else
//			single2 ^= arr[i];
//	}
//	printf("%d %d\n", single1, single2);
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,1,2,5,4 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	f(arr, len);
//	return 0;
//}

//int main()
//{
//	FILE* p = fopen("test.txt", "w");
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	int ch;
//	while ((ch=fgetc(p))!=EOF)
//	{
//		printf("%c", ch);
//	}
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* p = fopen("test.txt", "w");
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	char ch;
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, p);
//	}
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	char arr[200]={0};
//	while (fgets(arr, 200, p))
//	{
//		printf("%s", arr);
//	}
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* p = fopen("test.txt", "w");
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	fputs("acd", p);
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	char arr[200] = { 0 };
//	fscanf(p,"%s",arr);
//	printf("%s\n", arr);
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* p = fopen("test.txt", "w");
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	fprintf(p, "%s", "哈哈哈");
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	char arr[200]={0};
//	fread(arr, 1, 100, p);
//	printf("%s\n", arr);
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* p = fopen("test.txt", "w");
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	char arr[200] = "abcdefds";
//	fwrite(arr, 1, 20, p);
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* p = fopen("test.txt", "w");
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	fputs("sscbcsd", p);
//	fseek(p, 2, SEEK_SET);
//	fputs("哈哈", p);
//	fclose(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* p = fopen("test.txt", "wb");
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	fseek(p, 2, SEEK_SET);
//	rewind(p);
//	printf("%ld\n", ftell(p));
//	if (feof(p))
//		printf("文件没有读取完\n");
//	else if (ferror(p))
//		printf("文件读取错误\n");
//	fclose(p);
//	p = NULL;
//	return 0;
//}
struct s
{
	int age;
	char name[30];
};
int main()
{
	struct s a={20,"zhangsan"};
	char arr[100] = { 0 };
	sprintf(arr, "%d %s", a.age, a.name);
	return 0;
}