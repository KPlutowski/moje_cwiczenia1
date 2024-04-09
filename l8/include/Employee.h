#pragma once
#include "Task.h"
#include <iostream>
#include <vector>
class Task;



class Employee
{
private:
    const int _employeeID;
    std::vector<const Task*> _tasks;
public:
    Employee(const int ID);

    void addTask(const Task* task) const;
    const int getEmployeeID() const;
    void print() const;
};