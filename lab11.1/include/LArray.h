#pragma once
#include "Line.h"

class Line;
class LPrint;

class LArray
{
    public:
        friend LPrint;

        // tworzy tablice n funkcji
        LArray(const int n);

        // destruktor
        ~LArray();

        // dodaje funkcje do tablicy
        LArray& Add(const Line& line);

        // dodaje funkcje(utworzona na podstawie liczby) do tablicy
        LArray& Add(const double _a);
    private:
        Line* _lines=nullptr; 
        int _last=0;
        int _size=-1;
};
