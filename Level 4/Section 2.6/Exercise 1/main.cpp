/*
    Author: Ian Meyer
    Description: Testing the new operators
*/

#include "point.hpp"
#include "line.hpp"
#include "circle.hpp"
#include "array.hpp"
#include <iostream>


//Namespace needs to be defined outside of main



int main(void){

    IanMeyer::CAD::Point pt1;
    IanMeyer::CAD::Point pt2(3,3);

    IanMeyer::CAD::Line ln(pt1, pt2);


    namespace CircleCAD = IanMeyer::CAD ;   
    CircleCAD::Circle circ(pt1, 5);


    // std::cout << IanMeyer::Containers.Array() << std::endl;

    return 0;

};