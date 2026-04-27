//
// Created by user on 4/27/2026.
//

#ifndef PPPILAB5_TASKMANAGER_H
#define PPPILAB5_TASKMANAGER_H
#include <map>
#include <vector>

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


#endif //PPPILAB5_TASKMANAGER_H