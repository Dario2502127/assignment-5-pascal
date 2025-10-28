#pragma once
enum COLOR {
	BLACK = 30, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE
};
void setBGcolor(int c);
void clearScreen(void);
void gotoXY(int x, int y);
void setFGcolor(int c);
