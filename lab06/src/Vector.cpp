#include "Vector.h"

Vector &Vector::SetX(double a, double b)
{
    x = ComplexNumber(a, b);
    return *this;
}
Vector &Vector::SetY(double a, double b)
{
    y = ComplexNumber(a, b);
    return *this;
}
Vector &Vector::SetZ(double a, double b)
{
    z = ComplexNumber(a, b);
    return *this;
}

void Vector::Print() const
{
    std::cout << "[";
    if(true)
    {
        x.Print();
        std::cout << ", ";
        y.Print();
        std::cout << ", ";
        z.Print();
    }
    std::cout << "]" << std::endl;
}

ComplexNumber &Vector::X()
{
    return x;
}
const ComplexNumber &Vector::X() const
{
    return x;
}

const Vector *Vector::CreateConstVector(const ComplexNumber &x, const ComplexNumber &y, const ComplexNumber &z)
{
    static Vector vec;
    vec.x=x;
    vec.y=y;
    vec.z=z;
    vec.x;

    return &vec;
}
