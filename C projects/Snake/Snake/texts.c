#include <stdio.h>
#include <windows.h>
#include "texts.h"

void record_text() {
    COORD position;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    position.X = 7;
    position.Y = 3;
    SetConsoleCursorPosition(hConsole, position);
    system("color 0F");
    printf(" ##########   ##########   ######     ########    ##########   #######      #######");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ##       ##  ##          ##    ##   ##      ##   ##       ##   ##   ##    ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ##        ## ##         ##      ## ##        ##  ##        ##  ##    ##  ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ##       ##  ##         ##         ##        ##  ##       ##   ##     ##  ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ##########   ########## ##         ##        ##  ##########    ##     ##   ####");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ##       ##  ##         ##         ##        ##  ##       ##   ##     ##     ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ##       ##  ##         ##      ## ##        ##  ##       ##   ##     ##      ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ##       ##  ##          ##    ##   ##      ##   ##       ##   ##   ###       ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("####     #### ##########   ######     ########   ####     #### #######    #######");
}
void hello() {
    COORD position;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    position.X = 22;
    position.Y = 3;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ##########    ##########   ##########   #######    #######");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ##       ##   ##       ##  ##          ###        ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ##        ##  ##        ## ##         ###        ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ##       ##   ##       ##  ##          ###        ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ##########    ##########   ##########    ####       ####");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ##            ##       ##  ##               ###        ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ##            ##       ##  ##                ###        ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ##            ##       ##  ##               ###        ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("####          ####     #### ##########  #######    #######");
    position.X = 7;
    position.Y += 3;
    SetConsoleCursorPosition(hConsole, position);
    printf("        ######  ####      #### ####      ####     ####  #### ########## ####      ####");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("       ###  ##   ####      ##    ##      ##        ##   ##   ##           ##      ##");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("      ###   ##   ## ##     ##     ##    ##         ##  ##    ##            ##    ##");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("     ###    ##   ##  ##    ##      ##  ##          ## ##     ##             ##  ##");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("    ###     ##   ##   ##   ##       ####           ###       ##########      ####");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("   ###########   ##    ##  ##        ##            ## ##     ##               ##");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("  ###       ##   ##     ## ##        ##            ##  ##    ##               ##");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ###        ##   ##      ####        ##            ##   ##   ##               ##");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("####       #### ####      ####      ####          ####  #### ##########      ####");
}
void you_died_text() {
    COORD position;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    position.X = 7;
    position.Y = 3;
    SetConsoleCursorPosition(hConsole, position);
    printf("####      ####   ########   ####      ####    #######    ######## ########## #######");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("  ##      ##    ##      ##   ##        ##      ##   ##      ##    ##          ##   ##");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("   ##    ##    ##        ##  ##        ##      ##    ##     ##    ##          ##    ##");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("    ##  ##     ##        ##  ##        ##      ##     ##    ##    ##          ##     ##");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("     ####      ##        ##  ##        ##      ##     ##    ##    ##########  ##     ##");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("      ##       ##        ##  ##        ##      ##     ##    ##    ##          ##     ##");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("      ##       ##        ##  ##        ##      ##     ##    ##    ##          ##     ##");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("      ##        ##      ##    ##      ##       ##   ###     ##    ##          ##   ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("     ####        ########      ########       #######    ######## ########## #######");
}
void text_game_over() {
    COORD position;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    position.X = 7;
    position.Y = 3;
    SetConsoleCursorPosition(hConsole, position);
    printf("  ########            ######   ####          ####  ##########");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ##      ##          ###  ##   ## ##        ## ##  ##        ");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##                  ###   ##   ##  ##      ##  ##  ##        ");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##                 ###    ##   ##   ##    ##   ##  ##        ");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##                ###     ##   ##    ##  ##    ##  ##########");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##       ####    ###########   ##      ##      ##  ##        ");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##        ##    ###       ##   ##              ##  ##        ");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ##      ##    ###        ##   ##              ##  ##        ");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("  ########    ####       #### ####            #### ##########");
    position.X = 23;
    position.Y += 3;
    SetConsoleCursorPosition(hConsole, position);
    printf("  ########   ###               ### ##########  ##########");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ##      ##    ##             ##   ##          ##       ##");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##        ##    ##           ##    ##          ##        ##");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##        ##     ##         ##     ##          ##       ##");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##        ##      ##       ##      ##########  ##########");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##        ##       ##     ##       ##          ##       ##");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##        ##        ##   ##        ##          ##       ##");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ##      ##          ## ##         ##          ##       ##");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("  ########            ###          ########## ####     ####");
}
void con_text() {
    COORD position;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    position.X = 7;
    position.Y = 3;
    SetConsoleCursorPosition(hConsole, position);
    printf("  ######     ########    ####       ####   ########     ##########           ######  ############ ###    #######");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ##    ##   ##      ##   ## ##       ##   ##      ##    ##       ##         ###  ##  ##   ##   ## ###   ###  ");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##      ## ##        ##  ##  ##      ##  ##             ##        ##       ###   ##       ##        #  ###  ");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##         ##        ##  ##   ##     ##  ##             ##       ##       ###    ##       ##       #    ###  ");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##         ##        ##  ##    ##    ##  ##             ##########       ###     ##       ##             ####");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##         ##        ##  ##     ##   ##  ##       ####  ##       ##     ###########       ##               ###  ");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##      ## ##        ##  ##      ##  ##  ##        ##   ##       ##    ###       ##       ##                ### ");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ##    ##   ##      ##   ##       ## ##   ##      ##    ##       ##   ###        ##       ##               ###  ");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("  ######     ########   ####       ####    ########    ####     #### ####       ####     ####         #######   ");
}
void heart_0() {
    COORD position;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    position.X = 100;
    position.Y = 16;
    SetConsoleCursorPosition(hConsole, position);
    printf(" # #");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("# # #");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" # #");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("  #");
}
void heart_1() {
    COORD position;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    position.X = 98;
    position.Y = 15;
    SetConsoleCursorPosition(hConsole, position);
    printf("  ##  ##");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ## ## ##");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("  ##  ##");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("    ##");
}
void heart_2() {
    COORD position;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    position.X = 95;
    position.Y = 14;
    SetConsoleCursorPosition(hConsole, position);
    printf("   ###   ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ###  ###  ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("###    #    ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("  ###     ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("    ### ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("      ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("       #");
}
void heart_3() {
    COORD position;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    position.X = 93;
    position.Y = 13;
    SetConsoleCursorPosition(hConsole, position);
    printf("    ####     ####");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("  ###  ### ###  ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf(" ###     ###     ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("###       #       ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("  ###           ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("    ###       ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("      ###   ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("        ## ##");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("         ###");
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("          #");
}
void heart_last() {
    COORD position;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    position.X = 85;
    position.Y = 7;
    SetConsoleCursorPosition(hConsole, position);
    printf("##########");
    position.X += 28;
    SetConsoleCursorPosition(hConsole, position);
    printf("##########");
    position.X = 81;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("####");
    position.X += 14;
    SetConsoleCursorPosition(hConsole, position);
    printf("####");
    position.X += 14;
    SetConsoleCursorPosition(hConsole, position);
    printf("####");
    position.X += 14;
    SetConsoleCursorPosition(hConsole, position);
    printf("####");
    position.X = 79;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 20;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 20;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 77;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 24;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 4;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 24;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 77;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 26;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 26;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 75;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##"); 
    position.X += 56;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 75;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 56;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 75;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 56;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 75;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 56;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 75;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 56;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 77;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 52;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 77;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 52;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 79;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 48;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 81;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 44;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 83;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 40;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 85;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 36;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 87;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 32;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 89;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 28;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 91;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 24;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 93;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 20;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 95;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 16;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 97;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 12;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 99;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 101;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 4;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 103;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
}
void heart_inside() {
    COORD position;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int stolbik, n, i;
    stolbik = 1;
    n = 0;
    while (stolbik <= 54) {
        if (stolbik <= 2 || stolbik > 52) {
            i = 0;
            position.X = 76 + stolbik;
            position.Y = 12;
            do {
                SetConsoleCursorPosition(hConsole, position);
                SetConsoleTextAttribute(hConsole, (WORD)((4 << 4) | 4));
                printf("#");
                position.Y++;
                i++;
                Sleep(50);
            } while (i < 5);
        }
        if (stolbik > 50 && stolbik <= 52 || stolbik <= 4 && stolbik > 2) {
            i = 0;
            position.X = 76 + stolbik;
            position.Y = 10;
            do {
                SetConsoleCursorPosition(hConsole, position);
                SetConsoleTextAttribute(hConsole, (WORD)((4 << 4) | 4));
                printf("#");
                position.Y++;
                i++;
                Sleep(50);
            } while (i < 9);
        }
        if (stolbik > 48 && stolbik <= 50 || stolbik <= 6 && stolbik > 4) {
            i = 0;
            position.X = 76 + stolbik;
            position.Y = 9;
            do {
                if (i != 4 && i != 5 && i != 7 || stolbik > 30) {
                    SetConsoleCursorPosition(hConsole, position);
                    SetConsoleTextAttribute(hConsole, (WORD)((4 << 4) | 4));
                    printf("#");
                }
                position.Y++;
                i++;
                Sleep(50);
            } while (i < 11);
        }
        if (stolbik > 46 && stolbik <= 48 || stolbik <= 8 && stolbik > 6) {
            i = 0;
            position.X = 76 + stolbik;
            position.Y = 9;
            do {
                if (i != 4 && i != 3 || stolbik > 30) {
                    SetConsoleCursorPosition(hConsole, position);
                    SetConsoleTextAttribute(hConsole, (WORD)((4 << 4) | 4));
                    printf("#");
                }
                position.Y++;
                i++;
                Sleep(50);
            } while (i < 12);
        }
        if (stolbik <= 18 && stolbik > 8) {
            i = 0;
            position.X = 76 + stolbik;
            position.Y = 8;
            do {
                if (stolbik < 11) {
                    if (i != 4 && i != 3) {
                        SetConsoleCursorPosition(hConsole, position);
                        SetConsoleTextAttribute(hConsole, (WORD)((4 << 4) | 4));
                        printf("#");
                    }
                }
                else {
                    if (stolbik < 13) {
                        if (i != 3) {
                            SetConsoleCursorPosition(hConsole, position);
                            SetConsoleTextAttribute(hConsole, (WORD)((4 << 4) | 4));
                            printf("#");
                        }
                    }
                else {
                    SetConsoleCursorPosition(hConsole, position);
                    SetConsoleTextAttribute(hConsole, (WORD)((4 << 4) | 4));
                    printf("#");
                }
                }
                position.Y++;
                i++;
                Sleep(50);
            } while (i < (stolbik+1)/2 + 9);
        }
        if (stolbik <= 22 && stolbik > 18) {
            i = 0;
            position.X = 76 + stolbik;
            position.Y = 9;
            do {
                SetConsoleCursorPosition(hConsole, position);
                SetConsoleTextAttribute(hConsole, (WORD)((4 << 4) | 4));
                printf("#");
                position.Y++;
                i++;
                Sleep(50);
            } while (i < (stolbik + 1) / 2 + 8);
        }
        if (stolbik <= 28 && stolbik > 22) {
            i = 0;
            position.X = 76 + stolbik;
            position.Y = (stolbik + 1) / 2 -2;
                if (stolbik > 24)
                    i++;
                if (stolbik > 26)
                    i++;
            do {
                SetConsoleCursorPosition(hConsole, position);
                SetConsoleTextAttribute(hConsole, (WORD)((4 << 4) | 4));
                printf("#");
                position.Y++;
                i++;
                Sleep(50);
            } while (i < (stolbik + 1) / 2 + 7);
        }
        if (stolbik <= 30 && stolbik > 28) {
            i = 0;
            position.X = 76 + stolbik;
            position.Y = 11;
            do {
                SetConsoleCursorPosition(hConsole, position);
                SetConsoleTextAttribute(hConsole, (WORD)((4 << 4) | 4));
                printf("#");
                position.Y++;
                i++;
                Sleep(50);
            } while (i < 19);
        }
        if (stolbik <= 32 && stolbik > 30) {
            i = 0;
            position.X = 76 + stolbik;
            position.Y = 10;
            do {
                SetConsoleCursorPosition(hConsole, position);
                SetConsoleTextAttribute(hConsole, (WORD)((4 << 4) | 4));
                printf("#");
                position.Y++;
                i++;
                Sleep(50);
            } while (i < 19);
        }
        if (stolbik <= 34 && stolbik > 32) {
            i = 0;
            position.X = 76 + stolbik;
            position.Y = 9;
            do {
                SetConsoleCursorPosition(hConsole, position);
                SetConsoleTextAttribute(hConsole, (WORD)((4 << 4) | 4));
                printf("#");
                position.Y++;
                i++;
                Sleep(50);
            } while (i < 19);
        }
        if (stolbik <= 36 && stolbik > 34) {
            i = 0;
            position.X = 76 + stolbik;
            position.Y = 9;
            do {
                SetConsoleCursorPosition(hConsole, position);
                SetConsoleTextAttribute(hConsole, (WORD)((4 << 4) | 4));
                printf("#");
                position.Y++;
                i++;
                Sleep(50);
            } while (i < 18);
        }
        if (stolbik > 37 && (stolbik-1) % 2 == 0)
            n++;
        if (stolbik <= 46 && stolbik > 36) {
            i = 0;
            position.X = 76 + stolbik;
            position.Y = 8;
            do {
                SetConsoleCursorPosition(hConsole, position);
                SetConsoleTextAttribute(hConsole, (WORD)((4 << 4) | 4));
                printf("#");
                position.Y++;
                i++;
                Sleep(50);
            } while (i < 18 -1*n);
        }
            stolbik++;
    }
}
void iloveyou() {
    COORD position;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    position.X = 56;
    position.Y = 38;
    SetConsoleCursorPosition(hConsole, position);
    printf("######");
    position.X += 10;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 11;
    SetConsoleCursorPosition(hConsole, position);
    printf("######");
    position.X += 9;
    SetConsoleCursorPosition(hConsole, position);
    printf("###");
    position.X += 16;
    SetConsoleCursorPosition(hConsole, position);
    printf("###");
    position.X += 4;
    SetConsoleCursorPosition(hConsole, position);
    printf("########");
    position.X += 12;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 7;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 5;
    SetConsoleCursorPosition(hConsole, position);
    printf("######");
    position.X += 9;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 58;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 9;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 4;
    SetConsoleCursorPosition(hConsole, position);
    printf("###");
    position.X += 14;
    SetConsoleCursorPosition(hConsole, position);
    printf("###");
    position.X += 5;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 13;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 5;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 4;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 3;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 58;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 9;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 5;
    SetConsoleCursorPosition(hConsole, position);
    printf("###");
    position.X += 12;
    SetConsoleCursorPosition(hConsole, position);
    printf("###");
    position.X += 6;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 14;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 3;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 5;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 3;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 58;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 9;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 6;
    SetConsoleCursorPosition(hConsole, position);
    printf("###");
    position.X += 10;
    SetConsoleCursorPosition(hConsole, position);
    printf("###");
    position.X += 7;
    SetConsoleCursorPosition(hConsole, position);
    printf("########");
    position.X += 15;
    SetConsoleCursorPosition(hConsole, position);
    printf("###");
    position.X += 7;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 3;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 58;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 9;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 7;
    SetConsoleCursorPosition(hConsole, position);
    printf("###");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("###");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 16;
    SetConsoleCursorPosition(hConsole, position);
    printf("#");
    position.X += 6;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 3;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 58;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 9;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("###");
    position.X += 6;
    SetConsoleCursorPosition(hConsole, position);
    printf("###");
    position.X += 9;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 16;
    SetConsoleCursorPosition(hConsole, position);
    printf("#");
    position.X += 6;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 3;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 58;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 9;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 9;
    SetConsoleCursorPosition(hConsole, position);
    printf("###");
    position.X += 4;
    SetConsoleCursorPosition(hConsole, position);
    printf("###");
    position.X += 10;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 16;
    SetConsoleCursorPosition(hConsole, position);
    printf("#");
    position.X += 6;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 8;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 4;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X += 6;
    SetConsoleCursorPosition(hConsole, position);
    printf("##");
    position.X = 56;
    position.Y++;
    SetConsoleCursorPosition(hConsole, position);
    printf("######");
    position.X += 10;
    SetConsoleCursorPosition(hConsole, position);
    printf("########");
    position.X += 11;
    SetConsoleCursorPosition(hConsole, position);
    printf("######");
    position.X += 16;
    SetConsoleCursorPosition(hConsole, position);
    printf("#####");
    position.X += 13;
    SetConsoleCursorPosition(hConsole, position);
    printf("########");
    position.X += 15;
    SetConsoleCursorPosition(hConsole, position);
    printf("###");
    position.X += 9;
    SetConsoleCursorPosition(hConsole, position);
    printf("######");
    position.X += 11;
    SetConsoleCursorPosition(hConsole, position);
    printf("######");
}