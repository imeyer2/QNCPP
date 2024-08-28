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
    Point CenterPoint() const; //Const keyword to indicate that these functions cannot edit the methods/attributes of the instance of this class
    float Radius() const;


    //Setters
    void CenterPoint(Point pt);
    void Radius(float radius);




    //Derived values
    float Diameter();
    float Area();
    float Circumference();

    //ToString
    std::string ToString();


    //Operators

    Circle& operator=(const Circle& source);//



    //Destructors
    ~Circle();

};










#endif