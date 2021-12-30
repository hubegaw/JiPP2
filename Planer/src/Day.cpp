#include "../include/Day.h"



void Day::addTask(string title,string content) {
    task.first=title;
    task.second=content;
    tasks.push_back(task);
}

void Day::removeTask(int taskNumber) {
    tasks.erase(tasks.begin()+taskNumber);
}

void Day::showTasksList() {
    int i = 1;
    for(auto &task:tasks) {
        cout << i << ". " << task.first << "\n\n" << task.second << "\n-----------------------------------------" << endl;
    }
}
