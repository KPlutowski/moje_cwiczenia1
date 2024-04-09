#pragma once
#include <iostream>

namespace MTH
{
    class Point
    {
    public:
        Point(double x, double y) : x(x), y(y) {}

        double getX() const { return x; }
        double getY() const { return y; }

    private:
        double x;
        double y;
    };
    void Print(const MTH::Point &point);
}

namespace MP
{
    class Point
    {
    private:
        const char *label;
        float latitude;
        float longitude;

    public:
        Point(const char *label, float latitude, float longitude) : label(label), latitude(latitude), longitude(longitude){};
        Point(const char *label, const MTH::Point &mthPoint)
            : label(label), longitude(mthPoint.getY()), latitude(mthPoint.getX()) {}

        const char *getLabel() const { return label; }
        double getLongitude() const { return longitude; }
        double getLatitude() const { return latitude; }

        Point &operator=(const MTH::Point &mthPoint)
        {
            this->latitude = mthPoint.getX();
            this->longitude = mthPoint.getY();
            return *this;
        }

        Point &operator=(MP::Point &other)
        {
            if (this == &other)
            {
                std::cout << "[MP::Warning] Discarding self-assignment" << std::endl;
                return *this;
            }
            label = other.label;
            longitude = other.longitude;
            latitude = other.latitude;
            return *this;
        }
    };
    void Print(const MP::Point &point);

}
