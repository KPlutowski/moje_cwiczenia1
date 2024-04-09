#include "Task.h"

Task::Task(const int value, const Employee& employee) : _value(value), _employee(employee) {
    _employee.addTask(this);
}

const int Task::getValue() const
{
    return _value;
}

void Task::print() const
{
    std::cout<<"Task print value="<<_value<<" EmployeeID="<<_employee.getEmployeeID()<<std::endl;
}