#include "../include/functions.h"
#include <math.h>

int* liczTeSameModele(SAMOCHOD samochod[], int liczbaPojazdow) {
    int *ileModeli = new int[liczbaPojazdow];
    for(int i = 0; i < liczbaPojazdow; ++i) {
        ileModeli[i] = 0;
        for(int j = 0; j < liczbaPojazdow; ++j) {
            if(samochod[i].model == samochod[j].model) ileModeli[i]++;
        }
    }
    return ileModeli;
}

void Prostopadloscian::ustawSzerokosc(int podanaSzerokosc) {
    szerokosc = podanaSzerokosc;
}

void Prostopadloscian::ustawWysokosc(int podanaWysokosc) {
    wysokosc = podanaWysokosc;
}

void Prostopadloscian::ustawGlebokosc(int podanaGlebokosc) {
    glebokosc = podanaGlebokosc;
}

int Prostopadloscian::liczPolePow() {
    int PolePowierzchni = 2*glebokosc*szerokosc + 2*szerokosc*wysokosc + 2*glebokosc*wysokosc;
    return PolePowierzchni;
}

void Kula::ustawPromien(int podanyPromien) {
    promien = podanyPromien;
}

double Kula::liczObjetosc() {
    double Objetosc = (4*3.1416*promien*promien*promien)/3;
    return Objetosc;
}

void FunkcjaKwadratowa::ustawA(int a) {
    this->a = a;
}

void FunkcjaKwadratowa::ustawB(int b) {
    this->b = b;
}

void FunkcjaKwadratowa::ustawC(int c) {
    this->c = c;
}

void FunkcjaKwadratowa::wyswietl() {
    std::cout << "\nf(x) = " << a <<"x^2 + " << b << "x + " << c << std::endl;
}

void Student::ustawImie(std::string imie) {
    this->imie = imie;
}

void Student::ustawNazwisko(std::string nazwisko) {
    this->nazwisko = nazwisko;
}

void Student::ustawNrAlbumu(int nrAlbumu) {
    this->nrAlbumu = nrAlbumu;
}

void Student::ustawLiczbePytan(double liczbaPytan) {
    this->liczbaPytan = liczbaPytan;
}

void Student::ustawLiczbePoprOdp(double liczbaPoprOdp) {
    this->liczbaPoprOdp = liczbaPoprOdp;
}

double Student::liczProcent() {
    double wynik = (this->liczbaPoprOdp/this->liczbaPytan)*100;
    return wynik;
}

Punkt::Punkt(int x, int y) {
    this->x = x;
    this->y = y;
}

double liczOdleglosc(int x_a, int y_a, int x_b, int y_b) {
    double odleglosc = sqrt(pow(x_b-x_a,2)+pow(y_b-y_a,2));
    return odleglosc;
}

Figura::Figura(int liczbaWierzch) {
    this->liczbaWierzch = liczbaWierzch;
    this->tablica = new int[this->liczbaWierzch];
}

Klasa::Klasa() {
    std::cout << "\nKonstruktor nie zostal wywolany!" << std::endl;
}

Klasa::~Klasa() {
    std::cout << "\nusuwam zaalokowana tablice\n";
}