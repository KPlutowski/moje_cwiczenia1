#pragma once
#include "Point3D.h"
#include "APointCloud.h"

class VPointCloud{
public:
    ~VPointCloud();
    void addPoint(const Point3D point);
    const Point3D geoCentre() const;
    void add(const VPointCloud &vpointcloud);
    void add(const APointCloud &apointcloud);
    size_t count() const;
private:
    std::vector<Point3D> _points;
};