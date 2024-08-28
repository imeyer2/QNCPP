/*
    Author: Ian Meyer
    Description: Testing the new operators
*/

#include "point.hpp"
#include "line.hpp"
#include "circle.hpp"
#include <iostream>


int main(void){

    //Define points, line, and circle
    Point p(1.0, 1.0);
    Point pt2(2.0, 2.0);
    Line ln(p, pt2);
    // if (p==(Point)1.0) std::cout<<"Equal!"<< std::endl; //QUESTION: The second point is being instantiated to Point(-3.79836e+10, 1) ???? Some sort of overflow?
    // else std::cout <<"Not equal"<< std::endl;
    
    std::cout << p << std::endl;
    std::cout << ln << std::endl;




    return 0;
}