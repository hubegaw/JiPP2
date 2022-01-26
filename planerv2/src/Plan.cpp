#include <iostream>
#include <string>
#include <fstream>
#include <iostream>
#include "../include/Plan.h"

using namespace std;

Plan::Plan() {
    weekNumber += 1;

    for(auto & dayName : week) {
        Day day(dayName);
        plan.push_back(day);
    }
}
/*
Plan::~Plan() {
    cout << "uruchomiono destruktor planu!\n";
}
*/
int Plan::getWeekNumber() {
    return this->weekNumber;
}

void Plan::editDay() {
    string chooseDay;

    while(1) {
        cout << "Wybierz interesujacy cie dzien:\n";
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        getline(cin, chooseDay);

        for (auto &day: plan) {
            if (day.getDayName() == chooseDay) {
                day.addTasks();
                return;
            }
        }
        cout << "Nie ma takiego dnia!\n";
    }
}

void Plan::printPlan() {
    for(auto & day : plan) {
        cout << "________________________\n\t" << day.getDayName() << "\n\n";
        day.printTasks();
    }
}

void Plan::weekInterface() {
    char choice;

    cout << "*****************************\n\tPlaner\n\ttydzien " << getWeekNumber() <<
         "\n*****************************\n\n";

    while(1) {
        cout << "Wybierz co chcesz zrobic:\n'e' - edytuj dzien\n'w' - wyswietl tydzien\n"
                "'s' - exportuj plan do pliku\n'q' - wyjdz z programu\n";

        cin >> choice;

        switch(choice) {
            case 'e':
                editDay();
                break;
            case 'w':
                printPlan();
                break;
            case 's':
                exportPlan();
                exportPlan(true);
                break;
            case 'q':
                return;
            break;
            default:
                cout << "Bledny wybor...\n";
                break;
        }
    }
}
