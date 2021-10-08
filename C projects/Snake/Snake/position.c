#include <stdio.h>
#include <windows.h>
#include "position.h"
#include "Playground.h"

char symbol, a[10000][10000];
int size, x, y, coordinates_x[10000], coordinates_y[10000], interval, t, p, height, length;
void direction() {
    int getch(void);
    symbol = getch();
    switch (symbol) {
    case 'w': if (x != 1 || y != 0) {
        x = -1; y = 0;
    }
            break;
    case 'a': if (x != 0 || y != 1) {
        x = 0; y = -1;
    }
            break;
    case 's': if (x != -1 || y != 0) {
        x = 1; y = 0;
    }
            break;
    case 'd': if (x != 0 || y != -1) {
        x = 0; y = 1;
    }
            break;
    }
}
void son() {
    if (x == 1 || x == -1) {
        interval = 205;
    }
    else {
        interval = 130;
    }
}
void clear_game() {
    COORD position;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    for (int i = 1; i <= size; ++i) {
        a[coordinates_x[i]][coordinates_y[i]] = ' ';
        position.X = coordinates_y[i];
        position.Y = coordinates_x[i];
        SetConsoleCursorPosition(hConsole, position);
        printf("%c", a[coordinates_x[i]][coordinates_y[i]]);
    }
}
void start() {
    system("cls");
    COORD position;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    position.X = 0;
    position.Y = 2;
    SetConsoleCursorPosition(hConsole, position);
    p = 0;
    t = 0;
    size = 2;
    coordinates_x[1] = 3;
    coordinates_y[1] = 2;
    coordinates_x[2] = 3;
    coordinates_y[2] = 1;
    x = 0;
    y = 1;
}void snake() {
    COORD position;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if (x == 1 && y == 0) {
        a[coordinates_x[1]][coordinates_y[1]] = 'v';
        position.X = coordinates_y[1];
        position.Y = coordinates_x[1];
        SetConsoleCursorPosition(hConsole, position);
        printf("%c", a[coordinates_x[1]][coordinates_y[1]]);
    }
    if (x == -1 && y == 0) {
        a[coordinates_x[1]][coordinates_y[1]] = '^';
        position.X = coordinates_y[1];
        position.Y = coordinates_x[1];
        SetConsoleCursorPosition(hConsole, position);
        printf("%c", a[coordinates_x[1]][coordinates_y[1]]);
    }
    if (x == 0 && y == 1) {
        a[coordinates_x[1]][coordinates_y[1]] = '>';
        position.X = coordinates_y[1];
        position.Y = coordinates_x[1];
        SetConsoleCursorPosition(hConsole, position);
        printf("%c", a[coordinates_x[1]][coordinates_y[1]]);
    }
    if (x == 0 && y == -1) {
        a[coordinates_x[1]][coordinates_y[1]] = '<';
        position.X = coordinates_y[1];
        position.Y = coordinates_x[1];
        SetConsoleCursorPosition(hConsole, position);
        printf("%c", a[coordinates_x[1]][coordinates_y[1]]);
    }
    for (int i = 2; i <= size; ++i) {
        a[coordinates_x[i]][coordinates_y[i]] = 'O';
        position.X = coordinates_y[i];
        position.Y = coordinates_x[i];
        SetConsoleCursorPosition(hConsole, position);
        printf("%c", a[coordinates_x[i]][coordinates_y[i]]);
    }
}
void check() {
    if (coordinates_x[1] > height + 2) coordinates_x[1] = 3;
    if (coordinates_x[1] < 3) coordinates_x[1] = height + 2;
    if (coordinates_y[1] > length - 2) coordinates_y[1] = 1;
    if (coordinates_y[1] < 1) coordinates_y[1] = length - 2;
}
void reset() {
    system("cls");
    system("color 02");
    COORD position;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    position.X = 0;
    position.Y = 2;
    SetConsoleCursorPosition(hConsole, position);
    for (int i = size; i > 0; i--) {
        coordinates_x[i] = 3;
        coordinates_y[i] = length - 1 - i;
    }
    x = 1;
    y = 0;
}