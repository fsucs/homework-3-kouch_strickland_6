/** 
    @mainpage Outer Space Communications
    @author Author
    What does this program do in short? Perhaps the name of the project goes here?
*/

/** \file main.cpp
    \brief The code to solve the problem should be inside main.cpp
    
    Long explination goes here...
    Requires: C++11
*/

# include "Point3D.hpp"
#include <iostream>
#include <fstream>
using namespace std;

int main() {

    Point3D a1, a2;
    int n;
    double x,y,z;
    ifstream infile;

    infile.open("test.sh");

    if(infile.is_open())
    {
        infile >> x >> y >> z;
        a1.SetX(x);
        a1.SetY(y);
        a1.SetZ(z);

        infile >> x >> y >> z;
        a2.SetX(x);
        a2.SetY(y);
        a2.SetZ(z);

        infile >> n;
        Point3D sat[n];
        for(int i = 0; i < n; i++)
        {
            infile >> x >> y >> z;
            sat[i].SetX(x);
            sat[i].SetY(y);
            sat[i].SetZ(z);
        }
    }

    infile.close();
    return 0;
}
