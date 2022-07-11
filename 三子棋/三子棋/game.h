#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define ROW 3
#define COLUMNS 3

void init(char board[ROW][COLUMNS]);
void print(char board[ROW][COLUMNS]);
void play(char board[ROW][COLUMNS]);
void AI(char board[ROW][COLUMNS]);
char judge(char board[ROW][COLUMNS]);