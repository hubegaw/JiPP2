#ifndef UNTITLED_TASK_H
#define UNTITLED_TASK_H

#define hourLength 4

class Task {
protected:
    std::string task;

public:
    /**
     * default constructor for Task class
     */
    Task();

    /**
     * constructor for Task class
     * @param task - description of a task
     */
    Task(std::string task);

    /**
     * function returns a task
     * @return returns description of a task
     */
    std::string getTask() const;

    /**
     * function checks if chosen task exists
     * @param TaskNumber - number of a task from a day
     * @param size - number of tasks in the day
     * @return returns false if task doesn't exists and true if exists
     */
    bool checkIfTaskExists(int TaskNumber, int size);

    /**
     * overloaded operator, checks if given task already exists
     * @param otherTask - other task
     * @return returns true if two same tasks exists and false if not
     */
    bool operator==(const Task &otherTask) const;

    /**
     * function used to print task
     */
    void printTask();

    /**
     * function used to export tasks to a file
     * @param myPlan - name of the file
     */
    void exportTasks(std::fstream & myPlan);

    /**
     * function used to export tasks to a database
     * @param myPlan - name of the database
     * @param toDataBase - needed only to overload a method
     */
    void exportTasks(std::fstream & myPlan, bool toDataBase);
};

#endif //UNTITLED_TASK_H