#pragma once
#include <array>
#include <iostream>
#include <vector>
#include <cstring>
#include <iomanip>
#include <math.h>

class Point3D{
public:
    friend class APointCloud;
    friend class VPointCloud;
    static int DISPLAY_PRESITION;

    Point3D(const std::array<double, 3> &arr = {0, 0, 0});
    Point3D(const double value);
    

    //wyswietla _coordinates
    void displayCoordinates() const;






    explicit operator double() const {
        return std::sqrt(_coordinates[0] * _coordinates[0] + _coordinates[1] * _coordinates[1] + _coordinates[2] * _coordinates[2]);
    }

    operator std::string() const {
        return "(" + std::to_string(_coordinates[0]) + "," + std::to_string(_coordinates[1]) + "," + std::to_string(_coordinates[2]) + ")";
    }

    static std::string to_string(const Point3D& point) {
        return static_cast<std::string>(point);
    }




private:
    std::array<double, 3> _coordinates;
};
