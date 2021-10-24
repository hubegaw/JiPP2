#ifndef PROJEKT_FUNCTIONS_H
#define PROJEKT_FUNCTIONS_H
#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>
using namespace std;

void startInstructions();
void help();
void enterSize(int *lineCountA, int *columnCountA, int *lineCountB, int *columnCountB);
void chooseAction(const char *choice);

int** createMatrix(int matrixType,int lineCount, int columnCount);
double** createMatrix(int lineCount, int columnCount);

void showMatrix(int **matrix, int lineCount, int columnCount);
void showMatrix(double **matrix, int lineCount, int columnCount);
void displayMatrixSupport(int** MatrixA, int** MatrixB, int lineCountA, int columnCountA, int lineCountB, int columnCountB);
void displayMatrixSupport(double** MatrixA, double** MatrixB, int lineCountA, int columnCountA, int lineCountB, int columnCountB);

int** fillMatrix(int **matrix, int lineCount, int columnCount);
double** fillMatrix(double **matrix, int lineCount, int columnCount);

#endif //PROJEKT_FUNCTIONS_H

