#include "Point3D.h"

Point3D::Point3D(const std::array<double, 3> &arr) : _coordinates(arr) {}
void Point3D::displayCoordinates() const
{
    std::cout << '(' << _coordinates[0] << ", " << _coordinates[1] << ", " << _coordinates[2] << ')';
}