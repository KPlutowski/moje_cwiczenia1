#pragma once
#include "Employee.h"
class Employee;





class Task
{
private:
    const int _value;
    const Employee& _employee;
public:
    Task(const int value,  const Employee& employee);
    
    
    const int getValue() const;
    void print() const;
};