/**
 * @brief Header for Point3D class. Please declare your class Point3D here.
 */

#ifndef POINT3D_H
#define POINT3D_H

class Point3D{

public:

    Point3D();

    void SetX(double x);
    void SetY(double y);
    void SetZ(double z);

    double Distance(const Point3D& point2) const;

    void GetXCoord();
    void GetYCoord();
    void GetZCoord();

private:

    double XCoord;
    double YCoord;
    double ZCoord;
};
#endif
