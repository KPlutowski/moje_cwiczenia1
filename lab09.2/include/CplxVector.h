#pragma once
#include "CplxNumber.h"

class CplxVector
{
    public:
        // konstruktor
        CplxVector(const double d=0);

        // ustawia _x
        CplxVector& SetX(const CplxNumber& nr=(0,0));

        // ustawia _y
        CplxVector& SetY(const double re=0,const double im=0);

        // ustawia _z
        CplxVector& SetZ(const double re=0,const double im=0);

        // zwraca _x
        CplxNumber X() const;

        // zwraca _y
        CplxNumber Y() const;

        // zwraca _z
        CplxNumber Z() const;

        // wypisuje _x,_y,_z
        void Print() const;

        // operator =
        CplxVector operator= (const double d) const;
        
    private:
        CplxNumber _x,_y,_z;
};