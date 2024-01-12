#include "CplxNumber.h"

CplxNumber::CplxNumber(const double re,const double im) : _Re(re),_Im(im){}

void CplxNumber::Print() const
{
    std::cout<<"("<<_Re<<","<< _Im<<")\n";
}
double CplxNumber::Abs(const CplxNumber &nr)
{
    return sqrt(nr._Re*nr._Re+nr._Im*nr._Im);
}

CplxNumber::operator double() const {
    return  CplxNumber::Abs(*this);
}

CplxNumber::operator std::string() const {
    return "(" + std::to_string(_Re) + ","+std::to_string(_Im) + ")";
}