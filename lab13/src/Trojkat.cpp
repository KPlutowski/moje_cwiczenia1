#include "Trojkat.h"

Trojkat::Trojkat(double a,double b,double c) : _a(a),_b(b),_c(c) {}
const double Trojkat::polePow() const
{
    const double x=(_a+_b+_c)/2;
    return  sqrt(x*(x-_a)*(x-_b)*(x-_c));
}
void Trojkat::wypisz(const std::ostream& os) const
{
    std::cout<<"Trojkat o bokach: "<<_a<<" "<<_b<<" "<<_c<<" "<<std::endl;
}