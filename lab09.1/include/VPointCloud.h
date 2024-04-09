#pragma once
#include "Point3D.h"


class VPointCloud{
public:

    //destruktor
    ~VPointCloud();

    // konstruktor przenoszacy
    VPointCloud(VPointCloud &&other) noexcept;

    //konsruktor
    VPointCloud(){};

    //dodaje pkt do _points
    void addPoint(const Point3D point);

    //dodaje pkt do _points
    void addPoint(Point3D *point);

    //dodaje pkt do _points
    void addPoint(const std::array<double, 3> &arr = {0.0, 0.0, 0.0});

    //wyswietla pkt'y w _points
    void displayPoints() const;

    //zwraca ptr na kopię punktu przechowywanego pod indeksem index
    Point3D* getCopyPoint(const int index) const;

    //zwraca geometryczny srodek
    const Point3D geoCentre() const;

    //dodaje vpointcloud do obiektu
    void add(const VPointCloud &vpointcloud);

    //zwraca liczbe elementow w _points
    size_t count() const;













private:
    std::vector<Point3D*> _points;
};