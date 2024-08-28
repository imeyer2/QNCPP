/*
    Author: Ian Meyer
    Description: Header file for the line class
*/

#ifndef LINE_H
#define LINE_H

#include "point.hpp"
#include <ostream>

class Line{
public:
    Point pt1;
    Point pt2;

    //Constructors
    Line();
    Line(Point& npt1, Point& npt2);
    Line(const Line& ln); //Remember to use call by reference

    //Getters
    Point P1() const; //Both can be constant; CORRECTION: They NEED to be constant, otherwise the compile doesn't know the appropriate method to use
    Point P2() const;


    //Setters
    void P1(Point npt1);
    void P2(Point npt2);

    //ToString
    std::string ToString() const; //Note can be constant

    //Length
    double Length() const; //Note, can be constant


    //Operators

    //Assignment operator
    Line& operator=(const Line& source);

    //Destructor
    ~Line();

};

//Overloading the << to be compatible with our Line class
std::ostream& operator << (std::ostream& os, const Line& pt);

#endif