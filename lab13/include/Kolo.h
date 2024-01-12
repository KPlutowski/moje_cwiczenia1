#pragma once

#include "Ksztalt.h"

class Kolo : public Ksztalt
{
    public:
        Kolo(const double promien=0);

        // zwraca pole pow kola
        const double polePow() const override;

        // wypisuje "Kolo o promieniu: _promien"
        void wypisz(const std::ostream& os) const override;
    private:
        double _promien=0;
        const double _PI=3.1415;
};