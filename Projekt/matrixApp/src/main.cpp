#include <iostream>
#include <matrixLib.h>
#include "../include/functions.h"
using namespace std;

int main(int argc, char *argv[]) {

    int **IntMatrixA, **IntMatrixB, **IntMatrix, IntScalar, power, *array, a, b, i, j, IntMatrixType;
    double **DoubleMatrixA, **DoubleMatrixB, **DoubleMatrix, DoubleScalar;
    int lineCount, columnCount;
    int *lineCount_ptr = &lineCount, *columnCount_ptr = &columnCount;

    int choice = atoi(argv[1]);
    try {
        chooseAction(choice);
    }
    catch(invalid_argument&e) {
        cerr << e.what() << endl;
        return -1;
    }

    switch(choice) {
        case 1:
            enterSize(lineCount_ptr, columnCount_ptr);

            powtorz:

            cout << "Wpisz '1', jesli macierz ma byc typu int lub '0', jesli ma byc typu double\n";
            cin >> IntMatrixType;

            if(IntMatrixType == 1) {

                IntMatrix = createMatrix(IntMatrixType, lineCount, columnCount);
                IntMatrixA = createMatrix(IntMatrixType, lineCount, columnCount);
                IntMatrixB = createMatrix(IntMatrixType, lineCount, columnCount);

                cout << "Wprowadz macierz A\n";
                fillMatrix(IntMatrixA, lineCount, columnCount);

                cout << "Wprowadz macierz B\n";
                fillMatrix(IntMatrixB, lineCount, columnCount);

                cout << "Macierz A\n";
                showMatrix(IntMatrixA, lineCount, columnCount);

                cout << "Macierz B\n";
                showMatrix(IntMatrixB, lineCount, columnCount);

                cout << "Wynik dodawania:\n";
                IntMatrix = addMatrix(IntMatrixA, IntMatrixB, IntMatrix, lineCount, columnCount);
                showMatrix(IntMatrix, lineCount, columnCount);
            } else if(IntMatrixType == 0) {

                DoubleMatrix = createMatrix(lineCount, columnCount);
                DoubleMatrixA = createMatrix(lineCount, columnCount);
                DoubleMatrixB = createMatrix(lineCount, columnCount);

                cout << "Wprowadz macierz A\n";
                fillMatrix(DoubleMatrixA, lineCount, columnCount);

                cout << "Wprowadz macierz B\n";
                fillMatrix(DoubleMatrixB, lineCount, columnCount);

                cout << "Macierz A\n";
                showMatrix(DoubleMatrixA, lineCount, columnCount);

                cout << "Macierz B\n";
                showMatrix(DoubleMatrixB, lineCount, columnCount);

                cout << "Wynik dodawania:\n";
                DoubleMatrix = addMatrix(DoubleMatrixA, DoubleMatrixB, DoubleMatrix, lineCount, columnCount);
                showMatrix(DoubleMatrix, lineCount, columnCount);
            } else {
                cout << "\nBledny wybor!\n";
                goto powtorz;
            }

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            break;
        case 7:

            break;
        case 8:

            break;
        case 9:

            break;
        case 10:

            break;
        case 11:

            break;
        case 12:
            help();
            break;
        default:
            startInstructions();
            help();
            break;
    }

return 0;
}
