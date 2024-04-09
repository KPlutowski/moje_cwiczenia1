#pragma once
#include <iostream>
#include <math.h>

class Vector2D
{
private:
    double _x=0;
    double _y=0;
    
    Vector2D(double x,double y);

public:
    static int count;

    ~Vector2D();
    static Vector2D fromCarthesian(double x,double y);
    static Vector2D fromPolar(double r,double phi);
    Vector2D(const Vector2D&& other) noexcept;
    Vector2D(const Vector2D& other);




    void print(const char* str) const;
    double dot(const Vector2D& vec) const;
    const Vector2D add(const Vector2D& vec) const;

    
    



};