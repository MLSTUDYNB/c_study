#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
int h, l;
void csh(char arr[HANG][LIE])
{
	for (h = 0; h < HANG; h++)
	{
		for (l = 0; l < LIE; l++)
		{
			arr[h][l] = ' ';
		}
	}
}
void print(char arr[HANG][LIE])
{
	for (h = 0; h < HANG; h++)
	{
		for (l = 0; l < LIE; l++)
		{
			printf(" %c ", arr[h][l]);
			if (l < LIE - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (h < HANG - 1)
		{
			for (l = 0; l < LIE; l++)
			{
				printf("---");
				if (l < LIE - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
void playwj(char arr[HANG][LIE])
{
	printf("��������壬�����̵�����\n");
	while (1)
	{
		scanf("%d%d", &h, &l);
		if (h > 0 && h <= HANG && l > 0 && l <= LIE)
		{
			if (arr[h-1][l-1]==' ')
			{
				arr[h-1][l-1] = '*';
				break;
			}
			else
			{
				printf("��λ���ѱ�����\n");
			}
		}
		else
		{
			printf("��������ȷ���������\n");
		}
	}
}
void playai(char arr[HANG][LIE])
{
	printf("��������#��������\n");
	while (1)
	{
		h = rand() % HANG;
		l = rand() % LIE;
		if (arr[h][l] == ' ')
		{
			arr[h][l] = '#';
			break;
		}
	}
}
/* * ���Ӯ
# ����Ӯ
q ƽ��
c ��Ϸ����*/
char is_win(char arr[HANG][LIE])
{
	for (h = 0; h < HANG; h++)
	{
		if (arr[h][0] == arr[h][1] && arr[h][1] == arr[h][2] && arr[h][0] != ' ')
			return arr[h][0];
	}
	for (l = 0; l < LIE; l++)
	{
		if (arr[0][l] == arr[1][l] && arr[1][l] == arr[2][l]&&arr[0][l]!=' ')
			return arr[0][l];
	}
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]&&arr[0][0]!=' ')
		return arr[0][0];
	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]&&arr[0][2]!=' ')
		return arr[0][2];
	return is_full(arr);
}
char is_full(char arr[HANG][LIE])
{
	for (h = 0; h < HANG; h++)
	{
		for (l = 0; l < LIE; l++)
		{
			if (arr[h][l] == ' ')
				return 'c';
		}
	}
	return 'q';
}