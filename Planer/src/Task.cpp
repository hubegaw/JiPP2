#include "../include/Task.h"

Task::Task(){
    task.first = "";
    task.second = "";
}

void Task::addTask(string title,string content) {
    task.first=title;
    task.second=content;
    tasks.push_back(task);
}

string Task::getTaskTitle() {
    return task.first;
}

string Task::getTaskContent() {
    return task.second;
}

void Task::removeTask(int taskNumber) {
    tasks.erase(tasks.begin()+taskNumber);
}

void Task::showTasksList() {
    int i = 1;
    for(auto &task:tasks) {
        cout << i << ". " << task.first << "\n\n" << task.second << "\n-----------------------------------------" << endl;
    }
}
