/*
    Author: Ian Meyer
    Description: Testing the namespaces
*/

#include "point.hpp"
#include "line.hpp"
#include "circle.hpp"
#include "array.hpp"
#include <iostream>





int main(void){

    IanMeyer::CAD::Point pt1;
    IanMeyer::CAD::Point pt2(3,3);

    IanMeyer::CAD::Line ln(pt1, pt2);


    //Aliasing
    namespace CircleCAD = IanMeyer::CAD ;   
    CircleCAD::Circle circ(pt1, 5);



    return 0;

};