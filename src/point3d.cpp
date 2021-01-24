/**
 * @brief Point3D Class implementation
 */

#include "../include/point3d.hpp"
#include <iomanip>
#include <iostream>

void Point3D::SetX(double x)
{
    XCoord = x;
}

void Point3D::SetY(double y)
{
    YCoord = y;
}

void Point3D::SetZ(double Z)
{
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
