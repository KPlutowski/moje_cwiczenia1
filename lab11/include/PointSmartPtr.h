#pragma once
#include <iostream>

class Point
{
public:
    Point();
    Point(int x,int y);
    friend std::ostream &operator<<(std::ostream &os, const Point &point);
    Point operator++(int);

private:
    int _x;
    int _y;
};

class PointSmartPtr
{
public:
    PointSmartPtr();
    PointSmartPtr(Point *ptr);

    PointSmartPtr &operator=(const PointSmartPtr &other);
    Point &operator*() const;

    ~PointSmartPtr();

private:
    Point *_pointPtr;
    int *_refCount;
};