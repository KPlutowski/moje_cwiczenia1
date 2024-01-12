#pragma once
#include "Line.h"

class Line;
class LArray;

class LArraySmartPtr
{
    public:

        // konstruktory
        LArraySmartPtr(LArray* pLarray);
        LArraySmartPtr();
        ~LArraySmartPtr();

        // operatory
        LArray& operator* ();
        LArray* operator-> ();
        LArraySmartPtr& operator=(LArraySmartPtr& other);
    private:
        LArray* _pLarray=nullptr;
        int* _refCount=nullptr;

        //zwalnia albo odejmuje 1 od _refCount
        void _release();
};