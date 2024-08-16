#ifndef POINT_H
#define POINT_H

#include <iostream>
// using namespace std;

class Point {
public:
    Point(); //Default Constructor
    // Point(float x, float y); //Constructor with parameters

    //Getter functions
    float GetX();
    float GetY();

    //Setter functions;
    void SetX(float x);
    void SetY(float y);

    //ToString
    std::string ToString();

    //Destructor
    ~Point();

private:
    float x;
    float y;
    

};


#endif // POINT_H