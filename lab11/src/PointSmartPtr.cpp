#include "PointSmartPtr.h"
Point::Point() : _x(0), _y(0) {}

std::ostream &operator<<(std::ostream &os, const Point &point)
{
    os << '[' << point._x << ',' << point._y << ']';
    return os;
}
Point Point::operator++(int)
{
    Point temp(*this);
    _x++;
    _y++;
    return temp;
}

PointSmartPtr::PointSmartPtr() : _pointPtr(nullptr), _refCount(nullptr) {}

PointSmartPtr::PointSmartPtr(Point *ptr) : _pointPtr(ptr), _refCount(new int(1)) {}

PointSmartPtr &PointSmartPtr::operator=(const PointSmartPtr &other)
{
    if (this != &other)
    {
        if (_refCount != nullptr)
        {
            (*_refCount)--;
            if (*_refCount == 0)
            {
                delete _pointPtr;
                delete _refCount;
            }
        }
        _pointPtr = other._pointPtr;
        _refCount = other._refCount;
        (*_refCount)++;
    }
    return *this;
}
Point &PointSmartPtr::operator*() const
{
    return *_pointPtr;
}

PointSmartPtr::~PointSmartPtr()
{
    if (_refCount != nullptr)
    {
        (*_refCount)--;
        if (*_refCount == 0)
        {
            delete _pointPtr;
            delete _refCount;
        }
    }
}