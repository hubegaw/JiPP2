#include <iostream>
#include <math.h>
#include "../include/calc.h"

void help() {
    std::cout << "\nSimple calculator" << std::endl;
    std::cout << "simpleCalc [nazwa dzialania]" << std::endl;
    std::cout << "Dzialania:" << std::endl;
    std::cout << "\nadd [a] [b]" << std::endl;
    std::cout << "\tDodawanie dwoch liczb ([a] i [b]) calkowitych." << std::endl;
    std::cout << "\nsubtract [a] [b]" << std::endl;
    std::cout << "\tOdejmowanie dwoch liczb ([a] i [b]) calkowitych." << std::endl;
    std::cout << "\nvolume [a] [b] [c] [H]" << std::endl;
    std::cout << "\tObliczanie objetosci graniastoslupa prostego o podstawie trapezu z liczb ([a], [b], [c] i [H]) calkowitych." << std::endl;
    std::cout << "\nhelp " << std::endl;
    std::cout << "\twyswietla dokumentacje programu." << std::endl;
}

void error() {
    std::cout << "\n--------------------------------------------\n\tNiepoprawnie podane parametry!\n--------------------------------------------" << std::endl;
}

int add(int a, int b) {
    return (a + b);
}

int subtract(int a, int b) {
    return (a - b);
}

double volume(int a, int b, int c, int H) {
    int h = sqrt(pow(c,2) - pow((a - b)/2,2));
    int PolePodst = (a + b)*h/2;
    return (PolePodst*H);
}