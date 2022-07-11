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

//初始化
void init(char board[ROWS][COLS], int rows, int cols, char x);
//打印
void print(char board[ROWS][COLS], int row, int col);
//布置雷
void put(char board[ROWS][COLS], int row, int col);
//扫雷
int sweep_mine(char board[ROWS][COLS], char show[ROWS][COLS], int row, int col);