#ifndef UNTITLED_PLANER_H
#define UNTITLED_PLANER_H

#define WeekSize 7

class Planer {
protected:
    std::string dayName;

    std::string week[WeekSize] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
public:

    /**
     * virtual method to print a plan in the console
     */
    virtual void printPlan()=0;

    /**
     * virtual method to edit chosen day
     */
    virtual void editDay()=0;

    /**
     * virtual method to display a plan menu
     */
    virtual void weekInterface()=0;

    /**
     * virtual method to export a plan to a file
     */
    virtual void exportPlan()=0;

    /**
     * virtual method to import a plan from a database
     */
    virtual void importPlan()=0;
};

#endif //UNTITLED_PLANER_H
