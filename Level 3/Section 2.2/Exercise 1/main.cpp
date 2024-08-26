/*
    Author: Ian Meyer
    Description: Point class work
*/

#include "point.hpp"
#include <iostream>



int main(void){
    float user_x;
    float user_y;

    float second_x;
    float second_y;

    float third_x;
    float thrid_y;


    //Exercise 1
    std::cout << "Enter your x value: ";
    std::cin >> user_x;

    std::cout << "Enter your y value: ";
    std::cin >> user_y;


    Point pt;
    pt.SetX(user_x);
    pt.SetY(user_y);

    std::cout << "Your first point is " << pt.ToString() << std::endl;

    std::cout << "The x value is " << pt.GetX() << std::endl;

    std::cout << "The y value is " << pt.GetY() << std::endl;


    return 0;
}