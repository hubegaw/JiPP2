#include <iostream>
#include <string>
#include "../include/Plan.h"
#include "../include/PlanerExceptions.h"

using namespace std;

void Plan::exportPlan() {
    try {
    checkFileToWrite("myPlan.txt");
    }
    catch (FileError &e) {
        cerr << e.fileError();
        return;
    }

    printPlan(true);
    cout << "\nUdalo sie zapisac plan!\n\n";

    myPlan.close();
}

void Plan::exportPlan(bool toDataBase) {
    try {
        checkFileToWrite("dataBase.csv");
    }
    catch (FileError &e) {
        cerr << e.fileError();
        return;
    }

    for(auto & day : plan) {
        myPlan << day.getDaySize() << ",";
        day.exportDay(myPlan, true);
        myPlan << "\n";
    }

    myPlan.close();
}

void Plan::printPlan(bool toFile) {
    for(auto & day : plan) {
        myPlan << "________________________\n\t" << day.getDayName() << "\n\n";
        day.exportDay(myPlan);
    }
}

void Plan::importPlan() {
    int counter = 0, max, j=0;
    int *max_ptr = &max;
    string line, newLineSign;

    try {
        checkFileToRead("dataBase.csv");
    }
    catch (FileError &e) {
        cerr << e.fileError();
        return;
    }

    while(!myPlan.eof()) {
        if(counter == 0) {
            if(takeTasksNumber(myPlan, max_ptr)==-1)
                return;
            counter++;
        } else {
            for(int i = 0; i < max; i++) {
                if(i == max-1) {
                    getline(myPlan, line, '\n');
                }else {
                    getline(myPlan, line, ',');
                }
                plan[j].addTask(line);
            }
            j++;
            counter = 0;
        }
    }
    myPlan.close();
}

int takeTasksNumber(fstream &myPlan, int *max_ptr) {
    string max;
    getline(myPlan, max, ',');

    if(max == "\n") {
        return -1;
    }
    try {
        *max_ptr = stoi(max);

        if(*max_ptr < 0) {
            throw NegativeNumber(*max_ptr);
        }
    } catch(invalid_argument &e1) {
        cerr << "Podano znak niebedacy liczba!\n";
        cerr << e1.what() << endl;
        return -1;
    }
    catch(NegativeNumber &e2) {
        cerr << "Podana liczba zadan jest ujemna!\n";
        cerr << e2.negativeNumber() << endl;
        return -1;
    }
    return 1;
}

void Day::exportDay(std::fstream & myPlan) {
    int i = 1;
    for(auto task : dayPlan) {
        myPlan << i << "." << endl;
        task.exportTasks(myPlan);
        myPlan << endl;
        i++;
    }
}

void Day::exportDay(fstream & myPlan, bool toDataBase) {
    int j = 0;
    for(auto task : dayPlan) {
        task.exportTasks(myPlan, true);

        if(j != dayPlan.size()-1) {
            myPlan << ",";
            j++;
        }
    }
}

void Task::exportTasks(std::fstream & myPlan) {
    myPlan << task << "\n";
}

void Task::exportTasks(std::fstream & myPlan, bool toDataBase) {
    myPlan << task;
}

void Plan::checkFileToWrite(std::string fileName) {
    myPlan.open(fileName, ios::out);

    if(!myPlan.is_open())
        throw FileError("Nie udalo sie otworzyc pliku\n");
}

void Plan::checkFileToRead(std::string fileName) {
    myPlan.open(fileName, ios::in);

    if(!myPlan.is_open())
        throw FileError("Nie udalo sie otworzyc pliku\n");
}