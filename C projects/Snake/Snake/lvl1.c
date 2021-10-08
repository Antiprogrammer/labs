#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include "Playground.h"
#include "texts.h"
#include "position.h"
#include "text_print.h"
#include "food.h"
#include "step.h"
#include "shkala.h"
#include "lvl1.h"


int size, x, y, coordinates_x[10000], coordinates_y[10000], interval, b, u, h, c, k, t, p, food_x, food_y, die, ste;
char symbol, a[10000][10000], name[60];
const int height, length;
void lvl1() {
    h = 3;
    u = 0;
    b = 10;
    system("color 02");
    start();
    playground();
    while (u < b) {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 2));
        if (_kbhit() != 0)
            direction();
        step();
        ste++;
        p += interval;
        if (!food_check()) {
            food();
            u++;
        }
        son();
        Sleep(interval);
        scores();
        health();
        timer();
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 3));
        printf("  Good luck, %s", name);
    }
    congrats();
}