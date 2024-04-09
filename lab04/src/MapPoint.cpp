#include "MapPoint.h"

void MapPoint::set_latitude(const double latitude)
{
    this->latitude=latitude;
}

void MapPoint::set_longitude(const double longitude)
{
    this->longitude=longitude;
}

void MapPoint::set_coordinates(const double latitude, const double longitude)
{
    this->set_latitude(latitude);
    this->set_longitude(longitude);
}

void MapPoint::print()
{
    std::cout<<"Point: ("<<this->latitude<<", "<<this->longitude<<")\n";

}

MapPoint MapPoint::closest(MapPoint a, MapPoint b)
{
    double dist1= sqrt(pow(a.latitude,2)*pow(this->latitude,2)+pow(a.longitude,2)*pow(this->longitude,2));
    double dist2= sqrt(pow(b.latitude,2)*pow(this->latitude,2)+pow(b.longitude,2)*pow(this->longitude,2));

    if (dist1<dist2)
    {
        return a;   
    }
    return b;
    
}

MapPoint MapPoint::half_way_to(MapPoint a)
{
    MapPoint mp;
    mp.set_latitude((this->latitude+a.latitude)/2);
    mp.set_longitude((this->longitude+a.longitude)/2);

    return mp;
}

