#pragma once
#include"TestObj.h"
#include <vector>

class Factory
{
private:
    static TestObj *prototype_;
    static std::vector<TestObj*> produced_objects_;
public:
    static TestObj* produce();
    static void prototype(const TestObj& newPrototype);
    static void erase();
};
