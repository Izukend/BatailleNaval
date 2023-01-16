//
// Created by izukend on 10/01/2023.
//
#include <iostream>
#include "../main.h"

using namespace std;

void plateaux_1(){
    Ship croiseur{"Croiseur", 5, 4, 4};
    Ship porte_avions{"Porte-Avions", 2, 1, 5};
    /*Ship torpilleur{"Torpilleur", 5, 7, 2};
    Ship contre_torpilleur_1{"Contre_Torpilleur", 3, 6, 3};
    Ship  contre_torpilleur_2{"Torpilleur", 7, 1, 3};*/

    /**
     * @brief Initialisation des bateaux sur la grille
     */
     //Initialisation du croiseur
    for (int i = 0; i< croiseur.length; i++){
        plateau[croiseur.row + i -1][croiseur.colum] ='1';
    }
   //Initialisation du porte_avions
    for (int i = 0; i < porte_avions.length ; ++i) {
        plateau[porte_avions.row -1][porte_avions.colum +i -1] = '1';
    }
    /*for (int i = 0; i < torpilleur.length; i++){
        plateau[torpilleur.colum][torpilleur.row + i] = '1';
    }
    for (int i = 0; i < contre_torpilleur_1.length; ++i) {
        plateau[contre_torpilleur_1.colum][contre_torpilleur_1.row + i] = '1';
    }
    for (int i = 0; i < contre_torpilleur_2.legth; ++i) {
        plateau[contre_torpilleur_2.colum + i][contre_torpilleur_2.row] ='1';
    }*/
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
    for (int i = 0; i< croiseur.length; i++){
        plateau[croiseur.colum ][croiseur.row+i] ='1';
    }
    //Initialisation du porte_avions
    for (int i = 0; i < porte_avions.length ; ++i) {
        plateau[porte_avions.colum][porte_avions.row +i] = '1';
    }
    for (int i = 0; i < torpilleur.length; i++){
        plateau[torpilleur.colum][torpilleur.row + i] = '1';
    }
    for (int i = 0; i < contre_torpilleur_1.length; ++i) {
        plateau[contre_torpilleur_1.colum][contre_torpilleur_1.row + i] = '1';
    }
    for (int i = 0; i < contre_torpilleur_2.length; ++i) {
        plateau[contre_torpilleur_2.colum + i][contre_torpilleur_2.row] ='1';
    }
}



