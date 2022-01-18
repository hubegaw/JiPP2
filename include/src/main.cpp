#include <iostream>
#include "../include/Pointers.h"

using namespace std;

int main() {
    int choice;
    cout << "Wybierz:\n1. zadanie 1\n2. wskaźnik unikalny\n 3. wskaźnik dzielony\n";

    if(choice == 1) {
        double num;
        int num2;

        cout << "Podaj bok kwadratu(double)" << endl;
        cin >> num;

        num2 = num;

        cout << "konwersja " << num << " -> " << num2 << endl;
        cout << "Pole kwadratu: " << num2 * num2 << endl;
    }
    else if(choice == 2) {

    }
    else if(choice == 3) {

    }
    return 0;
}