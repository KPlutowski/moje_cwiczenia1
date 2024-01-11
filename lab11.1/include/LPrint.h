#pragma once
#include "Line.h"

class Line;
class LArray;

class LPrint
{
    public:
        //wypisuje funkcje
        void operator()(const Line& line) const;

        //wypisuje funkcje
        void operator()(const LArray& larray) const;

};


