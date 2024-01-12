#include "LArray.h"

LArray::LArray(const int n)
{
    _size=n;
    _lines=new Line[n];
}

LArray::~LArray(){delete[] _lines;_lines=nullptr;}

LArray& LArray::Add(const Line& line)
{
    if(_last<=_size)
    {
        _lines[_last]=line;
        _last++;
    }
    else
    {
        std::cout<<"za duzo\n"; 
    }
    return *this;
}
LArray& LArray::Add(const double _a)
{
    if(_last<=_size)
    {
        _lines[_last]=Line(_a);
        _last++;
    }
    else
    {
        std::cout<<"za duzo\n"; 
    }
    return *this;

}

std::ostream& operator<<(std::ostream& os, const LArray& dt)
{
    LPrint pr;
    for(int i=0;i<dt._last;i++)
    {
        pr(dt._lines[i]);
    }

    return os;
}