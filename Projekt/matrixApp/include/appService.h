#ifndef PROJEKT_APPSERVICE_H
#define PROJEKT_APPSERVICE_H
#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>
#include <matrixLib.h>
using namespace std;

void startInstructions();
void help();
void enterSize(int *lineCountA, int *columnCountA, int *lineCountB, int *columnCountB);
void enterSize(int *lineCount, int *columnCount, int *scalar);
void enterSize(int *lineCount, int *columnCount, double *scalar);
void chooseAction(const char *choice, int argc, const char *matrixType);

int** createMatrix(const char *matrixType,int lineCount, int columnCount);
double** createMatrix(int lineCount, int columnCount);

void showMatrix(int **matrix, int lineCount, int columnCount);
void showMatrix(double **matrix, int lineCount, int columnCount);
void displayMatrixSupport(int** MatrixA, int** MatrixB, int lineCountA, int columnCountA, int lineCountB, int columnCountB);
void displayMatrixSupport(double** MatrixA, double** MatrixB, int lineCountA, int columnCountA, int lineCountB, int columnCountB);

int** fillMatrix(int **matrix, int lineCount, int columnCount);
double** fillMatrix(double **matrix, int lineCount, int columnCount);
/*
void intMatrixService(const char *matrixType, int lineCountA, int columnCountA, int lineCountB, int columnCountB, int **intMatrixA, int **intMatrixB);
void intMatrixService(const char *matrixType, int lineCountA, int columnCountA, int lineCountB, int columnCountB, int **intMatrixA);
void doubleMatrixService(int lineCountA, int columnCountA, int lineCountB, int columnCountB, double **intMatrixA);
void doubleMatrixService(int lineCountA, int columnCountA, int lineCountB, int columnCountB, double **doubleMatrixA, double **doubleMatrixB);
*/
#endif //PROJEKT_APPSERVICE_H

