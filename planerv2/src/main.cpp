#include <iostream>
#include <string>
#include "../include/Plan.h"

using namespace std;

template<typename temp>
temp ReturnParam(temp param) {
    return param;
}

int main(int argc, char *argv[]) {

    if(argc == 1)
        cout << "Uruchomiono program z parametrem: " << ReturnParam(argv[1]) << "\n";
    else {
        cout << "uruchomiono program z parametrami: ";
        for(int i = 1; i < argc; i++) {
            cout << ReturnParam(argv[i]) << " ";
        }
    }

    Planer *WeekPlan = new Plan();

    WeekPlan->weekInterface();

    return 0;
}
