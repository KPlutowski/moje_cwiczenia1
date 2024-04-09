#pragma once
#include "ComplexNumber.h"

class Vector
{
private:
    ComplexNumber x, y, z;

public:
    Vector() = default;
    Vector(Vector &&other) : x(other.x), y(other.y), z(other.z)
    {
        other.x = ComplexNumber(0, -1);
        other.y = ComplexNumber(0, -1);
        other.z = ComplexNumber(0, -1);
    };

    Vector &SetX(double real, double imaginary);
    Vector &SetY(double real, double imaginary);
    Vector &SetZ(double real, double imaginary);

    void Print() const;

    ComplexNumber &X();
    const ComplexNumber &X() const;

    static const Vector *CreateConstVector(const ComplexNumber &x, const ComplexNumber &y, const ComplexNumber &z);

    operator double()
    {
        return ComplexNumber::Abs(x);
    }
    Vector(const int &i)
    {
        x=ComplexNumber(i,i);
        y=ComplexNumber(i,i);
        z=ComplexNumber(i,i);
    }
};

// class complex
// {
// public:
//     double re, im;
//     complex(int x)
//     {
//         re = static_cast<double>(x);
//         im = 0.;
//     }
//     operator int() { return static_cast<int>(re); }
// };
