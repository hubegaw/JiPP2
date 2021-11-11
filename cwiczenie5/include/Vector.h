#ifndef CWICZENIE5_VECTOR_H
#define CWICZENIE5_VECTOR_H
#include <iostream>

using namespace std;

class Vector {
private:
    double x, y;

public:
    Vector() {};

    Vector(double x, double y) : x(x), y(y) {}

    double length() {
        return sqrt(x * x + y * y);
    }

    Vector operator+(const Vector &rhs) const {
        return {x + rhs.x, y + rhs.y};
    }

    Vector &operator+=(const Vector &rhs) {
        this->x = this->x + rhs.x;
        this->y = this->y + rhs.y;
        return *this;
    }

    void print() {
        cout << "(x,y) = " << "(" << x << "," << y << ")" << endl;
    }
};

#endif //CWICZENIE5_VECTOR_H
