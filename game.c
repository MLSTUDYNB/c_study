#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
int H, L;
void csh(char arr[HANG][LIE],char set)
{
	for (H = 0; H < HANG; H++)
	{
		for (L = 0; L < LIE; L++)
		{
			arr[H][L] = set;
		}
	}
}
void dayin(char board[HANG][LIE])
{
	for (L = 0; L <= lie; L++)
	{
		printf("%d ", L);
	}
	printf("\n");
	for (H = 1; H <= hang; H++)
	{
		printf("%d ", H );
		for (L = 1; L <= lie; L++)
		{
			printf("%c ", board[H][L]);
		}
		printf("\n");
	}
}
void buzhi(char houduan[HANG][LIE])
{
	int n=LEI_SHU;
	while (n>0)
	{
		H = rand() % hang + 1;
		L = rand() % lie + 1;
		if (houduan[H][L] == '0')
		{
			houduan[H][L] = '1';
			n--;
		}
	}
}
void saolei(char huoduan[HANG][LIE], char yonghu[HANG][LIE])
{
	int n = hang*lie-LEI_SHU;
	while (n>0)
	{	
		printf("����������->");
		scanf("%d%d", &H, &L);
		if (H >= 1 && H <= 9 && L >= 1 && L <= 9)
		{
			if (huoduan[H][L] == '1')
			{
				printf("�������㱻ը����\n");
				break;
			}
			else
			{
				PDZW(huoduan,yonghu, H, L);				//�ж���Χ��û����
				system("cls");
				dayin(yonghu);
				n--;
			}
		}
		else
		{
			printf("��������ȷ������->");
		}
	}
	if (n == 0)
	{
		printf("��ϲ�㣬ɨ�׳ɹ�\n");
	}
}
void PDZW(char huoduan[HANG][LIE], char yonghu[HANG][LIE], int H, int L)
{
	int h = H;
	int l = L;
	int a = 0;
	char sum = '0';
	//for (h = H - 1; h <= H + 1; h++)
	//{
	//	for (l = L - 1; l <= L + 1; l++)
	//	{
	//		if (huoduan[h][l] == '0')
	//		{
	//			a++;
	//		}
	//	}
	//}
	//if (a == 9)
	//{
	//	PDZW(huoduan, yonghu, h, l);
	//}
	for (h = H - 1; h <= H + 1; h++)
	{
		for (l = L - 1; l <= L + 1; l++)
		{
			if (huoduan[h][l] == '1')
			{
				//sum = sum + '1';
				sum++;
			}
		}
	}
	if (sum == '0')
		sum = ' ';
	yonghu[H][L] = sum;
}