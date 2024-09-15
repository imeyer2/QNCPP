/*
    Author: Ian Meyer
    Description: Implementation of Array Exceptions
*/

#include "ArrayExceptions.hpp"
#include <sstream>

ArrayException::ArrayException() {};
ArrayException::ArrayException(const ArrayException& arr_exec){};
ArrayException::~ArrayException(){};

// I'm making sure that the base class GetMessage() method doesn't
// have functionality
// std::string ArrayException::GetMessage() const;



OutOfBoundsException::OutOfBoundsException() : m_index(-1) {};
OutOfBoundsException::OutOfBoundsException(int input_m_index) : m_index(input_m_index) {};
OutOfBoundsException::OutOfBoundsException(const OutOfBoundsException& arr_exec): m_index(arr_exec.m_index) {};
OutOfBoundsException::~OutOfBoundsException(){};

std::string OutOfBoundsException::GetMessage() const {
    std::stringstream ss;
    ss << "Error at index: " << m_index << std::endl;
    return ss.str();
};



