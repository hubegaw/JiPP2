#include <iostream>
#include "../include/functions.h"
using namespace std;

int najstarszeAuto(SAMOCHOD samochod[], int liczbaPojazdow) {
    int najstarsze = samochod[0].rokProdukcji;
    int indeksNajstarszego;
    for(int i = 0; i < liczbaPojazdow; i++) {
        if(samochod[i].rokProdukcji < najstarsze) {
            najstarsze = samochod[i].rokProdukcji;
            indeksNajstarszego = i;
        }
    }
    return indeksNajstarszego;
}

int main(int argc, const char *argv[]) {

    const char *wybor;
    wybor = argv[1];

    if(strcmp(wybor, "struktura") == 0) {
        int liczbaPojazdow = 5;
        int *ileModeli;

        SAMOCHOD samochod[] = {{"Opel",    "Astra",  2000, 210339, "srebrny"},
                               {"Renault", "Clio",   1998, 183967, "czerowny"},
                               {"Fiat",    "Panda",  2005, 148423, "srebrny"},
                               {"Porsche", "Taycan", 2021, 240,    "czarny"},
                               {"Opel",    "Corsa",  2002, 191987, "czerowny"}};

        for (int i = 0; i < liczbaPojazdow; i++) {
            cout << samochod[i].marka << " " << samochod[i].model << "\trok produkcji: " << samochod[i].rokProdukcji
                 << "\tprzebieg: " << samochod[i].przebieg << "km\tkolor: " << samochod[i].kolor << endl;
        }

        ileModeli = liczTeSameModele(samochod, liczbaPojazdow);
        for (int i = 0; i < liczbaPojazdow; i++) {
            cout << "Liczba modeli marki " << samochod[i].marka << " = " << ileModeli[i] << endl;
        }

        cout << "\nindeks najstarszego auta: " << najstarszeAuto(samochod, liczbaPojazdow) << endl;
    }
    else if(strcmp(wybor, "klasa") == 0) {
        Prostopadloscian figura1;

        cout << "podaj wymiary prostopadloscianu [szerokosc][wysokosc][glebokosc]:\n";
        int wysokosc, szerokosc, glebokosc;

        cin >> szerokosc >> wysokosc >> glebokosc;
        figura1.ustawSzerokosc(szerokosc);
        figura1.ustawWysokosc(wysokosc);
        figura1.ustawGlebokosc(glebokosc);

        cout << "Pole prostopadloscianu = " << figura1.liczPolePow() << endl;

        Kula figura2;

        cout << "\n\nPodaj promien: " << endl;
        int promien;
        cin >> promien;

        figura2.ustawPromien(promien);
        cout << "Objetosc kuli = " << figura2.liczObjetosc() << endl;

        FunkcjaKwadratowa funkcja;

        cout << "Podaj a, b oraz c:" << endl;
        int a, b, c;
        cin >> a >> b >> c;

        funkcja.ustawA(a);
        funkcja.ustawB(b);
        funkcja.ustawC(c);
        funkcja.wyswietl();

        Student student;
        cout << "Podaj imie, nazwisko, numer albumu, liczbe pytan oraz liczbe poprawnych odpowiedzi" << endl;

        string imie, nazwisko;
        int nrAlbumu;
        double liczbaPytan, liczbaPoprOdp;
        cin >> imie >> nazwisko >> nrAlbumu >> liczbaPytan >> liczbaPoprOdp;
        student.ustawImie(imie);
        student.ustawNazwisko(nazwisko);
        student.ustawNrAlbumu(nrAlbumu);
        student.ustawLiczbePytan(liczbaPytan);
        student.ustawLiczbePoprOdp(liczbaPoprOdp);

        cout << "Procent poprawnych odpowiedzi = " << student.liczProcent() << "%" << endl;
    }
    else if(strcmp(wybor, "punkt") == 0) {
        int x, y;

        cout << "Podaj wspolrzedne punktu A: " << endl;
        cin >> x >> y;
        Punkt punktA(x,y);

        cout << "Podaj wspolrzedne punktu B: " << endl;
        cin >> x >> y;
        Punkt punktB(x,y);

        cout << "Odleglosc miedzy punktami = " << liczOdleglosc(punktA.x ,punktA.y, punktB.x, punktB.y);

    }
    else if(strcmp(wybor, "figura")==0) {

        int liczbaWierzch;
        cout << "Podaj liczbe wierzcholkow:";
        cin >> liczbaWierzch;

        Figura figura(liczbaWierzch);

        cout << "\nStworzono tablice przechowujaca wierzcholki." << endl;
    }
    else if(strcmp(wybor, "destruktor")==0) {
        cout << "Tworze tablice zawierajaca 1024 elementy typu int\n";

        Klasa *klasa;
        for(int i = 0; i < 1024; i++) {
            klasa->tablica[i] = 1;
        }
        system("PAUSE");
    }

    return 0;
}
