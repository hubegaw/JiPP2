#include "../include/ComplexNumber.h"
#include <iostream>

using namespace std;

void isMultiplicated(ComplexNumber a) {
    a.flag = true;
}

void getNumber(ComplexNumber a, bool flag) {
    if(flag == false)
        cout << "x + yi = " << a.x << " + " << a.y << "i" << endl;
    if(flag == true)
        cout << "x + yi = " << a.x << " + " << a.y << "i" << endl;
}