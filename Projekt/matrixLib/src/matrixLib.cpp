#include "../include/matrixLib.h"

static int i, j;

//---------------------------------dodawanie dwóch macierzy---------------------------------
int** addMatrix(int **matrixA, int **matrixB, int **matrix, int rowCount, int columnCount) {
    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++) {
            matrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    return matrix;
}

double** addMatrix(double **matrixA, double **matrixB, double **matrix, int rowCount, int columnCount) {
    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++) {
            matrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    return matrix;
}

//--------------------------------odejmowanie dwóch macierzy--------------------------------
int** subtractMatrix(int **matrixA, int **matrixB, int **matrix, int rowCount, int columnCount) {
    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++) {
            matrix[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    return matrix;
}

double** subtractMatrix(double **matrixA, double **matrixB, double **matrix, int rowCount, int columnCount) {
    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++) {
            matrix[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    return matrix;
}

//---------------------------------mnożenie dwóch macierzy----------------------------------
int** multiplyMatrix(int **matrixA, int **matrixB, int **matrix, int rowCountA, int columnCountA, int columnCountB) {
    for(i = 0; i < rowCountA; i++) {
        for(j = 0; j < columnCountA; j++) {
            matrix[i][j] = 0;
            for(int k = 0; k < columnCountB; k++)
                matrix[i][j] += matrixA[i][k] * matrixB[k][j];
        }
    }
    return matrix;
}

double** multiplyMatrix(double **matrixA, double **matrixB, double **matrix, int rowCountA, int columnCountA, int columnCountB) {
    for(i = 0; i < rowCountA; i++) {
        for(j = 0; j < columnCountA; j++) {
            matrix[i][j] = 0;
            for(int k = 0; k < columnCountB; k++)
                matrix[i][j] += matrixA[i][k] * matrixB[k][j];
        }
    }
    return matrix;
}

//----------------------------------mnożenie przez skalar-----------------------------------
int** multiplyByScalar(int **matrixA, int **matrix, int rowCount, int columnCount, int scalar) {
    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++) {
                matrix[i][j] = matrixA[i][j] * scalar;
        }
    }
    return matrix;
}

double** multiplyByScalar(double **matrixA, double **matrix, int rowCount, int columnCount, double scalar) {
    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++) {
            matrix[i][j] = matrixA[i][j] * scalar;
        }
    }
    return matrix;
}

//---------------------------------transponowanie macierzy----------------------------------

int** transpozeMatrix(int **matrixA, int **matrix, int rowCount, int columnCount) {
    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++)
            matrix[j][i] = matrixA[i][j];
    }
    return matrix;
}

double** transpozeMatrix(double **matrixA, double **matrix, int rowCount, int columnCount) {
    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++)
            matrix[j][i] = matrixA[i][j];
    }
    return matrix;
}

//----------------------------------potęgowanie macierzy------------------------------------

int** powerMatrix(int **matrixA, int **matrix, int rowCount, int columnCount, unsigned power) {
    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++) {

        }
    }
    return matrix;
}

double** powerMatrix(double **matrixA, double **matrix, int rowCount, int columnCount, unsigned power) {

    return matrix;
}
/*
//----------------------------------wyznacznik macierzy-------------------------------------

int powerMatrix(int **matrixA, int lineCount, int columnCount) {

}

double powerMatrix(double **matrixA, int lineCount, int columnCount) {

}

//----------------------------------macierz diagonalna--------------------------------------

bool matrixIsDiagonal(int **matrixA, int lineCount, int columnCount) {

}

bool matrixIsDiagonal(double **matrixA, double lineCount, int columnCount) {

}

//------------------------------------zamiana wartości--------------------------------------

int swap(int *a, int *b) {

}

double swap(double *a, double *b) {

}

//-----------------------------------sortowanie tablicy-------------------------------------

void sortRow(int *array, int lineCount, int columnCount) {

}

void sortRow(double *array, int lineCount, int columnCount) {

}

//-------------------------------sortowanie wierszy macierzy--------------------------------

void sortRowsInMatrix(int **matrixA, int lineCount, int columnCount) {

}

void sortRowsInMatrix(double **matrixA, int lineCount, int columnCount) {

}
*/