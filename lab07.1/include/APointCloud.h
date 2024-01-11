#pragma once
#include "Point3D.h"

class APointCloud{
public:
    friend class VPointCloud;
    ~APointCloud();
    void displayPoints() const;
    void addPoint(const Point3D &p);
    void add(const APointCloud &apointcloud);
    const Point3D geoCentre() const;
private:
    size_t _size = 0;
    size_t _capacity = 0;
    Point3D *_points = nullptr;
};