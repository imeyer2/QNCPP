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


//Functions
std::string ToString(); 
int ID();

//Destructor
~Shape();

};











#endif