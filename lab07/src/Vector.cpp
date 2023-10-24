#include "Vector.h"

Vector &Vector::SetX(double real, double imaginary)
{
    x = ComplexNumber(real, imaginary);
    return *this;
}
Vector &Vector::SetY(double real, double imaginary)
{
    y = ComplexNumber(real, imaginary);
    return *this;
}
Vector &Vector::SetZ(double real, double imaginary)
{
    z = ComplexNumber(real, imaginary);
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
