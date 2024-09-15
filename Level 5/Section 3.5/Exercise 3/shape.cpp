/*
    Author: Ian Meyer
    Description: Implementation of Shape class
*/


#include "shape.hpp"
#include <stdlib.h>
#include <iostream>
#include <sstream>

//Constructors
Shape::Shape() : m_id(std::rand()){};
Shape::Shape(const Shape& sh) : m_id(sh.m_id){};

//Operators
Shape& Shape::operator = (const Shape& sh) {
    //Check self assignemnt
    if (this == &sh){
        return *this;
    };

    //Else
    m_id = sh.m_id;

    return *this;
};

//Need virtual keyword
std::string Shape::ToString() const{
    std::stringstream ss;
    ss << "ID: " << m_id;
    return ss.str();
};

int Shape::ID(){
    return m_id;
};


Shape::~Shape(){
    std::cout << "Destroying shape" << std::endl;
};