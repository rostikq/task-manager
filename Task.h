//
// Created by user on 4/27/2026.
//

#ifndef PPPILAB5_TASK_H
#define PPPILAB5_TASK_H
#include <string>


struct Task {
    unsigned int id;
    std::string title;
    bool isDone;

    void print() const;

};


#endif //PPPILAB5_TASK_H