/**
 * @brief Point3D Class implementation
 */

#include "../include/point3d.hpp"
#include <iomanip>
#include <iostream>

Point3D::Point3D(double x, double y, double z)
{
    XCoord = x;
    YCoord = y;
    ZCoord = z;
}

void Point3D::GetXCoord()
{
    return XCoord;
}

void Point3D::GetYCoord()
{
    return YCoord;
}

void Point3D::GetZCoord()
{
    return ZCoord;
}
