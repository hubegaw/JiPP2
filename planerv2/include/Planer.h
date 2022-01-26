#ifndef UNTITLED_PLANER_H
#define UNTITLED_PLANER_H

#define WeekSize 7

class Planer {
protected:
    std::string dayName;

    std::string week[WeekSize] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
public:

    virtual void printPlan()=0;

    virtual void editDay()=0;

    virtual void weekInterface()=0;

    virtual void exportPlan()=0;

    virtual void importPlan()=0;
};

#endif //UNTITLED_PLANER_H
