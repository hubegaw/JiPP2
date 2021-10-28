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
    for (i = 0; i < rowCount; i++)
        resultMatrix[i] = new int[columnCount];

    int** tempMatrix = new int*[rowCount];
    for (i = 0; i < rowCount; i++)
        tempMatrix[i] = new int[columnCount];

    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++)
            resultMatrix[i][j] = matrixA[i][j];
    }

    int result;
    while(power > 1) {
        for(i = 0; i < rowCount; i++ ) {
            for (j = 0; j < columnCount; j++) {
                result = 0;
                for (int k = 0; k < columnCount; k++) {
                    result += resultMatrix[i][k] * matrixA[k][j];
                }
                tempMatrix[i][j] = result;
            }
        }
        for (int k = 0; k < rowCount; k++)
        {
            for (int l = 0; l < columnCount;l++)
                resultMatrix[k][l] = tempMatrix[k][l];
        }

        power--;

    }

    return resultMatrix;
}

double** powerMatrix(double **matrixA, int rowCount, int columnCount, unsigned power) {
    double** resultMatrix = new double*[rowCount];
    for (i = 0; i < rowCount; i++)
        resultMatrix[i] = new double[columnCount];

    double** tempMatrix = new double*[rowCount];
    for (i = 0; i < rowCount; i++)
        tempMatrix[i] = new double[columnCount];

    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++)
            resultMatrix[i][j] = matrixA[i][j];
    }

    double result;
    while(power > 1) {
        for(i = 0; i < rowCount; i++ ) {
            for (j = 0; j < columnCount; j++) {
                result = 0;
                for (int k = 0; k < columnCount; k++) {
                    result += resultMatrix[i][k] * matrixA[k][j];
                }
                tempMatrix[i][j] = result;
            }
        }
        for (int k = 0; k < rowCount; k++) {
            for (int l = 0; l < columnCount;l++)
                resultMatrix[k][l] = tempMatrix[k][l];
        }

        power--;

    }
    return resultMatrix;
}

//----------------------------------wyznacznik macierzy-------------------------------------

int determinantMatrix(int **matrixA, int rowCount, int columnCount) {
    int** subMatrix = new int*[rowCount];
    for (int i = 0; i < rowCount; i++)
        subMatrix[i] = new int[columnCount];

    int determinant = 0;
    if(rowCount == 1)
        return subMatrix[0][0];
    else if (rowCount == 2)
        return ((matrixA[0][0] * matrixA[1][1]) - (matrixA[1][0] * matrixA[0][1]));
    else {
        for (i = 0; i < rowCount; i++) {
            for (j = 1; j < rowCount; j++) {
                for (int k = 0; k < rowCount; k++) {
                    if (k == i)
                        continue;
                    subMatrix[i][j] = matrixA[i][j];
                }
            }
            determinant += (pow(-1, i) * subMatrix[0][i] * determinantMatrix( matrixA, rowCount - 1, columnCount-1));
        }
    }
    return determinant;
}

double determinantMatrix(double **matrixA, int rowCount, int columnCount) {
    double** subMatrix = new double*[rowCount];
    for (int i = 0; i < rowCount; i++)
        subMatrix[i] = new double[columnCount];

    double determinant = 0;
    if(rowCount == 1)
        return subMatrix[0][0];
    if (rowCount == 2)
        return ((matrixA[0][0] * matrixA[1][1]) - (matrixA[1][0] * matrixA[0][1]));
    else {
        for (i = 0; i < rowCount; i++) {
            for (j = 1; j < rowCount; j++) {
                for (int k = 0; k < rowCount; k++) {
                    if (k == i)
                        continue;
                    subMatrix[i][j] = matrixA[i][j];
                }
            }
            determinant += (pow(-1, i) * subMatrix[0][i] * determinantMatrix( matrixA, rowCount - 1, columnCount -1));
        }
    }
    return determinant;
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
