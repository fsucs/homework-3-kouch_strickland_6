/**
 * @brief Point3D Class implementation
 */

#include "../include/point3d.hpp"
#include <iostream>
#include <cmath>

Point3D::Point3D()
{
    X = 0.0;
    Y = 0.0;
    Z = 0.0;
}

Point3D::Point3D(double x, double y, double z)
{
    X = x;
    Y = y;
    Z = z;
}

void Point3D::SetCoords(double x, double y, double z)
{
    X = x;
    Y = y;
    Z = z;
}

double Point3D::GetX()
{
    return X;
}

double Point3D::GetY()
{
    return Y;
}

double Point3D::GetZ()
{
    return Z;
}

double Point3D::DistanceTo(const Point3D& p) const
{
    return sqrt(pow(X - p.GetX(),2) + pow(Y - p.GetY(),2) + pow(Z - p.GetZ(),2));
}
