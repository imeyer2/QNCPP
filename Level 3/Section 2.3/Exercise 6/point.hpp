#ifndef POINT_H
#define POINT_H

#include <iostream>
// using namespace std;

class Point {
public:
    Point(); //Default Constructor
    Point(float x, float y); //Constructor with parameters
    Point(Point& pt); //Copy constructor

    //Getter functions
    float X() const; //const comes after the function
    float Y() const;

    //Setter functions;
    void X(float x);
    void Y(float y);

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