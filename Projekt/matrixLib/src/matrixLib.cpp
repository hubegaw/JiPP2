#include "../include/matrixLib.h"
#include <iostream>

static int i, j;

// funkcja tworzy macierz i ją zwraca
int** createMatrix(int rowCount, int columnCount) {
    int** resultMatrix = new int*[rowCount];
    for (i = 0; i < rowCount; i++)
        resultMatrix[i] = new int[columnCount];

    return resultMatrix;
}

double** createMatrix(int rowCount, int columnCount, double d) {
    double** resultMatrix = new double*[rowCount];
    for (i = 0; i < rowCount; i++)
        resultMatrix[i] = new double[columnCount];

    return resultMatrix;
}

//---------------------------------dodawanie dwóch macierzy---------------------------------
// funkcja przyjmuje macierze oraz ich wymiar, a następnie dodaje je do siebie i zwraca macierz z wynikiem operacji
int** addMatrix(int **matrixA, int **matrixB, int rowCount, int columnCount) {
    int** resultMatrix = createMatrix(rowCount, columnCount);

    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++) {
            resultMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    return resultMatrix;
}

double** addMatrix(double **matrixA, double **matrixB, int rowCount, int columnCount) {
    double d = 0;
    double** resultMatrix = createMatrix(rowCount, columnCount, d);

    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++) {
            resultMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    return resultMatrix;
}

//--------------------------------odejmowanie dwóch macierzy--------------------------------
// funkcja przyjmuje macierze oraz ich wymiar, a następnie odejmuje je od siebie i zwraca macierz z wynikiem operacji
int** subtractMatrix(int **matrixA, int **matrixB, int rowCount, int columnCount) {
    int** resultMatrix = createMatrix(rowCount, columnCount);

    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++) {
            resultMatrix[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    return resultMatrix;
}

double** subtractMatrix(double **matrixA, double **matrixB, int rowCount, int columnCount) {
    double d = 0;
    double** resultMatrix = createMatrix(rowCount, columnCount, d);

    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++) {
            resultMatrix[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    return resultMatrix;
}

//---------------------------------mnożenie dwóch macierzy----------------------------------
// funkcja przyjmuje macierze oraz ich wymiary, a następnie mnoży je i zwraca macierz z wynikiem operacji
int** multiplyMatrix(int **matrixA, int **matrixB, int rowCountA, int columnCountA, int columnCountB) {
    int** resultMatrix = createMatrix(rowCountA, columnCountB);

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
    double d = 0;
    double** resultMatrix = createMatrix(rowCountA, columnCountB, d);

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
// funkcja mnoży macierz przez skalar i zwraca macierz z wynikiem operacji
int** multiplyByScalar(int **matrixA, int rowCount, int columnCount, int scalar) {
    int** resultMatrix = createMatrix(rowCount, columnCount);

    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++) {
            resultMatrix[i][j] = matrixA[i][j] * scalar;
        }
    }
    return resultMatrix;
}

double** multiplyByScalar(double **matrixA, int rowCount, int columnCount, double scalar) {
    double d = 0;
    double** resultMatrix = createMatrix(rowCount, columnCount, d);

    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++) {
            resultMatrix[i][j] = matrixA[i][j] * scalar;
        }
    }
    return resultMatrix;
}

//---------------------------------transponowanie macierzy----------------------------------
// funkcja transponuje macierz i zwraca macierz z wynikiem operacji
int** transpozeMatrix(int **matrixA, int rowCount, int columnCount) {
    int** resultMatrix = createMatrix(rowCount, columnCount);

    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++)
            resultMatrix[j][i] = matrixA[i][j];
    }
    return resultMatrix;
}

double** transpozeMatrix(double **matrixA, int rowCount, int columnCount) {
    double d = 0;
    double** resultMatrix = createMatrix(rowCount, columnCount, d);

    for(i = 0; i < rowCount; i++) {
        for(j = 0; j < columnCount; j++)
            resultMatrix[j][i] = matrixA[i][j];
    }
    return resultMatrix;
}

//----------------------------------potęgowanie macierzy------------------------------------
// funkcja potęguje macierz i zwraca macierz z wynikiem operacji
int** powerMatrix(int **matrixA, int rowCount, int columnCount, unsigned power) {
    int** resultMatrix = createMatrix(rowCount, columnCount);
    int** tempMatrix = createMatrix(rowCount, columnCount);

    for(i = 0; i < rowCount; i++) {             // macierz A jest przepisywana do macierzy wynikowej
        for(j = 0; j < columnCount; j++)
            resultMatrix[i][j] = matrixA[i][j];
    }

    int result;
    while(power > 1) {                          // pętla wykonuje mnożenie elementów macierzy A przez macierz wynikową, a wyniki zapisuje w
        for(i = 0; i < rowCount; i++ ) {        // macierzy pomocniczej
            for (j = 0; j < columnCount; j++) {
                result = 0;
                for (int k = 0; k < columnCount; k++) {
                    result += resultMatrix[i][k] * matrixA[k][j];
                }
                tempMatrix[i][j] = result;
            }
        }
        for (int k = 0; k < rowCount; k++) {   // do macierzy wynikowej jest przepisywana macierz tymczasowa z wynikiem potęgowania
            for (int l = 0; l < columnCount;l++)
                resultMatrix[k][l] = tempMatrix[k][l];
        }
        power--;
    }

    return resultMatrix;
}

double** powerMatrix(double **matrixA, int rowCount, int columnCount, unsigned power) {
    double d = 0;
    double** resultMatrix = createMatrix(rowCount, columnCount, d);
    double** tempMatrix = createMatrix(rowCount, columnCount, d);

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
//funkcja licz wyznacznik macierzy i zwraca wynik
int determinantMatrix(int **matrixA, int rowCount, int columnCount) {
    int** subMatrix = createMatrix(rowCount, columnCount);

    int determinant = 0;
    if(rowCount == 1) // jeśli macierz ma wymiary 1x1, to zwracana jest jedyna wartość w tej macierzy
        return subMatrix[0][0];
    else if (rowCount == 2) // jeśli macierz ma wymiary 2x2, to liczony jest wyznacznik macierzy
        return ((matrixA[0][0] * matrixA[1][1]) - (matrixA[1][0] * matrixA[0][1]));
    else { // dalsze obliczenia są dla macierzy o wymiarach 3x3 i większych
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
    double d = 0;
    double** subMatrix = createMatrix(rowCount, columnCount, d);

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
// funkcjaa sprawdza czy podana macierz jest diagonalna i zwraca true, gdy prawda i false, gdy fałsz
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
// funkcja zamienia ze sobą wartości
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
// funkcja sortuje rosnąco podany wiersz macierzy
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
// funkcja sortuje rosnąco wiersze w macierzy
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