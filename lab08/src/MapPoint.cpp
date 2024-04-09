#include "MapPoint.h"

void MTH::Print(const MTH::Point& point) {
    std::cout << "[MTH::Point] X=" << point.getX() << " Y=" << point.getY() << std::endl;
}

void MP::Print(const MP::Point& point) {
    std::cout << "[MP::Point] " << point.getLabel() << ": Latitude=" << point.getLatitude()
              << " Longitude=" << point.getLongitude() << std::endl;
}