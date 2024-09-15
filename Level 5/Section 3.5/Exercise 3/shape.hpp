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
virtual std::string ToString() const; 
int ID();

//Destructor, need to make virtual so that when derived 
//classes are destroyed, it calls it correctly
virtual ~Shape();

};











#endif