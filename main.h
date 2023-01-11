//
// Created by izukend on 10/01/2023.
//

#pragma once

using namespace std;

struct Ship {
    string name;
    int x;
    int y;
    int length;
};

/**
 * @brief Matrice contenant le plateau
 */
extern char board[10][10];

/**
 * @brief Création de la grille de base du jeu composée de ~ pour l'eau
 */
extern void init();

/**
 * @brief Print
 */
extern void show();

/**
 * @brief To spawn a ship
 */
extern void spawn(Ship *ship);