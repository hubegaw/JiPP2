#ifndef CWICZENIE7_FIGURE_H
#define CWICZENIE7_FIGURE_H
#include <iostream>

class Figure {
protected:
    std::string name;
    std::string color;
public:

    void setName(std::string name);
    void setColor(std::string color);

    std::string getName();
    std::string getColor();

    virtual double area() = 0;
    virtual double circuit() = 0;
};

class Square : public Figure {
protected:
    double sideLength;
public:

    Square();
    Square(double sideLength);

    double area();
    double circuit();
};

class Circle : public Figure {
protected:
    double radius;
public:

    Circle();
    Circle(double radius);

    double area();
    double circuit();
};

#endif //CWICZENIE7_FIGURE_H
