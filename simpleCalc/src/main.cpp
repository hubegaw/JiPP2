#include <iostream>
#include <cstdlib>
#include "../include/calc.h"
using namespace std;

int main(int argc, char *argv[]) {

    int a, b, c;

    if(argv[1] == "add") {
        a = atof(argv[2]);
        b = atof(argv[3]);
        cout << add(a, b) << endl;
    }
    else if(argv[1] == "subtract") {

    }
    else if(argv[1] == "volume") {

    }
    else if(argv[1] == "help") {
        help();
    }
    else {
        error();
        help();
    }

    return 0;
}