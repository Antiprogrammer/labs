#include <stdio.h>
#include "Playground.h"

    const int height = 10, length = 25;
void playground()
{
    int i, j;
    for (i = 0; i < length; i++)
        putchar('*');
    putchar('\n');
    for (i = 0; i < height; i++) {
        putchar('*');
        for (j = 0; j < length - 2; j++)
            putchar(' ');
        putchar('*');
        putchar('\n');
    }
    for (i = 0; i < length; i++)
        putchar('*');
    putchar('\n');
}