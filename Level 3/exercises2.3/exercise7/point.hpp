#ifndef POINT_H
#define POINT_H

#include <iostream>
// using namespace std;

class Point {
public:
    Point(); //Default Constructor
    Point(float x, float y); //Constructor with parameters
    Point(Point& pt); //Copy constructor

    //Don't forget to put the return type
    inline float X() const { //const comes after the function name
        return x;
    };

    inline float GetY() const{
        return Point::y;
    };

    inline void X(float x) {
        Point::x = x;
    }

    inline void SetY(float y) {
        Point::y = y;
    }


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