#pragma once
#include "Line.h"

class Line;
class LPrint;
class LArraySmartPtr;

class LArray
{
    public:
        friend LPrint;
        friend LArraySmartPtr;

        // tworzy tablice n funkcji
        LArray(const int n);

        // destruktor
        ~LArray();

        // dodaje funkcje do tablicy
        LArray& Add(const Line& line);

        // dodaje funkcje(utworzona na podstawie liczby) do tablicy
        LArray& Add(const double _a);

        // operator <<
        friend std::ostream& operator<<(std::ostream& os, const LArray& dt);

    private:
        Line* _lines=nullptr; 
        int _last=0;
        int _size=-1;
};
