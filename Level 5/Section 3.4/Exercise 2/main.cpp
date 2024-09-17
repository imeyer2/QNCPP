/*
    Author: Ian Meyer
    Description: Colon syntax
*/

#include "point.hpp"
#include "line.hpp"
#include "circle.hpp"
#include "array.hpp"
#include "shape.hpp"
#include <iostream>

using namespace IanMeyer::CAD;
using namespace std;



int main(void){

    Shape s; // Create shape.
    Point p(10, 20); // Create point.
    Line l(Point(1,2), Point(3, 4)); // Create line.

    cout<<s.ToString()<<endl; // Print shape.
    cout<<p.ToString()<<endl; // Print point.
    cout<<l.ToString()<<endl; // Print line

    cout<<"Shape ID: "<<s.ID()<<endl; // ID of the shape.
    cout<<"Point ID: "<<p.ID()<<endl; // ID of the point. Does this work? 
    cout<<"Line ID: "<<l.ID()<<endl; // ID of the line. Does this work? 
    /*
    Yes, since the point and line are children of the shape
    class, with an ID initialized when running the initialization
    of Point and Line
    */


    Shape* sp; // Create pointer to a shape variable.
    sp=&p; // Point in a shape variable. Possible? YES: A point is a shape
    cout<<sp->ToString()<<endl; // What is printed? The ID of p

    // Create and copy Point p to new point.
    Point p2;
    p2=p;

    //Note, p2 << operator has an endline so it looks strange in the terminal.
    cout<< p2 << ", " << p2.ID() <<endl; // Is the ID copied if you do not call the base class assignment in point? It is not
    return 0;

};