#include <iostream>
#include <cstdlib>
#include "../include/calc.h"
using namespace std;

int main(int argc, char *argv[]) {

    int a, b, c, H;

    if(!strcmp(argv[1], "add") && argc == 4) {
        a = atof(argv[2]);
        b = atof(argv[3]);
        cout << add(a, b) << endl;
    }
    else if(!strcmp(argv[1], "subtract") && argc == 4) {
        a = atof(argv[2]);
        b = atof(argv[3]);
        cout << subtract(a, b) << endl;
    }
    else if(!strcmp(argv[1], "volume") && argc == 6) {
        a = atof(argv[2]);
        b = atof(argv[3]);
        c = atof(argv[4]);
        H = atof(argv[5]);
        cout << volume(a, b, c, H) << endl;
    }
    else if(!strcmp(argv[1], "help") && argc == 2) {
        help();
    }
    else {
        error();
        help();
    }

    return 0;
}