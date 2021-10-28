#ifndef PROJEKT_APPSERVICE_H
#define PROJEKT_APPSERVICE_H
#include <iostream>
#include <string>
#include <matrixLib.h>
using namespace std;

// W pliku znajduje się klasa Matrix zawierająca potrzebne zmienne oraz funkcje do sprawnego tworzenia i obsługiwania macierzy.
// Pod macierzą znajdują się deklaracje innych funkcji obsługujących macierze oraz aplikację.

class Matrix {
public:
    int **intMatrix, intScalar, columnCount, rowCount;
    double **doubleMatrix, doubleScalar;
    unsigned power;

    Matrix(const char *matrixType, int setRowCount, int setColumnCount);
    void fillMatrix(const char *matrixType);
    void showMatrix(const char *matrixType);
    void setScalar(const char *matrixType);
    void setPower();
    // W jaki sposób mogę zadeklarować zmienne jako prywatne, aby móc je udostępnić do funkcji biblioteki?
};

void startInstructions();
void help();
void chooseAction(const char *choice, int argc, const char *matrixType);
void setMatrixSize(int *rowCount_ptr, int *columnCount_ptr);
void fillAndDisplay(Matrix matrixA, Matrix matrixB, const char *matrixType);
void fillAndDisplay(Matrix matrixA, const char *matrixType);
void CoordinatesToSwapNumbers(int *a1, int *a2, int *b1, int *b2);
void chooseRowToSort(int *chooseRow);

#endif //PROJEKT_APPSERVICE_H

