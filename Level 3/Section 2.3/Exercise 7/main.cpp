/*
    Author: Ian Meyer
    Description: Testing the classes
*/

#include "point.hpp"
#include "line.hpp"
#include "circle.hpp"
#include <iostream>


int main(void){
    Point pt(3,5);
    Circle circ(pt, 3);

    Circle circ2(circ);

    std::cout << pt.X() << std::endl;




    std::cout << circ.ToString() << std::endl;

    std::cout << circ2.ToString() << std::endl;



    return 0;
}