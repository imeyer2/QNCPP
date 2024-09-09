/*
    Author: Ian Meyer
    Description: Implementation of the Circle class
*/

#include "circle.hpp"
#include "point.hpp" //Ohhhh I see why we need the preprocessor directives now to avoid multiple inclusion....
#include "line.hpp"
#include <iostream>
#include <sstream>

#define _USE_MATH_DEFINES




//Constructors

//Initializes a circle with radius 0 and center point (0,0)
Circle::Circle() {
    m_radius = 0;
    center_point = Point(0,0);
};

//Parameterized constructor
Circle::Circle(Point center, float radius) {
    m_radius = radius;
    center_point = center;
};


//Copy constructor
// apparently we can do 
// Circle::Circle(const Circle&) = default;
Circle::Circle(const Circle& circ) {
    m_radius = circ.m_radius;
    center_point = circ.center_point;
};


//Getters
Point Circle::CenterPoint() const {
    return center_point;
};

float Circle::Radius() const {
    return m_radius;
};

//Setters
void Circle::CenterPoint(Point center){
    center_point = center;
};

void Circle::Radius(float new_radius) {
    m_radius = new_radius;
};

float Circle::Diameter() {
    return 2*m_radius;
};

float Circle::Area() {
    return M_PI*std::pow(m_radius,2);
};

float Circle::Circumference() {
    return 2*M_PI*m_radius;
};


std::string Circle::ToString() const {
    std::stringstream ss;
    ss << "This circle has center " << center_point.ToString() << " and radius " << m_radius << "." << std::endl;
    return ss.str();
};


//Operator

//Assignment

Circle& Circle::operator=(const Circle& source){

    CenterPoint(source.CenterPoint());
    Radius(source.Radius());

    return *this;
};


Circle::~Circle() {
    std::cout << "Destroying the circle :(" << std::endl;

    //Destroying the point
    center_point.~Point();
    
};




//Overloading the << operator

std::ostream& operator << (std::ostream& os, const Circle& circ) {
    os << circ.ToString(); //the object has type qualifiers that are not compatible with the member function "Circle::ToString
    //The error message in the comment above is a result of the fact, that when I wrote this, the ToString method for circle is not const, so the compiler doesn't know if the .ToString method will edit the circle object, which is SHOULD NOT do (this is why it has const in the prototype)
    // The fix is to make the circ.ToString() function a constant method

    return os;
};