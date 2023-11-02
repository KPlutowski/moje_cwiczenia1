#include "Factory.h"

TestObj *Factory::prototype_ = nullptr;
std::vector<TestObj *> Factory::produced_objects_;

TestObj *Factory::produce()
{
    TestObj *obj;
    if (prototype_ == nullptr)
    {
        obj = new TestObj();
    }
    else
    {
        obj = new TestObj(*prototype_);
    }
    produced_objects_.push_back(obj);
    return obj;
}

void Factory::prototype(const TestObj &obj)
{
    if (prototype_ != nullptr)
    {
        delete prototype_;
    }
    prototype_ = new TestObj(obj);
}

void Factory::erase()
{
    for (TestObj *obj : produced_objects_)
    {
        delete obj;
    }
    produced_objects_.clear();

    if (prototype_ != nullptr)
    {
        delete prototype_;
        prototype_ = nullptr;
    }
}