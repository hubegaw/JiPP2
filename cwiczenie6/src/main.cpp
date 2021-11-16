#include <iostream>
#include <string>
#include "../include/Node.h"
#include "../include/Vector.h"
#include "../include/ComplexNumber.h"

using namespace std;

int main() {

    cout << "Wpisz, jakie zadanie chcesz zrobic.\nDo wyboru: Node, Vector, Complex." << endl;
    string choice;
    getline(cin, choice);

    if(choice == "Node") {
        Node a, b;
        double x, y;

        cout << "Podaj wspolrzedne punktu A\n";
        cin >> x >> y;
        a.updateValue(x, y);

        cout << "Podaj wspolrzedne punktu b\n";
        cin >> x >> y;
        b.updateValue(x, y);

        cout << "Odleglosc miedzy punktami = " << pointsDistance(a, b) << endl;
    }
    else if(choice == "Vector") {
        double x, y;

        cout << "Podaj wspolrzedne dla wektora A\n";
        cin >> x >> y;
        Vector a(x,y);
        a.print();

        cout << "\n\nPodaj wspolrzedne dla wektora B\n";
        cin >> x >> y;
        Vector b(x,y);
        b.print();

        cout << "\n\nWektor A dodany do wektora B" << endl;
        Vector c = a + b;
        a.print();

        cout << "\nWektor A odjety od wektora B" << endl;
        c = b - a;
        a.print();

        double scalar;
        cout << "\nPodaj skalar" << endl;
        cin >> scalar;

        cout << "\nWektor A pomnozony przez skalar" << endl;
        a * scalar;
        a.print();

        cout << "\nWektor A pomnozony przez wektor B" << endl;
        a *= b;
        a.print();

    }
    else if(choice == "Complex") {
        double x, y;

        cout << "Podaj liczbe zespolona A" << endl;
        cin >> x >> y;
        ComplexNumber a(x, y);
        getNumber(a);

        cout << "\nPodaj liczbe zespolona B" << endl;
        cin >> x >> y;
        ComplexNumber b(x, y);
        getNumber(b);

        cout << "\nDodawanie liczb A i B" << endl;
        ComplexNumber c;
        c = a + b;
        getNumber(c);

        cout << "\nOdejmowanie liczb A i B" << endl;
        c = a - b;
        getNumber(c);

        cout << "\nMnozenie liczb A i B" << endl;
        c = a*b;
        isMultiplicated(c);
        getNumber(c);
    }

    return 0;
}
