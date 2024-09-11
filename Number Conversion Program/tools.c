#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y){
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void drawSBox(int x1, int y1, int x2, int y2){
    int i, j;
    for (i = x1 + 1; i <= x2 - 1; ++i) {
        gotoxy(i, y1);
        putchar(196);
        gotoxy(i, y2);
        putchar(196);
    }
    for (j = y1 + 1; j <= y2 - 1; ++j) {
        gotoxy(x1, j);
        putchar(179);
        gotoxy(x2, j);
        putchar(179);
    }
    gotoxy(x1, y1);
    putchar(218);
    gotoxy(x2, y1);
    putchar(191);
    gotoxy(x1, y2);
    putchar(192);
    gotoxy(x2, y2);
    putchar(217);
}

void center(int y, const char *text){
    size_t len = strlen(text);
    gotoxy(40 - (len >> 1), y);
    printf("%s", text);
}

void menu(){
    drawSBox(19, 1, 66, 20);
    center(3, "    NUMBER CONVERSION");
    center(5, "1. DEC TO BIN");
    center(6, "      [a] DEC TO BIN");
    center(7, "      [b] BIN TO DEC");
    
    center(9, "2. DEC TO OCT");
    center(10, "      [a] DEC TO OCT");
    center(11, "      [b] OCT TO DEC");
    
    center(13, "3. DEC TO HEX");
    center(14, "      [a] DEC TO HEX");
    center(15, "      [b] HEX TO DEC");
    
    center(17, "4. EXIT      ");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
}

void binMenu(){
	drawSBox(21, 5, 64, 14);
	gotoxy(28,7);
	printf("DECIMAL AND BINARY CONVERSION");
	center(10, "      [a] DEC TO BIN");
    center(11, "      [b] BIN TO DEC");
    		
    drawSBox(21, 15, 64, 19);
    gotoxy(24,17);
	printf("Please choose between 'a' and 'b': ");
}

void octMenu(){
	drawSBox(21, 5, 64, 14);
	gotoxy(29,7);
	printf("DECIMAL AND OCTAL CONVERSION");
	center(10, "      [a] DEC TO OCT");
    center(11, "      [b] OCT TO DEC");
    		
    drawSBox(21, 15, 64, 19);
    gotoxy(24,17);
	printf("Please choose between 'a' and 'b': ");
}

void hexMenu(){
	drawSBox(21, 5, 64, 14);
	gotoxy(26,7);
	printf("DECIMAL AND HEXADECIMAL CONVERSION");
	center(10, "      [a] DEC TO HEX");
    center(11, "      [b] HEX TO DEC");
    		
    drawSBox(21, 15, 64, 19);
    gotoxy(24,17);
	printf("Please choose between 'a' and 'b': ");
}
