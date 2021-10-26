#include "../include/appService.h"
using namespace std;

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

        cout << "\nMacierz A:\n";
        Matrix matrixA(matrixType);
        cout << "\nMacierz B:\n";
        Matrix matrixB(matrixType);

        Matrix matrix(matrixType, matrixA.rowCount, matrixA.columnCount);

        if (strcmp(matrixType, "int") == 0) {

            cout << "Wprowadz macierz A\n";
            matrixA.fillMatrix(matrixType);

            cout << "Wprowadz macierz B\n";
            matrixB.fillMatrix(matrixType);

            cout << "Wynik dodawania:\n";
            matrix.intMatrix = addMatrix(matrixA.intMatrix, matrixB.intMatrix, matrix.intMatrix, matrix.rowCount, matrix.columnCount);
            matrix.showMatrix(matrixType);

        }
        else if (strcmp(matrixType, "double") == 0) {

            cout << "Wprowadz macierz A\n";
            matrixA.fillMatrix(matrixType);

            cout << "Wprowadz macierz B\n";
            matrixB.fillMatrix(matrixType);

            cout << "Wynik dodawania:\n";
            matrix.doubleMatrix = addMatrix(matrixA.doubleMatrix, matrixB.doubleMatrix, matrix.doubleMatrix, matrix.rowCount, matrix.columnCount);
            matrix.showMatrix(matrixType);

        }
    }
    else if(strcmp(choice, "subtractMatrix") == 0) {

        cout << "\nMacierz A:\n";
        Matrix matrixA(matrixType);
        cout << "\nMacierz B:\n";
        Matrix matrixB(matrixType);

        Matrix matrix(matrixType, matrixA.rowCount, matrixA.columnCount);
        if (strcmp(matrixType, "int") == 0) {

            cout << "Wprowadz macierz A\n";
            matrixA.fillMatrix(matrixType);

            cout << "Wprowadz macierz B\n";
            matrixB.fillMatrix(matrixType);

            cout << "Wynik odejmowania:\n";
            matrix.intMatrix = subtractMatrix(matrixA.intMatrix, matrixB.intMatrix, matrix.intMatrix, matrix.rowCount, matrix.columnCount);
            matrix.showMatrix(matrixType);

        }
        else if (strcmp(matrixType, "double") == 0) {

            cout << "Wprowadz macierz A\n";
            matrixA.fillMatrix(matrixType);

            cout << "Wprowadz macierz B\n";
            matrixB.fillMatrix(matrixType);

            cout << "Wynik odejmowania:\n";
            matrix.doubleMatrix = subtractMatrix(matrixA.doubleMatrix, matrixB.doubleMatrix, matrix.doubleMatrix, matrix.rowCount, matrix.columnCount);
            matrix.showMatrix(matrixType);

        }
    }
    else if(strcmp(choice, "multiplyMatrix") == 0) {

        cout << "\nMacierz A:\n";
        Matrix matrixA(matrixType);
        cout << "\nMacierz B:\n";
        Matrix matrixB(matrixType);

        Matrix matrix(matrixType, matrixB.rowCount, matrixA.columnCount);
        if (strcmp(matrixType, "int") == 0) {

            cout << "Wprowadz macierz A\n";
            matrixA.fillMatrix(matrixType);

            cout << "Wprowadz macierz B\n";
            matrixB.fillMatrix(matrixType);

            cout << "Wynik mnożenia:\n";
            matrix.intMatrix = multiplyMatrix(matrixA.intMatrix, matrixB.intMatrix, matrix.intMatrix, matrixA.rowCount,
                                              matrixA.columnCount, matrixB.columnCount);
            matrix.showMatrix(matrixType);

        }
        else if (strcmp(matrixType, "double") == 0) {

            cout << "Wprowadz macierz A\n";
            matrixA.fillMatrix(matrixType);

            cout << "Wprowadz macierz B\n";
            matrixB.fillMatrix(matrixType);

            cout << "Wynik mnożenia:\n";
            matrix.doubleMatrix = multiplyMatrix(matrixA.doubleMatrix, matrixB.doubleMatrix, matrix.doubleMatrix, matrixA.rowCount,
                                                 matrixA.columnCount, matrixB.columnCount);
            matrix.showMatrix(matrixType);

        }
    }
    else if(strcmp(choice, "multiplyByScalar") == 0) {

        cout << "\nMacierz A:\n";
        Matrix matrixA(matrixType);
        cout << "skalar:";
        matrixA.scalarInput(matrixType);

        if (strcmp(matrixType, "int") == 0) {

        }
        else if (strcmp(matrixType, "double") == 0) {

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