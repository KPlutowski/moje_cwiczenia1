#include "Kolo.h"

Kolo::Kolo(const double promien) : _promien(promien) {}


const double Kolo::polePow() const
{
    return _PI*_promien*_promien;
}
void Kolo::wypisz(const std::ostream& os) const
{
    std::cout<<"Kolo o promieniu: "<<_promien<<std::endl;
}