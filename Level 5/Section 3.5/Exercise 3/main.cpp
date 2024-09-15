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
    Shape* shapes[3];
    shapes[0]=new Shape;
    shapes[1]=new Point;
    shapes[2]=new Line;

    for (int i=0; i!=3; i++) delete shapes[i];
    return 0;

    // Initially the proper destructors are NOT called
    // Only Destroying shape is called

    //When making the destructor of the shape class virtual then it works
  

};