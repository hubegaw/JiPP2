#ifndef PROJEKT_MATRIXLIB_H
#define PROJEKT_MATRIXLIB_H

#include <iostream>
using namespace std;

int** addMatrix(int **matrixA, int **matrixB, int **matrix, int lineCount, int columnCount);
double** addMatrix(double **matrixA, double **matrixB, double **matrix, int lineCount, int columnCount);

void subtractMatrix(int **matrixA, int **matrixB, int *lineCount, int *columnCount);
void subtractMatrix(double **matrixA, double **matrixB, int *lineCount, int *columnCount);

void multiplyMatrix(int **matrixA, int **matrixB, int *lineCountA, int *columnCountA, int *columnCountB);
void multiplyMatrix(double **matrixA, double **matrixB, int *lineCountA, int *columnCountA, int *columnCountB);

void multiplyByScalar(int **matrixA, int *lineCount, int *columnCount, int *scalar);
void multiplyByScalar(double **matrixA, int *lineCount, int *columnCount, int *scalar);

void transpozeMatrix(int **matrixA, int *lineCount, int *columnCount);
void transpozeMatrix(double **matrixA, int *lineCount, int *columnCount);

void powerMatrix(int **matrixA, int *lineCount, int *columnCount, unsigned *power);
void powerMatrix(double **matrixA, int *lineCount, int *columnCount, unsigned *power);

int powerMatrix(int **matrixA, int *lineCount, int *columnCount);
double powerMatrix(double **matrixA, int *lineCount, int *columnCount);

bool matrixIsDiagonal(int **matrixA, int *lineCount, int *columnCount);
bool matrixIsDiagonal(double **matrixA, double *lineCount, int *columnCount);

int swap(int *a, int *b);
double swap(double *a, double *b);

void sortRow(int *array, int *lineCount, int *columnCount);
void sortRow(double *array, int *lineCount, int *columnCount);

void sortRowsInMatrix(int **matrixA, int *lineCount, int *columnCount);
void sortRowsInMatrix(double **matrixA, int *lineCount, int *columnCount);

#endif //PROJEKT_MATRIXLIB_H
