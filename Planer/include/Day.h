#ifndef PLANER_DAY_H
#define PLANER_DAY_H

#include "Task.h"
#include <vector>

class Day : public Task {
protected:
    std::vector<std::pair<std::string,std::string>> tasks;

public:
    Day();

    void addTask(std::string title,std::string content);

    void removeTask(int taskNumber);

    void showTasksList();

};

#endif //PLANER_DAY_H
