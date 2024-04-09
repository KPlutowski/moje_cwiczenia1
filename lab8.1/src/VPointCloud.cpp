#include "VPointCloud.h"

VPointCloud::~VPointCloud() { _points.clear(); }

const Point3D VPointCloud::geoCentre() const
{
    if (_points.size() == 0)
        return Point3D({0, 0, 0});

    double x = 0.0, y = 0.0, z = 0.0;
    for (const Point3D& it : _points )
    {
        x += it._coordinates[0];
        y += it._coordinates[1];
        z += it._coordinates[2];
    }
    return Point3D({x / _points.size(), y / _points.size(), z / _points.size()});
}

void VPointCloud::add(const VPointCloud &vpointcloud)
{
    for (const Point3D& it : vpointcloud._points)
    {
        _points.push_back(it);
    }
}



size_t VPointCloud::count() const { return _points.size(); }



void VPointCloud::displayPoints() const
{
    for(const auto &point:_points)
    {
        point.displayCoordinates();
    }
}

const Point3D* VPointCloud::getCopyPoint(const size_t i) const
{
    return &_points[i];
}

void VPointCloud::addPoint(const Point3D* point)
{
    _points.push_back(*point);
    delete point;
}

void VPointCloud::addPoint(const std::array<double,3>& coords)
{
    _points.push_back(Point3D(coords));

}





