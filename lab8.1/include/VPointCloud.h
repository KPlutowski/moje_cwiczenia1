#pragma once
#include "Point3D.h"


class VPointCloud{
public:
    ~VPointCloud();

    void addPoint(const Point3D* point);
    void addPoint(const std::array<double, 3>& coords);


    const Point3D geoCentre() const;
    void displayPoints() const;
    const Point3D* getCopyPoint(const size_t i) const;


    void add(const VPointCloud &vpointcloud);
    size_t count() const;
private:
    std::vector<Point3D> _points;
};