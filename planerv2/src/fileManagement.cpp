#include <iostream>
#include <string>
#include <iostream>
#include "../include/Plan.h"

using namespace std;

void Plan::exportPlan() {
    checkFileToWrite("MyFile.txt");

    printPlan(true);

    myPlan.close();
}

void Plan::exportPlan(bool toDataBase) {
    checkFileToWrite("dataBase.csv");

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
    int counter = 0;
    std::string line;

    checkFileToRead("dataBase.csv");


    myPlan.close();
}

void Task::exportTasks(std::fstream & myPlan) {
    myPlan << task << "\n";
}

void Task::exportTasks(std::fstream & myPlan, bool toDataBase) {
    myPlan << task;
}

void Plan::checkFileToWrite(std::string fileName) {
    try {
        myPlan.open(fileName, ios::out);
    }
    catch(const invalid_argument& e) {
        cout << "Nie udalo sie otworzyc pliku: " << e.what() << endl;
    }
}

void Plan::checkFileToRead(std::string fileName) {
    try {
        myPlan.open(fileName, ios::in);
    }
    catch(const invalid_argument& e) {
        cout << "Nie udalo sie otworzyc pliku: " << e.what() << endl;
    }
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
    for(auto task : dayPlan) {
        task.exportTasks(myPlan, true);
        myPlan << ",";
    }
}