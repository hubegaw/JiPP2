#ifndef PLANER_WEEK_H
#define PLANER_WEEK_H

#include "WeekPlaner.h"

#define WeekSize 7

class Week : public WeekPlan {
protected:
    string week[WeekSize] = {"Poniedziałek", "Wtorek", "Środa", "Czwartek", "Piątek", "Sobota", "Niedziela"};


public:
    virtual void createWeek();

    virtual void showWeekPlan();

    virtual void addNewWeekPlan();

    virtual void deleteWeekPlan();

    void addDay();

    void removeDay();

};


#endif //PLANER_WEEK_H
