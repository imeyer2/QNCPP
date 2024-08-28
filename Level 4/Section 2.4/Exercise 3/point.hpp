/*
    Author: Ian Meyer
    Description: Header file for the point class
*/

#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <ostream>
// using namespace std;

class Point {
public:
    Point(); //Default Constructor
    Point(float x, float y); //Constructor with parameters
    Point(const Point& pt); //Copy constructor
    explicit Point(double x); //Experiment for exercise 3

    //Normal inline that is defined in the header file
    float X(void) const;// { return x; };

    float Y(void) const;// { return y; };


    //Inline that is defined in the source file
    inline void X(float x);
    inline void Y(float y);


    //ToString
    std::string ToString() const;

    //Distance Functions. Exercise 2 in 2.2
    double Distance() const; 
    double Distance(const Point& p) const;


    //Operators

    Point operator - () const; //Negate the coordinates
    Point operator * (double factor) const; //Scale the coordinates
    Point operator + (const Point& p) const; //Add coords
    bool operator == (const Point& p) const; //Compare two points
    //The next two change the current object, so they can't be constant functions
    Point& operator = (const Point& source); //Assignment operator
    Point& operator *= (double factor); //Scale coordinates and reassign







    //Destructor
    ~Point();




private:
    float x;
    float y;
    

};

inline float Point::X(void) const {
    return x;
}

inline float Point::Y(void) const {
    return y;
}

// Because we cannot place a member function to the std::ostream class, we create this global function outside of the class definition but still in the header file
std::ostream& operator << (std::ostream& os, const Point& p); // Send to ostream


#endif // POINT_H