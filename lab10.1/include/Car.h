#pragma once
#include <cstring>
#include <iostream>

class Car
{
    public:
        // konstruktor
        Car(const char* brand,const int year, const int mileage);

        // destruktor
        ~Car();

        // konstruktor kopiujacy
        Car(const Car& other);

        // konstruktor przenoszacy
        Car(Car&& other);

        // operator kopiujacy
        Car& operator=(const Car& other);

        // operator przenoszacy
        Car& operator=(Car&& other);
        
        // wyswietla informacje na temat obiektu
        void displayInfo() const;
    private:
        char* _brand=nullptr;
        int *_year=nullptr;
        int _mileage=-1;
};