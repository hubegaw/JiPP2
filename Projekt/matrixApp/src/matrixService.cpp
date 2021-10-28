#include "../include/appService.h"

Matrix::Matrix(const char* matrixType, int setRowCount, int setColumnCount) {   // funkcja tworzy macierz int lub double w zależności
    rowCount = setRowCount;                                                     // co podał użytkownik do zmiennej matrixType
    columnCount = setColumnCount;

    if(strcmp(matrixType, "int") == 0) {
        intMatrix = new int*[rowCount];
        for (int i = 0; i < rowCount; i++)
            intMatrix[i] = new int[columnCount];
    }
    else if(strcmp(matrixType, "double") == 0) {
        doubleMatrix = new double*[rowCount];
        for (int i = 0; i < rowCount; i++)
            doubleMatrix[i] = new double[columnCount];
    }
}

void Matrix::fillMatrix(const char* matrixType){    //funkcja pozwalająca wypełnić liczbami macierz, sama dobiera czy jest to macierz
    if(strcmp(matrixType, "int") == 0) {            // typu int czy double
        for (int i = 0; i < rowCount; i++)
            for (int j = 0; j < columnCount; j++)
                cin >> intMatrix[i][j];
    }
    else if(strcmp(matrixType, "double") == 0) {
        for (int i = 0; i < rowCount; i++)
            for (int j = 0; j < columnCount; j++)
                cin >> doubleMatrix[i][j];
    }
}

void Matrix::showMatrix(const char *matrixType){    // funkcja pozwalająca wyświetlić macierz w zależności czy jest typu int czy double
    if (strcmp(matrixType, "int") == 0) {
        for (int i = 0; i < rowCount; i++) {
            for (int j = 0; j < columnCount; j++)
                cout << intMatrix[i][j] << " ";
            cout << endl;
        }
    } else if (strcmp(matrixType, "double") == 0) {
        for (int i = 0; i < rowCount; i++) {
            for (int j = 0; j < columnCount; j++)
                cout << doubleMatrix[i][j] << " ";
            cout << endl;
        }
    }
}

void setMatrixSize(int *rowCount_ptr, int *columnCount_ptr) {   // funkcja wczytuje od użytkownika rozmiar macierzy oraz
                                                                // sprawdza czy wymiary są poprawne
    cout << "Podaj liczbe wierszy:";
    if(cin >> *rowCount_ptr){}//nic nie rób
    else
        throw invalid_argument("\nNiepoprawna dana!\n");

    cout << "Podaj liczbe kolumn:";
    if(cin >> *columnCount_ptr){}//nic nie rób
    else
        throw invalid_argument("\nNiepoprawna dana!\n");

    if(*rowCount_ptr <=0 || *columnCount_ptr <=0)
        throw invalid_argument("\n\nBledny rozmiar macierzy!");
}

void Matrix::setScalar(const char *matrixType) {    //funkcja pozwalająca wczytać skalar przez użytkownika
    if (strcmp(matrixType, "int") == 0)
        if(cin >> intScalar){}//nic nie rób
        else
            throw invalid_argument("\nNiepoprawna dana!\n");
    else if (strcmp(matrixType, "double") == 0)
        if(cin >> doubleScalar){}//nic nie rób
        else
            throw invalid_argument("\nNiepoprawna dana!\n");
}
void Matrix::setPower() {       // funkcja pozwalająca wczytać potęge przez użytkownika
    cout << "Podaj potege:";
    if(cin >> power){}//nic nie rób
    else
        throw invalid_argument("\nNiepoprawna dana!\n");
}

void fillAndDisplay(Matrix matrixA, Matrix matrixB, const char *matrixType) {   // funkcja ma za zadanie wspomóc proces wypełniania
    cout << "Wprowadz macierz A\n";                                             // macierzy oraz ich wyświetlanie
    matrixA.fillMatrix(matrixType);
    cout << "Wprowadz macierz B\n";
    matrixB.fillMatrix(matrixType);

    cout << "\nmacierz A:" << endl;
    matrixA.showMatrix(matrixType);
    cout << "\nmacierz B:" << endl;
    matrixB.showMatrix(matrixType);
}

void fillAndDisplay(Matrix matrixA, const char *matrixType) {   // przeciążona funkcja wspomagająca wypełnienie i wyświetlenie jednej macierzy
    cout << "Wprowadz macierz A\n";
    matrixA.fillMatrix(matrixType);

    cout << "\nmacierz A:" << endl;
    matrixA.showMatrix(matrixType);
}

void CoordinatesToSwapNumbers(int *a1, int *a2, int *b1, int *b2) {                             // funkcja pozwalająca wczytać współrzędne liczb w macierzy
    cout << "\nPodaj wspolrzedne [a][b] liczb, ktore chcesz ze soba zamienic: \nLiczba a:\n";   // które chcemy ze sobą zamienić miejscami
    cin >> *a1 >> *b1;
    cout << "Liczba b:\n";
    cin >> *a2 >> *b2;

    if(*a1 < 0 || *b1 < 0  || *a2 < 0 || *b2 < 0)
        throw invalid_argument("\nNiepoprawna dana!\n");
}

int chooseRowToSort(int chooseRow) {                  // funkcja wczytuje od użytkownika wiersz macierzy
        cout << "Wybierz wiersz do posortowania: \n";
        if (cin >> chooseRow)
            return chooseRow;
         else
            throw invalid_argument("\nNiepoprawna dana!\n");
}