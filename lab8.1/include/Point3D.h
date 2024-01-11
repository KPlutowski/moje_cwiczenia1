#pragma once
#include <array>
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <iomanip>
#include <memory>

class Point3D{
public:
    friend class VPointCloud;
    static int DISPLAY_PRESITION;

    Point3D(const std::array<double, 3>& coords = {0, 0, 0});
    Point3D(const double value);

    void displayCoordinates() const;


private:
    std::array<double, 3> _coordinates;
};
