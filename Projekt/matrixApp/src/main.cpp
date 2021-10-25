#include <iostream>
#include <string>
#include "../include/appService.h"
using namespace std;

static int **intMatrixA, **intMatrixB, **intMatrix, intScalar, power, *array, a, b;
static double **doubleMatrixA, **doubleMatrixB, **doubleMatrix, doubleScalar;
static int lineCountA, columnCountA, lineCountB, columnCountB;
static int *lineCountA_ptr = &lineCountA, *columnCountA_ptr = &columnCountA;
static int *lineCountB_ptr = &lineCountB, *columnCountB_ptr = &columnCountB;
static int *intScalar_ptr = &intScalar;
static double *doubleScalar_ptr = &doubleScalar;

int main(int argc, char *argv[]) {

    const char *choice = argv[1];
    const char *matrixType = argv[2];

    try {
        chooseAction(choice, argc, matrixType);
    }
    catch(invalid_argument&e) {
        cerr << e.what() << endl;
        return -1;
    }

    if(strcmp(choice, "addMatrix") == 0) {
        enterSize(lineCountA_ptr, columnCountA_ptr, lineCountB_ptr, columnCountB_ptr);

        if (strcmp(matrixType, "int") == 0) {

            intMatrix = createMatrix(matrixType, lineCountA, columnCountA);

            intMatrixA = createMatrix(matrixType, lineCountA, columnCountA);
            intMatrixB = createMatrix(matrixType, lineCountB, columnCountB);

            cout << "Wprowadz macierz A\n";
            fillMatrix(intMatrixA, lineCountA, columnCountA);

            cout << "Wprowadz macierz B\n";
            fillMatrix(intMatrixB, lineCountB, columnCountB);

            displayMatrixSupport(intMatrixA, intMatrixB, lineCountA, columnCountA, lineCountB, columnCountB);

            cout << "Wynik dodawania:\n";
            intMatrix = addMatrix(intMatrixA, intMatrixB, intMatrix, lineCountA, columnCountA);
            showMatrix(intMatrix, lineCountA, columnCountA);

        }
        else if (strcmp(matrixType, "double") == 0) {

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

        }
    }
    else if(strcmp(choice, "subtractMatrix") == 0) {

        enterSize(lineCountA_ptr, columnCountA_ptr, lineCountB_ptr, columnCountB_ptr);

        if (strcmp(matrixType, "int") == 0) {

            intMatrix = createMatrix(matrixType, lineCountA, columnCountB);
            intMatrixA = createMatrix(matrixType, lineCountA, columnCountA);
            intMatrixB = createMatrix(matrixType, lineCountB, columnCountB);

            cout << "Wprowadz macierz A\n";
            fillMatrix(intMatrixA, lineCountA, columnCountA);

            cout << "Wprowadz macierz B\n";
            fillMatrix(intMatrixB, lineCountB, columnCountB);

            displayMatrixSupport(intMatrixA, intMatrixB, lineCountA, columnCountA, lineCountB, columnCountB);

            cout << "Wynik odejmowania:\n";
            intMatrix = subtractMatrix(intMatrixA, intMatrixB, intMatrix, lineCountA, columnCountA);
            showMatrix(intMatrix, lineCountA, columnCountA);

        }
        else if (strcmp(matrixType, "double") == 0) {

            doubleMatrix = createMatrix(lineCountA, columnCountA);
            doubleMatrixA = createMatrix(lineCountA, columnCountA);
            doubleMatrixB = createMatrix(lineCountB, columnCountB);

            cout << "Wprowadz macierz A\n";
            fillMatrix(doubleMatrixA, lineCountA, columnCountA);

            cout << "Wprowadz macierz B\n";
            fillMatrix(doubleMatrixB, lineCountB, columnCountB);

            displayMatrixSupport(doubleMatrixA, doubleMatrixB, lineCountA, columnCountA, lineCountB, columnCountB);

            cout << "Wynik odejmowania:\n";
            doubleMatrix = subtractMatrix(doubleMatrixA, doubleMatrixB, doubleMatrix, lineCountA, columnCountA);
            showMatrix(doubleMatrix, lineCountA, columnCountA);
        }
    }
    else if(strcmp(choice, "multiplyMatrix") == 0) {

        enterSize(lineCountA_ptr, columnCountA_ptr, lineCountB_ptr, columnCountB_ptr);

        if (strcmp(matrixType, "int") == 0) {

            intMatrix = createMatrix(matrixType, lineCountA, columnCountB);
            intMatrixA = createMatrix(matrixType, lineCountA, columnCountA);
            intMatrixB = createMatrix(matrixType, lineCountB, columnCountB);

            cout << "Wprowadz macierz A\n";
            fillMatrix(intMatrixA, lineCountA, columnCountA);

            cout << "Wprowadz macierz B\n";
            fillMatrix(intMatrixB, lineCountB, columnCountB);

            displayMatrixSupport(intMatrixA, intMatrixB, lineCountA, columnCountA, lineCountB, columnCountB);

            cout << "Wynik mnozenia:\n";
            intMatrix = multiplyMatrix(intMatrixA, intMatrixB, intMatrix, lineCountA, columnCountA, lineCountB);
            showMatrix(intMatrix, lineCountA, columnCountB);
        }
        else if (strcmp(matrixType, "double") == 0) {

            doubleMatrix = createMatrix(lineCountB, columnCountA);
            doubleMatrixA = createMatrix(lineCountA, columnCountA);
            doubleMatrixB = createMatrix(lineCountB, columnCountB);

            cout << "Wprowadz macierz A\n";
            fillMatrix(doubleMatrixA, lineCountA, columnCountA);

            cout << "Wprowadz macierz B\n";
            fillMatrix(doubleMatrixB, lineCountB, columnCountB);

            displayMatrixSupport(doubleMatrixA, doubleMatrixB, lineCountA, columnCountA, lineCountB, columnCountB);

            cout << "Wynik mnozenia:\n";
            doubleMatrix = multiplyMatrix(doubleMatrixA, doubleMatrixB, doubleMatrix, lineCountA, columnCountA, columnCountB);
            showMatrix(doubleMatrix, lineCountB, columnCountA);
        }
    }
    else if(strcmp(choice, "multiplyByScalar") == 0) {

        if (strcmp(matrixType, "int") == 0) {

            enterSize(lineCountA_ptr, columnCountA_ptr, intScalar_ptr);

            intMatrix = createMatrix(matrixType, lineCountA, columnCountA);
            intMatrixA = createMatrix(matrixType, lineCountA, columnCountA);

            cout << "Wprowadz macierz \n";
            fillMatrix(intMatrixA, lineCountA, columnCountA);

            showMatrix(intMatrixA, lineCountA, columnCountA);

            cout << "Wynik mnozenia:\n";
            intMatrix = multiplyByScalar(intMatrixA, intMatrix, lineCountA, columnCountA, intScalar);
            showMatrix(intMatrix, lineCountA, columnCountA);
        }
        else if (strcmp(matrixType, "double") == 0) {

            enterSize(lineCountA_ptr, columnCountA_ptr, doubleScalar_ptr);

            doubleMatrix = createMatrix(lineCountA, columnCountA);
            doubleMatrixA = createMatrix(lineCountA, columnCountA);

            cout << "Wprowadz macierz\n";
            fillMatrix(doubleMatrixA, lineCountA, columnCountA);

            showMatrix(doubleMatrixA, lineCountA, columnCountA);

            cout << "Wynik mnozenia:\n";
            doubleMatrix = multiplyByScalar(doubleMatrixA, doubleMatrix, lineCountA, columnCountA, doubleScalar);
            showMatrix(doubleMatrix, lineCountA, columnCountA);
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