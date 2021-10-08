#include "text_print.h"
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include "texts.h"
#include "record_zap.h"

void congrats() {
    system("cls");
    int i = 0;
    while (i < 5) {
        system("cls");
        system("color 04");
        heart_0();
        Sleep(10);
        system("cls");
        heart_1();
        Sleep(10);
        system("cls");
        heart_2();
        Sleep(10);
        system("cls");
        heart_3();
        Sleep(10);
        system("cls");
        heart_last();
        Sleep(10);
        i++;
    }
    COORD position;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    system("cls");
    Sleep(100);
    system("color 80");
    heart_last();
    Sleep(100);
    system("color 70");
    heart_last();
    Sleep(100);
    system("color F0");
    heart_last();
    Sleep(20);
    SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 0));
    heart_last();
    Sleep(100);
    heart_inside();
    Sleep(150);
    int yut;
    yut = 0;
    while (yut < 10) {
        SetConsoleTextAttribute(hConsole, (WORD)((4 << 4) | 4));
        iloveyou();
        Sleep(100);
        SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 15));
        iloveyou();
        Sleep(100);
        yut++;
    }
    SetConsoleTextAttribute(hConsole, (WORD)((4 << 4) | 4));
    iloveyou();
    wchar_t nyTb[] = L"1.wav";
    PlaySound(nyTb, NULL, SND_FILENAME);
    while (_kbhit() == 0) {
        Sleep(10);
    }
    position.X =0;
    position.Y =50;
    SetConsoleCursorPosition(hConsole, position);
        _exit(0);
}
void game_over() {
    int i = 0;
    while (i < 11) {
        system("color 01");
        text_game_over();
        Sleep(10);
        system("color 02");
        text_game_over();
        Sleep(10);
        system("color 03");
        text_game_over();
        Sleep(10);
        system("color 04");
        text_game_over();
        Sleep(10);
        system("color 05");
        text_game_over();
        Sleep(10);
        system("color 06");
        text_game_over();
        Sleep(10);
        system("color 07");
        text_game_over();
        Sleep(10);
        system("color 08");
        text_game_over();
        Sleep(10);
        i++;
    }
    record();
    Sleep(1000000);
#ifdef WINDOWS
    system("pause");
#endif
    _exit(0);
}
void you_died() {
    Sleep(250);
    system("color 0C");
    you_died_text();
    Sleep(250);
    system("color 04");
    you_died_text();
    Sleep(500);
}
void migat() {
    int s = 65;
    system("color F8");
    hello();
    Sleep(s);
    system("color F7");
    hello();
    Sleep(s);
    system("cls");
    Sleep(s);
    system("color F7");
    hello();
    Sleep(s);
    system("color F8");
    hello();
    Sleep(s);
    system("color F0");
    hello();
    Sleep(s);
}
