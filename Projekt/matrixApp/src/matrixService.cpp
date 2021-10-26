#include "../include/appService.h"

Matrix::Matrix(const char *matrixType) {
    cout << "\nPodaj liczbe wierszy:";
    cin >> rowCount;
    cout << "Podaj liczbe kolumn:";
    cin >> columnCount;

    if(strcmp(matrixType, "int") == 0) {
        intMatrix = new int*[rowCount];
        for (int i = 0; i < rowCount; i++)
            intMatrix[i] = new int[columnCount];
    }
    else if(strcmp(matrixType, "double") == 0) {
        doubleMatrix = new double*[rowCount];
        for (int i = 0; i < rowCount; i++)
            doubleMatrix[i] = new double[columnCount];
    }
}

Matrix::Matrix(const char* matrixType, int setRowCount, int setColumnCount) {
    rowCount = setRowCount;
    columnCount = setColumnCount;
    if(strcmp(matrixType, "int") == 0) {
        intMatrix = new int*[rowCount];
        for (int i = 0; i < rowCount; i++)
            intMatrix[i] = new int[columnCount];
    }
    else if(strcmp(matrixType, "double") == 0) {
        doubleMatrix = new double*[rowCount];
        for (int i = 0; i < rowCount; i++)
            doubleMatrix[i] = new double[columnCount];
    }
}

void Matrix::fillMatrix(const char* matrixType) {
    if(strcmp(matrixType, "int") == 0) {
        for (int i = 0; i < rowCount; i++)
            for (int j = 0; j < columnCount; j++)
                cin >> intMatrix[i][j];
    }
    else if(strcmp(matrixType, "double") == 0) {
        for (int i = 0; i < rowCount; i++)
            for (int j = 0; j < columnCount; j++)
                cin >> doubleMatrix[i][j];
    }
}

void Matrix::showMatrix(const char *matrixType) {
    if (strcmp(matrixType, "int") == 0) {
        for (int i = 0; i < rowCount; i++) {
            for (int j = 0; j < columnCount; j++)
                cout << intMatrix[i][j] << " ";
            cout << endl;
        }
    } else if (strcmp(matrixType, "double") == 0) {
        for (int i = 0; i < rowCount; i++) {
            for (int j = 0; j < columnCount; j++)
                cout << doubleMatrix[i][j] << " ";
            cout << endl;;
        }
    }
}

void Matrix::setScalar(const char *matrixType) {
    if (strcmp(matrixType, "int") == 0)
        cin >> intScalar;
    else if (strcmp(matrixType, "double") == 0)
        cin >> doubleScalar;
}
void Matrix::setPower() {
    cout << "Podaj potege:";
    cin >> power;
}

void Matrix::matrixServiceSupport(Matrix matrixA, Matrix matrixB, const char *matrixType) {
    cout << "Wprowadz macierz A\n";
    matrixA.fillMatrix(matrixType);
    cout << "Wprowadz macierz B\n";
    matrixB.fillMatrix(matrixType);

    cout << "\nmacierz A:" << endl;
    matrixA.showMatrix(matrixType);
    cout << "\nmacierz B:" << endl;
    matrixB.showMatrix(matrixType);
}

void Matrix::matrixServiceSupport(Matrix matrixA, const char *matrixType) {
    cout << "Wprowadz macierz A\n";
    matrixA.fillMatrix(matrixType);

    cout << "\nmacierz A:" << endl;
    matrixA.showMatrix(matrixType);
}