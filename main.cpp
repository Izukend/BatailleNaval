//
// Created by izukend on 10/01/2023.
//
#include <iostream>
#include <algorithm>
#include <random>
#include "./main.h"

using namespace std;
int nbPlateau;

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

            cout << "Veuiller Choisir votre plateau de jeu entre 1 a 4" << endl;
            cin >> nbPlateau;
            switch (nbPlateau) {
                case 1:
                    plateaux_1();
                    //char plateaux_1[10][10];
                    char x;
                    char y;
                    cout << "Taper les coordonnees x : "<< endl; cin >> x;
                    cout << "Taper les coordonnees y : " << endl; cin >> y;
                    if(plateau[x][y] == 0){
                        cout << "Rate" << endl;
                    }else{
                        cout << "Touche" <<endl;
                    }
                    show();

                case 2:
                    plateaux_2();
            }
        }

    } else if (play == "no" || play == "n") {
        cout << "Merci d'avoir jouer !" <<
             endl;
    }
}