#ifndef PLANER_TASK_H
#define PLANER_TASK_H

#include <iostream>

class Task {
protected:
    std::pair<std::string,std::string> task;

public:
    std::string getTaskTitle();

    std::string getTaskContent();

    void editTask();

};

#endif //PLANER_TASK_H
