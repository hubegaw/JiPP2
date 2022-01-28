#ifndef UNTITLED_DAY_H
#define UNTITLED_DAY_H

#include <vector>
#include "Task.h"

class Day : public Task {
protected:
    std::string dayName;

    int numberOfTasks;

    /**
     * container for tasks in a day
     */
    std::vector<Task> dayPlan;

public:
    /**
     * default constructor for Day class
     */
    Day();

    /**
     *constructor for Day class
     * @param dayName - name of the day
     */
    Day(std::string dayName);

    /**
     * function used to add multiple tasks
     */
    void addTasks();

    /**
     * function used to add one task
     * @param task - task description
     */
    void addTask(std::string task);

    /**
     * function used to remove task from a day
     * @param taskNumber - number of task to remove
     */
    void removeTask(int taskNumber);

    /**
     *function used to remove all task from a day
     */
    void removeAllTasks();

    /**
     * function used to print tasks in the console
     */
    void printTasks();

    /**
     * function used to export day to file
     * @param myPlan - name of the file
     */
    void exportDay(std::fstream & myPlan);

    /**
     * function used to export day to database
     * @param myPlan - name of the database file
     * @param toDataBase - needed to overload a method
     */
    void exportDay(std::fstream & myPlan, bool toDataBase);


    /**
     * function used to check if there are already any tasks in day
     * @return returns 1 if empty, 0 if not
     */
    int checkIfTasksListIsEmpty();

    /**
     * function displays menu for a day when there are no tasks in the day
     */
    void caseNoTasksInList();

    /**
     * function displays menu for a day when there are task in the day
     */
    void caseTasksInList();

    /**
     * day name getter
     * @return returns day name
     */
    std::string getDayName();

    /**
     * day size getter
     * @return returns number of tasks in a day
     */
    int getDaySize();

    /**
     * day size setter
     * @param numberOfTasks - number of tasks given from a file
     */
    void setDaySize(int numberOfTasks);
};

#endif //UNTITLED_DAY_H
