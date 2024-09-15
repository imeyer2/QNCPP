/*
    Author: Ian Meyer
    Description: Testing the namespaces
*/

#include "point.hpp"
#include "line.hpp"
#include "circle.hpp"
#include "array.hpp"
#include "shape.hpp"
#include <iostream>

using namespace IanMeyer::CAD;
using namespace std;



int main(void){
    Point pt;
    Line ln;

    pt.Print();

    ln.Print();

    return 0;
};