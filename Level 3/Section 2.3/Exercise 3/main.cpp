/*
    Author: Ian Meyer
    Description: Function Overloading in a class
*/

#include "point.hpp"
#include <iostream>


// NOTE: I only renmaed the X and Distance functions, intentionally leaving out the setter and getter of the y coordinate 
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
    pt.X(user_x);
    pt.Y(user_y);

    Point pt2;
    pt2.X(second_x);
    pt2.Y(second_y);

    Point pt3;
    pt3.X(third_x);
    pt3.Y(thrid_y);

    std::cout << "Your first point is " << pt.ToString() << std::endl;

    std::cout << "The x value is " << pt.X() << std::endl;

    std::cout << "The y value is " << pt.Y() << std::endl;


    std::cout << "The distance between the second point and the origin is: " << pt2.Distance() << std::endl;
    std::cout << "The distance between the third point and the origin is: " << pt3.Distance() << std::endl;

    std::cout << "The distance between Point2 and Point3 is: " << pt2.Distance(pt3) << std::endl; // This creates a new Point class upon calling!!
    

    return 0;
}

// Constructor message is printed 3 times, but destructor message is printed 4 times
