#include "LPrint.h"


void LPrint::operator()(const Line& line) const
{
    std::cout<< "y = "<< line._a<<"* x + "<< line._b <<"\tx0 = "<<line.X0()<<"\n";
}
void LPrint::operator()(const LArray& larray) const
{
    LPrint pr;
    for(int i=0;i<larray._last;i++)
    {
        std::cout<<"["<<i<<"] ";
        pr(larray._lines[i]);
    }
}