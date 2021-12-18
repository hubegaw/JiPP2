#ifndef PLANER_TASK_H
#define PLANER_TASK_H

#include <iostream>
#include <vector>

using namespace std;

class Task {
protected:
    pair<string,string> task;
    vector<pair<string,string>> tasks;

public:
    Task();

    void addTask(string title,string content);

    string getTaskTitle();

    string getTaskContent();

    void removeTask(int taskNumber);

    void showTasksList();

};

#endif //PLANER_TASK_H
