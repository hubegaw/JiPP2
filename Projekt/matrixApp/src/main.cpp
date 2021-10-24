#include <iostream>
#include <string>
#include <matrixLib.h>
#include "../include/functions.h"
using namespace std;

int main(int argc, char *argv[]) {

    int **intMatrixA, **intMatrixB, **intMatrix, intScalar, power, *array, a, b, intMatrixType;
    double **doubleMatrixA, **doubleMatrixB, **doubleMatrix, DoubleScalar;
    int lineCountA, columnCountA, lineCountB, columnCountB;
    int *lineCountA_ptr = &lineCountA, *columnCountA_ptr = &columnCountA, *lineCountB_ptr = &lineCountB, *columnCountB_ptr = &columnCountB;

    const char *choice = argv[1];
    try {
        chooseAction(choice);
    }
    catch(invalid_argument&e) {
        cerr << e.what() << endl;
        return -1;
    }

    if(strcmp(choice, "addMatrix") == 0) {
        enterSize(lineCountA_ptr, columnCountA_ptr, lineCountB_ptr, columnCountB_ptr);

        powtorz1:

        cout << "Wpisz '1', jesli macierz ma byc typu int lub '0', jesli ma byc typu double\n";
        cin >> intMatrixType;

        if (intMatrixType == 1) {

            intMatrix = createMatrix(intMatrixType, lineCountA, columnCountA);
            intMatrixA = createMatrix(intMatrixType, lineCountA, columnCountA);
            intMatrixB = createMatrix(intMatrixType, lineCountB, columnCountB);

            cout << "Wprowadz macierz A\n";
            fillMatrix(intMatrixA, lineCountA, columnCountA);

            cout << "Wprowadz macierz B\n";
            fillMatrix(intMatrixB, lineCountB, columnCountB);

            displayMatrixSupport(intMatrixA, intMatrixB, lineCountA, columnCountA, lineCountB, columnCountB);

            cout << "Wynik dodawania:\n";
            intMatrix = addMatrix(intMatrixA, intMatrixB, intMatrix, lineCountA, columnCountA);
            showMatrix(intMatrix, lineCountA, columnCountA);

        } else if (intMatrixType == 0) {

            doubleMatrix = createMatrix(lineCountA, columnCountA);
            doubleMatrixA = createMatrix(lineCountA, columnCountA);
            doubleMatrixB = createMatrix(lineCountB, columnCountB);

            cout << "Wprowadz macierz A\n";
            fillMatrix(doubleMatrixA, lineCountA, columnCountA);

            cout << "Wprowadz macierz B\n";
            fillMatrix(doubleMatrixB, lineCountB, columnCountB);

            displayMatrixSupport(doubleMatrixA, doubleMatrixB, lineCountA, columnCountA, lineCountB, columnCountB);

            cout << "Wynik dodawania:\n";
            doubleMatrix = addMatrix(doubleMatrixA, doubleMatrixB, doubleMatrix, lineCountA, columnCountB);
            showMatrix(doubleMatrix, lineCountA, columnCountB);
        } else {
            cout << "\nBledny wybor!\n";
            goto powtorz1;
        }
    }
    else if(strcmp(choice, "subtractMatrix") == 0) {

        enterSize(lineCountA_ptr, columnCountA_ptr, lineCountB_ptr, columnCountB_ptr);

        powtorz2:

        cout << "Wpisz '1', jesli macierz ma byc typu int lub '0', jesli ma byc typu double\n";
        cin >> intMatrixType;

        if (intMatrixType == 1) {

            intMatrix = createMatrix(intMatrixType, lineCountA, columnCountB);
            intMatrixA = createMatrix(intMatrixType, lineCountA, columnCountA);
            intMatrixB = createMatrix(intMatrixType, lineCountB, columnCountB);

            cout << "Wprowadz macierz A\n";
            fillMatrix(intMatrixA, lineCountA, columnCountA);

            cout << "Wprowadz macierz B\n";
            fillMatrix(intMatrixB, lineCountB, columnCountB);

            displayMatrixSupport(intMatrixA, intMatrixB, lineCountA, columnCountA, lineCountB, columnCountB);

            cout << "Wynik odejmowania:\n";
            intMatrix = subtractMatrix(intMatrixA, intMatrixB, intMatrix, lineCountA, columnCountA);
            showMatrix(intMatrix, lineCountA, columnCountA);

        } else if (intMatrixType == 0) {

            doubleMatrix = createMatrix(lineCountA, columnCountA);
            doubleMatrixA = createMatrix(lineCountA, columnCountA);
            doubleMatrixB = createMatrix(lineCountB, columnCountB);

            cout << "Wprowadz macierz A\n";
            fillMatrix(doubleMatrixA, lineCountA, columnCountA);

            cout << "Wprowadz macierz B\n";
            fillMatrix(doubleMatrixB, lineCountA, columnCountA);

            displayMatrixSupport(doubleMatrixA, doubleMatrixB, lineCountA, columnCountA, lineCountB, columnCountB);

            cout << "Wynik odejmowania:\n";
            doubleMatrix = subtractMatrix(doubleMatrixA, doubleMatrixB, doubleMatrix, lineCountA, columnCountA);
            showMatrix(doubleMatrix, lineCountA, columnCountA);
        } else {
            cout << "\nBledny wybor!\n";
            goto powtorz2;
        }
    }
    else if(strcmp(choice, "muliplyMatrix") == 0) {

        enterSize(lineCountA_ptr, columnCountA_ptr, lineCountB_ptr, columnCountB_ptr);

        powtorz3:

        cout << "Wpisz '1', jesli macierz ma byc typu int lub '0', jesli ma byc typu double\n";
        cin >> intMatrixType;

        if (intMatrixType == 1) {

            intMatrix = createMatrix(intMatrixType, lineCountA, columnCountB);
            intMatrixA = createMatrix(intMatrixType, lineCountA, columnCountA);
            intMatrixB = createMatrix(intMatrixType, lineCountB, columnCountB);

            cout << "Wprowadz macierz A\n";
            fillMatrix(intMatrixA, lineCountA, columnCountA);

            cout << "Wprowadz macierz B\n";
            fillMatrix(intMatrixB, lineCountB, columnCountB);

            displayMatrixSupport(intMatrixA, intMatrixB, lineCountA, columnCountA, lineCountB, columnCountB);

            cout << "Wynik mnozenia:\n";
            intMatrix = multiplyMatrix(intMatrixA, intMatrixB, intMatrix, lineCountA, columnCountA, lineCountB);
            showMatrix(intMatrix, lineCountA, columnCountB);
        } else if (intMatrixType == 0) {

            doubleMatrix = createMatrix(lineCountB, columnCountA);
            doubleMatrixA = createMatrix(lineCountA, columnCountA);
            doubleMatrixB = createMatrix(lineCountB, columnCountB);

            cout << "Wprowadz macierz A\n";
            fillMatrix(doubleMatrixA, lineCountA, columnCountA);

            cout << "Wprowadz macierz B\n";
            fillMatrix(doubleMatrixB, lineCountB, columnCountB);

            displayMatrixSupport(doubleMatrixA, doubleMatrixB, lineCountA, columnCountA, lineCountB, columnCountB);

            cout << "Wynik mnozenia:\n";
            doubleMatrix = multiplyMatrix(doubleMatrixA, doubleMatrixB, doubleMatrix, lineCountA, columnCountA,
                                          columnCountB);
            showMatrix(doubleMatrix, lineCountB, columnCountA);
        } else {
            cout << "\nBledny wybor!\n";
            goto powtorz3;
        }

    }
    else if(strcmp(choice, "help") == 0) {
        help();
    }
    else {
        startInstructions();
        help();
    }

return 0;
}
