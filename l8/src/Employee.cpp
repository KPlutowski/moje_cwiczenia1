#include "Employee.h"

Employee::Employee(const int ID):_employeeID(ID){}

const int Employee::getEmployeeID() const
{
    return _employeeID;
}

void Employee::print() const
{
    std::cout<<"Employee print ID="<<_employeeID<<" tasks:";
    for(const Task* tsk:_tasks)
    {
        std::cout<<tsk->getValue()<<' ';
    }
    std::cout<<std::endl;
}

void Employee::addTask(const Task* task) const
{
    const_cast<Employee*>(this)->_tasks.push_back(task);
}