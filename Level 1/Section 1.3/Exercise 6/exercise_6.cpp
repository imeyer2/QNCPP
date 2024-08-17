/*
    Author: Ian Meyer
    Contents: Shift by adding 0's to end of a number
*/  
#include<stdio.h>


int main(void){
    float user_input;
    float ans;

    printf("Please enter your number: ");
    scanf("%f", &user_input);

    ans = 100 * user_input;

    printf("Your shifted number is %f\n", ans);
    printf("A logical shift was performed\n");
}