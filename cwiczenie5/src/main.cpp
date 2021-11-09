#include <iostream>
#include "../include/Point.h"

using namespace std;

int main() {
        string passengers[5] = {"Ania", "Piotrek", "Zuzia"};

        Vehicle car("RP 918440", "Civic", "Hatchback", "Honda", 5, passengers);

        car.showVehicleInfo();

        int occupiedSeat;
        string passenger;
        cout << "Change passenger" << endl;

        cout << "Insert passenger's seat:";
        cin.clear();
        cin >> occupiedSeat;

        cout << "Insert new passenger:";
        cin.clear();
        cin >> passenger;

        car.changePassengerInfo(occupiedSeat-1, passenger);

        cout << "Car brand: " << car.getBrand() << endl;
        cout << "Car name: " << car.getName() << endl;
        cout << "Car type: " << car.getType() << endl;
        cout << "Car's registration number: " << car.getRegistrationNumber() << endl;

        cout << "\n\n";
        Point *p1, *p2;
        p1 = new Point("P1");
        p2 = new Point(5, 5, "P2");

        cout << "Initial values" << endl;
        p1->printData();
        p2->printData();

        cout << endl << "Create copy of point" << endl;
        Point *p1c = p1, *p2c = p2;
        //Update copied points names
        p1c->setName("P1c");
        p2c->setName("P2c");

        cout << "Values after copying" << endl;
        p1->printData();
        p2->printData();
        p1c->printData();
        p2c->printData();

        cout << endl << "Update P1 and P2 x and y (increase 10)" << endl;
        p1->setX(10);
        p1->setY(10);
        p2->setX(15);
        p2->setY(15);

        cout << "Values after update values" << endl;
        p1->printData();
        p2->printData();
        p1c->printData();
        p2c->printData();

    cout << "End program" << endl;

    delete p1;
    delete p2;
    delete p1c;
    delete p2c;

    return 0;
}
