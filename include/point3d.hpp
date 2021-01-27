/**
 * @brief Header for Point3D class. Please declare your class Point3D here.
 */

#ifndef POINT3D_H
#define POINT3D_H

class Point3D{

public:

    Point3D();
    Point3D(double x, double y, double z);

    void SetCoords(double x, double y, double z);

    double DistanceTo(const Point3D& p) const;

    double GetX();
    double GetY();
    double GetZ();

private:

    double X;
    double Y;
    double Z;
};
#endif
