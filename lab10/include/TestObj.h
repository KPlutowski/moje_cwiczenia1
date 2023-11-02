#pragma once
#include <iostream>


class TestObj
{
private:
   const char* name; 
public:

    TestObj()
    {
        name = "default";
        std::cout<<"TestObj::TestObj()"<<'\n';
    };
    TestObj(const char* string) : name(string)
    {
        std::cout<<"TestObj::TestObj(\""<<name<<"\"))"<<'\n';
    };
    TestObj(const TestObj& other) : name(other.name)
    {
        std::cout<<"TestObj::TestObj(TestObj(\""<<name<<"\"))"<<'\n';
    };
    ~TestObj()
    {
        std::cout<<"~TestObj(): "<<name<<'\n';
    };
    friend std::ostream& operator<<(std::ostream& os,TestObj* obj){
        os<<obj->name;
        return os;
    }

};


