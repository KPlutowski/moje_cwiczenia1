#ifndef MAPPOINT_H
#define MAPPOINT_H

#include <iostream>
#include <math.h>

class MapPoint {
    private:
        double _latitude;
        double _longitude;
    
    public:
        // Konstruktor ktory przekauje wartosci domyslne do zmiennych
        // jezeli zmienna w main nie zostanie w sposob: type var(double, double)
        MapPoint(double x=0,double y=0);

        // Funckja zwraca R - odleglosc pomiedzy dwoma punktami (Przez referencje)
        double distanceVal(const MapPoint &city) const;

        // Funckja zwraca R - odleglosc pomiedzy dwoma punktami (Przez wskaznik)
        double distanceVal(const MapPoint *city) const;

        
        /**
         * Funkcja ustawia nam wartosci zmienncyh w klasie
         * 
         * @param x wartość pierwszego koordynatu
         * @param y wartość drugiego koordynatu
         * 
        */
        void set_coordinates(const double x, const double y);

        // funkcja wypisuje nam wartosci punktow na ekran:
        // Point: (x, y)
        void print() const;
  
};

#endif