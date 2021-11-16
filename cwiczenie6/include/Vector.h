#ifndef CWICZENIE6_VECTOR_H
#define CWICZENIE6_VECTOR_H

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

    Vector operator-(const Vector &rhs) const {
        return {x - rhs.x, y - rhs.y};
    }

    Vector &operator-=(const Vector &rhs) {
        this->x = this->x - rhs.x;
        this->y = this->y - rhs.y;
        return *this;
    }

    Vector operator*(double scalar) const {
        return {scalar*x, scalar*y};
    }

    Vector &operator*=(const Vector &rhs) {
        this->x = this->x * rhs.x;
        this->y = this->y * rhs.y;
        return *this;
    }

    void print() {
        cout << "(x,y) = " << "(" << x << "," << y << ")" << endl;
    }
};

#endif //CWICZENIE6_VECTOR_H
