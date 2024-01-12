#pragma once
#include <iostream>

#include "LPrint.h"
#include "LArray.h"
#include "LArraySmartPtr.h"




class Line
{
    public:
        friend LPrint;

        // konstruktor
        Line(const double a,const double b);
        
        // konstruktor
        Line(const double a=1);

        // zwaca punktu przecięcia z osią odcietych
        double X0() const;

        // zwaraca wartosc funkcij dla argumetu x
        double operator()(const double x) const;
    private:
        double _a;
        double _b;
};
