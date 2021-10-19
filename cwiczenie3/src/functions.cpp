#include <iostream>
#include <cstdlib>
#include <ctime>

int liczPole(int a, int b) {
    return a * b;
}

int liczPole(int a, int b, int h) {
    return 0.5*(a+b)*h;
}

int returnRandomNumber(int a, int b) {
    srand(time(NULL));
    return rand()%(b-a) + a;
}

int returnMaxValue(int tablica[], int rozmiar) {
    int temp=0;

    for(int i = 0; i < rozmiar; i++) {
        if(temp < tablica[i]) temp = tablica[i];
    }
    return temp;
}

