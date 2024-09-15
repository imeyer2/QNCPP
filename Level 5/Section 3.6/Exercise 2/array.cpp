/*
    Author: Ian Meyer
    Description: Implementation of the Array class
*/

#include "array.hpp"
#include "point.hpp"
#include "ArrayExceptions.hpp"


namespace IanMeyer::Containers{
    using namespace IanMeyer::CAD;
    

/*************CONSTRUCTORS************/   
/*************CONSTRUCTORS************/   
/*************CONSTRUCTORS************/   
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


    //Do the copying
    for (int i = 0; i < array_size; i++) {
        m_data[i] = Point(arr.m_data[i]); // This uses the copy constructor from the point and returns the copied point to the location in the self's array
    }
};
/*************CONSTRUCTORS************/   
/*************CONSTRUCTORS************/   
/*************CONSTRUCTORS************/   
/*************CONSTRUCTORS************/   




Array& Array::operator=(const Array& arr) {

    array_size = arr.array_size;


    for (int i = 0; i < array_size; i++) {
        m_data[i] = Point(arr.m_data[i]); // This uses the copy constructor from the point and returns the copied point to the location in the self's array
    };

    return *this;
};

Point& Array::operator[](int index) {
    if ((index < array_size) && (index >= 0)) { 
    
        return m_data[index];
    }
    else{
        std::cout << "Index out of bounds!" << std::endl;  
        //Instantiate the OOB exception with the input parameter
        throw OutOfBoundsException(index);
    }
};



Array::~Array() {
    delete[] m_data;
};





int Array::Size() {
    return array_size;
}

void Array::SetElement(int i, Point pt) {
    if ((i < array_size) && (i >= 0)) { 
    
        this->m_data[i] = pt;
    }
    else{
        std::cout << "Index out of bounds!" << std::endl;  
        //Instantiate the OOB exception with the input parameter
        throw OutOfBoundsException(i);
    }
};

Point& Array::GetElement(int i) {
    if ((i >= 0) && (i < array_size)){
        return m_data[i];
    }
    else {
        std::cout << "OOB" << std::endl;

        //Instantiate the OOB exception with the input parameter
        throw OutOfBoundsException(i);
    }
}






}