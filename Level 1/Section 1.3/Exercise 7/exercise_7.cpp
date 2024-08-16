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
        input_num = input_num << 1;
    }

    printf("Your shifted number is: %d\n", input_num);

}