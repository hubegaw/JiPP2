#include "../include/appService.h"

void startInstructions() {  // funkcja wyświetla pomoc
    cout << "Program do roznych dzialan na macierzach.\n\nWpisz:" << endl;
    cout << "1. addmatrix - dodawanie dwoch macierzy\n2. subtractMatrix - odejmowanie dwoch macierzy\n3. multiplyMatrix - mnozenie dwoch macierzy\n4. multiplyByScalar - mnozenie przez skalar\n";
    cout << "5. transpozeMatrix - transponowanie macierzy\n6. powerMatrix - potegowanie macierzy\n7. determinantMatrix - wyznacznik macierzy\n8. matrixIsDiagonal - sprawdzanie, czy macierz jest diagonalna\n";
    cout << "9. swap - zamiana dwoch wartosci miejscami\n10. sortRow - sortowanie tablicy\n11. sortRowsInMatrix - sortowanie wszystkich wierszy w macierzy\n12. help - wyswietla pomoc\n"
            "\nNastepnie wpisz 'int', jezeli macierz ma byc typu int lub 'double', jezeli macierz ma byc typu double.\n" << endl;
}

void help() {   // funkcja wyświetla pomoc
    cout << "Macierze moga byc typu int lub double, wiersze i kolumn jedynie typu int\n" << endl;
    cout << "Wprowadz odpowiednio dla:" << endl;
    cout << "1. ilosc wierszy, ilosc kolumn, macierz A oraz macierz B\n2. ilosc wierszy, ilosc kolumn, macierz A oraz macierz B\n"
            "3. ilosc wierszy pierwszej macierzy, ilosc kolumn pierwszej macierzy, ilosc kolumn drugiej macierzy\n"
            "4. ilosc  wierszy, ilosc kolumn, skalar oraz macierz A\n5. ilosc  wierszy, ilosc kolumn, macierz A\n"
            "6. ilosc  wierszy, ilosc kolumn, stopien potegi, macierz A\n7. ilosc  wierszy, ilosc kolumn, macierz A\n"
            "8. ilosc  wierszy, ilosc kolumn, macierz A\n9. liczba a, liczba b\n10. ilosc kolumn, tablica\n"
            "11. ilosc wierszy, ilosc kolumn, macierz A";
}

void chooseAction(const char *choice, int argc, const char *matrixType) {   // funkcja sprawdzająca poprawność wczytanych argumentów
    static const char *choices[] = {"addMatrix", "subtractMatrix", "multiplyMatrix", "multiplyByScalar", "transpozeMatrix", "powerMatrix",
                        "determinantMatrix", "matrixIsDiagonal", "swap", "sortRow", "sortRowsInMatrix", "help", "int", "double"};
    static bool flag = false;
    if(argc != 3 && strcmp(choice, choices[11]) != 0)
        throw invalid_argument("\nNiepoprawna liczba argumentow!\n");
    for(int i = 0; i < 12; i++) {
        if(strcmp(choice, choices[i])==0) flag = true;
    }
    if(flag == false && (strcmp(matrixType, choices[12]) != 0 || strcmp(matrixType, choices[13]) != 0))
        throw invalid_argument("\nBledny wybor!\n");
}