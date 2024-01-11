#include "Point3D.h"
int Point3D::DISPLAY_PRESITION =1;

Point3D::Point3D(const std::array<double, 3>& coords) : _coordinates(coords) {}

Point3D::Point3D(const double value):Point3D({value,value,value}){}

void Point3D::displayCoordinates() const
{
    std::cout <<std::setprecision(DISPLAY_PRESITION)<<std::fixed<< '(' << _coordinates[0] << ", " << _coordinates[1] << ", " << _coordinates[2] << ')'<<std::endl;
}