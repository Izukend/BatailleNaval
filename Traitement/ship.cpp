//
// Created by izukend on 10/01/2023.
//
#include <iostream>
#include <random>
#include <cfloat>
#include <cmath>

#include "../main.h"

using namespace std;

void spawn(Ship *ship) {
    random_device rd;
    mt19937 mt(rd());
    uniform_real_distribution<double> dist(0, nextafter(10, DBL_MAX));

    int i = 0;
    int x = static_cast<int>(dist(mt)), y = static_cast<int>(dist(mt));
    bool row = true;
    while (i < ship->length) {
        if (row) {
            if (board[x + i][y] == '1') {
                x = static_cast<int>(dist(mt));
                y = static_cast<int>(dist(mt));
                i = 0;
                row = false;
            }
        } else {
            if (board[x][y + i] == '1') {
                i = 0;
                row = true;
            }
        }
        i++;
    }
    for (int j = 0; j < ship->length; ++j)
        board[ship->x + (row ? j : 0)][ship->y + (row ? 0 : j)] = '1';

    //Ship cruiser{"Porte-Avions", static_cast<int>(dist(mt)), static_cast<int>(dist(mt)), 3};

    //while (i < 5) {
    /*if (board[cruiser.x][cruiser.y] != board[cruiser.x][9]) {
        for (int j = 0; j < 5; ++j) {
            board[cruiser.x + j][cruiser.y] = '1';
        }
    } else {
        for (int j = 0; j < 5; ++j) {
            board[cruiser.x][cruiser.y + j] = '1';
        }
    }
    //}*/
}

