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

int powerMatrix(int **matrixA, int lineCount, int columnCount);
double powerMatrix(double **matrixA, int lineCount, int columnCount);

bool matrixIsDiagonal(int **matrixA, int lineCount, int columnCount);
bool matrixIsDiagonal(double **matrixA, double lineCount, int columnCount);

int swap(int *a, int *b);
double swap(double *a, double *b);

void sortRow(int *array, int lineCount, int columnCount);
void sortRow(double *array, int lineCount, int columnCount);

void sortRowsInMatrix(int **matrixA, int lineCount, int columnCount);
void sortRowsInMatrix(double **matrixA, int lineCount, int columnCount);

#endif //PROJEKT_MATRIXLIB_H
