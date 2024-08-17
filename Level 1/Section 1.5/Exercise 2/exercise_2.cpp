/*
    Author: Ian Meyer
    Contents: Implementation of recursive factorial
*/  

#include<stdio.h>

int factorial(int n){
    if (n == 1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(void){
    int input;
    int ans;

    printf("Enter a number for factorial calculation: ");
    scanf("%d", &input);

    ans = factorial(input);
    printf("The factorial of %d is %d\n", input, ans);

    return 0;

}