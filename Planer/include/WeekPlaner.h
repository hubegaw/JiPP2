#ifndef PLANER_WEEKPLANER_H
#define PLANER_WEEKPLANER_H

#include "Day.h"

class WeekPlan : public Day {
protected:
    int weekNumber=0;

public:
    virtual void createWeek();

    virtual void showWeekPlan();

    virtual void addWeekPlan();

    virtual void deleteWeekPlan();

};

#endif //PLANER_WEEKPLANER_H
