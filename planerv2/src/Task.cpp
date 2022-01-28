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

string Task::getTask() const{
    return this->task;
}

bool Task::checkIfTaskExists(int TaskNumber, int size) {
    if(TaskNumber < 1 && TaskNumber > size) {
        cout << "\nNie ma takiego zadania!\n\n";
        return false;
    }
    return true;
}

bool Task::operator==(const Task &otherTask) const {
    if(this->task == otherTask.getTask()) {
        return true;
    }
    return false;
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
*/
