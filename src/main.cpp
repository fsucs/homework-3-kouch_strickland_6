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
    ifstream infile;

    infile.open("test.sh");

    if(infile.is_open())
    {
        getline(infile, a1.Set)
    }

    infile.close();
    return 0;
}
