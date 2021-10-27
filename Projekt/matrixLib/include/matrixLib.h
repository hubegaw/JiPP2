#ifndef PROJEKT_MATRIXLIB_H
#define PROJEKT_MATRIXLIB_H
using namespace std;

int** addMatrix(int **matrixA, int **matrixB, int **matrix, int lineCount, int columnCount);
double** addMatrix(double **matrixA, double **matrixB, double **matrix, int lineCount, int columnCount);

int** subtractMatrix(int **matrixA, int **matrixB, int **matrix, int lineCount, int columnCount);
double** subtractMatrix(double **matrixA, double **matrixB, double **matrix, int lineCount, int columnCount);

int** multiplyMatrix(int **matrixA, int **matrixB, int **matrix, int lineCountA, int columnCountA, int columnCountB);
double** multiplyMatrix(double **matrixA, double **matrixB, double **matrix, int lineCountA, int columnCountA, int columnCountB);

int** multiplyByScalar(int **matrixA, int **matrix, int lineCount, int columnCount, int scalar);
double** multiplyByScalar(double **matrixA, double **matrix, int lineCount, int columnCount, double scalar);

int** transpozeMatrix(int **matrixA, int **matrix, int lineCount, int columnCount);
double** transpozeMatrix(double **matrixA, double **matrix, int lineCount, int columnCount);

int** powerMatrix(int **matrixA, int **matrix, int rowCount, int columnCount, unsigned power);
double** powerMatrix(double **matrixA, double **matrix, int rowCount, int columnCount, unsigned power);

int determinantMatrix(int **matrixA, int **matrix, int rowCount);
double determinantMatrix(double **matrixA, double **matrix, int rowCount);

bool matrixIsDiagonal(int **matrixA, int rowCount, int columnCount);
bool matrixIsDiagonal(double **matrixA, double rowCount, int columnCount);

void swap(int *numberToSwap1_ptr, int *numberToSwap2_ptr);
void swap(double *numberToSwap1_ptr, double *numberToSwap2_ptr);

int* sortRow(int *array, int columnCount);
double* sortRow(double *array, int columnCount);

int** sortRowsInMatrix(int **matrixA, int rowCount, int columnCount);
double** sortRowsInMatrix(double **matrixA, int rowCount, int columnCount);

#endif //PROJEKT_MATRIXLIB_H
