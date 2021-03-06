/** 
    @mainpage Outer Space Communications
    @author Travis Strickland and Kennyth Kouch
	
    This program calculates the amount of time it takes to 
	transfer a message between two astronauts using satellites.
*/

/** \file main.cpp
    \brief The code to solve the problem should be inside main.cpp
    
    The user will be prompted to enter the coordinates of two astronauts, how many satellites there are, and the coordinates of those satellites.
	The program will then calculate a distance based off of the inputted data, and calculate a time based off of the distance.
    Requires: C++11
*/

#include "../include/point3d.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

double Time(double d);

int main() {

    Point3D a1, a2;
    int n, SatNum1, SatNum2;
    double x,y,z;
    double distance, a1Dist = 0.0000, a2Dist = 0.0000;

        cin >> x >> y >> z;
        a1.SetCoords(x,y,z);

        cin >> x >> y >> z;
        a2.SetCoords(x,y,z);

        cin >> n;
        Point3D sat[n];

        for(int i = 0; i < n; i++)
        {
            cin >> x >> y >> z;
            sat[i].SetCoords(x,y,z);
        }

    for(int i = 0; i < n; i++)
    {
        if(a1.DistanceTo(sat[i]) < a1Dist || a1Dist == 0.0000)
        {
            a1Dist = a1.DistanceTo(sat[i]);
            SatNum1 = i;
        }
        if(a2.DistanceTo(sat[i]) < a2Dist || a2Dist == 0.0000)
        {
            a2Dist = a2.DistanceTo(sat[i]);
            SatNum2 = i;
        }
    }
    
    distance = a1Dist + a2Dist + (sat[SatNum1].DistanceTo(sat[SatNum2]));
    
    cout << fixed << setprecision(4) << Time(distance) << endl;

    return 0;
}

double Time(double d)
{
    return d/299792458.0000;
}
