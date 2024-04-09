#include "VPointCloud.h"

VPointCloud::~VPointCloud() { _points.clear(); }
void VPointCloud::addPoint(const Point3D point) { _points.push_back(point); }
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
void VPointCloud::add(const APointCloud &apointcloud)
{
    size_t sizeCap = apointcloud._size;
    for (int i = 0; i < sizeCap; i++)
    {
        _points.push_back(apointcloud._points[i]);
    }
}
size_t VPointCloud::count() const { return _points.size(); }