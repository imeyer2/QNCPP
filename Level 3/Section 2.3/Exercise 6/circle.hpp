/*
    Author: Ian Meyer
    Description: Header file for the circle class
*/
#ifndef CIRCLE_H
#define CIRCLE_H

#include "line.hpp"
#include "point.hpp"


class Circle{
public:
    float m_radius;
    Point center_point;

    //Constructors
    Circle();
    Circle(Point center, float new_radius);
    Circle(const Circle& circ);


    //Getters
    Point CenterPoint();
    float Radius();


    //Setters
    void CenterPoint(Point pt);
    void Radius(float radius);




    //Derived values
    float Diameter();
    float Area();
    float Circumference();

    //ToString
    std::string ToString();

    //Destructors
    ~Circle();

};










#endif