#pragma once
#include"ComplexNumber.h"


class Vector
{
private:
    ComplexNumber x,y,z;
public:
    Vector()=default;
    Vector(Vector &&other) : x(other.x), y(other.y),z(other.z) 
    {
        other.x=ComplexNumber(0,-1);
        other.y=ComplexNumber(0,-1);
        other.z=ComplexNumber(0,-1);

        //delete &other;
        
    };

    Vector& SetX(double a,double b);
    Vector& SetY(double a,double b);
    Vector& SetZ(double a,double b);

    void Print() const;

    ComplexNumber& X();
    const ComplexNumber& X() const;


    static const Vector* CreateConstVector(const ComplexNumber &x,const ComplexNumber &y,const ComplexNumber &z);
};

