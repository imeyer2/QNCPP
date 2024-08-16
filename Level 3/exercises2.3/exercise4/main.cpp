#include "point.hpp"
#include <iostream>



int main(void){


    //Threw an error initially but now it works!
    const Point cp(1.5,3.0);
    std::cout << cp.X() << std::endl; // IMPORTANT. It is an error because the compile doesn't know that cp.X() doesn't change anything, we should label it as a constant function


    return 0;
}

