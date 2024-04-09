#include "VPointCloud.h"

VPointCloud::~VPointCloud() 
{ 
    // for(Point3D* point : _points)
    // {
    //     if(point!=nullptr)
    //     {
    //         delete point;
    //         point = nullptr;
    //     }
    // }
    for (auto point : _points) {
        delete point;
    }

    _points.clear(); 
}

VPointCloud::VPointCloud(VPointCloud&& other) noexcept
{
    _points = std::move(other._points);
    other._points.clear();
}


void VPointCloud::addPoint(const Point3D point) 
{
    _points.push_back(new Point3D(point)); 
}

void VPointCloud::addPoint(Point3D *point)
{
    _points.push_back(point);
}
void VPointCloud::addPoint(const std::array<double, 3> &arr) 
{
     _points.push_back(new Point3D(arr)); 
}


void VPointCloud::displayPoints() const
{
    for(const auto &point : _points)
    {
        point->displayCoordinates();
    }
}

Point3D* VPointCloud::getCopyPoint(const int index) const
{
    return _points[index];
}





const Point3D VPointCloud::geoCentre() const
{
    if (_points.size() == 0)
        return Point3D({0, 0, 0});
    double x = 0.0, y = 0.0, z = 0.0;
    for (const Point3D* it : _points )
    {
        x += it->_coordinates[0];
        y += it->_coordinates[1];
        z += it->_coordinates[2];
    }
    return Point3D({x / _points.size(), y / _points.size(), z / _points.size()});
}

void VPointCloud::add(const VPointCloud &vpointcloud)
{
    if(&vpointcloud==this)
        return;
    for (Point3D* it : vpointcloud._points)
    {
        _points.push_back(it);
    }
}



size_t VPointCloud::count() const { return _points.size(); }