//
// Created by izukend on 10/01/2023.
//

#pragma once

using namespace std;

struct Ship {
    string name;
    int row;
    int colum;
    int length;
};

/**
 * @brief Matrice contenant le plateau
 */
extern char plateau[10][10];

/**
 * @brief Création de la grille de base du jeu composée de ~ pour l'eau
 */
extern void initialisation();

/**
 * @brief Affichage
 */
extern void show();

/**
 * @brief Initialisation du plateau_1
 */
extern void plateaux_1();
/**
 * @brief Initialisation du plateau_2
 */
extern void plateaux_2();