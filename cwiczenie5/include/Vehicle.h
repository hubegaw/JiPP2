#ifndef CWICZENIE5_VEHICLE_H
#define CWICZENIE5_VEHICLE_H
#include <iostream>

using namespace std;

class Vehicle {
private:
    string registrationNumber;
    string name;
    string type;
    string brand;
    int seatsNumber;
    string *passengers;
    static double latestSoftwareVersion;
    double installedSoftwareVersion = 1.3;

public:
    Vehicle(string registrationNumber, string name, string type, string brand, int seatsNumber, string *passengers) {
        this->registrationNumber = registrationNumber;
        this->name = name;
        this->type = type;
        this->brand = brand;
        this->seatsNumber = seatsNumber;

        this->passengers = new string[seatsNumber];
        this->passengers = passengers;
    }

    Vehicle(Vehicle& Vehicle) {
        this->registrationNumber = registrationNumber;
        this->name = Vehicle.name;
        this->type = Vehicle.type;
        this->brand = Vehicle.brand;
        this->seatsNumber = Vehicle.seatsNumber;
        this->passengers = new string[seatsNumber];
        this->passengers = Vehicle.passengers;
    }

    void showVehicleInfo() {
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

    static void publishLatestSoftware(double newSoftware) {
        latestSoftwareVersion = newSoftware;
    }

    string getBrand() {
        return this->brand;
    }

    string getName() {
        return this->name;
    }

    string getType() {
        return this->type;
    }

    string getRegistrationNumber() {
        return this->registrationNumber;
    }

    double getSoftwareVersion() {
        return this->installedSoftwareVersion;
    }

    void setName(string name) {
        this->name = name;
    }

    void setRegistrationNumber(string registrationNumber) {
        this->registrationNumber = registrationNumber;
    }

    void changePassengerInfo(int occupiedSeat, string passengerInfo) {
        passengers[occupiedSeat] = passengerInfo;
    }

    void updateSoftwareVersion() {
        installedSoftwareVersion = latestSoftwareVersion;
    }

};

double Vehicle::latestSoftwareVersion = 1.3;

#endif //CWICZENIE5_VEHICLE_H
