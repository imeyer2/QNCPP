/*
    Author: Ian Meyer
    Contents: Example of prefix and postfix operator differences
*/  

#include<stdio.h>

int main(void){
    int i = 5;
    int j = 5;

    do{
        printf("%d\n", i);
    } while(i-- > 0);
    printf("\n");
    do{
        printf("%d\n", j);
    } while(--j > 0);

    printf("Notice that the first loop printed 0 and the second did not");
}