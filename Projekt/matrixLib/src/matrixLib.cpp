#include "../include/matrixLib.h"
#include <math.h>
#include <iostream>

static int i, j;

//---------------------------------dodawanie dwóch macierzy---------------------------------
int** addMatrix(int **matrixA, int **matrixB, int rowCount, int columnCount) {
    int** resultMatrix = new int*[rowCount];
    for (i = 0; i < rowCount; i++)
        resultMatrix[i] = new int[columnCount];

    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++) {
            resultMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    return resultMatrix;
}

double** addMatrix(double **matrixA, double **matrixB, int rowCount, int columnCount) {
    double** resultMatrix = new double*[rowCount];
    for (i = 0; i < rowCount; i++)
        resultMatrix[i] = new double[columnCount];

    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++) {
            resultMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    return resultMatrix;
}

//--------------------------------odejmowanie dwóch macierzy--------------------------------
int** subtractMatrix(int **matrixA, int **matrixB, int rowCount, int columnCount) {
    int** resultMatrix = new int*[rowCount];
    for (i = 0; i < rowCount; i++)
        resultMatrix[i] = new int[columnCount];

    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++) {
            resultMatrix[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    return resultMatrix;
}

double** subtractMatrix(double **matrixA, double **matrixB, int rowCount, int columnCount) {
    double** resultMatrix = new double*[rowCount];
    for (i = 0; i < rowCount; i++)
        resultMatrix[i] = new double[columnCount];

    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++) {
            resultMatrix[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    return resultMatrix;
}

//---------------------------------mnożenie dwóch macierzy----------------------------------
int** multiplyMatrix(int **matrixA, int **matrixB, int rowCountA, int columnCountA, int columnCountB) {
    int** resultMatrix = new int*[rowCountA];
    for (i = 0; i < rowCountA; i++)
        resultMatrix[i] = new int[columnCountB];

    for(i = 0; i < rowCountA; i++) {
        for(j = 0; j < columnCountA; j++) {
            resultMatrix[i][j] = 0;
            for(int k = 0; k < columnCountB; k++)
                resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
        }
    }
    return resultMatrix;
}

double** multiplyMatrix(double **matrixA, double **matrixB, int rowCountA, int columnCountA, int columnCountB) {
    double** resultMatrix = new double*[rowCountA];
    for (i = 0; i < rowCountA; i++)
        resultMatrix[i] = new double[columnCountB];

    for(i = 0; i < rowCountA; i++) {
        for(j = 0; j < columnCountA; j++) {
            resultMatrix[i][j] = 0;
            for(int k = 0; k < columnCountB; k++)
                resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
        }
    }
    return resultMatrix;
}

//----------------------------------mnożenie przez skalar-----------------------------------
int** multiplyByScalar(int **matrixA, int rowCount, int columnCount, int scalar) {
    int** resultMatrix = new int*[rowCount];
    for (int i = 0; i < rowCount; i++)
        resultMatrix[i] = new int[columnCount];

    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++) {
            resultMatrix[i][j] = matrixA[i][j] * scalar;
        }
    }
    return resultMatrix;
}

double** multiplyByScalar(double **matrixA, int rowCount, int columnCount, double scalar) {
    double** resultMatrix = new double*[rowCount];
    for (i = 0; i < rowCount; i++)
        resultMatrix[i] = new double[columnCount];

    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++) {
            resultMatrix[i][j] = matrixA[i][j] * scalar;
        }
    }
    return resultMatrix;
}

//---------------------------------transponowanie macierzy----------------------------------

int** transpozeMatrix(int **matrixA, int rowCount, int columnCount) {
    int** resultMatrix = new int*[rowCount];
    for (int i = 0; i < rowCount; i++)
        resultMatrix[i] = new int[columnCount];

    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++)
            resultMatrix[j][i] = matrixA[i][j];
    }
    return resultMatrix;
}

double** transpozeMatrix(double **matrixA, int rowCount, int columnCount) {
    double** resultMatrix = new double*[rowCount];
    for (i = 0; i < rowCount; i++)
        resultMatrix[i] = new double[columnCount];

    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++)
            resultMatrix[j][i] = matrixA[i][j];
    }
    return resultMatrix;
}

//----------------------------------potęgowanie macierzy------------------------------------

int** powerMatrix(int **matrixA, int rowCount, int columnCount, unsigned power) {
    int** resultMatrix = new int*[rowCount];
    for (int i = 0; i < rowCount; i++)
        resultMatrix[i] = new int[columnCount];

    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++)
            resultMatrix[i][j] = 0;
        for(int k = 0; k < columnCount; k++) {
            resultMatrix[i][j] = resultMatrix[i][k] * matrixA[k][j];
        }
    }
    return resultMatrix;
}

