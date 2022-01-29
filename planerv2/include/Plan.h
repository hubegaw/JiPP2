#ifndef UNTITLED_PLAN_H
#define UNTITLED_PLAN_H

#include <vector>
#include <fstream>
#include "Day.h"
#include "Planer.h"

class Plan : public Planer, public Day {
private:
    std::string week[WeekSize] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    /**
     * container for days in plan (week)
     */
    std::vector<Day> plan;

    std::fstream myPlan;

    int *forDestructorPurpose;
public:
    /**
     * default constructor for Plan class
     */
    Plan();

    /**
     * destructor for Plan class
     */
    ~Plan();

    /**
     * function used to print plan in the console
     */
    void printPlan() override;

    /**
     * function used to print plan to file
     * @param toFile - needed only to overload a method
     */
    void printPlan(bool toFile);

    /**
     * function used for editing chosen day
     */
    void editDay() override;

    /**
     * function displays application interface
     */
    void weekInterface() override;

    /**
     * function used to export a plan to file
     */
    void exportPlan() override;

    /**
     * function used to export a plan to a database
     * @param toDataBase - needed only to overload a method
     */
    void exportPlan(bool toDataBase);

    /**
     * function used to import a plan from a database
     */
    void importPlan() override;

    /**
     * function checks if file was opened correctly
     * @param fileName - name of the file to check
     */
    void checkFileToWrite(std::string fileName);

    /**
     * function checks if file was opened correctly
     * @param fileName - name of the file to check
     */
    void checkFileToRead(std::string fileName);
};

/**
 * function is used to extract task number from a file
 * @param myPlan - file name
 * @param max_ptr - pointer to a variable which takes the number of tasks
 * @return returns 1 in case of success or -1 in case of fail
 */
int takeTasksNumber(std::fstream &myPlan, int *max_ptr);

#endif //UNTITLED_PLAN_H
