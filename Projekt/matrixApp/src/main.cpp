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

            matrix.matrixServiceSupport(matrixA, matrixB, matrixType);

            cout << "\nWynik dodawania:\n";
            matrix.intMatrix = addMatrix(matrixA.intMatrix, matrixB.intMatrix, matrix.intMatrix, matrix.rowCount, matrix.columnCount);
            matrix.showMatrix(matrixType);

        }
        else if (strcmp(matrixType, "double") == 0) {

            matrix.matrixServiceSupport(matrixA, matrixB, matrixType);

            cout << "\nWynik dodawania:\n";
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

            matrix.matrixServiceSupport(matrixA, matrixB, matrixType);

            cout << "\nWynik odejmowania:\n";
            matrix.intMatrix = subtractMatrix(matrixA.intMatrix, matrixB.intMatrix, matrix.intMatrix, matrix.rowCount, matrix.columnCount);
            matrix.showMatrix(matrixType);

        }
        else if (strcmp(matrixType, "double") == 0) {

            matrix.matrixServiceSupport(matrixA, matrixB, matrixType);

            cout << "\nWynik odejmowania:\n";
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

            matrix.matrixServiceSupport(matrixA, matrixB, matrixType);

            cout << "\nWynik mnozenia:\n";
            matrix.intMatrix = multiplyMatrix(matrixA.intMatrix, matrixB.intMatrix, matrix.intMatrix, matrixA.rowCount,
                                              matrixA.columnCount, matrixB.columnCount);
            matrix.showMatrix(matrixType);

        }
        else if (strcmp(matrixType, "double") == 0) {

            matrix.matrixServiceSupport(matrixA, matrixB, matrixType);

            cout << "\nWynik mnozenia:\n";
            matrix.doubleMatrix = multiplyMatrix(matrixA.doubleMatrix, matrixB.doubleMatrix, matrix.doubleMatrix, matrixA.rowCount,
                                                 matrixA.columnCount, matrixB.columnCount);
            matrix.showMatrix(matrixType);

        }
    }
    else if(strcmp(choice, "multiplyByScalar") == 0) {

        cout << "\nMacierz A:\n";
        Matrix matrixA(matrixType);
        cout << "skalar:";
        matrixA.setScalar(matrixType);

        Matrix matrix(matrixType, matrixA.rowCount, matrixA.columnCount);

        if (strcmp(matrixType, "int") == 0) {

            matrix.matrixServiceSupport(matrixA, matrixType);

            cout << "\nWynik mnozenia przez skalar:\n";
            matrix.intMatrix = multiplyByScalar(matrixA.intMatrix, matrix.intMatrix, matrixA.rowCount,
                                              matrixA.columnCount, matrixA.intScalar);
            matrix.showMatrix(matrixType);

        }
        else if (strcmp(matrixType, "double") == 0) {

            matrix.matrixServiceSupport(matrixA, matrixType);

            cout << "\nWynik mnozenia przez skalar:\n";
            matrix.doubleMatrix = multiplyByScalar(matrixA.doubleMatrix, matrix.doubleMatrix, matrixA.rowCount,
                                                 matrixA.columnCount, matrixA.doubleScalar);
            matrix.showMatrix(matrixType);

        }
    }
    else if(strcmp(choice, "transpozeMatrix") == 0) {

        cout << "\nMacierz A:\n";
        Matrix matrixA(matrixType);

        Matrix matrix(matrixType, matrixA.columnCount, matrixA.rowCount);

        if(strcmp(matrixType, "int") == 0) {

            matrix.matrixServiceSupport(matrixA, matrixType);

            cout << "\nWynik transponowania macierzy:\n";
            matrix.intMatrix = transpozeMatrix(matrixA.intMatrix, matrix.intMatrix, matrix.columnCount, matrix.rowCount);
            matrix.showMatrix(matrixType);

        }
        else if(strcmp(matrixType, "double") == 0) {

            matrix.matrixServiceSupport(matrixA, matrixType);

            cout << "\nWynik transponowania macierzy:\n";
            matrix.doubleMatrix = transpozeMatrix(matrixA.doubleMatrix, matrix.doubleMatrix, matrix.columnCount, matrix.rowCount);
            matrix.showMatrix(matrixType);

        }
    }
    else if(strcmp(choice, "powerMatrix") == 0) {

        cout << "\nMacierz A:\n";
        Matrix matrixA(matrixType);
        matrixA.setPower();

        Matrix matrix(matrixType, matrixA.rowCount, matrixA.columnCount);

        if(strcmp(matrixType, "int") == 0) {

            matrix.matrixServiceSupport(matrixA, matrixType);

            cout << "\nWynik potegowania:\n";
            matrix.intMatrix = powerMatrix(matrixA.intMatrix, matrix.intMatrix, matrix.columnCount, matrix.rowCount, matrixA.power);
            matrix.showMatrix(matrixType);

        }
        else if(strcmp(matrixType, "double") == 0) {

            matrix.matrixServiceSupport(matrixA, matrixType);

            cout << "\nWynik potegowania:\n";
            matrix.doubleMatrix = powerMatrix(matrixA.doubleMatrix, matrix.doubleMatrix, matrix.columnCount, matrix.rowCount, matrixA.power);
            matrix.showMatrix(matrixType);

        }
    }
    else if(strcmp(choice, "help") == 0) {
        startInstructions();
        help();
    }
    else {
        startInstructions();
        help();
    }

return 0;
}