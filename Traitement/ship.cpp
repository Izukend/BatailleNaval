//
// Created by izukend on 10/01/2023.
//
#include <iostream>
#include "../main.h"

using namespace std;

void plateaux_1(){
    Ship croiseur{"Croiseur", 5, 4, 4};
    Ship porte_avions{"Porte-Avions", 2, 1, 5};
    Ship torpilleur{"Torpilleur", 5, 7, 2};
    Ship contre_torpilleur_1{"Contre_Torpilleur", 3, 6, 3};
    Ship  contre_torpilleur_2{"Torpilleur", 7, 1, 3};

    /**
     * @brief Initialisation des bateaux sur la grille
     */
     //Initialisation du croiseur
    for (int i = 0; i< 4; i++){
        plateau[croiseur.x + i][croiseur.y] ='1';
    }
    //Initialisation du porte_avions
    for (int i = 0; i < 5 ; ++i) {
        plateau[porte_avions.x][porte_avions.y +i] = '1';
    }
    for (int i = 0; i < 2; i++){
        plateau[torpilleur.x][torpilleur.y + i] = '1';
    }
    for (int i = 0; i < 3; ++i) {
        plateau[contre_torpilleur_1.x][contre_torpilleur_1.y + i] = '1';
    }
    for (int i = 0; i < 3; ++i) {
        plateau[contre_torpilleur_2.x + i][contre_torpilleur_2.y] ='1';
    }
}
void plateaux_2(){
    Ship croiseur{"Croiseur", 2, 3, 4};
    Ship porte_avions{"Porte-Avions", 4, 5, 5};
    Ship torpilleur{"Torpilleur", 1, 5, 2};
    Ship contre_torpilleur_1{"Contre_Torpilleur", 0, 0, 3};
    Ship  contre_torpilleur_2{"Torpilleur", 7, 1, 3};

    /**
     * @brief Initialisation des bateaux sur la grille
     */
    //Initialisation du croiseur
    for (int i = 0; i< 4; i++){
        plateau[croiseur.x + i][croiseur.y] ='1';
    }
    //Initialisation du porte_avions
    for (int i = 0; i < 5 ; ++i) {
        plateau[porte_avions.x][porte_avions.y +i] = '1';
    }
    for (int i = 0; i < 2; i++){
        plateau[torpilleur.x][torpilleur.y + i] = '1';
    }
    for (int i = 0; i < 3; ++i) {
        plateau[contre_torpilleur_1.x][contre_torpilleur_1.y + i] = '1';
    }
    for (int i = 0; i < 3; ++i) {
        plateau[contre_torpilleur_2.x + i][contre_torpilleur_2.y] ='1';
    }
}



