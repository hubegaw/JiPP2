#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../include/functions.h"
using namespace std;

int main() {
    srand(time(NULL));

    int a = 4, b = 10;

    cout << "Przeciazenie funkcji liczacej pole:\nPole prostakata: " << liczPole(2,3) << "\nPole trapezu: "
    << liczPole(3, 4, 2) << endl;

    cout << "\nlosowa liczba z przedzialu (" << a << ", " << b << ") to: " << returnRandomNumber(a, b);

    int rozmiar;

    cout << "\n\nPodaj rozmiar tablicy alokowanej dynamicznie: ";
    cin >> rozmiar;
    int *tablica = new int[rozmiar];

    for(int i = 0; i < rozmiar; i++) {
        tablica[i] = rand()%100;
    }
    cout << "Najwieksza wartosc w tablicy  to: " << returnMaxValue(tablica, rozmiar);

    return 0;
}
