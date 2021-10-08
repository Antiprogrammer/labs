#include <stdio.h>
#include <windows.h>
#include "shkala.h"

int u, b, h, t, p;
void scores() {
    COORD position;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    position.X = 0;
    position.Y = 0;
    SetConsoleCursorPosition(hConsole, position);
    SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 6));
    printf("Scores: %d/%d", u, b);
}
void health() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
    printf("  Health: %d", h);
}
void timer() {
    if (p > 900) {
        t++;
        p = 0;
    }
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 5));
    if (t < 10)
        printf("  Time: 00:0%d", t);
    if (t > 9 && t < 60)
        printf("  Time: 00:%d", t);
    if (t > 59 && t < 600) {
        int i, y;
        i = t / 60;
        y = t % 60;
        if (y < 10)
            printf("  Time: 0%d:0%d", i, y);
        else
            printf("  Time: 0%d:%d", i, y);
    }
    if (t > 599) {
        int i, y;
        i = t / 60;
        y = t % 60;
        if (y < 10)
            printf("  Time: %d:0%d", i, y);
        else
            printf("  Time: %d:%d", i, y);
    }

}