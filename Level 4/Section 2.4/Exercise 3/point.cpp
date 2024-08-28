/*
    Author: Ian Meyer
    Description: Implementation of the point class
*/

// This file will only contain the implementation of the Point class
#include "point.hpp"
#include <iostream>
#include <sstream>

//The comment right above the implementation serves as the docstring!
Point::Point() {
    //Instantiate the instance of the Point class to the origin
    Point::x = 0.0;
    Point::y = 0.0;
    std::cout << "Displaying constructor text!" << std::endl;

};

//Constructor with parameters
Point::Point(float x, float y) {
    std::cout << "Parameterized constructor!" << std::endl;
    Point::x = x;
    Point::y = y;
};

//Copy constructor
Point::Point(const Point& pt) {
    //x and y have already been declared by pointer constructor in private class
    std::cout << "Copy constructor!" << std::endl;
    x = pt.x;
    y = pt.y;
};


//Experiment constructor for exercise 3. NOTE: The explicit keyword is only for the class body, not this implementation
Point::Point(double x) {
    x = x;
    y = x;
    std::cout <<"Experimental constructor!" << std::endl;
};





// Operators

//Negate the coordinates
Point Point::operator - () const {
    return Point((-1)*x, (-1)*y);
}; 

//Scale the coordinates
Point Point::operator * (double factor) const {
    return Point(factor*x, factor*y);
};

//Add coordinates
Point Point::operator + (const Point& p) const {
    return Point(x + p.x, y + p.y);
};

//Equally compare operator
bool Point::operator == (const Point& p) const {
    std::cout << "Using the == operator" << std::endl;
    std::cout << ToString() << std::endl;
    std::cout << p << std::endl;
    
    if (X() == p.X() and Y() == p.Y()) 
        return true;
    else
        return false;
};

//Assignment operator
Point& Point::operator = (const Point& source) {
    //Use the setters and getters. Note: we can do this because we tell the compiler which one is const and which one isn't in the .hpp file and here
    X(source.X());
    Y(source.Y());

    //When using a method that modifies the class, use the this pointer
    return *this;
};

//Scale and reassign
Point& Point::operator *= (double factor) {
    X(factor * X());
    Y(factor * Y());

    //When using a method that modifies the class, use the this pointer
    return *this;
}















//Destructor declaration
Point::~Point() {
    std::cout << "Displaying destructor text!" << std::endl;
    // std::cout << "Released" << std::endl;
}


// We comment this out because they are all inline functions so they are defined in the header file
// //Don't forget to put the return type
// inline float Point::X() const { //const comes after the function name
//     return x;
// };

// inline float Point::Y() const{
//     return Point::y;
// };

inline void Point::X(float x) {
    Point::x = x;
}

inline void Point::Y(float y) {
    Point::y = y;
}


std::string Point::ToString() const {
    std::stringstream ss; //Looked up documentation for stringstream
    ss << "Point(" << X() << ", " << Y() << ")";
    return ss.str(); //Return the string
};



double Point::Distance() const{
    return std::sqrt(Point::x * Point::x + Point::y * Point::y);
};

double Point::Distance(const Point& p) const{
    //Attempt to change the input point in distance
    // p.x = 3;  //Vscode gives the error, "expression must be a modifiable l-value"
    return std::sqrt(std::pow(Point::x - p.x,2) + std::pow(Point::y - p.y,2));
};
// Make the setters and getters of the Point class inline functions. Use normal inline (outside the class declaration) for the getters and default inline (inside the class declaration) for the setters. Note that the implementation of the normal inline functions must be in the header file; else they will not be inlined.




//Our ostream implementation
std::ostream& operator << (std::ostream& os, const Point& p) {

    //The way this works is we use the << to "load stuff in" to the os variable then return it. The os variable is able to be read by other << operators and hence printed when using std::cout
    os << p.ToString();//Delegation

    return os;
};