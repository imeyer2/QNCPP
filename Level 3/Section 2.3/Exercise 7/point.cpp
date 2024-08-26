/*
    Author: Ian Meyer
    Description: Implementation of the point class
*/

// This file will only contain the implementation of the Point class
#include "point.hpp"
#include <iostream>
#include <sstream>

//The comment right above the implementation serves as the docstring!
Point::Point() {
    //Instantiate the instance of the Point class to the origin
    Point::x = 0.0;
    Point::y = 0.0;
    std::cout << "Displaying constructor text!" << std::endl;

};

//Constructor with parameters
Point::Point(float x, float y) {
    std::cout << "Parameterized constructor!" << std::endl;
    Point::x = x;
    Point::y = y;
};

//Copy constructor
Point::Point(Point& pt) {
    //x and y have already been declared by pointer constructor in private class
    std::cout << "Copy constructor!" << std::endl;
    x = pt.x;
    y = pt.y;
};

//Destructor declaration
Point::~Point() {
    std::cout << "Displaying destructor text!" << std::endl;
    // std::cout << "Released" << std::endl;
}


// We comment this out because they are all inline functions so they are defined in the header file
// //Don't forget to put the return type
// inline float Point::X() const { //const comes after the function name
//     return x;
// };

// inline float Point::Y() const{
//     return Point::y;
// };

// inline void Point::X(float x) {
//     Point::x = x;
// }

// inline void Point::Y(float y) {
//     Point::y = y;
// }


std::string Point::ToString() const{
    std::stringstream ss; //Looked up documentation for stringstream
    ss << "Point(" << X() << ", " << Y() << ")";
    return ss.str(); //Return the string
};



double Point::Distance() const{
    return std::sqrt(Point::x * Point::x + Point::y * Point::y);
};

double Point::Distance(const Point& p) const{
    //Attempt to change the input point in distance
    // p.x = 3;  //Vscode gives the error, "expression must be a modifiable l-value"
    return std::sqrt(std::pow(Point::x - p.x,2) + std::pow(Point::y - p.y,2));
};