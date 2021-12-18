#ifndef PLANER_WEEKPLANER_H
#define PLANER_WEEKPLANER_H

#include <iostream>
#include <list>
#include "Task.h"

using namespace std;

class WeekPlaner: public Task{
protected:
    string month;
    string day;
    int hour;
    int minute;
    list<Task> PLanForTheDay;
public:

};

#endif //PLANER_WEEKPLANER_H
