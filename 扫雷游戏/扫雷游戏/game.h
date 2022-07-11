#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROWS 11
#define COLS 11
#define ROW 9
#define COL 9

#define MINE 10
#define NOLEI ROW*COL-MINE

//��ʼ��
void init(char board[ROWS][COLS], int rows, int cols, char x);
//��ӡ
void print(char board[ROWS][COLS], int row, int col);
//������
void put(char board[ROWS][COLS], int row, int col);
//ɨ��
int sweep_mine(char board[ROWS][COLS], char show[ROWS][COLS], int row, int col);