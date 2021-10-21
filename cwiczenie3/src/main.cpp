#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "../include/functions.h"
using namespace std;

int main() {
    srand(time(NULL));

    int choice, a, b, size;
    int number1 = 7, number2 = 3;
    int *ptr1 = &number1, *ptr2 = &number2 , *array;
    int x = 5, y, *w = &y;
    int array_ptr[] = {0, 3, -3, 19, 2, -61, 27, -11}, *number_ptr;
    int unsorted_array[] = {6, 1, 3, 9, 0, 7, 2, 4, 5, 8};

    cout << "Wybierz zadanie: 1. przeciazenie funkcji, 2. losowanie, 3. tablica, 4. wskazniki, 5. obsluga bledow\n\n";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "--------------------------przeciazenie funkcji--------------------------\n\n";

            cout << "Przeciazenie funkcji liczacej pole:\nPole prostakata: " << liczPole(2, 3) << "\nPole trapezu: "
                 << liczPole(3, 4, 2) << endl;
            break;
        case 2:
            cout << "\n\n-----------------------------losowanie-----------------------------\n\n";
            a = 4, b = 10;

            cout << "\nlosowa liczba z przedzialu (" << a << ", " << b << ") to: " << returnRandomNumber(a, b);
            break;
        case 3:
            cout << "\n\n-----------------------------tablica-----------------------------\n\n";

            cout << "Podaj rozmiar tablicy alokowanej dynamicznie: ";
            cin >> size;
            array = new int[size];

            for (int i = 0; i < size; i++)
                array[i] = rand() % 100;

            cout << "Najwieksza wartosc w tablicy  to: " << returnMaxValue(array, size);

            cout << "\n\ntablica przed odwroceniem: ";
            for (int i = 0; i < size; i++)
                cout << array[i] << " ";

            reverseArray(array, size);

            cout << "\ntablica po odwroceniu: ";
            for (int i = 0; i < size; i++)
                cout << array[i] << " ";
            break;
        case 4:
            cout << "\n\n-----------------------------wskazniki-----------------------------\n\n";

            cout << "Srednia z liczb " << number1 << " i " << number2 << " to: " << liczSrednia(ptr1, ptr2) << endl;
            cout << "\nDodatnie liczby z tablicy: ";

            for (int i = 0; i < 8; i++) {
                number_ptr = &array_ptr[i];
                pickGreaterThan0(number_ptr);
            }

            int n1, n2, n3, n4, n5;
            cout << "\n\nPodaj liczby nieposortowane: \n";
            cin >> n1 >> n2 >> n3 >> n4 >> n5;

            cout << "Liczby posortowane: \n";
            sortArray(&n1, &n2, &n3, &n4, &n5);

            cout << "\n\nzmienna x przekazana do wskaznika = " << assign(x, w);
            break;
        case 5:
            cout << "\n\n-----------------------------obsluga bledow-----------------------------\n\n";

            cout << "podaj dwie liczby: \n";
            cin >> a >> b;

            try {
            cout << "Wynikiem dzielenia jest: " << divide(a, b);
            }
            catch(invalid_argument&e) {
                cerr << e.what() << endl;
                return -1;
            }

            std::cout << "\n\nWpisz dowolny ciag znakow do przekonwertowania na liczbe typu int: ";
            char text[10];
            cin >> text;
            try {
            cout << "\nprzekonwertowany ciag znakow: " << convert(text);
            }
            catch(invalid_argument&e1) {
                cerr << e1.what() << endl;
                return -1;
            }
            catch(overflow_error&e2) {
                cerr << e2.what() << endl;
                return -1;
            }
            break;
    }

    return 0;
}
