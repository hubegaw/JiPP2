#ifndef CWICZENIE6_COMPLEXNUMBER_H
#define CWICZENIE6_COMPLEXNUMBER_H


class ComplexNumber {
private:
    double x, y;
    bool flag = false;

public:
    ComplexNumber() {
        x = 0;
        y = 0;
    };

    ComplexNumber(double x, double y) {
        this->x = x;
        this->y = y;
    }

    friend void isMultiplicated(ComplexNumber a);
    friend void getNumber(ComplexNumber a);

    ComplexNumber operator+(const ComplexNumber &rhs) const {
        return {x + rhs.x, y + rhs.y};
    }

    ComplexNumber operator-(const ComplexNumber &rhs) const {
        return {x - rhs.x, y - rhs.y};
    }

    ComplexNumber operator*(const ComplexNumber &rhs) const {
        return {x * rhs.x, (-y) * rhs.y};
    }
};
void isMultiplicated(ComplexNumber a);
void getNumber(ComplexNumber a);

#endif //CWICZENIE6_COMPLEXNUMBER_H
