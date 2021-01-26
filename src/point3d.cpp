/**
 * @brief Point3D Class implementation
 */

#include "../include/point3d.hpp"
#include <iomanip>
#include <iostream>

Point3D::Point3D()
{
    XCoord = 0.0;
    YCoord = 0.0;
    ZCoord = 0.0;
}
	
void Point3D::SetX(double x)
{
    XCoord = x;
}

void Point3D::SetY(double y)
{
    YCoord = y;
}

void Point3D::SetZ(double z)
{
    ZCoord = z;
}

double Point3D::GetXCoord()
{
    return XCoord;
}

double Point3D::GetYCoord()
{
    return YCoord;
}

double Point3D::GetZCoord()
{
    return ZCoord;
}
