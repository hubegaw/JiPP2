#ifndef CWICZENIE4_FUNCTIONS_H
#define CWICZENIE4_FUNCTIONS_H
#include <iostream>
#include <string>

struct SAMOCHOD {
    std::string marka;
    std::string model;
    int rokProdukcji;
    int przebieg;
    std::string kolor;
};

class Prostopadloscian {
private:
    int szerokosc;
    int wysokosc;
    int glebokosc;

public:
    void ustawSzerokosc(int podanaSzerokosc);
    void ustawWysokosc(int podanaWysokosc);
    void ustawGlebokosc(int podanaGlebokosc);
    int liczPolePow();
};

class Kula {
private:
    int promien;

public:
    void ustawPromien(int podanaSzerokosc);
    double liczObjetosc();
};

class FunkcjaKwadratowa {
private:
    int a;
    int b;
    int c;

public:
    void ustawA(int a);
    void ustawB(int B);
    void ustawC(int C);
    void wyswietl();
};

class Student {
private:
    std::string imie;
    std::string nazwisko;
    int nrAlbumu;
    double liczbaPytan;
    double liczbaPoprOdp;

public:
    void ustawImie(std::string imie);
    void ustawNazwisko(std::string nazwisko);
    void ustawNrAlbumu(int nrAlbumu);
    void ustawLiczbePytan(double liczbaPytan);
    void ustawLiczbePoprOdp(double liczbaPoprOdp);
    double liczProcent();
};

class Punkt {
public:
    int x;
    int y;

    Punkt(int x, int y);
};

class Figura {
public:
    int liczbaWierzch;
    int *tablica;

    Figura(int liczbaWierzch);
};

class Klasa {
public:
    int *tablica;
    Klasa();
    ~Klasa();
};

int* liczTeSameModele(SAMOCHOD samochod[], int liczbaPojazdow);
double liczOdleglosc(int x_a, int y_a, int x_b, int y_b);

#endif //CWICZENIE4_FUNCTIONS_H
