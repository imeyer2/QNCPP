/*
    Author: Ian Meyer
    Description: Header file for Point class
*/

#ifndef POINT_H
#define POINT_H

#include <iostream>
// using namespace std;

class Point {
public:
    Point(); //Default Constructor
    Point(Point& pt); //Copy constructor

    //Getter functions
    float X();
    // float GetY();
    float Y();

    //Setter functions;
    void X(float x);
    // void SetY(float y);
    void Y(float y);

    //ToString
    std::string ToString();

    //Distance Functions. Exercise 2 in 2.2
    double Distance(); 
    double Distance(const Point& p);

    //Destructor
    ~Point();

private:
    float x;
    float y;
    

};


#endif // POINT_H