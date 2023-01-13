//
// Created by izukend on 10/01/2023.
//
#include <iostream>
#define SIZE 10

using namespace std;
char plateau[10][10];
int i, j;

void initialisation() {
    for (i = 0; i < SIZE; ++i) {
        for (j = 0; j < SIZE; ++j)
            plateau[i][j] = '~';
    }
}

void show() {
    printf("  ");
    for (i = 0; i < 10; i++)
        printf("%4c", 'A' + i);

    printf("\n-----------------------------------------------\n");

    for (i = 0; i < 10; i++) {
        printf("%2d", i + 1);
        for (j = 0; j < 10; j++) {
            printf("%4c", plateau[i][j]);
        }
        cout << " " << endl;
    }
    printf("-----------------------------------------------\n");
}
