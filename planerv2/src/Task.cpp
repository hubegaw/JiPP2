#include <iostream>
#include <fstream>
#include "../include/Task.h"

using namespace std;

Task::Task() {
    task="";
}

Task::Task(string description) {
    task = description;
}
/*
Task::~Task() {
    cout << "uruchomiono destruktor zadan!\n";
}
*/
bool Task::checkIfTaskExists(int TaskNumber, int size) {
    if(TaskNumber < 1 && TaskNumber > size) {
        cout << "\nNie ma takiego zadania!\n\n";
        return false;
    }
    return true;
}

void Task::printTask() {
    cout << task << "\n";
}

/*
int Task::setStartTime(int startTime) {
    cin >> startTime;
    return startTime;
}

int Task::setEndTime(int endTime) {
    cin >> endTime;
    return endTime;
}

int Task::getStartTime() {
    return this->startTime;
}

int Task::getEndTime() {
    return this->endTime;
}

bool Task::checkIfTasksOverlap(Task otherTask) {
    if((this->startTime <= otherTask.getStartTime() && this->endTime <= otherTask.getEndTime())
        || (this->startTime >= otherTask.getStartTime() && this->endTime >= otherTask.getEndTime())) {
        return true;
    }
    return false;
}
*/
