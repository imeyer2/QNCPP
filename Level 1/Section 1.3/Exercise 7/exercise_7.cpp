/*
    Author: Ian Meyer
    Contents: multiplication by 2 (efficient)
*/  

#include<stdio.h>


int main(void){
    int n;
    int input_num;
    int i;
    

    printf("Enter the number of shifts: ");
    scanf("%d", &n);

    printf("Enter your number: ");
    scanf("%d", &input_num);

    for (i = 0; i < n; i++) {
        input_num = input_num << 1; //Using bitshift operator for the bitshift
    }

    printf("Your shifted number is: %d\n", input_num);

}