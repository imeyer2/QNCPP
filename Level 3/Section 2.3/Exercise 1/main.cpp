/*
    Author: Ian Meyer
    Description: Using the Point class and discovering stuff about classes
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


    //Playing around with cout and cin as well as the new methods introduced in exercise 2 in 2.2
    std::cout << "Enter two more x values: ";
    std::cin >> second_x >> third_x;

    std::cout << "Enter two more y values: ";
    std::cin >> second_y >> thrid_y;

    Point pt;
    pt.SetX(user_x);
    pt.SetY(user_y);

    Point pt2;
    pt2.SetX(second_x);
    pt2.SetY(second_y);

    Point pt3;
    pt3.SetX(third_x);
    pt3.SetY(thrid_y);

    Point copypt(pt);

    std::cout << "Your first point is " << pt.ToString() << std::endl;
    std::cout << "Copy of the first point is: " << copypt.ToString() << std::endl;

    std::cout << "The x value is " << pt.GetX() << std::endl;

    std::cout << "The y value is " << pt.GetY() << std::endl;


    std::cout << "The distance between the second point and the origin is: " << pt2.DistanceOrigin() << std::endl;
    std::cout << "The distance between the third point and the origin is: " << pt3.DistanceOrigin() << std::endl;

    std::cout << "The distance between Point2 and Point3 is: " << pt2.Distance(pt3) << std::endl; // This creates a new Point class upon calling!!
    

    return 0;
}

// Constructor message is printed 3 times, but destructor message is printed 4 times
