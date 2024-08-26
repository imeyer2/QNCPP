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
Circle::Circle(Circle& circ) {
    m_radius = circ.m_radius;
    center_point = circ.center_point;
};


//Getters
Point Circle::CenterPoint() {
    return center_point;
};

float Circle::Radius() {
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


std::string Circle::ToString() {
    std::stringstream ss;
    ss << "This circle has center " << center_point.ToString() << " and radius " << m_radius << "." << std::endl;
    return ss.str();
};


Circle::~Circle() {
    std::cout << "Destroying the circle :(" << std::endl;
};

