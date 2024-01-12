#pragma once
#include <math.h>
#include <string>
#include <iostream>
#include <iomanip>
class CplxNumber{
    public:
        // konstruktor
        CplxNumber(const double re=0,const double im=0);

        // wypisuje _Re i _Im
        void Print() const;

        // zwraca modul z liczby zesp.
        static double Abs(const CplxNumber &nr);

        // operator double
        explicit operator double() const;

        // operator string (niejawny)
        operator std::string() const;



    private:
        double _Re=0;
        double _Im=0;
};