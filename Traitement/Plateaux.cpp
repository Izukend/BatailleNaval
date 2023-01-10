//
// Created by izukend on 10/01/2023.
//
#include <iostream>

#define SIZE 10

char tab[10][10];
int i, j;

/**
 * @brief Création de la grille de base du jeux composé de ~ pour l'eaux
 */
void init() {
    for (i = 0; i < SIZE; ++i) {
        for (j = 0; j < SIZE; ++j)
            tab[i][j] = '~';
    }
}

/**
 * @brief Print
 */
void show() {
    printf(" ");
    for (i = 1; i < 11; i++)
        printf("%4d", i);

    printf("\n------------------------------------------\n");

    for (i = 0; i < 10; i++) {
        // affiche un caractère de A jusqu'à J
        printf("%c", 'A' + i);
        //affichage de la grille de jeux une fois la partie terminer
        for (j = 0; j < 10; j++)
            printf("%4c", tab[i][j]);
        printf("\n");
    }
    printf("------------------------------------------\n");
}
