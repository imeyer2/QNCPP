#include<stdio.h>


int main(void){
    float user_input;
    float ans;

    printf("Please enter your number: ");
    scanf("%f", &user_input);

    ans = 100 * user_input;

    printf("Your shifted number is %f\n", ans);
}