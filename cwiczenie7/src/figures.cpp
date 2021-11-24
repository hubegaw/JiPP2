#include "../include/figure.h"
using namespace std;

void Figure::setName(std::string name) {
    this->name = name;
}

void Figure::setColor(std::string color) {
    this->color = color;
}

string Figure::getName() {
    return name;
}

string Figure::getColor() {
    return color;
}

Square::Square() {
    sideLength=0;
}

Square::Square(double sideLength) {
    this->sideLength=sideLength;
}

double Square::area() {
    return (sideLength * sideLength);
}

double Square::circuit() {
    return (sideLength * 4);
}

Circle::Circle() {
    radius=0;
}

Circle::Circle(double radius) {
    this->radius=radius;
}

double Circle::area() {
    return (3.141592653589 * radius * radius);
}

double Circle::circuit() {
    return (2 * 3.141592653589 * radius);
}
