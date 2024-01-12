#include "CplxVector.h"


CplxVector CplxVector::operator= (const double d) const {
    return CplxVector(d);
}


CplxVector::CplxVector(const double d):_x(CplxNumber(d,d)),_y(CplxNumber(d,d)),_z(CplxNumber(d,d)){}


CplxVector& CplxVector::SetX(const CplxNumber& nr)
{
    _x=nr;
    return *this;
}

CplxVector& CplxVector::SetY(const double re,const double im)
{
    _y=CplxNumber(re,im);
    return *this;
}
CplxVector& CplxVector::SetZ(const double re,const double im)
{
    _z=CplxNumber(re,im);
    return *this;
}


CplxNumber CplxVector::X()const {return _x;}
CplxNumber CplxVector::Y()const {return _y;}
CplxNumber CplxVector::Z()const {return _z;}

void CplxVector::Print() const 
{
    std::cout<<"[";
    std::cout<<static_cast<std::string>(_x);
    std::cout<<", ";
    std::cout<<static_cast<std::string>(_y);;
    std::cout<<", ";
    std::cout<<static_cast<std::string>(_z);
    std::cout<<"]";
    std::cout<<'\n';
}
