#ifndef POINT_H
#define POINT_H

#include <iostream>
// using namespace std;

class Point {
public:
    Point(); //Default Constructor
    Point(Point& pt); //Copy constructor

    //Getter functions
    float GetX();
    float GetY();

    //Setter functions;
    void SetX(float x);
    void SetY(float y);

    //ToString
    std::string ToString();

    //Distance Functions. Exercise 2 in 2.2
    double DistanceOrigin(); 
    double Distance(const Point& p);

    //Destructor
    ~Point();

private:
    float x;
    float y;
    

};


#endif // POINT_H