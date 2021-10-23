#ifndef PROJEKT_FUNCTIONS_H
#define PROJEKT_FUNCTIONS_H
#include <iostream>
#include <stdlib.h>
using namespace std;

void startInstructions();
int** createMatrix(int matrixType,int lineCount, int columnCount);
double** createMatrix(int lineCount, int columnCount);
void showMatrix(int **matrix, int lineCount, int columnCount);
void showMatrix(double **matrix, int lineCount, int columnCount);
int** fillMatrix(int **matrix, int lineCount, int columnCount);
double** fillMatrix(double **matrix, int lineCount, int columnCount);
void enterSize(int *lineCount, int *columnCount);
void help();
void chooseAction(int choice);

#endif //PROJEKT_FUNCTIONS_H

