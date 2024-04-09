#include "Vector2D.h"
int Vector2D::count=0;

Vector2D::Vector2D(double x,double y) : _x(x),_y(y)
{
    count++;
}
Vector2D::~Vector2D()
{
    count--;
}

Vector2D::Vector2D(const Vector2D&& other) noexcept : _x(std::move(other._x)), _y(std::move(other._y)) {
    count++;
    std::cout << "moving (" << _x << ", " << _y << ")" << std::endl;
}
Vector2D::Vector2D(const Vector2D& other) : _x(other._x),_y(other._y)
{
    count++;
    std::cout << "copying (" << _x << ", " << _y << ")" << std::endl;
}

Vector2D Vector2D::fromCarthesian(double x,double y)
{
    return Vector2D(x,y);
}
Vector2D Vector2D::fromPolar(double r,double phi)
{
    return Vector2D(r*std::cos(phi*(M_PI/180)),r*std::sin(phi*(M_PI/180)));
}

void Vector2D::print(const char* str) const
{
    std::cout<<str<<"("<<_x<<", "<<_y<<")\n";
}
double Vector2D::dot(const Vector2D& vec) const
{
    return _x*vec._x+_y*vec._y;
}
const Vector2D Vector2D::add(const Vector2D& vec) const
{
    return fromCarthesian(_x+vec._x,_y+vec._y);
}