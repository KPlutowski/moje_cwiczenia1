#include "Line.h"

void Line::printInstance() const
{
    std::cout << "y = " << this->a<<"* x + "<<this->b << "\tx0 = "<< this->X0() << std::endl;
}


void LArray::Add(int n)
{
    array[lastElement]=Line(n);
    lastElement++;
}

void LArray::Add(Line line)
{
    array[lastElement]=line;
    lastElement++;
}
