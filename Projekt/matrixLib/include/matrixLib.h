#ifndef PROJEKT_MATRIXLIB_H
#define PROJEKT_MATRIXLIB_H
using namespace std;

int** addMatrix(int **matrixA, int **matrixB, int lineCount, int columnCount);
double** addMatrix(double **matrixA, double **matrixB, int lineCount, int columnCount);

int** subtractMatrix(int **matrixA, int **matrixB, int lineCount, int columnCount);
double** subtractMatrix(double **matrixA, double **matrixB, int lineCount, int columnCount);

int** multiplyMatrix(int **matrixA, int **matrixB, int lineCountA, int columnCountA, int columnCountB);
double** multiplyMatrix(double **matrixA, double **matrixB, int lineCountA, int columnCountA, int columnCountB);

int** multiplyByScalar(int **matrixA, int lineCount, int columnCount, int scalar);
double** multiplyByScalar(double **matrixA, int lineCount, int columnCount, double scalar);

int** transpozeMatrix(int **matrixA, int lineCount, int columnCount);
double** transpozeMatrix(double **matrixA, int lineCount, int columnCount);

int** powerMatrix(int **matrixA, int rowCount, int columnCount, unsigned power);
double** powerMatrix(double **matrixA, int rowCount, int columnCount, unsigned power);

int determinantMatrix(int **matrixA, int rowCount, int columnCount);
double determinantMatrix(double **matrixA, int rowCount, int columnCount);

bool matrixIsDiagonal(int **matrixA, int rowCount, int columnCount);
bool matrixIsDiagonal(double **matrixA, double rowCount, int columnCount);

void swap(int *numberToSwap1_ptr, int *numberToSwap2_ptr);
void swap(double *numberToSwap1_ptr, double *numberToSwap2_ptr);

int* sortRow(int *array, int columnCount);
double* sortRow(double *array, int columnCount);

int** sortRowsInMatrix(int **matrixA, int rowCount, int columnCount);
double** sortRowsInMatrix(double **matrixA, int rowCount, int columnCount);

#endif //PROJEKT_MATRIXLIB_H
