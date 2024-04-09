#pragma once

#include<iostream>
#include <math.h>
class ComplexNumber
{
private:
    double real;
    double imaginary;
    
public:
    ComplexNumber(double a=0.0,double b=0.0): real(a),imaginary(b) {};
    void Print() const;

    static double Abs(const ComplexNumber& num);

    operator double() const{
        return Abs(*this);
    }

};
