/*
    Author: Ian Meyer
    Description: Shape class header file
*/

#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

class Shape{

public:
//Data member
int m_id;

//Constructors
Shape();
Shape(const Shape& sh);


//Operators
Shape& operator = (const Shape& sh);


//Functions, note that virtual appears here but not in .cpp, it was throwing an error when doing both..
virtual std::string ToString() const; 
int ID();

//Destructor
~Shape();

};











#endif