/*
    Author: Ian Meyer
    Description: Implementation of the line class
*/

#include "line.hpp"
#include <iostream>
#include <sstream>
#include <ostream>
#include "point.hpp"

//Constructors
namespace IanMeyer::CAD{

/******** CONSTRUCTORS ********/
/******** CONSTRUCTORS ********/
/******** CONSTRUCTORS ********/

// Default line constructor with colon syntax
Line::Line() : Shape::Shape(), pt1(Point(0)), pt2(Point(0)) {
    std::cout << "Default line constructor" << std::endl;
}

//Parameterized constructor with colon syntax
Line::Line(Point npt1, Point npt2) : Shape::Shape(), pt1(npt1), pt2(npt2){
    std::cout << "Parameterized line constructor" << std::endl;
};

//Copy constructor
Line::Line(const Line& ln) : Shape::Shape(ln), pt1(ln.pt1), pt2(ln.pt2){
    std::cout << "Copy line constructor" << std::endl;
};
/******** /CONSTRUCTORS ********/
/******** /CONSTRUCTORS ********/
/******** /CONSTRUCTORS ********/





//Getters
Point Line::P1() const{
    return pt1;
};

Point Line::P2() const {
    return pt2;
};

//Setters
void Line::P1(Point npt1) {
    pt1 = npt1; //Will this work? Or do we need to use the Point copy constructor?
};

void Line::P2(Point npt2) {
    pt2 = npt2;
};


//ToString
std::string Line::ToString() const {
    std::stringstream ss; //Looked up documentation for stringstream
    ss << "The line is described by " << pt1.ToString() << " and " << pt2.ToString() << "." << std::endl;
    return ss.str(); //Return the string
};

//Length

double Line::Length() const {
    return pt1.Distance(pt2);
};




//Assignment operator
Line& Line::operator = (const Line& source) {
    //Check self assignemnt
    if (this == &source){
        return *this;
    };

    //Call base class operator, to copy over attribute
    Shape::operator=(source);

    //Making use of the getters and setters
    P1(source.P1());
    P2(source.P2());

    return *this;
};




//Destructor
Line::~Line() {
    std::cout << "Line destoryed." << std::endl;

    //Destroy the two points associated with this line instance
    pt1.~Point();
    pt2.~Point();
}



//Overloading of <<
std::ostream& operator << (std::ostream& os, const Line& ln) {

    //Delegation of our << to the ToString method of the line
    os << "This line is defined by " << ln.pt1 << " and " << ln.pt2;

    return os;
}

}