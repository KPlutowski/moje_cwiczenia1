#pragma once

#include "Ksztalt.h"

class Trojkat : public Ksztalt
{
    public:
        Trojkat(double a=0,double b=0,double c=0);

        // zwraca pole pow trojkata
        const double polePow() const override;

        // wypisuje "Trojkat o bokach: _a _b _c"
        void wypisz(const std::ostream& os) const override;
    private:
        // dlugosci bokow trojkata
        double _a=0;
        double _b=0;
        double _c=0;

};