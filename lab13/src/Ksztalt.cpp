#include "Ksztalt.h"

// globalna
void wypisz(const Ksztalt& ksztalt)
{
    ksztalt.wypisz(std::cout);
}


void Ksztalt::wypisz(const std::ostream& os) const
{
    this->wypisz(std::cout);
}