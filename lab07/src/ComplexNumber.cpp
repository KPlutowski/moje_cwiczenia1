#include "ComplexNumber.h"

void ComplexNumber::Print() const
{
    std::cout << "(" << real << ", " << imaginary << ")";
}

double ComplexNumber::Abs(const ComplexNumber &num)
{
    return sqrt(num.real*num.real+num.imaginary*num.imaginary);
}
