//
// Created by izukend on 10/01/2023.
//
#include <iostream>
#include <algorithm>
#include "./main.h"

using namespace std;

struct Bateaux {
    string name;
    int x;
    int y;
    int pv;
    int id;
};

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
            "                                                                                                    \n"
            "By Coulais Tom, Bidard Adeline and Dasilva-Fernandez Enzo."
            "                                                            \n" << endl;
    cout << "Play ? (Yes or No)" << endl;
    string play;
    getline(cin, play);
    transform(play.begin(), play.end(), play.begin(), [](unsigned char c) {
        return tolower(c);
    }); //Permet de dire que du début à la fin du string il accepte tout type de caractère qui sont égal au string écrit, en somme peut importe les majuscules ou minuscules, il les acceptes
    if (play == "yes" || play == "y") {
        init();
        show();
        cout << "\nVeuillez placer vos bateaux, voici le plateau de jeu pour vous aidez a les placer" << endl;
        cout << "La liste des bateaux : \n"
                "2 Contre Torpilleurs(3 cases) ; 1 Croiseur(4 cases) ; 1 Porte Avions(5 cases) ; 1 Torpilleur(2 cases)"
                "                               " << endl;

        //Définition du Porte-avions
        Bateaux PorteAvions{"Porte-Avions", 4, 5, 5, 3};
        tab[PorteAvions.x][PorteAvions.y] = '1';
        show();


    } else if (play == "no" || play == "n") {
        cout << "Merci d'avoir jouer !" << endl;
    }
}