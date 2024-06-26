#pragma once
#include<math.h>
#include<iostream>


class MapPoint
{
private:
    
    double latitude;
    double longitude;
    const double calculate_distance();

public:
    
    inline static int NMapPoint=0;
    MapPoint(const double latitude,const double longitude);
    MapPoint(const MapPoint &mp);
    MapPoint();
    
    void set_latitude(const double latitude);
    void set_longitude(const double longitude);
    void set_coordinates(const double latitude,const double longitude);
    void print() const;

    double distanceVal(MapPoint mp) const;

    MapPoint closest(MapPoint a,MapPoint b);
    MapPoint half_way_to(MapPoint a);
};