double** powerMatrix(double **matrixA, int rowCount, int columnCount, unsigned power) {
    double** resultMatrix = new double*[rowCount];
    for (i = 0; i < rowCount; i++)
        resultMatrix[i] = new double[columnCount];

    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++)
            resultMatrix[i][j] = pow(matrixA[i][j], power);
    }
    return resultMatrix;
}

//----------------------------------wyznacznik macierzy-------------------------------------

int determinantMatrix(int **matrixA, int **matrix, int rowCount) {
    int det = 0;
    if(rowCount == 1)
        return matrix[0][0];
    else if (rowCount == 2)
        return ((matrixA[0][0] * matrixA[1][1]) - (matrixA[1][0] * matrixA[0][1]));
    else {
        for (i = 0; i < rowCount; i++) {
            int subi = 0;
            for (j = 1; j < rowCount; j++) {
                int subj = 0;
                for (int k = 0; k < rowCount; k++) {
                    if (k == i)
                        continue;
                    matrix[i][j] = matrixA[i][j];
                    subj++;
                }
                subi++;
            }
            det += (pow(-1, i) * matrix[0][i] * determinantMatrix( matrixA, matrix, rowCount - 1 ));
        }
    }
    return det;
}

double determinantMatrix(double **matrixA, double **matrix, int rowCount) {
    double det = 0;
    if(rowCount == 1)
        return matrix[0][0];
    if (rowCount == 2)
        return ((matrixA[0][0] * matrixA[1][1]) - (matrixA[1][0] * matrixA[0][1]));
    else {
        for (i = 0; i < rowCount; i++) {
            int subi = 0;
            for (j = 1; j < rowCount; j++) {
                int subj = 0;
                for (int k = 0; k < rowCount; k++) {
                    if (k == i)
                        continue;
                    matrix[i][j] = matrixA[i][j];
                    subj++;
                }
                subi++;
            }
            det += (pow(-1, i) * matrix[0][i] * determinantMatrix( matrixA, matrix, rowCount - 1 ));
        }
    }
    return det;
}
//----------------------------------macierz diagonalna--------------------------------------

bool matrixIsDiagonal(int **matrixA, int rowCount, int columnCount) {
    for (i = 0; i < rowCount; i++) {
        for (j = 0; j < columnCount; j++)
            if ((i != j) && (matrixA[i][j] != 0))
                return false;
    }
    return true;
}


bool matrixIsDiagonal(double **matrixA, double rowCount, int columnCount) {
    for (i = 0; i < rowCount; i++) {
        for (j = 0; j < columnCount; j++)
            if ((i != j) && (matrixA[i][j] != 0))
                return false;
    }
    return true;
}

//------------------------------------zamiana wartości--------------------------------------

void swap(int *numberToSwap1_ptr, int *numberToSwap2_ptr) {
    int temp;
    temp = *numberToSwap1_ptr;
    *numberToSwap1_ptr = *numberToSwap2_ptr;
    *numberToSwap2_ptr = temp;
}

void swap(double *numberToSwap1_ptr, double *numberToSwap2_ptr) {
    double temp;
    temp = *numberToSwap1_ptr;
    *numberToSwap1_ptr = *numberToSwap2_ptr;
    *numberToSwap2_ptr = temp;
}

//-----------------------------------sortowanie tablicy-------------------------------------

int* sortRow(int *array, int columnCount) {
    bool swapped;
    for (i = 0; i < columnCount-1; i++)
    {
        swapped = false;
        for (j = 0; j < columnCount-i-1; j++)
        {
            if (array[j] > array[j+1])
            {
                swap(&array[j], &array[j+1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
    return array;
}

double* sortRow(double *array, int columnCount) {
    bool swapped;
    for (i = 0; i < columnCount-1; i++)
    {
        swapped = false;
        for (j = 0; j < columnCount-i-1; j++)
        {
            if (array[j] > array[j+1])
            {
                swap(&array[j], &array[j+1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
    return array;
}

//-------------------------------sortowanie wierszy macierzy--------------------------------

int** sortRowsInMatrix(int **matrixA, int rowCount, int columnCount) {
    for(i = 0; i < rowCount; i++)
        sortRow(matrixA[i], columnCount);

    return matrixA;
}

double** sortRowsInMatrix(double **matrixA, int rowCount, int columnCount) {
    for(i = 0; i < rowCount; i++)
        sortRow(matrixA[i], columnCount);

    return matrixA;
}
