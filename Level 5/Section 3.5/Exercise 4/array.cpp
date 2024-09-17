/*
    Author: Ian Meyer
    Description: Implementation of the Array class
*/

#include "array.hpp"
#include "point.hpp"


namespace IanMeyer::Containers{
    using namespace IanMeyer::CAD;
    
Array::Array() {
    //Allocates 10 default elements 
    array_size = 10;
    m_data = new Point[array_size]; //Each element of the array is a point, the new keyword returns the array of Points as a pointer to the first element of the array (which is a pointer) so it will return a type of Point&
};

Array::Array(int size) {
    array_size = size;
    m_data = new Point[array_size];
};



Array::Array(const Array& arr) {
    //Manually set and initialize
    array_size = arr.array_size;
    m_data = new Point[array_size]; //Each element of the array is a point, the new keyword returns the array of Points as a pointer to the first element of the array (which is a pointer) so it will return a type of Point&


    for (int i = 0; i < array_size; i++) {
        m_data[i] = Point(arr.m_data[i]); // This uses the copy constructor from the point and returns the copied point to the location in the self's array
    }
};



Array& Array::operator=(const Array& arr) {

    array_size = arr.array_size;

    for (int i = 0; i < array_size; i++) {
        m_data[i] = Point(arr.m_data[i]); // This uses the copy constructor from the point and returns the copied point to the location in the self's array
    };

    return *this;
};


Point& Array::operator[](int index) {
    return m_data[index];
};



Array::~Array() {
    delete[] m_data;
};





int Array::Size() {
    return array_size;
}

void Array::SetElement(int i, Point pt) {
    m_data[i] = pt; //Delegation of copy with the point = operator
};

Point& Array::GetElement(int i) {
    return m_data[i];
}






}