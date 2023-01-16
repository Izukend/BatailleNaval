//
// Created by izukend on 10/01/2023.
//
#include <iostream>
#include "./main.h"
#define SIZE 10

using namespace std;
int nbPlateau, colum, row, nbX;
char colum2;


int main() {

    cout << "\n"
        " /$$   /$$                              /$$       /$$$$$$$             /$$     /$$     /$$          \n"
        "| $$$ | $$                             | $$      | $$__  $$           | $$    | $$    | $$          \n"
        "| $$$$| $$  /$$$$$$  /$$    /$$/$$$$$$ | $$      | $$  \\ $$ /$$$$$$  /$$$$$$ /$$$$$$  | $$  /$$$$$$ \n"
        "| $$ $$ $$ |____  $$|  $$  /$$/____  $$| $$      | $$$$$$$ |____  $$|_  $$_/|_  $$_/  | $$ /$$__  $$\n"
        "| $$  $$$$  /$$$$$$$ \\  $$/$$/ /$$$$$$$| $$      | $$__  $$ /$$$$$$$  | $$    | $$    | $$| $$$$$$$$\n"
        "| $$\\  $$$ /$$__  $$  \\  $$$/ /$$__  $$| $$      | $$  \\ $$/$$__  $$  | $$ /$$| $$ /$$| $$| $$_____/\n"
        "| $$ \\  $$|  $$$$$$$   \\  $/ |  $$$$$$$| $$      | $$$$$$$/  $$$$$$$  |  $$$$/|  $$$$/| $$|  $$$$$$$\n"
        "|__/  \\__/ \\_______/    \\_/   \\_______/|__/      |_______/ \\_______/   \\___/   \\___/  |__/ \\_______/\n"
        "By Coulais Tom, Bidard Adeline and Dasilva-Fernandez Enzo"
        "                                                            \n" << endl;
    cout << "Menu" << endl;
    cout << "Play ? (Yes or No)" << endl;

    string play;
    string regle;

    cin >> play;

    if (play == "yes" || play == "y") {
        initialisation();
        show();

        cout << "Avez vous besoin des regles (Taper oui ou non) ?" << endl;
        cin >> regle;
        if (regle =="o" || regle =="oui" || regle == "Oui"){

            cout << "Vous disposez de plusieur plateaux pré définit par le créateur de ce programme."
                    "Pour gagner vous devrez couler les 5 bateaux sur la grille de jeux." << endl;
            cout << "La liste des bateaux existant pour ce jeu : \n"
                    "2 Contre Torpilleurs(3 cases) ; 1 Croiseur(4 cases) ; 1 Porte Avions(5 cases) ; 1 Torpilleur(2 cases)"
                    "                               " << endl;

        }else if (regle == "n" || regle == "non" || regle == "Non"){

            cout << "Veuiller choisir votre plateau de jeu entre 1 et 2" << endl;
            cin >> nbPlateau;

            switch (nbPlateau) {
                case 1:
                    plateaux_1();
                    do{
                        //Définition de la colonne
                        cout << "Taper les coordonnees de la colonne : "  << endl; cin >> colum2;

                        //Définition du numéro d'une lettr
                        if (colum2 == 'A' || colum2 == 'a'){
                            colum = 1;
                        }
                        if (colum2 == 'B' || colum2 == 'b'){
                            colum = 2;
                        }
                        if (colum2 == 'C' || colum2 == 'c'){
                            colum = 3;
                        }
                        if (colum2 == 'D' || colum2 == 'd'){
                            colum = 4;
                        }
                        if (colum2 == 'E' || colum2 == 'e'){
                            colum = 5;
                        }
                        if (colum2 == 'F' || colum2 == 'f'){
                            colum = 6;
                        }
                        if (colum2 == 'G' || colum2 == 'g'){
                            colum = 7;
                        }
                        if (colum2 == 'H' || colum2 == 'h'){
                            colum = 8;
                        }
                        if (colum2 == 'I' || colum2 == 'i'){
                            colum = 9;
                        }
                        if (colum2 == 'J' || colum2 == 'j'){
                            colum = 10;
                        }

                        //Définition de la ligne
                        cout << "Taper les coordonnees de la ligne : " << endl; cin >> row;

                        if(plateau[row -1][colum -1] != '1'){
                            demiDisplay[row - 1][colum -1] = 'O';
                            show_game();
                            cout << "Rate" << endl;
                        }else{
                            demiDisplay[row - 1][colum - 1] = 'X';
                            show_game();
                            nbX = nbX+1;
                            cout << "Touche" <<endl;
                        }
                    }
                    while(nbX != 17); //changer condition
                case 2:
                    plateaux_2();

                    do{
                        //Définition de la colonne
                        cout << "Taper les coordonnees de la colonne : "  << endl; cin >> colum2;
                        if (colum2 == 'A' || colum2 == 'a'){
                            colum = 1;
                        }
                        if (colum2 == 'B' || colum2 == 'b'){
                            colum = 2;
                        }
                        if (colum2 == 'C' || colum2 == 'c'){
                            colum = 3;
                        }
                        if (colum2 == 'D' || colum2 == 'd'){
                            colum = 4;
                        }
                        if (colum2 == 'E' || colum2 == 'e'){
                            colum = 5;
                        }
                        if (colum2 == 'F' || colum2 == 'f'){
                            colum = 6;
                        }
                        if (colum2 == 'G' || colum2 == 'g'){
                            colum = 7;
                        }
                        if (colum2 == 'H' || colum2 == 'h'){
                            colum = 8;
                        }
                        if (colum2 == 'I' || colum2 == 'i'){
                            colum = 9;
                        }
                        if (colum2 == 'J' || colum2 == 'j'){
                            colum = 10;
                        }
                        //Définition de la ligne
                        cout << "Taper les coordonnees de la ligne : " << endl; cin >> row;
                        if(plateau[row -1][colum -1] != '1'){
                            demiDisplay[row - 1][colum -1] = 'O';
                            show_game();
                            cout << "Rate" << endl;
                        }else{
                            demiDisplay[row - 1][colum - 1] = 'X';
                            show_game();
                            nbX = nbX+1;
                            cout << "Touche" <<endl;

                        }
                    }
                    while(nbX != 17);
            }
        }

    } else if (play == "no" || play == "n") {
        cout << "Merci d'avoir jouer !" << endl;
    }
}