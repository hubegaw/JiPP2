#include <iostream>
#include "../include/Task.h"
#include "../include/WeekPlaner.h"

using namespace std;

int main() {

    string title, content;

    title = "projekt";
    content = "rozpoczecie pracy nad projektem koncowym";

    Task task;
    task.addTask(title, content);

    cout << "dodano zadanie:\n\n" << task.getTaskTitle() << "\n" << task.getTaskContent() << endl;

    cout << "Lista zadan:\n\n";
    task.showTasksList();

    return 0;
}
