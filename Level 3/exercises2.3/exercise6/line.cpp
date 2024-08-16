#include "line.hpp"
#include <iostream>
#include <sstream>
#include "point.hpp"

//Constructors

//Initialize line with (0,0) and (0,0) as endpoints
Line::Line() {
    pt1 = Point(0,0); //Using the parameterized constructor of the point class
    pt2 = Point(0,0); //Using the parameterized constructor of the point class
};

//Parmeterized constructor
Line::Line(Point npt1, Point npt2) {
    pt1 = Point(npt1);
    pt2 = Point(npt2);
};

//Copy constructor
Line::Line(Line& ln) {
    pt1 = ln.pt1;
    pt2 = ln.pt2;
};


//Getters
Point Line::P1() {
    return pt1;
};

Point Line::P2() {
    return pt2;
};

//Setters
Point Line::P1(Point npt1) {
    pt1 = npt1; //Will this work? Or do we need to use the Point copy constructor?
};

Point Line::P2(Point npt2) {
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

//Destructor

Line::~Line() {
    std::cout << "Object destoryed." << std::endl;
}

