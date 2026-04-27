//
// Created by user on 4/27/2026.
//

#ifndef PPPILAB5_TASKMANAGER_H
#define PPPILAB5_TASKMANAGER_H
#include <map>
#include <vector>
#include <iostream>

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

void TaskManager::addTask(std::string title) {
    m_taskMap[nextId] = Task(title);
    nextId++;
}

void TaskManager::removeTask(unsigned int id) {
    auto it = m_taskMap.find(id);

    if (it != m_taskMap.end()) {
        m_taskMap.erase(it);
        std::cout << "Task with ID " << id << " removed.\n";
    } else {
        std::cout << "Task with ID " << id << " not found.\n";
    }
}

void TaskManager::listTasks(bool showDone) {
    for (const auto& task : tasks) {
        if (showDone || !task.done) {
            std::cout << "[" << task.id << "] "
                      << task.title << " - "
                      << task.description << std::endl;
        }
    }
}

    for (const auto& pair : m_taskMap) {
        std::cout << "ID: " << pair.first << " | ";
        pair.second.print();
    }
}



#endif //PPPILAB5_TASKMANAGER_H