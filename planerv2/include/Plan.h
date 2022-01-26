#ifndef UNTITLED_PLAN_H
#define UNTITLED_PLAN_H

#include <vector>
#include <fstream>
#include "Day.h"
#include "Planer.h"

class Plan : public Planer, public Day {
private:

    std::vector<Day> plan;

    int weekNumber=0;

    std::fstream myPlan;
public:
    Plan();

    //~Plan();

    void printPlan() override;

    void printPlan(bool toFile);

    void editDay() override;

    int getWeekNumber();

    void weekInterface() override;

    void exportPlan() override;

    void exportPlan(bool toDataBase);

    void importPlan() override;

    void importPlan(bool toFile);

    void checkFileToWrite(std::string fileName);

    void checkFileToRead(std::string fileName);
};

#endif //UNTITLED_PLAN_H
