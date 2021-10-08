#include <stdio.h>
#include <windows.h>
#include <stdbool.h>
#include "position.h"
#include "text_print.h"
#include "step.h"
#include "food.h"
#include "Playground.h"

int size, x, y, coordinates_x[10000], coordinates_y[10000], h, die, food_x, food_y;
bool game_over_check() {
    for (int i = 2; i <= size; ++i)
        if (coordinates_x[1] == coordinates_x[i] &&
            coordinates_y[1] == coordinates_y[i])
            return true;
    return false;
}
void step() {
    clear_game();
    for (int i = size; i >= 2; i--) {
        coordinates_x[i] = coordinates_x[i - 1];
        coordinates_y[i] = coordinates_y[i - 1];
    }
    coordinates_x[1] += x;
    coordinates_y[1] += y;
    check();
    if (coordinates_x[1] == food_x && coordinates_y[1] == food_y) {
        size++;
        food_x = -1;
        food_y = -1;
    }
    snake();
    if (game_over_check()) {
        h--;
        die++;
        if (h != 0) {
            system("cls");
            you_died();
            reset();
            playground();
            food();
        }
    }
    if (h == 0) {
        system("cls");
        game_over();
    }
}