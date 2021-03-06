#include <iostream>
#include <string>
#include "../include/Day.h"

using namespace std;

Day::Day() {
    dayName="";
}

Day::Day(string day) {
    this->dayName = day;
}

string Day::getDayName() {
    return this->dayName;
}

int Day::getDaySize() {
    return this->dayPlan.size();
}

void Day::addTasks() {
    bool firstTaskAdded = false;
    if(checkIfTasksListIsEmpty()) {
        caseNoTasksInList();
        firstTaskAdded = true;
    }

    if(firstTaskAdded){
        caseTasksInList();
    }
}

void Day::addTask(string task) {
    Task newTask(task);
    dayPlan.emplace_back(newTask);
}

void Day::removeTask(int taskNumber) {
    dayPlan.erase(dayPlan.begin() + taskNumber-1);
}

void Day::removeAllTasks() {
    dayPlan.clear();
}

void Day::printTasks() {
    int i = 1;
    for(auto task : dayPlan) {
        cout << i << "." << endl;
        task.printTask();
        cout << endl;
        i++;
    }
}

bool checkTaskLength(string task) {
    if(task.length() > 80)
        return false;
    else
        return true;
}

int Day::checkIfTasksListIsEmpty() {
    if(this->dayPlan.empty())
        return 1;
    else
        return 0;
}

void Day::caseNoTasksInList() {
    char choice;
    string task;

    while(1) {
        cout << "\n'a' - Dodaj zadanie\n'q' - wyjdz do menu\n\n";

        cin >> choice;

        if(choice == 'a') {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "pisz:\n";
            cout << "\n--------------------------------\n";
            getline(cin, task);
            cout << "\n--------------------------------\n";

            if(!checkTaskLength(task)) {
                cout << "\nOpis zadania jest za dlugi!\n\n";
                break;
            }

            Task newTask(task);
            dayPlan.push_back(newTask);

            return;
        }
        else if(choice == 'q') {
            return;
        } else {
            cout << "\nBledny wybor...\n";
        }
    }
}

void Day::caseTasksInList() {
    char choice;
    string task;
    int TaskNumber;
    bool taskExists = false;

    while(1) {
        cout << "'a' - Dodaj zadanie\n'r' - usun zadanie\n'd' - usun wszystkie zadania\n's' - wyswietl zadania\n"
                "'q' - wyjdz od menu\n";

        cin >> choice;

        if(choice == 'a') {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "pisz:\n";
            cout << "\n--------------------------------\n";
            getline(cin, task);
            cout << "\n--------------------------------\n";

            if(!checkTaskLength(task)) {
                cout << "\nOpis zadania jest za dlugi!\n\n";
                break;
            }

            for(auto &day : dayPlan) {
                if(task==day.getTask()) {
                    cout << "\nTakie zadanie jest juz wpisane!\n\n";
                    taskExists = true;
                    break;
                }
            }

            if(!taskExists) {
                Task newTask(task);
                dayPlan.push_back(newTask);
            }
        } else if(choice == 'r') {
            cout << "Podaj numer zadania do usuniecia:\n";
            cin >> TaskNumber;

            if(!checkIfTaskExists(TaskNumber, dayPlan.size())) {
                break;
            }

            removeTask(TaskNumber);
            dayPlan.shrink_to_fit();
        } else if(choice == 'd') {
            removeAllTasks();
            dayPlan.shrink_to_fit();
        } else if(choice == 's') {
            this->printTasks();
        }
        else if(choice == 'q') {
            return;
        } else {
            cout << "\nBledny wybor...\n";
        }
    }
}