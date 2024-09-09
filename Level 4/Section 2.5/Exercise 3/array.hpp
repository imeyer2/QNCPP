#ifndef ARRAY_H
#define ARRAY_H

#include "point.hpp"

class Array{
private:

    Point* m_data; //This is dynamically created with the 'new' keyword
    int array_size;






public:

    //Constructor
    Array();
    Array(int size); //Parameterized
    Array(const Array& arr); //Copy constructor

    //Operators
    //Assignment operator, returns location of new Array
    Array& operator=(const Array& arr);
    Point& operator[](int index);
    const Point& operator[](int index) const;

    //Destructor
    ~Array();




    /* METHODS */

    int Size();
    void SetElement(int i, Point pt);
    Point& GetElement(int i); //Returns the element by reference
    const Point& GetElement(int i) const;

};










#endif