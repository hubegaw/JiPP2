#include "../include/matrixLib.h"

//---------------------------------dodawanie dwóch macierzy---------------------------------
int** addMatrix(int **matrixA, int **matrixB, int **matrix, int lineCount, int columnCount) {
    for(int i = 0; i < lineCount; i++) {
        for(int j = 0; j < columnCount; j++) {
            matrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    return matrix;
}

double** addMatrix(double **matrixA, double **matrixB, double **matrix, int lineCount, int columnCount) {
    for(int i = 0; i < lineCount; i++) {
        for(int j = 0; j < columnCount; j++) {
            matrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    return matrix;
}

//--------------------------------odejmowanie dwóch macierzy--------------------------------
int** subtractMatrix(int **matrixA, int **matrixB, int **matrix, int lineCount, int columnCount) {
    for(int i = 0; i < lineCount; i++) {
        for(int j = 0; j < columnCount; j++) {
            matrix[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    return matrix;
}

double** subtractMatrix(double **matrixA, double **matrixB, double **matrix, int lineCount, int columnCount) {
     for(int i = 0; i < lineCount; i++) {
        for(int j = 0; j < columnCount; j++) {
            matrix[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    return matrix;
}

//---------------------------------mnożenie dwóch macierzy----------------------------------
int** multiplyMatrix(int **matrixA, int **matrixB, int **matrix, int lineCountA, int columnCountA, int columnCountB) {
    for(int i = 0; i < lineCountA; i++) {
        for(int j = 0; j < columnCountA; j++) {
            matrix[i][j] = 0;
            for(int k = 0; k < columnCountB; k++)
                matrix[i][j] += matrixA[i][k] * matrixB[k][j];
        }
    }
    return matrix;
}

double** multiplyMatrix(double **matrixA, double **matrixB, double **matrix, int lineCountA, int columnCountA, int columnCountB) {
    for(int i = 0; i < lineCountA; i++) {
        for(int j = 0; j < columnCountA; j++) {
            matrix[i][j] = 0;
            for(int k = 0; k < columnCountB; k++)
                matrix[i][j] += matrixA[i][k] * matrixB[k][j];
        }
    }
    return matrix;
}
/*
//----------------------------------mnożenie przez skalar-----------------------------------
void multiplyByScalar(int **matrixA, int lineCount, int columnCount, int scalar) {
    int matrix[*lineCount][*columnCount];

}

void multiplyByScalar(double **matrixA, int lineCount, int columnCount, int scalar) {
    double matrix[*lineCount][*columnCount];

}

//---------------------------------transponowanie macierzy----------------------------------

void transpozeMatrix(int **matrixA, int lineCount, int columnCount) {
    int matrix[*lineCount][*columnCount];

}

void transpozeMatrix(double **matrixA, int lineCount, int columnCount) {
    double matrix[*lineCount][*columnCount];

}

//----------------------------------potęgowanie macierzy------------------------------------

void powerMatrix(int **matrixA, int lineCount, int columnCount, unsigned power) {
    int matrix[*lineCount][*columnCount];

}

void powerMatrix(double **matrixA, int lineCount, int columnCount, unsigned power) {
    double matrix[*lineCount][*columnCount];

}

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