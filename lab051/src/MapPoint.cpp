#include "MapPoint.h"

using std::cout;

MapPoint::MapPoint(double x, double y) {
    _latitude = x;
    _longitude = y;

}

double MapPoint::distanceVal(const MapPoint &city) const{
    double x_new = city._latitude - _latitude;
    double y_new = city._longitude - _longitude;

    return sqrt(x_new*x_new + y_new*y_new);
}

double MapPoint::distanceVal(const MapPoint *city) const{
    double x_new = city->_latitude - _latitude;
    double y_new = city->_longitude - _longitude;

    return sqrt(x_new*x_new + y_new*y_new);
}

void MapPoint::set_coordinates(const double x, const double y) {
    _latitude = x;
    _longitude = y;

}

void MapPoint::print() const{
    cout<<"Point : "
        <<"("<<_latitude<<","<<_longitude<<")"<<std::endl;
}