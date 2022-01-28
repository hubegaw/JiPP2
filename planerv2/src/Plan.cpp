#include <iostream>
#include <string>
#include "../include/Plan.h"

using namespace std;

Plan::Plan() {
    forDestructorPurpose = new int[20];

    for(auto & dayName : week) {
        Day day(dayName);
        plan.push_back(day);
    }
}

Plan::~Plan() {
    delete forDestructorPurpose;
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

    cout << "*****************************\n\n\tPlaner\n\n*****************************\n\n";

    while(1) {
        cout << "Wybierz co chcesz zrobic:\n'e' - edytuj dzien\n'w' - wyswietl tydzien\n"
                "'s' - exportuj plan do pliku\n'i' - importuj plan\n'q' - wyjdz z programu\n";

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
            case 'i':
                importPlan();
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
