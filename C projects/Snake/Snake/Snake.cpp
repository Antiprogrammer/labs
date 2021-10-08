#include <stdio.h>
#include <windows.h>
#include <stdbool.h>
#include <conio.h>
#include <string.h>
#include "record_zap.h"
#include "text_print.h"
#include "lvl1.h"
#pragma comment(lib, "winmm.lib")

BOOL ShowConsoleCursor(BOOL bShow)
{
    CONSOLE_CURSOR_INFO cci;
    HANDLE hStdOut;
    hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hStdOut == INVALID_HANDLE_VALUE)
        return 0;
    if (!GetConsoleCursorInfo(hStdOut, &cci))
        return 0;
    cci.bVisible = bShow;
    if (!SetConsoleCursorInfo(hStdOut, &cci))
        return 0;
    return 1;
}
int main() {
    ShowConsoleCursor(0);
    while (1) {
        migat();
        while (_kbhit() != 0) {
            ShowConsoleCursor(1);
            namer();
            ShowConsoleCursor(0);
            lvl1();
        }
    }
}