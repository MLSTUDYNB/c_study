#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define hang 9
#define lie 9
#define HANG hang+2
#define LIE lie+2
#define LEI_SHU 10

void csh(char arr[HANG][LIE], char set);
void dayin(char board[HANG][LIE]);
void buzhi(char houduan[HANG][LIE]);
void saolei(char huoduan[HANG][LIE], char yonghu[HANG][LIE]);
void PDZW(char huoduan[HANG][LIE], char yonghu[HANG][LIE], int H, int L);
