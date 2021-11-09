#include "../include/Point.h"

Vehicle::Vehicle(string registrationNumber, string name, string type, string brand, int seatsNumber, string *passengers) {
    this->registrationNumber = registrationNumber;
    this->name = name;
    this->type = type;
    this->brand = brand;
    this->seatsNumber = seatsNumber;

    this->passengers = new string[seatsNumber];
    this->passengers = passengers;
}

Vehicle::Vehicle(Vehicle& Vehicle) {
    registrationNumber = registrationNumber;
    name = Vehicle.name;
    type = Vehicle.type;
    brand = Vehicle.brand;
    seatsNumber = Vehicle.seatsNumber;
    passengers = new string[seatsNumber];
    passengers = Vehicle.passengers;
}

void Vehicle::showVehicleInfo() {
    cout << "Vehicle info" << endl;
    cout << "registration number: " << this->registrationNumber << endl;
    cout << "name: " << this->name << endl;
    cout << "type: " << this->type << endl;
    cout << "brand: " << this->brand << endl;
    cout << "seats number: " << this->seatsNumber << endl;

    for(int passenger = 0; passenger < seatsNumber; passenger++) {
        cout << passenger+1 << ". " << passengers[passenger] << endl;
    }
}

string Vehicle::getBrand() {
    return this->brand;
}

string Vehicle::getName() {
    return this->name;
}

string Vehicle::getType() {
    return this->type;
}

string Vehicle::getRegistrationNumber() {
    return this->registrationNumber;
}

void Vehicle::setName(string name) {
    this->name = name;
}

void Vehicle::setRegistrationNumber(string registrationNumber) {
    this->registrationNumber = registrationNumber;
}

void Vehicle::changePassengerInfo(int occupiedSeat, string passengerInfo) {
    passengers[occupiedSeat] = passengerInfo;
}

Point::Point(double x, double y, string name) : name(name) {
    *this->x = x;
    *this->y = y;
}

Point::Point(string name) : name(name) {
    *x = *y = 0;
}

Point::~Point() {
    delete this->x;
    delete this->y;
}

double Point::getX() {
    return *x;
}

void Point::setX(double x) {
    *this->x = x;
}

double Point::getY() {
    return *y;
}

void Point::setY(double y) {
    *this->y = y;
}

void Point::printData() const {
    cout << "Point " << name << " (x = " << *x << ", y = " << *y << ")\n";
}

void Point::setName(string name) {
    this->name = name;
}

bool Point::operator==(const Point &rhs) const {
    return x == rhs.x &&
           y == rhs.y &&
           name == rhs.name;
}

bool Point::operator!=(const Point &rhs) const {
    return !(rhs == *this);
}

const string &Point::getName() const {
    return name;
}