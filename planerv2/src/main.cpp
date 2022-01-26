#include <iostream>
#include <string>
#include "../include/Plan.h"

using namespace std;

template<typename temp>
temp ReturnParam(temp param) {
    return param;
}

int main(int argc, char *argv[]) {

    char sum=0;
    char *sum_ptr = &sum;

    if(argc == 1)
        cout << "Uruchomiono program z parametrem" << ReturnParam(argv[1]) << "\n";
    else {

    }

    Planer *WeekPlan = new Plan();

    WeekPlan->weekInterface();

    return 0;
}
