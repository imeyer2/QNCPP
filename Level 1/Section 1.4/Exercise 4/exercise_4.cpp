/*
    Author: Ian Meyer
    Contents: Fahrenheit to Celcius conversion
*/  
#include<stdio.h>


int main(void){
    double far = 0;
    double far_max = 300;

    int delta_deg = 20;
    double cel;

    printf("---------Fahrenheit---------|----------Celcius---------\n");

    while (far <= far_max){
        cel  = (5.0/9.0) * (far-32);

        printf("        %10.1f          |        %10.1f        \n", far, cel);

        far += delta_deg;
    }

    return 0;
}