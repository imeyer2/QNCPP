/*
    Author: Ian Meyer
    Description: Header file for the point class
*/

#ifndef POINT_H
#define POINT_H

#include <iostream>
// using namespace std;

class Point {
public:
    Point(); //Default Constructor
    Point(float x, float y); //Constructor with parameters
    Point(const Point& pt); //Copy constructor

    //Normal inline that is defined in the header file
    inline float X(void) const { return x; };

    inline float Y(void) const { return y; };


    //Inline that is defined in the source file
    inline void X(float x);
    inline void Y(float y);


    //ToString
    std::string ToString() const;

    //Distance Functions. Exercise 2 in 2.2
    double Distance() const; 
    double Distance(const Point& p) const;

    //Destructor
    ~Point();

private:
    float x;
    float y;
    

};


#endif // POINT_H