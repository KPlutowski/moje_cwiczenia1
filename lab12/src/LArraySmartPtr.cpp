#include "LArraySmartPtr.h"

LArraySmartPtr::LArraySmartPtr(LArray* pLarray): _pLarray(pLarray), _refCount(new int(1)){}

LArraySmartPtr::LArraySmartPtr(): _pLarray(nullptr), _refCount(new int(0)){}

LArraySmartPtr::~LArraySmartPtr()
{
    this->_release();
}


LArray& LArraySmartPtr::operator* () {return *_pLarray;}
LArray* LArraySmartPtr::operator-> () {return _pLarray;}

void LArraySmartPtr::_release()
{
    (*_refCount)--;
    if ((*_refCount)==0)
    {
        delete _refCount;
        delete _pLarray;
        _pLarray=nullptr;
    }
}

LArraySmartPtr& LArraySmartPtr::operator=(LArraySmartPtr& other)
{
    
    if(this != &other)
    {
        
        this->_release();
        _pLarray=other._pLarray;
        _refCount=other._refCount;
        (*_refCount)++;
        
    }
   
    return *this;
}

