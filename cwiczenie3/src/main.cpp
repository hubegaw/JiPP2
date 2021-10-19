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

    int size;

    cout << "\n\nPodaj rozmiar tablicy alokowanej dynamicznie: ";
    cin >> size;
    int *array = new int[size];

    for(int i = 0; i < size; i++) {
        array[i] = rand()%100;
    }
    cout << "Najwieksza wartosc w tablicy  to: " << returnMaxValue(array, size);

    cout << "\n\ntablica przed odwroceniem: ";
    for(int i = 0; i < size; i++)
        cout << array[i] << " ";

    reverseArray(array, size);

    cout << "\ntablica po odwroceniu: ";
    for(int i = 0; i < size; i++)
        cout << array[i] << " ";


    return 0;
}
