#include <iostream>
#include "../include/figure.h"

using namespace std;

int main() {

    Figure *circle = new Circle(3);
    circle->setName("okrag");
    circle->setColor("zielony");

    Figure *square = new Square(5);
    square->setName("kwadrat");
    square->setColor("niebieski");

    cout << "\nName: " << circle->getName() << endl;
    cout << "Color: " << circle->getColor() << endl;
    cout << "Area = " << circle->area() << endl;
    cout << "Circuit = " << circle->circuit() << endl;

    cout << "\nName: " << square->getName() << endl;
    cout << "Color: " << square->getColor() << endl;
    cout << "Area = " << square->area() << endl;
    cout << "Circuit = " << square->circuit() << endl;

    return 0;
}
