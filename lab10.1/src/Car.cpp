#include "Car.h"


Car::Car(const char* brand,const int year, const int mileage) : _mileage(mileage)
{
    _brand=new char[std::strlen(brand)+1];
    std::strcpy(_brand,brand);

    _year=new int;
    *_year=year;
}

Car::~Car()
{
    delete[] _brand;
    delete _year;
}

Car::Car(const Car& other) : _mileage(other._mileage)
{
    _brand=new char[std::strlen(other._brand)+1];
    std::strcpy(_brand,other._brand);

    _year=new int;
    *_year=*other._year;
}

Car::Car(Car&& other) : _mileage(other._mileage),_year(other._year),_brand(other._brand)
{
    other._brand=nullptr;
    other._year=nullptr;
    other._mileage=-1;
}

Car& Car::operator=(const Car& other)
{
    if(this != &other)
    {
        _brand=new char[std::strlen(other._brand)+1];
        std::strcpy(_brand,other._brand);

        _year=new int;
        *_year=*other._year;

        _mileage=other._mileage;
    }
    return *this;
}

Car& Car::operator=(Car&& other)
{
    if(this != &other)
    {
        delete[] _brand;
        delete _year;

        _brand=other._brand;
        other._brand=nullptr;

        _year=other._year;
        other._year=nullptr;

        _mileage=other._mileage;
        other._mileage=-1;
    }
    return *this;
}

void Car::displayInfo() const
{
    std::cout<<"Brand: "<<(_brand?_brand:"-None-")<<", Year: ";

    if(_year==nullptr)
        std::cout<<"-None-";
    else
         std::cout<<*_year;

    std::cout<<", Mileage: ";

    if(_mileage==-1)
        std::cout<<"-None-";
    else
        std::cout<<_mileage<<" km";

    std::cout<<'\n';
}