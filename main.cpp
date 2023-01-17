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
        "By Coulais Tom and Bidard Adeline"
        "                                                            \n" << endl;
    cout << "Menu" << endl;
    cout << "Play ? (Yes or No)" << endl;

    string play;

    cin >> play;

    if (play == "yes" || play == "y") {
        initialisation();
        show();

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
                            cout << "Rate !" << endl;
                        }else{
                            demiDisplay[row - 1][colum - 1] = 'X';
                            nbX = nbX + 1;
                            show_game();
                            cout << "Touche !" <<endl;
                        }
                    }
                    while(nbX != 17);
                    cout << "Vous avez gagner !" << endl;
                    break;
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
                    cout << "Vous avez gagner !" << endl;
                    break; //Arêt de la fonction 
            }
        }
    else if (play == "no" || play == "n") {
        cout << "Merci d'avoir jouer !" << endl;

    }
}