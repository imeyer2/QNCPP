/*
    Author: Ian Meyer
    Description: Implementation of Point class
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
};

//Destructor declaration
Point::~Point() {
    std::cout << "Released" << std::endl;
}

//Don't forget to put the return type
float Point::GetX() {
    return Point::x;
};

float Point::GetY() {
    return Point::y;
};

void Point::SetX(float x) {
    Point::x = x;
}

void Point::SetY(float y) {
    Point::y = y;
}


std::string Point::ToString() {
    std::stringstream ss; //Looked up documentation for stringstream
    ss << "Point(" << GetX() << ", " << GetY() << ")";
    return ss.str(); //Return the string
};



double Point::DistanceOrigin() {
    return std::sqrt(Point::x * Point::x + Point::y * Point::y);
};

double Point::Distance(Point p) {
    return std::sqrt(std::pow(Point::x - p.x,2) + std::pow(Point::y - p.y,2));
};