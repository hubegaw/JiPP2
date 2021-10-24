#include "../include/functions.h"

void startInstructions() {
    cout << "Program do roznych dzialan na macierzach.\n\nWybierz:" << endl;
    cout << "1. dodawanie dwoch macierzy\n2. odejmowanie dwoch macierzy\n3. mnozenie dwoch macierzy\n4. mnozenie przez skalar\n";
    cout << "5. transponowanie macierzy\n6. potegowanie macierzy\n7. wyznacznik macierzy\n8. sprawdzanie, czy macierz jest diagonalna\n";
    cout << "9. zamiana dwoch wartosci miejscami\n10. sortowanie tablicy\n11. sortowanie wszystkich wierszy w macierzy\n12. wyswietla pomoc\n" << endl;
}

void help() {
    cout << "Macierze moga byc typu int lub double, wiersze i kolumn jedynie typu int\n" << endl;
    cout << "Wprowadz odpowiednio dla:" << endl;
    cout << "1. ilosc wierszy, ilosc kolumn, macierz A oraz macierz B\n2. ilosc wierszy, ilosc kolumn, macierz A oraz macierz\n"
            "3. ilosc wierszy pierwszej macierzy, ilosc kolumn pierwszej macierzy, ilosc kolumn drugiej macierzy"
            "4. ilosc  wierszy, ilosc kolumn, skalar oraz macierz A\n5. ilosc  wierszy, ilosc kolumn, macierz A\n"
            "6. ilosc  wierszy, ilosc kolumn, stopien potegi, macierz A\n7. ilosc  wierszy, ilosc kolumn, macierz A\n"
            "8. ilosc  wierszy, ilosc kolumn, macierz A\n9. liczba a, liczba b\n10. ilosc kolumn, tablica\n"
            "11. ilosc wierszy, ilosc kolumn, macierz A";
}

void chooseAction(const char *choice) {
    const char *choices[] = {"addMatrix", "subtractMatrix", "multiplyMatrix", "multiplyByScalar", "transpozeMatrix", "powerMatrix",
                        "determinantMatrix", "matrixIsDiagonal", "swap", "sortRow", "sortRowsInMatrix", "help"};
    bool flag = false;
    for(int i = 0; i < 12; i++) {
        if(strcmp(choice, choices[i])) flag = true;
    }
    if(flag == false)
        throw invalid_argument("\nBledny wybor!\n");
}

void enterSize(int *lineCountA, int *columnCountA, int *lineCountB, int *columnCountB) {
    cout << "\nPodaj liczbe wierszy macierzy A: ";
    cin >> *lineCountA;
    cout << "\nPodaj liczbe kolumn macierzy A: ";
    cin >> *columnCountA;

    cout << "\nPodaj liczbe wierszy macierzy B: ";
    cin >> *lineCountB;
    cout << "\nPodaj liczbe kolumn macierzy B: ";
    cin >> *columnCountB;
}

int** createMatrix(int matrixType, int lineCount, int columnCount) {
    int **matrix = new int*[lineCount];
    for(int i = 0; i < lineCount; i++)
        matrix[i] = new int[columnCount];
    return matrix;
}

double** createMatrix(int lineCount, int columnCount) {
    double **matrix = new double*[lineCount];
    for(int i = 0; i < lineCount; i++)
        matrix[i] = new double[columnCount];
    return matrix;
}

void showMatrix(int **matrix, int lineCount, int columnCount) {
    for(int i = 0; i < lineCount; i++) {
        for(int j = 0; j < columnCount; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

void showMatrix(double **matrix, int lineCount, int columnCount) {
    for(int i = 0; i < lineCount; i++) {
        for(int j = 0; j < columnCount; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

int** fillMatrix(int **matrix, int lineCount, int columnCount) {
    for(int i = 0; i < lineCount; i++) {
        for(int j = 0; j < columnCount; j++) {
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

double** fillMatrix(double **matrix, int lineCount, int columnCount) {
    for(int i = 0; i < lineCount; i++) {
        for(int j = 0; j < columnCount; j++) {
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

void displayMatrixSupport(int** MatrixA, int** MatrixB, int lineCountA, int columnCountA, int lineCountB, int columnCountB) {
    cout << "Macierz A\n";
    showMatrix(MatrixA, lineCountA, columnCountA);

    cout << "Macierz B\n";
    showMatrix(MatrixB, lineCountB, columnCountB);
}

void displayMatrixSupport(double** MatrixA, double** MatrixB, int lineCountA, int columnCountA, int lineCountB, int columnCountB) {
    cout << "Macierz A\n";
    showMatrix(MatrixA, lineCountA, columnCountA);

    cout << "Macierz B\n";
    showMatrix(MatrixB, lineCountB, columnCountB);
}