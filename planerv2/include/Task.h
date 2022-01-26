#ifndef UNTITLED_TASK_H
#define UNTITLED_TASK_H

#define hourLength 4

class Task {
protected:
    std::string task;

public:
    Task();

    Task(std::string task);

    //~Task();

    bool checkIfTaskExists(int TaskNumber, int size);

    void printTask();

    void exportTasks(std::fstream & myPlan);

    void exportTasks(std::fstream & myPlan, bool toDataBase);

    //bool checkIfTasksOverlap(Task otherTask);
};

#endif //UNTITLED_TASK_H