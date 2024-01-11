#include "APointCloud.h"

void APointCloud::addPoint(const Point3D &point)
{
    if (_size == _capacity)
    {
        _capacity = _capacity == 0 ? 1 : _capacity * 2;
        Point3D *newPoints = new Point3D[_capacity];
        memcpy(newPoints, _points, sizeof(Point3D) * _size);
        delete[] _points;
        _points = newPoints;
    }
    _points[_size++] = point;
}
const Point3D APointCloud::geoCentre() const
{
    if (_size == 0)
        return Point3D({0, 0, 0});
    double x = 0.0, y = 0.0, z = 0.0;
    for (int i = 0; i < _size; i++)
    {
        x += _points[i]._coordinates[0];
        y += _points[i]._coordinates[1];
        z += _points[i]._coordinates[2];
    }
    return Point3D({x / _size, y / _size, z / _size});
}
APointCloud::~APointCloud() { delete[] _points; }
void APointCloud::displayPoints() const
{
    std::cout << "Chmura punktow [APC]:\n";
    for (int i = 0; i < _size; i++)
    {
        _points[i].displayCoordinates();
        std::cout << '\n';
    }
}
void APointCloud::add(const APointCloud &apointcloud)
{
    size_t sizeCap = apointcloud._size;
    for (int i = 0; i < sizeCap; i++)
    {
        this->addPoint(apointcloud._points[i]);
    }
}