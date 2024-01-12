#pragma once
#include <iostream>
#include <math.h>


class Ksztalt
{
    public:
        virtual void wypisz(const std::ostream& os) const = 0;
        virtual const double polePow() const = 0;
};

void wypisz(const Ksztalt& ksztalt);