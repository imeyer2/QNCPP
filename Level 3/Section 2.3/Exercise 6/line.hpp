/*
    Author: Ian Meyer
    Description: Header file for the line class
*/

#ifndef LINE_H
#define LINE_H

#include "point.hpp"


class Line{
public:
    Point pt1;
    Point pt2;

    //Constructors
    Line();
    Line(Point npt1, Point npt2);
    Line(const Line& ln); //Remember to use call by reference

    //Getters
    Point P1(); //Both can be constant
    Point P2();


    //Setters
    void P1(Point npt1);
    void P2(Point npt2);

    //ToString
    std::string ToString() const; //Note can be constant

    //Length
    double Length() const; //Note, can be constant

    //Destructor
    ~Line();

};


#endif