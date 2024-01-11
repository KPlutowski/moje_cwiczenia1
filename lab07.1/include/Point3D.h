#pragma once
#include <array>
#include <iostream>
#include <vector>
#include <cstring>


class Point3D{
public:
    friend class APointCloud;
    friend class VPointCloud;
    Point3D(const std::array<double, 3> &arr = {0, 0, 0});
    void displayCoordinates() const;
private:
    std::array<double, 3> _coordinates;
};
