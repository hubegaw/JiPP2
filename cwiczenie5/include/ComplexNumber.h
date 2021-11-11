#ifndef CWICZENIE5_COMPLEXNUMBER_H
#define CWICZENIE5_COMPLEXNUMBER_H
#include <iostream>

using namepsace std;

class ComplexNumber {
private:
    double x, y;
    int i;

public:
    ComplexNumber() {
        x = 0;
        y = 0;
    };

    ComplexNumber(double x, double y) {
        this->x = x;
        this->y = y;
    }
};

#endif //CWICZENIE5_COMPLEXNUMBER_H
