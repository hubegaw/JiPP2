#include "../include/Task.h"

string Task::getTaskTitle() {
    return task.first;
}

string Task::getTaskContent() {
    return task.second;
}