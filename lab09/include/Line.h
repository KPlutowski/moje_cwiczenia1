#pragma once
#include <iostream>
class Line
{
private:
    double a;
    double b;
public:
    Line(double a,double b):a(a),b(b) {};
    Line(int a=1):a(a),b(a){};
    double operator()(double x) const {return a*x+b;}
    double X0() const{return -b/a;}

    void printInstance() const;
};



class LPrint
{
public:
    void operator()(Line line) const {line.printInstance();}
};





class LArray
{
private:
    Line *array;
    int lastElement=0;
public:
    LArray(int size){array=new Line[size];};

    
    void Add(int n);
    void Add(Line line);

    
    Line operator[](int index){
        return array[index];
    };

    ~LArray(){delete[] array;};
};