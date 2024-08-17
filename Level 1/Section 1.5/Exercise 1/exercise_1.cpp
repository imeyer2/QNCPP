/*
    Author: Ian Meyer
    Contents: Implementation of minus function
*/  
#include<stdio.h>

float minus(float first, float second);

int main(void){
    float first;
    float second;

    printf("Enter the first number: ");
    scanf("%f", &first);
    printf("Enter the second number: ");
    scanf("%f", &second);

    printf("The difference is %f\n", minus(first, second));
    
    return 0;
}



float minus(float first, float second) {
    return first-second;
};