#if defined(_WIN32) || defined(__WIN32__) || defined(WIN32)
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#endif

#include <stdio.h>
#include <windows.h>
#include "record_zap.h"
#include "texts.h"

char name[60];
int die = 0, ste = 0, u, t;
void namer() {
    system("cls");
    printf("Enter your name (upto 50 character)\n\n");
    fgets(name, 50, stdin);
}
void record() {
    COORD position;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    FILE* file, * di, * st, * ti, * sc;
    char arr[60];
    int i = 0;
    if ((file = fopen("names.txt", "a")) == NULL) {
        printf("Не удалось открыть файл");
    }
    int abd = 49;
    while (abd >= 0) {
        if (name[i + abd]) {
            while (name[i])
                i++;
        }
        abd--;
    }
    int cir = i;
    while (i > 0) {
        fprintf(file, "%c", name[cir - i]);
        i--;
    }
    fclose(file);
    if ((di = fopen("dies.txt", "a")) == NULL) {
        printf("Не удалось открыть файл");
    }
    fprintf(di, "%d\n", die);
    fclose(di);
    if ((st = fopen("steps.txt", "a")) == NULL) {
        printf("Не удалось открыть файл");
    }
    fprintf(st, "%d\n", ste);
    fclose(st);
    if ((sc = fopen("schet.txt", "a")) == NULL) {
        printf("Не удалось открыть файл");
    }
    fprintf(sc, "%d\n", u);
    fclose(sc);
    if ((ti = fopen("time.txt", "a")) == NULL) {
        printf("Не удалось открыть файл");
    }
    fprintf(ti, "%d\n", t);
    fclose(ti);
    record_text();
    position.X = 1;
    position.Y = 20;
    SetConsoleCursorPosition(hConsole, position);
    printf("Name\n");
    file = fopen("names.txt", "r");
    while (fgets(arr, 51, file) != NULL) {
        position.Y++;
        SetConsoleCursorPosition(hConsole, position);
        printf("%s\n", arr);
    }
    fclose(file);
    position.Y = 20;
    position.X += 20;
    SetConsoleCursorPosition(hConsole, position);
    printf("Steps\n");
    st = fopen("steps.txt", "r");
    SetConsoleCursorPosition(hConsole, position);
    while (fgets(arr, 51, st) != NULL) {
        position.Y++;
        SetConsoleCursorPosition(hConsole, position);
        printf("%s", arr);
    }
    fclose(st);
    position.Y = 20;
    position.X += 20;
    SetConsoleCursorPosition(hConsole, position);
    printf("Steps\n");
    sc = fopen("schet.txt", "r");
    SetConsoleCursorPosition(hConsole, position);
    while (fgets(arr, 51, sc) != NULL) {
        position.Y++;
        SetConsoleCursorPosition(hConsole, position);
        printf("%s", arr);
    }
    fclose(sc);
    position.Y = 20;
    position.X += 20;
    SetConsoleCursorPosition(hConsole, position);
    printf("Seconds\n");
    ti = fopen("time.txt", "r");
    SetConsoleCursorPosition(hConsole, position);
    while (fgets(arr, 51, ti) != NULL) {
        position.Y++;
        SetConsoleCursorPosition(hConsole, position);
        printf("%s", arr);
    }
    fclose(ti);
    position.Y = 20;
    position.X += 20;
    SetConsoleCursorPosition(hConsole, position);
    printf("Dies\n");
    di = fopen("dies.txt", "r");
    SetConsoleCursorPosition(hConsole, position);
    while (fgets(arr, 51, di) != NULL) {
        position.Y++;
        SetConsoleCursorPosition(hConsole, position);
        printf("%s", arr);
    }
    fclose(di);
    Sleep(10000000);
}