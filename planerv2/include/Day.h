#ifndef UNTITLED_DAY_H
#define UNTITLED_DAY_H

#include <vector>
#include "Task.h"

class Day : public Task {
protected:
    std::string dayName;

    std::vector<Task> dayPlan;
public:
    Day();

    Day(std::string dayName);

    //~Day();

    void addTasks();

    void removeTask(int taskNumber);

    void removeAllTasks();

    void printTasks();

    void exportDay(std::fstream & myPlan);

    void exportDay(std::fstream & myPlan, bool toDataBase);

    int checkIfTasksListIsEmpty();

    void caseNoTasksInList();

    void caseTasksInList();

    std::string getDayName();

    int getDaySize();
};

#endif //UNTITLED_DAY_H
