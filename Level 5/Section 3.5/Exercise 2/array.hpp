/*
    Author: Ian Meyer
    Description: Header file for the array class
*/
#ifndef ARRAY_H
#define ARRAY_H

#include "point.hpp"

namespace IanMeyer::Containers{
class Array{
private:

    IanMeyer::CAD::Point* m_data; //This is dynamically created with the 'new' keyword
    int array_size;

public:

    //Constructor
    Array();
    Array(int size); //Parameterized
    Array(const Array& arr); //Copy constructor

    //Operators
    //Assignment operator, returns location of new Array
    Array& operator=(const Array& arr);
    IanMeyer::CAD::Point& operator[](int index);


    //Destructor
    ~Array();




    /* METHODS */

    int Size();
    void SetElement(int i, IanMeyer::CAD::Point pt);
    IanMeyer::CAD::Point& GetElement(int i); //Returns the element by reference

};









}
#endif