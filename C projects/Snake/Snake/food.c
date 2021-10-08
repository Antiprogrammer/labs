#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <stdbool.h>
#include "food.h"
#include "position.h"

int food_x = -1, food_y = -1, height, length, c, k;
char a[10000][100000];
bool food_check() {
    if (food_x == -1 && food_y == -1) return false;
    return true;
}
void food() {
    srand((unsigned int)time(NULL));
    for (int i = 1; i <= 9; ++i) {
        c = rand();
        k = rand();
        if (c < 0) c *= -1;
        if (k < 0) k *= -1;
        c %= (height + 3);
        k %= (length - 2);
        while (c <= 3) ++c;
        if (k == 0) ++k;
        if (a[c][k] != 'O' && a[c][k] != 'v' && a[c][k] != '^' &&
            a[c][k] != '<' && a[c][k] != '>') {
            food_x = c;
            food_y = k;
            a[c][k] = '@';
            COORD position;
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            position.X = k;
            position.Y = c;
            SetConsoleCursorPosition(hConsole, position);
            printf("%c", a[c][k]);
            return;
        }
    }
}