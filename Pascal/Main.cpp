#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "Header.h"
#include "Screen.h"

int main(void) {
	int row;
	scanf("%d", &row);
	setBGcolor(WHITE);
	clearScreen();
	srand(time(NULL));
	for (int i = 0; i < row; i++) {
		gotoXY(40 +(row -i) * 2, 10 + i);
		for (int j = 0; j <= i; j++) {
			setFGcolor(31 + rand() % 7);
			printf("%4d", n_choose_k(i, j));
		}
		printf("\n");
	}
}
