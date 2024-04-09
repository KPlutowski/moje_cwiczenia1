#pragma once
#include <iostream>

const uint8_t MAX_SIZE=30;


struct myContainer
{
    int N=0;
    int array[MAX_SIZE]={0};
    myContainer* spouse=nullptr;
    myContainer* parents[2]={nullptr,nullptr};
};


void printContainer(myContainer& container);
bool fillContainerWithFibonacci(myContainer* container,int lenght);
void checkContainerSpouse(myContainer *container);

void marry(myContainer *partner, myContainer *spouse);
void divorce(myContainer *container1,myContainer *container2);
myContainer formChild(myContainer *container1,myContainer *container2);

void printParents(myContainer *container);

inline bool operator==(const myContainer& lhs, const myContainer& rhs) 
{ 
    if (lhs.N!=rhs.N)
    {
        return false;
    }
    
    for (size_t i = 0; i < lhs.N; i++)
    {
        if(lhs.array[i]!=rhs.array[i])
        {
            return false;
        }
    }
    return true;
}