//
// Created by izukend on 10/01/2023.
//
#include <iostream>
#define SIZE 10

using namespace std;
char plateau[SIZE][SIZE];
char demiDisplay[SIZE][SIZE];
int i, j;

void initialisation() {
    //Pour le plateau général
    for (i = 0; i < SIZE; ++i) {
        for (j = 0; j < SIZE; ++j)
            plateau[i][j] = '~';
    }
    //Pour le plateau avec les touché et raté
    for (i = 0; i < SIZE; ++i) {
        for (j = 0; j < SIZE; ++j)
            demiDisplay[i][j] = '~';
    }
}
void show() {
        for (i = 0; i < 10; i++)
            printf("%4c", 'A' + i);

        cout << "\n-----------------------------------------------" << endl;

        for (i = 0; i < 10; i++) {
            cout << i +1;
            for (j = 0; j < 10; j++) {
                printf("%4c", plateau[i][j]);
            }
            cout << "   " << endl;
        }
        cout << "\n-----------------------------------------------\n" << endl;
}
void show_game(){
    for (i = 0; i < 10; i++)
        printf("%4c", 'A' + i);

    cout << "\n-----------------------------------------------" << endl;

    for (i = 0; i < 10; i++) {
        cout << i +1;
        for (j = 0; j < 10; j++) {
            printf("%4c", demiDisplay[i][j]);
        }
        cout << "   " << endl;
    }
    cout << "\n-----------------------------------------------\n" << endl;
}

