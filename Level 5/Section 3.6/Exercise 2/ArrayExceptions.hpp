/*
    Author: Ian Meyer
    Description: Header file for all types of Array Exceptions
*/
#ifndef ARRAY_EXECS_HPP
#define ARRAY_EXECS_HPP
#include "array.hpp"


class ArrayException{
public:
    //Constructors
    ArrayException();
    ArrayException(const ArrayException& arr_exec);

    //Destructors
    ~ArrayException();


    //Methods

    //virtual so that it can be overridden
    virtual std::string GetMessage() const=0;   


};


//OOB exception is a subclass of ArrayException
class OutOfBoundsException : public ArrayException{
public:
    int m_index;

    //Constructors
    OutOfBoundsException();
    OutOfBoundsException(const OutOfBoundsException& oob_exec);
    OutOfBoundsException(int input_m_index);

    //Destructors
    ~OutOfBoundsException();

    //Methods
    std::string GetMessage() const;

};



#endif