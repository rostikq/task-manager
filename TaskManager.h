//
// Created by user on 4/27/2026.
//

#ifndef PPPILAB5_TASKMANAGER_H
#define PPPILAB5_TASKMANAGER_H
#include <map>
#include <vector>
<<<<<<< HEAD
#include <iostream>
=======

>>>>>>> a097689cb3974ded2b41c2ed4866dce56256c7d9
#include "Task.h"


class TaskManager {
private:
    std::map<unsigned int, Task> m_taskMap;
    unsigned int nextId = 0;
public:
    void addTask(std::string title);
    void removeTask(unsigned int id);
    void listTasks();
    void markDone();
};

<<<<<<< HEAD
void TaskManager::removeTask(unsigned int id) {
    auto it = m_taskMap.find(id);

    if (it != m_taskMap.end()) {
        m_taskMap.erase(it);
        std::cout << "Task with ID " << id << " removed.\n";
    } else {
        std::cout << "Task with ID " << id << " not found.\n";
    }
}






=======
>>>>>>> a097689cb3974ded2b41c2ed4866dce56256c7d9

#endif //PPPILAB5_TASKMANAGER_H