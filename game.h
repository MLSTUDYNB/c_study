#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HANG 3
#define LIE 3

void csh(char arr[HANG][LIE]);
void print(char arr[HANG][LIE]);
void playwj(char arr[HANG][LIE]);
void playai(char arr[HANG][LIE]);

char is_win(char arr[HANG][LIE]);
char is_full(char arr[HANG][LIE]);