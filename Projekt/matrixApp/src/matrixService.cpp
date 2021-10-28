#include "../include/appService.h"

// funkcja tworzy macierz int lub double w zależności
// co podał użytkownik do zmiennej matrixType
Matrix::Matrix(const char* matrixType, int setRowCount, int setColumnCount) {
    rowCount = setRowCount;
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

//funkcja pozwalająca wypełnić liczbami macierz,
// sama dobiera czy jest to macierz typu int czy double
void Matrix::fillMatrix(const char* matrixType){
    if(strcmp(matrixType, "int") == 0) {
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

// funkcja pozwalająca wyświetlić macierz w zależności czy jest typu int czy double
void Matrix::showMatrix(const char *matrixType){
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

// funkcja wczytuje od użytkownika rozmiar macierzy oraz
// sprawdza czy wymiary są poprawne
void setMatrixSize(int *rowCount_ptr, int *columnCount_ptr) {

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

//funkcja pozwalająca wczytać skalar przez użytkownika
void Matrix::setScalar(const char *matrixType) {
    if (strcmp(matrixType, "int") == 0)
        if(cin >> intScalar){}//nic nie rób
        else
            throw invalid_argument("\nNiepoprawna dana!\n");

    else if (strcmp(matrixType, "double") == 0)
        if(cin >> doubleScalar){}//nic nie rób
        else
            throw invalid_argument("\nNiepoprawna dana!\n");
}

// funkcja pozwalająca wczytać potęge przez użytkownika, sprawdza poprawność podanej wartości
void Matrix::setPower() {
    cout << "Podaj potege:";
    if(cin >> power){}//nic nie rób
    else
        throw invalid_argument("\nNiepoprawna dana!\n");
}

// funkcja ma za zadanie wspomóc proces wypełniania
// macierzy oraz ich wyświetlanie
void fillAndDisplay(Matrix matrixA, Matrix matrixB, const char *matrixType) {
    cout << "Wprowadz macierz A\n";
    matrixA.fillMatrix(matrixType);
    cout << "Wprowadz macierz B\n";
    matrixB.fillMatrix(matrixType);

    cout << "\nmacierz A:" << endl;
    matrixA.showMatrix(matrixType);
    cout << "\nmacierz B:" << endl;
    matrixB.showMatrix(matrixType);
}

// przeciążona funkcja wspomagająca wypełnienie i wyświetlenie jednej macierzy
void fillAndDisplay(Matrix matrixA, const char *matrixType) {
    cout << "Wprowadz macierz A\n";
    matrixA.fillMatrix(matrixType);

    cout << "\nmacierz A:" << endl;
    matrixA.showMatrix(matrixType);
}

// funkcja pozwalająca wczytać współrzędne liczb w macierzy
// które chcemy ze sobą zamienić miejscami
void CoordinatesToSwapNumbers(int *a1, int *a2, int *b1, int *b2) {
    cout << "\nPodaj wspolrzedne [a][b] liczb, ktore chcesz ze soba zamienic: \nLiczba a:\n";
    if(cin >> *a1 >> *b1){}//nic nie rób
    else
        throw invalid_argument("\nNiepoprawna dana!\n");
    cout << "Liczba b:\n";
    if(cin >> *a2 >> *b2){}//nic nie rób
    else
        throw invalid_argument("\nNiepoprawna dana!\n");

    if(*a1 < 0 || *b1 < 0  || *a2 < 0 || *b2 < 0)
        throw invalid_argument("\nNiepoprawna dana!\n");
}

// funkcja wczytuje od użytkownika wiersz macierzy
int chooseRowToSort(int chooseRow) {
        cout << "Wybierz wiersz do posortowania: \n";
        if(cin >> chooseRow)
            return chooseRow;
         else
            throw invalid_argument("\nNiepoprawna dana!\n");
}