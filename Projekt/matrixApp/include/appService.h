#ifndef PROJEKT_APPSERVICE_H
#define PROJEKT_APPSERVICE_H
#include <iostream>
#include <string>
#include <matrixLib.h>
using namespace std;

class Matrix {
public:
    int **intMatrix, intScalar, columnCount, rowCount;
    double **doubleMatrix, doubleScalar;

    Matrix(const char *matrixType);
    Matrix(const char *matrixType, int rowCount, int columnCount);
    void fillMatrix(const char *matrixType);
    void showMatrix(const char *matrixType);
    void scalarInput(const char *matrixType);
    // W jaki sposób mogę zadeklarować zmienne jako prywatne, aby móc je udostępnić do funkcji?
};

void startInstructions();
void help();
void chooseAction(const char *choice, int argc, const char *matrixType);

#endif //PROJEKT_APPSERVICE_H

